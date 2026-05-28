#!/usr/bin/env python3
"""Apply mechanical fixes for validator rules R015 + R017.

R015: rewrite the MObjSub `fmt`/`siz` and `block_fmt`/`block_siz` fields
from raw ints (e.g. `3, 2`) to `G_IM_FMT_*` / `G_IM_SIZ_*` macros.

R017: drop a trailing `PAD(N);` (build-time alignment handles it).

Both transforms preserve compiled byte output — R015 changes are token-
level, R017 removes a decl whose only effect is now redundant with the
linker's section padding.
"""
from __future__ import annotations
import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

FMT_MAP = {
    0: "G_IM_FMT_RGBA",
    1: "G_IM_FMT_YUV",
    2: "G_IM_FMT_CI",
    3: "G_IM_FMT_IA",
    4: "G_IM_FMT_I",
}
SIZ_MAP = {
    0: "G_IM_SIZ_4b",
    1: "G_IM_SIZ_8b",
    2: "G_IM_SIZ_16b",
    3: "G_IM_SIZ_32b",
}

DECL_HEAD_RE = re.compile(
    r"^\s*MObjSub\b(?:\s*\*+)?\s+(?P<name>d[A-Za-z_][A-Za-z_0-9]*)"
)
PAD_RE = re.compile(r"^\s*PAD\s*\(\s*(?P<n>\d+)\s*\)\s*;")

VAL_LINE_RE = re.compile(
    r"^(?P<indent>\s*)(?P<f>[A-Za-z_][A-Za-z_0-9]*|0x[0-9A-Fa-f]+|\d+)"
    r"\s*,\s*"
    r"(?P<s>[A-Za-z_][A-Za-z_0-9]*|0x[0-9A-Fa-f]+|\d+)"
    r"(?P<trail>\s*,?\s*)$"
)


def _try_int(tok: str) -> int | None:
    try:
        return int(tok, 0)
    except ValueError:
        return None


def _is_fmt_macro(tok: str) -> bool:
    return tok.startswith("G_IM_FMT_")


def _is_siz_macro(tok: str) -> bool:
    return tok.startswith("G_IM_SIZ_")


def _walk_mobjsub_value_lines(lines: list[str], start_idx: int) -> list[int]:
    """Return the indices in `lines` (0-based) corresponding to the
    positional value-lines of a MObjSub initializer beginning at
    `start_idx`.

    Handles three head forms:
      MObjSub X[1] = { { ... } };   (array-of-one, two levels of `{`)
      MObjSub X = { ... };          (single, one level of `{`)
      MObjSub X[1] = {              (array head + body)
          { ... },
      };

    Value-lines are non-blank, non-comment, non-include lines inside the
    initializer body that hold initializer expressions (skipping `{` /
    `}` / `};` / `},` openers and closers)."""
    n = len(lines)
    i = start_idx
    # Find first `{` opening any initializer body. Brace-counter starts
    # at zero and tracks the running depth so we exit only when the
    # outermost initializer closes (`depth` returns to 0).
    while i < n and "{" not in lines[i]:
        i += 1
    if i >= n:
        return []
    # Initial depth from the head line's braces.
    depth = lines[i].count("{") - lines[i].count("}")
    i += 1
    positions: list[int] = []
    while i < n and depth > 0:
        raw = lines[i]
        stripped = re.sub(r"/\*.*?\*/", "", raw)
        stripped = re.sub(r"//.*$", "", stripped).strip()
        depth += stripped.count("{") - stripped.count("}")
        if (stripped and not stripped.startswith("#")
                and stripped not in ("{", "}", "};", "},")):
            positions.append(i)
        i += 1
        if depth <= 0:
            break
        if len(positions) >= 15:
            break
    return positions


def fix_r015_in_file(path: str) -> int:
    """Rewrite raw fmt/siz pairs in MObjSub initializers. Returns # of
    lines modified."""
    with open(path, encoding="utf-8") as f:
        lines = f.read().split("\n")
    modified = 0
    i = 0
    while i < len(lines):
        m = DECL_HEAD_RE.match(lines[i])
        if not m:
            i += 1
            continue
        positions = _walk_mobjsub_value_lines(lines, i)
        for slot_idx in (1, 10):
            if slot_idx >= len(positions):
                continue
            line_no = positions[slot_idx]
            line = lines[line_no]
            # Strip trailing comment to classify, then preserve when rewriting.
            comment = ""
            comment_match = re.search(r"\s*(/\*.*?\*/|//.*)$", line)
            if comment_match:
                comment = comment_match.group(0)
                code = line[:comment_match.start()]
            else:
                code = line
            vm = VAL_LINE_RE.match(code)
            if not vm:
                continue
            f_tok = vm.group("f")
            s_tok = vm.group("s")
            if _is_fmt_macro(f_tok) and _is_siz_macro(s_tok):
                continue
            f_int = _try_int(f_tok)
            s_int = _try_int(s_tok)
            if f_int is None or s_int is None:
                continue
            new_f = FMT_MAP.get(f_int)
            new_s = SIZ_MAP.get(s_int)
            if new_f is None or new_s is None:
                continue
            indent = vm.group("indent")
            trail = vm.group("trail")
            lines[line_no] = f"{indent}{new_f}, {new_s}{trail}{comment}"
            modified += 1
        i += 1
    if modified:
        with open(path, "w", encoding="utf-8") as f:
            f.write("\n".join(lines))
    return modified


def fix_r017_in_file(path: str) -> bool:
    """Remove a trailing `PAD(N);` from the end of the file. Returns
    True if the file was modified."""
    with open(path, encoding="utf-8") as f:
        text = f.read()
    lines = text.split("\n")
    # Walk backward, skipping blanks/comments.
    i = len(lines) - 1
    pad_line = None
    while i >= 0:
        s = lines[i].strip()
        if not s:
            i -= 1
            continue
        if s.startswith("/*") or s.startswith("//") or s.startswith("*"):
            i -= 1
            continue
        if PAD_RE.match(lines[i]):
            pad_line = i
        break
    if pad_line is None:
        return False
    # Remove the PAD line. Also collapse any extra leading blank line
    # immediately above it (keep at most one blank between prior content
    # and EOF).
    del lines[pad_line]
    # Trim trailing blanks at end-of-file so we leave exactly one final
    # newline (matches the rest of the corpus's style).
    while lines and not lines[-1].strip():
        lines.pop()
    lines.append("")  # final newline
    with open(path, "w", encoding="utf-8") as f:
        f.write("\n".join(lines))
    return True


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("targets", nargs="*",
                    help="files to process (default: all R015/R017 hits "
                    "from the validator)")
    ap.add_argument("--rule", choices=("R015", "R017", "both"),
                    default="both")
    ap.add_argument("--report", default="/tmp/rules_R015_R016_R017.txt",
                    help="validator report path used to discover files")
    args = ap.parse_args()

    if args.targets:
        files = list(args.targets)
    else:
        files = set()
        with open(args.report) as f:
            for line in f:
                if args.rule in ("R015", "both") and "[R015 " in line:
                    files.add(line.split(":", 1)[0])
                if args.rule in ("R017", "both") and "[R017 " in line:
                    files.add(line.split(":", 1)[0])
        files = sorted(files)

    r015_changes = 0
    r017_changes = 0
    for path in files:
        if not path.startswith("/"):
            path = os.path.join(PROJECT_DIR, path)
        if args.rule in ("R015", "both"):
            n = fix_r015_in_file(path)
            if n:
                print(f"R015  {path}: {n} fields rewritten")
                r015_changes += n
        if args.rule in ("R017", "both"):
            if fix_r017_in_file(path):
                print(f"R017  {path}: removed trailing PAD")
                r017_changes += 1

    print()
    print(f"R015: {r015_changes} fmt/siz lines rewritten")
    print(f"R017: {r017_changes} trailing PADs removed")


if __name__ == "__main__":
    main()
