#include <ft/fighter.h>

// 0x801457E0
bool32 ftCommon_CliffEscape_CheckInterruptCommon(GObj *fighter_gobj)
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
void ftCommon_CliffEscapeQuick1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffEscapeQuick2_SetStatus);
}

// 0x80145848
void ftCommon_CliffEscapeSlow1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffEscapeSlow2_SetStatus);
}

// 0x8014586C
void ftCommon_CliffEscapeQuick1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffEscapeQuick1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x801458BC
void ftCommon_CliffEscapeSlow1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffEscapeSlow1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x8014590C
void ftCommon_CliffEscapeQuick2_SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffEscapeQuick2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}

// 0x8014594C
void ftCommon_CliffEscapeSlow2_SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffEscapeSlow2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}