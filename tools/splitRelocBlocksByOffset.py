#!/usr/bin/env python3
"""Split relocData typed blocks at `+offset` reloc target references.

For each `intern <ptr> <target>+<offset>` line in src/relocData/<fid>.reloc,
finds the typed declaration of <target> in the corresponding .c file. If the
declaration is a splittable type (Vtx, u8, u16, u32) and the offset is
element-aligned, splits the declaration into separate symbols at each unique
offset boundary so the .reloc entry no longer needs a `+offset`.

Per-file workflow:
  1. Parse .reloc; collect { target_sym -> sorted set of split offsets }.
  2. Parse .c; for each target, find a typed decl whose size covers the
     largest offset and whose type / element size permits the splits.
  3. Replace the single decl with N+1 decls (one per split + the tail).
  4. Rewrite .reloc to point at the new per-offset symbols.
  5. Run `extractRelocInc.py <fid>` to regenerate the inc.c files.
  6. Compile <fid>.o and compare the resulting <fid>.vpk0.bin (or .bin) to
     the original asset; revert on mismatch.

The tool is cautious by design — anything ambiguous is skipped (with a brief
log entry) rather than guessed at.
"""

from __future__ import annotations

import argparse
import os
import re
import shutil
import subprocess
import sys
from dataclasses import dataclass
from typing import Optional


PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_RELOC = os.path.join(PROJECT, 'src', 'relocData')


# Splittable types: element size in bytes
TYPE_ELEM_SIZE = {
    'Vtx': 16,
    'Vtx_t': 16,
    'u8': 1,
    's8': 1,
    'u16': 2,
    's16': 2,
    'u32': 4,
    's32': 4,
}


# Suffix pattern for blocks whose name encodes their offset within a parent
# region: e.g. `dXxx_gap_0x0B94_sub_0xC`. Splitting such a block at +0xM
# produces `dXxx_gap_0x0B94_sub_0x<C+M>`. For symbols that don't match, we
# fall back to `<sym>_at_0x<M>` which is unambiguous but uglier.
_SUB_RE = re.compile(r'^(?P<prefix>.+)_sub_0x(?P<off>[0-9A-Fa-f]+)$')


@dataclass
class Decl:
    """A typed top-level declaration in a relocData master .c file."""
    name: str
    type_: str
    count: int
    inc_path: Optional[str]
    body_text: str        # Full text from `Type` keyword to closing `;`.
    body_start: int       # Position in .c file (start of `Type`).
    body_end: int         # Position just past closing `;`.
    leading_comment: str  # Text just before the decl (single-line `/* ... */`).
    leading_start: int    # Position where the leading comment begins.


# Top-level decl regex: `[Type] [*]Name[<count>] = { ... };` or with bare
# initializer. Mirrors tools/extractRelocInc.py's _TOP_DECL_RE.
_TOP_DECL_RE = re.compile(
    r'^(?P<type>\w+)\s+'
    r'(?P<ptr>\*+\s*)?'
    r'(?P<name>\w+)'
    r'(?:\s*\[\s*(?P<count>0[xX][0-9A-Fa-f]+|\d*)\s*\])?\s*=\s*\{',
    re.MULTILINE,
)
_INC_RE = re.compile(r'#include\s+[<"](?P<path>[^>"]+\.inc\.c)[>"]')
_LEADING_COMMENT_RE = re.compile(r'/\*[^\n]*?\*/\s*$')


def parse_reloc(
        reloc_path: str,
        bitmap_ranges: Optional[dict[str, int]] = None,
) -> tuple[list[str], dict[str, set[int]]]:
    """Return (raw_lines, { target_sym -> set of offsets > 0 }).

    If `bitmap_ranges` is given (a `{ bitmap_array_name -> byte_size }` map),
    `+offset` relocs whose source pointer lies inside any Bitmap[] range are
    excluded — splitting a texture that's referenced from a sprite-sheet
    Bitmap entry breaks the conceptual unity of the image.
    """
    if not os.path.exists(reloc_path):
        return [], {}
    with open(reloc_path) as f:
        lines = f.read().splitlines()

    target_offsets: dict[str, set[int]] = {}
    for raw in lines:
        body = raw.split('#', 1)[0].rstrip()
        parts = body.split()
        if len(parts) != 3 or parts[0] != 'intern':
            continue
        target = parts[2]
        m = re.match(r'^(?P<sym>\w+)\+0x(?P<off>[0-9A-Fa-f]+)$', target)
        if not m:
            continue
        off = int(m.group('off'), 16)
        if off == 0:
            continue
        if bitmap_ranges:
            ms = re.match(r'^(?P<sym>\w+)(?:\+0x(?P<off>[0-9A-Fa-f]+))?$', parts[1])
            if ms:
                src_sym = ms.group('sym')
                src_off = int(ms.group('off') or '0', 16)
                size = bitmap_ranges.get(src_sym)
                if size is not None and src_off < size:
                    continue  # source is inside a Bitmap[] — skip
        target_offsets.setdefault(m.group('sym'), set()).add(off)
    return lines, target_offsets


_BITMAP_DECL_RE = re.compile(
    r'^Bitmap\s+(?P<name>\w+)\s*\[\s*(?P<count>\d*)\s*\]\s*=\s*\{',
    re.MULTILINE,
)
BITMAP_SIZE = 16


def parse_bitmap_ranges(c_text: str) -> dict[str, int]:
    """Map Bitmap[] array names to byte size, derived from the source decls."""
    out: dict[str, int] = {}
    for m in _BITMAP_DECL_RE.finditer(c_text):
        # Find balanced `{ ... }` to count entries.
        i = c_text.index('{', m.end() - 1)
        depth = 0
        end = i
        while end < len(c_text):
            ch = c_text[end]
            if ch == '{':
                depth += 1
            elif ch == '}':
                depth -= 1
                if depth == 0:
                    end += 1
                    break
            end += 1
        body = c_text[i:end]
        if m.group('count'):
            try:
                n = int(m.group('count'), 0)
            except ValueError:
                n = 0
        else:
            depth = 0
            n = 0
            for ch in body[1:-1]:
                if ch == '{':
                    if depth == 0:
                        n += 1
                    depth += 1
                elif ch == '}':
                    depth -= 1
        if n > 0:
            out[m.group('name')] = n * BITMAP_SIZE
    return out


def parse_decls(c_text: str) -> list[Decl]:
    """Walk top-level decls in a master .c file. Returns ordered list."""
    decls: list[Decl] = []
    pos = 0
    length = len(c_text)
    while pos < length:
        m = _TOP_DECL_RE.search(c_text, pos)
        if m is None:
            break
        if m.group('ptr'):
            # Pointer arrays don't carry inc.c content; not splittable here.
            pos = m.end()
            continue
        type_ = m.group('type')
        name = m.group('name')
        count_str = m.group('count') or ''
        # Find balanced closing `};`
        i = m.end()  # index just past opening `{`
        depth = 1
        while i < length and depth > 0:
            ch = c_text[i]
            if ch == '{':
                depth += 1
            elif ch == '}':
                depth -= 1
            i += 1
        # Consume trailing whitespace + `;`
        while i < length and c_text[i] in ' \t\r\n':
            i += 1
        if i < length and c_text[i] == ';':
            i += 1
        body_end = i
        body_text = c_text[m.start('type'):body_end]
        inc_m = _INC_RE.search(body_text)
        inc_path = inc_m.group('path') if inc_m else None
        try:
            count = int(count_str, 0) if count_str else 0
        except ValueError:
            count = 0
        # Find leading single-line `/* ... */` comment immediately before the decl
        leading_start = m.start('type')
        head = c_text[:leading_start]
        prev = head.rstrip(' \t')
        # Walk back past the most recent comment block
        comment_match = re.search(r'/\*[^\n]*\*/\s*$', prev)
        leading_comment = ''
        if comment_match:
            # Confirm that between the comment end and decl start there is only
            # whitespace + newline.
            tail = head[comment_match.end():]
            if not tail.strip():
                leading_comment = comment_match.group(0)
                leading_start = leading_start - len(c_text[comment_match.start():m.start('type')])
        decls.append(Decl(
            name=name, type_=type_, count=count, inc_path=inc_path,
            body_text=body_text, body_start=m.start('type'), body_end=body_end,
            leading_comment=leading_comment, leading_start=leading_start,
        ))
        pos = body_end
    return decls


def split_symbol_name(orig: str, split_offset: int) -> str:
    """Compute the new symbol name for a split at byte offset `split_offset`
    relative to the original symbol's start. Preserves the project's
    `<parent>_sub_0x<N>` convention when applicable; falls back to
    `<sym>_at_0x<M>` otherwise."""
    m = _SUB_RE.match(orig)
    if m:
        prefix = m.group('prefix')
        base = int(m.group('off'), 16)
        return f'{prefix}_sub_0x{base + split_offset:X}'
    return f'{orig}_at_0x{split_offset:X}'


def split_inc_path(orig_inc_path: str, new_sym_basename: str) -> str:
    """Rewrite a `<dir>/<orig>.<suffix>.inc.c` include path to use the new
    symbol's basename. extractRelocInc.py routes by symbol name, so naming
    the inc.c after the symbol keeps things in sync."""
    head, tail = os.path.split(orig_inc_path)
    # tail looks like `<sym>.<format>.inc.c` — split off the leading
    # `<sym>` (everything before the first `.`).
    dot = tail.find('.')
    if dot < 0:
        return os.path.join(head, new_sym_basename)
    suffix = tail[dot:]  # e.g. `.vtx.inc.c`
    return os.path.join(head, new_sym_basename + suffix)


def basename_for_inc(sym: str, file_basename_prefix: str) -> str:
    """Strip the `dXxxFile2_` prefix to get the per-file inc.c basename."""
    if sym.startswith(file_basename_prefix):
        return sym[len(file_basename_prefix):]
    return sym


def render_split_decls(decl: Decl, splits: list[int],
                       file_basename_prefix: str) -> Optional[str]:
    """Build the replacement text (single string of multiple decls) for
    `decl` split at each offset in `splits` (sorted ascending). Returns the
    replacement text, or None if the split isn't safe."""
    elem = TYPE_ELEM_SIZE.get(decl.type_)
    if elem is None or decl.count <= 0:
        return None
    total_bytes = decl.count * elem
    # Validate splits: in range, element-aligned, sorted, unique
    last = 0
    boundaries = []
    for off in splits:
        if off <= 0 or off >= total_bytes:
            return None
        if off % elem != 0:
            return None
        if off <= last:
            return None
        boundaries.append(off)
        last = off
    # Build N+1 contiguous regions: [0..b0], [b0..b1], ..., [bN..total]
    regions: list[tuple[int, int]] = []
    prev = 0
    for b in boundaries:
        regions.append((prev, b))
        prev = b
    regions.append((prev, total_bytes))

    # Compose replacement text. The first region keeps the original symbol
    # name (so external references still work) and just shrinks. Subsequent
    # regions get new symbols. The original leading comment (if any) is
    # dropped — it usually quotes the pre-split element count, which is
    # stale after splitting.
    out_lines = []
    for i, (a, b) in enumerate(regions):
        size = b - a
        nelems = size // elem
        if i == 0:
            sym = decl.name
        else:
            sym = split_symbol_name(decl.name, a)
        if decl.inc_path:
            new_basename = basename_for_inc(sym, file_basename_prefix)
            new_inc = split_inc_path(decl.inc_path, new_basename)
        else:
            return None
        out_lines.append(f'/* {decl.type_}: {sym} ({nelems} {decl.type_}) */')
        out_lines.append(f'{decl.type_} {sym}[{nelems}] = {{')
        out_lines.append(f'\t#include <{new_inc}>')
        out_lines.append('};')
        if i != len(regions) - 1:
            out_lines.append('')
    return '\n'.join(out_lines)


def file_basename_prefix_from_decls(decls: list[Decl]) -> str:
    """Heuristic: every decl in a relocData master shares the `dXxxFile2_`
    prefix. Find the longest common prefix among the first few decls."""
    if not decls:
        return ''
    candidates = [d.name for d in decls if d.name.startswith('d')][:5]
    if not candidates:
        return ''
    prefix = candidates[0]
    for n in candidates[1:]:
        i = 0
        while i < len(prefix) and i < len(n) and prefix[i] == n[i]:
            i += 1
        prefix = prefix[:i]
    # Trim back to the last `_`
    last_us = prefix.rfind('_')
    if last_us < 0:
        return ''
    return prefix[:last_us + 1]


def update_reloc_text(lines: list[str], renamed_targets: dict[tuple[str, int], str]) -> str:
    """Rewrite each `intern <ptr> <target>+<offset>` line. If (target, offset)
    is in renamed_targets, replace with the new symbol; otherwise leave."""
    out = []
    for raw in lines:
        body, _, comment = raw.partition('#')
        body_stripped = body.rstrip()
        parts = body_stripped.split()
        if len(parts) == 3 and parts[0] == 'intern':
            m = re.match(r'^(?P<sym>\w+)\+0x(?P<off>[0-9A-Fa-f]+)$', parts[2])
            if m:
                sym = m.group('sym')
                off = int(m.group('off'), 16)
                key = (sym, off)
                if key in renamed_targets:
                    new_target = renamed_targets[key]
                    new_body = f'{parts[0]} {parts[1]} {new_target}'
                    if comment:
                        out.append(f'{new_body}  #{comment}')
                    else:
                        # Preserve trailing whitespace style: just emit the new body
                        out.append(new_body)
                    continue
        out.append(raw)
    return '\n'.join(out) + ('\n' if not lines or lines[-1] != '' else '')


def find_fid_for_master(master_path: str) -> Optional[int]:
    """Extract numeric file id from a master .c name like `124_GRBonus...c`."""
    base = os.path.basename(master_path)
    m = re.match(r'^(\d+)_', base)
    if m:
        return int(m.group(1))
    return None


def run_extract(fid: int, version: str) -> bool:
    cmd = [sys.executable, os.path.join(PROJECT, 'tools', 'extractRelocInc.py'),
           str(fid), '--version', version]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode != 0:
        print(f'  extract failed: {r.stderr.strip()}', file=sys.stderr)
        return False
    return True


def run_per_file_build(fid: int, version: str) -> Optional[str]:
    """Build just <fid>.o and the resulting .vpk0.bin / .bin. Returns the path
    to the resulting binary, or None on failure."""
    build_dir = os.path.join(PROJECT, 'build', version)
    bin_path_vpk = os.path.join(build_dir, 'assets', version, 'relocData', f'{fid}.vpk0.bin')
    bin_path_raw = os.path.join(build_dir, 'assets', version, 'relocData', f'{fid}.bin')
    target_paths = [bin_path_vpk, bin_path_raw]
    # Touch the .c so make rebuilds. Then run make for the target.
    src_c = None
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f'{fid}_') and fn.endswith('.c'):
            src_c = os.path.join(SRC_RELOC, fn)
            break
    if src_c is None:
        return None
    os.utime(src_c, None)
    # Build whichever target file exists in `assets/<v>/relocData/`
    src_asset_dir = os.path.join(PROJECT, 'assets', version, 'relocData')
    if os.path.exists(os.path.join(src_asset_dir, f'{fid}.vpk0.bin')):
        target = bin_path_vpk
    elif os.path.exists(os.path.join(src_asset_dir, f'{fid}.bin')):
        target = bin_path_raw
    else:
        return None
    cmd = ['make', target, f'VERSION={version}', 'RELOC_DATA=1', '-j']
    r = subprocess.run(cmd, cwd=PROJECT, capture_output=True, text=True)
    if r.returncode != 0:
        # Surface compiler diagnostics
        print(r.stdout)
        print(r.stderr, file=sys.stderr)
        return None
    return target


def compare_to_original(fid: int, built_path: str, version: str) -> bool:
    orig_dir = os.path.join(PROJECT, 'assets', version, 'relocData')
    if built_path.endswith('.vpk0.bin'):
        orig = os.path.join(orig_dir, f'{fid}.vpk0.bin')
    else:
        orig = os.path.join(orig_dir, f'{fid}.bin')
    if not os.path.exists(orig):
        return False
    with open(orig, 'rb') as a, open(built_path, 'rb') as b:
        return a.read() == b.read()


def process_file(master_path: str, reloc_path: str, version: str,
                 dry_run: bool, verbose: bool) -> tuple[bool, int, str]:
    """Apply splits to a single file. Returns (changed, num_splits, summary)."""
    fid = find_fid_for_master(master_path)
    if fid is None:
        return False, 0, 'no fid'

    with open(master_path) as f:
        c_text_orig = f.read()
    bitmap_ranges = parse_bitmap_ranges(c_text_orig)
    reloc_lines, target_offsets = parse_reloc(reloc_path, bitmap_ranges) if os.path.exists(reloc_path) else ([], {})
    if not target_offsets:
        return False, 0, 'no +offset relocs'

    decls = parse_decls(c_text_orig)
    decl_by_name = {d.name: d for d in decls}
    file_prefix = file_basename_prefix_from_decls(decls)

    # Determine which targets we can split. Only act on targets we have a
    # typed decl for, of a splittable type, with offsets all in range &
    # element-aligned.
    actionable: list[tuple[Decl, list[int]]] = []
    skipped: list[str] = []
    for sym, offsets in sorted(target_offsets.items()):
        d = decl_by_name.get(sym)
        if d is None:
            skipped.append(f'{sym} (no decl)')
            continue
        elem = TYPE_ELEM_SIZE.get(d.type_)
        if elem is None:
            skipped.append(f'{sym} ({d.type_} not splittable)')
            continue
        sorted_offs = sorted(offsets)
        total = d.count * elem
        # Validate every offset
        ok = True
        for off in sorted_offs:
            if off <= 0 or off >= total or (off % elem) != 0:
                ok = False
                break
        if not ok:
            skipped.append(f'{sym} (offsets misaligned or out of range)')
            continue
        actionable.append((d, sorted_offs))

    if not actionable:
        msg = f'no actionable splits ({len(skipped)} skipped: {", ".join(skipped[:3])})'
        return False, 0, msg

    # Build the replacement text for each actionable decl, plus the
    # rename map for .reloc updates.
    new_text = c_text_orig
    rename_map: dict[tuple[str, int], str] = {}
    # Apply edits from the END of file backward so absolute offsets stay
    # valid as we mutate the buffer.
    edits: list[tuple[int, int, str]] = []
    for d, splits in actionable:
        replacement = render_split_decls(d, splits, file_prefix)
        if replacement is None:
            skipped.append(f'{d.name} (cannot render)')
            continue
        # Determine the start of the replacement region. If the decl had a
        # leading single-line comment, replace it as well so we don't leave
        # a dangling comment from before the split.
        start = d.leading_start if d.leading_comment else d.body_start
        edits.append((start, d.body_end, replacement))
        # Rename map: each split offset → new symbol name
        for off in splits:
            rename_map[(d.name, off)] = split_symbol_name(d.name, off)

    if not edits:
        return False, 0, 'no actionable edits'

    edits.sort(key=lambda e: e[0], reverse=True)
    for start, end, replacement in edits:
        new_text = new_text[:start] + replacement + new_text[end:]

    new_reloc = update_reloc_text(reloc_lines, rename_map)

    summary = f'{len(edits)} blocks split, {sum(len(s) for _, s in actionable)} +offset relocs resolved'
    if skipped:
        summary += f' ({len(skipped)} skipped)'

    if dry_run:
        return True, len(edits), summary

    # Backup originals before writing.
    shutil.copy2(master_path, master_path + '.bak')
    if os.path.exists(reloc_path):
        shutil.copy2(reloc_path, reloc_path + '.bak')

    with open(master_path, 'w') as f:
        f.write(new_text)
    with open(reloc_path, 'w') as f:
        f.write(new_reloc)

    # Re-extract inc.c, then per-file build, then byte-compare to original.
    if not run_extract(fid, version):
        revert(master_path, reloc_path)
        return False, 0, 'extract failed (reverted)'
    built = run_per_file_build(fid, version)
    if built is None:
        revert(master_path, reloc_path)
        return False, 0, 'build failed (reverted)'
    if not compare_to_original(fid, built, version):
        revert(master_path, reloc_path)
        # Re-extract back to baseline so the cached inc.c matches the .c
        run_extract(fid, version)
        return False, 0, 'binary mismatch (reverted)'

    # Drop backups on success.
    for p in (master_path + '.bak', reloc_path + '.bak'):
        try:
            os.remove(p)
        except FileNotFoundError:
            pass
    return True, len(edits), summary


def revert(master_path: str, reloc_path: str) -> None:
    for p in (master_path, reloc_path):
        bak = p + '.bak'
        if os.path.exists(bak):
            shutil.move(bak, p)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('files', nargs='*', help='Specific master .c file ids to process. Default: all.')
    ap.add_argument('--version', default='us')
    ap.add_argument('--dry-run', action='store_true', help='Report what would change without writing.')
    ap.add_argument('--verbose', '-v', action='store_true')
    ap.add_argument('--limit', type=int, default=0, help='Cap on number of successful files (0 = no limit).')
    args = ap.parse_args()

    # Discover master files.
    if args.files:
        masters = []
        for arg in args.files:
            if arg.isdigit():
                # Find by id
                for fn in sorted(os.listdir(SRC_RELOC)):
                    if fn.startswith(f'{arg}_') and fn.endswith('.c'):
                        masters.append(os.path.join(SRC_RELOC, fn))
                        break
            else:
                masters.append(os.path.join(SRC_RELOC, arg) if os.sep not in arg else arg)
    else:
        masters = []
        for fn in sorted(os.listdir(SRC_RELOC)):
            if fn.endswith('.c') and not fn.endswith('.jp.c') and not fn.endswith('.us.c'):
                masters.append(os.path.join(SRC_RELOC, fn))

    successes = 0
    skipped = 0
    failed = 0
    for master in masters:
        base = os.path.basename(master)
        # Strip trailing `.c` and try .reloc
        reloc_path = master[:-2] + '.reloc'
        changed, n, summary = process_file(master, reloc_path, args.version,
                                            dry_run=args.dry_run, verbose=args.verbose)
        if changed:
            successes += 1
            print(f'[OK]   {base}: {summary}')
            if args.limit and successes >= args.limit:
                break
        elif n == 0 and 'no +offset' in summary:
            skipped += 1
            if args.verbose:
                print(f'[skip] {base}: {summary}')
        elif 'reverted' in summary or 'failed' in summary or 'mismatch' in summary:
            failed += 1
            print(f'[FAIL] {base}: {summary}')
        else:
            skipped += 1
            if args.verbose:
                print(f'[skip] {base}: {summary}')

    print(f'\n=== {successes} ok, {failed} failed, {skipped} skipped (no work) ===')


if __name__ == '__main__':
    main()
