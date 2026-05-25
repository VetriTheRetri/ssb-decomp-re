#!/usr/bin/env python3
"""
Retype `u32 X[N]` arrays whose every entry is `(u32)<sym>,` (where
`<sym>` is an AObjEvent32 script) or `0x00000000,` (NULL) as
`AObjEvent32 *X[N]` with each entry rewritten to
`(AObjEvent32 *)<sym>` / `NULL`.

Detection:
  - body has only `(u32)<sym>,` or `0x00000000,` lines
  - at least one entry is a `(u32)<sym>,` cast (we want to type to
    AObjEvent32 *, not turn a pure-zero array into a pointer array)

Usage:
    tools/typeAObjEvent32PtrArrays.py <fid> [--apply]

The tool also patches matching `extern u32 X[N];` forward decls to
`extern AObjEvent32 *X[N];`.
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


_HEAD_RE = re.compile(
    r"^(?P<lead>\s*u32\s+(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"\[(?P<size>\d*)\])\s*=\s*\{\s*$"
)
_CLOSE_RE = re.compile(r"^\s*\};\s*$")
_PTR_LINE_RE = re.compile(
    r"^(?P<lead>\s*)\(u32\)\s*(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*,(?P<tail>.*)$"
)
_ZERO_LINE_RE = re.compile(
    r"^(?P<lead>\s*)0x0+\s*,(?P<tail>.*)$"
)


def resolve(arg):
    if arg.endswith(".c") and os.path.exists(arg):
        return os.path.abspath(arg)
    if arg.isdigit():
        fid = int(arg)
        for fn in os.listdir(RELOC_DIR):
            m = re.match(r"^(\d+)_", fn)
            if m and int(m.group(1)) == fid and fn.endswith(".c"):
                return os.path.join(RELOC_DIR, fn)
    raise SystemExit(f"could not resolve '{arg}'")


def process(c_path, apply_changes):
    with open(c_path) as f:
        text = f.read()
    lines = text.split("\n")
    edits = []  # (head_idx, close_idx, sym, [(line_idx, new_line)])
    i = 0
    while i < len(lines):
        m = _HEAD_RE.match(lines[i])
        if not m:
            i += 1
            continue
        sym = m.group("sym")
        j = i + 1
        body_idxs = []
        ok = True
        ptr_count = 0
        new_body = []
        while j < len(lines) and not _CLOSE_RE.match(lines[j]):
            ln = lines[j]
            if not ln.strip():
                j += 1
                continue
            body_idxs.append(j)
            pm = _PTR_LINE_RE.match(ln)
            if pm:
                ptr_count += 1
                new_ln = (
                    f"{pm.group('lead')}(AObjEvent32 *){pm.group('sym')},"
                    f"{pm.group('tail')}"
                )
                new_body.append((j, new_ln))
                j += 1
                continue
            zm = _ZERO_LINE_RE.match(ln)
            if zm:
                new_ln = f"{zm.group('lead')}NULL,{zm.group('tail')}"
                new_body.append((j, new_ln))
                j += 1
                continue
            ok = False
            break
        if j >= len(lines):
            i += 1
            continue
        close_idx = j
        if not ok or ptr_count == 0:
            i = close_idx + 1
            continue
        # Retype: u32 → AObjEvent32 *.
        old_head = lines[i]
        new_head = re.sub(
            r"u32(\s+)" + re.escape(sym),
            r"AObjEvent32 *\1" + sym,
            old_head,
            count=1,
        )
        edits.append((i, close_idx, sym, new_head, new_body))
        i = close_idx + 1
    if not edits:
        return [], False
    if apply_changes:
        sym_set = {sym for _h, _c, sym, _nh, _nb in edits}
        for head_idx, close_idx, sym, new_head, new_body in reversed(edits):
            lines[head_idx] = new_head
            for ln_i, new_ln in new_body:
                lines[ln_i] = new_ln
        # Patch matching extern decls (size may be empty `[]` or `[N]`).
        extern_re = re.compile(
            r"^(?P<lead>\s*extern\s+)u32(?P<mid>\s+)"
            r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)"
            r"\s*\[(?P<size>\d*)\]\s*;\s*$"
        )
        for k, ln in enumerate(lines):
            em = extern_re.match(ln)
            if em and em.group("sym") in sym_set:
                size_str = em.group('size')
                lines[k] = (
                    f"{em.group('lead')}AObjEvent32 *"
                    f"{em.group('mid')}{em.group('sym')}"
                    f"[{size_str}];"
                )
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
        print(f"{rel}: {action} {len(edits)} arrays → AObjEvent32 *")
        for head_idx, _c, sym, _nh, new_body in edits:
            print(f"  L{head_idx+1}  {sym}  ({len(new_body)} entries)")
        total += len(edits)
    if args.apply and total:
        print(f"\n--> verify byte-identity (no .inc.c regen needed)")


if __name__ == "__main__":
    main()
