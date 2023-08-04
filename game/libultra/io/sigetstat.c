#include <os_internal.h>
#include "siint.h"

u32 __osSiGetStatus()
{
    return IO_READ(SI_STATUS_REG);
}
