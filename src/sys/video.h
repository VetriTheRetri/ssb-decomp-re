#ifndef _SYVIDEO_H_
#define _SYVIDEO_H_

#include <ssb_types.h>
#include <sys/thread3.h>

#define SYVIDEO_FLAG_NONE           0x0
#define SYVIDEO_FLAG_SERRATE        0x4
#define SYVIDEO_FLAG_NOSERRATE      0x8
#define SYVIDEO_FLAG_COLORDEPTH16   0x10
#define SYVIDEO_FLAG_COLORDEPTH32   0x20
#define SYVIDEO_FLAG_GAMMA          0x40
#define SYVIDEO_FLAG_NOGAMMA        0x80
#define SYVIDEO_FLAG_BLACKOUT       0x100
#define SYVIDEO_FLAG_NOBLACKOUT     0x200
#define SYVIDEO_FLAG_GAMMADITHER    0x1000
#define SYVIDEO_FLAG_NOGAMMADITHER  0x2000
#define SYVIDEO_FLAG_DITHERFILTER   0x4000
#define SYVIDEO_FLAG_NODITHERFILTER 0x8000
#define SYVIDEO_FLAG_DIVOT          0x10000
#define SYVIDEO_FLAG_NODIVOT        0x20000

// Get total size of empty width framebuffer pixels from resolution edge
#define SYVIDEO_BORDER_SIZE(dimension, pixels, type) \
((dimension) * (pixels) * sizeof(type))

#define SYVIDEO_DEFINE_FRAMEBUFFER_ADDR(width, height, w_border, h_border, type, id)   \
(                                                                                   \
    (0x80400000 - (((width) * (height) * sizeof(type)) * (3 - (id)))) -             \
    (                                                                               \
        SYVIDEO_BORDER_SIZE(height, w_border, type) +                               \
        SYVIDEO_BORDER_SIZE(width, h_border, type)                                  \
    )                                                                               \
)

#define SYVIDEO_SETUP_DEFAULT()                                \
{                                                               \
    gSCSubsysFramebuffer0,                                      \
    gSCSubsysFramebuffer1,                                      \
    gSCSubsysFramebuffer2,                                      \
    NULL,                                                       \
    320,                                                        \
    240,                                                        \
    SYVIDEO_FLAG_DIVOT          | SYVIDEO_FLAG_DITHERFILTER |   \
    SYVIDEO_FLAG_NOGAMMADITHER  | 0x800                     |   \
    SYVIDEO_FLAG_NOBLACKOUT     | SYVIDEO_FLAG_NOGAMMA      |   \
    SYVIDEO_FLAG_COLORDEPTH16   | SYVIDEO_FLAG_NOSERRATE    |   \
    0x1                                                         \
}

#define syVideoGetZBuffer(start) ((u16*) ((uintptr_t)&scmanager_BSS_END - (start)))

/*
 * Seems to deal with setting the screen size and zbuffer?
 */
typedef struct SYVideoSetup
{
    /* 0x00 */ void *framebuf0;
    /* 0x04 */ void *framebuf1;
    /* 0x08 */ void *framebuf2;
    /* 0x0C */ u16 *zbuffer;
    /* 0x10 */ u32 width;
    /* 0x14 */ u32 height;
    /* 0x18 */ u32 flags;

} SYVideoSetup; // size >= 0x18

extern uintptr_t scmanager_BSS_END;         // Z-Buffer pointer = this - 6400 (or 12800 in ovl59)

extern u16 gSCSubsysFramebuffer0[/* */];
extern u16 gSCSubsysFramebuffer1[/* */];
extern u16 gSCSubsysFramebuffer2[/* */];

extern u16 *gSYVideoZBuffer;
extern u32 gSYVideoColorDepth;
extern s32 gSYVideoResWidth;
extern s32 gSYVideoResHeight;
extern s16 gSYVideoOffsetLeft;
extern s16 gSYVideoOffsetTop;

extern u32 syVideoGetFillColor(u32 color);
extern void syVideoSetFramebuffers(void *fb0, void *fb1, void *fb2);
extern void syVideoSetFlags(u32 flags);
extern void syVideoSetResWidth(s32 width);
extern void syVideoSetResHeight(s32 height);
extern void syVideoSetCenterOffsets(s16 left, s16 right, s16 top, s16 bottom);
extern void syVideoInitViTask(SYTaskVi *task);
extern void syVideoApplySettingsNoBlock(SYTaskVi *task);
extern void syVideoSetScreenSettings(s32 width, s32 height, u32 flags);
extern void syVideoInit(SYVideoSetup *video_setup);

#endif
