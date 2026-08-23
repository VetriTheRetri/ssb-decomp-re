#!/usr/bin/env python3
"""Extract a raw RGBA5551 texture that the original build baked into a C
`.data` section, so the pixels live in assets/ instead of the source tree.

For each texture this writes three files:
  - assets/<version>/<dir>/<name>.rgba16.bin      raw N64 pixels
  - assets/<version>/<dir>/<name>.rgba16.png      RGBA preview, viewable
                                                  without building
  - build/<version>/src/<dir>/<name>.rgba16.inc.c hex rows for `#include`
                                                  inside a `u16[]` initializer

ROM offsets differ between US and JP because the overlay segments sit at
different addresses on each version, so every texture carries both.

Driven from the Makefile's RAW_TEXTURE_RULE template; adding a texture means
one entry here plus one `$(eval $(call RAW_TEXTURE_RULE,...))` line.
"""

import argparse
import os
import struct
import sys

# name -> geometry, per-version ROM offset, and what consumes it.
#
# Offsets are written as `<section start from the splat yaml> + <offset of the
# symbol within that section>` so they can be re-derived when a yaml moves.
TEXTURES = {
    # src/db/dbcube.c, dDBCubeKirbyFaceTexture at VRAM 0x801321E8, loaded by
    # dDBCubeKirbyCubeDisplayList via gsDPLoadBlock. The +8 skips
    # dDBCubePad0x801321E0.
    "dbkirby": {
        "width": 32,
        "height": 32,
        "offsets": {"us": 0x11AA20 + 8, "jp": 0x11A790 + 8},
    },
    # src/ovl8/ovl8_30.c, D_ovl8_8038E308 -- the debug-menu button icon.
    "ovl8_30_button": {
        "width": 16,
        "height": 16,
        "offsets": {"us": 0x1AAA30 + 0x128, "jp": 0x1AACB0 + 0x128},
    },
    # src/ovl8/ovl8_8.c, D_ovl8_80387CA8 -- the debug-menu mouse cursor.
    # D_ovl8_80387EA8 (Bitmap) points at it and D_ovl8_80387EB8 (Sprite)
    # declares it G_IM_FMT_RGBA / G_IM_SIZ_16b; func_ovl8_8037BCB8 draws it,
    # tagging the node 'Arow'. The +8 skips D_ovl8_80387CA0's two words.
    "ovl8_8_arrow": {
        "width": 16,
        "height": 16,
        "offsets": {"us": 0x1A44F0 + 8, "jp": 0x1A4770 + 8},
    },
}


def read_texture(baserom_path, rom_offset, byte_size):
    with open(baserom_path, "rb") as f:
        f.seek(rom_offset)
        data = f.read(byte_size)
    if len(data) != byte_size:
        sys.exit(f"Error: only read {len(data)} of {byte_size} bytes "
                 f"from {baserom_path} at 0x{rom_offset:X}")
    return data


def write_inc_c(path, data, width, height):
    """Emit hex rows for `#include` inside a u16[] array initializer."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    vals = struct.unpack(f">{width * height}H", data)
    with open(path, "w") as f:
        for row in range(height):
            row_vals = vals[row * width:(row + 1) * width]
            f.write("\t" + ", ".join(f"0x{v:04X}" for v in row_vals) + ",\n")


def rgba5551_to_rgba8888(data):
    """Decode RGBA5551 big-endian pixels into an (R,G,B,A) byte sequence."""
    out = bytearray()
    for (px,) in struct.iter_unpack(">H", data):
        r5 = (px >> 11) & 0x1F
        g5 = (px >> 6) & 0x1F
        b5 = (px >> 1) & 0x1F
        a1 = px & 1
        # 5 -> 8 bits by replicating the high bits, so 31 maps to 255.
        out += bytes(((r5 << 3) | (r5 >> 2),
                      (g5 << 3) | (g5 >> 2),
                      (b5 << 3) | (b5 >> 2),
                      0xFF if a1 else 0x00))
    return bytes(out)


def write_png(path, data, width, height):
    """Write an RGBA PNG with no third-party dependencies."""
    import binascii
    import zlib

    rgba = rgba5551_to_rgba8888(data)
    stride = width * 4
    raw = b"".join(b"\x00" + rgba[y * stride:(y + 1) * stride]
                   for y in range(height))

    def chunk(tag, payload):
        body = tag + payload
        return (struct.pack(">I", len(payload)) + body
                + struct.pack(">I", binascii.crc32(body) & 0xFFFFFFFF))

    os.makedirs(os.path.dirname(path) or ".", exist_ok=True)
    with open(path, "wb") as f:
        f.write(b"\x89PNG\r\n\x1a\n")
        f.write(chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0)))
        f.write(chunk(b"IDAT", zlib.compress(raw, 9)))
        f.write(chunk(b"IEND", b""))


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--texture", required=True, choices=sorted(TEXTURES),
                    help="which texture to extract")
    ap.add_argument("--version", default="us", help="us or jp")
    ap.add_argument("--baserom", default=None, help="Path to baserom.<version>.z64")
    ap.add_argument("--bin", required=True, help="Output .bin path")
    ap.add_argument("--inc", required=True, help="Output .inc.c path")
    ap.add_argument("--png", required=True, help="Output .png path")
    args = ap.parse_args()

    tex = TEXTURES[args.texture]
    if args.version not in tex["offsets"]:
        sys.exit(f"Error: no ROM offset for {args.texture} on version "
                 f"'{args.version}' (have: {', '.join(sorted(tex['offsets']))})")

    width, height = tex["width"], tex["height"]
    byte_size = width * height * 2          # RGBA5551 = 2 bytes/pixel
    baserom = args.baserom or f"baserom.{args.version}.z64"

    data = read_texture(baserom, tex["offsets"][args.version], byte_size)

    os.makedirs(os.path.dirname(args.bin) or ".", exist_ok=True)
    with open(args.bin, "wb") as f:
        f.write(data)
    write_inc_c(args.inc, data, width, height)
    write_png(args.png, data, width, height)


if __name__ == "__main__":
    main()
