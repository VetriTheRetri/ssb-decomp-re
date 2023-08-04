#!/bin/bash
set -o pipefail
INPUT="$1"
OUTPUT="${INPUT%.c}.o"

rm -f "$OUTPUT"

CC="$MIPS_CC"  # ido 5.3 via recomp/qemu-irix
CFLAGS="-Wab,-r4300_mul -non_shared -G 0 -Xcpluscomm -fullwarn -wlint -woff 819,820,852,821 -signed -c"
AS="mips-linux-gnu-as"
ASFLAGS="-march=vr4300 -mabi=32"
OPTFLAGS=$(grep '^// COMPILE-FLAGS: ' $INPUT | sed 's#^// COMPILE-FLAGS: ##')
ISET=$(grep '^// COMPILE-ISET: ' $INPUT | sed 's#^// COMPILE-ISET: ##')
if [[ -z "$OPTFLAGS" ]]; then
    OPTFLAGS="-g"
fi
if [[ -z "$ISET" ]]; then
    CFLAGS="$CFLAGS -mips2"
fi

set -e
python3 build.py --drop-mdebug-gptab $CC -- $AS $ASFLAGS -- $CFLAGS $OPTFLAGS $ISET -o "$OUTPUT" "$INPUT"
