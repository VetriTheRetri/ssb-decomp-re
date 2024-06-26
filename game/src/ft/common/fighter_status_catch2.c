#include <ft/fighter.h>

// 0x801886D0
Vec3f ftCommon_CatchPull_OffsetGFX = { 0.0F, 0.0F, 0.0F };

// 0x80149EC0
void ftCommon_CatchPull_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);

    if (ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CatchWait_SetStatus) != FALSE)
    {
        ftStruct *catch_fp = ftGetStruct(this_fp->catch_gobj);

        catch_fp->status_vars.common.capture.is_goto_pulled_wait = TRUE;
    }
}

// 0x80149F04
void ftCommon_CatchPull_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CatchPull, fp->status_vars.common.catchmain.catch_pull_frame_begin, 1.0F, (FTSTATUPDATE_SLOPECONTOUR_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));

    fp->catch_gobj = fp->search_gobj;

    fp->x192_flag_b3 = FALSE;

    ftSetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    if (fp->proc_slope != NULL)
    {
        fp->proc_slope(fighter_gobj);
    }
    pos = ftCommon_CatchPull_OffsetGFX;

    ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_heavy], &pos);
    efParticle_CatchSwirl_MakeEffect(&pos);
    ftMainMakeRumble(fp, 9, 0);
}

// 0x80149FCC
void ftCommon_CatchWait_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.catchwait.throw_wait != 0)
    {
        fp->status_vars.common.catchwait.throw_wait--;
    }
    ftCommon_Throw_CheckInterruptCatchWait(fighter_gobj);
}

// 0x8014A000
void ftCommon_CatchWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CatchWait, 0.0F, 1.0F, FTSTATUPDATE_SLOPECONTOUR_PRESERVE);

    fp->status_vars.common.catchwait.throw_wait = FTCOMMON_CATCH_THROW_WAIT;

    ftSetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        ftCommon_SetModelPartRenderIndex(fighter_gobj, 0x15, 0);
        ftCommon_SetModelPartRenderIndex(fighter_gobj, 0x13, -1);
    }
    else if ((fp->ft_kind == Ft_Kind_Yoshi) || (fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        ftCommon_SetModelPartRenderIndex(fighter_gobj, 7, 1);
    }
}