#!/usr/bin/env python3
"""Reverse of disassemble_cseq.py: assemble a `.cseq.s` text file back into
a byte-identical `.cseq.bin`.

Directives (one per line; semicolon comments and blank lines ignored):
  .division N            sets the file-level division
  .track N               opens track N (track regions are emitted in the
                         order they appear; trackOffset[N] is set to the
                         current write position)
  .endtrack              closes the current track (optional - any new
                         .track also closes the previous)
  .delta N               appends minimum-encoding varlen(N) to the track
  .b XX [XX...]          appends literal bytes, escaping any 0xFE as 0xFE 0xFE
  .backup OFF LEN        appends 0xFE [hi(OFF)] [lo(OFF)] [LEN]
  .raw XX [XX...]        appends literal bytes WITHOUT 0xFE escaping
                         (escape hatch for non-canonical encodings)
"""
import argparse
import struct
import sys


def encode_varlen(value: int) -> bytes:
    if value < 0:
        raise ValueError("varlen cannot be negative")
    out = [value & 0x7F]
    value >>= 7
    while value:
        out.insert(0, (value & 0x7F) | 0x80)
        value >>= 7
    return bytes(out)


def parse_int(tok: str) -> int:
    return int(tok, 0)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input", help=".cseq.s file")
    ap.add_argument("-o", "--output", default=None,
                    help=".cseq.bin output (default: input with .bin)")
    args = ap.parse_args()

    division = None
    tracks = {}              # track_id -> bytearray of physical bytes
    track_order = []         # ids in insertion order
    current_track = None     # id of track currently being filled

    with open(args.input) as f:
        for lineno, raw in enumerate(f, 1):
            line = raw.split(";", 1)[0].strip()
            if not line:
                continue
            parts = line.split()
            cmd = parts[0]
            args_toks = parts[1:]

            if cmd == ".division":
                division = parse_int(args_toks[0])
                continue
            if cmd == ".track":
                tid = parse_int(args_toks[0])
                if tid in tracks:
                    raise SystemExit(f"line {lineno}: duplicate .track {tid}")
                current_track = tid
                tracks[tid] = bytearray()
                track_order.append(tid)
                continue
            if cmd == ".endtrack":
                current_track = None
                continue

            if current_track is None:
                raise SystemExit(f"line {lineno}: directive {cmd!r} outside .track")
            buf = tracks[current_track]

            if cmd == ".delta":
                buf.extend(encode_varlen(parse_int(args_toks[0])))
            elif cmd == ".b":
                # 0xFE is the escape byte; double it for literal
                for tok in args_toks:
                    b = parse_int(tok) if tok.startswith("0x") else int(tok, 16)
                    if b == 0xFE:
                        buf.extend(b"\xFE\xFE")
                    else:
                        buf.append(b)
            elif cmd == ".raw":
                for tok in args_toks:
                    b = parse_int(tok) if tok.startswith("0x") else int(tok, 16)
                    buf.append(b)
            elif cmd == ".backup":
                off = parse_int(args_toks[0])
                ln  = parse_int(args_toks[1])
                buf.append(0xFE)
                buf.append((off >> 8) & 0xFF)
                buf.append(off & 0xFF)
                buf.append(ln & 0xFF)
            else:
                raise SystemExit(f"line {lineno}: unknown directive {cmd!r}")

    if division is None:
        raise SystemExit("no .division directive")

    # Layout: 16 trackOffset[] + division (68 bytes), then tracks in
    # insertion order at the offsets we record.
    out = bytearray(68)
    offsets = [0] * 16
    pos = 68
    for tid in track_order:
        offsets[tid] = pos
        out.extend(tracks[tid])
        pos += len(tracks[tid])

    for i, off in enumerate(offsets):
        struct.pack_into(">I", out, i * 4, off)
    struct.pack_into(">I", out, 64, division)

    out_path = args.output or (
        args.input[:-2] + ".bin" if args.input.endswith(".s") else args.input + ".bin")
    with open(out_path, "wb") as f:
        f.write(bytes(out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
