#!/usr/bin/env python3
"""
Replace `((u8*)<sym> + 0xN)` byte-offset pointer arithmetic in relocData
C source with the matching block symbol when one exists.

Strategy: parse the .c file to collect every top-level decl symbol (plus
externs). For each `((u8*)<base> + 0xN)` occurrence, try these candidates
in order:
  1. `<base>_0xN`           — typed sub-block named by relative offset
  2. `<base>_sub_0xN`       — gap-split sub-block
  3. Compute `<base>`'s file offset from its trailing `_0xMM` (if any),
     add N, then look for any defined symbol whose name ends in `_0xKK`
     matching the absolute file offset.

If a single match is found, rewrite the `((u8*)X + 0xN)` to `X_match`
preserving the surrounding cast. If 0 or >1 matches, leave the line
alone and log a warning.

Usage:
    tools/fixByteOffsetPointers.py <fid_or_path> [...] [--apply]
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

_DECL_RE = re.compile(
    r"^\s*(?:static\s+|const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*\s*\*?\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[[^\]]*\])?\s*(?:=\s*\{|;)"
)

_EXTERN_RE = re.compile(
    r"^\s*extern\s+(?:const\s+)*"
    r"[A-Za-z_][A-Za-z_0-9]*\s*\*?\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[[^\]]*\])?\s*;"
)

_OFFSET_REF_RE = re.compile(
    r"\(\s*\(\s*u8\s*\*\)\s*"
    r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*\+\s*"
    r"0x(?P<off>[0-9A-Fa-f]+)\s*\)"
)

# Trailing `_0xNNN` suffix on a parent symbol, used to derive its file
# offset. We assume the last `_0xNNN` in the name (greedy match) is the
# file-offset tag. Names like `gap_0x18A8` → 0x18A8, `Layer1Anim_AnimJoint`
# has no trailing tag → no absolute offset known.
_TRAILING_OFFSET_RE = re.compile(r"_0x([0-9A-Fa-f]+)$")


def find_c_path(arg):
    if os.path.isabs(arg) and arg.endswith(".c"):
        return arg
    if arg.endswith(".c") and os.path.exists(arg):
        return os.path.abspath(arg)
    if arg.isdigit():
        fid = int(arg)
        for fn in os.listdir(RELOC_DIR):
            if fn.endswith(".c") and not fn.endswith(".jp.c"):
                m = re.match(r"^(\d+)_", fn)
                if m and int(m.group(1)) == fid:
                    return os.path.join(RELOC_DIR, fn)
        raise SystemExit(f"no .c file in src/relocData matches fid {fid}")
    cand = os.path.join(RELOC_DIR, arg)
    if os.path.exists(cand):
        return cand
    raise SystemExit(f"could not resolve '{arg}'")


def collect_symbols(text):
    """Return (sym_first_decl, by_abs_off) where:

      sym_first_decl: dict mapping each declared/externed d<...> name to
                      the earliest line number it appears on (1-based).
                      A symbol used at line N is only safe to reference
                      directly if `sym_first_decl[name] <= N` (i.e. an
                      extern or actual decl precedes the usage).
      by_abs_off:     int file-offset → [symbols at that offset].
    """
    sym_first_decl = {}
    by_abs_off = {}
    for i, line in enumerate(text.split("\n"), 1):
        m = _DECL_RE.match(line)
        if not m:
            m = _EXTERN_RE.match(line)
        if not m:
            continue
        name = m.group("name")
        if name not in sym_first_decl:
            sym_first_decl[name] = i
        # Extract trailing _0xNNN as the absolute file offset.
        tm = _TRAILING_OFFSET_RE.search(name)
        if tm:
            off = int(tm.group(1), 16)
            if name not in by_abs_off.setdefault(off, []):
                by_abs_off[off].append(name)
    return sym_first_decl, by_abs_off


def _parent_file_offset(base):
    """Return the file offset encoded in the parent's name (last `_0xNNN`
    suffix), or None if no such suffix."""
    m = _TRAILING_OFFSET_RE.search(base)
    if m:
        return int(m.group(1), 16)
    return None


def _strip_trailing_offset(base):
    """Return `base` with its trailing `_0xNNN` stripped, or `base` if
    no trailing offset."""
    return _TRAILING_OFFSET_RE.sub("", base)


def resolve_target(base, off, sym_first_decl, by_abs_off, usage_line):
    """Find a symbol matching base+off, declared/extern'd at or before
    `usage_line`. IDO treats an unseen identifier in a pointer
    expression as a tentative declaration at point of use; if the
    explicit forward extern then appears later, the build errors with
    `redeclaration`. So we only return a symbol that already has a
    declaration in scope at the rewrite site."""
    syms = sym_first_decl  # name -> first decl line

    def _in_scope(name):
        return name in syms and syms[name] <= usage_line

    # 1. Suffix-based: <base>_0xN / <base>_sub_0xN.
    suffix_variants = []
    for width in (0, 2, 3, 4, 5):
        for fmt in (f"{{:{width}X}}".format(off), f"{{:{width}x}}".format(off)):
            suffix_variants.append(f"0x{fmt}")
    candidates = []
    out_of_scope = []
    for suf_off in suffix_variants:
        for prefix in (f"{base}_", f"{base}_sub_"):
            c = f"{prefix}{suf_off}"
            if c in syms:
                if _in_scope(c):
                    if c not in candidates:
                        candidates.append(c)
                else:
                    if c not in out_of_scope:
                        out_of_scope.append(c)
    if len(candidates) == 1:
        return candidates[0], "suffix"
    if len(candidates) > 1:
        return None, f"ambiguous_suffix:{candidates}"
    if out_of_scope:
        return None, f"forward_extern_needed:{out_of_scope[0]}@L{syms[out_of_scope[0]]}"
    # 2. Absolute file offset via the int-keyed map.
    parent_off = _parent_file_offset(base)
    if parent_off is None:
        return None, "no_parent_file_offset"
    abs_off = parent_off + off
    abs_hits = by_abs_off.get(abs_off, [])
    in_scope_hits = [s for s in abs_hits if _in_scope(s)]
    if len(in_scope_hits) == 1:
        return in_scope_hits[0], f"abs_offset_0x{abs_off:X}"
    if len(in_scope_hits) > 1:
        in_scope_hits = sorted(in_scope_hits, key=len)
        return in_scope_hits[0], f"abs_offset_0x{abs_off:X}_picked_from:{in_scope_hits}"
    if abs_hits:
        return None, (f"forward_extern_needed:{abs_hits[0]}"
                      f"@L{syms[abs_hits[0]]}_abs_0x{abs_off:X}")
    return None, f"no_match_abs_0x{abs_off:X}"


def process_file(path, apply_changes):
    with open(path) as f:
        text = f.read()
    sym_first_decl, by_abs_off = collect_symbols(text)
    lines = text.split("\n")
    edits = []  # (line_no, old_expr, new_sym, reason)
    skips = []  # (line_no, old_expr, reason)
    new_lines = []
    for i, line in enumerate(lines, 1):
        new_line = line
        for m in _OFFSET_REF_RE.finditer(line):
            base = m.group("sym")
            off = int(m.group("off"), 16)
            sym, reason = resolve_target(base, off, sym_first_decl, by_abs_off, i)
            old_expr = m.group(0)
            if sym is None:
                skips.append((i, old_expr, reason))
                continue
            new_line = new_line.replace(old_expr, sym, 1)
            edits.append((i, old_expr, sym, reason))
        new_lines.append(new_line)

    if apply_changes and edits:
        with open(path, "w") as f:
            f.write("\n".join(new_lines))
    return edits, skips


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("targets", nargs="+")
    ap.add_argument("--apply", action="store_true",
                    help="rewrite files in place (default: dry-run)")
    ap.add_argument("--quiet", action="store_true",
                    help="suppress per-edit output; show summary only")
    args = ap.parse_args()

    total_edits = 0
    total_skips = 0
    for tgt in args.targets:
        path = find_c_path(tgt)
        edits, skips = process_file(path, args.apply)
        rel = os.path.relpath(path, PROJECT_DIR)
        if not edits and not skips:
            continue
        verb = "rewrote" if args.apply else "would rewrite"
        if not args.quiet:
            print(f"{rel}: {verb} {len(edits)} ref(s), skipped {len(skips)}")
            for ln, old, new, why in edits:
                print(f"  L{ln}  {old} -> {new}  [{why}]")
            for ln, old, why in skips:
                print(f"  L{ln}  {old}  SKIP [{why}]")
        else:
            print(f"{rel}: {verb} {len(edits)}, skipped {len(skips)}")
        total_edits += len(edits)
        total_skips += len(skips)
    if args.apply:
        print(f"\n--> {total_edits} refs rewritten ({total_skips} skipped). "
              f"Run validator + build to confirm byte-identity.")
    else:
        print(f"\n--> dry-run: {total_edits} refs would be rewritten, "
              f"{total_skips} skipped.")


if __name__ == "__main__":
    main()
