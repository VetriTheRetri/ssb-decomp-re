#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay33ArenaLo;  // 0x80136A90
extern intptr_t lOverlay33ArenaHi;  // 0x803903E0

// DATA
// TODO!

// Stuff - where does it go?!?
typedef enum charsActionKind
{
    charsActionKindSpecialHi,        // USP
    charsActionKindSpecialN,         // NSP
    charsActionKindSpecialLw         // DSP

} charsActionKind;

typedef struct charsActionInfo
{
    s32 status_id;
    s32 anim_length;
    u32 flags;
} charsActionInfo;

typedef struct charsSpecialActionInfo
{
    charsActionInfo info[3][8];
} charsSpecialActionInfo;

#define GetAddressFromOffset(file_ptr, offset) \
((int*)((intptr_t)(file_ptr) + (intptr_t)(offset))) \

#endif