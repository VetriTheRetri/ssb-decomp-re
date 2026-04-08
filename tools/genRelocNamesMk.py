#!/usr/bin/python3
"""Generate a Make-readable id->name map from relocFileDescriptions.<ver>.txt.

Usage: genRelocNamesMk.py <relocFileDescriptions.txt>

Emits lines of the form:
    RELOC_NAME_<id> := <Name>

These are intended to be included by the main Makefile so it can resolve a
file id to its symbolic name without having to re-glob description files at
each rule expansion.
"""
import re
import sys


def main():
    if len(sys.argv) != 2:
        print("Usage: genRelocNamesMk.py <relocFileDescriptions.txt>", file=sys.stderr)
        sys.exit(1)
    with open(sys.argv[1]) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)', line)
            if m:
                print(f"RELOC_NAME_{int(m.group(1))} := {m.group(2)}")


if __name__ == "__main__":
    main()
