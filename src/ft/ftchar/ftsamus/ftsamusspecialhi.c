#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015DC40
void ftSamusSpecialHiProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommonFallSpecialSetStatus(fighter_gobj, FTSAMUS_SCREWATTACK_FALLSPECIAL_DRIFT, TRUE, TRUE, TRUE, FTSAMUS_SCREWATTACK_LANDING_LAG, FALSE);
    }
}

// 0x8015DC94
void ftSamusSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != FALSE)
    {
        fp->command_vars.flags.flag1 = FALSE;
        fp->phys_info.vel_air.x = fp->lr * FTSAMUS_SCREWATTACK_VEL_X_BASE;
    }
    if (fp->ga == nMPKineticsAir)
    {
        ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);
        ftPhysics_ClampAirVelXStickRange(fp, 0, FTSAMUS_SCREWATTACK_DRIFT_MUL, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8015DD20
sb32 ftSamusSpecialHiCheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->input.pl.stick_range.y >= FTSAMUS_SCREWATTACK_PASS_STICK_RANGE_MIN))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8015DD58
void ftSamusSpecialHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsAir)
    {
        if (fp->phys_info.vel_air.y >= 0.0F)
        {
            mpObjectProc_ProcFighterEnvCatch(fighter_gobj);
        }
        else if (mpObjectProc_ProcFighterPassCliff(fighter_gobj, ftSamusSpecialHiCheckIgnorePass) != FALSE)
        {
            if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
            {
                ftCommonCliffCatchSetStatus(fighter_gobj);
            }
            else ftCommonLandingFallSpecialSetStatus(fighter_gobj, FALSE, FTSAMUS_SCREWATTACK_LANDING_LAG);
        }
    }
    else ftMap_CheckGroundStopEdgeFall(fighter_gobj);
}

// 0x8015DE0C
void ftSamusSpecialHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x8015DE54
void ftSamusSpecialAirHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_ApplyGravityDefault(fp, fp->attributes);
    ftPhysics_ClampAirVelXStickRange(fp, 0, FTSAMUS_SCREWATTACK_DRIFT_MUL, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
}

// 0x8015DE90
void ftSamusSpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
    fp->phys_info.vel_air.y = FTSAMUS_SCREWATTACK_VEL_Y_BASE;

    ftPhysics_ClampAirVelX(fp, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
}
