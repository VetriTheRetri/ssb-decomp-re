#include "sys/system_00.h"

#include "sys/thread3.h"

#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/ultratypes.h>

u16 *gZBuffer;
u32 gPixelComponentSize;
s32 gCurrScreenWidth;
s32 gCurrScreenHeight;
u32 D_80046680;
u32 D_80046684;
void *sFrameBuffers[3];
s16 D_80046694;
s16 D_80046696;
s16 D_80046698;
s16 D_8004669A;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

/**
 * Convert an RBGA32 color value into a packed set of RBGA5551
 * that can be used with gDPSetFillColor
 *
 * Depends on the state of `gPixelComponentSize`
 * @param color RRGGBBAA
 */
u32 rgba32_to_fill_color(u32 color) {
    // GPACK_RGBA5551, but it doesn't seem to match
    // if that macro is used
    u32 packed = ((color >> 16) & 0xF800) | ((color >> 13) & 0x07C0) | ((color >> 10) & 0x003E)
               | ((color >> 7) & 1);

    return gPixelComponentSize == G_IM_SIZ_32b ? color : (packed << 16) | packed;
}

void update_framebuffers(void *fb1, void *fb2, void *fb3) {
    struct SCTaskType5 mesg;

    mesg.info.unk00  = 5;
    mesg.info.unk04  = 100;
    sFrameBuffers[0] = mesg.unk24[0] = fb1;
    sFrameBuffers[1] = mesg.unk24[1] = fb2;
    sFrameBuffers[2] = mesg.unk24[2] = fb3;

    func_80000970(&mesg.info);
}

void func_80006E18(s32 arg0) {
    D_80046680 |= arg0;

    if ((arg0 & 0x20)) { gPixelComponentSize = G_IM_SIZ_32b; }
    if ((arg0 & 0x10)) { gPixelComponentSize = G_IM_SIZ_16b; }
    D_80046684 = TRUE;
}

// set current screen width?
void set_screen_width(s32 arg0) {
    gCurrScreenWidth = arg0;
    D_80046684       = TRUE;
}

void set_screen_height(s32 arg0) {
    gCurrScreenHeight = arg0;
    D_80046684        = TRUE;
}

void func_80006E94(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    D_80046694 = arg0;
    D_80046696 = arg1;
    D_80046698 = arg2;
    D_8004669A = arg3;
    D_80046684 = TRUE;
}

void func_80006EF4(struct SCTaskType4 *task) {
    task->unk24 = gCurrScreenWidth;
    task->unk28 = gCurrScreenHeight;
    task->unk2C = D_80046680;
    task->unk30 = D_80046694;
    task->unk32 = D_80046696;
    task->unk34 = D_80046698;
    task->unk36 = D_8004669A;
    D_80046680  = 0;
    D_80046684  = FALSE;
}

void func_80006F5C(struct SCTaskType4 *task) {
    if (D_80046684) {
        task->info.unk00 = 4;
        task->info.unk04 = 50;
        task->info.func  = NULL;
        task->info.unk20 = NULL;
        func_80006EF4(task);
        osSendMesg(&gScheduleTaskQueue, (OSMesg)task, OS_MESG_NOBLOCK);
    }
}

/**
 * @param arg0 screen width?
 * @param arg1 screen height?
 * @param arg2 cycle type?
 */
void func_80006FB8(s32 width, s32 height, u32 arg2) {
    struct SCTaskType4 task;

    D_80046680          = 0;
    gPixelComponentSize = G_IM_SIZ_16b;
    func_80006E18(arg2);
    set_screen_width(width);
    set_screen_height(height);
    task.info.unk00 = 4;
    task.info.unk04 = 100;
    func_80006EF4(&task);
    func_80000970((void *)&task.info);
}

void func_80007024(struct ScreenSettings *arg0) {
    update_framebuffers(arg0->fb1, arg0->fb2, arg0->fb3);
    gZBuffer = arg0->zBuffer;
    func_80006FB8(arg0->screenWidth, arg0->screenHeight, arg0->unk18);
}
