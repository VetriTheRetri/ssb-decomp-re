.include "macros.inc"

.section .bss

# 0x8018E2F0 -> 0x8018E860 [0x570 bytes]
glabel sAutoDemoBattleState
    .space 496
glabel sAutoDemoFocusChangeWait
    .space 4
glabel sAutoDemoCharacterFlag
    .space 4
glabel sAutoDemoFighterNameGObj
    .space 4
glabel sAutoDemoProc
    .space 4
glabel sAutoDemoMPoints
    .space 16
glabel sAutoDemoStatusBuf
    .space 800
glabel sAutoDemoForceBuf
    .space 64
