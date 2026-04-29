#!/usr/bin/env python3
"""Disassemble a Nintendo "compressed MIDI" sequence (.cseq.bin) into a
byte-faithful, hand-editable text form (.cseq.s).

The format round-trips byte-identical with `assemble_cseq.py`. We dump at
the *physical* byte level (no interpretation) so that backup refs, varlen
widths, and running-status choices are all preserved verbatim:

    .division N
    .track N           (only valid tracks; emitted in physical-offset order)
        .b XX [XX...]      literal bytes; 0xFE in the list emits as 0xFE 0xFE
        .backup OFF LEN    emits 0xFE [hi(OFF)] [lo(OFF)] [LEN]   (4 bytes)
    .endtrack

A separate annotator pass then walks the bytes, tracks running status, and
emits `;` comments showing the decoded MIDI mnemonic for each line wherever
it can do so unambiguously. Annotations are *advisory* -- garbage comments
are tolerable, mismatched bytes are not.
"""
import argparse
import os
import struct
import sys


# Cap a `.b` directive's hex byte count so lines don't get too wide.
ROW_BYTES = 16


def chunk_track_physical(data, start, end):
    """Walk the physical byte stream of one track. Yields:
      - ('b', byte)         a logical byte (with `0xFE 0xFE` collapsed to
                            a single 0xFE; the assembler re-escapes on emit)
      - ('backup', off, len) a 4-byte backup-ref escape
      - ('raw', byte)       a physical byte that should NOT be re-escaped
                            (used for trailing-garbage 0xFE that doesn't
                            fit either the escape-pair or backup-ref pattern)
    """
    pos = start
    while pos < end:
        b = data[pos]
        if b == 0xFE:
            if pos + 1 < end and data[pos + 1] == 0xFE:
                yield ("b", 0xFE)
                pos += 2
            elif pos + 3 < end:
                bo = (data[pos + 1] << 8) | data[pos + 2]
                ln = data[pos + 3]
                yield ("backup", bo, ln)
                pos += 4
            else:
                # 0xFE near end-of-track that doesn't fit escape or backup --
                # leftover-from-buffer pad, must NOT be re-escaped on round-trip.
                yield ("raw", 0xFE)
                pos += 1
        else:
            yield ("b", b)
            pos += 1


# ---- annotator: walks the same chunk stream and emits comments ----------

NAMES = {
    0x80: "note_off", 0x90: "note_on", 0xA0: "poly_pressure",
    0xB0: "control",  0xC0: "program", 0xD0: "channel_pressure",
    0xE0: "pitch_bend",
}


def annotate(chunks):
    """Given the chunk list for one track, return list of strings (comments)
    aligned 1:1 with chunks. Each chunk gets either a comment or '' (no
    annotation). Best-effort -- when state is uncertain, comments stop."""
    comments = [""] * len(chunks)
    last_status = 0
    i = 0

    def expect_logical(n_after_status):
        """Try to greedily consume n logical bytes from chunks[i+1...].
        Returns (data_byte_list, next_index) or (None, i) on failure
        (e.g. backup interrupted)."""
        out = []
        j = i + 1
        while len(out) < n_after_status and j < len(chunks):
            kind = chunks[j][0]
            if kind == "b":
                out.append(chunks[j][1])
                j += 1
            else:  # backup interrupts logical decode
                return (None, j)
        if len(out) < n_after_status:
            return (None, j)
        return (out, j)

    def expect_varlen():
        """Read a varlen varlen at chunks[i+1...]. Returns (value, next_index)
        or (None, i) on backup interrupt."""
        value = 0
        j = i + 1
        while j < len(chunks):
            if chunks[j][0] != "b":
                return (None, j)
            b = chunks[j][1]
            j += 1
            value = (value << 7) | (b & 0x7F)
            if not (b & 0x80):
                return (value, j)
        return (None, j)

    while i < len(chunks):
        kind = chunks[i][0]
        if kind == "backup":
            comments[i] = f"backup -{chunks[i][1]} ({chunks[i][2]} bytes)"
            i += 1
            last_status = 0  # backup may straddle event -- reset
            continue

        # try to parse: varlen delta + event
        # First see if chunks[i] looks like a varlen byte
        b = chunks[i][1]
        # walk varlen
        delta_val, j = expect_varlen()
        if delta_val is None:
            # interrupted; just label this byte as a varlen continuation
            comments[i] = "varlen byte (chunked)"
            i += 1
            continue
        delta_start = i
        delta_end = j
        if j >= len(chunks):
            comments[i] = f"delta {delta_val} (end of track)"
            i = j
            continue

        # Mark the delta chunks
        if delta_start != delta_end - 1:
            comments[delta_start] = f"delta {delta_val} (varlen)"
        else:
            comments[delta_start] = f"delta {delta_val}"

        # Now try to read event
        i = j
        if i >= len(chunks) or chunks[i][0] != "b":
            continue
        status_byte = chunks[i][1]

        if status_byte == 0xFF:
            # meta event
            # read type
            if i + 1 >= len(chunks) or chunks[i + 1][0] != "b":
                comments[i] = "meta (truncated)"
                i += 1
                last_status = 0
                continue
            mtype = chunks[i + 1][1]
            if mtype == 0x51:  # tempo, 3 bytes
                data_, j = expect_logical(4)  # status + type + 3 = read 3 after type
                # Actually expect_logical reads from chunks[i+1...]. We've already
                # accounted for type; need 3 more bytes.
                if data_ is None or len(data_) < 4:
                    comments[i] = "meta tempo (truncated)"
                    i = j
                else:
                    tempo = (data_[1] << 16) | (data_[2] << 8) | data_[3]
                    comments[i] = f"meta tempo {tempo} us/q"
                    i = i + 1 + 4  # past FF, type, 3 bytes
                last_status = 0
                continue
            if mtype == 0x2F:
                comments[i] = "meta end-of-track"
                i += 2
                last_status = 0
                continue
            if mtype == 0x2E:
                # AL_CMIDI_LOOPSTART_CODE: FF 2E + 2 bytes (engine reads & ignores)
                comments[i] = "meta loopstart"
                i += 4
                last_status = 0
                continue
            if mtype == 0x2D:
                # AL_CMIDI_LOOPEND_CODE: FF 2D + 6 bytes (loopCt, curLpCt, 4-byte offset)
                comments[i] = "meta loopend"
                i += 8
                last_status = 0
                continue
            comments[i] = f"meta type 0x{mtype:02X}"
            i += 2
            last_status = 0
            continue

        # MIDI channel event
        if status_byte & 0x80:
            status = status_byte
            last_status = status
            new_status = True
            i_event = i + 1
        else:
            if last_status == 0:
                comments[i] = "running-status data (status unknown!)"
                i += 1
                continue
            status = last_status
            new_status = False
            i_event = i

        kind4 = status & 0xF0
        ch = status & 0x0F
        name = NAMES.get(kind4, f"midi 0x{kind4:02X}")

        # Read N bytes after status (logical)
        if kind4 in (0xC0, 0xD0):
            n = 1
        else:
            n = 2

        # Read those bytes
        bytes_read = []
        j2 = i_event
        while len(bytes_read) < n and j2 < len(chunks):
            if chunks[j2][0] != "b":
                break
            bytes_read.append(chunks[j2][1])
            j2 += 1
        if len(bytes_read) < n:
            comments[i] = f"ch{ch} {name} (truncated)"
            i = j2
            continue

        params = " ".join(str(x) for x in bytes_read)
        run = "" if new_status else " (run)"
        comments[i] = f"ch{ch} {name}{run} {params}"

        # note-on duration varlen
        if kind4 == 0x90:
            i = j2
            dur_val, j3 = expect_varlen()
            if dur_val is not None:
                comments[i_event - (1 if new_status else 0)] += f" dur={dur_val}"
                # mark the dur varlen chunks (i .. j3-1)
                # Actually just leave them with no comment; the dur is shown above.
                i = j3
                continue
            else:
                i = j2
                continue

        i = j2

    return comments


# ---- emitter: turn chunks + comments into .s lines ----------------------

def hex2(b): return f"{b:02X}"


def emit_track(chunks, comments, out):
    """Emit `.b` / `.raw` / `.backup` lines, packing same-kind chunks into
    rows of up to ROW_BYTES. Inline comment is taken from the first chunk
    of each row (close enough for readability)."""
    i = 0
    while i < len(chunks):
        kind = chunks[i][0]
        if kind == "backup":
            line = f".backup 0x{chunks[i][1]:X} {chunks[i][2]}"
            if comments[i]:
                line = f"{line:<32} ; {comments[i]}"
            out.append(line)
            i += 1
            continue
        # gather a run of like-kind chunks
        directive = ".raw" if kind == "raw" else ".b"
        run = []
        comment = comments[i] if comments[i] else None
        while i < len(chunks) and chunks[i][0] == kind and len(run) < ROW_BYTES:
            run.append(chunks[i][1])
            i += 1
        line = f"{directive} " + " ".join(hex2(x) for x in run)
        if comment:
            line = f"{line:<48} ; {comment}"
        out.append(line)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input", help="path to a .cseq.bin file")
    ap.add_argument("-o", "--output", default=None,
                    help="output .cseq.s path (default: input with .s)")
    args = ap.parse_args()

    data = open(args.input, "rb").read()
    track_offsets = list(struct.unpack_from(">16I", data, 0))
    division = struct.unpack_from(">I", data, 64)[0]

    valid = [(i, off) for i, off in enumerate(track_offsets) if off]
    valid.sort(key=lambda t: t[1])

    out = [
        "; Compressed-MIDI sequence, byte-faithful disassembly.",
        "; Round-trips through assemble_cseq.py to byte-identical bytes.",
        "",
        f".division {division}",
        "",
    ]

    for idx, (track_id, off) in enumerate(valid):
        track_end = valid[idx + 1][1] if idx + 1 < len(valid) else len(data)
        chunks = list(chunk_track_physical(data, off, track_end))
        comments = annotate(chunks)
        out.append(f".track {track_id}")
        emit_track(chunks, comments, out)
        out.append(".endtrack")
        out.append("")

    out_path = args.output
    if out_path is None:
        if args.input.endswith(".cseq.bin"):
            out_path = args.input[:-len(".bin")] + ".s"
        else:
            out_path = args.input + ".s"
    with open(out_path, "w") as f:
        f.write("\n".join(out))
        f.write("\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
