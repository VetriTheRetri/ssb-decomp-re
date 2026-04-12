#!/usr/bin/env python3
"""
Convert a manifest-based Fighter Main relocData file (multiple .data.c blocks
glued together by a .manifest) into a single fighter-main C file with the
same shape as src/relocData/203_MarioMain.c:

  - Pre-attributes data:    u32 d{Name}_pre[N]
  - Typed FTAttributes:     FTAttributes d{Name}_attr
  - Trailing padding:       u32 d{Name}_pad[M]   (if any)
  - .reloc file with new symbolic labels

Reads the binary content from build/assets/relocData/<id>.vpk0.bin (which the
build pipeline generates from the manifest) and the chain entries from the
existing manifest-style .reloc file (resolving symbol labels via the .data.c
blocks' "from file offset 0x... to 0x..." comments).

After running, the manifest, block subdirectory, and old-form .reloc file are
left in place; clean them up manually once verified.
"""

import os
import re
import sys
import struct

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
sys.path.insert(0, SCRIPT_DIR)

from typeFTAttributes import FTATTR_SIZE, parse_ftattributes, generate_attr_block

# (US file id, Name, o_attributes)
FIGHTER_MAINS = [
    (217, "SamusMain",   0x0610),
    (225, "LinkMain",    0x0708),
    (229, "KirbyMain",   0x0808),
    (239, "NessMain",    0x05BC),
    (243, "PikachuMain", 0x041C),
    (247, "YoshiMain",   0x047C),
]


def read_built_bin(fid):
    """Read the post-build, post-fixRelocChain binary."""
    path = os.path.join(PROJECT_DIR, "build", "assets", "relocData",
                        f"{fid}.vpk0.bin")
    if not os.path.isfile(path):
        raise FileNotFoundError(
            f"Missing {path}. Run `make VERSION=us RELOC_DATA=1 {path}` first.")
    with open(path, "rb") as f:
        return f.read()


def parse_block_offsets(name):
    """Build a {symbol_name: byte_offset} map from the .data.c blocks for a
    given fighter Name. Each block file has a header comment of the form:
        /* Raw data from file offset 0x0000 to 0x000C (12 bytes) */
        u32 d{Name}_<label>[] = {
    """
    block_dir = os.path.join(PROJECT_DIR, "src", "relocData", name)
    if not os.path.isdir(block_dir):
        raise FileNotFoundError(f"Block directory {block_dir} not found")

    symbols = {}
    for fn in sorted(os.listdir(block_dir)):
        if not fn.endswith(".data.c"):
            continue
        path = os.path.join(block_dir, fn)
        with open(path) as f:
            text = f.read()
        m = re.search(r"file offset 0x([0-9A-Fa-f]+)\s+to\s+0x[0-9A-Fa-f]+", text)
        decl = re.search(r"u32\s+(d" + re.escape(name) + r"_\w+)\[", text)
        if not m or not decl:
            print(f"  WARNING: could not parse offset/decl in {fn}")
            continue
        symbols[decl.group(1)] = int(m.group(1), 16)
    return symbols


def resolve_label(label, symbols):
    """Resolve `name` or `name+0xN` or `0xN` to a byte offset."""
    if re.match(r"^0x[0-9a-fA-F]+$", label):
        return int(label, 16)
    m = re.match(r"^(.+)\+0x([0-9a-fA-F]+)$", label)
    if m:
        base = m.group(1)
        if base not in symbols:
            raise KeyError(f"Symbol {base} not in symbol map")
        return symbols[base] + int(m.group(2), 16)
    if label in symbols:
        return symbols[label]
    raise KeyError(f"Cannot resolve label {label}")


def parse_reloc(reloc_path, symbols):
    """Return (intern_entries, extern_entries) where each is a list of
    (ptr_byte_offset, target_byte_offset) tuples."""
    intern = []
    extern = []
    with open(reloc_path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            parts = line.split()
            if len(parts) != 3:
                continue
            chain_type, ptr_label, target_label = parts
            ptr_off = resolve_label(ptr_label, symbols)
            try:
                tgt_off = resolve_label(target_label, symbols)
            except KeyError:
                # extern targets are raw hex
                tgt_off = int(target_label, 16)
            if chain_type == "intern":
                intern.append((ptr_off, tgt_off))
            else:
                extern.append((ptr_off, tgt_off))
    return intern, extern


def generate_c_file(fid, name, o_attributes, data, intern, extern):
    file_size = len(data)
    attr_end = o_attributes + FTATTR_SIZE
    pre_words = o_attributes // 4

    intern_map = {ptr: tgt for ptr, tgt in intern}
    extern_map = {ptr: tgt for ptr, tgt in extern}

    lines = []
    lines.append(f"/* Fighter Main data for relocData file {fid} ({name}) */")
    lines.append(f"/* File size: {file_size} bytes (0x{file_size:X}) */")
    lines.append("")
    lines.append('#include "relocdata_types.h"')
    lines.append("#include <ft/fttypes.h>")
    lines.append("")
    lines.append(f"/* Pre-attributes data ({pre_words} words, 0x{o_attributes:04X} bytes) */")
    lines.append(f"u32 d{name}_pre[{pre_words}] = {{")

    for i in range(pre_words):
        byte_off = i * 4
        val = struct.unpack(">I", data[byte_off:byte_off + 4])[0]
        comment = ""
        if byte_off in intern_map:
            comment = f" /* intern -> 0x{intern_map[byte_off]:04X} */"
        elif byte_off in extern_map:
            comment = f" /* extern -> 0x{extern_map[byte_off]:04X} */"
        lines.append(f"\t0x{val:08X},{comment}")

    lines.append("};")
    lines.append("")

    attr_fields = parse_ftattributes(data, o_attributes)
    lines.append(generate_attr_block(name, attr_fields))

    if file_size > attr_end:
        pad_bytes = file_size - attr_end
        pad_words = pad_bytes // 4
        if pad_words > 0:
            lines.append("")
            lines.append(f"/* Trailing padding ({pad_words} words) */")
            lines.append(f"u32 d{name}_pad[{pad_words}] = {{")
            vals = []
            for i in range(pad_words):
                v = struct.unpack(">I", data[attr_end + i * 4:attr_end + i * 4 + 4])[0]
                vals.append(f"0x{v:08X}")
            lines.append("\t" + ", ".join(vals) + ",")
            lines.append("};")

    lines.append("")
    return "\n".join(lines)


def label_for(byte_off, name, o_attributes, attr_end, file_size):
    if byte_off < o_attributes:
        return f"d{name}_pre+0x{byte_off:X}"
    if byte_off < attr_end:
        return f"d{name}_attr+0x{byte_off - o_attributes:X}"
    return f"d{name}_pad+0x{byte_off - attr_end:X}"


def generate_reloc_file(fid, name, o_attributes, file_size, intern, extern):
    attr_end = o_attributes + FTATTR_SIZE
    lines = []
    lines.append(f"# Relocation metadata for file {fid}")
    lines.append("# Format: <type> <ptr_label> <target_label>")
    lines.append("# Labels are C variable names resolved via .o symbol table")

    all_entries = []
    for ptr, tgt in intern:
        all_entries.append(("intern", ptr, tgt))
    for ptr, tgt in extern:
        all_entries.append(("extern", ptr, tgt))
    all_entries.sort(key=lambda x: x[1])

    for chain_type, ptr_off, tgt_off in all_entries:
        ptr_label = label_for(ptr_off, name, o_attributes, attr_end, file_size)
        if chain_type == "extern":
            tgt_label = f"0x{tgt_off:X}"
        else:
            tgt_label = label_for(tgt_off, name, o_attributes, attr_end, file_size)
        lines.append(f"{chain_type} {ptr_label} {tgt_label}")
    lines.append("")
    return "\n".join(lines)


def process(fid, name, o_attributes, dry_run=False):
    print(f"Processing {fid}_{name} (attr at 0x{o_attributes:04X})")
    data = read_built_bin(fid)
    file_size = len(data)
    if o_attributes + FTATTR_SIZE > file_size:
        print(f"  ERROR: FTAttributes extends past file end "
              f"(file size 0x{file_size:X})")
        return False

    symbols = parse_block_offsets(name)
    print(f"  block symbols: {len(symbols)}")
    reloc_path = os.path.join(PROJECT_DIR, "src", "relocData",
                              f"{fid}_{name}.reloc")
    intern, extern = parse_reloc(reloc_path, symbols)
    print(f"  intern={len(intern)}, extern={len(extern)}")

    c_text = generate_c_file(fid, name, o_attributes, data, intern, extern)
    reloc_text = generate_reloc_file(fid, name, o_attributes, file_size,
                                     intern, extern)

    if dry_run:
        print("  (dry-run) generated files:")
        print(f"    .c: {len(c_text)} chars")
        print(f"    .reloc: {len(reloc_text)} chars")
        return True

    c_path = os.path.join(PROJECT_DIR, "src", "relocData", f"{fid}_{name}.c")
    with open(c_path, "w") as f:
        f.write(c_text)
    with open(reloc_path, "w") as f:
        f.write(reloc_text)

    # Remove the manifest and the per-block directory
    manifest_path = os.path.join(PROJECT_DIR, "src", "relocData",
                                 f"{fid}_{name}.manifest")
    if os.path.isfile(manifest_path):
        os.remove(manifest_path)
        print(f"  Removed {manifest_path}")
    block_dir = os.path.join(PROJECT_DIR, "src", "relocData", name)
    if os.path.isdir(block_dir):
        for fn in os.listdir(block_dir):
            os.remove(os.path.join(block_dir, fn))
        os.rmdir(block_dir)
        print(f"  Removed {block_dir}/")

    print(f"  Wrote {c_path}")
    print(f"  Wrote {reloc_path}")
    return True


def main():
    args = sys.argv[1:]
    dry_run = "--dry-run" in args
    args = [a for a in args if a != "--dry-run"]

    targets = FIGHTER_MAINS
    if args:
        wanted = {int(a) for a in args}
        targets = [t for t in FIGHTER_MAINS if t[0] in wanted]
        if not targets:
            print("No matching fighters")
            return 1

    for fid, name, o_attr in targets:
        if not process(fid, name, o_attr, dry_run=dry_run):
            return 1
    print("Done!")
    return 0


if __name__ == "__main__":
    sys.exit(main())
