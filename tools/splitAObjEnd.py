#!/usr/bin/env python3
"""
Split decoded `u32 X[N] = { … aobjEvent32End() … <more words> };` arrays
where the first `aobjEvent32End()` lands mid-array. The script proper
ends at that End()'s word position; the trailing words don't belong in
the script — split them off as `u8 <sym>_post[remaining_bytes]` so the
build extracts them as raw bytes again.

Same `aobjEvent32End()` shape that `decodeAObjEvent32` emits (raw text
form `aobjEvent32End(),`, no payload). EndRaw / End-with-payload aren't
the canonical end-of-script — those are bytes that happened to start
with opcode 0 but carry non-zero flags/payload, so we keep walking.

Idempotent — a u32 array with no mid-array `aobjEvent32End()` line is
left alone, as is one that already ends right after a single End().

Usage:
    tools/splitAObjEnd.py [<file.c> …]   # default: every relocData/*.c
"""

import argparse
import os
import re

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")


# Tokens that contribute exactly 1 u32 word to the array body.
# Macro invocations (1 word per command head) and raw `0xNN…,` literals
# (payload words / pointer payloads / unrecognised opcode raw fallbacks).
_WORD_LINE = re.compile(
    r"^\s*(?:"
    r"aobjEvent32\w+\([^)]*\),"             # any aobjEvent32 macro
    r"|\(u32\)[^,]+,"                       # `(u32)<expr>,` chain pointer
    r"|0x[0-9A-Fa-f]+,"                     # raw hex word
    r"|0x[0-9A-Fa-f]+,\s*/\*[^*]*\*/"       # hex with /* …f */ comment
    r")\s*(?:/\*[^*]*\*/)?\s*$"
)
_END_LINE = re.compile(r"^\s*aobjEvent32End\(\)\s*,\s*(?:/\*[^*]*\*/)?\s*$")


def split_array_body(body_lines, declared_n):
    """Walk body lines counting u32 words per line. Find the first
    `aobjEvent32End(),` whose word position k is < declared_n.

    Returns (script_word_count, script_lines, post_word_count) or None
    if no mid-array End is found / counts don't reconcile."""
    script_words = 0
    script_lines = []
    end_idx = None
    for i, ln in enumerate(body_lines):
        if not ln.strip():
            script_lines.append(ln)
            continue
        if _END_LINE.match(ln):
            script_words += 1
            script_lines.append(ln)
            end_idx = i
            break
        if _WORD_LINE.match(ln):
            script_words += 1
            script_lines.append(ln)
            continue
        # Unknown line shape — abort safely
        return None
    if end_idx is None:
        return None  # no End() found
    # Count remaining words (only `_WORD_LINE` matches, no End re-checks)
    post_words = 0
    for ln in body_lines[end_idx + 1:]:
        if not ln.strip():
            continue
        if _WORD_LINE.match(ln) or _END_LINE.match(ln):
            post_words += 1
        else:
            return None
    if script_words + post_words != declared_n:
        return None  # counted words don't match declared array size
    if post_words == 0:
        return None  # no tail to split off
    return script_words, script_lines, post_words


def short_sym(sym, target_name):
    """Strip the `d<TargetName>_` prefix to derive the inc.c basename."""
    prefix = f"d{target_name}_"
    if sym.startswith(prefix):
        return sym[len(prefix):]
    return sym


def reloc_tail_refs(reloc_path, sym, script_word_count):
    """Return True if `<sym>.reloc` has any intern entry with a ptr or
    target byte offset within `sym` that falls AT OR BEYOND the script's
    word boundary. Such refs mean the tail bytes are themselves script
    entry points (multiple sub-scripts in one array) and must NOT be
    split off as raw u8."""
    if not os.path.exists(reloc_path):
        return False
    boundary = script_word_count * 4
    pat = re.compile(rf"\b{re.escape(sym)}(?:\+0x([0-9A-Fa-f]+))?\b")
    with open(reloc_path) as f:
        for ln in f:
            s = ln.strip()
            if not s or s.startswith("#"):
                continue
            for m in pat.finditer(s):
                off = int(m.group(1), 16) if m.group(1) else 0
                if off >= boundary:
                    return True
    return False


def split_in_text(text, target_name, reloc_path):
    """Find every `u32 <sym>[N] = { <inline macros> };` block, check for
    mid-array End, split if needed (and only if no .reloc entry points
    into the tail region — otherwise the tail is more sub-scripts)."""
    pat = re.compile(
        r"^u32\s+(d\w+)\[(\d+|0x[0-9A-Fa-f]+)\]\s*=\s*\{\n"
        r"(?P<body>(?:.*\n)*?)"
        r"\};",
        re.MULTILINE,
    )
    out = []
    pos = 0
    n_split = 0
    for m in pat.finditer(text):
        out.append(text[pos:m.start()])
        sym = m.group(1)
        n_str = m.group(2)
        n = int(n_str, 16) if n_str.startswith("0x") else int(n_str)
        body_lines = m.group("body").split("\n")
        if body_lines and body_lines[-1] == "":
            body_lines = body_lines[:-1]

        if "aobjEvent32End()" not in m.group("body"):
            out.append(m.group(0))
            pos = m.end()
            continue

        result = split_array_body(body_lines, n)
        if result is None:
            out.append(m.group(0))
            pos = m.end()
            continue
        sw, sl, pw = result
        if reloc_tail_refs(reloc_path, sym, sw):
            print(f"    {sym}: skipped — .reloc references tail (post region holds more sub-scripts)")
            out.append(m.group(0))
            pos = m.end()
            continue
        post_bytes = pw * 4
        post_short = short_sym(sym, target_name) + "_post"
        post_sym = sym + "_post"
        new_block = (
            f"u32 {sym}[{sw}] = {{\n"
            + "\n".join(sl)
            + "\n};\n\n"
            f"u8 {post_sym}[{post_bytes}] = {{\n"
            f"\t#include <{target_name}/{post_short}.data.inc.c>\n"
            f"}};"
        )
        out.append(new_block)
        pos = m.end()
        n_split += 1
        print(f"    {sym}: split at word {sw} ({n} -> {sw} + post[{post_bytes}])")
    out.append(text[pos:])
    return "".join(out), n_split


def process(c_path):
    fn = os.path.basename(c_path)
    m = re.match(r"^\d+_(\w+)\.c$", fn)
    if not m:
        return 0
    target_name = m.group(1)
    reloc_path = c_path.replace(".c", ".reloc")
    text = open(c_path).read()
    new_text, n = split_in_text(text, target_name, reloc_path)
    if n:
        open(c_path, "w").write(new_text)
        print(f"  {fn}: split {n} array(s)")
    return n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="*")
    args = ap.parse_args()
    if args.files:
        files = args.files
    else:
        files = sorted(
            os.path.join(RELOC_DIR, f)
            for f in os.listdir(RELOC_DIR)
            if re.match(r"^\d+_\w+\.c$", f)
        )
    total = 0
    for p in files:
        total += process(p)
    print(f"\nTotal: {total} arrays split")


if __name__ == "__main__":
    main()
