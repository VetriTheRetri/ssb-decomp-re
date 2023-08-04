#include <ft/fighter.h>

// 0x8013F170
void ftCommon_TurnRun_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->lr = -fp->lr;
        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Run_SetStatus);
}

// 0x8013F1C0
void ftCommon_TurnRun_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_KneeBend_CheckInterruptRun(fighter_gobj) == FALSE) && (fp->command_vars.flags.flag2 != 0))
    {
        ftCommon_RunBrake_CheckInterruptTurnRun(fighter_gobj);
    }
}

// 0x8013F208
void ftCommon_TurnRun_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_TurnRun, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;
}

// 0x8013F248
bool32 ftCommon_TurnRun_CheckInterruptRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) <= FTCOMMON_TURNRUN_STICK_RANGE_MIN)
    {
        ftCommon_TurnRun_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}