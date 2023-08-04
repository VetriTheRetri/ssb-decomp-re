#ifndef SYS_SYSTEM_00_H
#define SYS_SYSTEM_00_H

#include "sys/thread3.h"

#include <PR/ultratypes.h>

/**
 * Seems to deal with setting the screen size and zbuffer?
 */
struct ScreenSettings {
    /* 0x00 */ void *fb1;
    /* 0x04 */ void *fb2;
    /* 0x08 */ void *fb3;
    /* 0x0C */ u16 *zBuffer;
    /* 0x10 */ u32 screenWidth;
    /* 0x14 */ u32 screenHeight;
    // cycle mode info?
    /* 0x18 */ u32 unk18;
}; // size >= 0x18

extern u16 *gZBuffer;
// zbuffer pixel size?
extern u32 gPixelComponentSize;
extern s32 gCurrScreenWidth;
extern s32 gCurrScreenHeight;
extern s16 D_80046694;
extern s16 D_80046698;

extern u32 rgba32_to_fill_color(u32 color);
extern void func_80007024(struct ScreenSettings *arg0);
extern void func_80006E18(s32 arg0);
extern void func_80006E94(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
extern void func_80006F5C(struct SCTaskType4 *task);

#endif /* SYS_SYSTEM_00_H */
