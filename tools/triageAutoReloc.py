#!/usr/bin/python3
"""Triage auto-reloc mismatches: for each bad fid, classify WHY --auto
output diverges from the baserom binary.

Classes:
  MISSING  - slot is on a baserom chain but the .o has no reloc record
             there (C source holds a raw value where a pointer belongs)
  EXTRA    - .o has a reloc record at a slot that is on neither baserom
             chain (C source holds a pointer where a raw value belongs)
  TARGET   - slot present in both, but the resolved target word differs
             (wrong symbol/addend in the C source)
  CLASS    - slot present in both but on the other chain (intern/extern
             classification differs; only possible via heuristic fallback)

For each finding the enclosing symbol (from nm) is printed so the fix
lands in the right declaration.

Usage: triageAutoReloc.py --version us [fid ...]
       (no fids: read build/<v>/auto_reloc_bad.txt)
"""
import argparse
import bisect
import os
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)
import fixRelocChain as frc  # noqa: E402


def _sym_map(obj_path):
    """Sorted (offset, name) list of defined symbols for enclosing lookup."""
    defined, _ = frc.read_symbol_classes(obj_path)
    rows = sorted((off, name) for name, off in defined.items())
    return [r[0] for r in rows], rows


def enclosing(offs, rows, off):
    i = bisect.bisect_right(offs, off) - 1
    if i < 0:
        return f'<file>+0x{off:X}'
    base_off, name = rows[i]
    d = off - base_off
    return f'{name}+0x{d:X}' if d else name


def triage_fid(version, fid):
    o = os.path.join(PROJECT_DIR, 'build', version, 'src', 'relocData', '.build', f'{fid}.o')
    if not os.path.exists(o):
        return None
    bin_dir = os.path.join(PROJECT_DIR, 'assets', version, 'relocData')
    orig = None
    for ext in ('vpk0.bin', 'bin'):
        p = os.path.join(bin_dir, f'{fid}.{ext}')
        if os.path.exists(p):
            orig = p
            break
    if orig is None:
        return None
    data = open(orig, 'rb').read()

    i_set, e_set = frc._walk_baserom_chains(version, fid)
    if i_set is None:
        return {'fid': fid, 'error': 'no baserom chain info'}
    chained = i_set | e_set

    intern, extern, unres, _diags, _fidmm, _claims = frc.derive_entries_from_obj(o, version, strict=False, fid=fid)
    auto = {off: tgt for off, tgt in intern + extern}
    reloc_offs = set(auto)

    offs, rows = _sym_map(o)
    findings = []
    for off in sorted(chained - reloc_offs):
        word = struct.unpack('>I', data[off:off + 4])[0]
        tgt = (word & 0xFFFF) * 4
        findings.append(('MISSING', off, f'{enclosing(offs, rows, off)} should point to {enclosing(offs, rows, tgt)} (0x{tgt:X})'))
    for off in sorted(reloc_offs - chained):
        findings.append(('EXTRA', off, f'{enclosing(offs, rows, off)} has a pointer; baserom has raw 0x{struct.unpack(">I", data[off:off+4])[0]:08X}'))
    for off in sorted(chained & reloc_offs):
        word = struct.unpack('>I', data[off:off + 4])[0]
        want = (word & 0xFFFF) * 4
        if auto[off] != want:
            findings.append(('TARGET', off,
                             f'{enclosing(offs, rows, off)}: auto -> {enclosing(offs, rows, auto[off])} (0x{auto[off]:X}), '
                             f'baserom -> {enclosing(offs, rows, want)} (0x{want:X})'))
    for off, sym in unres:
        findings.append(('UNRES', off, f'{enclosing(offs, rows, off)} -> {sym} (dangling extern)'))
    return {'fid': fid, 'findings': findings}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('fids', nargs='*', type=int)
    ap.add_argument('--summary', action='store_true', help='per-fid class counts only')
    args = ap.parse_args()

    sym_index = os.path.join(PROJECT_DIR, 'build', args.version, 'relocSymIndex.txt')
    if os.path.exists(sym_index):
        frc.set_sym_index_path(sym_index)

    fids = args.fids
    if not fids:
        bad = os.path.join(PROJECT_DIR, 'build', args.version, 'auto_reloc_bad.txt')
        fids = [int(x) for x in open(bad).read().split()]

    totals = {}
    for fid in fids:
        r = triage_fid(args.version, fid)
        if r is None:
            print(f'=== fid {fid}: SKIP (no .o or original)')
            continue
        if 'error' in r:
            print(f'=== fid {fid}: {r["error"]}')
            continue
        counts = {}
        for cls, _, _ in r['findings']:
            counts[cls] = counts.get(cls, 0) + 1
            totals[cls] = totals.get(cls, 0) + 1
        cstr = ' '.join(f'{k}={v}' for k, v in sorted(counts.items()))
        print(f'=== fid {fid}: {cstr if cstr else "CLEAN (chain threading only?)"}')
        if not args.summary:
            for cls, off, msg in r['findings']:
                print(f'  {cls:8s} 0x{off:06X}  {msg}')
    print('\n=== totals:', ' '.join(f'{k}={v}' for k, v in sorted(totals.items())))


if __name__ == '__main__':
    main()
