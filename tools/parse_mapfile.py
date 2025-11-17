#!/usr/bin/env python3
"""
Parse a mapfile and extract symbol definitions to a text file.
Outputs symbols in the format: symbol_name = address;
"""

import re
import sys
from pathlib import Path


def parse_mapfile(mapfile_path, output_path):
    """
    Parse a mapfile and extract symbol definitions.
    
    Args:
        mapfile_path: Path to the input mapfile
        output_path: Path to the output text file
    """
    # Pattern to match actual symbol definitions (functions/variables), not sections or linker defines
    # Matches lines like:
    #                0x80031650                __osMotorAccess
    # But NOT lines with equals signs like:
    #                0x800a3aa8                        D_800A3AA8 = 0x800a3aa8
    # And NOT section headers that start with a period like .text, .bss, etc.
    symbol_pattern = re.compile(r'^\s+0x([0-9a-fA-F]+)\s+([a-zA-Z_][a-zA-Z0-9_]*)$')
    
    symbols = []
    
    print(f"Parsing {mapfile_path}...")
    
    with open(mapfile_path, 'r', encoding='utf-8') as f:
        for line_num, line in enumerate(f, 1):
            match = symbol_pattern.match(line)
            if match:
                address = match.group(1)
                symbol_name = match.group(2)
                # Skip section names (they start with .)
                if not symbol_name.startswith('.'):
                    symbols.append((symbol_name, address))
    
    print(f"Found {len(symbols)} symbols")
    print(f"Sorting symbols by address...")
    
    # Sort by hex address value (convert to int for proper numeric sorting)
    symbols.sort(key=lambda x: int(x[1], 16))
    
    print(f"Writing to {output_path}...")
    
    with open(output_path, 'w', encoding='utf-8') as f:
        for symbol_name, address in symbols:
            f.write(f"{symbol_name} = 0x{address};\n")
    
    print(f"Done! Wrote {len(symbols)} symbols to {output_path}")


def main():
    # Default paths
    default_mapfile = Path("build/smashbrothers.us.map")
    default_output = Path("symbols_from_map.txt")
    
    # Parse command line arguments if provided
    if len(sys.argv) > 1:
        mapfile_path = Path(sys.argv[1])
    else:
        mapfile_path = default_mapfile
    
    if len(sys.argv) > 2:
        output_path = Path(sys.argv[2])
    else:
        output_path = default_output
    
    # Check if mapfile exists
    if not mapfile_path.exists():
        print(f"Error: Mapfile '{mapfile_path}' not found!", file=sys.stderr)
        sys.exit(1)
    
    # Parse and write output
    parse_mapfile(mapfile_path, output_path)


if __name__ == "__main__":
    main()
