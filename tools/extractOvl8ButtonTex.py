#!/usr/bin/env python3
"""Extract the 16x16 RGBA16 button texture from ovl8_30's .data section.

Reads the baserom at the ovl8 data offset, extracts the 512-byte texture,
writes:
  - assets/ovl8/ovl8_30_button.rgba16.bin  (raw N64 pixels)
  - assets/ovl8/ovl8_30_button.rgba16.png  (preview)
  - build/src/ovl8/ovl8_30_button.rgba16.inc.c  (u16 hex for #include)

The .inc.c uses u16 values (RGBA5551) like the dbkirby texture.
"""

import argparse
import os
import struct
import sys

PROJECT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Texture lives at offset 0x128 within ovl8_30's .data section.
# ovl8_30 .data starts at ROM 0x1AAA30.
TEX_ROM_OFFSET = 0x1AAA30 + 0x128  # D_ovl8_8038E308 = 0x8038E1E0 + 0x128
TEX_SIZE = 512  # 16x16 RGBA16
TEX_W, TEX_H = 16, 16


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="us")
    ap.add_argument("--baserom", default=None)
    ap.add_argument("--bin", default=os.path.join(PROJECT, "assets/ovl8/ovl8_30_button.rgba16.bin"))
    ap.add_argument("--inc", default=os.path.join(PROJECT, "build/src/ovl8/ovl8_30_button.rgba16.inc.c"))
    ap.add_argument("--png", default=os.path.join(PROJECT, "assets/ovl8/ovl8_30_button.rgba16.png"))
    args = ap.parse_args()

    baserom = args.baserom or os.path.join(PROJECT, f"baserom.{args.version}.z64")

    # Extract from baserom if it exists
    if os.path.exists(baserom):
        with open(baserom, "rb") as f:
            f.seek(TEX_ROM_OFFSET)
            data = f.read(TEX_SIZE)

        os.makedirs(os.path.dirname(args.bin), exist_ok=True)
        with open(args.bin, "wb") as f:
            f.write(data)

    # Read from .bin (may already exist from a previous extract)
    if not os.path.exists(args.bin):
        print(f"No texture data at {args.bin}", file=sys.stderr)
        return

    with open(args.bin, "rb") as f:
        data = f.read()

    # Write .inc.c (u16 hex values, 8 per line)
    os.makedirs(os.path.dirname(args.inc), exist_ok=True)
    pixels = struct.unpack(f">{len(data)//2}H", data)
    lines = []
    for i in range(0, len(pixels), 8):
        row = ", ".join(f"0x{p:04X}" for p in pixels[i:i+8])
        lines.append(f"\t{row},")
    with open(args.inc, "w") as f:
        f.write("\n".join(lines) + "\n")

    # Write PNG preview
    try:
        import n64img.image as n64img
        img = n64img.RGBA16(data=data, width=TEX_W, height=TEX_H)
        os.makedirs(os.path.dirname(args.png), exist_ok=True)
        img.write(args.png)
    except ImportError:
        pass


if __name__ == "__main__":
    main()
