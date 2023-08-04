#include <os_internal.h>
#include "viint.h"

void osViFade(u8 active, u16 factor)
{

    register u32 saveMask = __osDisableInt();
    if (active)
    {
        __osViNext->y.offset = factor & VI_2_10_FPART_MASK; //TODO: magic constant
        __osViNext->state |= VI_STATE_FADE;
    }
    else
        __osViNext->state &= ~VI_STATE_FADE;
    __osRestoreInt(saveMask);
}
