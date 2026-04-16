#!/usr/bin/env python3
"""
Audit `gap_0xNNNN` u8 blobs in partially-typed relocData files.

For every gap in every .c, reports how many external references from other
files point into the gap, and at what offsets. These represent candidate
split points: splitting the gap at those offsets gives each referenced
sub-region its own named symbol, improving modder/reader ergonomics.

Doesn't modify any files — pure reporter.

Usage:
    tools/auditGapRefs.py                   # top 20 gaps by ref count
    tools/auditGapRefs.py --all             # full list
    tools/auditGapRefs.py --file <fid>      # details for one file
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
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


def build_target_ref_map(excess):
    """Return {target_fid: set(byte_offsets)} across every .reloc in repo."""
    out = {}
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
        if trailer is None or len(trailer) < n * 2:
            continue
        tail = trailer[-n*2:]
        fids = [int.from_bytes(tail[i*2:(i+1)*2], "big") for i in range(n)]
        for (_, tgt), tfid in zip(resolved, fids):
            out.setdefault(tfid, set()).add(tgt)
    return out


def audit():
    excess = load_excess()
    target_refs = build_target_ref_map(excess)
    results = []
    for fn in sorted(os.listdir(RELOC_DIR)):
        if not fn.endswith(".c") or fn.endswith(".jp.c"):
            continue
        m = re.match(r"^(\d+)_", fn)
        if not m:
            continue
        fid = int(m.group(1))
        with open(os.path.join(RELOC_DIR, fn)) as f:
            text = f.read()
        gaps = [(int(m2.group(1), 16), int(m2.group(2)))
                for m2 in re.finditer(r"u8 d\w+_gap_0x([0-9A-Fa-f]+)\[(\d+)\]", text)]
        if not gaps:
            continue
        refs = target_refs.get(fid, set())
        for goff, gsz in gaps:
            inside = sorted(r for r in refs if goff < r < goff + gsz)
            if inside:
                results.append((len(inside), fn, goff, gsz, inside))
    results.sort(reverse=True)
    return results


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--file", type=int)
    args = ap.parse_args()

    results = audit()
    if args.file is not None:
        results = [r for r in results
                   if int(re.match(r"^(\d+)_", r[1]).group(1)) == args.file]
    elif not args.all:
        results = results[:20]

    if not results:
        print("No gap regions with inbound external refs.")
        return
    for n, fn, goff, gsz, inside in results:
        print(f"{fn}  gap_0x{goff:04X} ({gsz}B): {n} refs")
        for off in inside:
            rel = off - goff
            print(f"    0x{off:04X}  (gap+0x{rel:X})")


if __name__ == "__main__":
    main()
