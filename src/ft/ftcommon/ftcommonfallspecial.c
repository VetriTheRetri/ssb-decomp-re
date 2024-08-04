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

    ftPhysicsCheckSetFastFall(fp);

    if (fp->is_fast_fall)
    {
        ftPhysicsApplyFastFall(fp, attributes);
    }
    else if (fp->status_vars.common.fallspecial.is_fall_accelerate != FALSE) // Accelerate until fighter reaches terminal velocity?
    {
        ftPhysicsApplyGravityDefault(fp, attributes);
    }
    else ftPhysicsApplyGravityClampTVel(fp, attributes->gravity, attributes->tvel_fast);

    if (ftPhysicsCheckClampAirVelXDec(fp, fp->status_vars.common.fallspecial.drift) == FALSE)
    {
        ftPhysicsClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration, fp->status_vars.common.fallspecial.drift);
        ftPhysicsApplyAirVelXFriction(fp, attributes);
    }
}

// 0x80143808
sb32 ftCommonFallSpecialProcPass(GObj *fighter_gobj)
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

    if (mpCommonCheckFighterPassCliff(fighter_gobj, ftCommonFallSpecialProcPass) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else if ((fp->status_vars.common.fallspecial.is_goto_landing != FALSE) || (fp->phys_info.vel_air.y < FTCOMMON_FALLSPECIAL_SKIPLANDING_VEL_Y_MAX))
        {
            ftCommonLandingFallSpecialSetStatus(fighter_gobj, fp->status_vars.common.fallspecial.is_allow_interrupt, fp->status_vars.common.fallspecial.landing_lag);
        }
        else ftCommonWaitSetStatus(fighter_gobj);
    }
}

// 0x801438F0
void ftCommonFallSpecialSetStatus(GObj *fighter_gobj, f32 drift, sb32 unknown, sb32 is_fall_accelerate, sb32 is_goto_landing, f32 landing_lag, sb32 is_allow_interrupt)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusFallSpecial, 0.0F, 1.0F, FTSTATUS_PRESERVE_FASTFALL);

    fp->status_vars.common.fallspecial.drift = (attributes->aerial_speed_max_x * drift);

    ftPhysicsClampAirVelX(fp, fp->status_vars.common.fallspecial.drift);

    if (fp->ga == nMPKineticsGround)
    {
        mpCommonSetFighterAir(fp);
    }
    fp->jumps_used = attributes->jumps_max;

    fp->status_vars.common.fallspecial.is_allow_pass = TRUE;
    fp->status_vars.common.fallspecial.is_goto_landing = is_goto_landing;
    fp->status_vars.common.fallspecial.landing_lag = landing_lag;
    fp->status_vars.common.fallspecial.is_allow_interrupt = is_allow_interrupt;
    fp->status_vars.common.fallspecial.is_fall_accelerate = is_fall_accelerate;

    ftParamCheckSetFighterColAnimID(fighter_gobj, 7, 0);
    ftPublicityDownDecide(fighter_gobj);

    fp->is_special_interrupt = TRUE;
}
