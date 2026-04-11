#!/usr/bin/python3
"""Promote fighter animation files from raw u32 blobs to typed AnimJoint C source.

Parses the AnimJoint binary format:
  [Joint table header]  Array of u32 entries. Each non-NULL entry encodes
                        (u16 joint_id, u16 data_word_offset) before relocation,
                        which becomes a pointer at runtime. NULL entries are
                        0x00000000. The sentinel is (0xFFFF, end_word_offset).
  [AObjEvent32 data]    Per-joint animation keyframe data.

Emits:
  <id>_<Name>.c    - Typed C with per-joint arrays + pointer table
  <id>_<Name>.reloc - Relocation metadata for fixRelocChain.py

The pointer table (joint header) comes first in memory, then the per-joint
data arrays in ascending offset order. The .reloc file tells fixRelocChain.py
to rebuild the relocation chain through the pointer table entries.

Usage:
    python3 tools/promoteAnimJoints.py <file_id>          # one file
    python3 tools/promoteAnimJoints.py --range 499 641    # id range
    python3 tools/promoteAnimJoints.py --all              # all anim blobs
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
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")


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


def parse_anim_joint(data):
    """Parse an AnimJoint binary.

    Returns:
        entries: list of dicts with 'type' ('JOINT'/'NULL'/'END'), 'index',
                 and for JOINT: 'joint_id', 'data_off', 'data_size'
        header_size: bytes consumed by the joint table
    """
    entries = []
    pos = 0
    idx = 0
    while pos + 4 <= len(data):
        jid = struct.unpack_from('>H', data, pos)[0]
        woff = struct.unpack_from('>H', data, pos + 2)[0]
        if jid == 0xFFFF:
            entries.append({'type': 'END', 'index': idx, 'end_word': woff})
            pos += 4
            break
        elif jid == 0 and woff == 0:
            entries.append({'type': 'NULL', 'index': idx})
        else:
            entries.append({
                'type': 'JOINT', 'index': idx,
                'joint_id': jid, 'data_off': woff * 4,
            })
        pos += 4
        idx += 1

    header_size = pos
    data_joints = sorted(
        [e for e in entries if e['type'] == 'JOINT'],
        key=lambda e: e['data_off']
    )
    for i, j in enumerate(data_joints):
        if i + 1 < len(data_joints):
            j['data_size'] = data_joints[i + 1]['data_off'] - j['data_off']
        else:
            j['data_size'] = len(data) - j['data_off']

    # Compute padding between header end and first data region.
    # Some files have 4 or 8 bytes of zero padding after the header.
    pad_after_header = 0
    if data_joints:
        first_data_off = data_joints[0]['data_off']
        if first_data_off > header_size:
            pad_after_header = first_data_off - header_size

    return entries, header_size, pad_after_header


def generate(fid, name, data, entries, header_size, pad_after_header=0):
    """Generate typed .c content and .reloc content.

    Layout in the compiled .data section must match the original binary:
      1. Joint pointer table (header_size bytes) — pointers to per-joint data
      2. Optional zero padding (pad_after_header bytes)
      3. Per-joint AObjEvent32 u32 arrays, in ascending offset order
    """
    prefix = f"d{name}"
    c_lines = []
    reloc_lines = [
        f"# Relocation metadata for file {fid}",
        "# Format: <type> <ptr_label> <target_label>",
        "# Labels are C variable names resolved via .o symbol table",
    ]

    c_lines.append(f"/* AnimJoint data for relocData file {fid} ({name}) */")
    c_lines.append(f"/* {len(data)} bytes: {header_size}-byte header + "
                   f"per-joint AObjEvent16 scripts */")
    c_lines.append("")
    c_lines.append('#include "relocdata_types.h"')
    c_lines.append("")

    data_joints = sorted(
        [e for e in entries if e['type'] == 'JOINT'],
        key=lambda e: e['data_off']
    )

    # Forward declarations for the per-joint arrays (needed because the
    # pointer table references them and appears first in the file).
    for j in data_joints:
        jid = j['joint_id']
        n_u16 = j['data_size'] // 2
        c_lines.append(f"extern u16 {prefix}_joint{jid}[{n_u16}];")
    c_lines.append("")

    # Pointer table (first in memory = first in .data section)
    table_var = f"{prefix}_joints"
    c_lines.append(f"/* Joint pointer table ({len(entries)} entries, "
                   f"{header_size} bytes) */")
    c_lines.append(f"u32 {table_var}[] = {{")
    for e in entries:
        byte_off = e['index'] * 4
        if e['type'] == 'NULL':
            c_lines.append(f"\t0x00000000, /* [{e['index']}] NULL */")
        elif e['type'] == 'JOINT':
            jid = e['joint_id']
            # Emit the ORIGINAL u32 value (joint_id << 16 | word_offset)
            # fixRelocChain.py will overwrite this with the chain link.
            orig_word = (jid << 16) | (e['data_off'] // 4)
            c_lines.append(f"\t(u32){prefix}_joint{jid}, "
                          f"/* [{e['index']}] joint {jid} */")
            reloc_lines.append(
                f"intern {table_var}+0x{byte_off:X} {prefix}_joint{jid}")
        elif e['type'] == 'END':
            # The END entry is part of the reloc chain: it's the last
            # link with next=0xFFFF. Its target points past the last
            # joint's data. fixRelocChain.py will overwrite this word.
            end_word = e['end_word']
            c_lines.append(f"\t0xFFFF{end_word:04X}, "
                          f"/* [{e['index']}] END */")
            # The END target is the word offset from the original binary.
            # Express as an offset into the last-ordered joint's array
            # so fixRelocChain resolves it from the compiled symbol table.
            # end_word points somewhere inside (or just past) the last
            # joint's data — it's the "next chain entry would be here"
            # value, not necessarily the end of the data.
            if data_joints:
                last_j = data_joints[-1]
                last_var = f"{prefix}_joint{last_j['joint_id']}"
                target_byte = end_word * 4
                offset_into_last = target_byte - last_j['data_off']
                reloc_lines.append(
                    f"intern {table_var}+0x{byte_off:X} "
                    f"{last_var}+0x{offset_into_last:X}")
    c_lines.append("};")
    c_lines.append("")

    # Zero padding between header and first data region (alignment)
    if pad_after_header > 0:
        pad_words = pad_after_header // 4
        c_lines.append(f"/* {pad_after_header}-byte alignment padding */")
        c_lines.append(f"static u32 {prefix}_pad[{pad_words}] = {{ 0 }};")
        c_lines.append("")

    # Per-joint data arrays (in offset order, after the pointer table)
    # Each joint's data is an array of AObjEvent16 (u16) commands.
    for j in data_joints:
        off = j['data_off']
        size = j['data_size']
        n_u16 = size // 2
        jid = j['joint_id']
        var = f"{prefix}_joint{jid}"
        c_lines.append(f"/* Joint {jid} */")
        c_lines.append(f"u16 {var}[{n_u16}] = {{")

        # Try macro decode; fall back to raw hex if the decode overshoots
        decoded, end_pos = decode_joint_to_macros(data, off, off + size)
        if end_pos > off + size:
            # Decode overshot — data doesn't parse as valid commands
            # (e.g. translation interpolation tables). Emit raw u16 hex.
            for w in range(0, n_u16, 16):
                chunk = []
                for k in range(w, min(w + 16, n_u16)):
                    val = struct.unpack_from('>H', data, off + k * 2)[0]
                    chunk.append(f"0x{val:04X}")
                c_lines.append("\t" + ", ".join(chunk) + ",")
        else:
            c_lines.extend(decoded)
            # Trailing bytes after End command (padding)
            remaining = (off + size) - end_pos
            if remaining > 0:
                trailing = []
                for k in range(remaining // 2):
                    v = struct.unpack_from('>H', data, end_pos + k * 2)[0]
                    trailing.append(f"0x{v:04X}")
                c_lines.append(f"\t{', '.join(trailing)},")

        c_lines.append("};")
        c_lines.append("")

    return "\n".join(c_lines), "\n".join(reloc_lines) + "\n"


# ── AObjEvent16 macro decoder ────────────────────────────────────────

TRACK_NAMES = ['ROTX', 'ROTY', 'ROTZ', 'TRAI', 'TRAX', 'TRAY', 'TRAZ',
               'SCAX', 'SCAY', 'SCAZ']

# Mapping: opcode → (macro_base_name, is_block, is_rate_cmd)
# Block opcodes have a non-Block counterpart at opcode+1.
EVENT_MACROS = {
    2: ('ftAnimSetVal', True, False),
    3: ('ftAnimSetVal', False, False),
    4: ('ftAnimSetValRate', True, True),
    5: ('ftAnimSetValRate', False, True),
    6: ('ftAnimSetTargetRate', True, False),
    7: ('ftAnimSetVal0Rate', True, False),
    8: ('ftAnimSetVal0Rate', False, False),
    9: ('ftAnimSetValAfter', True, False),
    10: ('ftAnimSetValAfter', False, False),
}


def flag_str(flags):
    """Build FT_ANIM_XXX | FT_ANIM_YYY from track bitmask."""
    parts = []
    for i in range(10):
        if flags & (1 << i):
            parts.append(f"FT_ANIM_{TRACK_NAMES[i]}")
    return " | ".join(parts) if parts else "0"


def decode_joint_to_macros(data, off, end_off):
    """Decode AObjEvent16 commands into macro invocations."""
    lines = []
    pos = off
    while pos < end_off:
        val = struct.unpack_from('>H', data, pos)[0]
        opcode = (val >> 11) & 0x1F
        flags = (val >> 1) & 0x3FF
        toggle = val & 1

        if opcode == 0:  # End
            if val == 0:
                lines.append("\tftAnimEnd(),")
            else:
                # End word with non-zero lower bits — preserve exact value
                lines.append(f"\t0x{val:04X}, /* End */")
            pos += 2
            break

        elif opcode == 1:  # Block
            fstr = flag_str(flags) if flags else "0"
            pos += 2
            if toggle:
                dur = struct.unpack_from('>H', data, pos)[0]
                lines.append(f"\tftAnimBlock({fstr}, {dur}),")
                pos += 2
            else:
                lines.append(f"\tftAnimBlock0({fstr}),")

        elif opcode == 13:  # Loop
            # Preserve the exact command word (flags/toggle are unused
            # by the game but present in the binary data).
            pos += 2
            rel = struct.unpack_from('>h', data, pos)[0]
            lines.append(f"\tftAnimLoop(0x{val:04X}, {rel}),")
            pos += 2

        elif opcode == 14:  # SetFlags
            pos += 2
            if toggle:
                dur = struct.unpack_from('>H', data, pos)[0]
                lines.append(f"\tftAnimSetFlagsT({flag_str(flags)}, {dur}),")
                pos += 2
            else:
                lines.append(f"\tftAnimSetFlags({flag_str(flags)}),")


        elif opcode in EVENT_MACROS:
            base_name, is_block, is_rate = EVENT_MACROS[opcode]
            pos += 2
            fstr = flag_str(flags)

            # Build macro name using T-suffix convention:
            #   Block + toggle=1 → ftAnimXxxBlockT(flags, dur)
            #   Block + toggle=0 → ftAnimXxxBlock(flags)
            #   non-Block + toggle=1 → ftAnimXxxT(flags, dur)
            #   non-Block + toggle=0 → ftAnimXxx(flags)
            suffix = "Block" if is_block else ""
            if toggle:
                dur = struct.unpack_from('>H', data, pos)[0]
                pos += 2
                macro = f"{base_name}{suffix}T({fstr}, {dur})"
            else:
                macro = f"{base_name}{suffix}({fstr})"

            # Read per-track values
            n = bin(flags).count('1')
            vals = []
            if is_rate:
                for _ in range(n):
                    v = struct.unpack_from('>h', data, pos)[0]
                    pos += 2
                    r = struct.unpack_from('>h', data, pos)[0]
                    pos += 2
                    vals.extend([str(v), str(r)])
            else:
                for _ in range(n):
                    v = struct.unpack_from('>h', data, pos)[0]
                    vals.append(str(v))
                    pos += 2

            if vals:
                lines.append(f"\t{macro}, {', '.join(vals)},")
            else:
                lines.append(f"\t{macro},")

        elif opcode == 11:
            # Event11: adds payload to length for each flagged track.
            # NO per-track u16 values follow — just the command + optional payload.
            pos += 2
            if toggle:
                payload = struct.unpack_from('>H', data, pos)[0]
                pos += 2
                lines.append(
                    f"\t_FT_ANIM_CMD(11, {flag_str(flags)}, 1), {payload},")
            else:
                lines.append(
                    f"\t_FT_ANIM_CMD(11, {flag_str(flags)}, 0),")

        elif opcode == 12:
            # SetTranslateInterp: command + 1 relative offset s16.
            # Preserve exact command word (flags/toggle unused but present).
            pos += 2
            rel = struct.unpack_from('>h', data, pos)[0]
            pos += 2
            lines.append(
                f"\t0x{val:04X}, {rel}, /* SetTranslateInterp */")

        else:
            # Truly unknown opcode — emit raw u16
            lines.append(f"\t0x{val:04X}, /* unknown opcode {opcode} */")
            pos += 2

    return lines, pos


def process_file(fid, name, dry_run=False):
    """Process one file. Returns (success, message)."""
    bin_path = get_bin_path(fid)
    if not bin_path:
        return False, f"no binary for {fid}"

    with open(bin_path, 'rb') as f:
        data = f.read()

    if len(data) % 4 != 0:
        return False, f"size {len(data)} not word-aligned"

    entries, header_size, pad_after_header = parse_anim_joint(data)
    end_entries = [e for e in entries if e['type'] == 'END']
    if not end_entries:
        return False, "no END marker"

    data_joints = [e for e in entries if e['type'] == 'JOINT']
    if not data_joints:
        return False, "no joints"

    total = header_size + pad_after_header + sum(j['data_size'] for j in data_joints)
    if total != len(data):
        return False, f"parsed {total} != file {len(data)}"

    c_content, reloc_content = generate(fid, name, data, entries, header_size,
                                         pad_after_header)

    c_path = os.path.join(OUT_DIR, f"{fid}_{name}.c")
    reloc_path = os.path.join(OUT_DIR, f"{fid}_{name}.reloc")

    if dry_run:
        return True, f"would write {os.path.basename(c_path)}"

    with open(c_path, 'w') as f:
        f.write(c_content)
    with open(reloc_path, 'w') as f:
        f.write(reloc_content)

    return True, f"{len(data)} bytes, {len(data_joints)} joints"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_id", nargs="?", type=int)
    ap.add_argument("--range", nargs=2, type=int, metavar=("START", "END"))
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    us_names = get_us_names()
    import glob

    if args.file_id:
        fids = [args.file_id]
    elif args.range:
        fids = list(range(args.range[0], args.range[1] + 1))
    elif args.all:
        fids = []
        for fid, name in sorted(us_names.items()):
            if re.match(r'^FT[A-Z]', name) and 'Anim' in name:
                is_typed = bool(
                    glob.glob(f'{OUT_DIR}/{fid}_*.manifest') or
                    glob.glob(f'{OUT_DIR}/{fid}_*.spritelist'))
                if not is_typed:
                    fids.append(fid)
    else:
        ap.print_help()
        return 2

    ok = fail = 0
    for fid in fids:
        name = us_names.get(fid)
        if not name:
            continue
        success, msg = process_file(fid, name, dry_run=args.dry_run)
        if success:
            ok += 1
        else:
            fail += 1
            print(f"  FAIL {fid} {name}: {msg}", file=sys.stderr)

    print(f"processed {ok + fail}: {ok} ok, {fail} failed")
    return 0 if fail == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
