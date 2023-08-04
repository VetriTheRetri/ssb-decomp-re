#include <region.h>

void *osMalloc(void *region)
{

    register OSRegion *rp = region;
    unsigned char *addr;
    if (rp->r_freeList == MAX_BUFCOUNT)
    {
        return 0;
    }
    addr = &rp->r_startBufferAddress[rp->r_freeList * rp->r_bufferSize];
    rp->r_freeList = *(u16 *)addr;
    return addr;
}
