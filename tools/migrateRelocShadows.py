#!/usr/bin/python3
"""Migrate "shadow" .reloc entries to typed pointer expressions in C source.

A "shadow" entry is an extern/intern row in a .reloc file whose ptr byte
offset is NOT present in the .o's .rel.data — i.e. the C source has a
NULL or zero literal at that slot, and fixRelocChain patches it at link
time. Replacing the literal with a typed pointer expression makes the
compiler emit an R_MIPS_32, after which the .o-driven `fixRelocChain
--auto` reproduces the same chain without the .reloc.

Conservative approach: only rewrites slots that contain `NULL,` or
`(SomeType*)0,` literals inside top-level array initializers whose
element size we can confirm is 4 bytes. Leaves everything else alone
and reports it.

Usage:
    tools/migrateRelocShadows.py <fid> [--dry] [--version us|jp]
"""
import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def _nm(o):
    return subprocess.run(['mips-linux-gnu-nm', o], capture_output=True, text=True).stdout


def _readelf_relocs(o):
    r = subprocess.run(['mips-linux-gnu-readelf', '-r', '-W', o],
                       capture_output=True, text=True).stdout
    offs = set()
    in_data = False
    for ln in r.splitlines():
        if ln.startswith('Relocation section'):
            in_data = '.rel.data' in ln or '.rela.data' in ln
            continue
        if not in_data: continue
        m = re.match(r'^([0-9a-f]+)\s+\S+\s+R_MIPS_32', ln)
        if m: offs.add(int(m.group(1), 16))
    return offs


def _build_global_index(version):
    BUILD = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build')
    idx = {}
    for fname in os.listdir(BUILD):
        if not fname.endswith('.o'): continue
        try: fid = int(fname[:-2])
        except: continue
        for ln in _nm(f'{BUILD}/{fname}').splitlines():
            p = ln.split()
            if len(p) >= 3 and p[1] in ('D', 'd', 'R', 'r', 'B', 'b', 'T', 't'):
                idx.setdefault(p[2], (fid, int(p[0], 16)))
    return idx


def _local_defs(o):
    """{ symbol: byte_offset } for D-class symbols in this .o."""
    out = {}
    for ln in _nm(o).splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ('D', 'd'):
            out[p[2]] = int(p[0], 16)
    return out


def _parse_reloc(rf, local):
    """Returns list of (byte_off, kind, ptr_label, target_label)."""
    out = []
    with open(rf) as f:
        for ln in f:
            ln = ln.split('#')[0].strip()
            if not ln: continue
            p = ln.split()
            if len(p) != 3: continue
            kind, ptr, tgt = p
            m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', ptr)
            if not m: continue
            base = m.group(1)
            offs = int(m.group(2), 16) if m.group(2) else 0
            if base not in local: continue
            out.append((local[base] + offs, kind, ptr, tgt))
    return out


def _find_reloc_path(fid):
    """Return the first existing shared .reloc path for fid (skip JP override)."""
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if (f.startswith(f'{fid}_') and f.endswith('.reloc')
                and '.jp.reloc' not in f and '.us.reloc' not in f):
            return os.path.join(src, f)
    return None


def _find_master_c(fid):
    src = os.path.join(PROJECT_DIR, 'src', 'relocData')
    for f in os.listdir(src):
        if f.startswith(f'{fid}_') and f.endswith('.c'):
            return os.path.join(src, f)
    return None


def _resolve_target(tgt_label, global_idx):
    """Return (symbol, addend, type_hint) or None.

    type_hint is a best-effort C type name for casting.
    """
    m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', tgt_label)
    if not m: return None
    name = m.group(1)
    addend = int(m.group(2), 16) if m.group(2) else 0
    type_hint = 'void *'
    if '_Vtx' in name: type_hint = 'Vtx *'
    elif '_DL' in name or '_Gfx' in name: type_hint = 'Gfx *'
    elif '_palette' in name or '_LUT' in name: type_hint = 'u16 *'
    elif '_Tex' in name: type_hint = 'u8 *'
    elif '_DObj' in name: type_hint = 'DObjDesc *'
    elif '_MObjSub' in name: type_hint = 'MObjSub *'
    elif '_AnimJoint' in name: type_hint = 'AnimJoint *'
    elif '_AObjEvent32' in name: type_hint = 'AObjEvent32 *'
    return (name, addend, type_hint)


def _find_decl(text, name):
    """Return (start_idx, body_start_idx, body_end_idx) for `... name[...] = { ... };`.

    Match the most permissive: find `name` followed by `[…] = {`, then
    track braces. Returns None if not found.
    """
    pat = re.compile(rf'\b{re.escape(name)}\b\s*\[[^\]]*\]\s*=\s*\{{', re.MULTILINE)
    m = pat.search(text)
    if not m:
        return None
    body_start = m.end()
    depth = 1
    i = body_start
    while i < len(text) and depth:
        c = text[i]
        if c == '{': depth += 1
        elif c == '}': depth -= 1
        i += 1
    if depth != 0:
        return None
    return (m.start(), body_start, i - 1)


def _split_top_level_items(body):
    """Split a `{ … , … , … }` body into top-level items (handling nested braces)."""
    items = []
    depth = 0
    cur_start = 0
    for i, c in enumerate(body):
        if c in '{[(': depth += 1
        elif c in '}])': depth -= 1
        elif c == ',' and depth == 0:
            items.append((cur_start, i))
            cur_start = i + 1
    last = body[cur_start:].rstrip()
    if last.strip():
        items.append((cur_start, len(body)))
    return items


def migrate_file(fid, version, dry_run):
    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    if not os.path.exists(o):
        print(f'fid={fid}: no .o', file=sys.stderr); return 1
    src_c = _find_master_c(fid)
    rf = _find_reloc_path(fid)
    if not src_c or not rf:
        print(f'fid={fid}: no .c or .reloc; skipping', file=sys.stderr); return 1

    print(f'== fid={fid}  .c={os.path.basename(src_c)}  .reloc={os.path.basename(rf)} ==')

    local = _local_defs(o)
    o_offs = _readelf_relocs(o)
    entries = _parse_reloc(rf, local)
    shadows = [(off, kind, ptr, tgt) for (off, kind, ptr, tgt) in entries if off not in o_offs]
    if not shadows:
        print('  no shadows; nothing to do')
        return 0
    print(f'  {len(shadows)} shadow entries')

    global_idx = _build_global_index(version)

    # Group shadows by their ptr_label base symbol.
    by_base = {}
    for off, kind, ptr, tgt in shadows:
        m = re.match(r'^(.+?)(?:\+0x([0-9a-fA-F]+))?$', ptr)
        base = m.group(1)
        rel = int(m.group(2), 16) if m.group(2) else 0
        by_base.setdefault(base, []).append((rel, tgt, kind))

    with open(src_c) as f:
        text = f.read()

    replacements = []  # (start_pos, end_pos, new_text, info)
    externs_needed = set()
    skipped = []

    for base, lst in sorted(by_base.items()):
        loc = _find_decl(text, base)
        if not loc:
            skipped.append((base, len(lst), 'decl not found'))
            continue
        decl_start, body_start, body_end = loc
        body = text[body_start:body_end]
        items = _split_top_level_items(body)
        if not items:
            skipped.append((base, len(lst), 'empty body'))
            continue
        # Determine element size by item count vs declared array size — we
        # restrict ourselves to 4-byte slot arrays (pointers).
        # Find `name[N]` in the decl header to confirm.
        hdr = text[decl_start:body_start]
        m = re.search(rf'\[\s*(\d+)\s*\]', hdr)
        if not m:
            skipped.append((base, len(lst), 'no array size'))
            continue
        n_items = int(m.group(1))
        # Heuristic: pointer arrays — each item is a bare token (no nested
        # braces). Reject if any item contains '{'.
        is_ptr_array = all('{' not in body[s:e] for s, e in items)
        if not is_ptr_array:
            skipped.append((base, len(lst), 'not a pointer array'))
            continue
        if len(items) != n_items:
            skipped.append((base, len(lst), f'item count {len(items)} != {n_items}'))
            continue

        for rel, tgt, kind in sorted(lst):
            if rel % 4 != 0 or rel // 4 >= len(items):
                skipped.append((base, 1, f'rel 0x{rel:X} out of bounds')); continue
            idx = rel // 4
            s_off, e_off = items[idx]
            item_text = body[s_off:e_off]
            # Only replace if the current value is NULL or zero.
            stripped = item_text.strip()
            if stripped not in ('NULL', '0', '(void *)0', '(void*)0'):
                skipped.append((base, 1, f'slot {idx} has non-null value {stripped!r}')); continue
            r = _resolve_target(tgt, global_idx)
            if not r:
                skipped.append((base, 1, f'cannot resolve target {tgt!r}')); continue
            sym, addend, type_hint = r
            # Determine whether sym is locally defined or external.
            if sym in local:
                new_expr = f'{sym}' if addend == 0 else f'(u8 *){sym} + 0x{addend:X}'
            else:
                if sym not in global_idx:
                    skipped.append((base, 1, f'extern {sym} not found in global index')); continue
                externs_needed.add((sym, type_hint))
                new_expr = sym if addend == 0 else f'(u8 *){sym} + 0x{addend:X}'
            # Preserve leading whitespace from item_text
            lead = item_text[:len(item_text) - len(item_text.lstrip())]
            # body offsets need to be translated to file offsets
            abs_s = body_start + s_off
            abs_e = body_start + e_off
            replacements.append((abs_s, abs_e, lead + new_expr,
                                 f'{base}[{idx}] (off=0x{(local[base] + rel):X}) NULL -> {new_expr}'))

    if not replacements:
        print('  no auto-migratable shadows')
        if skipped:
            print('  skipped:')
            for b, n, reason in skipped[:10]:
                print(f'    {b}: {n} entries — {reason}')
        return 0

    print(f'  {len(replacements)} replacements possible:')
    for s, e, new, info in replacements[:5]:
        print(f'    {info}')

    if dry_run:
        if skipped:
            print(f'  ({len(skipped)} skipped patterns)')
        return 0

    # Apply replacements in reverse order so offsets stay stable.
    replacements.sort(key=lambda r: r[0], reverse=True)
    new_text = text
    for s, e, new, _ in replacements:
        new_text = new_text[:s] + new + new_text[e:]

    # Add extern decls for any extern targets not already declared.
    existing_externs = set()
    for m in re.finditer(r'^\s*extern\s+\S[^;]*?\b(\w+)\s*[\[;]', new_text, re.MULTILINE):
        existing_externs.add(m.group(1))
    extra = []
    for sym, type_hint in sorted(externs_needed):
        if sym not in existing_externs:
            extra.append(f'extern {type_hint}{sym}[];' if type_hint.endswith('*') else
                         f'extern {type_hint} {sym}[];')
    if extra:
        # Insert after the existing include block.
        m = re.search(r'#include "relocdata_types\.h"\s*\n', new_text)
        if m:
            ins = m.end()
            new_text = new_text[:ins] + '\n' + '\n'.join(extra) + '\n' + new_text[ins:]

    with open(src_c, 'w') as f:
        f.write(new_text)
    print(f'  wrote {src_c} ({len(replacements)} edits, {len(extra)} new externs)')
    if skipped:
        print(f'  {len(skipped)} patterns skipped (see --dry for details)')
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fid', type=int)
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    sys.exit(migrate_file(args.fid, args.version, args.dry))


if __name__ == '__main__':
    main()
