#include <ft/chara/ftsamus/ftsamus.h>

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
        jtgt_ovl2_800D9414(fighter_gobj);
        ftPhysics_ClampDriftStickRange(fp, 0, FTSAMUS_SCREWATTACK_DRIFT_MUL, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
    }
    else func_ovl2_800D8BB4(fighter_gobj);
}

// 0x8015DD20
bool32 ftSamus_SpecialHi_CheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID) || (fp->input.pl.stick_range.y >= FTSAMUS_SCREWATTACK_PASS_STICK_RANGE_MIN))
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
            func_ovl2_800DE724(fighter_gobj);
        }
        else if (func_ovl2_800DE798(fighter_gobj, ftSamus_SpecialHi_CheckIgnorePass) != FALSE)
        {
            if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
            {
                ftCommon_CliffCatch_SetStatus(fighter_gobj);
            }
            else ftCommon_LandingFallSpecial_SetStatus(fighter_gobj, FALSE, FTSAMUS_SCREWATTACK_LANDING_LAG);
        }
    }
    else func_ovl2_800DDF44(fighter_gobj);
}

// 0x8015DE0C
void ftSamus_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x8015DE54
void ftSamus_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    func_ovl2_800D8E50(fp, fp->attributes);
    ftPhysics_ClampDriftStickRange(fp, 0, FTSAMUS_SCREWATTACK_DRIFT_MUL, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
}

// 0x8015DE90
void ftSamus_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Samus_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE;
    ftAnim_Update(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
    fp->phys_info.vel_air.y = FTSAMUS_SCREWATTACK_VEL_Y_BASE;

    func_ovl2_800D8E78(fp, FTSAMUS_SCREWATTACK_DRIFT_CLAMP);
}