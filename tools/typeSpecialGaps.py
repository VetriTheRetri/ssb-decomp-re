#!/usr/bin/env python3
"""Type gap bytes in fighter Special files by walking their display lists.

After typeFighterSpecials has labelled the DObjDesc / MObjSub / AnimJoint
/ MatAnimJoint structs and typed the immediate joint display lists, the
remaining raw-byte gaps hold palettes, textures, and vertex pools that
the display lists reference via chain-encoded segmented addresses.

This pass reads each typed DL (plus any `_post` DataBlock continuations)
as an F3DEX2 command stream and, for every pointer-carrying opcode,
decodes the target offset and classifies it:

    0x01  G_VTX          → Vtx block (count from opcode)
    0xFD  G_SETTIMG      → pending — needs F0/F3 to decide
    0xF0  G_LOADTLUT     → pending SETTIMG was a palette (LUT)
    0xF3  G_LOADBLOCK    → pending SETTIMG was a texture (DataBlock)

The decoded targets become new description entries, which genRelocDataC
turns into typed blocks in the regenerated manifest, chopping up the
`gap_0x0000` DataBlock into named regions.

Only targets that fall inside a region currently covered by a gap /
DataBlock entry are emitted — we never overwrite an existing structured
block.
"""

import argparse
import os
import re
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import typeFighterSpecials as tfs

PROJECT_DIR = tfs.PROJECT_DIR
DESC_PATH = tfs.DESC_PATH

VTX_SIZE = 16

# Opcodes that open / close display lists. We also treat anything whose
# opcode byte is in VALID_DL_OPS as a legit DL command and step by 8; other
# bytes get skipped (we're inside a DL region, so this really only matters
# for the initial `_post` block heuristic).
VALID_DL_OPS = {
    0x00, 0x01, 0x02, 0x03, 0x05, 0x06, 0x07,
    0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDE, 0xDF,
    0xE2, 0xE3, 0xE6, 0xE7, 0xE8, 0xE9, 0xEF,
    0xF0, 0xF2, 0xF3, 0xF5, 0xF8, 0xFA, 0xFB, 0xFC, 0xFD,
}


def read_desc_entries(fid):
    """Parse the current [fid] section. Returns sorted list of
    (btype, name, offset) tuples."""
    with open(DESC_PATH) as f:
        text = f.read()
    m = re.search(rf'^\[{fid}\]\n((?:[^\n]+\n)*?)(?=\n*\[\d+\]|\Z)',
                  text, re.MULTILINE)
    if not m:
        return []
    out = []
    for line in m.group(1).splitlines():
        line = line.strip()
        if not line or line.startswith('#'):
            continue
        parts = line.split()
        if len(parts) != 3:
            continue
        off = int(parts[2], 16) if parts[2].startswith('0x') else int(parts[2])
        out.append((parts[0], parts[1], off))
    out.sort(key=lambda t: t[2])
    return out


def get_manifest_blocks(fid, name):
    """Read the manifest and yield (block_filename, start, end) tuples by
    looking up sizes on disk. Used to find DataBlock post-DL regions that
    should be parsed as DL continuations."""
    manifest = os.path.join(PROJECT_DIR, "src", "relocData",
                            f"{fid}_{name}.manifest")
    if not os.path.exists(manifest):
        return []
    blocks = []
    with open(manifest) as f:
        for line in f:
            line = line.strip()
            if line and not line.startswith('#') and not line.startswith('pad '):
                blocks.append(line)
    return blocks


def find_dl_ranges(data, entries, file_name):
    """Return sorted [(start, end)] byte ranges that are display list data.

    Sources:
      - every `DisplayList` description entry — ends at next description
        entry start (or file end).
      - each _post data block adjacent to a DisplayList whose bytes look
        like a DL prefix (first opcode in VALID_DL_OPS). These are
        emitted by genRelocDataC when a branch/return leaves the DL and
        falls through to more command bytes; without a typed wrapper
        they're DataBlock but we still need to scan them.
    """
    ranges = []
    entry_offsets = sorted(e[2] for e in entries)
    entry_offsets.append(len(data))

    def next_off(off):
        for eo in entry_offsets:
            if eo > off:
                return eo
        return len(data)

    for btype, bname, off in entries:
        if btype == 'DisplayList':
            ranges.append((off, next_off(off)))

    # Look for `_post` data blocks in the manifest.
    sub_dir = os.path.join(PROJECT_DIR, "src", "relocData", file_name)
    if os.path.isdir(sub_dir):
        for fn in os.listdir(sub_dir):
            m = re.match(r'Joint_0x([0-9A-Fa-f]+)_post\.data\.c$', fn)
            if not m:
                continue
            # The post block starts at the end of the matching DL. We locate
            # it by scanning description entries in offset order.
            parent_off = int(m.group(1), 16)
            # Find the DL entry with this offset and compute its end
            for i, (bt, bn, off) in enumerate(entries):
                if bt == 'DisplayList' and off == parent_off:
                    # DL ends at its actual end-of-list terminator. Easier:
                    # the post block starts right where the DL's range
                    # ended in the manifest. Approximate by walking bytes
                    # from the DL start until we find the first DF END.
                    dl_end = scan_dl_end(data, off, next_off(off))
                    post_end = next_off(off)
                    if dl_end < post_end and post_end <= len(data):
                        # Only scan if the first 8 bytes look like an opcode
                        if data[dl_end] in VALID_DL_OPS:
                            ranges.append((dl_end, post_end))
                    break
    ranges.sort()
    return ranges


def scan_dl_end(data, start, limit):
    """Find the position just past the first 0xDF END opcode."""
    p = start
    while p + 8 <= min(len(data), limit):
        if data[p] == 0xDF and data[p + 1] == 0 and data[p + 2] == 0 and data[p + 3] == 0:
            return p + 8
        p += 8
    return limit


def decode_settimg_fmt(fmt_byte):
    """SETTIMG byte1 = fffi_i000. Return (fmt, size) where fmt is 0-4 and
    size is 0-3 (4/8/16/32-bit)."""
    fmt = (fmt_byte >> 5) & 0x7
    size = (fmt_byte >> 3) & 0x3
    return fmt, size


def walk_dl(data, dl_start, dl_end):
    """Walk the DL bytes and return a list of (target_off, type, extra)
    tuples for every pointer-carrying opcode.

    type ∈ {'Vtx', 'LUT', 'Tex', 'DL'}
    extra is opcode-specific (vertex count, palette color count, settimg
    fmt/size byte).
    """
    out = []
    pending_settimg = None  # (target, fmt_byte)

    pos = dl_start
    while pos + 8 <= dl_end:
        word0, word1 = struct.unpack_from('>II', data, pos)
        op = (word0 >> 24) & 0xFF
        # Decode chain-encoded pointer (pre-relocation). Target is in the
        # lower 16 bits as a word index (×4 for bytes).
        target = (word1 & 0xFFFF) * 4 if word1 else 0
        target_valid = 0 < target < len(data)

        if op == 0x01:  # G_VTX
            n = (word0 >> 12) & 0xFF
            if target_valid and 1 <= n <= 32:
                out.append((target, 'Vtx', n))
        elif op == 0xFD:  # G_SETTIMG
            fmt_byte = (word0 >> 16) & 0xFF
            if target_valid:
                pending_settimg = (target, fmt_byte)
            else:
                pending_settimg = None
        elif op == 0xF0:  # G_LOADTLUT
            if pending_settimg is not None:
                tgt, fmt_byte = pending_settimg
                # count-1 is encoded in bits 18..4 of word1 (`0[t] [ccc]0 00`).
                count = ((word1 >> 14) & 0x3FF) + 1
                out.append((tgt, 'LUT', count))
            pending_settimg = None
        elif op == 0xF3:  # G_LOADBLOCK
            if pending_settimg is not None:
                tgt, fmt_byte = pending_settimg
                out.append((tgt, 'Tex', fmt_byte))
            pending_settimg = None
        elif op == 0xDE:  # G_DL (branch)
            if target_valid:
                out.append((target, 'DL', None))
        elif op == 0xDF:
            break
        pos += 8

    return out


def classify_targets(refs):
    """Merge the per-DL reference list into a single {offset: (type, extra)}
    map. A conflict resolves in favor of the more specific type:
    Vtx > LUT > Tex > DL."""
    priority = {'Vtx': 3, 'LUT': 2, 'Tex': 1, 'DL': 0}
    out = {}
    for off, typ, extra in refs:
        if off in out and priority[out[off][0]] >= priority[typ]:
            continue
        out[off] = (typ, extra)
    return out


def find_gap_ranges(entries, file_size):
    """Return [(start, end)] list of byte ranges currently not covered by a
    structured description entry. Used to filter out references that land
    inside already-typed blocks."""
    ends = {}
    typed_offsets = sorted(e[2] for e in entries if e[0] != 'DisplayList')
    # For the filter we treat DisplayList entries as "structured too" — we
    # do not want to emit new gap entries inside an existing DL range.
    all_offsets = sorted(e[2] for e in entries) + [file_size]
    gap = []
    cursor = 0
    for off in all_offsets:
        if cursor < off:
            gap.append((cursor, off))
        cursor = off
    # Keep only the gap preceding the first structured entry — this is the
    # big header-level raw region we actually want to break up. The other
    # inter-entry gaps are normally 0-size or pad-only.
    return gap


def emit_description_updates(fid, new_entries):
    """Merge new entries into the [fid] section via the same helper used by
    typeFighterSpecials — collisions on (type, offset) get replaced by
    (offset) key so a DataBlock can upgrade to Vtx / LUT later."""
    tfs.ensure_description(fid, new_entries)


def run_generator(fid):
    r = subprocess.run(
        ['python3', 'tools/genRelocDataC.py', '--extract-data', '--no-discover', str(fid)],
        capture_output=True, text=True, cwd=PROJECT_DIR,
    )
    if r.returncode != 0:
        print(r.stdout, end='')
        print(r.stderr, end='', file=sys.stderr)
    return r.returncode == 0


def write_extras_file(fid, file_name, new_entries, vtx_counts, targets):
    """Write/update a `.extras` file with typed blocks decoded from DLs.

    The extras format (see genRelocDataC.parse_extras_file) is:
        <type> <name> <offset> [extra]

    `extra` is the vertex count for Vtx blocks, or left empty for LUT /
    DataBlock (which fill to the next entry automatically).
    """
    extras_path = os.path.join(PROJECT_DIR, "src", "relocData",
                                f"{fid}_{file_name}.extras")

    existing = {}  # (type, offset) -> full line
    if os.path.exists(extras_path):
        with open(extras_path) as f:
            for line in f:
                if '#' in line:
                    line = line[:line.index('#')]
                line = line.strip()
                if not line:
                    continue
                parts = line.split()
                if len(parts) >= 3:
                    off = int(parts[2], 16) if parts[2].startswith('0x') else int(parts[2])
                    existing[(parts[0], off)] = line

    # New entries from this pass — preserve existing entries at the same
    # (type, offset) slot so hand-tuned counts don't get clobbered.
    for btype, name, off in new_entries:
        key = (btype, off)
        if key in existing:
            continue
        if btype == 'Vtx':
            count = vtx_counts.get(off)
            if count:
                existing[key] = f"Vtx {name} 0x{off:X} {count}"
            else:
                existing[key] = f"Vtx {name} 0x{off:X}"
        else:
            existing[key] = f"{btype} {name} 0x{off:X}"

    if not existing:
        return

    lines = [existing[k] for k in sorted(existing, key=lambda k: k[1])]
    with open(extras_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')


def process(fid, file_name):
    data = tfs.read_bin(fid)
    if data is None:
        print(f'  {fid} {file_name}: no binary')
        return

    entries = read_desc_entries(fid)
    if not entries:
        print(f'  {fid} {file_name}: no description entries')
        return

    dl_ranges = find_dl_ranges(data, entries, file_name)
    if not dl_ranges:
        print(f'  {fid} {file_name}: no DL ranges')
        return

    all_refs = []
    for start, end in dl_ranges:
        all_refs.extend(walk_dl(data, start, end))

    targets = classify_targets(all_refs)
    if not targets:
        print(f'  {fid} {file_name}: no DL pointer targets')
        return

    # Filter: only keep targets that aren't already a description entry
    existing_offsets = {e[2] for e in entries}
    # Also don't accept targets inside a DL range (those are branch
    # destinations within the command stream and would break genRelocDataC).
    dl_spans = [(s, e) for s, e in dl_ranges]

    def inside_dl(off):
        return any(s <= off < e for s, e in dl_spans)

    new_entries = []
    vtx_counts = {}

    for off in sorted(targets):
        if off in existing_offsets:
            continue
        if inside_dl(off):
            continue
        typ, extra = targets[off]
        if typ == 'Vtx':
            new_entries.append(('Vtx', f'Vtx_0x{off:04X}', off))
            vtx_counts[off] = extra
        elif typ == 'LUT':
            # LUT blocks are fixed 32 bytes (16 colors) in genRelocDataC.
            # If the count isn't 16 we fall back to DataBlock so the raw
            # palette bytes stay intact.
            if extra == 16:
                new_entries.append(('LUT', f'Lut_0x{off:04X}', off))
            else:
                new_entries.append(('DataBlock', f'Lut{extra}_0x{off:04X}', off))
        elif typ == 'Tex':
            new_entries.append(('DataBlock', f'Tex_0x{off:04X}', off))
        elif typ == 'DL':
            # Branch target inside the same file — typically already typed
            # by typeFighterSpecials, but emit anyway if we somehow missed it.
            new_entries.append(('DisplayList', f'Joint_0x{off:04X}', off))

    if not new_entries:
        print(f'  {fid} {file_name}: nothing new to type')
        return

    counts = {}
    for t, _, _ in new_entries:
        counts[t] = counts.get(t, 0) + 1
    summary = ', '.join(f'{n} {t}' for t, n in sorted(counts.items()))
    print(f'  {fid} {file_name}: {summary}')

    # Write the new entries to the .extras file instead of the description.
    # genRelocDataC reads extras and appends them to the same `entries`
    # list it builds from descriptions, so writing to both would cause
    # duplicate-symbol errors. Extras also let us supply exact Vtx counts
    # (description entries only carry three fields), which matters when
    # two Vtx blocks sit adjacent with no padding — the fill-to-next
    # fallback underflows to zero in that case.
    write_extras_file(fid, file_name, new_entries, vtx_counts, targets)
    run_generator(fid)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('fids', nargs='*', type=int)
    args = ap.parse_args()

    name_to_fid = tfs.get_name_to_fid()
    fid_to_name = {v: k for k, v in name_to_fid.items()}
    special_re = re.compile(r'^[A-Z][A-Za-z]+Special[2-4]$')
    special_fids = sorted(fid for fid, name in fid_to_name.items()
                          if special_re.match(name))

    if args.fids:
        targets = [f for f in special_fids if f in args.fids]
    else:
        targets = special_fids

    for fid in targets:
        name = fid_to_name.get(fid)
        if name:
            process(fid, name)


if __name__ == '__main__':
    main()
