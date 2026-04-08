#!/usr/bin/python3
"""
Extract and convert sprite texture data from relocData files.

Usage:
    relocSpriteTool.py extract <file_id> [--output-dir <dir>]
    relocSpriteTool.py convert <png_path> --format <fmt> --width <w> --width-img <wi> --height <h>

Extract mode: Reads a relocData binary and its relocation chain, finds all
sprite texture regions, and extracts:
  - Raw pixel data as .bin files
  - PNG previews (via N64-to-RGBA conversion)
  - Sprite metadata as JSON

Convert mode: Converts a PNG to N64 texture format binary data, suitable
for inclusion in a relocData C file.

Supported N64 texture formats:
  i4, i8, ia4, ia8, ia16, ci4, ci8, rgba16, rgba32
"""

import os
import sys
import struct
import argparse
import json
import csv
from math import floor

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
EXTRACTED_FILES_PATH = os.path.join(PROJECT_DIR, "assets", "relocData")
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "relocData.csv")
COMPRESSED_FILE_COUNT = 499

SPRITE_SIZE = 68
BITMAP_SIZE = 16

# Format code -> (name, bits_per_pixel_func(bmsiz))
FMT_NAMES = {0: "rgba", 1: "yuv", 2: "ci", 3: "ia", 4: "i"}
SIZ_NAMES = {0: "4", 1: "8", 2: "16", 3: "32", 4: "4c"}
# G_IM_SIZ_4c is a compressed 2bpp format decoded at runtime to 4bpp
BPP = {0: 4, 1: 8, 2: 16, 3: 32, 4: 2}


def get_binary_path(file_id):
    """Return the decompressed binary path, version-agnostic.

    The compressed/uncompressed boundary varies by version (US: 499, JP: 474),
    so we check the filesystem rather than relying on a hardcoded constant.
    """
    vpk0_path = os.path.join(EXTRACTED_FILES_PATH, f"{file_id}.vpk0.bin")
    if os.path.exists(vpk0_path):
        return vpk0_path
    return os.path.join(EXTRACTED_FILES_PATH, f"{file_id}.bin")


def parse_csv_entry(file_id):
    if not os.path.exists(CSV_PATH):
        return None
    with open(CSV_PATH) as f:
        reader = csv.reader(f)
        next(reader)
        for i, row in enumerate(reader):
            if i == file_id and len(row) >= 6:
                return {
                    'reloc_intern_offset': int(row[2].strip(), 16),
                    'reloc_extern_offset': int(row[4].strip(), 16),
                }
    return None


def parse_reloc_chain(data, start_word):
    entries = {}
    offset = start_word
    seen = set()
    while offset != 0xFFFF:
        if offset in seen:
            break
        seen.add(offset)
        byte_off = offset * 4
        if byte_off + 4 > len(data):
            break
        val = struct.unpack('>I', data[byte_off:byte_off + 4])[0]
        next_r = (val >> 16) & 0xFFFF
        target = (val & 0xFFFF) * 4
        entries[byte_off] = target
        offset = next_r
    return entries


def parse_file_descriptions(desc_path, file_id):
    entries = []
    if not desc_path or not os.path.exists(desc_path):
        return entries
    import re
    with open(desc_path) as f:
        lines = f.read().split('\n')
    in_target = False
    for line in lines:
        line = line.strip()
        if not line or line.startswith('#') or line.startswith('-'):
            continue
        m = re.match(r"\[(\d+)]", line)
        if m:
            in_target = (int(m.group(1)) == file_id)
            continue
        if in_target and line.count(' ') == 2:
            bt, bn, bo = line.split(' ')
            offset = int(bo, 16) if bo.startswith('0x') else int(bo)
            entries.append((bt, bn, offset))
    return [(t, n, o) for t, n, o in sorted(entries, key=lambda x: x[2]) if t == 'Sprite']


def parse_file_id_to_name(desc_path):
    """Read relocFileDescriptions and return a dict of file_id -> name."""
    d = {}
    if not desc_path or not os.path.exists(desc_path):
        return d
    with open(desc_path) as f:
        for line in f:
            line = line.strip()
            if line and line[0] == '-':
                fid = int(line.split(":")[0][1:])
                d[fid] = line.split(":")[1].strip()
    return d


def parse_sprite(data, offset):
    if offset + SPRITE_SIZE > len(data):
        return None
    raw = data[offset:offset + SPRITE_SIZE]
    fields = struct.unpack('>2h 2h 2f 2h Hh 4B 2h I 2h 2h 2h 2B 2x I I I 2h', raw)
    return {
        'offset': offset,
        'width': fields[2], 'height': fields[3],
        'nbitmaps': fields[19], 'ndisplist': fields[20],
        'bmheight': fields[21], 'bmHreal': fields[22],
        'bmfmt': fields[23], 'bmsiz': fields[24],
        'bitmap_raw': fields[25],
    }


def compute_pixel_data_size(width_img, height, bmfmt, bmsiz):
    """Compute raw pixel data size in bytes for one bitmap tile."""
    bpp = BPP[bmsiz]
    row_bytes = (width_img * bpp + 7) // 8
    return row_bytes * height


def unswizzle_n64_texture(pixel_data, width_img, height, bmfmt, bmsiz):
    """Apply N64 texture word-swap unswizzling.

    The N64 RDP swaps the two 32-bit halves of each odd row when loading
    4bpp/8bpp/16bpp textures into TMEM. To get the visual representation,
    we apply the inverse (which is the same swap).

    The swap unit is 64-bit aligned within the row stride.
    """
    bpp = BPP[bmsiz]
    row_bytes = (width_img * bpp + 7) // 8

    # 32-bit (RGBA32) textures aren't swizzled
    if bmfmt == 0 and bmsiz == 3:
        return pixel_data

    result = bytearray(pixel_data)
    for y in range(height):
        if y & 1:  # odd row
            row_start = y * row_bytes
            # Swap pairs of 4-byte halves within each 8-byte unit
            for unit_start in range(row_start, row_start + row_bytes, 8):
                if unit_start + 8 <= len(result):
                    half1 = bytes(result[unit_start:unit_start + 4])
                    half2 = bytes(result[unit_start + 4:unit_start + 8])
                    result[unit_start:unit_start + 4] = half2
                    result[unit_start + 4:unit_start + 8] = half1
    return bytes(result)


def n64_to_rgba(pixel_data, width, height, width_img, bmfmt, bmsiz, tlut_data=None):
    """Convert N64 texture format to RGBA8 pixel rows for PNG output.

    Applies word-swap unswizzling first (the N64 stores 4bpp/8bpp textures
    with odd rows having their 32-bit halves swapped).
    """
    pixel_data = unswizzle_n64_texture(pixel_data, width_img, height, bmfmt, bmsiz)

    rows = []
    bpp = BPP[bmsiz]
    row_bytes = (width_img * bpp + 7) // 8

    for y in range(height):
        row_start = y * row_bytes
        row = []
        for x in range(width):
            if bmfmt == 3:  # IA
                if bmsiz == 0:  # IA4 (3-bit I + 1-bit A)
                    byte_idx = row_start + x // 2
                    if byte_idx >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    byte = pixel_data[byte_idx]
                    if x % 2 == 0:
                        nibble = (byte >> 4) & 0xF
                    else:
                        nibble = byte & 0xF
                    i3 = (nibble >> 1) & 0x7
                    a1 = nibble & 0x1
                    i8 = (i3 << 5) | (i3 << 2) | (i3 >> 1)
                    a8 = 0xFF if a1 else 0x00
                    row.extend([i8, i8, i8, a8])
                elif bmsiz == 1:  # IA8 (4-bit I + 4-bit A)
                    byte_idx = row_start + x
                    if byte_idx >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    byte = pixel_data[byte_idx]
                    i4 = (byte >> 4) & 0xF
                    a4 = byte & 0xF
                    i8 = (i4 << 4) | i4
                    a8 = (a4 << 4) | a4
                    row.extend([i8, i8, i8, a8])
                elif bmsiz == 2:  # IA16 (8-bit I + 8-bit A)
                    byte_idx = row_start + x * 2
                    if byte_idx + 1 >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    i8, a8 = pixel_data[byte_idx], pixel_data[byte_idx + 1]
                    row.extend([i8, i8, i8, a8])
            elif bmfmt == 4:  # I
                if bmsiz == 0:  # I4
                    byte_idx = row_start + x // 2
                    if byte_idx >= len(pixel_data):
                        row.extend([0, 0, 0, 255])
                        continue
                    byte = pixel_data[byte_idx]
                    if x % 2 == 0:
                        i4 = (byte >> 4) & 0xF
                    else:
                        i4 = byte & 0xF
                    i8 = (i4 << 4) | i4
                    row.extend([i8, i8, i8, 255])
                elif bmsiz == 1:  # I8
                    byte_idx = row_start + x
                    if byte_idx >= len(pixel_data):
                        row.extend([0, 0, 0, 255])
                        continue
                    i8 = pixel_data[byte_idx]
                    row.extend([i8, i8, i8, 255])
            elif bmfmt == 0:  # RGBA
                if bmsiz == 2:  # RGBA16
                    byte_idx = row_start + x * 2
                    if byte_idx + 1 >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    val = struct.unpack('>H', pixel_data[byte_idx:byte_idx + 2])[0]
                    r = ((val >> 11) & 0x1F) << 3
                    g = ((val >> 6) & 0x1F) << 3
                    b = ((val >> 1) & 0x1F) << 3
                    a = 0xFF if (val & 1) else 0x00
                    row.extend([r, g, b, a])
                elif bmsiz == 3:  # RGBA32
                    byte_idx = row_start + x * 4
                    if byte_idx + 3 >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    r, g, b, a = pixel_data[byte_idx:byte_idx + 4]
                    row.extend([r, g, b, a])
            elif bmfmt == 2:  # CI
                if bmsiz == 0:  # CI4
                    byte_idx = row_start + x // 2
                    if byte_idx >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    byte = pixel_data[byte_idx]
                    if x % 2 == 0:
                        idx = (byte >> 4) & 0xF
                    else:
                        idx = byte & 0xF
                    if tlut_data and idx * 2 + 1 < len(tlut_data):
                        val = struct.unpack('>H', tlut_data[idx * 2:idx * 2 + 2])[0]
                        r = ((val >> 11) & 0x1F) << 3
                        g = ((val >> 6) & 0x1F) << 3
                        b = ((val >> 1) & 0x1F) << 3
                        a = 0xFF if (val & 1) else 0x00
                        row.extend([r, g, b, a])
                    else:
                        i8 = (idx << 4) | idx
                        row.extend([i8, i8, i8, 255])
                elif bmsiz == 1:  # CI8
                    byte_idx = row_start + x
                    if byte_idx >= len(pixel_data):
                        row.extend([0, 0, 0, 0])
                        continue
                    idx = pixel_data[byte_idx]
                    if tlut_data and idx * 2 + 1 < len(tlut_data):
                        val = struct.unpack('>H', tlut_data[idx * 2:idx * 2 + 2])[0]
                        r = ((val >> 11) & 0x1F) << 3
                        g = ((val >> 6) & 0x1F) << 3
                        b = ((val >> 1) & 0x1F) << 3
                        a = 0xFF if (val & 1) else 0x00
                        row.extend([r, g, b, a])
                    else:
                        row.extend([idx, idx, idx, 255])
            else:
                row.extend([255, 0, 255, 255])  # magenta for unsupported
        rows.append(row)
    return rows


def extract_sprites(file_id, output_dir, desc_path=None):
    """Extract all sprite textures from a relocData file."""
    import png

    bin_path = get_binary_path(file_id)
    if not os.path.exists(bin_path):
        print(f"Error: {bin_path} not found", file=sys.stderr)
        return

    with open(bin_path, 'rb') as f:
        data = f.read()

    csv_entry = parse_csv_entry(file_id)
    if not csv_entry:
        print(f"Error: no CSV entry for file {file_id}", file=sys.stderr)
        return

    # Build reloc map
    relocs = {}
    intern_off = csv_entry['reloc_intern_offset']
    if intern_off != 0xFFFF:
        relocs = parse_reloc_chain(data, intern_off)

    # Find sprite offsets from descriptions
    if not desc_path:
        desc_path = os.path.join(SCRIPT_DIR, "relocFileDescriptions.us.txt")
    sprite_entries = parse_file_descriptions(desc_path, file_id)

    if not sprite_entries:
        print(f"No sprite descriptions for file {file_id}")
        return

    os.makedirs(output_dir, exist_ok=True)

    for _, name, sp_off in sprite_entries:
        sp = parse_sprite(data, sp_off)
        if sp is None:
            continue

        # Unnamed sprites get a stable id from their offset (matches the
        # naming convention used by genRelocDataC.py).
        if name == '-':
            name = f"sprite_0x{sp_off:04X}"

        fmt_name = f"{FMT_NAMES.get(sp['bmfmt'], '?')}{SIZ_NAMES.get(sp['bmsiz'], '?')}"

        # Find bitmap location via reloc chain
        bitmap_ptr_off = sp_off + 52
        bitmap_off = relocs.get(bitmap_ptr_off)
        if bitmap_off is None:
            print(f"  {name}: no bitmap reloc, skipping")
            continue

        # Read bitmap struct
        bm = struct.unpack('>2h 2h I 2h', data[bitmap_off:bitmap_off + BITMAP_SIZE])
        width_img = bm[1]
        bm_height = bm[5]

        # Find pixel data via bitmap.buf reloc
        buf_off = bitmap_off + 8
        pixel_off = relocs.get(buf_off)
        if pixel_off is None:
            print(f"  {name}: no pixel reloc, skipping")
            continue

        # The texture region spans from the first tile's pixel data to the
        # bitmap array start, including any inter-tile padding/DL terminators
        # for multi-bitmap sprites. This matches genRelocDataC.py exactly so
        # the .inc.c file is byte-identical to what gets emitted there.
        tex_size = bitmap_off - pixel_off
        pixel_data_combined = data[pixel_off:pixel_off + tex_size]

        # Total visible height for the PNG: sum of all tiles' actualHeight
        out_height = 0
        for bi in range(sp['nbitmaps']):
            tile_bm_off = bitmap_off + bi * BITMAP_SIZE
            tile_bm = struct.unpack('>2h 2h I 2h', data[tile_bm_off:tile_bm_off + BITMAP_SIZE])
            out_height += tile_bm[5]

        # Write the .inc.c file (raw N64 texture bytes, byte-by-byte)
        inc_path = os.path.join(output_dir, f"{name}.{fmt_name}.inc.c")
        with open(inc_path, 'w') as f:
            for i in range(0, len(pixel_data_combined), 16):
                chunk = pixel_data_combined[i:i + 16]
                f.write(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},\n")

        # Write a PNG preview unless the format isn't supported by n64_to_rgba.
        # CI formats need a palette (not extracted yet) and 4c is compressed.
        if sp['bmfmt'] == 2 or sp['bmsiz'] == 4:
            print(f"  {name}: {sp['width']}x{out_height} {fmt_name} -> {inc_path} (no PNG)")
            continue

        # PNG generation: stitch all tiles vertically using their tile sizes,
        # not the combined region (which includes inter-tile padding bytes).
        all_rows = []
        for bi in range(sp['nbitmaps']):
            tile_bm_off = bitmap_off + bi * BITMAP_SIZE
            tile_bm = struct.unpack('>2h 2h I 2h', data[tile_bm_off:tile_bm_off + BITMAP_SIZE])
            tile_buf_off = tile_bm_off + 8
            tile_pixel_off = relocs.get(tile_buf_off)
            if tile_pixel_off is None:
                break
            tile_h = tile_bm[5]
            tile_size = compute_pixel_data_size(width_img, tile_h, sp['bmfmt'], sp['bmsiz'])
            tile_data = data[tile_pixel_off:tile_pixel_off + tile_size]
            tile_rows = n64_to_rgba(tile_data, width_img, tile_h, width_img,
                                    sp['bmfmt'], sp['bmsiz'])
            all_rows.extend(tile_rows)

        png_path = os.path.join(output_dir, f"{name}.{fmt_name}.png")
        w = png.Writer(width=width_img, height=out_height, alpha=True,
                       greyscale=False)
        # Force PNG mtime to be older than the .inc.c so the build's
        # PNG -> inc.c rule doesn't immediately re-fire and overwrite our
        # exact bytes (which would otherwise round-trip with rounding errors).
        with open(png_path, 'wb') as f:
            w.write(f, all_rows)
        import time
        old = time.time() - 1
        os.utime(png_path, (old, old))

        w_info = f"{sp['width']}x{out_height}" if sp['width'] == width_img else f"{sp['width']}({width_img})x{out_height}"
        print(f"  {name}: {w_info} {fmt_name} -> {inc_path}, {png_path}")


def png_to_inc_c(png_path, inc_path, fmt):
    """Convert a PNG to a .inc.c file containing N64 texture data.

    Uses image_converter.py to convert PNG -> raw binary, then applies the
    N64 word-swap swizzling (odd rows have their 32-bit halves swapped),
    then writes as C hex byte values.
    """
    import subprocess
    import tempfile
    import png as pnglib

    # Read PNG dimensions for swizzling
    img = pnglib.Reader(png_path)
    img.preamble(True)
    width_img = img.width
    height = img.height

    # Map format string to (bmfmt, bmsiz)
    fmt_map = {
        'i4':    (4, 0), 'i8':    (4, 1),
        'ia4':   (3, 0), 'ia8':   (3, 1), 'ia16':  (3, 2),
        'ci4':   (2, 0), 'ci8':   (2, 1),
        'rgba16':(0, 2), 'rgba32':(0, 3),
    }
    if fmt not in fmt_map:
        print(f"Error: unknown format '{fmt}'", file=sys.stderr)
        sys.exit(1)
    bmfmt, bmsiz = fmt_map[fmt]

    with tempfile.NamedTemporaryFile(suffix='.bin', delete=False) as tmp:
        tmp_bin = tmp.name

    try:
        subprocess.run(
            [sys.executable, os.path.join(SCRIPT_DIR, 'image_converter.py'),
             png_path, tmp_bin, '--format', fmt],
            check=True, capture_output=True, text=True
        )

        with open(tmp_bin, 'rb') as f:
            data = f.read()

        # Apply N64 word-swap (the binary should have odd rows pre-swapped
        # for TMEM loading; image_converter writes raw row order)
        data = unswizzle_n64_texture(data, width_img, height, bmfmt, bmsiz)

        lines = []
        for i in range(0, len(data), 16):
            chunk = data[i:i + 16]
            lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")

        with open(inc_path, 'w') as f:
            f.write("\n".join(lines) + "\n")

        print(f"Converted: {png_path} -> {inc_path} ({len(data)} bytes, {fmt})")
    finally:
        if os.path.exists(tmp_bin):
            os.unlink(tmp_bin)


def main():
    parser = argparse.ArgumentParser(description="Extract/convert relocData sprite textures")
    sub = parser.add_subparsers(dest="command")

    ext = sub.add_parser("extract", help="Extract sprite textures from relocData file")
    ext.add_argument("file_id", type=int)
    ext.add_argument("--output-dir", "-o", default=None)
    ext.add_argument("--descriptions", "-d", default=None)
    ext.add_argument("--version", "-v", default="us",
                     help="ROM version (us or jp). Selects relocFileDescriptions.<version>.txt")

    conv = sub.add_parser("png2inc", help="Convert PNG to .inc.c hex data file")
    conv.add_argument("png_path", help="Input PNG (format encoded in filename, e.g. foo.ia8.png)")
    conv.add_argument("inc_path", help="Output .inc.c file")
    conv.add_argument("--format", "-f", default=None,
                      help="N64 texture format (auto-detected from filename if omitted)")

    args = parser.parse_args()

    if args.command == "extract":
        # Default descriptions path comes from --version (us or jp)
        desc_path = args.descriptions or os.path.join(
            SCRIPT_DIR, f"relocFileDescriptions.{args.version}.txt")
        # Default output dir is build/src/relocData/<FileName>/ - generated
        # texture data is a build artifact, not part of the source tree.
        if args.output_dir:
            out_dir = args.output_dir
        else:
            file_id_to_name = parse_file_id_to_name(desc_path)
            file_name = file_id_to_name.get(args.file_id, "")
            subdir = file_name if file_name else f"file_{args.file_id}"
            out_dir = os.path.join(PROJECT_DIR, "build", "src", "relocData", subdir)
        extract_sprites(args.file_id, out_dir, desc_path)
    elif args.command == "png2inc":
        fmt = args.format
        if fmt is None:
            # Auto-detect from filename: foo.ia8.png -> ia8
            base = os.path.basename(args.png_path).replace('.png', '')
            if '.' in base:
                fmt = base.rsplit('.', 1)[1]
        if not fmt:
            print("Error: cannot detect format from filename, use --format", file=sys.stderr)
            sys.exit(1)
        png_to_inc_c(args.png_path, args.inc_path, fmt)
    else:
        parser.print_help()


if __name__ == "__main__":
    main()
