#!/usr/bin/env python3
"""Convert a standard MIDI Type 1 file (.mid) into a Nintendo "compressed
MIDI" sequence (.cseq.bin), or directly to .cseq.s for committing.

This is the inverse of [cseq_to_mid.py](cseq_to_mid.py). The output is a
working sequence with the same audible content as the input MIDI, but
NOT byte-identical to the original baserom slice -- Nintendo's
backup-ref compression (`0xFE A B L`) is not reconstructed; the output
is uncompressed (literal bytes only).

Translations applied:
  * NoteOn + NoteOff are paired (FIFO per channel/note) and re-fused
    into a single Nintendo NoteOn-with-duration event.
  * Tempo (FF 51 03 ...) drops the standard length byte (FF 51 b1 b2 b3).
  * Text markers `loopstart` / `loopend count=... cur=... off=...` are
    converted back to the custom meta types `0xFF 0x2E` (loopstart) and
    `0xFF 0x2D` (loopend).
  * Bytes that pass through __getTrackByte are FE-escaped (0xFE -> FE FE).
    Loopend body (6 bytes) is emitted raw because the engine reads it
    via direct pointer access.

Run from repo root:
    python3 tools/mid_to_cseq.py path/to/edited.mid -o path/to/out.cseq.bin
    python3 tools/mid_to_cseq.py path/to/edited.mid -o src/audio/.../foo.cseq.s
"""
import argparse
import os
import struct
import subprocess
import sys
import tempfile

import mido


def encode_varlen(v: int) -> bytes:
    out = [v & 0x7F]
    v >>= 7
    while v:
        out.insert(0, (v & 0x7F) | 0x80)
        v >>= 7
    return bytes(out)


def fe_escape(buf: bytearray, data) -> None:
    """Append `data` to `buf`, doubling 0xFE so it isn't read as a backup-ref."""
    for b in data:
        if b == 0xFE:
            buf.append(0xFE)
            buf.append(0xFE)
        else:
            buf.append(b)


# ---- per-track encode -----------------------------------------------------

def parse_loopend_marker(text: str):
    """Accept "loopend count=N cur=N off=N" and return (count, cur, off).
    Returns None if the marker isn't a recognized loopend."""
    if not text.startswith("loopend"):
        return None
    parts = text.split()
    kv = {}
    for p in parts[1:]:
        if "=" in p:
            k, v = p.split("=", 1)
            kv[k] = int(v)
    return (kv.get("count", 0), kv.get("cur", 0xFF), kv.get("off", 0))


_TRACK_SLOT_PREFIX = "cseq_track_"


def find_track_slot(track):
    """If the track has a `track_name` meta event matching `cseq_track_NN`,
    return NN (the original cseq 0..15 slot). Otherwise return None."""
    for msg in track:
        if not msg.is_meta:
            continue
        if msg.type == "track_name" and msg.name.startswith(_TRACK_SLOT_PREFIX):
            try:
                return int(msg.name[len(_TRACK_SLOT_PREFIX):])
            except ValueError:
                return None
    return None


def collect_events(track):
    """Walk a mido track and produce a list of cseq-friendly events sorted
    by absolute tick. Each entry: (abs_tick, kind, payload)."""
    abs_tick = 0
    raw = []
    pending = {}  # (channel, note) -> [(abs_tick, vel, raw_index), ...]

    for msg in track:
        abs_tick += msg.time
        if msg.is_meta:
            if msg.type == "set_tempo":
                raw.append((abs_tick, "tempo", msg.tempo))
            elif msg.type == "end_of_track":
                raw.append((abs_tick, "eot", None))
            elif msg.type == "marker":
                if msg.text == "loopstart":
                    raw.append((abs_tick, "loopstart", None))
                else:
                    le = parse_loopend_marker(msg.text)
                    if le is not None:
                        raw.append((abs_tick, "loopend", le))
            # ignore time_signature / key_signature / track_name / etc.
            continue

        t = msg.type
        if t == "note_on" and msg.velocity > 0:
            key = (msg.channel, msg.note)
            idx = len(raw)
            raw.append((abs_tick, "note_on",
                        [msg.channel, msg.note, msg.velocity, 0]))
            pending.setdefault(key, []).append((abs_tick, idx))
        elif t == "note_off" or (t == "note_on" and msg.velocity == 0):
            key = (msg.channel, msg.note)
            q = pending.get(key)
            if q:
                start_tick, idx = q.pop(0)
                ev = list(raw[idx])
                ev[2] = list(ev[2])
                ev[2][3] = abs_tick - start_tick
                raw[idx] = tuple(ev)
                if not q:
                    del pending[key]
            # else: orphan note_off -- drop (cseq has no NoteOff opcode in use)
        elif t == "control_change":
            raw.append((abs_tick, "cc", (msg.channel, msg.control, msg.value)))
        elif t == "program_change":
            raw.append((abs_tick, "pc", (msg.channel, msg.program)))
        elif t == "pitchwheel":
            # mido pitch is signed [-8192, 8191]; MIDI uses [0, 16383]
            raw.append((abs_tick, "pitch", (msg.channel, msg.pitch + 8192)))
        elif t == "aftertouch":  # ChannelPressure
            raw.append((abs_tick, "cp", (msg.channel, msg.value)))
        elif t == "polytouch":   # PolyPressure (rare; engine still handles)
            raw.append((abs_tick, "poly", (msg.channel, msg.note, msg.value)))
        # silently drop SysEx and anything else not in the engine's vocabulary

    # `abs_tick` after the walk is the cumulative time including the
    # end_of_track meta's delta -- i.e. the track's intrinsic eot tick.
    # We always emit our own eot, so drop any explicit ones from `raw`.
    end_tick = abs_tick
    raw = [e for e in raw if e[1] != "eot"]

    # Any unmatched NoteOns get cut off at end_tick.
    for q in pending.values():
        for start_tick, idx in q:
            ev = list(raw[idx])
            ev[2] = list(ev[2])
            ev[2][3] = max(end_tick - start_tick, 0)
            raw[idx] = tuple(ev)

    raw.sort(key=lambda e: e[0])
    return raw, end_tick


def encode_track(track) -> bytes:
    events, end_tick = collect_events(track)
    out = bytearray()
    last_tick = 0

    def emit_delta(tick):
        nonlocal last_tick
        delta = tick - last_tick
        fe_escape(out, encode_varlen(delta))
        last_tick = tick

    for abs_tick, kind, payload in events:
        emit_delta(abs_tick)
        if kind == "tempo":
            tempo = payload
            fe_escape(out, [0xFF, 0x51,
                            (tempo >> 16) & 0xFF,
                            (tempo >> 8) & 0xFF,
                            tempo & 0xFF])
        elif kind == "loopstart":
            # FF 2E + 2-byte placeholder the engine reads-and-ignores.
            fe_escape(out, [0xFF, 0x2E, 0xFF, 0xFF])
        elif kind == "loopend":
            ct, cur, off = payload
            # The meta header (FF 2D) goes through __getTrackByte (escape-aware)
            fe_escape(out, [0xFF, 0x2D])
            # The 6-byte body is read via raw `*tmpPtr++` -- emit literally.
            out.extend([
                ct & 0xFF,
                cur & 0xFF,
                (off >> 24) & 0xFF,
                (off >> 16) & 0xFF,
                (off >> 8) & 0xFF,
                off & 0xFF,
            ])
        elif kind == "note_on":
            ch, note, vel, dur = payload
            fe_escape(out, [0x90 | ch, note & 0x7F, vel & 0x7F])
            fe_escape(out, encode_varlen(dur))
        elif kind == "cc":
            ch, ctrl, val = payload
            fe_escape(out, [0xB0 | ch, ctrl & 0x7F, val & 0x7F])
        elif kind == "pc":
            ch, prog = payload
            fe_escape(out, [0xC0 | ch, prog & 0x7F])
        elif kind == "pitch":
            ch, v14 = payload
            fe_escape(out, [0xE0 | ch, v14 & 0x7F, (v14 >> 7) & 0x7F])
        elif kind == "cp":
            ch, val = payload
            fe_escape(out, [0xD0 | ch, val & 0x7F])
        elif kind == "poly":
            ch, note, val = payload
            fe_escape(out, [0xA0 | ch, note & 0x7F, val & 0x7F])
        # ('eot' is dropped above; we emit our own end-of-track below)

    # End with delta = (end_tick - last_event_tick) + FF 2F, so the eot
    # lands at the original mid's eot tick (preserves intentional
    # silence-before-end). If a note_off ran past the mid's eot, push eot
    # out to that tick.
    final_tick = max(end_tick, last_tick)
    out.extend(encode_varlen(final_tick - last_tick))
    fe_escape(out, [0xFF, 0x2F])
    return bytes(out)


# ---- file assembly --------------------------------------------------------

def build_cseq(mid: mido.MidiFile) -> bytes:
    if mid.type == 2:
        raise ValueError("MIDI Type 2 not supported (asynchronous tracks)")

    division = mid.ticks_per_beat
    if not (1 <= division <= 0x7FFF):
        raise ValueError(f"unsupported division {division}")

    # Decide each track's cseq slot. If a track is named `cseq_track_NN`
    # use NN; otherwise fall through to sequential. Conflicts are resolved
    # by falling back to the next free slot.
    slot_assignments = []  # parallel to mid.tracks
    used = set()
    for t in mid.tracks:
        slot = find_track_slot(t)
        if slot is None or not (0 <= slot < 16) or slot in used:
            slot = next((s for s in range(16) if s not in used), None)
            if slot is None:
                raise ValueError("cseq supports up to 16 tracks; ran out of slots")
        used.add(slot)
        slot_assignments.append(slot)

    bodies_by_slot = {}
    for t, slot in zip(mid.tracks, slot_assignments):
        bodies_by_slot[slot] = encode_track(t)

    # Header: 16 u32 trackOffsets, then 1 u32 division. Then the bodies in
    # ascending-slot order (so the first valid slot lives at the lowest
    # file offset, matching Nintendo's encoder).
    header_size = 16 * 4 + 4
    offsets = [0] * 16
    cursor = header_size
    out = bytearray()
    body_blob = bytearray()
    for slot in sorted(bodies_by_slot):
        offsets[slot] = cursor
        body = bodies_by_slot[slot]
        cursor += len(body)
        body_blob.extend(body)

    for off in offsets:
        out.extend(struct.pack(">I", off))
    out.extend(struct.pack(">I", division))
    out.extend(body_blob)
    return bytes(out)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input", help=".mid input file")
    ap.add_argument("-o", "--output", required=True,
                    help=".cseq.bin output (or .cseq.s to chain through "
                         "disassemble_cseq.py)")
    args = ap.parse_args()

    mid = mido.MidiFile(args.input)
    cseq = build_cseq(mid)

    if args.output.endswith(".cseq.s"):
        disasm = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                              "disassemble_cseq.py")
        with tempfile.NamedTemporaryFile(suffix=".cseq.bin", delete=False) as tf:
            tf.write(cseq)
            tmp_bin = tf.name
        try:
            subprocess.check_call(
                [sys.executable, disasm, tmp_bin, "-o", args.output])
        finally:
            os.unlink(tmp_bin)
    else:
        os.makedirs(os.path.dirname(args.output) or ".", exist_ok=True)
        with open(args.output, "wb") as f:
            f.write(cseq)
        print(f"wrote {args.output} ({len(cseq)} bytes, {len(mid.tracks)} tracks)",
              file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
