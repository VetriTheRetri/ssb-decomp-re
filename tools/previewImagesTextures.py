#!/usr/bin/env python3
"""
Generate PNG previews for (LUT, Tex) blocks in typed Images files.

Uses n64img (splat's dependency) for CI4 → PNG conversion. Each LUT +
following Tex block(s) are rendered as CI4 images with RGBA5551 palettes.
Width is guessed from standard N64 texture widths to minimize distortion.

Output goes to build/src/relocData/<Name>/Tex_0xXXXX.ci4.png.

Usage:
    tools/previewImagesTextures.py <file_id>     # generate PNGs
    tools/previewImagesTextures.py --all          # all Images files
"""

import argparse
import os
import re
import struct
import sys

from n64img.image import CI4

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")

N64_WIDTHS = [8, 16, 24, 32, 48, 64, 96, 128]


def rgba5551_to_palette(lut_bytes):
    """Convert 32 bytes of RGBA5551 u16s to a list of (r,g,b,a) tuples."""
    palette = []
    for i in range(16):
        val = struct.unpack(">H", lut_bytes[i*2:(i+1)*2])[0]
        r = ((val >> 11) & 0x1F) << 3
        g = ((val >>  6) & 0x1F) << 3
        b = ((val >>  1) & 0x1F) << 3
        a = 255 if (val & 1) else 0
        palette.append((r, g, b, a))
    return palette


def guess_width(tex_size):
    total_pixels = tex_size * 2
    best, best_ratio = 32, 999
    for w in N64_WIDTHS:
        if total_pixels % w != 0:
            continue
        h = total_pixels // w
        ratio = max(w / h, h / w)
        if ratio < best_ratio:
            best_ratio = ratio
            best = w
    return best


def process_file(file_id):
    c_path = target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        return

    for suf in (".vpk0.bin", ".bin"):
        data_path = os.path.join(ASSETS_DIR, f"{file_id}{suf}")
        if os.path.exists(data_path):
            break
    with open(data_path, "rb") as f:
        data = f.read()

    with open(c_path) as f:
        text = f.read()

    blocks = []
    for m in re.finditer(
        r"(u16|u8)\s+d\w+_(Lut_0x[0-9A-Fa-f]+)_palette\[16\]|"
        r"u8\s+d\w+_(Tex_0x[0-9A-Fa-f]+)\[(\d+)\]",
        text
    ):
        if m.group(2):
            off = int(m.group(2).split("_")[1], 16)
            blocks.append(("lut", off, 32))
        elif m.group(3):
            off = int(m.group(3).split("_")[1], 16)
            size = int(m.group(4))
            blocks.append(("tex", off, size))
    blocks.sort(key=lambda b: b[1])
    if not blocks:
        return

    out_dir = os.path.join(BUILD_DIR, target_name)
    os.makedirs(out_dir, exist_ok=True)

    current_lut = None
    count = 0
    for kind, off, size in blocks:
        if kind == "lut":
            current_lut = data[off:off+32]
        elif kind == "tex" and current_lut is not None and size > 0:
            width = guess_width(size)
            height = (size * 2) // width
            img = CI4(data[off:off+size], width, height)
            img.palette = rgba5551_to_palette(current_lut)
            png_path = os.path.join(out_dir, f"Tex_0x{off:04X}.ci4.png")
            img.write(png_path)
            count += 1

    if count > 0:
        print(f"fid {file_id} ({target_name}): {count} PNGs → {out_dir}/")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    args = ap.parse_args()

    if args.all:
        targets = [103, 110, 120, 121, 122, 123]
    elif args.file_ids:
        targets = args.file_ids
    else:
        ap.print_help()
        sys.exit(1)

    for fid in targets:
        process_file(fid)


if __name__ == "__main__":
    main()
