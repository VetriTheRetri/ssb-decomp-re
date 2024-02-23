.include "macros.inc"

.section .bss

# 0x8018E2F0 -> 0x8018E860 [0x570 bytes]
glabel gAutoDemoBattleState
    .space 496
glabel gAutoDemoFocusChangeWait
    .space 4
glabel gAutoDemoCharacterFlag
    .space 4
glabel gAutoDemoFighterNameGObj
    .space 4
glabel gAutoDemoProc
    .space 4
glabel gAutoDemoMPoints
    .space 16
glabel D_ovl64_8018E500
    .space 800
glabel D_ovl64_8018E820
    .space 64
