#!/usr/bin/env python3
"""Pull the FGM (sound-effect engine) data files out of the baserom into
`build/src/audio/`, optionally swapping in user-supplied overrides from
`src/audio/fgm/`.

Three files in this group:

  * fgm.unk -- per-SFX LFO/modulator parameter table. Each 16-byte
    entry defines one low-frequency oscillator (sine / square /
    sawtooth / sample-and-hold / etc.) and where its per-frame value
    gets routed (volume / pitch / pan / scratch register / another
    voice). FGM microcode opcode 0x40 reads `(id, idx)` from the
    bytecode and instantiates `entries[idx]` as an active modulator
    bound to the SFX named by `id`.
        struct FGMUnkEntry {            // 16 bytes
            u8  shape;        // 0=sine 1=square 2=saw_up 3=saw_down
                              // 4=rand_S&H(rng1) 5=rand_lerp(rng1)
                              // 6=ramp_up_oneshot 7=ramp_down_oneshot
                              // 8=rand_S&H(rng2)
            u8  target;       // 0..9: scratch reg; 10/11: vol set/add;
                              // 12/13: pitch set/add (cents);
                              // 14/15: pan set/add; 16..23: self-mod;
                              // 24+: cross-mod another voice
            u8  postproc;     // hi-nibble: 0=none/1=add/2=mul
                              // lo-nibble: scratch reg index
                              // (always 0 in shipped data)
            u8  init_phase;   // initial phase, units of period/256
            f32 period;       // LFO period in frames
            f32 amplitude;    // LFO peak amplitude
            f32 offset;       // LFO center value (DC offset)
        };
        struct FGMUnk {
            u32 count;        // 100 (US) / 95 (JP)
            FGMUnkEntry entries[count];
            u8 _trail[];      // leftover-from-buffer; the file is a
                              // fixed 2080-byte buffer and the bytes
                              // past entries[count] are stale data
                              // from a prior version, captured
                              // verbatim for byte-match.
        };
    Engine consumer:
      n_env.c:3906 -- opcode 0x40 instantiation
      n_env.c:4078 -- per-frame voice tick
      n_env.c:4215 -- target dispatch into volume/pitch/pan/regs
  * fgm.tbl -- sound-effect parameter table. Layout is
    `{ u32 count; s32 offsets[count]; u8 data[]; }` (464 entries on US,
    runtime relocates `offsets[i] += base`). Treated as a single blob
    here; per-entry decomp is a future option.
  * fgm.ucd -- FGM microcode. Same `count+offsets+data` layout (695
    entries on US). Same single-blob treatment for now.

Overrides:
  * src/audio/fgm/fgm.unk.json -- per-entry decomp; preferred over .bin
                                  if both exist. Lets you edit one
                                  modulator without touching others
                                  while preserving the leftover-from-
                                  buffer trail bytes for byte-match.
  * src/audio/fgm/fgm.unk.bin  -- whole-file binary override
  * src/audio/fgm/fgm.tbl.bin  -- whole-file binary override
  * src/audio/fgm/fgm.ucd.bin  -- whole-file binary override

Round-trip semantics: the .json captures every active entry plus the
verbatim trailing bytes (as hex). Re-encoding a .json produced by this
tool yields byte-identical .bin output.

Per-entry decomp for `.tbl`/`.ucd` is mechanically straightforward
(both have explicit `{count, offsets, data}` layouts) but the entries
themselves are still opaque -- held off until someone wants to edit
individual records.

Run from repo root (typically auto-triggered by Make):
    python3 tools/extract_fgm.py --version us
"""
import argparse
import json
import os
import shutil
import struct
import sys


# Per-version ROM ranges. Source of truth: smashbrothers.<v>.yaml.
RANGES = {
    "us": {
        "fgm.unk": (0xF573D0, 0xF57BF0),
        "fgm.tbl": (0xF57BF0, 0xF5A9C0),
        "fgm.ucd": (0xF5A9C0, 0xF5F4E0),
    },
    "jp": {
        "fgm.unk": (0xD71B00, 0xD72320),
        "fgm.tbl": (0xD72320, 0xD74E70),
        "fgm.ucd": (0xD74E70, 0xD79640),
    },
}


def _ensure_dir(path: str):
    d = os.path.dirname(path)
    if d:
        os.makedirs(d, exist_ok=True)


# ---- fgm.unk binary <-> JSON ---------------------------------------------

def decode_fgm_unk(data: bytes) -> dict:
    """Parse fgm.unk bytes into a structured per-entry view.

    The on-disk file is a fixed-size buffer; bytes past `entries[count]`
    are leftover from a prior version of the file (re-allocated buffer
    that the encoder didn't clear). We capture them verbatim so the
    encoder can round-trip byte-identically."""
    count = struct.unpack_from(">I", data, 0)[0]
    entries = []
    for i in range(count):
        off = 4 + i * 16
        shape, target, postproc, init_phase = data[off : off + 4]
        period, amplitude, offset = struct.unpack_from(">fff", data, off + 4)
        entries.append({
            "shape": shape,
            "target": target,
            "postproc": postproc,
            "init_phase": init_phase,
            "period": period,
            "amplitude": amplitude,
            "offset": offset,
        })
    trailing = data[4 + count * 16 :]
    return {
        "count": count,
        "total_size": len(data),
        "entries": entries,
        "trailing_hex": trailing.hex(),
    }


def encode_fgm_unk(decomp: dict) -> bytes:
    """Re-pack a decoded fgm.unk dict into the on-disk binary form.

    Total size is preserved from the decomp's `total_size` field.
    Trailing bytes after `entries[count]` come from `trailing_hex`,
    truncated/zero-padded to fill the buffer if the entry count
    changed since the snapshot."""
    entries = decomp["entries"]
    count = len(entries)
    total = decomp.get("total_size", 4 + count * 16)
    trailing = bytes.fromhex(decomp.get("trailing_hex", "").replace(" ", ""))

    out = bytearray()
    out += struct.pack(">I", count)
    for e in entries:
        out += struct.pack(">BBBBfff",
                           e["shape"] & 0xFF, e["target"] & 0xFF,
                           e["postproc"] & 0xFF, e["init_phase"] & 0xFF,
                           float(e["period"]), float(e["amplitude"]),
                           float(e["offset"]))

    body_size = 4 + count * 16
    pad_needed = total - body_size
    if pad_needed < 0:
        raise ValueError(
            f"too many entries to fit total_size={total}: "
            f"{count} entries occupy {body_size} bytes")
    if len(trailing) >= pad_needed:
        out += trailing[:pad_needed]
    else:
        out += trailing + b"\x00" * (pad_needed - len(trailing))
    return bytes(out)


# ---- fgm.tbl binary <-> JSON ---------------------------------------------
#
# Each fgm.tbl entry is a small SFX program executed by the FGM
# interpreter at func_80027460_28060 (n_env.c:3746). Every instruction
# starts with a 1-byte (opcode<<4)|timer; the interpreter waits `timer`
# frames between instructions, with an extended-encoding pattern when
# timer >= 8:
#
#     instr  = *p++
#     timer  = instr & 0xF
#     if timer & 0x8:
#         v = *p++
#         timer = ((timer & 0x7) << 7) | (v & 0x7F)
#         if v & 0x80: timer = (timer << 8) | *p++
#     opcode = instr & 0xF0
#
# Opcodes (high nibble) and their args:
#   0x00  vol        u8 (set if <=127, else relative -64 then clamp 0..127)
#   0x10  pan        u8 (same set/relative semantics)
#   0x20  pitch      s16 BE (set if in [-1200..1200], else relative -2400)
#   0x30  unk36      u8 (set/relative)  -- meaning still TBD
#   0x40  spawn_mod  u8 id, varint idx into fgm.unk -- attach LFO modulator
#   0x50  stop_mod   u8 id -- detach modulator
#   0x60  trigger    varint idx -- begin a sub-sound (consumed by an
#                    ALWhatever8009EE0C array; possibly fgm.ucd-ish)
#   0x70  end        sets runtime timer to 10000 (effectively forever)
#   0x80  mark_loop  saves current ucode position
#   0x90  jump_loop  restores saved position (loops back to mark_loop)
#
# The varint encoding: first byte; if MSB is set, second byte extends
# value as `((first & 0x7F) << 8) | second`.

# Number of "value" args (beyond timer) per opcode. Used by encoder to
# pack op-then-args correctly.
_FGM_TBL_OPCODES = {
    0x00: ("vol",        1),
    0x10: ("pan",        1),
    0x20: ("pitch",      1),  # signed s16 BE
    0x30: ("unk36",      1),
    0x40: ("spawn_mod",  2),  # u8 id, varint idx
    0x50: ("stop_mod",   1),
    0x60: ("trigger",    1),  # varint idx
    0x70: ("end",        0),
    0x80: ("mark_loop",  0),
    0x90: ("jump_loop",  0),
}
_FGM_TBL_NAME_TO_OP = {n: op for op, (n, _) in _FGM_TBL_OPCODES.items()}


def _read_varint(buf, p):
    a = buf[p]; p += 1
    if a & 0x80:
        return ((a & 0x7F) << 8) | buf[p], p + 1
    return a, p


def _write_varint(buf, v):
    if v < 0 or v > 0x7FFF:
        raise ValueError(f"varint out of range: {v}")
    if v < 0x80:
        buf.append(v)
    else:
        buf.append(0x80 | (v >> 8))
        buf.append(v & 0xFF)


def _encode_timer(timer):
    """Pack a timer value into the low-nibble + extension bytes. Returns
    (low_nibble, extension_bytes)."""
    if timer < 0:
        raise ValueError(f"timer cannot be negative: {timer}")
    if timer < 8:
        return timer, b""
    # Extended timer.
    if timer < (1 << 10):  # 7 bits in v + 3 bits in nibble
        v = timer & 0x7F
        nib = 0x8 | ((timer >> 7) & 0x7)
        return nib, bytes([v])
    if timer < (1 << 18):  # 8 + 7 + 3 bits
        v_lo = timer & 0xFF
        v_hi = (timer >> 8) & 0x7F
        nib = 0x8 | ((timer >> 15) & 0x7)
        # Second byte is the 0x80-flagged middle, third is the LSB.
        return nib, bytes([0x80 | v_hi, v_lo])
    raise ValueError(f"timer too large: {timer}")


def _disassemble_entry(entry: bytes):
    """Decode one fgm.tbl entry into a list of [op, arg1, ..., wait]
    rows plus a `tail_hex` string of any trailing pad bytes after the
    last recognized opcode (if not a clean stop)."""
    p = 0
    program = []
    while p < len(entry):
        instr = entry[p]; p += 1
        timer = instr & 0xF
        if timer & 0x8:
            if p >= len(entry):
                # Truncated extension; abort.
                p -= 1
                break
            v = entry[p]; p += 1
            timer = ((timer & 0x7) << 7) | (v & 0x7F)
            if v & 0x80:
                if p >= len(entry):
                    p -= 2
                    break
                timer = (timer << 8) | entry[p]
                p += 1
        op = instr & 0xF0
        if op not in _FGM_TBL_OPCODES:
            # Unknown opcode -- bail; the rest becomes tail.
            p -= 1  # rewind so tail starts here
            # But the timer-extension bytes were also already consumed;
            # we can't easily back those out, so fall through with what
            # we have and let `tail_hex` capture whatever's left.
            break
        name, n_args = _FGM_TBL_OPCODES[op]
        try:
            args = []
            if op == 0x20:  # pitch (signed s16 BE)
                hi = entry[p]; lo = entry[p + 1]; p += 2
                v = (hi << 8) | lo
                if v >= 0x8000:
                    v -= 0x10000
                args.append(v)
            elif op == 0x40:  # spawn_mod: u8 id, varint idx
                args.append(entry[p]); p += 1
                idx, p = _read_varint(entry, p)
                args.append(idx)
            elif op == 0x60:  # trigger: varint idx
                idx, p = _read_varint(entry, p)
                args.append(idx)
            elif n_args == 1:  # plain u8
                args.append(entry[p]); p += 1
            # else n_args == 0
        except IndexError:
            break
        program.append([name, *args, timer])
        if op == 0x70:  # end -- the rest is tail padding
            break
    tail = entry[p:]
    return program, tail.hex()


def _assemble_entry(program, tail_hex: str) -> bytes:
    out = bytearray()
    for row in program:
        name = row[0]
        timer = row[-1]
        args = row[1:-1]
        if name not in _FGM_TBL_NAME_TO_OP:
            raise ValueError(f"unknown opcode name: {name}")
        op = _FGM_TBL_NAME_TO_OP[name]
        nib, ext = _encode_timer(int(timer))
        out.append(op | nib)
        out.extend(ext)
        if op == 0x20:
            v = int(args[0]) & 0xFFFF
            out.append((v >> 8) & 0xFF); out.append(v & 0xFF)
        elif op == 0x40:
            out.append(int(args[0]) & 0xFF)
            _write_varint(out, int(args[1]))
        elif op == 0x60:
            _write_varint(out, int(args[0]))
        elif _FGM_TBL_OPCODES[op][1] == 1:
            out.append(int(args[0]) & 0xFF)
        # else 0 args
    out.extend(bytes.fromhex(tail_hex.replace(" ", "")))
    return bytes(out)


def decode_fgm_tbl(data: bytes) -> dict:
    count = struct.unpack_from(">I", data, 0)[0]
    offsets = list(struct.unpack_from(f">{count}I", data, 4))
    entries = []
    for i in range(count):
        start = offsets[i]
        end = offsets[i + 1] if i + 1 < count else len(data)
        entry_bytes = data[start:end]
        program, tail_hex = _disassemble_entry(entry_bytes)
        entries.append({
            "idx": i,
            "program": program,
            "tail_hex": tail_hex,
        })
    return {
        "count": count,
        "total_size": len(data),
        "entries": entries,
    }


def encode_fgm_tbl(decomp: dict) -> bytes:
    entries = decomp["entries"]
    count = len(entries)
    # First pass: build each entry's bytes to learn their lengths.
    bodies = [_assemble_entry(e["program"], e["tail_hex"]) for e in entries]
    header_size = 4 + count * 4
    offsets = []
    cursor = header_size
    for body in bodies:
        offsets.append(cursor)
        cursor += len(body)
    out = bytearray()
    out += struct.pack(">I", count)
    for o in offsets:
        out += struct.pack(">I", o)
    for body in bodies:
        out += body
    # Pad/truncate to total_size if specified (preserves any trailing
    # alignment padding past the last entry; original US fgm.tbl ends
    # cleanly at 11728 with no extra padding).
    total = decomp.get("total_size")
    if total is not None:
        if len(out) < total:
            out += b"\x00" * (total - len(out))
        elif len(out) > total:
            raise ValueError(
                f"encoded fgm.tbl exceeds total_size: {len(out)} > {total}")
    return bytes(out)


def write_fgm_tbl_json(path: str, decomp: dict):
    """One entry block per group; one instruction per line for
    scannability. Each instruction is `[op, arg, ..., wait_frames]`."""
    lines = ["{"]
    lines.append('  "_format": "fgm.tbl per-entry decomp; see audio.md '
                 'and tools/extract_fgm.py docstring for opcode '
                 'semantics. Each program row is [op, args..., wait].",')
    lines.append(f'  "count": {decomp["count"]},')
    lines.append(f'  "total_size": {decomp["total_size"]},')
    lines.append('  "entries": [')
    n = len(decomp["entries"])
    for i, e in enumerate(decomp["entries"]):
        sep = "," if i < n - 1 else ""
        lines.append("    {")
        lines.append(f'      "idx": {e["idx"]},')
        lines.append('      "program": [')
        m = len(e["program"])
        for j, row in enumerate(e["program"]):
            row_sep = "," if j < m - 1 else ""
            row_str = json.dumps(row)
            lines.append(f"        {row_str}{row_sep}")
        lines.append("      ],")
        lines.append(f'      "tail_hex": {json.dumps(e["tail_hex"])}')
        lines.append("    }" + sep)
    lines.append("  ]")
    lines.append("}")
    with open(path, "w") as f:
        f.write("\n".join(lines) + "\n")


# ---- shared helpers ------------------------------------------------------

def write_fgm_unk_json(path: str, decomp: dict):
    """Custom serializer: one entry per line so the file is human-
    scannable. Equivalent to json.dumps but with collapsed entry dicts."""
    lines = ["{"]
    lines.append('  "_format": "fgm.unk per-entry decomp; see audio.md '
                 'and tools/extract_fgm.py docstring for field semantics.",')
    lines.append(f'  "count": {decomp["count"]},')
    lines.append(f'  "total_size": {decomp["total_size"]},')
    lines.append('  "entries": [')
    n = len(decomp["entries"])
    for i, e in enumerate(decomp["entries"]):
        sep = "," if i < n - 1 else ""
        lines.append(
            f'    {{"shape": {e["shape"]}, "target": {e["target"]}, '
            f'"postproc": {e["postproc"]}, "init_phase": {e["init_phase"]}, '
            f'"period": {e["period"]!r}, '
            f'"amplitude": {e["amplitude"]!r}, '
            f'"offset": {e["offset"]!r}}}{sep}')
    lines.append("  ],")
    lines.append(f'  "trailing_hex": "{decomp["trailing_hex"]}"')
    lines.append("}")
    with open(path, "w") as f:
        f.write("\n".join(lines) + "\n")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="us", choices=sorted(RANGES))
    ap.add_argument("--baserom", default=None,
                    help="Path to baserom.<version>.z64 (defaults to "
                         "baserom.<version>.z64 in repo root)")
    ap.add_argument("--out-dir", default="build/src/audio",
                    help="Where to write the extracted .bin files "
                         "(default: build/src/audio).")
    ap.add_argument("--extras-dir", default="src/audio/fgm",
                    help="Whole-file overrides go here. Filenames must "
                         "match exactly: fgm.unk.bin, fgm.tbl.bin, "
                         "fgm.ucd.bin.")
    args = ap.parse_args()

    baserom = args.baserom or f"baserom.{args.version}.z64"
    with open(baserom, "rb") as f:
        rom = f.read()

    extracted = []
    overridden = []
    for name, (lo, hi) in RANGES[args.version].items():
        out_path = os.path.join(args.out_dir, name + ".bin")
        _ensure_dir(out_path)

        # Override priority: .json (per-entry decomp) > .bin (whole-file)
        # > baserom slice. Currently only fgm.unk has a .json form;
        # fgm.tbl/.ucd are .bin only.
        json_override = (os.path.join(args.extras_dir, name + ".json")
                         if args.extras_dir else None)
        bin_override = (os.path.join(args.extras_dir, name + ".bin")
                        if args.extras_dir else None)

        # Per-file encoder (None for files without per-entry decomp).
        encoder = {
            "fgm.unk": encode_fgm_unk,
            "fgm.tbl": encode_fgm_tbl,
        }.get(name)
        decoder = {
            "fgm.unk": decode_fgm_unk,
            "fgm.tbl": decode_fgm_tbl,
        }.get(name)
        json_writer = {
            "fgm.unk": write_fgm_unk_json,
            "fgm.tbl": write_fgm_tbl_json,
        }.get(name)

        if encoder and json_override and os.path.isfile(json_override):
            with open(json_override) as f:
                decomp = json.load(f)
            with open(out_path, "wb") as f:
                f.write(encoder(decomp))
            overridden.append(name + " (.json)")
        elif bin_override and os.path.isfile(bin_override):
            shutil.copyfile(bin_override, out_path)
            overridden.append(name)
        else:
            with open(out_path, "wb") as f:
                f.write(rom[lo:hi])
            extracted.append(name)

        # Emit the canonical decomp JSON alongside the .bin for files
        # that have a per-entry view, so users can read or copy them.
        if decoder and json_writer:
            with open(out_path, "rb") as f:
                bin_bytes = f.read()
            json_path = os.path.join(args.out_dir, name + ".json")
            json_writer(json_path, decoder(bin_bytes))

    # Stamp file records (a) which overrides were applied and (b) the
    # extras dir's filename+size+mtime fingerprint. The Makefile compares
    # this fingerprint to the current state at parse time, so additions,
    # modifications, and removals all reliably re-trigger extraction --
    # `find -newer` was unreliable when test runs collided within a single
    # second.
    fingerprint = []
    if args.extras_dir and os.path.isdir(args.extras_dir):
        for f in sorted(os.listdir(args.extras_dir)):
            p = os.path.join(args.extras_dir, f)
            if os.path.isfile(p):
                st = os.stat(p)
                fingerprint.append({
                    "name": f,
                    "size": st.st_size,
                    "mtime_ns": st.st_mtime_ns,
                })
    stamp_path = os.path.join(args.out_dir, ".fgm.stamp.json")
    with open(stamp_path, "w") as f:
        json.dump({
            "version": args.version,
            "overridden": overridden,
            "extras_fingerprint": fingerprint,
        }, f, indent=2)

    extras_msg = (f" [override(s): {', '.join(overridden)}]"
                  if overridden else "")
    print(f"wrote {len(RANGES[args.version])} fgm files into "
          f"{args.out_dir}/{extras_msg}",
          file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
