#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay10ArenaLo;  // 0x801350D0
extern intptr_t lOverlay10ArenaHi;  // 0x803903E0

// DATA
// TODO!

// Stuff - where does it go?!?
typedef struct mnTitleTextureConfig
{
    s32 x;
    s32 y;
    intptr_t offset;

} mnTitleTextureConfig;

#define TAKE_MAX(a, b) \
if ((a) < (b)) (a) = (b) \

#define TAKE_MIN(a, b) \
if ((a) > (b)) (a) = (b) \

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif