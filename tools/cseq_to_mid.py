#!/usr/bin/env python3
"""Convert a Nintendo "compressed MIDI" sequence (.cseq.bin) into a
standard MIDI Type 1 file (.mid) viewable / editable in any DAW.

This is a *semantic* conversion -- the output is a normal MIDI file,
not a byte-identical mirror of the cseq:

  * Backup-ref escapes (`0xFE A B L`) are expanded to literal bytes.
  * NoteOn-with-duration (Nintendo's extension) becomes a standard
    NoteOn + a scheduled NoteOff at delta_total + duration ticks.
  * Meta TEMPO regains the standard `03` length byte.
  * Custom meta types `0x2D` (loopstart) / `0x2E` (loopend) are written
    as standard text markers (`MARKER`) so DAWs preserve them.
  * Trailing leftover-from-buffer bytes after each track's end-of-track
    are dropped.

To get back: see `mid_to_cseq.py`. Going `.mid -> .cseq.bin` is *not*
byte-identical to the original baserom slice (Nintendo's backup-ref
compression isn't reversed); it produces a working but uncompressed
sequence with the same audible output.

Run from repo root:
    python3 tools/cseq_to_mid.py assets/audio/S1_music/seq_09_Hyrule.cseq.bin
"""
import argparse
import os
import struct
import subprocess
import sys
import tempfile


# ---- cseq parser: backup-ref-aware byte stream ---------------------------

class CSeqTrack:
    """Mirrors __getTrackByte from src/libultra/n_audio/n_env.c."""
    def __init__(self, data, start, end):
        self.data = data
        self.end = end
        self.cur = start
        # backup-section state
        self.bu_ptr = 0
        self.bu_len = 0

    def at_end(self) -> bool:
        return self.bu_len == 0 and self.cur >= self.end

    def get_raw_byte(self) -> int:
        """Direct read from main stream, bypassing backup-ref expansion.
        Mirrors the `*tmpPtr++` access the engine uses for the loopend body."""
        b = self.data[self.cur]
        self.cur += 1
        return b

    def get_byte(self) -> int:
        if self.bu_len:
            b = self.data[self.bu_ptr]
            self.bu_ptr += 1
            self.bu_len -= 1
            return b
        b = self.data[self.cur]
        self.cur += 1
        if b == 0xFE:
            nxt = self.data[self.cur]
            self.cur += 1
            if nxt != 0xFE:
                # backup ref: nxt | next-byte = backup amount, next-next = len
                lo = self.data[self.cur]; self.cur += 1
                ln = self.data[self.cur]; self.cur += 1
                backup = (nxt << 8) | lo
                self.bu_ptr = self.cur - (backup + 4)
                self.bu_len = ln
                b = self.data[self.bu_ptr]
                self.bu_ptr += 1
                self.bu_len -= 1
        return b

    def read_varlen(self) -> int:
        v = self.get_byte()
        if v & 0x80:
            v &= 0x7F
            while True:
                c = self.get_byte()
                v = (v << 7) | (c & 0x7F)
                if not (c & 0x80):
                    break
        return v


def parse_track_to_events(data, start, end):
    """Walk one cseq track and return a list of (abs_tick, kind, payload)
    tuples in tick order.

    `kind` is one of: 'note_on', 'note_off', 'midi', 'tempo', 'marker',
    'sysex_or_other'. We schedule a synthetic 'note_off' for each NoteOn
    using its duration so the output MIDI has properly paired notes."""
    t = CSeqTrack(data, start, end)
    events = []         # list of (abs_tick, sort_key, ('kind', ...))
    abs_tick = 0
    last_status = 0

    # We use a sort_key so that, within the same tick, NoteOff comes
    # *before* a re-trigger NoteOn on the same key (key 0 < key 1).
    NOTEOFF_KEY = 0
    OTHER_KEY = 1

    while not t.at_end():
        try:
            delta = t.read_varlen()
        except IndexError:
            break
        abs_tick += delta

        try:
            status = t.get_byte()
        except IndexError:
            break

        if status == 0xFF:  # meta
            mtype = t.get_byte()
            if mtype == 0x51:  # tempo
                b1, b2, b3 = t.get_byte(), t.get_byte(), t.get_byte()
                tempo = (b1 << 16) | (b2 << 8) | b3
                events.append((abs_tick, OTHER_KEY, ("tempo", tempo)))
                last_status = 0
            elif mtype == 0x2F:  # end-of-track
                events.append((abs_tick, OTHER_KEY, ("eot",)))
                last_status = 0
                break  # logical end -- ignore any trailing bytes
            elif mtype == 0x2E:  # AL_CMIDI_LOOPSTART_CODE: 2 bytes follow (engine reads & ignores)
                t.get_byte(); t.get_byte()
                events.append((abs_tick, OTHER_KEY, ("marker", "loopstart")))
                last_status = 0
            elif mtype == 0x2D:  # AL_CMIDI_LOOPEND_CODE: 6 bytes read raw (engine uses *tmpPtr)
                loop_ct  = t.get_raw_byte()
                cur_lp   = t.get_raw_byte()
                o0 = t.get_raw_byte(); o1 = t.get_raw_byte()
                o2 = t.get_raw_byte(); o3 = t.get_raw_byte()
                offset = (o0 << 24) | (o1 << 16) | (o2 << 8) | o3
                events.append((abs_tick, OTHER_KEY,
                               ("marker", f"loopend count={loop_ct} cur={cur_lp} off={offset}")))
                last_status = 0
            else:
                # Unknown meta -- best-effort skip 0 args; leave a marker so
                # editors notice.
                events.append((abs_tick, OTHER_KEY,
                               ("marker", f"meta_0x{mtype:02X}")))
                last_status = 0
            continue

        # MIDI channel event
        if status & 0x80:
            last_status = status
            new_status = True
        else:
            if last_status == 0:
                # data without status -- skip a byte and hope to recover
                continue
            t.cur -= 0  # status was actually a data byte; back up one read
            # Note: get_byte already consumed it; we need to undo. Simpler:
            # treat status as the first data byte under last_status.
            data_first = status
            status = last_status
            new_status = False

        kind4 = status & 0xF0
        ch = status & 0x0F

        if kind4 in (0xC0, 0xD0):  # ProgramChange / ChannelPressure: 1 data byte
            d1 = data_first if not new_status else t.get_byte()
            events.append((abs_tick, OTHER_KEY,
                           ("midi", status, d1, None)))
            continue

        d1 = data_first if not new_status else t.get_byte()
        d2 = t.get_byte()

        if kind4 == 0x90:  # NoteOn (Nintendo: also reads varlen duration)
            duration = t.read_varlen()
            if d2 == 0:
                # zero-velocity NoteOn = NoteOff in standard MIDI
                events.append((abs_tick, NOTEOFF_KEY,
                               ("note_off", ch, d1, 0)))
            else:
                events.append((abs_tick, OTHER_KEY,
                               ("note_on", ch, d1, d2)))
                events.append((abs_tick + duration, NOTEOFF_KEY,
                               ("note_off", ch, d1, 64)))
            continue

        if kind4 == 0x80:
            events.append((abs_tick, NOTEOFF_KEY,
                           ("note_off", ch, d1, d2)))
            continue

        # ControlChange / PolyPressure / PitchBend
        events.append((abs_tick, OTHER_KEY,
                       ("midi", status, d1, d2)))

    events.sort(key=lambda e: (e[0], e[1]))
    return events


# ---- standard MIDI emitter -----------------------------------------------

def encode_varlen(v: int) -> bytes:
    out = [v & 0x7F]
    v >>= 7
    while v:
        out.insert(0, (v & 0x7F) | 0x80)
        v >>= 7
    return bytes(out)


def emit_track_name(name: str) -> bytes:
    """A FF 03 (Sequence/Track Name) meta event at delta 0. We use this to
    encode the cseq's 16-slot track index so mid_to_cseq.py can put each
    track back in the right slot."""
    data = name.encode("utf-8")
    return b"\x00\xFF\x03" + encode_varlen(len(data)) + data


def emit_track(events) -> bytes:
    """Emit standard MIDI track-event bytes for the sorted event list.

    The cseq's intrinsic 'eot' may land before synthesized note_off events
    (NoteOns whose duration extends past the track's FF 2F). Standard MIDI
    can't have events after an eot, so we defer the eot to the very end at
    max(intrinsic_eot_tick, last_event_tick) -- the audible output is
    unchanged."""
    out = bytearray()
    last_tick = 0
    last_status = -1
    intrinsic_eot_tick = None

    def emit(status, data):
        nonlocal last_status
        # Standard MIDI permits running status for channel events (0x80-0xEF).
        if 0x80 <= status <= 0xEF and status == last_status:
            out.extend(data)
        else:
            out.append(status)
            out.extend(data)
            last_status = status if status < 0xF0 else 0  # meta/sysex break running

    for abs_tick, _, evt in events:
        kind = evt[0]
        if kind == "eot":
            # Don't emit yet -- remember the tick and continue so any later
            # note_offs (or events) still land in the .mid.
            intrinsic_eot_tick = abs_tick
            continue

        delta = abs_tick - last_tick
        out.extend(encode_varlen(delta))
        last_tick = abs_tick

        if kind == "note_on":
            _, ch, note, vel = evt
            emit(0x90 | ch, bytes([note, vel]))
        elif kind == "note_off":
            _, ch, note, vel = evt
            emit(0x80 | ch, bytes([note, vel]))
        elif kind == "midi":
            _, status, d1, d2 = evt
            emit(status, bytes([d1]) if d2 is None else bytes([d1, d2]))
        elif kind == "tempo":
            _, tempo = evt
            out += b"\xFF\x51\x03"
            out.append((tempo >> 16) & 0xFF)
            out.append((tempo >> 8) & 0xFF)
            out.append(tempo & 0xFF)
            last_status = 0
        elif kind == "marker":
            _, text = evt
            data = text.encode("utf-8")
            out += b"\xFF\x06"
            out.extend(encode_varlen(len(data)))
            out.extend(data)
            last_status = 0

    final_tick = last_tick
    if intrinsic_eot_tick is not None and intrinsic_eot_tick > final_tick:
        final_tick = intrinsic_eot_tick
    out.extend(encode_varlen(final_tick - last_tick))
    out += b"\xFF\x2F\x00"
    return bytes(out)


def emit_smf(division: int, tracks_events) -> bytes:
    """Build a Type 1 standard MIDI file from a list of (track-id, events)."""
    chunks = bytearray()

    def chunk(magic: bytes, body: bytes):
        chunks.extend(magic)
        chunks.extend(struct.pack(">I", len(body)))
        chunks.extend(body)

    # MThd: format=1, ntrks, division
    header = struct.pack(">HHH", 1, len(tracks_events), division)
    chunk(b"MThd", header)

    for track_id, events in tracks_events:
        body = emit_track_name(f"cseq_track_{track_id:02d}") + emit_track(events)
        chunk(b"MTrk", body)
    return bytes(chunks)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input", help=".cseq.bin or .cseq.s file")
    ap.add_argument("-o", "--output", default=None,
                    help=".mid output path (default: input with .mid)")
    args = ap.parse_args()

    inp = args.input
    if inp.endswith(".cseq.s"):
        # Assemble on the fly via assemble_cseq.py.
        asm = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                           "assemble_cseq.py")
        with tempfile.NamedTemporaryFile(suffix=".cseq.bin", delete=False) as tf:
            tmp_bin = tf.name
        subprocess.check_call([sys.executable, asm, inp, "-o", tmp_bin])
        try:
            data = open(tmp_bin, "rb").read()
        finally:
            os.unlink(tmp_bin)
    else:
        data = open(inp, "rb").read()
    track_offsets = list(struct.unpack_from(">16I", data, 0))
    division = struct.unpack_from(">I", data, 64)[0]

    valid = [(i, off) for i, off in enumerate(track_offsets) if off]
    valid.sort(key=lambda x: x[1])

    tracks_events = []
    for idx, (track_id, off) in enumerate(valid):
        next_end = valid[idx + 1][1] if idx + 1 < len(valid) else len(data)
        evs = parse_track_to_events(data, off, next_end)
        tracks_events.append((track_id, evs))

    smf = emit_smf(division, tracks_events)

    out_path = args.output
    if out_path is None:
        if args.input.endswith(".cseq.bin"):
            out_path = args.input[:-9] + ".mid"
        elif args.input.endswith(".cseq.s"):
            out_path = args.input[:-7] + ".mid"
        else:
            out_path = args.input + ".mid"
    with open(out_path, "wb") as f:
        f.write(smf)
    print(f"wrote {out_path} ({len(smf)} bytes, {len(tracks_events)} tracks)",
          file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
