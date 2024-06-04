#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay34ArenaLo;  // 0x801350D0
extern intptr_t lOverlay34ArenaHi;  // 0x803903E0
extern func_8000DF34();
extern func_80010580();
extern func_ovl0_800CD2CC();
extern gCurrScreenWidth;
extern gZBuffer;
extern gPixelComponentSize;

typedef struct viFrameBuf
{
    u16 pix[230 * 320];

} viFrameBuf;

extern viFrameBuf D_NF_80392A00[3];

// DATA
// TODO!

// Stuff - where does it go?!?
#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif