#include <ft/fighter.h>

// 0x8015DC40
void ftSamus_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTSAMUS_SCREWATTACK_FALLSPECIAL_DRIFT, TRUE, TRUE, TRUE, FTSAMUS_SCREWATTACK_LANDING_LAG, FALSE);
    }
}

// 0x8015DC94
void ftSamus_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != FALSE)
    {
        fp->command_vars.flags.flag1 = FALSE;
        fp->phys_info.vel_air.x = fp->lr * FTSAMUS_SCREWATTACK_VEL_X_BASE;
    }
    if (fp->ground_or_air == GA_Air)
    {
        ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);
        ftPhysics_ClampAirVelXStickRange(fp, 0, FTSAMUS_SCREWATTACK_DRIFT_MUL, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8015DD20
sb32 ftSamus_SpecialHi_CheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->input.pl.stick_range.y >= FTSAMUS_SCREWATTACK_PASS_STICK_RANGE_MIN))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8015DD58
void ftSamus_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if (fp->phys_info.vel_air.y >= 0.0F)
        {
            mpObjectProc_ProcFighterEnvCatch(fighter_gobj);
        }
        else if (mpObjectProc_ProcFighterPassCliff(fighter_gobj, ftSamus_SpecialHi_CheckIgnorePass) != FALSE)
        {
            if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
            {
                ftCommon_CliffCatch_SetStatus(fighter_gobj);
            }
            else ftCommon_LandingFallSpecial_SetStatus(fighter_gobj, FALSE, FTSAMUS_SCREWATTACK_LANDING_LAG);
        }
    }
    else ftMap_CheckGroundStopEdgeFall(fighter_gobj);
}

// 0x8015DE0C
void ftSamus_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x8015DE54
void ftSamus_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftPhysics_ApplyGravityDefault(fp, fp->attributes);
    ftPhysics_ClampAirVelXStickRange(fp, 0, FTSAMUS_SCREWATTACK_DRIFT_MUL, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
}

// 0x8015DE90
void ftSamus_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE;
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
    fp->phys_info.vel_air.y = FTSAMUS_SCREWATTACK_VEL_Y_BASE;

    ftPhysics_ClampAirVelX(fp, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
}