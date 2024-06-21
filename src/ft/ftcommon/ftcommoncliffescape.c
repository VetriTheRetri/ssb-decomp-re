#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801457E0
sb32 ftCommonCliffEscapeCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_z)
    {
        ftCommon_CliffQuickOrSlow_SetStatus(fighter_gobj, 2);

        return TRUE;
    }
    else return FALSE;
}

// 0x80145824
void ftCommonCliffEscapeQuick1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffEscapeQuick2SetStatus);
}

// 0x80145848
void ftCommonCliffEscapeSlow1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffEscapeSlow2SetStatus);
}

// 0x8014586C
void ftCommonCliffEscapeQuick1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffEscapeQuick1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x801458BC
void ftCommonCliffEscapeSlow1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffEscapeSlow1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x8014590C
void ftCommonCliffEscapeQuick2SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffEscapeQuick2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}

// 0x8014594C
void ftCommonCliffEscapeSlow2SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffEscapeSlow2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}
