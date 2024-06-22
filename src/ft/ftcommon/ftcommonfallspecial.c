#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80143730
void ftCommonFallSpecialProcInterrupt(GObj *fighter_gobj)
{
    ftCommonJumpAerialCheckInterruptCommon(fighter_gobj);
}

// 0x80143750
void ftCommonFallSpecialProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_CheckSetFastFall(fp);

    if (fp->is_fast_fall)
    {
        ftPhysics_ApplyFastFall(fp, attributes);
    }
    else if (fp->status_vars.common.fallspecial.is_fall_accelerate != FALSE) // Accelerate until fighter reaches terminal velocity?
    {
        ftPhysics_ApplyGravityDefault(fp, attributes);
    }
    else ftPhysics_ApplyGClampTVel(fp, attributes->gravity, attributes->fast_fall_speed);

    if (ftPhysics_CheckClampAirVelXDec(fp, fp->status_vars.common.fallspecial.drift) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration, fp->status_vars.common.fallspecial.drift);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x80143808
sb32 ftCommonFallSpecialCheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_vars.common.fallspecial.is_allow_pass == FALSE) || !(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->input.pl.stick_range.y >= FTCOMMON_FALLSPECIAL_PASS_STICK_RANGE_MIN))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8014384C
void ftCommonFallSpecialProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterPassCliff(fighter_gobj, ftCommonFallSpecialCheckIgnorePass) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else if ((fp->status_vars.common.fallspecial.is_goto_landing != FALSE) || (fp->phys_info.vel_air.y < FTCOMMON_FALLSPECIAL_SKIPLANDING_VEL_Y_MAX))
        {
            ftCommonLandingFallSpecialSetStatus(fighter_gobj, fp->status_vars.common.fallspecial.is_allow_interrupt, fp->status_vars.common.fallspecial.landing_lag);
        }
        else ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x801438F0
void ftCommonFallSpecialSetStatus(GObj *fighter_gobj, f32 drift, sb32 unknown, sb32 is_fall_accelerate, sb32 is_goto_landing, f32 landing_lag, sb32 is_allow_interrupt)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_FallSpecial, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

    fp->status_vars.common.fallspecial.drift = (attributes->aerial_speed_max_x * drift);

    ftPhysics_ClampAirVelX(fp, fp->status_vars.common.fallspecial.drift);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
    }
    fp->jumps_used = attributes->jumps_max;

    fp->status_vars.common.fallspecial.is_allow_pass = TRUE;
    fp->status_vars.common.fallspecial.is_goto_landing = is_goto_landing;
    fp->status_vars.common.fallspecial.landing_lag = landing_lag;
    fp->status_vars.common.fallspecial.is_allow_interrupt = is_allow_interrupt;
    fp->status_vars.common.fallspecial.is_fall_accelerate = is_fall_accelerate;

    ftColor_CheckSetColAnimIndex(fighter_gobj, 7, 0);
    ftPublicityDownDecide(fighter_gobj);

    fp->is_special_interrupt = TRUE;
}
