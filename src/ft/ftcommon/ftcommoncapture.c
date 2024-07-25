#include <ft/fighter.h>
#include <gm/battle.h>

extern f32 gmCommonObject_DamageCalcKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap);
extern s32 gmCommon_DamageApplyStale(s32, s32, s32, u16);

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x80188A30
ftThrowReleaseDesc dFTCommonCaptureKnockbackCatch = { 361, 100, 30, 0 };  // Knockback suffered by throwing player

// 0x80188A40
ftThrowReleaseDesc dFTCommonCaptureKnockbackCapture = { 361, 80, 0, 20 };  // Knockback suffered by caught player

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014E1D0
void ftCommonCaptureApplyCatchKnockback(GObj *fighter_gobj, ftThrowReleaseDesc *throw_release) 
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *catch_gobj = this_fp->catch_gobj;
    ftStruct *catch_fp = ftGetStruct(catch_gobj);
    f32 knockback = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, 0, 0, throw_release->knockback_weight, throw_release->knockback_scale, throw_release->knockback_base, this_fp->attributes->weight, catch_fp->handicap, this_fp->handicap);
    
    ftCommonDamageInitDamageVars(fighter_gobj, -1, 0, knockback, throw_release->angle, this_fp->lr, 1, 0, 0, FALSE, FALSE, FALSE);
    ftCommon_Update1PGameDamageStats(this_fp, GMMATCH_PLAYERS_MAX, ftHitlog_ObjectClass_None, 0, 0, 0);
}

// 0x8014E2A8
void ftCommonCaptureApplyCaptureKnockback(GObj *fighter_gobj, ftThrowReleaseDesc *throw_release)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    f32 knockback;
    s32 lr;

    ftCommonThrownReleaseFighterLoseGrip(fighter_gobj);

    if (this_fp->ground_or_air == GA_Air)
    {
        this_fp->jumps_used = 1;

        DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

        this_fp->phys_info.vel_air.z = DObjGetStruct(fighter_gobj)->translate.vec.f.z;
    }
    knockback = gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, 0, 0, throw_release->knockback_weight, throw_release->knockback_scale, throw_release->knockback_base, this_fp->attributes->weight, capture_fp->handicap, this_fp->handicap);

    if (DObjGetStruct(fighter_gobj)->translate.vec.f.x < DObjGetStruct(capture_gobj)->translate.vec.f.x)
    {
        lr = LR_Right;
    }
    else lr = LR_Left;

    ftCommonDamageInitDamageVars(fighter_gobj, -1, 0, knockback, throw_release->angle, lr, 1, 0, 0, FALSE, FALSE, FALSE);
    ftCommon_Update1PGameDamageStats(this_fp, GMMATCH_PLAYERS_MAX, ftHitlog_ObjectClass_None, 0, 0, 0);
}

// 0x8014E3EC
void ftCommonCaptureTrappedInitBreakoutVars(ftStruct *fp, s32 breakout_wait)
{
    fp->breakout_wait = breakout_wait;
    fp->breakout_lr = fp->breakout_ud = 0;
}

// 0x8014E400
sb32 ftCommonCaptureTrappedUpdateBreakoutVars(ftStruct *fp)
{
    sb32 is_mash = FALSE;
    s32 breakout_lr_bak, breakout_ud_bak;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) || (fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_z))
    {
        is_mash = TRUE;

        fp->breakout_wait--;
    }
    breakout_lr_bak = fp->breakout_lr, breakout_ud_bak = fp->breakout_ud;

    if (fp->input.pl.stick_range.x < -FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_lr = LR_Left;
    }
    if (fp->input.pl.stick_range.x > FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_lr = LR_Right;
    }
    if (fp->input.pl.stick_range.y < -FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_ud = UD_Down;
    }
    if (fp->input.pl.stick_range.y > FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN)
    {
        fp->breakout_ud = UD_Up;
    }
    if ((fp->breakout_lr != breakout_lr_bak) || (fp->breakout_ud != breakout_ud_bak))
    {
        is_mash = TRUE;

        fp->breakout_wait--;
    }
    return is_mash;
}

// 0x8014E4D4
void ftCommonCaptureShoulderedProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);

    ftCommonCaptureTrappedUpdateBreakoutVars(this_fp);

    if (this_fp->breakout_wait <= 0)
    {
        ftCommonCaptureApplyCatchKnockback(capture_gobj, &dFTCommonCaptureKnockbackCatch); // Deal knockback to player this fighter is caught by
        ftCommonCaptureApplyCaptureKnockback(fighter_gobj, &dFTCommonCaptureKnockbackCapture); // Deal knockback to this fighter

        capture_fp->catch_gobj = NULL;
        this_fp->capture_gobj = NULL;
    }
}

// 0x8014E558
void ftCommonCaptureShoulderedSetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *capture_gobj = this_fp->capture_gobj;
    ftStruct *capture_fp = ftGetStruct(capture_gobj);
    s32 damage;

    ftCommonThrownSetStatusImmediate(fighter_gobj, ftStatus_Common_Shouldered);
    ftCommonCaptureTrappedInitBreakoutVars(this_fp, ((this_fp->percent_damage * 0.08F) + 14.0F));

    damage = gmCommon_DamageApplyStale(capture_fp->player, 8, capture_fp->attack_id, capture_fp->motion_count);

    if (ftCommon_GetBestHitStatusAll(fighter_gobj) != gmHitCollision_HitStatus_Normal)
    {
        damage = 0;
    }
    if (damage != 0)
    {
        ftCommonDamageUpdateDamageColAnim(fighter_gobj, gmCommonObject_DamageCalcKnockback(this_fp->percent_damage, damage, damage, 0, 100, 0, this_fp->attributes->weight, capture_fp->handicap, this_fp->handicap), 0);
        ftDamageUpdateCheckDropItem(this_fp, damage);
        ftAttackUpdateMatchStats(capture_fp->player, this_fp->player, damage);
        ftAttackAddStaleQueue(capture_fp->player, this_fp->player, capture_fp->attack_id, capture_fp->motion_count);
    }
    ftMainMakeRumble(this_fp, 7, 0);
}
