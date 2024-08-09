.include "macros.inc"

.section .bss

# 0x80133130 -> 0x80133170 [0x40 bytes]
# Unreferenced BSS space @ 80133130
    .space 8
glabel dMNDebugCubeExitInterrupt
    .space 4
glabel dMNDebugCubeTransitionInterrupt
    .space 4
glabel D_ovl13_80133140
    .space 48
