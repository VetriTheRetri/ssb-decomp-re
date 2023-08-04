#include <ft/chara/ftmario/ftmario.h>

// 0x801560A0
void ftMario_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTMARIO_SUPERJUMP_AIR_DRIFT, TRUE, FALSE, TRUE, FTMARIO_SUPERJUMP_LANDING_LAG, FALSE);
    }
}

// 0x801560F4
void ftMario_SpecialHi_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 rot_z;
    f32 stick_rot;
    f32 joint_rot;
    s32 stick_x;

    if (fp->command_vars.flags.flag1 == FALSE)
    {
        stick_x = ABS(fp->input.pl.stick_range.x);

        if (stick_x > FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD)
        {
            stick_x = (fp->input.pl.stick_range.x > 0) ? FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD : -FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD;

            rot_z = (f32)((fp->input.pl.stick_range.x - stick_x) * FTMARIO_SUPERJUMP_AIR_DRIFT);

            rot_z = -F_DEG_TO_RAD(rot_z);

            stick_rot = ABSF(rot_z);

            joint_rot = ABSF(fp->joint[ftParts_TransN_Joint]->rotate.z);

            if (joint_rot < stick_rot)
            {
                fp->joint[ftParts_TransN_Joint]->rotate.z = rot_z;
            }
        }
    }

    if (fp->command_vars.flags.flag2 != FALSE)
    {
        fp->command_vars.flags.flag2 = FALSE;

        stick_x = ABS(fp->input.pl.stick_range.x);

        if (stick_x > 20)
        {
            ftCommon_StickInputSetLR(fp);

            fp->joint[ftParts_TopN_Joint]->rotate.y = ((f32)fp->lr * HALF_PI32);
        }
    }
}

// 0x80156240
void ftMario_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.mario.specialhi.is_air_bool == FALSE)
    {
        if (fp->ground_or_air == GA_Air)
        {
            func_ovl2_800D93E4(fighter_gobj);

            return;
        }
        func_ovl2_800D8C14(fighter_gobj);

        return;
    }

    if (fp->command_vars.flags.flag1 != FALSE)
    {
        func_ovl2_800D93E4(fighter_gobj);

        fp->phys_info.vel_air.x *= 0.95F;
        fp->phys_info.vel_air.y *= 0.95F;
        fp->phys_info.vel_air.z *= 0.95F;
        return;
    }

    func_ovl2_800D8D68(fp, 0.5F, attributes->fall_speed_max);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x80156320
bool32 ftMario_SpecialHi_CheckIgnorePass(GObj *fighter_gobj) // TRUE = no platform pass?
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_MASK_NONSOLID) || (fp->input.pl.stick_range.y >= FTMARIO_SUPERJUMP_STICK_Y_UNK))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80156358
void ftMario_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if ((fp->command_vars.flags.flag1 == FALSE) || ((fp->phys_info.vel_air.y >= 0.0F)))
        {
            func_ovl2_800DE724(fighter_gobj);
        }

        else if (func_ovl2_800DE798(fighter_gobj, ftMario_SpecialHi_CheckIgnorePass) != FALSE)
        {
            if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
            {
                ftCommon_CliffCatch_SetStatus(fighter_gobj);
            }
            else ftCommon_LandingFallSpecial_SetStatus(fighter_gobj, FALSE, FTMARIO_SUPERJUMP_LANDING_LAG);
        }
    }
    else func_ovl2_800DDF44(fighter_gobj);
}

// 0x80156418
void ftMario_SpecialHi_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = FALSE;
    fp->command_vars.flags.flag1 = FALSE;
}

// 0x80156428
void ftMario_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialHi_InitStatusVars(fighter_gobj);

    fp->status_vars.mario.specialhi.is_air_bool = FALSE;

    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialHi, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
}

// 0x80156478
void ftMario_SpecialAirHi_SetStatus(GObj* fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialHi_InitStatusVars(fighter_gobj);

    fp->status_vars.mario.specialhi.is_air_bool = TRUE;

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 1.5F;

    ftStatus_Update(fighter_gobj, ftStatus_Mario_SpecialAirHi, 0.0F, 1.0F, 0U);
    ftAnim_Update(fighter_gobj);
}