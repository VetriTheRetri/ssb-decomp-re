#!/usr/bin/env python3
"""
Retype trailing untyped u8 blocks that hold pre/post-matrix DL pairs
(read by the engine via DObj.dls = Gfx**, see ftDisplayMainDrawDefault
case 1) as `Gfx *X[2*N]` arrays, and rewrite every JointTree-style
DObjDesc.dl that points at `(u8*)<parent> + 0xN` into &<block>[idx]
form.

Detection rule (per file):

    1. Find every `u8 d<File>_..._post[_post...][N]` declaration
       where N % 8 == 0 and the body is a `.data.inc.c` include.
    2. Walk the `.reloc` for entries that land inside the block
       (at file offset `<parent>+<delta>`). Every reloc target must
       resolve to a Gfx-shaped symbol (a `Gfx[]` array, an existing
       `Gfx*` array, or another `*post*` Gfx tail) — otherwise skip
       the block (likely DObjDLLink, AnimJoint, or something else).
    3. Read the parent JointTree DObjDesc[] array's references — every
       `(u8*)<parent> + 0xN` cast that lands inside the block proves
       the 8-byte stride and confirms the type.

Conversion:

    * Replace the `u8 X[N]` declaration with a typed
      `Gfx *X[N/4] = { ... };` initializer. NULL slots stand in for
      the 4-byte zero gaps; the rest are the resolved Gfx*
      references from the `.reloc`.
    * Rewrite each matching DObjDesc.dl cast from
      `(void*)((u8*)<parent> + 0xM)` to
      `(void*)&X[(M - block_off) / 4]`. The bare-symbol-cast form
      `(void*)(X)` collapses to `(void*)X` (start of the array).

The conversion is byte-identical: the storage layout is unchanged,
only the C type and how callers reference into it.
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_OBJ_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData", ".build")


def nm_symbols(fid):
    """{symbol_name: file_offset} from compiled .o."""
    obj = os.path.join(BUILD_OBJ_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        return {}
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            off = int(p[0], 16)
            name = p[2]
            syms[name] = off
    return syms


def parse_reloc(reloc_path):
    """Parse `.reloc` lines into a list of (kind, ptr_sym, ptr_off, tgt_sym, tgt_off)."""
    if not os.path.exists(reloc_path):
        return []

    def parse_term(s):
        m = re.match(r'^([A-Za-z_]\w*)(?:\+(0x[0-9A-Fa-f]+|\d+))?$', s)
        if not m:
            return s, 0
        sym = m.group(1)
        off = int(m.group(2), 0) if m.group(2) else 0
        return sym, off

    out = []
    with open(reloc_path) as f:
        for ln in f:
            ln = ln.split('#', 1)[0].strip()
            if not ln:
                continue
            parts = ln.split()
            if len(parts) < 3:
                continue
            kind = parts[0]
            psym, poff = parse_term(parts[1])
            tsym, toff = parse_term(parts[2])
            out.append((kind, psym, poff, tsym, toff))
    return out


_CMT_RE = re.compile(r'(/\*.*?\*/|//[^\n]*)', re.DOTALL)


def strip_comments(s):
    return _CMT_RE.sub(lambda m: ' ' * len(m.group(0)) if '\n' not in m.group(0)
                        else ''.join(' ' if c != '\n' else '\n' for c in m.group(0)), s)


def find_typed_decls(c_text):
    """Return [(name, start_idx, end_idx, type, count_or_None, body, is_inc_include)]
    for every top-level typed declaration."""
    text = strip_comments(c_text)
    out = []
    decl_re = re.compile(
        r'^(?P<type>\w+)\s+(?P<ptr>\*+\s*)?(?P<name>d\w+)\s*'
        r'(?:\[\s*(?P<count>\w*)\s*\])?'
        r'(?:\[\s*\w*\s*\])?\s*=\s*\{',
        re.MULTILINE)
    for m in decl_re.finditer(text):
        # Find matching close brace
        depth = 1
        i = m.end()
        while i < len(text):
            if text[i] == '{':
                depth += 1
            elif text[i] == '}':
                depth -= 1
                if depth == 0:
                    break
            i += 1
        if depth != 0:
            continue
        # Skip past `} ;`
        end = i + 1
        while end < len(text) and text[end] in ' \t':
            end += 1
        if end < len(text) and text[end] == ';':
            end += 1
        body = c_text[m.start():end]
        is_inc = '#include' in body and '.inc.c' in body
        count = int(m.group('count'), 0) if m.group('count') and m.group('count').strip() else None
        out.append({
            'type': m.group('type'),
            'is_ptr': bool(m.group('ptr')),
            'name': m.group('name'),
            'count': count,
            'start': m.start(),
            'end': end,
            'body': body,
            'inc_include': is_inc,
        })
    return out


def find_block_size(decls, name):
    """Look up declaration by name and return its byte size."""
    for d in decls:
        if d['name'] != name:
            continue
        if d['type'] == 'u8':
            return d['count'] or 0
        if d['type'] == 'Gfx':
            return (d['count'] or 0) * 8
        if d['type'] == 'Vtx':
            return (d['count'] or 0) * 16
        if d['type'] == 'u16':
            return (d['count'] or 0) * 2
        if d['type'] == 'u32':
            return (d['count'] or 0) * 4
        if d['type'] == 'DObjDLLink':
            return (d['count'] or 0) * 8
        if d['type'] == 'DObjDesc':
            return (d['count'] or 0) * 44
    return None


def is_gfx_target(decls, sym):
    """A reloc target is Gfx-shaped if it's already typed Gfx[] /
    Gfx *[] / DObjDLLink, OR named like a DL/post symbol."""
    for d in decls:
        if d['name'] != sym:
            continue
        if d['type'] == 'Gfx':
            return True
        if d['is_ptr'] and d['type'] == 'Gfx':
            return True
        return False  # other typed symbols: not Gfx
    return False  # unknown symbol


def convert_file(c_path, dry_run=False, verbose=False):
    """Convert one file. Returns (n_blocks_typed, n_jointtree_refs_rewritten)."""
    fid = int(os.path.basename(c_path).split('_', 1)[0])
    fname = os.path.basename(c_path)
    reloc_path = c_path[:-2] + '.reloc'

    with open(c_path) as f:
        text = f.read()

    decls = find_typed_decls(text)
    relocs = parse_reloc(reloc_path)
    syms = nm_symbols(fid)

    # Build {file_offset: symbol_name} for named-symbol lookup. When two
    # symbols share an offset (declared back-to-back), prefer the longer
    # name (more specific).
    syms_by_off = {}
    for sym, off in syms.items():
        if off in syms_by_off and len(syms_by_off[off]) >= len(sym):
            continue
        syms_by_off[off] = sym

    # Build a quick lookup for pointer symbol layout in source order
    decls_by_name = {d['name']: d for d in decls}

    # Find candidate u8 blocks. Must be a Joint chain tail with at
    # least two `_post` levels (`Joint_0xNNNN_post_post[_post...]`),
    # size % 8 == 0, body is a .data.inc.c include. The two-level
    # filter excludes the single-level `_post` which is a Gfx-tail
    # naming convention used by the splitter — those are real DL
    # tails, not 8-byte DL pair arrays.
    candidates = []
    for d in decls:
        if d['type'] != 'u8' or d['is_ptr']:
            continue
        if not d['inc_include']:
            continue
        if not d['count'] or d['count'] % 8 != 0:
            continue
        if not derive_parent(d['name']):
            continue
        candidates.append(d)

    if not candidates:
        return (0, 0)

    n_blocks = 0
    n_refs = 0
    edits = []  # (start, end, new_text)

    for cand in candidates:
        block_name = cand['name']
        block_off = syms.get(block_name)
        if block_off is None:
            if verbose:
                print(f"  skip {block_name}: nm offset unknown", file=sys.stderr)
            continue
        size = cand['count']

        # Walk relocs that land inside this block (using file offsets)
        in_block = []
        for kind, psym, poff, tsym, toff in relocs:
            if kind != 'intern':
                continue
            psym_off = syms.get(psym)
            if psym_off is None:
                continue
            ptr_byte = psym_off + poff
            local_off = ptr_byte - block_off
            if 0 <= local_off < size:
                # delta into block
                in_block.append((local_off, tsym, toff))

        if not in_block:
            if verbose:
                print(f"  skip {block_name}: no relocs", file=sys.stderr)
            continue

        # Verify alignment + that all relocs land at 4-byte slots
        if any(o % 4 != 0 for o, _, _ in in_block):
            if verbose:
                print(f"  skip {block_name}: misaligned reloc", file=sys.stderr)
            continue

        # Verify that every target is Gfx-shaped (or known parent post Gfx)
        bad = []
        for o, tsym, toff in in_block:
            if not is_gfx_target(decls, tsym):
                bad.append((o, tsym, toff))
        if bad:
            if verbose:
                print(f"  skip {block_name}: non-Gfx targets {bad[:3]}", file=sys.stderr)
            continue

        # Build the slot table. Each 4-byte slot is either a reloc'd
        # pointer or NULL (zeros). Resolve <sym>+<off> targets to a
        # bare named symbol when nm has one at exactly that offset.
        n_slots = size // 4
        slots = [None] * n_slots
        for o, tsym, toff in in_block:
            slot = o // 4
            tsym_off = syms.get(tsym)
            if tsym_off is not None and toff != 0:
                tgt_byte = tsym_off + toff
                named = syms_by_off.get(tgt_byte)
                if named is not None:
                    tsym, toff = named, 0
            slots[slot] = (tsym, toff)

        # Verify the 8-byte stride pattern: every pair (slot 2k, 2k+1)
        # should have at least one non-NULL. (Actually it could be all
        # NULL for a no-draw joint, but there's always SOMETHING at
        # the dls[1] slot in the patterns we've seen.) Don't strictly
        # require this — just record.
        # Build new initializer text.
        new_init = build_initializer(block_name, slots, fname)

        # Replace the declaration.
        edits.append((cand['start'], cand['end'], new_init))
        n_blocks += 1

        # Rewrite DObjDesc references that point at (u8*)<parent> + 0xN
        # where the resulting byte offset lands inside this block.
        # Find the parent symbol — it's the symbol the JointTree casts go
        # through. Conventionally, that's the FIRST `_post` in the chain
        # (e.g. Joint_0x6738_post when block is Joint_0x6738_post_post_post).
        parent_chain = derive_parent(block_name)
        if not parent_chain:
            continue
        parent_off = syms.get(parent_chain)
        if parent_off is None:
            continue
        offset_in_parent = block_off - parent_off
        if offset_in_parent < 0:
            continue

        ref_re = re.compile(
            r'\(u8\*\)' + re.escape(parent_chain) +
            r'\s*\+\s*(0x[0-9A-Fa-f]+|\d+)')
        bare_re = re.compile(r'\((' + re.escape(block_name) + r')\)')

        def repl_off(m):
            nonlocal n_refs
            delta = int(m.group(1), 0)
            local = delta - offset_in_parent
            if 0 <= local < size and local % 4 == 0:
                idx = local // 4
                n_refs += 1
                return f'&{block_name}[{idx}]'
            return m.group(0)

        text2 = ref_re.sub(repl_off, text)
        text2 = bare_re.sub(block_name, text2)
        if text2 != text:
            text = text2

    # Now apply edits in reverse order so offsets stay valid.
    edits.sort(key=lambda e: e[0], reverse=True)
    for start, end, new in edits:
        # Need to re-find the block in updated text since we already
        # ran the ref_re / bare_re substitutions — but those are
        # outside the candidate ranges, so the start/end positions
        # are still valid? Actually yes, because the ref subs happen
        # in the JointTree which is at a different place than the
        # candidate decls. The replacements grow/shrink the JointTree
        # body but happen AFTER the decls. Sort by start desc so
        # later edits don't shift earlier ones.
        text = text[:start] + new + text[end:]

    if dry_run:
        print(f"{fname}: would type {n_blocks} block(s), rewrite {n_refs} ref(s)")
        return (n_blocks, n_refs)

    if n_blocks > 0:
        with open(c_path, 'w') as f:
            f.write(text)
        print(f"{fname}: typed {n_blocks} block(s), rewrote {n_refs} ref(s)")

    return (n_blocks, n_refs)


_PARENT_RE = re.compile(r'^(d\w+_Joint_0x[0-9A-Fa-f]+_post)(?:_post)+$')


def derive_parent(block_name):
    """For 'dXxx_Joint_0xNNNN_post_post_post', return 'dXxx_Joint_0xNNNN_post'.
    For deeper chains (post_post_post_post_post), return the bare ..._post
    (the FIRST _post). Returns None for any other naming."""
    m = _PARENT_RE.match(block_name)
    if m:
        return m.group(1)
    return None


def build_initializer(block_name, slots, fname):
    """Produce the typed `Gfx *X[N] = { ... };` text."""
    n = len(slots)
    lines = []
    lines.append(
        '/* DObj.dls pre/post-matrix DL pairs ({} pairs, {} bytes).'.format(
            n // 2, n * 4))
    lines.append(
        ' * Each 2-slot { dls[0], dls[1] } is the target of one DObjDesc.dl;')
    lines.append(
        ' * dls[0] (when non-NULL) draws before gcPrepDObjMatrix, dls[1] after.')
    lines.append(
        ' * See ftDisplayMainDrawDefault case 1. */')
    lines.append('Gfx *{}[{}] = {{'.format(block_name, n))
    for i in range(0, n, 2):
        a = slots[i]
        b = slots[i + 1]

        def render(s):
            if s is None:
                return 'NULL'
            tsym, toff = s
            if toff == 0:
                return tsym
            return f'(Gfx *)((u8 *){tsym} + 0x{toff:X})'

        ra = render(a)
        rb = render(b)
        lines.append('\t{:<48s} {},'.format(ra + ',', rb))
    lines.append('};')
    return '\n'.join(lines)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('files', nargs='+', help='paths to .c files (or fids)')
    ap.add_argument('--dry-run', action='store_true')
    ap.add_argument('--verbose', '-v', action='store_true')
    args = ap.parse_args()

    paths = []
    for arg in args.files:
        if arg.endswith('.c'):
            paths.append(arg if os.path.isabs(arg) else
                         os.path.join(PROJECT_DIR, arg))
        else:
            # Treat as fid
            try:
                fid = int(arg)
            except ValueError:
                print(f"Bad arg: {arg}", file=sys.stderr)
                sys.exit(1)
            for fn in os.listdir(SRC_DIR):
                if fn.startswith(f'{fid}_') and fn.endswith('.c') and '.jp.' not in fn:
                    paths.append(os.path.join(SRC_DIR, fn))
                    break

    total_blocks = 0
    total_refs = 0
    for p in paths:
        try:
            b, r = convert_file(p, dry_run=args.dry_run, verbose=args.verbose)
            total_blocks += b
            total_refs += r
        except Exception as e:
            print(f"{p}: error: {e}", file=sys.stderr)
            raise

    print(f"\nTotal: {total_blocks} blocks typed, {total_refs} refs rewritten")


if __name__ == '__main__':
    main()
