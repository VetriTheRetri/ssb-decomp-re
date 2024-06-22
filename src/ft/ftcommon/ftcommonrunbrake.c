#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013EFB0
void ftCommonRunBrakeProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommonKneeBendCheckInterruptRun(fighter_gobj) == FALSE) && (fp->command_vars.flags.flag1 != 0) && (fighter_gobj->anim_frame <= 4.0F))
    {
        ftCommonTurnRunCheckInterruptRun(fighter_gobj);
    }
}

// 0x8013F014
void ftCommonRunBrakeProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_SetGroundVelFriction(fp, attributes->traction * 1.25F);
    ftPhysics_SetGroundVelTransferAir(fighter_gobj);
}

// 0x8013F05C
void ftCommonRunBrakeSetStatus(GObj *fighter_gobj, u32 flag)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_RunBrake, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->command_vars.flags.flag1 = flag;
}

// 0x8013F0A0
sb32 ftCommonRunBrakeCheckInterruptRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_RUN_STICK_RANGE_MIN)
    {
        ftCommonRunBrakeSetStatus(fighter_gobj, 1);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F0EC
sb32 ftCommonRunBrakeCheckInterruptTurnRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ABS(fp->input.pl.stick_range.x) < FTCOMMON_RUN_STICK_RANGE_MIN)
    {
        ftCommonRunBrakeSetStatus(fighter_gobj, 0);

        if (fp->phys_info.vel_ground.x > fp->attributes->run_speed)
        {
            fp->phys_info.vel_ground.x = fp->attributes->run_speed;
        }
        return TRUE;
    }
    else return FALSE;
}