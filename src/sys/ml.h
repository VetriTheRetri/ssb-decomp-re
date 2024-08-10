#ifndef _ML_H_
#define _ML_H_

#include <PR/ultratypes.h>

#define ML_BYTES_TO_KBYTES(q) ((q) * 1024)

// mlRegion?
typedef struct mlRegion 
{
    u32 id;
    void *start;
    void *end;
    void *ptr;

} mlRegion;

extern void mlInitBumpAlloc(mlRegion *buf, u32 id, void *start, size_t size);
extern void* mlSetBumpAlloc(mlRegion *buf, size_t size, u32 alignment);
extern void mlResetBumpAlloc(mlRegion *buf);

#endif /* _ML_H_ */
