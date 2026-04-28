#!/bin/bash
# Generate src/particles/<name>_txb.c, build, and verify .rodata bytes.
# Usage: tools/check_txb.sh <name> <ucase> <rom_lo> <rom_hi>
set -euo pipefail
name="$1"; ucase="$2"; rom_lo="$3"; rom_hi="$4"
out="src/particles/${name}_txb.c"

python3 tools/decode_txb.py "$name" "$rom_lo" "$rom_hi" --ucase "$ucase" > "$out"
touch "$out"
make "build/${out%.c}.o" > /dev/null 2>&1 || { make "build/${out%.c}.o"; exit 1; }

mips-linux-gnu-objcopy -O binary -j .rodata "build/${out%.c}.o" "/tmp/${name}_built.bin"
expected_size=$(( $(printf '%d' $rom_hi) - $(printf '%d' $rom_lo) ))
dd if=baserom.us.z64 bs=1 skip=$(printf '%d' $rom_lo) count=$expected_size 2>/dev/null > "/tmp/${name}_orig.bin"

if cmp "/tmp/${name}_built.bin" "/tmp/${name}_orig.bin"; then
    echo "$name: EXACT MATCH ($(wc -c < /tmp/${name}_built.bin) bytes)"
else
    echo "$name: MISMATCH"
    cmp -l "/tmp/${name}_built.bin" "/tmp/${name}_orig.bin" | head -20
    exit 1
fi
