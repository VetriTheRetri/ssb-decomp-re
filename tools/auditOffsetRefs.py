#!/usr/bin/env python3
"""
Inventory every `(<cast>)((u8*)&<sym> + 0x<offset>)` reference in
src/relocData/*.c and report whether the target offset has an existing
symbol at exactly that file position. Categories:

  EXACT     a typed symbol exists at the target offset (sym+0)   → safe to rewrite
            the reference to `(<cast>)&<target_sym>`.
  PARTIAL   a symbol covers the offset but at non-zero internal
            position (sym+N, N>0)                                → either rewrite as
            `(<cast>)((u8*)&<target_sym>+0xN)` or split the parent
            so the reference becomes EXACT.
  ORPHAN    no symbol covers the offset                          → unusual — needs
            investigation.

Optionally rewrites EXACT-category references in-place when --apply
is passed; the existing splitter (splitTexBlocksAtChainRefs.py) handles
PARTIAL when the target should be split.

Usage:
    tools/auditOffsetRefs.py                 # inventory only
    tools/auditOffsetRefs.py --apply         # rewrite EXACT refs in place
    tools/auditOffsetRefs.py --fid <id> [--apply]
"""
import argparse
import bisect
import os
import re
import subprocess
import glob

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData", ".build")

# Match `(<anything>) ( (u8*) & <sym> + 0x<offset> )`. Permissive cast.
REF_RE = re.compile(
    r"(?P<full>\((?P<cast>[^)]+)\)\s*\(\s*\(u8\*\)\s*&\s*(?P<sym>\w+)\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\s*\))"
)


def nm_for_fid(fid):
    obj = os.path.join(BUILD_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        return None
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for line in r.stdout.splitlines():
        p = line.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    return syms


def covering_symbol(target_off, sorted_syms):
    """Return (sym_name, delta) for the symbol whose range covers
    target_off, where delta is target_off - sym_off."""
    offsets = [v for _, v in sorted_syms]
    i = bisect.bisect_right(offsets, target_off) - 1
    if i < 0:
        return None, None
    sym_off = sorted_syms[i][1]
    sym_name = sorted_syms[i][0]
    return sym_name, target_off - sym_off


def process_file(c_path, apply):
    fname = os.path.basename(c_path)
    fid = int(fname.split("_", 1)[0])
    syms = nm_for_fid(fid)
    if syms is None:
        return None  # not built
    sorted_syms = sorted(syms.items(), key=lambda kv: kv[1])

    with open(c_path) as f:
        text = f.read()

    counts = {"EXACT": 0, "PARTIAL_CROSS": 0, "PARTIAL_SELF": 0, "ORPHAN": 0}
    exact_examples = []
    partial_cross_examples = []
    partial_self_examples = []
    orphan_examples = []
    rewritten = 0

    new_text = text
    rewrites = []
    for m in REF_RE.finditer(text):
        sym = m.group("sym")
        off = int(m.group("off"), 16)
        cast = m.group("cast").strip()
        if sym not in syms:
            continue
        target_abs = syms[sym] + off
        target_sym, delta = covering_symbol(target_abs, sorted_syms)
        if target_sym is None:
            counts["ORPHAN"] += 1
            orphan_examples.append((sym, off, target_abs))
            continue
        if delta == 0 and target_sym != sym:
            counts["EXACT"] += 1
            exact_examples.append((sym, off, target_sym))
            new_ref = f"({cast})&{target_sym}"
            rewrites.append((m.group("full"), new_ref))
        elif delta == 0 and target_sym == sym:
            pass  # 0-offset self-ref: degenerate
        elif target_sym != sym:
            # Cross-block partial — `(cast)((u8*)&parent + N)` can be cleaner
            # as `(cast)((u8*)&adjacent_sym + (N - sibling_gap))`. Same bytes,
            # but the reference now reads as "into the sibling block" instead
            # of "into the previous block by an opaque offset".
            counts["PARTIAL_CROSS"] += 1
            partial_cross_examples.append((sym, off, target_sym, delta))
            if delta == 0:
                new_ref = f"({cast})&{target_sym}"
            else:
                new_ref = f"({cast})((u8*)&{target_sym} + 0x{delta:X})"
            rewrites.append((m.group("full"), new_ref))
        else:
            # Same sym, non-zero delta — pointing inside its own block
            counts["PARTIAL_SELF"] += 1
            partial_self_examples.append((sym, off, target_sym, delta))

    if apply and rewrites:
        # Apply via repeated replace; uses the first occurrence each time.
        for old, new in rewrites:
            new_text = new_text.replace(old, new, 1)
            rewritten += 1
        if rewritten:
            with open(c_path, "w") as f:
                f.write(new_text)

    return {
        "fname": fname, "counts": counts,
        "exact_examples": exact_examples,
        "partial_cross_examples": partial_cross_examples,
        "partial_self_examples": partial_self_examples,
        "orphan_examples": orphan_examples,
        "rewritten": rewritten,
    }


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true",
                    help="Rewrite EXACT-category refs in place")
    ap.add_argument("--fid", type=int, default=None,
                    help="Limit to one file id")
    ap.add_argument("--show-examples", type=int, default=3,
                    help="How many examples per category to show per file")
    args = ap.parse_args()

    paths = sorted(glob.glob(os.path.join(SRC_DIR, "*.c")))
    if args.fid is not None:
        paths = [p for p in paths if os.path.basename(p).startswith(f"{args.fid}_")]

    totals = {"EXACT": 0, "PARTIAL_CROSS": 0, "PARTIAL_SELF": 0, "ORPHAN": 0}
    rewritten_total = 0
    files_with_refs = 0
    no_build = 0

    for p in paths:
        result = process_file(p, args.apply)
        if result is None:
            no_build += 1
            continue
        c = result["counts"]
        if sum(c.values()) == 0:
            continue
        files_with_refs += 1
        for k, v in c.items():
            totals[k] += v
        rewritten_total += result["rewritten"]
        print(f"{result['fname']}: EXACT={c['EXACT']} PARTIAL_CROSS={c['PARTIAL_CROSS']} PARTIAL_SELF={c['PARTIAL_SELF']} ORPHAN={c['ORPHAN']}"
              + (f"  (rewrote {result['rewritten']})" if args.apply else ""))
        if args.show_examples and c["PARTIAL_CROSS"]:
            for sym, off, tsym, delta in result["partial_cross_examples"][:args.show_examples]:
                print(f"  PARTIAL_CROSS: (<cast>)((u8*)&{sym} + 0x{off:X}) → {tsym}+0x{delta:X}")
        if args.show_examples and c["PARTIAL_SELF"]:
            for sym, off, tsym, delta in result["partial_self_examples"][:args.show_examples]:
                print(f"  PARTIAL_SELF: (<cast>)((u8*)&{sym} + 0x{off:X}) — internal index, leave as-is")
        if args.show_examples and c["ORPHAN"]:
            for sym, off, abs_off in result["orphan_examples"][:args.show_examples]:
                print(f"  ORPHAN: (<cast>)((u8*)&{sym} + 0x{off:X}) → abs 0x{abs_off:X}, no covering sym")

    print(f"\nTotals: EXACT={totals['EXACT']}  PARTIAL_CROSS={totals['PARTIAL_CROSS']}  PARTIAL_SELF={totals['PARTIAL_SELF']}  ORPHAN={totals['ORPHAN']}")
    print(f"Files scanned (with refs): {files_with_refs}")
    print(f"Files skipped (no .o built): {no_build}")
    if args.apply:
        print(f"References rewritten: {rewritten_total}")


if __name__ == "__main__":
    main()
