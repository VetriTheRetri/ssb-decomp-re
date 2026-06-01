#!/usr/bin/python3
"""Resolve dangling extern expressions in .c source by consulting the .reloc
file to find the canonical block at each slot's target address.

For each shadow/dangling slot in fid:
  1. Read the .reloc to get the canonical target (block_name [+ offset]).
  2. Find any C expression in the source that uses a DANGLING extern at
     the same slot position. Replace it with `<canonical_block> + offset`
     wrapped in the same cast.

Also rewrites the extern decls: dangling externs become extern decls of
the canonical block (idempotent if already correct).

Usage:
    tools/resolveDanglersByReloc.py <fid> [--version us|jp] [--dry]
    tools/resolveDanglersByReloc.py --all [--version us|jp] [--dry]
"""
import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _nm(o):
    r = subprocess.run(['mips-linux-gnu-nm', o], capture_output=True, text=True)
    out = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd', 'R', 'r', 'B', 'b', 'T', 't'):
            try: out[p[2]] = int(p[0], 16)
            except ValueError: pass
    return out


def _build_global_index(version):
    build = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build')
    idx = {}
    fid_syms = {}
    for fname in os.listdir(build):
        if not fname.endswith('.o'): continue
        try: fid = int(fname[:-2])
        except: continue
        syms = _nm(os.path.join(build, fname))
        sorted_syms = sorted([(o, n) for n, o in syms.items()])
        fid_syms[fid] = sorted_syms
        for n, o in syms.items():
            idx.setdefault(n, (fid, o))
    return idx, fid_syms


def _load_descriptions(version):
    out = {}
    with open(os.path.join(PROJECT_DIR, 'tools', f'relocFileDescriptions.{version}.txt')) as f:
        for ln in f:
            m = re.match(r'^-(\d+):\s+(\S+)', ln)
            if m: out[m.group(2)] = int(m.group(1))
    return out


def _readelf_relocs(o):
    r = subprocess.run(['mips-linux-gnu-readelf', '-r', '-W', o],
                       capture_output=True, text=True)
    out = []
    in_data = False
    for ln in r.stdout.splitlines():
        if ln.startswith('Relocation section'):
            in_data = '.rel.data' in ln
            continue
        if not in_data: continue
        m = re.match(r'^([0-9a-f]+)\s+\S+\s+R_MIPS_32\s+[0-9a-f]+\s+(\S+)', ln)
        if m: out.append((int(m.group(1), 16), m.group(2)))
    return out


def _find_master_c(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if f.startswith(f'{fid}_') and f.endswith('.c'):
            return os.path.join(src, f)
    return None


def _find_reloc(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if (f.startswith(f'{fid}_') and f.endswith('.reloc')
                and '.jp.reloc' not in f and '.us.reloc' not in f):
            return os.path.join(src, f)
    return None


def _find_block_for_byte(fid_syms_sorted, byte_off):
    """Given sorted [(off, name)] for a file, find the (name, inner_offset)
    of the symbol whose address is just at or below `byte_off`.
    Returns (None, 0) if not found.
    """
    last = None
    for off, name in fid_syms_sorted:
        if off > byte_off: break
        last = (off, name)
    if last is None:
        return None, 0
    return last[1], byte_off - last[0]


def resolve_file(fid, version, defined_global, fid_syms, desc_index, dry_run):
    master = _find_master_c(fid)
    rf = _find_reloc(fid)
    if not master or not rf: return 0

    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    local = _nm(o)
    relocs = _readelf_relocs(o)

    # Build set of dangling symbols (referenced in .o, not defined anywhere)
    danglers = set()
    for off, sym in relocs:
        if sym not in local and sym not in defined_global:
            danglers.add(sym)
    if not danglers:
        return 0

    # Parse the .reloc to get target per slot
    reloc_targets = {}  # ptr_byte_offset → (target_label, target_addend)
    with open(rf) as f:
        for ln in f:
            ln_clean = ln.split('#')[0].strip()
            if not ln_clean: continue
            p = ln_clean.split()
            if len(p) != 3: continue
            m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[1])
            if not m or m.group(1) not in local: continue
            ptr_byte = local[m.group(1)] + (int(m.group(2), 16) if m.group(2) else 0)
            tm = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', p[2])
            if not tm: continue
            reloc_targets[ptr_byte] = (tm.group(1), int(tm.group(2), 16) if tm.group(2) else 0)

    # For each dangler, find every slot where it's used in the .o, look up
    # the reloc target, resolve to canonical block + offset.
    dangler_uses = {}  # dangler_sym → list of (ptr_byte_offset, target_label, target_addend)
    for off, sym in relocs:
        if sym in danglers and off in reloc_targets:
            tgt_label, tgt_addend = reloc_targets[off]
            # Resolve target to (fid, byte_offset)
            target_fid_byte = None
            if tgt_label in defined_global:
                t_fid, t_off = defined_global[tgt_label]
                target_fid_byte = (t_fid, t_off + tgt_addend)
            else:
                # Maybe the target itself is a dangler/synthetic; try to find
                # a defined symbol at the same byte address.
                # Use the dangler-name-parsing logic to compute address.
                pass
            if target_fid_byte is None:
                continue
            t_fid, t_byte = target_fid_byte
            # Find the canonical block containing this byte
            block_name, inner_off = _find_block_for_byte(fid_syms[t_fid], t_byte)
            if block_name is None:
                continue
            dangler_uses.setdefault(sym, []).append((off, block_name, inner_off))

    if not dangler_uses:
        return 0

    with open(master) as f:
        text = f.read()

    n_subs = 0
    blocks_to_extern = set()

    # For each dangler, the .c source uses it as `<expr>` (usually
    # `(u8*)dangler + 0xN` or just `dangler` cast). The simplest rewrite is
    # to replace all bare occurrences of the dangler symbol with the
    # CANONICAL BLOCK name + an OFFSET CORRECTION.
    #
    # The slot's intended target byte address is:
    #   target_byte = (compiler-emitted byte at slot) = addend
    # where addend is the value `dangler + N` in the C source.
    #
    # If we replace `dangler` with `canonical_block`, the new value is
    # `canonical_block + N`. For this to equal `target_byte`, we need
    # `canonical_block + N == target_byte`, i.e.
    # `canonical_block_addr + N + dangler_intended_offset == target_byte`.
    # But we don't know `dangler_intended_offset`.
    #
    # Trick: at every USE site, the C source has `dangler + N` and the
    # .reloc says the target is `<block> + <inner_off>`. If we replace
    # `dangler + N` with `<block> + <inner_off>`, the bytes are correct.
    #
    # But the symbol substitution may be ambiguous if `dangler` is used
    # at multiple slots with different `N` values, each mapping to a
    # different canonical block. We can't do a single global rename;
    # we need per-occurrence rewriting.
    #
    # Strategy: for each USE of dangler in the source with the pattern
    # `(SomeType)((u8*)dangler + 0xN)` or `(SomeType)dangler`, look up
    # which slot it corresponds to. We can't easily determine the slot
    # without parsing context — but the .o's R_MIPS_32 against dangler
    # at offset X with in-place addend N corresponds to the C expression
    # `(T)dangler + N` at the C source position for byte X.
    #
    # Since we have the slot byte → canonical block mapping in
    # `dangler_uses[sym]`, and the .c source has one expression per slot,
    # we need to find each expression and rewrite it.
    #
    # Simple approach: count occurrences of `dangler` in C source. If the
    # count of slot uses MATCHES the count of textual occurrences (e.g.
    # via `(u8*)dangler + 0xHHH` pattern), rewrite them in order.

    for sym, uses in dangler_uses.items():
        # Find all expressions of the form `(...)dangler + 0xNNN` or
        # `(...)dangler` (without `+`) in the source.
        # We use a regex that matches the dangler symbol and an optional
        # `+ 0xN` follow-up.
        # Group the matches in source order; map to slot order (sorted by
        # ptr_byte_offset).
        uses_sorted = sorted(uses)
        # Find C expressions: each occurrence of `<sym> + 0xN` or bare sym
        pattern = re.compile(
            rf'\b{re.escape(sym)}\b(?:\s*\+\s*0x([0-9a-fA-F]+))?')
        matches = list(pattern.finditer(text))
        # Filter out matches in the `extern` declaration line for this sym
        filtered = []
        for m in matches:
            # Find the line this match is on
            line_start = text.rfind('\n', 0, m.start()) + 1
            line_end = text.find('\n', m.start())
            line = text[line_start:line_end] if line_end > 0 else text[line_start:]
            if line.lstrip().startswith('extern '): continue
            filtered.append(m)
        if len(filtered) != len(uses_sorted):
            # Count mismatch — can't safely rewrite
            continue
        # Pair them up
        replacements = []
        for m, (slot_off, block_name, inner_off) in zip(filtered, uses_sorted):
            n_offset = int(m.group(1), 16) if m.group(1) else 0
            # The expression has addend N; total addend = dangler_intended + N
            # The .reloc says target = block_name + inner_off
            # So we replace the expression with `block_name + inner_off`,
            # which substitutes the full computed offset.
            # The C textually says `dangler + N` (or bare `dangler`);
            # we replace with `block_name + inner_off`.
            if inner_off == 0:
                new_expr = block_name
            else:
                new_expr = f'(u8 *){block_name} + 0x{inner_off:X}'
            replacements.append((m.start(), m.end(), new_expr))
            blocks_to_extern.add(block_name)
        # Apply replacements in reverse
        replacements.sort(key=lambda r: r[0], reverse=True)
        for s, e, new in replacements:
            text = text[:s] + new + text[e:]
            n_subs += 1
        # Remove the now-unused extern decl for this dangler
        dangler_extern_re = re.compile(
            rf'^\s*extern\s+\S[^;\n]*?\b{re.escape(sym)}\b\s*\[[^\]]*\]\s*;\s*\n',
            re.MULTILINE)
        text, n_removed = dangler_extern_re.subn('', text)

    # Add forward extern decls for any block_to_extern that isn't already
    # declared ABOVE its first use. If an extern decl exists below the first
    # use (the IDO "implicit declaration before extern" trap), capture its
    # type and re-emit at the top with the correct type.
    inc_re = re.search(r'#include\s+"relocdata_types\.h"\s*\n', text)
    insertion_point = inc_re.end() if inc_re else 0

    # Build {sym: full_extern_line_text} for ALL existing externs (so we can
    # re-emit with correct types when hoisting).
    extern_lookup = {}
    for m in re.finditer(
            r'^\s*(extern\s+\S[^;\n]*?\b([A-Za-z_]\w*)\s*\[[^\]]*\]\s*;)\s*\n',
            text, re.MULTILINE):
        extern_lookup.setdefault(m.group(2), (m.group(1), m.start()))
    # Build {sym: definition_start_offset}
    own_defs = {}
    for m in re.finditer(r'^[A-Za-z_]\w*\s+\**\s*([A-Za-z_]\w*)\s*\[?[^=]*\]?\s*=\s*\{',
                         text, re.MULTILINE):
        own_defs.setdefault(m.group(1), m.start())
    # For each block, find first NON-extern reference and ensure an extern
    # decl precedes it.
    lines_to_add = []
    for block in sorted(blocks_to_extern):
        first_use = None
        for m in re.finditer(rf'\b{re.escape(block)}\b', text):
            # Skip occurrences inside extern declaration lines
            line_start = text.rfind('\n', 0, m.start()) + 1
            line_end = text.find('\n', m.start())
            line = text[line_start:line_end] if line_end > 0 else text[line_start:]
            if line.lstrip().startswith('extern '): continue
            first_use = m.start(); break
        if first_use is None: continue
        # Is there an extern at or before insertion_point that precedes first_use?
        ok = False
        for m in re.finditer(rf'^\s*extern\s+\S[^;]*?\b{re.escape(block)}\b\s*\[',
                             text[:first_use], re.MULTILINE):
            ok = True; break
        if ok: continue
        # Need to add. Use existing extern's type if available.
        if block in extern_lookup:
            lines_to_add.append(extern_lookup[block][0])
        elif block in own_defs:
            # Derive type from definition
            def_text = text[own_defs[block]:own_defs[block]+200]
            dm = re.match(r'([A-Za-z_]\w*)\s+(\**)\s*[A-Za-z_]\w*\s*\[([^\]]*)\]', def_text)
            if dm:
                lines_to_add.append(f'extern {dm.group(1)} {dm.group(2)}{block}[];')
            else:
                lines_to_add.append(f'extern u8 {block}[];')
        else:
            lines_to_add.append(f'extern u8 {block}[];')
    if lines_to_add:
        block_text = '\n/* Canonical block decls auto-added by resolveDanglersByReloc.py */\n' + '\n'.join(lines_to_add) + '\n'
        text = text[:insertion_point] + block_text + text[insertion_point:]

    if dry_run:
        print(f'fid={fid}: {n_subs} dangler-expr rewrites (dry)')
        return n_subs

    with open(master, 'w') as f:
        f.write(text)
    print(f'fid={fid}: {n_subs} dangler-expr rewrites')
    return n_subs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int, nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()

    print('Building global symbol index...', file=sys.stderr)
    defined_global, fid_syms = _build_global_index(args.version)
    desc_index = _load_descriptions(args.version)

    if args.all:
        bad = os.path.join(PROJECT_DIR, 'assets', args.version, 'auto_reloc_bad.txt')
        with open(bad) as f:
            fids = [int(x) for x in f if x.strip()]
        total = 0
        for fid in fids:
            try:
                total += resolve_file(fid, args.version, defined_global, fid_syms, desc_index, args.dry) or 0
            except Exception as e:
                print(f'ERR fid={fid}: {e}', file=sys.stderr)
        print(f'Total: {total} rewrites')
    else:
        if args.fid is None: ap.error('fid required')
        resolve_file(args.fid, args.version, defined_global, fid_syms, desc_index, args.dry)


if __name__ == '__main__':
    main()
