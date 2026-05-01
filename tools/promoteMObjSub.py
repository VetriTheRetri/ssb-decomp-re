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
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import genRelocDataC as grdc

# JP-side paths: used only in dual-version mode. The JP fid for a given
# target name often differs from the US fid, so we look it up from the
# JP descriptions file at runtime.
JP_BUILD_DIR = os.path.join(PROJECT_DIR, "build", "jp", "src", "relocData")
JP_ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "jp", "relocData")
JP_DESCRIPTIONS = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.jp.txt")


def parse_descriptions_name_to_fid(path):
    """Return {name: fid} from a relocFileDescriptions.<v>.txt file."""
    out = {}
    if not os.path.exists(path):
        return out
    with open(path) as f:
        for line in f:
            if line.startswith("-"):
                parts = line.split(":", 1)
                if len(parts) == 2:
                    try:
                        fid = int(parts[0][1:])
                        name = parts[1].strip()
                        out[name] = fid
                    except ValueError:
                        pass
    return out


def nm_symbols(file_id, build_dir=None):
    bd = build_dir or BUILD_DIR
    obj = os.path.join(bd, ".build", f"{file_id}.o")
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
    """Return {abs_ptr_offset: target_label}. The label is normalized: bare
    numeric file-offset targets (`0xXXXX`) are resolved back to symbolic
    `<sym>+0xN` form by binary-searching the nm symbol table — without this,
    Pass 2's emit fell through to raw chain hex even when the target landed
    on a known symbol boundary."""
    # Build sorted (offset, sym) for nearest-symbol lookup of numeric labels.
    sorted_syms = sorted(syms.items(), key=lambda kv: kv[1])
    sorted_offsets = [v for _, v in sorted_syms]
    sorted_names = [k for k, _ in sorted_syms]

    def resolve_numeric(target_off):
        import bisect
        i = bisect.bisect_right(sorted_offsets, target_off) - 1
        if i < 0:
            return None
        sym_off = sorted_offsets[i]
        sym_name = sorted_names[i]
        delta = target_off - sym_off
        return sym_name if delta == 0 else f"{sym_name}+0x{delta:X}"

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
            # If target is a bare numeric file-offset (`0xXXXX`), resolve to
            # `<sym>+0xN` so downstream emit can produce symbolic references.
            num_match = re.match(r"^0x([0-9a-fA-F]+)$", target_label)
            if num_match:
                resolved = resolve_numeric(int(num_match.group(1), 16))
                if resolved is not None:
                    target_label = resolved
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


def emit_mobjsub_lines_dual(us_decoded, jp_decoded, indent,
                             us_sprites, us_palettes, jp_sprites, jp_palettes):
    """Like emit_mobjsub_lines, but compares US vs JP line-by-line and wraps
    differing lines in `#if defined(REGION_US)` / `#elif defined(REGION_JP)`
    so a single shared .c file produces version-correct bytes for both
    builds. Pointer fields (.sprites/.palettes) are passed in pre-resolved
    per-version because their .reloc resolution differs."""
    us_lines = emit_mobjsub_lines(us_decoded, indent, us_sprites, us_palettes)
    jp_lines = emit_mobjsub_lines(jp_decoded, indent, jp_sprites, jp_palettes)
    out = []
    for u, j in zip(us_lines, jp_lines):
        if u == j:
            out.append(u)
        else:
            out.append("#if defined(REGION_US)")
            out.append(u)
            out.append("#elif defined(REGION_JP)")
            out.append(j)
            out.append("#endif")
    return out


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


def process(file_id, dual_version=False):
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

    # JP-side data for dual-version mode. The same target_name often maps to
    # a different fid in JP; we look it up and load JP's nm + binary +
    # version-specific .reloc (falls back to the shared .reloc).
    jp_data = None
    jp_syms = None
    jp_reloc_map = None
    if dual_version and target_name:
        jp_name_to_fid = parse_descriptions_name_to_fid(JP_DESCRIPTIONS)
        jp_fid = jp_name_to_fid.get(target_name)
        if jp_fid is None:
            print(f"  [dual] no JP fid for {target_name}; skipping JP overlay")
        else:
            jp_bin = None
            for suf in (".vpk0.bin", ".bin"):
                p = os.path.join(JP_ASSETS_DIR, f"{jp_fid}{suf}")
                if os.path.exists(p):
                    jp_bin = p
                    break
            if jp_bin is None:
                print(f"  [dual] no JP binary for fid {jp_fid}; skipping JP overlay")
            else:
                with open(jp_bin, "rb") as f:
                    jp_data = f.read()
                jp_syms = nm_symbols(jp_fid, build_dir=JP_BUILD_DIR)
                jp_reloc_path = c_path.replace(".c", ".jp.reloc")
                if not os.path.exists(jp_reloc_path):
                    jp_reloc_path = reloc_path
                jp_reloc_map = parse_reloc(jp_reloc_path, jp_syms)

    # Collect every symbol referenced from a MObjSub*[] array in this file.
    # That tells us "this u8 block is actually used as a MObjSub even though
    # its name isn't `_mobjsubs_*`" — a common case in fighter models where
    # blocks are named `<File>_gap_*_sub_*`.
    mobjsub_array_re = re.compile(
        r"MObjSub\s*\*\s*\w+\s*\[\s*\d*\s*\]\s*=\s*\{(?P<body>[^}]*)\}",
        re.DOTALL,
    )
    mobjsub_referenced = set()
    for am in mobjsub_array_re.finditer(text):
        for entry in am.group("body").split(","):
            e = entry.strip()
            if not e or e == "NULL":
                continue
            mm = re.match(r"\(\s*MObjSub\s*\*\s*\)\s*(\w+)", e)
            if mm:
                mobjsub_referenced.add(mm.group(1))
            elif re.match(r"^[A-Za-z_]\w*$", e):
                mobjsub_referenced.add(e)

    # Pass 1: u8 declarations of size 120 → MObjSub. Accepted if the symbol
    # has the legacy `_mobjsubs` substring, OR if it's referenced from a
    # MObjSub*[] array elsewhere in the same file.
    decl_re = re.compile(
        r"(/\*[^*]*\*/\s*\n)?u8 (d\w+)\[120\] = \{\n\t#include <[^>]+>\n\};",
        re.MULTILINE,
    )
    candidates = [m for m in decl_re.finditer(text)
                  if "_mobjsubs" in m.group(2) or m.group(2) in mobjsub_referenced]
    print(f"fid {file_id}: {len(candidates)} MObjSub candidates")

    new_text = text
    n_promoted = 0
    n_dualed = 0
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

        # Dual-version overlay: when JP data is loaded and the symbol exists in
        # JP's nm, decode JP's bytes too. If they differ from US byte-for-byte,
        # emit `#if defined(REGION_US)` / `#elif defined(REGION_JP)` wrappers
        # around the differing lines so the shared .c file produces the right
        # bytes for both versions.
        decoded_jp = None
        if dual_version and jp_data is not None and sym in jp_syms:
            jp_offset = jp_syms[sym]
            decoded_jp = grdc.parse_mobjsub(jp_data, jp_offset)
            if decoded_jp is not None:
                jp_sprites_expr = resolve_ptr(jp_reloc_map, jp_offset + 0x4, decoded_jp['sprites'], "void**")
                jp_palettes_expr = resolve_ptr(jp_reloc_map, jp_offset + 0x2C, decoded_jp['palettes'], "void**")

        # Emit as a single-element array (`MObjSub X[1] = { { ... } };`) so the
        # symbol decays to MObjSub* in `(MObjSub *)X` casts elsewhere in the
        # file. Bytes are identical to a bare `MObjSub X = { ... };` form.
        if decoded_jp is not None:
            body_lines = emit_mobjsub_lines_dual(
                decoded, decoded_jp, "\t\t",
                sprites_expr, palettes_expr,
                jp_sprites_expr, jp_palettes_expr,
            )
            if any(l.startswith("#if ") for l in body_lines):
                n_dualed += 1
        else:
            body_lines = emit_mobjsub_lines(decoded, "\t\t", sprites_expr, palettes_expr)
        new_decl = (
            f"/* MObjSub @ 0x{offset:X} */\nMObjSub {sym}[1] = {{\n\t{{\n"
            + "\n".join(body_lines)
            + "\n\t}\n};"
        )
        new_text = new_text.replace(m.group(0), new_decl, 1)
        # Update any matching `extern u8 X[]` to `extern MObjSub X[]` so the
        # within-file declarations don't conflict with the new definition.
        new_text = re.sub(
            rf"^extern\s+u8\s+{re.escape(sym)}\s*\[\s*\]\s*;",
            f"extern MObjSub {sym}[];",
            new_text,
            flags=re.MULTILINE,
        )
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

    # Build the set of "MObjSub field target" symbols by walking the .reloc
    # for chains rooted at MObjSub.sprites (+0x4) / .palettes (+0x2C). These
    # are the legitimate targets for u32-pointer-array typing even when the
    # block's own name doesn't carry the legacy `_mobjsubs` substring.
    # The MObjSub root set includes both freshly-promoted blocks AND any
    # MObjSub <name>[1] / MObjSub <name> declarations already in the file.
    mobjsub_field_targets = set()
    promoted_mobjsubs = {m.group(2) for m in candidates}
    for sm in re.finditer(r"^MObjSub\s+(\w+)(?:\[[^\]]*\])?\s*=", new_text, re.MULTILINE):
        promoted_mobjsubs.add(sm.group(1))
    with open(reloc_path) as f:
        for line in f:
            line = line.strip()
            if not line.startswith("intern "):
                continue
            parts = line.split()
            if len(parts) < 3:
                continue
            lhs, rhs = parts[1], parts[2]
            mm = re.match(r"^(\w+)\+0x([0-9a-fA-F]+)$", lhs)
            if not mm:
                continue
            mob_sym, off_hex = mm.group(1), mm.group(2)
            if mob_sym not in promoted_mobjsubs:
                continue
            if int(off_hex, 16) not in (0x4, 0x2C):
                continue
            tgt = rhs.split("+", 1)[0]
            mobjsub_field_targets.add(tgt)

    ptr_re = re.compile(
        r"(/\*[^*]*\*/\s*\n)?u8 (d\w+)\[(\d+)\] = \{\n\t#include <[^>]+>\n\};",
        re.MULTILINE,
    )
    n_ptr = 0
    forward_externs = set()  # syms that are referenced before declaration
    for m in list(ptr_re.finditer(new_text)):
        sym = m.group(2)
        size = int(m.group(3))
        if size == 120 or size < 4 or size > 32 or size % 4 != 0:
            continue
        # Accept legacy `_mobjsubs` syms OR any sym that's a target of a
        # MObjSub.sprites/palettes pointer chain in this file.
        if "_mobjsubs" not in sym and sym not in mobjsub_field_targets:
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
            if tgt_pos is None:
                # Symbol not in this file at all (cross-file reference).
                # Leave as raw chain — fixRelocChain rewrites at link time.
                words.append(f"0x{raw:08X}")
                continue
            if tgt_pos > decl_pos:
                # Forward reference — emit symbolic anyway, but ensure an
                # `extern` is present at the top of the file so IDO accepts
                # the const-initializer reference.
                forward_externs.add(tsym)
            # Always use `&sym` so struct symbols (MObjSub) are valid constant
            # initializers. Arrays would be fine either way: `&arr` and `arr`
            # differ in type but yield the same numeric address.
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

    # For each forward-referenced symbol that doesn't already have an extern,
    # inject one near the top of the file so IDO accepts the const-initializer
    # reference to a not-yet-declared symbol. Skip syms that are already
    # declared somewhere (definition or extern).
    if forward_externs:
        existing_externs = set(re.findall(r"^extern\s+\w+\s+\*?(d\w+)", new_text, re.MULTILINE))
        # Decl symbols are also "declared" — using the more permissive scan.
        already_declared = set(sym_decl_pos.keys()) | existing_externs
        new_externs = sorted(forward_externs - existing_externs)
        if new_externs:
            # Insert after the last existing extern at the top of the file
            last_extern_match = None
            for em in re.finditer(r"^extern\s+[^;]+;", new_text, re.MULTILINE):
                last_extern_match = em
                if em.end() > 4096:  # only consider top-of-file extern block
                    break
            insertion_pt = last_extern_match.end() if last_extern_match else 0
            extern_lines = "\n".join(f"extern u8 {x}[];" for x in new_externs)
            new_text = (new_text[:insertion_pt] + "\n" + extern_lines
                        + new_text[insertion_pt:])
            print(f"  + {len(new_externs)} forward-ref extern(s)")

    # Pass 3: type the second-level chain targets of MObjSub.palettes pointer
    # arrays (i.e. the actual palette data blocks) as `u16 X[N/2]` palettes.
    #   MObjSub.palettes (+0x2C) → ptr_array → palette block
    # We find each link via the (already-normalized) reloc_map.
    palette_ptr_arrays = set()
    for mob in promoted_mobjsubs:
        if mob not in syms:
            continue
        tgt = reloc_map.get(syms[mob] + 0x2C)
        if tgt:
            palette_ptr_arrays.add(tgt.split("+", 1)[0])

    # offset-range index for palette ptr arrays so we can map
    # absolute offset → owning sym. Each ptr array is up to 32 bytes.
    palette_ptr_array_ranges = []  # list of (start, end, sym)
    for sym in palette_ptr_arrays:
        if sym not in syms:
            continue
        # ptr arrays are at most 32 bytes by Pass 2's filter
        palette_ptr_array_ranges.append((syms[sym], syms[sym] + 32, sym))

    palette_targets = set()
    for abs_off, target_label in reloc_map.items():
        # If this reloc entry's source falls inside any palette ptr array,
        # the target is a palette data block.
        for start, end, _arr_sym in palette_ptr_array_ranges:
            if start <= abs_off < end:
                tsym = target_label.split("+", 1)[0]
                if not tsym.startswith("0x"):
                    palette_targets.add(tsym)
                break

    n_palette = 0
    palette_re = re.compile(
        r"(/\*[^*]*\*/\s*\n)?u8 (d\w+)\[(\d+)\] = \{\n\t#include <(?P<inc>[^>]+\.data\.inc\.c)>\n\};",
        re.MULTILINE,
    )
    for m in list(palette_re.finditer(new_text)):
        sym = m.group(2)
        size = int(m.group(3))
        inc_path = m.group("inc")
        if sym not in palette_targets:
            continue
        if size % 2 != 0 or size == 0:
            continue
        new_inc = inc_path[:-len(".data.inc.c")] + ".palette.inc.c"
        new_block = (
            f"/* palette @ retyped from u8[{size}] to u16[{size//2}] */\n"
            f"u16 {sym}[{size // 2}] = {{\n\t#include <{new_inc}>\n}};"
        )
        new_text = new_text.replace(m.group(0), new_block, 1)
        # Update any extern u8 X[] → extern u16 X[]
        new_text = re.sub(
            rf"^extern\s+u8\s+{re.escape(sym)}\s*\[\s*\]\s*;",
            f"extern u16 {sym}[];",
            new_text,
            flags=re.MULTILINE,
        )
        n_palette += 1
        print(f"  palette {sym} u8[{size}] → u16[{size // 2}]")

    if n_promoted or n_ptr or n_palette:
        with open(c_path, "w") as f:
            f.write(new_text)
        print(f"fid {file_id}: promoted {n_promoted} MObjSub block(s), "
              f"{n_ptr} u32 ptr array(s), {n_palette} palette(s)")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    ap.add_argument("--dual-version", action="store_true",
                    help="Compare US and JP byte content; emit "
                         "`#if defined(REGION_US/JP)` overlays for fields that "
                         "differ. Requires both versions to be built (so JP's "
                         ".o + assets/jp/relocData/<jp_fid>.vpk0.bin exist).")
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid, dual_version=args.dual_version)


if __name__ == "__main__":
    main()
