#!/usr/bin/python3
"""
Generate a master .c file for a relocData file from a manifest.

Usage: genRelocMaster.py <manifest_path> <output_c_path>

Two manifest formats are supported:

1. .manifest - rich format listing all blocks (sprites, dobjdesc, data) plus
   explicit pad directives:

       # Comments start with #
       OptionTabLeft.sprite.c
       OptionTabMiddle.sprite.c
       pad 4
       RoomBackground_MObjSub.data.c
       RoomBackground.dobjdesc.c
       ...

   Each non-comment line is either a block filename (must exist in the
   subfolder) or "pad N" to insert N zero bytes.

2. .spritelist - simple sprite-only format listing sprite names only:

       OptionTabLeft
       OptionTabMiddle
       ...

   Alignment pads are computed automatically from each sprite's size and
   DL terminator presence (sprite blocks are 16-byte aligned).

The generated .c file is meant to live in build/, not src/.
"""

import os
import re
import sys
import argparse

SPRITE_STRUCT_SIZE = 68
BITMAP_STRUCT_SIZE = 16
DOBJDESC_STRUCT_SIZE = 44
DL_TERMINATOR_SIZE = 8

# Sprite block 16-byte alignment with optional 8-byte "ghost DL slot" for
# sprites whose data begins with a texture rather than a real DL terminator.
SPRITE_BLOCK_ALIGNMENT = 16
GHOST_DL_PAD = 8


# ── Size computation ─────────────────────────────────────────────────────

def count_hex_values(inc_c_path):
    """Count hex byte values in a .inc.c file (e.g. '0xFF, 0xCC, ...')."""
    with open(inc_c_path) as f:
        content = f.read()
    return len(re.findall(r'0x[0-9A-Fa-f]+', content))


def find_inc_file(inc_path, sprite_dir, search_paths):
    """Resolve a referenced .inc.c file by searching:
       1. relative to the .sprite.c file (sibling)
       2. each entry in search_paths (mirrors -I flags used at compile time)
    Returns the resolved absolute path or None.
    """
    candidate = os.path.join(sprite_dir, inc_path)
    if os.path.exists(candidate):
        return candidate
    for sp in search_paths:
        candidate = os.path.join(sp, inc_path)
        if os.path.exists(candidate):
            return candidate
    return None


def parse_sprite_info(sprite_c_path, search_paths=(), strict=True):
    """Parse a .sprite.c file and return (size, has_dl).

    Texture .inc.c files referenced via either quoted or angle-bracket
    #include directives get resolved through search_paths (which mirrors
    the compiler's -I flags) so the structural .sprite.c can stay decoupled
    from the build-output asset path.

    With strict=False, returns (None, None) if any referenced .inc.c is
    missing rather than calling sys.exit().
    """
    with open(sprite_c_path) as f:
        content = f.read()
    sprite_dir = os.path.dirname(sprite_c_path)

    size = 0
    dl_count = len(re.findall(r'Gfx\s+\w+\[\]\s*=\s*\{\s*gsSPEndDisplayList',
                              content))
    size += dl_count * DL_TERMINATOR_SIZE
    has_dl = dl_count > 0

    # Match both #include "X.inc.c" and #include <X.inc.c>
    for m in re.finditer(r'u8\s+\w+\[\]\s*=\s*\{\s*#include\s+[<"]([^>"]+)[>"]',
                         content):
        inc_file = find_inc_file(m.group(1), sprite_dir, search_paths)
        if inc_file is None:
            if not strict:
                return (None, None)
            print(f"Error: {sprite_c_path} references missing {m.group(1)}",
                  file=sys.stderr)
            sys.exit(1)
        size += count_hex_values(inc_file)

    for m in re.finditer(r'Bitmap\s+\w+\[\]\s*=\s*\{(.*?)\};', content,
                         re.DOTALL):
        body = m.group(1)
        size += body.count('{') * BITMAP_STRUCT_SIZE

    sprite_count = len(re.findall(r'Sprite\s+\w+\s*=\s*\{', content))
    size += sprite_count * SPRITE_STRUCT_SIZE

    return size, has_dl


def compute_data_c_size(data_c_path, search_paths=()):
    """Parse a .data.c file and return its byte size.

    Handles three declaration forms (and sums them all):
      - Literal arrays:    u8/u16/u32/u64 X[] = { 0xAB, 0xCD, ... };
      - Texture includes:  u8 X[] = { #include <Subdir/Name.fmt.inc.c> };
      - DL terminators:    Gfx X[] = { gsSPEndDisplayList() };

    The texture-include form is used by `<Name>_tex.data.c` files emitted
    when a sprite has palettes inside its byte range — the texture data
    is split out from .sprite.c so the palette blocks can sit at their
    original physical location between the texture and the bitmap array.
    """
    with open(data_c_path) as f:
        content = f.read()

    # Strip C-style block comments first (they may contain hex literals in
    # reloc annotations like "/* reloc: +0x0->0x0008 */")
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)

    file_dir = os.path.dirname(data_c_path)
    total = 0

    # DL terminators: 8 bytes each
    dl_count = len(re.findall(r'Gfx\s+\w+\[\]\s*=\s*\{\s*gsSPEndDisplayList',
                              content))
    total += dl_count * DL_TERMINATOR_SIZE

    # Texture-include arrays: u8 X[] = { #include <...> };
    for m in re.finditer(r'u8\s+\w+\[\]\s*=\s*\{\s*#include\s+[<"]([^>"]+)[>"]',
                         content):
        inc_file = find_inc_file(m.group(1), file_dir, search_paths)
        if inc_file is None:
            print(f"Error: {data_c_path} references missing {m.group(1)}",
                  file=sys.stderr)
            sys.exit(1)
        total += count_hex_values(inc_file)

    # Literal arrays: count bytes from each one. Match the array body
    # explicitly so we don't double-count #include arrays.
    for m in re.finditer(
            r'(u8|u16|u32|u64)\s+\w+\[(?:\d*)\]\s*=\s*\{([^}]*)\}',
            content, re.DOTALL):
        body = m.group(2)
        if '#include' in body:
            continue  # already counted above
        elem_type = m.group(1)
        elem_count = len(re.findall(r'0x[0-9A-Fa-f]+', body))
        elem_size = {'u8': 1, 'u16': 2, 'u32': 4, 'u64': 8}[elem_type]
        total += elem_count * elem_size

    if total == 0:
        print(f"Error: can't parse {data_c_path} (no recognized declarations)",
              file=sys.stderr)
        sys.exit(1)

    return total


def compute_palette_c_size(palette_c_path):
    """A .palette.c file is always a 16-color RGBA5551 palette = 32 bytes.

    We still validate that the file looks like a palette (u16 X[16]) but
    the byte count is fixed.
    """
    with open(palette_c_path) as f:
        content = f.read()
    if not re.search(r'u16\s+\w+\[16\]\s*=\s*\{', content):
        print(f"Error: {palette_c_path} doesn't look like a 16-color palette",
              file=sys.stderr)
        sys.exit(1)
    return 32


def compute_mobjsub_c_size(mobjsub_c_path):
    """A .mobjsub.c file is always a single MObjSub struct = 0x78 bytes.

    Validation: must contain `MObjSub <name> = { ... };` (singular, not array).
    """
    with open(mobjsub_c_path) as f:
        content = f.read()
    if not re.search(r'MObjSub\s+\w+\s*=\s*\{', content):
        print(f"Error: {mobjsub_c_path} doesn't look like an MObjSub struct",
              file=sys.stderr)
        sys.exit(1)
    return 0x78


def compute_dobjdesc_c_size(dobjdesc_c_path):
    """Parse a .dobjdesc.c file and return its byte size (44 per entry)."""
    with open(dobjdesc_c_path) as f:
        content = f.read()
    # Strip block comments
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    # Find the array body; count the number of top-level {...} groups
    m = re.search(r'DObjDesc\s+\w+\[\]\s*=\s*\{(.*)\};', content, re.DOTALL)
    if not m:
        print(f"Error: can't parse {dobjdesc_c_path}", file=sys.stderr)
        sys.exit(1)
    body = m.group(1)
    # Each entry starts with `{` at depth 1 (from the array's outer braces).
    # Count top-level { after stripping nested ones by tracking depth.
    depth = 0
    entries = 0
    for ch in body:
        if ch == '{':
            if depth == 0:
                entries += 1
            depth += 1
        elif ch == '}':
            depth -= 1
    return entries * DOBJDESC_STRUCT_SIZE


def compute_block_size(block_path, search_paths=()):
    """Dispatch to the appropriate parser based on block filename extension."""
    if block_path.endswith('.sprite.c'):
        return parse_sprite_info(block_path, search_paths)[0]
    if block_path.endswith('.data.c'):
        return compute_data_c_size(block_path, search_paths)
    if block_path.endswith('.dobjdesc.c'):
        return compute_dobjdesc_c_size(block_path)
    if block_path.endswith('.palette.c'):
        return compute_palette_c_size(block_path)
    if block_path.endswith('.mobjsub.c'):
        return compute_mobjsub_c_size(block_path)
    print(f"Error: unknown block type: {block_path}", file=sys.stderr)
    sys.exit(1)


def is_sprite_block(block_name):
    return block_name.endswith('.sprite.c')


# ── Manifest parsing ────────────────────────────────────────────────────

def parse_manifest(path):
    """Read a .manifest file. Returns list of (kind, payload) tuples.

    Kinds: 'block' (payload = filename), 'pad' (payload = int byte count).
    """
    entries = []
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if line.startswith('pad '):
                n = int(line[4:].strip())
                entries.append(('pad', n))
            else:
                entries.append(('block', line))
    return entries


def parse_spritelist(path):
    """Read a .spritelist file. Returns list of sprite base names."""
    sprites = []
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            sprites.append(line)
    return sprites


def derive_subdir(manifest_path):
    """From src/relocData/0_MNCommon.manifest derive 'MNCommon'.

    For files like '29.manifest' (no prefix) returns 'file_29'.
    """
    base = os.path.basename(manifest_path).rsplit('.', 1)[0]
    parts = base.split('_', 1)
    if len(parts) == 2 and parts[0].isdigit():
        return parts[1]
    if parts[0].isdigit():
        return f"file_{parts[0]}"
    return parts[0]


# ── Generation ──────────────────────────────────────────────────────────

def generate_from_manifest(manifest_path, output_path, search_paths=()):
    """Generate a master .c file from a .manifest file."""
    subdir = derive_subdir(manifest_path)
    block_dir = os.path.join(os.path.dirname(manifest_path), subdir)

    if not os.path.isdir(block_dir):
        print(f"Error: block directory {block_dir} not found", file=sys.stderr)
        sys.exit(1)

    entries = parse_manifest(manifest_path)

    lines = []
    lines.append(f"/* Auto-generated from {os.path.basename(manifest_path)} */")
    lines.append(f"/* DO NOT EDIT - edit the .manifest file instead. */")
    lines.append("")
    lines.append('#include "relocdata_types.h"')
    lines.append("")

    cursor = 0
    for kind, payload in entries:
        if kind == 'pad':
            lines.append(f"PAD({payload});")
            lines.append("")
            cursor += payload
        else:
            block_path = os.path.join(block_dir, payload)
            if not os.path.exists(block_path):
                print(f"Error: block file {block_path} not found",
                      file=sys.stderr)
                sys.exit(1)
            lines.append(f'#include "{subdir}/{payload}"')
            lines.append("")
            cursor += compute_block_size(block_path, search_paths)

    os.makedirs(os.path.dirname(output_path), exist_ok=True)
    with open(output_path, 'w') as f:
        f.write("\n".join(lines))

    block_count = sum(1 for k, _ in entries if k == 'block')
    pad_count = sum(1 for k, _ in entries if k == 'pad')
    print(f"Generated {output_path}: {block_count} blocks, {pad_count} pads, "
          f"{cursor} bytes (0x{cursor:X})")


def generate_from_spritelist(spritelist_path, output_path, search_paths=()):
    """Generate a master .c file from a .spritelist (sprite-only manifest)."""
    subdir = derive_subdir(spritelist_path)
    sprite_dir = os.path.join(os.path.dirname(spritelist_path), subdir)

    if not os.path.isdir(sprite_dir):
        print(f"Error: sprite directory {sprite_dir} not found",
              file=sys.stderr)
        sys.exit(1)

    sprites = parse_spritelist(spritelist_path)

    lines = []
    lines.append(f"/* Auto-generated from {os.path.basename(spritelist_path)} */")
    lines.append(f"/* DO NOT EDIT - edit the .spritelist file instead. */")
    lines.append("")
    lines.append('#include "relocdata_types.h"')
    lines.append("")

    cursor = 0
    for sprite_name in sprites:
        sprite_c = os.path.join(sprite_dir, f"{sprite_name}.sprite.c")
        if not os.path.exists(sprite_c):
            print(f"Error: {sprite_c} not found", file=sys.stderr)
            sys.exit(1)

        size, has_dl = parse_sprite_info(sprite_c, search_paths)

        misalignment = cursor % SPRITE_BLOCK_ALIGNMENT
        pad_size = (SPRITE_BLOCK_ALIGNMENT - misalignment) % SPRITE_BLOCK_ALIGNMENT
        if not has_dl:
            pad_size += GHOST_DL_PAD
        if pad_size > 0:
            lines.append(f"PAD({pad_size});")
            lines.append("")
            cursor += pad_size

        lines.append(f'#include "{subdir}/{sprite_name}.sprite.c"')
        lines.append("")
        cursor += size

    trailing_misalign = cursor % SPRITE_BLOCK_ALIGNMENT
    if trailing_misalign != 0:
        trailing_pad = SPRITE_BLOCK_ALIGNMENT - trailing_misalign
        lines.append(f"PAD({trailing_pad});")
        lines.append("")
        cursor += trailing_pad

    os.makedirs(os.path.dirname(output_path), exist_ok=True)
    with open(output_path, 'w') as f:
        f.write("\n".join(lines))

    print(f"Generated {output_path}: {len(sprites)} sprites, "
          f"{cursor} bytes (0x{cursor:X})")


def main():
    parser = argparse.ArgumentParser(
        description="Generate a master .c file from a manifest or spritelist")
    parser.add_argument("manifest", help="Input .manifest or .spritelist path")
    parser.add_argument("output", help="Output .c file path")
    parser.add_argument("-I", dest="include_paths", action="append", default=[],
                        help="Search paths for resolving #include'd .inc.c files (mirrors compiler -I)")
    args = parser.parse_args()

    if args.manifest.endswith('.manifest'):
        generate_from_manifest(args.manifest, args.output, args.include_paths)
    elif args.manifest.endswith('.spritelist'):
        generate_from_spritelist(args.manifest, args.output, args.include_paths)
    else:
        print(f"Error: input must be .manifest or .spritelist", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    main()
