#!/usr/bin/env python3
"""
Annotate `u8 dXxx_Tex_0xNNNN[…]` declarations in image-pool files whose
fmt/dim/LUT info lives in *other* files' display lists.

Companion to `tools/annotateTexBlocks.py`: that tool walks the DLs in the
*same* file as the Tex blocks. Many image pools (StagePupupuBetaImages,
MNTitle's UI textures, character-pose textures referenced from main-model
files, etc.) carry no local DLs — their textures are loaded by DLs in
other files via `extern` reloc chain entries.

For each `extern <src_dl_sym>+<offset> <dst_tex_sym>` line in any .reloc:

  1. Open the source file's expanded view; locate the `Gfx <src_dl_sym>[]`
     body (or any `Gfx … [N]` body whose name matches).
  2. The chain pointer offset within the DL maps to a Gfx command index:
     command_index = (offset - 4) // 8. The command at that index is
     either a `gsDPSetTextureImage` (Tex load) or its LUT-side cousin.
  3. Walk the DL with the same fmt/dim/LUT derivation logic as
     annotateTexBlocks, but substitute the target symbol for the
     chain-encoded payload hex at the matched command.

The derived (fmt, w, h, lut) is then attached to `dst_tex_sym` and written
as `/* @tex fmt=<F> dim=<W>x<H> [lut=<S>] */` above its decl in the target
.c file. Idempotent — skips Tex decls already annotated.
"""

import argparse
import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")

FMT_TABLE = {
    ("CI", "4b"): "CI4",   ("CI", "8b"): "CI8",
    ("I", "4b"): "I4",      ("I", "8b"): "I8",
    ("IA", "4b"): "IA4",    ("IA", "8b"): "IA8",   ("IA", "16b"): "IA16",
    ("RGBA", "16b"): "RGBA16", ("RGBA", "32b"): "RGBA32",
}

SETTIMG_RE = re.compile(
    r"gsDPSetTextureImage\(\s*G_IM_FMT_(\w+)\s*,\s*G_IM_SIZ_(\d+b)\s*,\s*(\d+)\s*,\s*"
    r"(?P<arg>[A-Za-z_]\w+|0x[0-9A-Fa-f]+)"
)
SETTILE_RE = re.compile(
    r"gsDPSetTile\(\s*G_IM_FMT_(\w+)\s*,\s*G_IM_SIZ_(\d+b)"
)
SETTILESIZE_RE = re.compile(
    r"gsDPSetTileSize\(\s*G_TX_RENDERTILE\s*,\s*0\s*,\s*0\s*,\s*(0x[0-9A-Fa-f]+)\s*,\s*(0x[0-9A-Fa-f]+)"
)
LOADBLOCK_RE = re.compile(
    r"gsDPLoadBlock\(\s*G_TX_LOADTILE\s*,\s*0\s*,\s*0\s*,\s*(0x[0-9A-Fa-f]+|\d+)\s*,\s*(0x[0-9A-Fa-f]+|\d+)"
)
LOADTLUT_RE = re.compile(r"gsDPLoadTLUTCmd\(")

FID_RE = re.compile(r"^(\d+)_(\w+)\.c$")
GFX_BODY_RE = re.compile(r"Gfx (d\w+)\[\d+\] = \{\n(.*?)\n\};", re.DOTALL)
DECL_RE = re.compile(
    r"^(u8 (d\w+_Tex_0x[0-9A-Fa-f]+)\[(?:0x[0-9A-Fa-f]+|\d+)\] = \{)$",
    re.MULTILINE,
)


def fid_to_name():
    out = {}
    for fn in os.listdir(RELOC_DIR):
        m = FID_RE.match(fn)
        if m:
            out[int(m.group(1))] = m.group(2)
    return out


def collect_extern_tex_refs():
    """Return {target_fid: {target_tex_sym: [(src_fid, src_dl_sym, payload_off)]}}.

    A reloc line shape:
       extern d<srcName>_<sym>+0x<off> d<dstName>_<sym>  # -> file NNN (...)
    The target file id comes from the `# -> file NNN` annotation, or is
    inferred by symbol-prefix matching when missing.
    """
    refs = {}
    name_to_fid = {n: f for f, n in fid_to_name().items()}
    file_re = re.compile(r"#\s*->\s*file\s+(\d+)")
    line_re = re.compile(
        r"^\s*extern\s+(\S+)\s+(\S+)"
    )
    for fn in os.listdir(RELOC_DIR):
        if not fn.endswith(".reloc"):
            continue
        m_src = re.match(r"^(\d+)_(\w+)\.(?:jp\.)?reloc$", fn)
        if not m_src:
            continue
        src_fid = int(m_src.group(1))
        src_name = m_src.group(2)
        with open(os.path.join(RELOC_DIR, fn)) as f:
            for line in f:
                # strip inline comment for parsing
                fid_m = file_re.search(line)
                bare = line.split("#", 1)[0]
                m = line_re.match(bare)
                if not m:
                    continue
                ptr_label, tgt_label = m.group(1), m.group(2)
                # ptr label: d<srcName>_<sym>[+0xNN]
                pm = re.match(r"^d" + re.escape(src_name) + r"_([A-Za-z_]\w*)(\+0x([0-9A-Fa-f]+))?$", ptr_label)
                if not pm:
                    # Cross-prefix label — skip; we only handle local-src ptrs
                    continue
                src_sym = pm.group(1)
                src_dl_sym = "d" + src_name + "_" + src_sym
                off = int(pm.group(3), 16) if pm.group(3) else 0
                # Target must be a Tex
                if "_Tex_0x" not in tgt_label:
                    continue
                # Strip any +0xNN on the target (we only annotate base symbols)
                tm = re.match(r"^(d\w+_Tex_0x[0-9A-Fa-f]+)(\+0x[0-9A-Fa-f]+)?$", tgt_label)
                if not tm:
                    continue
                tgt_sym = tm.group(1)
                # Determine target fid
                tgt_fid = None
                if fid_m:
                    tgt_fid = int(fid_m.group(1))
                else:
                    # Infer from symbol prefix: d<TargetName>_...
                    pm2 = re.match(r"^d([A-Za-z]\w*?)_Tex_0x", tgt_sym)
                    if pm2 and pm2.group(1) in name_to_fid:
                        tgt_fid = name_to_fid[pm2.group(1)]
                if tgt_fid is None:
                    continue
                refs.setdefault(tgt_fid, {}).setdefault(tgt_sym, []).append(
                    (src_fid, src_dl_sym, off)
                )
    return refs


def derive_tex_info_from_dl(body_lines, target_cmd_idx):
    """Walk a Gfx[] body's command lines. At command index `target_cmd_idx`
    (the gsDPSetTextureImage we want to derive info for), the preceding
    state captures fmt (from latest SetTile), the next LoadBlock gives the
    stored dim, and the most-recently-committed LUT (from a SetTextureImage
    + LoadTLUTCmd pair) is the palette.

    Returns (fmt_str, w, h, lut_sym_or_None) or None if unparseable.
    `lut_sym_or_None` is taken from the prior SetTextureImage's `arg`
    field — chain-encoded raw hex is replaced with `None` (caller may
    inject via other refs)."""
    last_tile_fmt = None      # (fmt_name, siz_name)
    last_tile_size = None     # (W, H)
    last_settimg_siz = None
    pending_settimg = None
    last_committed_lut = None
    pending_settimg_lut = None
    found = None

    cmd_idx = -1
    for ln in body_lines:
        s = ln.strip()
        is_cmd = bool(re.match(r"^gs(SP|DP)\w+\(", s))
        if not is_cmd:
            continue
        cmd_idx += 1
        m = SETTILE_RE.search(s)
        if m:
            last_tile_fmt = (m.group(1), m.group(2))
        m = SETTILESIZE_RE.search(s)
        if m:
            lrs, lrt = int(m.group(1), 16), int(m.group(2), 16)
            last_tile_size = (lrs // 4 + 1, lrt // 4 + 1)
        m = SETTIMG_RE.search(s)
        if m:
            siz = m.group(2)
            arg = m.group("arg")
            last_settimg_siz = siz
            pending_settimg = arg
            pending_settimg_lut = arg
            if cmd_idx == target_cmd_idx:
                # We've reached the target. Need a LoadBlock next; for now
                # bind w/h from last_tile_size as a fallback.
                w, h = last_tile_size if last_tile_size else (None, None)
                fmt = None
                if last_tile_fmt:
                    fmt = FMT_TABLE.get(last_tile_fmt)
                lut = last_committed_lut if (fmt in ("CI4", "CI8")) else None
                # Keep walking for the LoadBlock to refine w/h
                found = [fmt, w, h, lut]
            continue
        if "gsDPLoadBlock" in s:
            m = LOADBLOCK_RE.search(s)
            if m:
                lrs = int(m.group(1), 0)
                dxt = int(m.group(2), 0)
                texels = lrs + 1
                w = h = None
                if dxt:
                    # row stride: 2048 / dxt = words-per-row
                    # 1 word = 8 bytes; texels-per-row depends on siz
                    siz_bits = {"4b": 4, "8b": 8, "16b": 16, "32b": 32}.get(
                        last_settimg_siz, 16
                    )
                    words_per_row = max(1, 2048 // dxt)
                    texels_per_row = (words_per_row * 64) // siz_bits
                    if texels_per_row and texels % texels_per_row == 0:
                        w = texels_per_row
                        h = texels // texels_per_row
                if found is not None and w and h:
                    found[1] = w
                    found[2] = h
                # If we just loaded the target's actual texture, we're done
                if pending_settimg and found is not None and found[0] is None and last_tile_fmt:
                    found[0] = FMT_TABLE.get(last_tile_fmt)
            pending_settimg = None
            continue
        if LOADTLUT_RE.search(s):
            # The LUT just committed is the pending settimg arg.
            if pending_settimg_lut:
                last_committed_lut = pending_settimg_lut
            pending_settimg_lut = None
            continue
    if found is None:
        return None
    fmt, w, h, lut = found
    if not fmt or not w or not h:
        return None
    return (fmt, w, h, lut)


def annotate_target_file(target_fid, target_name, tex_info):
    src_path = os.path.join(RELOC_DIR, f"{target_fid}_{target_name}.c")
    if not os.path.exists(src_path):
        return 0
    text = open(src_path).read()
    applied = 0

    def insert(m):
        nonlocal applied
        sym = m.group(2)
        info = tex_info.get(sym)
        if not info:
            return m.group(0)
        fmt, w, h, lut = info
        ann = f"/* @tex fmt={fmt} dim={w}x{h}"
        if lut and not re.match(r"^0x[0-9A-Fa-f]+$", lut):
            ann += f" lut={lut}"
        ann += " */"
        line_start = m.start()
        prev_nl = text.rfind("\n", 0, line_start - 1)
        prev_line = text[prev_nl + 1:line_start - 1] if prev_nl >= 0 else ""
        if "@tex" in prev_line:
            return m.group(0)
        applied += 1
        return ann + "\n" + m.group(0)

    new_text = DECL_RE.sub(insert, text)
    if applied:
        with open(src_path, "w") as f:
            f.write(new_text)
        print(f"  fid {target_fid} ({target_name}): {applied} Tex annotations added (via extern chains)")
    return applied


def process():
    refs = collect_extern_tex_refs()
    f2n = fid_to_name()
    total = 0
    for tgt_fid, tex_refs in sorted(refs.items()):
        tgt_name = f2n.get(tgt_fid)
        if not tgt_name:
            continue
        tex_info = {}
        # Group refs by source file to minimize file opens
        by_src = {}
        for tex_sym, srcs in tex_refs.items():
            for src_fid, src_dl_sym, off in srcs:
                by_src.setdefault(src_fid, []).append((tex_sym, src_dl_sym, off))
        for src_fid, items in by_src.items():
            src_name = f2n.get(src_fid)
            if not src_name:
                continue
            expanded = os.path.join(BUILD_DIR, f"{src_fid}_{src_name}.c")
            if not os.path.exists(expanded):
                continue
            text = open(expanded).read()
            # Index Gfx bodies by sym
            bodies = {sym: body.split("\n") for sym, body in GFX_BODY_RE.findall(text)}
            for tex_sym, src_dl_sym, off in items:
                body = bodies.get(src_dl_sym)
                if body is None:
                    continue
                # cmd at byte (off - 4); cmd index = (off - 4) / 8
                if off < 4:
                    continue
                cmd_idx = (off - 4) // 8
                info = derive_tex_info_from_dl(body, cmd_idx)
                if info and tex_sym not in tex_info:
                    tex_info[tex_sym] = info
        if tex_info:
            total += annotate_target_file(tgt_fid, tgt_name, tex_info)
    print(f"\nTotal Tex annotations added (extern): {total}")


if __name__ == "__main__":
    process()
