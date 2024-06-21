#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80145620
sb32 ftCommonCliffAttackCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b))
    {
        ftCommonCliffQuickOrSlowSetStatus(fighter_gobj, nFTCommonCliffKindAttackQuick);

        return TRUE;
    }
    else return FALSE;
}

// 0x8014566C
void ftCommonCliffAttackQuick1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffAttackQuick2SetStatus);
}

// 0x80145690
void ftCommonCliffAttackSlow1ProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonCliffAttackSlow2SetStatus);
}

// 0x801456B4
void ftCommonCliffAttackQuick1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffAttackQuick1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x80145704
void ftCommonCliffAttackSlow1SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffAttackSlow1, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_cliff_hold = TRUE;

    fp->proc_damage = ftCommon_CliffCommon_ProcDamage;
}

// 0x80145754
void ftCommonCliffAttackQuick2SetStatus(GObj *fighter_gobj)
{
    ftCommonCliffCommon2UpdateCollData(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffAttackQuick2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonCliffCommon2InitStatusVars(fighter_gobj);
}

// 0x80145794
void ftCommonCliffAttackSlow2SetStatus(GObj *fighter_gobj)
{
    ftCommonCliffCommon2UpdateCollData(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_CliffAttackSlow2, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonCliffCommon2InitStatusVars(fighter_gobj);
}
