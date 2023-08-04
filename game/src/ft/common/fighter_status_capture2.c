#include <ft/fighter.h>

// 0x8014E1D0
void ftCommon_CatchCut_DamageApplyKnockback(GObj *fighter_gobj, ftThrowReleaseDesc *throw_release) 
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *catch_gobj = this_fp->catch_gobj;
    ftStruct *catch_fp = ftGetStruct(catch_gobj);
    f32 knockback = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, 0, 0, throw_release->knockback_weight, throw_release->knockback_scale, throw_release->knockback_base, this_fp->attributes->weight, catch_fp->handicap, this_fp->handicap);
    
    ftCommon_Damage_InitDamageVars(fighter_gobj, -1, 0, knockback, throw_release->angle, this_fp->lr, 1, 0, 0, FALSE, FALSE, FALSE);
    
    ftCommon_Update1PGameDamageStats(this_fp, 4, 0, 0, 0, 0);
}

// 0x8014E2A8
void ftCommon_CaptureCut_DamageApplyKnockback(GObj *fighter_gobj, ftThrowReleaseDesc *throw_release)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    f32 knockback;
    s32 lr;

    func_ovl3_8014ADB0(fighter_gobj);

    if (this_fp->ground_or_air == GA_Air)
    {
        this_fp->jumps_used = 1;

        DObjGetStruct(fighter_gobj)->translate.z = 0.0F;

        this_fp->phys_info.vel_air.z = DObjGetStruct(fighter_gobj)->translate.z;
    }
    knockback = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, 0, 0, throw_release->knockback_weight, throw_release->knockback_scale, throw_release->knockback_base, this_fp->attributes->weight, capture_fp->handicap, this_fp->handicap);

    if (DObjGetStruct(fighter_gobj)->translate.x < DObjGetStruct(capture_gobj)->translate.x)
    {
        lr = RIGHT;
    }
    else lr = LEFT;

    ftCommon_Damage_InitDamageVars(fighter_gobj, -1, 0, knockback, throw_release->angle, lr, 1, 0, 0, FALSE, FALSE, FALSE);
    ftCommon_Update1PGameDamageStats(this_fp, 4, 0, 0, 0, 0);
}

// 0x8014E3EC
void ftCommon_Trap_InitBreakoutVars(ftStruct *fp, s32 breakout_wait)
{
    fp->breakout_wait = breakout_wait;
    fp->breakout_lr = fp->breakout_ud = 0;
}

// 0x8014E400
bool32 ftCommon_Trap_UpdateBreakoutVars(ftStruct *fp)
{
    bool32 is_mash = FALSE;
    s32 breakout_lr_bak, breakout_ud_bak;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) || (fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_z))
    {
        is_mash = TRUE;

        fp->breakout_wait--;
    }
    breakout_lr_bak = fp->breakout_lr, breakout_ud_bak = fp->breakout_ud;

    if (fp->input.pl.stick_range.x < -FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_lr = -1;
    }
    if (fp->input.pl.stick_range.x > FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_lr = 1;
    }
    if (fp->input.pl.stick_range.y < -FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_ud = -1;
    }
    if (fp->input.pl.stick_range.y > FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_ud = 1;
    }
    if ((fp->breakout_lr != breakout_lr_bak) || (fp->breakout_ud != breakout_ud_bak))
    {
        is_mash = TRUE;

        fp->breakout_wait--;
    }
    return is_mash;
}

ftThrowReleaseDesc Fighter_ThrowF_Catch_Release       = { 361, 100, 30, 0 };
ftThrowReleaseDesc Fighter_Shouldered_Capture_Release = { 361,  80,  0, 0 };

// 0x8014E4D4
void ftCommon_Trap_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);

    ftCommon_Trap_UpdateBreakoutVars(this_fp);

    if (this_fp->breakout_wait <= 0)
    {
        ftCommon_CatchCut_DamageApplyKnockback(capture_gobj, &Fighter_ThrowF_Catch_Release);
        ftCommon_CaptureCut_DamageApplyKnockback(fighter_gobj, &Fighter_Shouldered_Capture_Release);

        capture_fp->catch_gobj = NULL;

        this_fp->capture_gobj = NULL;
    }
}

// 0x8014E558
void ftCommon_Shouldered_SetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    s32 damage;

    ftCommon_Thrown_SetStatusImmediate(fighter_gobj, ftStatus_Common_Shouldered);
    ftCommon_Trap_InitBreakoutVars(this_fp, ((this_fp->percent_damage * 0.08F) + 14.0F));

    damage = gmCommon_DamageApplyStale(capture_fp->player, 8, capture_fp->attack_id, capture_fp->motion_count);

    if (ftCommon_GetBestHitStatusAll(fighter_gobj) != gmHitCollision_HitStatus_Normal)
    {
        damage = 0;
    }
    if (damage != 0)
    {
        ftCommon_Damage_UpdateDamageColAnim(fighter_gobj, gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, damage, damage, 0, 100, 0, this_fp->attributes->weight, capture_fp->handicap, this_fp->handicap), 0);
        ftDamageUpdateCheckDropItem(this_fp, damage);
        ftAttackUpdateMatchStats(capture_fp->player, this_fp->player, damage);
        ftAttackAddStaleQueue(capture_fp->player, this_fp->player, capture_fp->attack_id, capture_fp->motion_count);
    }
    ftMain_MakeRumble(this_fp, 7, 0);
}