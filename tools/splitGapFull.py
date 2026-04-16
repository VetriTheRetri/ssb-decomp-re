#!/usr/bin/env python3
"""
Split `gap_0xNNNN` u8 blobs at every reference point (internal or external)
and rewrite .reloc intern entries so label references stay valid.

Unlike splitGapAtExternRefs.py (which skips gaps that the .reloc references),
this tool fully handles the rewrite by:
  1. Collecting all split points (external target offsets from trailers + any
     INTERNAL target offsets that appear as the RHS of intern entries targeting
     the gap).
  2. Splitting the gap into `gap_0xNNNN` + `gap_0xNNNN_sub_0xMM` sub-regions.
  3. Rewriting every .reloc label of the form `gap_0xNNNN+0xOFFSET` to the
     matching sub-region (e.g. `gap_0xNNNN_sub_0x100+0x20` if offset 0x120
     falls in the sub-region starting at 0x100).

Byte output stays identical — only names change. fixRelocChain.py re-resolves
labels through the .o symbol table.

Usage:
    tools/splitGapFull.py <file_id>
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


def scan_extern_target_offsets(target_fid):
    excess = load_excess()
    refs = set()
    for fn in sorted(os.listdir(RELOC_DIR)):
        if not fn.endswith(".reloc"): continue
        m = re.match(r"^(\d+)_", fn)
        if not m: continue
        src_fid = int(m.group(1))
        ext = []
        with open(os.path.join(RELOC_DIR, fn)) as f:
            for ln in f:
                ln = ln.strip()
                if not ln or ln.startswith("#"): continue
                parts = ln.split()
                if len(parts) != 3 or parts[0] != "extern": continue
                mm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[1])
                if not mm: continue
                try: tgt = int(parts[2], 16)
                except: continue
                ext.append((mm.group(1), int(mm.group(2), 16) if mm.group(2) else 0, tgt))
        if not ext: continue
        syms = nm_symbols(src_fid)
        resolved = [(syms.get(ps, 0) + po, tgt) for ps, po, tgt in ext]
        resolved.sort(key=lambda e: e[0])
        n = len(resolved)
        trailer = excess.get(src_fid)
        if trailer is None or len(trailer) < n*2: continue
        tail = trailer[-n*2:]
        fids = [int.from_bytes(tail[i*2:(i+1)*2], "big") for i in range(n)]
        for (_, tgt), tfid in zip(resolved, fids):
            if tfid == target_fid:
                refs.add(tgt)
    return refs


def parse_reloc_labels(reloc_text):
    """Yield (kind, ptr_label, target_label, full_line) tuples."""
    for line in reloc_text.split("\n"):
        stripped = line.strip()
        if not stripped or stripped.startswith("#"):
            continue
        parts = stripped.split()
        if len(parts) != 3:
            continue
        yield parts[0], parts[1], parts[2], line


def format_u8(data):
    lines = []
    for i in range(0, len(data), 16):
        row = data[i:i+16]
        lines.append("\t" + " ".join(f"0x{b:02X}," for b in row))
    return "\n".join(lines) + "\n"


def sub_region_sym(base_sym, rel_off):
    if rel_off == 0:
        return base_sym
    return f"{base_sym}_sub_0x{rel_off:X}"


def remap_label(label, gap_sym, boundaries):
    """If `label` references `gap_sym+0xOFF`, remap to the appropriate sub-region
    symbol + relative offset. Returns None if no remap needed."""
    m = re.match(rf"^{re.escape(gap_sym)}(?:\+0x([0-9a-fA-F]+))?$", label)
    if not m:
        return None
    off = int(m.group(1), 16) if m.group(1) else 0
    # Find sub-region containing `off`
    for i, bstart in enumerate(boundaries):
        bend = boundaries[i+1] if i+1 < len(boundaries) else None
        if off >= bstart and (bend is None or off < bend):
            sub_off = off - bstart
            sym = sub_region_sym(gap_sym, bstart)
            return f"{sym}" if sub_off == 0 else f"{sym}+0x{sub_off:X}"
    return None


def process(file_id):
    c_path = target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        print(f"fid {file_id}: no .c")
        return
    reloc_path = c_path.replace(".c", ".reloc")
    with open(c_path) as f:
        text = f.read()
    with open(reloc_path) as f:
        reloc_text = f.read()
    for suf in (".vpk0.bin", ".bin"):
        dp = os.path.join(ASSETS_DIR, f"{file_id}{suf}")
        if os.path.exists(dp):
            break
    with open(dp, "rb") as f:
        data = f.read()

    # External refs
    ext_refs = scan_extern_target_offsets(file_id)

    # Internal refs: parse .reloc for any TARGET label pointing into this file
    intern_target_offs = set()
    for kind, ptr, target, _ in parse_reloc_labels(reloc_text):
        # Target could be "sym+0xOFF" or "0xHEX"
        if target.startswith("0x"):
            try: intern_target_offs.add(int(target, 16))
            except: pass
        else:
            tm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", target)
            if tm:
                sym = tm.group(1)
                off = int(tm.group(2), 16) if tm.group(2) else 0
                syms = nm_symbols(file_id)
                if sym in syms:
                    intern_target_offs.add(syms[sym] + off)

    # Find each gap_0xNNNN block and split if it has refs pointing inside
    changes_made = False
    out_dir = os.path.join(BUILD_DIR, target_name)
    os.makedirs(out_dir, exist_ok=True)

    for match in list(re.finditer(
        r"(u8 d\w+_gap_0x([0-9A-Fa-f]+)\[(\d+)\] = \{\n\t#include <[^>]+>\n\};\n)",
        text
    )):
        full_block = match.group(1)
        goff = int(match.group(2), 16)
        gsz = int(match.group(3))
        gap_sym = f"d{target_name}_gap_0x{goff:04X}"

        # All references STRICTLY inside this gap (offset 0 not counted — it's
        # the existing symbol; don't split there)
        all_refs = sorted(r - goff for r in (ext_refs | intern_target_offs)
                          if goff < r < goff + gsz)
        if not all_refs:
            continue

        # Build new boundaries: [0, ref1, ref2, ..., gsz]
        boundaries = sorted(set([0] + all_refs))
        # Emit new block declarations
        new_blocks = []
        for i, bstart in enumerate(boundaries):
            bend = boundaries[i+1] if i+1 < len(boundaries) else gsz
            size = bend - bstart
            abs_off = goff + bstart
            if bstart == 0:
                sym = gap_sym
                inc_name = f"gap_0x{goff:04X}.data.inc.c"
            else:
                sym = f"{gap_sym}_sub_0x{bstart:X}"
                inc_name = f"gap_0x{goff:04X}_sub_0x{bstart:X}.data.inc.c"
            new_blocks.append(
                f"/* gap sub-block @ 0x{abs_off:04X} (was gap+0x{bstart:X}, {size} bytes) */\n"
                f"u8 {sym}[{size}] = {{\n"
                f"\t#include <{target_name}/{inc_name}>\n"
                f"}};\n"
            )
            with open(os.path.join(out_dir, inc_name), "w") as f:
                f.write(format_u8(data[abs_off:abs_off+size]))

        text = text.replace(full_block, "\n".join(new_blocks), 1)

        # Rewrite .reloc entries that reference this gap_sym
        new_reloc_lines = []
        for kind, ptr, target, line in parse_reloc_labels(reloc_text):
            new_ptr = remap_label(ptr, gap_sym, boundaries)
            new_target = remap_label(target, gap_sym, boundaries) if not target.startswith("0x") else None
            if new_ptr or new_target:
                actual_ptr = new_ptr if new_ptr else ptr
                actual_tgt = new_target if new_target else target
                new_reloc_lines.append(f"{kind} {actual_ptr} {actual_tgt}")
            else:
                new_reloc_lines.append(line)
        # Also preserve comment lines
        final_reloc = []
        reloc_iter = iter(new_reloc_lines)
        for line in reloc_text.split("\n"):
            s = line.strip()
            if not s or s.startswith("#"):
                final_reloc.append(line)
            else:
                try: final_reloc.append(next(reloc_iter))
                except StopIteration: final_reloc.append(line)
        reloc_text = "\n".join(final_reloc)
        changes_made = True
        print(f"  split {gap_sym}: {len(boundaries)} regions")

    if not changes_made:
        print(f"fid {file_id}: no gaps changed")
        return

    with open(c_path, "w") as f:
        f.write(text)
    with open(reloc_path, "w") as f:
        f.write(reloc_text)
    print(f"fid {file_id}: wrote split .c and rewrote .reloc")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid)


if __name__ == "__main__":
    main()
