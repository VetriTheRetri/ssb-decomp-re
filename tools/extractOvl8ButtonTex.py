#!/usr/bin/env python3
"""Extract the 16x16 RGBA5551 debug-menu button texture from ovl8_30's
.data section (`D_ovl8_8038E308`).

Reads the baserom at the version-specific ROM offset, extracts the
512-byte texture, and writes:
  - assets/ovl8/ovl8_30_button.rgba16.bin  (raw N64 pixels)
  - assets/ovl8/ovl8_30_button.rgba16.png  (RGBA preview)
  - build/src/ovl8/ovl8_30_button.rgba16.inc.c  (u16 hex for #include)

The ROM offset differs between US and JP because the ovl8 segment sits
at a different address on each version.
"""

import argparse
import os
import struct
import sys

TEX_WIDTH = 16
TEX_HEIGHT = 16
TEX_BYTE_SIZE = TEX_WIDTH * TEX_HEIGHT * 2  # RGBA5551 = 2 bytes/pixel

# ROM offsets: ovl8_30 .data start (from splat yaml) + 0x128 (offset of
# D_ovl8_8038E308 within the .data section).
ROM_OFFSETS = {
    "us": 0x1AAA30 + 0x128,  # 0x1AAB58
    "jp": 0x1AACB0 + 0x128,  # 0x1AADD8
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
    """Emit u16 hex values for #include in a u16[] array initializer."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    pixels = struct.unpack(f">{TEX_WIDTH * TEX_HEIGHT}H", data)
    with open(path, "w") as f:
        for row in range(TEX_HEIGHT):
            row_vals = pixels[row * TEX_WIDTH:(row + 1) * TEX_WIDTH]
            f.write("\t" + ", ".join(f"0x{v:04X}" for v in row_vals) + ",\n")


def rgba5551_to_rgba8888(data):
    """Decode RGBA5551 big-endian pixels into an (R,G,B,A) byte sequence."""
    out = bytearray()
    for i in range(0, len(data), 2):
        pixel = (data[i] << 8) | data[i + 1]
        r5 = (pixel >> 11) & 0x1F
        g5 = (pixel >> 6) & 0x1F
        b5 = (pixel >> 1) & 0x1F
        a1 = pixel & 1
        out.append((r5 << 3) | (r5 >> 2))
        out.append((g5 << 3) | (g5 >> 2))
        out.append((b5 << 3) | (b5 >> 2))
        out.append(0xFF if a1 else 0x00)
    return bytes(out)


def write_png(path, data):
    """Write an RGBA PNG preview."""
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
        import n64img.image as n64img
        img = n64img.RGBA16(data=data, width=TEX_WIDTH, height=TEX_HEIGHT)
        img.write(path)
        return
    except ImportError:
        pass
    # No PNG library available — skip silently
    return


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="us", choices=sorted(ROM_OFFSETS))
    ap.add_argument("--baserom", default=None,
                    help="Path to baserom.<version>.z64")
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
