#include <region.h>

s32 osGetRegionBufCount(void *region)
{
    register OSRegion *rp = region;
    return rp->r_bufferCount;
}

