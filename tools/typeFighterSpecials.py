#!/usr/bin/env python3
"""Type fighter Special files by harvesting `ll*` symbols.

Parses symbols/reloc_data_symbols.us.txt for entries like:

    llFoxSpecial2ReflectorDObjDesc = 0x2b0;
    llFoxSpecial2ReflectorStartAnimJoint = 0x340;

and inserts matching description entries into
tools/relocFileDescriptions.us.txt, then runs genRelocDataC.py to
regenerate the manifest + block files. genRelocDataC handles DObjDesc
and MObjSub as typed blocks; AnimJoint / MatAnimJoint fall into the
raw-data-block path but still get a meaningful typed name
(`<feature>_<type>.data.c`), which is already how hand-written special
manifests labelled them.

The fid for each symbol comes from the authoritative name map at the
top of relocFileDescriptions (`-346: FoxSpecial2`). Symbols whose file
isn't in the map are skipped with a warning.
"""

import argparse
import os
import re
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import typeFighterModels as tfm

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SYMBOLS = os.path.join(PROJECT_DIR, "symbols", "reloc_data_symbols.us.txt")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")

DOBJDESC_SIZE = 44

# `MatAnimJoint` listed before `AnimJoint` so the regex engine prefers the
# longer suffix when both would match.
SYM_RE = re.compile(
    r'^ll([A-Z][A-Za-z]+?)(Special[2-4])(\w+?)(MatAnimJoint|AnimJoint|DObjDesc|MObjSub)'
    r'\s*=\s*(0x[0-9a-fA-F]+)\s*;'
)


def get_name_to_fid():
    d = {}
    with open(DESC_PATH) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)', line)
            if m:
                d[m.group(2)] = int(m.group(1))
    return d


def harvest_symbols():
    """Harvest typed entries for fighter Special files.

    Pulls two sources and merges them:
      1. Committed [fid] section entries in relocFileDescriptions.us.txt
         (the source of truth that genRelocSymbols turns into ll* symbols).
      2. New `ll<Char>Special<N>...` entries found in reloc_data_symbols.us.txt.

    Only file IDs whose name is `<Char>Special<2|3|4>` are returned — that
    keeps the tool scoped to fighter specials even though it's looking at a
    symbol file that covers every reloc file.
    """
    name_to_fid = get_name_to_fid()
    fid_to_name = {fid: name for name, fid in name_to_fid.items()}
    special_re = re.compile(r'^[A-Z][A-Za-z]+Special[2-4]$')
    special_fids = {fid for fid, name in fid_to_name.items()
                    if special_re.match(name)}

    by_fid = {}

    with open(DESC_PATH) as f:
        text = f.read()
    for m in re.finditer(r'^\[(\d+)\]\n((?:[^\n]+\n)*?)(?=\n*\[\d+\]|\Z)',
                          text, re.MULTILINE):
        fid = int(m.group(1))
        if fid not in special_fids:
            continue
        for line in m.group(2).splitlines():
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            parts = line.split()
            if len(parts) != 3:
                continue
            btype = parts[0]
            if btype not in ('DObjDesc', 'MObjSub', 'AnimJoint', 'MatAnimJoint'):
                continue
            try:
                off = int(parts[2], 16) if parts[2].startswith('0x') else int(parts[2])
            except ValueError:
                continue
            by_fid.setdefault(fid, []).append((btype, parts[1], off))

    with open(SYMBOLS) as f:
        for line in f:
            m = SYM_RE.match(line.strip())
            if not m:
                continue
            char, special, feature, btype, off_hex = m.groups()
            file_name = f"{char}{special}"
            if file_name not in name_to_fid:
                continue
            fid = name_to_fid[file_name]
            if fid not in special_fids:
                continue
            offset = int(off_hex, 16)
            feature = feature.strip('_')
            if re.fullmatch(r'[0-9A-Fa-f]+', feature):
                feature = f"at_{feature}"
            existing = by_fid.setdefault(fid, [])
            if not any(e[0] == btype and e[2] == offset for e in existing):
                existing.append((btype, feature, offset))
    return by_fid


def ensure_description(fid, entries):
    """Merge new entries into the [fid] section, keeping existing names."""
    with open(DESC_PATH) as f:
        text = f.read()

    section_re = re.compile(
        rf'^\[{fid}\]\n(?:[^\n]*\n)*?(?=\n*\[\d+\]|\Z)',
        re.MULTILINE,
    )
    m = section_re.search(text)

    existing = {}  # (type, offset) -> name
    if m:
        for line in m.group(0).splitlines()[1:]:
            line = line.strip()
            if not line:
                continue
            parts = line.split()
            if len(parts) != 3:
                continue
            try:
                off = int(parts[2], 16) if parts[2].startswith('0x') else int(parts[2])
            except ValueError:
                continue
            existing[(parts[0], off)] = parts[1]

    merged = dict(existing)
    # New entries take priority over any existing entry at the same offset
    # (so a reclassified DObjDesc → DisplayList replaces the stale row).
    new_offsets = {off for _, _, off in entries}
    for key in list(merged):
        if key[1] in new_offsets:
            del merged[key]
    for btype, name, off in entries:
        merged[(btype, off)] = name

    new_body = f"[{fid}]\n"
    for (btype, off), name in sorted(merged.items(), key=lambda kv: kv[0][1]):
        new_body += f"{btype} {name} 0x{off:X}\n"

    if m:
        text = text[:m.start()] + new_body + text[m.end():]
    else:
        if not text.endswith('\n\n'):
            text += '\n'
        text += new_body + '\n'

    with open(DESC_PATH, 'w') as f:
        f.write(text)


def walk_dobjdesc_array(data, start):
    """Walk entries forward from `start` until an id==-1 terminator or
    a scale==(0,0,0) leaf terminator. Returns entry count including the
    terminator, or None if the array isn't plausible.
    """
    if start + DOBJDESC_SIZE > len(data):
        return None
    count = 0
    pos = start
    while pos + DOBJDESC_SIZE <= len(data):
        d = tfm.parse_dobjdesc(data, pos)
        if d is None:
            return None
        if d["id"] == -1:
            return count + 1
        if d["id"] < 0 or d["id"] > 1024:
            return count + 1 if count > 0 else None
        count += 1
        pos += DOBJDESC_SIZE
        if d["scale"] == (0.0, 0.0, 0.0):
            return count
        if count > 256:
            return count
    return count if count > 0 else None


VALID_DL_OPS = {
    0xD7, 0xD9, 0xDA, 0xDB, 0xDC, 0xDE, 0xDF,
    0xE2, 0xE3, 0xE6, 0xE7, 0xE8, 0xE9, 0xEF,
    0xF8, 0xFB, 0xFC, 0xFD,
}


def decode_chain_ptr(data, off):
    raw = struct.unpack_from(">I", data, off)[0]
    return (raw & 0xFFFF) * 4


def find_dl_entries(data, dobjdesc_offsets):
    """For each DObjDesc array start offset, walk its dl pointers and
    return a sorted list of (target, kind) tuples where kind is 'direct'
    (dl points straight at a Gfx array) or 'indirect' (dl points at a
    16-byte command struct whose word at +4 is the real Gfx pointer).
    Special2/3 files use the indirect form for model parts that carry
    extra per-joint metadata (always seen with id=0/1, 4 at +8, 0 at +C).
    """
    arrays = []
    for off in dobjdesc_offsets:
        count = walk_dobjdesc_array(data, off)
        if count:
            arrays.append((off, count))

    targets = {}  # byte_off -> 'direct' | 'indirect'
    cmd_structs = set()  # offsets of the intermediate 16-byte command structs

    for arr_off, count in arrays:
        for i in range(count):
            entry = arr_off + i * DOBJDESC_SIZE
            if entry + 8 > len(data):
                continue
            raw_dl = struct.unpack_from(">I", data, entry + 4)[0]
            if raw_dl == 0:
                continue
            target = (raw_dl & 0xFFFF) * 4
            if target == 0 or target >= len(data):
                continue
            op = data[target]
            if op in VALID_DL_OPS:
                targets.setdefault(target, 'direct')
                continue
            # Indirect: the "dl" points at a command/link struct whose
            # real Gfx* lives at offset +4 (also chain-encoded). Verify
            # the opcode at the indirect target looks like F3DEX.
            if op == 0x00 and target + 16 <= len(data):
                indirect = decode_chain_ptr(data, target + 4)
                if 0 < indirect < len(data) and data[indirect] in VALID_DL_OPS:
                    targets.setdefault(indirect, 'indirect')
                    cmd_structs.add(target)

    return sorted(targets.items()), sorted(cmd_structs)


def read_bin(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(PROJECT_DIR, "assets", "us", "relocData", f"{fid}{ext}")
        if os.path.exists(p):
            with open(p, "rb") as f:
                return f.read()
    return None


def run_generator(fid):
    r = subprocess.run(
        ['python3', 'tools/genRelocDataC.py', '--extract-data', '--no-discover', str(fid)],
        capture_output=True, text=True, cwd=PROJECT_DIR,
    )
    print(r.stdout, end='')
    if r.returncode != 0:
        print(r.stderr, end='', file=sys.stderr)
    return r.returncode == 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int,
                    help='File IDs to process; default = all files with ll symbols.')
    args = ap.parse_args()

    by_fid = harvest_symbols()
    targets = sorted(args.fids) if args.fids else sorted(by_fid)

    for fid in targets:
        entries = list(by_fid.get(fid) or [])
        if not entries:
            print(f'  {fid}: no ll symbols found')
            continue

        data = read_bin(fid)
        if data is not None:
            # A handful of `ll*DObjDesc` symbols (CaptainSpecial3 FalconPunch,
            # YoshiSpecial2 EntryEgg) actually name a display list, not a
            # DObjDesc array — the game code treats the symbol as an opaque
            # "DObj setup attributes offset". Leave those untouched: the
            # symbol name is referenced directly by efmanager.c, so changing
            # the emitted block type would rename the symbol
            # (`ll...DObjDesc` → `ll...DisplayList`) and break compilation.
            # genRelocDataC falls back to a raw gap block for those offsets.

            # Walk dl pointers from every DObjDesc we're about to emit and
            # add DisplayList entries for targets that start with a valid
            # F3DEX opcode. This shrinks the raw gap bytes that sit between
            # typed structs in Special2/3 files — most of which are the
            # model DLs that the DObjDesc joints reference.
            #
            # Some Special2/3 DObjDesc.dl pointers go through a 16-byte
            # command/link struct (id, Gfx*, 0x00000004, 0). The indirect
            # walk follows that to find the real Gfx start and emits a
            # DataBlock for the struct itself so it stays typed.
            dobj_offsets = [off for btype, _, off in entries if btype == 'DObjDesc']
            dl_targets, cmd_structs = find_dl_entries(data, dobj_offsets)
            for cmd_off in cmd_structs:
                entries.append(('DataBlock', f'JointCmd_0x{cmd_off:04X}', cmd_off))
            for dl_off, _kind in dl_targets:
                entries.append(('DisplayList', f'Joint_0x{dl_off:04X}', dl_off))

        ensure_description(fid, entries)
        counts = {}
        for t, _, _ in entries:
            counts[t] = counts.get(t, 0) + 1
        summary = ', '.join(f'{n} {t}' for t, n in sorted(counts.items()))
        print(f'  {fid}: {summary}')
        run_generator(fid)


if __name__ == '__main__':
    main()
