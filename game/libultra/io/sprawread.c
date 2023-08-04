#include <os_internal.h>
#include <rcp.h>
#include "../os/osint.h"

s32 __osSpRawReadIo(u32 devAddr, u32 *data)
{
    if (__osSpDeviceBusy())
        return -1;
    *data = IO_READ(devAddr);
    return 0;
}

