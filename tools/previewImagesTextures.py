#!/usr/bin/env python3
"""
Generate PNG previews for LUT and Tex blocks declared in any relocData .c file.

Parses array declarations in src/relocData/<fid>_<Name>.c to discover LUT/Tex
blocks by name convention (`d<Name>_LUT_0xXXXX`, `d<Name>_Tex_0xXXXX`), then
renders each texture as a PNG using the most-recently-declared LUT as palette.

An optional structured annotation immediately above a Tex decl can override
the inferred format/dimensions:

    /* @tex fmt=CI4 dim=96x16 lut=dITCommonObject_LUT_0x0058 */
    u8 dITCommonObject_Tex_0x0080[0x190] = { ... };

Output: build/src/relocData/<Name>/<Tex_0xXXXX>.<fmt>.png
        build/src/relocData/<Name>/<LUT_0xXXXX>.lut.png (16×1 palette strip)

Usage:
    tools/previewImagesTextures.py <fid> [<fid> ...]
    tools/previewImagesTextures.py --all
"""

import argparse
import os
import re
import struct
import subprocess
import sys

from n64img.image import CI4, CI8, I4, I8, IA4, IA8, IA16, RGBA16, RGBA32

# Map fmt token -> (n64img class, bits per pixel).
_FMT_INFO = {
	"CI4":    (CI4,    4),
	"CI8":    (CI8,    8),
	"I4":     (I4,     4),
	"I8":     (I8,     8),
	"IA4":    (IA4,    4),
	"IA8":    (IA8,    8),
	"IA16":   (IA16,  16),
	"RGBA16": (RGBA16, 16),
	"RGBA32": (RGBA32, 32),
}

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
# Default to the US tree; main() rebinds via _bind_version() once --version is parsed.
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")


def _bind_version(version):
    global ASSETS_DIR, BUILD_DIR
    ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", version, "relocData")
    BUILD_DIR = os.path.join(PROJECT_DIR, "build", version, "src", "relocData")

N64_WIDTHS = [8, 16, 24, 32, 48, 64, 96, 128, 160, 192, 256]


def rgba5551_to_palette(lut_bytes, entries):
    palette = []
    for i in range(entries):
        if (i + 1) * 2 > len(lut_bytes):
            break
        val = struct.unpack(">H", lut_bytes[i*2:(i+1)*2])[0]
        r = ((val >> 11) & 0x1F) << 3
        g = ((val >>  6) & 0x1F) << 3
        b = ((val >>  1) & 0x1F) << 3
        a = 255 if (val & 1) else 0
        palette.append((r, g, b, a))
    while len(palette) < entries:
        palette.append((0, 0, 0, 0))
    return palette


def guess_dims(pixel_count):
    best, best_ratio = (pixel_count, 1), 999
    for w in N64_WIDTHS:
        if pixel_count % w != 0:
            continue
        h = pixel_count // w
        ratio = max(w / h, h / w)
        if ratio < best_ratio:
            best_ratio = ratio
            best = (w, h)
    return best


def parse_annotation(line):
    m = re.search(r"/\*\s*@(\w+)\s+([^*]+?)\*/", line)
    if not m:
        return None, {}
    tag = m.group(1)
    kvs = {}
    for kv in re.finditer(r"(\w+)=(\S+)", m.group(2)):
        kvs[kv.group(1)] = kv.group(2)
    return tag, kvs


def parse_c_blocks(text, target_name):
    """Walk the .c source and return ordered blocks:
        [{kind, name, off, size, ann}, ...]
    where kind is one of lut/tex/vtx/gfx/other.
    ann carries structured `@<tag>` metadata parsed from the line above."""
    lines = text.split("\n")
    blocks = []
    prefix = f"d{target_name}_"
    decl_re = re.compile(
        rf"^\s*(u8|u16|u32|Vtx|Gfx|DObjDesc|void\*?|f32)\s+({re.escape(prefix)}\w+)"
        rf"(?:\[(0x[0-9A-Fa-f]+|\d+)\])?\s*="
    )
    for i, ln in enumerate(lines):
        m = decl_re.match(ln)
        if not m:
            continue
        ctype, name, size_expr = m.group(1), m.group(2), m.group(3)
        ann_tag, ann_kvs = (None, {})
        if i > 0:
            ann_tag, ann_kvs = parse_annotation(lines[i - 1])
        off_matches = re.findall(r"_0[xX]([0-9A-Fa-f]+)", name)
        off = int(off_matches[-1], 16) if off_matches else None
        short = name[len(prefix):]
        lower = short.lower()
        if ("_lut_" in lower or "_tlut_" in lower or "_palette" in lower
                or lower.startswith(("lut_", "tlut_", "palette_"))):
            # Recognise both the `<File>_Lut_0xN` and the `<File>_palette_0xN`
            # prefix form — split-out palette frames inside model data
            # files use the latter (e.g. dLuigiModel_palette_0x7548).
            kind = "lut"
        elif re.search(r"(?:^|_)tex_0x[0-9a-f]+", lower) or "tex_pool" in lower:
            # Match the `Tex_0xN` per-texture naming convention. Atlas-style
            # blobs (`*_tex_tiles`, `*_tex_atlas`) aren't single textures so
            # we skip them — they can't render as one PNG anyway.
            kind = "tex"
        elif ctype == "Vtx":
            kind = "vtx"
        elif ctype == "Gfx":
            kind = "gfx"
        else:
            kind = "other"
        size = None
        if size_expr is not None:
            size = int(size_expr, 16) if size_expr.startswith("0x") else int(size_expr)
            if ctype == "u16":
                size *= 2
            elif ctype == "u32":
                size *= 4
        blocks.append({
            "kind": kind,
            "ctype": ctype,
            "name": name,
            "short": short,
            "off": off,
            "size": size,
            "ann_tag": ann_tag,
            "ann": ann_kvs,
            "line": i + 1,
        })
    return blocks


def infer_tex_format(block, prose_comment):
    """From an annotation or prose comment, infer (fmt, width, height).
    Returns None if we can't decide."""
    ann = block["ann"]
    annotated_fmt = None
    if block["ann_tag"] == "tex":
        annotated_fmt = ann.get("fmt")
        dim = ann.get("dim", "")
        wh = re.match(r"(\d+)x(\d+)", dim)
        if wh:
            return annotated_fmt or "CI4", int(wh.group(1)), int(wh.group(2))
    # prose fallback: "(texture pixels — CI4_96x16)"
    m = re.search(r"CI(4|8)_(\d+)x(\d+)", prose_comment or "")
    if m:
        return f"CI{m.group(1)}", int(m.group(2)), int(m.group(3))
    # Guess from size; preserve the annotated fmt if one was given (otherwise
    # default to CI4). bpp determines the pixel-count multiplier.
    if block["size"]:
        fmt = annotated_fmt or "CI4"
        bpp = {"CI4": 4, "CI8": 8, "I4": 4, "I8": 8, "IA4": 4, "IA8": 8,
               "IA16": 16, "RGBA16": 16, "RGBA32": 32}.get(fmt, 4)
        pixels = block["size"] * 8 // bpp
        w, h = guess_dims(pixels)
        return fmt, w, h
    return None


def find_c_file(fid):
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            return os.path.join(RELOC_DIR, fn), m.group(1)
    return None, None


def process_file(fid):
    c_path, target_name = find_c_file(fid)
    if c_path is None:
        return

    data_path = None
    for suf in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{fid}{suf}")
        if os.path.exists(p):
            data_path = p
            break
    if data_path is None:
        return
    with open(data_path, "rb") as f:
        data = f.read()

    with open(c_path) as f:
        text = f.read()
    lines = text.split("\n")

    blocks = parse_c_blocks(text, target_name)
    # Resolve each block's true file offset via `nm` on the compiled .o,
    # since `_0xN` parsed from the symbol name is only the trail-relative
    # offset for blocks split out of trailing regions.
    o_path = os.path.join(BUILD_DIR, ".build", f"{fid}.o")
    if os.path.exists(o_path):
        nm_out = subprocess.run(["nm", o_path],
                                capture_output=True, text=True, check=True).stdout
        sym_off = {}
        for ln in nm_out.splitlines():
            parts = ln.split()
            if len(parts) >= 3 and parts[1] in ("D", "d"):
                sym_off[parts[2]] = int(parts[0], 16)
        for b in blocks:
            if b["name"] in sym_off:
                b["off"] = sym_off[b["name"]]

    luts = {b["name"]: b for b in blocks if b["kind"] == "lut"}
    textures = [b for b in blocks if b["kind"] == "tex"]
    if not textures and not luts:
        return

    out_dir = os.path.join(BUILD_DIR, target_name)
    os.makedirs(out_dir, exist_ok=True)

    lut_count = 0
    for name, b in luts.items():
        if b["off"] is None or b["size"] is None:
            continue
        entries = b["size"] // 2
        palette = rgba5551_to_palette(data[b["off"]:b["off"]+b["size"]], entries)
        png_path = os.path.join(out_dir, f"LUT_0x{b['off']:04X}.lut.png")
        raw = bytes(range(entries)) if entries <= 256 else bytes((i & 0xFF) for i in range(entries))
        img = CI8(raw, entries, 1) if entries > 16 else CI4(_pack_ci4(entries), entries, 1)
        img.palette = palette
        img.write(png_path)
        lut_count += 1

    tex_count = 0
    sorted_blocks = sorted([b for b in blocks if b["kind"] in ("lut", "tex")],
                           key=lambda b: b["off"] or 0)
    current_lut_name = None
    for b in sorted_blocks:
        if b["kind"] == "lut":
            current_lut_name = b["name"]
            continue
        if b["off"] is None or not b["size"]:
            continue
        prose = lines[b["line"] - 2] if b["line"] >= 2 else ""
        info = infer_tex_format(b, prose)
        if info is None:
            continue
        fmt, w, h = info
        fmt_info = _FMT_INFO.get(fmt)
        if fmt_info is None:
            continue
        img_cls, bpp = fmt_info
        expected_bytes = (w * h * bpp + 7) // 8
        tex_bytes = data[b["off"]:b["off"] + b["size"]]
        if len(tex_bytes) < expected_bytes:
            # annotated dims don't fit the array; re-guess from actual size
            # (CI-only fallback — non-CI formats expect explicit dims).
            if fmt in ("CI4", "CI8"):
                pixels = len(tex_bytes) * (2 if fmt == "CI4" else 1)
                w, h = guess_dims(pixels)
                expected_bytes = (w * h * bpp + 7) // 8
                if len(tex_bytes) < expected_bytes or w * h == 0:
                    continue
            else:
                continue
        img = img_cls(tex_bytes[:expected_bytes], w, h)
        png_suffix = ""
        if fmt in ("CI4", "CI8"):
            ann_lut = b["ann"].get("lut")
            lut_name = ann_lut or current_lut_name
            entries = 16 if fmt == "CI4" else 256
            lut_b = luts.get(lut_name)
            if lut_b and lut_b["off"] is not None and lut_b["size"]:
                lut_bytes = data[lut_b["off"]:lut_b["off"] + lut_b["size"]]
                img.palette = rgba5551_to_palette(lut_bytes, entries)
            else:
                # No usable LUT in scope (sibling MObjSub.palettes is NULL,
                # in another file, or the LUT decl was inline-init without
                # an offset). Render with a grayscale fallback so the
                # texture's spatial structure is at least visible.
                img.palette = [(i * 255 // (entries - 1),) * 3 + (255,) for i in range(entries)]
                png_suffix = ".nolut"
        png_path = os.path.join(out_dir, f"Tex_0x{b['off']:04X}.{fmt.lower()}{png_suffix}.png")
        img.write(png_path)
        tex_count += 1

    if tex_count + lut_count > 0:
        print(f"fid {fid} ({target_name}): {tex_count} textures + {lut_count} LUTs → {out_dir}/")


def _pack_ci4(entries):
    """Pack 0..entries-1 indices into CI4 (2 per byte)."""
    out = bytearray()
    for i in range(0, entries, 2):
        hi = i & 0xF
        lo = (i + 1) & 0xF if i + 1 < entries else 0
        out.append((hi << 4) | lo)
    return bytes(out)


def discover_all():
    fids = []
    for fn in os.listdir(RELOC_DIR):
        m = re.match(r"^(\d+)_\w+\.c$", fn)
        if m:
            fids.append(int(m.group(1)))
    return sorted(fids)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--version", default="us", choices=("us", "jp"),
                    help="Selects assets/<v>/relocData/")
    args = ap.parse_args()
    _bind_version(args.version)

    if args.all:
        targets = discover_all()
    elif args.file_ids:
        targets = args.file_ids
    else:
        ap.print_help()
        sys.exit(1)

    for fid in targets:
        try:
            process_file(fid)
        except Exception as e:
            print(f"fid {fid}: ERROR {e}", file=sys.stderr)


if __name__ == "__main__":
    main()
