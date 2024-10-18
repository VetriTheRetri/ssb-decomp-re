#include "video.h"

#include <sys/thread3.h>

#include <PR/mbi.h>
#include <PR/os.h>

u16 *gSYVideoZBuffer;
u32 gSYVideoColorDepth;
s32 gSYVideoResWidth;
s32 gSYVideoResHeight;
u32 sSYVideoFlags;
sb32 sSYVideoIsSettingsChanged;
void *sSYVideoFramebuffers[3];
s16 sSYVideoOffsetLeft;
s16 sSYVideoOffsetRight;
s16 sSYVideoOffsetTop;
s16 sSYVideoOffsetBottom;

/*
 * Convert an RBGA32 color value into a packed set of RBGA5551
 * that can be used with gDPSetFillColor
 *
 * Depends on the state of `gSYVideoColorDepth`
 * @param color RRGGBBAA
 */
u32 syVideoGetFillColor(u32 color)
{
    // GPACK_RGBA5551, but it doesn't seem to match if that macro is used
    u32 packed = ((color >> 16) & 0xF800) | ((color >> 13) & 0x07C0) | ((color >> 10) & 0x003E) | ((color >> 7) & 0x0001);

    return (gSYVideoColorDepth == G_IM_SIZ_32b) ? color : (packed << 16) | packed;
}

void syVideoSetFramebuffers(void *fb1, void *fb2, void *fb3)
{
    SCTaskFb mesg;

    mesg.info.type = nSYScheduleTaskFramebuffers;
    mesg.info.priority = 100;

    sSYVideoFramebuffers[0] = mesg.unk24[0] = fb1;
    sSYVideoFramebuffers[1] = mesg.unk24[1] = fb2;
    sSYVideoFramebuffers[2] = mesg.unk24[2] = fb3;

    func_80000970(&mesg.info);
}

void syVideoSetFlags(u32 flags)
{
    sSYVideoFlags |= flags;

    if ((flags & SYVIDEO_FLAG_COLORDEPTH32))
    {
        gSYVideoColorDepth = G_IM_SIZ_32b;
    }
    if ((flags & SYVIDEO_FLAG_COLORDEPTH16))
    {
        gSYVideoColorDepth = G_IM_SIZ_16b;
    }
    sSYVideoIsSettingsChanged = TRUE;
}

// set current screen width?
void syVideoSetResWidth(s32 width)
{
    gSYVideoResWidth = width;
    sSYVideoIsSettingsChanged = TRUE;
}

void syVideoSetResHeight(s32 height)
{
    gSYVideoResHeight = height;
    sSYVideoIsSettingsChanged = TRUE;
}

void syVideoSetCenterOffsets(s16 left, s16 right, s16 top, s16 bottom)
{
    sSYVideoOffsetLeft = left;
    sSYVideoOffsetRight = right;
    sSYVideoOffsetTop = top;
    sSYVideoOffsetBottom = bottom;

    sSYVideoIsSettingsChanged = TRUE;
}

void syVideoSetupViTask(SCTaskVi *task)
{
    task->width = gSYVideoResWidth;
    task->height = gSYVideoResHeight;
    task->flags = sSYVideoFlags;
    task->edgeOffsetLeft = sSYVideoOffsetLeft;
    task->edgeOffsetRight = sSYVideoOffsetRight;
    task->edgeOffsetTop = sSYVideoOffsetTop;
    task->edgeOffsetBottom = sSYVideoOffsetBottom;

    sSYVideoFlags = 0;
    sSYVideoIsSettingsChanged = FALSE;
}

void syVideoApplySettingsNoBlock(SCTaskVi *task)
{
    if (sSYVideoIsSettingsChanged) 
    {
        task->info.type     = nSYScheduleTaskVi;
        task->info.priority = 50;
        task->info.fnCheck  = NULL;
        task->info.mq       = NULL;
        syVideoSetupViTask(task);
        osSendMesg(&scTaskQueue, (OSMesg)task, OS_MESG_NOBLOCK);
    }
}

/*
 * @param arg0 screen width?
 * @param arg1 screen height?
 * @param arg2 cycle type?
 */
void syVideoSetScreenSettings(s32 width, s32 height, u32 flags)
{
    SCTaskVi task;

    sSYVideoFlags = 0;
    gSYVideoColorDepth = G_IM_SIZ_16b;

    syVideoSetFlags(flags);
    syVideoSetResWidth(width);
    syVideoSetResHeight(height);

    task.info.type = nSYScheduleTaskVi;
    task.info.priority = 100;

    syVideoSetupViTask(&task);
    func_80000970(&task.info);
}

void syVideoInit(syVideoSetup *video_setup)
{
    syVideoSetFramebuffers(video_setup->framebuf0, video_setup->framebuf1, video_setup->framebuf2);
    gSYVideoZBuffer = video_setup->zbuffer;
    syVideoSetScreenSettings(video_setup->width, video_setup->height, video_setup->flags);
}
