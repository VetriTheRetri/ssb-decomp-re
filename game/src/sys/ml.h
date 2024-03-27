#ifndef _ML_H_
#define _ML_H_

#include <PR/ultratypes.h>

#define ML_BYTES_TO_KBYTES(q) ((q) * 1024)

// mlBumpAllocRegion?
typedef struct mlBumpAllocRegion 
{
    u32 id;
    void *start;
    void *end;
    void *ptr;

} mlBumpAllocRegion;

extern void mlInitBumpAlloc(struct mlBumpAllocRegion *buf, u32 id, void *start, u32 size);
extern void* mlSetBumpAlloc(struct mlBumpAllocRegion *buf, u32 size, u32 alignment);
extern void mlResetBumpAlloc(struct mlBumpAllocRegion *buf);

#endif /* _ML_H_ */
