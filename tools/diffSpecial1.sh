#!/bin/bash
# Compile a relocData/*.c file and diff the compiled .data section
# against the corresponding baserom-extracted asset. Usage:
#   tools/diffSpecial1.sh <fid>          # e.g. 226
#   tools/diffSpecial1.sh <path.c>       # e.g. src/relocData/226_LinkSpecial1.c
set -e

PROJECT=$(cd "$(dirname "$0")/.." && pwd)
VERSION=${VERSION:-us}
IDO=$PROJECT/tools/ido-recomp/7.1/cc
CFLAGS="-c -G 0 -non_shared -Xfullwarn -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712,516,624,568,763 -O2 -mips2"
INC="-Iinclude -Isrc -Isrc/relocData -Ibuild/$VERSION/src/relocData"

arg=$1
if [[ -z $arg ]]; then
    echo "usage: $0 <fid|path.c>" >&2
    exit 1
fi

if [[ $arg =~ ^[0-9]+$ ]]; then
    fid=$arg
    src=$(ls "$PROJECT/src/relocData/${fid}_"*.c 2>/dev/null | grep -v '\.jp\.c$' | head -1)
    [[ -z $src ]] && { echo "no src for fid $fid" >&2; exit 1; }
else
    src=$arg
    base=$(basename "$src" .c)
    fid=${base%%_*}
fi

bin=$PROJECT/assets/$VERSION/relocData/$fid.vpk0.bin
[[ -f $bin ]] || bin=$PROJECT/assets/$VERSION/relocData/$fid.bin
[[ -f $bin ]] || { echo "no asset for fid $fid" >&2; exit 1; }

obj=/tmp/reloc_$fid.o
out=/tmp/reloc_$fid.bin
cd "$PROJECT"
$IDO $CFLAGS $INC -o "$obj" "$src"
mips-linux-gnu-objcopy -O binary --only-section=.data "$obj" "$out"

python3 - "$bin" "$out" <<'PYEOF'
import sys
orig = open(sys.argv[1], 'rb').read()
test = open(sys.argv[2], 'rb').read()
print(f'orig: {len(orig):4d} B  {orig.hex()}')
print(f'test: {len(test):4d} B  {test.hex()}')
m = min(len(orig), len(test))
diffs = [(i, orig[i], test[i]) for i in range(m) if orig[i] != test[i]]
if not diffs and len(orig) == len(test):
    print('MATCH')
else:
    print(f'{len(diffs)} byte diff(s) in first {m} bytes:')
    for i, o, t in diffs:
        print(f'  0x{i:02X}: orig={o:02X} test={t:02X}')
    if len(orig) != len(test):
        print(f'SIZE MISMATCH: orig={len(orig)} test={len(test)}')
PYEOF
