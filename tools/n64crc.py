#!/usr/bin/env python3

# Source material http://n64dev.org/n64crc

# Thanks to mkst for sharing this!

import sys
import struct
from pathlib import Path


def int32(x):
    return x & 0xFFFFFFFF


def rol(i, b):
    return int32((i << b) | (i >> (32 - b)))


def calculate_crcs(buffer: bytearray, seed=0xA3886759, start=0x1000, end=0x101000):
    t1 = t2 = t3 = t4 = t5 = t6 = seed

    for d, in struct.iter_unpack(">I", buffer[start:end]):
        r = rol(d, d & 0x1F)

        if int32(t6 + d) < t6:
            t4 = int32(t4 + 1)

        t3 ^= d
        t6 = int32(t6 + d)
        t2 ^= r if (t2 > d) else t6 ^ d
        t5 = int32(t5 + r)
        t1 = int32(t1 + (t5 ^ d))

    return (int32((t6 ^ t4) + t3), int32((t5 ^ t2) + t1))


def main():
    if len(sys.argv) < 2:
        print("Usage: %s <in> [out]" % sys.argv[0])
        sys.exit(1)

    output_filename = input_filename = Path(sys.argv[1])
    if len(sys.argv) > 2:
        output_filename = Path(sys.argv[2])

    if not input_filename.is_file():
        print("ERROR: %s not found!" % input_filename)
        sys.exit(2)

    buffer = bytearray(input_filename.read_bytes())
    if len(buffer) < 0x101000:
        print("ERROR: Not enough data (need 1MB+)")
        sys.exit(3)

    crc1, crc2 = calculate_crcs(buffer)
    # print(f"CRC1: 0x{crc1:08X}, CRC2: 0x{crc2:08X}")
    struct.pack_into(">II", buffer, 0x10, crc1, crc2)
    output_filename.write_bytes(buffer)


if __name__ == '__main__':
    main()