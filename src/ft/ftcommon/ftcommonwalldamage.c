#include <ft/fighter.h>

extern f32 ftParamGetHitStun(f32);

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

    if (fp->status_vars.common.damage.hitstun_tics == 0)
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

    efManagerImpactWaveMakeEffect(pos, MTVECTOR_AXIS_Z, atan2f(-angle->x, angle->y));
    efManagerQuakeMakeEffect(2);

    vel_air = fp->phys_info.vel_air;

    lbCommonAdd2D(&vel_air, &fp->phys_info.vel_damage_air);
    lbCommonReflect2D(&vel_air, angle);
    lbCommonScale2D(&vel_air, 0.8F);

    fp->phys_info.vel_damage_air = vel_air;

    fp->phys_info.vel_air.x = fp->phys_info.vel_air.y = fp->phys_info.vel_air.z = 0.0F;

    fp->lr = (fp->phys_info.vel_damage_air.x < 0.0F) ? nGMFacingR : nGMFacingL;

    knockback = lbCommonMag2D(&vel_air);

    fp->status_vars.common.damage.hitstun_tics = ftParamGetHitStun(knockback);

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusWallDamage, 0.0F, 2.0F, (FTSTATUS_PRESERVE_DAMAGEPLAYER | FTSTATUS_PRESERVE_PLAYERTAG));

    fp->damage_stack = knockback;

    ftParamMakeRumble(fp, 2, 0);

    ftParamSetTimedHitStatusIntangible(fp, FTCOMMON_WALLDAMAGE_INTANGIBLE_TIMER);

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

    if (fp->status_vars.common.damage.coll_mask_current & MPCOLL_FLAG_LWALL)
    {
        pos.x += fp->coll_data.objcoll.width;
        pos.y += fp->coll_data.objcoll.center;

        ftCommonWallDamageSetStatus(fighter_gobj, &fp->coll_data.lwall_angle, &pos);

        return TRUE;
    }
    else if (fp->status_vars.common.damage.coll_mask_current & MPCOLL_FLAG_RWALL)
    {
        pos.x -= fp->coll_data.objcoll.width;
        pos.y += fp->coll_data.objcoll.center;

        ftCommonWallDamageSetStatus(fighter_gobj, &fp->coll_data.rwall_angle, &pos);

        return TRUE;
    }
    else if (fp->status_vars.common.damage.coll_mask_current & MPCOLL_FLAG_CEIL)
    {
        pos.y += fp->coll_data.objcoll.top;

        ftCommonWallDamageSetStatus(fighter_gobj, &fp->coll_data.ceil_angle, &pos);

        return TRUE;
    }
    else return FALSE;
}
