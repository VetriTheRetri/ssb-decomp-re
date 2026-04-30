#!/usr/bin/env python3
"""
Type FTThrowHitDesc data referenced by `ftMotionCommandSetThrow` /
`ftMotionCommandSetDamageThrown` commands that point mid-array.

For each `SetThrow`/`SetDamageThrown(<sym> + N)` reference (N>0, in
words) found in a MainMotion-style relocData .c file:

  1. Locate the `u32 <sym>[] = { … };` declaration.
  2. Identify the 7 consecutive words at word offset N — these are the
     FTThrowHitDesc struct (status_id, damage, angle, knockback_scale,
     knockback_weight, knockback_base, element).
  3. Verify all 7 words are raw `0xHEX,` literals (not macro
     invocations) — otherwise skip; we don't want to mistakenly split
     real motion commands.
  4. Split the original array into pre / FTThrowHitDesc / post
     declarations, naming the throw block `<sym>_0x<absolute_byte_off>`.
  5. Rewrite the `SetThrow(<sym> + N)` ref to `SetThrow((u32)&<new_sym>)`.
  6. Update `.reloc` / `.jp.reloc` entries from `<sym>+0x<N*4>` to
     `<new_sym>` when the byte offset matches the throw start.

Bytes preserved exactly — IDO emits declarations in source order, so
splitting one array into three keeps the data contiguous, and the
existing chain-pointer entries continue to land at the same byte
addresses post-split.

Usage:
    tools/typeSetThrowTargets.py <fid> [<fid> …]
"""

import argparse
import os
import re

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

FTTHROWHITDESC_WORDS = 7

# Match `(u32)?<sym> + N` and `(u32)?<sym>` inside SetThrow/SetDamageThrown
SETTHROW_RE = re.compile(
    r"ftMotionCommand(?:SetThrow|SetDamageThrown)\(\s*"
    r"(?:\(u32\))?\s*"
    r"(d\w+?)(?:\s*\+\s*(\d+))?\s*\)"
)


def find_setthrow_targets(text):
    """Yield (target_sym, target_word_off) for every SetThrow ref where
    target_word_off > 0 (mid-array reference)."""
    seen = set()
    for m in SETTHROW_RE.finditer(text):
        sym = m.group(1)
        off = int(m.group(2)) if m.group(2) else 0
        if off == 0:
            continue
        key = (sym, off)
        if key in seen:
            continue
        seen.add(key)
        yield sym, off


def parse_array_body(text, sym):
    """Find the `u32 sym[] = { body };` block. Returns (start_idx,
    end_idx, lines) where lines is the list of body-content lines (one
    per line of the array body, content trimmed of trailing comma)."""
    pattern = re.compile(
        rf"^u32 {re.escape(sym)}\[\] = \{{\n((?:.*\n)*?)\}};",
        re.MULTILINE,
    )
    m = pattern.search(text)
    if not m:
        return None
    body = m.group(1)
    return m.start(), m.end(), body


def count_words_in_line(line):
    """Estimate the number of u32 words a single line of the array body
    represents. Macro invocations are counted by table; raw `0xN,` is 1
    word; everything else counts as 1 word fallback (so misclassification
    is conservative)."""
    s = line.strip().rstrip(",").strip()
    if not s or s.startswith("/*") or s.startswith("//"):
        return 0
    # Macro form? Parse the leading identifier.
    m = re.match(r"^(\w+)\s*\(", s)
    if m:
        name = m.group(1)
        # Multi-word ftMotionCommand macros
        return MACRO_WORDS.get(name, 1)
    # Raw hex / decimal literal — single word.
    return 1


# Word counts for ftMotionCommand* macros (mirrors OPCODE_WORD_COUNT in
# promoteMotionFiles.py but indexed by macro name)
MACRO_WORDS = {
    # Simple 1-word macros — default
    # 5-word macros
    "ftMotionCommandMakeAttackColl": 5,
    "ftMotionCommandMakeAttackCollScaled": 5,
    # 4-word macros
    "ftMotionCommandEffect": 4,
    "ftMotionCommandEffectItemHold": 4,
    "ftMotionCommandSetDamageCollPartID": 4,
    # 2-word macros
    "ftMotionCommandSetAttackCollOffset": 2,
    "ftMotionCommandSubroutine": 2,
    "ftMotionCommandGoto": 2,
    "ftMotionCommandSetThrow": 2,
    "ftMotionCommandSetDamageThrown": 2,
    "ftMotionCommandSetParallelScript": 2,
}


def scan_words(body):
    """Walk the body lines, return (line_words, line_indexes) where
    line_words[i] is the cumulative word offset BEFORE line i, and
    line_indexes is the parallel list of source-line strings."""
    lines = body.split("\n")
    cum = 0
    word_offsets = []
    for ln in lines:
        word_offsets.append(cum)
        cum += count_words_in_line(ln)
    return lines, word_offsets


def line_at_word_offset(lines, word_offsets, target_word):
    """Return the index of the line in `lines` that starts at
    `target_word` words from the array start, or None."""
    for i, off in enumerate(word_offsets):
        if off == target_word:
            return i
    return None


HEX_LINE_RE = re.compile(r"^\s*0x([0-9A-Fa-f]+),\s*(?:/\*.*\*/)?\s*$")


def extract_throw_words(lines, start_idx):
    """Read 7 consecutive raw-hex lines starting at lines[start_idx].
    Returns the list of 7 ints, or None if any line isn't a raw hex
    literal (we don't want to retype macro lines)."""
    words = []
    for j in range(FTTHROWHITDESC_WORDS):
        if start_idx + j >= len(lines):
            return None
        m = HEX_LINE_RE.match(lines[start_idx + j])
        if not m:
            return None
        v = int(m.group(1), 16)
        # Re-cast any value with bit 31 set as signed.
        if v & 0x80000000:
            v = v - 0x100000000
        words.append(v)
    return words


def emit_throwhitdesc(sym_name, words):
    return (
        f"FTThrowHitDesc {sym_name} = {{\n"
        f"\t{words[0]}, {words[1]}, {words[2]}, {words[3]}, "
        f"{words[4]}, {words[5]}, {words[6]},\n"
        f"}};"
    )


def split_one_array(text, sym, target_word_off, base_byte_off):
    """Return (new_text, new_throw_sym) or (text, None) if split skipped."""
    parsed = parse_array_body(text, sym)
    if parsed is None:
        return text, None
    start, end, body = parsed
    lines, word_offsets = scan_words(body)
    target_line_idx = line_at_word_offset(lines, word_offsets, target_word_off)
    if target_line_idx is None:
        return text, None  # target offset doesn't align to a line boundary
    throw_words = extract_throw_words(lines, target_line_idx)
    if throw_words is None:
        return text, None  # not all 7 words are hex literals

    pre_lines = lines[:target_line_idx]
    post_lines = lines[target_line_idx + FTTHROWHITDESC_WORDS:]
    # Compute byte offsets for the new symbols.
    throw_byte_off = base_byte_off + target_word_off * 4
    new_throw_sym = f"{sym}_0x{throw_byte_off:04X}".replace(
        f"_0x{base_byte_off:04X}_0x", "_0x"  # avoid double offset suffix
    )
    # Cleaner: derive from the symbol root (strip trailing _0xNNNN if present)
    root = re.sub(r"_0x[0-9A-Fa-f]+$", "", sym)
    new_throw_sym = f"{root}_0x{throw_byte_off:04X}"

    # Build replacement
    pre_body = "\n".join(pre_lines).rstrip("\n")
    post_body = "\n".join(post_lines).rstrip("\n")

    parts = []
    parts.append(f"u32 {sym}[] = {{\n{pre_body}\n}};")
    parts.append("")
    parts.append(emit_throwhitdesc(new_throw_sym, throw_words))
    if post_body.strip():
        post_byte_off = throw_byte_off + FTTHROWHITDESC_WORDS * 4
        post_sym = f"{root}_0x{post_byte_off:04X}"
        parts.append("")
        parts.append(f"u32 {post_sym}[] = {{\n{post_body}\n}};")

    new_block = "\n".join(parts)
    new_text = text[:start] + new_block + text[end:]
    return new_text, new_throw_sym


def update_setthrow_refs(text, target_sym, target_word_off, new_throw_sym):
    """Rewrite `SetThrow(<target_sym> + N)` and `SetDamageThrown(<target_sym>
    + N)` to `(u32)&<new_throw_sym>`."""
    pattern = re.compile(
        r"(ftMotionCommand(?:SetThrow|SetDamageThrown)\(\s*)"
        r"(?:\(u32\))?\s*"
        rf"({re.escape(target_sym)})\s*\+\s*{target_word_off}\s*\)"
    )
    return pattern.sub(rf"\1(u32)&{new_throw_sym})", text)


def update_reloc_refs(reloc_text, target_sym, target_byte_off, new_throw_sym):
    """Rewrite `<target_sym>+0x<target_byte_off>` to `<new_throw_sym>`."""
    new_lines = []
    target = f"{target_sym}+0x{target_byte_off:X}"
    target_lower = f"{target_sym}+0x{target_byte_off:x}"
    for line in reloc_text.split("\n"):
        # Match either capitalisation of the hex offset
        if target in line or target_lower in line:
            line = line.replace(target, new_throw_sym).replace(target_lower, new_throw_sym)
        new_lines.append(line)
    return "\n".join(new_lines)


def get_array_byte_offset(sym):
    """Recover the array's base byte offset from its name's `_0xNNNN`
    suffix. Returns None if the name doesn't carry an offset."""
    m = re.search(r"_0x([0-9A-Fa-f]+)$", sym)
    return int(m.group(1), 16) if m else None


def process_file(fid):
    src_path = None
    name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            src_path = os.path.join(RELOC_DIR, fn)
            name = m.group(1)
            break
    if src_path is None:
        return 0

    text = open(src_path).read()
    targets = list(find_setthrow_targets(text))
    if not targets:
        print(f"  fid {fid} ({name}): no mid-array SetThrow targets")
        return 0

    # Sort by offset descending so that earlier splits don't shift later ones.
    targets.sort(key=lambda t: -t[1])

    reloc_path = src_path.replace(".c", ".reloc")
    jp_reloc_path = src_path.replace(".c", ".jp.reloc")
    reloc_text = open(reloc_path).read() if os.path.exists(reloc_path) else None
    jp_reloc_text = open(jp_reloc_path).read() if os.path.exists(jp_reloc_path) else None

    n_split = 0
    for sym, off in targets:
        base = get_array_byte_offset(sym)
        if base is None:
            continue
        new_text, new_sym = split_one_array(text, sym, off, base)
        if new_sym is None:
            continue
        new_text = update_setthrow_refs(new_text, sym, off, new_sym)
        text = new_text
        target_byte = off * 4
        if reloc_text is not None:
            reloc_text = update_reloc_refs(reloc_text, sym, target_byte, new_sym)
        if jp_reloc_text is not None:
            jp_reloc_text = update_reloc_refs(jp_reloc_text, sym, target_byte, new_sym)
        n_split += 1
        print(f"  fid {fid} ({name}): split {sym}+{off} -> {new_sym} (FTThrowHitDesc)")

    if n_split:
        with open(src_path, "w") as f:
            f.write(text)
        if reloc_text is not None:
            with open(reloc_path, "w") as f:
                f.write(reloc_text)
        if jp_reloc_text is not None:
            with open(jp_reloc_path, "w") as f:
                f.write(jp_reloc_text)
    return n_split


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="+", type=int)
    args = ap.parse_args()
    total = 0
    for fid in args.fids:
        total += process_file(fid)
    print(f"\nTotal: {total} FTThrowHitDesc splits")


if __name__ == "__main__":
    main()
