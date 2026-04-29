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
within the same Gfx body. Dimensions come from `gsDPSetTileSize`.

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
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")

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
    Tex symbol referenced via the load-block sequence in this body."""
    result = {}
    last_tile_fmt = None       # ('CI'|'I'|'IA'|'RGBA', '4b'|'8b'|'16b'|'32b')
    last_tile_size = None      # (W, H)
    pending_settimg = None     # ('lut'|'tex', symbol)
    last_committed_lut = None  # symbol

    settimg_re = re.compile(
        r"gsDPSetTextureImage\(\s*G_IM_FMT_(\w+)\s*,\s*G_IM_SIZ_(\d+b)\s*,\s*\d+\s*,\s*([A-Za-z_]\w+)"
    )
    settile_re = re.compile(
        r"gsDPSetTile\(\s*G_IM_FMT_(\w+)\s*,\s*G_IM_SIZ_(\d+b)\s*,"
    )
    settilesize_re = re.compile(
        r"gsDPSetTileSize\(\s*\w+\s*,\s*[^,]+,\s*[^,]+,\s*0x([0-9A-Fa-f]+)\s*,\s*0x([0-9A-Fa-f]+)\s*\)"
    )

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
            continue
        m = settimg_re.search(ln)
        if m:
            fmt = m.group(1)
            sym = m.group(3)
            # The fmt/siz on the SetTextureImage describes the load buffer,
            # not the texture. We'll use last_tile_fmt for the actual format.
            # Tag the pending sym as either lut (RGBA→TLUT path) or tex
            # (CI/I/IA→Block path). We can't know yet — wait for the
            # follow-up LoadTLUTCmd / LoadBlock.
            pending_settimg = sym
            continue
        if "gsDPLoadTLUTCmd" in ln:
            if pending_settimg is not None:
                last_committed_lut = pending_settimg
            pending_settimg = None
            continue
        if "gsDPLoadBlock" in ln or "gsDPLoadTile" in ln:
            if pending_settimg is not None and "_Tex_" in pending_settimg \
                    and last_tile_fmt is not None and last_tile_size is not None:
                fmt_name = FMT_TABLE.get(last_tile_fmt)
                if fmt_name:
                    w, h = last_tile_size
                    result[pending_settimg] = {
                        "fmt": fmt_name,
                        "w": w,
                        "h": h,
                        "lut": last_committed_lut if fmt_name in ("CI4", "CI8") else None,
                    }
            pending_settimg = None
            continue
        if "gsSPEndDisplayList" in ln:
            # Reset state — next DL is independent.
            last_tile_fmt = None
            last_tile_size = None
            pending_settimg = None
            last_committed_lut = None
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


def annotate_source(src_path, tex_info):
    """For each `u8 dXxx_Tex_0xNNNN[N]` decl in the source, insert the
    `/* @tex … */` line above if missing. Returns the modified text and
    the number of annotations applied."""
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
        # Look at the line immediately preceding to skip if @tex already there.
        line_start = m.start()
        prev_nl = text.rfind("\n", 0, line_start - 1)
        prev_line = text[prev_nl + 1:line_start - 1] if prev_nl >= 0 else ""
        if "@tex" in prev_line:
            return m.group(0)
        info = tex_info[sym]
        ann = f"/* @tex fmt={info['fmt']} dim={info['w']}x{info['h']}"
        if info["lut"]:
            ann += f" lut={info['lut']}"
        ann += " */"
        applied += 1
        return ann + "\n" + m.group(0)

    new_text = decl_re.sub(insert, text)
    return new_text, applied


def process_fid(fid):
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
    new_text, applied = annotate_source(src, tex_info)
    if applied > 0:
        with open(src, "w") as f:
            f.write(new_text)
        print(f"  fid {fid} ({name}): {applied} Tex annotations added")
    return applied


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
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
        total += process_fid(f)
    print(f"\nTotal Tex annotations added: {total}")


if __name__ == "__main__":
    main()
