#!/usr/bin/python3
"""Unify a fighter's JP motion-block names with US, driven by ftdata.c.

For each position in `dF<Char>MotionDescs` / `dF<Char>SubMotionDescs`, the
US entry names the canonical motion block and the JP entry resolves (via
relocSymIndex offsets) to a JP block address. The JP block AT that address
is renamed to the US name — a direct, per-array-position cross-reference
with NO positional interpolation, so every rename is justified by an
ftdata entry. ftdata rows then collapse to the single shared US name where
the JP block matches, and stay region-guarded (with the correct in-place
JP reference) where US and JP genuinely diverge.

Renaming never moves a block, so the post-rename symbol layout is derived
from the pre-rename relocSymIndex + the rename map — no rebuild is needed
between renaming the MainMotion source and rewriting ftdata.c.

Run on a clean (built) RELOC_DATA=1 tree so build/<v>/relocSymIndex.txt is
current. After running: rebuild both versions RELOC_DATA=1 (regenerates the
position-based motiondesc header) and verify byte-identical.

Usage: unifyMotionBlocks.py <Char> [--dry]      e.g.  Kirby
"""
import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FTDATA = os.path.join(PROJECT_DIR, "src", "ft", "ftdata.c")

# An FTMotionDesc entry: optional braces, 3 comma-separated fields, optional
# trailing comma. Handles braced `{ fid, expr, flag },`, flattened
# `fid, expr, flag,`, and the last-before-#else/} form with no comma. The
# flag field may carry `| 0x...` so it is matched as "anything but , or }".
ENTRY_RE = re.compile(
    r"^(?P<ind>\s*)\{?\s*"
    r"(?P<fid>&\w+|0x[0-9A-Fa-f]+)\s*,\s*"
    r"(?P<expr>[^,]+?)\s*,\s*"
    r"(?P<flag>[^,}]+?)\s*"
    r"\}?\s*(?P<comma>,?)\s*$"
)


def load_index(version):
    """build/<version>/relocSymIndex.txt -> {symbol: offset}."""
    path = os.path.join(PROJECT_DIR, "build", version, "relocSymIndex.txt")
    out = {}
    with open(path) as f:
        for ln in f:
            p = ln.split()
            if len(p) == 3:
                try:
                    out[p[0]] = int(p[2], 16)
                except ValueError:
                    pass
    return out


def shared_blocks(main_path):
    """Block names defined OUTSIDE any #if region (identical US/JP, must not
    be renamed — they are emitted once, unguarded)."""
    depth = 0
    shared = set()
    decl = re.compile(
        r"^(?:ftMotionCommand|u32|FTThrowHitDesc|FTKirbyCopy|FTModelPart|"
        r"FTHiddenPart|MObjSub|DObjDesc)\s+\*?\s*(d\w+)\s*\[")
    for ln in open(main_path):
        s = ln.strip()
        if s.startswith("#if"):
            depth += 1
        elif s.startswith("#endif"):
            depth -= 1
        elif s.startswith("#else"):
            pass
        elif depth == 0:
            m = decl.match(s)
            if m:
                shared.add(m.group(1))
    return shared


def parse_expr(prefix, e):
    """`d<Char>MainMotion_X` / `... + 0xN` -> (name, off); else (None, None)."""
    e = e.strip()
    m = re.match(prefix + r"(\w+)\s*\+\s*0x([0-9A-Fa-f]+)$", e)
    if m:
        return prefix + m.group(1), int(m.group(2), 16)
    m = re.match(prefix + r"(\w+)$", e)
    if m:
        return prefix + m.group(1), 0
    return None, None


def array_bounds(lines, name):
    """(decl_line, end_line) for `FTMotionDesc <name>[] = {` ... `};`."""
    for i, l in enumerate(lines):
        if re.match(r"FTMotionDesc " + re.escape(name) + r"\[\]", l.strip()):
            j = i + 1
            while j < len(lines) and lines[j].strip() != "};":
                j += 1
            return i, j
    return None, None


def motion_arrays(lines, char):
    """Every `FTMotionDesc dFT...[]` array whose body references this
    fighter's d<Char>MainMotion blocks (e.g. dFTKirbyMotionDescs AND the
    1P-mode dFTNKirbyMotionDescs variant), in source order."""
    prefix = "d%sMainMotion_" % char
    names = []
    for i, l in enumerate(lines):
        m = re.match(r"FTMotionDesc (dFT\w+)\[\] =", l.strip())
        if not m:
            continue
        j = i + 1
        while j < len(lines) and lines[j].strip() != "};":
            j += 1
        if prefix in "\n".join(lines[i:j]):
            names.append(m.group(1))
    return names


def parse_items(lines, start, end):
    """Yield ('pair', us_fields, jp_fields) for every entry (shared rows have
    us==jp), or ('raw', line) for passthrough. Pairs US/JP entries inside a
    `#if REGION_US / #else / #endif` block by index."""
    items = []
    i = start + 1
    guard = None
    us_buf, jp_buf = [], []
    while i < end:
        s = lines[i].strip()
        if s.startswith("#if defined(REGION_US)"):
            guard, us_buf, jp_buf = "us", [], []
        elif s == "#else" and guard == "us":
            guard = "jp"
        elif s.startswith("#endif") and guard:
            if len(us_buf) != len(jp_buf):
                sys.exit(f"guard US/JP entry count mismatch near line {i+1}")
            for u, j in zip(us_buf, jp_buf):
                items.append(("pair", u, j))
            guard = None
        else:
            m = ENTRY_RE.match(lines[i])
            if m:
                f = (m.group("ind"), m.group("fid"), m.group("expr").strip(),
                     m.group("flag").strip(), m.group("comma"))
                if guard == "us":
                    us_buf.append(f)
                elif guard == "jp":
                    jp_buf.append(f)
                else:
                    items.append(("pair", f, f))
            else:
                items.append(("raw", lines[i], None))
        i += 1
    return items


def build_rename(char, lines, us_idx, jp_idx, shared):
    """Cross-reference both arrays -> (old2new rename map, addr2canon)."""
    prefix = "d%sMainMotion_" % char
    jp_by_off = {}
    for n, o in jp_idx.items():
        if n.startswith(prefix):
            jp_by_off.setdefault(o, n)

    addr2canon = {}
    for arr in motion_arrays(lines, char):
        st, en = array_bounds(lines, arr)
        if st is None:
            continue
        for kind, us, jp in parse_items(lines, st, en):
            if kind != "pair":
                continue
            un, uo = parse_expr(prefix, us[2])
            jn, jo = parse_expr(prefix, jp[2])
            if un is None or jn is None or jn not in jp_idx:
                continue
            if uo != 0 or un in shared:
                continue  # US-side offset / shared canonical -> stays guarded
            tgt = jp_idx[jn] + jo
            blk = jp_by_off.get(tgt)
            if blk is None or blk in shared:
                continue  # mid-block / shared target -> stays guarded
            if tgt in addr2canon and addr2canon[tgt] != un:
                sys.exit("conflict at 0x%X: %s vs %s"
                         % (tgt, addr2canon[tgt], un))
            addr2canon[tgt] = un

    old2new = {}
    assigned = set(addr2canon.values())
    for off, canon in addr2canon.items():
        blk = jp_by_off[off]
        if blk not in shared:
            old2new[blk] = canon
    # demote non-shared squatters whose name a canonical now claims
    for off, name in jp_by_off.items():
        if name in old2new or name in shared:
            continue
        if name in assigned:
            old2new[name] = "%s0x%04X" % (prefix, off)

    news = list(old2new.values())
    dup = sorted({n for n in news if news.count(n) > 1})
    if dup:
        sys.exit("rename map not a bijection: %s" % dup)
    return old2new, addr2canon


def apply_rename(main_path, old2new, dry):
    """Rename blocks ONLY inside #if REGION_JP regions (US keeps US names).
    Atomic placeholder pass so the permutation can't self-collide."""
    changed = {k: v for k, v in old2new.items() if k != v}
    lines = open(main_path).read().split("\n")
    stack = []
    region = [False] * len(lines)
    for idx, ln in enumerate(lines):
        s = ln.strip()
        if s.startswith("#if defined(REGION_JP)"):
            stack.append("JP")
        elif s.startswith("#if"):
            stack.append("X")
        elif s.startswith("#else"):
            if stack and stack[-1] == "JP":
                stack[-1] = "JPE"
            elif stack and stack[-1] == "JPE":
                stack[-1] = "JP"
        elif s.startswith("#endif"):
            if stack:
                stack.pop()
        elif stack and stack[-1] == "JP":
            region[idx] = True
    ph = {o: "@@U%d@@" % i for i, o in enumerate(changed)}
    out = []
    for idx, ln in enumerate(lines):
        if region[idx]:
            for o, p in ph.items():
                ln = re.sub(r"\b" + re.escape(o) + r"\b", p, ln)
        out.append(ln)
    t = "\n".join(out)
    for o, p in ph.items():
        t = t.replace(p, changed[o])
    if not dry:
        open(main_path, "w").write(t)
    return len(changed)


def rewrite_ftdata(char, old2new, jp_idx, us_idx, shared, dry):
    """Collapse/guard the motion arrays using the post-rename layout. Resolves
    BOTH the US and JP reference of every row to its clean block symbol (an
    `X + 0xN` offset is rewritten to the symbol that actually lives at that
    address when one does), then collapses to a single shared row when both
    sides name the same symbol."""
    prefix = "d%sMainMotion_" % char
    # JP post-rename: offsets unchanged, names remapped by old2new.
    jp_post = {old2new.get(n, n): o for n, o in jp_idx.items()
               if n.startswith(prefix)}
    jp_by_off = {}
    for n, o in jp_idx.items():
        if n.startswith(prefix):
            jp_by_off.setdefault(o, old2new.get(n, n))
    # US blocks are never renamed.
    us_post = {n: o for n, o in us_idx.items() if n.startswith(prefix)}
    us_by_off = {}
    for n, o in us_idx.items():
        if n.startswith(prefix):
            us_by_off.setdefault(o, n)

    def resolve(expr, name_off, off_by, rename):
        """expr -> (clean source text, address) for one version. `rename`
        maps an original base name to its post-rename name (identity for US)."""
        b, off = parse_expr(prefix, expr)
        if b is None:
            return expr, None
        base = name_off.get(rename(b))
        if base is None:
            nb = rename(b)
            return (nb if off == 0 else "%s + 0x%X" % (nb, off)), None
        addr = base + off
        sym = off_by.get(addr)
        if sym is not None and name_off.get(sym) == addr:
            return sym, addr
        nb = rename(b)
        return (nb if off == 0 else "%s + 0x%X" % (nb, off)), addr

    def jp_ref(e):
        return resolve(e, jp_post, jp_by_off, lambda b: old2new.get(b, b))

    def us_ref(e):
        return resolve(e, us_post, us_by_off, lambda b: b)

    lines = open(FTDATA).read().split("\n")
    out = []
    pos = 0
    guards = 0
    for arr in motion_arrays(lines, char):
        st, en = array_bounds(lines, arr)
        if st is None:
            continue
        out += lines[pos:st + 1]
        for kind, us, jp in parse_items(lines, st, en):
            if kind == "raw":
                out.append(us)
                continue
            ind, fid, uexpr, uflag, _uc = us
            _ji, jfid, jexpr, jflag, _jc = jp
            uclean, _ua = us_ref(uexpr)
            jclean, _ja = jp_ref(jexpr)
            # Collapse to one shared row when both sides name the same symbol
            # (a symbol defined in both versions, at each version's own offset)
            # and the file-id/flags match.
            collapse = fid == jfid and uflag == jflag and uclean == jclean
            if collapse:
                out.append("%s{ %s, %s, %s }," % (ind, fid, uclean, uflag))
            else:
                out.append("#if defined(REGION_US)")
                out.append("%s{ %s, %s, %s }," % (ind, fid, uclean, uflag))
                out.append("#else")
                out.append("%s{ %s, %s, %s }," % (ind, jfid, jclean, jflag))
                out.append("#endif")
                guards += 1
        out.append(lines[en])
        pos = en + 1
    out += lines[pos:]
    if not dry:
        open(FTDATA, "w").write("\n".join(out))
    return guards


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("char")
    ap.add_argument("--dry", action="store_true")
    args = ap.parse_args()

    main_glob = [f for f in os.listdir(os.path.join(PROJECT_DIR, "src", "relocData"))
                 if re.match(r"\d+_%sMainMotion\.c$" % args.char, f)]
    if not main_glob:
        sys.exit("no MainMotion source for %s" % args.char)
    main_path = os.path.join(PROJECT_DIR, "src", "relocData", main_glob[0])

    us_idx = load_index("us")
    jp_idx = load_index("jp")
    shared = shared_blocks(main_path)
    lines = open(FTDATA).read().split("\n")

    old2new, addr2canon = build_rename(args.char, lines, us_idx, jp_idx, shared)
    n_ren = sum(1 for k, v in old2new.items() if k != v)
    print("%s: %d canonical mappings, %d block renames/demotions"
          % (args.char, len(addr2canon), n_ren))

    apply_rename(main_path, old2new, args.dry)
    guards = rewrite_ftdata(args.char, old2new, jp_idx, us_idx, shared, args.dry)
    print("ftdata: %d residual region guards%s"
          % (guards, " [dry]" if args.dry else ""))


if __name__ == "__main__":
    main()
