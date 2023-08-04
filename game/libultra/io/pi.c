#include <os_internal.h>
#include "piint.h"

int __osPiDeviceBusy()
{
    register u32 stat = IO_READ(PI_STATUS_REG);
    if (stat & (PI_STATUS_DMA_BUSY | PI_STATUS_IO_BUSY))
        return 1;
    return 0;
}
