#!/usr/bin/env python3
"""Regenerate `.inc.c` companions for typed relocData blocks from the ROM.

For each converted relocData file, walks its manifest in order, uses the
committed wrapper declarations to compute per-block offsets/sizes, and
writes the raw bytes of every Vtx / LUT / Tex wrapper to a fresh
`build/src/relocData/<Name>/<block>.{vtx,palette,tex}.inc.c`.

The committed wrappers stay small and sourceable — they declare the type
and the array count — while the copyrighted raw bytes are re-derived
from `assets/relocData/<fid>.vpk0.bin` every time `make extract` runs.
"""

import argparse
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
SRC_RELOC = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_RELOC = os.path.join(PROJECT_DIR, "build", "src", "relocData")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")

sys.path.insert(0, SCRIPT_DIR)
from genRelocMaster import parse_manifest, compute_block_size

try:
    import pygfxd
    _HAS_PYGFXD = True
except ImportError:
    _HAS_PYGFXD = False

try:
    import n64img.image as _n64img
    _HAS_N64IMG = True
except ImportError:
    _HAS_N64IMG = False


def bin_path(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSET_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            return p
    return None


def manifest_for(fid):
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f"{fid}_") and fn.endswith(".manifest"):
            return os.path.join(SRC_RELOC, fn)
    return None


def sub_name_of(manifest_path):
    """Extract `<Name>` from `src/relocData/<fid>_<Name>.manifest`."""
    name = os.path.basename(manifest_path)[:-len(".manifest")]
    return name.split("_", 1)[1] if "_" in name else name


def wrapper_inc_target(block_filename):
    """Return the inc.c filename the wrapper would expect for this block.
    None if the block isn't a wrappable type."""
    if block_filename.endswith('.vtx.c'):
        return block_filename[:-len('.vtx.c')] + '.vtx.inc.c'
    if block_filename.endswith('.palette.c'):
        return block_filename[:-len('.palette.c')] + '.palette.inc.c'
    if block_filename.endswith('.dl.c'):
        return block_filename[:-len('.dl.c')] + '.dl.inc.c'
    if block_filename.endswith('.data.c'):
        base = block_filename[:-len('.data.c')]
        if block_filename.startswith('Tex_'):
            return base + '.tex.inc.c'
        return base + '.data.inc.c'
    return None


def scan_dl_for_tex_meta(data, dl_start, dl_end):
    """Walk an F3DEX2 DL region looking for SETTIMG/SETTILESIZE/LOADBLOCK
    triples, LOADTLUT, and SETTILE, and return a map
        {tex_target_offset: (fmt, siz, width, height, palette_target_offset)}

    where fmt ∈ 0..4 (RGBA/YUV/CI/IA/I) and siz ∈ 0..3 (4/8/16/32-bit)
    are taken from the *render* tile's SETTILE (tile 0 — byte-accurate
    rendering format) rather than SETTIMG (which usually reflects the
    LOAD tile's DMA format, e.g. CI16 for loading a CI4 block fast).
    palette_target_offset is the file-relative byte offset of the last
    palette SETTIMG seen (for CI textures) or None.
    """
    meta = {}
    pending_settimg = None        # (addr,) — load-tile SETTIMG
    last_settilesize = None       # (width, height)
    last_palette_addr = None
    render_tile_fmt = None        # (fmt, siz) for the render tile (tile 0)

    pos = dl_start
    while pos + 8 <= dl_end:
        w0, w1 = struct.unpack('>II', data[pos:pos + 8])
        op = (w0 >> 24) & 0xFF
        if op == 0xFD:  # G_SETTIMG
            addr = (w1 & 0xFFFF) * 4
            pending_settimg = addr
        elif op == 0xF5:  # G_SETTILE — track render tile (tile index 0)
            fmt_nibble = (w0 >> 21) & 0x7   # fff
            siz_field = (w0 >> 19) & 0x3    # ii
            tile = (w1 >> 24) & 0x7
            if tile == 0:
                render_tile_fmt = (fmt_nibble, siz_field)
        elif op == 0xF2:  # G_SETTILESIZE
            w_raw = (w1 >> 12) & 0xFFF
            h_raw = w1 & 0xFFF
            width = (w_raw >> 2) + 1
            height = (h_raw >> 2) + 1
            last_settilesize = (width, height)
        elif op == 0xF0:  # G_LOADTLUT — the pending SETTIMG was a palette
            if pending_settimg is not None:
                last_palette_addr = pending_settimg
            pending_settimg = None
        elif op == 0xF3:  # G_LOADBLOCK — the pending SETTIMG was a texture
            if (pending_settimg is not None and last_settilesize is not None
                    and render_tile_fmt is not None):
                addr = pending_settimg
                fmt, siz = render_tile_fmt
                w, h = last_settilesize
                meta[addr] = (fmt, siz, w, h, last_palette_addr)
            pending_settimg = None
        elif op == 0xDF:
            break
        pos += 8
    return meta


def n64img_class_for(fmt, siz):
    """Map F3DEX2 fmt/siz pair to an `n64img.image.*` class. Returns
    None if n64img doesn't support the combination."""
    if not _HAS_N64IMG:
        return None
    # fmt: 0=RGBA, 1=YUV, 2=CI, 3=IA, 4=I
    # siz: 0=4b, 1=8b, 2=16b, 3=32b
    mapping = {
        (0, 2): _n64img.RGBA16,
        (0, 3): _n64img.RGBA32,
        (2, 0): _n64img.CI4,
        (2, 1): _n64img.CI8,
        (3, 0): _n64img.IA4,
        (3, 1): _n64img.IA8,
        (3, 2): _n64img.IA16,
        (4, 0): _n64img.I4,
        (4, 1): _n64img.I8,
    }
    return mapping.get((fmt, siz))


def wrapper_is_include_form(block_path):
    """Return True if the committed wrapper uses the `#include <...inc.c>`
    form (so we should regenerate its companion inc.c from the ROM).
    Files that still hold typed struct initializers (MPGroundData etc.)
    don't have an inc.c and should be left alone."""
    try:
        with open(block_path) as f:
            content = f.read()
    except OSError:
        return False
    return bool(re.search(r'#include\s+[<"][^>"]+\.inc\.c[>"]', content))


def write_lines(path, lines):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, 'w') as f:
        f.write("\n".join(lines) + "\n")


def emit_vtx(data, start, count, path):
    lines = []
    for i in range(count):
        off = start + i * 16
        if off + 16 > len(data):
            break
        v = data[off:off + 16]
        x, y, z = struct.unpack('>3h', v[0:6])
        flag = struct.unpack('>H', v[6:8])[0]
        s, t = struct.unpack('>2h', v[8:12])
        r, g, b, a = v[12], v[13], v[14], v[15]
        lines.append(
            f"\t{{ {{ {{ {x}, {y}, {z} }}, 0x{flag:04X}, "
            f"{{ {s}, {t} }}, {{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X} }} }} }},")
    write_lines(path, lines)


def emit_palette(data, start, path):
    colors = struct.unpack('>16H', data[start:start + 32])
    lines = [
        "\t" + ", ".join(f"0x{c:04X}" for c in colors[0:8]) + ",",
        "\t" + ", ".join(f"0x{c:04X}" for c in colors[8:16]) + ",",
    ]
    write_lines(path, lines)


def emit_tex(data, start, size, path):
    lines = []
    for i in range(0, size, 16):
        end = min(i + 16, size)
        chunk = data[start + i:start + end]
        lines.append("\t" + ", ".join(f"0x{b:02X}" for b in chunk) + ",")
    write_lines(path, lines)


def _emit_dl_raw(data, start, size, path):
    """Emit a DL inc.c as raw `{ { w0, w1 } },` word pairs."""
    lines = []
    for i in range(0, size, 8):
        w0, w1 = struct.unpack('>II', data[start + i:start + i + 8])
        lines.append(f"\t{{ {{ 0x{w0:08X}, 0x{w1:08X} }} }},")
    write_lines(path, lines)


def _dl_is_pygfxd_safe(data, start, size):
    """Return False if the byte stream contains patterns pygfxd's
    decoder can't roundtrip byte-identically back through gbi.h's
    encoders. The main offender is a 0x00-prefixed word0 with nonzero
    lower bytes: pygfxd emits it as `gsDPNoOpTag(w1)` which re-encodes
    to `word0 == 0`, dropping the lower-byte data.
    """
    for i in range(0, size, 8):
        if i + 8 > size:
            return False
        w0 = struct.unpack('>I', data[start + i:start + i + 4])[0]
        if (w0 >> 24) == 0x00 and w0 != 0:
            return False
    return True


def emit_dl(data, start, size, path):
    """Disassemble an F3DEX2 DL region into readable `gsSP* / gsDP*`
    macro calls using pygfxd, falling back to raw `{ { w0, w1 } }` word
    pairs for blocks that contain command patterns pygfxd can't
    roundtrip (or when pygfxd isn't available).

    For macro output, chain-encoded pointer arguments (SPVertex / SETTIMG
    / etc.) stay as literal hex — they still get patched to a real
    address at link time by fixRelocChain.
    """
    os.makedirs(os.path.dirname(path), exist_ok=True)

    if _HAS_PYGFXD and _dl_is_pygfxd_safe(data, start, size):
        dl_bytes = data[start:start + size]
        out_buf = pygfxd.gfxd_output_buffer(b'\0' * (size * 40 + 1024),
                                             size * 40 + 1024)
        pygfxd.gfxd_input_buffer(dl_bytes)
        pygfxd.gfxd_target(pygfxd.gfxd_f3dex2)
        pygfxd.gfxd_endian(pygfxd.GfxdEndian.big, 4)

        def macro_fn():
            pygfxd.gfxd_puts('\t')
            pygfxd.gfxd_macro_dflt()
            pygfxd.gfxd_puts(',\n')
            return 0

        pygfxd.gfxd_macro_fn(macro_fn)
        pygfxd.gfxd_execute()
        body = pygfxd.gfxd_buffer_to_string(out_buf)
        with open(path, 'w') as f:
            f.write(body)
        return

    _emit_dl_raw(data, start, size, path)


def process_fid(fid):
    manifest = manifest_for(fid)
    if manifest is None:
        return 0
    binp = bin_path(fid)
    if binp is None:
        return 0
    with open(binp, 'rb') as f:
        data = f.read()

    sub = sub_name_of(manifest)
    src_sub_dir = os.path.join(SRC_RELOC, sub)
    build_sub_dir = os.path.join(BUILD_RELOC, sub)
    search_paths = [SRC_RELOC, BUILD_RELOC]

    entries = parse_manifest(manifest)

    # First pass: record each block's offset + size and, for .dl.c blocks,
    # scan their F3DEX2 command stream to recover Tex format metadata for
    # the second pass (so we can emit PNG previews alongside Tex inc.c).
    block_info = []  # (payload, offset, size)
    tex_meta = {}    # tex_offset → (fmt, siz, width, height, palette_offset)
    offset = 0
    for kind, payload in entries:
        if kind == 'pad':
            offset += payload
            continue
        block_path = os.path.join(src_sub_dir, payload)
        size = compute_block_size(block_path, search_paths=search_paths)
        block_info.append((payload, offset, size))
        if payload.endswith('.dl.c'):
            tex_meta.update(scan_dl_for_tex_meta(data, offset, offset + size))
        offset += size

    # Second pass: emit inc.c / PNG outputs for wrapper blocks.
    emitted = 0
    for payload, off, size in block_info:
        block_path = os.path.join(src_sub_dir, payload)
        inc_name = wrapper_inc_target(payload)
        if inc_name is None or not wrapper_is_include_form(block_path):
            continue
        inc_path = os.path.join(build_sub_dir, inc_name)
        if payload.endswith('.vtx.c'):
            count = size // 16
            emit_vtx(data, off, count, inc_path)
        elif payload.endswith('.palette.c'):
            emit_palette(data, off, inc_path)
        elif payload.endswith('.dl.c'):
            emit_dl(data, off, size, inc_path)
        elif payload.endswith('.data.c'):
            emit_tex(data, off, size, inc_path)
            if _HAS_N64IMG and payload.startswith('Tex_'):
                emit_tex_png(data, off, size, tex_meta, block_sub_dir=build_sub_dir,
                             payload=payload)
        emitted += 1
    return emitted


def _expected_tex_bytes(fmt, siz, width, height):
    """Bytes needed to represent a width*height texture at the given
    fmt/siz. Returns None if the format isn't understood."""
    pixels = width * height
    if siz == 0:  # 4bpp
        return (pixels + 1) // 2
    if siz == 1:  # 8bpp
        return pixels
    if siz == 2:  # 16bpp
        return pixels * 2
    if siz == 3:  # 32bpp
        return pixels * 4
    return None


def emit_tex_png(data, offset, size, tex_meta, block_sub_dir, payload):
    """If the metadata map has a format entry for this Tex block, render
    it as a PNG alongside the inc.c using n64img."""
    meta = tex_meta.get(offset)
    if meta is None:
        return
    fmt, siz, width, height, palette_offset = meta
    img_cls = n64img_class_for(fmt, siz)
    if img_cls is None:
        return
    # SETTILESIZE can outsize the actual block (the DL may load with a
    # line stride larger than the stored texture). Skip if the
    # dimensions don't fit in the committed block size.
    expected = _expected_tex_bytes(fmt, siz, width, height)
    if expected is None or expected > size:
        return
    tex_bytes = data[offset:offset + expected]
    try:
        img = img_cls(tex_bytes, width, height)
    except Exception:
        return
    if fmt == 2 and palette_offset is not None:
        img.set_palette(data[palette_offset:palette_offset + 32])
    png_name = payload[:-len('.data.c')] + '.png'
    png_path = os.path.join(block_sub_dir, png_name)
    os.makedirs(block_sub_dir, exist_ok=True)
    try:
        img.write(png_path)
    except Exception:
        # Clean up a partially-written file so a stale 0-byte doesn't linger
        if os.path.exists(png_path) and os.path.getsize(png_path) == 0:
            os.remove(png_path)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int,
                    help='File IDs to extract; default = every manifest on disk.')
    args = ap.parse_args()

    if args.fids:
        targets = args.fids
    else:
        targets = []
        for fn in sorted(os.listdir(SRC_RELOC)):
            if fn.endswith('.manifest'):
                fid_str = fn.split('_', 1)[0]
                if fid_str.isdigit():
                    targets.append(int(fid_str))

    total = 0
    for fid in targets:
        n = process_fid(fid)
        if n:
            total += n
    print(f"extractRelocInc: wrote {total} inc.c files across {len(targets)} fids")


if __name__ == '__main__':
    main()
