#include <ft/fighter.h>

// 0x80143730
void ftCommon_FallSpecial_ProcInterrupt(GObj *fighter_gobj)
{
    ftCommon_JumpAerial_CheckInterruptCommon(fighter_gobj);
}

// 0x80143750
void ftCommon_FallSpecial_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8DB0(fp);

    if (fp->is_fast_fall)
    {
        func_ovl2_800D8DA0(fp, attributes);
    }
    else if (fp->status_vars.common.fallspecial.is_fall_accelerate != FALSE) // Accelerate until fighter reaches terminal velocity?
    {
        func_ovl2_800D8E50(fp, attributes);
    }
    else func_ovl2_800D8D68(fp, attributes->gravity, attributes->fast_fall_speed);

    if (func_ovl2_800D8EDC(fp, fp->status_vars.common.fallspecial.drift) == FALSE)
    {
        ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration, fp->status_vars.common.fallspecial.drift);
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x80143808
bool32 ftCommon_FallSpecial_CheckIgnorePass(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_vars.common.fallspecial.is_allow_pass == FALSE) || !(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID) || (fp->input.pl.stick_range.y >= FTCOMMON_FALLSPECIAL_PASS_STICK_RANGE_MIN))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8014384C
void ftCommon_FallSpecial_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE798(fighter_gobj, ftCommon_FallSpecial_CheckIgnorePass) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else if ((fp->status_vars.common.fallspecial.is_goto_landing != FALSE) || (fp->phys_info.vel_air.y < FTCOMMON_FALLSPECIAL_SKIP_LANDING_VEL_Y_MAX))
        {
            ftCommon_LandingFallSpecial_SetStatus(fighter_gobj, fp->status_vars.common.fallspecial.is_allow_interrupt, fp->status_vars.common.fallspecial.landing_lag);
        }
        else ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x801438F0
void ftCommon_FallSpecial_SetStatus(GObj *fighter_gobj, f32 drift, bool32 unk1, bool32 is_fall_accelerate, bool32 is_goto_landing, f32 landing_lag, bool32 is_allow_interrupt)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftStatus_Update(fighter_gobj, ftStatus_Common_FallSpecial, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

    fp->status_vars.common.fallspecial.drift = (attributes->aerial_speed_max_x * drift);

    func_ovl2_800D8E78(fp, fp->status_vars.common.fallspecial.drift);

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
    func_ovl3_80165024(fighter_gobj);

    fp->x192_flag_b0 = TRUE;
}