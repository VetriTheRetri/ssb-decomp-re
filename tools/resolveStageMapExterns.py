#!/usr/bin/env python3
"""
Rewrite typed GR*Map .c files so the pointer slots in MPGroundData use
real C symbol references (extern decls) instead of raw chain-encoded hex
casts.

For each pointer field in the header, we look up the target file's .o
symbol table via nm. When a matching symbol is found, the field is
rewritten as `dStageCastleFile2_Layer0DObj` etc. and an extern declaration
is added at the top of the source. The .reloc file is left untouched
since its extern targets are still correct.

The IDO compiler resolves the symbolic reference as a R_MIPS_32
relocation with a zero placeholder in .data; objcopy preserves the zero,
and fixRelocChain.py then overwrites that slot with the chain-encoded
(next_word | target_word) pair based on the .reloc file's numeric extern
target. The end-result binary is byte-identical to the raw-hex form —
this is purely a source-level readability improvement.

Requires each stage's target .o files (StageXxxFile2.o, StageXxx.o) to
have been compiled at least once so nm can look up symbols in them.
"""

import argparse
import os
import re
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "src", "relocData")

# Stage -> (map_fid, file2_fid, file3_fid, sprite_fid, mainmotion_fid)
#
# file2_fid   : holds the gr_desc[] target structures (DObjDesc, AnimJoint,
#               MObjSub, MatAnim) and map_geometry
# sprite_fid  : holds the wallpaper Sprite struct
# mainmotion_fid: holds the map_nodes AnimJoint tree
#   map_fid    : file id of the GR<Stage>Map file itself
#   file2_fid  : holds gr_desc[] target DObjDesc/AnimJoint/MObjSub/MatAnim
#                and map_geometry — this is what gr_desc extern relocs
#                overwhelmingly point into
#   file3_fid  : auxiliary stage data (unused here, kept for reference)
#   sprite_fid : the stage's background sprite file, referenced by
#                MPGroundData.wallpaper (extern reloc at struct offset 0x48)
#   mainmotion_fid: where MPGroundData.map_nodes points — usually a stage
#                animation/joint file. Left None for stages where it
#                isn't known / worth resolving.
STAGE_EXTERNS = {
    "Pupupu":      (255, 104, 152, 88, None),
    "PupupuSmall": (256, 104, 152, 88, None),
    "Zebes":       (257, 105, 157, 89, None),
    "PupupuTest":  (258, 104, 152, 88, None),
    "Castle":      (259, 106, 156, 95, None),
    "Inishie":     (260, 107, 155, 91, None),
    "Jungle":      (261, 108, 158, 92, None),
    "Sector":      (262, 109, 153, 99, None),
    "Yoster":      (263, 111, 154, 93, None),
    "Yamabuki":    (264, 112, 159, 94, None),
    "Hyrule":      (265, 113, None, None, None),
    "Last":        (266, 114, None, 96, None),
    "Explain":     (267, 115, None, None, None),
    "Metal":       (269, 117, None, 98, None),
    "YosterSmall": (270, 118, None, 93, None),
}

# Bonus1/Bonus2/Bonus3 — same pattern
_BONUS_FIGHTERS = ["Mario", "Fox", "Donkey", "Samus", "Luigi", "Link",
                   "Yoshi", "Captain", "Kirby", "Pikachu", "Purin", "Ness"]
for _i, _name in enumerate(_BONUS_FIGHTERS):
    STAGE_EXTERNS[f"Bonus1{_name}"] = (271 + _i, 124 + _i, None, None, None)
for _i, _name in enumerate(_BONUS_FIGHTERS):
    STAGE_EXTERNS[f"Bonus2{_name}"] = (283 + _i, 137 + _i, None, 119, None)
STAGE_EXTERNS["Bonus3"] = (295, 149, 162, None, None)


# Cache of file_id -> {offset: [symbol_names]}
_nm_cache = {}


def nm(file_id):
    """Read symbols from a compiled .o, cached by file id."""
    if file_id in _nm_cache:
        return _nm_cache[file_id]

    obj_path = os.path.join(BUILD_DIR, f"{file_id}.o")
    if not os.path.exists(obj_path):
        print(f"  WARNING: {obj_path} missing — skipping symbol lookup")
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
        print(f"  WARNING: no mips nm found", file=sys.stderr)
        _nm_cache[file_id] = {}
        return {}

    symbols = {}
    for line in r.stdout.splitlines():
        parts = line.split()
        if len(parts) >= 3:
            try:
                off = int(parts[0], 16)
            except ValueError:
                continue
            section = parts[1]
            name = parts[2]
            # Only .data symbols (uppercase 'D') and absolute data ('d').
            if section in ("D", "d"):
                symbols.setdefault(off, []).append(name)

    _nm_cache[file_id] = symbols
    return symbols


def symbol_at(file_id, offset):
    """Return the 'primary' symbol name at the given offset in the given
    file's .o, or None if no symbol matches. Prefers the shortest name
    when multiple symbols live at the exact same offset (e.g. a struct
    and one of its fields)."""
    syms = nm(file_id).get(offset)
    if not syms:
        return None
    return sorted(syms, key=len)[0]


def symbol_near(file_id, offset):
    """Return (symbol_name, delta) where `symbol_name` is the nearest
    symbol at offset <= the requested offset in the given file's .o,
    and `delta` is the byte distance forward from that symbol to the
    requested offset. Returns (None, 0) if no symbol precedes."""
    all_syms = nm(file_id)
    if not all_syms:
        return None, 0
    # Skip the `*_bitmaps` / `*_dl` / `*_tex` sub-symbols that sprite blocks
    # emit — they live inside a parent Sprite struct but aren't what a
    # reader would want to see as the "owner" of an arbitrary offset.
    candidates = []
    for off, names in all_syms.items():
        if off > offset:
            continue
        for name in names:
            if name.endswith(("_bitmaps", "_dl", "_tex")):
                continue
            candidates.append((off, name))
    if not candidates:
        return None, 0
    best_off, best_name = max(candidates)
    return best_name, offset - best_off


def parse_reloc(reloc_path):
    """Return (intern_entries, extern_entries) where each entry is
    (struct_byte_offset, target_label_or_hex)."""
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
            ptr_off = int(m.group(2), 16) if m.group(2) else 0
            if kind == "intern":
                intern.append((ptr_off, target))
            else:
                extern.append((ptr_off, target))
    return intern, extern


# Pointer slots in MPGroundData relative to the `header` symbol's start.
# Maps struct byte offset -> (c_type, comment-friendly field name)
POINTER_SLOTS = {
    0x00: ("DObjDesc *",    "gr_desc[0].dobjdesc"),
    0x04: ("AObjEvent32 **", "gr_desc[0].anim_joints"),
    0x08: ("MObjSub ***",    "gr_desc[0].p_mobjsubs"),
    0x0C: ("AObjEvent32 ***","gr_desc[0].p_matanim_joints"),
    0x10: ("DObjDesc *",    "gr_desc[1].dobjdesc"),
    0x14: ("AObjEvent32 **", "gr_desc[1].anim_joints"),
    0x18: ("MObjSub ***",    "gr_desc[1].p_mobjsubs"),
    0x1C: ("AObjEvent32 ***","gr_desc[1].p_matanim_joints"),
    0x20: ("DObjDesc *",    "gr_desc[2].dobjdesc"),
    0x24: ("AObjEvent32 **", "gr_desc[2].anim_joints"),
    0x28: ("MObjSub ***",    "gr_desc[2].p_mobjsubs"),
    0x2C: ("AObjEvent32 ***","gr_desc[2].p_matanim_joints"),
    0x30: ("DObjDesc *",    "gr_desc[3].dobjdesc"),
    0x34: ("AObjEvent32 **", "gr_desc[3].anim_joints"),
    0x38: ("MObjSub ***",    "gr_desc[3].p_mobjsubs"),
    0x3C: ("AObjEvent32 ***","gr_desc[3].p_matanim_joints"),
    0x40: ("MPGeometryData *","map_geometry"),
    0x48: ("Sprite *",      "wallpaper"),
    0x80: ("void *",        "map_nodes"),
    0x84: ("MPItemWeights *","item_weights"),
}


def classify_extern_target(struct_off, target_off, stage):
    """For the given pointer slot, decide which file holds the target.
    Returns (file_id, allow_approx) — when `allow_approx` is True the
    caller falls back to `symbol_near` if the exact offset isn't a
    named symbol in the target file."""
    _, file2, _file3, sprite, _ = STAGE_EXTERNS[stage]

    # gr_desc pointers and map_geometry are in File2. Prefer a named
    # symbol, but fall back to nearest-preceding if File2 doesn't yet
    # have a typed symbol at that exact offset (some File2 blocks are
    # still raw u8 arrays).
    if struct_off in (0x00, 0x04, 0x08, 0x0C,
                      0x10, 0x14, 0x18, 0x1C,
                      0x20, 0x24, 0x28, 0x2C,
                      0x30, 0x34, 0x38, 0x3C,
                      0x40):
        return file2, True
    # Wallpaper is in the stage's sprite file, exact match
    if struct_off == 0x48:
        return sprite, False
    # map_nodes points into File2 at a MapHead-like offset. The typed
    # File2 descriptions don't cover the MapHead region yet, so we
    # resolve the nearest preceding symbol and express the difference
    # as `((u8*)sym + delta)`.
    if struct_off == 0x80:
        return file2, True
    return None, False


def build_rewrite(stage, reloc_path, header_sym):
    """For each extern entry in the .reloc, look up the target symbol in
    the appropriate file and build a slot -> (expression, extern_sym,
    file_id) mapping. `extern_sym` is the symbol that needs an `extern`
    declaration (or None for purely local references); `expression` is
    what goes into the struct initializer at that slot.
    """
    intern, extern = parse_reloc(reloc_path)
    rewrites = {}  # struct_byte_offset -> (expr, extern_sym, file_id)

    for ptr_off, target in extern:
        try:
            target_byte = int(target, 16)
        except ValueError:
            continue
        file_id, allow_approx = classify_extern_target(
            ptr_off, target_byte, stage)
        if file_id is None:
            continue
        sym = symbol_at(file_id, target_byte)
        if sym is not None:
            rewrites[ptr_off] = (sym, sym, file_id)
            continue
        if not allow_approx:
            continue
        sym, delta = symbol_near(file_id, target_byte)
        if sym is None:
            continue
        if delta == 0:
            rewrites[ptr_off] = (sym, sym, file_id)
        else:
            expr = f"(void *)((u8 *){sym} + 0x{delta:X})"
            rewrites[ptr_off] = (expr, sym, file_id)

    # Local intern targets: replace with the symbol name directly. These
    # don't need an extern declaration.
    for ptr_off, target in intern:
        m = re.match(r"^(\w+)(?:\+0x([0-9a-fA-F]+))?$", target)
        if not m:
            continue
        sym = m.group(1)
        off = int(m.group(2), 16) if m.group(2) else 0
        if off == 0:
            rewrites[ptr_off] = (sym, None, None)
        else:
            expr = f"(void *)((u8 *){sym} + 0x{off:X})"
            rewrites[ptr_off] = (expr, None, None)

    return rewrites


def load_symbol_types():
    """Return {symbol_name: c_type} by scanning the typed File2 and sprite
    source directories for declarations. Lets us emit the correct extern
    array/struct shape so pointer arithmetic on the resolved name matches
    what the Map struct field expects."""
    type_map = {}
    # Scan build/src/relocData/*_*.c generated masters and src/relocData/**/*.c
    paths = []
    for root in (os.path.join(PROJECT_DIR, "build", "src", "relocData"),
                 RELOC_DIR):
        if not os.path.isdir(root):
            continue
        for dirpath, _, filenames in os.walk(root):
            for fn in filenames:
                if fn.endswith(".c") and not fn.endswith(".jp.c"):
                    paths.append(os.path.join(dirpath, fn))

    # Match `<type> <name>[...]? = {`  — permit multi-word types like
    # `Sprite` / `MPGeometryData`. Keep it conservative.
    decl_re = re.compile(
        r"^(?:static\s+)?([A-Za-z_][\w\s*]*?)\s+(d\w+)\s*(?:\[[^\]]*\])?\s*=\s*[{;]",
        re.MULTILINE,
    )
    for path in paths:
        try:
            with open(path) as f:
                text = f.read()
        except OSError:
            continue
        for m in decl_re.finditer(text):
            type_name = m.group(1).strip()
            name = m.group(2)
            if name not in type_map:
                type_map[name] = type_name
    return type_map


def rewrite_map_c(stage, info, type_map):
    map_fid = info[0]
    if map_fid is None:
        return

    # Simple stages have a single <fid>_GR<Stage>Map.c file. Complex
    # stages (Zebes, Inishie, Jungle, Sector, Yamabuki, Hyrule) keep
    # their MPGroundData inside a block `.data.c` file under a manifest
    # subdirectory, so we fall through to that form if the top-level
    # .c file isn't present.
    map_c = None
    for fn in os.listdir(RELOC_DIR):
        if re.match(rf"{map_fid}_GR{stage}Map\.c$", fn):
            map_c = os.path.join(RELOC_DIR, fn)
            break
    reloc_path = os.path.join(RELOC_DIR, f"{map_fid}_GR{stage}Map.reloc")

    if map_c is not None:
        header_sym = f"dGR{stage}Map_header"
    else:
        block_dir = os.path.join(RELOC_DIR, f"GR{stage}Map")
        if not os.path.isdir(block_dir):
            print(f"  {stage}: no .c or block dir")
            return
        # Scan the block directory for whichever .data.c contains the
        # MPGroundData struct definition. Block filenames vary: most
        # stages use `MapHeader_0x0014.data.c` or `ItemHead_0x0014.data.c`,
        # but Bonus3 (and a few other header-off-zero stages) put it in
        # `gap_0x0000.data.c`.
        for fn in sorted(os.listdir(block_dir)):
            if not fn.endswith(".data.c"):
                continue
            path = os.path.join(block_dir, fn)
            with open(path) as f:
                head = f.read(200)
            if "MPGroundData " in head:
                map_c = path
                block_base = fn.replace(".data.c", "")
                header_sym = f"dGR{stage}Map_{block_base}"
                break
        if map_c is None:
            print(f"  {stage}: no header block")
            return
    rewrites = build_rewrite(stage, reloc_path, header_sym)
    if not rewrites:
        print(f"  {stage}: no rewrites")
        return

    with open(map_c) as f:
        text = f.read()

    # Locate the MPGroundData initializer and its start offset within the
    # text. We replace each pointer slot line by matching the /* field */
    # comment we emitted in typeStageMap.py.
    externs_needed = {}  # symbol_name -> c_type

    # Keep track of replacements so we can substitute inside the struct body
    replacements = []  # (old_pattern, new_str)

    for ptr_off, (expr, extern_sym, target_file_id) in sorted(rewrites.items()):
        if ptr_off not in POINTER_SLOTS:
            continue
        c_type, field_name = POINTER_SLOTS[ptr_off]

        new_expr = expr

        # Record the extern declaration when the expression references
        # a cross-file symbol.
        if target_file_id is not None and extern_sym is not None:
            sym_type = type_map.get(extern_sym)
            if sym_type is None:
                # Fallback: use the pointer slot's C type (strip the * so
                # we can declare the array).
                sym_type = c_type.rstrip(" *")
            externs_needed[extern_sym] = sym_type

        # Build a loose pattern for the C type: word chars + optional stars,
        # with any whitespace between. Then match `(<type>) 0xHEX`.
        tokens = [re.escape(t) for t in c_type.split()]
        type_pattern = r"\s*".join(tokens)

        if ptr_off < 0x40:
            # gr_desc[i].<field>: replace a cast inside a `{ ... }`.
            old_pattern = rf"\(\s*{type_pattern}\s*\)\s*0x[0-9A-Fa-f]+"
            replacements.append((ptr_off, field_name, old_pattern, new_expr))
        else:
            # Top-level field with a `, /* name */` comment.
            old_pattern = (rf"\(\s*{type_pattern}\s*\)\s*0x[0-9A-Fa-f]+"
                           rf"(,\s*/\* {re.escape(field_name)} \*/)")
            replacements.append((ptr_off, field_name, old_pattern,
                                 new_expr + r"\1"))

    # Apply replacements in order of struct offset so that multiple gr_desc
    # entries on the same line (rare) get handled left to right.
    replacements.sort(key=lambda x: x[0])
    new_text = text
    for _off, _fname, pattern, replace in replacements:
        new_text, n = re.subn(pattern, replace, new_text, count=1)
        if n == 0:
            print(f"  {stage}: failed to match slot 0x{_off:X} ({_fname})")

    # Skip any symbols that already have an `extern` declaration in the
    # source (prior-run leftovers), so we don't emit duplicates that the
    # IDO compiler rejects as redeclarations.
    already_externed = set(
        re.findall(r"^\s*extern\s+[^;]*?\s([A-Za-z_]\w*)\s*\[", new_text, re.MULTILINE)
    )
    externs_needed = {k: v for k, v in externs_needed.items()
                      if k not in already_externed}

    # Insert extern declarations just below the #include lines.
    if externs_needed:
        decl_lines = [
            "",
            "/* Cross-file references resolved by fixRelocChain.py — see .reloc */",
        ]
        # Group by file for readability
        by_file = {}
        for sym, c_type in externs_needed.items():
            for po, (_expr, e_sym, fid) in rewrites.items():
                if e_sym == sym and fid is not None:
                    by_file.setdefault(fid, []).append((sym, c_type))
                    break
        for fid in sorted(by_file):
            for sym, c_type in by_file[fid]:
                decl_lines.append(f"extern {c_type} {sym}[];")
        decl_block = "\n".join(decl_lines) + "\n"

        # Splice after the last #include, or after the initial block
        # comment if there are no includes (block files compiled via
        # #include don't carry their own #include directives).
        lines = new_text.split("\n")
        last_include = max(
            (i for i, ln in enumerate(lines) if ln.startswith("#include")),
            default=-1,
        )
        if last_include >= 0:
            lines.insert(last_include + 1, decl_block.rstrip("\n"))
        else:
            # Insert after the first block comment (if any), otherwise
            # at the very top.
            insert_idx = 0
            if lines and lines[0].lstrip().startswith("/*"):
                for i, ln in enumerate(lines):
                    if "*/" in ln:
                        insert_idx = i + 1
                        break
            lines.insert(insert_idx, decl_block.rstrip("\n"))
        new_text = "\n".join(lines)

    if new_text != text:
        with open(map_c, "w") as f:
            f.write(new_text)
        n_cross = sum(1 for _, (_, _, fid) in rewrites.items() if fid is not None)
        n_local = sum(1 for _, (_, _, fid) in rewrites.items() if fid is None)
        print(f"  {stage}: {n_cross} extern + {n_local} local rewrites")
    else:
        print(f"  {stage}: no changes")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("stages", nargs="*")
    args = ap.parse_args()

    print("Loading declared symbol types...")
    type_map = load_symbol_types()
    print(f"  {len(type_map)} symbols in type map")

    targets = args.stages or list(STAGE_EXTERNS.keys())
    for stage in targets:
        if stage not in STAGE_EXTERNS:
            print(f"Unknown stage: {stage}")
            continue
        print(f"Processing {stage}...")
        rewrite_map_c(stage, STAGE_EXTERNS[stage], type_map)


if __name__ == "__main__":
    main()
