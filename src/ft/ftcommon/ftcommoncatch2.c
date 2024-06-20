#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801886D0
Vec3f dFTCommonCatchPullEffectOffset = { 0.0F, 0.0F, 0.0F };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80149EC0
void ftCommonCatchPullProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);

    if (ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCatchWaitSetStatus) != FALSE)
    {
        ftStruct *catch_fp = ftGetStruct(this_fp->catch_gobj);

        catch_fp->status_vars.common.capture.is_goto_pulled_wait = TRUE;
    }
}

// 0x80149F04
void ftCommonCatchPullSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CatchPull, fp->status_vars.common.catchmain.catch_pull_frame_begin, 1.0F, (FTSTATUPDATE_SLOPECONTOUR_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));

    fp->catch_gobj = fp->search_gobj;

    fp->x192_flag_b3 = FALSE;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);

    if (fp->proc_slope != NULL)
    {
        fp->proc_slope(fighter_gobj);
    }
    pos = dFTCommonCatchPullEffectOffset;

    ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_heavy], &pos);
    efParticle_CatchSwirl_MakeEffect(&pos);
    ftMainMakeRumble(fp, 9, 0);
}

// 0x80149FCC
void ftCommonCatchWaitProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.catchwait.throw_wait != 0)
    {
        fp->status_vars.common.catchwait.throw_wait--;
    }
    ftCommonThrowCheckInterruptCatchWait(fighter_gobj);
}

// 0x8014A000
void ftCommonCatchWaitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CatchWait, 0.0F, 1.0F, FTSTATUPDATE_SLOPECONTOUR_PRESERVE);

    fp->status_vars.common.catchwait.throw_wait = FTCOMMON_CATCH_THROW_WAIT;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);

    if ((fp->ft_kind == Ft_Kind_Link) || (fp->ft_kind == Ft_Kind_PolyLink))
    {
        ftCommon_SetModelPartRenderIndex(fighter_gobj, 21, 0);
        ftCommon_SetModelPartRenderIndex(fighter_gobj, 19, -1);
    }
    else if ((fp->ft_kind == Ft_Kind_Yoshi) || (fp->ft_kind == Ft_Kind_PolyYoshi))
    {
        ftCommon_SetModelPartRenderIndex(fighter_gobj, 7, 1);
    }
}
