#!/usr/bin/env python3
'''
    Read a BSS .s file and output all symbols as C char arrays to stdout
'''
import sys
from pathlib import Path

if len(sys.argv) != 2:
    print(f"Usage: {sys.argv[0]} <.bss.s file>")
    exit()

def parse_int(s):
    if s.startswith("0x") or s.startswith("0X"):
        return int(s,16)
    elif s.startswith("0"):
        return int(s,8)
    else:
        return int(s)

def print_symbol(symbol, size):
    ty = None
    array = False
    if size == 1:
        ty = 'u8'
    elif size == 2:
        ty = 'u16'
    elif size == 4:
        ty = 'u32'
    else:
        ty = 'u8'
        array = True
    
    if array:
        print(f'{ty} {symbol}[{size}];')
    else:
        print(f'{ty} {symbol};')

def main():
    bss_file = Path(sys.argv[1])
    with open(bss_file, 'r') as f:
        in_bss_section = False
        current_symbol = None

        for line in f:
            if line.startswith(".section"):
                in_bss_section = line.split()[1] == ".bss"
                continue
            elif not in_bss_section:
                continue

            if "glabel" in line:
                current_symbol = line.split()[-1]
            elif ".space" in line:
                val = parse_int(line.split()[-1])
                print_symbol(current_symbol, val)

if __name__ == "__main__":
    main()
