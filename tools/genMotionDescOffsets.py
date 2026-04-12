#!/usr/bin/env python3
"""
Scan relocData motion-script files (MainMotion / SubMotion) for top-level
`u32 d{Name}_0x{HEX}[]` script arrays, and emit a header that maps each
symbol to its byte offset within the file.

This lets ftdata.c (and the per-character scsubsys files) write
    { &llFTMarioAnimWaitFileID, dMarioMainMotion_0x0024, FTANIM_FLAG_NONE },
instead of a bare `0x00000024` magic number. Compiles to the exact same
bytes — the macros expand to the same constants — but the source ties the
FTMotionDesc entry to the script that lives at that offset.

The generator picks up named arrays from any file matching `*MainMotion.c`
or `*SubMotion.c` under src/relocData/. Files where someone has hand-named
the scripts (e.g. `dMarioMainMotion_WaitVariant`) are also picked up — the
`_0x` prefix is just a default convention from the auto-converter.

Output: include/ft/motiondesc_offsets.h
"""

import os
import re
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
DEFAULT_OUT = os.path.join(PROJECT_DIR, "include", "ft", "motiondesc_offsets.h")

# Match `u32 d{Base}_<label>[N or empty] = {`. Captures (base, label).
# Base is the file's symbol prefix (e.g. "MarioMainMotion"). Label is
# whatever follows the underscore — usually `0x0024` from the auto-converter
# but may be a hand-renamed identifier.
ARRAY_RE = re.compile(
    r"^u32\s+(d\w+?)_(\w+)\s*\[[^\]]*\]\s*=\s*\{",
    re.MULTILINE,
)

# File-name patterns we care about. Each entry: (filename glob suffix,
# section comment shown in the header).
TARGET_PATTERNS = [
    "MainMotion.c",
    "SubMotion.c",
]


def find_motion_files():
    """Yield (file_id, base_name, path) for each motion-script source file."""
    out = []
    for fn in sorted(os.listdir(RELOC_DIR)):
        if not fn.endswith(".c"):
            continue
        if not any(fn.endswith(suf) for suf in TARGET_PATTERNS):
            continue
        # Filename is `<id>_<BaseName>.c`
        m = re.match(r"(\d+)_(\w+)\.c$", fn)
        if not m:
            continue
        fid = int(m.group(1))
        base = m.group(2)
        out.append((fid, base, os.path.join(RELOC_DIR, fn)))
    return out


def parse_arrays(path, base):
    """Find every `u32 d{base}_<label>[]` declaration and compute its byte
    offset within the file by walking declarations in source order.

    For files where script labels follow the `0x<HEX>` convention, the
    label IS the byte offset, so we just trust it. For hand-named labels we
    fall back to counting bytes from the previous declaration.
    """
    with open(path) as f:
        text = f.read()

    # Strip C comments so they don't confuse the brace counter.
    text_nocomments = strip_c_comments(text)

    decls = []  # (full_symbol, byte_offset, declared_byte_size)

    # Walk all matches in source order, computing the byte length of each
    # array body so we can chain offsets when labels are hand-renamed.
    pos = 0
    cursor_byte = 0
    for m in ARRAY_RE.finditer(text_nocomments):
        if not m.group(1).endswith(base) and m.group(1) != f"d{base}":
            continue
        # Be strict: only `d{base}_<label>` (not other arrays that happen
        # to share a prefix).
        if m.group(1) != f"d{base}":
            continue

        sym = f"{m.group(1)}_{m.group(2)}"

        # If the label is `0x<HEX>`, trust it as the byte offset.
        label = m.group(2)
        hex_match = re.match(r"^0x([0-9A-Fa-f]+)$", label)
        if hex_match:
            byte_off = int(hex_match.group(1), 16)
        else:
            # Use the running cursor — this assumes the file declares
            # arrays in physical order, which the auto-converter does.
            byte_off = cursor_byte

        # Measure body length by counting top-level u32 entries between {}
        body_start = m.end()
        body, body_end = extract_brace_body(text_nocomments, body_start - 1)
        # Count comma-separated top-level items in `body`. Each is a u32 (4 bytes)
        # but a single ftMotionCommand* macro can expand to multiple words.
        # For our purposes, what matters is *advancing the cursor*. The
        # easiest accurate measure is to count u32-sized macro calls. We
        # approximate by counting commas at depth 0 in `body` plus 1.
        word_count = count_top_level_items(body)
        byte_size = word_count * 4
        # Multi-word ftMotionCommand macros (Effect, MakeAttackColl, etc.)
        # expand to >1 word. We can't easily distinguish them here, so we
        # rely on the `0x<HEX>` label form for accuracy. For files where
        # *all* labels are `0x<HEX>`, the cursor isn't even consulted.

        decls.append((sym, byte_off, byte_size))
        cursor_byte = byte_off + byte_size

    return decls


def strip_c_comments(text):
    """Strip /* ... */ and // ... comments. Doesn't handle string literals
    perfectly but our motion files don't contain any."""
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.DOTALL)
    text = re.sub(r"//[^\n]*", "", text)
    return text


def extract_brace_body(text, brace_open_pos):
    """Given a position pointing at `{`, return (inner_body, end_pos)
    where end_pos is the index just past the matching `}`."""
    # Find the actual `{`
    while brace_open_pos < len(text) and text[brace_open_pos] != "{":
        brace_open_pos += 1
    depth = 0
    i = brace_open_pos
    while i < len(text):
        c = text[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return text[brace_open_pos + 1:i], i + 1
        i += 1
    return text[brace_open_pos + 1:], len(text)


def count_top_level_items(body):
    """Count comma-separated items at brace depth 0."""
    depth = 0
    count = 0
    cur_has_content = False
    for c in body:
        if c == "(" or c == "{":
            depth += 1
            cur_has_content = True
        elif c == ")" or c == "}":
            depth -= 1
        elif c == "," and depth == 0:
            if cur_has_content:
                count += 1
                cur_has_content = False
        elif not c.isspace():
            cur_has_content = True
    if cur_has_content:
        count += 1
    return count


def emit_header(motion_files, out_path):
    lines = []
    lines.append("/*")
    lines.append(" * Auto-generated by tools/genMotionDescOffsets.py — do not edit.")
    lines.append(" *")
    lines.append(" * Maps each `d<File>_<label>` motion-script symbol to its byte offset")
    lines.append(" * within the relocData file. Used by FTMotionDesc array initializers")
    lines.append(" * so they can name the script they reference instead of using a raw")
    lines.append(" * hex offset.")
    lines.append(" */")
    lines.append("#ifndef FT_MOTIONDESC_OFFSETS_H")
    lines.append("#define FT_MOTIONDESC_OFFSETS_H")
    lines.append("")

    total = 0
    for fid, base, path in motion_files:
        decls = parse_arrays(path, base)
        if not decls:
            continue
        lines.append(f"/* {base} (file {fid}) */")
        for sym, byte_off, _ in decls:
            lines.append(f"#define {sym} 0x{byte_off:08X}")
        lines.append("")
        total += len(decls)

    lines.append("#endif /* FT_MOTIONDESC_OFFSETS_H */")
    lines.append("")

    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    with open(out_path, "w") as f:
        f.write("\n".join(lines))
    return total


def main():
    out = DEFAULT_OUT
    if len(sys.argv) > 1:
        out = sys.argv[1]

    files = find_motion_files()
    print(f"Found {len(files)} motion-script source files")
    total = emit_header(files, out)
    print(f"Wrote {out} ({total} symbols)")


if __name__ == "__main__":
    main()
