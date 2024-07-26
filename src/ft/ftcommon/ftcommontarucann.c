#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>

extern f32 grMapObject_DamageCalcKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lGRJungleDataStart;             // 0x00000014
extern intptr_t lGRJungleTaruCannThrowHitDesc;  // 0x000000BC

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80143E10
void ftCommonTaruCannProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.tarucann.shoot_wait != 0)
    {
        fp->status_vars.common.tarucann.shoot_wait--;

        if (fp->status_vars.common.tarucann.shoot_wait == (FTCOMMON_TARUCANN_SHOOT_WAIT / 2))
        {
            func_800269C0_275C0(alSound_SFX_JungleTaruCannShoot);
        }
        if (fp->status_vars.common.tarucann.shoot_wait == 0)
        {
            ftCommonTaruCannShootFighter(fighter_gobj);

            return;
        }
    }
    fp->status_vars.common.tarucann.release_wait++;

    if ((fp->status_vars.common.tarucann.release_wait >= FTCOMMON_TARUCANN_RELEASE_WAIT) && (fp->status_vars.common.tarucann.shoot_wait == 0))
    {
        fp->status_vars.common.tarucann.shoot_wait = FTCOMMON_TARUCANN_SHOOT_WAIT;

        grJungleTaruCannAddAnimShoot(fp->status_vars.common.tarucann.tarucann_gobj);
    }
}

// 0x80143EB0
void ftCommonTaruCannProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_vars.common.tarucann.shoot_wait == 0) && (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        fp->status_vars.common.tarucann.shoot_wait = FTCOMMON_TARUCANN_SHOOT_WAIT;

        grJungleTaruCannAddAnimShoot(fp->status_vars.common.tarucann.tarucann_gobj);
    }
}

// 0x80143F04
void ftCommonTaruCannProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *tarucann_gobj = fp->status_vars.common.tarucann.tarucann_gobj;

    DObjGetStruct(fighter_gobj)->translate.vec.f = DObjGetStruct(tarucann_gobj)->translate.vec.f;
}

// 0x80143F30
void ftCommonTaruCannSetStatus(GObj *fighter_gobj, GObj *tarucann_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_ProcDamageStopVoice(fighter_gobj);

    if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->weight == nITWeightHeavy))
    {
        ftSetupDropItem(fp);
    }
    if (fp->catch_gobj != NULL)
    {
        ftCommonThrownSetStatusDamageRelease(fp->catch_gobj);

        fp->catch_gobj = NULL;
    }
    else if (fp->capture_gobj != NULL)
    {
        ftCommonThrownDecideFighterLoseGrip(fp->capture_gobj, fighter_gobj);
    }
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusTaruCann, 0.0F, 0.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftPhysics_StopVelAll(fighter_gobj);

    fp->status_vars.common.tarucann.shoot_wait = 0;
    fp->status_vars.common.tarucann.release_wait = 0;
    fp->status_vars.common.tarucann.tarucann_gobj = tarucann_gobj;

    ftCollision_SetHitStatusAll(fighter_gobj, nGMHitStatusIntangible);

    fp->is_invisible = TRUE;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);
    func_800269C0_275C0(alSound_SFX_JungleTaruCannEnter);
}

// 0x80144038
void ftCommonTaruCannShootFighter(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftThrowHitDesc *tarucann = (ftThrowHitDesc*) (((uintptr_t)gMPGroundData - (intptr_t)&lGRJungleDataStart) + (intptr_t)&lGRJungleTaruCannThrowHitDesc); // Linker thing
    f32 knockback;
    s32 angle;

    DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0F;

    knockback = grMapObject_DamageCalcKnockback(fp->percent_damage, tarucann->damage, tarucann->damage, tarucann->knockback_weight, tarucann->knockback_scale, tarucann->knockback_base, fp->attributes->weight, 9, 9);

    angle = ((I_CLC_RTOD32(grJungleTaruCannGetRotate()) * -fp->lr) + 90);
    angle -= (angle / 360) * 360;

    ftCommonDamageInitDamageVars(fighter_gobj, nFTCommonStatusDamageFlyRoll, tarucann->damage, knockback, angle, fp->lr, 0, tarucann->element, 0, TRUE, TRUE, FALSE);
    ftCommon_Update1PGameDamageStats(fp, GMMATCH_PLAYERS_MAX, nFTHitlogObjectGround, nGMHitEnvironmentTaruCann, 0, 0);

    fp->playertag_wait = 0;
    fp->tarucann_wait = FTCOMMON_TARUCANN_PICKUP_WAIT;
}
