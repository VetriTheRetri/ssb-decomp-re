#!/usr/bin/env python3
"""
Retype `u32 X[N]` sub-decls that hold a display list (`gsDPPipeSync` …
`gsSPEndDisplayList`) as `Gfx X[N/2]` with a `.dl.inc.c` include.

Detection heuristic (the same one `tools/typeRelocBlocks.py` uses for
u8 blocks):
  - body's first two u32 are `0xE7000000, 0x00000000` (gsDPPipeSync)
  - somewhere in the body, a `0xDF000000, 0x00000000` pair appears
    (gsSPEndDisplayList)
  - the block has an even number of u32 (DLs are 8-byte aligned)

The companion `.dl.inc.c` is regenerated from baserom by running
`tools/extractRelocInc.py` afterwards (the tool prints a reminder).

Usage:
    tools/retypeU32DLs.py <fid> [--apply]
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


_DECL_HEAD_RE = re.compile(
    r"^(?P<lead>\s*u32\s+(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"\[(?P<size>\d+)\])\s*=\s*\{\s*$"
)
_HEX_RE = re.compile(r"^\s*0x([0-9A-Fa-f]+)\s*,?\s*(?:/\*.*\*/)?\s*$")


def resolve(fid_arg):
    if fid_arg.endswith(".c") and os.path.exists(fid_arg):
        return os.path.abspath(fid_arg)
    if fid_arg.isdigit():
        fid = int(fid_arg)
        for fn in os.listdir(RELOC_DIR):
            m = re.match(r"^(\d+)_", fn)
            if m and int(m.group(1)) == fid and fn.endswith(".c"):
                return os.path.join(RELOC_DIR, fn)
    raise SystemExit(f"could not resolve '{fid_arg}'")


def derive_prefix(c_path):
    name = os.path.basename(c_path)[:-2]
    m = re.match(r"^\d+_(.+)$", name)
    return m.group(1) if m else name


def process(c_path, apply_changes):
    prefix = derive_prefix(c_path)
    with open(c_path) as f:
        text = f.read()
    lines = text.split("\n")
    edits = []
    i = 0
    while i < len(lines):
        m = _DECL_HEAD_RE.match(lines[i])
        if not m:
            i += 1
            continue
        sym = m.group("sym")
        size = int(m.group("size"))
        # Collect body
        body = []
        j = i + 1
        while j < len(lines) and not re.match(r"^\s*\};\s*$", lines[j]):
            body.append((j, lines[j]))
            j += 1
        if j >= len(lines):
            i += 1
            continue
        close_idx = j
        # Need at least one full DL header pair + terminator pair → ≥ 4 u32.
        if size < 4 or size % 2 != 0:
            i = close_idx + 1
            continue
        # Body lines may include chain-pointer expressions; parse them too.
        words = []
        line_idx_for_word = []
        for ln_i, ln in body:
            stripped = ln.strip()
            if not stripped:
                continue
            hm = _HEX_RE.match(ln)
            if hm:
                words.append(int(hm.group(1), 16))
                line_idx_for_word.append(ln_i)
                continue
            # Chain-pointer expression — treat as opaque non-zero word
            # (matters because we only need to recognise the DL prefix
            # and terminator).
            if "(u32)" in stripped or "(Gfx" in stripped:
                words.append(0xDEADBEEF)
                line_idx_for_word.append(ln_i)
                continue
            # Anything else: bail
            words = None
            break
        if words is None or len(words) != size:
            i = close_idx + 1
            continue
        # DL head: `0xE7000000, 0x00000000` at offset 0
        if not (words[0] == 0xE7000000 and words[1] == 0x00000000):
            i = close_idx + 1
            continue
        # Find terminator
        terminator_idx = None
        for k in range(2, size - 1, 2):
            if words[k] == 0xDF000000 and words[k + 1] == 0x00000000:
                terminator_idx = k
                break
        if terminator_idx is None:
            i = close_idx + 1
            continue
        # All good: retype.
        cmd_count = size // 2
        new_size = cmd_count
        local = sym
        file_lead = f"d{prefix}_"
        if local.startswith(file_lead):
            local = local[len(file_lead):]
        new_head = f"Gfx {sym}[{new_size}] = {{"
        new_body = f"\t#include <{prefix}/{local}.dl.inc.c>"
        edits.append((i, close_idx, sym, size, new_head, new_body))
        i = close_idx + 1
    if not edits:
        return [], False
    if apply_changes:
        for start, end, sym, n, new_head, new_body in reversed(edits):
            lines[start: end + 1] = [new_head, new_body, "};"]
        # Patch any matching forward `extern u32 X[N];` decls to
        # `extern Gfx X[N/2];` so the later Gfx decl doesn't conflict.
        edit_map = {sym: (n, n // 2) for _s, _e, sym, n, _h, _b in edits}
        extern_re = re.compile(
            r"^(?P<lead>\s*extern\s+)u32(?P<mid>\s+)"
            r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)"
            r"\s*\[(?P<size>\d+)\]\s*;\s*$"
        )
        for k, ln in enumerate(lines):
            em = extern_re.match(ln)
            if em and em.group("sym") in edit_map:
                _orig_n, new_n = edit_map[em.group("sym")]
                lines[k] = f"{em.group('lead')}Gfx{em.group('mid')}{em.group('sym')}[{new_n}];"
        with open(c_path, "w") as f:
            f.write("\n".join(lines))
    return edits, apply_changes


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="+", help="fid(s) or .c path(s)")
    ap.add_argument("--apply", action="store_true",
                    help="rewrite files in place (default: dry-run)")
    args = ap.parse_args()

    total = 0
    for tgt in args.targets:
        path = resolve(tgt)
        edits, applied = process(path, args.apply)
        rel = os.path.relpath(path, PROJECT_DIR)
        if not edits:
            print(f"{rel}: nothing to do")
            continue
        action = "rewrote" if applied else "would rewrite"
        print(f"{rel}: {action} {len(edits)} blocks → Gfx")
        for start, end, sym, n, _h, _b in edits:
            print(f"  L{start+1}-{end+1}  {sym}  (u32[{n}] → Gfx[{n//2}])")
        total += len(edits)
    if args.apply and total:
        print()
        print("--> run `python3 tools/extractRelocInc.py --version us <fid>` "
              "and `--version jp <fid>` to regenerate the .dl.inc.c files")


if __name__ == "__main__":
    main()
