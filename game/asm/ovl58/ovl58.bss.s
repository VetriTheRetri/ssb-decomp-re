.include "macros.inc"

.section .bss

# 0x80132040 -> 0x80132080 [0x40 bytes]
# Unreferenced BSS space @ 80132040
    .space 8
glabel sMNN64StatusBuf
    .space 40
glabel sMNN64SkipAllowWait
    .space 4
glabel sMNN64IsProceedOpening
    .space 12
