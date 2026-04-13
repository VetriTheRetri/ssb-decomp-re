#!/usr/bin/env python3
"""
Bootstrap typed manifests for Stage File2 / File3 / File4 relocData files.

These files hold each stage's display lists, vertex pools, DObjDesc arrays,
AnimJoints, collision geometry, and textures. They're referenced from the
stage's Map file (GR<Stage>Map) via extern relocs on the gr_desc[4] entries
and map_geometry pointer inside MPGroundData.

Strategy:
  1. Parse the stage's Map file (already typed via typeStageMap.py) to get
     the gr_desc[i].{dobjdesc,anim_joints,p_mobjsubs,p_matanim_joints}
     and map_geometry extern reloc targets.
  2. Also pull any entries from the Map's own descriptions section that
     reference offsets larger than the Map file itself — those are stage
     objects living in File2/File3 (e.g. the Castle stage's Lakitu DObjDesc
     at offset 0x4118).
  3. Merge everything and emit a `[<file_id>]` section in the descriptions
     file for the target File2/File3/File4 file.
  4. Run genRelocDataC --extract-data --no-discover on each target so it
     produces a manifest with typed DObjDesc / AnimJoint / MatAnimJoint /
     MObjSub / MPGeometryData blocks plus raw .data.c gap fills.

Phase 2 DL/Vtx discovery in genRelocDataC is disabled because shared
vertex pools (common across display list groups in stage data) would
cause it to emit overlapping Vtx blocks and overflow the file.
"""

import argparse
import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")
SYMBOLS_PATH = os.path.join(PROJECT_DIR, "symbols", "reloc_data_symbols.us.txt")

# Stage name -> (map_fid, file2_fid, file3_fid_or_None, file4_fid_or_None)
# Derived from the descriptions file naming conventions.
STAGE_FILES = {
    "Pupupu":       ( 255, 104, 152, None),
    "PupupuSmall":  ( 256, 104, 152, None),
    "Zebes":        ( 257, 105, 157, None),
    "PupupuTest":   ( 258, 104, 152, None),
    "Castle":       ( 259, 106, 156, None),
    "Inishie":      ( 260, 107, 155, None),
    "Jungle":       ( 261, 108, 158, None),
    "Sector":       ( 262, 109, 153, None),
    "Yoster":       ( 263, 111, 154, None),
    "Yamabuki":     ( 264, 112, 159,  160),
    "Hyrule":       ( 265, 113, None, None),
    "Last":         ( 266, 114, None, None),
    "Explain":      ( 267, 115, None, None),
    "Zako":         ( 268, None, None, None),   # no File2 — just a battle-test stage
    "Metal":        ( 269, 117, None, None),
    "YosterSmall":  ( 270, 118, None, None),
    "Battlefield":  ( None, 116, None, None),   # no Map file — used in training only
}

# Bonus stages: Bonus1 and Bonus2 per-fighter Map files each reference their
# own File2 file. The mapping is linear: Bonus1 fighter i uses Map 271+i and
# File2 124+i; Bonus2 fighter i uses Map 283+i and File2 137+i (skipping
# file id 136 which is Bonus2Common).
_BONUS_FIGHTERS = ["Mario", "Fox", "Donkey", "Samus", "Luigi", "Link",
                   "Yoshi", "Captain", "Kirby", "Pikachu", "Purin", "Ness"]
for _i, _name in enumerate(_BONUS_FIGHTERS):
    STAGE_FILES[f"Bonus1{_name}"] = (271 + _i, 124 + _i, None, None)
for _i, _name in enumerate(_BONUS_FIGHTERS):
    STAGE_FILES[f"Bonus2{_name}"] = (283 + _i, 137 + _i, None, None)
# Bonus3 is a single all-fighters race-to-the-finish stage
STAGE_FILES["Bonus3"] = (295, 149, 162, None)


def load_symbols():
    syms = {}
    with open(SYMBOLS_PATH) as f:
        for line in f:
            m = re.match(r"(ll\w+)\s*=\s*(0x[0-9a-fA-F]+)", line.strip())
            if m:
                syms[m.group(1)] = int(m.group(2), 16)
    return syms


def read_bin(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSET_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            with open(p, "rb") as f:
                return f.read()
    return None


def extract_gr_desc_targets(map_data, header_off):
    """Read gr_desc[4] and map_geometry pointer targets from the Map file's
    MPGroundData. Each extern-reloc slot's raw u32 is chain-encoded as
    (next_word << 16 | target_word); multiply target_word by 4 for the
    byte offset. Returns a list of (block_type, name, target_byte_off)."""

    entries = []
    # gr_desc[4] at offset 0..0x40 within MPGroundData (each entry 0x10 bytes).
    # Give each (layer, slot) a distinct block name so genRelocDataC's
    # colliding-name renamer doesn't rewrite them at the wrong stage of
    # its pipeline (which would mismatch between Phase 2 ptr-array symbol
    # generation and the main dispatch's emit_mobjsub_block output).
    name_by_field = (
        ("DObjDesc",     "dobjdesc",         "DObj"),
        ("AnimJoint",    "anim_joints",      "Anim"),
        ("MObjSub",      "p_mobjsubs",       "MObj"),
        ("MatAnimJoint", "p_matanim_joints", "MatAnim"),
    )
    for i in range(4):
        for k, (btype, _, name_suffix) in enumerate(name_by_field):
            slot = header_off + i * 16 + k * 4
            val = struct.unpack_from(">I", map_data, slot)[0]
            if val == 0:
                continue
            target = (val & 0xFFFF) * 4
            entries.append((btype, f"Layer{i}{name_suffix}", target))

    # map_geometry at offset 0x40
    slot = header_off + 0x40
    val = struct.unpack_from(">I", map_data, slot)[0]
    if val != 0:
        target = (val & 0xFFFF) * 4
        entries.append(("MPGeometryData", "-", target))

    return entries


def parse_descriptions():
    """Return {file_id: [(block_type, name, offset), ...]}."""
    sections = {}
    current = None
    with open(DESC_PATH) as f:
        for line in f:
            line = line.rstrip("\n")
            m = re.match(r"^\[(\d+)\]$", line.strip())
            if m:
                current = int(m.group(1))
                sections.setdefault(current, [])
                continue
            if current is None:
                continue
            stripped = line.strip()
            if not stripped:
                continue
            parts = stripped.split()
            if len(parts) != 3:
                continue
            btype, bname, boff = parts
            try:
                off = int(boff, 16) if boff.startswith("0x") else int(boff)
            except ValueError:
                continue
            sections[current].append((btype, bname, off))
    return sections


def extra_entries_from_map_section(map_fid, map_size, sections):
    """Any entries in the Map section whose offset is bigger than the Map
    file itself are really describing data in File2/File3. Return them."""
    out = []
    for btype, bname, boff in sections.get(map_fid, []):
        if boff >= map_size:
            out.append((btype, bname, boff))
    return out


def ensure_section(fid, new_entries):
    """Insert or overwrite a `[fid]` section in the descriptions file with
    the given entries (deduplicated, sorted by offset)."""
    # Deduplicate by (type, offset) keeping the first name seen
    dedup = {}
    for btype, bname, boff in new_entries:
        key = (btype, boff)
        if key not in dedup:
            dedup[key] = bname
    entries = sorted(
        ((btype, bname, off) for (btype, off), bname in dedup.items()),
        key=lambda e: e[2],
    )

    with open(DESC_PATH) as f:
        text = f.read()

    # Locate the existing section if any
    section_re = re.compile(
        rf"^\[{fid}\]\n(?:[^\n]*\n)*?(?=\n*\[\d+\]|\Z)",
        re.MULTILINE,
    )
    new_body = f"[{fid}]\n"
    for btype, bname, off in entries:
        new_body += f"{btype} {bname} 0x{off:X}\n"

    m = section_re.search(text)
    if m:
        text = text[:m.start()] + new_body + text[m.end():]
    else:
        # Append at end
        if not text.endswith("\n\n"):
            text += "\n"
        text += new_body + "\n"

    with open(DESC_PATH, "w") as f:
        f.write(text)


def run_generator(fid):
    """Run `genRelocDataC.py --extract-data --no-discover <fid>`."""
    import subprocess
    r = subprocess.run(
        ["python3", "tools/genRelocDataC.py", "--extract-data",
         "--no-discover", str(fid)],
        capture_output=True, text=True,
        cwd=PROJECT_DIR,
    )
    print(r.stdout, end="")
    if r.returncode != 0:
        print(r.stderr, end="", file=sys.stderr)
    return r.returncode == 0


def process_stage(stage, syms, sections):
    map_fid, file2_fid, file3_fid, file4_fid = STAGE_FILES[stage]

    # Map-side offsets for the gr_desc pointer targets
    if map_fid is None:
        print(f"  {stage}: no Map file, skipping")
        return

    map_name = f"GR{stage}Map" if stage != "Battlefield" else None
    header_sym = f"ll{map_name}MapHeader" if map_name else None
    header_off = syms.get(header_sym, 0x14) if header_sym else 0x14

    map_data = read_bin(map_fid)
    if map_data is None:
        print(f"  {stage}: no map binary")
        return
    map_size = len(map_data)

    # gr_desc + map_geometry targets from the Map file's MPGroundData.
    # We don't pull extra entries from the Map's own description section
    # because those entries don't tell us which secondary file (File2 vs
    # File3 vs File4) they target — only the gr_desc extern chain is
    # consistent about that, and it always points into File2 for the
    # layers we care about here.
    gr_targets = extract_gr_desc_targets(map_data, header_off)
    extras = []

    # Split targets into File2/File3/File4 based on which file they fit in.
    # The Map section's entries don't tell us which secondary file they're
    # in, so we check each target against each file's size and assign to
    # the one it fits.
    def target_file_for(off):
        for fid, label in ((file2_fid, "File2"),
                           (file3_fid, "File3"),
                           (file4_fid, "File4")):
            if fid is None:
                continue
            data = read_bin(fid)
            if data is not None and off < len(data):
                return fid, label
        return None, None

    # Only process File2 for now — File3/File4 tend to hold auxiliary
    # assets (backgrounds, small effects) whose layout is stage-specific
    # and harder to automate.
    if file2_fid is None:
        print(f"  {stage}: no File2, skipping")
        return
    file2_data = read_bin(file2_fid)
    if file2_data is None:
        print(f"  {stage}: no File2 binary")
        return
    file2_size = len(file2_data)

    entries_for_file2 = [e for e in gr_targets + extras if e[2] < file2_size]
    if not entries_for_file2:
        print(f"  {stage}: no File2 entries")
        return

    ensure_section(file2_fid, entries_for_file2)
    print(f"  {stage} -> file {file2_fid}: {len(entries_for_file2)} entries")
    run_generator(file2_fid)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("stages", nargs="*",
                    help="Stage names to process (e.g. Castle Pupupu). "
                         "Defaults to all.")
    args = ap.parse_args()

    syms = load_symbols()
    sections = parse_descriptions()

    targets = args.stages or list(STAGE_FILES.keys())
    for stage in targets:
        if stage not in STAGE_FILES:
            print(f"Unknown stage: {stage}")
            continue
        print(f"Processing {stage}...")
        process_stage(stage, syms, sections)


if __name__ == "__main__":
    main()
