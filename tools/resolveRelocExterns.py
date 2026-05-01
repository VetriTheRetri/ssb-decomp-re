#!/usr/bin/env python3
"""
Generic resolver for extern reloc chains in any relocData .c file.

For each `extern` entry in a file's .reloc metadata, look up the target
file ID from the post-compression trailer (tools/vpk0_excess_bytes.txt)
and find the nearest preceding symbol in that target file's compiled .o
via nm. Replace the raw chain-encoded hex cast in the source .c file
with a symbolic `(Type *)((u8 *)sym + delta)` expression, and add an
`extern` declaration at the top of the source file.

fixRelocChain.py overwrites each slot in the compiled .data section with
the correct chain bytes regardless of what the source placeholder value
is, so the byte-exact output is preserved. The rewrite is purely a
source-level readability improvement.

Usage:
    tools/resolveRelocExterns.py              # process all eligible files
    tools/resolveRelocExterns.py 265 268      # process specific file IDs
    tools/resolveRelocExterns.py --list       # just list what would change
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")
EXCESS_PATH = os.path.join(PROJECT_DIR, "tools", "vpk0_excess_bytes.txt")


_nm_cache = {}


def nm(file_id):
    """Return {offset: [symbols]} for a compiled relocData .o, cached."""
    if file_id in _nm_cache:
        return _nm_cache[file_id]
    obj_path = os.path.join(BUILD_DIR, ".build", f"{file_id}.o")
    if not os.path.exists(obj_path):
        _nm_cache[file_id] = {}
        return {}
    for prefix in ("mips-linux-gnu", "mips-elf"):
        try:
            r = subprocess.run([f"{prefix}-nm", obj_path],
                               capture_output=True, text=True, check=True)
            break
        except (FileNotFoundError, subprocess.CalledProcessError):
            continue
    else:
        _nm_cache[file_id] = {}
        return {}
    symbols = {}
    for line in r.stdout.splitlines():
        parts = line.split()
        if len(parts) < 3:
            continue
        try:
            off = int(parts[0], 16)
        except ValueError:
            continue
        if parts[1] in ("D", "d"):
            symbols.setdefault(off, []).append(parts[2])
    _nm_cache[file_id] = symbols
    return symbols


def symbol_near(file_id, target_off):
    """Return (sym_name, delta, c_type) — the closest symbol whose offset
    is <= target_off in the given file's .o."""
    syms = nm(file_id)
    if not syms:
        return None, 0, None
    candidates = []
    for off, names in syms.items():
        if off > target_off:
            continue
        for name in names:
            if name.endswith(("_bitmaps", "_dl", "_tex")):
                continue
            candidates.append((off, name))
    if not candidates:
        return None, 0, None
    best_off, best_name = max(candidates)
    return best_name, target_off - best_off, None


def parse_reloc(reloc_path):
    """Return (intern, extern) lists of (ptr_sym, ptr_off_in_sym, target_str)."""
    intern, extern = [], []
    if not os.path.exists(reloc_path):
        return intern, extern
    with open(reloc_path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = line.split()
            if len(parts) != 3:
                continue
            kind, ptr_label, target = parts
            m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", ptr_label)
            if not m:
                continue
            ptr_sym = m.group(1)
            ptr_off = int(m.group(2), 16) if m.group(2) else 0
            entry = (ptr_sym, ptr_off, target)
            if kind == "intern":
                intern.append(entry)
            else:
                extern.append(entry)
    return intern, extern


_excess_cache = None


def load_excess_bytes():
    """Parse vpk0_excess_bytes.txt -> {file_id: bytearray}."""
    global _excess_cache
    if _excess_cache is not None:
        return _excess_cache
    result = {}
    with open(EXCESS_PATH) as f:
        for line in f:
            if " - " not in line:
                continue
            fid, hex_str = line.strip().split(" - ", 1)
            try:
                result[int(fid)] = bytearray.fromhex(hex_str)
            except ValueError:
                continue
    _excess_cache = result
    return result


def get_extern_file_ids(file_id, n_externs):
    """Return the list of u16 target file IDs for the given file's extern
    chain entries, in chain-walk (sorted by ptr_off) order. The trailer
    may have junk vpk0-overshoot bytes at the start; the last 2*N bytes
    are the actual IDs."""
    excess = load_excess_bytes().get(file_id)
    if excess is None:
        return None
    if n_externs == 0:
        return []
    needed = n_externs * 2
    if len(excess) < needed:
        return None
    tail = excess[-needed:]
    return [int.from_bytes(tail[i:i+2], "big") for i in range(0, needed, 2)]


def get_c_file_for_fid(file_id):
    """Find the .c source file for a relocData file ID."""
    # Simple <fid>_*.c naming
    for fn in os.listdir(RELOC_DIR):
        if fn.startswith(f"{file_id}_") and fn.endswith(".c") and not fn.endswith(".jp.c"):
            return os.path.join(RELOC_DIR, fn)
    return None


def symbol_type_from_c(sym_name):
    """Scan src/relocData/*.c (and build/src/relocData/*.c) for the declared
    type of sym_name. Returns the type string or None."""
    decl_re = re.compile(
        rf"^\s*(?:static\s+)?([A-Za-z_][\w\s*]*?)\s+{re.escape(sym_name)}\s*(?:\[[^\]]*\])?\s*=",
        re.MULTILINE,
    )
    for root in (RELOC_DIR, os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")):
        if not os.path.isdir(root):
            continue
        for dirpath, _, filenames in os.walk(root):
            for fn in filenames:
                if not fn.endswith(".c"):
                    continue
                try:
                    with open(os.path.join(dirpath, fn)) as fh:
                        text = fh.read()
                except OSError:
                    continue
                m = decl_re.search(text)
                if m:
                    return m.group(1).strip()
    return None


def make_replacement(file_id, target_off):
    """Return (expression, extern_sym, c_type) for an extern chain entry
    pointing into the given file at target_off. Falls back to None if we
    can't resolve a symbol."""
    sym, delta, _ = symbol_near(file_id, target_off)
    if sym is None:
        return None
    c_type = symbol_type_from_c(sym) or "u8"
    if delta == 0:
        expr = sym
    else:
        expr = f"((u8 *){sym} + 0x{delta:X})"
    return expr, sym, c_type


def find_cast_at_byte_offset(text, target_byte):
    """Find a pointer cast to a raw hex value within a typed struct
    initializer whose file byte offset matches target_byte.

    Returns a (match_start, match_end, new_replacement_slot) where the
    slot is the match object for just the `(Type *)0xHEX` cast.

    The caller is responsible for preparing the replacement text.
    """
    # This is hard to do in general — we'd need a full initializer parser
    # to map source positions to struct byte offsets. Instead, the caller
    # provides `ptr_sym` + `ptr_off_in_sym`, and we find the initializer
    # for that symbol, count struct fields to the right offset, and
    # replace that specific cast.
    raise NotImplementedError


def rewrite_for_symbol_based_slots(text, rewrites, struct_field_maps):
    """For each (ptr_sym, ptr_off_in_sym) -> replacement, apply the
    rewrite using the structural knowledge that the POINTER_SLOTS map
    in resolveStageMapExterns.py encodes.

    This generic version delegates to that helper when the struct type
    is MPGroundData or another known shape. For now we only handle the
    standalone `(Type *)0xHEX` pattern per-slot with a targeted regex.
    """
    # Simpler: for each slot, locate the sym's initializer body and
    # replace the N-th `(Type*)0xHEX` cast inside it. For POINTER_SLOTS
    # with fixed offsets, we use POINTER_SLOTS' field_name comment to
    # identify the target field.
    pass


# --- Rewriter for MPGroundData ---------------------------------------------

POINTER_SLOTS = {
    0x00: ("DObjDesc *",     "gr_desc[0].dobjdesc"),
    0x04: ("AObjEvent32 **", "gr_desc[0].anim_joints"),
    0x08: ("MObjSub ***",    "gr_desc[0].p_mobjsubs"),
    0x0C: ("AObjEvent32 ***","gr_desc[0].p_matanim_joints"),
    0x10: ("DObjDesc *",     "gr_desc[1].dobjdesc"),
    0x14: ("AObjEvent32 **", "gr_desc[1].anim_joints"),
    0x18: ("MObjSub ***",    "gr_desc[1].p_mobjsubs"),
    0x1C: ("AObjEvent32 ***","gr_desc[1].p_matanim_joints"),
    0x20: ("DObjDesc *",     "gr_desc[2].dobjdesc"),
    0x24: ("AObjEvent32 **", "gr_desc[2].anim_joints"),
    0x28: ("MObjSub ***",    "gr_desc[2].p_mobjsubs"),
    0x2C: ("AObjEvent32 ***","gr_desc[2].p_matanim_joints"),
    0x30: ("DObjDesc *",     "gr_desc[3].dobjdesc"),
    0x34: ("AObjEvent32 **", "gr_desc[3].anim_joints"),
    0x38: ("MObjSub ***",    "gr_desc[3].p_mobjsubs"),
    0x3C: ("AObjEvent32 ***","gr_desc[3].p_matanim_joints"),
    0x40: ("MPGeometryData *","map_geometry"),
    0x48: ("Sprite *",       "wallpaper"),
    0x80: ("void *",         "map_nodes"),
    0x84: ("MPItemWeights *","item_weights"),
}


def rewrite_mpgrounddata(text, header_sym, replacements):
    """Apply a set of (struct_off, expr, extern_sym, file_id) replacements
    to the MPGroundData initializer inside `text`. Returns new text and
    the set of extern declarations to add."""
    externs_needed = {}  # sym -> c_type
    new_text = text
    for struct_off, (expr, extern_sym, fid, c_type) in sorted(replacements.items()):
        if struct_off not in POINTER_SLOTS:
            continue
        slot_type, field_name = POINTER_SLOTS[struct_off]
        tokens = [re.escape(t) for t in slot_type.split()]
        type_pattern = r"\s*".join(tokens)

        if extern_sym is not None:
            externs_needed[extern_sym] = c_type or "u8"

        # Build the replacement expression with correct cast
        if expr.startswith("("):
            new_expr = expr
        else:
            new_expr = f"({slot_type}){expr}"

        if struct_off < 0x40:
            # gr_desc[i].<field>: replace the next matching cast.
            old_pattern = rf"\(\s*{type_pattern}\s*\)\s*0x[0-9A-Fa-f]+"
            new_text, n = re.subn(old_pattern, new_expr, new_text, count=1)
            if n == 0:
                print(f"    failed slot 0x{struct_off:X} ({field_name})")
        else:
            old_pattern = (rf"\(\s*{type_pattern}\s*\)\s*0x[0-9A-Fa-f]+"
                           rf"(,\s*/\* {re.escape(field_name)} \*/)")
            new_text, n = re.subn(old_pattern, new_expr + r"\1", new_text, count=1)
            if n == 0:
                print(f"    failed slot 0x{struct_off:X} ({field_name})")

    return new_text, externs_needed


def insert_extern_block(text, externs):
    """Insert `extern <type> <sym>[];` lines after the last #include,
    skipping symbols that already have an extern declaration."""
    if not externs:
        return text
    already = set(re.findall(
        r"^\s*extern\s+[^;]*?\s([A-Za-z_]\w*)\s*\[", text, re.MULTILINE))
    externs = {k: v for k, v in externs.items() if k not in already}
    if not externs:
        return text
    lines = text.split("\n")
    last_inc = max(
        (i for i, ln in enumerate(lines) if ln.startswith("#include")),
        default=-1,
    )
    block = ["", "/* Cross-file references resolved by fixRelocChain.py — see .reloc */"]
    for sym in sorted(externs):
        block.append(f"extern {externs[sym]} {sym}[];")
    if last_inc < 0:
        # Find end of leading block comment
        insert = 0
        if lines and lines[0].lstrip().startswith("/*"):
            for i, ln in enumerate(lines):
                if "*/" in ln:
                    insert = i + 1
                    break
        lines[insert:insert] = block
    else:
        lines[last_inc+1:last_inc+1] = block
    return "\n".join(lines)


def process_map_file(file_id):
    """Process a single GR*Map (or similar MPGroundData-based) file."""
    c_path = get_c_file_for_fid(file_id)
    if not c_path:
        return False, f"fid {file_id}: no .c file"
    reloc_path = c_path.replace(".c", ".reloc")
    if not os.path.exists(reloc_path):
        return False, f"fid {file_id}: no .reloc"
    _, extern = parse_reloc(reloc_path)
    if not extern:
        return False, f"fid {file_id}: no externs"

    # Resolve target file IDs from the trailer
    sorted_ext = sorted(extern, key=lambda e: e[1])  # sort by ptr_off
    target_fids = get_extern_file_ids(file_id, len(sorted_ext))
    if target_fids is None:
        return False, f"fid {file_id}: trailer missing/too-short"

    # Build rewrites keyed by struct byte offset within the MPGroundData header
    replacements = {}
    for (ptr_sym, ptr_off_in_sym, target_str), target_fid in zip(sorted_ext, target_fids):
        if not ptr_sym.endswith("_header"):
            continue  # only rewrite MPGroundData slots in this path
        try:
            target_off = int(target_str, 16)
        except ValueError:
            continue
        made = make_replacement(target_fid, target_off)
        if made is None:
            continue
        expr, sym, c_type = made
        replacements[ptr_off_in_sym] = (expr, sym, target_fid, c_type)

    if not replacements:
        return False, f"fid {file_id}: no replacements resolved"

    with open(c_path) as f:
        text = f.read()
    header_sym = None  # not used by rewrite_mpgrounddata
    new_text, externs = rewrite_mpgrounddata(text, header_sym, replacements)
    new_text = insert_extern_block(new_text, externs)

    if new_text == text:
        return False, f"fid {file_id}: no text changes"
    with open(c_path, "w") as f:
        f.write(new_text)
    return True, f"fid {file_id}: {len(replacements)} slots rewritten"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    ap.add_argument("--list", action="store_true")
    args = ap.parse_args()

    if args.fids:
        targets = args.fids
    else:
        # Default: every file whose name matches GR*Map + .reloc has externs
        targets = []
        for fn in sorted(os.listdir(RELOC_DIR)):
            if not fn.endswith("Map.c"):
                continue
            m = re.match(r"^(\d+)_", fn)
            if not m:
                continue
            fid = int(m.group(1))
            reloc_path = os.path.join(RELOC_DIR, fn.replace(".c", ".reloc"))
            if not os.path.exists(reloc_path):
                continue
            with open(reloc_path) as f:
                if any(ln.startswith("extern ") for ln in f):
                    targets.append(fid)

    for fid in targets:
        ok, msg = process_map_file(fid)
        print(msg)


if __name__ == "__main__":
    main()
