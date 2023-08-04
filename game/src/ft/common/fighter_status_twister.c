#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>

void ftCommon_Twister_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.twister.release_wait++;

    if (fp->status_vars.common.twister.release_wait >= FTCOMMON_TORNADO_RELEASE_WAIT)
    {
        ftCommon_Twister_ShootFighter(fighter_gobj);
    }
}

// 0x80143A20
void ftCommon_Twister_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *tornado_gobj = fp->status_vars.common.twister.tornado_gobj;
    Vec3f pos = DObjGetStruct(tornado_gobj)->translate;
    Vec3f vel;
    f32 mul;
    f32 angle_d;
    f32 mag;
    f32 unused[2];

    angle_d = (fp->status_vars.common.twister.release_wait * 0.016666668F);
    mul = (((400.0F * angle_d) + 100.0F) * 0.5F);

    pos.x += (mul * func_ovl0_800C78B8(F_DEG_TO_RAD(1800.0F * angle_d)));
    pos.z += (mul * bitmap_sinf(F_DEG_TO_RAD(1800.0F * angle_d)));
    pos.y += 500.0F * angle_d;

    vec3f_sub(&vel, &pos, &DObjGetStruct(fighter_gobj)->translate);

    mag = vec3f_mag(&vel);

    if (mag > 50.0F)
    {
        vec3f_scale(&vel, 50.0F / mag);
    }
    fp->phys_info.vel_air = vel;

    DObjGetStruct(fighter_gobj)->rotate.y = (fp->lr * F_DEG_TO_RAD(90.0F) /* HALF_PI32 */) + F_DEG_TO_RAD(1800.0F * angle_d);
}

// 0x80143BC4
void ftCommon_Twister_SetStatus(GObj *fighter_gobj, GObj *tornado_gobj)
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
    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Common_Twister, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    func_ovl2_800D9444(fighter_gobj);

    fp->status_vars.common.twister.release_wait = 0;
    fp->status_vars.common.twister.tornado_gobj = tornado_gobj;

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
    func_800269C0(gmSound_SFX_HyruleTwisterEnter);
}

extern intptr_t D_NF_00000014;
extern intptr_t D_NF_000000BC;

// 0x80143CC4
void ftCommon_Twister_ShootFighter(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftThrowHitDesc *tornado = (ftThrowHitDesc*) (((uintptr_t)gpGroundInfo - (intptr_t)&D_NF_00000014) + (intptr_t)&D_NF_000000BC); // Linker thing
    f32 knockback;
    s32 damage;

    DObjGetStruct(fighter_gobj)->translate.z = 0.0F;

    knockback = gmCommonObject_DamageCalcKnockback(fp->percent_damage, tornado->damage, tornado->damage, tornado->knockback_weight, tornado->knockback_scale, tornado->knockback_base, fp->attributes->weight, 9, fp->handicap);

    if (ftCommon_GetBestHitStatusAll(fighter_gobj) != gmHitCollision_HitStatus_Normal)
    {
        damage = 0;
    }
    else damage = tornado->damage;

    ftCommon_Damage_InitDamageVars(fighter_gobj, -1, damage, knockback, tornado->angle, fp->lr, 0, tornado->element, 0, TRUE, TRUE, TRUE);
    ftCommon_Update1PGameDamageStats(fp, 4, 4, 2, 0, 0);

    if (damage != 0)
    {
        ftDamageUpdateCheckDropItem(fp, damage);
    }
    fp->twister_wait = FTCOMMON_TORNADO_PICKUP_WAIT;
}