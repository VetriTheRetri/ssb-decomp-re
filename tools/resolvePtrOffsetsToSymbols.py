#!/usr/bin/python3
"""Rewrite `(u8*)sym + 0xN` pointer arithmetic to bare block symbols.

For every un-region-guarded `((u8*)sym + 0xN)` expression in a master
.c, resolve `sym`'s offset via build/<v>/relocSymIndex.txt, add N, and
if a symbol exists at EXACTLY that offset in the same fid, replace the
expression with that symbol (preserving the outer cast). Fixes
validator R004 for references whose target block already exists
(including cross-file references).

Usage: resolvePtrOffsetsToSymbols.py <fid...> [--version us] [--dry]
"""
import argparse
import os
import re
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)
import extractRelocInc as eri  # noqa: E402


def load_index(version):
    sym_to = {}
    at = {}
    path = os.path.join(PROJECT_DIR, 'build', version, 'relocSymIndex.txt')
    for ln in open(path):
        p = ln.split()
        if len(p) == 3:
            fid, off = int(p[1]), int(p[2], 16)
            sym_to[p[0]] = (fid, off)
            at.setdefault((fid, off), []).append(p[0])
    return sym_to, at


def resolve_fid(fid, version, sym_to, at, dry=False):
    eri._bind_version(version)
    master = eri.inline_master_for(fid)
    if master is None:
        return 0
    lines = open(master).read().split('\n')
    guarded = set()
    depth = 0
    for i, ln in enumerate(lines):
        s = ln.strip()
        if s.startswith('#if'):
            depth += 1
        elif s.startswith('#endif'):
            depth = max(0, depth - 1)
        elif depth > 0:
            guarded.add(i)

    n = 0
    pat = re.compile(r'\(\(u8\s*\*\)\s*(\w+)\s*\+\s*(0x[0-9A-Fa-f]+)\)')
    for i, ln in enumerate(lines):
        if i in guarded or ln.lstrip().startswith(('extern', '/*', '//', '*')):
            continue

        def rw(m):
            nonlocal n
            sym, off = m.group(1), int(m.group(2), 16)
            if sym not in sym_to:
                return m.group(0)
            tfid, base = sym_to[sym]
            cands = at.get((tfid, base + off), [])
            # Prefer a candidate sharing the file prefix; require uniqueness.
            if len(cands) > 1:
                pref = [c for c in cands if c.split('_')[0] == sym.split('_')[0]]
                cands = pref if len(pref) == 1 else cands
            if len(cands) != 1:
                return m.group(0)
            n += 1
            if dry:
                print(f'  {sym}+0x{off:X} -> {cands[0]}')
            return cands[0]

        lines[i] = pat.sub(rw, ln)

    if not dry and n:
        open(master, 'w').write('\n'.join(lines))
    print(f'fid {fid}: {n} rewrite(s){" [dry]" if dry else ""}')
    return n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', type=int, nargs='+')
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    sym_to, at = load_index(args.version)
    for fid in args.fids:
        resolve_fid(fid, args.version, sym_to, at, args.dry)


if __name__ == '__main__':
    main()
