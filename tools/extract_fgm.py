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
import re
import shutil
import struct
import subprocess
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
    rows. Any trailing zero-pad bytes past the `end` opcode are
    discarded -- they only ever appear on the very last entry as
    file-end alignment, and the encoder regenerates them from
    `total_size` on its own."""
    p = 0
    program = []
    while p < len(entry):
        instr = entry[p]; p += 1
        timer = instr & 0xF
        if timer & 0x8:
            if p >= len(entry):
                break
            v = entry[p]; p += 1
            timer = ((timer & 0x7) << 7) | (v & 0x7F)
            if v & 0x80:
                if p >= len(entry):
                    break
                timer = (timer << 8) | entry[p]
                p += 1
        op = instr & 0xF0
        if op not in _FGM_TBL_OPCODES:
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
        if op == 0x70:  # end -- ignore any trailing padding bytes
            break
    return program


def _assemble_entry(program) -> bytes:
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
    return bytes(out)


def decode_fgm_tbl(data: bytes) -> dict:
    count = struct.unpack_from(">I", data, 0)[0]
    offsets = list(struct.unpack_from(f">{count}I", data, 4))
    entries = []
    for i in range(count):
        start = offsets[i]
        end = offsets[i + 1] if i + 1 < count else len(data)
        program = _disassemble_entry(data[start:end])
        entries.append({
            "idx": i,
            "program": program,
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
    bodies = [_assemble_entry(e["program"]) for e in entries]
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
    # Zero-pad to total_size: in shipped baserom slices only the very
    # last entry's allocated extent has any trailing zeros, and they
    # exist purely as file-end alignment (4-byte for tbl, varies for
    # ucd). The encoder reproduces them by padding the whole file.
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
    scannability. Each instruction is `[op, arg, ..., wait_frames]`.
    `used_by_voices` cross-references the fgm.ucd entries that select
    this articulation via `set_articulation`."""
    lines = ["{"]
    lines.append('  "_format": "fgm.tbl per-entry decomp -- instrument '
                 'articulation programs spawned by fgm.ucd voices. See '
                 'audio.md and tools/extract_fgm.py for opcode '
                 'semantics. Each program row is [op, args..., wait]. '
                 '`used_by_voices` lists the fgm.ucd entry indices and '
                 'gmFGMVoiceID names that select this articulation via '
                 '`set_articulation`.",')
    lines.append(f'  "count": {decomp["count"]},')
    lines.append(f'  "total_size": {decomp["total_size"]},')
    lines.append('  "entries": [')
    n = len(decomp["entries"])
    for i, e in enumerate(decomp["entries"]):
        sep = "," if i < n - 1 else ""
        lines.append("    {")
        lines.append(f'      "idx": {e["idx"]},')
        used = e.get("used_by_voices", [])
        lines.append(f'      "used_by_voices": {json.dumps(used)},')
        lines.append('      "program": [')
        m = len(e["program"])
        for j, row in enumerate(e["program"]):
            row_sep = "," if j < m - 1 else ""
            row_str = json.dumps(row)
            lines.append(f"        {row_str}{row_sep}")
        lines.append("      ]")
        lines.append("    }" + sep)
    lines.append("  ]")
    lines.append("}")
    with open(path, "w") as f:
        f.write("\n".join(lines) + "\n")


# ---- fgm.ucd binary <-> JSON ---------------------------------------------
#
# Each fgm.ucd entry is a short "voice script" -- a MIDI-like sequence
# the engine's `func_80026B90_27790` interpreter (n_env.c:4600) runs
# per voice. Two opcode classes:
#
# Top-level state opcodes (instr & 0xF8 >= 0xD0):
#   0xD0  stop_voice           --
#   0xD1  set_articulation     varint  -- selects fgm.tbl[arg]
#   0xD2  set_unk1E            u8
#   0xD3  set_unk1F            u8      -- looks like key/note
#   0xD4  set_dur_table        6×varint -- fills siz34_0x12[6]
#   0xD5  set_volume           u8
#   0xD6  vol_delta            s8
#   0xD7  set_pan              u8
#   0xD8  pan_delta            s8
#   0xD9  fork_voice           varint  -- spawns sub-voice from fgm.ucd[arg]
#   0xDA  mark_loop            --
#   0xDB  jump_loop            --
#   0xDC  set_unk2C            u8
#   0xDD  unk2C_delta          s8
#   0xDE  set_unk2D            u8      -- priority/group
#   0xDF  set_t5_neg2400       --      -- additive pitch offset for next notes
#   0xE0  set_t5_neg4800       --
#
# Note-play opcodes (instr < 0xD0): bit-packed
#   high 5 bits = pitch_code: 0=rest, otherwise cents = pitch_code*100 - 1300
#   low 3 bits  = duration code: 0=immediate; 1..6 lookup siz34_0x12[code-1];
#                                 7=varint follows
# Spawning a "note" instantiates an EE0C voice from fgm.tbl[siz34_0x24]
# at the computed pitch (plus var_t5 transposition from 0xDF/0xE0).

_UCD_TOP_OPS = {
    0xD0: ("stop_voice",       []),
    0xD1: ("set_articulation", ["varint"]),
    0xD2: ("set_unk1E",        ["u8"]),
    0xD3: ("set_unk1F",        ["u8"]),
    0xD4: ("set_dur_table",    ["varint"] * 6),
    0xD5: ("set_volume",       ["u8"]),
    0xD6: ("vol_delta",        ["s8"]),
    0xD7: ("set_pan",          ["u8"]),
    0xD8: ("pan_delta",        ["s8"]),
    0xD9: ("fork_voice",       ["varint"]),
    0xDA: ("mark_loop",        []),
    0xDB: ("jump_loop",        []),
    0xDC: ("set_unk2C",        ["u8"]),
    0xDD: ("unk2C_delta",      ["s8"]),
    0xDE: ("set_unk2D",        ["u8"]),
    0xDF: ("set_t5_neg2400",   []),
    0xE0: ("set_t5_neg4800",   []),
}
_UCD_NAME_TO_OP = {n: op for op, (n, _) in _UCD_TOP_OPS.items()}


def _disassemble_ucd_entry(entry: bytes):
    """Decode one fgm.ucd entry. Note rows are
    `["note", pitch_code, dur_code, timer]` (dur_code 0..6 means a
    table lookup at runtime; we record the code and any explicit varint
    timer for dur_code==7). Top-level rows are `[op_name, ...args]`.
    Trailing zero-padding past the `stop_voice` opcode is discarded;
    the encoder restores it by padding the whole file to `total_size`."""
    p = 0
    program = []
    while p < len(entry):
        instr = entry[p]; p += 1
        if (instr & 0xF8) >= 0xD0:
            spec = _UCD_TOP_OPS.get(instr)
            if spec is None:
                break
            name, arg_specs = spec
            args = []
            ok = True
            try:
                for a in arg_specs:
                    if a == "u8":
                        args.append(entry[p]); p += 1
                    elif a == "s8":
                        v = entry[p]; p += 1
                        args.append(v - 256 if v >= 128 else v)
                    elif a == "varint":
                        v, p = _read_varint(entry, p)
                        args.append(v)
            except IndexError:
                ok = False
            if not ok:
                break
            program.append([name, *args])
            if instr == 0xD0:
                break
        else:
            # Note-play
            pitch_code = (instr >> 3) & 0x1F
            dur_code = instr & 7
            try:
                timer = None
                if dur_code == 7:
                    timer, p = _read_varint(entry, p)
                program.append(["note", pitch_code, dur_code, timer])
            except IndexError:
                break
    return program


def _assemble_ucd_entry(program) -> bytes:
    out = bytearray()
    for row in program:
        name = row[0]
        if name == "note":
            pitch_code, dur_code, timer = row[1], row[2], row[3]
            instr = ((pitch_code & 0x1F) << 3) | (dur_code & 7)
            out.append(instr)
            if dur_code == 7:
                _write_varint(out, int(timer))
        elif name in _UCD_NAME_TO_OP:
            op = _UCD_NAME_TO_OP[name]
            out.append(op)
            arg_specs = _UCD_TOP_OPS[op][1]
            for spec, val in zip(arg_specs, row[1:]):
                if spec == "u8":
                    out.append(int(val) & 0xFF)
                elif spec == "s8":
                    v = int(val)
                    out.append((v + 256) & 0xFF if v < 0 else v & 0xFF)
                elif spec == "varint":
                    _write_varint(out, int(val))
        else:
            raise ValueError(f"unknown ucd opcode name: {name}")
    return bytes(out)


def decode_fgm_ucd(data: bytes) -> dict:
    count = struct.unpack_from(">I", data, 0)[0]
    offsets = list(struct.unpack_from(f">{count}I", data, 4))
    entries = []
    for i in range(count):
        start = offsets[i]
        end = offsets[i + 1] if i + 1 < count else len(data)
        program = _disassemble_ucd_entry(data[start:end])
        entries.append({
            "idx": i,
            "name": None,            # filled in by labeller
            "program": program,
        })
    return {
        "count": count,
        "total_size": len(data),
        "entries": entries,
    }


def encode_fgm_ucd(decomp: dict) -> bytes:
    entries = decomp["entries"]
    count = len(entries)
    bodies = [_assemble_ucd_entry(e["program"]) for e in entries]
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
    total = decomp.get("total_size")
    if total is not None:
        if len(out) < total:
            out += b"\x00" * (total - len(out))
        elif len(out) > total:
            raise ValueError(
                f"encoded fgm.ucd exceeds total_size: {len(out)} > {total}")
    return bytes(out)


# ---- gmFGMVoiceID enum parser --------------------------------------------

def parse_gmfgm_voice_id(version: str) -> list:
    """Run cpp on src/gm/gmsound.h with the per-version REGION_* define
    and pull out the gmFGMVoiceID enum names in order. Returns a list
    of name strings indexed by enum value."""
    define = "-DREGION_US" if version == "us" else "-DREGION_JP"
    src = "src/gm/gmsound.h"
    if not os.path.exists(src):
        return []
    try:
        out = subprocess.check_output(
            ["gcc", "-E", "-I", "include", "-I", ".", define,
             "-x", "c", "-"],
            input=f'#include "{src}"\n'.encode(),
            stderr=subprocess.DEVNULL)
    except (FileNotFoundError, subprocess.CalledProcessError):
        return []
    text = out.decode("utf-8", errors="replace")
    # Locate the enum body.
    m = re.search(r"typedef enum\s+gmFGMVoiceID\s*\{(.*?)\}\s*gmFGMVoiceID",
                  text, re.S)
    if not m:
        return []
    body = m.group(1)
    names = []
    for raw in body.split(","):
        raw = raw.strip()
        if not raw:
            continue
        # Strip trailing comments and any "= value" assignments.
        raw = re.sub(r"//.*", "", raw)
        raw = re.sub(r"/\*.*?\*/", "", raw, flags=re.S)
        raw = raw.split("=")[0].strip()
        if raw:
            names.append(raw)
    return names


# ---- cross-references between the three FGM tables -----------------------

def _ucd_articulation_set(ucd_entries):
    """For each ucd entry, collect the set of fgm.tbl indices it sets
    via `set_articulation`. (One entry can set multiple if it switches
    mid-script, though most have just one.)"""
    out = []
    for e in ucd_entries:
        ids = []
        for row in e["program"]:
            if row[0] == "set_articulation":
                v = row[1]
                if v not in ids:
                    ids.append(v)
        out.append(ids)
    return out


def _tbl_lfo_set(tbl_entries):
    """For each tbl entry, collect the set of fgm.unk indices it spawns
    via `spawn_mod`."""
    out = []
    for e in tbl_entries:
        ids = []
        for row in e["program"]:
            if row[0] == "spawn_mod":
                # row layout: ["spawn_mod", id, idx, wait]
                v = row[2]
                if v not in ids:
                    ids.append(v)
        out.append(ids)
    return out


def annotate_cross_refs(ucd_decomp, tbl_decomp, unk_decomp):
    """Fill in `name` on ucd entries (from gmFGMVoiceID, set by
    `label_ucd_entries`) and `used_by_*` on tbl/unk entries from the
    disassembly. Voice references include the gmFGMVoiceID name when
    one exists, in [idx, name] form."""
    # tbl <- ucd: which voices select each articulation?
    art_by_voice = _ucd_articulation_set(ucd_decomp["entries"])
    voices_by_art = {}
    for vidx, ids in enumerate(art_by_voice):
        vname = ucd_decomp["entries"][vidx].get("name")
        ref = [vidx, vname] if vname else [vidx, None]
        for tid in ids:
            voices_by_art.setdefault(tid, []).append(ref)
    for tidx, te in enumerate(tbl_decomp["entries"]):
        te["used_by_voices"] = voices_by_art.get(tidx, [])

    # unk <- tbl: which articulations spawn each LFO?
    lfo_by_art = _tbl_lfo_set(tbl_decomp["entries"])
    arts_by_lfo = {}
    for tidx, ids in enumerate(lfo_by_art):
        for uid in ids:
            arts_by_lfo.setdefault(uid, []).append(tidx)
    for uidx, ue in enumerate(unk_decomp["entries"]):
        ue["used_by_tbl"] = arts_by_lfo.get(uidx, [])


def label_ucd_entries(ucd_decomp, voice_names):
    for i, e in enumerate(ucd_decomp["entries"]):
        e["name"] = voice_names[i] if i < len(voice_names) else None


# ---- JSON serializers ----------------------------------------------------

def write_fgm_ucd_json(path: str, decomp: dict):
    lines = ["{"]
    lines.append('  "_format": "fgm.ucd per-entry decomp; each entry is a '
                 'short voice script (MIDI-like). Indexed by gmFGMVoiceID. '
                 'See audio.md and tools/extract_fgm.py for opcode '
                 'semantics. `name` is the gmFGMVoiceID label when '
                 'available; entries past the enum are unnamed.",')
    lines.append(f'  "count": {decomp["count"]},')
    lines.append(f'  "total_size": {decomp["total_size"]},')
    lines.append('  "entries": [')
    n = len(decomp["entries"])
    for i, e in enumerate(decomp["entries"]):
        sep = "," if i < n - 1 else ""
        lines.append("    {")
        lines.append(f'      "idx": {e["idx"]},')
        lines.append(f'      "name": {json.dumps(e["name"])},')
        lines.append('      "program": [')
        m = len(e["program"])
        for j, row in enumerate(e["program"]):
            row_sep = "," if j < m - 1 else ""
            lines.append(f"        {json.dumps(row)}{row_sep}")
        lines.append("      ]")
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
    lines.append('  "_format": "fgm.unk per-entry decomp -- LFO/modulator '
                 'parameter table referenced by fgm.tbl articulations. '
                 'See audio.md and tools/extract_fgm.py for field '
                 'semantics. `used_by_tbl` lists fgm.tbl entry indices '
                 'that spawn this LFO via opcode 0x40 (cross-reference). '
                 '`trailing_hex` is *not* undecomped data: the on-disk '
                 'file is a fixed 2080-byte preallocated buffer and the '
                 'bytes past entries[count] are stale leftover from a '
                 'previous version of the file (matching the same '
                 '16-byte entry shape; the engine ignores them since '
                 '`count` bounds the valid range). We capture them '
                 'verbatim so re-encode round-trips byte-identically.",')
    lines.append(f'  "count": {decomp["count"]},')
    lines.append(f'  "total_size": {decomp["total_size"]},')
    lines.append('  "entries": [')
    n = len(decomp["entries"])
    for i, e in enumerate(decomp["entries"]):
        sep = "," if i < n - 1 else ""
        used_by = e.get("used_by_tbl", [])
        used_str = json.dumps(used_by)
        lines.append(
            f'    {{"shape": {e["shape"]}, "target": {e["target"]}, '
            f'"postproc": {e["postproc"]}, "init_phase": {e["init_phase"]}, '
            f'"period": {e["period"]!r}, '
            f'"amplitude": {e["amplitude"]!r}, '
            f'"offset": {e["offset"]!r}, '
            f'"used_by_tbl": {used_str}}}{sep}')
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

    # Per-file codec dispatch. Each FGM file with a per-entry view has
    # an encoder/decoder/json-writer triple; the .bin-only files map to
    # None and get whole-file binary handling only.
    CODECS = {
        "fgm.unk": (encode_fgm_unk, decode_fgm_unk, write_fgm_unk_json),
        "fgm.tbl": (encode_fgm_tbl, decode_fgm_tbl, write_fgm_tbl_json),
        "fgm.ucd": (encode_fgm_ucd, decode_fgm_ucd, write_fgm_ucd_json),
    }

    extracted = []
    overridden = []
    bin_data = {}  # name -> raw bytes after override resolution
    for name, (lo, hi) in RANGES[args.version].items():
        out_path = os.path.join(args.out_dir, name + ".bin")
        _ensure_dir(out_path)

        # Override priority: .json (per-entry decomp) > .bin (whole-file)
        # > baserom slice.
        json_override = (os.path.join(args.extras_dir, name + ".json")
                         if args.extras_dir else None)
        bin_override = (os.path.join(args.extras_dir, name + ".bin")
                        if args.extras_dir else None)

        codec = CODECS.get(name, (None, None, None))
        encoder, _, _ = codec

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

        with open(out_path, "rb") as f:
            bin_data[name] = f.read()

    # Decode all three for cross-referencing, then emit the per-entry
    # JSONs with `name` labels (fgm.ucd) and `used_by_*` annotations.
    decomps = {}
    for name in ("fgm.unk", "fgm.tbl", "fgm.ucd"):
        if name in bin_data:
            _, decoder, _ = CODECS[name]
            decomps[name] = decoder(bin_data[name])

    if "fgm.ucd" in decomps:
        label_ucd_entries(decomps["fgm.ucd"], parse_gmfgm_voice_id(args.version))
    if all(k in decomps for k in ("fgm.unk", "fgm.tbl", "fgm.ucd")):
        annotate_cross_refs(decomps["fgm.ucd"], decomps["fgm.tbl"],
                            decomps["fgm.unk"])

    for name, decomp in decomps.items():
        _, _, json_writer = CODECS[name]
        json_path = os.path.join(args.out_dir, name + ".json")
        json_writer(json_path, decomp)

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
