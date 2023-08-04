#include <os_internal.h>
#include <rcp.h>

u32 osViGetCurrentLine(void)
{
    return IO_READ(VI_CURRENT_REG);
}
