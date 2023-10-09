#include <ft/fighter.h>
#include <it/item.h>
#include <ef/effect.h>

// 0x80188660
Vec3f ftCommon_LGunShoot_AmmoOffset = { FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z };

// 0x8018866C
Vec3f ftCommon_LGunShoot_DustOffset = { FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z };

// 0x80188678
Vec3f ftCommon_FireFlowerShoot_AmmoOffset = { FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_Z };

// 0x80188684
Vec3f ftCommon_FireFlowerShoot_NoAmmoDustOffset     = { 60.0F, 100.0F,    0.0F };

// 0x80188690
Vec3f ftCommon_FireFlowerShoot_HaveAmmoDustOffset   = {  0.0F,   0.0F, -180.0F };

// 0x8018869C
Vec3f ftCommon_FireFlowerShoot_SparkOffset          = {  0.0F,  80.0F,    0.0F };

// 0x801886A8
Vec3f ftCommon_FireFlowerShoot_SparkScatter         = { 90.0F,  90.0F,   90.0F };

// 0x801886B4
Vec3f ftCommon_FireFlowerShoot_KickupOffset         = {  0.0F,   0.0F, -180.0F };

// 0x80146FB0
void ftCommon_LGunShoot_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x80146FD4
void ftCommon_LGunShoot_ProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip;
    f32 size_mul;
    Vec3f spawn_ammo_offset;
    Vec3f spawn_gfx_offset;
    Vec3f dust_gfx_offset;

    if ((fp->item_hold != NULL) && (fp->command_vars.flags.flag0 != 0))
    {
        ip = itGetStruct(fp->item_hold);

        if (ip->it_multi != 0)
        {
            spawn_ammo_offset = ftCommon_LGunShoot_AmmoOffset;

            size_mul = 1.0F / fp->attributes->size_mul;

            spawn_ammo_offset.x *= size_mul;
            spawn_ammo_offset.y *= size_mul;
            spawn_ammo_offset.z *= size_mul;

            ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_light], &spawn_ammo_offset);
            ftCommon_LGunShoot_CreateAmmo(fighter_gobj, &spawn_ammo_offset);

            spawn_gfx_offset.x = 0.0F;
            spawn_gfx_offset.y = FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y;
            spawn_gfx_offset.z = FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z;

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_SparkleWhiteScale, fp->attributes->joint_itemhold_light, &spawn_gfx_offset, NULL, fp->lr, TRUE, FALSE);

            spawn_gfx_offset.x = 0.0F;
            spawn_gfx_offset.y = 0.0F;
            spawn_gfx_offset.z = -FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z;

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustDashSmall, ftParts_Joint_TopN, &spawn_gfx_offset, NULL, fp->lr, FALSE, FALSE);

            func_800269C0(alSound_SFX_LGunShoot);
            ftMain_MakeRumble(fp, 9, 0);
        }
        else
        {
            dust_gfx_offset = ftCommon_LGunShoot_DustOffset;

            ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, fp->attributes->joint_itemhold_light, &dust_gfx_offset, NULL, -fp->lr, TRUE, FALSE);
            func_800269C0(alSound_SFX_LGunEmpty);
        }
        fp->command_vars.flags.flag0 = 0;
    }
}

// 0x801471C0
void ftCommon_LGunShoot_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftCommon_LGunShoot_SwitchStatusAir);
}

// 0x801471E4
void ftCommon_LGunShootAir_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCommon_LGunShootAir_SwitchStatusGround);
}

// 0x80147208
void ftCommon_LGunShootAir_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_LGunShoot, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_accessory = ftCommon_LGunShoot_ProcAccessory;
}

// 0x80147258
void ftCommon_LGunShoot_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_LGunShootAir, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftCommon_LGunShoot_ProcAccessory;
}

// 0x801472B0
void ftCommon_FireFlowerShoot_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftMap_SetStatusWaitOrFall);
}

// 0x801472D4
void ftCommon_FireFlowerShoot_UpdateAmmoStats(ftStruct *fp, s32 ammo_sub)
{
    itStruct *ip = itGetStruct(fp->item_hold);
    Vec3f flame_spawn_offset = ftCommon_FireFlowerShoot_AmmoOffset;
    f32 size_mul;
    s32 flame_vel_index;

    if (ip->it_multi >= ammo_sub)
    {
        size_mul = 1.0F / fp->attributes->size_mul;

        flame_spawn_offset.x *= size_mul;
        flame_spawn_offset.y *= size_mul;
        flame_spawn_offset.z *= size_mul;

        ftParts_GetDObjWorldPosition(fp->joint[fp->attributes->joint_itemhold_light], &flame_spawn_offset);

        if (fp->status_vars.common.fireflower.flame_vel_index >= FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_LOOP)
        {
            flame_vel_index = FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_MAX - fp->status_vars.common.fireflower.flame_vel_index;
        }
        else flame_vel_index = fp->status_vars.common.fireflower.flame_vel_index;

        ftCommon_FireFlowerShoot_CreateFlame(fp->fighter_gobj, &flame_spawn_offset, flame_vel_index, ammo_sub);
        ftMain_MakeRumble(fp, 6, 0);
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
void ftCommon_FireFlowerShoot_ProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ip;
    s32 ammo_sub;
    Vec3f gfx_noammo_offset;
    Vec3f gfx_haveammo_offset;
    Vec3f gfx_spark_offset;
    Vec3f gfx_spark_scatter;
    Vec3f gfx_dust_offset;

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

            fp->status_vars.common.fireflower.gfx_spawn_int--;

            if (fp->status_vars.common.fireflower.gfx_spawn_int == 0)
            {
                fp->status_vars.common.fireflower.gfx_spawn_int = FTCOMMON_FIREFLOWERSHOOT_GFX_SPAWN_INT;

                if (ip->it_multi < ammo_sub)
                {
                    gfx_noammo_offset = ftCommon_FireFlowerShoot_NoAmmoDustOffset;

                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, fp->attributes->joint_itemhold_light, &gfx_noammo_offset, NULL, -fp->lr, TRUE, FALSE);
                    func_800269C0(alSound_SFX_FireFlowerBurn);
                }
                else
                {
                    gfx_haveammo_offset = ftCommon_FireFlowerShoot_HaveAmmoDustOffset;

                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustLight, ftParts_Joint_TopN, &gfx_haveammo_offset, NULL, fp->lr, FALSE, FALSE);
                    func_800269C0(alSound_SFX_BurnE);
                }
            }
            fp->status_vars.common.fireflower.ammo_sub--;

            if (fp->status_vars.common.fireflower.ammo_sub == 0)
            {
                fp->status_vars.common.fireflower.ammo_sub = FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_MAX;

                ftCommon_FireFlowerShoot_UpdateAmmoStats(fp, ammo_sub);
            }
            if (fp->command_vars.flags.flag0 == 1)
            {
                if (ip->it_multi >= ammo_sub)
                {
                    gfx_spark_offset = ftCommon_FireFlowerShoot_SparkOffset;
                    gfx_spark_scatter = ftCommon_FireFlowerShoot_SparkScatter;
                    gfx_dust_offset = ftCommon_FireFlowerShoot_KickupOffset;

                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_SparkleWhiteScale, fp->attributes->joint_itemhold_light, &gfx_spark_offset, &gfx_spark_scatter, fp->lr, TRUE, FALSE);
                    ftParticle_MakeEffectKind(fighter_gobj, Ef_Kind_DustDashSmall, ftParts_Joint_TopN, &gfx_dust_offset, NULL, fp->lr, FALSE, FALSE);
                }
                fp->command_vars.flags.flag0 = 2;

                omSetGObjAnimPlaybackRate(fighter_gobj, 0.0F);
            }
        }
        if ((fp->status_vars.common.fireflower.ammo_fire_count >= 5) && (fp->status_vars.common.fireflower.is_release != FALSE) && (fp->status_vars.common.fireflower.release_lag >= 20))
        {
            fp->command_vars.flags.flag0 = 0;

            omSetGObjAnimPlaybackRate(fighter_gobj, 1.0F);
        }
    }
}

// 0x8014772C
void ftCommon_FireFlowerShoot_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftCommon_FireFlowerShoot_SwitchStatusAir);
}

// 0x80147750
void ftCommon_FireFlowerShootAir_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCommon_FireFlowerShootAir_SwitchStatusGround);
}

// 0x80147774
void ftCommon_FireFlowerShootAir_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_FireFlowerShoot, fighter_gobj->anim_frame, DObjGetStruct(fighter_gobj)->dobj_f1, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_accessory = ftCommon_FireFlowerShoot_ProcAccessory;
}

// 0x801477C8
void ftCommon_FireFlowerShoot_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_FireFlowerShootAir, fighter_gobj->anim_frame, DObjGetStruct(fighter_gobj)->dobj_f1, FTSTATUPDATE_NONE_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_accessory = ftCommon_FireFlowerShoot_ProcAccessory;
}

// 0x80147824
void ftCommon_FireFlowerShoot_InitStatusVars(ftStruct *fp)
{
    fp->status_vars.common.fireflower.flame_vel_index = 0;
    fp->status_vars.common.fireflower.ammo_sub = 1;
    fp->status_vars.common.fireflower.gfx_spawn_int = 1;
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
        proc_accessory = ftCommon_LGunShoot_ProcAccessory;
        break;

    case It_Kind_FFlower:
        status_id = ftStatus_Common_FireFlowerShoot;
        proc_accessory = ftCommon_FireFlowerShoot_ProcAccessory;
        break;
    }
    fp->command_vars.flags.flag0 = 0;

    ftMain_SetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_accessory = proc_accessory;

    ftCommon_FireFlowerShoot_InitStatusVars(fp);
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
        proc_accessory = ftCommon_LGunShoot_ProcAccessory;
        break;

    case It_Kind_FFlower:
        status_id = ftStatus_Common_FireFlowerShootAir;
        proc_accessory = ftCommon_FireFlowerShoot_ProcAccessory;
        break;
    }
    fp->command_vars.flags.flag0 = 0;

    ftMain_SetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_accessory = proc_accessory;

    ftPhysics_ClampAirVelXMax(fp);
    ftCommon_FireFlowerShoot_InitStatusVars(fp);
}
