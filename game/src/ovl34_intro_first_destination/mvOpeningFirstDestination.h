#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay34ArenaLo;  // 0x801350D0
extern intptr_t lOverlay34ArenaHi;  // 0x803903E0

typedef struct viFrameBuf
{
    u16 pix[230 * 320];

} viFrameBuf;

// DATA
// TODO!

// Stuff - where does it go?!?
#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif