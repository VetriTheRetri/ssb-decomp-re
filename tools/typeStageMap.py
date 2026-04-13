#!/usr/bin/env python3
"""
Convert GR*Map relocData files from raw u32 manifests to typed C source
using the MPGroundData struct from src/mp/mptypes.h.

Each Map file contains:
  - (optional) MPItemWeights at offset 0 (the "MapHead")
  - MPGroundData at offset llGR<Stage>MapMapHeader
  - trailing zero pad to align the file size to a 16-byte boundary

The struct is 168 bytes per IDO. Pointer fields (gr_desc[i].dobjdesc /
anim_joints / p_mobjsubs / p_matanim_joints, map_geometry, wallpaper,
map_nodes, item_weights) are reloc slots; we emit them as chain-encoded
hex casts and let fixRelocChain.py rewrite them at build time via the
generated .reloc file.

Usage:
    python3 tools/typeStageMap.py <fid> [<fid> ...]
    python3 tools/typeStageMap.py --all
"""

import argparse
import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
SYMBOLS_PATH = os.path.join(PROJECT_DIR, "symbols", "reloc_data_symbols.us.txt")

MPGROUNDDATA_SIZE = 0xA8  # 168 bytes per IDO sizeof
FILE_ALIGN = 0x10         # files are padded to 16-byte boundaries


def load_symbols():
    syms = {}
    with open(SYMBOLS_PATH) as f:
        for line in f:
            m = re.match(r"(ll\w+)\s*=\s*(0x[0-9a-fA-F]+)", line.strip())
            if m:
                syms[m.group(1)] = int(m.group(2), 16)
    return syms


def discover_maps():
    """Yield (fid, name) for every GR*Map source file in src/relocData/.
    Picks up both unconverted manifests and already-converted .c files."""
    seen = set()
    out = []
    for fn in sorted(os.listdir(RELOC_DIR)):
        m = re.match(r"(\d+)_(GR\w+Map)\.(manifest|c)$", fn)
        if m and not fn.endswith(".jp.c"):
            key = (int(m.group(1)), m.group(2))
            if key not in seen:
                seen.add(key)
                out.append(key)
    return out


# ── Field formatters ─────────────────────────────────────────────────────

def fmt_f32(val):
    raw = struct.pack(">f", val)
    raw_u32 = struct.unpack(">I", raw)[0]
    if val == 0.0:
        return "0.0f"
    if val == int(val) and abs(val) < 1e7:
        return f"{int(val)}.0f"
    for prec in range(1, 10):
        s = f"{val:.{prec}f}"
        if struct.pack(">f", float(s)) == raw:
            s = s.rstrip("0")
            if s.endswith("."):
                s += "0"
            return s + "f"
    return f"/* 0x{raw_u32:08X} */ {val!r}f"


def parse_mpgrounddata(data, base):
    """Decode MPGroundData starting at byte `base` of `data`. Returns a
    dict with field name -> formatted C expression and a list of pointer
    field names with their byte offsets within the struct (so we can emit
    the corresponding .reloc entries)."""
    fields = {}
    pointers = []  # (struct_byte_offset, field_path)

    def u32(off):
        return struct.unpack_from(">I", data, base + off)[0]

    def s32(off):
        return struct.unpack_from(">i", data, base + off)[0]

    def s16(off):
        return struct.unpack_from(">h", data, base + off)[0]

    def f32(off):
        return struct.unpack_from(">f", data, base + off)[0]

    def color(off):
        return tuple(data[base + off + i] for i in range(3))

    # gr_desc[4] at offset 0..0x40
    gr_desc_lines = []
    for i in range(4):
        off = i * 16
        slot = []
        for k, name in enumerate(("dobjdesc", "anim_joints",
                                  "p_mobjsubs", "p_matanim_joints")):
            v = u32(off + k * 4)
            ctype = ("DObjDesc *", "AObjEvent32 **",
                     "MObjSub ***", "AObjEvent32 ***")[k]
            if v == 0:
                slot.append("NULL")
            else:
                slot.append(f"({ctype})0x{v:08X}")
                pointers.append((off + k * 4, f"gr_desc[{i}].{name}"))
        gr_desc_lines.append("        { " + ", ".join(slot) + " },")
    fields["gr_desc"] = "\n".join(gr_desc_lines)

    # map_geometry at 0x40
    v = u32(0x40)
    if v == 0:
        fields["map_geometry"] = "NULL"
    else:
        fields["map_geometry"] = f"(MPGeometryData *)0x{v:08X}"
        pointers.append((0x40, "map_geometry"))

    # layer_mask u8 at 0x44
    fields["layer_mask"] = str(data[base + 0x44])
    # 3-byte pad at 0x45-0x47

    # wallpaper at 0x48
    v = u32(0x48)
    if v == 0:
        fields["wallpaper"] = "NULL"
    else:
        fields["wallpaper"] = f"(Sprite *)0x{v:08X}"
        pointers.append((0x48, "wallpaper"))

    # fog_color (3) at 0x4C, fog_alpha (1) at 0x4F
    r, g, b = color(0x4C)
    fields["fog_color"] = f"{{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X} }}"
    fields["fog_alpha"] = f"0x{data[base + 0x4F]:02X}"

    # emblem_colors[4] at 0x50..0x5C
    emblem_lines = []
    for i in range(4):
        r, g, b = color(0x50 + i * 3)
        emblem_lines.append(
            f"        {{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X} }},")
    fields["emblem_colors"] = "\n".join(emblem_lines)

    # unused s32 at 0x5C
    u = s32(0x5C)
    fields["unused"] = f"0x{u32(0x5C):08X}"

    # light_angle Vec3f at 0x60
    fields["light_angle"] = (
        f"{{ {fmt_f32(f32(0x60))}, {fmt_f32(f32(0x64))}, "
        f"{fmt_f32(f32(0x68))} }}")

    # camera bounds (4 s16) at 0x6C..0x74
    fields["camera_bound_top"]    = str(s16(0x6C))
    fields["camera_bound_bottom"] = str(s16(0x6E))
    fields["camera_bound_right"]  = str(s16(0x70))
    fields["camera_bound_left"]   = str(s16(0x72))

    # map bounds (4 s16) at 0x74..0x7C
    fields["map_bound_top"]    = str(s16(0x74))
    fields["map_bound_bottom"] = str(s16(0x76))
    fields["map_bound_right"]  = str(s16(0x78))
    fields["map_bound_left"]   = str(s16(0x7A))

    # bgm_id u32 at 0x7C
    fields["bgm_id"] = f"0x{u32(0x7C):08X}"

    # map_nodes pointer at 0x80
    v = u32(0x80)
    if v == 0:
        fields["map_nodes"] = "NULL"
    else:
        fields["map_nodes"] = f"(void *)0x{v:08X}"
        pointers.append((0x80, "map_nodes"))

    # item_weights pointer at 0x84
    v = u32(0x84)
    if v == 0:
        fields["item_weights"] = "NULL"
    else:
        fields["item_weights"] = f"(MPItemWeights *)0x{v:08X}"
        pointers.append((0x84, "item_weights"))

    # 9 s16 fields at 0x88..0x9A
    fields["alt_warning"]            = str(s16(0x88))
    fields["camera_bound_team_top"]    = str(s16(0x8A))
    fields["camera_bound_team_bottom"] = str(s16(0x8C))
    fields["camera_bound_team_right"]  = str(s16(0x8E))
    fields["camera_bound_team_left"]   = str(s16(0x90))
    fields["map_bound_team_top"]       = str(s16(0x92))
    fields["map_bound_team_bottom"]    = str(s16(0x94))
    fields["map_bound_team_right"]     = str(s16(0x96))
    fields["map_bound_team_left"]      = str(s16(0x98))

    # zoom_start Vec3h at 0x9A, zoom_end Vec3h at 0xA0
    fields["zoom_start"] = (f"{{ {s16(0x9A)}, {s16(0x9C)}, {s16(0x9E)} }}")
    fields["zoom_end"]   = (f"{{ {s16(0xA0)}, {s16(0xA2)}, {s16(0xA4)} }}")

    return fields, pointers


# ── Output ───────────────────────────────────────────────────────────────

def emit_c(fid, name, file_size, header_off, fields, pointers,
           item_weights, trailing_pad):
    lines = [
        f"/* MPGroundData for relocData file {fid} ({name}) */",
        f"/* File size: {file_size} bytes (0x{file_size:X}) */",
        "",
        "#include <mp/mptypes.h>",
        "#include \"relocdata_types.h\"",
        "",
    ]

    if item_weights is not None:
        # `MPItemWeights` is declared with `u8 values[1]` so we can't
        # initialize it with more than one byte. Emit a plain `u8[]` array
        # and cast to `MPItemWeights *` at the use site.
        lines.append("/* Item-randomizer weights, "
                     "referenced by `header.item_weights` */")
        bytes_str = ", ".join(f"0x{b:02X}" for b in item_weights)
        lines.append(
            f"u8 d{name}_item_weights[{len(item_weights)}] = "
            f"{{ {bytes_str} }};")
        lines.append("")

    lines.append(f"MPGroundData d{name}_header =")
    lines.append("{")
    lines.append("    /* gr_desc[4] */")
    lines.append("    {")
    lines.append(fields["gr_desc"])
    lines.append("    },")
    lines.append(f"    {fields['map_geometry']},  /* map_geometry */")
    lines.append(f"    {fields['layer_mask']},  /* layer_mask */")
    lines.append(f"    {fields['wallpaper']},  /* wallpaper */")
    lines.append(f"    {fields['fog_color']},  /* fog_color */")
    lines.append(f"    {fields['fog_alpha']},  /* fog_alpha */")
    lines.append("    /* emblem_colors[4] */")
    lines.append("    {")
    lines.append(fields["emblem_colors"])
    lines.append("    },")
    lines.append(f"    {fields['unused']},  /* unused */")
    lines.append(f"    {fields['light_angle']},  /* light_angle */")
    lines.append(f"    {fields['camera_bound_top']},  /* camera_bound_top */")
    lines.append(f"    {fields['camera_bound_bottom']},  /* camera_bound_bottom */")
    lines.append(f"    {fields['camera_bound_right']},  /* camera_bound_right */")
    lines.append(f"    {fields['camera_bound_left']},  /* camera_bound_left */")
    lines.append(f"    {fields['map_bound_top']},  /* map_bound_top */")
    lines.append(f"    {fields['map_bound_bottom']},  /* map_bound_bottom */")
    lines.append(f"    {fields['map_bound_right']},  /* map_bound_right */")
    lines.append(f"    {fields['map_bound_left']},  /* map_bound_left */")
    lines.append(f"    {fields['bgm_id']},  /* bgm_id */")
    lines.append(f"    {fields['map_nodes']},  /* map_nodes */")
    lines.append(f"    {fields['item_weights']},  /* item_weights */")
    lines.append(f"    {fields['alt_warning']},  /* alt_warning */")
    lines.append(f"    {fields['camera_bound_team_top']},  /* camera_bound_team_top */")
    lines.append(f"    {fields['camera_bound_team_bottom']},  /* camera_bound_team_bottom */")
    lines.append(f"    {fields['camera_bound_team_right']},  /* camera_bound_team_right */")
    lines.append(f"    {fields['camera_bound_team_left']},  /* camera_bound_team_left */")
    lines.append(f"    {fields['map_bound_team_top']},  /* map_bound_team_top */")
    lines.append(f"    {fields['map_bound_team_bottom']},  /* map_bound_team_bottom */")
    lines.append(f"    {fields['map_bound_team_right']},  /* map_bound_team_right */")
    lines.append(f"    {fields['map_bound_team_left']},  /* map_bound_team_left */")
    lines.append(f"    {fields['zoom_start']},  /* zoom_start */")
    lines.append(f"    {fields['zoom_end']},  /* zoom_end */")
    lines.append("};")

    if trailing_pad > 0:
        lines.append("")
        lines.append(
            f"/* {trailing_pad} bytes of trailing pad to 16-byte file boundary */")
        zeros = ", ".join(["0"] * trailing_pad)
        lines.append(f"u8 d{name}_pad[{trailing_pad}] = {{ {zeros} }};")

    lines.append("")
    return "\n".join(lines)


def emit_reloc(fid, name, header_off, pointers, has_item_weights):
    lines = [
        f"# Relocation metadata for file {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C variable names resolved via .o symbol table",
    ]
    # Walk pointers in source order
    for ptr_off, field_path in pointers:
        label = f"d{name}_header"
        if ptr_off:
            label += f"+0x{ptr_off:X}"
        if field_path == "item_weights" and has_item_weights:
            target = f"d{name}_item_weights"
            lines.append(f"intern {label} {target}")
        else:
            # Will be filled in below from the original .reloc file
            lines.append(f"# {label}  /* {field_path} */")
    lines.append("")
    return "\n".join(lines)


def derive_reloc_entries(data, header_off, pointers, name):
    """Build the (intern, extern) entries for the new .reloc by reading the
    chain-encoded raw u32 in each pointer slot. Each MPGroundData pointer
    field has a known intern/extern classification: only `item_weights`
    is intern (it points back to the file's MapHead). The chain entry's
    low 16 bits give `target_word`; multiply by 4 for the byte offset.
    """
    intern = []
    extern = []
    for ptr_off, field_path in pointers:
        slot = struct.unpack_from(">I", data, header_off + ptr_off)[0]
        target_word = slot & 0xFFFF
        target_byte = target_word * 4
        if field_path == "item_weights":
            intern.append((ptr_off, f"d{name}_item_weights"))
        else:
            extern.append((ptr_off, target_byte))
    return intern, extern


# ── Main ────────────────────────────────────────────────────────────────

def render_struct_initializer(name, fields):
    """Render the MPGroundData struct initializer body (no var decl)."""
    lines = []
    lines.append("{")
    lines.append("    /* gr_desc[4] */")
    lines.append("    {")
    lines.append(fields["gr_desc"])
    lines.append("    },")
    lines.append(f"    {fields['map_geometry']},  /* map_geometry */")
    lines.append(f"    {fields['layer_mask']},  /* layer_mask */")
    lines.append(f"    {fields['wallpaper']},  /* wallpaper */")
    lines.append(f"    {fields['fog_color']},  /* fog_color */")
    lines.append(f"    {fields['fog_alpha']},  /* fog_alpha */")
    lines.append("    /* emblem_colors[4] */")
    lines.append("    {")
    lines.append(fields["emblem_colors"])
    lines.append("    },")
    lines.append(f"    {fields['unused']},  /* unused */")
    lines.append(f"    {fields['light_angle']},  /* light_angle */")
    lines.append(f"    {fields['camera_bound_top']},  /* camera_bound_top */")
    lines.append(f"    {fields['camera_bound_bottom']},  /* camera_bound_bottom */")
    lines.append(f"    {fields['camera_bound_right']},  /* camera_bound_right */")
    lines.append(f"    {fields['camera_bound_left']},  /* camera_bound_left */")
    lines.append(f"    {fields['map_bound_top']},  /* map_bound_top */")
    lines.append(f"    {fields['map_bound_bottom']},  /* map_bound_bottom */")
    lines.append(f"    {fields['map_bound_right']},  /* map_bound_right */")
    lines.append(f"    {fields['map_bound_left']},  /* map_bound_left */")
    lines.append(f"    {fields['bgm_id']},  /* bgm_id */")
    lines.append(f"    {fields['map_nodes']},  /* map_nodes */")
    lines.append(f"    {fields['item_weights']},  /* item_weights */")
    lines.append(f"    {fields['alt_warning']},  /* alt_warning */")
    lines.append(f"    {fields['camera_bound_team_top']},  /* camera_bound_team_top */")
    lines.append(f"    {fields['camera_bound_team_bottom']},  /* camera_bound_team_bottom */")
    lines.append(f"    {fields['camera_bound_team_right']},  /* camera_bound_team_right */")
    lines.append(f"    {fields['camera_bound_team_left']},  /* camera_bound_team_left */")
    lines.append(f"    {fields['map_bound_team_top']},  /* map_bound_team_top */")
    lines.append(f"    {fields['map_bound_team_bottom']},  /* map_bound_team_bottom */")
    lines.append(f"    {fields['map_bound_team_right']},  /* map_bound_team_right */")
    lines.append(f"    {fields['map_bound_team_left']},  /* map_bound_team_left */")
    lines.append(f"    {fields['zoom_start']},  /* zoom_start */")
    lines.append(f"    {fields['zoom_end']},  /* zoom_end */")
    lines.append("}")
    return "\n".join(lines)


def process_complex_map(fid, name, data, header_off, syms):
    """Type just the gap and ItemHead .data.c blocks of a manifest-driven
    map that has additional content blocks (item attributes, weapon
    attributes, etc.) beyond the MPGroundData header. The other blocks
    and the .reloc file are left untouched.

    The variable names stay as the original block-derived form
    (`d<name>_gap_0x0000` and `d<name>_ItemHead_0x0014`) so the existing
    .reloc references continue to resolve via nm without rewriting.
    """
    block_dir = os.path.join(RELOC_DIR, name)
    if not os.path.isdir(block_dir):
        print(f"  ERROR: block dir {block_dir} not found")
        return False

    # Find the gap block (covers item_weights region) and the
    # ItemHead/MapHeader block (covers MPGroundData). When header_off
    # is 0 the file has no MapHead at all and the gap block IS the
    # MPGroundData (file simply starts with the struct).
    gap_block = None
    header_block = None
    for fn in os.listdir(block_dir):
        if not fn.endswith(".data.c"):
            continue
        if fn.startswith("gap_"):
            gap_block = fn
        elif fn.startswith("ItemHead_") or fn.startswith("MapHeader_"):
            header_block = fn

    if header_off == 0 and header_block is None and gap_block is not None:
        # gap IS the header
        header_block = gap_block
        gap_block = None

    if header_block is None:
        print(f"  ERROR: no ItemHead/MapHeader block in {block_dir}")
        return False

    # Decode MPGroundData
    fields, _ = parse_mpgrounddata(data, header_off)
    struct_body = render_struct_initializer(name, fields)

    # Rewrite gap block (item weights)
    if gap_block is not None:
        gap_var = f"d{name}_" + gap_block.replace(".data.c", "")
        item_weights_bytes = bytes(data[:header_off])
        bytes_str = ", ".join(f"0x{b:02X}" for b in item_weights_bytes)
        gap_text = (
            f"/* Item-randomizer weights — referenced by header.item_weights */\n"
            f"u8 {gap_var}[{len(item_weights_bytes)}] = "
            f"{{ {bytes_str} }};\n"
        )
        with open(os.path.join(block_dir, gap_block), "w") as f:
            f.write(gap_text)
        print(f"  Wrote {block_dir}/{gap_block}")

    # Rewrite header block (MPGroundData)
    header_var = f"d{name}_" + header_block.replace(".data.c", "")
    header_text = (
        f"/* MPGroundData (typed via tools/typeStageMap.py) */\n"
        f"MPGroundData {header_var} =\n{struct_body};\n"
    )
    with open(os.path.join(block_dir, header_block), "w") as f:
        f.write(header_text)
    print(f"  Wrote {block_dir}/{header_block}")
    return True


def process(fid, name, syms):
    print(f"Processing {fid}_{name}...")

    bin_path = os.path.join(ASSET_DIR, f"{fid}.vpk0.bin")
    if not os.path.exists(bin_path):
        bin_path = os.path.join(ASSET_DIR, f"{fid}.bin")
    with open(bin_path, "rb") as f:
        data = f.read()
    file_size = len(data)

    header_sym = f"ll{name}MapHeader"
    if header_sym not in syms:
        print(f"  ERROR: {header_sym} not in symbols")
        return False
    header_off = syms[header_sym]

    # Item weights are present whenever the MPGroundData starts past
    # offset 0 — those leading bytes ARE the item weights array, even
    # though most stages don't bother to expose a `ll<name>MapHead` symbol.
    has_item_weights = header_off > 0

    if header_off + MPGROUNDDATA_SIZE > file_size:
        print(f"  ERROR: header at 0x{header_off:X} + 0x{MPGROUNDDATA_SIZE:X} "
              f"> file size 0x{file_size:X}")
        return False

    # Item weights occupy bytes [0, header_off)
    item_weights = bytes(data[:header_off]) if has_item_weights else None

    # Trailing data after the struct
    struct_end = header_off + MPGROUNDDATA_SIZE
    trailing_pad = file_size - struct_end
    if trailing_pad < 0:
        print(f"  ERROR: struct extends past file end")
        return False

    # If the file has non-zero data after MPGroundData, it has additional
    # content blocks (item attributes, weapon attributes, etc.). Type
    # just the gap + ItemHead blocks in place and leave the rest alone.
    if any(b != 0 for b in data[struct_end:]):
        return process_complex_map(fid, name, data, header_off, syms)

    fields, pointers = parse_mpgrounddata(data, header_off)

    # Build the C source
    c_text = emit_c(fid, name, file_size, header_off, fields,
                    pointers, item_weights, trailing_pad)

    # Build the .reloc file directly from the in-memory pointer list and
    # the chain-encoded slot values in the binary.
    intern, extern = derive_reloc_entries(data, header_off, pointers, name)

    new_reloc_lines = [
        f"# Relocation metadata for file {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C variable names resolved via .o symbol table",
    ]
    all_entries = []
    for ptr_off, target in intern:
        all_entries.append(("intern", ptr_off, target))
    for ptr_off, target_byte in extern:
        all_entries.append(("extern", ptr_off, f"0x{target_byte:X}"))
    all_entries.sort(key=lambda e: e[1])

    for kind, ptr_off, target in all_entries:
        ptr_label = f"d{name}_header"
        if ptr_off:
            ptr_label += f"+0x{ptr_off:X}"
        new_reloc_lines.append(f"{kind} {ptr_label} {target}")
    new_reloc_lines.append("")

    # Write the .c and .reloc, remove the manifest and block dir
    c_path = os.path.join(RELOC_DIR, f"{fid}_{name}.c")
    reloc_path = os.path.join(RELOC_DIR, f"{fid}_{name}.reloc")
    manifest_path = os.path.join(RELOC_DIR, f"{fid}_{name}.manifest")
    block_dir = os.path.join(RELOC_DIR, name)

    with open(c_path, "w") as f:
        f.write(c_text)
    with open(reloc_path, "w") as f:
        f.write("\n".join(new_reloc_lines))
    if os.path.exists(manifest_path):
        os.remove(manifest_path)
    if os.path.isdir(block_dir):
        for fn in os.listdir(block_dir):
            os.remove(os.path.join(block_dir, fn))
        os.rmdir(block_dir)

    print(f"  Wrote {c_path}")
    print(f"  Wrote {reloc_path}")
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", type=int, nargs="*")
    ap.add_argument("--all", action="store_true")
    args = ap.parse_args()

    syms = load_symbols()
    all_maps = discover_maps()
    by_id = {fid: name for fid, name in all_maps}

    if args.all:
        targets = all_maps
    elif args.file_ids:
        targets = [(fid, by_id[fid]) for fid in args.file_ids if fid in by_id]
    else:
        ap.print_help()
        return 2

    ok = fail = 0
    for fid, name in targets:
        if process(fid, name, syms):
            ok += 1
        else:
            fail += 1
    print(f"\n{ok} ok, {fail} failed")
    return 0 if fail == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
