#include <os_internal.h>
#include <rcp.h>
#include "../os/osint.h"

s32 __osSpRawWriteIo(u32 devAddr, u32 data)
{
    if (__osSpDeviceBusy())
        return -1;
    IO_WRITE(devAddr, data);
    return 0;
}
