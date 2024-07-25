#include <ft/fighter.h>

extern void ftCommon_SetCatchVars();

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80149A10
void ftCommonCatchProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.catchmain.catch_pull_frame_begin > 0.0F)
    {
        fp->status_vars.common.catchmain.catch_pull_frame_begin -= fp->status_vars.common.catchmain.catch_pull_anim_frames;

        if (fp->status_vars.common.catchmain.catch_pull_frame_begin <= 0.0F)
        {
            fp->status_vars.common.catchmain.catch_pull_frame_begin = 0.0F;
        }
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        fp->status_vars.common.catchmain.catch_pull_frame_begin = fp->command_vars.flags.flag2;

        fp->status_vars.common.catchmain.catch_pull_anim_frames = fp->status_vars.common.catchmain.catch_pull_frame_begin / fp->command_vars.flags.flag1;

        fp->command_vars.flags.flag2 = 0;
    }
    ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x80149AC8
void ftCommonCatchCaptureSetStatusRelease(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    ftStruct *catch_fp;
    GObj *catch_gobj;

    ftCommonFallSetStatus(fighter_gobj);

    catch_gobj = this_fp->catch_gobj;

    if (catch_gobj != NULL)
    {
        catch_fp = ftGetStruct(catch_gobj);

        ftCommonThrownReleaseFighterLoseGrip(catch_gobj);

        if (catch_fp->ground_or_air == nMPKineticsGround)
        {
            ftCommonWaitSetStatus(catch_gobj);
        }
        else ftCommonFallSetStatus(catch_gobj);

        catch_fp->capture_gobj = NULL;
        this_fp->catch_gobj = NULL;
    }
}

// 0x80149B48
void func_ovl3_80149B48(GObj *fighter_gobj) // Unused
{
    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftCommonCatchCaptureSetStatusRelease(fighter_gobj);
    }
}

// 0x80149B78
void ftCommonCatchProcMap(GObj *fighter_gobj)
{
    if (ftMap_CheckGroundStopEdge(fighter_gobj) == FALSE)
    {
        ftCommonCatchCaptureSetStatusRelease(fighter_gobj);
    }
}

// 0x80149BA8
void ftCommonCatchSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Catch, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->command_vars.flags.flag1 = 1;
    fp->command_vars.flags.flag2 = 0;

    fp->status_vars.common.catchmain.catch_pull_anim_frames = 0.0F;
    fp->status_vars.common.catchmain.catch_pull_frame_begin = 0.0F;

    ftCommon_SetCatchVars(fp, FTCATCHKIND_MASK_CATCHCOMMON, ftCommonCatchPullProcCatch, ftCommonCapturePulledProcCapture);

    fp->is_shield_catch = FALSE;

    if (((fp->ft_kind == Ft_Kind_Samus) || (fp->ft_kind == Ft_Kind_PolySamus)) && (efManagerSamusGrappleBeamGlowMakeEffect(fighter_gobj) != NULL))
    {
        fp->is_attach_effect = TRUE;
    }
}

// 0x80149C60
sb32 ftCommonCatchCheckInterruptGuard(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    sb32 is_shield_catch = fp->status_vars.common.guard.is_setoff;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (attributes->is_have_catch))
    {
        ftCommonCatchSetStatus(fighter_gobj);

        fp->is_shield_catch = is_shield_catch;

        return TRUE;
    }
    else return FALSE;
}

// 0x80149CE0
sb32 ftCommonCatchCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE)
    {
        ftCommonLightThrowDecideSetStatus(fighter_gobj);

        return TRUE;
    }
    else if ((fp->input.pl.button_hold & fp->input.button_mask_z) && (fp->input.pl.button_tap & fp->input.button_mask_a) && (attributes->is_have_catch))
    {
        ftCommonCatchSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x80149D80
sb32 ftCommonCatchCheckInterruptDashRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE)
    {
        ftCommonItemThrowSetStatus(fighter_gobj, ftStatus_Common_LightThrowDash);

        return TRUE;
    }
    else if ((fp->input.pl.button_hold & fp->input.button_mask_z) && (fp->input.pl.button_tap & fp->input.button_mask_a) && (attributes->is_have_catch))
    {
        ftCommonCatchSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x80149E24
sb32 ftCommonCatchCheckInterruptAttack11(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE)
    {
        ftCommonItemThrowSetStatus(fighter_gobj, ftStatus_Common_LightThrowDash);

        return TRUE;
    }
    else if ((fp->input.pl.button_tap & fp->input.button_mask_z) && (attributes->is_have_catch))
    {
        ftCommonCatchSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
