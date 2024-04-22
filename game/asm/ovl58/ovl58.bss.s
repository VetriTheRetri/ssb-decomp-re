.include "macros.inc"

.section .bss

# 0x80132040 -> 0x80132080 [0x40 bytes]
# Unreferenced BSS space @ 80132040
    .space 8
glabel sMnN64StatusBuf
    .space 40
glabel sMnN64SkipAllowWait
    .space 4
glabel sMnN64IsProceedOpening
    .space 12
