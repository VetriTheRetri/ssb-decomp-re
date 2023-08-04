#include <region.h>
#include <R4300.h>

#define HATE(rp) ((OSRegion *)(rp))
void osFree(void *region, void *addr)
{
    register OSRegion *rp = region;
    int i;

    rp = region;
    i = ((u8 *)addr - rp->r_startBufferAddress) / rp->r_bufferSize;
    *(u16 *)(&rp->r_startBufferAddress[i * rp->r_bufferSize]) = rp->r_freeList;
    rp->r_freeList = i;
}
