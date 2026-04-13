#!/usr/bin/env python3
"""One-time migration: move Vtx / LUT / Tex raw bytes out of committed
source files into build-time `.inc.c` companions.

Rationale: the literal vertex / palette / texture bytes are game assets
that shouldn't live in the decomp source tree. This splits each
committed block file into a thin wrapper (kept in `src/relocData/`) that
declares the array type/size and `#include`s a companion `.inc.c`
(written to `build/src/relocData/`) holding the raw brace-list body.

Three block types are migrated:
  <Name>/*.vtx.c          Vtx X[N] = { <rows> }    →  #include <...>
  <Name>/*.palette.c      u16 X[16] = { <rows> }   →  #include <...>
  <Name>/Tex_*.data.c     u8 X[N]  = { <rows> }    →  #include <...>

The build-time inc.c files land under build/src/relocData/<Name>/ and
are regenerated from the decompressed ROM segment by
`tools/extractRelocInc.py` at `make extract` time.
"""

import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_RELOC = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_RELOC = os.path.join(PROJECT_DIR, "build", "src", "relocData")


def count_top_level_braces(body):
    """Count top-level { ... } groups in a brace-delimited body."""
    depth = 0
    entries = 0
    for ch in body:
        if ch == '{':
            if depth == 0:
                entries += 1
            depth += 1
        elif ch == '}':
            depth -= 1
    return entries


def split_top_level_entries(body):
    """Yield each top-level {...} substring from an array body (no trailing
    comma). Returns them in source order."""
    depth = 0
    start = None
    for i, ch in enumerate(body):
        if ch == '{':
            if depth == 0:
                start = i
            depth += 1
        elif ch == '}':
            depth -= 1
            if depth == 0:
                yield body[start:i + 1]


def write_inc(path, lines):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    with open(path, 'w') as f:
        f.write("\n".join(lines) + "\n")


def migrate_vtx(path):
    """Rewrite a `.vtx.c` file into wrapper + inc.c form.

    Input shape:
        /* ... */
        Vtx dName_XXX_Vtx[] = {
            { { {...} } },
            ...
        };
    """
    with open(path) as f:
        content = f.read()
    # Strip block comments for pattern matching but keep leading ones
    clean = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    m = re.search(r'(Vtx\s+(\w+))\s*\[\s*(\d*)\s*\]\s*=\s*\{(.*)\};',
                  clean, re.DOTALL)
    if not m:
        return False
    decl_head = m.group(1)
    var_name = m.group(2)
    body = m.group(4)

    if '#include' in body:
        return False  # already migrated

    entries = list(split_top_level_entries(body))
    count = len(entries)
    if count == 0:
        return False

    # Lift the leading header comment(s) from the original file
    header_match = re.match(r'((?:/\*[^*]*\*+(?:[^/*][^*]*\*+)*/\s*)+)',
                             content)
    header = header_match.group(1) if header_match else ""

    # Name the subdirectory from the wrapper's parent folder
    sub_dir = os.path.basename(os.path.dirname(path))
    base_name = os.path.basename(path)[:-len('.vtx.c')]
    inc_name = f"{base_name}.vtx.inc.c"
    inc_path = os.path.join(BUILD_RELOC, sub_dir, inc_name)

    # Write the inc.c body (one entry per line, tab-indented, trailing comma)
    write_inc(inc_path, [f"\t{e}," for e in entries])

    # Rewrite wrapper
    wrapper = (
        f"{header.rstrip()}\n"
        f"\n"
        f'#include "relocdata_types.h"\n'
        f"\n"
        f"{decl_head}[{count}] = {{\n"
        f"\t#include <{sub_dir}/{inc_name}>\n"
        f"}};\n"
    )
    with open(path, 'w') as f:
        f.write(wrapper)
    return True


def migrate_palette(path):
    """Rewrite a `.palette.c` file into wrapper + inc.c form."""
    with open(path) as f:
        content = f.read()
    clean = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    m = re.search(r'(u16\s+(\w+))\s*\[\s*16\s*\]\s*=\s*\{([^}]*)\};',
                  clean, re.DOTALL)
    if not m:
        return False
    if '#include' in m.group(3):
        return False
    decl_head = m.group(1)
    body = m.group(3)
    values = re.findall(r'0x[0-9A-Fa-f]+', body)
    if len(values) != 16:
        return False

    header_match = re.match(r'((?:/\*[^*]*\*+(?:[^/*][^*]*\*+)*/\s*)+)',
                             content)
    header = header_match.group(1) if header_match else ""

    sub_dir = os.path.basename(os.path.dirname(path))
    base_name = os.path.basename(path)[:-len('.palette.c')]
    inc_name = f"{base_name}.palette.inc.c"
    inc_path = os.path.join(BUILD_RELOC, sub_dir, inc_name)

    # Write inc.c: two rows of 8 colors each
    lines = [
        "\t" + ", ".join(values[0:8]) + ",",
        "\t" + ", ".join(values[8:16]) + ",",
    ]
    write_inc(inc_path, lines)

    wrapper = (
        f"{header.rstrip()}\n"
        f"\n"
        f'#include "relocdata_types.h"\n'
        f"\n"
        f"{decl_head}[16] = {{\n"
        f"\t#include <{sub_dir}/{inc_name}>\n"
        f"}};\n"
    )
    with open(path, 'w') as f:
        f.write(wrapper)
    return True


def migrate_data(path, inc_suffix):
    """Rewrite a generic `.data.c` file into wrapper + inc.c form.

    Input:  `u32 dName_X[] = { 0x..., 0x..., ... };` (or u8/u16/u64)
    Output: `u8 dName_X[N] = { #include <Sub/X.<suffix>.inc.c> };`

    Only files with a single top-level literal array are handled —
    anything using typed struct initializers (MPGroundData etc.),
    DL terminators (gsSPEndDisplayList), or an existing `#include`
    gets skipped untouched.
    """
    with open(path) as f:
        content = f.read()
    # If the file already uses the wrapper pattern, nothing to do.
    if re.search(r'#include\s+[<"][^>"]+\.inc\.c[>"]', content):
        return False
    # Skip files that declare typed structs we'd lose (MPGroundData, etc.)
    # or DL terminators — those stay inline because they aren't raw bytes.
    if re.search(r'\bMPGroundData\s+\w+\s*=', content):
        return False
    if 'gsSPEndDisplayList' in content:
        return False

    clean = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    clean = re.sub(r'//[^\n]*', '', clean)

    # Reject files with more than one top-level literal array — those
    # need manual attention.
    decls = list(re.finditer(
        r'(u(?:8|16|32|64))\s+(\w+)\s*\[\s*\d*\s*\]\s*=\s*\{([^}]*)\};',
        clean, re.DOTALL))
    if len(decls) != 1:
        return False
    m = decls[0]
    elem_type = m.group(1)
    var_name = m.group(2)
    body = m.group(3)

    elem_bytes = {'u8': 1, 'u16': 2, 'u32': 4, 'u64': 8}[elem_type]
    values = re.findall(r'0x[0-9A-Fa-f]+', body)
    total_bytes = len(values) * elem_bytes

    # Expand into a flat byte list
    bytes_out = []
    for v in values:
        n = int(v, 16)
        for shift in range((elem_bytes - 1) * 8, -1, -8):
            bytes_out.append((n >> shift) & 0xFF)
    assert len(bytes_out) == total_bytes

    header_match = re.match(r'((?:/\*[^*]*\*+(?:[^/*][^*]*\*+)*/\s*)+)',
                             content)
    header = header_match.group(1) if header_match else ""

    sub_dir = os.path.basename(os.path.dirname(path))
    base_name = os.path.basename(path)[:-len('.data.c')]
    inc_name = f"{base_name}.{inc_suffix}.inc.c"
    inc_path = os.path.join(BUILD_RELOC, sub_dir, inc_name)

    # Write inc.c: 16 bytes per line (last row may be shorter)
    lines = []
    for i in range(0, len(bytes_out), 16):
        end = min(i + 16, len(bytes_out))
        chunk = bytes_out[i:end]
        lines.append("\t" + ", ".join(f"0x{b:02X}" for b in chunk) + ",")
    write_inc(inc_path, lines)

    wrapper = (
        f"{header.rstrip()}\n"
        f"\n"
        f'#include "relocdata_types.h"\n'
        f"\n"
        f"u8 {var_name}[{total_bytes}] = {{\n"
        f"\t#include <{sub_dir}/{inc_name}>\n"
        f"}};\n"
    )
    with open(path, 'w') as f:
        f.write(wrapper)
    return True


def main():
    vtx_done = pal_done = data_done = 0
    vtx_skip = pal_skip = data_skip = 0

    for root, dirs, files in os.walk(SRC_RELOC):
        for fn in files:
            path = os.path.join(root, fn)
            if fn.endswith('.vtx.c'):
                if migrate_vtx(path):
                    vtx_done += 1
                else:
                    vtx_skip += 1
            elif fn.endswith('.palette.c'):
                if migrate_palette(path):
                    pal_done += 1
                else:
                    pal_skip += 1
            elif fn.endswith('.data.c'):
                # Tex_ blocks get a `.tex.inc.c` companion to match the
                # earlier split pass; everything else gets `.data.inc.c`.
                suffix = 'tex' if fn.startswith('Tex_') else 'data'
                if migrate_data(path, suffix):
                    data_done += 1
                else:
                    data_skip += 1

    print(f"Vtx:     {vtx_done} migrated, {vtx_skip} skipped")
    print(f"Palette: {pal_done} migrated, {pal_skip} skipped")
    print(f"Data:    {data_done} migrated, {data_skip} skipped")


if __name__ == '__main__':
    main()
