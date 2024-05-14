.include "macros.inc"

.section .bss

# 0x801322B0 -> 0x80132300 [0x50 bytes]
# Unreferenced BSS space @ 801322B0
    .space 8
glabel sMNCongraStatusBuf
    .space 40
glabel sMNCongraFighterKind
    .space 4
glabel sMNCongraSkipWait
    .space 4
glabel sMNCongraSceneChangeWait
    .space 4
glabel sMNCongraIsProceed
    .space 4
glabel sMNCongraIsSceneChange
    .space 16
