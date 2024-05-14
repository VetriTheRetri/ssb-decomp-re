.include "macros.inc"

.section .bss

# 0x8018E220 -> 0x8018E640 [0x420 bytes]
# Unreferenced BSS space @ 8018E220
    .space 8
glabel gMvOpeningPikachuFramesElapsed
    .space 4
glabel gMvOpeningPikachuNameGObj
    .space 4
glabel gMvOpeningPikachuStageFighterGObj
    .space 8
glabel gMvOpeningPikachuStageCameraGObj
    .space 4
glabel gMvOpeningPikachuAnimHeap
    .space 4
glabel gMvOpeningPikachuPosedFighterYSpeed
    .space 8
glabel dMvOpeningPikachuCameraSettingsAdjustedStart
    .space 32
glabel dMvOpeningPikachuCameraSettingsAdjustedEnd
    .space 32
glabel D_ovl42_8018E288
    .space 384
glabel D_ovl42_8018E408
    .space 56
glabel D_ovl42_8018E440
    .space 4
glabel D_ovl42_8018E444
    .space 4
glabel gMvOpeningPikachuBattleState
    .space 504
