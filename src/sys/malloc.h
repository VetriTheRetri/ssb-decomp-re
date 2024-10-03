#ifndef _ML_H_
#define _ML_H_

#include <PR/ultratypes.h>

// syMallocRegion?
typedef struct syMallocRegion 
{
    u32 id;
    void *start;
    void *end;
    void *ptr;

} syMallocRegion;

extern void syMallocInit(syMallocRegion *buf, u32 id, void *start, size_t size);
extern void* syMallocSet(syMallocRegion *buf, size_t size, u32 alignment);
extern void syMallocReset(syMallocRegion *buf);

#endif /* _ML_H_ */
