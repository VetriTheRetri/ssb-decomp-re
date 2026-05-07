#!/usr/bin/env python3
"""
Rewrite `.reloc` files where `<sym>_sub_<offset>[+<delta>]` references
resolve to symbols that don't exist in the compiled `.o`. Fold them into
`<sym>+0x<offset+delta>` form using the parent symbol that does exist.

Operates on every `<fid>_*.reloc` and `<fid>_*.jp.reloc` whose .o is on
disk. Conservative: only rewrites when:
  - The literal label (with the `_sub_` suffix) is NOT a defined symbol
    in the .o.
  - The parent label (everything before `_sub_<hex>`) IS defined.

Result for each rewritten label: `<parent>+0x<sub+delta>`.

Skips reloc files for which the .o doesn't exist (e.g. fids that don't
build in the current version).
"""
from __future__ import annotations
import re
import subprocess
from pathlib import Path

NM = 'mips-linux-gnu-nm'


def nm_symbols(obj_path: Path) -> set[str]:
    if not obj_path.exists():
        return set()
    out = subprocess.check_output([NM, str(obj_path)], text=True)
    syms = set()
    for line in out.splitlines():
        m = re.match(r'^[0-9a-fA-F]+ [DBdb] (\w+)$', line)
        if m:
            syms.add(m.group(1))
    return syms


# Regex to recognise a label that has a `_sub_<hex>` suffix.
SUB_RE = re.compile(r'^(?P<parent>\w+?)_sub_0x(?P<sub>[0-9A-Fa-f]+)$')

LABEL_RE = re.compile(r'^(?P<base>\w+)(?:\+0x(?P<delta>[0-9A-Fa-f]+))?$')


def fold_label(label: str, defined: set[str]) -> str:
    """Return a possibly-rewritten label."""
    m = LABEL_RE.match(label)
    if not m:
        return label
    base = m.group('base')
    delta = int(m.group('delta'), 16) if m.group('delta') else 0
    if base in defined:
        return label  # already resolves
    sm = SUB_RE.match(base)
    if not sm:
        return label
    parent = sm.group('parent')
    sub = int(sm.group('sub'), 16)
    if parent not in defined:
        return label
    new_delta = sub + delta
    return f'{parent}+0x{new_delta:X}'


def process(reloc_path: Path, obj_path: Path) -> int:
    defined = nm_symbols(obj_path)
    if not defined:
        return 0
    text = reloc_path.read_text()
    new_lines = []
    n = 0
    for line in text.splitlines():
        s = line.strip()
        if s.startswith('intern ') or s.startswith('extern '):
            parts = line.split(None, 3)  # type, lhs, rhs[, comment]
            if len(parts) >= 3:
                kind, lhs, rhs = parts[0], parts[1], parts[2]
                tail = ' ' + parts[3] if len(parts) > 3 else ''
                new_lhs = fold_label(lhs, defined)
                new_rhs = fold_label(rhs, defined)
                if new_lhs != lhs or new_rhs != rhs:
                    n += 1
                    line = f'{kind} {new_lhs} {new_rhs}{tail}'
        new_lines.append(line)
    if n:
        reloc_path.write_text('\n'.join(new_lines) + '\n')
    return n


SRC = Path('src/relocData')
BUILD_US = Path('build/us/src/relocData/.build')
BUILD_JP = Path('build/jp/src/relocData/.build')

# Read fid->name maps for both versions
def read_fid_map(path: Path) -> dict[int, str]:
    out = {}
    if not path.exists():
        return out
    for line in path.read_text().splitlines():
        m = re.match(r'^-(\d+):\s+(\w+)', line)
        if m:
            out[int(m.group(1))] = m.group(2)
    return out


us_map = read_fid_map(Path('tools/relocFileDescriptions.us.txt'))
jp_map = read_fid_map(Path('tools/relocFileDescriptions.jp.txt'))
# Build name -> JP fid
jp_by_name = {n: f for f, n in jp_map.items()}

total = 0
for reloc_path in sorted(SRC.glob('*.reloc')):
    name = reloc_path.stem  # e.g. "313_FoxModel" or "313_FoxModel.jp"
    is_jp = name.endswith('.jp')
    if is_jp:
        name = name[:-3]
    fid_str, sep, fname = name.partition('_')
    if not fid_str.isdigit():
        continue
    us_fid = int(fid_str)

    if is_jp:
        jp_fid = jp_by_name.get(fname)
        if jp_fid is None:
            continue
        obj = BUILD_JP / f'{jp_fid}.o'
    else:
        obj = BUILD_US / f'{us_fid}.o'

    if not obj.exists():
        continue
    n = process(reloc_path, obj)
    if n:
        print(f'  {reloc_path.name}: rewrote {n} label(s)')
        total += n

print(f'\nTotal rewrites: {total}')
