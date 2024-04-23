#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay36ArenaLo;  // 0x80132BC0
extern intptr_t lOverlay36ArenaHi;  // 0x803903E0

// DATA
// TODO!

// Stuff - where does it go?!?
typedef struct CameraVec7
{
    Vec3f eye;
    Vec3f at;
    f32 upx;

} CameraVec7;

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif