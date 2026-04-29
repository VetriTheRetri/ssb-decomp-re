#!/usr/bin/env python3
"""Trivial helper: read a binary file, emit its bytes as a comma-separated
hex initializer suitable for `#include` from a `u8` array initializer.
Used by the audio-sequence and particle-texture build pipelines."""
import argparse
import os
import sys


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input")
    ap.add_argument("-o", "--output", required=True)
    ap.add_argument("--per-row", type=int, default=16)
    args = ap.parse_args()
    data = open(args.input, "rb").read()
    os.makedirs(os.path.dirname(args.output) or ".", exist_ok=True)
    with open(args.output, "w") as f:
        for i in range(0, len(data), args.per_row):
            row = data[i : i + args.per_row]
            f.write(", ".join(f"0x{b:02X}" for b in row) + ",\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
