.include "macros.inc"

.section .bss

# 0x80133060 -> 0x80133170 [0x110 bytes]
glabel gMnDataCharactersGObj
    .space 4
glabel gMnDataVSRecordGObj
    .space 4
glabel gMnDataSoundTestGObj
    .space 16
glabel gMnDataOption
    .space 4
glabel gMnDataMenuGObj
    .space 4
glabel gMnDataFirstAvailableOption
    .space 4
glabel gMnDataLastAvailableOption
    .space 4
glabel gMnDataIsSoundTestUnlocked
    .space 4
glabel gMnDataIsOptionSelected
    .space 4
glabel gMnDataOptionChangeWait
    .space 4
glabel gMnDataTotalTimeFrames
    .space 4
glabel gMnDataReturnFrame
    .space 8
glabel D_ovl61_801330A0
    .space 192
glabel gMnDataSpriteFiles
    .space 4
glabel D_ovl61_80133164
    .space 12
