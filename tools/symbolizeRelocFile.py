#!/usr/bin/env python3
"""
Convert a hand-typed relocData .c file from raw `(void*)0xXXXXYYYY` chain
placeholders to fully symbolic references, and emit the companion .reloc
file that fixRelocChain needs to rebuild the chain bytes post-compile.

For each `(void*)0xXXXXYYYY` literal in the .c:
    target_byte = (low16 * 4)
Resolve target_byte to a local symbol (exact match or `((u8*)sym + N)`)
using the compiled .o's symbol table; leave as hex fallback when no symbol
contains the target.

For the .reloc file: walk the intern chain starting at the CSV-recorded
head word, record every (ptr_byte, target_byte) pair, and emit
    intern <ptr_sym+0xoffset> <target_sym+0xoffset>
lines. `fixRelocChain.py` consumes this to rebuild chain words after
IDO compile + objcopy extract. Extern chains are handled symmetrically
(when the CSV head is not 0xFFFF), but this pilot path currently only
covers intern.

Usage:
    tools/symbolizeRelocFile.py <fid> [--dry-run]
"""

import argparse
import bisect
import csv
import os
import re
import struct
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
BUILD_OBJ_DIR = os.path.join(BUILD_DIR, ".build")
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "us", "relocData.csv")


def nm_symbols(fid):
    obj = os.path.join(BUILD_OBJ_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        raise SystemExit(f"missing {obj}; compile the .o first")
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            off = int(p[0], 16)
            name = p[2]
            if off in syms and len(syms[off]) <= len(name):
                continue
            syms[off] = name
    return syms


def find_c_file(fid):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            return os.path.join(RELOC_DIR, fn), m.group(1)
    return None, None


def csv_chain_starts(fid):
    with open(CSV_PATH) as f:
        rows = list(csv.reader(f))
    if fid + 1 >= len(rows):
        return None, None
    row = rows[fid + 1]
    intern = int(row[2].strip(), 16)
    extern = int(row[4].strip(), 16)
    return intern, extern


def walk_chain(data, start_word):
    out = []
    if start_word == 0xFFFF:
        return out
    addr = start_word * 4
    seen = set()
    while True:
        if addr in seen or addr + 4 > len(data):
            break
        seen.add(addr)
        word = struct.unpack(">I", data[addr:addr + 4])[0]
        nxt = (word >> 16) & 0xFFFF
        tgt = (word & 0xFFFF) * 4
        out.append((addr, tgt))
        if nxt == 0xFFFF:
            break
        addr = nxt * 4
    return out


def resolve_label(byte_off, sorted_offs, syms):
    """Return 'symbol' or 'symbol+0xN' for byte_off. Raises if not resolvable."""
    idx = bisect.bisect_right(sorted_offs, byte_off) - 1
    if idx < 0:
        raise ValueError(f"byte 0x{byte_off:04X}: before first symbol")
    base = sorted_offs[idx]
    delta = byte_off - base
    name = syms[base]
    if delta == 0:
        return name
    return f"{name}+0x{delta:X}"


def symbolic_c_expr(target_byte, syms, sorted_offs):
    """Textual C expression for a pointer targeting target_byte. Returns
    None when no symbol owns the target (caller should keep the hex)."""
    if target_byte in syms:
        return syms[target_byte]
    idx = bisect.bisect_right(sorted_offs, target_byte) - 1
    if idx < 0:
        return None
    base = sorted_offs[idx]
    delta = target_byte - base
    if idx + 1 < len(sorted_offs):
        sym_end = sorted_offs[idx + 1]
    else:
        sym_end = base + 0x10000
    if base + delta >= sym_end:
        return None
    return f"((u8*){syms[base]} + 0x{delta:X})"


def rewrite_c_source(c_path, syms, sorted_offs):
    """Replace `(void*)0xXXXXYYYY` → `(void*)&sym` / `(void*)((u8*)sym + N)`.
    Returns (new_text, stats)."""
    with open(c_path) as f:
        text = f.read()
    total = resolved = unresolved = 0

    def repl(m):
        nonlocal total, resolved, unresolved
        total += 1
        chain = int(m.group(1), 16)
        target_byte = (chain & 0xFFFF) * 4
        expr = symbolic_c_expr(target_byte, syms, sorted_offs)
        if expr is None:
            unresolved += 1
            return m.group(0)
        resolved += 1
        return f"(void*){expr}"

    new_text = re.sub(r"\(void\*\)0x([0-9A-Fa-f]{8})", repl, text)
    return new_text, (total, resolved, unresolved)


def build_reloc_file(fid, raw, syms, sorted_offs):
    intern_start, extern_start = csv_chain_starts(fid)
    if intern_start is None:
        raise SystemExit(f"no CSV row for fid {fid}")

    lines = [
        f"# Auto-generated by tools/symbolizeRelocFile.py for fid {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C symbol names; +0xN selects an interior byte.",
        "",
    ]
    for label, start in (("intern", intern_start), ("extern", extern_start)):
        if start == 0xFFFF:
            continue
        chain = walk_chain(raw, start)
        for ptr_byte, tgt_byte in chain:
            ptr_lbl = resolve_label(ptr_byte, sorted_offs, syms)
            try:
                tgt_lbl = resolve_label(tgt_byte, sorted_offs, syms)
            except ValueError:
                tgt_lbl = f"0x{tgt_byte:X}"
            lines.append(f"{label} {ptr_lbl} {tgt_lbl}")
    return "\n".join(lines) + "\n"


def load_raw(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            with open(p, "rb") as f:
                return f.read()
    raise SystemExit(f"no asset blob for fid {fid}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    c_path, target_name = find_c_file(args.fid)
    if c_path is None:
        sys.exit(f"no .c file for fid {args.fid}")

    syms = nm_symbols(args.fid)
    sorted_offs = sorted(syms)
    raw = load_raw(args.fid)

    new_c, stats = rewrite_c_source(c_path, syms, sorted_offs)
    total, resolved, unresolved = stats
    print(f"fid {args.fid} ({target_name}):")
    print(f"  (void*)0xXXXX literals: {total} total, "
          f"{resolved} resolved, {unresolved} left as hex")

    reloc_text = build_reloc_file(args.fid, raw, syms, sorted_offs)
    reloc_path = os.path.join(RELOC_DIR, f"{args.fid}_{target_name}.reloc")

    if args.dry_run:
        print(f"  would write {reloc_text.count(chr(10)) - 4} chain entries "
              f"to {reloc_path}")
        return

    with open(c_path, "w") as f:
        f.write(new_c)
    print(f"  rewrote {c_path}")
    with open(reloc_path, "w") as f:
        f.write(reloc_text)
    print(f"  wrote {reloc_path}")


if __name__ == "__main__":
    main()
