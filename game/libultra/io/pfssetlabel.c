#include <os_internal.h>

#include "controller.h"
s32 osPfsSetLabel(OSPfs *pfs, u8 *label)
{
    int i;
    s32 ret;
    PFS_CHECK_ID;
    if (label != NULL)
    {
        for (i = 0; i < ARRLEN(pfs->label); i++)
        {
            if (*label == 0)
                break;
            pfs->label[i] = *label++;
        }
    }
    SET_ACTIVEBANK_TO_ZERO;
    ERRCK(__osContRamWrite(pfs->queue, pfs->channel, 7, pfs->label, FALSE));
    return 0;
}
