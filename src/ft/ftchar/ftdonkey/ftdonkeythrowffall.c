#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014DA00
void ftDonkeyThrowFFallProcInterrupt(GObj *fighter_gobj)
{
    if (ftCommonHeavyThrowCheckInterruptCommon(fighter_gobj) == FALSE)
    {
        ftDonkeyThrowFFCheckInterruptThrowFCommon(fighter_gobj);
    }
}

// 0x8014DA30
void ftDonkeyThrowFFallProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        if (fp->phys_info.vel_air.y > FTCOMMON_THROWFFALL_SKIPLANDING_VEL_Y_MAX)
        {
            ftDonkeyThrowFWaitSetStatus(fighter_gobj);
        }
        else ftDonkeyThrowFLandingSetStatus(fighter_gobj);
    }
}

// 0x8014DA98
void ftDonkeyThrowFFallSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == nMPKineticsGround)
    {
        ftMap_SetAir(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, nFTDonkeyStatusThrowFFall, 0.0F, 0.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8014DAF8
void ftDonkeyThrowFJumpSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    s32 vel_x;
    s32 vel_y;

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTDonkeyStatusThrowFFall, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);

    switch (fp->status_vars.common.throwf.input_source)
    {
    case FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON:
        ftCommonJumpGetJumpForceButton(fp->input.pl.stick_range.x, &vel_x, &vel_y, fp->status_vars.common.throwf.is_short_hop);
        break;

    case FTCOMMON_KNEEBEND_INPUT_TYPE_STICK:
    default:
        vel_x = fp->input.pl.stick_range.x;
        vel_y = fp->status_vars.common.throwf.jump_force;
    }
    fp->phys_info.vel_air.y = (vel_y * attributes->jump_height_mul) + attributes->jump_height_base;
    fp->phys_info.vel_air.x = vel_x * attributes->jump_vel_x;

    fp->tap_stick_y = FTINPUT_STICKBUFFER_FRAMES_MAX;
}

// 0x8014DBE0
void ftDonkeyThrowFFallSetStatusPass(GObj *fighter_gobj)
{
    ftCommonPassSetStatusParam(fighter_gobj, nFTDonkeyStatusThrowFFall, 1.0F, 0);
}

// 0x8014DC08
sb32 ftDonkeyThrowFFallCheckInterruptPass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommonPassCheckInputSuccess(fp) != FALSE)
    {
        ftDonkeyThrowFFallSetStatusPass(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
