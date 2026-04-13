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
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SYMBOLS = os.path.join(PROJECT_DIR, "symbols", "reloc_data_symbols.us.txt")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")

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
    name_to_fid = get_name_to_fid()
    by_fid = {}
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
            offset = int(off_hex, 16)
            # Drop placeholder offset wrapping like `_1B34_` → `at_1B34`
            feature = feature.strip('_')
            if re.fullmatch(r'[0-9A-Fa-f]+', feature):
                feature = f"at_{feature}"
            by_fid.setdefault(fid, []).append((btype, feature, offset))
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
    for btype, name, off in entries:
        merged.setdefault((btype, off), name)

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
        entries = by_fid.get(fid)
        if not entries:
            print(f'  {fid}: no ll symbols found')
            continue
        ensure_description(fid, entries)
        counts = {}
        for t, _, _ in entries:
            counts[t] = counts.get(t, 0) + 1
        summary = ', '.join(f'{n} {t}' for t, n in sorted(counts.items()))
        print(f'  {fid}: {summary}')
        run_generator(fid)


if __name__ == '__main__':
    main()
