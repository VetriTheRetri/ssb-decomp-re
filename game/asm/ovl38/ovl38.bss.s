.include "macros.inc"

.section .bss

# 0x8018E270 -> 0x8018E690 [0x420 bytes]
# Unreferenced BSS space @ 8018E270
    .space 8
glabel gMvOpeningSamusFramesElapsed
    .space 4
glabel gMvOpeningSamusNameGObj
    .space 4
glabel gMvOpeningSamusStageFighterGObj
    .space 8
glabel gMvOpeningSamusStageCameraGObj
    .space 4
glabel gMvOpeningSamusAnimHeap
    .space 4
glabel gMvOpeningSamusPosedFighterYSpeed
    .space 8
glabel dMvOpeningSamusCameraSettingsAdjustedStart
    .space 32
glabel dMvOpeningSamusCameraSettingsAdjustedEnd
    .space 32
glabel D_ovl38_8018E2D8
    .space 384
glabel D_ovl38_8018E458
    .space 56
glabel D_ovl38_8018E490
    .space 4
glabel D_ovl38_8018E494
    .space 4
glabel gMvOpeningSamusBattleState
    .space 504
