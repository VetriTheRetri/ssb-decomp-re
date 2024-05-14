.include "macros.inc"

.section .bss

# 0x8018E220 -> 0x8018E640 [0x420 bytes]
# Unreferenced BSS space @ 8018E220
    .space 8
glabel gMvOpeningKirbyFramesElapsed
    .space 4
glabel gMvOpeningKirbyNameGObj
    .space 4
glabel gMvOpeningKirbyStageFighterGObj
    .space 8
glabel gMvOpeningKirbyStageCameraGObj
    .space 4
glabel gMvOpeningKirbyAnimHeap
    .space 4
glabel gMvOpeningKirbyPosedFighterYSpeed
    .space 8
glabel dMvOpeningKirbyCameraSettingsAdjustedStart
    .space 32
glabel dMvOpeningKirbyCameraSettingsAdjustedEnd
    .space 32
glabel D_ovl43_8018E288
    .space 384
glabel D_ovl43_8018E408
    .space 56
glabel D_ovl43_8018E440
    .space 4
glabel D_ovl43_8018E444
    .space 4
glabel gMvOpeningKirbyBattleState
    .space 504
