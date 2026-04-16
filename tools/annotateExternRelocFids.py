#!/usr/bin/env python3
"""
Annotate each `extern` line in every .reloc file with a trailing comment
naming the target relocData file. The trailer u16 file IDs are stored in
tools/vpk0_excess_bytes.txt and decoded in chain-walk order (sorted by
ptr's absolute byte offset). Resulting line:

    extern dXxx_sym+0x10 0x44C8  # -> file 109 (StageSectorFile2)

This is a documentation-only pass. No bytes change, no symbols change.
"""

import argparse
import os
import re
import subprocess

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
EXCESS_PATH = os.path.join(PROJECT_DIR, "tools", "vpk0_excess_bytes.txt")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")


_nm = {}
def nm_symbols(fid):
    if fid in _nm: return _nm[fid]
    obj = os.path.join(BUILD_DIR, ".build", f"{fid}.o")
    if not os.path.exists(obj): _nm[fid] = {}; return {}
    try: r = subprocess.run(["mips-linux-gnu-nm", obj], capture_output=True, text=True, check=True)
    except: _nm[fid] = {}; return {}
    s = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D","d"): s[p[2]] = int(p[0], 16)
    _nm[fid] = s
    return s


def load_excess():
    out = {}
    with open(EXCESS_PATH) as f:
        for ln in f:
            if " - " not in ln: continue
            k, v = ln.strip().split(" - ", 1)
            try: out[int(k)] = bytearray.fromhex(v)
            except: pass
    return out


def load_file_names():
    """Return {fid: name} from tools/relocFileDescriptions.us.txt."""
    out = {}
    with open(DESC_PATH) as f:
        for ln in f:
            m = re.match(r"^-(\d+):\s+(\S+)", ln)
            if m:
                out[int(m.group(1))] = m.group(2)
    return out


def process(reloc_path, excess, names):
    """Annotate one .reloc file."""
    fn = os.path.basename(reloc_path)
    m = re.match(r"^(\d+)_", fn)
    if not m:
        return False
    src_fid = int(m.group(1))

    with open(reloc_path) as f:
        lines = f.read().split("\n")

    # Strip existing trailing comments first so re-runs are idempotent
    stripped = []
    for ln in lines:
        s = ln
        if "  # -> file" in s:
            s = s.split("  # -> file")[0].rstrip()
        stripped.append(s)
    lines = stripped

    # Parse extern entries in source order, then reorder by absolute ptr offset
    # to match trailer-file-IDs ordering.
    extern_entries = []  # list of (line_index, ptr_sym, ptr_off, target_str)
    for i, ln in enumerate(lines):
        s = ln.strip()
        if not s or s.startswith("#"): continue
        parts = s.split()
        if len(parts) != 3 or parts[0] != "extern": continue
        mm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[1])
        if not mm: continue
        ptr_sym = mm.group(1)
        ptr_off = int(mm.group(2), 16) if mm.group(2) else 0
        extern_entries.append((i, ptr_sym, ptr_off, parts[2]))

    if not extern_entries:
        return False

    syms = nm_symbols(src_fid)
    # Compute absolute byte offset for each entry, then sort
    entries_with_abs = [
        (syms.get(ps, 0) + po, idx, ps, po, tgt)
        for idx, ps, po, tgt in extern_entries
    ]
    entries_with_abs.sort(key=lambda e: e[0])
    n = len(entries_with_abs)

    trailer = excess.get(src_fid)
    if trailer is None or len(trailer) < n*2:
        return False
    tail = trailer[-n*2:]
    fids = [int.from_bytes(tail[i*2:(i+1)*2], "big") for i in range(n)]

    # Annotate each line in source order using the trailer's chain-walk order
    annotations = {}  # line_index -> "# -> file FID (Name)"
    for (_, idx, _, _, _), tfid in zip(entries_with_abs, fids):
        name = names.get(tfid, "?")
        annotations[idx] = f"# -> file {tfid} ({name})"

    new_lines = []
    for i, ln in enumerate(lines):
        if i in annotations:
            new_lines.append(f"{ln}  {annotations[i]}")
        else:
            new_lines.append(ln)
    new_text = "\n".join(new_lines)

    with open(reloc_path) as f:
        original = f.read()
    if new_text == original:
        return False
    with open(reloc_path, "w") as f:
        f.write(new_text)
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    args = ap.parse_args()

    excess = load_excess()
    names = load_file_names()

    if args.all:
        targets = []
        for fn in sorted(os.listdir(RELOC_DIR)):
            if not fn.endswith(".reloc"): continue
            with open(os.path.join(RELOC_DIR, fn)) as f:
                if any(l.startswith("extern ") for l in f):
                    targets.append(os.path.join(RELOC_DIR, fn))
    else:
        targets = []
        for fid in args.file_ids:
            for fn in os.listdir(RELOC_DIR):
                if fn.startswith(f"{fid}_") and fn.endswith(".reloc"):
                    targets.append(os.path.join(RELOC_DIR, fn))
                    break

    n_ok = 0
    for p in targets:
        if process(p, excess, names):
            n_ok += 1
    print(f"Annotated {n_ok}/{len(targets)} .reloc files")


if __name__ == "__main__":
    main()
