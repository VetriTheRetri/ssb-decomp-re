#!/usr/bin/env python3
"""
Promote `u8 X[120]` declarations inside `_mobjsubs_*` regions to typed
`MObjSub` initializers. Reuses the field-by-field decoder from
tools/genRelocDataC.py (parse_mobjsub + format_float).

For each candidate u8 block:
  1. Look up its file offset via `nm` on the compiled .o.
  2. Read 120 bytes from the .vpk0.bin and decode via parse_mobjsub.
  3. Resolve the two pointer fields (sprites @ +0x4, palettes @ +0x2C)
     from the .reloc — symbolic when the target lands on a known label,
     otherwise the raw chain word as `(void**)0xNNNNNNNN`.
  4. Replace the `u8 X[120] = { #include … }` with a `MObjSub X = { … };`
     C-source initializer matching the format used in already-typed
     stage files.

The .reloc file is left untouched: fixRelocChain rewrites pointer-bearing
words at link time using the .reloc, so the typed C initializer's
pointer expressions only have to compile — their bytes get overwritten.

Heuristics for "is this an MObjSub":
  - Exactly 120 bytes
  - Symbol name contains `_mobjsubs` or matches `*_MObjSub*` (later step
    so we don't mis-promote DObjDescs etc.)

Usage:
    tools/promoteMObjSub.py <file_id>
"""

import argparse
import os
import re
import struct
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import genRelocDataC as grdc


def nm_symbols(file_id):
    obj = os.path.join(BUILD_DIR, ".build", f"{file_id}.o")
    if not os.path.exists(obj):
        return {}
    r = subprocess.run(["mips-linux-gnu-nm", obj], capture_output=True, text=True, check=True)
    syms = {}
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) >= 3 and p[1] in ("D", "d"):
            syms[p[2]] = int(p[0], 16)
    return syms


def parse_reloc(reloc_path, syms):
    """Return {abs_ptr_offset: (target_sym, target_offset, raw_label)}."""
    out = {}
    with open(reloc_path) as f:
        for line in f:
            s = line.strip()
            if not s or s.startswith("#"):
                continue
            parts = s.split()
            if len(parts) != 3 or parts[0] != "intern":
                continue
            ptr_label, target_label = parts[1], parts[2]
            m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", ptr_label)
            if not m or m.group(1) not in syms:
                continue
            ptr_off = syms[m.group(1)] + (int(m.group(2), 16) if m.group(2) else 0)
            out[ptr_off] = target_label
    return out


def color_pack(u32):
    r = (u32 >> 24) & 0xFF
    g = (u32 >> 16) & 0xFF
    b = (u32 >> 8) & 0xFF
    a = u32 & 0xFF
    return f"{{ {{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X} }} }}"


def resolve_ptr(reloc_map, file_off, raw_value, type_str):
    """Symbolic expression for a pointer field. If reloc says
    `target_sym+0xN`, emit `(type)(u8*)target_sym+0xN`; if just
    `target_sym`, emit `(type)target_sym`; else fall back to raw hex."""
    target = reloc_map.get(file_off)
    if target is None:
        return f"({type_str})0x{raw_value:08X}"
    m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", target)
    if not m:
        return f"({type_str})0x{raw_value:08X}"
    sym, off = m.group(1), m.group(2)
    if off is None:
        return f"({type_str}){sym}"
    return f"({type_str})((u8*){sym} + 0x{int(off, 16):X})"


def emit_mobjsub_lines(m, indent, sprites_expr, palettes_expr):
    i = indent
    return [
        f"{i}0x{m['pad00']:04X},",
        f"{i}0x{m['fmt']:02X}, 0x{m['siz']:02X},",
        f"{i}{sprites_expr},",
        f"{i}0x{m['unk08']:04X}, 0x{m['unk0A']:04X}, 0x{m['unk0C']:04X}, 0x{m['unk0E']:04X},",
        f"{i}{m['unk10']},",
        f"{i}{grdc.format_float(m['trau'], m['trau_raw'])}, "
        f"{grdc.format_float(m['trav'], m['trav_raw'])},",
        f"{i}{grdc.format_float(m['scau'], m['scau_raw'])}, "
        f"{grdc.format_float(m['scav'], m['scav_raw'])},",
        f"{i}{grdc.format_float(m['unk24'], m['unk24_raw'])}, "
        f"{grdc.format_float(m['unk28'], m['unk28_raw'])},",
        f"{i}{palettes_expr},",
        f"{i}0x{m['flags']:04X},",
        f"{i}0x{m['block_fmt']:02X}, 0x{m['block_siz']:02X},",
        f"{i}0x{m['block_dxt']:04X},",
        f"{i}0x{m['unk36']:04X}, 0x{m['unk38']:04X}, 0x{m['unk3A']:04X},",
        f"{i}{grdc.format_float(m['scrollu'], m['scrollu_raw'])}, "
        f"{grdc.format_float(m['scrollv'], m['scrollv_raw'])},",
        f"{i}{grdc.format_float(m['unk44'], m['unk44_raw'])}, "
        f"{grdc.format_float(m['unk48'], m['unk48_raw'])},",
        f"{i}0x{m['unk4C']:08X},",
        f"{i}{color_pack(m['primcolor'])},",
        f"{i}0x{m['prim_l']:02X}, 0x{m['prim_m']:02X}, "
        f"{{ 0x{(m['prim_pad'] >> 8) & 0xFF:02X}, 0x{m['prim_pad'] & 0xFF:02X} }},",
        f"{i}{color_pack(m['envcolor'])},",
        f"{i}{color_pack(m['blendcolor'])},",
        f"{i}{color_pack(m['light1color'])},",
        f"{i}{color_pack(m['light2color'])},",
        f"{i}{m['unk68']}, {m['unk6C']},",
        f"{i}{m['unk70']}, {m['unk74']},",
    ]


def process(file_id):
    # Locate files
    c_path = reloc_path = target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        print(f"fid {file_id}: no .c found")
        return
    reloc_path = c_path.replace(".c", ".reloc")

    bin_path = None
    for suf in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSETS_DIR, f"{file_id}{suf}")
        if os.path.exists(p):
            bin_path = p
            break
    if bin_path is None:
        print(f"fid {file_id}: no binary found")
        return

    with open(c_path) as f:
        text = f.read()
    with open(bin_path, "rb") as f:
        data = f.read()
    syms = nm_symbols(file_id)
    reloc_map = parse_reloc(reloc_path, syms)

    # Pass 1: u8 declarations of size 120 in `_mobjsubs` blocks → MObjSub
    decl_re = re.compile(
        r"(/\*[^*]*\*/\s*\n)?u8 (d\w+_mobjsubs\w*)\[120\] = \{\n\t#include <[^>]+>\n\};",
        re.MULTILINE,
    )
    candidates = list(decl_re.finditer(text))
    print(f"fid {file_id}: {len(candidates)} MObjSub candidates")

    new_text = text
    n_promoted = 0
    for m in candidates:
        sym = m.group(2)
        if sym not in syms:
            print(f"  skip {sym}: not in nm")
            continue
        offset = syms[sym]
        decoded = grdc.parse_mobjsub(data, offset)
        if decoded is None:
            print(f"  skip {sym}: parse failed")
            continue
        sprites_raw = decoded['sprites']
        palettes_raw = decoded['palettes']
        sprites_expr = resolve_ptr(reloc_map, offset + 0x4, sprites_raw, "void**")
        palettes_expr = resolve_ptr(reloc_map, offset + 0x2C, palettes_raw, "void**")

        new_decl = (
            f"/* MObjSub @ 0x{offset:X} */\nMObjSub {sym} = {{\n"
            + "\n".join(emit_mobjsub_lines(decoded, "\t", sprites_expr, palettes_expr))
            + "\n};"
        )
        new_text = new_text.replace(m.group(0), new_decl, 1)
        n_promoted += 1
        print(f"  promoted {sym} @ 0x{offset:X}")

    # Pass 2: small u8 blocks (4..32 bytes, multiple of 4) inside `_mobjsubs_*`
    # → u32 pointer arrays. Each word is either a symbolic chain pointer (when
    # the .reloc has an intern entry at that word offset AND the target symbol
    # is declared earlier in the source) or a raw u32 literal (which preserves
    # the byte; fixRelocChain rewrites it at link time anyway). Forward
    # references to later symbols are emitted as raw hex to avoid IDO's
    # no-forward-references-in-initializers limitation.
    sym_decl_pos = {}
    for sm in re.finditer(r"^(?:u8|u16|u32|Vtx|Gfx|DObjDesc|DObjDLLink|MObjSub)\s+(d\w+)", new_text, re.MULTILINE):
        sym_decl_pos.setdefault(sm.group(1), sm.start())

    ptr_re = re.compile(
        r"(/\*[^*]*\*/\s*\n)?u8 (d\w+_mobjsubs\w*)\[(\d+)\] = \{\n\t#include <[^>]+>\n\};",
        re.MULTILINE,
    )
    n_ptr = 0
    for m in list(ptr_re.finditer(new_text)):
        sym = m.group(2)
        size = int(m.group(3))
        if size == 120 or size < 4 or size > 32 or size % 4 != 0:
            continue
        if sym not in syms:
            continue
        offset = syms[sym]
        decl_pos = sym_decl_pos.get(sym, 0)
        words = []
        for i in range(0, size, 4):
            file_off = offset + i
            raw = struct.unpack(">I", data[file_off:file_off + 4])[0]
            target = reloc_map.get(file_off)
            if target is None:
                words.append(f"0x{raw:08X}")
                continue
            mm = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", target)
            if not mm:
                words.append(f"0x{raw:08X}")
                continue
            tsym, toff = mm.group(1), mm.group(2)
            tgt_pos = sym_decl_pos.get(tsym)
            if tgt_pos is None or tgt_pos > decl_pos:
                # Forward (or unknown) reference — keep the raw chain word.
                words.append(f"0x{raw:08X}")
                continue
            # Always use `&sym` so struct symbols (MObjSub) are valid constant
            # initializers — `(u32)mobjsub_sym` would be rejected by IDO since
            # `mobjsub_sym` isn't an lvalue convertible to a pointer. Arrays
            # are fine either way: `&arr` and `arr` differ in type but yield
            # the same numeric address.
            if toff is None:
                words.append(f"(u32)&{tsym}")
            else:
                words.append(f"(u32)((u8*)&{tsym} + 0x{int(toff, 16):X})")

        body_lines = ["\t" + w + "," for w in words]
        new_decl = (
            f"/* u32 pointer array @ 0x{offset:X} ({size // 4} entries) */\n"
            f"u32 {sym}[{size // 4}] = {{\n"
            + "\n".join(body_lines)
            + "\n};"
        )
        new_text = new_text.replace(m.group(0), new_decl, 1)
        n_ptr += 1
        print(f"  ptr-array {sym}[{size // 4}] @ 0x{offset:X}")

    if n_promoted or n_ptr:
        with open(c_path, "w") as f:
            f.write(new_text)
        print(f"fid {file_id}: promoted {n_promoted} MObjSub block(s), "
              f"{n_ptr} u32 ptr array(s)")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid)


if __name__ == "__main__":
    main()
