#!/usr/bin/env python3
"""Walk a relocData file's intern + extern chains directly from the
binary, then classify every pointer position by whether it lands in:

  (a) An UNTYPED block — a `u8 ...[N] = { #include <X.data.inc.c> };`
      decl. Chain pointers that land here mean we still have raw bytes
      where typed data should be. High-priority retype targets.

  (b) A typed block but at a NON-ZERO offset and not at a top-level
      sub-decl head. Could be a struct field (e.g. DObjDesc[k].dl is
      at +k*44+4) — perfectly fine — or hardcoded `(u8*)X + 0xN`
      arithmetic that should be promoted to its own variable.

  (c) A typed block AT offset 0 of a known sub-decl. Clean — the
      pointer's location IS its own first-class symbol.

The chain mechanism: each u32 pointer in the file holds
    (next_ptr_word << 16) | target_word
where word = byte_offset/4. When next_ptr_word == 0xFFFF the chain
ends. Two parallel chains run through the file (intern + extern); the
heads come from `assets/<v>/relocData.csv` columns 2 and 4.

Usage:
    python3 tools/walkRelocChains.py <fid> [--version us|jp]
                                            [--include-clean]
                                            [--show-targets]
"""

import argparse
import csv
import re
import struct
import subprocess
import sys
from pathlib import Path


PROJECT = Path(__file__).resolve().parent.parent
SRC = PROJECT / "src" / "relocData"


def chain_starts(version: str, fid: int):
    """Return (intern_start_word, extern_start_word) from the version's CSV."""
    csv_path = PROJECT / "assets" / version / "relocData.csv"
    with csv_path.open() as f:
        reader = csv.reader(f)
        next(reader)  # header
        for i, row in enumerate(reader):
            if i == fid:
                return int(row[2].strip(), 16), int(row[4].strip(), 16)
    raise SystemExit(f"fid {fid} not found in {csv_path}")


def walk_chain(data: bytes, start_word: int):
    """Yield (ptr_byte_offset, raw_word, target_word) until chain end."""
    if start_word == 0xFFFF:
        return
    ptr = start_word * 4
    visited = set()
    while True:
        if ptr in visited:
            print(f"WARN: chain loops at byte 0x{ptr:X}", file=sys.stderr)
            return
        visited.add(ptr)
        if ptr + 4 > len(data):
            print(f"WARN: chain pointer 0x{ptr:X} past EOF", file=sys.stderr)
            return
        word = struct.unpack(">I", data[ptr:ptr + 4])[0]
        next_word = (word >> 16) & 0xFFFF
        target_word = word & 0xFFFF
        yield ptr, word, target_word
        if next_word == 0xFFFF:
            return
        ptr = next_word * 4


def load_symbols(o_path: Path):
    """Return [(byte_off, sym_name, size_bytes_or_None)] sorted by offset.
    Uses `nm --print-size` to capture sizes when available."""
    out = subprocess.run(
        ["nm", "--print-size", str(o_path)],
        capture_output=True, text=True, check=True
    ).stdout
    syms = []
    for line in out.splitlines():
        parts = line.split()
        # `<addr> [<size>] <type> <name>`
        if len(parts) == 4 and parts[2] in ("D", "d"):
            syms.append((int(parts[0], 16), parts[3], int(parts[1], 16)))
        elif len(parts) == 3 and parts[1] in ("D", "d"):
            syms.append((int(parts[0], 16), parts[2], None))
    syms.sort()
    return syms


# Regex for top-level decl: TYPE NAME[N] = { ... };
# Type may include trailing `*` with or without intervening whitespace
# (`AObjEvent32 *foo` and `AObjEvent32 * foo` both legal C).
_DECL_RE = re.compile(
    r"^(?P<type>[A-Za-z_][A-Za-z_0-9 ]*?\**)\s*"
    r"(?P<name>d[A-Za-z_][A-Za-z_0-9]*)\s*"
    r"(?:\[[^\]]*\])?\s*=\s*\{",
    re.MULTILINE,
)


def parse_decls(c_path: Path):
    """Return {sym_name: (c_type, is_untyped)}.
    is_untyped == body contains `.data.inc.c`."""
    src = c_path.read_text()
    src_stripped = re.sub(r"/\*.*?\*/", "", src, flags=re.DOTALL)
    out = {}
    lines = src_stripped.split("\n")
    i = 0
    while i < len(lines):
        m = _DECL_RE.match(lines[i])
        if not m:
            i += 1
            continue
        name = m.group("name")
        c_type = m.group("type").strip()
        body = []
        i += 1
        while i < len(lines):
            r = lines[i].rstrip()
            if r in ("};", "} ;"):
                break
            body.append(lines[i])
            i += 1
        i += 1
        is_untyped = ".data.inc.c" in "\n".join(body)
        out[name] = (c_type, is_untyped)
    return out


def find_parent(sorted_syms, off):
    """Return (parent_off, parent_name, size, delta) for the largest sym
    whose offset is <= `off`. delta = off - parent_off."""
    lo, hi = 0, len(sorted_syms)
    while lo < hi:
        mid = (lo + hi) // 2
        if sorted_syms[mid][0] <= off:
            lo = mid + 1
        else:
            hi = mid
    if lo == 0:
        return None
    p_off, p_name, p_size = sorted_syms[lo - 1]
    return p_off, p_name, p_size, off - p_off


def find_extern_target(reloc_path: Path, ptr_label: str):
    """Look up the symbolic extern target for a ptr at <sym>+0xN in the
    .reloc file. Returns the right-hand side string (with `# -> file …`
    annotation if present) or None."""
    if not reloc_path.exists():
        return None
    pat = re.compile(rf"^extern\s+{re.escape(ptr_label)}\s+(.+)$")
    for line in reloc_path.read_text().splitlines():
        m = pat.match(line.strip())
        if m:
            return m.group(1).strip()
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int)
    ap.add_argument("--version", default="us", choices=("us", "jp"))
    ap.add_argument("--include-clean", action="store_true",
                    help="also list clean (offset==0 / typed-head) entries")
    ap.add_argument("--show-targets", action="store_true",
                    help="resolve and show each pointer's target symbol too")
    args = ap.parse_args()

    fid = args.fid
    v = args.version
    src_path = next(SRC.glob(f"{fid}_*.c"), None)
    if src_path is None:
        sys.exit(f"no src file for fid {fid}")
    name = src_path.stem.split("_", 1)[1]
    bin_path = PROJECT / "build" / v / "assets" / v / "relocData" / f"{fid}.vpk0.bin"
    o_path = PROJECT / "build" / v / "src" / "relocData" / ".build" / f"{fid}.o"
    reloc_path = SRC / f"{fid}_{name}.reloc"
    if not bin_path.exists():
        sys.exit(f"missing {bin_path}; run make RELOC_DATA=1 first")
    if not o_path.exists():
        sys.exit(f"missing {o_path}; run make RELOC_DATA=1 first")

    intern_start, extern_start = chain_starts(v, fid)
    data = bin_path.read_bytes()
    syms = load_symbols(o_path)
    decls = parse_decls(src_path)
    sym_offsets = {off for off, _, _ in syms}

    # Walk chains and collect (chain_kind, ptr_off, target_word)
    pointers = []
    for ptr_off, _, tgt_w in walk_chain(data, intern_start):
        pointers.append(("intern", ptr_off, tgt_w))
    for ptr_off, _, tgt_w in walk_chain(data, extern_start):
        pointers.append(("extern", ptr_off, tgt_w))

    # Classify each pointer
    rows_untyped = []
    rows_offset = []   # in typed block but not at a known sub-decl head
    rows_clean = []    # at the head of a known typed sub-decl

    for kind, ptr_off, tgt_w in pointers:
        parent = find_parent(syms, ptr_off)
        if parent is None:
            rows_untyped.append((kind, ptr_off, tgt_w, "<NO PARENT>", 0, "(unknown)", False))
            continue
        p_off, p_name, p_size, delta = parent
        c_type, is_untyped = decls.get(p_name, ("?", False))

        # Build a target description
        tgt_byte = tgt_w * 4
        if kind == "intern":
            tgt_parent = find_parent(syms, tgt_byte)
            if tgt_parent:
                t_off, t_name, _, t_delta = tgt_parent
                tgt_desc = t_name if t_delta == 0 else f"{t_name}+0x{t_delta:X}"
            else:
                tgt_desc = f"@0x{tgt_byte:X}"
        else:
            ptr_label = p_name if delta == 0 else f"{p_name}+0x{delta:X}"
            sym_target = find_extern_target(reloc_path, ptr_label)
            tgt_desc = sym_target or f"<extern target_word=0x{tgt_w:04X}>"

        row = (kind, ptr_off, tgt_w, p_name, delta, c_type, is_untyped, tgt_desc)
        if is_untyped:
            rows_untyped.append(row)
        elif delta == 0 and ptr_off in sym_offsets:
            rows_clean.append(row)
        else:
            rows_offset.append(row)

    n_total = len(pointers)
    print(f"fid {fid} ({name}, {v}): {n_total} chain pointers "
          f"({sum(1 for k,_,_ in pointers if k == 'intern')} intern, "
          f"{sum(1 for k,_,_ in pointers if k == 'extern')} extern)\n")

    print(f"== UNTYPED parent ({len(rows_untyped)}) — chain pointers landing in `u8 …data.inc.c` blocks ==")
    if rows_untyped:
        for kind, ptr_off, _, p_name, delta, c_type, _, tgt_desc in rows_untyped:
            extra = f"  -> {tgt_desc}" if args.show_targets else ""
            print(f"  {kind:6s} 0x{ptr_off:06X}  {p_name}+0x{delta:X}  ({c_type}){extra}")
    else:
        print("  (none)")
    print()

    print(f"== TYPED parent / non-head ({len(rows_offset)}) — pointer at +0xN inside a typed block ==")
    print("  (Could be a legitimate struct field e.g. DObjDesc[k].dl, or a hardcoded `(u8*)X+0xN` ref worth promoting.)")
    if rows_offset:
        # Group by parent symbol for readability
        from collections import defaultdict
        by_parent = defaultdict(list)
        for r in rows_offset:
            by_parent[r[3]].append(r)
        for p_name in sorted(by_parent.keys()):
            entries = by_parent[p_name]
            c_type = entries[0][5]
            print(f"  {p_name} ({c_type}): {len(entries)} ptrs")
            for kind, ptr_off, _, _, delta, _, _, tgt_desc in entries[:50]:
                extra = f"  -> {tgt_desc}" if args.show_targets else ""
                print(f"    {kind:6s} 0x{ptr_off:06X}  +0x{delta:X}{extra}")
            if len(entries) > 50:
                print(f"    ... +{len(entries)-50} more")
    else:
        print("  (none)")

    if args.include_clean:
        print()
        print(f"== CLEAN ({len(rows_clean)}) — pointer at offset 0 of a typed sub-decl ==")
        for kind, ptr_off, _, p_name, _, c_type, _, tgt_desc in rows_clean:
            extra = f"  -> {tgt_desc}" if args.show_targets else ""
            print(f"  {kind:6s} 0x{ptr_off:06X}  {p_name}  ({c_type}){extra}")

    # Summary
    print()
    untyped_parents = {r[3] for r in rows_untyped}
    print(f"Summary: {len(rows_untyped)} untyped-parent ptrs across {len(untyped_parents)} blocks; "
          f"{len(rows_offset)} typed-non-head; {len(rows_clean)} clean.")
    if untyped_parents:
        print("Top untyped-parent blocks (most chain pointers):")
        from collections import Counter
        cnt = Counter(r[3] for r in rows_untyped)
        for parent, n in cnt.most_common(10):
            print(f"  {n:4d}  {parent}")


if __name__ == "__main__":
    main()
