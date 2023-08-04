#include <region.h>

s32 osGetRegionBufSize(void *region)
{
    register OSRegion *rp = region;
    return rp->r_bufferSize;
}
