.include "macros.inc"

.section .bss

# 0x80136C10 -> 0x80136DA0 [0x190 bytes]
# Unreferenced BSS space @ 80136C10
    .space 8
glabel gMNVsRecordsStatsKind
    .space 4
glabel gMNVsRecordsRedrawSubtitle
    .space 4
glabel gMNVsRecordsTableHeadersGObj
    .space 4
glabel gMNVsRecordsTableValuesGObj
    .space 4
glabel gMNVsRecordsBattleScoreFtKindOrder
    .space 48
glabel gMNVsRecordsRankingFtKindOrder
    .space 48
glabel gMNVsRecordsIndividualFtKindOrder
    .space 48
glabel gMNVsRecordsCurrentIndex
    .space 4
glabel gMNVsRecordsUnlockedMask
    .space 4
glabel gMNVsRecordsFirstColumn
    .space 4
glabel gMNVsRecordsChangeWait
    .space 4
glabel D_ovl32_80136CC8
    .space 192
glabel D_ovl32_80136D88
    .space 4
glabel D_ovl32_80136D8C
    .space 4
glabel D_ovl32_80136D90
    .space 16
