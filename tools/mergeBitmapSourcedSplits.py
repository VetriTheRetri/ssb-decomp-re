#!/usr/bin/env python3
"""Reverse texture splits whose `+offset` reloc came from inside a Bitmap[].

When the source pointer of a `+offset` reloc lives inside a `Bitmap` struct
(e.g. a sprite-sheet entry's `buf` field), the offset is a logical sub-image
within one continuous texture — splitting the texture into two `u8`
declarations breaks that conceptual unity. The earlier split pass treated
all `+offset` targets uniformly; this pass merges Bitmap-sourced splits back
together and restores the `<base>+0xN` form in the .reloc.

For each master .c file:
  1. Parse `Bitmap NAME[K] = { ... };` decls; record byte ranges occupied.
  2. Parse .reloc; find `intern <src>+<off> <target>` where <src>+<off> falls
     inside a Bitmap range AND <target> matches `<base>_at_0x<M>` (i.e. was
     produced by splitRelocBlocksByOffset.py).
  3. Locate the `<base>` decl and the `<base>_at_0x<M>` decl in the .c. If
     both are `u8`, contiguous (base.size == M), and adjacent in the file,
     merge: extend base's `[N]`, drop the sub-decl + its leading comment.
  4. Rewrite .reloc: replace `<base>_at_0x<M>` with `<base>+0x<M>`.
  5. Re-extract + per-file build + byte-compare. Revert on mismatch.

Multiple sub-splits on the same base are handled iteratively from the last
sub backward, so each merge sees a well-formed pair.
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

BITMAP_SIZE = 16  # struct bitmap is 16 bytes (4*s16 + void* + 2*s16)


_BITMAP_DECL_RE = re.compile(
    r'^Bitmap\s+(?P<name>\w+)\s*\[\s*(?P<count>\d*)\s*\]\s*=\s*\{',
    re.MULTILINE,
)
_U8_DECL_RE = re.compile(
    r'^u8\s+(?P<name>\w+)\s*\[\s*(?P<count>\d+)\s*\]\s*=\s*\{\s*\n'
    r'(?P<body>(?:[^\n}]*\n)*?)'
    r'\};',
    re.MULTILINE,
)
_INC_RE = re.compile(r'#include\s+[<"](?P<path>[^>"]+\.inc\.c)[>"]')


def find_balanced_close(text: str, open_idx: int) -> int:
    """`text[open_idx]` is `{`. Returns the index just past the matching `}`."""
    depth = 0
    i = open_idx
    while i < len(text):
        ch = text[i]
        if ch == '{':
            depth += 1
        elif ch == '}':
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    return len(text)


def count_top_level_groups(body: str) -> int:
    """Count brace-balanced top-level `{...}` initializer groups in a struct
    array body (between the outer `{` and `}`)."""
    inner = body[1:-1] if body and body.startswith('{') and body.endswith('}') else body
    depth = 0
    count = 0
    for ch in inner:
        if ch == '{':
            if depth == 0:
                count += 1
            depth += 1
        elif ch == '}':
            depth -= 1
    return count


def parse_bitmaps(c_text: str) -> dict[str, int]:
    """Return { bitmap_array_name -> byte size }."""
    out: dict[str, int] = {}
    for m in _BITMAP_DECL_RE.finditer(c_text):
        open_idx = c_text.index('{', m.end() - 1)
        close_idx = find_balanced_close(c_text, open_idx)
        body = c_text[open_idx:close_idx]
        if m.group('count'):
            try:
                n = int(m.group('count'), 0)
            except ValueError:
                n = count_top_level_groups(body)
        else:
            n = count_top_level_groups(body)
        if n > 0:
            out[m.group('name')] = n * BITMAP_SIZE
    return out


def parse_u8_decls(c_text: str) -> dict[str, tuple[int, int, int, int, str]]:
    """Return { name -> (count, decl_start, decl_end, leading_start, inc_path) }."""
    out: dict[str, tuple[int, int, int, int, str]] = {}
    for m in _U8_DECL_RE.finditer(c_text):
        name = m.group('name')
        try:
            count = int(m.group('count'))
        except ValueError:
            continue
        body = m.group('body')
        inc_m = _INC_RE.search(body)
        if not inc_m:
            continue
        inc_path = inc_m.group('path')
        # Find leading comment line `/* ... */` immediately above
        leading_start = m.start()
        head = c_text[:leading_start]
        # Walk back over trailing whitespace
        trimmed = head.rstrip(' \t\r\n')
        # If the trimmed text ends with `*/`, find the matching `/*` on the
        # same logical line.
        if trimmed.endswith('*/'):
            star = trimmed.rfind('/*')
            if star >= 0 and '\n' not in trimmed[star:]:
                # Confirm only whitespace between `*/` and decl start
                between = head[len(trimmed):]
                if between.strip() == '':
                    leading_start = star
        out[name] = (count, m.start(), m.end(), leading_start, inc_path)
    return out


def parse_reloc(reloc_text: str) -> list[tuple[str, int, str, int]]:
    """Return list of (src_sym, src_off, target_sym, target_off) tuples for
    each `intern` line."""
    out = []
    for raw in reloc_text.splitlines():
        body = raw.split('#', 1)[0].strip()
        parts = body.split()
        if len(parts) != 3 or parts[0] != 'intern':
            continue
        src = parts[1]
        tgt = parts[2]
        ms = re.match(r'^(?P<sym>\w+)(?:\+0x(?P<off>[0-9A-Fa-f]+))?$', src)
        mt = re.match(r'^(?P<sym>\w+)(?:\+0x(?P<off>[0-9A-Fa-f]+))?$', tgt)
        if not ms or not mt:
            continue
        out.append((
            ms.group('sym'), int(ms.group('off') or '0', 16),
            mt.group('sym'), int(mt.group('off') or '0', 16),
        ))
    return out


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
    er = subprocess.run(
        [sys.executable, os.path.join(PROJECT, 'tools', 'extractRelocInc.py'),
         str(fid), '--version', version],
        capture_output=True, text=True)
    if er.returncode != 0:
        return False
    r = subprocess.run(['make', target, f'VERSION={version}', 'RELOC_DATA=1', '-j'],
                       cwd=PROJECT, capture_output=True, text=True)
    if r.returncode != 0:
        return False
    orig = os.path.join(src_asset_dir, target_rel)
    with open(orig, 'rb') as a, open(target, 'rb') as b:
        return a.read() == b.read()


_AT_RE = re.compile(r'^(?P<base>.+)_at_0x(?P<off>[0-9A-Fa-f]+)$')


def process_file(master_path: str, version: str, dry_run: bool) -> tuple[int, str]:
    reloc_path = master_path[:-2] + '.reloc'
    if not os.path.exists(reloc_path):
        return 0, 'no .reloc'
    with open(master_path) as f:
        c_text_orig = f.read()
    with open(reloc_path) as f:
        reloc_text_orig = f.read()

    bitmaps = parse_bitmaps(c_text_orig)
    if not bitmaps:
        return 0, 'no Bitmap arrays'

    relocs = parse_reloc(reloc_text_orig)

    # Collect the set of (base, sub_offset) pairs that the splitter produced
    # AND whose only / first reloc source falls inside a Bitmap[] range.
    bitmap_sourced_targets: set[tuple[str, int]] = set()
    for src_sym, src_off, tgt_sym, _tgt_off in relocs:
        size = bitmaps.get(src_sym)
        if size is None or src_off >= size:
            continue
        m = _AT_RE.match(tgt_sym)
        if not m:
            continue
        bitmap_sourced_targets.add((m.group('base'), int(m.group('off'), 16)))

    if not bitmap_sourced_targets:
        return 0, 'no Bitmap-sourced splits'

    decls = parse_u8_decls(c_text_orig)
    # For each (base, off), confirm both base and `<base>_at_0x<off>` exist
    # and are adjacent (base_count == off, sub starts where base ends).
    merges: list[tuple[str, str, int, int]] = []  # (base, sub, base_count, sub_count)
    for base, off in sorted(bitmap_sourced_targets, key=lambda x: -x[1]):
        sub = f'{base}_at_0x{off:X}'
        if base not in decls or sub not in decls:
            continue
        b_count, *_ = decls[base]
        s_count, *_ = decls[sub]
        if b_count != off:
            continue
        merges.append((base, sub, b_count, s_count))

    if not merges:
        return 0, 'no mergeable splits'

    # Apply merges: walk from the rightmost sub backward so absolute offsets
    # in c_text_orig stay valid. Each merge:
    #   - rewrites the base decl's count to (b_count + s_count)
    #   - deletes the sub decl (and its leading comment, if any)
    new_text = c_text_orig
    new_reloc = reloc_text_orig
    # Group merges by base so iterative growth of the base works.
    # Process in two phases:
    #   Phase A: delete sub decls (rightmost first)
    #   Phase B: rewrite base counts
    # Pre-collect sub spans to delete (sorted right-to-left).
    sub_spans: list[tuple[int, int]] = []
    base_growth: dict[str, int] = {}
    for base, sub, b_count, s_count in merges:
        s_count_, s_start, s_end, s_lead_start, _s_inc = decls[sub]
        # Also strip the trailing blank line that often follows
        e = s_end
        while e < len(new_text) and new_text[e] in ' \t\r\n':
            # consume a single trailing newline at most
            if new_text[e] == '\n':
                e += 1
                break
            e += 1
        sub_spans.append((s_lead_start, e))
        base_growth[base] = base_growth.get(base, 0) + s_count
    sub_spans.sort(reverse=True)
    for start, end in sub_spans:
        new_text = new_text[:start] + new_text[end:]

    # Rewrite base decl counts. Re-parse `new_text` to get fresh decl spans.
    fresh_decls = parse_u8_decls(new_text)
    base_edits: list[tuple[int, int, str]] = []
    for base, growth in base_growth.items():
        if base not in fresh_decls:
            continue
        b_count, b_start, b_end, b_lead, _ = fresh_decls[base]
        old_text = new_text[b_start:b_end]
        new_count = b_count + growth
        # Replace the bracketed count token only — match `[<digits>]` after
        # the symbol name.
        replaced = re.sub(
            rf'(\bu8\s+{re.escape(base)}\s*\[)\s*\d+\s*(\])',
            rf'\g<1>{new_count}\g<2>', old_text, count=1,
        )
        if replaced == old_text:
            continue
        base_edits.append((b_start, b_end, replaced))
    base_edits.sort(reverse=True)
    for start, end, replacement in base_edits:
        new_text = new_text[:start] + replacement + new_text[end:]

    # Reloc: rewrite each `<base>_at_0x<M>` (with optional `+0xK` tail) back
    # to `<base>+0x<M+K>`.
    def reloc_sub(m: re.Match) -> str:
        sym = m.group('sym')
        tail = m.group('tail') or ''
        am = _AT_RE.match(sym)
        if not am:
            return m.group(0)
        base = am.group('base')
        off = int(am.group('off'), 16)
        if tail:
            tail_off = int(tail[3:], 16)  # strip '+0x'
            return f'{base}+0x{off + tail_off:X}'
        return f'{base}+0x{off:X}'

    new_reloc = re.sub(
        r'(?P<sym>\w+_at_0x[0-9A-Fa-f]+)(?P<tail>\+0x[0-9A-Fa-f]+)?',
        reloc_sub, new_reloc,
    )

    summary = f'merged {len(merges)} split(s) sourced from Bitmap[]'

    if dry_run:
        return len(merges), summary

    shutil.copy2(master_path, master_path + '.bak')
    shutil.copy2(reloc_path, reloc_path + '.bak')
    with open(master_path, 'w') as f:
        f.write(new_text)
    with open(reloc_path, 'w') as f:
        f.write(new_reloc)

    fid = find_fid(master_path)
    if fid is None or not per_file_build_and_compare(fid, version):
        shutil.move(master_path + '.bak', master_path)
        shutil.move(reloc_path + '.bak', reloc_path)
        if fid is not None:
            subprocess.run(
                [sys.executable, os.path.join(PROJECT, 'tools', 'extractRelocInc.py'),
                 str(fid), '--version', version],
                capture_output=True, text=True)
        return 0, 'binary mismatch (reverted)'
    os.remove(master_path + '.bak')
    os.remove(reloc_path + '.bak')
    return len(merges), summary


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
    print(f'\n=== {ok} ok, {fail} failed, {noop} no-ops ===')


if __name__ == '__main__':
    main()
