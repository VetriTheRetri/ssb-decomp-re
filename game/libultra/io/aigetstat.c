#include <rcp.h>

u32 osAiGetStatus()
{
    return IO_READ(AI_STATUS_REG);
}
