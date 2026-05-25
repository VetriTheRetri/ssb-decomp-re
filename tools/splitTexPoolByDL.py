#!/usr/bin/env python3
"""Split a `u8 dXxx_Tex_pool[N]` block by walking every gsSPVertex /
gsDPLoadBlock / gsDPLoadTLUT reference into it from the file's expanded
view.

For each referenced offset, emits a typed sub-decl:
  - `Vtx <prefix>Vtx_0xNNNN[K]` for gsSPVertex targets
  - `u8 <prefix>Tex_0xNNNN[K]` (.tex.inc.c) for gsDPLoadBlock targets
  - `u16 <prefix>palette_0xNNNN[K]` (.palette.inc.c) for gsDPLoadTLUTCmd
    targets (none in this file)

Bytes that aren't reached by any reference become `u8 <prefix>data_0xNNNN[K]`
(.data.inc.c) — typically a leading header gap and 8-byte alignment gaps
between consecutive textures.

The .reloc file is updated: any `<old_pool>+0xN` target gets rewritten
to the new sub-decl name (with an inner offset if the reloc lands inside
a typed block instead of at the head).

Usage: python3 tools/splitTexPoolByDL.py <fid>
"""

import argparse
import pathlib
import re
import subprocess
import sys


PROJECT = pathlib.Path(__file__).resolve().parent.parent
SRC_DIR = PROJECT / "src" / "relocData"
EXP_DIR = PROJECT / "build" / "us" / "src" / "relocData"


# Regexes against expanded view — pool_sym is interpolated at match time
# so any source-level symbol works (not just `*_Tex_pool`).
def _make_vtx_re(pool_sym):
    # Matches either `((u8*)pool + 0xN)` or bare `pool` (== offset 0).
    return re.compile(
        rf"gsSPVertex\(\s*(?:\(\(u8\*\){re.escape(pool_sym)}\s*\+\s*0x([0-9A-Fa-f]+)\)"
        rf"|{re.escape(pool_sym)})"
        rf"\s*/\*\s*was\s*0x[0-9A-Fa-f]+\s*\*/\s*,\s*(\d+)\s*,"
    )


def _make_tex_setimg_re(pool_sym):
    # Matches either `((u8*)pool + 0xN)` or bare `pool` (== offset 0).
    return re.compile(
        rf"gsDPSetTextureImage\([^,]+,\s*([^,]+),\s*\d+\s*,\s*"
        rf"(?:\(\(u8\*\){re.escape(pool_sym)}\s*\+\s*0x([0-9A-Fa-f]+)\)"
        rf"|{re.escape(pool_sym)}\b)"
    )


_TEX_LOADBLOCK_RE = re.compile(
    r"gsDPLoadBlock\(\s*\w+\s*,\s*\d+\s*,\s*\d+\s*,\s*(\d+)\s*,\s*\d+\s*\)"
)
_TLUT_LOADTLUT_RE = re.compile(r"gsDPLoadTLUTCmd\(\s*\w+\s*,\s*(\d+)\s*\)")


def collect_refs(expanded_text, pool_sym):
    """Return [(offset, kind, size_bytes, count_or_None)] sorted by offset.

    Overlapping Vtx spans (a DL referencing into the middle of another DL's
    Vtx array) are merged into a single union span — sub-references resolve
    to `+offset` entries against the unioned head."""
    vtx_re = _make_vtx_re(pool_sym)
    tex_setimg_re = _make_tex_setimg_re(pool_sym)

    vtx_spans = []  # list of (start, end)
    tex_refs = []   # list of (off, "Tex"/"palette", size)

    for m in vtx_re.finditer(expanded_text):
        off = int(m.group(1), 16) if m.group(1) else 0
        count = int(m.group(2))
        vtx_spans.append((off, off + count * 16))

    lines = expanded_text.split("\n")
    for i, line in enumerate(lines):
        m = tex_setimg_re.search(line)
        if not m:
            continue
        siz = m.group(1).strip()
        off = int(m.group(2), 16) if m.group(2) else 0
        for j in range(i + 1, min(i + 20, len(lines))):
            mb = _TEX_LOADBLOCK_RE.search(lines[j])
            if mb:
                lrs = int(mb.group(1))
                if "16b" in siz:
                    nbytes = (lrs + 1) * 2
                elif "8b" in siz:
                    nbytes = (lrs + 1) * 1
                elif "32b" in siz:
                    nbytes = (lrs + 1) * 4
                elif "4b" in siz:
                    nbytes = (lrs + 1) // 2
                else:
                    nbytes = (lrs + 1) * 2
                tex_refs.append((off, "Tex", nbytes))
                break
            mt = _TLUT_LOADTLUT_RE.search(lines[j])
            if mt:
                last_idx = int(mt.group(1))
                tex_refs.append((off, "palette", (last_idx + 1) * 2))
                break

    # Union overlapping Vtx spans
    vtx_spans.sort()
    unions = []
    for s, e in vtx_spans:
        if unions and s < unions[-1][1]:
            unions[-1] = (unions[-1][0], max(unions[-1][1], e))
        else:
            unions.append((s, e))

    # Dedup tex/palette refs (same offset can be re-referenced by multiple DLs)
    seen = {}
    for off, kind, sz in tex_refs:
        key = (off, kind)
        if key not in seen or sz > seen[key]:
            seen[key] = sz

    refs = []
    for s, e in unions:
        refs.append((s, "Vtx", e - s, (e - s) // 16))
    for (off, kind), sz in seen.items():
        refs.append((off, kind, sz, None))
    refs.sort()
    return refs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int)
    ap.add_argument("--dry", action="store_true")
    ap.add_argument(
        "--sym",
        help="Pool symbol to split. Defaults to `d<Name>_Tex_pool`. "
             "Use this for any u8 pool block (e.g. data_trail_post).",
    )
    ap.add_argument(
        "--prefix",
        help="Prefix for new sub-decl symbols (e.g. "
             "`dEFCommonEffects3_MBallRays_`). Defaults to `d<Name>_`.",
    )
    ap.add_argument(
        "--base-offset",
        type=lambda s: int(s, 0),
        default=0,
        help="File-absolute base offset added to pool-relative offsets "
             "when naming new symbols (e.g. 0x918 for fid 85's trail_post).",
    )
    args = ap.parse_args()

    fid = args.fid
    src_path = next(SRC_DIR.glob(f"{fid}_*.c"), None)
    if src_path is None:
        sys.exit(f"no src for fid {fid}")
    name = src_path.stem.split("_", 1)[1]
    exp_path = EXP_DIR / f"{fid}_{name}.c"
    reloc_path = SRC_DIR / f"{fid}_{name}.reloc"
    if not exp_path.exists():
        sys.exit(f"expanded view missing: {exp_path}")

    src = src_path.read_text()
    expanded = exp_path.read_text()

    pool_sym = args.sym if args.sym else f"d{name}_Tex_pool"
    base_off = args.base_offset
    # Find the pool declaration — accept both hex (0xN) and decimal sizes.
    pat = re.compile(
        rf"u8\s+{re.escape(pool_sym)}\s*\[\s*(0x[0-9A-Fa-f]+|\d+)\s*\]\s*=\s*\{{\n"
        rf"(\s*)#include\s*<([^>]+)>\n\}};",
        re.MULTILINE,
    )
    m = pat.search(src)
    if not m:
        sys.exit(f"no u8 {pool_sym}[...] decl found in {src_path}")
    pool_size = int(m.group(1), 0)
    indent = m.group(2) or "\t"
    inc_path = m.group(3)  # e.g. "MVOpeningYamabuki/Tex_pool.tex.inc.c"
    inc_dir = inc_path.split("/", 1)[0]  # "MVOpeningYamabuki"

    refs = collect_refs(expanded, pool_sym)
    print(f"{pool_sym}[0x{pool_size:X}]: {len(refs)} typed sub-blocks")

    # Build piece list covering [0, pool_size)
    pieces = []
    cursor = 0
    prefix = args.prefix if args.prefix else f"d{name}_"

    # Compute the start offset of the next ref for each ref (so we can grow
    # a palette into trailing zero space without colliding with the next
    # typed block).
    next_starts = [refs[i + 1][0] if i + 1 < len(refs) else pool_size
                   for i in range(len(refs))]

    for i, (off, kind, size, count) in enumerate(refs):
        if cursor < off:
            # Untyped gap before this ref
            gap_size = off - cursor
            pieces.append((cursor, gap_size, "gap", None, None))
            cursor = off
        if size <= 0:
            continue
        # gsDPLoadTLUTCmd(5, N) loads (N+1) entries but the storage backing
        # the TLUT is almost always a full 16-entry palette. If we declare a
        # u16[<16>] with non-multiple-of-2-entry count (i.e. byte size not
        # 4-aligned), IDO inserts alignment padding between this block and
        # the next, which breaks byte-identical layout. Round palettes up
        # to 16 entries when room exists before the next ref / pool end.
        if kind == "palette":
            room = next_starts[i] - off
            if size < 32 and room >= 32:
                size = 32                       # full 16-entry palette
            elif size % 4 != 0 and (size + (4 - size % 4)) <= room:
                size = size + (4 - size % 4)   # at least 4-byte align
        end = off + size
        # Cap at pool end
        if end > pool_size:
            end = pool_size
            size = end - off
        pieces.append((off, size, kind, count, None))
        cursor = end

    if cursor < pool_size:
        pieces.append((cursor, pool_size - cursor, "gap", None, None))

    # Generate new C source for the pool region.
    # `off` is pool-relative; `disp_off = off + base_off` is the file-absolute
    # offset used in symbol/include names (so existing file-offset convention
    # in fid 85's MBallRays blocks is preserved).
    # The inc.c filename mirrors the symbol name (minus the standard
    # `d<Name>_` module prefix) so multiple split pools in the same fid
    # don't collide on identical short suffixes like `data_0x0000.data.inc.c`.
    inc_prefix = prefix[len(f"d{name}_"):] if prefix.startswith(f"d{name}_") else ""
    out = []
    for off, size, kind, count, _ in pieces:
        # Skip 0-byte pieces (shouldn't happen)
        if size == 0:
            continue
        disp_off = off + base_off
        if kind == "Vtx":
            sym = f"{prefix}Vtx_0x{disp_off:04X}"
            inc = f"<{inc_dir}/{inc_prefix}Vtx_0x{disp_off:04X}.vtx.inc.c>"
            out.append(f"Vtx {sym}[{count}] = {{\n{indent}#include {inc}\n}};")
        elif kind == "Tex":
            sym = f"{prefix}Tex_0x{disp_off:04X}"
            inc = f"<{inc_dir}/{inc_prefix}Tex_0x{disp_off:04X}.tex.inc.c>"
            out.append(f"u8 {sym}[0x{size:X}] = {{\n{indent}#include {inc}\n}};")
        elif kind == "palette":
            sym = f"{prefix}palette_0x{disp_off:04X}"
            inc = f"<{inc_dir}/{inc_prefix}palette_0x{disp_off:04X}.palette.inc.c>"
            out.append(f"u16 {sym}[{size // 2}] = {{\n{indent}#include {inc}\n}};")
        else:  # gap
            sym = f"{prefix}data_0x{disp_off:04X}"
            inc = f"<{inc_dir}/{inc_prefix}data_0x{disp_off:04X}.data.inc.c>"
            out.append(f"u8 {sym}[0x{size:X}] = {{\n{indent}#include {inc}\n}};")

    new_block = "\n\n".join(out)

    # Replace the original Tex_pool decl with the new block list
    new_src = src[: m.start()] + new_block + src[m.end():]

    # Update .reloc: rewrite `<pool>+0xN` to the new sub-decl symbol
    # (with an inner offset if N lands in the middle of a typed block).
    if reloc_path.exists():
        reloc = reloc_path.read_text()
        # Build a sorted piece map: offset -> (sym, size)
        piece_map = []
        for off, size, kind, count, _ in pieces:
            if size == 0:
                continue
            disp_off = off + base_off
            if kind == "Vtx":
                sym = f"{prefix}Vtx_0x{disp_off:04X}"
            elif kind == "Tex":
                sym = f"{prefix}Tex_0x{disp_off:04X}"
            elif kind == "palette":
                sym = f"{prefix}palette_0x{disp_off:04X}"
            else:
                sym = f"{prefix}data_0x{disp_off:04X}"
            piece_map.append((off, off + size, sym))

        def rewrite_target(match):
            full_off = int(match.group(1), 16)
            for s, e, sym in piece_map:
                if s <= full_off < e:
                    inner = full_off - s
                    if inner == 0:
                        return sym
                    return f"{sym}+0x{inner:X}"
            return match.group(0)  # no match — leave alone

        new_reloc = re.sub(
            rf"\b{re.escape(pool_sym)}\+0x([0-9A-Fa-f]+)\b",
            rewrite_target,
            reloc,
        )
        # Also rewrite bare `<pool_sym>` at the head (offset 0 case)
        head_target = piece_map[0][2] if piece_map else pool_sym
        new_reloc = re.sub(
            rf"\b{re.escape(pool_sym)}\b(?!\+0x)",
            head_target,
            new_reloc,
        )
    else:
        new_reloc = None

    if args.dry:
        print(new_block[:500])
        print("...")
        print(f"\nReloc rewrites: {(reloc.count(pool_sym) if reloc_path.exists() else 0)} entries")
        return

    src_path.write_text(new_src)
    if new_reloc is not None:
        reloc_path.write_text(new_reloc)
    print(f"wrote {src_path} ({len(out)} sub-decls)")
    if new_reloc is not None:
        print(f"updated {reloc_path}")


if __name__ == "__main__":
    main()
