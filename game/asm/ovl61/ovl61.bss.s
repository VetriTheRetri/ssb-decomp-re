.include "macros.inc"

.section .bss

# 0x80133060 -> 0x80133170 [0x110 bytes]
glabel sMNDataCharactersGObj
    .space 4
glabel sMNDataVSRecordGObj
    .space 4
glabel sMNDataSoundTestGObj
    .space 16
glabel sMNDataOption
    .space 4
glabel sMNDataMenuGObj
    .space 4
glabel sMNDataFirstAvailableOption
    .space 4
glabel sMNDataLastAvailableOption
    .space 4
glabel sMNDataIsSoundTestUnlocked
    .space 4
glabel sMNDataIsOptionSelected
    .space 4
glabel sMNDataOptionChangeWait
    .space 4
glabel sMNDataTotalTimeFrames
    .space 4
glabel sMNDataReturnFrame
    .space 8
glabel sMNDataStatusBuf
    .space 192
glabel sMNDataFiles
    .space 4
glabel D_ovl61_80133164
    .space 12
