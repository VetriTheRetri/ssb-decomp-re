#!/usr/bin/env python3
"""
Promote ITCommonObject `*_Item_data` / `*_Weapon_data` u8 blobs to typed
DObjDesc array initializers, splitting the trailing bytes into a separate
u8 remainder block.

Each ITAttributes / WPAttributes in 251_ITCommonData has a `data` pointer
that fixRelocChain patches to a byte offset inside file 86. That target
data is a DObjDesc tree terminated by an entry with id=18. We scan for
the terminator, decode each 44-byte DObjDesc into a typed initializer,
and split the remaining bytes (vertex data, display lists, textures) into
a sibling `_data_remainder` u8 block.

The original symbol `dITCommonObject_<Item>_<Kind>_data` keeps its byte
offset (now wraps the typed DObjDesc array via union so .reloc references
still resolve via nm to the same byte address).
"""

import os
import re
import struct
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")


def f32_repr(value):
    """Emit a float literal that round-trips bit-exactly. Uses Python's repr
    which guarantees lossless decimal representation."""
    s = repr(value)
    if "e" not in s and "." not in s and "inf" not in s and "nan" not in s:
        s += ".0"
    return s + "f"


def decode_dobj(blob, offset):
    """Decode a single 44-byte DObjDesc at `offset` into a tuple of fields."""
    id_val = struct.unpack(">i", blob[offset:offset+4])[0]
    data_val = struct.unpack(">I", blob[offset+4:offset+8])[0]
    floats = struct.unpack(">9f", blob[offset+8:offset+44])
    return id_val, data_val, floats[0:3], floats[3:6], floats[6:9]


def emit_dobj(fields):
    """Emit a single DObjDesc element initializer."""
    id_val, data_val, t, r, s = fields
    if data_val == 0:
        data_str = "NULL"
    else:
        data_str = f"(void*)0x{data_val:08X}"
    t_s = f"{{ {f32_repr(t[0])}, {f32_repr(t[1])}, {f32_repr(t[2])} }}"
    r_s = f"{{ {f32_repr(r[0])}, {f32_repr(r[1])}, {f32_repr(r[2])} }}"
    s_s = f"{{ {f32_repr(s[0])}, {f32_repr(s[1])}, {f32_repr(s[2])} }}"
    return f"\t{{ {id_val}, {data_str}, {t_s}, {r_s}, {s_s} }},"


def find_dobj_terminator(blob, off, max_size):
    """Scan blob from `off` for the first DObjDesc whose id == 18.
    Returns the index past the terminator, or None if not found."""
    for i in range(0, min(max_size, 44 * 30), 44):
        id_val = struct.unpack(">I", blob[off+i:off+i+4])[0]
        if id_val == 18:
            return (i // 44) + 1, i + 44
        if id_val > 0x10000:
            return None, None
    return None, None


def format_u8(data):
    lines = []
    for i in range(0, len(data), 16):
        row = data[i:i+16]
        lines.append("\t" + " ".join(f"0x{b:02X}," for b in row))
    return "\n".join(lines) + "\n"


def main():
    c_path = os.path.join(RELOC_DIR, "86_ITCommonObject.c")
    with open(c_path) as f:
        text = f.read()
    with open(os.path.join(ASSETS_DIR, "86.vpk0.bin"), "rb") as f:
        data = f.read()

    out_dir = os.path.join(BUILD_DIR, "ITCommonObject")
    os.makedirs(out_dir, exist_ok=True)

    # Walk the file line-by-line, tracking offset comments
    lines = text.split("\n")
    new_lines = []
    i = 0
    pending_offset = None
    pending_comment = None
    n_promoted = 0
    n_skipped = 0

    while i < len(lines):
        ln = lines[i]
        m_comment = re.match(r"/\* @ 0x([0-9A-Fa-f]+),", ln)
        if m_comment:
            pending_offset = int(m_comment.group(1), 16)
            pending_comment = ln
            new_lines.append(ln)
            i += 1
            continue
        m_decl = re.match(r"u8 (d\w+_(?:Item|Weapon)_data)\[(0x[0-9A-Fa-f]+)\] = \{", ln)
        if m_decl and pending_offset is not None:
            sym = m_decl.group(1)
            size = int(m_decl.group(2), 16)
            off = pending_offset
            n_entries, dobj_size = find_dobj_terminator(data, off, size)
            if n_entries is None:
                # Skip this block; keep as u8
                new_lines.append(ln)
                pending_offset = None
                i += 1
                continue
            # Decode the DObjDesc entries
            entries = [decode_dobj(data, off + j * 44) for j in range(n_entries)]
            elements = "\n".join(emit_dobj(e) for e in entries)
            remainder_size = size - dobj_size

            dobj_sym = sym + "_DObjDesc"
            new_lines.pop()  # remove pending_comment we just added
            new_lines.append(pending_comment)
            new_lines.append(f"DObjDesc {dobj_sym}[{n_entries}] = {{")
            new_lines.append(elements)
            new_lines.append("};")

            if remainder_size > 0:
                rem_off = off + dobj_size
                rem_sym = sym + "_remainder"
                inc_name = sym + "_remainder.data.inc.c"
                new_lines.append("")
                new_lines.append(f"/* @ 0x{rem_off:04X}, {remainder_size} bytes (vertex / DL / texture pool) */")
                new_lines.append(f"u8 {rem_sym}[0x{remainder_size:X}] = {{")
                new_lines.append(f"\t#include <ITCommonObject/{inc_name}>")
                new_lines.append("};")
                with open(os.path.join(out_dir, inc_name), "w") as f:
                    f.write(format_u8(data[rem_off:rem_off + remainder_size]))

            # Skip the original `#include <...>` line and the closing `};`
            j = i + 1
            while j < len(lines) and not lines[j].strip().endswith("};"):
                j += 1
            i = j + 1
            pending_offset = None
            n_promoted += 1
            continue

        new_lines.append(ln)
        i += 1

    new_text = "\n".join(new_lines)
    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"Promoted {n_promoted} _data blocks to typed DObjDesc")


if __name__ == "__main__":
    main()
