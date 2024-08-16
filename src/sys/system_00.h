#ifndef SYS_SYSTEM_00_H
#define SYS_SYSTEM_00_H

#include <sys/thread3.h>
#include <ssb_types.h>

#define SYDISPLAY_DEFINE_DEFAULT() { gSCSubsysFramebuffer1, gSCSubsysFramebuffer2, gSCSubsysFramebuffer3, NULL, 320, 240, 0x16A99 }

/*
 * Seems to deal with setting the screen size and zbuffer?
 */
typedef struct syDisplaySetup
{
    /* 0x00 */ void *framebuf1;
    /* 0x04 */ void *framebuf2;
    /* 0x08 */ void *framebuf3;
    /* 0x0C */ u16 *zbuffer;
    /* 0x10 */ u32 width;
    /* 0x14 */ u32 height;
    // cycle mode info?
    /* 0x18 */ u32 unk18;

} syDisplaySetup; // size >= 0x18

extern u16 gSCSubsysFramebuffer1[/* */];
extern u16 gSCSubsysFramebuffer2[/* */];
extern u16 gSCSubsysFramebuffer3[/* */];

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
