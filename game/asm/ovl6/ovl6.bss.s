.include "macros.inc"

.section .bss

# 0x8018F1A0 -> 0x8018F710 [0x570 bytes]
glabel gBonusGameFileData
    .space 16
glabel gBonusBattleState
    .space 496
glabel gBonusTimerDigits
    .space 6
glabel D_ovl6_8018F3A6
    .space 2
glabel gIsBonusGameTimeUp
    .space 8
glabel gOverlay6StatusBuf
    .space 800
glabel gOverlay6ForceBuf
    .space 64
