#include <ft/fighter.h>

// 0x8013EE50
void ftCommon_Run_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommonSpecialNCheckInterruptCommon(fighter_gobj) == FALSE) &&
    (ftCommon_Catch_CheckInterruptDashRun(fighter_gobj) == FALSE) &&
    (ftCommon_AttackDash_CheckInterruptCommon(fighter_gobj) == FALSE) &&
    (ftCommon_GuardOn_CheckInterruptDashRun(fighter_gobj, 4) == FALSE) &&
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) == FALSE) &&
    (ftCommon_KneeBend_CheckInterruptRun(fighter_gobj) == FALSE) &&
    (ftCommon_TurnRun_CheckInterruptRun(fighter_gobj) == FALSE))
    {
        ftCommon_RunBrake_CheckInterruptRun(fighter_gobj);
    }
}

// 0x8013EEE8
void ftCommon_Run_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Run, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_ground.x = fp->attributes->run_speed;
}

// 0x8013EF2C
sb32 ftCommon_Run_CheckInterruptDash(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (attributes->dash_to_run <= fighter_gobj->anim_frame)
    {
        if (fighter_gobj->anim_frame < (attributes->dash_to_run + DObjGetStruct(fighter_gobj)->dobj_f1))
        {
            if ((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_RUN_STICK_RANGE_MIN)
            {
                ftCommon_Run_SetStatus(fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}