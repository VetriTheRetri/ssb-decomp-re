#include <ft/fighter.h>

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

    if (fp->command_vars.flags.flag1 == 0)
    {
        stick_x = ABS(fp->input.pl.stick_range.x);

        if (stick_x > FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD)
        {
            stick_x = (fp->input.pl.stick_range.x > 0) ? FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD : -FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD;

            rot_z = ((fp->input.pl.stick_range.x - stick_x) * FTMARIO_SUPERJUMP_AIR_DRIFT);

            rot_z = -F_DEG_TO_RAD(rot_z);

            stick_rot = ABSF(rot_z);

            joint_rot = ABSF(fp->joint[ftParts_Joint_TransN]->rotate.vec.f.z);

            if (joint_rot < stick_rot)
            {
                fp->joint[ftParts_Joint_TransN]->rotate.vec.f.z = rot_z;
            }
        }
    }

    if (fp->command_vars.flags.flag2 != 0)
    {
        fp->command_vars.flags.flag2 = 0;

        stick_x = ABS(fp->input.pl.stick_range.x);

        if (stick_x > FTMARIO_SUPERJUMP_TURN_MODEL_THRESHOLD)
        {
            ftCommon_StickInputSetLR(fp);

            fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_DEG_TO_RAD(90.0F); // HALF_PI32
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
            ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
        }
        else ftPhysics_ApplyGroundVelTransN(fighter_gobj);
    }
    else if (fp->command_vars.flags.flag1 != 0)
    {
        ftPhysics_ApplyAirVelTransNAll(fighter_gobj);

        fp->phys_info.vel_air.x *= 0.95F;
        fp->phys_info.vel_air.y *= 0.95F;
        fp->phys_info.vel_air.z *= 0.95F;
    }
    else
    {
        ftPhysics_ApplyGravityClampTVel(fp, 0.5F, attributes->fall_speed_max);

        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ApplyAirVelXFriction(fp, attributes);
        }
    }
}

// 0x80156320
bool32 ftMario_SpecialHi_CheckIgnorePass(GObj *fighter_gobj) // TRUE = no platform pass?
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->input.pl.stick_range.y >= FTMARIO_SUPERJUMP_STICK_Y_UNK))
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
            if (fp->coll_data.coll_type & MPCOLL_KIND_CLIFF_MASK)
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

    fp->command_vars.flags.flag1 = fp->command_vars.flags.flag2 = 0;
}

// 0x80156428
void ftMario_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialHi_InitStatusVars(fighter_gobj);

    fp->status_vars.mario.specialhi.is_air_bool = FALSE;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Mario_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80156478
void ftMario_SpecialAirHi_SetStatus(GObj* fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMario_SpecialHi_InitStatusVars(fighter_gobj);

    fp->status_vars.mario.specialhi.is_air_bool = TRUE;

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 1.5F;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Mario_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}