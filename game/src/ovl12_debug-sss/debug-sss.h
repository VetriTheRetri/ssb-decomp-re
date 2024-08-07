#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>
#include <sys/thread6.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay12ArenaLo;  // 0x800D69F0
extern intptr_t lOverlay12ArenaHi;  // 0x80369240

// DATA
// TODO!

// Stuff - where does it go?!?
#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif