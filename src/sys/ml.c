#include "ml.h"

#include <sys/crash.h>

#include <ssb_types.h>

#include <PR/ultratypes.h>

void mlResetBumpAlloc(mlBumpAllocRegion *bp) 
{
    bp->ptr = bp->start;
}

void* mlSetBumpAlloc(mlBumpAllocRegion *bp, u32 size, u32 alignment) 
{
    u8 *aligned;
    u32 offset;

    if (alignment != 0) 
    {
        offset  = alignment - 1;
        aligned = (u8*)(((uintptr_t)bp->ptr + (offset)) & ~(offset));
    } 
    else aligned = (u8*)bp->ptr;

    bp->ptr = (void*)(aligned + size);

    if (bp->end < bp->ptr) 
    {
        gsFatalPrintf("ml : alloc overflow #%d\n", bp->id);
        while (TRUE); // { }
    }
    return (void*)aligned;
}

void mlInitBumpAlloc(mlBumpAllocRegion *bp, u32 id, void *start, u32 size) 
{
    bp->id    = id;
    bp->ptr   = start;
    bp->start = start;
    bp->end   = (void*) ((uintptr_t)start + size);
}
