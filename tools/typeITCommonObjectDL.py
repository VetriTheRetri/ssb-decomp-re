#!/usr/bin/env python3
"""
Walk DLs referenced by ITCommonObject's typed DObjDesc trees, then split
the shared `data_0x0000` prelude (and per-item `_data_remainder` blocks)
into typed Vtx / Gfx (DL) / Tex / LUT regions.

Approach:
  1. Parse 86_ITCommonObject.c for every `DObjDesc dXxx[N] = { ... }`
     initializer and collect each entry's `(void*)0xCHAINHEX` data field.
  2. Decode the chain value's lower 16 bits as a word offset; multiply by
     4 to get the DL's byte offset within the file.
  3. Walk each DL with the F3DEX2 reference scanner (reused from
     tools/typeSpecialGaps.py) to find every Vtx (G_VTX), texture
     (G_SETTIMG + G_LOADBLOCK / G_LOADTILE), palette (G_LOADTLUT), and
     branch (G_DL) target.
  4. Find the DL's terminator (G_ENDDL = 0xDF). The DL itself becomes a
     Gfx[] block from start to terminator (inclusive).
  5. Split the source-level u8 blocks at the discovered boundaries into
     typed Vtx[N] / Gfx[N] / u16 LUT[N] / u8 Tex[N] declarations.

Byte output stays byte-identical. .reloc files don't reference these
intra-block symbol names (the DL chain values are baked into the bytes
and the runtime walks them via segmented addresses), so renaming /
splitting at chain boundaries is safe.
"""

import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
TARGET_NAME = "ITCommonObject"
FID = 86

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from typeSpecialGaps import walk_dl, _compute_tex_size, decode_settimg_fmt


def find_dl_end(data, dl_start, file_size):
    """Find the byte offset just past G_ENDDL (0xDF000000) starting at
    dl_start. Returns end_offset (exclusive)."""
    p = dl_start
    while p + 8 <= file_size:
        if data[p] == 0xDF and data[p+1] == 0 and data[p+2] == 0 and data[p+3] == 0:
            return p + 8
        # Also stop on G_DL with branch flag set
        # (don't bother — just walk until ENDDL or off the end)
        op = data[p]
        # Be permissive — allow any opcode byte
        p += 8
    return file_size


def collect_refs(data, dl_offsets, file_size):
    """For each DL start offset, find its end and walk the body. Returns:
       - dls: dict {dl_start: dl_end}
       - refs: dict {target_offset: (type, extra)}"""
    dls = {}
    refs = {}
    queue = list(dl_offsets)
    seen_dl = set()
    while queue:
        start = queue.pop(0)
        if start in seen_dl:
            continue
        seen_dl.add(start)
        end = find_dl_end(data, start, file_size)
        dls[start] = end
        for tgt, typ, extra in walk_dl(data, start, end):
            if tgt <= 0 or tgt >= file_size:
                continue
            if typ == "DL":
                queue.append(tgt)
            # Merge: prefer Vtx > LUT > Tex > DL on same offset
            priority = {"Vtx": 3, "LUT": 2, "Tex": 1, "DL": 0}
            if tgt in refs:
                cur_type, cur_extra = refs[tgt]
                if priority[cur_type] >= priority[typ]:
                    continue
            refs[tgt] = (typ, extra)
    return dls, refs


def parse_dobjdesc_chains(text):
    """Extract every (void*)0xCHAINHEX from DObjDesc array entries. Returns
    a list of chain target byte offsets."""
    out = []
    # Find DObjDesc arrays
    for blk in re.finditer(r"DObjDesc \w+\[\d+\] = \{(.*?)\n\};", text, re.DOTALL):
        body = blk.group(1)
        for m in re.finditer(r"\(void\*\)0x([0-9A-Fa-f]{8})", body):
            chain = int(m.group(1), 16)
            target_word = chain & 0xFFFF
            if target_word == 0:
                continue
            target_byte = target_word * 4
            out.append(target_byte)
    return out


def parse_existing_blocks(text):
    """Walk the existing source to find every committed block's (offset, size).
    Returns a list of (offset, size, sym, kind) sorted by offset.

    kind ∈ {"u8", "u32", "DObjDesc"} based on declaration."""
    blocks = []
    lines = text.split("\n")
    pending_off = None
    for ln in lines:
        m_c = re.search(r"@ 0x([0-9A-Fa-f]+),", ln)
        if m_c:
            pending_off = int(m_c.group(1), 16)
            continue
        # Match `u8 dXxx[0xNNN] = {`, `u32 dXxx[N] = {`, `DObjDesc dXxx[N] = {`
        m = re.match(r"(u8|u32|DObjDesc)\s+(d\w+)\[(0x[0-9A-Fa-f]+|\d+)\]", ln)
        if m and pending_off is not None:
            kind = m.group(1)
            sym = m.group(2)
            size_str = m.group(3)
            count = int(size_str, 16) if size_str.startswith("0x") else int(size_str)
            elem_size = {"u8": 1, "u32": 4, "DObjDesc": 44}[kind]
            byte_size = count * elem_size
            blocks.append((pending_off, byte_size, sym, kind))
            pending_off = None
        elif re.match(r"u8 dITCommonObject_data_0x0000\[", ln):
            # Special-case the prelude block (no @ comment before it)
            m2 = re.search(r"\[(0x[0-9A-Fa-f]+|\d+)\]", ln)
            sz = int(m2.group(1), 16)
            blocks.append((0, sz, "dITCommonObject_data_0x0000", "u8"))
    return sorted(set(blocks))


def find_block_for_offset(blocks, offset):
    """Binary-search blocks for the one containing `offset`."""
    for off, size, sym, kind in blocks:
        if off <= offset < off + size:
            return (off, size, sym, kind)
    return None


def format_u8(blob):
    lines = []
    for i in range(0, len(blob), 16):
        row = blob[i:i+16]
        lines.append("\t" + " ".join(f"0x{b:02X}," for b in row))
    return "\n".join(lines) + "\n"


def format_u16_palette(blob):
    """16-color RGBA5551 palette."""
    vals = struct.unpack(f">{len(blob)//2}H", blob)
    line = "\t" + " ".join(f"0x{v:04X}," for v in vals)
    return line + "\n"


def format_u32(blob):
    words = struct.unpack(f">{len(blob)//4}I", blob)
    lines = []
    for i in range(0, len(words), 6):
        lines.append("\t" + " ".join(f"0x{w:08X}," for w in words[i:i+6]))
    return "\n".join(lines) + "\n"


def main():
    c_path = os.path.join(RELOC_DIR, f"{FID}_{TARGET_NAME}.c")
    with open(c_path) as f:
        text = f.read()
    asset_path = os.path.join(ASSETS_DIR, f"{FID}.vpk0.bin")
    with open(asset_path, "rb") as f:
        data = f.read()
    file_size = len(data)

    # 1. Find every DL starting point from DObjDesc.data fields.
    dl_starts = parse_dobjdesc_chains(text)
    print(f"DObjDesc chain pointers found: {len(dl_starts)}")

    # 2. Walk all DLs; collect references.
    dls, refs = collect_refs(data, dl_starts, file_size)
    print(f"Walked {len(dls)} DLs, {len(refs)} references")

    # 3. Determine which existing blocks each DL / ref falls inside.
    blocks = parse_existing_blocks(text)
    print(f"Existing blocks: {len(blocks)}")

    # Group new sub-blocks per parent block
    parent_subblocks = {}  # parent_sym -> list of (offset, kind, count, byte_size)
    for dl_start, dl_end in dls.items():
        parent = find_block_for_offset(blocks, dl_start)
        if parent is None:
            continue
        parent_subblocks.setdefault(parent[2], []).append(
            (dl_start, "Gfx", (dl_end - dl_start) // 8, dl_end - dl_start)
        )
    for off, (typ, extra) in refs.items():
        parent = find_block_for_offset(blocks, off)
        if parent is None:
            continue
        if typ == "Vtx":
            count = extra
            byte_size = count * 16
        elif typ == "LUT":
            count = extra  # color count
            byte_size = count * 2
        elif typ == "Tex":
            byte_size = extra if extra else None
            count = byte_size if byte_size else None
        else:
            continue
        if byte_size is None:
            continue
        parent_subblocks.setdefault(parent[2], []).append(
            (off, typ, count, byte_size)
        )

    # 4. For each parent block with sub-blocks, split it.
    out_dir = os.path.join(BUILD_DIR, TARGET_NAME)
    os.makedirs(out_dir, exist_ok=True)
    new_text = text
    n_split = 0
    n_subblocks = 0

    for parent_off, parent_size, parent_sym, parent_kind in blocks:
        if parent_kind != "u8":
            continue
        sub = parent_subblocks.get(parent_sym, [])
        if not sub:
            continue
        # Sort and dedupe
        sub_sorted = sorted(set(sub), key=lambda x: x[0])
        # Drop overlapping entries: keep the first that fits without overlap
        cleaned = []
        cursor = parent_off
        for off, typ, count, byte_size in sub_sorted:
            if off < cursor:
                continue  # overlaps prior
            if off + byte_size > parent_off + parent_size:
                continue  # extends past parent
            if cleaned and off < cleaned[-1][0] + cleaned[-1][3]:
                continue
            cleaned.append((off, typ, count, byte_size))
            cursor = off + byte_size
        if not cleaned:
            continue

        # Build new declaration sequence: alternating gap_u8 + typed sub-block
        new_decls = []
        cursor = parent_off
        for i, (off, typ, count, byte_size) in enumerate(cleaned):
            if off > cursor:
                gap_size = off - cursor
                gap_sym = f"{parent_sym}_gap_0x{cursor:04X}"
                inc_name = f"{gap_sym}.data.inc.c"
                new_decls.append(f"/* @ 0x{cursor:04X}, {gap_size} bytes (raw gap) */")
                new_decls.append(f"u8 {gap_sym}[0x{gap_size:X}] = {{")
                new_decls.append(f"\t#include <{TARGET_NAME}/{inc_name}>")
                new_decls.append("};")
                with open(os.path.join(out_dir, inc_name), "w") as f:
                    f.write(format_u8(data[cursor:cursor + gap_size]))
                new_decls.append("")
            sym = f"d{TARGET_NAME}_{typ}_0x{off:04X}"
            inc_name = f"{sym}.data.inc.c"
            blob = data[off:off + byte_size]
            if typ == "Gfx":
                new_decls.append(f"/* @ 0x{off:04X}, {byte_size} bytes ({count} Gfx commands) */")
                new_decls.append(f"Gfx {sym}[{count}] = {{")
                new_decls.append(f"\t#include <{TARGET_NAME}/{inc_name}>")
                new_decls.append("};")
                # Emit raw bytes for now (proper gsDP* macros require pygfxd)
                with open(os.path.join(out_dir, inc_name), "w") as f:
                    # For Gfx, write as { { word0, word1 } } pairs
                    out_lines = []
                    for j in range(0, byte_size, 8):
                        w0, w1 = struct.unpack(">II", blob[j:j+8])
                        out_lines.append(f"\t{{ {{ 0x{w0:08X}, 0x{w1:08X} }} }},")
                    f.write("\n".join(out_lines) + "\n")
            elif typ == "Vtx":
                new_decls.append(f"/* @ 0x{off:04X}, {byte_size} bytes ({count} vertices) */")
                new_decls.append(f"Vtx {sym}[{count}] = {{")
                new_decls.append(f"\t#include <{TARGET_NAME}/{inc_name}>")
                new_decls.append("};")
                with open(os.path.join(out_dir, inc_name), "w") as f:
                    out_lines = []
                    for j in range(0, byte_size, 16):
                        x, y, z, flag, s, t, r, g, b, a = struct.unpack(">hhhhhhBBBB", blob[j:j+16])
                        out_lines.append(f"\t{{ {{ {{ {x}, {y}, {z} }}, {flag}, {{ {s}, {t} }}, {{ {r}, {g}, {b}, {a} }} }} }},")
                    f.write("\n".join(out_lines) + "\n")
            elif typ == "LUT":
                colors = byte_size // 2
                new_decls.append(f"/* @ 0x{off:04X}, {byte_size} bytes ({colors}-color RGBA5551 palette) */")
                new_decls.append(f"u16 {sym}[{colors}] = {{")
                new_decls.append(f"\t#include <{TARGET_NAME}/{inc_name}>")
                new_decls.append("};")
                with open(os.path.join(out_dir, inc_name), "w") as f:
                    f.write(format_u16_palette(blob))
            elif typ == "Tex":
                new_decls.append(f"/* @ 0x{off:04X}, {byte_size} bytes (texture pixels) */")
                new_decls.append(f"u8 {sym}[0x{byte_size:X}] = {{")
                new_decls.append(f"\t#include <{TARGET_NAME}/{inc_name}>")
                new_decls.append("};")
                with open(os.path.join(out_dir, inc_name), "w") as f:
                    f.write(format_u8(blob))
            new_decls.append("")
            cursor = off + byte_size
            n_subblocks += 1

        # Trailing gap
        if cursor < parent_off + parent_size:
            gap_size = parent_off + parent_size - cursor
            gap_sym = f"{parent_sym}_gap_0x{cursor:04X}"
            inc_name = f"{gap_sym}.data.inc.c"
            new_decls.append(f"/* @ 0x{cursor:04X}, {gap_size} bytes (trailing gap) */")
            new_decls.append(f"u8 {gap_sym}[0x{gap_size:X}] = {{")
            new_decls.append(f"\t#include <{TARGET_NAME}/{inc_name}>")
            new_decls.append("};")
            with open(os.path.join(out_dir, inc_name), "w") as f:
                f.write(format_u8(data[cursor:cursor + gap_size]))
            new_decls.append("")

        # Find and replace the original parent declaration in source
        old_pattern = re.compile(
            rf"(/\* @ 0x{parent_off:04X}[^*]*\*/\n)?u8 {re.escape(parent_sym)}\[(?:0x[0-9A-Fa-f]+|\d+)\] = \{{\n\t#include <[^>]+>\n\}};",
        )
        m = old_pattern.search(new_text)
        if m is None:
            # Try without the @ comment (data_0x0000 has its own custom comment)
            old_pattern = re.compile(
                rf"u8 {re.escape(parent_sym)}\[(?:0x[0-9A-Fa-f]+|\d+)\] = \{{\n\t#include <[^>]+>\n\}};",
            )
            m = old_pattern.search(new_text)
        if m is None:
            print(f"  WARNING: couldn't locate {parent_sym} in source")
            continue
        new_text = new_text.replace(m.group(0), "\n".join(new_decls).rstrip())
        n_split += 1

    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"Split {n_split} parent block(s) into {n_subblocks} typed sub-blocks")


if __name__ == "__main__":
    main()
