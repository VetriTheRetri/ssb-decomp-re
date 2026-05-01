#!/usr/bin/python3
"""
Rebuild relocation chains in a compiled relocData binary using symbolic labels.

Usage:
    fixRelocChain.py <binary_path> <reloc_path> <object_path> [--file-id N]

Reads a .reloc metadata file with symbolic labels like:
    intern dMNCommon_OptionTabLeft+0x34 dMNCommon_data_0x0000+0x1D8

Resolves labels to byte offsets using the .o file's symbol table (via nm),
then patches the binary to reconstruct the relocation chain.
"""

import os
import sys
import struct
import argparse
import csv
import subprocess
import re

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
# Default to the US tree; main() rebinds via _bind_version() once --version is parsed.
CSV_PATH = os.path.join(PROJECT_DIR, "assets", "us", "relocData.csv")


def _bind_version(version):
    global CSV_PATH
    CSV_PATH = os.path.join(PROJECT_DIR, "assets", version, "relocData.csv")


def read_symbol_table(obj_path):
    """Read symbol table from .o file using nm. Returns {name: offset}."""
    # Try both nm variants
    for prefix in ['mips-linux-gnu', 'mips-elf']:
        nm = f"{prefix}-nm"
        try:
            result = subprocess.run([nm, obj_path], capture_output=True, text=True, check=True)
            break
        except (FileNotFoundError, subprocess.CalledProcessError):
            continue
    else:
        print(f"Error: no mips nm found", file=sys.stderr)
        sys.exit(1)

    symbols = {}
    for line in result.stdout.splitlines():
        parts = line.split()
        if len(parts) >= 3:
            offset = int(parts[0], 16)
            name = parts[2]
            symbols[name] = offset
    return symbols


def resolve_label(label, symbols):
    """Resolve a label like 'varname+0x34' to a byte offset.

    Supports:
        varname         -> symbols[varname]
        varname+0x34    -> symbols[varname] + 0x34
        0x1234          -> 0x1234  (raw hex fallback)
    """
    # Raw hex offset (backwards compat)
    if re.match(r'^0x[0-9a-fA-F]+$', label):
        return int(label, 16)

    # label+offset
    m = re.match(r'^(.+)\+0x([0-9a-fA-F]+)$', label)
    if m:
        name = m.group(1)
        rel_offset = int(m.group(2), 16)
        if name not in symbols:
            print(f"Error: symbol '{name}' not found in object file", file=sys.stderr)
            sys.exit(1)
        return symbols[name] + rel_offset

    # plain label
    if label in symbols:
        return symbols[label]

    print(f"Error: cannot resolve label '{label}'", file=sys.stderr)
    sys.exit(1)


def parse_reloc_metadata(reloc_path, symbols):
    """Parse .reloc file, resolving labels to byte offsets.

    Returns (intern_entries, extern_entries) where each is a list of
    (ptr_byte_offset, target_byte_offset).
    """
    intern_entries = []
    extern_entries = []

    with open(reloc_path) as f:
        for line in f:
            # Strip trailing inline comments like `# -> file 208 (FoxMainMotion)`
            # that annotateExternRelocFids.py writes for readability.
            hash_idx = line.find('#')
            if hash_idx >= 0:
                line = line[:hash_idx]
            line = line.strip()
            if not line:
                continue
            parts = line.split()
            if len(parts) != 3:
                continue

            chain_type, ptr_label, target_label = parts
            ptr_off = resolve_label(ptr_label, symbols)
            target_off = resolve_label(target_label, symbols)

            if chain_type == 'intern':
                intern_entries.append((ptr_off, target_off))
            elif chain_type == 'extern':
                extern_entries.append((ptr_off, target_off))

    return intern_entries, extern_entries


def build_chain(data, entries):
    """Rebuild a relocation chain in the binary data.

    Each u32 at ptr_byte_offset gets patched to:
      (next_ptr_word_offset << 16) | target_word_offset

    Returns the word offset of the first entry (chain start).
    """
    if not entries:
        return 0xFFFF

    entries = sorted(entries, key=lambda e: e[0])

    for i, (ptr_off, target_off) in enumerate(entries):
        target_word = target_off // 4
        next_ptr_word = entries[i + 1][0] // 4 if i + 1 < len(entries) else 0xFFFF
        packed = (next_ptr_word << 16) | target_word
        struct.pack_into('>I', data, ptr_off, packed)

    return entries[0][0] // 4


def fixup_binary(binary_path, reloc_path, obj_path, file_id=None):
    """Patch relocation chains using symbolic labels resolved from .o file."""

    symbols = read_symbol_table(obj_path)
    intern_entries, extern_entries = parse_reloc_metadata(reloc_path, symbols)

    with open(binary_path, 'rb') as f:
        data = bytearray(f.read())

    intern_start = build_chain(data, intern_entries)
    extern_start = build_chain(data, extern_entries)

    with open(binary_path, 'wb') as f:
        f.write(data)

    print(f"Patched {binary_path}:")
    print(f"  {len(intern_entries)} internal relocations (start word: 0x{intern_start:04X})")
    print(f"  {len(extern_entries)} external relocations (start word: 0x{extern_start:04X})")

    # Verify chain start matches CSV
    if file_id is not None and os.path.exists(CSV_PATH):
        with open(CSV_PATH) as f:
            reader = csv.reader(f)
            next(reader)
            for i, row in enumerate(reader):
                if i == file_id and len(row) >= 6:
                    csv_intern = int(row[2].strip(), 16)
                    csv_extern = int(row[4].strip(), 16)
                    if csv_intern != intern_start:
                        print(f"  WARNING: CSV intern 0x{csv_intern:04X} != chain start 0x{intern_start:04X}")
                    if csv_extern != extern_start:
                        print(f"  WARNING: CSV extern 0x{csv_extern:04X} != chain start 0x{extern_start:04X}")
                    break

    return intern_start, extern_start


def main():
    parser = argparse.ArgumentParser(description="Rebuild relocation chains using symbolic labels")
    parser.add_argument("binary_path", help="Compiled binary (.vpk0.bin or .bin)")
    parser.add_argument("reloc_path", help="Relocation metadata file (.reloc)")
    parser.add_argument("obj_path", help="Compiled object file (.o) for symbol resolution")
    parser.add_argument("--file-id", type=int, default=None, help="File ID for CSV update")
    parser.add_argument("--version", default="us", choices=("us", "jp"),
                        help="Selects assets/<v>/relocData.csv")
    args = parser.parse_args()
    _bind_version(args.version)

    fixup_binary(args.binary_path, args.reloc_path, args.obj_path, args.file_id)


if __name__ == "__main__":
    main()
