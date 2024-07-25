#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801560A0
void ftMarioSpecialHiProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommonFallSpecialSetStatus(fighter_gobj, FTMARIO_SUPERJUMP_AIR_DRIFT, TRUE, FALSE, TRUE, FTMARIO_SUPERJUMP_LANDING_LAG, FALSE);
    }
}

// 0x801560F4
void ftMarioSpecialHiProcInterrupt(GObj *fighter_gobj)
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

            rot_z = -F_CLC_DTOR32(rot_z);

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

            fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * F_CST_DTOR32(90.0F); // HALF_PI32
        }
    }
}

// 0x80156240
void ftMarioSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.mario.specialhi.is_air_bool == FALSE)
    {
        if (fp->ground_or_air == nMPKineticsAir)
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
        ftPhysics_ApplyGClampTVel(fp, 0.5F, attributes->fall_speed_max);

        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ApplyAirVelXFriction(fp, attributes);
        }
    }
}

// 0x80156320
sb32 ftMarioSpecialHiCheckIgnorePass(GObj *fighter_gobj) // TRUE = no platform pass?
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->input.pl.stick_range.y >= FTMARIO_SUPERJUMP_STICK_Y_UNK))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80156358
void ftMarioSpecialHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == nMPKineticsAir)
    {
        if ((fp->command_vars.flags.flag1 == FALSE) || ((fp->phys_info.vel_air.y >= 0.0F)))
        {
            mpObjectProc_ProcFighterEnvCatch(fighter_gobj);
        }

        else if (mpObjectProc_ProcFighterPassCliff(fighter_gobj, ftMarioSpecialHiCheckIgnorePass) != FALSE)
        {
            if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
            {
                ftCommonCliffCatchSetStatus(fighter_gobj);
            }
            else ftCommonLandingFallSpecialSetStatus(fighter_gobj, FALSE, FTMARIO_SUPERJUMP_LANDING_LAG);
        }
    }
    else ftMap_CheckGroundStopEdgeFall(fighter_gobj);
}

// 0x80156418
void ftMarioSpecialHiInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = fp->command_vars.flags.flag2 = 0;
}

// 0x80156428
void ftMarioSpecialHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMarioSpecialHiInitStatusVars(fighter_gobj);

    fp->status_vars.mario.specialhi.is_air_bool = FALSE;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Mario_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80156478
void ftMarioSpecialAirHiSetStatus(GObj* fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMarioSpecialHiInitStatusVars(fighter_gobj);

    fp->status_vars.mario.specialhi.is_air_bool = TRUE;

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 1.5F;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Mario_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
