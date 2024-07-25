#include <ft/fighter.h>

extern void ftParamSetCaptureImmuneMask(ftStruct*, u8);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014A0C0
void ftCommonThrowProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->lr = -fp->lr;

        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        ftCommonThrownProcPhysics(fp->catch_gobj);

        ftCommonThrownReleaseThrownUpdateStats(fp->catch_gobj, (fp->command_vars.flags.flag2 == 1) ? -fp->lr : fp->lr, (fp->status_info.status_id == ftStatus_Common_ThrowB) ? 1 : 0, TRUE);

        fp->command_vars.flags.flag2 = 0;

        fp->catch_gobj = NULL;

        ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_NONE);
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if ((fp->ft_kind == Ft_Kind_Donkey) || (fp->ft_kind == Ft_Kind_PolyDonkey) || (fp->ft_kind == Ft_Kind_GiantDonkey))
        {
            if (fp->status_info.status_id == ftStatus_Common_ThrowF)
            {
                ftCommonCaptureShoulderedSetStatus(fp->catch_gobj);
                ftDonkeyThrowFWaitSetStatus(fighter_gobj);

                return;
            }
        }
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x8014A1E8
void ftCommonThrowSetStatus(GObj *fighter_gobj, sb32 is_throwf)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    GObj *catch_gobj;
    ftStruct *catch_fp;
    ftThrownStatus *thrown_status;

    catch_gobj = this_fp->catch_gobj;
    catch_fp = ftGetStruct(catch_gobj);

    if ((is_throwf != FALSE) || ((this_fp->input.pl.stick_range.x * this_fp->lr) >= 0))
    {
        if ((this_fp->ft_kind == Ft_Kind_Kirby) || (this_fp->ft_kind == Ft_Kind_PolyKirby))
        {
            status_id = ftStatus_Kirby_ThrowF;

            ftMap_SetAir(this_fp);
        }
        else status_id = ftStatus_Common_ThrowF;
        thrown_status = &this_fp->attributes->thrown_status[catch_fp->ft_kind].ft_thrown[0];
    }
    else
    {
        status_id = ftStatus_Common_ThrowB;
        thrown_status = &this_fp->attributes->thrown_status[catch_fp->ft_kind].ft_thrown[1];
    }
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftParamSetCaptureImmuneMask(this_fp, FTCATCHKIND_MASK_ALL);

    this_fp->command_vars.flags.flag2 = 0;
    this_fp->command_vars.flags.flag1 = 0;

    if ((this_fp->ft_kind == Ft_Kind_Samus) || (this_fp->ft_kind == Ft_Kind_PolySamus))
    {
        if (efManagerSamusGrappleBeamGlowMakeEffect(fighter_gobj) != NULL)
        {
            this_fp->is_attach_effect = TRUE;
        }
    }
    if (thrown_status->status1 != -1)
    {
        ftCommonThrownSetStatusQueue(catch_gobj, thrown_status->status1, thrown_status->status2);
    }
    else ftCommonThrownSetStatusImmediate(catch_gobj, thrown_status->status2);

    if ((this_fp->ft_kind == Ft_Kind_Kirby) || (this_fp->ft_kind == Ft_Kind_PolyKirby))
    {
        if (status_id == ftStatus_Kirby_ThrowF)
        {
            this_fp->x192_flag_b1 = TRUE;
            catch_fp->x192_flag_b1 = TRUE;
        }
    }
}

// 0x8014A394
sb32 ftCommonThrowCheckInterruptCatchWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    sb32 is_throwf = FALSE;

    if ((fp->status_vars.common.catchwait.throw_wait == 0) || (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        is_throwf = TRUE;
    }
    else if ((fp->input.pl.stick_prev.x >= FTCOMMON_CATCH_THROW_STICK_RANGE_MIN) || (fp->input.pl.stick_range.x < FTCOMMON_CATCH_THROW_STICK_RANGE_MIN))
    {
        if ((fp->input.pl.stick_prev.x <= -FTCOMMON_CATCH_THROW_STICK_RANGE_MIN) || (fp->input.pl.stick_range.x > -FTCOMMON_CATCH_THROW_STICK_RANGE_MIN))
        {
            return FALSE;
        }
    }
    ftCommonThrowSetStatus(fighter_gobj, is_throwf);

    return TRUE;
}
