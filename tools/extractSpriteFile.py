#!/usr/bin/env python3
"""Auto-extract a relocData sprite file into a complete master .c + .reloc.

Walks the reloc chain starting from the CSV's `relocInternOffset` to discover
every Sprite struct, its Bitmap array, and each bitmap's pixel data — without
any hardcoded offsets. Emits a complete inline master .c file (PAD + texture
includes + Bitmap arrays + Sprite initializers), its companion `.reloc` file
with symbolic labels, and the raw-byte `.inc.c` blobs the master pulls from.

Names come from `tools/relocFileDescriptions.<version>.txt` when a description
entry is tagged `Sprite` at the discovered sprite's offset; otherwise they
fall back to `sprite_0x<hex>` (matching the existing generic-name convention).

Usage:
    extractSpriteFile.py <fid> <output_master_c>
        [--version us|jp] [--reloc-out PATH] [--inc-dir PATH]
"""

import argparse
import csv
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "relocData.csv")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")

SPRITE_SIZE = 68
BITMAP_SIZE = 16

FMT_NAMES = {0: "rgba", 1: "yuv", 2: "ci", 3: "ia", 4: "i"}
SIZ_NAMES = {0: "4", 1: "8", 2: "16", 3: "32", 4: "4c"}
BPP = {0: 4, 1: 8, 2: 16, 3: 32, 4: 2}


def load_binary(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            with open(p, "rb") as f:
                return f.read()
    raise FileNotFoundError(f"no binary for fid {fid} under {ASSETS_DIR}")


def load_csv_row(fid):
    with open(CSV_PATH) as f:
        reader = csv.reader(f)
        next(reader)
        for i, row in enumerate(reader):
            if i == fid and len(row) >= 6:
                return {
                    "intern_off": int(row[2].strip(), 16),
                    "extern_off": int(row[4].strip(), 16),
                }
    raise KeyError(f"no csv row for fid {fid}")


def walk_chain(data, start_word):
    """Walk a relocation chain starting at `start_word` (word offset). Each
    pointer word decodes to `(next_ptr_word << 16) | target_word`. Returns a
    dict mapping byte offset of the pointer -> byte offset of its target."""
    entries = {}
    if start_word == 0xFFFF:
        return entries
    offset = start_word
    seen = set()
    while offset != 0xFFFF:
        if offset in seen:
            break
        seen.add(offset)
        byte_off = offset * 4
        if byte_off + 4 > len(data):
            break
        val = struct.unpack(">I", data[byte_off:byte_off + 4])[0]
        next_r = (val >> 16) & 0xFFFF
        target = (val & 0xFFFF) * 4
        entries[byte_off] = target
        offset = next_r
    return entries


def parse_sprite_struct(data, off):
    """Try to parse a 68-byte Sprite struct at `off`. Returns a dict of the
    field values or None if the candidate looks like garbage (used as a cheap
    filter during auto-discovery — real sprites have predictable x/y/scale/
    dimensions/format fields).

    The filter is loose enough to accept every sprite we've seen in the base
    rom but tight enough to reject random binary pointed-at by reloc entries
    that happen to be pointer fields in non-sprite structs.
    """
    if off < 0 or off + SPRITE_SIZE > len(data):
        return None
    raw = data[off:off + SPRITE_SIZE]
    x, y, w, h = struct.unpack_from(">4h", raw, 0)
    sx, sy = struct.unpack_from(">2f", raw, 8)
    expx, expy = struct.unpack_from(">2h", raw, 16)
    attr, zdepth = struct.unpack_from(">Hh", raw, 20)
    r, g, b, a = raw[24], raw[25], raw[26], raw[27]
    start_tlut, n_tlut = struct.unpack_from(">2h", raw, 28)
    # LUT ptr @ 0x20 (4 bytes of chain)
    istart, istep = struct.unpack_from(">2h", raw, 36)
    nbitmaps, ndisplist = struct.unpack_from(">2h", raw, 40)
    bmheight, bmHreal = struct.unpack_from(">2h", raw, 44)
    bmfmt, bmsiz = raw[48], raw[49]
    # 2 bytes pad @ 0x32
    # bitmap ptr @ 0x34, rsp_dl @ 0x38, rsp_dl_next @ 0x3C (all chain words)
    frac_s, frac_t = struct.unpack_from(">2h", raw, 64)

    # --- Sanity filter ----------------------------------------------------
    # Every real sprite we've seen has x=y=0, scale=1.0, dims in 1..2048,
    # nbitmaps in 1..256, bmfmt in 0..4, bmsiz in 0..3. Reject anything
    # else — this will throw out the vast majority of non-sprite reloc
    # sources without losing a single real sprite.
    if x != 0 or y != 0:
        return None
    if w <= 0 or w > 2048 or h <= 0 or h > 2048:
        return None
    if sx != 1.0 or sy != 1.0:
        return None
    if nbitmaps <= 0 or nbitmaps > 256:
        return None
    if bmfmt > 4 or bmsiz > 4:
        return None
    if bmheight <= 0 or bmheight > 2048:
        return None
    if bmHreal <= 0 or bmHreal > 2048:
        return None

    return {
        "x": x, "y": y, "width": w, "height": h,
        "scalex": sx, "scaley": sy,
        "expx": expx, "expy": expy,
        "attr": attr, "zdepth": zdepth,
        "red": r, "green": g, "blue": b, "alpha": a,
        "start_tlut": start_tlut, "n_tlut": n_tlut,
        "istart": istart, "istep": istep,
        "nbitmaps": nbitmaps, "ndisplist": ndisplist,
        "bmheight": bmheight, "bmHreal": bmHreal,
        "bmfmt": bmfmt, "bmsiz": bmsiz,
        "frac_s": frac_s, "frac_t": frac_t,
    }


def parse_bitmap_struct(data, off):
    if off + BITMAP_SIZE > len(data):
        return None
    width, width_img, s, t = struct.unpack_from(">4h", data, off)
    actual_h, lut_off = struct.unpack_from(">2h", data, off + 12)
    return {
        "width": width, "width_img": width_img,
        "s": s, "t": t,
        "actual_height": actual_h, "lut_offset": lut_off,
    }


def parse_descriptions(version):
    """Return `{fid: [(type, name, offset), ...]}` for every block description
    in `tools/relocFileDescriptions.<version>.txt`. Offsets are byte offsets."""
    path = os.path.join(SCRIPT_DIR, f"relocFileDescriptions.{version}.txt")
    result = {}
    if not os.path.exists(path):
        return result
    current = None
    with open(path) as f:
        for line in f:
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            m = re.match(r"\[(\d+)\]", s)
            if m:
                current = int(m.group(1))
                result.setdefault(current, [])
                continue
            if current is None or s.startswith("-"):
                continue
            parts = s.split(" ")
            if len(parts) != 3:
                continue
            btype, bname, bo = parts
            try:
                off = int(bo, 16) if bo.startswith("0x") else int(bo)
            except ValueError:
                continue
            result[current].append((btype, bname, off))
    return result


def parse_file_id_to_name(version):
    """Parse `tools/relocFileDescriptions.<version>.txt` and return a dict
    mapping `file_id -> FileName`. Names prefixed with `_NNN_` are JP
    placeholder aliases and get filtered to an empty string so the caller
    falls back to generic naming.
    """
    path = os.path.join(SCRIPT_DIR, f"relocFileDescriptions.{version}.txt")
    result = {}
    if not os.path.exists(path):
        return result
    with open(path) as f:
        for line in f:
            s = line.strip()
            if s and s.startswith("-"):
                m = re.match(r"-(\d+):\s*(.*)", s)
                if m:
                    fid = int(m.group(1))
                    name = m.group(2).strip()
                    if re.match(r"^_\d+_$", name):
                        name = ""
                    result[fid] = name
    return result


# ── Sprite discovery ────────────────────────────────────────────────────

def discover_sprites(data, relocs):
    """Auto-discover sprite blocks from a relocation map.

    Strategy: the reloc chain contains an entry `(sprite+0x34) -> bitmap_array`
    for every sprite (the `bitmap` field points at the sprite's Bitmap array).
    For each (ptr, target) pair in relocs, we check whether `ptr - 0x34` is a
    valid Sprite struct start. Sanity filters (see parse_sprite_struct) reject
    non-sprite candidates — we accept everything that passes.

    Returns a list of dicts sorted by sprite offset:
        [{ 'sprite_off', 'bitmap_off', 'sprite': <parse_sprite_struct>,
           'palette_off': int|None,
           'bitmaps': [<parse_bitmap_struct>...],
           'pixel_offs': [int...],  # bitmap[i].buf reloc target
        }, ...]
    """
    results = []
    for ptr, target in relocs.items():
        cand_off = ptr - 0x34
        sp = parse_sprite_struct(data, cand_off)
        if sp is None:
            continue
        bitmap_off = target
        # Bitmap array must fit in file.
        if bitmap_off + sp["nbitmaps"] * BITMAP_SIZE > len(data):
            continue
        # Parse each bitmap + find its pixel data via the buf reloc.
        bitmaps = []
        pixel_offs = []
        for i in range(sp["nbitmaps"]):
            bm_off = bitmap_off + i * BITMAP_SIZE
            bm = parse_bitmap_struct(data, bm_off)
            if bm is None:
                break
            bitmaps.append(bm)
            pixel_offs.append(relocs.get(bm_off + 8))
        if len(bitmaps) != sp["nbitmaps"]:
            continue
        # Palette offset (if any): LUT ptr field at sprite+0x20.
        palette_off = relocs.get(cand_off + 0x20)
        results.append({
            "sprite_off": cand_off,
            "bitmap_off": bitmap_off,
            "sprite": sp,
            "palette_off": palette_off,
            "bitmaps": bitmaps,
            "pixel_offs": pixel_offs,
        })
    results.sort(key=lambda r: r["sprite_off"])
    return results


# ── Block layout ────────────────────────────────────────────────────────

def build_layout(data, sprites, file_size):
    """Given the discovered sprites, lay out the physical blocks in the file.

    Returns a list of block dicts in offset order, where each block is one of:

        {'kind': 'pad',    'offset': int, 'size': int}
        {'kind': 'tex',    'offset': int, 'size': int, 'sprite_idx': int,
                           'palette_offset': int|None}
        {'kind': 'bitmaps','offset': int, 'size': int, 'sprite_idx': int}
        {'kind': 'sprite', 'offset': int, 'size': int, 'sprite_idx': int}

    Textures are emitted as a single block spanning from the earliest pixel
    offset of any tile up to the bitmap array start. If the sprite has a
    palette and the palette sits inside that range, it stays inline (a
    symbolic `LUT=tex_name+0xNNNN` reloc entry points at it). Palettes that
    live outside the tex range get their own separate block.
    """
    blocks = []
    for si, sp in enumerate(sprites):
        px = [o for o in sp["pixel_offs"] if o is not None]
        if not px:
            continue
        tex_start = min(px)
        tex_end = sp["bitmap_off"]
        tex_size = tex_end - tex_start
        palette_off = sp["palette_off"]
        palette_inside = (palette_off is not None
                          and tex_start <= palette_off < tex_end)
        blocks.append({
            "kind": "tex",
            "offset": tex_start,
            "size": tex_size,
            "sprite_idx": si,
            "palette_offset": palette_off if palette_inside else None,
            "palette_inside": palette_inside,
        })
        if palette_off is not None and not palette_inside:
            blocks.append({
                "kind": "palette",
                "offset": palette_off,
                "size": 32,
                "sprite_idx": si,
            })
        blocks.append({
            "kind": "bitmaps",
            "offset": sp["bitmap_off"],
            "size": sp["sprite"]["nbitmaps"] * BITMAP_SIZE,
            "sprite_idx": si,
        })
        blocks.append({
            "kind": "sprite",
            "offset": sp["sprite_off"],
            "size": SPRITE_SIZE,
            "sprite_idx": si,
        })

    blocks.sort(key=lambda b: b["offset"])

    # Insert PAD blocks for gaps / leading pad / trailing pad.
    out = []
    cursor = 0
    for b in blocks:
        if b["offset"] > cursor:
            out.append({"kind": "pad", "offset": cursor,
                         "size": b["offset"] - cursor})
        elif b["offset"] < cursor:
            raise RuntimeError(
                f"overlapping block at 0x{b['offset']:X} (cursor 0x{cursor:X})")
        out.append(b)
        cursor = b["offset"] + b["size"]
    if cursor < file_size:
        out.append({"kind": "pad", "offset": cursor,
                     "size": file_size - cursor})
    return out


# ── Naming ──────────────────────────────────────────────────────────────

def parse_spritelist(path):
    """Read ordered sprite names from a .spritelist file. Blank lines and
    `#` comment lines are skipped. Returns [] if the file has no real
    entries, which signals "fall back to description / generic naming"."""
    if not path or not os.path.exists(path):
        return []
    names = []
    with open(path) as f:
        for line in f:
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            names.append(s)
    return names


def resolve_sprite_names(sprites, description_entries, spritelist_names=None):
    """Assign a base name to each discovered sprite.

    Name-source priority:
      1. `spritelist_names`, a list of sprite names in physical order — the
         committed src/relocData/<fid>_<Name>.spritelist drives this. Names
         get zipped with the auto-discovered sprites (sorted by offset), so
         the Nth line in the spritelist names the Nth sprite. A length
         mismatch raises — the spritelist needs to stay in sync with what
         the extractor actually finds in the binary.
      2. Description file `Sprite` entries matching by offset. Used only
         when no spritelist is provided (e.g. during standalone testing
         where the tool is invoked without build wiring).
      3. `sprite_0x<hex>` fallback keyed on the file offset, so names stay
         stable across rebuilds.
    """
    if spritelist_names:
        if len(spritelist_names) != len(sprites):
            raise RuntimeError(
                f"spritelist has {len(spritelist_names)} names but "
                f"{len(sprites)} sprites were discovered in the binary "
                f"(spritelist names: {spritelist_names})")
        return {idx: spritelist_names[idx] for idx in range(len(sprites))}

    desc_by_off = {e[2]: e[1] for e in description_entries if e[0] == "Sprite"}
    names = {}
    for idx, sp in enumerate(sprites):
        off = sp["sprite_off"]
        name = desc_by_off.get(off)
        if name is None or name == "-":
            name = f"sprite_0x{off:04X}"
        names[idx] = name
    return names


# ── Emit helpers ────────────────────────────────────────────────────────

def fmt_siz_suffix(bmfmt, bmsiz):
    return f"{FMT_NAMES.get(bmfmt, '?')}{SIZ_NAMES.get(bmsiz, '?')}"


def write_tex_inc(data, offset, size, path):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, "w") as f:
        for i in range(0, size, 16):
            chunk = data[offset + i:offset + min(i + 16, size)]
            f.write("\t" + ", ".join(f"0x{b:02X}" for b in chunk) + ",\n")


def float_literal(v):
    """Render a 32-bit float as a C literal that preserves the exact bit
    pattern under IDO's parser. 1.0 / -1.0 / 0.0 are common enough to emit as
    decimal; everything else uses hex-float notation."""
    if v == 0.0:
        return "0.0f"
    if v == 1.0:
        return "1.0f"
    if v == -1.0:
        return "-1.0f"
    return f"{v.hex().replace('0x', '0x')}f"


def emit_master_c(bin_data, layout, sprites, names, prefix, subdir_name):
    """Produce the text of the inline master .c file for this sprite file."""
    lines = []
    lines.append(f"/* Auto-generated from assets/relocData binary by "
                  f"tools/extractSpriteFile.py — do not edit. */")
    lines.append("")
    lines.append('#include "relocdata_types.h"')
    lines.append("")

    for block in layout:
        if block["kind"] == "pad":
            off = block["offset"]
            size = block["size"]
            gap_bytes = bin_data[off:off + size]
            if all(b == 0 for b in gap_bytes):
                lines.append(f"PAD({size});")
                lines.append("")
            else:
                # Non-zero gap bytes (commonly a leading DL terminator for
                # the first sprite block, or trailing reloc-chain data left
                # over from earlier symbols). Emit as a raw u8 array so the
                # bytes land exactly where they need to in .data.
                label = f"d{prefix}_data_0x{off:04X}"
                lines.append(f"/* Raw data @ 0x{off:04X} ({size} bytes) */")
                lines.append(f"u8 {label}[{size}] = {{")
                for i in range(0, size, 16):
                    chunk = gap_bytes[i:min(i + 16, size)]
                    lines.append("\t" + ", ".join(f"0x{b:02X}" for b in chunk)
                                 + ",")
                lines.append("};")
                lines.append("")
            continue
        si = block["sprite_idx"]
        sp = sprites[si]
        name = names[si]
        d_name = f"d{prefix}_{name}"

        if block["kind"] == "tex":
            bmfmt = sp["sprite"]["bmfmt"]
            bmsiz = sp["sprite"]["bmsiz"]
            fmtsuffix = fmt_siz_suffix(bmfmt, bmsiz)
            width = sp["sprite"]["width"]
            bmHreal = sp["sprite"]["bmHreal"]
            inc = f"{subdir_name}/{name}.{fmtsuffix}.inc.c"
            lines.append(f"/* Texture: {name} ({width}x{bmHreal} {fmtsuffix}, "
                          f"{sp['sprite']['nbitmaps']} tiles) */")
            lines.append(f"u8 {d_name}_tex[] = {{")
            lines.append(f"\t#include <{inc}>")
            lines.append("};")
            lines.append("")
            continue

        if block["kind"] == "palette":
            inc = f"{subdir_name}/{name}.palette.inc.c"
            lines.append(f"/* Palette: {name} */")
            lines.append(f"u16 {d_name}_palette[16] = {{")
            lines.append(f"\t#include <{inc}>")
            lines.append("};")
            lines.append("")
            continue

        if block["kind"] == "bitmaps":
            bm_off = block["offset"]
            tex_start = min(o for o in sp["pixel_offs"] if o is not None)
            lines.append(f"Bitmap {d_name}_bitmaps[] = {{")
            for i, bm in enumerate(sp["bitmaps"]):
                po = sp["pixel_offs"][i]
                if po is None:
                    buf_expr = "0"
                else:
                    delta = po - tex_start
                    if delta == 0:
                        buf_expr = f"{d_name}_tex"
                    else:
                        buf_expr = f"{d_name}_tex + 0x{delta:X}"
                lines.append(
                    f"\t{{ {bm['width']}, {bm['width_img']}, "
                    f"{bm['s']}, {bm['t']}, "
                    f"{buf_expr}, {bm['actual_height']}, {bm['lut_offset']} }},")
            lines.append("};")
            lines.append("")
            continue

        if block["kind"] == "sprite":
            s = sp["sprite"]
            lines.append(f"/* Sprite: {name} ({s['width']}x{s['height']} "
                          f"{fmt_siz_suffix(s['bmfmt'], s['bmsiz'])}) */")
            lines.append(f"Sprite {d_name} = {{")
            lines.append(f"\t{s['x']}, {s['y']},")
            lines.append(f"\t{s['width']}, {s['height']},")
            lines.append(f"\t{float_literal(s['scalex'])}, "
                          f"{float_literal(s['scaley'])},")
            lines.append(f"\t{s['expx']}, {s['expy']},")
            lines.append(f"\t0x{s['attr']:04X},")
            lines.append(f"\t{s['zdepth']},")
            lines.append(f"\t{s['red']}, {s['green']}, {s['blue']}, {s['alpha']},")
            lines.append(f"\t{s['start_tlut']}, {s['n_tlut']},")
            lines.append(f"\t(int*)0,")
            lines.append(f"\t{s['istart']}, {s['istep']},")
            lines.append(f"\t{s['nbitmaps']}, {s['ndisplist']},")
            lines.append(f"\t{s['bmheight']}, {s['bmHreal']},")
            lines.append(f"\t{s['bmfmt']}, {s['bmsiz']},")
            lines.append(f"\t(Bitmap*)0,")
            lines.append(f"\t(Gfx*)0,")
            lines.append(f"\t(Gfx*)0,")
            lines.append(f"\t{s['frac_s']}, {s['frac_t']},")
            lines.append("};")
            lines.append("")
            continue

    return "\n".join(lines) + "\n"


def emit_reloc_file(sprites, names, prefix, layout):
    """Produce the text of the .reloc metadata file with symbolic labels."""
    lines = []
    lines.append(f"# Auto-generated from assets/relocData binary by "
                  f"tools/extractSpriteFile.py — do not edit.")
    lines.append("# Format: <type> <ptr_label> <target_label>")
    lines.append("")

    # Emit per-sprite reloc entries. Order must match the byte-offset sort
    # the build chain will apply, which matches the block layout.
    # For each sprite, the physical order of chain entries is:
    #   bitmaps[*].buf  (ascending i, all before the sprite)
    #   sprite.LUT      (if present)
    #   sprite.bitmap
    # That order reproduces the byte-offset sort fixRelocChain will apply.
    emitted = []

    # Figure out each sprite's tex block start (for LUT label offsets).
    tex_start_by_sprite = {}
    for b in layout:
        if b["kind"] == "tex":
            tex_start_by_sprite[b["sprite_idx"]] = b["offset"]

    for si, sp in enumerate(sprites):
        name = names[si]
        d_name = f"d{prefix}_{name}"
        # Bitmap buf entries.
        tex_start = tex_start_by_sprite.get(si)
        for i in range(sp["sprite"]["nbitmaps"]):
            po = sp["pixel_offs"][i]
            if po is None:
                continue
            ptr_label = f"{d_name}_bitmaps+0x{i * BITMAP_SIZE + 8:X}"
            if po == tex_start:
                target = f"{d_name}_tex"
            else:
                delta = po - tex_start
                target = f"{d_name}_tex+0x{delta:X}"
            emitted.append((sp["bitmap_off"] + i * BITMAP_SIZE + 8,
                            f"intern {ptr_label} {target}"))
        # Sprite LUT reloc (if any).
        if sp["palette_off"] is not None:
            delta = sp["palette_off"] - tex_start
            if delta == 0:
                target = f"{d_name}_tex"
            else:
                target = f"{d_name}_tex+0x{delta:X}"
            emitted.append((sp["sprite_off"] + 0x20,
                            f"intern {d_name}+0x20 {target}"))
        # Sprite.bitmap reloc.
        emitted.append((sp["sprite_off"] + 0x34,
                        f"intern {d_name}+0x34 {d_name}_bitmaps"))
    emitted.sort(key=lambda e: e[0])
    for _, line in emitted:
        lines.append(line)
    lines.append("")
    return "\n".join(lines)


# ── Main ────────────────────────────────────────────────────────────────

def _find_spritelist_for(fid, version, file_name):
    """Locate the src/relocData spritelist that drives this fid.

    Prefers `*_<Name>.<version>.spritelist` (JP override) over the shared
    `*_<Name>.spritelist`. Matching by file name keeps US and JP in sync
    when the two versions store the same sprite file at different fid
    numbers — the filename always reflects the US-era fid but the NAME
    portion is what the build actually resolves against.
    """
    import glob
    src_dir = os.path.join(PROJECT_DIR, "src", "relocData")
    if version:
        vp = glob.glob(os.path.join(src_dir, f"*_{file_name}.{version}.spritelist"))
        if vp:
            return vp[0]
    sp = glob.glob(os.path.join(src_dir, f"*_{file_name}.spritelist"))
    if sp:
        return sp[0]
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int)
    ap.add_argument("output", help="Output master .c path")
    ap.add_argument("--version", default="us", choices=("us", "jp"))
    ap.add_argument("--reloc-out", default=None,
                    help="Output .reloc path (default: alongside master .c)")
    ap.add_argument("--inc-dir", default=None,
                    help="Directory for texture/palette .inc.c files "
                         "(default: <dirname(output)>/<subdir>)")
    ap.add_argument("--spritelist", default=None,
                    help="Explicit spritelist path to drive sprite names / "
                         "order. If omitted, the tool looks for "
                         "src/relocData/*_<Name>.<version>.spritelist "
                         "(with a fallback to *_<Name>.spritelist).")
    args = ap.parse_args()

    data = load_binary(args.fid)
    csv_row = load_csv_row(args.fid)
    relocs = walk_chain(data, csv_row["intern_off"])

    sprites = discover_sprites(data, relocs)
    if not sprites:
        print(f"no sprites discovered in fid {args.fid}", file=sys.stderr)
        sys.exit(1)

    description_entries = parse_descriptions(args.version).get(args.fid, [])
    id_to_name = parse_file_id_to_name(args.version)
    file_name = id_to_name.get(args.fid, "") or f"file_{args.fid}"
    prefix = file_name
    subdir_name = file_name

    spritelist_path = args.spritelist or _find_spritelist_for(
        args.fid, args.version, file_name)
    spritelist_names = parse_spritelist(spritelist_path)

    names = resolve_sprite_names(sprites, description_entries,
                                  spritelist_names=spritelist_names)
    layout = build_layout(data, sprites, len(data))

    # Write texture / palette .inc.c blobs.
    out_dir = os.path.dirname(os.path.abspath(args.output))
    inc_dir = args.inc_dir or os.path.join(out_dir, subdir_name)
    os.makedirs(inc_dir, exist_ok=True)

    for block in layout:
        if block["kind"] == "tex":
            si = block["sprite_idx"]
            name = names[si]
            bmfmt = sprites[si]["sprite"]["bmfmt"]
            bmsiz = sprites[si]["sprite"]["bmsiz"]
            fmtsuffix = fmt_siz_suffix(bmfmt, bmsiz)
            write_tex_inc(data, block["offset"], block["size"],
                          os.path.join(inc_dir, f"{name}.{fmtsuffix}.inc.c"))
        elif block["kind"] == "palette":
            si = block["sprite_idx"]
            name = names[si]
            write_tex_inc(data, block["offset"], block["size"],
                          os.path.join(inc_dir, f"{name}.palette.inc.c"))

    master_text = emit_master_c(data, layout, sprites, names,
                                  prefix, subdir_name)
    os.makedirs(out_dir, exist_ok=True)
    with open(args.output, "w") as f:
        f.write(master_text)

    reloc_path = args.reloc_out or os.path.splitext(args.output)[0] + ".reloc"
    reloc_text = emit_reloc_file(sprites, names, prefix, layout)
    os.makedirs(os.path.dirname(os.path.abspath(reloc_path)), exist_ok=True)
    with open(reloc_path, "w") as f:
        f.write(reloc_text)

    print(f"wrote {args.output}")
    print(f"wrote {reloc_path}")
    print(f"discovered {len(sprites)} sprites, "
          f"{sum(1 for b in layout if b['kind']=='tex')} tex blocks, "
          f"{sum(1 for b in layout if b['kind']=='palette')} palette blocks")


if __name__ == "__main__":
    main()
