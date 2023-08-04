#!/usr/bin/env bash
for A in "$@"; do
    OBJDUMPFLAGS=$(grep '^// OBJDUMP-FLAGS: ' "$A" | sed 's#^// OBJDUMP-FLAGS: ##')
    if [[ -z "$OBJDUMPFLAGS" ]]; then
        OBJDUMPFLAGS="-s"
    fi
    ./compile-test.sh "$A" && mips-linux-gnu-objdump $OBJDUMPFLAGS "${A%.c}.o" > "${A%.c}.objdump"
done
