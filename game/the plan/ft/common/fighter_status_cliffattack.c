#include <ft/fighter.h>

// 0x80145620
bool32 ftCommon_CliffAttack_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b))
    {
        ftCommon_CliffQuickOrSlow_SetStatus(fighter_gobj, 1);

        return TRUE;
    }
    else return FALSE;
}

// 0x8014566C
void ftCommon_CliffAttackQuick1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffAttackQuick2_SetStatus);
}

// 0x80145690
void ftCommon_CliffAttackSlow1_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_CliffAttackSlow2_SetStatus);
}

// 0x801456B4
void ftCommon_CliffAttackQuick1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffAttackQuick1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x80145704
void ftCommon_CliffAttackSlow1_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffAttackSlow1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x190_flag_b7 = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x80145754
void ftCommon_CliffAttackQuick2_SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffAttackQuick2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}

// 0x80145794
void ftCommon_CliffAttackSlow2_SetStatus(GObj *fighter_gobj)
{
    ftCommon_CliffCommon2_UpdateCollData(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Common_CliffAttackSlow2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_CliffCommon2_InitStatusVars(fighter_gobj);
}