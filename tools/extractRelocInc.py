#!/usr/bin/env python3
"""Regenerate `.inc.c` companions for typed relocData blocks from the ROM.

For each converted relocData file, walks its manifest in order, uses the
committed wrapper declarations to compute per-block offsets/sizes, and
writes the raw bytes of every Vtx / LUT / Tex wrapper to a fresh
`build/src/relocData/<Name>/<block>.{vtx,palette,tex}.inc.c`.

The committed wrappers stay small and sourceable — they declare the type
and the array count — while the copyrighted raw bytes are re-derived
from `assets/relocData/<fid>.vpk0.bin` every time `make extract` runs.
"""

import argparse
import os
import re
import struct
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
SRC_RELOC = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_RELOC = os.path.join(PROJECT_DIR, "build", "src", "relocData")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")

sys.path.insert(0, SCRIPT_DIR)
from genRelocMaster import parse_manifest, compute_block_size


def bin_path(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSET_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            return p
    return None


def manifest_for(fid):
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f"{fid}_") and fn.endswith(".manifest"):
            return os.path.join(SRC_RELOC, fn)
    return None


def sub_name_of(manifest_path):
    """Extract `<Name>` from `src/relocData/<fid>_<Name>.manifest`."""
    name = os.path.basename(manifest_path)[:-len(".manifest")]
    return name.split("_", 1)[1] if "_" in name else name


def wrapper_inc_target(block_filename):
    """Return the inc.c filename the wrapper would expect for this block.
    None if the block isn't a wrappable type."""
    if block_filename.endswith('.vtx.c'):
        return block_filename[:-len('.vtx.c')] + '.vtx.inc.c'
    if block_filename.endswith('.palette.c'):
        return block_filename[:-len('.palette.c')] + '.palette.inc.c'
    if block_filename.startswith('Tex_') and block_filename.endswith('.data.c'):
        return block_filename[:-len('.data.c')] + '.tex.inc.c'
    return None


def write_lines(path, lines):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, 'w') as f:
        f.write("\n".join(lines) + "\n")


def emit_vtx(data, start, count, path):
    lines = []
    for i in range(count):
        off = start + i * 16
        if off + 16 > len(data):
            break
        v = data[off:off + 16]
        x, y, z = struct.unpack('>3h', v[0:6])
        flag = struct.unpack('>H', v[6:8])[0]
        s, t = struct.unpack('>2h', v[8:12])
        r, g, b, a = v[12], v[13], v[14], v[15]
        lines.append(
            f"\t{{ {{ {{ {x}, {y}, {z} }}, 0x{flag:04X}, "
            f"{{ {s}, {t} }}, {{ 0x{r:02X}, 0x{g:02X}, 0x{b:02X}, 0x{a:02X} }} }} }},")
    write_lines(path, lines)


def emit_palette(data, start, path):
    colors = struct.unpack('>16H', data[start:start + 32])
    lines = [
        "\t" + ", ".join(f"0x{c:04X}" for c in colors[0:8]) + ",",
        "\t" + ", ".join(f"0x{c:04X}" for c in colors[8:16]) + ",",
    ]
    write_lines(path, lines)


def emit_tex(data, start, size, path):
    lines = []
    for i in range(0, size, 16):
        end = min(i + 16, size)
        chunk = data[start + i:start + end]
        lines.append("\t" + ", ".join(f"0x{b:02X}" for b in chunk) + ",")
    write_lines(path, lines)


def process_fid(fid):
    manifest = manifest_for(fid)
    if manifest is None:
        return 0
    binp = bin_path(fid)
    if binp is None:
        return 0
    with open(binp, 'rb') as f:
        data = f.read()

    sub = sub_name_of(manifest)
    src_sub_dir = os.path.join(SRC_RELOC, sub)
    build_sub_dir = os.path.join(BUILD_RELOC, sub)
    search_paths = [SRC_RELOC, BUILD_RELOC]

    entries = parse_manifest(manifest)
    offset = 0
    emitted = 0
    for kind, payload in entries:
        if kind == 'pad':
            offset += payload
            continue
        # kind == 'block'
        block_path = os.path.join(src_sub_dir, payload)
        size = compute_block_size(block_path, search_paths=search_paths)
        inc_name = wrapper_inc_target(payload)
        if inc_name is None:
            offset += size
            continue
        inc_path = os.path.join(build_sub_dir, inc_name)
        if payload.endswith('.vtx.c'):
            count = size // 16
            emit_vtx(data, offset, count, inc_path)
        elif payload.endswith('.palette.c'):
            emit_palette(data, offset, inc_path)
        elif payload.startswith('Tex_'):
            emit_tex(data, offset, size, inc_path)
        emitted += 1
        offset += size
    return emitted


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int,
                    help='File IDs to extract; default = every manifest on disk.')
    args = ap.parse_args()

    if args.fids:
        targets = args.fids
    else:
        targets = []
        for fn in sorted(os.listdir(SRC_RELOC)):
            if fn.endswith('.manifest'):
                fid_str = fn.split('_', 1)[0]
                if fid_str.isdigit():
                    targets.append(int(fid_str))

    total = 0
    for fid in targets:
        n = process_fid(fid)
        if n:
            total += n
    print(f"extractRelocInc: wrote {total} inc.c files across {len(targets)} fids")


if __name__ == '__main__':
    main()
