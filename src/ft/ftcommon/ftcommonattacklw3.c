#include <ft/fighter.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014FBF0
void ftCommonAttackLw3ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->status_vars.common.attacklw3.is_goto_attacklw3 != FALSE))
    {
        ftCommonAttackLw3SetStatus(fighter_gobj);
    }
    else ftStatusSetOnAnimEnd(fighter_gobj, ftCommonSquatWaitSetStatus);
}

// 0x8014FC40
void ftCommonAttackLw3ProcInterrupt(GObj *fighter_gobj)
{
    ftCommonAttackLw3CheckInterruptSelf(fighter_gobj);
}

// 0x8014FC60
sb32 ftCommonAttackLw3CheckInterruptSelf(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (attributes->is_have_attacklw3))
    {
        if (fp->command_vars.flags.flag1 != 0)
        {
            ftCommonAttackLw3SetStatus(fighter_gobj);

            return TRUE;
        }
        else fp->status_vars.common.attacklw3.is_goto_attacklw3 = TRUE;
    }
    return FALSE;
}

// 0x8014FCCC
void ftCommonAttackLw3InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;

    fp->status_vars.common.attacklw3.is_goto_attacklw3 = FALSE;

    ftCommon_MotionCountIncSetAttackID(fp, ftMotion_AttackIndex_AttackLw3);
    ftCommon_StatUpdateCountIncSetFlags(fp, fp->stat_flags.halfword);
    ftCommon_Update1PGameAttackStats(fp, 0);
}

// 0x8014FD14
void ftCommonAttackLw3SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommonGetCheckInterruptCommon(fighter_gobj) == FALSE)
    {
        fp->proc_status = ftCommonAttackLw3InitStatusVars;

        ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_AttackLw3, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    }
}

// 0x8014FD70
sb32 ftCommonAttackLw3CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (fp->input.pl.stick_range.y <= FTCOMMON_ATTACKLW3_STICK_RANGE_MIN))
    {
        if (ftCommon_GetStickAngleRadians(fp) < F_CST_DTOR32(-50.0F)) // -0.87266463F
        {
            if (ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE)
            {
                ftCommonItemThrowSetStatus(fighter_gobj, ftStatus_Common_LightThrowLw);

                return TRUE;
            }
            else if (attributes->is_have_attacklw3)
            {
                ftCommonAttackLw3SetStatus(fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}
