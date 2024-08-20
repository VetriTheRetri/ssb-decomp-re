#ifndef SYS_SYSTEM_00_H
#define SYS_SYSTEM_00_H

#include <sys/thread3.h>
#include <ssb_types.h>

// Get total size of empty width framebuffer pixels from resolution edge
#define SYDISPLAY_BORDER_SIZE(dimension, pixels, type) \
((dimension) * (pixels) * sizeof(type))

#define SYDISPLAY_DEFINE_FRAMEBUF_ADDR(width, height, w_border, h_border, type, id) \
(                                                                                   \
    (0x80400000 - (((width) * (height) * sizeof(type)) * (3 - (id)))) -             \
    (                                                                               \
        SYDISPLAY_BORDER_SIZE(height, w_border, type) +                             \
        SYDISPLAY_BORDER_SIZE(width, h_border, type)                                \
    )                                                                               \
)

#define SYDISPLAY_DEFINE_DEFAULT() { gSCSubsysFramebuffer0, gSCSubsysFramebuffer1, gSCSubsysFramebuffer2, NULL, 320, 240, 0x16A99 }

#define syDisplayGetZBuffer(start) ((u16*) ((uintptr_t)&scmanager_BSS_END - (start)))

/*
 * Seems to deal with setting the screen size and zbuffer?
 */
typedef struct syDisplaySetup
{
    /* 0x00 */ void *framebuf0;
    /* 0x04 */ void *framebuf1;
    /* 0x08 */ void *framebuf2;
    /* 0x0C */ u16 *zbuffer;
    /* 0x10 */ u32 width;
    /* 0x14 */ u32 height;
    // cycle mode info?
    /* 0x18 */ u32 unk18;

} syDisplaySetup; // size >= 0x18

extern uintptr_t scmanager_BSS_END;         // Z-Buffer pointer = this - 6400 (or 12800 in ovl59)

extern u16 gSCSubsysFramebuffer0[/* */];
extern u16 gSCSubsysFramebuffer1[/* */];
extern u16 gSCSubsysFramebuffer2[/* */];

extern u16 *gSYDisplayZBuffer;
// zbuffer pixel size?
extern u32 gSYDisplayPixelComponentSize;
extern s32 gSYDisplayResWidth;
extern s32 gSYDisplayResHeight;
extern s16 D_80046694;
extern s16 D_80046698;

extern u32 syDisplayGetFillColor(u32 color);
extern void func_80007024(syDisplaySetup *arg0);
extern void func_80006E18(s32 arg0);
extern void syDisplaySetCenterOffsets(s16 left, s16 right, s16 up, s16 down);
extern void func_80006F5C(SCTaskType4 *task);

#endif /* SYS_SYSTEM_00_H */
