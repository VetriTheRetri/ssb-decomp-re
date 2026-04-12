#!/usr/bin/env python3
"""
One-shot refactor for src/ft/ftdata.c (and any other C source) that:

  1. Renames every `ll_NNN_FileID` reference to its named equivalent
     (e.g. `ll_500_FileID` -> `llFTMarioAnimWalk1FileID`). Now that every
     relocData file has a name, the numeric placeholder form is dead weight.

  2. Reformats `FTMotionDesc` array entries in src/ft/ftdata.c into braced
     struct initializers and rewrites the third field (FTAnimDesc flags)
     using the FTANIM_FLAG_* macros from src/ft/ftdef.h.

The rename step also covers all other C files under src/.
"""

import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SYMBOLS_PATH = os.path.join(PROJECT_DIR, "symbols", "reloc_data_symbols.us.txt")
FTDATA_PATH = os.path.join(PROJECT_DIR, "src", "ft", "ftdata.c")


def load_rename_map():
    """Build {numeric_symbol: named_symbol} from the US symbols file."""
    val_to_named = {}
    numeric_pairs = []
    with open(SYMBOLS_PATH) as f:
        for line in f:
            line = line.strip()
            if "=" not in line:
                continue
            sym, val = [x.strip() for x in line.split("=", 1)]
            val = val.rstrip(";").strip()
            try:
                val_int = int(val, 0)
            except ValueError:
                continue
            if sym.startswith("ll_") and sym.endswith("_FileID"):
                numeric_pairs.append((sym, val_int))
            elif sym.startswith("ll") and sym.endswith("FileID"):
                val_to_named.setdefault(val_int, sym)

    rename = {}
    for sym, val in numeric_pairs:
        if val in val_to_named:
            rename[sym] = val_to_named[val]
    return rename


def rename_in_file(path, rename, dry_run=False):
    with open(path) as f:
        text = f.read()

    def sub(m):
        sym = m.group(0)
        return rename.get(sym, sym)

    pattern = re.compile(r"\bll_\d+_FileID\b")
    new_text, count = pattern.subn(sub, text)
    if count and not dry_run:
        with open(path, "w") as f:
            f.write(new_text)
    return count


def find_c_files():
    out = []
    for root, _, files in os.walk(os.path.join(PROJECT_DIR, "src")):
        for fn in files:
            if fn.endswith(".c") or fn.endswith(".h"):
                out.append(os.path.join(root, fn))
    return out


# ---------- FTMotionDesc reformat ----------

# Bit -> macro for the third field (FTAnimDesc.word). Bits not in this map
# are kept as raw hex (the joint-id bits 0x10000000..0x00000020 don't have
# named macros).
FLAG_MACROS = {
    0x80000000: "FTANIM_FLAG_TRANSN_JOINT",
    0x40000000: "FTANIM_FLAG_XROTN_JOINT",
    0x20000000: "FTANIM_FLAG_YROTN_JOINT",
    0x00000010: "FTANIM_FLAG_SUBMOTION_SCRIPT",
    0x00000008: "FTANIM_FLAG_ANIMJOINT",
    0x00000004: "FTANIM_FLAG_TRANSLATE_SCALES",
    0x00000002: "FTANIM_FLAG_SHIELDPOSE",
    0x00000001: "FTANIM_FLAG_ANIMLOCKS",
}
FLAG_MASK = 0
for _v in FLAG_MACROS:
    FLAG_MASK |= _v


def fmt_flags(word):
    """Convert a u32 FTAnimDesc word to its FTANIM_FLAG_* expression."""
    if word == 0:
        return "FTANIM_FLAG_NONE"

    pieces = []
    remaining = word
    # Pull off named bits in canonical (high-to-low) order.
    for bit in sorted(FLAG_MACROS.keys(), reverse=True):
        if remaining & bit:
            pieces.append(FLAG_MACROS[bit])
            remaining &= ~bit
    # Anything left is unnamed joint-id bits — keep as hex.
    if remaining:
        pieces.append(f"0x{remaining:08X}")
    return " | ".join(pieces)


# Match a single FTMotionDesc entry: an indented line of the form
#     &symbol, 0xHEX, 0xHEX,
ENTRY_RE = re.compile(
    r"^(\s+)(&\w+),\s*(0x[0-9A-Fa-f]+),\s*(0x[0-9A-Fa-f]+),(\s*(?://[^\n]*)?)\s*$",
    re.MULTILINE,
)

# Match a whole `FTMotionDesc dFTXxx[Sub]?MotionDescs[] = { ... };` block
ARRAY_RE = re.compile(
    r"(FTMotionDesc\s+dFT\w+MotionDescs\[\]\s*=\s*\{)([^}]*)(\};)",
    re.DOTALL,
)


def reformat_ftmotiondesc_block(text):
    """Brace each FTMotionDesc entry inside a single array body and rewrite
    its flags field via FTANIM_FLAG_*."""

    def sub_entry(m):
        indent = m.group(1)
        sym = m.group(2)
        offset = int(m.group(3), 16)
        flags_word = int(m.group(4), 16)
        trailing = m.group(5).rstrip()

        offset_str = f"0x{offset:08X}"
        flags_str = fmt_flags(flags_word)
        line = f"{indent}{{ {sym}, {offset_str}, {flags_str} }},"
        if trailing:
            line += f"  {trailing.lstrip()}"
        return line

    return ENTRY_RE.sub(sub_entry, text)


def reformat_ftdata():
    with open(FTDATA_PATH) as f:
        text = f.read()

    def sub_array(m):
        head, body, tail = m.group(1), m.group(2), m.group(3)
        return head + reformat_ftmotiondesc_block(body) + tail

    new_text = ARRAY_RE.sub(sub_array, text)
    if new_text != text:
        with open(FTDATA_PATH, "w") as f:
            f.write(new_text)
        return True
    return False


def main():
    args = sys.argv[1:]
    dry_run = "--dry-run" in args
    skip_rename = "--no-rename" in args
    skip_reformat = "--no-reformat" in args

    if not skip_rename:
        rename = load_rename_map()
        print(f"Loaded {len(rename)} numeric->named mappings")
        total = 0
        files_changed = 0
        for path in find_c_files():
            n = rename_in_file(path, rename, dry_run=dry_run)
            if n:
                files_changed += 1
                total += n
                rel = os.path.relpath(path, PROJECT_DIR)
                print(f"  {rel}: {n} replacements")
        print(f"Rename: {files_changed} files, {total} total replacements"
              + (" (dry run)" if dry_run else ""))

    if not skip_reformat:
        if dry_run:
            print("(dry run, skipping FTMotionDesc reformat)")
        else:
            changed = reformat_ftdata()
            print(f"FTMotionDesc reformat: {'updated' if changed else 'no changes'} "
                  f"{os.path.relpath(FTDATA_PATH, PROJECT_DIR)}")


if __name__ == "__main__":
    main()
