#!/usr/bin/env python3
"""
Regenerate the FTAttributes struct in JP version-specific Fighter Main
override files (.jp.c) using raw pointer values read from the JP binary.

The Makefile's VC override path skips fixRelocChain.py for *.jp.c files
(see Makefile line 659), so the FTAttributes pointer slots must already
contain the chain-encoded bytes at compile time. We accomplish this by
emitting each pointer field as `(type)0xXXXXXXXX` from the raw binary
instead of NULL.

Reads JP binaries via the US->JP id mapping below; the existing pre-attr
and pad blocks in each file are preserved (they were already correct).
"""

import os
import re
import sys
import struct

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.join(SCRIPT_DIR, "..")
sys.path.insert(0, SCRIPT_DIR)

from typeFTAttributes import (
    FTATTR_SIZE,
    parse_ftattributes,
    generate_attr_block,
)

# (US file id, Name, JP file id, o_attributes)
JP_FIGHTERS = [
    (203, "MarioMain",   178, 0x0428),
    (217, "SamusMain",   192, 0x0610),
    (225, "LinkMain",    200, 0x0708),
    (229, "KirbyMain",   204, 0x0808),
    (239, "NessMain",    214, 0x05BC),
    (243, "PikachuMain", 218, 0x041C),
    (247, "YoshiMain",   222, 0x047C),
]


def read_jp_bin(jp_id):
    candidates = [
        f"/tmp/jp_relocdata/{jp_id}.vpk0.bin",
        os.path.join(PROJECT_DIR, "assets", "jp", "relocData", f"{jp_id}.vpk0.bin"),
    ]
    for path in candidates:
        if os.path.isfile(path):
            with open(path, "rb") as f:
                return f.read()
    raise FileNotFoundError(
        f"JP binary for id {jp_id} not found in any of: {candidates}")


def replace_attr_block(c_text, name, new_attr_block):
    """Replace the existing `FTAttributes d{name}_attr = { ... };` block."""
    pattern = re.compile(
        r"FTAttributes\s+d" + re.escape(name) + r"_attr\s*=\s*\{.*?^\};",
        re.DOTALL | re.MULTILINE,
    )
    if not pattern.search(c_text):
        raise ValueError(f"Could not find FTAttributes block for {name}")
    return pattern.sub(new_attr_block, c_text, count=1)


def process(us_id, name, jp_id, o_attributes):
    print(f"Processing {us_id}_{name}.jp.c (JP id {jp_id}, attr at 0x{o_attributes:04X})")

    data = read_jp_bin(jp_id)
    if o_attributes + FTATTR_SIZE > len(data):
        print(f"  ERROR: FTAttributes extends past file end "
              f"(file size 0x{len(data):X})")
        return False

    attr_fields = parse_ftattributes(data, o_attributes, raw_ptrs=True)
    attr_block = generate_attr_block(name, attr_fields)

    c_path = os.path.join(PROJECT_DIR, "src", "relocData",
                          f"{us_id}_{name}.jp.c")
    with open(c_path) as f:
        c_text = f.read()

    new_text = replace_attr_block(c_text, name, attr_block)
    with open(c_path, "w") as f:
        f.write(new_text)

    print(f"  Wrote {c_path}")
    return True


def main():
    targets = JP_FIGHTERS
    if len(sys.argv) > 1:
        wanted = {int(a) for a in sys.argv[1:]}
        targets = [t for t in JP_FIGHTERS if t[0] in wanted]
        if not targets:
            print("No matching fighters")
            return 1

    for us_id, name, jp_id, o_attr in targets:
        if not process(us_id, name, jp_id, o_attr):
            return 1
    print("Done!")
    return 0


if __name__ == "__main__":
    sys.exit(main())
