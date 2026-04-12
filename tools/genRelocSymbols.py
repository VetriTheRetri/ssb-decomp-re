#!/usr/bin/python3
"""
Generate symbols/reloc_data_symbols.<version>.txt and include/reloc_data.h
from the relocFileDescriptions and the per-file block manifests.

Usage:
    genRelocSymbols.py <descriptions_path> <header_path> <linker_path>

The descriptions file is the source of truth for symbol names and file IDs.
For each file that has a converted manifest in src/relocData/, the per-block
offsets are recomputed by walking the manifest and summing block sizes - this
keeps the symbols file in sync as blocks are added, reordered, or resized.

For unconverted files, the offsets come straight from the descriptions file
(matching the original behavior of relocData.py genHeader).

The two outputs are:
  - <linker_path>: GNU ld script assigning absolute values to symbols.
                   Used as `-T <linker_path>` during linking.
  - <header_path>: C header with `extern int <symbol>; // <hex>` declarations.
                   Used by source files that reference these symbols.
"""

import os
import re
import sys
import argparse

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

# Reuse the size-computation logic from genRelocMaster
sys.path.insert(0, SCRIPT_DIR)
from genRelocMaster import (
    parse_manifest, parse_spritelist, parse_sprite_info,
    compute_data_c_size, compute_dobjdesc_c_size, compute_palette_c_size,
    compute_mobjsub_c_size, compute_dl_c_size, compute_vtx_c_size,
    SPRITE_BLOCK_ALIGNMENT, GHOST_DL_PAD,
)


# ── Description parsing ─────────────────────────────────────────────────

def parse_descriptions(desc_path):
    """Parse relocFileDescriptions.txt.

    Returns:
        file_count: int
        file_id_to_name: {file_id: file_name or None}
        block_entries: list of (file_id, type, name, offset) tuples in original order
    """
    with open(desc_path) as f:
        lines = f.read().split('\n')

    file_count = None
    file_id_to_name = {}
    block_entries = []
    current_file_id = None

    for line in lines:
        stripped = line.strip()

        # File count header: "# FILE_COUNT: 2132"
        m = re.match(r"#\s*FILE_COUNT:\s*(\d+)", stripped)
        if m:
            file_count = int(m.group(1))
            continue

        if not stripped or stripped.startswith('#'):
            continue

        # File name entry: "-000: MNCommon"
        m = re.match(r"-(\d+):\s*(.*)", stripped)
        if m:
            file_id_to_name[int(m.group(1))] = m.group(2).strip()
            continue

        # File section header: "[259]"
        m = re.match(r"\[(\d+)]", stripped)
        if m:
            current_file_id = int(m.group(1))
            continue

        # Block entry within a file: "Type Name 0xOFFSET"
        if current_file_id is not None and stripped.count(' ') == 2:
            block_type, block_name, block_offset = stripped.split(' ')
            offset = int(block_offset, 16) if block_offset.startswith('0x') else int(block_offset)
            block_entries.append((current_file_id, block_type, block_name, offset))

    return file_count, file_id_to_name, block_entries


# ── Symbol name conventions ─────────────────────────────────────────────

def file_id_symbol(file_id, file_id_to_name):
    """Build the file-id symbol name (e.g. llMNCommonFileID).

    Falls back to `ll_<id>_FileID` only for the rare unnamed file. Every
    file in the current descriptions has a real name, so the fallback
    should not normally fire.
    """
    name = file_id_to_name.get(file_id)
    if name:
        return f"ll{name}FileID"
    return f"ll_{file_id}_FileID"


def block_symbol(file_name, block_type, block_name):
    """Build the per-block symbol name following the original convention.

    From relocData.py's generateFileOffsetSymbols:
        unnamed (name == '-'): ll<FileName><BlockType>
        named:                 ll<FileName><BlockName><BlockType>
    """
    if block_name == '-':
        return f"ll{file_name}{block_type}"
    return f"ll{file_name}{block_name}{block_type}"


# ── Manifest-driven offset computation ──────────────────────────────────

def block_filename_for_description(block_type, block_name, offset):
    """Predict the block filename that genRelocDataC.py would produce for a
    given description entry. Returns the filename without the extension.

    The generator's naming logic (from emit_data_block, emit_dobjdesc_block,
    emit_sprite_block):
      Sprite, named:   <name>.sprite.c
      Sprite, unnamed: sprite_0xNNNN.sprite.c
      DObjDesc, named:   <name>.dobjdesc.c
      DObjDesc, unnamed: DObjDesc_0xNNNN.dobjdesc.c
      Other, named:   <name>_<type>.data.c
      Other, unnamed: <type>_0xNNNN.data.c
    """
    if block_type == 'Sprite':
        if block_name == '-':
            return f"sprite_0x{offset:04X}.sprite.c"
        return f"{block_name}.sprite.c"

    if block_type == 'DObjDesc':
        if block_name == '-':
            return f"DObjDesc_0x{offset:04X}.dobjdesc.c"
        return f"{block_name}.dobjdesc.c"

    if block_type == 'LUT':
        # LUT description entries are emitted as standalone .palette.c
        # files (16 RGBA5551 colors). The auto-generator names them after
        # the description's block name.
        if block_name == '-':
            return f"palette_0x{offset:04X}.palette.c"
        return f"{block_name}.palette.c"

    if block_type == 'MObjSub':
        if block_name == '-':
            return f"MObjSub_0x{offset:04X}.mobjsub.c"
        return f"{block_name}.mobjsub.c"

    if block_type == 'DisplayList':
        if block_name == '-':
            return f"DisplayList_0x{offset:04X}.dl.c"
        return f"{block_name}.dl.c"

    # Generic data blocks
    if block_name == '-':
        rl = f"{block_type}_0x{offset:04X}"
    else:
        rl = f"{block_name}_{block_type}"
    rl = re.sub(r'[^a-zA-Z0-9_]', '_', rl)
    return f"{rl}.data.c"


def compute_manifest_offsets(file_id, file_name, manifest_path,
                              descriptions_for_file, search_paths):
    """Walk a .manifest file and return {symbol_name: offset_in_file}.

    Matches each manifest block file against the descriptions for this file
    so we know which symbol gets which computed offset.

    Returns an empty dict if any required block file or texture .inc.c is
    missing - the caller will fall back to description offsets in that case.
    """
    block_dir = os.path.join(os.path.dirname(manifest_path), file_name)
    entries = parse_manifest(manifest_path)

    # Index descriptions by predicted block filename
    desc_by_filename = {}
    for d_type, d_name, d_offset in descriptions_for_file:
        fname = block_filename_for_description(d_type, d_name, d_offset)
        desc_by_filename[fname] = (d_type, d_name)

    symbol_offsets = {}
    cursor = 0
    for kind, payload in entries:
        if kind == 'pad':
            cursor += payload
            continue

        block_path = os.path.join(block_dir, payload)
        if not os.path.exists(block_path):
            # Required block file missing - graceful fallback
            return {}

        # Compute size and find the symbol offset (different for sprites:
        # the symbol points to the Sprite struct at the END of the block,
        # not the block start which begins with DL + texture data).
        if payload.endswith('.sprite.c'):
            from genRelocMaster import SPRITE_STRUCT_SIZE
            size, _ = parse_sprite_info(block_path, search_paths, strict=False)
            if size is None:
                return {}
            sym_offset = cursor + size - SPRITE_STRUCT_SIZE
        elif payload.endswith('.data.c'):
            size = compute_data_c_size(block_path, search_paths)
            sym_offset = cursor
        elif payload.endswith('.dobjdesc.c'):
            size = compute_dobjdesc_c_size(block_path)
            sym_offset = cursor
        elif payload.endswith('.palette.c'):
            size = compute_palette_c_size(block_path)
            sym_offset = cursor
        elif payload.endswith('.mobjsub.c'):
            size = compute_mobjsub_c_size(block_path)
            sym_offset = cursor
        elif payload.endswith('.dl.c'):
            size = compute_dl_c_size(block_path)
            sym_offset = cursor
        elif payload.endswith('.vtx.c'):
            size = compute_vtx_c_size(block_path)
            sym_offset = cursor
        else:
            return {}

        # Match this block file to a description entry to get its symbol name
        if payload in desc_by_filename:
            d_type, d_name = desc_by_filename[payload]
            sym = block_symbol(file_name, d_type, d_name)
            symbol_offsets[sym] = sym_offset

        cursor += size

    return symbol_offsets


def compute_spritelist_offsets(file_id, file_name, spritelist_path,
                                descriptions_for_file, search_paths):
    """Walk a .spritelist and return {symbol_name: offset_in_file}.

    Spritelists are auto-padded: each sprite block is 16-byte aligned, with
    an 8-byte ghost DL slot for sprites that have no real DL terminator.
    """
    sprite_dir = os.path.join(os.path.dirname(spritelist_path), file_name)
    sprites = parse_spritelist(spritelist_path)

    # Index descriptions by predicted sprite filename
    desc_by_filename = {}
    for d_type, d_name, d_offset in descriptions_for_file:
        if d_type != 'Sprite':
            continue
        fname = block_filename_for_description(d_type, d_name, d_offset)
        desc_by_filename[fname] = d_name

    symbol_offsets = {}
    cursor = 0
    for sprite_name in sprites:
        sprite_c = os.path.join(sprite_dir, f"{sprite_name}.sprite.c")
        if not os.path.exists(sprite_c):
            return {}

        size, has_dl = parse_sprite_info(sprite_c, search_paths, strict=False)
        if size is None:
            return {}

        # Apply alignment + ghost DL slot before this sprite
        misalignment = cursor % SPRITE_BLOCK_ALIGNMENT
        pad = (SPRITE_BLOCK_ALIGNMENT - misalignment) % SPRITE_BLOCK_ALIGNMENT
        if not has_dl:
            pad += GHOST_DL_PAD
        cursor += pad

        # The Sprite struct's symbol points to the Sprite struct itself, not
        # the start of the sprite block (which begins with DL + texture data).
        # The Sprite struct lives at the END of the sprite block.
        # So sprite_struct_offset = block_start + (block_size - SPRITE_STRUCT_SIZE)
        from genRelocMaster import SPRITE_STRUCT_SIZE
        sprite_struct_offset = cursor + size - SPRITE_STRUCT_SIZE

        fname = f"{sprite_name}.sprite.c"
        if fname in desc_by_filename:
            d_name = desc_by_filename[fname]
            sym = block_symbol(file_name, 'Sprite', d_name)
            symbol_offsets[sym] = sprite_struct_offset

        cursor += size

    return symbol_offsets


# ── Main symbol assembly ────────────────────────────────────────────────

def collect_all_symbols(desc_path, reloc_dir, search_paths, converted_ids=None,
                        us_desc_path=None, version=None):
    """Walk descriptions + manifests/spritelists, build the full symbol map.

    Args:
        converted_ids: optional set of file ids that have been converted to C
                       source for the active version. When provided, only those
                       files use manifest-computed offsets; all others use the
                       description offsets verbatim. When None (or empty), every
                       file with a manifest on disk gets computed offsets — this
                       is the original behavior used by US builds where on-disk
                       manifest existence already implies "converted".
        us_desc_path:  path to the US descriptions file. When the active version
                       is JP, this is used to derive cross-version aliases:
                       any JP file whose name matches a US-side name also gets
                       a `ll<Name>FileID = <JP_id>` symbol so C code that
                       references files by canonical name resolves on both
                       versions even when the underlying ids differ.
        version:       active version string (e.g. "us", "jp"). When provided,
                       files with a version-specific .c override (e.g.
                       *_Name.<version>.c) skip manifest-based offset
                       computation and use description offsets instead, since
                       the override is a raw blob with no named blocks.

    Returns:
        file_count: int
        file_id_symbols: ordered list of (symbol, value)
        block_symbols: ordered list of (symbol, value, file_id)
                       file_id is used to insert blank lines between files
    """
    file_count, file_id_to_name, all_block_entries = parse_descriptions(desc_path)

    # Group description block entries by file_id
    blocks_by_file = {}
    for fid, btype, bname, boff in all_block_entries:
        blocks_by_file.setdefault(fid, []).append((btype, bname, boff))

    # Build US name → US id map for cross-version aliasing. When we're
    # generating symbols for JP, this lets us emit `ll<Name>FileID` aliases
    # for any JP file whose name matches a US-side name at a different file
    # id. When generating US symbols, this map is only used for
    # self-consistency.
    us_name_to_id = {}
    if us_desc_path is not None and os.path.abspath(us_desc_path) != os.path.abspath(desc_path):
        _, us_id_to_name, _ = parse_descriptions(us_desc_path)
        for uid, uname in us_id_to_name.items():
            if uname:
                us_name_to_id[uname] = uid

    # File ID symbols
    # For each file we emit:
    #   1. The primary symbol — `ll<Name>FileID` if named, else `ll_<id>_FileID`
    #      for the rare unnamed file.
    #   2. (JP only) `ll<US_Name>FileID` aliasing the JP file id, for any JP
    #      file whose name matches a US-side name at a different file id.
    #      This lets C code reference files by their canonical name and have
    #      it resolve correctly on both versions even when the underlying ids
    #      differ between US and JP.
    file_id_symbols = []
    used_names = set()

    # First pass: collect all primary symbol names so we can dedup
    for fid in range(file_count):
        sym = file_id_symbol(fid, file_id_to_name)
        used_names.add(sym)

    # Second pass: emit primary symbol and any cross-version aliases
    for fid in range(file_count):
        sym = file_id_symbol(fid, file_id_to_name)
        file_id_symbols.append((sym, fid))

        # Cross-version alias: when this JP file's name matches a US name at
        # a different file id, the US-side name still resolves on JP.
        name = file_id_to_name.get(fid)
        if name and name in us_name_to_id:
            us_id = us_name_to_id[name]
            if us_id != fid:
                cross = f"ll{name}FileID"
                if cross not in used_names:
                    file_id_symbols.append((cross, fid))
                    used_names.add(cross)

    # For each file, decide whether to use computed offsets (manifest exists)
    # or fall back to description offsets.
    block_symbols = []
    converted_count = 0
    description_count = 0

    import glob

    for fid in sorted(blocks_by_file.keys()):
        file_name = file_id_to_name.get(fid)
        descs = blocks_by_file[fid]

        # Decide whether to look for a manifest. When converted_ids is given,
        # only those files get manifest-based offsets; everything else uses
        # description offsets verbatim (its baserom binary hasn't been
        # touched, so the offsets must remain authoritative).
        consider_manifest = (converted_ids is None) or (fid in converted_ids)

        # If a version-specific .c override exists (e.g. *_Name.jp.c), this
        # file is a raw blob — skip manifest-based offset computation and
        # use description offsets instead.
        if consider_manifest and version and file_name:
            vc_matches = glob.glob(os.path.join(reloc_dir, f"*_{file_name}.{version}.c"))
            if vc_matches:
                consider_manifest = False

        manifest_path = None
        spritelist_path = None
        if consider_manifest and file_name:
            # Prefer name-based lookup over the literal id pattern. JP and US
            # can have different files at the same id, so matching by name is
            # the only reliable way to find the right source.
            for ext, target in (('.manifest', 'manifest'), ('.spritelist', 'spritelist')):
                candidate = None
                matches = sorted(glob.glob(os.path.join(reloc_dir, f"*_{file_name}{ext}")))
                if matches:
                    candidate = matches[0]
                else:
                    fallback = os.path.join(reloc_dir, f"{fid}_{file_name}{ext}")
                    if os.path.exists(fallback):
                        candidate = fallback
                if candidate and os.path.exists(candidate):
                    if target == 'manifest':
                        manifest_path = candidate
                    else:
                        spritelist_path = candidate
                    break
        # Also check unnamed-file forms (e.g. 29.manifest)
        if consider_manifest and not manifest_path and not spritelist_path:
            for ext, target in (('.manifest', 'manifest'), ('.spritelist', 'spritelist')):
                candidate = os.path.join(reloc_dir, f"{fid}{ext}")
                if os.path.exists(candidate):
                    if target == 'manifest':
                        manifest_path = candidate
                    else:
                        spritelist_path = candidate
                    break

        # Compute offsets from the manifest (or use description offsets)
        computed = {}
        if manifest_path and file_name:
            computed = compute_manifest_offsets(fid, file_name, manifest_path,
                                                descs, search_paths)
            converted_count += 1
        elif spritelist_path and file_name:
            computed = compute_spritelist_offsets(fid, file_name, spritelist_path,
                                                  descs, search_paths)
            converted_count += 1
        else:
            description_count += 1

        # Emit each described block's symbol with its (computed or original) offset
        for btype, bname, boff in descs:
            if not file_name:
                # Files with no name use a different symbol prefix in the original
                # generator: "ll_<id>_<rest>". The current relocData.py uses the
                # placeholder "_<id>_" as the file name. Mirror that.
                placeholder = f"_{fid}_"
                sym = block_symbol(placeholder, btype, bname)
            else:
                sym = block_symbol(file_name, btype, bname)
            value = computed.get(sym, boff)
            block_symbols.append((sym, value, fid))

    return file_count, file_id_symbols, block_symbols, converted_count, description_count


def write_outputs(file_count, file_id_symbols, block_symbols,
                  header_path, linker_path):
    """Write the C header and linker script."""
    last_file_id = None

    # Linker script
    with open(linker_path, 'w') as f:
        f.write(f"llRelocFileCount = {file_count};\n\n")
        for sym, value in file_id_symbols:
            f.write(f"{sym} = {hex(value)};\n")
        f.write("\n")
        for sym, value, fid in block_symbols:
            if last_file_id is not None and fid != last_file_id:
                f.write("\n")
            f.write(f"{sym} = {hex(value)};\n")
            last_file_id = fid

    # C header
    last_file_id = None
    with open(header_path, 'w') as f:
        f.write(f"extern int llRelocFileCount; // {file_count}\n\n")
        for sym, value in file_id_symbols:
            f.write(f"extern int {sym}; // {hex(value)}\n")
        f.write("\n")
        for sym, value, fid in block_symbols:
            if last_file_id is not None and fid != last_file_id:
                f.write("\n")
            f.write(f"extern int {sym}; // {hex(value)}\n")
            last_file_id = fid


def main():
    parser = argparse.ArgumentParser(
        description="Generate reloc_data_symbols.txt and reloc_data.h")
    parser.add_argument("descriptions", help="Path to relocFileDescriptions.<version>.txt")
    parser.add_argument("header", help="Output C header path")
    parser.add_argument("linker", help="Output linker script path")
    parser.add_argument("--reloc-dir", default=RELOC_DIR,
                        help="Directory containing manifest/spritelist files")
    parser.add_argument("-I", dest="include_paths", action="append", default=[],
                        help="Search paths for resolving #include'd .inc.c files")
    parser.add_argument("--converted-files", default=None,
                        help="Space-separated list of file ids that have been "
                             "converted to C source for the active version. "
                             "Restricts manifest-based offset computation to "
                             "exactly these files; everything else uses the "
                             "description offsets verbatim. Omit for the "
                             "legacy behavior (any on-disk manifest is used).")
    args = parser.parse_args()

    # Default include paths if not provided
    search_paths = list(args.include_paths) if args.include_paths else [
        os.path.join(PROJECT_DIR, "src", "relocData"),
        os.path.join(PROJECT_DIR, "build", "src", "relocData"),
    ]

    converted_ids = None
    if args.converted_files is not None:
        converted_ids = {int(x) for x in args.converted_files.split() if x}

    # For cross-version aliasing, auto-discover the US descriptions file as
    # a sibling of the active descriptions file.
    us_desc_path = os.path.join(os.path.dirname(args.descriptions),
                                "relocFileDescriptions.us.txt")
    if not os.path.exists(us_desc_path):
        us_desc_path = None

    # Detect version from the descriptions filename
    # (e.g. relocFileDescriptions.jp.txt -> "jp")
    import re
    version_match = re.search(r'relocFileDescriptions\.(\w+)\.txt', args.descriptions)
    version = version_match.group(1) if version_match else None

    file_count, file_id_symbols, block_symbols, converted, fallback = \
        collect_all_symbols(args.descriptions, args.reloc_dir, search_paths,
                            converted_ids=converted_ids,
                            us_desc_path=us_desc_path,
                            version=version)

    write_outputs(file_count, file_id_symbols, block_symbols,
                  args.header, args.linker)

    print(f"Generated {args.header} and {args.linker}")
    print(f"  {file_count} file IDs")
    print(f"  {len(block_symbols)} block symbols")
    print(f"  {converted} files with computed offsets, {fallback} from descriptions")


if __name__ == "__main__":
    main()
