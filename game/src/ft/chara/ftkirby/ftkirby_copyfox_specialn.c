#include <ft/chara/ftkirby/ftkirby.h>

// 0x80156CB0
void ftKirby_CopyFox_SpecialN_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        pos.x = FTKIRBY_COPYFOX_BLASTER_SPAWN_OFF_X;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTKIRBY_COPYFOX_BLASTER_SPAWN_JOINT], &pos);
        wpFox_Blaster_MakeWeapon(fighter_gobj, &pos);
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
}

// 0x80156D38
void ftKirby_CopyFox_SpecialN_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->input.pl.button_tap & fp->input.button_mask_b))
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftKirby_CopyFox_SpecialAirN_SetStatus(fighter_gobj);
        }
        else ftKirby_CopyFox_SpecialN_SetStatus(fighter_gobj);

        ftCommon_MotionCountIncSetAttackID(fp, ftMotion_AttackIndex_SpecialNCopyFox);
        ftCommon_StatUpdateCountIncSetFlags(fp, fp->stat_flags.halfword);
        ftCommon_Update1PGameAttackStats(fp, 0);
    }
}

// 0x80156DC8
void ftKirby_CopyFox_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x80156DD8
void ftKirby_CopyFox_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyFox_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyFox_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80156E18
void ftKirby_CopyFox_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyFox_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyFox_SpecialN_InitStatusVars(fighter_gobj);
}
