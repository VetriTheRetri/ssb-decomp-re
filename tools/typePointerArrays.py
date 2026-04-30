#!/usr/bin/env python3
"""
Retype `u8 X[N*4]` blocks that hold a flat pointer array (every reloc
inside lands at a 4-byte slot, every target is a known symbol, every
non-reloc'd slot is zero) as `Type *X[N]` initialisers.

Heuristic for picking the element type:

    1. If every reloc target is a `u8 ...[120]` block, use `MObjSub *`
       (size + naming match the MObjSub layout — the typed targets the
       file already has elsewhere use this same pattern).
    2. If every reloc target is itself a `Type *...[]` decl, the slot
       holds a `Type **` — use `Type *` (one less star, matching the
       in-file convention shown by gap_0x0000 etc.).
    3. Otherwise skip — the block is heterogeneous (mix of structures,
       gfx, etc.) and needs hand-typing.

Conservative:
  - Only convert blocks whose name has *not* already been retyped
    (still `u8` with `.data.inc.c` include).
  - Skip if any reloc lands at a non-4-aligned offset.
  - Skip if any reloc has a target outside the C file's symbol table.
  - Block size must be exact multiple of 4 with at least 1 reloc and
    no other content (only the .data.inc.c include).
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_OBJ = os.path.join(PROJECT_DIR, "build", "src", "relocData", ".build")
ASSETS = os.path.join(PROJECT_DIR, "assets", "relocData")


def baserom_bytes(fid):
    """Return the decompressed baserom bytes for `fid`."""
    p1 = os.path.join(ASSETS, f"{fid}.vpk0.bin")
    p2 = os.path.join(ASSETS, f"{fid}.bin")
    p = p1 if os.path.exists(p1) else p2
    return open(p, 'rb').read() if os.path.exists(p) else b''


def nm_symbols(fid):
    obj = os.path.join(BUILD_OBJ, f"{fid}.o")
    if not os.path.exists(obj):
        return {}
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    return syms


def parse_reloc(reloc_path):
    if not os.path.exists(reloc_path):
        return []

    def parse_term(s):
        m = re.match(r'^([A-Za-z_]\w*)(?:\+(0x[0-9A-Fa-f]+|\d+))?$', s)
        if not m:
            return None, 0
        return m.group(1), int(m.group(2), 0) if m.group(2) else 0

    out = []
    for ln in open(reloc_path):
        ln = ln.split('#', 1)[0].strip()
        if not ln:
            continue
        parts = ln.split()
        if len(parts) < 3 or parts[0] != 'intern':
            continue
        psym, poff = parse_term(parts[1])
        tsym, toff = parse_term(parts[2])
        if psym is None or tsym is None:
            continue
        out.append((psym, poff, tsym, toff))
    return out


_DECL_RE = re.compile(
    r'(?P<lead>(?:^[ \t]*/\*[^\n]*\*/[ \t]*\n)*)'
    r'^(?P<full>u8\s+(?P<sym>d\w+)\[(?P<count>\d+)\]\s*=\s*\{\s*'
    r'#include\s+<(?P<inc>[^>]+\.data\.inc\.c)>\s*\};)',
    re.MULTILINE)


def find_typed_targets(text):
    """Return {sym: ('Gfx'|'Vtx'|'MObjSub'|'pointer-array'|'Tex'|'palette'|'u8_120'|'other', count_or_None)}."""
    out = {}
    for m in re.finditer(
            r'^(?P<type>\w+)\s+(?P<ptr>\*+\s*)?(?P<name>d\w+)'
            r'\s*\[(?P<count>\d+)?\]\s*=\s*\{',
            text, re.MULTILINE):
        t = m.group('type')
        sym = m.group('name')
        cnt = int(m.group('count')) if m.group('count') else None
        is_ptr = bool(m.group('ptr'))
        if is_ptr:
            out[sym] = ('pointer-array', cnt, t)
        elif t == 'Gfx':
            out[sym] = ('Gfx', cnt, t)
        elif t == 'Vtx':
            out[sym] = ('Vtx', cnt, t)
        elif t == 'MObjSub':
            out[sym] = ('MObjSub', cnt, t)
        elif t == 'u8' and cnt == 120:
            out[sym] = ('u8_120', cnt, t)  # MObjSub-sized blob
        else:
            out[sym] = ('other', cnt, t)
    return out


def convert(c_path, dry_run=False, verbose=False):
    fid = int(os.path.basename(c_path).split('_', 1)[0])
    text = open(c_path).read()
    rpath = c_path[:-2] + '.reloc'
    relocs = parse_reloc(rpath)
    syms = nm_symbols(fid)
    typed = find_typed_targets(text)
    bin_bytes = baserom_bytes(fid)

    # Group relocs by source symbol
    by_psym = {}
    for psym, poff, tsym, toff in relocs:
        by_psym.setdefault(psym, []).append((poff, tsym, toff))

    # Find candidate decls
    edits = []
    for m in _DECL_RE.finditer(text):
        sym = m.group('sym')
        n_bytes = int(m.group('count'))
        if n_bytes < 4 or n_bytes % 4 != 0:
            continue
        n_slots = n_bytes // 4
        rs = by_psym.get(sym, [])
        if not rs:
            continue
        # All reloc offsets must land at 4-aligned slots within the block
        if any(o % 4 != 0 or o + 4 > n_bytes for o, _, _ in rs):
            continue
        # All reloc targets must resolve to known symbols in this file
        if any(t not in syms for _, t, _ in rs):
            if verbose:
                print(f"  skip {sym}: unresolved target", file=sys.stderr)
            continue
        # Every NON-reloc'd 4-byte slot must be zero in the baserom.
        # If not, the block has interleaved integer data (e.g.
        # DObjDLLink list_id values) and isn't a pure pointer array.
        block_off = syms.get(sym)
        if block_off is not None and bin_bytes:
            reloc_offs = {o for o, _, _ in rs}
            non_zero_slot = None
            for slot in range(0, n_bytes, 4):
                if slot in reloc_offs:
                    continue
                word = bin_bytes[block_off + slot:block_off + slot + 4]
                if len(word) == 4 and word != b'\x00\x00\x00\x00':
                    non_zero_slot = (slot, word.hex())
                    break
            if non_zero_slot is not None:
                if verbose:
                    print(f"  skip {sym}: non-zero gap at +0x{non_zero_slot[0]:X} = 0x{non_zero_slot[1]}",
                          file=sys.stderr)
                continue
        # Determine element type from target shapes
        target_kinds = set()
        for _, t, _ in rs:
            tk = typed.get(t)
            if tk is None:
                target_kinds.add('unknown')
            else:
                target_kinds.add(tk[0])
        if target_kinds <= {'u8_120'}:
            elem_type = 'MObjSub'
        elif target_kinds <= {'pointer-array'}:
            elem_type = 'MObjSub'  # an outer table of MObjSub** -> typed as MObjSub *
        elif target_kinds <= {'Gfx'}:
            elem_type = 'Gfx'
        elif target_kinds <= {'Vtx'}:
            elem_type = 'Vtx'
        else:
            if verbose:
                print(f"  skip {sym}: heterogeneous targets {target_kinds}", file=sys.stderr)
            continue

        # Build the slot array
        slot_to_target = {o // 4: (t, off) for o, t, off in rs}
        slot_lines = []
        for i in range(n_slots):
            if i in slot_to_target:
                t, off = slot_to_target[i]
                if off == 0:
                    slot_lines.append(f"\t({elem_type} *){t},")
                else:
                    slot_lines.append(
                        f"\t({elem_type} *)((u8 *){t} + 0x{off:X}),")
            else:
                slot_lines.append(f"\tNULL,")
        body = '\n'.join(slot_lines)
        new_decl = (
            f"{elem_type} *{sym}[{n_slots}] = {{\n{body}\n}};"
        )
        edits.append((m.start('full'), m.end('full'), new_decl, sym))

    if not edits:
        return 0

    if dry_run:
        for s, e, n, sym in edits:
            print(f"  would type: {sym}")
        print(f"{os.path.basename(c_path)}: {len(edits)} block(s) typeable")
        return 0

    edits.sort(key=lambda x: x[0], reverse=True)
    for s, e, n, sym in edits:
        text = text[:s] + n + text[e:]
    with open(c_path, 'w') as f:
        f.write(text)
    print(f"{os.path.basename(c_path)}: typed {len(edits)} block(s)")
    return len(edits)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('files', nargs='+')
    ap.add_argument('--dry-run', action='store_true')
    ap.add_argument('-v', '--verbose', action='store_true')
    args = ap.parse_args()

    paths = []
    for arg in args.files:
        if arg.endswith('.c'):
            paths.append(arg if os.path.isabs(arg) else
                         os.path.join(PROJECT_DIR, arg))
        else:
            for fn in os.listdir(SRC):
                if fn.startswith(f'{arg}_') and fn.endswith('.c') and '.jp.' not in fn:
                    paths.append(os.path.join(SRC, fn))

    total = 0
    for p in paths:
        try:
            total += convert(p, dry_run=args.dry_run, verbose=args.verbose)
        except Exception as e:
            print(f"{p}: {e}", file=sys.stderr)
            raise
    print(f"\nTotal: {total} block(s)")


if __name__ == '__main__':
    main()
