.include "macros.inc"

.section .bss

# 0x801322B0 -> 0x80132300 [0x50 bytes]
# Unreferenced BSS space @ 801322B0
    .space 8
glabel sMnCongraStatusBuf
    .space 40
glabel sMnCongraFighterKind
    .space 4
glabel sMnCongraSkipWait
    .space 4
glabel sMnCongraSceneChangeWait
    .space 4
glabel sMnCongraIsProceed
    .space 4
glabel sMnCongraIsSceneChange
    .space 16
