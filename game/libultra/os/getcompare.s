#include "asm_helper.h"

.text
LEAF(__osGetCompare)
    STAY2(mfc0 v0, C0_COMPARE)
    jr ra
END(__osGetCompare)