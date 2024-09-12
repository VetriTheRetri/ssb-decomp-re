#include "system_00.h"

#include <sys/thread3.h>

#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/ultratypes.h>

u16 *gSYDisplayZBuffer;
u32 gSYDisplayPixelComponentSize;
s32 gSYDisplayResWidth;
s32 gSYDisplayResHeight;
u32 D_80046680;
u32 D_80046684;
void *sSYDisplayFramebufs[3];
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
 * Depends on the state of `gSYDisplayPixelComponentSize`
 * @param color RRGGBBAA
 */
u32 syDisplayGetFillColor(u32 color) {
    // GPACK_RGBA5551, but it doesn't seem to match
    // if that macro is used
    u32 packed = ((color >> 16) & 0xF800) | ((color >> 13) & 0x07C0) | ((color >> 10) & 0x003E)
               | ((color >> 7) & 1);

    return (gSYDisplayPixelComponentSize == G_IM_SIZ_32b) ? color : (packed << 16) | packed;
}

void syDisplayUpdateFramebufs(void *fb1, void *fb2, void *fb3) {
    SCTaskFb mesg;

    mesg.info.type      = SC_TASK_TYPE_FRAMEBUFFERS;
    mesg.info.priority  = 100;
    sSYDisplayFramebufs[0] = mesg.unk24[0] = fb1;
    sSYDisplayFramebufs[1] = mesg.unk24[1] = fb2;
    sSYDisplayFramebufs[2] = mesg.unk24[2] = fb3;

    func_80000970(&mesg.info);
}

void func_80006E18(s32 arg0) {
    D_80046680 |= arg0;

    if ((arg0 & 0x20)) { gSYDisplayPixelComponentSize = G_IM_SIZ_32b; }
    if ((arg0 & 0x10)) { gSYDisplayPixelComponentSize = G_IM_SIZ_16b; }
    D_80046684 = TRUE;
}

// set current screen width?
void syDisplaySetResWidth(s32 width)
{
    gSYDisplayResWidth = width;
    D_80046684       = TRUE;
}

void syDisplaySetResHeight(s32 height)
{
    gSYDisplayResHeight = height;
    D_80046684        = TRUE;
}

void syDisplaySetCenterOffsets(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    D_80046694 = arg0;
    D_80046696 = arg1;
    D_80046698 = arg2;
    D_8004669A = arg3;
    D_80046684 = TRUE;
}

void func_80006EF4(SCTaskVi *task) {
    task->width = gSYDisplayResWidth;
    task->height = gSYDisplayResHeight;
    task->flags = D_80046680;
    task->edgeOffsetLeft = D_80046694;
    task->edgeOffsetRight = D_80046696;
    task->edgeOffsetTop = D_80046698;
    task->edgeOffsetBottom = D_8004669A;
    D_80046680  = 0;
    D_80046684  = FALSE;
}

void func_80006F5C(SCTaskVi *task) {
    if (D_80046684) {
        task->info.type     = SC_TASK_TYPE_VI;
        task->info.priority = 50;
        task->info.fnCheck  = NULL;
        task->info.mq       = NULL;
        func_80006EF4(task);
        osSendMesg(&scTaskQueue, (OSMesg)task, OS_MESG_NOBLOCK);
    }
}

/**
 * @param arg0 screen width?
 * @param arg1 screen height?
 * @param arg2 cycle type?
 */
void func_80006FB8(s32 width, s32 height, u32 arg2)
{
    SCTaskVi task;

    D_80046680 = 0;
    gSYDisplayPixelComponentSize = G_IM_SIZ_16b;
    func_80006E18(arg2);
    syDisplaySetResWidth(width);
    syDisplaySetResHeight(height);
    task.info.type     = SC_TASK_TYPE_VI;
    task.info.priority = 100;
    func_80006EF4(&task);
    func_80000970((void *)&task.info);
}

void func_80007024(syDisplaySetup *display_setup)
{
    syDisplayUpdateFramebufs(display_setup->framebuf0, display_setup->framebuf1, display_setup->framebuf2);
    gSYDisplayZBuffer = display_setup->zbuffer;
    func_80006FB8(display_setup->width, display_setup->height, display_setup->unk18);
}
