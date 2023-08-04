#include "sys/ml.h"

#include "sys/crash.h"

#include <ssb_types.h>

#include <PR/ultratypes.h>

void reset_bump_alloc(struct mlBumpAllocRegion *bp) {
    bp->ptr = bp->start;
}

void *bump_alloc(struct mlBumpAllocRegion *bp, u32 size, u32 alignment) {
    u8 *aligned;
    u32 offset;

    if (alignment != 0) {
        offset  = alignment - 1;
        aligned = (u8 *)(((uintptr_t)bp->ptr + (offset)) & ~(offset));
    } else {
        aligned = bp->ptr;
    }

    bp->ptr = (void *)(aligned + size);
    if (bp->end < bp->ptr) {
        fatal_printf("ml : alloc overflow #%d\n", bp->id);
        while (TRUE) { }
    }

    return aligned;
}

void init_bump_alloc(struct mlBumpAllocRegion *bp, u32 id, void *start, u32 size) {
    bp->id    = id;
    bp->ptr   = start;
    bp->start = start;
    bp->end   = (void *)((uintptr_t)start + size);
}
