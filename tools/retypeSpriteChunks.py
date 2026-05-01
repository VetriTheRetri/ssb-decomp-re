#!/usr/bin/env python3
"""
Retype any chunk that's reached via a MObjSub.sprites pointer array
(directly or through a `void *X[]` indirection) from its current generic
form (`u8 X[N]` / `u32 X[N/4]` etc.) into `u8 Tex_0xN[size]` with
`.tex.inc.c` and a `/* @tex fmt=…[ dim=…x…] */` annotation derived
from the owning MObjSub's `block_fmt`/`block_siz` and `unk38`/`unk3A`
(or `unk0C`/`unk0E`) fields.

Operates per fid. Walks every typed `MObjSub` declaration in the .c,
reads its `.sprites` pointer-array target, follows that array's entries
to their leaf symbols, and retypes each leaf if it's not already a
typed `Tex_*` block.

Usage:
    tools/retypeSpriteChunks.py <fid> [<fid> ...]
"""
import argparse
import os
import re
import subprocess
import glob

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData", ".build")


def nm_for_fid(fid):
    obj = os.path.join(BUILD_DIR, f"{fid}.o")
    if not os.path.exists(obj):
        return {}
    r = subprocess.run(["mips-linux-gnu-nm", obj],
                       capture_output=True, text=True, check=True)
    syms = {}
    for line in r.stdout.splitlines():
        p = line.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    return syms

# G_IM_FMT_* / G_IM_SIZ_* names → canonical (FMT, "Nb") strings.
FMT_NAMES = {"G_IM_FMT_RGBA": "RGBA", "G_IM_FMT_YUV": "YUV",
             "G_IM_FMT_CI": "CI", "G_IM_FMT_IA": "IA", "G_IM_FMT_I": "I"}
SIZ_NAMES = {"G_IM_SIZ_4b": "4", "G_IM_SIZ_8b": "8",
             "G_IM_SIZ_16b": "16", "G_IM_SIZ_32b": "32"}


def parse_mobjsub_decl(text, sym):
    """Find `MObjSub <sym>[1] = {{ … }};` (or single-form). Return the
    body text (between the inner braces) or None if not found."""
    rx = re.compile(
        rf"MObjSub\s+{re.escape(sym)}(?:\[\d*\])?\s*=\s*\{{\s*(?:\{{)?(?P<body>.*?)\}}\s*(?:\}};|;)",
        re.DOTALL,
    )
    m = rx.search(text)
    return m.group("body") if m else None


FMT_BY_RAW = {0: "RGBA", 1: "YUV", 2: "CI", 3: "IA", 4: "I"}
SIZ_BY_RAW = {0: "4", 1: "8", 2: "16", 3: "32"}


def parse_mobjsub_block_fmt(body):
    """Return (fmt_str, w, h) from a typed MObjSub body. The fields we want
    live at MObjSub offsets 0x32 (block_fmt) / 0x33 (block_siz) / 0x38
    (unk38 = width) / 0x3A (unk3A = height). Both the named-macro form
    (`G_IM_FMT_CI, G_IM_SIZ_4b`) and the raw-hex form (`0x02, 0x00`) appear
    in the corpus, so we parse positionally: skip past the `(void**)…
    palettes` line, then read the next fmt/siz pair (named or raw hex)
    followed by the dxt + unk36 + W + H triple."""
    if body is None:
        return None

    # The palettes line is the unique marker — only one `(void**)` after the
    # sprites cast at offset +0x04. Skip past sprites's `(void**)` and find
    # the next one.
    idxs = [m.start() for m in re.finditer(r"\(void\*\*\)", body)]
    if len(idxs) < 2:
        return None
    after = body[idxs[1]:]
    # Now match: `(void**)<expr>,\s*` then optional `flags 0xXXXX,\s*`,
    # then the fmt/siz pair, then dxt, unk36, W, H.
    rx = re.compile(
        r"\(void\*\*\)[^,]+,\s*"                                          # palettes
        r"(?:0x[0-9A-Fa-f]+,\s*)?"                                        # flags (u16)
        r"(?:G_IM_FMT_(\w+)|0x([0-9A-Fa-f]+))\s*,\s*"                     # block_fmt
        r"(?:G_IM_SIZ_(\w+)|0x([0-9A-Fa-f]+))\s*,\s*"                     # block_siz
        r"0x[0-9A-Fa-f]+\s*,\s*"                                          # dxt
        r"0x([0-9A-Fa-f]+)\s*,\s*"                                        # unk36
        r"0x([0-9A-Fa-f]+)\s*,\s*"                                        # unk38 = W
        r"0x([0-9A-Fa-f]+)",                                              # unk3A = H
        re.DOTALL,
    )
    m = rx.search(after)
    if not m:
        return None
    fmt_named, fmt_raw, siz_named, siz_raw, _unk36, w_hex, h_hex = m.groups()
    if fmt_named:
        fmt = fmt_named.replace("FMT_", "")
    else:
        fmt = FMT_BY_RAW.get(int(fmt_raw, 16))
    if siz_named:
        siz = siz_named.rstrip("b")  # e.g. "4b" -> "4"
    else:
        siz = SIZ_BY_RAW.get(int(siz_raw, 16))
    if fmt is None or siz is None:
        return None
    return (f"{fmt}{siz}", int(w_hex, 16), int(h_hex, 16))


def parse_sprites_target(body):
    """Extract the symbol pointed at by `(void**)<expr>` for the MObjSub
    sprites field (offset 0x04 — first pointer in the body)."""
    # The sprites expression is the third comma-separated value (after
    # pad00 and fmt/siz). We handle a few canonical forms:
    #   (void**)X
    #   (void**)dirX  (no parens around expression)
    #   (void**)((u8*)&X + 0xN)
    #   (void**)0x...
    rx = re.compile(r"\(void\*\*\)\s*(?:\(\s*\(u8\*\)\s*&\s*(?P<expr>\w+)\s*\+\s*0x[0-9A-Fa-f]+\s*\)|&?\s*(?P<sym>\w+))")
    m = rx.search(body)
    if not m:
        return None
    return m.group("sym") or m.group("expr")


def process(fid):
    paths = sorted(glob.glob(os.path.join(SRC_DIR, f"{fid}_*.c")))
    if not paths:
        print(f"fid {fid}: no .c found")
        return
    c_path = paths[0]
    target_name = re.match(rf"^{fid}_(\w+)\.c$", os.path.basename(c_path)).group(1)

    syms = nm_for_fid(fid)

    with open(c_path) as f:
        text = f.read()

    # Walk every MObjSub declaration; for each, look up its .sprites target.
    mobjsub_decls = re.findall(r"^MObjSub\s+(\w+)(?:\[\d*\])?\s*=", text, re.MULTILINE)
    retype_plans = []  # (chunk_sym, tex_info)
    for mob in mobjsub_decls:
        body = parse_mobjsub_decl(text, mob)
        if not body:
            continue
        sprites_sym = parse_sprites_target(body)
        if not sprites_sym:
            continue
        tex_info = parse_mobjsub_block_fmt(body)
        # Find the sprites array's body and extract its entries.
        # Accept any of the array-of-pointers shapes the codebase uses:
        # `void *X[]`, `MObjSub *X[]` / `MObjSub **X[]`, `u32 X[]`. Each
        # element is one pointer-sized address regardless.
        arr_rx = re.compile(
            rf"(?:void\s*\*|MObjSub\s*\*+|u32)\s*{re.escape(sprites_sym)}\s*\[\s*\d*\s*\]\s*=\s*\{{(?P<arr>[^}}]*)\}}",
            re.DOTALL,
        )
        arr_m = arr_rx.search(text)
        if not arr_m:
            continue
        for entry in arr_m.group("arr").split(","):
            e = entry.strip()
            if not e or e == "NULL":
                continue
            # Forms: (cast)&sym  |  (cast)((u8*)&sym + 0xN)  |  (cast)0x...
            mm = re.match(r"\([^)]*\)\s*&\s*(\w+)", e)
            if not mm:
                mm = re.match(r"\([^)]*\)\s*\(\s*\(u8\*\)\s*&\s*(\w+)\s*\+", e)
                if not mm:
                    continue
            tgt_sym = mm.group(1)
            if "_Tex_" in tgt_sym or "_palette_" in tgt_sym:
                continue  # already typed
            retype_plans.append((tgt_sym, tex_info, mob))

    if not retype_plans:
        print(f"fid {fid}: no chunks need texture retyping")
        return

    # Apply retypes. Each plan: rewrite the chunk's declaration from
    # `<elem_type> <sym>[N] = { #include <Sub/<base>.SUFFIX.inc.c> };`
    # into `u8 Tex_0x<abs>[N*sz] = { #include <Sub/Tex_0x<abs>.tex.inc.c> };`
    # Symbol RENAME: replace `<sym>` with `Tex_0x<abs>` everywhere.
    new_text = text
    n_retyped = 0
    seen = set()
    sym_renames = []  # [(old_sym, new_sym), ...] — for .reloc rewrite
    for chunk_sym, tex_info, owning_mob in retype_plans:
        if chunk_sym in seen:
            continue
        seen.add(chunk_sym)
        decl_rx = re.compile(
            rf"(?P<lead>(/\*[^*]*\*/\s*\n)*)"
            rf"(?P<type>(?:u8|u16|u32))\s+{re.escape(chunk_sym)}\s*\[\s*(?P<count>\d+)\s*\]\s*=\s*\{{\n"
            rf"\t#include <(?P<inc>[^>]+)>\n\}};",
            re.MULTILINE,
        )
        m = decl_rx.search(new_text)
        if m is None:
            print(f"  skip {chunk_sym}: declaration not found / inline-init")
            continue
        elem_type = m.group("type")
        count = int(m.group("count"))
        size_bytes = count * {"u8": 1, "u16": 2, "u32": 4}[elem_type]

        # Resolve the chunk's actual file offset via nm and use that for the
        # canonical `Tex_0x<abs>` name. The chunk symbol's trailing
        # `_0x<hex>` suffix is *parent-relative* (when produced by a prior
        # split) and would clash with the convention if used directly.
        nm_off = syms.get(chunk_sym)
        if nm_off is not None:
            new_sym = f"d{target_name}_Tex_0x{nm_off:X}"
        else:
            abs_match = re.search(r"_0x([0-9A-Fa-f]+)$", chunk_sym)
            if abs_match:
                new_sym = f"d{target_name}_Tex_0x{int(abs_match.group(1), 16):X}"
            else:
                new_sym = chunk_sym + "_tex"

        inc = m.group("inc")
        m_inc = re.match(r"^(?P<dir>[^/]+)/(?P<base>[^.]+)\.[^.]+\.inc\.c$", inc)
        sub_dir = m_inc.group("dir") if m_inc else target_name
        # New inc.c base = the new symbol (without the d<Name>_ prefix)
        new_basename = new_sym[len(f"d{target_name}_"):]
        new_inc = f"{sub_dir}/{new_basename}.tex.inc.c"

        # Annotation. The MObjSub's claimed (w, h) describes the texture the
        # MObjSub renders — but in practice those values can describe an
        # atlas-tiled config that's larger than each individual chunk (e.g.
        # 198/SCExplainGraphics says 64x64 but each leaf chunk is 32x32).
        # Validate dim against chunk size; if it doesn't fit, drop the dim
        # so previewImagesTextures.py falls back to its size-derived guess.
        BPP = {"CI4": 4, "CI8": 8, "I4": 4, "I8": 8, "IA4": 4, "IA8": 8,
               "IA16": 16, "RGBA16": 16, "RGBA32": 32}
        if tex_info and tex_info[0]:
            fmt_str = tex_info[0]
            w, h = tex_info[1], tex_info[2]
            bpp = BPP.get(fmt_str)
            dim_fits = (w and h and bpp and (w * h * bpp + 7) // 8 <= size_bytes)
            if dim_fits:
                ann = f"/* @tex fmt={fmt_str} dim={w}x{h} */"
            else:
                ann = f"/* @tex fmt={fmt_str} */"
        else:
            ann = "/* @tex */"

        replacement = (
            f"{ann}\nu8 {new_sym}[{size_bytes}] = {{\n"
            f"\t#include <{new_inc}>\n}};"
        )
        new_text = new_text.replace(m.group(0), replacement, 1)
        # Update extern u<N> chunk_sym[] at top of file (if any) to extern u8 new_sym[]
        new_text = re.sub(
            rf"^extern\s+(?:u8|u16|u32)\s+{re.escape(chunk_sym)}\s*\[\s*\]\s*;",
            f"extern u8 {new_sym}[];",
            new_text,
            flags=re.MULTILINE,
        )
        # Rename ALL remaining `chunk_sym` references to `new_sym`.
        new_text = re.sub(rf"\b{re.escape(chunk_sym)}\b", new_sym, new_text)
        sym_renames.append((chunk_sym, new_sym))
        n_retyped += 1
        print(f"  retyped {chunk_sym} → {new_sym} ({size_bytes} bytes, {ann})")

    if n_retyped:
        with open(c_path, "w") as f:
            f.write(new_text)
        # Also rewrite the .reloc file: any `<old_sym>` (with optional
        # `+0xN`) reference on either side of an `intern <lhs> <rhs>` line
        # needs the same rename, otherwise fixRelocChain can't resolve.
        # We rebuild the rename map from the diff between text and new_text
        # — but it's easier to track during the loop. Re-do via sym_renames.
        # Rewrite both the shared .reloc and any per-version .jp.reloc that
        # may exist. fixRelocChain reads whichever applies for the build's
        # version, and an out-of-sync .jp.reloc fails to resolve.
        for reloc_path in (c_path.replace(".c", ".reloc"),
                           c_path.replace(".c", ".jp.reloc")):
            if not os.path.exists(reloc_path):
                continue
            with open(reloc_path) as f:
                reloc_text = f.read()
            new_reloc = reloc_text
            for old, new in sym_renames:
                new_reloc = re.sub(rf"\b{re.escape(old)}\b", new, new_reloc)
            if new_reloc != reloc_text:
                with open(reloc_path, "w") as f:
                    f.write(new_reloc)
        print(f"fid {fid}: retyped {n_retyped} sprite chunk(s) as Tex blocks")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid)


if __name__ == "__main__":
    main()
