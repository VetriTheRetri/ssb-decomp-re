#!/usr/bin/env python3
"""typeMObjSubPreArray.py — detect and fix MObjSub blocks that are
mistyped as `MObjSub X[N]` but actually start with a leading
`MObjSub *X_pre[2]` pointer array followed by N MObjSubs.

Symptom: the source has `MObjSub X[N]` plus a sibling `MObjSub
*X_PtrArray[]` table whose entries reference `(u8*)X + 0x08`,
`(u8*)X + 0x80`, `(u8*)X + 0xF8`, …  matching the pattern 8 + k*0x78
(0x78 = sizeof MObjSub). The runtime sees X as { pre[2]; bodies[N]; }
not as MObjSub[N].

Fix: split the block into
    MObjSub *X_pre[2] = { NULL, (MObjSub *)X_PtrArray };
    MObjSub X[N] = { /* each body re-derived from bytes 0x8..0x78N+8 */ };
…with new body-init values matching the shifted bytes, then drop the
2 leading NULL entries from the PtrArray and update its body
references to bare pointers.

Conservative: only acts when ALL of these hold:
  * `MObjSub X[N]` decl exists,
  * a partner `MObjSub *X_PtrArray[]` (any *PtrArray name) exists whose
    entries at positions [2..N+1] are exactly `(u8*)X + (0x8 + k*0x78)`,
  * positions [0], [1], [N+2] of PtrArray are NULL,
  * X[0]'s sprites field initializer is a chain ref to PtrArray+0x8.

Usage:
    tools/typeMObjSubPreArray.py <fid> [--dry-run]
"""

import argparse
import os
import re
import struct
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR_US = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")


# MObjSub byte layout — (offset, name, kind, length).
# Used to emit C init from raw 120 bytes.
MOBJSUB_LAYOUT = [
    (0x00, "pad00",       "u16",  2),
    (0x02, "fmt",         "fmt",  1),
    (0x03, "siz",         "siz",  1),
    (0x04, "sprites",     "ptr",  4),
    (0x08, "unk08",       "u16",  2),
    (0x0A, "unk0A",       "u16",  2),
    (0x0C, "unk0C",       "u16",  2),
    (0x0E, "unk0E",       "u16",  2),
    (0x10, "unk10",       "s32",  4),
    (0x14, "trau",        "f32",  4),
    (0x18, "trav",        "f32",  4),
    (0x1C, "scau",        "f32",  4),
    (0x20, "scav",        "f32",  4),
    (0x24, "unk24",       "f32",  4),
    (0x28, "unk28",       "f32",  4),
    (0x2C, "palettes",    "ptr",  4),
    (0x30, "flags",       "u16",  2),
    (0x32, "block_fmt",   "fmt",  1),
    (0x33, "block_siz",   "siz",  1),
    (0x34, "block_dxt",   "u16",  2),
    (0x36, "unk36",       "u16",  2),
    (0x38, "unk38",       "u16",  2),
    (0x3A, "unk3A",       "u16",  2),
    (0x3C, "scrollu",     "f32",  4),
    (0x40, "scrollv",     "f32",  4),
    (0x44, "unk44",       "f32",  4),
    (0x48, "unk48",       "f32",  4),
    (0x4C, "unk4C",       "u32",  4),
    (0x50, "primcolor",   "sycol",4),
    (0x54, "prim_l",      "u8",   1),
    (0x55, "prim_m",      "u8",   1),
    (0x56, "prim_pad",    "u8x2", 2),
    (0x58, "envcolor",    "sycol",4),
    (0x5C, "blendcolor",  "sycol",4),
    (0x60, "light1color", "sycol",4),
    (0x64, "light2color", "sycol",4),
    (0x68, "unk68",       "s32",  4),
    (0x6C, "unk6C",       "s32",  4),
    (0x70, "unk70",       "s32",  4),
    (0x74, "unk74",       "s32",  4),
]
MOBJSUB_SIZE = 0x78  # 120 bytes


FMT_NAMES = {
    0: "G_IM_FMT_RGBA",
    1: "G_IM_FMT_YUV",
    2: "G_IM_FMT_CI",
    3: "G_IM_FMT_IA",
    4: "G_IM_FMT_I",
}
SIZ_NAMES = {
    0: "G_IM_SIZ_4b",
    1: "G_IM_SIZ_8b",
    2: "G_IM_SIZ_16b",
    3: "G_IM_SIZ_32b",
}


def fmt_token(b):
    return FMT_NAMES.get(b, f"0x{b:02X}")


def siz_token(b):
    return SIZ_NAMES.get(b, f"0x{b:02X}")


def f32_token(w):
    f = struct.unpack(">f", struct.pack(">I", w))[0]
    # Use simple `0.0f`/`1.0f` forms for common values
    if w == 0:
        return "0.0f"
    if w == 0x3F800000:
        return "1.0f"
    # Otherwise emit the raw hex through a punned float
    if f != f or f == float("inf") or f == -float("inf"):
        # NaN/Inf — bail to raw bits via memcpy idiom; just use raw hex
        return f"/* 0x{w:08X} */ 0.0f"
    return f"{f!r}f"


def render_mobjsub_init(b, indent="\t\t"):
    """Render `b` (120 bytes) as a brace-enclosed MObjSub initializer."""
    lines = ["{"]
    # Hand-format the canonical layout used by the existing codebase
    pad00 = struct.unpack_from(">H", b, 0x00)[0]
    fmt   = b[0x02]
    siz   = b[0x03]
    sprites_w = struct.unpack_from(">I", b, 0x04)[0]
    unk08 = struct.unpack_from(">H", b, 0x08)[0]
    unk0A = struct.unpack_from(">H", b, 0x0A)[0]
    unk0C = struct.unpack_from(">H", b, 0x0C)[0]
    unk0E = struct.unpack_from(">H", b, 0x0E)[0]
    unk10 = struct.unpack_from(">i", b, 0x10)[0]
    trau  = struct.unpack_from(">I", b, 0x14)[0]
    trav  = struct.unpack_from(">I", b, 0x18)[0]
    scau  = struct.unpack_from(">I", b, 0x1C)[0]
    scav  = struct.unpack_from(">I", b, 0x20)[0]
    u24   = struct.unpack_from(">I", b, 0x24)[0]
    u28   = struct.unpack_from(">I", b, 0x28)[0]
    palettes_w = struct.unpack_from(">I", b, 0x2C)[0]
    flags = struct.unpack_from(">H", b, 0x30)[0]
    bfmt  = b[0x32]
    bsiz  = b[0x33]
    bdxt  = struct.unpack_from(">H", b, 0x34)[0]
    u36   = struct.unpack_from(">H", b, 0x36)[0]
    u38   = struct.unpack_from(">H", b, 0x38)[0]
    u3A   = struct.unpack_from(">H", b, 0x3A)[0]
    scrollu = struct.unpack_from(">I", b, 0x3C)[0]
    scrollv = struct.unpack_from(">I", b, 0x40)[0]
    u44 = struct.unpack_from(">I", b, 0x44)[0]
    u48 = struct.unpack_from(">I", b, 0x48)[0]
    u4C = struct.unpack_from(">I", b, 0x4C)[0]
    primcolor = b[0x50:0x54]
    prim_l = b[0x54]
    prim_m = b[0x55]
    prim_pad = b[0x56:0x58]
    envcolor = b[0x58:0x5C]
    blendcolor = b[0x5C:0x60]
    light1color = b[0x60:0x64]
    light2color = b[0x64:0x68]
    u68 = struct.unpack_from(">i", b, 0x68)[0]
    u6C = struct.unpack_from(">i", b, 0x6C)[0]
    u70 = struct.unpack_from(">i", b, 0x70)[0]
    u74 = struct.unpack_from(">i", b, 0x74)[0]

    sprites_init = "(void**)0x00000000" if sprites_w == 0 else f"(void**)0x{sprites_w:08X}"
    palettes_init = "(void**)0x00000000" if palettes_w == 0 else f"(void**)0x{palettes_w:08X}"

    lines.append(f"{indent}\t0x{pad00:04X},")
    lines.append(f"{indent}\t{fmt_token(fmt)}, {siz_token(siz)},")
    lines.append(f"{indent}\t{sprites_init},")
    lines.append(f"{indent}\t0x{unk08:04X}, 0x{unk0A:04X}, 0x{unk0C:04X}, 0x{unk0E:04X},")
    lines.append(f"{indent}\t{unk10},")
    lines.append(f"{indent}\t{f32_token(trau)}, {f32_token(trav)},")
    lines.append(f"{indent}\t{f32_token(scau)}, {f32_token(scav)},")
    lines.append(f"{indent}\t{f32_token(u24)}, {f32_token(u28)},")
    lines.append(f"{indent}\t{palettes_init},")
    lines.append(f"{indent}\t0x{flags:04X},")
    lines.append(f"{indent}\t{fmt_token(bfmt)}, {siz_token(bsiz)},")
    lines.append(f"{indent}\t0x{bdxt:04X},")
    lines.append(f"{indent}\t0x{u36:04X}, 0x{u38:04X}, 0x{u3A:04X},")
    lines.append(f"{indent}\t{f32_token(scrollu)}, {f32_token(scrollv)},")
    lines.append(f"{indent}\t{f32_token(u44)}, {f32_token(u48)},")
    lines.append(f"{indent}\t0x{u4C:08X},")
    lines.append(f"{indent}\t{{ {{ 0x{primcolor[0]:02X}, 0x{primcolor[1]:02X}, 0x{primcolor[2]:02X}, 0x{primcolor[3]:02X} }} }},")
    lines.append(f"{indent}\t0x{prim_l:02X}, 0x{prim_m:02X}, {{ 0x{prim_pad[0]:02X}, 0x{prim_pad[1]:02X} }},")
    lines.append(f"{indent}\t{{ {{ 0x{envcolor[0]:02X}, 0x{envcolor[1]:02X}, 0x{envcolor[2]:02X}, 0x{envcolor[3]:02X} }} }},")
    lines.append(f"{indent}\t{{ {{ 0x{blendcolor[0]:02X}, 0x{blendcolor[1]:02X}, 0x{blendcolor[2]:02X}, 0x{blendcolor[3]:02X} }} }},")
    lines.append(f"{indent}\t{{ {{ 0x{light1color[0]:02X}, 0x{light1color[1]:02X}, 0x{light1color[2]:02X}, 0x{light1color[3]:02X} }} }},")
    lines.append(f"{indent}\t{{ {{ 0x{light2color[0]:02X}, 0x{light2color[1]:02X}, 0x{light2color[2]:02X}, 0x{light2color[3]:02X} }} }},")
    lines.append(f"{indent}\t{u68}, {u6C},")
    lines.append(f"{indent}\t{u70}, {u74},")
    lines.append(f"{indent}}}")
    return "\n".join(lines)


def get_obj_path(fid, version="us"):
    return os.path.join(PROJECT_DIR, "build", version, "src", "relocData",
                        ".build", f"{fid}.o")


def read_o_section_bytes(fid):
    """Return the .data section bytes of build/us/src/relocData/.build/<fid>.o."""
    o = get_obj_path(fid)
    if not os.path.isfile(o):
        return None
    # Use objcopy to extract .data
    tmp = f"/tmp/_mobjsub_{fid}.bin"
    subprocess.run(
        ["mips-linux-gnu-objcopy", "-O", "binary", "--only-section=.data",
         o, tmp], check=True)
    with open(tmp, "rb") as f:
        data = f.read()
    os.unlink(tmp)
    return data


def get_symbol_offsets(fid):
    """Return {sym_name: byte_offset_in_data}."""
    o = get_obj_path(fid)
    out = subprocess.check_output(
        ["mips-linux-gnu-readelf", "-W", "-s", o], text=True)
    syms = {}
    for line in out.splitlines():
        parts = line.split()
        if len(parts) >= 8 and parts[3] == "OBJECT" and parts[6] == "4":
            try:
                addr = int(parts[1], 16)
                syms[parts[7]] = addr
            except ValueError:
                pass
    return syms


# Detection + rewriting -----------------------------------------------------

DECL_MOBJSUB_RE = re.compile(
    r"^MObjSub\s+(?P<name>d[A-Za-z_][A-Za-z_0-9]*_MObjSub)\s*"
    r"\[\s*(?P<n>\d+)\s*\]\s*=\s*\{")
DECL_PTR_TABLE_RE = re.compile(
    r"^(?:MObjSub\s*\*|void\s*\*)\s*(?P<name>d[A-Za-z_][A-Za-z_0-9]*)"
    r"\s*\[\s*(?P<size>\d*)\s*\]\s*=\s*\{")

# Matches either `(MObjSub *)((u8 *)X + 0xN)` or `(void *)((u8 *)&X + 0xN)`.
PTR_TABLE_REF_RE = re.compile(
    r"\((?:MObjSub\s*\*|void\s*\*)\)\s*\(\s*\(u8\s*\*\)\s*&?\s*"
    r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*\+\s*0x(?P<off>[0-9A-Fa-f]+)\s*\)")


def find_decl_block(lines, start_idx):
    """Return (head_line, end_line) for the decl whose `{` opens at
    lines[start_idx]. end_line is the line containing the matching `};`."""
    depth = 1
    j = start_idx + 1
    while j < len(lines) and depth > 0:
        ls = lines[j].strip()
        if ls == "};":
            depth -= 1
            if depth == 0:
                return j
        j += 1
    return None


def detect_mistypings(path):
    """Yield (name, n, head_line, end_line, ptr_array_name, ptr_array_head,
    ptr_array_end, ptr_array_ctype) tuples for every `MObjSub X[N]` decl
    in `path` that fits the mistyping pattern."""
    with open(path) as f:
        lines = f.read().split("\n")
    decls = []
    i = 0
    while i < len(lines):
        m = DECL_MOBJSUB_RE.match(lines[i].strip())
        if m:
            end = find_decl_block(lines, i)
            if end is not None:
                decls.append(("body", m.group("name"), int(m.group("n")), i, end, "MObjSub"))
            i = end + 1 if end else i + 1
            continue
        m = DECL_PTR_TABLE_RE.match(lines[i].strip())
        if m:
            end = find_decl_block(lines, i)
            if end is not None:
                # Detect the declared inner pointer ctype from the line.
                head = lines[i].strip()
                ctype = "MObjSub *" if head.startswith("MObjSub") else "void *"
                decls.append(("ptr", m.group("name"), None, i, end, ctype))
            i = end + 1 if end else i + 1
            continue
        i += 1
    # Pair each MObjSub X[N] with its sibling PtrArray (named X_PtrArray
    # or similar, AND referenced from X[0]'s sprites field).
    by_kind = {"body": [], "ptr": []}
    for k, name, n, h, e, ctype in decls:
        by_kind[k].append((name, n, h, e, ctype))

    findings = []
    for body_name, n, body_head, body_end, _body_ctype in by_kind["body"]:
        # Find PtrArray candidate: a u32* table whose name starts with
        # body_name AND ends with PtrArray, OR a gap_/PtrArray that the
        # body references in its sprites field.
        # Strategy: scan the body's first init for the sprites chain ref.
        head_to_body0_sprites = "\n".join(lines[body_head:body_end + 1])
        m = re.search(
            r"\(void\s*\*\*\)\s*\(\s*\(u8\s*\*\)\s*"
            r"(?P<sym>d[A-Za-z_][A-Za-z_0-9]*)\s*\+\s*0x8\s*\)",
            head_to_body0_sprites)
        if not m:
            continue
        sibling_name = m.group("sym")
        # Verify sibling is in our pointer-table decls
        sib_match = next(((n_, h_, e_, ct_) for (nm, n_, h_, e_, ct_)
                          in by_kind["ptr"] if nm == sibling_name), None)
        if sib_match is None:
            continue
        _, sib_head, sib_end, sib_ctype = sib_match
        # Verify sibling entries [2..N+1] are body refs at 0x08+k*0x78.
        body_refs = []
        for k in range(sib_head + 1, sib_end):
            for rm in PTR_TABLE_REF_RE.finditer(lines[k]):
                body_refs.append((k, rm.group("sym"), int(rm.group("off"), 16)))
        # Filter: refs targeting body_name
        body_targeted = [(ln, off) for (ln, sym, off) in body_refs
                          if sym == body_name]
        if len(body_targeted) != n:
            continue
        expected_offs = [0x8 + k * MOBJSUB_SIZE for k in range(n)]
        actual_offs = sorted(off for (_, off) in body_targeted)
        if actual_offs != expected_offs:
            continue
        findings.append({
            "body_name": body_name, "n": n,
            "body_head": body_head, "body_end": body_end,
            "ptr_name": sibling_name,
            "ptr_head": sib_head, "ptr_end": sib_end,
            "ptr_ctype": sib_ctype,
        })
    return lines, findings


def rewrite_reloc(reloc_path, fixups):
    """For each (body_name, ptr_name, n) tuple in fixups, rewrite labels
    in the .reloc file:
      <body>+(0x8 + k*0x78)  →  <body>+(k*0x78)
      <body>+0x4             →  <body>_pre+0x4
      <ptr>+(0x8 + k*4)      →  <ptr>+(k*4)
    """
    with open(reloc_path) as f:
        text = f.read()
    for body, ptr, n in fixups:
        # body+0x4 → body_pre+0x4 (only this exact byte offset)
        text = re.sub(
            rf"\b{re.escape(body)}\+0x4\b",
            f"{body}_pre+0x4",
            text)
        # body+(0x8 + k*0x78) → body[+(k*0x78)] for k in 0..n-1
        for k in range(n):
            old_off = 0x8 + k * MOBJSUB_SIZE
            new_off = k * MOBJSUB_SIZE
            old_label = f"{body}+0x{old_off:X}"
            if new_off == 0:
                new_label = body
            else:
                new_label = f"{body}+0x{new_off:X}"
            text = re.sub(rf"\b{re.escape(old_label)}\b", new_label, text)
        # ptr+0x8 → ptr (and ptr+0xC → ptr+0x4 etc.)
        # Adjust all entries by -0x8 if they're at +0x8 or beyond.
        # We process specific known offsets to avoid clobbering unrelated ones.
        for k in range(n):
            old_off = 0x8 + k * 4
            new_off = k * 4
            old_label = f"{ptr}+0x{old_off:X}"
            if new_off == 0:
                new_label = ptr
            else:
                new_label = f"{ptr}+0x{new_off:X}"
            text = re.sub(rf"\b{re.escape(old_label)}\b", new_label, text)
    with open(reloc_path, "w") as f:
        f.write(text)


def rewrite_file(path, fid, dry_run=False):
    lines, findings = detect_mistypings(path)
    if not findings:
        return 0
    # The .o must reflect the CURRENT source's intended byte layout, not
    # a stale state from a prior tool run. Force rebuild before reading.
    o = get_obj_path(fid)
    if not os.path.isfile(o):
        print(f"  building {o} (needed for byte read)…")
        subprocess.run(
            ["make", f"VERSION=us", "RELOC_DATA=1", o],
            cwd=PROJECT_DIR, check=True, capture_output=True)
    data = read_o_section_bytes(fid)
    syms = get_symbol_offsets(fid)
    n_fixed = 0
    fixups_for_reloc = []
    # Process in reverse line order so line indices stay valid.
    # IMPORTANT: each finding records body_head, body_end, ptr_head,
    # ptr_end *before* any rewriting. Because we process in reverse and
    # body is ALWAYS earlier than its ptr in the file (decl order), we
    # rewrite PtrArray first then body.
    findings.sort(key=lambda f: -max(f["body_head"], f["ptr_head"]))
    # Validate that for each finding the ptr decl is AFTER the body decl
    # (sanity check). Otherwise our reverse-walk would clobber indices.
    for f in findings:
        if f["ptr_head"] <= f["body_end"]:
            print(f"  skip {f['body_name']}: ptr decl precedes body — won't rewrite")
            continue
    for f in findings:
        body_name = f["body_name"]
        ptr_name = f["ptr_name"]
        n = f["n"]
        if body_name not in syms:
            print(f"  skip {body_name}: not in .o symbols")
            continue
        body_off = syms[body_name]
        ptr_ctype = f.get("ptr_ctype", "MObjSub *")
        # --- PtrArray rewrite (do first so body_head indices remain valid)
        new_ptr_lines = [
            f"/* MObjSub pointer array — see *_pre block for the leading 2-entry intra-block ptrs. */",
            f"{ptr_ctype}{ptr_name}[{n + 1}] = {{",
        ]
        for k in range(n):
            if ptr_ctype.startswith("void"):
                new_ptr_lines.append(f"\t(void *)&{body_name}[{k}],")
            else:
                new_ptr_lines.append(f"\t&{body_name}[{k}],")
        new_ptr_lines.append(f"\tNULL,")
        new_ptr_lines.append(f"}};")
        lines[f["ptr_head"]:f["ptr_end"] + 1] = new_ptr_lines
        # --- Body rewrite
        pre_init = [
            f"/* Leading 2-entry pointer array — the first 8 bytes of the original "
            f"{body_name} block. */",
            f"MObjSub *{body_name}_pre[2] = {{",
            f"\tNULL,",
            f"\t(MObjSub *){ptr_name},",
            f"}};",
            f"",
            f"/* MObjSub array: {body_name.split('_')[1] if '_' in body_name else body_name} "
            f"({n} entries) */",
        ]
        body_lines = [f"MObjSub {body_name}[{n}] = {{"]
        for k in range(n):
            start = body_off + 8 + k * MOBJSUB_SIZE
            chunk = data[start:start + MOBJSUB_SIZE]
            body_lines.append(f"\t/* [{k}] @ 0x{8 + k * MOBJSUB_SIZE:X} */")
            init = render_mobjsub_init(chunk, indent="\t")
            body_lines.append("\t" + init + ",")
        body_lines.append("};")
        new_block = pre_init + body_lines
        lines[f["body_head"]:f["body_end"] + 1] = new_block
        n_fixed += 1
        fixups_for_reloc.append((body_name, ptr_name, n))
    if not dry_run:
        with open(path, "w") as f:
            f.write("\n".join(lines))
        # Rewrite the .reloc file(s) for this fid
        base = os.path.splitext(path)[0]
        for ext in (".reloc", ".jp.reloc"):
            rp = base + ext
            if os.path.isfile(rp):
                rewrite_reloc(rp, fixups_for_reloc)
    return n_fixed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fid", help="numeric fid")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    fid = int(args.fid)
    # find .c path
    import glob
    cs = glob.glob(os.path.join(RELOC_DIR, f"{fid}_*.c"))
    cs = [c for c in cs if not c.endswith(".jp.c")]
    if not cs:
        ap.error(f"no .c file for fid {fid}")
    path = cs[0]
    print(f"Processing {os.path.relpath(path, PROJECT_DIR)}…")
    n = rewrite_file(path, fid, dry_run=args.dry_run)
    print(f"\n{n} mistyped MObjSub block(s) restructured")


if __name__ == "__main__":
    main()
