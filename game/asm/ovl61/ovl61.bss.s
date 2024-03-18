.include "macros.inc"

.section .bss

# 0x80133060 -> 0x80133170 [0x110 bytes]
glabel sMnDataCharactersGObj
    .space 4
glabel sMnDataVSRecordGObj
    .space 4
glabel sMnDataSoundTestGObj
    .space 16
glabel sMnDataOption
    .space 4
glabel sMnDataMenuGObj
    .space 4
glabel sMnDataFirstAvailableOption
    .space 4
glabel sMnDataLastAvailableOption
    .space 4
glabel sMnDataIsSoundTestUnlocked
    .space 4
glabel sMnDataIsOptionSelected
    .space 4
glabel sMnDataOptionChangeWait
    .space 4
glabel sMnDataTotalTimeFrames
    .space 4
glabel sMnDataReturnFrame
    .space 8
glabel sMnDataStatusBuf
    .space 192
glabel sMnDataFiles
    .space 4
glabel D_ovl61_80133164
    .space 12
