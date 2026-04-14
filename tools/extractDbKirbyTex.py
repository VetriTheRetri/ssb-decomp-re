#!/usr/bin/env python3
"""Extract the `dDBCubeKirbyFaceTexture` 32x32 RGBA5551 texture from the
baserom and emit a hex-array include, an RGBA PNG preview, and a raw .bin
copy. Driven from the Makefile's extract target so the texture bytes stay
out of the committed source tree.

The texture lives in `src/db/dbcube.c` at VRAM 0x801321E8 and gets loaded
by `dDBCubeKirbyCubeDisplayList` via gsDPLoadBlock. Its location in the
baserom differs between US and JP builds because the ovl13 segment sits
at a different address on each version, so the ROM offset is passed in
rather than hard-coded.
"""

import argparse
import os
import struct
import sys

TEX_WIDTH = 32
TEX_HEIGHT = 32
TEX_BYTE_SIZE = TEX_WIDTH * TEX_HEIGHT * 2  # RGBA5551 = 2 bytes/pixel

# ROM offsets computed from the splat yaml `.data` block for db/dbcube
# plus the 8-byte `dDBCubePad0x801321E0` prefix.
ROM_OFFSETS = {
    "us": 0x11AA20 + 8,  # 0x11AA28
    "jp": 0x11A790 + 8,  # 0x11A798
}


def read_texture(baserom_path, rom_offset):
    with open(baserom_path, "rb") as f:
        f.seek(rom_offset)
        data = f.read(TEX_BYTE_SIZE)
    if len(data) != TEX_BYTE_SIZE:
        sys.exit(f"Error: only read {len(data)} of {TEX_BYTE_SIZE} bytes "
                 f"from {baserom_path} at 0x{rom_offset:X}")
    return data


def write_bin(path, data):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "wb") as f:
        f.write(data)


def write_inc_c(path, data):
    """Emit the same comma-separated hex form the old `dbkirby.txt` used so
    `#include` slots in as a drop-in replacement for the array initializer."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    vals = struct.unpack(f">{TEX_WIDTH * TEX_HEIGHT}H", data)
    with open(path, "w") as f:
        for row in range(TEX_HEIGHT):
            row_vals = vals[row * TEX_WIDTH:(row + 1) * TEX_WIDTH]
            f.write("\t" + ", ".join(f"0x{v:04X}" for v in row_vals) + ",\n")


def rgba5551_to_rgba8888(data):
    """Decode RGBA5551 big-endian pixels into an (R,G,B,A) byte list."""
    out = bytearray()
    for i in range(0, len(data), 2):
        pixel = (data[i] << 8) | data[i + 1]
        r5 = (pixel >> 11) & 0x1F
        g5 = (pixel >> 6) & 0x1F
        b5 = (pixel >> 1) & 0x1F
        a1 = pixel & 1
        # Replicate high bits into low bits for 8-bit conversion.
        out.append((r5 << 3) | (r5 >> 2))
        out.append((g5 << 3) | (g5 >> 2))
        out.append((b5 << 3) | (b5 >> 2))
        out.append(0xFF if a1 else 0x00)
    return bytes(out)


def write_png(path, data):
    """Write an RGBA PNG preview using whichever minimal encoder is handy.
    Prefers `PIL` (ubiquitous), falls back to the stdlib-only `png` module
    already vendored for `image_converter.py`."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    rgba = rgba5551_to_rgba8888(data)
    try:
        from PIL import Image
        img = Image.frombytes("RGBA", (TEX_WIDTH, TEX_HEIGHT), rgba)
        img.save(path)
        return
    except ImportError:
        pass
    try:
        import png  # pypng, used by image_converter.py
    except ImportError:
        sys.exit("Error: need `Pillow` or `pypng` to emit PNG preview")
    rows = []
    for y in range(TEX_HEIGHT):
        rows.append(rgba[y * TEX_WIDTH * 4:(y + 1) * TEX_WIDTH * 4])
    writer = png.Writer(TEX_WIDTH, TEX_HEIGHT,
                        greyscale=False, alpha=True, bitdepth=8)
    with open(path, "wb") as f:
        writer.write(f, rows)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="us", choices=sorted(ROM_OFFSETS))
    ap.add_argument("--baserom", default=None,
                    help="Path to baserom.<version>.z64 (defaults to the "
                         "version-specific file in the repo root)")
    ap.add_argument("--bin", required=True, help="Output .bin path")
    ap.add_argument("--inc", required=True, help="Output .inc.c path")
    ap.add_argument("--png", required=True, help="Output .png preview path")
    args = ap.parse_args()

    baserom = args.baserom or f"baserom.{args.version}.z64"
    data = read_texture(baserom, ROM_OFFSETS[args.version])
    write_bin(args.bin, data)
    write_inc_c(args.inc, data)
    write_png(args.png, data)


if __name__ == "__main__":
    main()
