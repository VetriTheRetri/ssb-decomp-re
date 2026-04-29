#!/usr/bin/env python3
"""Extract a `.ctl` instrument bank + its paired `.tbl` waveform blob into:

  * `build/src/audio/<bank>/wave_NNN.aifc` -- one Nintendo AIFC per
    waveform, carrying the original VADPCM bytes verbatim plus the
    codebook (`VADPCMCODES` APPL chunk) and loop info (`VADPCMLOOPS`)
    needed to reconstruct it.
  * `build/src/audio/<bank>/wave_NNN.aiff` -- decoded PCM preview
    alongside (informational; not consumed by the build).
  * `build/src/audio/<bank>.manifest.json` -- the full structural
    decode of the .ctl (file offsets + every reachable Bank /
    Instrument / Sound / Envelope / KeyMap / WaveTable /
    ADPCMloop / ADPCMBook), so [tools/gen_ctl_c.py](tools/gen_ctl_c.py)
    can reproduce the byte-identical `.c` file.

User-supplied AIFC overrides in `--extras-dir` (default
`src/audio/instruments/`) replace base waveforms whose stem matches
`wave_NNN`. Overriding shifts subsequent waveform offsets in the
rebuilt `.tbl`, so the ROM no longer byte-matches the baserom -- the
manifest's `tbl_size` and per-wave `base` fields reflect the
post-override layout.

Run from repo root (typically auto-triggered by Make):
    python3 tools/extract_ctl_bank.py --version us --bank B1_sounds1
"""
import argparse
import glob
import json
import os
import re
import shutil
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import audio_codec as ac
import decode_ctl  # reused as a library: walk(data) -> sorted structs


# ROM ranges per (version, bank). Source of truth: smashbrothers.<v>.yaml.
# .ctl + .tbl come as a pair; the .tbl starts where .ctl ends.
BANKS_BY_VERSION = {
    "us": {
        "B1_sounds1": {
            "ctl": (0xB4E5C0, 0xB54CE0),
            "tbl": (0xB54CE0, 0xC6B650),
        },
        "B1_sounds2": {
            "ctl": (0xC6B650, 0xC7B1F0),
            "tbl": (0xC7B1F0, 0xF573D0),
        },
    },
    "jp": {
        "B1_sounds1": {
            "ctl": (0x994850, 0x99AF70),
            "tbl": (0x99AF70, 0xAB18E0),
        },
        # B1_sounds2 differs between versions (different voice samples).
        "B1_sounds2": {
            "ctl": (0xAB18E0, 0xAC1520),
            "tbl": (0xAC1520, 0xD71B00),
        },
    },
}


def _ensure_dir(path: str):
    d = os.path.dirname(path)
    if d:
        os.makedirs(d, exist_ok=True)


def _wave_index_from_stem(stem: str):
    """`wave_023` -> 23. Returns None if the stem isn't a wave-N name."""
    m = re.fullmatch(r"wave_(\d+)", stem)
    return int(m.group(1)) if m else None


def _waves_in_offset_order(structs):
    """Return ALWaveTable struct dicts sorted by their .tbl `base`."""
    waves = [s for s in structs if s["kind"] == "ALWaveTable"]
    return sorted(waves, key=lambda w: w["base"])


def _book_for(structs, book_off):
    for s in structs:
        if s["kind"] == "ALADPCMBook" and s["offset"] == book_off:
            return s
    return None


def _loop_for(structs, loop_off, wt_type):
    for s in structs:
        if s["offset"] != loop_off:
            continue
        if wt_type == 0 and s["kind"] == "ALADPCMloop":
            return s
        if wt_type == 1 and s["kind"] == "ALRawLoop":
            return s
    return None


def _bank_sample_rate(structs):
    """Take sampleRate from the first ALBank we see; baserom banks all
    use a single rate per file."""
    for s in structs:
        if s["kind"] == "ALBank":
            return s["sampleRate"]
    return 22050


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="us", choices=sorted(BANKS_BY_VERSION))
    ap.add_argument("--baserom", default=None,
                    help="Path to baserom.<version>.z64 (defaults to "
                         "baserom.<version>.z64 in repo root)")
    ap.add_argument("--bank", required=True,
                    choices=sorted(BANKS_BY_VERSION["us"]))
    ap.add_argument("--src-dir", default="build/src/audio",
                    help="Where to write per-wave AIFC/AIFF files (default: "
                         "build/src/audio).")
    ap.add_argument("--extras-dir", default="src/audio/instruments",
                    help="Directory of user-supplied .aifc overrides. A "
                         "file named wave_NNN.aifc replaces base "
                         "waveform NNN. Defaults to src/audio/instruments/.")
    args = ap.parse_args()

    baserom = args.baserom or f"baserom.{args.version}.z64"
    bank_ranges = BANKS_BY_VERSION[args.version][args.bank]
    ctl_lo, ctl_hi = bank_ranges["ctl"]
    tbl_lo, tbl_hi = bank_ranges["tbl"]
    with open(baserom, "rb") as f:
        f.seek(ctl_lo); ctl = f.read(ctl_hi - ctl_lo)
        f.seek(tbl_lo); tbl = f.read(tbl_hi - tbl_lo)

    structs = decode_ctl.walk(ctl)
    decode_ctl.assign_field_names(structs)

    sample_rate = _bank_sample_rate(structs)
    waves = _waves_in_offset_order(structs)

    # Discover overrides (wave_NNN.aifc in extras dir).
    overrides = {}  # wave_idx -> override AIFC path
    if args.extras_dir and os.path.isdir(args.extras_dir):
        for f in sorted(os.listdir(args.extras_dir)):
            stem, ext = os.path.splitext(f)
            if ext.lower() != ".aifc":
                continue
            idx = _wave_index_from_stem(stem)
            if idx is not None and idx < len(waves):
                overrides[idx] = os.path.join(args.extras_dir, f)

    bank_src = os.path.join(args.src_dir, args.bank)
    if os.path.isdir(bank_src):
        shutil.rmtree(bank_src)
    os.makedirs(bank_src, exist_ok=True)

    # Width for zero-padded wave names (so ls sorts correctly).
    nwaves = len(waves)
    width = max(3, len(str(max(nwaves - 1, 1))))

    # ----------------------------------------------------------------
    # 1. Per-wave AIFC + AIFF emission. Track each wave's NEW base in
    #    the rebuilt .tbl (= cumulative byte position in offset order).
    # ----------------------------------------------------------------
    new_tbl = bytearray()
    new_bases = {}  # wave struct offset -> new base
    new_lens = {}   # wave struct offset -> new length

    # End-of-slice for each base wave: usually next wave's base, or .tbl
    # end for the last. The slice may include trailing alignment-pad
    # bytes (.tbl waveforms align to 16; len fields can be `9N+1`); we
    # keep those bytes inside the AIFC's SSND so the rebuilt .tbl
    # matches byte-for-byte.
    base_slice_end = {}
    for i, w in enumerate(waves):
        base_slice_end[w["offset"]] = (
            waves[i + 1]["base"] if i + 1 < len(waves) else len(tbl)
        )

    for wave_idx, wave in enumerate(waves):
        wave_off = wave["offset"]
        wt_type = wave["type"]

        if wave_idx in overrides:
            override = ac.read_aifc(overrides[wave_idx])
            adpcm = override["adpcm_bytes"]
            book_entries = override["codebook"]
            order = override["order"]
            npred = override["npredictors"]
            loop = override["loop"]
        else:
            base = wave["base"]
            slice_end = base_slice_end[wave_off]
            adpcm = bytes(tbl[base : slice_end])
            book = _book_for(structs, wave["book_off"])
            if book is None:
                raise RuntimeError(f"wave at 0x{wave_off:x}: missing book")
            book_entries = book["entries"]
            order = book["order"]
            npred = book["npredictors"]
            loop_struct = _loop_for(structs, wave["loop_off"], wt_type) \
                          if wave["loop_off"] else None
            if loop_struct and loop_struct["kind"] == "ALADPCMloop":
                loop = {
                    "start": loop_struct["start"],
                    "end": loop_struct["end"],
                    "count": loop_struct["count"],
                    "state": loop_struct["state"],
                }
            else:
                loop = None

        # The "engine-visible length" stored in ALWaveTable is the
        # original wave["length"] for non-overridden waves (which may be
        # less than `len(adpcm)` due to inter-wave .tbl padding) or the
        # full override payload size for overrides.
        if wave_idx in overrides:
            engine_length = len(adpcm)
        else:
            engine_length = wave["length"]

        wave_name = f"wave_{wave_idx:0{width}d}"
        aifc_path = os.path.join(bank_src, wave_name + ".aifc")
        aiff_path = os.path.join(bank_src, wave_name + ".aiff")
        ac.write_aifc(aifc_path, adpcm, book_entries, order, npred,
                      sample_rate, loop=loop)
        try:
            # Preview only the engine-visible portion (skip alignment pad).
            preview_bytes = adpcm[:engine_length]
            samples = ac.adpcm_decode(preview_bytes, book_entries, order, npred)
            ac.write_aiff(aiff_path, samples, sample_rate)
        except Exception as e:
            # Preview is best-effort; if it fails, log and continue.
            print(f"warning: AIFF preview failed for {wave_name}: {e}",
                  file=sys.stderr)

        new_bases[wave_off] = len(new_tbl)
        new_lens[wave_off] = engine_length
        new_tbl.extend(adpcm)

    # ----------------------------------------------------------------
    # 2. Patch the structs list to reflect post-override layout. For
    #    each ALWaveTable we update `base`/`length`; for ALADPCMBook
    #    and ALADPCMloop linked from an overridden wave we replace
    #    their entries from the override AIFC. For non-overridden
    #    waves the values are unchanged.
    # ----------------------------------------------------------------
    for wave_idx, wave in enumerate(waves):
        wave["base"] = new_bases[wave["offset"]]
        wave["length"] = new_lens[wave["offset"]]
        if wave_idx in overrides:
            override = ac.read_aifc(overrides[wave_idx])
            book = _book_for(structs, wave["book_off"])
            if book is not None:
                book["order"] = override["order"]
                book["npredictors"] = override["npredictors"]
                book["entries"] = override["codebook"]
            loop_struct = _loop_for(structs, wave["loop_off"], wave["type"]) \
                          if wave["loop_off"] else None
            if override["loop"] is not None and loop_struct is not None \
               and loop_struct["kind"] == "ALADPCMloop":
                loop_struct["start"] = override["loop"]["start"]
                loop_struct["end"] = override["loop"]["end"]
                loop_struct["count"] = override["loop"]["count"]
                loop_struct["state"] = override["loop"]["state"]

    # ----------------------------------------------------------------
    # 3. Write the rebuilt .tbl.
    # ----------------------------------------------------------------
    tbl_path = os.path.join(args.src_dir, args.bank + ".tbl.bin")
    _ensure_dir(tbl_path)
    with open(tbl_path, "wb") as f:
        f.write(new_tbl)

    # ----------------------------------------------------------------
    # 4. Write the manifest. Fields kept verbatim so gen_ctl_c.py
    #    can replay the decode_ctl.py emit logic.
    # ----------------------------------------------------------------
    manifest_path = os.path.join(args.src_dir, args.bank + ".ctl.json")
    _ensure_dir(manifest_path)
    with open(manifest_path, "w") as f:
        json.dump({
            "bank": args.bank,
            "version": args.version,
            "rom_lo": ctl_lo,
            "rom_hi": ctl_hi,
            "tbl_rom_lo": tbl_lo,
            "tbl_rom_hi": tbl_hi,
            "ctl_size": len(ctl),
            "tbl_size": len(new_tbl),
            "wave_count": len(waves),
            "n_overrides": len(overrides),
            "structs": structs,
        }, f, indent=2)

    msg = (f" [{len(overrides)} override(s)]" if overrides else "")
    print(f"wrote {len(waves)} waveforms ({len(new_tbl)} .tbl bytes) "
          f"into {bank_src}/{msg}; manifest={manifest_path}",
          file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
