#!/usr/bin/env python3
"""
Split a `gap_0xNNNN` u8 blob at offsets referenced by external chains
from other files, giving each referenced sub-region its own named symbol.

Pre-conditions (checked before modifying anything):
  1. The gap symbol has NO internal intern entries in its .reloc (splitting
     would require renaming target labels, which this tool doesn't do).
  2. The .c file is committed clean (so diffs are reviewable).

The gap region gets replaced with a series of u8 sub-arrays. The first
sub-region keeps the original `gap_0xNNNN` name; subsequent sub-regions
are named `gap_0xNNNN_sub_0xMM` where MM is the offset relative to the
original gap start. Inc.c files in build/src/relocData/<Name>/ are
regenerated for each sub-region.

Doesn't change the .reloc file. External references use raw hex target
offsets, which fixRelocChain resolves independently of local symbol
boundaries, so the bytes stay identical.

Usage:
    tools/splitGapAtExternRefs.py <file_id>
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
EXCESS_PATH = os.path.join(PROJECT_DIR, "tools", "vpk0_excess_bytes.txt")


_nm_cache = {}

def nm_symbols(fid):
    if fid in _nm_cache:
        return _nm_cache[fid]
    obj = os.path.join(BUILD_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        _nm_cache[fid] = {}
        return {}
    try:
        r = subprocess.run(["mips-linux-gnu-nm", obj],
                           capture_output=True, text=True, check=True)
    except (FileNotFoundError, subprocess.CalledProcessError):
        _nm_cache[fid] = {}
        return {}
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    _nm_cache[fid] = syms
    return syms


def load_excess():
    out = {}
    with open(EXCESS_PATH) as f:
        for ln in f:
            if " - " not in ln:
                continue
            k, v = ln.strip().split(" - ", 1)
            try:
                out[int(k)] = bytearray.fromhex(v)
            except ValueError:
                pass
    return out


def extern_refs_into(target_fid):
    """Return a sorted list of byte offsets where other files' extern
    chains target `target_fid`."""
    excess = load_excess()
    refs = set()
    for fn in sorted(os.listdir(RELOC_DIR)):
        if not fn.endswith(".reloc"):
            continue
        m = re.match(r"^(\d+)_", fn)
        if not m:
            continue
        src_fid = int(m.group(1))
        ext = []
        with open(os.path.join(RELOC_DIR, fn)) as f:
            for ln in f:
                ln = ln.strip()
                if not ln or ln.startswith("#"):
                    continue
                parts = ln.split()
                if len(parts) != 3 or parts[0] != "extern":
                    continue
                mm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[1])
                if not mm:
                    continue
                try:
                    tgt = int(parts[2], 16)
                except ValueError:
                    continue
                ext.append((mm.group(1), int(mm.group(2), 16) if mm.group(2) else 0, tgt))
        if not ext:
            continue
        syms = nm_symbols(src_fid)
        resolved = [(syms.get(ps, 0) + po, tgt) for ps, po, tgt in ext]
        resolved.sort(key=lambda e: e[0])
        n = len(resolved)
        trailer = excess.get(src_fid)
        if trailer is None or len(trailer) < n*2:
            continue
        tail = trailer[-n*2:]
        fids = [int.from_bytes(tail[i*2:(i+1)*2], "big") for i in range(n)]
        for (_, tgt), tfid in zip(resolved, fids):
            if tfid == target_fid:
                refs.add(tgt)
    return sorted(refs)


def format_u8(data):
    lines = []
    for i in range(0, len(data), 16):
        row = data[i:i+16]
        lines.append("\t" + " ".join(f"0x{b:02X}," for b in row))
    return "\n".join(lines) + "\n"


def find_c_file(file_id):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            return os.path.join(RELOC_DIR, fn), m.group(1)
    return None, None


def load_raw(file_id):
    for suf in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{file_id}{suf}")
        if os.path.exists(p):
            with open(p, "rb") as f:
                return f.read()
    return None


def process(file_id):
    c_path, target_name = find_c_file(file_id)
    if c_path is None:
        print(f"fid {file_id}: no .c found")
        return False
    reloc_path = c_path.replace(".c", ".reloc")

    with open(c_path) as f:
        text = f.read()
    with open(reloc_path) as f:
        reloc = f.read()

    data = load_raw(file_id)
    if data is None:
        print(f"fid {file_id}: no extracted data")
        return False

    refs = extern_refs_into(file_id)

    # Find every gap_0xNNNN and decide which to split
    changes = 0
    out_dir = os.path.join(BUILD_DIR, target_name)
    os.makedirs(out_dir, exist_ok=True)

    for match in re.finditer(r"(u8 d\w+_gap_0x([0-9A-Fa-f]+)\[(\d+)\] = \{\n\t#include <[^>]+>\n\};\n)",
                              text):
        full_block = match.group(1)
        goff = int(match.group(2), 16)
        gsz = int(match.group(3))
        # Skip if the gap symbol has any references in .reloc (internal or extern target labels)
        gap_sym = f"d{target_name}_gap_0x{goff:04X}"
        if re.search(rf"\b{re.escape(gap_sym)}\b", reloc):
            continue  # skip; splitting would break existing label references
        # Find extern refs inside this gap (strictly between start and end)
        inside = [r - goff for r in refs if goff < r < goff + gsz]
        if not inside:
            continue

        # Build new blocks: [0, off1, off2, ..., gsz]
        boundaries = [0] + inside + [gsz]
        boundaries = sorted(set(boundaries))
        new_blocks_text = []
        for i in range(len(boundaries) - 1):
            rel_off = boundaries[i]
            size = boundaries[i+1] - boundaries[i]
            abs_off = goff + rel_off
            if rel_off == 0:
                sym = gap_sym
                inc_name = f"gap_0x{goff:04X}.data.inc.c"
            else:
                sym = f"{gap_sym}_sub_0x{rel_off:X}"
                inc_name = f"gap_0x{goff:04X}_sub_0x{rel_off:X}.data.inc.c"
            new_blocks_text.append(
                f"/* gap sub-block @ 0x{abs_off:04X} (was gap+0x{rel_off:X}, {size} bytes) */\n"
                f"u8 {sym}[{size}] = {{\n"
                f"\t#include <{target_name}/{inc_name}>\n"
                f"}};\n"
            )
            with open(os.path.join(out_dir, inc_name), "w") as f:
                f.write(format_u8(data[abs_off:abs_off+size]))

        new_text_block = "\n".join(new_blocks_text)
        text = text.replace(full_block, new_text_block, 1)
        changes += 1

    if changes:
        with open(c_path, "w") as f:
            f.write(text)
        print(f"fid {file_id} ({target_name}): split {changes} gap(s)")
        return True
    else:
        print(f"fid {file_id} ({target_name}): no gaps to split")
        return False


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid)


if __name__ == "__main__":
    main()
