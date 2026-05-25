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

    # Texture-include arrays: either `u8 X[] = { #include <...> };` (sprite
    # texture form, size counted in the inc.c) or `u8 X[N] = { #include <...> };`
    # (Tex wrapper form — N is authoritative, the inc.c just supplies bytes
    # at extract time). N accepts decimal or `0x`-prefixed hex so big
    # symbol-bounded blocks can stay readable as e.g. `[0x9548]`.
    for m in re.finditer(
            r'u8\s+\w+\s*\[\s*(0[xX][0-9A-Fa-f]+|\d*)\s*\]\s*=\s*\{\s*#include\s+[<"]([^>"]+)[>"]',
            content):
        explicit_n = m.group(1)
        if explicit_n:
            total += int(explicit_n, 0)
            continue
        inc_file = find_inc_file(m.group(2), file_dir, search_paths)
        if inc_file is None:
            print(f"Error: {data_c_path} references missing {m.group(2)}",
                  file=sys.stderr)
            sys.exit(1)
        total += count_hex_values(inc_file)

    # Literal arrays: count bytes from each one. Match the array body
    # explicitly so we don't double-count #include arrays. Prefer the
    # declared `[N]` count when present — inline arrays can include
    # macros like `aobjEvent32End()` that expand to a u32 but carry no
    # hex literal of their own, so counting `0x...` substrings underruns.
    for m in re.finditer(
            r'(u8|u16|u32|u64)\s+\w+\[(0[xX][0-9A-Fa-f]+|\d*)\]\s*=\s*\{([^}]*)\}',
            content, re.DOTALL):
        body = m.group(3)
        if '#include' in body:
            continue  # already counted above
        elem_type = m.group(1)
        explicit_n = m.group(2)
        if explicit_n:
            elem_count = int(explicit_n, 0)
        else:
            elem_count = len(re.findall(r'0x[0-9A-Fa-f]+', body))
        elem_size = {'u8': 1, 'u16': 2, 'u32': 4, 'u64': 8}[elem_type]
        total += elem_count * elem_size

    # Typed top-level structs whose size is fixed and known. Each entry
    # contributes its sizeof regardless of how complex its initializer is.
    # This lets manifest-driven block files declare actual game structs
    # (rather than raw u32 arrays) without losing the byte-offset accounting
    # the manifest pipeline relies on.
    KNOWN_STRUCT_SIZES = {
        'MPGroundData': 0xA8,  # 168 bytes per IDO sizeof
        'MPItemWeights': 20,   # u8 values[20]
        'GRAttackColl': 28,    # 7 x s32
        'GRSectorDesc': 48,    # 5 ptr + 24-byte filler, src/gr/grvars.h
        'SYInterpDesc': 24,    # 6 words, src/sys/interp.h
    }
    for type_name, type_size in KNOWN_STRUCT_SIZES.items():
        # Match `<TypeName> <ident> = {`. Brace-balanced body skipping is
        # not needed since we just count occurrences.
        pattern = rf'\b{re.escape(type_name)}\s+\w+\s*=\s*\{{'
        total += len(re.findall(pattern, content)) * type_size

    if total == 0:
        # print(f"Error: can't parse {data_c_path} (no recognized declarations)",
        #       file=sys.stderr)
        sys.exit(1)

    return total


def compute_palette_c_size(palette_c_path):
    """A .palette.c file is always a 16-color RGBA5551 palette = 32 bytes.

    Accepts either the wrapper form `u16 X[16] = { #include <...> };`
    (the committed form; bytes are pulled from a build-time inc.c) or
    the legacy inline form `u16 X[16] = { 0x..., ... };`.
    """
    with open(palette_c_path) as f:
        content = f.read()
    if not re.search(r'u16\s+\w+\s*\[\s*16\s*\]\s*=\s*\{', content):
        print(f"Warning: {palette_c_path} doesn't look like a 16-color palette",
              file=sys.stderr)
        sys.exit(1)
    return 32


def compute_mobjsub_c_size(mobjsub_c_path):
    """A .mobjsub.c file may contain:
      - A single MObjSub struct:      `MObjSub name = { ... };` (0x78 bytes)
      - An MObjSub array:             `MObjSub name[N] = { ... };` (N * 0x78)
      - Optionally followed by a trailing u32 pointer array (used when
        discovery rolls an <owner>.MObjSubPtrArray into the same file).

    We sum the byte sizes of all recognized declarations in the file.
    """
    with open(mobjsub_c_path) as f:
        content = f.read()
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    content = re.sub(r'//[^\n]*', '', content)

    total = 0
    found_any = False

    # MObjSub declarations (single or array)
    for m in re.finditer(r'MObjSub\s+\w+(?:\[(\d+)\])?\s*=\s*\{', content):
        count = int(m.group(1)) if m.group(1) else 1
        total += 0x78 * count
        found_any = True

    # Trailing u8/u16/u32/u64 arrays (e.g. the MObjSub pointer array).
    for m in re.finditer(
            r'(u8|u16|u32|u64)\s+\w+\[(?:\d*)\]\s*=\s*\{([^}]*)\}',
            content, re.DOTALL):
        elem_type = m.group(1)
        body = m.group(2)
        if '#include' in body:
            continue
        elem_count = len(re.findall(r'0x[0-9A-Fa-f]+', body))
        elem_size = {'u8': 1, 'u16': 2, 'u32': 4, 'u64': 8}[elem_type]
        total += elem_count * elem_size
        found_any = True

    if not found_any:
        print(f"Error: {mobjsub_c_path} has no recognized declarations",
              file=sys.stderr)
        sys.exit(1)
    return total


def _count_top_level_braces(body):
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


def compute_dl_c_size(dl_c_path):
    """A .dl.c file is `Gfx <name>[N] = { #include <...> };` (wrapper form,
    N declared explicitly) or the legacy inline form
    `Gfx <name>[] = { {{w0,w1}}, ... };`. Each F3DEX command pair is
    8 bytes, so the byte size is N * 8.
    """
    with open(dl_c_path) as f:
        content = f.read()
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    content = re.sub(r'//[^\n]*', '', content)
    m = re.search(r'Gfx\s+\w+\s*\[\s*(\d+)\s*\]\s*=\s*\{', content)
    if m:
        return int(m.group(1)) * 8
    m = re.search(r'Gfx\s+\w+\[\]\s*=\s*\{(.*)\};', content, re.DOTALL)
    if not m:
        print(f"Warning: {dl_c_path} doesn't look like a Gfx[] array",
              file=sys.stderr)
        sys.exit(1)
    return _count_top_level_braces(m.group(1)) * 8


def compute_vtx_c_size(vtx_c_path):
    """A .vtx.c file is either `Vtx <name>[N] = { #include <...> };` (the
    wrapper form, where the body lives in a build-time inc.c) or the
    legacy inline form `Vtx <name>[] = { { ... }, ... };`. The wrapper
    form declares the count explicitly in the array brackets; the
    inline form is counted by walking top-level braces.

    Zero-vertex wrappers (emitted as a comment-only stub when a
    description entry collapses to 0 vertices because an extras block
    starts at the same offset — see genRelocDataC.emit_vtx_block) have
    no declaration at all. They take up zero bytes in the data section.
    """
    with open(vtx_c_path) as f:
        raw = f.read()
    content = re.sub(r'/\*.*?\*/', '', raw, flags=re.DOTALL)
    content = re.sub(r'//[^\n]*', '', content)
    m = re.search(r'Vtx\s+\w+\s*\[\s*(\d+)\s*\]\s*=\s*\{', content)
    if m:
        return int(m.group(1)) * 16
    m = re.search(r'Vtx\s+\w+\[\]\s*=\s*\{(.*)\};', content, re.DOTALL)
    if m:
        return _count_top_level_braces(m.group(1)) * 16
    # No declaration at all — elided 0-vertex stub. A file that's purely
    # comments contributes zero bytes. Detect this by looking for the
    # "(0 vertices" marker embedded in the header comment we wrote.
    if '(0 vertices' in raw:
        return 0
    print(f"Warning: {vtx_c_path} doesn't look like a Vtx[] array",
          file=sys.stderr)
    sys.exit(1)


def compute_dobjdesc_c_size(dobjdesc_c_path):
    """Parse a .dobjdesc.c file and return its byte size (44 per entry)."""
    with open(dobjdesc_c_path) as f:
        content = f.read()
    # Strip block comments
    content = re.sub(r'/\*.*?\*/', '', content, flags=re.DOTALL)
    # Find the array body; count the number of top-level {...} groups
    m = re.search(r'DObjDesc\s+\w+\[\s*(\d*)\s*\]\s*=\s*\{(.*)\};', content, re.DOTALL)
    if not m:
        # print(f"Error: can't parse {dobjdesc_c_path}", file=sys.stderr)
        sys.exit(1)
    explicit_n = m.group(1)
    if explicit_n:
        return int(explicit_n) * 44
    body = m.group(2)
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
    if block_path.endswith('.dl.c'):
        return compute_dl_c_size(block_path)
    if block_path.endswith('.vtx.c'):
        return compute_vtx_c_size(block_path)
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


def _find_sprite_wrapper(sprite_dir, sprite_name, version):
    """Resolve the `<Name>.sprite.c` wrapper to use for `sprite_name`.

    Prefers a version-specific override (`Name.sprite.<version>.c`) when it
    exists so JP / US can diverge per-sprite without splitting the whole
    spritelist pipeline. Falls back to the shared `Name.sprite.c`."""
    if version:
        vp = os.path.join(sprite_dir, f"{sprite_name}.sprite.{version}.c")
        if os.path.exists(vp):
            return vp
    return os.path.join(sprite_dir, f"{sprite_name}.sprite.c")


def generate_from_spritelist(spritelist_path, output_path, search_paths=(),
                              version=None):
    """Generate a master .c file from a .spritelist (sprite-only manifest).

    If `version` is set, per-sprite `Name.sprite.<version>.c` overrides in
    the subdir take priority over the shared `Name.sprite.c`."""
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
        sprite_c = _find_sprite_wrapper(sprite_dir, sprite_name, version)
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

        # Emit the include using the RESOLVED filename — if the version
        # override fired, use its basename so the C compiler picks it up
        # rather than the shared wrapper.
        lines.append(f'#include "{subdir}/{os.path.basename(sprite_c)}"')
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
    parser.add_argument("--version", default=None,
                        help="Build version (us/jp); selects per-sprite overrides")
    args = parser.parse_args()

    if args.manifest.endswith('.manifest'):
        generate_from_manifest(args.manifest, args.output, args.include_paths)
    elif args.manifest.endswith('.spritelist'):
        generate_from_spritelist(args.manifest, args.output, args.include_paths,
                                  version=args.version)
    else:
        print(f"Error: input must be .manifest or .spritelist", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    main()
