#include <os_internal.h>
#include <rcp.h>

u32 osViGetStatus(void)
{
    return IO_READ(VI_STATUS_REG);
}
