#include <ft/fighter.h>

extern f32 ftCommon_DamageCalcHitStun(f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80141AC0
void ftCommonWallDamageProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonDamageUpdateDustEffect(fighter_gobj);
    ftCommonDamageDecHitStunSetPublicity(fighter_gobj);

    if (fp->status_vars.common.damage.hitstun_timer == 0)
    {
        ftCommonDamageFallSetStatusFromDamage(fighter_gobj);
    }
}

// 0x80141B08
void ftCommonWallDamageSetStatus(GObj *fighter_gobj, Vec3f *angle, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vel_air;
    f32 knockback;

    efParticle_ImpactWave_MakeEffect(pos, MTVECTOR_AXIS_Z, atan2f(-angle->x, angle->y));
    efParticle_Quake_MakeEffect(2);

    vel_air = fp->phys_info.vel_air;

    func_ovl0_800C7AB8(&vel_air, &fp->phys_info.vel_damage_air);
    func_ovl0_800C7B08(&vel_air, angle);
    func_ovl0_800C7AE0(&vel_air, 0.8F);

    fp->phys_info.vel_damage_air = vel_air;

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

    fp->lr = (fp->phys_info.vel_damage_air.x < 0.0F) ? LR_Right : LR_Left;

    knockback = func_ovl0_800C7A84(&vel_air);

    fp->status_vars.common.damage.hitstun_timer = ftCommon_DamageCalcHitStun(knockback);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_WallDamage, 0.0F, 2.0F, (FTSTATUPDATE_DAMAGEPORT_PRESERVE | FTSTATUPDATE_PLAYERTAG_PRESERVE));

    fp->damage_stack = knockback;

    ftMainMakeRumble(fp, 2, 0);

    ftCommon_ApplyIntangibleTimer(fp, FTCOMMON_WALLDAMAGE_INTANGIBLE_TIMER);

    fp->is_hitstun = FALSE;
}

// 0x80141C6C
sb32 ftCommonWallDamageCheckGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    pos.x = DObjGetStruct(fighter_gobj)->translate.vec.f.x;
    pos.y = DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    if (fp->status_vars.common.damage.coll_mask_curr & MPCOLL_KIND_LWALL)
    {
        pos.x += fp->coll_data.object_coll.width;
        pos.y += fp->coll_data.object_coll.center;

        ftCommonWallDamageSetStatus(fighter_gobj, &fp->coll_data.lwall_angle, &pos);

        return TRUE;
    }
    else if (fp->status_vars.common.damage.coll_mask_curr & MPCOLL_KIND_RWALL)
    {
        pos.x -= fp->coll_data.object_coll.width;
        pos.y += fp->coll_data.object_coll.center;

        ftCommonWallDamageSetStatus(fighter_gobj, &fp->coll_data.rwall_angle, &pos);

        return TRUE;
    }
    else if (fp->status_vars.common.damage.coll_mask_curr & MPCOLL_KIND_CEIL)
    {
        pos.y += fp->coll_data.object_coll.top;

        ftCommonWallDamageSetStatus(fighter_gobj, &fp->coll_data.ceil_angle, &pos);

        return TRUE;
    }
    else return FALSE;
}