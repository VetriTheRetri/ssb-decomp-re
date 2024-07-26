#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80147BE0
void ftCommonHammerFallProcInterrupt(GObj *fighter_gobj)
{
	return;
}

// 0x80147BE8
void ftCommonHammerFallProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        if (fp->phys_info.vel_air.y > FTCOMMON_HAMMER_SKIPLANDING_VEL_Y_MAX)
        {
            ftHammerSetStatusHammerWait(fighter_gobj);
        }
        else ftCommonHammerLandingSetStatus(fighter_gobj);
    }
}

// 0x80147C50
void ftCommonHammerFallSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == nMPKineticsGround)
    {
        ftMap_SetAir(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_HammerFall, ftHammerGetAnimFrame(fighter_gobj), 1.0F, ftHammerGetStatUpdateFlags(fighter_gobj));
    ftHammerSetColAnim(fighter_gobj);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80147CCC
sb32 ftCommonHammerFallCheckInterruptDamageFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftHammerCheckHoldHammer(fighter_gobj) != FALSE) && (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        ftCommonHammerFallSetStatus(fighter_gobj); // Wiggle out of DamageFall if A or B is pressed

        return TRUE;
    }
    else return FALSE;
}

// 0x80147D30
void ftCommonHammerFallSetStatusJump(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 vel_x, vel_y;

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_HammerFall, ftHammerGetAnimFrame(fighter_gobj), 1.0F, ftHammerGetStatUpdateFlags(fighter_gobj));
    ftHammerSetColAnim(fighter_gobj);

    switch (fp->status_vars.common.hammer.input_source)
    {
    case FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON:
        ftCommonJumpGetJumpForceButton(fp->input.pl.stick_range.x, &vel_x, &vel_y, fp->status_vars.common.hammer.is_short_hop);
        break;

    case FTCOMMON_KNEEBEND_INPUT_TYPE_STICK:
    default:
        vel_x = fp->input.pl.stick_range.x;
        vel_y = fp->status_vars.common.hammer.jump_force;
        break;
    }
    fp->phys_info.vel_air.y = (vel_y * attributes->jump_height_mul) + attributes->jump_height_base;
    fp->phys_info.vel_air.x = vel_x * attributes->jump_vel_x;

    fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
}

// 0x80147E34
void ftCommonHammerFallSetStatusPass(GObj *fighter_gobj)
{
    ftCommonPassSetStatusParam(fighter_gobj, ftStatus_Common_HammerFall, ftHammerGetAnimFrame(fighter_gobj), ftHammerGetStatUpdateFlags(fighter_gobj));
    ftHammerSetColAnim(fighter_gobj);
}

// 0x80147E7C
sb32 ftCommonHammerFallCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommonPassCheckInputSuccess(fp) != FALSE)
    {
        ftCommonHammerFallSetStatusPass(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
