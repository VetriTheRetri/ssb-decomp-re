#include "asm_helper.h"
.text
LEAF(__osGetConfig)
    STAY2(mfc0 v0, C0_CONFIG)
    jr ra
END(__osGetConfig)