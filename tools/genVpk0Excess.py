#!/usr/bin/python3
"""
Generate vpk0_excess_bytes.<version>.txt from the baserom.

For each compressed (.vpk0) file in assets/relocData/, this tool:
  1. Extracts the original compressed bytes from the baserom relocData segment
  2. Compares against what vpk0cmd produces from the .vpk0.bin (decompressed)
  3. Records the trailing bytes that the original had but vpk0cmd didn't produce

The result lets makeBin reproduce the exact original baserom relocData.bin.

Usage:
    genVpk0Excess.py <relocFileDescriptionsPath> <relocDataSegmentStart> <relocDataSegmentEnd> <output>

Example:
    # JP relocData segment is at 0x1ACAF0 to 0x90D5D0 in baserom.jp.z64
    genVpk0Excess.py tools/relocFileDescriptions.jp.txt 0x1ACAF0 0x90D5D0 tools/vpk0_excess_bytes.jp.txt
"""

import os
import sys
import struct
import subprocess
import argparse
import tempfile

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
VPK0_BIN = os.path.join(SCRIPT_DIR, "vpk0cmd")
ENDIANNESS = "big"


def parse_file_count(desc_path):
    with open(desc_path) as f:
        for line in f:
            line = line.strip()
            if line.startswith("# FILE_COUNT:"):
                return int(line.split(":")[1].strip())
    return None


def extract_table(rom_data, segment_start, file_count):
    """Read the relocData table from the baserom segment.

    Returns a list of dicts: {is_vpk0, data_offset, ...} for each file.
    """
    table_size = (file_count + 1) * 12
    table = []
    for i in range(file_count + 1):
        off = segment_start + i * 12
        first_word = int.from_bytes(rom_data[off:off + 4], ENDIANNESS)
        is_vpk0 = bool(first_word & 0x80000000)
        data_offset = first_word & ~0x80000000
        reloc_intern = int.from_bytes(rom_data[off + 4:off + 6], ENDIANNESS)
        compressed_size = int.from_bytes(rom_data[off + 6:off + 8], ENDIANNESS)
        reloc_extern = int.from_bytes(rom_data[off + 8:off + 10], ENDIANNESS)
        decompressed_size = int.from_bytes(rom_data[off + 10:off + 12], ENDIANNESS)
        table.append({
            'is_vpk0': is_vpk0,
            'data_offset': data_offset,
            'reloc_intern': reloc_intern,
            'compressed_size': compressed_size,
            'reloc_extern': reloc_extern,
            'decompressed_size': decompressed_size,
        })
    return table


def compute_excess(rom_data, segment_start, file_count, reloc_dir):
    """For each compressed file, return (file_id, excess_bytes_hex_or_None)."""
    table = extract_table(rom_data, segment_start, file_count)
    table_size = (file_count + 1) * 12
    data_start = segment_start + table_size

    results = []
    for i in range(file_count):
        if not table[i]['is_vpk0']:
            continue

        # The original compressed data lives in the baserom from
        # data_start + table[i].data_offset up to the next file's data_offset.
        orig_start = data_start + table[i]['data_offset']
        orig_end = data_start + table[i + 1]['data_offset']
        orig_compressed = rom_data[orig_start:orig_end]

        # Recompress the .vpk0.bin (decompressed source) and compare
        decompressed_path = os.path.join(reloc_dir, f"{i}.vpk0.bin")
        if not os.path.exists(decompressed_path):
            print(f"  Warning: {decompressed_path} missing, skipping",
                  file=sys.stderr)
            continue

        with tempfile.NamedTemporaryFile(suffix='.vpk0', delete=False) as tmp:
            tmp_path = tmp.name
        try:
            r = subprocess.run([VPK0_BIN, 'c', decompressed_path, tmp_path],
                               capture_output=True)
            if r.returncode != 0:
                print(f"  Warning: vpk0cmd failed on file {i}", file=sys.stderr)
                continue
            with open(tmp_path, 'rb') as f:
                recompressed = f.read()
        finally:
            if os.path.exists(tmp_path):
                os.unlink(tmp_path)

        # The excess bytes are whatever the original has that recompressed doesn't.
        # Typically the original is longer; recompressed is a prefix.
        if len(orig_compressed) < len(recompressed):
            print(f"  Warning: file {i} recompressed ({len(recompressed)}) > "
                  f"original ({len(orig_compressed)})", file=sys.stderr)
            continue

        if orig_compressed[:len(recompressed)] != recompressed:
            print(f"  Warning: file {i} recompressed bytes don't match prefix",
                  file=sys.stderr)
            continue

        excess = orig_compressed[len(recompressed):]
        results.append((i, excess.hex()))

    return results


def main():
    parser = argparse.ArgumentParser(
        description="Generate vpk0_excess_bytes file from a baserom")
    parser.add_argument("descriptions", help="relocFileDescriptions path")
    parser.add_argument("baserom", help="baserom path")
    parser.add_argument("segment_start", help="relocData segment start (hex)")
    parser.add_argument("segment_end", help="relocData segment end (hex)")
    parser.add_argument("output", help="Output excess bytes file path")
    parser.add_argument("--reloc-dir", default=os.path.join(PROJECT_DIR, "assets", "us", "relocData"),
                        help="Directory containing extracted .vpk0.bin files (default: assets/us/relocData)")
    args = parser.parse_args()

    file_count = parse_file_count(args.descriptions)
    if file_count is None:
        print("Error: cannot find FILE_COUNT in descriptions", file=sys.stderr)
        sys.exit(1)

    seg_start = int(args.segment_start, 16) if args.segment_start.startswith('0x') else int(args.segment_start)
    seg_end = int(args.segment_end, 16) if args.segment_end.startswith('0x') else int(args.segment_end)

    with open(args.baserom, 'rb') as f:
        rom_data = f.read()

    print(f"Computing excess bytes for {file_count} files...")
    results = compute_excess(rom_data, seg_start, file_count, args.reloc_dir)

    with open(args.output, 'w') as f:
        for fid, excess_hex in results:
            f.write(f"{fid} - {excess_hex}\n")

    print(f"Wrote {len(results)} entries to {args.output}")


if __name__ == "__main__":
    main()
