#!/usr/bin/python3
"""
Generate C data source files from relocData binary blobs.

Usage:
    genRelocDataC.py <file_id> [--descriptions <path>] [--output <path>] [--extract-data]

Generates a C source file with typed struct initializers for known data types
(Sprite, DObjDesc, Bitmap) and raw byte arrays for unknown regions.

Sprite data blocks are structured as:
    Gfx  name_dl[]      = { gsSPEndDisplayList() };
    u8   name_tex[]      = { #include "textures/Name.fmt.inc.c" };
    Bitmap name_bitmaps[] = { ... };
    Sprite name           = { ... };

With --extract-data, texture data is written to external .inc.c files and
PNG previews are generated alongside them for visual editing.
"""

import csv
import os
import re
import sys
import struct
import argparse
import math

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
EXTRACTED_FILES_PATH = os.path.join(PROJECT_DIR, "assets", "relocData")
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "relocData.csv")
COMPRESSED_FILE_COUNT = 499

SPRITE_SIZE = 68
BITMAP_SIZE = 16
DOBJDESC_SIZE = 44
MOBJSUB_SIZE = 0x78

TEX_FMTS = {0: "rgba", 1: "yuv", 2: "ci", 3: "ia", 4: "i"}
TEX_SIZES = {0: "4", 1: "8", 2: "16", 3: "32", 4: "4c"}
# Bits-per-pixel as stored in ROM. G_IM_SIZ_4c = 4 is a compressed 2bpp format
# that runtime-decodes to 4bpp via lbCommonDecodeBitmapSiz4b().
BPP = {0: 4, 1: 8, 2: 16, 3: 32, 4: 2}

SP_ATTR_FLAGS = {
    0x0001: "SP_TRANSPARENT", 0x0002: "SP_CUTOUT", 0x0004: "SP_HIDDEN",
    0x0008: "SP_Z", 0x0010: "SP_SCALE", 0x0020: "SP_FASTCOPY",
    0x0040: "SP_OVERLAP", 0x0080: "SP_TEXSHIFT", 0x0100: "SP_FRACPOS",
    0x0200: "SP_TEXSHUF", 0x0400: "SP_EXTERN", 0x0800: "SP_ARGUMENT",
    0x1000: "SP_CLOUD",
}


# ── helpers ──────────────────────────────────────────────────────────────

def get_binary_path(file_id):
    """Return the decompressed binary path for a file ID.

    Compressed files (VPK0) have a `.vpk0.bin` decompressed sibling, while
    uncompressed files just use `.bin`. The split between the two varies by
    version (US: 0-498 compressed, JP: 0-473), so we check the filesystem
    rather than relying on a hardcoded boundary.
    """
    vpk0_path = os.path.join(EXTRACTED_FILES_PATH, f"{file_id}.vpk0.bin")
    if os.path.exists(vpk0_path):
        return vpk0_path
    return os.path.join(EXTRACTED_FILES_PATH, f"{file_id}.bin")


def parse_file_descriptions(desc_path, file_id):
    entries = []
    if not desc_path or not os.path.exists(desc_path):
        return entries
    with open(desc_path, 'r') as f:
        lines = f.read().split('\n')
    in_target = False
    for line in lines:
        line = line.strip()
        if not line or line.startswith('#') or line.startswith('-'):
            continue
        m = re.match(r"\[(\d+)]", line)
        if m is not None:
            in_target = (int(m.group(1)) == file_id)
            continue
        if in_target and line.count(' ') == 2:
            bt, bn, bo = line.split(' ')
            offset = int(bo, 16) if bo.startswith('0x') else int(bo)
            entries.append((bt, bn, offset))
    entries.sort(key=lambda x: x[2])
    return entries


def parse_file_id_to_name(desc_path):
    d = {}
    if not desc_path or not os.path.exists(desc_path):
        return d
    with open(desc_path, 'r') as f:
        for line in f:
            line = line.strip()
            if line and line[0] == '-':
                fid = int(line.split(":")[0][1:])
                d[fid] = line.split(":")[1].strip()
    return d


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
    entries = []
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
        target_word = val & 0xFFFF
        entries.append((byte_off, target_word * 4))
        offset = next_r
    return entries


def build_reloc_map(data, csv_entry):
    """Returns dict of ptr_byte_offset -> (chain_type, target_byte_offset).

    chain_type is 'intern' or 'extern'.
    """
    reloc_map = {}
    if csv_entry:
        intern_off = csv_entry['reloc_intern_offset']
        if intern_off != 0xFFFF:
            for ptr_off, target_off in parse_reloc_chain(data, intern_off):
                reloc_map[ptr_off] = ('intern', target_off)
        extern_off = csv_entry['reloc_extern_offset']
        if extern_off != 0xFFFF:
            for ptr_off, target_off in parse_reloc_chain(data, extern_off):
                reloc_map[ptr_off] = ('extern', target_off)
    return reloc_map


def reloc_target(reloc_map, ptr_off):
    """Get the target byte offset for a reloc entry, or None if not in map."""
    entry = reloc_map.get(ptr_off)
    return entry[1] if entry else None


def reloc_type(reloc_map, ptr_off):
    """Get the chain type ('intern'/'extern') for a reloc entry, or None."""
    entry = reloc_map.get(ptr_off)
    return entry[0] if entry else None


def emit_reloc(reloc_entries, reloc_map, sym_map, ptr_off, ptr_label):
    """Append a reloc entry with the correct chain type and resolved target.

    For internal relocations, the target is resolved through sym_map to a
    C variable label. For external relocations, the target is a raw hex offset
    into another (unspecified) file - emitted as a literal '0xNNNN'.
    """
    entry = reloc_map.get(ptr_off)
    if entry is None:
        return
    ctype, target_off = entry
    if ctype == 'extern':
        target_label = f"0x{target_off:X}"
    else:
        target_label = sym_map.resolve(target_off)
    reloc_entries.append((ctype, ptr_label, target_label))


def format_attr_flags(attr):
    if attr == 0:
        return "0"
    flags = []
    for bit, name in sorted(SP_ATTR_FLAGS.items()):
        if attr & bit:
            flags.append(name)
            attr &= ~bit
    if attr:
        flags.append(f"0x{attr:04X}")
    return " | ".join(flags)


def format_float(f_val, raw_u32):
    if raw_u32 == 0:
        return "0.0f"
    # IDO C89 doesn't support compound literals or hex floats; for inf/nan we
    # have no way to express them as a literal float, so the caller should
    # avoid calling this function for unreasonable values.
    if math.isinf(f_val) or math.isnan(f_val):
        return f"/* nan/inf 0x{raw_u32:08X} */ 0.0f"
    simple = f"{f_val}"
    try:
        repacked = struct.pack('>f', float(simple))
        if struct.unpack('>I', repacked)[0] == raw_u32:
            # Strip trailing zeros from the MANTISSA only — never from the
            # exponent. e.g. "3.680e-40" must not become "3.68e-4".
            if 'e' in simple or 'E' in simple:
                idx = simple.lower().index('e')
                mantissa = simple[:idx]
                exponent = simple[idx:]
                if '.' in mantissa:
                    mantissa = mantissa.rstrip('0').rstrip('.')
                simple = mantissa + exponent
            elif '.' in simple:
                simple = simple.rstrip('0').rstrip('.')
            if '.' not in simple and 'e' not in simple.lower():
                simple += ".0"
            return simple + 'f'
    except (ValueError, OverflowError):
        pass
    # Last-ditch: fall through to a comment + 0.0f. Caller is responsible for
    # handling weird denormals via raw u32 hex emission if matching matters.
    return f"/* 0x{raw_u32:08X} */ 0.0f"


def format_u32_line(data, offset, words_per_line=8):
    chunk = data[offset:offset + words_per_line * 4]
    words = []
    for j in range(0, len(chunk), 4):
        wb = chunk[j:j + 4]
        if len(wb) == 4:
            words.append(f"0x{struct.unpack('>I', wb)[0]:08X}")
    return f"\t{', '.join(words)},"


def format_u32_line_with_relocs(data, base_offset, file_offset, words_per_line, reloc_map):
    chunk = data[base_offset:base_offset + words_per_line * 4]
    words = []
    comments = []
    for j in range(0, len(chunk), 4):
        wb = chunk[j:j + 4]
        if len(wb) == 4:
            abs_off = file_offset + base_offset + j
            word = struct.unpack('>I', wb)[0]
            words.append(f"0x{word:08X}")
            if abs_off in reloc_map:
                ctype, target = reloc_map[abs_off]
                tag = 'X' if ctype == 'extern' else ''
                comments.append(f"+0x{base_offset + j:X}->0x{target:04X}{tag}")
    line = f"\t{', '.join(words)},"
    if comments:
        line += f" /* reloc: {', '.join(comments)} */"
    return line


# ── Symbol map ───────────────────────────────────────────────────────────

class SymbolMap:
    def __init__(self):
        self.entries = []

    def add(self, var_name, file_start, file_end):
        self.entries.append((var_name, file_start, file_end))

    def resolve(self, byte_offset):
        """Return a `<var>` or `<var>+0xN` label for use in .reloc files."""
        for var_name, start, end in self.entries:
            if start <= byte_offset < end:
                rel = byte_offset - start
                if rel == 0:
                    return var_name
                return f"{var_name}+0x{rel:X}"
        return f"0x{byte_offset:04X}"

    def resolve_c_expr(self, byte_offset):
        """Return a valid C expression that points at the given byte offset.

        Used for typed-struct fields whose value is a relocated pointer —
        the chain word gets overwritten at link time, but we still want the
        source to read like `(u8*)var + 0xN` instead of a meaningless raw
        chain encoding so the file is human-editable.
        """
        for var_name, start, end in self.entries:
            if start <= byte_offset < end:
                rel = byte_offset - start
                if rel == 0:
                    return var_name
                return f"((u8*){var_name} + 0x{rel:X})"
        return None


# ── emit helpers ─────────────────────────────────────────────────────────

def emit_raw_region(lines, data, start, end, var_name, reloc_map, sym_map):
    """Emit a raw data region as an unsized u32[] or u8[] array."""
    region = data[start:end]
    size = len(region)
    if size == 0:
        return
    has_relocs = any(start <= off < end for off in reloc_map)
    sym_map.add(var_name, start, end)

    if size % 4 == 0:
        lines.append(f"u32 {var_name}[] = {{")
        wpl = 8
        for i in range(0, size, wpl * 4):
            if has_relocs:
                lines.append(format_u32_line_with_relocs(region, i, start, wpl, reloc_map))
            else:
                lines.append(format_u32_line(region, i, wpl))
        lines.append("};")
    else:
        lines.append(f"u8 {var_name}[] = {{")
        for i in range(0, size, 16):
            chunk = region[i:i + 16]
            lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")
        lines.append("};")
    lines.append("")


def write_texture_inc(data, start, size, inc_path):
    """Write raw texture pixel data as a .inc.c hex file (byte values for u8 array)."""
    region = data[start:start + size]
    inc_lines = []
    for i in range(0, size, 16):
        chunk = region[i:i + 16]
        inc_lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")

    os.makedirs(os.path.dirname(inc_path), exist_ok=True)
    with open(inc_path, 'w') as f:
        f.write("\n".join(inc_lines) + "\n")


def write_palette_png(colors_u16, png_path):
    """Write a 16x1 PNG strip from 16 RGBA5551 palette colors.

    Each palette entry becomes one pixel in the strip; the strip is upscaled
    16x vertically (so the file is 16x16 instead of 16x1) to make it visible
    in image viewers without zooming.
    """
    try:
        import png as pnglib
    except ImportError:
        return

    rgba_row = []
    for c in colors_u16:
        r = ((c >> 11) & 0x1F) * 255 // 31
        g = ((c >> 6) & 0x1F) * 255 // 31
        b = ((c >> 1) & 0x1F) * 255 // 31
        a = (c & 1) * 255
        rgba_row.extend([r, g, b, a])

    rows = [rgba_row for _ in range(16)]  # 16x16 for visibility

    w = pnglib.Writer(width=16, height=16, alpha=True, greyscale=False)
    os.makedirs(os.path.dirname(png_path), exist_ok=True)
    with open(png_path, 'wb') as f:
        w.write(f, rows)


def write_texture_png(data, start, width, width_img, height, bmfmt, bmsiz, png_path):
    """Write a PNG preview of texture data."""
    try:
        import png as pnglib
        from relocSpriteTool import n64_to_rgba
    except ImportError:
        return

    pixel_data = data[start:start + compute_tex_size(width_img, height, bmsiz)]
    rgba_rows = n64_to_rgba(pixel_data, width_img, height, width_img, bmfmt, bmsiz)
    w = pnglib.Writer(width=width_img, height=height, alpha=True, greyscale=False)
    os.makedirs(os.path.dirname(png_path), exist_ok=True)
    with open(png_path, 'wb') as f:
        w.write(f, rgba_rows)


def deshuffle_texshuf_bytes(row_bytes_data, row_index, word_size=16):
    """Undo the SP_TEXSHUF / N64 RDP byte interleave on an odd row.

    The N64 RDP stores RGBA32 textures across TMEM's two 4 KB banks (R+G in
    one, B+A in the other). For efficient row-pair access, every odd row
    has its bytes swapped within each 16-byte unit — the two 8-byte halves
    are exchanged. Even rows pass through unchanged.

    For 4-/8-/16-bit formats use word_size=8 (the regular RDP swizzle).
    The default of 16 matches the rgba32 case which is the only format
    n64_to_rgba doesn't already unswizzle internally.
    """
    if row_index % 2 == 0:
        return row_bytes_data
    out = bytearray(len(row_bytes_data))
    half = word_size // 2
    for i in range(0, len(row_bytes_data), word_size):
        chunk = row_bytes_data[i:i + word_size]
        if len(chunk) == word_size:
            out[i:i + half] = chunk[half:]
            out[i + half:i + word_size] = chunk[:half]
        else:
            # Partial trailing word — leave as-is
            out[i:i + len(chunk)] = chunk
    return bytes(out)


def write_sprite_png(data, tiles, bmfmt, bmsiz, png_path, texshuf=False,
                     tlut_data=None):
    """Write a stitched PNG preview for a (possibly multi-tile) sprite.

    Each tile's pixel data is decoded to RGBA and stacked vertically.
    If texshuf is True, each tile's rows are de-interleaved from the
    SP_TEXSHUF storage order before stitching.
    For CI sprites, tlut_data should be the 32-byte palette bytes that
    the sprite's LUT field points at — without it, CI sprites are
    rendered as grayscale by index.
    Skips 4c (compressed) format which can't be decoded without runtime
    expansion.
    """
    try:
        import png as pnglib
        from relocSpriteTool import n64_to_rgba
    except ImportError:
        return

    if bmsiz == 4:  # G_IM_SIZ_4c (compressed)
        return

    width_img = tiles[0]['bitmap']['width_img']
    bpp = BPP[bmsiz]
    row_byte_count = (width_img * bpp + 7) // 8
    # n64_to_rgba already unswizzles 4/8/16-bit row pairs, but it explicitly
    # skips RGBA32 (bmfmt=0, bmsiz=3) — those textures need the same odd-row
    # byte swap manually applied here when SP_TEXSHUF is set.
    needs_rgba32_unswizzle = texshuf and bmfmt == 0 and bmsiz == 3
    all_rows = []
    try:
        for tile in tiles:
            bm = tile['bitmap']
            h = bm['actualHeight']
            pixel_data = data[tile['tex_off']:tile['tex_off'] + tile['tex_size']]
            if needs_rgba32_unswizzle:
                fixed = bytearray(len(pixel_data))
                for r in range(h):
                    src = pixel_data[r * row_byte_count:(r + 1) * row_byte_count]
                    fixed[r * row_byte_count:(r + 1) * row_byte_count] = \
                        deshuffle_texshuf_bytes(src, r)
                pixel_data = bytes(fixed)
            rgba_rows = n64_to_rgba(pixel_data, width_img, h, width_img,
                                    bmfmt, bmsiz, tlut_data=tlut_data)
            all_rows.extend(rgba_rows)
    except Exception:
        return

    total_h = len(all_rows)
    if total_h == 0:
        return

    w = pnglib.Writer(width=width_img, height=total_h, alpha=True, greyscale=False)
    os.makedirs(os.path.dirname(png_path), exist_ok=True)
    with open(png_path, 'wb') as f:
        w.write(f, all_rows)


def compute_tex_size(width_img, height, bmsiz):
    bpp = BPP[bmsiz]
    return ((width_img * bpp + 7) // 8) * height


# ── sprite block parsing ────────────────────────────────────────────────

def parse_sprite(data, offset):
    if offset + SPRITE_SIZE > len(data):
        return None
    raw = data[offset:offset + SPRITE_SIZE]
    fields = struct.unpack('>2h 2h 2f 2h Hh 4B 2h I 2h 2h 2h 2B 2x I I I 2h', raw)
    return {
        'x': fields[0], 'y': fields[1],
        'width': fields[2], 'height': fields[3],
        'scalex': fields[4], 'scaley': fields[5],
        'scalex_raw': struct.unpack('>I', raw[8:12])[0],
        'scaley_raw': struct.unpack('>I', raw[12:16])[0],
        'expx': fields[6], 'expy': fields[7],
        'attr': fields[8], 'zdepth': fields[9],
        'red': fields[10], 'green': fields[11], 'blue': fields[12], 'alpha': fields[13],
        'startTLUT': fields[14], 'nTLUT': fields[15],
        'LUT': fields[16],
        'istart': fields[17], 'istep': fields[18],
        'nbitmaps': fields[19], 'ndisplist': fields[20],
        'bmheight': fields[21], 'bmHreal': fields[22],
        'bmfmt': fields[23], 'bmsiz': fields[24],
        'bitmap_raw': fields[25], 'rsp_dl_raw': fields[26], 'rsp_dl_next_raw': fields[27],
        'frac_s': fields[28], 'frac_t': fields[29],
    }


def analyze_sprite_block(data, sp_off, reloc_map):
    """Analyze a sprite's data block.

    For each Bitmap tile, finds its pixel data offset (via Bitmap.buf reloc)
    and checks for an optional DL terminator immediately before it.

    Returns dict with sprite, bitmaps_off, tiles (list of dicts), or None.
    Each tile dict contains: dl_off (or None), tex_off, tex_size, bitmap.
    """
    sp = parse_sprite(data, sp_off)
    if sp is None:
        return None

    # Find bitmap array via reloc chain
    bitmap_ptr_off = sp_off + 52
    bitmaps_off = reloc_target(reloc_map, bitmap_ptr_off)
    if bitmaps_off is None:
        return None

    nbm = sp['nbitmaps']
    if nbm == 0:
        return None

    # Parse all bitmaps and find their pixel data locations
    tiles = []
    for i in range(nbm):
        bm_i_off = bitmaps_off + i * BITMAP_SIZE
        bm_i = struct.unpack('>2h 2h I 2h', data[bm_i_off:bm_i_off + BITMAP_SIZE])
        bitmap_dict = {
            'width': bm_i[0], 'width_img': bm_i[1],
            's': bm_i[2], 't': bm_i[3],
            'buf_raw': bm_i[4],
            'actualHeight': bm_i[5], 'LUToffset': bm_i[6],
        }

        # Get pixel data location from buf reloc
        buf_off = bm_i_off + 8
        tex_off = reloc_target(reloc_map, buf_off)
        if tex_off is None:
            return None

        # Compute tile size from bitmap dimensions
        tile_size = compute_tex_size(bm_i[1], bm_i[5], sp['bmsiz'])

        # Check for DL terminator immediately before pixel data
        dl_off = None
        if tex_off >= 8:
            dl_words = struct.unpack('>II', data[tex_off - 8:tex_off])
            if dl_words == (0xDF000000, 0x00000000):
                dl_off = tex_off - 8

        tiles.append({
            'bitmap': bitmap_dict,
            'dl_off': dl_off,
            'tex_off': tex_off,
            'tex_size': tile_size,
        })

    return {
        'sprite': sp,
        'bitmaps_off': bitmaps_off,
        'bitmaps_count': nbm,
        'tiles': tiles,
    }


# ── emit sprite block ───────────────────────────────────────────────────

def emit_sprite_block(master_lines, data, sp_off, prefix, name, reloc_map, sym_map,
                      extract_data, block_dir, asset_dir, file_subdir, reloc_entries,
                      lut_expr=None, palette_bytes=None):
    """Emit a complete sprite data block.

    Writes the sprite definition to <block_dir>/<name>.sprite.c containing:
        Gfx _dl[] = { gsSPEndDisplayList() };
        u8 _tex[] = { #include <FileName/<name>.<fmt>.inc.c> };
        Bitmap _bitmaps[] = { ... };
        Sprite _name = { ... };

    The .inc.c (and .png) are written to <asset_dir>, which is in build/.
    The angle-bracket include uses the compiler's -I search path so the
    structural .sprite.c stays decoupled from the build-output asset path.

    The master file gets a single #include line referencing the sprite.c.

    For multi-bitmap sprites, the texture is one combined region and each
    Bitmap entry references a byte offset into the texture variable.

    Returns the byte offset after the Sprite struct, or None if fallback needed.
    """
    info = analyze_sprite_block(data, sp_off, reloc_map)
    if info is None:
        return None

    sp = info['sprite']
    fmt_name = f"{TEX_FMTS.get(sp['bmfmt'], '?')}{TEX_SIZES.get(sp['bmsiz'], '?')}"
    # If the sprite has no name in the descriptions, derive a stable id from
    # its file offset (used for both the C variable and the source filename).
    if name == '-':
        name = f"sprite_0x{sp_off:04X}"
    var_base = f"{prefix}_{name}"

    nbm = info['bitmaps_count']
    tiles = info['tiles']
    first_tile = tiles[0]

    sprite_lines = []

    # ── DL terminator (before first tile) ──
    if first_tile['dl_off'] is not None:
        dl_var = f"{var_base}_dl"
        sym_map.add(dl_var, first_tile['dl_off'], first_tile['dl_off'] + 8)
        sprite_lines.append(f"Gfx {dl_var}[] = {{ gsSPEndDisplayList() }};")
        sprite_lines.append("")

    # ── Texture data: one combined region ──
    tex_var = f"{var_base}_tex"
    tex_start = first_tile['tex_off']
    tex_end = info['bitmaps_off']
    tex_size = tex_end - tex_start
    sym_map.add(tex_var, tex_start, tex_end)

    bm0 = first_tile['bitmap']
    total_h = sum(t['bitmap']['actualHeight'] for t in tiles)
    w_info = f"{bm0['width']}x{total_h}" if bm0['width'] == bm0['width_img'] else f"{bm0['width']}({bm0['width_img']})x{total_h}"
    nbm_info = f", {nbm} tiles" if nbm > 1 else ""
    sprite_lines.append(f"/* Texture: {name} ({w_info} {fmt_name}{nbm_info}) */")

    if extract_data:
        inc_filename = f"{name}.{fmt_name}.inc.c"
        inc_path = os.path.join(asset_dir, inc_filename)

        # Write PNG first (so its mtime is older than inc.c, preventing the
        # Makefile rule from re-converting and overwriting our exact bytes).
        # Both files live in build/src/relocData/<FileName>/ and are ignored
        # by git - the .png is the human-editable form.
        png_filename = f"{name}.{fmt_name}.png"
        png_path = os.path.join(asset_dir, png_filename)
        write_sprite_png(data, tiles, sp['bmfmt'], sp['bmsiz'], png_path,
                         texshuf=bool(sp['attr'] & 0x0200),
                         tlut_data=palette_bytes)

        # Write inc.c after, with mtime forced to be newer than the PNG
        write_texture_inc(data, tex_start, tex_size, inc_path)
        if os.path.exists(png_path):
            import time
            now = time.time()
            os.utime(png_path, (now - 1, now - 1))
            os.utime(inc_path, (now, now))

        # Use an angle-bracket include with the file_subdir prefix so the
        # compiler's -I search path resolves it. This lets src/relocData/
        # overrides take priority over the build/-generated files.
        sprite_lines.append(f"u8 {tex_var}[] = {{")
        sprite_lines.append(f'    #include <{file_subdir}/{inc_filename}>')
        sprite_lines.append("};")
    else:
        sprite_lines.append(f"u8 {tex_var}[] = {{")
        region = data[tex_start:tex_end]
        for j in range(0, len(region), 16):
            chunk = region[j:j + 16]
            sprite_lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")
        sprite_lines.append("};")
    sprite_lines.append("")

    # ── Bitmap array ──
    bm_var = f"{var_base}_bitmaps"
    sym_map.add(bm_var, info['bitmaps_off'], info['bitmaps_off'] + nbm * BITMAP_SIZE)

    sprite_lines.append(f"Bitmap {bm_var}[] = {{")
    for i, tile in enumerate(tiles):
        bm = tile['bitmap']
        tile_offset = tile['tex_off'] - tex_start
        if tile_offset == 0:
            buf_expr = tex_var
        else:
            buf_expr = f"{tex_var} + 0x{tile_offset:X}"
        sprite_lines.append(f"\t{{ {bm['width']}, {bm['width_img']}, {bm['s']}, {bm['t']}, "
                            f"{buf_expr}, {bm['actualHeight']}, {bm['LUToffset']} }},")

        bm_buf_off = info['bitmaps_off'] + i * BITMAP_SIZE + 8
        # Bitmap.buf reloc -> tex_var (or tex_var+offset for multi-tile)
        emit_reloc(reloc_entries, reloc_map, sym_map, bm_buf_off,
                   f"{bm_var}+0x{i * BITMAP_SIZE + 8:X}")
    sprite_lines.append("};")
    sprite_lines.append("")

    # ── Sprite struct ──
    sp_var = var_base
    sym_map.add(sp_var, sp_off, sp_off + SPRITE_SIZE)

    attr_str = format_attr_flags(sp['attr'])

    # Sprite.bitmap, Sprite.LUT, Sprite.rsp_dl, Sprite.rsp_dl_next
    emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 32, f"{sp_var}+0x20")
    emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 52, f"{sp_var}+0x34")
    emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 56, f"{sp_var}+0x38")
    emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 60, f"{sp_var}+0x3C")

    sprite_lines.append(f"/* Sprite: {name} ({sp['width']}x{sp['height']} {fmt_name}) */")
    sprite_lines.append(f"Sprite {sp_var} = {{")
    sprite_lines.append(f"\t{sp['x']}, {sp['y']},")
    sprite_lines.append(f"\t{sp['width']}, {sp['height']},")
    sprite_lines.append(f"\t{format_float(sp['scalex'], sp['scalex_raw'])}, {format_float(sp['scaley'], sp['scaley_raw'])},")
    sprite_lines.append(f"\t{sp['expx']}, {sp['expy']},")
    sprite_lines.append(f"\t{attr_str},")
    sprite_lines.append(f"\t{sp['zdepth']},")
    sprite_lines.append(f"\t{sp['red']}, {sp['green']}, {sp['blue']}, {sp['alpha']},")
    lut_str = lut_expr if lut_expr else f"(int*)0x{sp['LUT']:08X}"
    sprite_lines.append(f"\t{sp['startTLUT']}, {sp['nTLUT']},")
    sprite_lines.append(f"\t{lut_str},")
    sprite_lines.append(f"\t{sp['istart']}, {sp['istep']},")
    sprite_lines.append(f"\t{sp['nbitmaps']}, {sp['ndisplist']},")
    sprite_lines.append(f"\t{sp['bmheight']}, {sp['bmHreal']},")
    sprite_lines.append(f"\t{sp['bmfmt']}, {sp['bmsiz']},")
    sprite_lines.append(f"\t(Bitmap*){bm_var},")
    sprite_lines.append(f"\t(Gfx*)0x{sp['rsp_dl_raw']:08X},")
    sprite_lines.append(f"\t(Gfx*)0x{sp['rsp_dl_next_raw']:08X},")
    sprite_lines.append(f"\t{sp['frac_s']}, {sp['frac_t']},")
    sprite_lines.append("};")
    sprite_lines.append("")

    # Write the sprite .sprite.c file
    if extract_data:
        sprite_filename = f"{name}.sprite.c"
        sprite_path = os.path.join(block_dir, sprite_filename)
        os.makedirs(block_dir, exist_ok=True)
        with open(sprite_path, 'w') as f:
            f.write(f"/* Sprite: {name} */\n\n")
            f.write("\n".join(sprite_lines))

        # Master file just gets the include
        master_lines.append(f'/* Sprite: {name} ({w_info} {fmt_name}{nbm_info}) */')
        master_lines.append(f'#include "{file_subdir}/{sprite_filename}"')
        master_lines.append("")
    else:
        master_lines.extend(sprite_lines)

    return sp_off + SPRITE_SIZE


# ── DObjDesc ─────────────────────────────────────────────────────────────

def parse_dobjdesc(data, offset):
    if offset + DOBJDESC_SIZE > len(data):
        return None
    raw = data[offset:offset + DOBJDESC_SIZE]
    fields = struct.unpack('>i I 3f 3f 3f', raw)
    return {
        'id': fields[0], 'dl': fields[1],
        'translate': fields[2:5], 'rotate': fields[5:8], 'scale': fields[8:11],
        'float_raws': struct.unpack('>9I', raw[8:44]),
    }


def is_reasonable_dobjdesc(d):
    """Heuristic check that this looks like a real DObjDesc.

    Real DObjDescs have:
      - id: small positive integer or -1 (terminator)
      - translate/rotate/scale: finite floats with reasonable magnitudes
    Garbage data often has random ints as id and inf/nan/huge floats.
    """
    import math
    if d['id'] < -1 or d['id'] > 1024:
        return False
    for vec in (d['translate'], d['rotate'], d['scale']):
        for v in vec:
            if math.isinf(v) or math.isnan(v):
                return False
            if abs(v) > 1e10:
                return False
    return True


def emit_dobjdesc_array(lines, data, offset, prefix, name, next_offset, reloc_map, sym_map, reloc_entries):
    entries = []
    pos = offset
    while pos + DOBJDESC_SIZE <= min(next_offset, len(data)):
        d = parse_dobjdesc(data, pos)
        if d is None:
            break
        if not is_reasonable_dobjdesc(d):
            break  # data doesn't look like DObjDesc, stop parsing
        d['file_offset'] = pos
        entries.append(d)
        pos += DOBJDESC_SIZE
        if d['id'] == -1:
            break
    if not entries:
        return offset

    var_name = f"{prefix}_{name}" if name != '-' else f"{prefix}_DObjDesc_0x{offset:04X}"
    sym_map.add(var_name, offset, pos)

    lines.append(f"/* DObjDesc: {name} @ 0x{offset:X} ({len(entries)} entries) */")
    lines.append(f"DObjDesc {var_name}[] = {{")
    for i, d in enumerate(entries):
        tr_s = [format_float(d['translate'][j], d['float_raws'][j]) for j in range(3)]
        ro_s = [format_float(d['rotate'][j], d['float_raws'][3 + j]) for j in range(3)]
        sc_s = [format_float(d['scale'][j], d['float_raws'][6 + j]) for j in range(3)]

        dl_off = d['file_offset'] + 4
        emit_reloc(reloc_entries, reloc_map, sym_map, dl_off,
                   f"{var_name}+0x{i * DOBJDESC_SIZE + 4:X}")

        lines.append(f"\t{{ {d['id']}, (void*)0x{d['dl']:08X}, "
                     f"{{ {', '.join(tr_s)} }}, {{ {', '.join(ro_s)} }}, {{ {', '.join(sc_s)} }} }},")
    lines.append("};")
    lines.append("")
    return pos


# ── MObjSub ─────────────────────────────────────────────────────────────
#
# A material sub-object — fixed 0x78 bytes. Defined in src/sys/objtypes.h.
# Pointer fields (chained via the relocation table) are at:
#   +0x04  void **sprites
#   +0x2C  void **palettes
# Everything else is u8/u16/u32/f32 numeric data. Color fields stored as
# packed u32s (SYColorPack).
#
# MObjSub blocks are always standalone in the descriptions (one entry per
# offset), never adjacent — there's always padding before the next block.

def parse_mobjsub(data, offset):
    """Parse a 0x78-byte MObjSub. Returns a dict of field values, or None
    if the offset is out of bounds.
    """
    if offset + MOBJSUB_SIZE > len(data):
        return None
    raw = data[offset:offset + MOBJSUB_SIZE]
    # Field-by-field unpack matching the struct layout exactly so each
    # named field maps to a known byte offset.
    fields = {}
    fields['pad00']      = struct.unpack('>H', raw[0x00:0x02])[0]
    fields['fmt']        = raw[0x02]
    fields['siz']        = raw[0x03]
    fields['sprites']    = struct.unpack('>I', raw[0x04:0x08])[0]
    fields['unk08']      = struct.unpack('>H', raw[0x08:0x0A])[0]
    fields['unk0A']      = struct.unpack('>H', raw[0x0A:0x0C])[0]
    fields['unk0C']      = struct.unpack('>H', raw[0x0C:0x0E])[0]
    fields['unk0E']      = struct.unpack('>H', raw[0x0E:0x10])[0]
    fields['unk10']      = struct.unpack('>i', raw[0x10:0x14])[0]
    for fname, foff in (('trau', 0x14), ('trav', 0x18),
                        ('scau', 0x1C), ('scav', 0x20),
                        ('unk24', 0x24), ('unk28', 0x28)):
        u32 = struct.unpack('>I', raw[foff:foff + 4])[0]
        f32 = struct.unpack('>f', raw[foff:foff + 4])[0]
        fields[fname] = f32
        fields[fname + '_raw'] = u32
    fields['palettes']   = struct.unpack('>I', raw[0x2C:0x30])[0]
    fields['flags']      = struct.unpack('>H', raw[0x30:0x32])[0]
    fields['block_fmt']  = raw[0x32]
    fields['block_siz']  = raw[0x33]
    fields['block_dxt']  = struct.unpack('>H', raw[0x34:0x36])[0]
    fields['unk36']      = struct.unpack('>H', raw[0x36:0x38])[0]
    fields['unk38']      = struct.unpack('>H', raw[0x38:0x3A])[0]
    fields['unk3A']      = struct.unpack('>H', raw[0x3A:0x3C])[0]
    for fname, foff in (('scrollu', 0x3C), ('scrollv', 0x40),
                        ('unk44', 0x44), ('unk48', 0x48)):
        u32 = struct.unpack('>I', raw[foff:foff + 4])[0]
        f32 = struct.unpack('>f', raw[foff:foff + 4])[0]
        fields[fname] = f32
        fields[fname + '_raw'] = u32
    fields['unk4C']        = struct.unpack('>I', raw[0x4C:0x50])[0]
    fields['primcolor']    = struct.unpack('>I', raw[0x50:0x54])[0]
    fields['prim_l']       = raw[0x54]
    fields['prim_m']       = raw[0x55]
    fields['prim_pad']     = struct.unpack('>H', raw[0x56:0x58])[0]
    fields['envcolor']     = struct.unpack('>I', raw[0x58:0x5C])[0]
    fields['blendcolor']   = struct.unpack('>I', raw[0x5C:0x60])[0]
    fields['light1color']  = struct.unpack('>I', raw[0x60:0x64])[0]
    fields['light2color']  = struct.unpack('>I', raw[0x64:0x68])[0]
    fields['unk68']        = struct.unpack('>i', raw[0x68:0x6C])[0]
    fields['unk6C']        = struct.unpack('>i', raw[0x6C:0x70])[0]
    fields['unk70']        = struct.unpack('>i', raw[0x70:0x74])[0]
    fields['unk74']        = struct.unpack('>i', raw[0x74:0x78])[0]
    return fields


# ── main generation ──────────────────────────────────────────────────────

def write_block_file(block_dir, filename, block_lines):
    """Write a single block's lines to a .c file in the block subfolder."""
    os.makedirs(block_dir, exist_ok=True)
    path = os.path.join(block_dir, filename)
    with open(path, 'w') as f:
        f.write("\n".join(block_lines) + "\n")


def generate(file_id, data, file_name, entries, reloc_map, csv_entry,
             extract_data=False, output_dir=None):
    lines = []
    sym_map = SymbolMap()
    reloc_entries = []  # list of (type, ptr_label, target_label)
    # Manifest entries: list of (kind, payload)
    #   ('block', filename) -> #include "subdir/filename"
    #   ('pad', n)          -> PAD(n);
    manifest = []

    lines.append(f"/* Auto-generated from assets/relocData/{os.path.basename(get_binary_path(file_id))} */")
    lines.append(f"/* File ID: {file_id} ({file_name}) */")
    lines.append(f"/* File size: {len(data)} bytes (0x{len(data):X}) */")
    lines.append("")
    lines.append('#include "relocdata_types.h"')
    lines.append("")

    prefix = f"d{file_name}" if file_name else f"dRelocFile{file_id}"
    # Each reloc file gets its own subfolder for its block subfiles
    file_subdir = file_name if file_name else f"file_{file_id}"
    # Structural files (.sprite.c, .data.c, .dobjdesc.c) live under src/relocData/
    block_dir = os.path.join(output_dir, file_subdir) if output_dir else os.path.join(PROJECT_DIR, "src", "relocData", file_subdir)
    # Asset files (.inc.c and .png) live under build/src/relocData/ - they
    # are auto-regenerated by the build and gitignored.
    asset_dir = os.path.join(PROJECT_DIR, "build", "src", "relocData", file_subdir)

    def emit_data_block(start, end, name_suffix):
        """Extract a raw data region to a .data.c file and add to manifest."""
        size = end - start
        if size == 0:
            return
        var_name = f"{prefix}_{name_suffix}"
        sym_map.add(var_name, start, end)
        block_lines = [f"/* Raw data from file offset 0x{start:04X} to 0x{end:04X} ({size} bytes) */"]
        has_relocs = any(start <= off < end for off in reloc_map)
        if size % 4 == 0:
            block_lines.append(f"u32 {var_name}[] = {{")
            wpl = 8
            for i in range(0, size, wpl * 4):
                if has_relocs:
                    block_lines.append(format_u32_line_with_relocs(data[start:end], i, start, wpl, reloc_map))
                else:
                    block_lines.append(format_u32_line(data[start:end], i, wpl))
            block_lines.append("};")
        else:
            block_lines.append(f"u8 {var_name}[] = {{")
            for i in range(0, size, 16):
                chunk = data[start + i:start + i + 16]
                block_lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")
            block_lines.append("};")
        filename = f"{name_suffix}.data.c"
        if extract_data:
            write_block_file(block_dir, filename, block_lines)
            manifest.append(('block', filename))
        else:
            lines.extend(block_lines)
            lines.append("")

    def emit_dobjdesc_block(offset, name, next_offset):
        """Extract a DObjDesc array to a .dobjdesc.c file and add to manifest."""
        nonlocal lines
        entries_list = []
        pos = offset
        while pos + DOBJDESC_SIZE <= min(next_offset, len(data)):
            d = parse_dobjdesc(data, pos)
            if d is None:
                break
            if not is_reasonable_dobjdesc(d):
                break
            d['file_offset'] = pos
            entries_list.append(d)
            pos += DOBJDESC_SIZE
            if d['id'] == -1:
                break
        if not entries_list:
            return offset

        name_suffix = name if name != '-' else f"DObjDesc_0x{offset:04X}"
        var_name = f"{prefix}_{name_suffix}"
        sym_map.add(var_name, offset, pos)

        block_lines = [f"/* DObjDesc: {name} @ 0x{offset:X} ({len(entries_list)} entries) */"]
        block_lines.append(f"DObjDesc {var_name}[] = {{")
        for i, d in enumerate(entries_list):
            tr_s = [format_float(d['translate'][j], d['float_raws'][j]) for j in range(3)]
            ro_s = [format_float(d['rotate'][j], d['float_raws'][3 + j]) for j in range(3)]
            sc_s = [format_float(d['scale'][j], d['float_raws'][6 + j]) for j in range(3)]

            dl_off = d['file_offset'] + 4
            emit_reloc(reloc_entries, reloc_map, sym_map, dl_off,
                       f"{var_name}+0x{i * DOBJDESC_SIZE + 4:X}")

            # If the dl field is relocated, resolve it to a label-based C
            # expression so the source documents which display list this
            # entry points at. The actual word value gets patched by
            # fixRelocChain at link time using the .reloc file's labels.
            dl_expr = None
            if dl_off in reloc_map:
                target = reloc_map[dl_off][1]
                dl_expr = sym_map.resolve_c_expr(target)
            if dl_expr is None:
                dl_expr = f"(void*)0x{d['dl']:08X}"
            else:
                dl_expr = f"(void*){dl_expr}"

            block_lines.append(f"\t{{ {d['id']}, {dl_expr}, "
                               f"{{ {', '.join(tr_s)} }}, {{ {', '.join(ro_s)} }}, {{ {', '.join(sc_s)} }} }},")
        block_lines.append("};")

        filename = f"{name_suffix}.dobjdesc.c"
        if extract_data:
            write_block_file(block_dir, filename, block_lines)
            manifest.append(('block', filename))
        else:
            lines.extend(block_lines)
            lines.append("")
        return pos

    def emit_mobjsub_block(offset, name):
        """Emit a single 0x78-byte MObjSub as a typed C struct initializer.

        Always exactly one struct (description entries are never adjacent).
        Pointer fields (sprites, palettes) become raw u32 chain words; the
        relocation chain rewrites them at link time.
        """
        m = parse_mobjsub(data, offset)
        if m is None:
            return offset

        name_suffix = name if name != '-' else f"MObjSub_0x{offset:04X}"
        var_name = f"{prefix}_{name_suffix}_MObjSub"
        sym_map.add(var_name, offset, offset + MOBJSUB_SIZE)

        # Walk every 4-byte word inside the MObjSub and emit a reloc entry
        # for each word that has a target in the original reloc map. The
        # MObjSub struct in objtypes.h labels +0x4 (sprites) and +0x2C
        # (palettes) as pointer fields, but the actual data has many more —
        # several `unkXX` fields turn out to be pointers in real instances
        # (model files have relocs at +0x08, +0x0C, +0x10, +0x14, etc.).
        # Emitting only the "named" pointers would leave the others off the
        # chain, which would corrupt fixRelocChain's word ordering.
        for word_off in range(0, MOBJSUB_SIZE, 4):
            if (offset + word_off) in reloc_map:
                emit_reloc(reloc_entries, reloc_map, sym_map,
                           offset + word_off,
                           f"{var_name}+0x{word_off:X}")

        block_lines = [f"/* MObjSub: {name} @ 0x{offset:X} */"]
        block_lines.append(f"MObjSub {var_name} = {{")
        block_lines.append(f"\t0x{m['pad00']:04X},")
        block_lines.append(f"\t0x{m['fmt']:02X}, 0x{m['siz']:02X},")
        block_lines.append(f"\t(void**)0x{m['sprites']:08X},")
        block_lines.append(f"\t0x{m['unk08']:04X}, 0x{m['unk0A']:04X}, "
                           f"0x{m['unk0C']:04X}, 0x{m['unk0E']:04X},")
        block_lines.append(f"\t{m['unk10']},")
        block_lines.append(f"\t{format_float(m['trau'], m['trau_raw'])}, "
                           f"{format_float(m['trav'], m['trav_raw'])},")
        block_lines.append(f"\t{format_float(m['scau'], m['scau_raw'])}, "
                           f"{format_float(m['scav'], m['scav_raw'])},")
        block_lines.append(f"\t{format_float(m['unk24'], m['unk24_raw'])}, "
                           f"{format_float(m['unk28'], m['unk28_raw'])},")
        block_lines.append(f"\t(void**)0x{m['palettes']:08X},")
        block_lines.append(f"\t0x{m['flags']:04X},")
        block_lines.append(f"\t0x{m['block_fmt']:02X}, 0x{m['block_siz']:02X},")
        block_lines.append(f"\t0x{m['block_dxt']:04X},")
        block_lines.append(f"\t0x{m['unk36']:04X}, 0x{m['unk38']:04X}, 0x{m['unk3A']:04X},")
        block_lines.append(f"\t{format_float(m['scrollu'], m['scrollu_raw'])}, "
                           f"{format_float(m['scrollv'], m['scrollv_raw'])},")
        block_lines.append(f"\t{format_float(m['unk44'], m['unk44_raw'])}, "
                           f"{format_float(m['unk48'], m['unk48_raw'])},")
        block_lines.append(f"\t0x{m['unk4C']:08X},")

        def color_pack(u32):
            r = (u32 >> 24) & 0xFF
            g = (u32 >> 16) & 0xFF
            b = (u32 >> 8) & 0xFF
            a = u32 & 0xFF
            return (f"{{ {{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X} }} }}")

        block_lines.append(f"\t{color_pack(m['primcolor'])},")
        block_lines.append(f"\t0x{m['prim_l']:02X}, 0x{m['prim_m']:02X}, "
                           f"{{ 0x{(m['prim_pad'] >> 8) & 0xFF:02X}, "
                           f"0x{m['prim_pad'] & 0xFF:02X} }},")
        block_lines.append(f"\t{color_pack(m['envcolor'])},")
        block_lines.append(f"\t{color_pack(m['blendcolor'])},")
        block_lines.append(f"\t{color_pack(m['light1color'])},")
        block_lines.append(f"\t{color_pack(m['light2color'])},")
        block_lines.append(f"\t{m['unk68']}, {m['unk6C']},")
        block_lines.append(f"\t{m['unk70']}, {m['unk74']},")
        block_lines.append("};")

        filename = f"{name_suffix}.mobjsub.c"
        if extract_data:
            write_block_file(block_dir, filename, block_lines)
            manifest.append(('block', filename))
        else:
            lines.extend(block_lines)
            lines.append("")
        return offset + MOBJSUB_SIZE

    def emit_palette(p_offset, p_name):
        """Write a .palette.c file for a 16-color RGBA5551 palette and
        generate a 16x16 PNG preview alongside it.

        The palette symbol is already in sym_map (registered during the
        pre-scan), so reloc entries pointing here resolve to the right name.
        """
        var_name = palette_var_name(p_offset, p_name)

        colors = struct.unpack('>16H', data[p_offset:p_offset + 32])

        block_lines = []
        title = f"{p_name} @ 0x{p_offset:X}" if p_name else f"@ 0x{p_offset:X}"
        block_lines.append(f"/* Palette: {title} (16 colors RGBA5551) */")
        block_lines.append(f"u16 {var_name}[16] = {{")
        for i in range(0, 16, 8):
            row = ", ".join(f"0x{c:04X}" for c in colors[i:i + 8])
            block_lines.append(f"\t{row},")
        block_lines.append("};")

        filename = palette_filename(p_offset, p_name)
        if extract_data:
            write_block_file(block_dir, filename, block_lines)
            png_suffix = p_name if p_name else f"palette_0x{p_offset:04X}"
            png_path = os.path.join(asset_dir, f"{png_suffix}.palette.png")
            write_palette_png(colors, png_path)
            manifest.append(('block', filename))
        else:
            lines.extend(block_lines)
            lines.append("")

    def emit_sprite_with_palettes(sp_off, block_name, info, palettes):
        """Emit a sprite that has palette blocks inside its texture range.

        Original physical layout (preserved byte-for-byte):
            [DL terminator?] [bitmap pixel data]
            [palette 1] [pad] [palette 2] [pad] ... [palette N]
            [bitmap array] [sprite struct]

        We split this into THREE manifest entries:
          1. <Name>_tex.data.c   — DL terminator + u8 _tex[] (just the
                                    bitmap pixels, capped at first palette)
          2. <name>.palette.c    — one per palette (with inter-palette pad)
          3. <Name>.sprite.c     — extern decls + bitmap_array + sprite_struct

        The .sprite.c emits the same Bitmap and Sprite struct fields as the
        single-file path; the only differences are (a) it omits the u8 _tex
        declaration and (b) it has `extern` declarations at the top.

        Returns the byte offset after the sprite struct, or None on failure.
        """
        sp = info['sprite']
        nbm = info['bitmaps_count']
        tiles = info['tiles']
        first_tile = tiles[0]

        if block_name == '-':
            local_name = f"sprite_0x{sp_off:04X}"
        else:
            local_name = block_name
        var_base = f"{prefix}_{local_name}"
        fmt_name = f"{TEX_FMTS.get(sp['bmfmt'], '?')}{TEX_SIZES.get(sp['bmsiz'], '?')}"

        # ── Where does the texture actually end? ──
        first_palette_off = palettes[0][0]
        tex_start = first_tile['tex_off']
        tex_end = first_palette_off  # cap before the first palette

        # The DL terminator (if present) lives 8 bytes before tex_start.
        dl_var = None
        dl_off = first_tile['dl_off']
        if dl_off is not None:
            dl_var = f"{var_base}_dl"
            sym_map.add(dl_var, dl_off, dl_off + 8)

        # ── 1. Tex data file ──
        tex_var = f"{var_base}_tex"
        sym_map.add(tex_var, tex_start, tex_end)

        bm0 = first_tile['bitmap']
        total_h = sum(t['bitmap']['actualHeight'] for t in tiles)
        w_info = (f"{bm0['width']}x{total_h}"
                  if bm0['width'] == bm0['width_img']
                  else f"{bm0['width']}({bm0['width_img']})x{total_h}")
        nbm_info = f", {nbm} tiles" if nbm > 1 else ""

        tex_lines = [
            f"/* Texture data for sprite {local_name} */",
            "/* Split out from .sprite.c so the palette blocks can sit at",
            "   their original physical position between the texture and",
            "   the bitmap array. */",
            "",
            '#include "relocdata_types.h"',
            "",
        ]
        if dl_off is not None:
            tex_lines.append(f"Gfx {dl_var}[] = {{ gsSPEndDisplayList() }};")
            tex_lines.append("")
        tex_lines.append(f"/* Texture: {local_name} ({w_info} {fmt_name}{nbm_info}) */")

        if extract_data:
            inc_filename = f"{local_name}.{fmt_name}.inc.c"
            inc_path = os.path.join(asset_dir, inc_filename)
            png_filename = f"{local_name}.{fmt_name}.png"
            png_path = os.path.join(asset_dir, png_filename)

            # Use the sprite's actual LUT target palette for the PNG (if any).
            # Falls back to the first palette in the sprite's range, then to
            # None (which yields a grayscale-by-index render).
            sprite_palette_bytes = None
            sprite_lut_target = reloc_target(reloc_map, sp_off + 32)
            if sprite_lut_target is not None and sprite_lut_target + 32 <= len(data):
                sprite_palette_bytes = data[sprite_lut_target:sprite_lut_target + 32]
            elif palettes:
                first_p_off = palettes[0][0]
                sprite_palette_bytes = data[first_p_off:first_p_off + 32]

            write_sprite_png(data, tiles, sp['bmfmt'], sp['bmsiz'], png_path,
                             texshuf=bool(sp['attr'] & 0x0200),
                             tlut_data=sprite_palette_bytes)
            write_texture_inc(data, tex_start, tex_end - tex_start, inc_path)
            if os.path.exists(png_path):
                import time
                now = time.time()
                os.utime(png_path, (now - 1, now - 1))
                os.utime(inc_path, (now, now))
            tex_lines.append(f"u8 {tex_var}[] = {{")
            tex_lines.append(f'    #include <{file_subdir}/{inc_filename}>')
            tex_lines.append("};")
        else:
            tex_lines.append(f"u8 {tex_var}[] = {{")
            region = data[tex_start:tex_end]
            for j in range(0, len(region), 16):
                chunk = region[j:j + 16]
                tex_lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")
            tex_lines.append("};")

        tex_filename = f"{local_name}_tex.data.c"
        if extract_data:
            write_block_file(block_dir, tex_filename, tex_lines)
            manifest.append(('block', tex_filename))
        else:
            lines.extend(tex_lines)
            lines.append("")

        # ── 2. Palette blocks (with inter-palette padding) ──
        cursor_local = tex_end
        for p_off, p_name in palettes:
            if cursor_local < p_off:
                pad = p_off - cursor_local
                if extract_data:
                    manifest.append(('pad', pad))
                else:
                    lines.append(f"PAD({pad});")
                    lines.append("")
                cursor_local = p_off
            emit_palette(p_off, p_name)
            cursor_local = p_off + 32

        # Bridge from the last emitted palette to the bitmap array. The
        # remaining bytes might be alignment padding (all-zero) OR more
        # palettes the auto-gen didn't discover (file 341 has 5 extra
        # palettes packed back-to-back after the one Sprite.LUT references).
        # Use emit_pad which falls back to a raw data block when the bytes
        # aren't all zero.
        if cursor_local < info['bitmaps_off']:
            emit_pad(cursor_local, info['bitmaps_off'])
            emit_relocs_in_range(cursor_local, info['bitmaps_off'])

        # ── 3. Sprite file (bitmap_array + sprite struct, with externs) ──
        bm_var = f"{var_base}_bitmaps"
        sym_map.add(bm_var, info['bitmaps_off'], info['bitmaps_off'] + nbm * BITMAP_SIZE)
        sp_var = var_base
        sym_map.add(sp_var, sp_off, sp_off + SPRITE_SIZE)

        sprite_lines = []
        sprite_lines.append(f"/* Sprite: {local_name} ({sp['width']}x{sp['height']} {fmt_name}) */")
        sprite_lines.append("")

        sprite_lines.append(f"Bitmap {bm_var}[] = {{")
        for i, tile in enumerate(tiles):
            bm = tile['bitmap']
            tile_offset = tile['tex_off'] - tex_start
            if tile_offset == 0:
                buf_expr = tex_var
            else:
                buf_expr = f"{tex_var} + 0x{tile_offset:X}"
            sprite_lines.append(
                f"\t{{ {bm['width']}, {bm['width_img']}, {bm['s']}, {bm['t']}, "
                f"{buf_expr}, {bm['actualHeight']}, {bm['LUToffset']} }},")
            bm_buf_off = info['bitmaps_off'] + i * BITMAP_SIZE + 8
            emit_reloc(reloc_entries, reloc_map, sym_map, bm_buf_off,
                       f"{bm_var}+0x{i * BITMAP_SIZE + 8:X}")
        sprite_lines.append("};")
        sprite_lines.append("")

        attr_str = format_attr_flags(sp['attr'])

        emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 32, f"{sp_var}+0x20")
        emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 52, f"{sp_var}+0x34")
        emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 56, f"{sp_var}+0x38")
        emit_reloc(reloc_entries, reloc_map, sym_map, sp_off + 60, f"{sp_var}+0x3C")

        sprite_lines.append(f"Sprite {sp_var} = {{")
        sprite_lines.append(f"\t{sp['x']}, {sp['y']},")
        sprite_lines.append(f"\t{sp['width']}, {sp['height']},")
        sprite_lines.append(f"\t{format_float(sp['scalex'], sp['scalex_raw'])}, {format_float(sp['scaley'], sp['scaley_raw'])},")
        sprite_lines.append(f"\t{sp['expx']}, {sp['expy']},")
        sprite_lines.append(f"\t{attr_str},")
        sprite_lines.append(f"\t{sp['zdepth']},")
        sprite_lines.append(f"\t{sp['red']}, {sp['green']}, {sp['blue']}, {sp['alpha']},")
        sprite_lines.append(f"\t{sp['startTLUT']}, {sp['nTLUT']},")
        sprite_lines.append(f"\t{resolve_lut_expr(sp_off)},")
        sprite_lines.append(f"\t{sp['istart']}, {sp['istep']},")
        sprite_lines.append(f"\t{sp['nbitmaps']}, {sp['ndisplist']},")
        sprite_lines.append(f"\t{sp['bmheight']}, {sp['bmHreal']},")
        sprite_lines.append(f"\t{sp['bmfmt']}, {sp['bmsiz']},")
        sprite_lines.append(f"\t(Bitmap*){bm_var},")
        sprite_lines.append(f"\t(Gfx*)0x{sp['rsp_dl_raw']:08X},")
        sprite_lines.append(f"\t(Gfx*)0x{sp['rsp_dl_next_raw']:08X},")
        sprite_lines.append(f"\t{sp['frac_s']}, {sp['frac_t']},")
        sprite_lines.append("};")
        sprite_lines.append("")

        sprite_filename = f"{local_name}.sprite.c"
        if extract_data:
            sprite_path = os.path.join(block_dir, sprite_filename)
            os.makedirs(block_dir, exist_ok=True)
            with open(sprite_path, 'w') as f:
                f.write(f"/* Sprite: {local_name} */\n\n")
                f.write("\n".join(sprite_lines))
            manifest.append(('block', sprite_filename))
        else:
            lines.extend(sprite_lines)

        return sp_off + SPRITE_SIZE

    def emit_pad(start, end):
        """Emit alignment padding as an explicit PAD manifest entry."""
        if start >= end:
            return
        gap_data = data[start:end]
        if all(b == 0 for b in gap_data):
            if extract_data:
                manifest.append(('pad', end - start))
            else:
                lines.append(f"PAD({end - start});")
                lines.append("")
        else:
            # Non-zero gap data - emit as a raw data block
            emit_data_block(start, end, f"gap_0x{start:04X}")

    valid_entries = [(t, n, o) for t, n, o in entries if o < len(data)]
    oob = len(entries) - len(valid_entries)
    if oob > 0:
        lines.append(f"/* NOTE: {oob} entries beyond file bounds (runtime-expanded data) */")
        lines.append("")

    # ── Palette pre-scan ─────────────────────────────────────────────────
    # Palettes (16-color RGBA5551, 32 bytes each) come from two sources:
    #   1. Description LUT entries — explicitly named palettes the engine
    #      looks up by symbol (e.g. llMNPlayersCommonGateMan1PLUT).
    #   2. Sprite reloc targets — each sprite's `LUT` field points to its
    #      default palette via the relocation chain. Some of these targets
    #      aren't in the descriptions and need synthesized names.
    # Both sets get merged into palette_set keyed by file offset.
    palette_set = {}  # {offset: name_or_None}
    for bt, bn, bo in valid_entries:
        if bt == 'LUT' and bo + 32 <= len(data):
            palette_set[bo] = bn if bn != '-' else None

    for bt, bn, bo in valid_entries:
        if bt != 'Sprite':
            continue
        sp_ck = parse_sprite(data, bo)
        if sp_ck is None:
            continue
        lut_target = reloc_target(reloc_map, bo + 32)
        if lut_target is None:
            continue
        if lut_target + 32 > len(data):
            continue
        if lut_target not in palette_set:
            palette_set[lut_target] = None

    def palette_var_name(p_offset, p_name):
        if p_name:
            return f"{prefix}_{p_name}_palette"
        return f"{prefix}_palette_0x{p_offset:04X}"

    def palette_filename(p_offset, p_name):
        suffix = p_name if p_name else f"palette_0x{p_offset:04X}"
        return f"{suffix}.palette.c"

    # Pre-register palettes in sym_map so reloc emission for sprite LUT
    # fields resolves to the correct palette name.
    for p_off, p_name in palette_set.items():
        sym_map.add(palette_var_name(p_off, p_name), p_off, p_off + 32)

    # ── Sprite range pre-scan ────────────────────────────────────────────
    # For each Sprite description entry, compute the byte range it owns:
    # from its first tile's start (DL terminator if present, else first
    # texture pixel) to the end of the Sprite struct. We use this to
    # detect LUT description entries that fall *inside* a sprite's range
    # — those are emitted by the sprite handler so the original physical
    # layout is preserved.
    sprite_ranges = []  # list of (start, sprite_struct_off, sp_offset_for_lookup)
    for bt, bn, bo in valid_entries:
        if bt != 'Sprite':
            continue
        info = analyze_sprite_block(data, bo, reloc_map)
        if info and info['tiles']:
            first_tile = info['tiles'][0]
            r_start = first_tile['dl_off'] if first_tile['dl_off'] is not None else first_tile['tex_off']
            sprite_ranges.append((r_start, bo + SPRITE_SIZE, bo))

    def lut_inside_sprite(p_offset):
        return any(s <= p_offset < e for s, e, _ in sprite_ranges)

    def palettes_in_range(start, end_exclusive):
        return sorted((po, palette_set[po]) for po in palette_set
                      if start <= po < end_exclusive)

    def resolve_lut_expr(sp_off):
        """Resolve a Sprite's LUT field to a C expression.

        If the LUT field's reloc target points at a known palette, return
        a cast to that palette's variable name (e.g. `(int*)dFoo_GateMan1P_palette`).
        Otherwise fall back to the raw hex literal.
        """
        lut_target_off = reloc_target(reloc_map, sp_off + 32)
        if lut_target_off is not None and lut_target_off in palette_set:
            p_name = palette_set[lut_target_off]
            return f"(int*){palette_var_name(lut_target_off, p_name)}"
        sp = parse_sprite(data, sp_off)
        if sp is not None:
            return f"(int*)0x{sp['LUT']:08X}"
        return "(int*)0x00000000"

    if not valid_entries:
        var_name = prefix
        sym_map.add(var_name, 0, len(data))
        if len(data) % 4 == 0:
            lines.append(f"u32 {var_name}[] = {{")
            wpl = 8
            for i in range(0, len(data), wpl * 4):
                if reloc_map:
                    lines.append(format_u32_line_with_relocs(data, i, 0, wpl, reloc_map))
                else:
                    lines.append(format_u32_line(data, i, wpl))
            lines.append("};")
        else:
            lines.append(f"u8 {var_name}[] = {{")
            for i in range(0, len(data), 16):
                chunk = data[i:i + 16]
                lines.append(f"\t{', '.join(f'0x{b:02X}' for b in chunk)},")
            lines.append("};")
        lines.append("")

        # Collect relocs for no-description files
        for ptr_off in sorted(reloc_map):
            emit_reloc(reloc_entries, reloc_map, sym_map, ptr_off, sym_map.resolve(ptr_off))

        return "\n".join(lines), sym_map, reloc_entries, manifest

    def emit_relocs_in_range(start, end):
        """Emit reloc entries for any reloc pointers in [start, end)."""
        for ptr_off in sorted(reloc_map):
            if start <= ptr_off < end:
                emit_reloc(reloc_entries, reloc_map, sym_map, ptr_off, sym_map.resolve(ptr_off))

    cursor = 0

    for idx, (block_type, block_name, offset) in enumerate(valid_entries):
        next_off = valid_entries[idx + 1][2] if idx + 1 < len(valid_entries) else len(data)

        if block_type == 'Sprite':
            info = analyze_sprite_block(data, offset, reloc_map)
            if info and info['tiles']:
                first_tile = info['tiles'][0]
                dl_start = first_tile['dl_off'] if first_tile['dl_off'] is not None else first_tile['tex_off']
                if cursor < dl_start:
                    emit_pad(cursor, dl_start)
                    emit_relocs_in_range(cursor, dl_start)

                # Are there any palettes inside this sprite's [tex_start,
                # bitmaps_off) range? If so, use the split-emission path so
                # the palettes can sit at their original physical position.
                palettes_here = palettes_in_range(first_tile['tex_off'],
                                                  info['bitmaps_off'])

                if palettes_here:
                    end = emit_sprite_with_palettes(offset, block_name, info,
                                                    palettes_here)
                    if end is not None:
                        # Reloc entries inside the sprite range have been
                        # emitted by the split helpers; nothing to flush here.
                        cursor = end
                        continue
                else:
                    # Pass through the sprite's palette bytes (if any) so CI
                    # sprites whose LUT lives outside their byte range still
                    # get a readable PNG preview.
                    sp_palette_bytes = None
                    sp_lut_target = reloc_target(reloc_map, offset + 32)
                    if sp_lut_target is not None and sp_lut_target + 32 <= len(data):
                        sp_palette_bytes = data[sp_lut_target:sp_lut_target + 32]
                    end = emit_sprite_block(lines, data, offset, prefix, block_name,
                                            reloc_map, sym_map, extract_data,
                                            block_dir, asset_dir, file_subdir, reloc_entries,
                                            lut_expr=resolve_lut_expr(offset),
                                            palette_bytes=sp_palette_bytes)
                    if end is not None:
                        sprite_name = block_name if block_name != '-' else f"sprite_0x{offset:04X}"
                        if extract_data:
                            manifest.append(('block', f"{sprite_name}.sprite.c"))
                        cursor = end
                        continue

            # Fallback: sprite couldn't be analyzed, emit as raw data block
            if cursor < offset:
                emit_pad(cursor, offset)
                emit_relocs_in_range(cursor, offset)
            sp_name = block_name if block_name != '-' else f"sprite_0x{offset:04X}"
            emit_data_block(offset, next_off, sp_name)
            emit_relocs_in_range(offset, next_off)
            cursor = next_off

        elif block_type == 'DObjDesc':
            if cursor < offset:
                emit_pad(cursor, offset)
                emit_relocs_in_range(cursor, offset)
            cursor = emit_dobjdesc_block(offset, block_name, next_off)

        elif block_type == 'MObjSub':
            if cursor < offset:
                emit_pad(cursor, offset)
                emit_relocs_in_range(cursor, offset)
            cursor = emit_mobjsub_block(offset, block_name)

        elif block_type == 'LUT':
            # If this LUT is inside a sprite range it was already emitted
            # by emit_sprite_with_palettes; skip it here.
            if lut_inside_sprite(offset):
                continue
            # Standalone palette (rare): pad up to it and emit directly.
            if cursor < offset:
                emit_pad(cursor, offset)
                emit_relocs_in_range(cursor, offset)
            emit_palette(offset, block_name if block_name != '-' else None)
            cursor = offset + 32

        else:
            if cursor < offset:
                emit_pad(cursor, offset)
                emit_relocs_in_range(cursor, offset)

            rl = f"{block_name}_{block_type}" if block_name != '-' else f"{block_type}_0x{offset:04X}"
            rl = re.sub(r'[^a-zA-Z0-9_]', '_', rl)
            emit_data_block(offset, next_off, rl)
            emit_relocs_in_range(offset, next_off)
            cursor = next_off

    # Trailing data
    if cursor < len(data):
        emit_pad(cursor, len(data))
        emit_relocs_in_range(cursor, len(data))

    return "\n".join(lines), sym_map, reloc_entries, manifest


def write_reloc_file(file_id, reloc_entries, reloc_path):
    lines = []
    lines.append(f"# Relocation metadata for file {file_id}")
    lines.append(f"# Format: <type> <ptr_label> <target_label>")
    lines.append(f"# Labels are C variable names resolved via .o symbol table")
    for chain_type, ptr_label, target_label in reloc_entries:
        lines.append(f"{chain_type} {ptr_label} {target_label}")
    with open(reloc_path, 'w') as f:
        f.write("\n".join(lines) + "\n")


def main():
    parser = argparse.ArgumentParser(description="Generate C source from relocData binary")
    parser.add_argument("file_id", type=int)
    parser.add_argument("--descriptions", "-d", default=None)
    parser.add_argument("--output", "-o", default=None)
    parser.add_argument("--version", "-v", default="us")
    parser.add_argument("--extract-data", "-e", action="store_true")
    args = parser.parse_args()

    file_id = args.file_id
    desc_path = args.descriptions or os.path.join(SCRIPT_DIR, f"relocFileDescriptions.{args.version}.txt")

    bin_path = get_binary_path(file_id)
    if not os.path.exists(bin_path):
        print(f"Error: {bin_path} not found", file=sys.stderr)
        sys.exit(1)
    with open(bin_path, 'rb') as f:
        data = f.read()

    csv_entry = parse_csv_entry(file_id)
    reloc_map = build_reloc_map(data, csv_entry)

    file_id_to_name = parse_file_id_to_name(desc_path)
    file_name = file_id_to_name.get(file_id, "")
    entries = parse_file_descriptions(desc_path, file_id)

    if args.output:
        output_path = args.output
    else:
        suffix = f"_{file_name}" if file_name else ""
        output_path = os.path.join(PROJECT_DIR, "src", "relocData", f"{file_id}{suffix}.c")
    output_dir = os.path.dirname(output_path)

    c_source, sym_map, reloc_entries, manifest = generate(
        file_id, data, file_name, entries, reloc_map, csv_entry,
        extract_data=args.extract_data, output_dir=output_dir)

    os.makedirs(output_dir, exist_ok=True)

    valid_entries = [(t, n, o) for t, n, o in entries if o < len(data)]

    # If --extract-data and we have any blocks in the manifest, write either
    # a .spritelist (if the file is sprite-only with auto-computable pads)
    # or a .manifest (the rich format for mixed-content files).
    # Files with no entries still get a single .c master.
    if args.extract_data and manifest:
        block_entries = [p for k, p in manifest if k == 'block']
        sprite_only = (len(block_entries) > 0
                       and all(b.endswith('.sprite.c') for b in block_entries))

        if sprite_only:
            # Write a simple .spritelist (pads get auto-computed from sprite sizes)
            spritelist_path = os.path.splitext(output_path)[0] + ".spritelist"
            sprite_names = [b[:-len('.sprite.c')] for b in block_entries]
            with open(spritelist_path, 'w') as f:
                f.write(f"# Sprite manifest for relocData file {file_id}")
                if file_name:
                    f.write(f" ({file_name})")
                f.write("\n")
                f.write(f"# Edit to add/remove/reorder sprites; alignment is "
                        f"computed automatically by tools/genRelocMaster.py.\n")
                f.write("\n")
                for name in sprite_names:
                    f.write(f"{name}\n")
            if os.path.exists(output_path):
                os.remove(output_path)
            manifest_path = os.path.splitext(output_path)[0] + ".manifest"
            if os.path.exists(manifest_path):
                os.remove(manifest_path)
            primary_artifact = spritelist_path
        else:
            # Write the rich manifest format
            manifest_path = os.path.splitext(output_path)[0] + ".manifest"
            with open(manifest_path, 'w') as f:
                f.write(f"# Block manifest for relocData file {file_id}")
                if file_name:
                    f.write(f" ({file_name})")
                f.write("\n")
                f.write(f"# Each line is either a block filename or 'pad N'.\n")
                f.write(f"# The master .c file is generated from this manifest "
                        f"at build time.\n")
                f.write("\n")
                for kind, payload in manifest:
                    if kind == 'block':
                        f.write(f"{payload}\n")
                    elif kind == 'pad':
                        f.write(f"pad {payload}\n")
            if os.path.exists(output_path):
                os.remove(output_path)
            spritelist_path = os.path.splitext(output_path)[0] + ".spritelist"
            if os.path.exists(spritelist_path):
                os.remove(spritelist_path)
            primary_artifact = manifest_path
    else:
        with open(output_path, 'w') as f:
            f.write(c_source)
        manifest_path = os.path.splitext(output_path)[0] + ".manifest"
        if os.path.exists(manifest_path):
            os.remove(manifest_path)
        spritelist_path = os.path.splitext(output_path)[0] + ".spritelist"
        if os.path.exists(spritelist_path):
            os.remove(spritelist_path)
        primary_artifact = output_path

    reloc_path = os.path.splitext(output_path)[0] + ".reloc"
    write_reloc_file(file_id, reloc_entries, reloc_path)

    print(f"Generated: {primary_artifact} ({len(data)} bytes)")
    if entries:
        print(f"  {len(valid_entries)}/{len(entries)} description entries within file bounds")
    print(f"  {len(reloc_entries)} relocation entries")
    if manifest:
        block_count = sum(1 for k, _ in manifest if k == 'block')
        pad_count = sum(1 for k, _ in manifest if k == 'pad')
        print(f"  Manifest: {block_count} blocks, {pad_count} pads")
    print(f"  Reloc: {reloc_path}")


if __name__ == "__main__":
    main()
