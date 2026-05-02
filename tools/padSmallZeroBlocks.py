#!/usr/bin/env python3
"""Replace small all-zero `u8` declarations with `PAD(N)` macros.

Targets `u8 NAME[N] = { #include <...inc.c> };` declarations where:
  * `N < 16`,
  * the included `.inc.c` file (in build/<v>/src/relocData/) is all 0x00 bytes,
  * `NAME` is not a target of any `.reloc` entry (else the .reloc would lose
    its symbolic anchor),
  * `NAME` is not used elsewhere in the master `.c` source (e.g. as a
    placeholder pointer like `(u8*)NAME + 0xN`),
  * the symbol is not the very first decl in its region (so the surrounding
    16-byte alignment naturally reproduces the gap when we drop it).

For each candidate, replaces the decl with `PAD(N);`. The PAD macro emits a
zero-init `static u8` that lands in `.sbss` rather than `.data`, so the
binary loses the symbol but the next decl's 16-byte alignment fills the gap
back in. The byte-compare step verifies this round-trip per file.
"""

from __future__ import annotations

import argparse
import os
import re
import shutil
import subprocess
import sys
from typing import Optional

PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_RELOC = os.path.join(PROJECT, 'src', 'relocData')


_DECL_RE = re.compile(
    r'(?P<lead>(?:^/\*[^\n]*\*/\s*\n)?)'
    r'^u8\s+(?P<name>\w+)\s*\[\s*(?P<count>\d+)\s*\]\s*=\s*\{\s*\n'
    r'(?P<body>(?:[^\n}]*\n)*?)'
    r'\};',
    re.MULTILINE,
)
_INC_RE = re.compile(r'#include\s+[<"](?P<path>[^>"]+\.inc\.c)[>"]')


def is_inc_all_zero(inc_relpath: str, version: str) -> bool:
    inc_full = os.path.join(PROJECT, 'build', version, 'src', 'relocData', inc_relpath)
    if not os.path.exists(inc_full):
        return False
    with open(inc_full) as f:
        text = f.read()
    # Strip whitespace, commas, comments — anything that isn't a hex literal.
    # If every hex literal we find is 0x00, we treat the file as all-zero.
    hex_lits = re.findall(r'0[xX][0-9A-Fa-f]+', text)
    if not hex_lits:
        return False
    return all(int(h, 16) == 0 for h in hex_lits)


def is_targeted_by_reloc(name: str, reloc_text: str) -> bool:
    """True iff `name` appears as the right-hand side of any `intern` line
    (with or without `+offset`)."""
    pat = re.compile(rf'^intern\s+\S+\s+{re.escape(name)}(?:\+0x[0-9A-Fa-f]+)?\b', re.MULTILINE)
    return bool(pat.search(reloc_text))


def is_referenced_in_c(name: str, c_text: str, decl_span: tuple[int, int]) -> bool:
    """True iff `name` appears outside the decl's own region in c_text."""
    start, end = decl_span
    pre = c_text[:start]
    post = c_text[end:]
    return name in pre or name in post


def find_fid(master_path: str) -> Optional[int]:
    base = os.path.basename(master_path)
    m = re.match(r'^(\d+)_', base)
    return int(m.group(1)) if m else None


def per_file_build_and_compare(fid: int, version: str) -> bool:
    src_asset_dir = os.path.join(PROJECT, 'assets', version, 'relocData')
    if os.path.exists(os.path.join(src_asset_dir, f'{fid}.vpk0.bin')):
        target_rel = f'{fid}.vpk0.bin'
    elif os.path.exists(os.path.join(src_asset_dir, f'{fid}.bin')):
        target_rel = f'{fid}.bin'
    else:
        return False
    target = os.path.join(PROJECT, 'build', version, 'assets', version, 'relocData', target_rel)
    src_c = None
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f'{fid}_') and fn.endswith('.c'):
            src_c = os.path.join(SRC_RELOC, fn)
            break
    if src_c:
        os.utime(src_c, None)
    # Re-extract first (decl change may move offsets / inc.c content).
    er = subprocess.run(
        [sys.executable, os.path.join(PROJECT, 'tools', 'extractRelocInc.py'),
         str(fid), '--version', version],
        capture_output=True, text=True)
    if er.returncode != 0:
        print(f'  extract failed: {er.stderr.strip()}', file=sys.stderr)
        return False
    r = subprocess.run(['make', target, f'VERSION={version}', 'RELOC_DATA=1', '-j'],
                       cwd=PROJECT, capture_output=True, text=True)
    if r.returncode != 0:
        return False
    orig = os.path.join(src_asset_dir, target_rel)
    with open(orig, 'rb') as a, open(target, 'rb') as b:
        return a.read() == b.read()


def process_file(master_path: str, version: str, dry_run: bool) -> tuple[int, str]:
    fid = find_fid(master_path)
    if fid is None:
        return 0, 'no fid'
    reloc_path = master_path[:-2] + '.reloc'
    reloc_text = ''
    if os.path.exists(reloc_path):
        with open(reloc_path) as f:
            reloc_text = f.read()
    with open(master_path) as f:
        c_text_orig = f.read()

    candidates: list[tuple[re.Match, int]] = []
    for m in _DECL_RE.finditer(c_text_orig):
        name = m.group('name')
        try:
            count = int(m.group('count'))
        except ValueError:
            continue
        if count <= 0 or count >= 16:
            continue
        body = m.group('body')
        inc_m = _INC_RE.search(body)
        if not inc_m:
            continue
        inc_rel = inc_m.group('path')
        if not is_inc_all_zero(inc_rel, version):
            continue
        if is_targeted_by_reloc(name, reloc_text):
            continue
        if is_referenced_in_c(name, c_text_orig, (m.start(), m.end())):
            continue
        candidates.append((m, count))

    if not candidates:
        return 0, 'no candidates'

    if dry_run:
        names = ', '.join(m.group('name') for m, _ in candidates[:3])
        return len(candidates), f'{len(candidates)} candidates ({names}...)'

    # Apply edits from the END backward to keep absolute offsets stable.
    new_text = c_text_orig
    edits = sorted(((m.start(), m.end(), c) for m, c in candidates), reverse=True)
    for start, end, count in edits:
        replacement = f'PAD({count});'
        new_text = new_text[:start] + replacement + new_text[end:]

    shutil.copy2(master_path, master_path + '.bak')
    with open(master_path, 'w') as f:
        f.write(new_text)

    if not per_file_build_and_compare(fid, version):
        shutil.move(master_path + '.bak', master_path)
        # Re-extract back to baseline.
        subprocess.run(
            [sys.executable, os.path.join(PROJECT, 'tools', 'extractRelocInc.py'),
             str(fid), '--version', version],
            capture_output=True, text=True)
        return 0, 'binary mismatch (reverted)'

    os.remove(master_path + '.bak')
    names = ', '.join(m.group('name').rsplit('_', 1)[-1] for m, _ in candidates[:3])
    return len(candidates), f'{len(candidates)} PADs applied ({names}...)'


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('files', nargs='*')
    ap.add_argument('--version', default='us')
    ap.add_argument('--dry-run', action='store_true')
    args = ap.parse_args()

    if args.files:
        masters = []
        for arg in args.files:
            if arg.isdigit():
                for fn in sorted(os.listdir(SRC_RELOC)):
                    if fn.startswith(f'{arg}_') and fn.endswith('.c'):
                        masters.append(os.path.join(SRC_RELOC, fn))
                        break
            else:
                masters.append(os.path.join(SRC_RELOC, arg))
    else:
        masters = sorted(
            os.path.join(SRC_RELOC, fn) for fn in os.listdir(SRC_RELOC)
            if fn.endswith('.c') and not fn.endswith('.jp.c') and not fn.endswith('.us.c'))

    ok = fail = noop = 0
    for master in masters:
        n, summary = process_file(master, args.version, args.dry_run)
        base = os.path.basename(master)
        if 'mismatch' in summary or 'failed' in summary:
            print(f'[FAIL] {base}: {summary}')
            fail += 1
        elif n > 0:
            print(f'[OK]   {base}: {summary}')
            ok += 1
        else:
            noop += 1
    print(f'\n=== {ok} ok, {fail} failed, {noop} no candidates ===')


if __name__ == '__main__':
    main()
