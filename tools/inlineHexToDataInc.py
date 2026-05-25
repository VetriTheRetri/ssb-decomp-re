#!/usr/bin/env python3
"""
Convert inline raw-hex `u32 X[N] = { 0x…, 0x…, };` blocks in
relocData `.c` files to `#include <... .data.inc.c>` form. The
companion `.inc.c` is regenerated from baserom via
`tools/extractRelocInc.py`.

Use this for blocks the validator flags with R005 (genuine raw hex
dumps that aren't really structured data). Skips:
  - blocks whose body holds anything other than `0xXXXXXXXX,` lines
    (and trailing comments) — i.e. blocks with chain-pointer
    expressions, macro calls, etc.
  - blocks smaller than --min-entries (default 4).

Usage:
    tools/inlineHexToDataInc.py <fid_or_path> [--apply] [--all]
                                              [--min-entries N]
                                              [--include-prefix DIR]

`--include-prefix` selects the path inside `#include <...>`. It is
inferred from the file basename by default (e.g.
`52_MVCommon.c` → `MVCommon/<sym>.data.inc.c`).

When `--apply` is passed, the source is rewritten in place. Run
`tools/extractRelocInc.py --version us <fid>` afterwards (the tool
will print a reminder).
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


_HEX_LINE_RE = re.compile(r"^\s*0x[0-9A-Fa-f]+\s*,\s*(?:/\*.*\*/\s*)?$")
_DECL_HEAD_RE = re.compile(
    r"^(?P<lead>\s*u32\s+(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"\[(?P<size>[0-9]*)\])\s*=\s*\{"
)


def resolve_path(arg):
    if arg.endswith(".c") and os.path.exists(arg):
        return os.path.abspath(arg)
    if arg.isdigit():
        fid = int(arg)
        for fn in os.listdir(RELOC_DIR):
            m = re.match(r"^(\d+)_", fn)
            if m and int(m.group(1)) == fid and fn.endswith(".c"):
                return os.path.join(RELOC_DIR, fn)
        raise SystemExit(f"no .c for fid {fid}")
    raise SystemExit(f"could not resolve '{arg}'")


def derive_include_prefix(c_path):
    """`src/relocData/52_MVCommon.c` → `MVCommon`."""
    name = os.path.basename(c_path)[:-2]  # strip `.c`
    m = re.match(r"^\d+_(.+)$", name)
    return m.group(1) if m else name


def short_name(sym):
    """Trim the leading `d<FileName>_` prefix so the include path stays
    readable. Example: `dMVCommon_Room_AnimJoint_data` →
    `Room_AnimJoint_data` if we can identify the file prefix."""
    # Caller drops the file prefix; we just return the symbol as-is.
    return sym


def process(c_path, apply_changes, min_entries, include_prefix=None,
            target_sym=None):
    prefix = include_prefix or derive_include_prefix(c_path)
    with open(c_path) as f:
        text = f.read()
    lines = text.split("\n")
    i = 0
    edits = []  # list of (start_line, end_line, sym, n_entries)
    while i < len(lines):
        m = _DECL_HEAD_RE.match(lines[i])
        if not m:
            i += 1
            continue
        sym = m.group("name")
        if target_sym and sym != target_sym:
            i += 1
            continue
        size_str = m.group("size")
        explicit_size = bool(size_str)
        size = int(size_str) if size_str else 0  # 0 = auto-sized (`u32 X[]`)
        j = i + 1
        body_lines = []
        ok = True
        while j < len(lines):
            stripped = lines[j].rstrip()
            if re.match(r"^\s*\};\s*$", stripped):
                break
            body_lines.append(j)
            if not _HEX_LINE_RE.match(lines[j]):
                ok = False
                break
            j += 1
        if not ok or len(body_lines) < min_entries:
            i = j + 1 if j < len(lines) else i + 1
            continue
        # All clear: replace body with #include.
        local_sym = sym
        # Drop the file's `d<FileName>_` prefix for path readability.
        file_lead = f"d{prefix}_"
        if local_sym.startswith(file_lead):
            local_sym = local_sym[len(file_lead):]
        new_include = f"\t#include <{prefix}/{local_sym}.data.inc.c>"
        # For auto-sized `u32 X[]` decls we ALSO need to make the size
        # explicit. The build's extractRelocInc.py uses the .c
        # initializer to compute the per-block byte size — once the
        # initializer is an `#include`, the parser sees zero entries
        # and writes a truncated inc.c. Patch the head line so the
        # size becomes `[N]`.
        head_patch = None
        if not explicit_size:
            old_head = lines[i]
            new_head = old_head.replace(
                f"{sym}[]", f"{sym}[{len(body_lines)}]"
            )
            if new_head != old_head:
                head_patch = (i, new_head)
        edits.append((i, j, sym, len(body_lines), new_include, head_patch))
        i = j + 1
    if not edits:
        return [], False

    if apply_changes:
        # Apply edits from end to keep indices stable.
        for start, end, sym, n, new_inc, head_patch in reversed(edits):
            lines[start + 1: end] = [new_inc]
            if head_patch:
                hp_idx, hp_new = head_patch
                lines[hp_idx] = hp_new
        with open(c_path, "w") as f:
            f.write("\n".join(lines))
    return edits, apply_changes


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="+", help="fid(s) or .c path(s)")
    ap.add_argument("--apply", action="store_true",
                    help="rewrite files in place (default: dry-run)")
    ap.add_argument("--min-entries", type=int, default=4,
                    help="skip blocks with fewer than N hex entries (default 4)")
    ap.add_argument("--symbol",
                    help="only rewrite a specific symbol within the file")
    args = ap.parse_args()

    total_edits = 0
    for tgt in args.targets:
        path = resolve_path(tgt)
        edits, applied = process(path, args.apply, args.min_entries,
                                  target_sym=args.symbol)
        rel = os.path.relpath(path, PROJECT_DIR)
        if not edits:
            print(f"{rel}: nothing to do")
            continue
        action = "rewrote" if applied else "would rewrite"
        print(f"{rel}: {action} {len(edits)} blocks")
        for start, end, sym, n, _new_inc, head_patch in edits:
            extra = "  (+explicit size)" if head_patch else ""
            print(f"  L{start+1}-{end+1}  {sym}  ({n} entries){extra}")
        total_edits += len(edits)
    if args.apply and total_edits:
        print()
        print(f"--> run `python3 tools/extractRelocInc.py --version us <fids>` "
              f"and `--version jp <fids>` to regenerate the .data.inc.c files")


if __name__ == "__main__":
    main()
