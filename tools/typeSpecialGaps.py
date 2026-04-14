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


DOBJDESC_SIZE = 44

# Opcode bytes that legitimately open a display list (F3DEX2). Matches
# typeFighterModels.VALID_DL_START_CMDS and is used to validate that a
# DObjDesc.dl pointer actually lands on a display list.
_DL_START_CMDS = {
    0xD7, 0xD9, 0xDA, 0xDB, 0xDC, 0xDE, 0xDF,
    0xE2, 0xE3, 0xE6, 0xE7, 0xE8, 0xE9, 0xEF,
    0xF8, 0xFB, 0xFC, 0xFD,
}


def _resolve_dobjdesc_dl(data, raw_dl):
    """Resolve a chain-encoded DObjDesc.dl value to a byte offset that
    actually points at DL commands, handling the indirect 16-byte link
    struct `{id, Gfx*, 4, 0}` some fighter models use. Returns None if the
    pointer doesn't land on a plausible DL start."""
    if raw_dl == 0:
        return None
    target = (raw_dl & 0xFFFF) * 4
    if target <= 0 or target >= len(data):
        return None
    opcode = data[target]
    if opcode in _DL_START_CMDS:
        return target
    # Indirect link-struct form.
    if opcode == 0x00 and target + 16 <= len(data):
        inner_raw = struct.unpack_from(">I", data, target + 4)[0]
        inner_byte = (inner_raw & 0xFFFF) * 4
        if 0 < inner_byte < len(data) and data[inner_byte] in _DL_START_CMDS:
            return inner_byte
    return None


def _walk_dobjdesc_dls(data, array_off, array_end):
    """Walk a DObjDesc array starting at `array_off` and yield each entry's
    resolved DL start byte offset. Stops when either an array-terminator
    entry is seen (`id == -1` or leaf `scale == (0,0,0)`), or when the
    cursor would cross `array_end`."""
    dls = []
    pos = array_off
    while pos + DOBJDESC_SIZE <= array_end:
        fields = struct.unpack(">i I 3f 3f 3f",
                                data[pos:pos + DOBJDESC_SIZE])
        joint_id = fields[0]
        raw_dl = fields[1]
        scale = fields[8:11]
        if joint_id == -1:
            break
        resolved = _resolve_dobjdesc_dl(data, raw_dl)
        if resolved is not None:
            dls.append(resolved)
        if scale == (0.0, 0.0, 0.0):
            break
        pos += DOBJDESC_SIZE
    return dls


def _find_dl_end_from_start(data, start):
    """Walk forward from `start` until the first `gsSPEndDisplayList`
    (0xDF 00 00 00 00 00 00 00), returning the byte offset just past it.
    Caps at end-of-file."""
    p = start
    while p + 8 <= len(data):
        if (data[p] == 0xDF and data[p + 1] == 0
                and data[p + 2] == 0 and data[p + 3] == 0):
            return p + 8
        p += 8
    return len(data)


def find_dl_ranges(data, entries, file_name):
    """Return sorted [(start, end)] byte ranges that are display list data.

    Sources:
      - every `DisplayList` description entry — ends at next description
        entry start (or file end).
      - every `DObjDesc` description entry — walk the array, resolve each
        entry's `dl` pointer (direct or indirect link-struct form), and
        scan forward until the next `gsSPEndDisplayList`.
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
        elif btype == 'DObjDesc':
            array_end = next_off(off)
            for dl_start in _walk_dobjdesc_dls(data, off, array_end):
                ranges.append((dl_start,
                               _find_dl_end_from_start(data, dl_start)))

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


# G_IM_SIZ_{4b,8b,16b,32b} encoded in SETTIMG byte1 bits 4-3 (values 0..3).
# Bytes-per-pixel numerator (use 1 and divide by 2 for 4b).
_SIZ_BITS = {0: 4, 1: 8, 2: 16, 3: 32}


def _compute_tex_size(siz, width, height):
    """Texture byte count for SIZ_{4b,8b,16b,32b} dims. `width` and `height`
    come from SETTIMG.width-1 + 1 / SETTILESIZE.LRS/LRT + 1 respectively."""
    bits = _SIZ_BITS.get(siz)
    if bits is None or width <= 0 or height <= 0:
        return None
    total_bits = width * height * bits
    # Pad to whole bytes (a 4b odd-width row still rounds up).
    return (total_bits + 7) // 8


def walk_dl(data, dl_start, dl_end):
    """Walk the DL bytes and return a list of (target_off, type, extra)
    tuples for every pointer-carrying opcode.

    type ∈ {'Vtx', 'LUT', 'Tex', 'DL'}
    extra is opcode-specific:
      - 'Vtx'  → vertex count
      - 'LUT'  → palette color count
      - 'Tex'  → computed byte size (or None if dimensions unknown)
      - 'DL'   → None

    The F3DEX texture-load patterns handled:
      (1) SETTIMG → SETTILE → LOADBLOCK → SETTILESIZE              (block load)
      (2) SETTIMG → SETTILE → LOADTILE → SETTILESIZE (repeated)    (tile load)
      (3) SETTIMG → SETTILE → SETTILESIZE (no LOAD*)               (TMEM reuse)

    Commit policy for textures: a pending SETTIMG stays open and accumulates
    the running `max(LRS+1, LRT+1)` from every SETTILESIZE and LOADTILE seen
    until the *next* SETTIMG (or until the DL ends or a G_DL branch leaves).
    The resulting byte size uses SETTIMG's image-row width and the accumulated
    max-height. This gets the pattern-(2) case right where a single texture
    is iteratively streamed in 8-row strips by many LOADTILE calls: the
    committed size equals width × max_LRT × bytes_per_pixel, not the size of
    the last strip.
    """
    out = []
    # pending_tex accumulates one texture bind at a time. Fields:
    #   target, fmt, siz, width (from SETTIMG)
    #   max_h (largest LRT+1 seen since SETTIMG; 0 until first tile op)
    #   committed (bool — was a LOAD/SIZE command observed?)
    pending_tex = None

    def _commit_pending_tex():
        nonlocal pending_tex
        if pending_tex is None:
            return
        if not pending_tex['committed']:
            # SETTIMG with no follow-up texture command → not a real bind,
            # or branched away. Drop it.
            pending_tex = None
            return
        tgt = pending_tex['target']
        siz = pending_tex['siz']
        width = pending_tex['width']
        height = pending_tex['max_h'] or 0
        # Trust the computed size only when both dimensions look real.
        # SETTIMG width = 1 is the LOADBLOCK linearization idiom (treat the
        # image as a 1-wide strip) and gives bogus `width × height × bpp`
        # products — fall back to fill-to-next in that case.
        if width >= 4 and height > 0:
            byte_size = _compute_tex_size(siz, width, height)
        else:
            byte_size = None
        out.append((tgt, 'Tex', byte_size))
        pending_tex = None

    def _tile_height_from_lrt(word0, word1):
        """Convert a SETTILESIZE / LOADTILE word pair into a (LRS+1, LRT+1)
        pair in pixel units. Both commands share the same s10.2 field layout
        for the rect corners."""
        lrs = (word1 >> 12) & 0xFFF
        lrt = word1 & 0xFFF
        return (lrs >> 2) + 1, (lrt >> 2) + 1

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
            # Any earlier pending texture is considered fully drawn now.
            _commit_pending_tex()
            fmt_byte = (word0 >> 16) & 0xFF
            fmt, siz = decode_settimg_fmt(fmt_byte)
            width = (word0 & 0xFFF) + 1  # bits 11..0 hold (width - 1)
            if target_valid:
                pending_tex = {
                    'target': target, 'fmt': fmt, 'siz': siz,
                    'width': width, 'max_h': 0, 'committed': False,
                }
        elif op == 0xF2:  # G_SETTILESIZE — update running max height
            if pending_tex is not None:
                _, h = _tile_height_from_lrt(word0, word1)
                if h > pending_tex['max_h']:
                    pending_tex['max_h'] = h
                pending_tex['committed'] = True
        elif op == 0xF3:  # G_LOADBLOCK — commit marker only
            if pending_tex is not None:
                pending_tex['committed'] = True
        elif op == 0xF4:  # G_LOADTILE — update running max height
            if pending_tex is not None:
                _, h = _tile_height_from_lrt(word0, word1)
                if h > pending_tex['max_h']:
                    pending_tex['max_h'] = h
                pending_tex['committed'] = True
        elif op == 0xF0:  # G_LOADTLUT
            if pending_tex is not None:
                tgt = pending_tex['target']
                # count-1 is encoded in bits 18..4 of word1 (`0[t] [ccc]0 00`).
                count = ((word1 >> 14) & 0x3FF) + 1
                out.append((tgt, 'LUT', count))
                pending_tex = None
        elif op == 0xDE:  # G_DL (branch)
            if target_valid:
                out.append((target, 'DL', None))
        elif op == 0xDF:
            break
        pos += 8

    # Flush any pending texture at end-of-DL.
    _commit_pending_tex()
    return out


def classify_targets(refs):
    """Merge the per-DL reference list into a single {offset: (type, extra)}
    map. A conflict resolves in favor of the more specific type:
    Vtx > LUT > Tex > DL.

    For Tex targets seen multiple times with different sizes (same texture
    bound from different DLs), prefer the *largest* known size — a smaller
    re-bind usually reflects a sub-tile of the same image."""
    priority = {'Vtx': 3, 'LUT': 2, 'Tex': 1, 'DL': 0}
    out = {}
    for off, typ, extra in refs:
        if off in out:
            cur_type, cur_extra = out[off]
            if priority[cur_type] > priority[typ]:
                continue
            if priority[cur_type] == priority[typ]:
                if typ == 'Tex':
                    # Keep the biggest known size; None loses to a real value.
                    if extra is None:
                        continue
                    if cur_extra is not None and cur_extra >= extra:
                        continue
                else:
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


def prune_orphaned_blocks(fid, file_name):
    """Delete any per-block files in `src/relocData/<file_name>/` that are
    no longer referenced by the regenerated manifest. Without this, each
    run of the walker leaves stale `gap_*.data.c` / `Tex_*.data.c` files
    behind (e.g. when a gap gets split or renamed), which inflates the
    gap-bytes survey even though the build only compiles manifest entries.
    """
    manifest_path = os.path.join(PROJECT_DIR, "src", "relocData",
                                  f"{fid}_{file_name}.manifest")
    block_dir = os.path.join(PROJECT_DIR, "src", "relocData", file_name)
    if not (os.path.exists(manifest_path) and os.path.isdir(block_dir)):
        return
    listed = set()
    with open(manifest_path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#') or line.startswith('pad '):
                continue
            listed.add(line)
    for fn in os.listdir(block_dir):
        if fn not in listed:
            try:
                os.remove(os.path.join(block_dir, fn))
            except OSError:
                pass


def write_extras_file(fid, file_name, new_entries, vtx_counts, targets,
                      tex_sizes=None):
    """Write/update a `.extras` file with typed blocks decoded from DLs.

    The extras format (see genRelocDataC.parse_extras_file) is:
        <type> <name> <offset> [extra]

    `extra` is the vertex count for Vtx blocks, the byte size for DataBlock
    entries (optional — omitted falls back to fill-to-next), or left empty
    for LUT blocks.
    """
    if tex_sizes is None:
        tex_sizes = {}

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
        elif btype == 'DataBlock' and name.startswith('Tex_'):
            size = tex_sizes.get(off)
            if size:
                existing[key] = f"DataBlock {name} 0x{off:X} {size}"
            else:
                existing[key] = f"DataBlock {name} 0x{off:X}"
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

    # Walk every initial DL range; any G_DL (0xDE) reference becomes a new
    # candidate DL range whose end is its own gsSPEndDisplayList. Iterate
    # until the closure is stable — this is how we discover deep DLs that
    # top-level wrappers just call through to.
    all_refs = []
    walked_starts = set()
    pending_starts = [s for s, _ in dl_ranges]
    dl_spans_by_start = {s: e for s, e in dl_ranges}

    while pending_starts:
        start = pending_starts.pop()
        if start in walked_starts:
            continue
        walked_starts.add(start)
        end = dl_spans_by_start.get(start) or _find_dl_end_from_start(data, start)
        dl_spans_by_start[start] = end
        refs = walk_dl(data, start, end)
        all_refs.extend(refs)
        # Queue any freshly-discovered DL branch targets.
        for tgt, typ, _extra in refs:
            if typ != 'DL':
                continue
            if tgt in walked_starts or tgt in dl_spans_by_start:
                continue
            if 0 < tgt < len(data) and data[tgt] in _DL_START_CMDS:
                pending_starts.append(tgt)

    # Re-materialize `dl_ranges` so the filter below covers every DL we
    # actually walked (initial + discovered).
    dl_ranges = sorted(dl_spans_by_start.items())

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

    # Compute typed-entry byte spans so we can reject Tex/Vtx targets that
    # would overlap a currently-typed block (e.g. a "SETTIMG points inside
    # an AnimJoint" case where the AnimJoint description runs long and
    # actually covers both an anim header and a texture). We keep the
    # existing entry intact and drop the new target — it can be added back
    # later by splitting the description manually.
    sorted_entry_offsets = sorted(e[2] for e in entries) + [len(data)]
    typed_spans = []
    for i, (_bt, _bn, o) in enumerate(sorted((e for e in entries),
                                              key=lambda x: x[2])):
        # End of this entry = start of the next entry (or EOF).
        for nxt in sorted_entry_offsets:
            if nxt > o:
                typed_spans.append((o, nxt))
                break

    def inside_typed(off):
        return any(s < off < e for s, e in typed_spans)

    # Build the sorted target list, skipping DL-internal refs and any
    # target that clashes with a pre-existing description entry.
    sorted_targets = []
    for off in sorted(targets):
        if off in existing_offsets:
            continue
        if inside_dl(off):
            continue
        if inside_typed(off):
            # Target lands inside an already-typed, non-DL block (e.g. an
            # AnimJoint or MObjSub). Skip — don't split existing entries.
            continue
        sorted_targets.append(off)

    # Clamp Vtx counts so they never cross into the next typed target.
    # Some Special DLs contain an unreachable G_VTX branch that addresses
    # memory that's *also* used as IA16 texture data for a later SETTIMG;
    # if we take the Vtx n at face value the resulting block runs past
    # the Tex address and genRelocDataC emits an overlapping manifest.
    # All description-entry offsets (existing + new) that come after a
    # given Vtx form the upper bound on its size.
    all_offsets = sorted(set(existing_offsets) | set(sorted_targets))

    def next_offset_after(off):
        for o in all_offsets:
            if o > off:
                return o
        return len(data)

    new_entries = []
    vtx_counts = {}
    tex_sizes = {}  # offset → byte size (None ⇒ fill-to-next)
    # Cursor tracks the end of the most-recently-emitted extras block. Any
    # candidate whose offset sits inside an already-emitted block is a
    # false positive (e.g. a Vtx and a LUT classified at nearby offsets in
    # the same 32-byte region, where the LUT's fixed 32-byte size spills
    # over a follow-on Vtx start). Skip such overlaps.
    cursor = 0

    for off in sorted_targets:
        if off < cursor:
            # Would overlap the previous block — drop.
            continue
        typ, extra = targets[off]
        if typ == 'Vtx':
            max_bytes = next_offset_after(off) - off
            max_count = max_bytes // VTX_SIZE
            if max_count <= 0:
                # No room for even one vertex — drop this target entirely.
                continue
            count = min(extra, max_count)
            new_entries.append(('Vtx', f'Vtx_0x{off:04X}', off))
            vtx_counts[off] = count
            cursor = off + count * VTX_SIZE
        elif typ == 'LUT':
            # LUT blocks are fixed 32 bytes (16 colors) in genRelocDataC.
            # If the count isn't 16 we fall back to DataBlock so the raw
            # palette bytes stay intact.
            if extra == 16:
                new_entries.append(('LUT', f'Lut_0x{off:04X}', off))
                cursor = off + 32
            else:
                new_entries.append(('DataBlock', f'Lut{extra}_0x{off:04X}', off))
                # Unknown count — fall through to next-entry fill.
                cursor = off  # no contribution; next entry decides
        elif typ == 'Tex':
            new_entries.append(('DataBlock', f'Tex_0x{off:04X}', off))
            # Clamp to the gap available before the next typed entry.
            max_bytes = next_offset_after(off) - off
            if extra is None or extra > max_bytes:
                # Fall back to fill-to-next if the computed size doesn't fit
                # (usually because SETTILESIZE data was missing or the tool
                # misread the image width).
                tex_sizes[off] = None
                cursor = off  # size is unknown; don't over-claim
            else:
                tex_sizes[off] = extra
                cursor = off + extra
        elif typ == 'DL':
            # Branch target inside the same file. The recursive DL walker
            # in process() already traversed any G_DL target whose first
            # byte is a valid opcode; refs that survive to here either land
            # on non-opcode bytes (garbage from a stub G_DL in dead code)
            # or on already-typed entries. Drop them — emitting a bogus
            # DisplayList entry corrupts the carved binary.
            if data[off] not in _DL_START_CMDS:
                continue
            new_entries.append(('DisplayList', f'Joint_0x{off:04X}', off))
            cursor = off  # DL length is computed by gen; don't clamp

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
    write_extras_file(fid, file_name, new_entries, vtx_counts, targets,
                      tex_sizes=tex_sizes)
    if run_generator(fid):
        prune_orphaned_blocks(fid, file_name)


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
