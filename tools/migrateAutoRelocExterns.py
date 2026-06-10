#!/usr/bin/python3
"""One-time migration: insert the extern decls that symbolized .dl.inc.c
files need into the committed master .c files.

extractRelocInc.py now substitutes chain-encoded pointer words inside Gfx
blocks with symbolic expressions. Targets defined EARLIER in the same
master compile as-is; targets defined LATER (forward refs) or in another
relocData file (cross-file refs) need an `extern` decl above the block
that includes the .dl.inc.c. This script computes exactly that set per
fid and inserts the decls via hoistExterns (which derives each type from
the symbol's real definition — no guessing).

Usage: migrateAutoRelocExterns.py --version us [fid ...]
       (no fids: read build/<v>/auto_reloc_bad.txt)
"""
import argparse
import os
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)

import extractRelocInc as eri
import hoistExterns


def migrate_fid(fid, dry=False):
    master = eri.inline_master_for(fid)
    if master is None:
        return None  # spritelist-driven; generated master regenerates anyway
    binp = eri.bin_path(fid)
    if binp is None:
        return None
    with open(binp, 'rb') as f:
        data = f.read()
    try:
        entries = eri.parse_master_c(master)
    except SystemExit:
        return None

    blocks = []
    offset = 0
    for kind, payload in entries:
        if kind == 'pad':
            offset += payload
            continue
        if offset % 4 != 0:
            offset += 4 - (offset % 4)
        blocks.append((offset, payload))
        offset += payload['size']

    chain_slots = eri.build_chain_slots(fid, data)
    if not chain_slots:
        return 0

    def_order = {}
    for idx, (off, payload) in enumerate(blocks):
        def_order.setdefault(payload['name'], idx)

    needed = set()
    for idx, (off, payload) in enumerate(blocks):
        inc = payload.get('inc_path') or ''
        if payload.get('type') != 'Gfx' or not inc.endswith('.dl.inc.c'):
            continue
        for slot_off in range(off, off + payload['size'], 4):
            hit = chain_slots.get(slot_off)
            if not hit:
                continue
            sym = hit[0]
            if sym not in def_order or def_order[sym] > idx:
                needed.add(sym)

    if not needed:
        return 0
    with open(master) as f:
        text = f.read()
    new_text = hoistExterns.hoist_or_add_externs(text, needed)
    if new_text != text and not dry:
        with open(master, 'w') as f:
            f.write(new_text)
    return len(needed) if new_text != text else 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--version', default='us', choices=('us', 'jp'))
    ap.add_argument('fids', nargs='*', type=int)
    ap.add_argument('--dry', action='store_true')
    args = ap.parse_args()
    eri._bind_version(args.version)

    fids = args.fids
    if not fids:
        bad = os.path.join(PROJECT_DIR, 'build', args.version, 'auto_reloc_bad.txt')
        fids = [int(x) for x in open(bad).read().split()]

    total = 0
    for fid in fids:
        n = migrate_fid(fid, args.dry)
        if n:
            print(f'fid {fid}: {n} extern decl(s) inserted')
            total += n
    print(f'total: {total} externs inserted across {len(fids)} fids')


if __name__ == '__main__':
    main()
