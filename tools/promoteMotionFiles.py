#!/usr/bin/python3
"""Promote MainMotion and ShieldPose relocData files from raw u32 blobs to typed C source.

Parses the figatree binary format using the internal relocation chain to discover
pointer arrays and AObjEvent16 data regions. Also handles external relocations
for MainMotion files.

Usage:
    python3 tools/promoteMotionFiles.py <file_id>
    python3 tools/promoteMotionFiles.py --all
    python3 tools/promoteMotionFiles.py --dry-run <file_id>
"""

import argparse
import csv
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
OUT_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "relocData.csv")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")

# Import decode_joint_to_macros from promoteAnimJoints
sys.path.insert(0, SCRIPT_DIR)
from promoteAnimJoints import decode_joint_to_macros


def get_us_names():
    names = {}
    with open(DESC_PATH) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)\s*$', line)
            if m:
                names[int(m.group(1))] = m.group(2)
    return names


def get_bin_path(fid):
    for ext in ['.bin', '.vpk0.bin']:
        p = os.path.join(ASSET_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            return p
    return None


def get_csv_row(fid):
    with open(CSV_PATH) as f:
        reader = csv.reader(f)
        next(reader)  # skip header
        for i, row in enumerate(reader):
            if i == fid:
                return row
    return None


def walk_reloc_chain(data, start_word):
    """Walk a relocation chain starting at start_word.

    Returns list of (ptr_word_offset, target_word_offset) pairs.
    """
    relocs = []
    cur = start_word
    while cur != 0xFFFF:
        byte_off = cur * 4
        if byte_off + 4 > len(data):
            break
        val = struct.unpack_from('>I', data, byte_off)[0]
        nxt = (val >> 16) & 0xFFFF
        tgt = val & 0xFFFF
        relocs.append((cur, tgt))
        cur = nxt
    return relocs


def find_figatree_arrays(relocs, file_size_words):
    """Group relocation entries into figatree pointer arrays.

    A figatree pointer array is a contiguous block of u32 slots where some
    slots are reloc'd pointers and others are NULL (0x00000000).

    Returns list of arrays, each being:
        {
            'start': first_word_offset,
            'end': last_word_offset + 1 (exclusive),
            'relocs': [(ptr_word, target_word), ...],
            'slots': total slot count
        }
    """
    if not relocs:
        return []

    sorted_relocs = sorted(relocs, key=lambda r: r[0])

    # Group relocs that are close together (within the same pointer array)
    # A figatree array for a character has N_joints slots (typically 16-24)
    # We detect group boundaries by looking for large gaps between pointer words
    groups = []
    cur_group = [sorted_relocs[0]]

    for i in range(1, len(sorted_relocs)):
        gap = sorted_relocs[i][0] - sorted_relocs[i - 1][0]
        # Within a single figatree array, pointers are at most ~24 slots apart
        # Between arrays, there's typically data (AObjEvent16) in between
        if gap > 30:
            groups.append(cur_group)
            cur_group = [sorted_relocs[i]]
        else:
            cur_group.append(sorted_relocs[i])
    groups.append(cur_group)

    arrays = []
    for g in groups:
        first_ptr = g[0][0]
        last_ptr = g[-1][0]
        # The array spans from first_ptr to last_ptr inclusive
        # But we need to figure out where it actually starts and ends
        # (there may be NULL slots before the first pointer or after the last)

        # For now, assume array starts at first_ptr and ends at last_ptr + 1
        # We'll refine boundaries later when we know what's around them
        arrays.append({
            'start': first_ptr,
            'end': last_ptr + 1,
            'relocs': g,
            'slots': last_ptr - first_ptr + 1,
        })

    return arrays


def identify_regions(data, intern_relocs, extern_relocs, file_size_words):
    """Identify all regions in the file: pointer arrays and data regions.

    Merges intern and extern relocs together when finding pointer array
    boundaries, since they can be interleaved in the same memory region.

    Returns a list of regions sorted by word offset:
        {'type': 'data', 'start': word, 'end': word, 'kind': 'raw'|'aobj'}
        {'type': 'ptrs', 'start': word, 'end': word,
         'intern_relocs': [...], 'extern_relocs': [...], 'slots': N}
    """
    # Merge ALL relocs (intern + extern) for grouping purposes
    # Tag each with its chain type
    all_relocs_tagged = [(r[0], r[1], 'intern') for r in intern_relocs]
    all_relocs_tagged += [(r[0], r[1], 'extern') for r in extern_relocs]

    # Find pointer arrays using ALL relocs merged
    all_relocs_plain = [(r[0], r[1]) for r in all_relocs_tagged]
    merged_arrays = find_figatree_arrays(all_relocs_plain, file_size_words)

    # Build intern/extern maps for quick lookup
    intern_map = {r[0]: r[1] for r in intern_relocs}
    extern_map = {r[0]: r[1] for r in extern_relocs}

    # Split each merged array's relocs back into intern/extern
    for arr in merged_arrays:
        arr['intern_relocs'] = [(pw, tw) for pw, tw in arr['relocs']
                                if pw in intern_map]
        arr['extern_relocs'] = [(pw, tw) for pw, tw in arr['relocs']
                                if pw in extern_map]

    # Collect target word offsets from intern relocs (these are AObjEvent16 data)
    intern_targets = set(r[1] for r in intern_relocs)

    # Build final region list
    regions = []
    pos = 0

    for arr in merged_arrays:
        # Data region before this array
        if pos < arr['start']:
            region_has_targets = any(
                pos <= t < arr['start'] for t in intern_targets
            )
            regions.append({
                'type': 'data',
                'start': pos,
                'end': arr['start'],
                'kind': 'aobj' if region_has_targets else 'raw',
            })

        # The pointer array itself
        regions.append({
            'type': 'ptrs',
            'start': arr['start'],
            'end': arr['end'],
            'intern_relocs': arr['intern_relocs'],
            'extern_relocs': arr['extern_relocs'],
            'slots': arr['slots'],
        })
        pos = arr['end']

    # Trailing data after last array
    if pos < file_size_words:
        region_has_targets = any(
            pos <= t < file_size_words for t in intern_targets
        )
        regions.append({
            'type': 'data',
            'start': pos,
            'end': file_size_words,
            'kind': 'aobj' if region_has_targets else 'raw',
        })

    return regions


def emit_raw_u32(data, start_word, end_word):
    """Emit raw u32 hex values for a data region."""
    lines = []
    n_words = end_word - start_word
    for w in range(0, n_words, 8):
        chunk = []
        for k in range(w, min(w + 8, n_words)):
            val = struct.unpack_from('>I', data, (start_word + k) * 4)[0]
            chunk.append(f"0x{val:08X}")
        lines.append("\t" + ", ".join(chunk) + ",")
    return lines


def emit_aobj_data(data, start_word, end_word, intern_relocs, prefix, region_idx):
    """Emit AObjEvent16 data for a region that is targeted by figatree pointers.

    The intern_relocs list contains (ptr_word, target_word) pairs where
    target_word points into this region. We use the targets to split
    the region into per-joint script arrays.
    """
    c_lines = []
    reloc_lines = []

    # Find all targets that point into this region
    targets_in_region = sorted(set(
        r[1] for r in intern_relocs
        if start_word <= r[1] < end_word
    ))

    if not targets_in_region:
        # No targets point here - emit as raw u32
        var = f"{prefix}_data{region_idx}"
        n = end_word - start_word
        c_lines.append(f"/* Data region at word 0x{start_word:04X} ({n} words) */")
        c_lines.append(f"u32 {var}[{n}] = {{")
        c_lines.extend(emit_raw_u32(data, start_word, end_word))
        c_lines.append("};")
        c_lines.append("")
        return c_lines, reloc_lines, {start_word: var}

    # Split into per-target script arrays
    symbols = {}

    # Check if there's data before the first target
    if start_word < targets_in_region[0]:
        pre_var = f"{prefix}_pre{region_idx}"
        n = targets_in_region[0] - start_word
        c_lines.append(f"/* Pre-data at word 0x{start_word:04X} ({n} words) */")
        c_lines.append(f"u32 {pre_var}[{n}] = {{")
        c_lines.extend(emit_raw_u32(data, start_word, targets_in_region[0]))
        c_lines.append("};")
        c_lines.append("")
        symbols[start_word] = pre_var

    for ti, target_word in enumerate(targets_in_region):
        # Determine the extent of this script
        if ti + 1 < len(targets_in_region):
            script_end = targets_in_region[ti + 1]
        else:
            script_end = end_word

        script_byte_start = target_word * 4
        script_byte_end = script_end * 4
        script_size = script_byte_end - script_byte_start
        n_u16 = script_size // 2

        var = f"{prefix}_script{region_idx}_{ti}"
        symbols[target_word] = var

        c_lines.append(f"/* Script at word 0x{target_word:04X} ({n_u16} u16s) */")
        c_lines.append(f"u16 {var}[{n_u16}] = {{")

        # Try macro decode
        decoded, end_pos = decode_joint_to_macros(data, script_byte_start, script_byte_end)
        if end_pos > script_byte_end:
            # Decode overshot — emit raw u16
            for w in range(0, n_u16, 16):
                chunk = []
                for k in range(w, min(w + 16, n_u16)):
                    val = struct.unpack_from('>H', data, script_byte_start + k * 2)[0]
                    chunk.append(f"0x{val:04X}")
                c_lines.append("\t" + ", ".join(chunk) + ",")
        else:
            c_lines.extend(decoded)
            # Trailing bytes after End command
            remaining = script_byte_end - end_pos
            if remaining > 0:
                trailing = []
                for k in range(remaining // 2):
                    v = struct.unpack_from('>H', data, end_pos + k * 2)[0]
                    trailing.append(f"0x{v:04X}")
                if trailing:
                    c_lines.append(f"\t{', '.join(trailing)},")

        c_lines.append("};")
        c_lines.append("")

    return c_lines, reloc_lines, symbols


def generate_file(fid, name, data, intern_relocs, extern_relocs):
    """Generate typed .c and .reloc content for a MainMotion/ShieldPose file."""
    prefix = f"d{name}"
    file_size_words = len(data) // 4

    c_lines = []
    reloc_lines = [
        f"# Relocation metadata for file {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C variable names resolved via .o symbol table",
    ]

    c_lines.append(f"/* Figatree motion data for relocData file {fid} ({name}) */")
    c_lines.append(f"/* File size: {len(data)} bytes (0x{len(data):X}) */")
    c_lines.append("")
    c_lines.append('#include "relocdata_types.h"')
    c_lines.append("")

    # Identify all regions
    regions = identify_regions(data, intern_relocs, extern_relocs, file_size_words)

    # First pass: identify all data regions and build symbol tables
    # (needed for forward declarations)
    all_symbols = {}  # word_offset -> variable_name

    # Assign names to pointer array regions
    ptrs_idx = 0
    for ri, region in enumerate(regions):
        if region['type'] == 'ptrs':
            var = f"{prefix}_ptrs{ptrs_idx}"
            region['var_name'] = var
            all_symbols[region['start']] = var
            ptrs_idx += 1

    # Pre-scan data regions to find target symbols
    data_idx = 0
    for ri, region in enumerate(regions):
        if region['type'] == 'data':
            targets_in_region = sorted(set(
                r[1] for r in intern_relocs
                if region['start'] <= r[1] < region['end']
            ))
            if targets_in_region:
                # Check for pre-data
                if region['start'] < targets_in_region[0]:
                    pre_var = f"{prefix}_pre{data_idx}"
                    all_symbols[region['start']] = pre_var

                for ti, tw in enumerate(targets_in_region):
                    var = f"{prefix}_script{data_idx}_{ti}"
                    all_symbols[tw] = var
            else:
                var = f"{prefix}_data{data_idx}"
                all_symbols[region['start']] = var
            data_idx += 1

    # Generate forward declarations for all data symbols that are referenced
    # by pointer arrays (intern relocs only - extern targets are external)
    declared_symbols = set()
    for ri, region in enumerate(regions):
        if region['type'] == 'ptrs':
            for ptr_w, tgt_w in region['intern_relocs']:
                if tgt_w in all_symbols:
                    sym = all_symbols[tgt_w]
                    if sym not in declared_symbols:
                        if 'script' in sym:
                            c_lines.append(f"extern u16 {sym}[];")
                        else:
                            c_lines.append(f"extern u32 {sym}[];")
                        declared_symbols.add(sym)
    if declared_symbols:
        c_lines.append("")

    # Second pass: emit all regions
    data_idx = 0
    ptrs_idx = 0
    for ri, region in enumerate(regions):
        if region['type'] == 'data':
            data_c, data_reloc, data_syms = emit_aobj_data(
                data, region['start'], region['end'],
                intern_relocs, prefix, data_idx
            )
            c_lines.extend(data_c)
            reloc_lines.extend(data_reloc)
            data_idx += 1

        elif region['type'] == 'ptrs':
            var = region['var_name']
            n_slots = region['slots']

            # Build maps for intern and extern relocs in this array
            intern_map = {r[0]: r[1] for r in region['intern_relocs']}
            extern_map = {r[0]: r[1] for r in region['extern_relocs']}

            n_intern = len(region['intern_relocs'])
            n_extern = len(region['extern_relocs'])
            desc_parts = []
            if n_intern:
                desc_parts.append(f"{n_intern} intern")
            if n_extern:
                desc_parts.append(f"{n_extern} extern")
            desc = ", ".join(desc_parts)

            c_lines.append(f"/* Pointer array at word 0x{region['start']:04X} "
                          f"({n_slots} slots, {desc}) */")
            c_lines.append(f"u32 {var}[{n_slots}] = {{")

            for slot in range(region['start'], region['end']):
                slot_idx = slot - region['start']
                byte_off_in_array = slot_idx * 4

                if slot in intern_map:
                    tgt_w = intern_map[slot]
                    if tgt_w in all_symbols:
                        tgt_sym = all_symbols[tgt_w]
                        c_lines.append(f"\t(u32){tgt_sym}, /* [{slot_idx}] intern -> 0x{tgt_w:04X} */")
                        reloc_lines.append(
                            f"intern {var}+0x{byte_off_in_array:X} {tgt_sym}")
                    else:
                        # Intern target not in symbols - find closest symbol
                        val = struct.unpack_from('>I', data, slot * 4)[0]
                        c_lines.append(f"\t0x{val:08X}, /* [{slot_idx}] intern -> 0x{tgt_w:04X} */")
                        best_sym, best_off = None, None
                        for sw, sn in sorted(all_symbols.items()):
                            if sw <= tgt_w:
                                best_sym, best_off = sn, sw
                        if best_sym:
                            offset_bytes = (tgt_w - best_off) * 4
                            if offset_bytes > 0:
                                reloc_lines.append(
                                    f"intern {var}+0x{byte_off_in_array:X} "
                                    f"{best_sym}+0x{offset_bytes:X}")
                            else:
                                reloc_lines.append(
                                    f"intern {var}+0x{byte_off_in_array:X} {best_sym}")
                        else:
                            reloc_lines.append(
                                f"intern {var}+0x{byte_off_in_array:X} 0x{tgt_w * 4:X}")

                elif slot in extern_map:
                    tgt_w = extern_map[slot]
                    val = struct.unpack_from('>I', data, slot * 4)[0]
                    c_lines.append(f"\t0x{val:08X}, /* [{slot_idx}] extern -> 0x{tgt_w:04X} */")
                    reloc_lines.append(
                        f"extern {var}+0x{byte_off_in_array:X} 0x{tgt_w * 4:X}")

                else:
                    # Non-reloc'd slot
                    val = struct.unpack_from('>I', data, slot * 4)[0]
                    if val == 0:
                        c_lines.append(f"\t0x00000000, /* [{slot_idx}] NULL */")
                    else:
                        c_lines.append(f"\t0x{val:08X}, /* [{slot_idx}] */")

            c_lines.append("};")
            c_lines.append("")
            ptrs_idx += 1

    return "\n".join(c_lines), "\n".join(reloc_lines) + "\n"


def process_file(fid, name, dry_run=False):
    """Process one file. Returns (success, message)."""
    bin_path = get_bin_path(fid)
    if not bin_path:
        return False, f"no binary for {fid}"

    with open(bin_path, 'rb') as f:
        data = f.read()

    if len(data) % 4 != 0:
        return False, f"size {len(data)} not word-aligned"

    # Get CSV data
    row = get_csv_row(fid)
    if not row:
        return False, f"no CSV entry for {fid}"

    intern_start = int(row[2].strip(), 16)
    extern_start = int(row[4].strip(), 16)

    # Walk reloc chains
    intern_relocs = walk_reloc_chain(data, intern_start)
    extern_relocs = walk_reloc_chain(data, extern_start)

    c_content, reloc_content = generate_file(fid, name, data,
                                              intern_relocs, extern_relocs)

    c_path = os.path.join(OUT_DIR, f"{fid}_{name}.c")
    reloc_path = os.path.join(OUT_DIR, f"{fid}_{name}.reloc")

    if dry_run:
        return True, f"would write {os.path.basename(c_path)} ({len(data)} bytes, {len(intern_relocs)}i/{len(extern_relocs)}e relocs)"

    with open(c_path, 'w') as f:
        f.write(c_content)
    with open(reloc_path, 'w') as f:
        f.write(reloc_content)

    return True, f"{len(data)} bytes, {len(intern_relocs)} intern + {len(extern_relocs)} extern relocs"


# Target files
MAINMOTION_IDS = [202, 205, 212, 216, 220, 224, 232, 242, 246]
SHIELDPOSE_IDS = [298, 314, 318, 322, 327, 329, 331, 334, 337, 340, 343]
ALL_IDS = MAINMOTION_IDS + SHIELDPOSE_IDS


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_id", nargs="?", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    us_names = get_us_names()

    if args.file_id:
        fids = [args.file_id]
    elif args.all:
        fids = ALL_IDS
    else:
        ap.print_help()
        return 2

    ok = fail = 0
    for fid in fids:
        name = us_names.get(fid)
        if not name:
            print(f"  SKIP {fid}: no name in descriptions", file=sys.stderr)
            continue
        success, msg = process_file(fid, name, dry_run=args.dry_run)
        if success:
            ok += 1
            print(f"  OK {fid} {name}: {msg}")
        else:
            fail += 1
            print(f"  FAIL {fid} {name}: {msg}", file=sys.stderr)

    print(f"processed {ok + fail}: {ok} ok, {fail} failed")
    return 0 if fail == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
