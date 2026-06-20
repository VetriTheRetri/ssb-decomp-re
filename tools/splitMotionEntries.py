#!/usr/bin/python3
"""Split a fighter's motion blocks at mid-block ftdata entry points.

Some FTMotionDesc entries reference a script that starts in the MIDDLE of a
block (`dXMotion_base + 0xN`), because the decompiler had no symbol there.
This splits the containing block at that exact byte offset so the entry point
becomes its own (generically-named) block. unifyMotionBlocks.py then renames
it to the canonical US move name and collapses/demotes as usual.

Splitting only introduces a label at an existing command boundary — it never
changes a byte — so the build stays byte-identical; the byte-compare gate is
the arbiter. Split points are found by word-counting the source elements with
genMotionDescOffsets' macro table (shared source of truth).

Run on a built RELOC_DATA=1 tree (needs the compiled .o layout). Usage:
    splitMotionEntries.py <Char> [--dry]
"""
import argparse
import os
import re
import subprocess
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
sys.path.insert(0, SCRIPT_DIR)
import genMotionDescOffsets as gmdo  # noqa: E402  (reuse word-count table)

FTDATA = os.path.join(PROJECT_DIR, "src", "ft", "ftdata.c")
VER_FID = {"us": None, "jp": None}  # filled from filename / index


def nm_layout(obj, prefix):
    """{name: (offset, size)} for this fighter's motion blocks in an .o."""
    out = {}
    for ln in subprocess.run(
            ["mips-linux-gnu-nm", "--print-size", "--numeric-sort", obj],
            capture_output=True, text=True).stdout.splitlines():
        p = ln.split()
        if len(p) == 4 and p[2] in "Dd" and p[3].startswith(prefix):
            out[p[3]] = (int(p[0], 16), int(p[1], 16))
    return out


def containing(layout, addr):
    """The block whose [off, off+size) contains addr (nearest start)."""
    best = None
    for n, (o, s) in layout.items():
        if o <= addr < o + s and (best is None or o > best[1]):
            best = (n, o, s)
    return best


def kirby_arrays(lines, prefix):
    spans = []
    for i, l in enumerate(lines):
        if re.match(r"FTMotionDesc dFT\w+\[\] =", l.strip()):
            j = i + 1
            while j < len(lines) and lines[j].strip() != "};":
                j += 1
            if prefix in "\n".join(lines[i:j]):
                spans.append((i, j))
    return spans


def collect_splits(char, us_lay, jp_lay):
    """Return {(version, block_name): set(split_byte_offsets)} for every
    mid-block ftdata entry point."""
    prefix = "d%sMainMotion_" % char
    lines = open(FTDATA).read().split("\n")
    spans = kirby_arrays(lines, prefix)

    def in_arr(n):
        return any(a <= n <= b for a, b in spans)

    layouts = {"us": us_lay, "jp": jp_lay}
    starts = {v: set(o for o, s in lay.values()) for v, lay in layouts.items()}
    off = {v: {n: o for n, (o, s) in lay.items()} for v, lay in layouts.items()}

    splits = {}
    guard = None
    for i, l in enumerate(lines):
        s = l.strip()
        if s.startswith("#if defined(REGION_US)"):
            guard = "us"
            continue
        if s == "#else" and guard == "us":
            guard = "jp"
            continue
        if s.startswith("#endif"):
            guard = None
            continue
        if not in_arr(i):
            continue
        m = re.match(r"\{\s*&ll(\w+?)FileID\s*,\s*(" + prefix
                     + r"\w+) \+ 0x([0-9A-Fa-f]+)", s)
        if not m:
            continue
        move = m.group(1).replace("FT" + char + "Anim", "")
        base, o = m.group(2), int(m.group(3), 16)
        for ver in (("us", "jp") if guard is None else (guard,)):
            if base not in off[ver]:
                continue
            tgt = off[ver][base] + o
            if tgt in starts[ver]:
                continue  # already a block start
            c = containing(layouts[ver], tgt)
            if c:
                splits.setdefault((ver, c[0]), {})[tgt - c[1]] = move
    return splits, off


def region_of(lines, idx):
    """'us', 'jp', or None for the #if region of source line idx."""
    depth = []
    for i in range(idx):
        s = lines[i].strip()
        if s.startswith("#if defined(REGION_JP)"):
            depth.append("jp")
        elif s.startswith("#if defined(REGION_US)"):
            depth.append("us")
        elif s.startswith("#if"):
            depth.append("x")
        elif s.startswith("#else") and depth:
            depth[-1] = {"jp": "us", "us": "jp", "x": "x"}[depth[-1]]
        elif s.startswith("#endif") and depth:
            depth.pop()
    return depth[-1] if depth else None


DECL_RE = re.compile(r"^(?P<type>ftMotionCommand|u32)\s+(?P<name>d\w+)\s*\[\]\s*=\s*\{$")


def find_decl(lines, name, version):
    """Line index of the `<type> <name>[] = {` whose region matches version
    ('us'/'jp' -> that branch; shared blocks match any)."""
    cands = []
    for i, l in enumerate(lines):
        m = DECL_RE.match(l.strip())
        if m and m.group("name") == name:
            cands.append(i)
    for i in cands:
        r = region_of(lines, i)
        if r == version or r is None:
            return i
    return cands[0] if cands else None


def apply_split(lines, decl_i, offsets):
    """Split the block at decl_i into pieces at the given byte offsets.
    Returns new lines. Each new piece is named d<...>_0x<abs?> — here we use
    the byte offset within the file's symbol space via the caller's naming."""
    m = DECL_RE.match(lines[decl_i].strip())
    btype = m.group("type")
    # collect body element lines until the closing `};`
    body = []
    j = decl_i + 1
    while j < len(lines) and lines[j].strip() != "};":
        body.append((j, lines[j]))
        j += 1
    end = j
    # cumulative byte offset before each element line
    cum = 0
    line_off = {}
    for (li, txt) in body:
        s = txt.strip()
        if not s or s.startswith("/*") or s.startswith("*") or s.startswith("//"):
            continue
        line_off[li] = cum
        cum += gmdo.count_words_in_body(s) * 4
    return btype, body, end, line_off


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("char")
    ap.add_argument("--dry", action="store_true")
    args = ap.parse_args()
    char = args.char
    prefix = "d%sMainMotion_" % char

    main_src = None
    fid_us = None
    for f in os.listdir(os.path.join(PROJECT_DIR, "src", "relocData")):
        mm = re.match(r"(\d+)_%sMainMotion\.c$" % char, f)
        if mm:
            main_src = os.path.join(PROJECT_DIR, "src", "relocData", f)
            fid_us = mm.group(1)
    if not main_src:
        sys.exit("no MainMotion source for %s" % char)
    us_obj = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData",
                          ".build", "%s.o" % fid_us)
    # jp fid from the jp index (same symbols, different file id)
    jp_fid = None
    for ln in open(os.path.join(PROJECT_DIR, "build", "jp", "relocSymIndex.txt")):
        p = ln.split()
        if len(p) == 3 and p[0].startswith(prefix):
            jp_fid = p[1]
            break
    jp_obj = os.path.join(PROJECT_DIR, "build", "jp", "src", "relocData",
                          ".build", "%s.o" % jp_fid)
    us_lay = nm_layout(us_obj, prefix)
    jp_lay = nm_layout(jp_obj, prefix)

    splits, off = collect_splits(char, us_lay, jp_lay)
    if not splits:
        print("no mid-block entry points")
        return

    lines = open(main_src).read().split("\n")
    existing = set(m.group("name") for m in
                   (DECL_RE.match(l.strip()) for l in lines) if m)

    def name_for(move, abs_off):
        """Always a generic offset-named symbol. unifyMotionBlocks.py then
        renames it to the canonical US block name (and demotes squatters),
        or resolves ftdata to it directly when there is no clean US name.
        (Naming after the move here is wrong: a move can have several entry
        points, and the canonical US name often carries an offset suffix.)"""
        return "%s0x%04X" % (prefix, abs_off)

    # apply per (version, block) — process file bottom-up so indices stay valid
    plan = []  # (decl_i, version, block, {offset: move})
    for (ver, block), offmap in splits.items():
        di = find_decl(lines, block, ver)
        if di is None:
            print("  WARN no decl for %s [%s]" % (block, ver))
            continue
        plan.append((di, ver, block, offmap))
    plan.sort(reverse=True)

    n = 0
    for di, ver, block, offmap in plan:
        btype, body, end, line_off = apply_split(lines, di, sorted(offmap))
        rev = {bo: li for li, bo in line_off.items()}
        insert_before = []
        for bo, move in offmap.items():
            if bo not in rev:
                print("  WARN %s [%s]: +0x%X not a command boundary; skip"
                      % (block, ver, bo))
                continue
            newname = name_for(move, off[ver][block] + bo)
            insert_before.append((rev[bo], newname, move))
        for li, newname, move in sorted(insert_before, reverse=True):
            block_lines = ["};", "", "%s %s[] = {" % (btype, newname)]
            lines[li:li] = block_lines
            # NOTE: don't add `newname` to `existing` — the same canonical move
            # name is intentionally reused across the US and JP branches (each
            # in its own #if region), and they must match for ftdata to collapse.
            n += 1
            print("  split %s [%s] -> %s  (%s)" % (block, ver, newname, move))

    if not args.dry:
        open(main_src, "w").write("\n".join(lines))
    print("%d split(s)%s" % (n, " [dry]" if args.dry else ""))


if __name__ == "__main__":
    main()
