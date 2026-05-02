#!/usr/bin/env python3
"""Rewrite `intern <ptr> <target>+<offset>` lines whose `<target>+<offset>`
already lands on an existing typed symbol elsewhere in the file.

This is the conservative cousin of splitRelocBlocksByOffset.py: instead of
splitting a typed block to manufacture a new symbol at the offset, we only
update the .reloc when the offset already resolves to the start of an
existing declaration. Nothing in the .c file changes.

Per-file workflow:
  1. Walk the master .c via `extractRelocInc.parse_master_c` to recover the
     ordered list of (decl_name, file_offset, size) — same offsets the
     extract pipeline uses, so they match the binary layout exactly.
  2. Build an `offset -> symbol` map.
  3. For each `intern <ptr> <target>+<offset>` reloc, compute
     target_offset = decl_offset[target] + offset. If that lands on a known
     decl's start, replace `<target>+<offset>` with the bare symbol.
  4. Save the .reloc; per-file build + byte-compare; revert on mismatch.

Note: only `.reloc` is touched. The `.c` source — and therefore the
extracted inc.c bytes and compiled .data — is unchanged. So the binary
output should not change at all; the build comparison is a defensive
sanity check rather than the load-bearing validator it is for splits.
"""

from __future__ import annotations

import argparse
import importlib.util
import os
import re
import shutil
import subprocess
import sys
from typing import Optional

PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_RELOC = os.path.join(PROJECT, 'src', 'relocData')


def _import_extract_module():
    """Load tools/extractRelocInc.py as a module so we can reuse its
    decl-walking logic. It depends on tools/genRelocMaster.compute_block_size,
    so add tools/ to sys.path first."""
    tools_dir = os.path.join(PROJECT, 'tools')
    if tools_dir not in sys.path:
        sys.path.insert(0, tools_dir)
    spec = importlib.util.spec_from_file_location(
        'extractRelocInc', os.path.join(tools_dir, 'extractRelocInc.py'))
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def collect_decl_offsets(master_path: str, extract_mod) -> tuple[dict[str, int], dict[int, str], int]:
    """Return ({ name -> offset }, { offset -> name }, total_size).

    Uses extractRelocInc.parse_master_c so offsets match what the extract
    pipeline writes to the binary. PAD entries advance the running offset
    but do not produce named symbols."""
    name_to_off: dict[str, int] = {}
    off_to_name: dict[int, str] = {}
    offset = 0
    try:
        entries = extract_mod.parse_master_c(master_path)
    except SystemExit:
        return {}, {}, 0
    for kind, payload in entries:
        if kind == 'pad':
            offset += payload
            continue
        size = payload.get('size', 0)
        name = payload.get('name')
        if name and offset not in off_to_name:
            off_to_name[offset] = name
        if name:
            name_to_off[name] = offset
        offset += size
    return name_to_off, off_to_name, offset


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
    r = subprocess.run(['make', target, f'VERSION={version}', 'RELOC_DATA=1', '-j'],
                       cwd=PROJECT, capture_output=True, text=True)
    if r.returncode != 0:
        return False
    orig = os.path.join(src_asset_dir, target_rel)
    with open(orig, 'rb') as a, open(target, 'rb') as b:
        return a.read() == b.read()


def process_file(master_path: str, version: str, dry_run: bool, extract_mod) -> tuple[int, str]:
    reloc_path = master_path[:-2] + '.reloc'
    if not os.path.exists(reloc_path):
        return 0, 'no .reloc'
    with open(reloc_path) as f:
        reloc_orig = f.read()

    name_to_off, off_to_name, _total = collect_decl_offsets(master_path, extract_mod)
    if not name_to_off:
        return 0, 'no decls parsed'

    new_lines: list[str] = []
    rewrites = 0
    misaligned = 0
    nomatch = 0
    for raw in reloc_orig.splitlines():
        body, _, comment = raw.partition('#')
        body_stripped = body.rstrip()
        parts = body_stripped.split()
        if len(parts) == 3 and parts[0] == 'intern':
            mt = re.match(r'^(?P<sym>\w+)\+0x(?P<off>[0-9A-Fa-f]+)$', parts[2])
            if mt:
                tgt = mt.group('sym')
                off = int(mt.group('off'), 16)
                base = name_to_off.get(tgt)
                if base is not None:
                    abs_off = base + off
                    new_sym = off_to_name.get(abs_off)
                    if new_sym is not None and new_sym != tgt:
                        rewrites += 1
                        new_body = f'{parts[0]} {parts[1]} {new_sym}'
                        if comment:
                            new_lines.append(f'{new_body}  #{comment}')
                        else:
                            new_lines.append(new_body)
                        continue
                    elif new_sym == tgt:
                        # +0x0 self-reference; leave as-is (shouldn't happen
                        # since splitRelocBlocksByOffset filters off==0).
                        pass
                    else:
                        nomatch += 1
                else:
                    misaligned += 1
        new_lines.append(raw)

    if rewrites == 0:
        return 0, f'no resolvable +offsets ({nomatch} unaligned-to-existing-decl)'

    new_reloc = '\n'.join(new_lines)
    if reloc_orig.endswith('\n') and not new_reloc.endswith('\n'):
        new_reloc += '\n'

    if dry_run:
        return rewrites, f'{rewrites} +offset relocs resolvable'

    shutil.copy2(reloc_path, reloc_path + '.bak')
    with open(reloc_path, 'w') as f:
        f.write(new_reloc)

    fid = find_fid(master_path)
    ok = fid is not None and per_file_build_and_compare(fid, version)
    if not ok:
        shutil.move(reloc_path + '.bak', reloc_path)
        return 0, 'binary mismatch (reverted)'
    os.remove(reloc_path + '.bak')
    return rewrites, f'{rewrites} +offset relocs resolved'


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('files', nargs='*')
    ap.add_argument('--version', default='us')
    ap.add_argument('--dry-run', action='store_true')
    args = ap.parse_args()

    extract_mod = _import_extract_module()

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

    ok = fail = noop = total_rewrites = 0
    for master in masters:
        n, summary = process_file(master, args.version, args.dry_run, extract_mod)
        base = os.path.basename(master)
        if 'mismatch' in summary or 'failed' in summary:
            print(f'[FAIL] {base}: {summary}')
            fail += 1
        elif n > 0:
            print(f'[OK]   {base}: {summary}')
            ok += 1
            total_rewrites += n
        else:
            noop += 1
    print(f'\n=== {ok} files updated ({total_rewrites} relocs resolved), '
          f'{fail} failed, {noop} no-ops ===')


if __name__ == '__main__':
    main()
