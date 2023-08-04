#include "asm_helper.h"
.set noreorder
.text
LEAF(__osSetWatchLo)
    mtc0 a0, C0_WATCHLO
    nop
    jr ra
    nop
END(__osSetWatchLo)
