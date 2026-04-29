#!/usr/bin/env python3
"""Extract each MIDI sequence from a `.sbk` (ALSeqFile) into its own
per-sequence `.cseq.s` source file, plus a manifest the build pipeline
uses to generate the matching `_sbk.c` file.

This runs as part of `make extract` (or auto-triggered if the manifest
is missing). The build then goes:

  build/src/audio/<bank>/seq_NN_<Name>.cseq.s        (this script)
        |  tools/assemble_cseq.py
        v
  build/src/audio/<bank>/seq_NN_<Name>.cseq.bin
        |  tools/binToInc.py
        v
  build/src/audio/<bank>/seq_NN_<Name>.cseq.inc.c
        |  #include from
        v
  build/src/audio/<bank>_sbk.c                       (tools/gen_sbk_c.py)

Sequence content is Nintendo's compressed-MIDI format (ALCMidiHdr +
per-track events; see [n_alCSeqNew](src/libultra/n_audio/n_env.c#L3429)).
We extract the raw bytes from the baserom slice and immediately run them
through tools/disassemble_cseq.py so the source-of-truth file is the
readable `.s` form, not raw hex.

User-supplied .mid files in `--extras-dir` (default: `src/audio/midis/`)
are processed *after* the baserom slice. Each .mid is converted to a
.cseq.s via [tools/mid_to_cseq.py](tools/mid_to_cseq.py); whether it
overrides a base sequence or appends a new one is decided by filename:

  * Stem matches a base sequence's `gmMusicID` short name (e.g.
    `Hyrule.mid` matches the `_Hyrule` suffix at index 9) -> override.
    The base sequence's slot is replaced; ROM byte-identity is broken
    for that bank (we don't reconstruct Nintendo's backup-ref
    compression or pad bytes).
  * Stem doesn't match any base name (e.g. `MyNewSong.mid`) -> new
    sequence appended at the next free index. Adding new sequences
    always shifts the .sbk layout, so byte-identity is broken.

The S1_music.sbk file is byte-identical between US and JP (the BGM is
shared), so a single set of extracted `.s` files serves both builds.

Run from repo root:
    python3 tools/extractMusicSequences.py --version us --bank S1_music
"""
import argparse
import glob
import json
import os
import shutil
import struct
import subprocess
import sys
import tempfile

# Same dir, same Python; both extractor and decode_sbk reach for this.
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _audio_seq_names import suffixes_for_bank


# Per-version .sbk ROM ranges. Source of truth is smashbrothers.<v>.yaml.
BANKS_BY_VERSION = {
    "us": {
        "S1_music": (0xB277B0, 0xB4E5C0),
    },
    "jp": {
        "S1_music": (0x96DA40, 0x994850),
    },
}

TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))


def _ensure_dir(path: str):
    d = os.path.dirname(path)
    if d:
        os.makedirs(d, exist_ok=True)


def _assembled_size(s_path: str) -> int:
    """Run assemble_cseq.py on `s_path` and return the output size."""
    asm = os.path.join(TOOLS_DIR, "assemble_cseq.py")
    with tempfile.NamedTemporaryFile(suffix=".cseq.bin", delete=False) as tf:
        tmp = tf.name
    try:
        subprocess.check_call([sys.executable, asm, s_path, "-o", tmp])
        return os.path.getsize(tmp)
    finally:
        os.unlink(tmp)


def _convert_mid(mid_path: str, s_path: str) -> int:
    """Convert a .mid into a .cseq.s at `s_path`. Returns the assembled
    size (logical_len)."""
    m2c = os.path.join(TOOLS_DIR, "mid_to_cseq.py")
    _ensure_dir(s_path)
    subprocess.check_call([sys.executable, m2c, mid_path, "-o", s_path])
    return _assembled_size(s_path)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="us", choices=sorted(BANKS_BY_VERSION))
    ap.add_argument("--baserom", default=None,
                    help="Path to baserom.<version>.z64 (defaults to "
                         "baserom.<version>.z64 in repo root)")
    ap.add_argument("--bank", required=True,
                    choices=sorted(BANKS_BY_VERSION["us"]))
    ap.add_argument("--src-dir", default="build/src/audio",
                    help="Where to write .cseq.s source files (default: "
                         "build/src/audio -- treated as a build artifact)")
    ap.add_argument("--extras-dir", default="src/audio/midis",
                    help="Directory of user-supplied .mid files. Filenames "
                         "matching a base sequence's gmMusicID short name "
                         "override that sequence; others append.")
    args = ap.parse_args()

    baserom = args.baserom or f"baserom.{args.version}.z64"
    lo, hi = BANKS_BY_VERSION[args.version][args.bank]
    with open(baserom, "rb") as f:
        f.seek(lo)
        data = f.read(hi - lo)

    rev, n_base = struct.unpack_from(">hh", data, 0)
    base_seqs = [struct.unpack_from(">II", data, 4 + i * 8) for i in range(n_base)]
    base_suffixes = suffixes_for_bank(args.bank, n_base)

    # Discover extras and split into overrides (matching a base name) vs
    # new appends. Sort so the order is reproducible.
    extras = []
    if args.extras_dir and os.path.isdir(args.extras_dir):
        for f in sorted(os.listdir(args.extras_dir)):
            if f.lower().endswith((".mid", ".midi")):
                extras.append(f)

    base_stem_to_idx = {
        suf[1:]: i for i, suf in enumerate(base_suffixes) if suf.startswith("_")
    }
    overrides = {}        # base_idx -> mid filename
    new_extras = []       # [(stem, mid filename), ...]
    for f in extras:
        stem = os.path.splitext(f)[0]
        if stem in base_stem_to_idx:
            overrides[base_stem_to_idx[stem]] = f
        else:
            new_extras.append((stem, f))

    n_total = n_base + len(new_extras)
    width = max(2, len(str(max(n_total - 1, 1))))

    bank_src = os.path.join(args.src_dir, args.bank)
    # Wipe stale .cseq.s files so a removed extra (or a width change)
    # doesn't leave orphans the wildcard would still pick up.
    if os.path.isdir(bank_src):
        shutil.rmtree(bank_src)
    os.makedirs(bank_src, exist_ok=True)

    disasm = os.path.join(TOOLS_DIR, "disassemble_cseq.py")
    manifest_entries = []

    # 1. Base sequences (overridden ones get the .mid treatment instead).
    for i, (off, ln) in enumerate(base_seqs):
        suffix = base_suffixes[i]
        base_name = f"seq_{i:0{width}d}{suffix}.cseq"
        s_path = os.path.join(bank_src, base_name + ".s")

        if i in overrides:
            mid_path = os.path.join(args.extras_dir, overrides[i])
            logical = _convert_mid(mid_path, s_path)
            physical = (logical + 3) & ~3
        else:
            phys = base_seqs[i + 1][0] - off if i + 1 < n_base else len(data) - off
            chunk = data[off : off + phys]
            with tempfile.NamedTemporaryFile(delete=False, suffix=".cseq.bin") as tf:
                tf.write(chunk)
                tmp_bin = tf.name
            try:
                subprocess.check_call(
                    [sys.executable, disasm, tmp_bin, "-o", s_path])
            finally:
                os.unlink(tmp_bin)
            logical = ln
            physical = phys

        manifest_entries.append({
            "idx": i,
            "name": base_name,
            "suffix": suffix,
            "logical_len": logical,
            "physical_len": physical,
        })

    # 2. New (non-override) extras at indices n_base, n_base+1, ...
    for offset, (stem, mid_filename) in enumerate(new_extras):
        idx = n_base + offset
        suffix = "_" + stem
        target_name = f"seq_{idx:0{width}d}{suffix}.cseq"
        s_path = os.path.join(bank_src, target_name + ".s")
        mid_path = os.path.join(args.extras_dir, mid_filename)
        logical = _convert_mid(mid_path, s_path)
        physical = (logical + 3) & ~3
        manifest_entries.append({
            "idx": idx,
            "name": target_name,
            "suffix": suffix,
            "logical_len": logical,
            "physical_len": physical,
        })

    manifest_path = os.path.join(args.src_dir, args.bank + ".manifest.json")
    _ensure_dir(manifest_path)
    with open(manifest_path, "w") as f:
        json.dump({
            "bank": args.bank,
            "revision": rev & 0xFFFF,
            "seq_count": len(manifest_entries),
            "rom_lo": lo,
            "rom_hi": hi,
            "version": args.version,
            "name_width": width,
            "sequences": manifest_entries,
            "n_base": n_base,
            "n_overrides": len(overrides),
            "n_new": len(new_extras),
        }, f, indent=2)

    extras_msg = ""
    if overrides or new_extras:
        extras_msg = (f" [{len(overrides)} override(s), "
                      f"{len(new_extras)} new from {args.extras_dir}/]")
    print(f"wrote {len(manifest_entries)} .cseq.s sources into {bank_src}/"
          f"{extras_msg}",
          file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
