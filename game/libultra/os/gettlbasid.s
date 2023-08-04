#include "asm_helper.h"
.set noreorder
.text
LEAF(__osGetTLBASID)
    mfc0 v0, C0_ENTRYHI
    jr ra
    nop
