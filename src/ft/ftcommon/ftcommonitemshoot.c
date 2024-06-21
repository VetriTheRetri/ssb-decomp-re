#include <ft/fighter.h>
#include <it/item.h>

extern void gcSetDObjAnimPlaybackRate(GObj*, f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80146FB0
void ftCommonLGunShootProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x80146FD4
void ftCommonLGunShootProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip;
    f32 size_mul;

    if ((fp->item_hold != NULL) && (fp->command_vars.flags.flag0 != 0))
    {
        ip = itGetStruct(fp->item_hold);

        if (ip->it_multi != 0)
        {
            // 0x80188660
            Vec3f make_ammo_offset = { 0.0F, 60.0F, 180.0F };
            Vec3f make_effect_offset;

            size_mul = 1.0F / fp->attributes->size_mul;

            make_ammo_offset.x *= size_mul;
            make_ammo_offset.y *= size_mul;
            make_ammo_offset.z *= size_mul;

            ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_light], &make_ammo_offset);
            itLGunMakeAmmo(fighter_gobj, &make_ammo_offset);

            make_effect_offset.x = 0.0F;
            make_effect_offset.y = 60.0F;
            make_effect_offset.z = 180.0F;

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_SparkleWhiteScale, fp->attributes->joint_itemhold_light, &make_effect_offset, NULL, fp->lr, TRUE, FALSE);

            make_effect_offset.x = 0.0F;
            make_effect_offset.y = 0.0F;
            make_effect_offset.z = -180.0F;

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustDashSmall, ftParts_Joint_TopN, &make_effect_offset, NULL, fp->lr, FALSE, FALSE);

            func_800269C0_275C0(alSound_SFX_LGunShoot);
            ftMainMakeRumble(fp, 9, 0);
        }
        else
        {
            // 0x8018866C
            Vec3f dust_effect_offset = { FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z };

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, fp->attributes->joint_itemhold_light, &dust_effect_offset, NULL, -fp->lr, TRUE, FALSE);
            func_800269C0_275C0(alSound_SFX_LGunEmpty);
        }
        fp->command_vars.flags.flag0 = 0;
    }
}

// 0x801471C0
void ftCommonLGunShootProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftCommonLGunShootSwitchStatusAir);
}

// 0x801471E4
void ftCommonLGunShootAirProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCommonLGunShootAirSwitchStatusGround);
}

// 0x80147208
void ftCommonLGunShootAirSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_LGunShoot, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_accessory = ftCommonLGunShootProcAccessory;
}

// 0x80147258
void ftCommonLGunShootSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_LGunShootAir, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftCommonLGunShootProcAccessory;
}

// 0x801472B0
void ftCommonFireFlowerShootProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x801472D4
void ftCommonFireFlowerShootUpdateAmmoStats(ftStruct *fp, s32 ammo_sub)
{
    itStruct *ip = itGetStruct(fp->item_hold);

    // 0x80188678
    Vec3f make_flame_offset = { 60.0F, 100.0F, 0.0F };
    
    f32 size_mul;
    s32 flame_vel_index;

    if (ip->it_multi >= ammo_sub)
    {
        size_mul = 1.0F / fp->attributes->size_mul;

        make_flame_offset.x *= size_mul;
        make_flame_offset.y *= size_mul;
        make_flame_offset.z *= size_mul;

        ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_light], &make_flame_offset);

        if (fp->status_vars.common.fireflower.flame_vel_index >= FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_LOOP)
        {
            flame_vel_index = FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_MAX - fp->status_vars.common.fireflower.flame_vel_index;
        }
        else flame_vel_index = fp->status_vars.common.fireflower.flame_vel_index;

        itFFlowerShootFlame(fp->fighter_gobj, &make_flame_offset, flame_vel_index, ammo_sub);
        ftMainMakeRumble(fp, 6, 0);
    }
    fp->status_vars.common.fireflower.ammo_fire_count++;

    if (fp->status_vars.common.fireflower.ammo_fire_count > (U16_MAX + 1))
    {
        fp->status_vars.common.fireflower.ammo_fire_count = (U16_MAX + 1);
    }
    fp->status_vars.common.fireflower.flame_vel_index++;

    if (fp->status_vars.common.fireflower.flame_vel_index >= FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_MAX)
    {
        fp->status_vars.common.fireflower.flame_vel_index = 0;

        ftCommon_MotionCountIncSetAttackID(fp, ftMotion_AttackIndex_FireFlowerShoot);
        ftCommon_StatUpdateCountIncSetFlags(fp, fp->stat_flags.halfword);
        ftCommon_Update1PGameAttackStats(fp, 0);
    }
}

// 0x80147434
void ftCommonFireFlowerShootProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip;
    s32 ammo_sub;

    if (!(fp->input.pl.button_hold & fp->input.button_mask_a))
    {
        fp->status_vars.common.fireflower.is_release = TRUE;
    }
    if (fp->status_vars.common.fireflower.release_lag < FTCOMMON_FIREFLOWERSHOOT_RELEASE_LAG)
    {
        fp->status_vars.common.fireflower.release_lag++;
    }
    if ((fp->status_vars.common.fireflower.release_lag < FTCOMMON_FIREFLOWERSHOOT_RELEASE_LAG) && (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        fp->status_vars.common.fireflower.release_lag = 0;
    }
    if (fp->item_hold != NULL)
    {
        if (fp->command_vars.flags.flag0 != 0)
        {
            ip = itGetStruct(fp->item_hold);

            ammo_sub = (fp->status_vars.common.fireflower.ammo_fire_count == 0) ? 2 : 1;

            fp->status_vars.common.fireflower.effect_make_int--;

            if (fp->status_vars.common.fireflower.effect_make_int == 0)
            {
                fp->status_vars.common.fireflower.effect_make_int = FTCOMMON_FIREFLOWERSHOOT_EFFECT_SPAWN_INT;

                if (ip->it_multi < ammo_sub)
                {
                    // 0x80188684
                    Vec3f effect_noammo_offset = { 60.0F, 100.0F, 0.0F };

                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, fp->attributes->joint_itemhold_light, &effect_noammo_offset, NULL, -fp->lr, TRUE, FALSE);
                    func_800269C0_275C0(alSound_SFX_FireFlowerBurn);
                }
                else
                {
                    // 0x80188690
                    Vec3f effect_haveammo_offset = { 0.0F, 0.0F, -180.0F };

                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, ftParts_Joint_TopN, &effect_haveammo_offset, NULL, fp->lr, FALSE, FALSE);
                    func_800269C0_275C0(alSound_SFX_BurnE);
                }
            }
            fp->status_vars.common.fireflower.ammo_sub--;

            if (fp->status_vars.common.fireflower.ammo_sub == 0)
            {
                fp->status_vars.common.fireflower.ammo_sub = FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_MAX;

                ftCommonFireFlowerShootUpdateAmmoStats(fp, ammo_sub);
            }
            if (fp->command_vars.flags.flag0 == 1)
            {
                if (ip->it_multi >= ammo_sub)
                {
                    // 0x8018869C
                    Vec3f effect_spark_offset = { 0.0F, 80.0F, 0.0F };

                    // 0x801886A8
                    Vec3f effect_spark_scatter = { 90.0F, 90.0F, 90.0F };

                    // 0x801886B4
                    Vec3f effect_dust_offset = { 0.0F, 0.0F, -180.0F };

                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_SparkleWhiteScale, fp->attributes->joint_itemhold_light, &effect_spark_offset, &effect_spark_scatter, fp->lr, TRUE, FALSE);
                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustDashSmall, ftParts_Joint_TopN, &effect_dust_offset, NULL, fp->lr, FALSE, FALSE);
                }
                fp->command_vars.flags.flag0 = 2;

                gcSetDObjAnimPlaybackRate(fighter_gobj, 0.0F);
            }
        }
        if ((fp->status_vars.common.fireflower.ammo_fire_count >= 5) && (fp->status_vars.common.fireflower.is_release != FALSE) && (fp->status_vars.common.fireflower.release_lag >= 20))
        {
            fp->command_vars.flags.flag0 = 0;

            gcSetDObjAnimPlaybackRate(fighter_gobj, 1.0F);
        }
    }
}

// 0x8014772C
void ftCommonFireFlowerShootProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftCommonFireFlowerShootSwitchStatusAir);
}

// 0x80147750
void ftCommonFireFlowerShootAirProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCommonFireFlowerShootAirSwitchStatusGround);
}

// 0x80147774
void ftCommonFireFlowerShootAirSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_FireFlowerShoot, fighter_gobj->anim_frame, DObjGetStruct(fighter_gobj)->dobj_f1, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_accessory = ftCommonFireFlowerShootProcAccessory;
}

// 0x801477C8
void ftCommonFireFlowerShootSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_FireFlowerShootAir, fighter_gobj->anim_frame, DObjGetStruct(fighter_gobj)->dobj_f1, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftCommonFireFlowerShootProcAccessory;
}

// 0x80147824
void ftCommonFireFlowerShootInitStatusVars(ftStruct *fp)
{
    fp->status_vars.common.fireflower.flame_vel_index = 0;
    fp->status_vars.common.fireflower.ammo_sub = 1;
    fp->status_vars.common.fireflower.effect_make_int = 1;
    fp->status_vars.common.fireflower.ammo_fire_count = 0;
    fp->status_vars.common.fireflower.is_release = FALSE;
    fp->status_vars.common.fireflower.release_lag = 0;
}

// 0x80147844
void ftCommon_ItemShoot_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip = itGetStruct(fp->item_hold);
    s32 status_id;
    void (*proc_accessory)(GObj*);

    switch (ip->it_kind)
    {
    case It_Kind_LGun:
        status_id = ftStatus_Common_LGunShoot;
        proc_accessory = ftCommonLGunShootProcAccessory;
        break;

    case It_Kind_FFlower:
        status_id = ftStatus_Common_FireFlowerShoot;
        proc_accessory = ftCommonFireFlowerShootProcAccessory;
        break;
    }
    fp->command_vars.flags.flag0 = 0;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_accessory = proc_accessory;

    ftCommonFireFlowerShootInitStatusVars(fp);
}

// 0x801478EC
void ftCommon_ItemShootAir_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip = itGetStruct(fp->item_hold);
    s32 status_id;
    void (*proc_accessory)(GObj*);

    switch (ip->it_kind)
    {
    case It_Kind_LGun:
        status_id = ftStatus_Common_LGunShootAir;
        proc_accessory = ftCommonLGunShootProcAccessory;
        break;

    case It_Kind_FFlower:
        status_id = ftStatus_Common_FireFlowerShootAir;
        proc_accessory = ftCommonFireFlowerShootProcAccessory;
        break;
    }
    fp->command_vars.flags.flag0 = 0;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_accessory = proc_accessory;

    ftPhysics_ClampAirVelXMax(fp);
    ftCommonFireFlowerShootInitStatusVars(fp);
}
