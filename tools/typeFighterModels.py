#!/usr/bin/env python3
"""
Type fighter model relocData files by scanning for DObjDesc arrays and
letting genRelocDataC auto-discover the DL + Vtx chain they reference.

Each fighter model file is a flat u32 blob containing:

  - Vertex data (16-byte Vtx entries)
  - Display lists (Gfx arrays, terminated by gsSPEndDisplayList)
  - MObjSub material structs (120 bytes each)
  - DObjDesc joint descriptor arrays (44 bytes/entry, ends at id == -1)
  - Optional MatAnimJoint / AnimJoint script data
  - Two small Sprite structs at the end (Stock + FTEmblem stock icons)

We scan for the main DObjDesc array by looking for a sequence of reasonable
DObjDesc entries (id in [-1..1024], floats finite, scale=(1,1,1) on the
first entry) followed by an id == -1 terminator. Adding even one DObjDesc
entry to the file's description section is enough for genRelocDataC's
Phase 2 pass to walk the .dl pointer chain and discover the display
lists and vertex pools that back them.

Fighter models don't share vertex pools the way stage files do (each
joint has its own private Vtx range), so Phase 2 discovery produces a
valid non-overlapping block layout and we can leave auto-discovery
enabled.
"""

import argparse
import math
import os
import re
import struct
import subprocess
import sys

PROJECT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RELOC_DIR = os.path.join(PROJECT_DIR, "src", "relocData")
ASSET_DIR = os.path.join(PROJECT_DIR, "assets", "relocData")
DESC_PATH = os.path.join(PROJECT_DIR, "tools", "relocFileDescriptions.us.txt")

DOBJDESC_SIZE = 44  # bytes


def read_bin(fid):
    for ext in (".vpk0.bin", ".bin"):
        p = os.path.join(ASSET_DIR, f"{fid}{ext}")
        if os.path.exists(p):
            with open(p, "rb") as f:
                return f.read()
    return None


def parse_dobjdesc(data, off):
    if off + DOBJDESC_SIZE > len(data):
        return None
    f = struct.unpack(">i I 3f 3f 3f", data[off:off + DOBJDESC_SIZE])
    return {
        "id": f[0],
        "dl": f[1],
        "translate": f[2:5],
        "rotate": f[5:8],
        "scale": f[8:11],
    }


def is_plausible_dobjdesc(d, allow_terminator=False):
    if d is None:
        return False
    if d["id"] == -1:
        return allow_terminator
    if d["id"] < 0 or d["id"] > 1024:
        return False
    for vec in (d["translate"], d["rotate"], d["scale"]):
        for v in vec:
            if math.isinf(v) or math.isnan(v) or abs(v) > 1e6:
                return False
    return True


def find_dobjdesc_arrays(data):
    """Scan the binary for arrays of DObjDesc entries.

    A fighter model's main joint tree is a single DObjDesc array whose:
      - first entry has id == 0 and scale == (1,1,1) — the array's root
      - subsequent entries have plausible floats and scale == (1,1,1)
        or (0,0,0); child joints use the scale=(1,1,1) form and leaf
        terminators use scale=(0,0,0)
      - the array terminates on either an id == -1 entry OR a
        scale == (0,0,0) leaf entry

    We scan every 4-byte offset, try to extend a plausible sequence,
    and keep the longest non-overlapping matches. Returns a list of
    (offset, count) tuples sorted by offset.
    """
    candidates = []  # (start_off, count_incl_terminator)
    i = 0
    while i + DOBJDESC_SIZE * 2 <= len(data):
        first = parse_dobjdesc(data, i)
        if (first and is_plausible_dobjdesc(first)
                and first["id"] == 0
                and first["scale"] == (1.0, 1.0, 1.0)):
            count = 1
            pos = i + DOBJDESC_SIZE
            terminated = False
            while pos + DOBJDESC_SIZE <= len(data):
                d = parse_dobjdesc(data, pos)
                if d is None:
                    break
                if d["id"] == -1:
                    count += 1
                    terminated = True
                    break
                if not is_plausible_dobjdesc(d):
                    break
                if d["scale"] == (0.0, 0.0, 0.0):
                    # Leaf terminator — include it in the array
                    count += 1
                    terminated = True
                    break
                # Subsequent joints usually have scale ≈ (1,1,1); a few
                # characters have slightly-non-unit scales on specific
                # joints (e.g. Kirby's hitbox bones at 1.0 / 1.04 / 1.0).
                # Accept anything in the neighbourhood of unit; reject
                # scale values that look random (> 10 or < 0.1).
                ok_scale = all(0.1 <= abs(v) <= 10 for v in d["scale"])
                if not ok_scale:
                    break
                count += 1
                pos += DOBJDESC_SIZE
                if count > 200:
                    break
            if terminated and count >= 4:
                candidates.append((i, count))
        i += 4

    # Prune overlapping candidates: keep the one starting earliest for
    # each non-overlapping range. A candidate at offset A that overlaps
    # candidate B (A > B and A < B_end) gets dropped in favor of B.
    candidates.sort(key=lambda c: c[0])
    pruned = []
    for off, count in candidates:
        end = off + count * DOBJDESC_SIZE
        if pruned:
            prev_off, prev_count = pruned[-1]
            prev_end = prev_off + prev_count * DOBJDESC_SIZE
            if off < prev_end:
                # Overlap — keep whichever is larger
                if count > prev_count:
                    pruned[-1] = (off, count)
                continue
        pruned.append((off, count))
    return pruned


def get_file_name(fid):
    """Look up the file name for a given id in relocFileDescriptions."""
    with open(DESC_PATH) as f:
        for line in f:
            m = re.match(rf"^-{fid:03d}:\s+(\S+)", line)
            if m:
                return m.group(1)
    return None


def ensure_description(fid, entries):
    """Insert or overwrite a `[fid]` section with the given entries.
    Preserves entries the user (or a previous run) may already have."""
    with open(DESC_PATH) as f:
        text = f.read()

    section_re = re.compile(
        rf"^\[{fid}\]\n(?:[^\n]*\n)*?(?=\n*\[\d+\]|\Z)",
        re.MULTILINE,
    )
    m = section_re.search(text)

    existing = {}  # (type, offset) -> name
    if m:
        body = m.group(0)
        for line in body.splitlines()[1:]:
            line = line.strip()
            if not line:
                continue
            parts = line.split()
            if len(parts) != 3:
                continue
            try:
                off = int(parts[2], 16) if parts[2].startswith("0x") else int(parts[2])
            except ValueError:
                continue
            existing[(parts[0], off)] = parts[1]

    # Merge: keep existing entries, add new ones that don't collide
    merged = dict(existing)
    for btype, bname, boff in entries:
        key = (btype, boff)
        merged.setdefault(key, bname)

    new_body = f"[{fid}]\n"
    for (btype, off), bname in sorted(merged.items(), key=lambda kv: kv[0][1]):
        new_body += f"{btype} {bname} 0x{off:X}\n"

    if m:
        text = text[:m.start()] + new_body + text[m.end():]
    else:
        if not text.endswith("\n\n"):
            text += "\n"
        text += new_body + "\n"

    with open(DESC_PATH, "w") as f:
        f.write(text)


# Fighter model file id -> name
#
# Phase 2 DL/Vtx auto-discovery is disabled for fighter models: the
# joint display lists reference vertex ranges by segmented address rather
# than as private Vtx arrays, so `genRelocDataC` over-counts the Vtx
# blocks and blows past the file size. We settle for a typed DObjDesc
# block (which is the primary thing a reader wants to see anyway) and
# leave the DL + Vtx bytes in a raw gap block.
FIGHTER_MODELS = {
    296: "MarioModel",
    300: "MMarioModel",
    301: "NMarioModel",
    303: "NFoxModel",
    304: "NYoshiModel",
    305: "NKirbyModel",
    306: "NPurinModel",
    307: "NPikachuModel",
    308: "NDonkeyModel",
    309: "NSamusModel",
    310: "NLinkModel",
    311: "NCaptainModel",
    312: "NNessModel",
    313: "FoxModel",
    317: "DonkeyModel",
    320: "SamusModel",
    323: "LuigiModel",
    324: "LinkModel",
    326: "LinkBoomerangModel",
    328: "KirbyModel",
    330: "PurinModel",
    332: "CaptainModel",
    335: "NessModel",
    338: "YoshiModel",
    341: "PikachuModel",
    344: "BossModel",
}


def run_generator(fid):
    argv = ["python3", "tools/genRelocDataC.py", "--extract-data",
            "--no-discover", str(fid)]
    r = subprocess.run(argv, capture_output=True, text=True, cwd=PROJECT_DIR)
    print(r.stdout, end="")
    if r.returncode != 0:
        print(r.stderr, end="", file=sys.stderr)
    return r.returncode == 0


def cleanup_orphan_blocks(block_dir, manifest_path):
    """Delete block files that aren't listed in the manifest. genRelocDataC
    doesn't prune leftovers from previous runs with different flags, so
    we sweep after it to avoid confusing the classifier."""
    if not os.path.isdir(block_dir) or not os.path.exists(manifest_path):
        return
    manifest_blocks = set()
    with open(manifest_path) as f:
        for line in f:
            line = line.strip()
            if line and not line.startswith("#") and not line.startswith("pad "):
                manifest_blocks.add(line)
    for fn in os.listdir(block_dir):
        if fn not in manifest_blocks:
            os.remove(os.path.join(block_dir, fn))


def process(fid, name):
    data = read_bin(fid)
    if data is None:
        print(f"  {fid} {name}: no binary")
        return
    arrays = find_dobjdesc_arrays(data)
    if not arrays:
        print(f"  {fid} {name}: no DObjDesc arrays found")
        return

    # Add the first array as "JointTree" — the canonical fighter joint
    # descriptor. Any additional arrays get offset-suffixed names so
    # rebuilding the description never introduces a name collision that
    # the downstream block dispatcher would turn into overlapping
    # JointTreeDObjDesc.dobjdesc.c filenames.
    entries = []
    for idx, (off, count) in enumerate(arrays):
        if idx == 0:
            label = "JointTree"
        else:
            label = f"JointTree_0x{off:04X}"
        entries.append(("DObjDesc", label, off))

    ensure_description(fid, entries)
    print(f"  {fid} {name}: added {len(entries)} DObjDesc entries")
    run_generator(fid)

    # Sweep any stale block files left over from a previous (with-discovery)
    # run so the classifier sees only what's actually in the manifest.
    block_dir = os.path.join(RELOC_DIR, name)
    manifest_path = os.path.join(RELOC_DIR, f"{fid}_{name}.manifest")
    cleanup_orphan_blocks(block_dir, manifest_path)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("fids", nargs="*", type=int)
    args = ap.parse_args()

    targets = [(fid, name) for fid, name in sorted(FIGHTER_MODELS.items())
               if not args.fids or fid in args.fids]
    for fid, name in targets:
        process(fid, name)


if __name__ == "__main__":
    main()
