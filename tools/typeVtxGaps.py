#!/usr/bin/env python3
"""Convert 16-byte u8 gap_ arrays in relocData files to Vtx[1].

For each file:
  1. Changes `u8 dXxx_gap_0xNNNN[16]` to `Vtx dXxx_Vtx_0xNNNN_Vtx[1]`
     with .vtx.inc.c includes
  2. Updates the comment
  3. Adds entries to the .extras file
  4. Updates references in the .reloc and .c files

Also handles sub-block patterns like `gap_0xNNNN_sub_0xMMMM[16]`.
"""

import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


def process_file(basename):
    c_path = os.path.join(RELOC_DIR, basename + ".c")
    reloc_path = os.path.join(RELOC_DIR, basename + ".reloc")
    extras_path = os.path.join(RELOC_DIR, basename + ".extras")

    name = basename.split("_", 1)[1]

    with open(c_path, "r") as f:
        c_text = f.read()

    conversions = []  # list of (old_c_sym, new_c_sym, vtx_offset_hex)

    # Find all 16-byte gap declarations and build a replacement map
    # Pattern: u8 dName_gap_0xBASE[16] or u8 dName_gap_0xBASE_sub_0xOFF[16]
    decl_re = re.compile(
        r'u8\s+d' + re.escape(name) + r'_(gap_0x([0-9A-Fa-f]+)(?:_sub_0x([0-9A-Fa-f]+))?)\[16\]'
    )

    for m in decl_re.finditer(c_text):
        old_suffix = m.group(1)  # gap_0xBASE or gap_0xBASE_sub_0xOFF
        base_hex = m.group(2)
        sub_hex = m.group(3)

        if sub_hex is not None:
            actual_offset = int(base_hex, 16) + int(sub_hex, 16)
        else:
            actual_offset = int(base_hex, 16)

        offset_hex = f"{actual_offset:04X}"
        new_suffix = f"Vtx_0x{offset_hex}_Vtx"
        conversions.append((old_suffix, new_suffix, offset_hex))

    if not conversions:
        print(f"  {basename}: no 16-byte gaps found")
        return 0

    # Now do the actual replacements in the C file
    for old_suffix, new_suffix, offset_hex in conversions:
        old_sym = f"d{name}_{old_suffix}"

        # Compute old inc.c filename
        old_inc = old_suffix + ".data.inc.c"
        new_inc = f"Vtx_0x{offset_hex}.vtx.inc.c"

        # Replace the comment + declaration block
        # Handle both "Raw data" and "gap sub-block" comment styles
        # Just do a simple line-by-line replacement

        # Replace declaration line
        old_decl = f"u8 {old_sym}[16]"
        new_decl = f"Vtx {old_sym.replace(old_suffix, new_suffix)}[1]"
        c_text = c_text.replace(old_decl, new_decl)

        # Replace include line
        old_include = f"<{name}/{old_inc}>"
        new_include = f"<{name}/{new_inc}>"
        c_text = c_text.replace(old_include, new_include)

        # Update comment line if it's "Raw data" style
        raw_comment = f"/* Raw data from file offset 0x{offset_hex} to "
        raw_comment_upper = f"/* Raw data from file offset 0x{offset_hex.upper()} to "
        raw_comment_lower = f"/* Raw data from file offset 0x{offset_hex.lower()} to "
        vtx_comment = f"/* Vtx: Vtx_0x{offset_hex} @ 0x{offset_hex} (1 vertices) */"

        # Find and replace the comment line above the declaration
        for prefix in [raw_comment, raw_comment_upper, raw_comment_lower]:
            if prefix in c_text:
                # Find the full comment line
                idx = c_text.find(prefix)
                end = c_text.find("*/", idx) + 2
                c_text = c_text[:idx] + vtx_comment + c_text[end:]
                break

        # Update "gap sub-block" comments
        sub_comment_re = re.compile(
            r'/\* gap sub-block @ 0x' + offset_hex + r'[^*]*\*/'
        )
        c_text = sub_comment_re.sub(vtx_comment, c_text)

        # Replace any remaining references to old symbol name in C file
        old_ref = f"d{name}_{old_suffix}"
        new_ref = f"d{name}_{new_suffix}"
        c_text = c_text.replace(old_ref, new_ref)

    with open(c_path, "w") as f:
        f.write(c_text)

    # Update .reloc file
    if os.path.exists(reloc_path):
        with open(reloc_path, "r") as f:
            reloc_text = f.read()

        # Sort conversions longest-old-suffix-first to prevent partial replacement
        sorted_convs = sorted(conversions, key=lambda x: len(x[0]), reverse=True)
        for old_suffix, new_suffix, _ in sorted_convs:
            old_name = f"d{name}_{old_suffix}"
            new_name = f"d{name}_{new_suffix}"
            reloc_text = reloc_text.replace(old_name, new_name)

        with open(reloc_path, "w") as f:
            f.write(reloc_text)

    # Update .extras file
    extras_lines = []
    if os.path.exists(extras_path):
        with open(extras_path, "r") as f:
            content = f.read().rstrip("\n")
            if content:
                extras_lines = content.split("\n")

    for _, _, offset_hex in conversions:
        entry = f"Vtx Vtx_0x{offset_hex} 0x{offset_hex} 1"
        if entry not in extras_lines:
            extras_lines.append(entry)

    # Sort extras by offset
    def sort_key(line):
        parts = line.split()
        if len(parts) >= 3:
            try:
                return int(parts[2], 16)
            except ValueError:
                return 0
        return 0

    extras_lines.sort(key=sort_key)

    with open(extras_path, "w") as f:
        f.write("\n".join(extras_lines) + "\n")

    print(f"  {basename}: converted {len(conversions)} gaps")
    return len(conversions)


def main():
    files = sys.argv[1:] if len(sys.argv) > 1 else []
    if not files:
        print("Usage: typeVtxGaps.py <basename1> [basename2] ...")
        sys.exit(1)

    total = 0
    for basename in files:
        total += process_file(basename)
    print(f"\nTotal: {total} gaps converted to Vtx[1]")
    print(f"Bytes converted: {total * 16}")


if __name__ == "__main__":
    main()
