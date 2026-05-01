#!/usr/bin/env python3
"""Retype u8 gap_/data_ arrays that contain Gfx display list data.

Scans relocData .c files for `u8 dXxx_(gap|data)_0xNNNN[SIZE]` declarations,
checks the binary at the corresponding offset for an F3DEX2 opcode in the
first byte, and if matched:
  1. Changes `u8` -> `Gfx`, name `gap_0xN`/`data_0xN` -> `DL_0xN`,
     size from bytes to commands (bytes/8), inc.c suffix from .data.inc.c
     to .dl.inc.c
  2. Updates all references in the .reloc file
  3. Updates DObjDesc cast references in the .c file
"""

import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")

# F3DEX2 opcodes that can validly start a display list
VALID_DL_START_OPCODES = {
    0xE7, 0xE3, 0xDF, 0xFC, 0xFD, 0xD7, 0xD9, 0xBB, 0xB7, 0xB6,
    0x06, 0x04, 0x01,
}

# EndDisplayList command: 0xDF000000 00000000
ENDDL_BYTES = bytes([0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00])


def get_fid_from_filename(filename):
    """Extract the numeric file ID from a filename like '104_StagePupupuFile2.c'."""
    m = re.match(r'^(\d+)_', filename)
    return int(m.group(1)) if m else None


def load_binary(fid):
    """Load the binary data for a given file ID."""
    bin_path = os.path.join(ASSETS_DIR, f"{fid}.vpk0.bin")
    if not os.path.exists(bin_path):
        return None
    with open(bin_path, "rb") as f:
        return f.read()


def find_dl_candidates(c_text, data):
    """Find all u8 gap_/data_ arrays whose binary data starts with a DL opcode.

    Returns list of (old_sym, old_type_prefix, offset_hex, byte_size, line_start, line_end)
    where old_type_prefix is 'gap' or 'data'.
    """
    candidates = []

    # Match declarations like:
    #   u8 dStagePupupuFile2_gap_0x0000[8] = {
    #   u8 dStagePupupuFile2_gap_0x0000_sub_0x40[64] = {
    #   u8 dStagePupupuFile2_data_0x41F4[144] = {
    pattern = re.compile(
        r'^u8\s+(d\w+_(gap|data)_0x([0-9A-Fa-f]+)(?:_sub_0x([0-9A-Fa-f]+))?)\[(\d+)\]\s*=\s*\{',
        re.MULTILINE
    )

    for m in pattern.finditer(c_text):
        old_sym = m.group(1)
        type_prefix = m.group(2)  # 'gap' or 'data'
        base_offset_hex = m.group(3)
        sub_offset_hex = m.group(4)  # None if no _sub_ part
        byte_size = int(m.group(5))

        # Compute the actual file offset
        # For sub-blocks like gap_0x0898_sub_0x10, the file offset is
        # base (0x0898) + sub (0x10) = 0x08A8
        base_offset = int(base_offset_hex, 16)
        if sub_offset_hex is not None:
            file_offset = base_offset + int(sub_offset_hex, 16)
        else:
            file_offset = base_offset

        # Must be divisible by 8 and at least 8 bytes
        if byte_size % 8 != 0 or byte_size < 8:
            continue

        # Check binary data
        if data is None or file_offset + byte_size > len(data):
            continue

        first_byte = data[file_offset]
        if first_byte not in VALID_DL_START_OPCODES:
            continue

        # Validate: the last 8 bytes must be gsSPEndDisplayList (0xDF000000 00000000)
        end_offset = file_offset + byte_size - 8
        if data[end_offset:end_offset + 8] != ENDDL_BYTES:
            continue

        candidates.append((old_sym, type_prefix, file_offset, byte_size, m.start(), m.end()))

    return candidates


def compute_new_sym(old_sym, file_offset):
    """Generate the new DL symbol name from the old gap/data symbol name.

    Examples:
      dStagePupupuFile2_gap_0x0000_sub_0x40  -> dStagePupupuFile2_DL_0x0040
      dStagePupupuFile2_gap_0x0898           -> dStagePupupuFile2_DL_0x0898
      dStagePupupuFile2_data_0x41F4          -> dStagePupupuFile2_DL_0x41F4
    """
    # Find the prefix before gap_/data_
    m = re.match(r'^(d\w+?)_(gap|data)_0x[0-9A-Fa-f]+', old_sym)
    if not m:
        return None
    prefix = m.group(1)
    return f"{prefix}_DL_0x{file_offset:04X}"


def compute_old_inc_path(old_sym, c_text):
    """Extract the include path from the source text for this symbol."""
    # Look for the #include line after the declaration
    pattern = re.compile(
        rf'u8\s+{re.escape(old_sym)}\[\d+\]\s*=\s*\{{\s*\n\s*#include\s*<([^>]+)>'
    )
    m = pattern.search(c_text)
    if m:
        return m.group(1)
    return None


def compute_new_inc_path(old_inc_path, new_sym, prefix_name):
    """Compute the new inc.c path.

    Old: StagePupupuFile2/gap_0x0000_sub_0x40.data.inc.c
    New: StagePupupuFile2/DL_0x0040.dl.inc.c
    """
    # Extract the directory part
    parts = old_inc_path.split('/')
    if len(parts) != 2:
        return None
    dir_part = parts[0]
    # The new filename is based on the new symbol name, minus the dPrefix_ part
    # e.g., dStagePupupuFile2_DL_0x0040 -> DL_0x0040
    short_name = new_sym.replace(f"d{prefix_name}_", "")
    return f"{dir_part}/{short_name}.dl.inc.c"


def process_file(c_path, dry_run=False):
    """Process a single .c file and its corresponding .reloc file."""
    basename = os.path.basename(c_path)
    fid = get_fid_from_filename(basename)
    if fid is None:
        return 0

    # Derive the file name (e.g., "StagePupupuFile2")
    name_part = re.sub(r'^\d+_', '', basename)
    name_part = name_part.replace('.c', '')

    data = load_binary(fid)
    if data is None:
        return 0

    with open(c_path) as f:
        c_text = f.read()

    candidates = find_dl_candidates(c_text, data)
    if not candidates:
        return 0

    # Build rename map: old_sym -> new_sym
    rename_map = {}
    inc_rename_map = {}  # old_inc -> new_inc
    for old_sym, type_prefix, file_offset, byte_size, _, _ in candidates:
        new_sym = compute_new_sym(old_sym, file_offset)
        if new_sym is None:
            continue
        old_inc = compute_old_inc_path(old_sym, c_text)
        if old_inc is None:
            continue
        new_inc = compute_new_inc_path(old_inc, new_sym, name_part)
        if new_inc is None:
            continue
        rename_map[old_sym] = (new_sym, byte_size, file_offset)
        inc_rename_map[old_sym] = (old_inc, new_inc)

    if not rename_map:
        return 0

    if dry_run:
        print(f"  {basename}: {len(rename_map)} DL arrays to convert")
        for old_sym, (new_sym, byte_size, _) in sorted(rename_map.items()):
            print(f"    {old_sym} -> {new_sym}[{byte_size // 8}]")
        return len(rename_map)

    # Build a combined regex that matches any old symbol at a word boundary.
    # Sort longest-first so longer symbols match before shorter prefixes.
    sorted_syms = sorted(rename_map.keys(), key=len, reverse=True)

    # Build replacement function for symbol names
    sym_pattern = re.compile(
        r'\b(' + '|'.join(re.escape(s) for s in sorted_syms) + r')\b'
    )

    def sym_replacer(m):
        old = m.group(1)
        new_sym, _, _ = rename_map[old]
        return new_sym

    # Apply changes to .c file
    new_c_text = c_text

    # First, replace declarations: u8 OLD[BYTES] = { -> Gfx NEW[CMDS] = {
    for old_sym, (new_sym, byte_size, file_offset) in rename_map.items():
        cmd_count = byte_size // 8
        old_decl = f"u8 {old_sym}[{byte_size}]"
        new_decl = f"Gfx {new_sym}[{cmd_count}]"
        new_c_text = new_c_text.replace(old_decl, new_decl)

    # Replace include paths
    for old_sym in rename_map:
        old_inc, new_inc = inc_rename_map[old_sym]
        new_c_text = new_c_text.replace(f"<{old_inc}>", f"<{new_inc}>")

    # Replace all remaining symbol references (DObjDesc casts, etc.)
    # using word-boundary regex to avoid substring matches
    new_c_text = sym_pattern.sub(sym_replacer, new_c_text)

    with open(c_path, 'w') as f:
        f.write(new_c_text)

    # Update .reloc files (base .reloc, .us.reloc, .jp.reloc)
    base_path = c_path.replace('.c', '')
    for reloc_suffix in ['.reloc', '.us.reloc', '.jp.reloc']:
        reloc_path = base_path + reloc_suffix
        if os.path.exists(reloc_path):
            with open(reloc_path) as f:
                reloc_text = f.read()

            new_reloc_text = sym_pattern.sub(sym_replacer, reloc_text)

            if new_reloc_text != reloc_text:
                with open(reloc_path, 'w') as f:
                    f.write(new_reloc_text)

    print(f"  {basename}: converted {len(rename_map)} arrays to Gfx DL")
    return len(rename_map)


def main():
    import argparse
    ap = argparse.ArgumentParser(description="Retype gap/data arrays containing DL data to Gfx DL arrays")
    ap.add_argument('--dry-run', action='store_true', help="Show what would be changed without modifying files")
    ap.add_argument('files', nargs='*', help="Specific .c files to process (default: all relocData .c files)")
    args = ap.parse_args()

    if args.files:
        c_files = [os.path.join(RELOC_DIR, f) if not os.path.isabs(f) else f for f in args.files]
    else:
        c_files = sorted(
            os.path.join(RELOC_DIR, f)
            for f in os.listdir(RELOC_DIR)
            if f.endswith('.c')
        )

    total = 0
    for c_path in c_files:
        if not os.path.exists(c_path):
            print(f"  WARNING: {c_path} not found")
            continue
        count = process_file(c_path, dry_run=args.dry_run)
        total += count

    print(f"\nTotal: {total} arrays {'would be ' if args.dry_run else ''}converted")


if __name__ == '__main__':
    main()
