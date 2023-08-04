#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>

// 0x80143E10
void ftCommon_TaruCann_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.tarucann.shoot_wait != 0)
    {
        fp->status_vars.common.tarucann.shoot_wait--;

        if (fp->status_vars.common.tarucann.shoot_wait == (FTCOMMON_TARUCANN_SHOOT_WAIT / 2))
        {
            func_800269C0(0x119U);
        }
        if (fp->status_vars.common.tarucann.shoot_wait == 0)
        {
            ftCommon_TaruCann_ShootFighter(fighter_gobj);

            return;
        }
    }
    fp->status_vars.common.tarucann.release_wait++;

    if ((fp->status_vars.common.tarucann.release_wait >= FTCOMMON_TARUCANN_RELEASE_WAIT) && (fp->status_vars.common.tarucann.shoot_wait == 0))
    {
        fp->status_vars.common.tarucann.shoot_wait = FTCOMMON_TARUCANN_SHOOT_WAIT;

        func_ovl2_80109D20(fp->status_vars.common.tarucann.tarucann_gobj);
    }
}

// 0x80143EB0
void ftCommon_TaruCann_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_vars.common.tarucann.shoot_wait == 0) && (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b)))
    {
        fp->status_vars.common.tarucann.shoot_wait = FTCOMMON_TARUCANN_SHOOT_WAIT;

        func_ovl2_80109D20(fp->status_vars.common.tarucann.tarucann_gobj);
    }
}

// 0x80143F04
void ftCommon_TaruCann_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *tarucann_gobj = fp->status_vars.common.tarucann.tarucann_gobj;

    DObjGetStruct(fighter_gobj)->translate = DObjGetStruct(tarucann_gobj)->translate;
}

// 0x80143F30
void ftCommon_TaruCann_SetStatus(GObj *fighter_gobj, GObj *tarucann_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_ProcDamageStopVoice(fighter_gobj);

    if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->weight == It_Weight_Heavy))
    {
        ftSetupDropItem(fp);
    }
    if (fp->catch_gobj != NULL)
    {
        func_ovl3_8014B330(fp->catch_gobj);

        fp->catch_gobj = NULL;
    }
    else if (fp->capture_gobj != NULL)
    {
        func_ovl3_8014AECC(fp->capture_gobj, fighter_gobj);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Common_TaruCann, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    func_ovl2_800D9444(fighter_gobj);

    fp->status_vars.common.tarucann.shoot_wait = 0;
    fp->status_vars.common.tarucann.release_wait = 0;
    fp->status_vars.common.tarucann.tarucann_gobj = tarucann_gobj;

    ftCollision_SetHitStatusAll(fighter_gobj, gmHitCollision_HitStatus_Intangible);

    fp->is_invisible = TRUE;

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
    func_800269C0(0x11AU);
}

extern intptr_t D_NF_00000014;
extern intptr_t D_NF_000000BC;

// 0x80144038
void ftCommon_TaruCann_ShootFighter(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftThrowHitDesc *tarucann = (ftThrowHitDesc*) (((uintptr_t)gpGroundInfo - (intptr_t)&D_NF_00000014) + (intptr_t)&D_NF_000000BC); // Linker thing
    f32 knockback;
    s32 angle;

    DObjGetStruct(fighter_gobj)->translate.z = 0.0F;

    knockback = grMapObject_DamageCalcKnockback(fp->percent_damage, tarucann->damage, tarucann->damage, tarucann->knockback_weight, tarucann->knockback_scale, tarucann->knockback_base, fp->attributes->weight, 9, 9);

    angle = ((I_RAD_TO_DEG(func_ovl2_8010A12C()) * -fp->lr) + 90);
    angle -= (angle / 360) * 360;

    ftCommon_Damage_InitDamageVars(fighter_gobj, ftStatus_Common_DamageFlyRoll, tarucann->damage, knockback, angle, fp->lr, 0, tarucann->element, 0, TRUE, TRUE, FALSE);
    ftCommon_Update1PGameDamageStats(fp, 4, 4, 3, 0, 0);

    fp->playertag_wait = 0;
    fp->tarucann_wait = FTCOMMON_TARUCANN_PICKUP_WAIT;
}