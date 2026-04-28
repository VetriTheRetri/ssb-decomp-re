#!/usr/bin/env python3
"""Decode a .txb particle texture bank into a C source file.

Reads a baserom range, walks the LBTextureDesc -> LBTexture records (the
24-byte header + variable-length data[] + image bytes + palette bytes)
and emits a src/particles/<name>_txb.c that compiles to byte-identical
bytes when placed at the bank's ROM offset.

Run from repo root, e.g.:
    python3 tools/decode_txb.py mntitle 0xB22D40 0xB277B0 --ucase MNTitle \\
        > src/particles/mntitle_txb.c

Layout knowns (see PARTICLE_BANK_DISCOVERIES.md):
  - LBTexture base: u32 count; s32 fmt, siz; s32 width, height; u32 flags
  - data[] length depends on fmt + flags + (sometimes) the encoder mood:
    * count == 0 (only one such texture: efcommon[6]): no data[], no images
    * non-CI, ndata in {count, count+1}: per-texture choice; trailing word
      (when present) is always 0
    * CI shared palette (flags & 1): ndata == count + 1
    * CI per-frame (flags == 0): ndata == count + count
  - Image immediately follows data[] (no inter-texture pad observed).
  - File ends with .rodata 16-byte alignment pad.
"""
import argparse
import struct
import sys


FMT_NAMES = {0: "G_IM_FMT_RGBA", 2: "G_IM_FMT_CI", 3: "G_IM_FMT_IA", 4: "G_IM_FMT_I"}
SIZ_NAMES = {0: "G_IM_SIZ_4b", 1: "G_IM_SIZ_8b", 2: "G_IM_SIZ_16b", 3: "G_IM_SIZ_32b"}


def img_size(siz: int, w: int, h: int) -> int:
    bpp = {0: 4, 1: 8, 2: 16, 3: 32}[siz]
    return w * h * bpp // 8


def pal_size(fmt: int, siz: int) -> int:
    if fmt != 2:
        return 0
    return {0: 16, 1: 256}[siz] * 2


def parse_texture(data: bytes, off: int) -> dict:
    c, fmt, siz, w, h, flags = struct.unpack_from(">IiiiII", data, off)
    t = {
        "count": c, "fmt": fmt, "siz": siz, "width": w, "height": h, "flags": flags,
        "ndata": 0, "data_entries": [], "images": b"", "palettes": b"",
    }
    if c == 0:
        # Special case: just the 24-byte header.
        return t
    first_data = struct.unpack_from(">I", data, off + 24)[0]
    if fmt == 2 and not (flags & 1):
        ndata = c * 2  # CI per-frame
    elif fmt == 2:
        ndata = c + 1  # CI shared
    else:
        # Non-CI: read where image starts and back-compute ndata.
        ndata = (first_data - (off + 24)) // 4
        if ndata not in (c, c + 1):
            raise ValueError(
                f"texture at 0x{off:x}: ndata={ndata} not in {{count,count+1}} "
                f"(count={c}, fmt={fmt}, first_data=0x{first_data:x})")
    t["ndata"] = ndata
    t["data_entries"] = list(struct.unpack_from(f">{ndata}I", data, off + 24))

    img_start = off + 24 + ndata * 4
    img_total = c * img_size(siz, w, h)
    t["images"] = data[img_start : img_start + img_total]
    if fmt == 2:
        npal = 1 if (flags & 1) else c
        pal_start = img_start + img_total
        pal_total = npal * pal_size(fmt, siz)
        t["palettes"] = data[pal_start : pal_start + pal_total]
        t["npal"] = npal
    else:
        t["npal"] = 0
    return t


def parse_bank(data: bytes) -> dict:
    n = struct.unpack_from(">i", data, 0)[0]
    offsets = list(struct.unpack_from(f">{n}I", data, 4))
    # Some banks pad between the offsets table and the first texture to
    # 8-align the first texture (visible only when textures_num is even).
    # The pad slot is usually 0 but is sometimes the file size or other
    # leftover data from the original encoder, so we capture the actual
    # bytes verbatim.
    natural_header = 4 + 4 * n
    pad = offsets[0] - natural_header if n > 0 else 0
    pad_bytes = data[natural_header : natural_header + pad] if pad else b""
    return {
        "n": n,
        "offsets": offsets,
        "post_offsets_pad": pad,
        "post_offsets_pad_bytes": pad_bytes,
        "textures": [parse_texture(data, o) for o in offsets],
    }


# ----------------------------------------------------------------------
# C emitter.
# ----------------------------------------------------------------------

def fmt_bytes_lines(b: bytes, indent: str = "\t\t\t", per_row: int = 16) -> list[str]:
    """Render a bytes blob as comma-separated 0xNN values, wrapped per_row."""
    out = []
    for i in range(0, len(b), per_row):
        row = b[i : i + per_row]
        out.append(indent + ", ".join(f"0x{x:02X}" for x in row) + ",")
    return out


def emit_texture_typedef(bank_name: str, idx: int, t: dict, parts: list[str]):
    name = f"{bank_name}Texture_{idx}"
    parts.append(f"typedef struct {name}\n{{\n")
    parts.append(f"\tLBTextureHeader hdr;\n")
    if t["count"] == 0:
        parts.append(f"}} {name};\n\n")
        return
    parts.append(f"\tu32             data[{t['ndata']}];\n")
    isz = img_size(t["siz"], t["width"], t["height"])
    parts.append(f"\tu8              image_data[{t['count']}][{isz}];\n")
    if t["fmt"] == 2:
        psz = pal_size(t["fmt"], t["siz"])
        parts.append(f"\tu8              palette_data[{t['npal']}][{psz}];\n")
    parts.append(f"}} {name};\n\n")


def emit_texture_initializer(bank_name: str, idx: int, t: dict, parts: list[str]):
    """Emit one Texture init block, indented as a member of the bank struct."""
    parts.append(f"\t{{  /* texture_{idx} */\n")
    # Header
    parts.append(f"\t\t{{  /* hdr */\n")
    parts.append(f"\t\t\t{t['count']},  /* count */\n")
    parts.append(f"\t\t\t{FMT_NAMES.get(t['fmt'], t['fmt'])},  /* fmt */\n")
    parts.append(f"\t\t\t{SIZ_NAMES.get(t['siz'], t['siz'])},  /* siz */\n")
    parts.append(f"\t\t\t{t['width']},  /* width */\n")
    parts.append(f"\t\t\t{t['height']},  /* height */\n")
    parts.append(f"\t\t\t{t['flags']},  /* flags */\n")
    parts.append(f"\t\t}},\n")

    if t["count"] == 0:
        parts.append(f"\t}},\n")
        return

    # data[] -- offsetof references for image and palette slots.
    parts.append(f"\t\t{{  /* data[] -- file-relative offsets */\n")
    for i in range(t["count"]):
        parts.append(f"\t\t\toffsetof({bank_name}Scb_unused, _) /* placeholder */\n")
    parts.append(f"\t\t}},\n")
    # We'll fix the offsets up post-emit; placeholder above gets replaced.

    # image_data initializer
    isz = img_size(t["siz"], t["width"], t["height"])
    parts.append(f"\t\t{{  /* image_data[{t['count']}][{isz}] */\n")
    for fi in range(t["count"]):
        parts.append(f"\t\t\t{{ /* frame {fi} */\n")
        chunk = t["images"][fi * isz : (fi + 1) * isz]
        parts.extend(line + "\n" for line in fmt_bytes_lines(chunk, indent="\t\t\t\t"))
        parts.append(f"\t\t\t}},\n")
    parts.append(f"\t\t}},\n")

    # palette_data (CI only)
    if t["fmt"] == 2:
        psz = pal_size(t["fmt"], t["siz"])
        parts.append(f"\t\t{{  /* palette_data[{t['npal']}][{psz}] */\n")
        for pi in range(t["npal"]):
            parts.append(f"\t\t\t{{ /* palette {pi} */\n")
            chunk = t["palettes"][pi * psz : (pi + 1) * psz]
            parts.extend(line + "\n" for line in fmt_bytes_lines(chunk, indent="\t\t\t\t"))
            parts.append(f"\t\t\t}},\n")
        parts.append(f"\t\t}},\n")

    parts.append(f"\t}},\n")


def emit_data_offsets(bank_name: str, idx: int, t: dict) -> list[str]:
    """Build the data[] offsetof initializer lines for texture idx."""
    lines = []
    if t["count"] == 0:
        return lines
    bank_t = f"{bank_name}Txb"
    tex_path = f"texture_{idx}"
    # Image offsets: data[0..count-1]
    for i in range(t["count"]):
        if i == 0:
            lines.append(f"offsetof({bank_t}, {tex_path}.image_data)")
        else:
            lines.append(f"offsetof({bank_t}, {tex_path}.image_data[{i}])")
    # Palette offsets / trailing pad
    if t["fmt"] == 2:
        if t["flags"] & 1:
            lines.append(f"offsetof({bank_t}, {tex_path}.palette_data)")
        else:
            for j in range(t["count"]):
                if j == 0:
                    lines.append(f"offsetof({bank_t}, {tex_path}.palette_data)")
                else:
                    lines.append(f"offsetof({bank_t}, {tex_path}.palette_data[{j}])")
    elif t["ndata"] == t["count"] + 1:
        lines.append("0  /* trailing pad word, always 0 */")
    return lines


def emit(bank_name: str, ucase: str, bank: dict,
         rom_lo: int, rom_hi: int) -> str:
    n = bank["n"]
    textures = bank["textures"]
    pad = bank["post_offsets_pad"]
    parts = []
    parts.append(f"""/*
 * Particle texture bank for {ucase}.
 * ROM: 0x{rom_lo:X}..0x{rom_hi:X} -- see smashbrothers.us.yaml.
 *
 * See [PARTICLE_BANK_DISCOVERIES.md] for the structure of these files.
 * Generated by tools/decode_txb.py; edit by hand thereafter.
 */

#include <ssb_types.h>
#include <stddef.h>
#include <PR/gbi.h>
#include <lb/lbtypes.h>

""")
    # Per-texture wrapper struct typedefs.
    for i, t in enumerate(textures):
        emit_texture_typedef(bank_name, i, t, parts)

    # Bank wrapper struct.
    parts.append(f"typedef struct {bank_name}Txb\n{{\n")
    parts.append(f"\ts32              textures_num;\n")
    parts.append(f"\tu32              texture_offsets[{n}];\n")
    if pad > 0:
        # Some banks (those with even N) need 4 bytes of pad here so the
        # first texture lands at an 8-aligned file offset.
        parts.append(f"\tu8               _pad_after_offsets[{pad}];\n")
    for i in range(n):
        parts.append(f"\t{bank_name}Texture_{i} texture_{i};\n")
    parts.append(f"}} {bank_name}Txb;\n\n")

    # Initializer.
    parts.append(f"const {bank_name}Txb d{ucase}Txb = {{\n")
    parts.append(f"\t{n},\n")
    parts.append(f"\t{{\n")
    for i in range(n):
        parts.append(f"\t\toffsetof({bank_name}Txb, texture_{i}),\n")
    parts.append(f"\t}},\n")
    if pad > 0:
        pad_bytes = bank["post_offsets_pad_bytes"]
        if all(b == 0 for b in pad_bytes):
            parts.append(f"\t{{ {', '.join(['0'] * pad)} }},  /* _pad_after_offsets */\n")
        else:
            # Preserve the exact original bytes (some banks stash the file
            # size or other leftover data here).
            parts.append("\t{ " + ", ".join(f"0x{b:02X}" for b in pad_bytes)
                         + f" }},  /* _pad_after_offsets (non-zero in original) */\n")

    for i, t in enumerate(textures):
        parts.append(f"\t{{  /* texture_{i} */\n")
        parts.append(f"\t\t{{  /* hdr */\n")
        parts.append(f"\t\t\t{t['count']},  /* count */\n")
        parts.append(f"\t\t\t{FMT_NAMES.get(t['fmt'], t['fmt'])},  /* fmt */\n")
        parts.append(f"\t\t\t{SIZ_NAMES.get(t['siz'], t['siz'])},  /* siz */\n")
        parts.append(f"\t\t\t{t['width']},  /* width */\n")
        parts.append(f"\t\t\t{t['height']},  /* height */\n")
        parts.append(f"\t\t\t{t['flags']},  /* flags */\n")
        parts.append(f"\t\t}},\n")
        if t["count"] == 0:
            parts.append(f"\t}},\n")
            continue
        # data[]
        offsets_lines = emit_data_offsets(bank_name, i, t)
        parts.append(f"\t\t{{  /* data[] -- file-relative, baked at compile time */\n")
        for line in offsets_lines:
            parts.append(f"\t\t\t{line},\n")
        parts.append(f"\t\t}},\n")
        # image_data: each frame's bytes are in a separate .inc.c (extracted
        # by tools/extractParticleTextures.py from the baserom).
        isz = img_size(t["siz"], t["width"], t["height"])
        fmt_str = {0: "rgba", 2: "ci", 3: "ia", 4: "i"}[t["fmt"]] + str(
            {0: 4, 1: 8, 2: 16, 3: 32}[t["siz"]])
        parts.append(f"\t\t{{  /* image_data[{t['count']}][{isz}] */\n")
        for fi in range(t["count"]):
            parts.append(f"\t\t\t{{\n")
            parts.append(f"\t\t\t\t#include <particles/{bank_name}/"
                         f"tex_{i}_img_{fi}.{fmt_str}.inc.c>\n")
            parts.append(f"\t\t\t}},\n")
        parts.append(f"\t\t}},\n")
        # palette_data (CI only)
        if t["fmt"] == 2:
            psz = pal_size(t["fmt"], t["siz"])
            parts.append(f"\t\t{{  /* palette_data[{t['npal']}][{psz}] */\n")
            for pi in range(t["npal"]):
                parts.append(f"\t\t\t{{\n")
                parts.append(f"\t\t\t\t#include <particles/{bank_name}/"
                             f"tex_{i}_pal_{pi}.inc.c>\n")
                parts.append(f"\t\t\t}},\n")
            parts.append(f"\t\t}},\n")
        parts.append(f"\t}},\n")
    parts.append(f"}};\n")
    return "".join(parts)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("name")
    ap.add_argument("rom_lo", type=lambda x: int(x, 0))
    ap.add_argument("rom_hi", type=lambda x: int(x, 0))
    ap.add_argument("--baserom", default="baserom.us.z64")
    ap.add_argument("--ucase", default=None)
    args = ap.parse_args()
    with open(args.baserom, "rb") as f:
        f.seek(args.rom_lo)
        data = f.read(args.rom_hi - args.rom_lo)
    bank = parse_bank(data)
    bank_name = args.name.replace(".", "_").replace("-", "_")
    ucase = args.ucase or (bank_name[:1].upper() + bank_name[1:])
    sys.stdout.write(emit(bank_name, ucase, bank, args.rom_lo, args.rom_hi))
    return 0


if __name__ == "__main__":
    sys.exit(main())
