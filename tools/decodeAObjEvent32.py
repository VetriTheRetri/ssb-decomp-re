#!/usr/bin/env python3
"""
Walk a `u32 dXxx_AnimJoint[N]` (or MatAnimJoint / CamAnimJoint) array and
rewrite each command word as an `aobjEvent32*()` macro call from
src/sys/objdef.h. Payload words (f32 values that follow SetVal* commands
based on `popcount(flags)`) are left as raw hex.

Conservative: only commands whose stream-position is known unambiguously
are rewritten. The dispatch follows the runtime's logic in
src/sys/objanim.c — each opcode declares how many additional words it
consumes from the stream.

Run as:
    tools/decodeAObjEvent32.py <file_id>     # rewrite one file
    tools/decodeAObjEvent32.py --all         # every file with anim arrays
"""

import argparse
import os
import re
import struct

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")

# Opcode -> (macro_template, payload_words_consumed_after_command)
# payload_words_consumed function takes (flags, payload) -> int
def popcount(x):
    n = 0
    while x:
        n += x & 1
        x >>= 1
    return n


# Layout: opcode at bits 25..31, flags at bits 15..24, payload at bits 0..14
OPCODES = {
    0x00: ("aobjEvent32End()", lambda f, p: 0),
    0x01: ("aobjEvent32Jump", lambda f, p: 1),  # Jump consumes one address word after
    0x02: ("aobjEvent32Wait", lambda f, p: 0),
    0x03: ("aobjEvent32SetValBlock", lambda f, p: popcount(f)),
    0x04: ("aobjEvent32SetVal", lambda f, p: popcount(f)),
    0x05: ("aobjEvent32SetValRateBlock", lambda f, p: 2 * popcount(f)),
    0x06: ("aobjEvent32SetValRate", lambda f, p: 2 * popcount(f)),
    0x07: ("aobjEvent32SetTargetRate", lambda f, p: popcount(f)),
    0x08: ("aobjEvent32SetVal0RateBlock", lambda f, p: 2 * popcount(f)),
    0x09: ("aobjEvent32SetVal0Rate", lambda f, p: 2 * popcount(f)),
    0x0A: ("aobjEvent32SetValAfterBlock", lambda f, p: popcount(f)),
    0x0B: ("aobjEvent32SetValAfter", lambda f, p: popcount(f)),
    0x0D: ("aobjEvent32SetInterp", lambda f, p: 0),
    0x0E: ("aobjEvent32SetAnim", lambda f, p: 0),
    0x0F: ("aobjEvent32SetFlags", lambda f, p: 0),
    0x12: ("aobjEvent32SetExtValAfterBlock", lambda f, p: popcount(f)),
    0x13: ("aobjEvent32SetExtValAfter", lambda f, p: popcount(f)),
    0x14: ("aobjEvent32SetExtValBlock", lambda f, p: popcount(f)),
    0x15: ("aobjEvent32SetExtVal", lambda f, p: popcount(f)),
}


def decode_word(word):
    opcode = (word >> 25) & 0x7F
    flags = (word >> 15) & 0x3FF
    payload = word & 0x7FFF
    return opcode, flags, payload


def format_call(macro, opcode, flags, payload):
    """Render the macro call with appropriate args."""
    if "()" in macro:
        return macro
    name = macro
    # SetVal* family takes (flags_mask, payload)
    set_val_set = {
        "aobjEvent32SetVal", "aobjEvent32SetValBlock",
        "aobjEvent32SetValRate", "aobjEvent32SetValRateBlock",
        "aobjEvent32SetVal0Rate", "aobjEvent32SetVal0RateBlock",
        "aobjEvent32SetValAfter", "aobjEvent32SetValAfterBlock",
        "aobjEvent32SetTargetRate",
        "aobjEvent32SetExtVal", "aobjEvent32SetExtValBlock",
        "aobjEvent32SetExtValAfter", "aobjEvent32SetExtValAfterBlock",
    }
    if name in set_val_set:
        return f"{name}(0x{flags:03X}, {payload})"
    if name == "aobjEvent32SetInterp":
        return f"{name}({payload}, 0x{flags:03X})"
    if name == "aobjEvent32SetAnim":
        return f"{name}(0x{flags:03X}, {payload})"
    if name == "aobjEvent32SetFlags":
        return f"{name}(0x{flags:03X}, {payload})"
    if name == "aobjEvent32Jump":
        return f"{name}"  # caller appends address
    if name == "aobjEvent32Wait":
        return f"{name}({payload})"
    return name


def decode_stream(words):
    """Walk the stream, return list of (output_str, is_command, original_word).
    Commands get the macro call; payloads get raw hex.
    Returns None if decode fails (e.g. unrecognized opcode mid-stream)."""
    out = []
    i = 0
    n = len(words)
    while i < n:
        word = words[i]
        opcode, flags, payload = decode_word(word)
        if opcode not in OPCODES:
            return None
        macro, payload_fn = OPCODES[opcode]
        nfollow = payload_fn(flags, payload)
        if i + nfollow >= n:
            return None  # would read past end
        if opcode == 0x01:  # Jump
            out.append((f"aobjEvent32Jump(0x{words[i+1]:08X})", True, word))
            i += 2
            continue
        out.append((format_call(macro, opcode, flags, payload), True, word))
        i += 1
        for j in range(nfollow):
            out.append((f"0x{words[i]:08X}", False, words[i]))
            i += 1
    return out


def process_array(text, sym, words):
    """Try to decode this array and return new init body if successful."""
    decoded = decode_stream(words)
    if decoded is None:
        return None
    lines = []
    for s, is_cmd, _ in decoded:
        prefix = "" if is_cmd else "    "
        lines.append(f"\t{prefix}{s},")
    return "\n".join(lines) + "\n"


def process_file(file_id, dry=False):
    c_path = None
    target_name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{file_id}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            target_name = m.group(1)
            break
    if c_path is None:
        return False

    with open(c_path) as f:
        text = f.read()

    pat = re.compile(
        r"u32 (d\w+?_(?:AnimJoint|MatAnimJoint|CamAnimJoint)(?:_\w+)?)\[(\d+)\] = \{\n"
        r"(\t#include <[^>]+>\n)\};",
        re.MULTILINE,
    )
    changes = 0
    new_text = text

    for m in pat.finditer(text):
        sym = m.group(1)
        n = int(m.group(2))
        inc_line = m.group(3)
        # Read the .inc.c file for the words
        inc_match = re.search(r"<([^>]+)>", inc_line)
        if not inc_match:
            continue
        inc_path = os.path.join(PROJECT_DIR, "build", "src", "relocData", inc_match.group(1))
        if not os.path.exists(inc_path):
            continue
        with open(inc_path) as f:
            inc_text = f.read()
        # Parse out the u32 hex values
        words = []
        for hm in re.finditer(r"0x([0-9A-Fa-f]+)", inc_text):
            words.append(int(hm.group(1), 16))
        if len(words) != n:
            continue
        decoded_body = process_array(text, sym, words)
        if decoded_body is None:
            continue
        # Replace the include line with decoded macro calls
        old_block = m.group(0)
        new_block = f"u32 {sym}[{n}] = {{\n{decoded_body}}};"
        new_text = new_text.replace(old_block, new_block, 1)
        changes += 1

    if changes == 0 or new_text == text:
        return False
    if dry:
        print(f"fid {file_id}: would rewrite {changes} arrays")
        return True
    # Need <sys/objdef.h> include for the macros
    if "objdef.h" not in new_text:
        new_text = new_text.replace(
            '#include "relocdata_types.h"',
            '#include "relocdata_types.h"\n#include <sys/objdef.h>  // aobjEvent32* macros',
            1,
        )
    with open(c_path, "w") as f:
        f.write(new_text)
    print(f"fid {file_id} ({target_name}): rewrote {changes} anim arrays as macro calls")
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--dry", action="store_true")
    args = ap.parse_args()
    if args.all:
        targets = sorted({
            int(re.match(r"^(\d+)_", fn).group(1))
            for fn in os.listdir(RELOC_DIR)
            if fn.endswith(".c") and not fn.endswith(".jp.c")
            and re.match(r"^\d+_", fn)
        })
    else:
        targets = args.file_ids
    total = 0
    for fid in targets:
        if process_file(fid, dry=args.dry):
            total += 1
    print(f"{total} files updated")


if __name__ == "__main__":
    main()
