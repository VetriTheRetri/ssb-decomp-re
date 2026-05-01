#!/usr/bin/env python3
"""
Retype `u8 dXxx_<Kind>[N]` blocks as `u32 dXxx_<Kind>[N/4]` when the
block name suggests it holds 4-byte-aligned animation commands.

Target kinds: AnimJoint, MatAnimJoint, AttackEvents, KeyEvent

N must be 4-aligned. Regenerates the per-block .inc.c as hex u32 values.
"""

import argparse
import os
import re
import struct

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
BUILD_DIR = os.path.join(PROJECT_DIR, "build", "us", "src", "relocData")
ASSETS_DIR = os.path.join(PROJECT_DIR, "assets", "us", "relocData")

TARGET_KINDS = ("AnimJoint", "MatAnimJoint", "AttackEvents", "KeyEvent")


def format_u32(data):
    lines, words = [], []
    for i in range(0, len(data), 4):
        chunk = data[i:i+4]
        if len(chunk) < 4:
            chunk = chunk + b"\x00" * (4 - len(chunk))
        words.append(f"0x{struct.unpack('>I', chunk)[0]:08X},")
    for i in range(0, len(words), 6):
        lines.append("\t" + " ".join(words[i:i+6]))
    return "\n".join(lines) + "\n"


def find_block_offset(text, sym):
    """Infer the file byte offset of a block symbol from preceding comments.
    Returns None if no offset comment is found."""
    # Look for a comment like `/* Raw data from file offset 0xNNNN */` or
    # `/* ... @ 0xNNNN ... */` within ~3 lines before the decl.
    idx = text.find(f" {sym}[")
    if idx < 0:
        idx = text.find(f" {sym} =")
    if idx < 0:
        return None
    prefix = text[max(0, idx - 400):idx]
    m_list = list(re.finditer(r"(?:file offset|@)\s+0x([0-9A-Fa-f]+)", prefix))
    if not m_list:
        return None
    return int(m_list[-1].group(1), 16)


def process_file(fid):
    c_path = None
    name = None
    for fn in os.listdir(RELOC_DIR):
        m = re.match(rf"^{fid}_(\w+)\.c$", fn)
        if m:
            c_path = os.path.join(RELOC_DIR, fn)
            name = m.group(1)
            break
    if c_path is None:
        return 0
    dp_candidates = [os.path.join(ASSETS_DIR, f"{fid}.vpk0.bin"),
                     os.path.join(ASSETS_DIR, f"{fid}.bin")]
    dp = next((p for p in dp_candidates if os.path.exists(p)), None)
    if dp is None:
        return 0
    with open(dp, "rb") as f:
        data = f.read()
    with open(c_path) as f:
        text = f.read()
    original = text
    out_dir = os.path.join(BUILD_DIR, name)
    os.makedirs(out_dir, exist_ok=True)

    kind_alt = "|".join(TARGET_KINDS)
    # Match: u8 d{name}_...{kind}[N] = { \n\t#include <.../X.data.inc.c>\n};
    pat = re.compile(
        rf"u8 (d\w+_(?:{kind_alt}))\[(\d+)\] = \{{\n\t#include <({name}/[^>]+?)\.data\.inc\.c>\n\}};",
        re.MULTILINE,
    )
    changes = 0

    def replace(m):
        nonlocal changes
        sym = m.group(1)
        size = int(m.group(2))
        inc_path = m.group(3)
        if size % 4 != 0:
            return m.group(0)
        off = find_block_offset(text, sym)
        if off is None:
            return m.group(0)
        # Regenerate inc.c as u32
        inc_file = os.path.join(BUILD_DIR, inc_path + ".data.inc.c")
        if not os.path.exists(inc_file):
            return m.group(0)
        with open(inc_file, "w") as f:
            f.write(format_u32(data[off:off+size]))
        changes += 1
        return (f"u32 {sym}[{size // 4}] = {{\n"
                f"\t#include <{inc_path}.data.inc.c>\n"
                f"}};")

    new_text = pat.sub(replace, text)
    if new_text == original:
        return 0
    with open(c_path, "w") as f:
        f.write(new_text)
    return changes


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file_ids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true")
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
        n = process_file(fid)
        if n:
            total += n
            print(f"fid {fid}: retyped {n} block(s)")
    print(f"total: {total} blocks retyped")


if __name__ == "__main__":
    main()
