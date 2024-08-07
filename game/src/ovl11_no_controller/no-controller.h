#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay11ArenaLo;  // 0x800D6B30
extern intptr_t lOverlay11ArenaHi;  // 0x80392A00

// DATA
// TODO!

// Stuff - where does it go?!?
#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif