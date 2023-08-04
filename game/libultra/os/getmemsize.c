#include <os_internal.h>
#include <rcp.h>
#include <R4300.h>

u32 osGetMemSize(void)
{
    u32 memory;
    u32 memsize = 0x300000;
    do
    {
        memsize += 0x100000;
        memory = memsize + K1BASE;
        *(u32 *)(memsize + K1BASE) = 0x12345678;
        *(u32 *)(memory + 0x100000 - 4) = 0x87654321;
    } while (*(u32 *)(memory) == 0x12345678 && *(u32 *)(memory + 0x100000 - 4) == 0x87654321);
    return memsize;
}
