#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8013F170
void ftCommonTurnRunProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->lr = -fp->lr;
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonRunSetStatus);
}

// 0x8013F1C0
void ftCommonTurnRunProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommonKneeBendCheckInterruptRun(fighter_gobj) == FALSE) && (fp->command_vars.flags.flag2 != 0))
    {
        ftCommonRunBrakeCheckInterruptTurnRun(fighter_gobj);
    }
}

// 0x8013F208
void ftCommonTurnRunSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusTurnRun, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
}

// 0x8013F248
sb32 ftCommonTurnRunCheckInterruptRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) <= FTCOMMON_TURNRUN_STICK_RANGE_MIN)
    {
        ftCommonTurnRunSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
