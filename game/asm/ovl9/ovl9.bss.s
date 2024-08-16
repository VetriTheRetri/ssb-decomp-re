.include "macros.inc"

.section .bss

# 0x8036A400 -> 0x80371460 [0x7060 bytes]
glabel D_ovl9_8036A400
    .space 28672
glabel gMNDebugMenuCursorIndexWhenExited
    .space 4
glabel D_ovl9_80371404
    .space 4
glabel gMNDebugMenuMenuGObj
    .space 4
glabel gMNDebugMenuMenuItems
    .space 4
glabel gMNDebugMenuMenuItemsCount
    .space 4
glabel gMNDebugMenuCursorIndex
    .space 4
glabel gMNDebugMenuDefaultMenuRenderProc
    .space 4
glabel gMNDebugMenuRedrawInterrupt
    .space 4
glabel gMNDebugMenuIsMenuOpen
    .space 4
glabel gMNDebugMenuOriginalGSGTLNumTasks
    .space 4
glabel gMNDebugMenuStringBuffer
    .space 56
