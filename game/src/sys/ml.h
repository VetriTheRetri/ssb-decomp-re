#ifndef SYS_ML_H
#define SYS_ML_H

#include <PR/ultratypes.h>

// mlBumpAllocRegion?
typedef struct mlBumpAllocRegion {
    /* 0x00 */ u32 id;
    /* 0x04 */ void *start;
    /* 0x08 */ void *end;
    /* 0x0C */ void *ptr;
} mlBumpAllocRegion; // size == 0x10

extern void init_bump_alloc(struct mlBumpAllocRegion *buf, u32 id, void *start, u32 size);
extern void *bump_alloc(struct mlBumpAllocRegion *buf, u32 size, u32 alignment);
extern void reset_bump_alloc(struct mlBumpAllocRegion *buf);

#endif /* SYS_ML_H */
