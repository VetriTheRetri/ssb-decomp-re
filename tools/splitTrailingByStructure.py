#!/usr/bin/env python3
"""Iteratively type a `u8 <sym>_trailing[N]` block by combining:
  * the file's chain-pointer walk (every reloc target inside the block),
  * structural pattern detection on the binary bytes:
      - DObjDLLink[2] arrays — `{ list<4, ptr }, { 4, NULL }`
      - Gfx DLs — anchored at any chain-pointer target whose `0xDF000000`
        terminator is reachable forward at 8-byte stride
      - Vtx[N] arrays — anchored at gsSPVertex chain-pointer targets,
        `count` from the gsSPVertex command's high byte field
      - u8 Tex blocks — anchored at gsDPSetTextureImage targets followed
        by a gsDPLoadBlock (size from `lrs` and the texture size code)
  * cross-decl chain entries from the file's `.reloc` (the parents whose
    `.dl` slots reach into our trailing block — DObjDesc, MObjSub, etc).

For every region of bytes that isn't claimed by one of the above, emits
a residual `u8 <prefix>_data_0xN[…]` chunk. Re-runnable: a fully-tiled
trailing block produces zero changes on a second pass.

Usage:
    python3 tools/splitTrailingByStructure.py <fid> <trailing_sym>
"""

import argparse
import re
import struct
import subprocess
import sys
from pathlib import Path


PROJECT = Path(__file__).resolve().parent.parent
SRC = PROJECT / "src" / "relocData"


def load_symbols(o_path):
    """Return [(byte_off, sym_name)] sorted by offset, plus a name->off map."""
    out = subprocess.run(
        ["nm", str(o_path)], capture_output=True, text=True, check=True
    ).stdout
    syms = []
    for line in out.splitlines():
        parts = line.split()
        if len(parts) >= 3 and parts[1] in ("D", "d"):
            syms.append((int(parts[0], 16), parts[2]))
    syms.sort()
    name_to_off = {n: o for o, n in syms}
    return syms, name_to_off


def sym_size(syms_sorted, sym_off, file_size):
    """Distance to the next symbol (or end of file)."""
    for i, (o, _) in enumerate(syms_sorted):
        if o == sym_off:
            return (syms_sorted[i + 1][0] - o) if i + 1 < len(syms_sorted) else file_size - o
    return 0


def parse_reloc(reloc_path):
    """Yield (kind, ptr_label, target_label) for each entry."""
    if not reloc_path.exists():
        return
    for line in reloc_path.read_text().splitlines():
        line = line.split("#", 1)[0].strip()
        if not line:
            continue
        parts = line.split()
        if len(parts) == 3 and parts[0] in ("intern", "extern"):
            yield parts[0], parts[1], parts[2]


def label_to_off(label, name_to_off):
    """Resolve `<sym>+0xN` or `<sym>` to a byte offset; None if unresolvable."""
    m = re.match(r"^(\w+)(?:\+0x([0-9A-Fa-f]+))?$", label)
    if not m:
        return None
    sym = m.group(1)
    delta = int(m.group(2), 16) if m.group(2) else 0
    if sym not in name_to_off:
        return None
    return name_to_off[sym] + delta


# F3DEX2 opcodes we care about
G_NOOP = 0x00
G_VTX = 0x01
G_TRI1 = 0x05
G_TRI2 = 0x06
G_QUAD = 0x07
G_DL = 0xDE
G_ENDDL = 0xDF
G_PIPESYNC = 0xE7
G_LOADSYNC = 0xE6
G_LOADBLOCK = 0xF3
G_SETTIMG = 0xFD


def gfx_walk_to_end(data, start, max_walk=4096):
    """Walk Gfx commands from `start` (8-byte stride) until gsSPEndDisplayList.
    Returns the byte position right after the EndDL, or None if not found
    within max_walk bytes."""
    pos = start
    end = min(start + max_walk, len(data))
    while pos + 8 <= end:
        op = data[pos]
        if op == G_ENDDL:
            return pos + 8
        pos += 8
    return None


def collect_dl_inner_refs(data, dl_start, dl_end):
    """Walk a Gfx DL and return references it makes (Vtx/Tex/Pal).
    Each ref is (kind, target_byte_off, count_or_size).
    The chain-encoded second word of relevant commands is decoded as
    `target_byte = (word & 0xFFFF) * 4`."""
    refs = []
    pos = dl_start
    pending_setimg = None  # (siz_bits, target_byte) — resolved by next LoadBlock
    while pos + 8 <= dl_end:
        w0 = struct.unpack(">I", data[pos:pos+4])[0]
        w1 = struct.unpack(">I", data[pos+4:pos+8])[0]
        op = (w0 >> 24) & 0xFF
        if op == G_VTX:
            # F3DEX2: word0 has count and dest_index encoded; precise count
            # is bits 19-12 of word0 (numv = (w0 >> 12) & 0xFF, length = numv*0x10).
            numv = (w0 >> 12) & 0xFF
            target_byte = (w1 & 0xFFFF) * 4
            refs.append(("Vtx", target_byte, numv))
        elif op == G_SETTIMG:
            siz = (w0 >> 19) & 0x3
            target_byte = (w1 & 0xFFFF) * 4
            pending_setimg = (siz, target_byte)
        elif op == G_LOADBLOCK and pending_setimg is not None:
            siz, target_byte = pending_setimg
            lrs = (w1 >> 12) & 0xFFF
            # bytes-per-texel from siz: 0=4b/2, 1=8b/1, 2=16b/2, 3=32b/4
            bpp_table = {0: 0.5, 1: 1, 2: 2, 3: 4}
            nbytes = int((lrs + 1) * bpp_table.get(siz, 2))
            refs.append(("Tex", target_byte, nbytes))
            pending_setimg = None
        elif op == G_DL:
            # gsSPDisplayList — target is a Gfx DL
            target_byte = (w1 & 0xFFFF) * 4
            refs.append(("DL", target_byte, None))
        pos += 8
    return refs


def is_dobjdllink_pair(data, off):
    """True if bytes at `off` look like a DObjDLLink[2]:
       { list<4, ptr_nonzero }, { 4, NULL } — 16 bytes total."""
    if off + 16 > len(data):
        return False
    w0, w1, w2, w3 = struct.unpack(">IIII", data[off:off+16])
    return w0 < 4 and w1 != 0 and w2 == 4 and w3 == 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", type=int)
    ap.add_argument("trailing", help="trailing symbol name (e.g. dXxx_LegsAnimJoint_trailing)")
    ap.add_argument("--version", default="us", choices=("us", "jp"))
    ap.add_argument("--report", action="store_true",
                    help="print region map only (no source rewrite)")
    args = ap.parse_args()

    fid = args.fid
    src_path = next(SRC.glob(f"{fid}_*.c"), None)
    if src_path is None:
        sys.exit(f"no src/{fid}_*.c")
    name = src_path.stem.split("_", 1)[1]
    bin_path = PROJECT / "build" / args.version / "assets" / args.version / "relocData" / f"{fid}.vpk0.bin"
    o_path = PROJECT / "build" / args.version / "src" / "relocData" / ".build" / f"{fid}.o"
    reloc_path = SRC / f"{fid}_{name}.reloc"

    data = bin_path.read_bytes()
    syms_sorted, name_to_off = load_symbols(o_path)
    if args.trailing not in name_to_off:
        sys.exit(f"no symbol {args.trailing}")
    trail_off = name_to_off[args.trailing]
    trail_size = sym_size(syms_sorted, trail_off, len(data))
    trail_end = trail_off + trail_size

    print(f"{args.trailing} @ 0x{trail_off:X} size 0x{trail_size:X}")

    # 1) Collect every chain-pointer target landing in [trail_off, trail_end)
    intern_targets = set()
    extern_targets = set()
    for kind, ptr, tgt in parse_reloc(reloc_path):
        toff = label_to_off(tgt, name_to_off)
        if toff is None:
            continue
        if not (trail_off <= toff < trail_end):
            continue
        if kind == "intern":
            intern_targets.add(toff - trail_off)
        else:
            extern_targets.add(toff - trail_off)

    print(f"  reloc targets inside: {len(intern_targets)} intern + {len(extern_targets)} extern")

    # 2) Detect DObjDLLink[2] arrays at every 4-byte boundary.
    #    Restrict to candidates that are referenced from outside (DObjDesc.dl,
    #    MObjSub.sprites, etc.) — per the .reloc — so we don't false-positive
    #    on coincidental {1, x} {4, 0} patterns embedded in script payload.
    dobjdllink_refs = set()
    for kind, ptr, tgt in parse_reloc(reloc_path):
        # Reverse direction: ptr is the slot that holds a pointer; tgt is
        # what it points at. For .dl/DObjDLLink targets we want the *target*
        # to be inside our trailing.
        toff = label_to_off(tgt, name_to_off)
        if toff is None or not (trail_off <= toff < trail_end):
            continue
        # Filter ptr_label to DObjDesc.dl-shaped entries: parent is a
        # DObjDesc array, ptr offset hits the .dl field (offset within
        # entry == 0x4, entry stride == 0x2C).
        m = re.match(r"^(\w+)(?:\+0x([0-9A-Fa-f]+))?$", ptr)
        if not m:
            continue
        pname = m.group(1)
        pdelta = int(m.group(2), 16) if m.group(2) else 0
        if "DObjDesc" in pname and pdelta % 0x2C == 0x4:
            if is_dobjdllink_pair(data, toff):
                dobjdllink_refs.add(toff - trail_off)

    print(f"  DObjDLLink[2] arrays found: {sorted(hex(x) for x in dobjdllink_refs)}")

    # 3) Each DObjDLLink[2]'s first entry has a pointer to a Gfx DL.
    #    Extract those targets; they're DL heads.
    dl_heads = set()
    for off in dobjdllink_refs:
        w1 = struct.unpack(">I", data[trail_off+off+4:trail_off+off+8])[0]
        tgt_byte = (w1 & 0xFFFF) * 4
        if trail_off <= tgt_byte < trail_end:
            dl_heads.add(tgt_byte - trail_off)

    # 4) Walk every reloc-target whose bytes look like a Gfx DL anchor
    #    (gsDPPipeSync at offset 0). Walk to gsSPEndDisplayList to find size.
    for toff in intern_targets | extern_targets:
        abs_off = trail_off + toff
        if abs_off + 8 > len(data):
            continue
        if data[abs_off] == G_PIPESYNC:
            dl_heads.add(toff)

    # Compute DL ranges and walk them for Vtx/Tex refs
    dl_ranges = {}      # head_off -> (head_off, end_off)
    vtx_refs = {}       # head_off -> count
    tex_refs = {}       # head_off -> size
    pending_dl_heads = set(dl_heads)
    while pending_dl_heads:
        head = pending_dl_heads.pop()
        if head in dl_ranges:
            continue
        end = gfx_walk_to_end(data, trail_off + head)
        if end is None or end > trail_end:
            continue
        dl_ranges[head] = (head, end - trail_off)
        # walk for inner refs
        inner = collect_dl_inner_refs(data, trail_off + head, end)
        for kind, target_byte, info in inner:
            tgt_off_in_trail = target_byte - trail_off
            if not (0 <= tgt_off_in_trail < trail_size):
                continue
            if kind == "Vtx":
                vtx_refs[tgt_off_in_trail] = max(vtx_refs.get(tgt_off_in_trail, 0), info)
            elif kind == "Tex":
                tex_refs[tgt_off_in_trail] = max(tex_refs.get(tgt_off_in_trail, 0), info)
            elif kind == "DL":
                pending_dl_heads.add(tgt_off_in_trail)

    print(f"  Gfx DLs: {len(dl_ranges)}, Vtx targets: {len(vtx_refs)}, Tex targets: {len(tex_refs)}")

    # 5) Build the region map. Order: ascending offset.
    regions = []  # (start, end, kind, count_or_None)
    for off in dobjdllink_refs:
        regions.append((off, off + 16, "DObjDLLink", 2))
    for off, (s, e) in dl_ranges.items():
        regions.append((s, e, "Gfx", (e - s) // 8))
    for off, count in vtx_refs.items():
        regions.append((off, off + count * 16, "Vtx", count))
    for off, size in tex_refs.items():
        regions.append((off, off + size, "Tex", size))

    # Resolve overlaps: prefer DObjDLLink > Gfx > Vtx > Tex. Sort then dedup.
    priority = {"DObjDLLink": 0, "Gfx": 1, "Vtx": 2, "Tex": 3}
    regions.sort(key=lambda r: (r[0], priority[r[2]]))
    merged = []
    for s, e, k, c in regions:
        if merged and s < merged[-1][1]:
            # Overlap — keep the higher-priority one (lower priority number)
            ms, me, mk, mc = merged[-1]
            if priority[k] < priority[mk]:
                merged[-1] = (s, e, k, c)
            else:
                pass  # discard new
            continue
        merged.append((s, e, k, c))

    # Fill gaps with `u8 _data_0xN[N]`
    full = []
    cursor = 0
    for s, e, k, c in merged:
        if cursor < s:
            full.append((cursor, s, "u8data", s - cursor))
        full.append((s, e, k, c))
        cursor = e
    if cursor < trail_size:
        full.append((cursor, trail_size, "u8data", trail_size - cursor))

    print()
    print(f"=== Region map ({len(full)} pieces) ===")
    for s, e, k, c in full:
        sz = e - s
        suffix = ""
        if k == "Gfx":
            suffix = f" ({c} cmds)"
        elif k == "Vtx":
            suffix = f" ({c} verts)"
        elif k == "DObjDLLink":
            suffix = f" ({c} entries)"
        print(f"  +0x{s:04X}..+0x{e:04X}  ({sz:5d} B)  {k}{suffix}")

    if args.report:
        return

    # 6) Generate the new C decls and write them.
    prefix = re.sub(r"_trailing$", "", args.trailing).removeprefix("d")  # e.g. "MVOpeningYamabuki_LegsAnimJoint"
    file_subdir = name  # used for #include path

    src = src_path.read_text()

    new_decls = []
    forward_externs = []
    rename_map = {}  # old_offset_label -> new_label

    for s, e, k, c in full:
        sz = e - s
        if k == "DObjDLLink":
            sym = f"d{prefix}_DLLink_0x{s:04X}"
            # Read the 16 bytes
            w0, w1, w2, w3 = struct.unpack(">IIII", data[trail_off+s:trail_off+s+16])
            # The chain-encoded ptr at +4 will be rewritten by fixRelocChain;
            # pick the symbolic target from the DL we identified.
            tgt_byte = (w1 & 0xFFFF) * 4
            tgt_in_trail = tgt_byte - trail_off
            tgt_sym = None
            for fs, fe, fk, _ in full:
                if fk == "Gfx" and fs == tgt_in_trail:
                    tgt_sym = f"d{prefix}_DL_0x{fs:04X}"
                    break
            ptr_str = tgt_sym if tgt_sym else f"((Gfx*)((u8*){args.trailing} + 0x{tgt_in_trail:X}))"
            forward_externs.append(f"extern Gfx {tgt_sym}[];" if tgt_sym else "")
            new_decls.append(
                f"DObjDLLink {sym}[2] = {{\n"
                f"\t{{ {w0}, {ptr_str} }},\n"
                f"\t{{ 4, NULL }},\n"
                f"}};"
            )
            rename_map[s] = sym
        elif k == "Gfx":
            sym = f"d{prefix}_DL_0x{s:04X}"
            inc = f"<{file_subdir}/{prefix.split('_', 1)[1]}_DL_0x{s:04X}.dl.inc.c>"
            new_decls.append(
                f"Gfx {sym}[{c}] = {{\n"
                f"\t#include {inc}\n"
                f"}};"
            )
            rename_map[s] = sym
        elif k == "Vtx":
            sym = f"d{prefix}_Vtx_0x{s:04X}"
            inc = f"<{file_subdir}/{prefix.split('_', 1)[1]}_Vtx_0x{s:04X}.vtx.inc.c>"
            new_decls.append(
                f"Vtx {sym}[{c}] = {{\n"
                f"\t#include {inc}\n"
                f"}};"
            )
            rename_map[s] = sym
        elif k == "Tex":
            sym = f"d{prefix}_Tex_0x{s:04X}"
            inc = f"<{file_subdir}/{prefix.split('_', 1)[1]}_Tex_0x{s:04X}.tex.inc.c>"
            new_decls.append(
                f"u8 {sym}[0x{sz:X}] = {{\n"
                f"\t#include {inc}\n"
                f"}};"
            )
            rename_map[s] = sym
        else:  # u8data — gap
            # Use PAD if all-zero, else u8 data block
            blob = data[trail_off+s:trail_off+e]
            if all(b == 0 for b in blob):
                new_decls.append(f"PAD({sz});")
            else:
                sym = f"d{prefix}_data_0x{s:04X}"
                inc = f"<{file_subdir}/{prefix.split('_', 1)[1]}_data_0x{s:04X}.data.inc.c>"
                new_decls.append(
                    f"u8 {sym}[0x{sz:X}] = {{\n"
                    f"\t#include {inc}\n"
                    f"}};"
                )
                rename_map[s] = sym

    new_block = "\n\n".join(new_decls)

    # Replace the existing `u8 <trailing>[N] = { #include … };` decl
    pat = re.compile(
        rf"(?:/\*[^*]*\*/\s*)*"
        rf"u8\s+{re.escape(args.trailing)}\s*\[(?:\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{{\n"
        rf"\s*#include\s*<[^>]+>\n"
        rf"\}};",
        re.MULTILINE,
    )
    m = pat.search(src)
    if not m:
        sys.exit(f"could not locate `u8 {args.trailing}[…]` decl in {src_path}")

    new_src = src[:m.start()] + new_block + src[m.end():]
    src_path.write_text(new_src)
    print(f"\nwrote {src_path}: replaced trailing block with {len(full)} sub-decls")

    # 7) Update .reloc — every entry pointing into the trailing block at an
    #    offset matching one of our new sub-syms gets retargeted; cross-decl
    #    refs (DObjDesc.dl in other arrays) get retargeted too.
    if reloc_path.exists():
        reloc_text = reloc_path.read_text()
        out_lines = []
        # Build: trail-relative offset -> new sym
        # rename_map already has this for the new decls.
        offset_to_sym = sorted(rename_map.items())

        def find_containing(off_in_trail):
            for i in range(len(offset_to_sym) - 1, -1, -1):
                fs, fsym = offset_to_sym[i]
                if fs <= off_in_trail:
                    return fs, fsym
            return None

        def rewrite_label(label):
            m = re.match(r"^(\w+)(?:\+0x([0-9A-Fa-f]+))?$", label)
            if not m:
                return label
            sym = m.group(1)
            if sym != args.trailing:
                return label
            delta = int(m.group(2), 16) if m.group(2) else 0
            hit = find_containing(delta)
            if hit is None:
                return label
            fs, fsym = hit
            inner = delta - fs
            return fsym if inner == 0 else f"{fsym}+0x{inner:X}"

        for line in reloc_text.split("\n"):
            stripped = line.split("#", 1)[0].strip()
            if not stripped:
                out_lines.append(line)
                continue
            parts = stripped.split()
            if len(parts) != 3 or parts[0] not in ("intern", "extern"):
                out_lines.append(line)
                continue
            new_ptr = rewrite_label(parts[1])
            new_tgt = rewrite_label(parts[2])
            comment = ""
            if "#" in line:
                comment = line[line.index("#"):]
            new_line = f"{parts[0]} {new_ptr} {new_tgt}"
            if comment:
                new_line = new_line + " " + comment
            out_lines.append(new_line)
        reloc_path.write_text("\n".join(out_lines))
        print(f"updated {reloc_path}")


if __name__ == "__main__":
    main()
