.include "macros.inc"

.section .bss

# 0x8018E220 -> 0x8018E640 [0x420 bytes]
# Unreferenced BSS space @ 8018E220
    .space 8
glabel gMvOpeningYoshiFramesElapsed
    .space 4
glabel gMvOpeningYoshiNameGObj
    .space 4
glabel gMvOpeningYoshiStageFighterGObj
    .space 8
glabel gMvOpeningYoshiStageCameraGObj
    .space 4
glabel gMvOpeningYoshiAnimHeap
    .space 4
glabel gMvOpeningYoshiPosedFighterXSpeed
    .space 8
glabel dMvOpeningYoshiCameraSettingsAdjustedStart
    .space 32
glabel dMvOpeningYoshiCameraSettingsAdjustedEnd
    .space 32
glabel D_ovl41_8018E288
    .space 384
glabel D_ovl41_8018E408
    .space 56
glabel D_ovl41_8018E440
    .space 4
glabel D_ovl41_8018E444
    .space 4
glabel gMvOpeningYoshiBattleState
    .space 504
