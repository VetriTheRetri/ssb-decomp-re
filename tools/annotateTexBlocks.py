#!/usr/bin/env python3
"""
Add `/* @tex fmt=<FMT> dim=<W>x<H> lut=<LUT_SYM> */` annotations above
`u8 dXxx_Tex_0xNNNN[…]` declarations that don't already carry one.

Walks the expanded view at `build/src/relocData/<fid>_<Name>.c`
(produced by `expandRelocFile.py`), parses every `Gfx dXxx_…[N]` body
for the five-command texture-load sequence:

    gsDPSetTile     (G_IM_FMT_<FMT>, G_IM_SIZ_<SIZ>b, …)        ← format
    gsDPSetTextureImage (G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, LUT)   ← palette load
    gsDPLoadTLUTCmd …                                            ← palette commit
    gsDPSetTileSize (G_TX_RENDERTILE, 0, 0, lrs, lrt)            ← W=lrs/4+1, H=lrt/4+1
    gsDPSetTextureImage (G_IM_FMT_CI,   G_IM_SIZ_16b, 1, TEX)    ← texture target
    gsDPLoadBlock | gsDPLoadTile                                  ← texture commit

The format comes from the latest `gsDPSetTile` before the Tex's
`gsDPSetTextureImage` (the SetTextureImage's fmt/siz describe the
load buffer, not the texture). The LUT is the symbol from the most
recent `gsDPSetTextureImage(... LUT)` followed by `gsDPLoadTLUTCmd`,
within the same Gfx body. Dimensions come from `gsDPLoadBlock` — the
*stored* size — using the lrs (texel count − 1) and dxt (row-stride
encoding) parameters. `gsDPSetTileSize` (the *render* size) is kept
as a fallback for cases where LoadBlock decoding fails (dxt=0, etc.);
when the render tile is bigger than the load (mirror/scaled rendering),
relying on it produces dim values that exceed the stored bytes and the
PNG previewer falls back to guess_dims, yielding garbage like 16×145
instead of the actual 32×72.

Idempotent: skips Tex decls that already carry a `/* @tex … */`
comment immediately above. Doesn't change bytes.

Usage:
    tools/annotateTexBlocks.py <fid> [<fid> …]
    tools/annotateTexBlocks.py --all
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")

FMT_TABLE = {
    ("CI", "4b"): "CI4",
    ("CI", "8b"): "CI8",
    ("I", "4b"): "I4",
    ("I", "8b"): "I8",
    ("IA", "4b"): "IA4",
    ("IA", "8b"): "IA8",
    ("IA", "16b"): "IA16",
    ("RGBA", "16b"): "RGBA16",
    ("RGBA", "32b"): "RGBA32",
}


def collect_tex_info_from_gfx_body(body):
    """Walk one Gfx[] body's command lines. Return a dict
    {tex_sym: {'fmt': str, 'w': int, 'h': int, 'lut': str|None}} for every
    Tex symbol referenced via the load-block sequence in this body.

    Dimensions come from `gsDPLoadBlock` (the *stored* texture size), not
    `gsDPSetTileSize` (the *render* tile size — which can exceed the
    stored size when the DL stretches the texture via mirror/wrap or
    larger texcoords). The render tile is kept as a fallback for cases
    where LoadBlock's row-stride decoding fails (dxt=0, etc.)."""
    result = {}
    last_tile_fmt = None       # ('CI'|'I'|'IA'|'RGBA', '4b'|'8b'|'16b'|'32b')
    last_tile_size = None      # (W, H) from SetTileSize (render size — fallback)
    last_settimg_siz = None    # '4b'|'8b'|'16b'|'32b' from SetTextureImage
    pending_settimg = None     # symbol
    last_committed_lut = None  # symbol

    settimg_re = re.compile(
        r"gsDPSetTextureImage\(\s*G_IM_FMT_(\w+)\s*,\s*G_IM_SIZ_(\d+b)\s*,\s*(\d+)\s*,\s*([A-Za-z_]\w+)"
    )
    settile_re = re.compile(
        r"gsDPSetTile\(\s*G_IM_FMT_(\w+)\s*,\s*G_IM_SIZ_(\d+b)\s*,"
    )
    settilesize_re = re.compile(
        r"gsDPSetTileSize\(\s*\w+\s*,\s*[^,]+,\s*[^,]+,\s*0x([0-9A-Fa-f]+)\s*,\s*0x([0-9A-Fa-f]+)\s*\)"
    )
    loadblock_re = re.compile(
        r"gsDPLoadBlock\(\s*\w+\s*,\s*[^,]+,\s*[^,]+,\s*(\d+)\s*,\s*(\d+)\s*\)"
    )

    def stored_dims_from_loadblock(lrs, dxt, settimg_siz, tile_fmt):
        """Decode (width_pixels, height_pixels) of the *stored* texture
        from LoadBlock parameters. Returns None if the params don't yield
        clean dims (zero dxt, non-divisible row stride, etc.)."""
        if tile_fmt is None:
            return None
        fmt_name = FMT_TABLE.get(tile_fmt)
        if fmt_name is None:
            return None
        # Bytes loaded depends on the SetTextureImage SIZ (load-buffer width).
        siz_bytes = {"4b": 0.5, "8b": 1, "16b": 2, "32b": 4}.get(settimg_siz)
        if siz_bytes is None:
            return None
        bytes_loaded = int((lrs + 1) * siz_bytes)
        if bytes_loaded <= 0:
            return None
        # Row stride: dxt = (1<<11) / num_qwords_per_row
        if dxt <= 0:
            return None
        qwords_per_row = (1 << 11) // dxt
        if qwords_per_row <= 0:
            return None
        width_bytes = qwords_per_row * 8
        # Convert width_bytes → width_pixels using the actual texture fmt's bpp.
        bpp = {"CI4": 4, "CI8": 8, "I4": 4, "I8": 8, "IA4": 4, "IA8": 8,
               "IA16": 16, "RGBA16": 16, "RGBA32": 32}.get(fmt_name)
        if bpp is None or width_bytes * 8 % bpp != 0:
            return None
        width_pixels = width_bytes * 8 // bpp
        if width_pixels <= 0 or bytes_loaded % width_bytes != 0:
            return None
        height_pixels = bytes_loaded // width_bytes
        return (width_pixels, height_pixels)

    # Width declared by SetTextureImage for the current pending texture
    # (the load-tile path uses this directly, since each LoadTile only
    # covers a sub-row range — height comes from max lrt+1 across the
    # SetTileSize calls bound to the same texture).
    pending_settimg_w = None
    # Running max of (rows+1) seen via SetTileSize while pending_settimg
    # is alive. Updated on each SetTileSize.
    pending_settimg_h = 0

    def _commit_load_path():
        """Record the current pending texture using fmt from SetTile and
        width from SetTextureImage and the running height from SetTileSize.
        Called when the texture's load sequence is finalized (next
        SetTextureImage / EndDisplayList / SPDisplayList break)."""
        if (pending_settimg is not None and "_Tex_" in pending_settimg
                and last_tile_fmt is not None and pending_settimg_w
                and pending_settimg_h):
            fmt_name = FMT_TABLE.get(last_tile_fmt)
            if fmt_name:
                result.setdefault(pending_settimg, {
                    "fmt": fmt_name,
                    "w": pending_settimg_w,
                    "h": pending_settimg_h,
                    "lut": last_committed_lut if fmt_name in ("CI4", "CI8") else None,
                })

    for ln in body.split("\n"):
        m = settile_re.search(ln)
        if m:
            last_tile_fmt = (m.group(1), m.group(2))
            continue
        m = settilesize_re.search(ln)
        if m:
            lrs = int(m.group(1), 16)
            lrt = int(m.group(2), 16)
            last_tile_size = ((lrs >> 2) + 1, (lrt >> 2) + 1)
            # Track running max-height for the current pending texture
            # (load-tile chunks update lrt monotonically across loads).
            if pending_settimg is not None:
                pending_settimg_h = max(pending_settimg_h, (lrt >> 2) + 1)
            continue
        m = settimg_re.search(ln)
        if m:
            # Finalize any in-flight texture before switching.
            _commit_load_path()
            sym = m.group(4)
            last_settimg_siz = m.group(2)
            pending_settimg = sym
            pending_settimg_w = int(m.group(3))
            pending_settimg_h = 0
            continue
        if "gsDPLoadTLUTCmd" in ln:
            if pending_settimg is not None:
                last_committed_lut = pending_settimg
            pending_settimg = None
            pending_settimg_w = None
            pending_settimg_h = 0
            continue
        m_lb = loadblock_re.search(ln)
        if m_lb:
            # LoadBlock path: dims come from the block's own (lrs,dxt)
            # — record immediately and stop tracking this texture.
            if pending_settimg is not None and "_Tex_" in pending_settimg \
                    and last_tile_fmt is not None:
                fmt_name = FMT_TABLE.get(last_tile_fmt)
                stored = None
                if last_settimg_siz is not None:
                    stored = stored_dims_from_loadblock(
                        int(m_lb.group(1)), int(m_lb.group(2)),
                        last_settimg_siz, last_tile_fmt)
                if stored is None and last_tile_size is not None:
                    stored = last_tile_size
                if fmt_name and stored is not None:
                    w, h = stored
                    result[pending_settimg] = {
                        "fmt": fmt_name,
                        "w": w,
                        "h": h,
                        "lut": last_committed_lut if fmt_name in ("CI4", "CI8") else None,
                    }
            pending_settimg = None
            pending_settimg_w = None
            pending_settimg_h = 0
            continue
        if "gsDPLoadTile" in ln:
            # LoadTile path: keep pending_settimg alive — dims accumulate
            # from SetTextureImage width + max SetTileSize lrt+1 height.
            continue
        if "gsSPEndDisplayList" in ln:
            _commit_load_path()
            # Reset state — next DL is independent.
            last_tile_fmt = None
            last_tile_size = None
            last_settimg_siz = None
            pending_settimg = None
            pending_settimg_w = None
            pending_settimg_h = 0
            last_committed_lut = None
    _commit_load_path()
    return result


def collect_tex_info_for_fid(expanded_path):
    """Parse every Gfx body in the expanded view, merge per-Tex info."""
    text = expanded_path.read_text() if hasattr(expanded_path, "read_text") \
        else open(expanded_path).read()
    out = {}
    for body in re.findall(r"Gfx d\w+\[\d+\] = \{\n(.*?)\n\};", text, re.DOTALL):
        for sym, info in collect_tex_info_from_gfx_body(body).items():
            out.setdefault(sym, info)  # keep first-seen
    return out


def annotate_source(src_path, tex_info, overwrite=False):
    """For each `u8 dXxx_Tex_0xNNNN[N]` decl in the source, insert the
    `/* @tex … */` line above if missing. With `overwrite=True`, an
    existing `/* @tex … */` line is replaced with the freshly-derived
    annotation (useful after fixing the dim-derivation logic). Returns
    the modified text and the number of annotations applied."""
    text = open(src_path).read()
    decl_re = re.compile(
        r"^(u8 (d\w+_Tex_0x[0-9A-Fa-f]+)\[(?:0x[0-9A-Fa-f]+|\d+)\] = \{)$",
        re.MULTILINE,
    )
    applied = 0

    def insert(m):
        nonlocal applied
        sym = m.group(2)
        if sym not in tex_info:
            return m.group(0)
        info = tex_info[sym]
        ann = f"/* @tex fmt={info['fmt']} dim={info['w']}x{info['h']}"
        if info["lut"]:
            ann += f" lut={info['lut']}"
        ann += " */"
        # Inspect the line immediately preceding the decl.
        line_start = m.start()
        prev_nl = text.rfind("\n", 0, line_start - 1)
        prev_line = text[prev_nl + 1:line_start - 1] if prev_nl >= 0 else ""
        if "@tex" in prev_line:
            if not overwrite or prev_line == ann:
                return m.group(0)
            # Replace just the previous line.
            applied += 1
            return ann + m.group(0)[(line_start - prev_nl - 1) - len(prev_line) - 1:]
        applied += 1
        return ann + "\n" + m.group(0)

    if overwrite:
        # Different replacement strategy: strip the previous @tex line in
        # one pass via lookbehind-friendly regex over the same decls.
        out_lines = text.split("\n")
        decl_one_line_re = re.compile(
            r"^u8 (d\w+_Tex_0x[0-9A-Fa-f]+)\[(?:0x[0-9A-Fa-f]+|\d+)\] = \{$"
        )
        new_lines = []
        i = 0
        while i < len(out_lines):
            m = decl_one_line_re.match(out_lines[i])
            if m and m.group(1) in tex_info:
                info = tex_info[m.group(1)]
                ann = f"/* @tex fmt={info['fmt']} dim={info['w']}x{info['h']}"
                if info["lut"]:
                    ann += f" lut={info['lut']}"
                ann += " */"
                if new_lines and "@tex" in new_lines[-1]:
                    if new_lines[-1] != ann:
                        new_lines[-1] = ann
                        applied += 1
                else:
                    new_lines.append(ann)
                    applied += 1
            new_lines.append(out_lines[i])
            i += 1
        return "\n".join(new_lines), applied

    new_text = decl_re.sub(insert, text)
    return new_text, applied


def process_fid(fid, overwrite=False):
    src = None
    name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            src = os.path.join(RELOC_DIR, fn)
            name = m.group(1)
            break
    if src is None:
        return 0
    expanded = os.path.join(BUILD_DIR, f"{fid}_{name}.c")
    if not os.path.exists(expanded):
        return 0  # silent — expanded view not built for this fid

    tex_info = collect_tex_info_for_fid(expanded)
    if not tex_info:
        return 0
    new_text, applied = annotate_source(src, tex_info, overwrite=overwrite)
    if applied > 0:
        with open(src, "w") as f:
            f.write(new_text)
        verb = "rewritten" if overwrite else "added"
        print(f"  fid {fid} ({name}): {applied} Tex annotations {verb}")
    return applied


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--overwrite", action="store_true",
                    help="Replace existing @tex annotations instead of skipping them.")
    args = ap.parse_args()

    if args.all:
        fids = []
        for fn in sorted(os.listdir(RELOC_DIR)):
            m = re.match(r"^(\d+)_\w+\.c$", fn)
            if m:
                fids.append(int(m.group(1)))
    else:
        fids = args.fids
    if not fids:
        ap.error("pass fids or --all")

    total = 0
    for f in fids:
        total += process_fid(f, overwrite=args.overwrite)
    verb = "rewritten" if args.overwrite else "added"
    print(f"\nTotal Tex annotations {verb}: {total}")


if __name__ == "__main__":
    main()
