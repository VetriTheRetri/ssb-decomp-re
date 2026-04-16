#!/usr/bin/env python3
"""
Decode ITAttributes + WPAttributes blobs inside ITCommonData and emit a
C comment block documenting the human-readable field values above each
blob declaration.

Keeps the u8[] storage intact (no risk of breaking the byte-identical
build). The goal is modder-friendly annotation: once somebody wants to
edit, say, the Capsule's damage_coll_size, they can see the value in the
comment and find the corresponding byte offsets via the layout doc in
src/it/ittypes.h.

Decoding covers the fields whose layout is verified:
  pointers, flags, attack_offsets, damage_coll_offset/size, map_coll_*, size
The bitfield tail (angle/ks/dmg/elem/...) stays opaque but is exposed as
raw u32 values — modders can patch those against the layout notes.

Run:
    tools/decodeItemAttrs.py 251        # one file (ITCommonData)
    tools/decodeItemAttrs.py 240        # NessSpecial1 PKFire
"""

import argparse
import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")


def decode_itattr(blob):
    """Decode a 72-byte ITAttributes blob into a dict of visible fields."""
    assert len(blob) == 72
    d = {}
    for i, name in enumerate(("data", "p_mobjsubs", "anim_joints", "p_matanim_joints")):
        d[name] = struct.unpack(">I", blob[i*4:(i+1)*4])[0]
    w0 = struct.unpack(">I", blob[0x10:0x14])[0]
    d["flags"] = {
        "is_display_xlu":     (w0 >> 31) & 1,
        "is_item_dobjs":      (w0 >> 30) & 1,
        "is_display_colanim": (w0 >> 29) & 1,
        "is_give_hitlag":     (w0 >> 28) & 1,
        "weight":             (w0 >> 27) & 1,
    }
    def s16(x): return x - 0x10000 if x & 0x8000 else x
    d["attack_offset0_x"] = s16((w0 >> 11) & 0xFFFF)
    w1 = struct.unpack(">I", blob[0x14:0x18])[0]
    d["attack_offset0_y"] = s16((w1 >> 16) & 0xFFFF)
    d["attack_offset0_z"] = s16(w1 & 0xFFFF)
    w2 = struct.unpack(">I", blob[0x18:0x1C])[0]
    d["attack_offset1_x"] = s16((w2 >> 16) & 0xFFFF)
    d["attack_offset1_y"] = s16(w2 & 0xFFFF)
    d["attack_offset1_z"] = struct.unpack(">h", blob[0x1C:0x1E])[0]
    d["damage_coll_offset"] = struct.unpack(">3h", blob[0x1E:0x24])
    d["damage_coll_size"]   = struct.unpack(">3h", blob[0x24:0x2A])
    d["map_coll_top"]    = struct.unpack(">h", blob[0x2A:0x2C])[0]
    d["map_coll_center"] = struct.unpack(">h", blob[0x2C:0x2E])[0]
    d["map_coll_bottom"] = struct.unpack(">h", blob[0x2E:0x30])[0]
    d["map_coll_width"]  = struct.unpack(">h", blob[0x30:0x32])[0]
    d["size"] = struct.unpack(">H", blob[0x32:0x34])[0]
    # Bitfield tail stays opaque — expose raw u32s
    d["_tail"] = tuple(struct.unpack(">I", blob[0x34 + i*4:0x38 + i*4])[0] for i in range(5))
    return d


def fmt_comment(fields, indent="    "):
    vec = fields["damage_coll_offset"]
    sz = fields["damage_coll_size"]
    flags = fields["flags"]
    flag_strs = [k for k, v in flags.items() if v]
    lines = [
        "/* Decoded (visible fields):",
        f" *   flags: {', '.join(flag_strs) or 'none'}",
    ]
    if any(fields[f"attack_offset0_{c}"] for c in "xyz"):
        lines.append(f" *   attack_offset0: {{{fields['attack_offset0_x']}, {fields['attack_offset0_y']}, {fields['attack_offset0_z']}}}")
    if any(fields[f"attack_offset1_{c}"] for c in "xyz"):
        lines.append(f" *   attack_offset1: {{{fields['attack_offset1_x']}, {fields['attack_offset1_y']}, {fields['attack_offset1_z']}}}")
    lines.append(f" *   damage_coll_offset: {{{vec[0]}, {vec[1]}, {vec[2]}}}")
    lines.append(f" *   damage_coll_size:   {{{sz[0]}, {sz[1]}, {sz[2]}}}")
    lines.append(f" *   map_coll: top={fields['map_coll_top']} center={fields['map_coll_center']} bottom={fields['map_coll_bottom']} width={fields['map_coll_width']}")
    lines.append(f" *   size: {fields['size']}")
    lines.append(f" *   bitfield_tail u32s: " + ", ".join(f"0x{t:08X}" for t in fields["_tail"]))
    lines.append(" */")
    return "\n".join(lines)


def process(file_id):
    c_path = None
    target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        print(f"fid {file_id}: no .c")
        return
    for suf in (".vpk0.bin", ".bin"):
        dp = os.path.join(ASSETS_DIR, f"{file_id}{suf}")
        if os.path.exists(dp):
            break
    with open(dp, "rb") as f:
        data = f.read()
    with open(c_path) as f:
        text = f.read()

    # Find each u8 d<name>_ItemAttributes[72] block and annotate
    def replacer(m):
        sym = m.group(2)
        size = int(m.group(3))
        # Extract offset from /* Raw data from file offset 0xNNNN ... */ comment preceding
        return m.group(0)  # placeholder — we rebuild below

    # Walk through all ItemAttributes blocks
    count = 0
    lines = text.split("\n")
    out = []
    i = 0
    current_offset = None
    while i < len(lines):
        line = lines[i]
        # Detect offset comment
        off_m = re.match(r"/\* Raw data from file offset 0x([0-9A-Fa-f]+)", line)
        if off_m:
            current_offset = int(off_m.group(1), 16)
        # Detect ItemAttributes declaration
        decl_m = re.match(r"u8 (d\w+_ItemAttributes)\[(\d+)\] = \{", line)
        if decl_m and int(decl_m.group(2)) == 72 and current_offset is not None:
            blob = data[current_offset:current_offset+72]
            fields = decode_itattr(blob)
            # Skip the preceding offset comment and emit new combined comment
            # Remove the trailing offset comment line from `out`
            if out and out[-1].startswith("/* Raw data from file offset"):
                out[-1] = f"/* ItemAttributes @ 0x{current_offset:04X} — {decl_m.group(1).split('_')[1]} */"
            else:
                out.append(f"/* ItemAttributes @ 0x{current_offset:04X} */")
            # Prepend the decoded comment
            out.append(fmt_comment(fields).replace("\n", "\n"))
            count += 1
        out.append(line)
        i += 1

    new_text = "\n".join(out)
    if new_text != text:
        with open(c_path, "w") as f:
            f.write(new_text)
        print(f"fid {file_id}: annotated {count} ItemAttributes blocks")
    else:
        print(f"fid {file_id}: no changes")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="+", type=int)
    args = ap.parse_args()
    for fid in args.file_ids:
        process(fid)


if __name__ == "__main__":
    main()
