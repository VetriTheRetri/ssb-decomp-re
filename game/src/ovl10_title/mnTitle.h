#ifndef _RESULTS_H_
#define _RESULTS_H_

#include <ssb_types.h>
#include <sys/obj_renderer.h>

// EXTERN
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay10ArenaLo;  // 0x801345B0
extern intptr_t lOverlay10ArenaHi;  // 0x80369240

// DATA
// TODO!

// Stuff - where does it go?!?
typedef enum mnTitleLayout
{
    nMNTitleLayoutIntro,        // logo animation intro
    nMNTitleLayoutAnimate,      // Super Smash Bros. animation
    nMNTitleLayoutFinal         // final layout

} mnTitleLayout;


typedef enum mnTitleTextureIndex
{
    nMNTitleTextureIndexDropShadow,
    nMNTitleTextureIndexSmash,
    nMNTitleTextureIndexSuper,
    nMNTitleTextureIndexBros,
    nMNTitleTextureIndexTM,
    nMNTitleTextureIndexFooter,
    nMNTitleTextureIndexHeader,
    nMNTitleTextureIndexPressStart,
    nMNTitleTextureIndexLogo,
    nMNTitleTextureIndexTM2

} mnTitleTextureIndex;

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