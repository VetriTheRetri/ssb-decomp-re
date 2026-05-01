#!/usr/bin/env python3
"""
Decompose a relocData Images (data-pool) file into typed LUT + Tex blocks.

Images files (e.g. 103_StagePupupuImages) are pure data pools with no
relocation chains of their own. Structure is discovered from OTHER files'
external reloc chains: each extern entry has a target byte offset and a
u16 target file ID in the post-compression trailer. By scanning every
.reloc across the repo and filtering entries whose trailer file ID equals
the target Images file ID, we recover the full set of referenced offsets.

The canonical Images block layout is 8 bytes of leading pad, a 32-byte
RGBA5551 LUT palette, 8 bytes of inter-block pad, and a pixel-data Tex
block that runs until the next LUT's lead pad. So whenever two referenced
offsets differ by exactly 0x28 (40 = 8 + 32), they're a (LUT, Tex) pair.
Sub-offsets that aren't paired represent secondary Bitmap entries inside
a larger Tex block and are left in-place — they still land inside the
owning Tex array, so fixRelocChain's overwrite keeps the bytes correct.

Usage:
    tools/typeImagesFile.py <file_id>          # rewrite src/relocData/<fid>_*.c
    tools/typeImagesFile.py <file_id> --dry    # print what would change
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
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")


_nm_cache = {}
def nm_symbols(fid):
    if fid in _nm_cache:
        return _nm_cache[fid]
    obj = os.path.join(BUILD_DIR, ".build", f"{fid}.o")
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


def load_excess_bytes():
    result = {}
    with open(EXCESS_PATH) as f:
        for line in f:
            if " - " not in line:
                continue
            fid, hex_str = line.strip().split(" - ", 1)
            try:
                result[int(fid)] = bytearray.fromhex(hex_str)
            except ValueError:
                continue
    return result


def parse_externs(reloc_path, src_fid):
    """Return list of (abs_ptr_off, ptr_sym, ptr_off_in_sym, target_byte)
    sorted by absolute ptr offset (matches trailer-file-IDs ordering)."""
    externs = []
    syms = nm_symbols(src_fid)
    with open(reloc_path) as f:
        for line in f:
            # Strip trailing comment annotations from annotateExternRelocFids
            if "  #" in line:
                line = line.split("  #", 1)[0]
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = line.split()
            if len(parts) != 3 or parts[0] != "extern":
                continue
            m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", parts[1])
            if not m:
                continue
            ptr_sym = m.group(1)
            ptr_off = int(m.group(2), 16) if m.group(2) else 0
            try:
                target_byte = int(parts[2], 16)
            except ValueError:
                continue
            abs_off = syms.get(ptr_sym, 0) + ptr_off
            externs.append((abs_off, ptr_sym, ptr_off, target_byte))
    externs.sort(key=lambda e: e[0])
    return externs


def discover_refs(target_fid):
    """Return a sorted list of unique byte offsets referenced into
    `target_fid` by every other file in the repo."""
    excess = load_excess_bytes()
    offsets = set()
    for fn in sorted(os.listdir(RELOC_DIR)):
        if not fn.endswith(".reloc"):
            continue
        m = re.match(r"^(\d+)_", fn)
        if not m:
            continue
        src_fid = int(m.group(1))
        externs = parse_externs(os.path.join(RELOC_DIR, fn), src_fid)
        n = len(externs)
        if n == 0:
            continue
        trailer = excess.get(src_fid)
        if trailer is None or len(trailer) < 2 * n:
            continue
        tail = trailer[-2 * n:]
        fids = [int.from_bytes(tail[i*2:(i+1)*2], "big") for i in range(n)]
        for (_, _, _, tgt), tfid in zip(externs, fids):
            if tfid == target_fid:
                offsets.add(tgt)
    return sorted(offsets)


def partition_blocks(offsets, file_size):
    """Partition discovered offsets into (kind, offset, size) tuples.

    kind ∈ {"pad", "lut", "tex"}. Each referenced offset becomes a
    data block whose size is (next_ref - this_ref - 8), because every
    block is followed by 8 bytes of pad before the next block. A block
    of exactly 32 bytes is a 16-color RGBA5551 LUT; anything else is a
    Tex (pixel-data) block. The last block runs to file_size with no
    trailing pad.
    """
    blocks = []
    prev_end = 0
    for i, off in enumerate(offsets):
        pad_off = off - 8
        if pad_off < prev_end:
            # Overlap with prior block — shouldn't happen; skip pad.
            pad_off = prev_end
        elif pad_off > prev_end:
            # Loose bytes before the pad — emit as raw (shouldn't normally
            # happen, but keep the byte count honest).
            blocks.append(("raw", prev_end, pad_off - prev_end))
        if off > pad_off:
            blocks.append(("pad", pad_off, off - pad_off))

        if i + 1 < len(offsets):
            next_start = offsets[i+1]
            # Size runs up to (next_start - 8); the 8 is next block's lead pad
            size = next_start - 8 - off
        else:
            size = file_size - off

        if size < 0:
            # Two refs closer than the minimum block gap — treat as zero-size.
            size = 0
        kind = "lut" if size == 0x20 else "tex"
        blocks.append((kind, off, size))
        prev_end = off + size
    if prev_end < file_size:
        blocks.append(("raw", prev_end, file_size - prev_end))
    return blocks


def symbol_name(target_name, kind, offset):
    hex_off = f"0x{offset:04X}"
    if kind == "lut":
        return f"d{target_name}_Lut_{hex_off}_palette"
    if kind == "tex":
        return f"d{target_name}_Tex_{hex_off}"
    return f"d{target_name}_data_{hex_off}"


def emit_c(file_id, target_name, file_size, blocks):
    """Render the typed master .c text."""
    lines = [
        f"/* relocData file {file_id}: {target_name} — image data pool.",
        " *",
        " * Typed via tools/typeImagesFile.py: block layout recovered by scanning",
        " * every other file's extern reloc chain + post-compression trailer file",
        " * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes",
        " * of leading pad + 32-byte RGBA5551 palette).",
        " */",
        "",
        "#include \"relocdata_types.h\"",
        "",
    ]

    for kind, off, size in blocks:
        if kind == "pad":
            lines.append(f"PAD({size});")
            lines.append("")
            continue
        name = symbol_name(target_name, kind, off)
        hex_off = f"0x{off:04X}"
        if kind == "lut":
            lines.append(f"/* Palette: {hex_off} (16 colors RGBA5551) */")
            lines.append(f"u16 {name}[16] = {{")
            lines.append(f"\t#include <{target_name}/Lut_{hex_off}.palette.inc.c>")
            lines.append("};")
        elif kind == "tex":
            lines.append(f"/* Texture: {hex_off} ({size} bytes) */")
            lines.append(f"u8 {name}[{size}] = {{")
            lines.append(f"\t#include <{target_name}/Tex_{hex_off}.tex.inc.c>")
            lines.append("};")
        else:  # raw
            lines.append(f"/* Raw data: {hex_off} ({size} bytes) */")
            lines.append(f"u8 {name}[{size}] = {{")
            lines.append(f"\t#include <{target_name}/data_{hex_off}.data.inc.c>")
            lines.append("};")
        lines.append("")

    return "\n".join(lines)


def emit_inc_files(file_id, target_name, blocks, data):
    """Write the per-block .inc.c files to build/src/relocData/<TargetName>/."""
    out_dir = os.path.join(PROJECT_DIR, "build", "src", "relocData", target_name)
    os.makedirs(out_dir, exist_ok=True)
    for kind, off, size in blocks:
        if kind == "pad":
            continue
        hex_off = f"0x{off:04X}"
        if kind == "lut":
            fname = f"Lut_{hex_off}.palette.inc.c"
            body = []
            for i in range(16):
                val = int.from_bytes(data[off+i*2:off+(i+1)*2], "big")
                body.append(f"0x{val:04X},")
            text = "\t" + " ".join(body) + "\n"
        elif kind == "tex":
            fname = f"Tex_{hex_off}.tex.inc.c"
            text = format_u8_array(data[off:off+size])
        else:
            fname = f"data_{hex_off}.data.inc.c"
            text = format_u8_array(data[off:off+size])
        with open(os.path.join(out_dir, fname), "w") as f:
            f.write(text)


def format_u8_array(bytes_):
    lines = []
    for i in range(0, len(bytes_), 16):
        row = bytes_[i:i+16]
        lines.append("\t" + " ".join(f"0x{b:02X}," for b in row))
    return "\n".join(lines) + "\n"


def find_c_file(file_id):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            return os.path.join(RELOC_DIR, fn), m.group(1)
    return None, None


def load_raw_bytes(file_id):
    """Load the decompressed baserom bytes for this file id."""
    for suf in (".vpk0.bin", ".bin"):
        path = os.path.join(ASSETS_DIR, f"{file_id}{suf}")
        if os.path.exists(path):
            with open(path, "rb") as f:
                return f.read()
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_id", type=int)
    ap.add_argument("--dry", action="store_true")
    args = ap.parse_args()

    c_path, target_name = find_c_file(args.file_id)
    if c_path is None:
        print(f"fid {args.file_id}: no source .c found", file=sys.stderr)
        sys.exit(1)

    data = load_raw_bytes(args.file_id)
    if data is None:
        print(f"fid {args.file_id}: no extracted asset", file=sys.stderr)
        sys.exit(1)

    offsets = discover_refs(args.file_id)
    if not offsets:
        print(f"fid {args.file_id}: no external references — can't decompose", file=sys.stderr)
        sys.exit(1)

    blocks = partition_blocks(offsets, len(data))
    print(f"fid {args.file_id} ({target_name}): {len(offsets)} refs, {len(blocks)} blocks")
    for kind, off, size in blocks:
        print(f"  {kind:4s} 0x{off:04X}  size {size}")

    if args.dry:
        return

    new_text = emit_c(args.file_id, target_name, len(data), blocks)
    emit_inc_files(args.file_id, target_name, blocks, data)
    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"  wrote {c_path}")


if __name__ == "__main__":
    main()
