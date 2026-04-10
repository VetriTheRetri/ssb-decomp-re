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
    # JP descriptions use placeholder names of the form `_NNN_` for files
    # that don't have a real name on either version. These are not real
    # symbol names — they exist solely to make the cross-version `ll_NNN_FileID`
    # alias resolve to the right file id. Don't export them as RELOC_NAMES,
    # otherwise the per-file build rule will look for `*__NNN_.c` (which
    # never exists) instead of falling back to the literal-id `<id>.c`.
    with open(sys.argv[1]) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)', line)
            if m:
                name = m.group(2)
                if re.match(r'^_\d+_$', name):
                    continue
                print(f"RELOC_NAME_{int(m.group(1))} := {name}")


if __name__ == "__main__":
    main()
