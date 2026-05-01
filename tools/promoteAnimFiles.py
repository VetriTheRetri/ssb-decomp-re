#!/usr/bin/python3
"""Promote fighter animation files from binary blobs to editable C source.

Walks the US descriptions file for every name matching FT<Char>Anim<Action>,
reads the corresponding assets/relocData/<us_id>.bin, and emits

    src/relocData/<us_id>_FT<Char>Anim<Action>.c

containing a single u32 array with the raw file bytes as big-endian hex
literals. IDO 7.1 compiles these to a .data section that objcopy extracts
back to the identical .bin at build time.

These files have no external pointers and use the relocation chain region
in-band (the "internal reloc chain" IS the anim-joint table), so there's
nothing to fix up at build time — the file is pure data.

Usage:
    python3 tools/promoteAnimFiles.py <Char>            # one character
    python3 tools/promoteAnimFiles.py --all             # all characters
    python3 tools/promoteAnimFiles.py <Char> --verify   # round-trip check only

The generator is idempotent: re-running rewrites files from current .bin
content. It never writes a .reloc file (not needed for pure byte blobs).
"""

import argparse
import os
import re
import subprocess
import sys
import tempfile

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)

US_DESC = os.path.join(PROJECT_DIR, "tools/relocFileDescriptions.us.txt")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets/us/relocData")
OUT_DIR = os.path.join(PROJECT_DIR, "src/relocData")

# File id ranges per character (derived from relocFileDescriptions.us.txt).
# These aren't used by the generator itself — it goes by names — but listed
# here so the --char argument has something to select on.
CHARACTERS = [
    "Mario", "Fox", "Donkey", "Samus", "Luigi", "Link", "Kirby",
    "Purin", "Captain", "Ness", "Yoshi", "Pikachu",
    "MMario", "Boss",
]


def parse_us_names():
    """Yield (us_id, name) for every named file in the US descriptions."""
    with open(US_DESC) as f:
        for line in f:
            m = re.match(r'^-(\d+):\s+(\S+)\s*$', line)
            if m:
                yield int(m.group(1)), m.group(2)


def anim_files_for_char(char):
    """Return sorted list of (us_id, name) for all FT<char>Anim* files."""
    prefix = f"FT{char}Anim"
    out = []
    for fid, name in parse_us_names():
        if name.startswith(prefix):
            out.append((fid, name))
    return sorted(out)


def all_anim_files():
    out = []
    for fid, name in parse_us_names():
        if re.match(r'^FT[A-Z][A-Za-z]*Anim', name):
            out.append((fid, name))
    return sorted(out)


def emit_c_file(us_id, name, bin_path, out_path):
    """Write a single-array .c file containing the raw bytes of bin_path."""
    with open(bin_path, 'rb') as f:
        data = f.read()

    if len(data) % 4 != 0:
        raise ValueError(f"{bin_path} size {len(data)} is not word-aligned")

    words = []
    for i in range(0, len(data), 4):
        words.append(int.from_bytes(data[i:i+4], 'big'))

    lines = []
    lines.append(f"/* Auto-generated from assets/relocData/{us_id}.bin by tools/promoteAnimFiles.py */")
    lines.append(f"/* File ID (US): {us_id} ({name}) */")
    lines.append(f"/* File size: {len(data)} bytes (0x{len(data):X}) */")
    lines.append("")
    lines.append('#include "relocdata_types.h"')
    lines.append("")
    lines.append(f"u32 d{name}[] = {{")
    # 8 words per line
    for i in range(0, len(words), 8):
        chunk = words[i:i+8]
        joined = ", ".join(f"0x{w:08X}" for w in chunk)
        lines.append(f"\t{joined},")
    lines.append("};")
    lines.append("")

    with open(out_path, 'w') as f:
        f.write("\n".join(lines))


def verify_roundtrip(c_path, bin_path):
    """Compile c_path with IDO 7.1, extract .data, compare to bin_path.
    Returns True on match, raises on failure."""
    ido = os.path.join(PROJECT_DIR, "tools/ido-recomp/7.1/cc")
    objcopy = "mips-linux-gnu-objcopy"

    with tempfile.TemporaryDirectory() as tmp:
        obj = os.path.join(tmp, "t.o")
        out_bin = os.path.join(tmp, "t.bin")
        # Match the flags the Makefile uses to compile relocData sources:
        # CCFLAGS := -c -G 0 -non_shared -Xfullwarn -Xcpluscomm ... -O2 -mips2
        cmd = [
            ido, "-c", "-G", "0", "-non_shared",
            "-Xfullwarn", "-Xcpluscomm",
            "-O2", "-mips2",
            f"-I{os.path.join(PROJECT_DIR, 'src/relocData')}",
            f"-I{os.path.join(PROJECT_DIR, 'src')}",
            f"-I{os.path.join(PROJECT_DIR, 'include')}",
            "-o", obj, c_path,
        ]
        r = subprocess.run(cmd, capture_output=True, text=True)
        if r.returncode != 0:
            print(r.stdout)
            print(r.stderr, file=sys.stderr)
            raise RuntimeError(f"IDO compile failed for {c_path}")

        r = subprocess.run(
            [objcopy, "-O", "binary", "--only-section=.data", obj, out_bin],
            capture_output=True, text=True)
        if r.returncode != 0:
            raise RuntimeError(f"objcopy failed for {obj}: {r.stderr}")

        with open(out_bin, 'rb') as a, open(bin_path, 'rb') as b:
            if a.read() != b.read():
                return False
    return True


def promote_files(files, verify=False):
    """Promote each (us_id, name) tuple in `files`. Returns (ok, failed)."""
    ok, failed = 0, 0
    for us_id, name in files:
        bin_path = os.path.join(ASSET_DIR, f"{us_id}.bin")
        if not os.path.exists(bin_path):
            print(f"  SKIP {us_id} {name}: no {bin_path}", file=sys.stderr)
            failed += 1
            continue

        out_path = os.path.join(OUT_DIR, f"{us_id}_{name}.c")
        emit_c_file(us_id, name, bin_path, out_path)

        if verify:
            try:
                if verify_roundtrip(out_path, bin_path):
                    ok += 1
                else:
                    print(f"  FAIL {us_id} {name}: roundtrip mismatch", file=sys.stderr)
                    failed += 1
            except Exception as e:
                print(f"  FAIL {us_id} {name}: {e}", file=sys.stderr)
                failed += 1
        else:
            ok += 1

    return ok, failed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("char", nargs="?", help="Character to promote (e.g. Mario). "
                    "Mutually exclusive with --all.")
    ap.add_argument("--all", action="store_true",
                    help="Promote every FT*Anim* file.")
    ap.add_argument("--verify", action="store_true",
                    help="After writing each .c, compile with IDO and verify "
                    "the extracted .data matches the original .bin.")
    ap.add_argument("--list", action="store_true",
                    help="List files that would be promoted, don't write.")
    args = ap.parse_args()

    if args.all:
        files = all_anim_files()
    elif args.char:
        files = anim_files_for_char(args.char)
        if not files:
            print(f"no FT{args.char}Anim* files found in US descriptions",
                  file=sys.stderr)
            return 2
    else:
        ap.print_help()
        return 2

    print(f"{len(files)} files to promote")
    if args.list:
        for fid, name in files:
            print(f"  {fid:5d}  {name}")
        return 0

    ok, failed = promote_files(files, verify=args.verify)
    print(f"wrote {ok}, failed {failed}")
    return 0 if failed == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
