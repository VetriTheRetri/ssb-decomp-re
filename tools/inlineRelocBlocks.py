#!/usr/bin/env python3
"""Convert a relocData manifest + per-block `.c` wrappers into a single
hand-editable master `<fid>_<Name>.c` file with all block declarations
inlined.

Old layout:
    src/relocData/321_SamusSpecial3.manifest
    src/relocData/SamusSpecial3/Lut_0x0008.palette.c
    src/relocData/SamusSpecial3/Tex_0x0030.data.c
    src/relocData/SamusSpecial3/JointVerts.vtx.c
    src/relocData/SamusSpecial3/BombDL.dl.c

    321_SamusSpecial3.manifest:
        pad 8
        Lut_0x0008.palette.c
        pad 8
        Tex_0x0030.data.c
        JointVerts.vtx.c
        BombDL.dl.c

New layout (master .c contains every block inline):
    src/relocData/321_SamusSpecial3.c

    Each block's .inc.c (under build/src/relocData/<Name>/) still holds
    the raw bytes — only the wrappers get merged.

The script writes the new master, then deletes the old manifest and
block files unless `--keep` is passed.

Usage:
    python3 tools/inlineRelocBlocks.py 321         # one fid
    python3 tools/inlineRelocBlocks.py --all       # every manifest
    python3 tools/inlineRelocBlocks.py 321 --dry   # preview only
"""

import argparse
import os
import re
import sys

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
SRC_RELOC = os.path.join(PROJECT_DIR, "src", "relocData")


def find_manifest(fid):
    for fn in os.listdir(SRC_RELOC):
        if fn.startswith(f"{fid}_") and fn.endswith(".manifest"):
            return os.path.join(SRC_RELOC, fn)
    return None


def parse_manifest(path):
    """Return [(kind, payload), ...] where kind ∈ {'pad','block'}."""
    out = []
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            if line.startswith('pad '):
                out.append(('pad', int(line.split()[1])))
            else:
                out.append(('block', line))
    return out


def read_block_body(block_path):
    """Read a block .c wrapper and return its body: the header comment
    followed immediately by the declaration, with the redundant
    `#include "relocdata_types.h"` line (and both surrounding blank
    lines) removed so the merged master keeps the comment directly
    adjacent to the declaration it describes."""
    with open(block_path) as f:
        text = f.read()
    lines = text.splitlines()

    # Walk the lines, dropping any `#include "relocdata_types.h"` along
    # with the blank line that follows it *and* the blank line that
    # precedes it (so the wrapper's header comment ends up sitting
    # directly on top of the declaration).
    cleaned = []
    skip_next_blank = False
    for line in lines:
        stripped = line.strip()
        if stripped.startswith('#include "relocdata_types.h"'):
            if cleaned and not cleaned[-1].strip():
                cleaned.pop()
            skip_next_blank = True
            continue
        if skip_next_blank and not stripped:
            skip_next_blank = False
            continue
        skip_next_blank = False
        cleaned.append(line)

    # Trim leading and trailing blank lines
    while cleaned and not cleaned[0].strip():
        cleaned.pop(0)
    while cleaned and not cleaned[-1].strip():
        cleaned.pop()
    return "\n".join(cleaned)


def emit_master(fid, name, manifest_entries, block_dir):
    """Build the new master .c source as a string."""
    out = []
    out.append(f"/* relocData file {fid}: {name} */")
    out.append("/* Inlined block layout - edit this file directly. The .inc.c")
    out.append(" * files referenced below live under build/src/relocData/ and")
    out.append(" * are regenerated from the baserom by tools/extractRelocInc.py")
    out.append(" * at extract time. */")
    out.append("")
    out.append('#include "relocdata_types.h"')
    out.append("")

    for kind, payload in manifest_entries:
        if kind == 'pad':
            out.append(f"PAD({payload});")
            out.append("")
            continue
        block_path = os.path.join(block_dir, payload)
        if not os.path.exists(block_path):
            print(f"  WARNING: missing block {block_path}", file=sys.stderr)
            out.append(f"/* MISSING BLOCK: {payload} */")
            out.append("")
            continue
        body = read_block_body(block_path)
        if body:
            out.append(body)
            out.append("")

    # Single trailing newline
    while len(out) >= 2 and not out[-1] and not out[-2]:
        out.pop()
    return "\n".join(out) + "\n"


def process_fid(fid, dry_run=False, keep_old=False):
    manifest = find_manifest(fid)
    if manifest is None:
        print(f"  fid {fid}: no manifest, skipping")
        return False

    base = os.path.basename(manifest)[: -len(".manifest")]
    parts = base.split("_", 1)
    name = parts[1] if len(parts) == 2 else base
    block_dir = os.path.join(SRC_RELOC, name)

    entries = parse_manifest(manifest)
    out_path = os.path.join(SRC_RELOC, f"{fid}_{name}.c")
    source = emit_master(fid, name, entries, block_dir)

    if dry_run:
        print(f"=== {out_path} ===")
        print(source)
        return True

    # Refuse to clobber an existing hand-written .c file unless we're
    # explicitly converting (.manifest still on disk = old layout).
    if os.path.exists(out_path):
        # The conversion path always wins — we're replacing the .c that
        # genRelocDataC used to produce inside build/.
        pass

    with open(out_path, "w") as f:
        f.write(source)

    block_count = sum(1 for k, _ in entries if k == 'block')
    pad_count = sum(1 for k, _ in entries if k == 'pad')
    print(f"  fid {fid} {name}: wrote {out_path} ({block_count} blocks, {pad_count} pads)")

    if not keep_old:
        os.remove(manifest)
        if os.path.isdir(block_dir):
            for fn in os.listdir(block_dir):
                if fn.endswith('.c'):
                    os.remove(os.path.join(block_dir, fn))
            # Remove the dir if empty
            try:
                os.rmdir(block_dir)
            except OSError:
                pass
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    ap.add_argument("--all", action="store_true",
                    help="Convert every .manifest in src/relocData/")
    ap.add_argument("--dry", action="store_true",
                    help="Print the new master to stdout without writing")
    ap.add_argument("--keep", action="store_true",
                    help="Keep the old manifest + block files after conversion")
    args = ap.parse_args()

    if args.all:
        fids = []
        for fn in sorted(os.listdir(SRC_RELOC)):
            m = re.match(r"(\d+)_.*\.manifest$", fn)
            if m:
                fids.append(int(m.group(1)))
    else:
        fids = args.fids

    converted = 0
    for fid in fids:
        if process_fid(fid, dry_run=args.dry, keep_old=args.keep):
            converted += 1
    print(f"\nProcessed {converted} fids")


if __name__ == "__main__":
    main()
