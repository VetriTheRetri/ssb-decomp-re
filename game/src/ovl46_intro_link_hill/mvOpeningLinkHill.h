#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay46ArenaLo;  // 0x801329A0
extern intptr_t lOverlay46ArenaHi;  // 0x803903E0

// DATA
// TODO!

// Stuff - where does it go?!?

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif