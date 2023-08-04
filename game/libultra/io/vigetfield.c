#include <os_internal.h>
#include <rcp.h>

u32 osViGetCurrentField(void)
{
    return IO_READ(VI_CURRENT_REG) & 1; //related to interlacing, see rcp.h
}
