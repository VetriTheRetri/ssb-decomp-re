#include <ft/fighter.h>
#include <it/item.h>

// 0x80146FB0
void ftCommon_LGunShoot_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, func_ovl2_800DEE54);
}

const Vec3f Fighter_LGunShoot_Ammo_Offset = { FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z };
const Vec3f Fighter_LGunShoot_Dust_Offset = { FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z };

// 0x80146FD4
void ftCommon_LGunShoot_ProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ap;
    f32 size_mul;
    Vec3f spawn_ammo_offset;
    Vec3f spawn_gfx_offset;
    Vec3f dust_gfx_offset;

    if ((fp->item_hold != NULL) && (fp->command_vars.flags.flag0 != 0))
    {
        ap = itGetStruct(fp->item_hold);

        if (ap->it_multi != 0)
        {
            spawn_ammo_offset = Fighter_LGunShoot_Ammo_Offset;

            size_mul = 1.0F / fp->attributes->size_mul;

            spawn_ammo_offset.x *= size_mul;
            spawn_ammo_offset.y *= size_mul;
            spawn_ammo_offset.z *= size_mul;

            func_ovl2_800EDF24(fp->joint[fp->attributes->joint_itemhold_light], &spawn_ammo_offset);
            ftCommon_LGunShoot_CreateAmmo(fighter_gobj, &spawn_ammo_offset);

            spawn_gfx_offset.x = 0.0F;
            spawn_gfx_offset.y = FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y;
            spawn_gfx_offset.z = FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z;

            ftCommon_GFXSpawn(fighter_gobj, 0x1F, fp->attributes->joint_itemhold_light, &spawn_gfx_offset, NULL, fp->lr, TRUE, 0);

            spawn_gfx_offset.x = 0.0F;
            spawn_gfx_offset.y = 0.0F;
            spawn_gfx_offset.z = -FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z;

            ftCommon_GFXSpawn(fighter_gobj, 0x13, 0, &spawn_gfx_offset, NULL, fp->lr, FALSE, 0);

            func_800269C0(0x3DU);
            ftMain_MakeRumble(fp, 9, 0);
        }
        else
        {
            dust_gfx_offset = Fighter_LGunShoot_Dust_Offset;

            ftCommon_GFXSpawn(fighter_gobj, 0xB, fp->attributes->joint_itemhold_light, &dust_gfx_offset, NULL, -fp->lr, TRUE, 0);
            func_800269C0(0x3EU);
        }
        fp->command_vars.flags.flag0 = 0;
    }
}

// 0x801471C0
void ftCommon_LGunShoot_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftCommon_LGunShoot_SwitchStatusAir);
}

// 0x801471E4
void ftCommon_LGunShootAir_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftCommon_LGunShootAir_SwitchStatusGround);
}

// 0x80147208
void ftCommon_LGunShootAir_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_LGunShoot, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_accessory = ftCommon_LGunShoot_ProcAccessory;
}

// 0x80147258
void ftCommon_LGunShoot_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_LGunShootAir, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl2_800D8EB8(fp);

    fp->proc_accessory = ftCommon_LGunShoot_ProcAccessory;
}

// 0x801472B0
void ftCommon_FireFlowerShoot_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, func_ovl2_800DEE54);
}

const Vec3f Fighter_FireFlowerShoot_Ammo_Offset = { FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_X, FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_Y, FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_Z };

// 0x801472D4
void ftCommon_FireFlowerShoot_UpdateAmmoStats(ftStruct *fp, s32 ammo_sub)
{
    itStruct *ap = itGetStruct(fp->item_hold);
    Vec3f flame_spawn_offset = Fighter_FireFlowerShoot_Ammo_Offset;
    f32 size_mul;
    s32 flame_vel_index;

    if (ap->it_multi >= ammo_sub)
    {
        size_mul = 1.0F / fp->attributes->size_mul;

        flame_spawn_offset.x *= size_mul;
        flame_spawn_offset.y *= size_mul;
        flame_spawn_offset.z *= size_mul;

        func_ovl2_800EDF24(fp->joint[fp->attributes->joint_itemhold_light], &flame_spawn_offset);

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

const Vec3f Fighter_FireFlowerShoot_HaveAmmo_Dust_Offset = { 60.0F, 100.0F, 0.0F };
const Vec3f Fighter_FireFlowerShoot_NoAmmo_Dust_Offset   = { 0.0F, 0.0F, -180.0F };
const Vec3f Fighter_FireFlowerShoot_Spark_Offset         = { 0.0F, 80.0F,   0.0F };
const Vec3f Fighter_FireFlowerShoot_Spark_Scatter        = { 90.0F, 90.0F, 90.0F };
const Vec3f Fighter_FireFlowerShoot_Kickup_Offset        = { 0.0F, 0.0F, -180.0F };

// 0x80147434
void ftCommon_FireFlowerShoot_ProcAccessory(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ap;
    s32 ammo_sub;
    Vec3f gfx_haveammo_offset;
    Vec3f gfx_noammo_offset;
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
            ap = itGetStruct(fp->item_hold);

            ammo_sub = (fp->status_vars.common.fireflower.ammo_fire_count == 0) ? 2 : 1;

            fp->status_vars.common.fireflower.gfx_spawn_int--;

            if (fp->status_vars.common.fireflower.gfx_spawn_int == 0)
            {
                fp->status_vars.common.fireflower.gfx_spawn_int = FTCOMMON_FIREFLOWERSHOOT_GFX_SPAWN_INT;

                if (ap->it_multi < ammo_sub)
                {
                    gfx_haveammo_offset = Fighter_FireFlowerShoot_HaveAmmo_Dust_Offset;

                    ftCommon_GFXSpawn(fighter_gobj, 0xB, fp->attributes->joint_itemhold_light, &gfx_haveammo_offset, 0, -fp->lr, 1, 0);
                    func_800269C0(0x30U);
                }
                else
                {
                    gfx_noammo_offset = Fighter_FireFlowerShoot_NoAmmo_Dust_Offset;

                    ftCommon_GFXSpawn(fighter_gobj, 0xB, 0, &gfx_noammo_offset, 0, fp->lr, 0, 0);
                    func_800269C0(0x1AU);
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
                if (ap->it_multi >= ammo_sub)
                {
                    gfx_spark_offset = Fighter_FireFlowerShoot_Spark_Offset;
                    gfx_spark_scatter = Fighter_FireFlowerShoot_Spark_Scatter;
                    gfx_dust_offset = Fighter_FireFlowerShoot_Kickup_Offset;

                    ftCommon_GFXSpawn(fighter_gobj, 0x1F, fp->attributes->joint_itemhold_light, &gfx_spark_offset, &gfx_spark_scatter, fp->lr, 1, 0);
                    ftCommon_GFXSpawn(fighter_gobj, 0x13, 0, &gfx_dust_offset, 0, fp->lr, 0, 0);
                }
                fp->command_vars.flags.flag0 = 2;

                gOMObj_SetAnimPlaybackRate(fighter_gobj, 0.0F);
            }
        }
        if ((fp->status_vars.common.fireflower.ammo_fire_count >= 5) && (fp->status_vars.common.fireflower.is_release != FALSE) && (fp->status_vars.common.fireflower.release_lag >= 20))
        {
            fp->command_vars.flags.flag0 = 0;

            gOMObj_SetAnimPlaybackRate(fighter_gobj, 1.0F);
        }
    }
}

// 0x8014772C
void ftCommon_FireFlowerShoot_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftCommon_FireFlowerShoot_SwitchStatusAir);
}

// 0x80147750
void ftCommon_FireFlowerShootAir_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftCommon_FireFlowerShootAir_SwitchStatusGround);
}

// 0x80147774
void ftCommon_FireFlowerShootAir_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_FireFlowerShoot, fighter_gobj->anim_frame, DObjGetStruct(fighter_gobj)->dobj_f1, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_accessory = ftCommon_FireFlowerShoot_ProcAccessory;
}

// 0x801477C8
void ftCommon_FireFlowerShoot_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Common_FireFlowerShootAir, fighter_gobj->anim_frame, DObjGetStruct(fighter_gobj)->dobj_f1, FTSTATUPDATE_NONE_PRESERVE);
    func_ovl2_800D8EB8(fp);

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
    itStruct *ap = itGetStruct(fp->item_hold);
    s32 status_id;
    void (*proc_accessory)(GObj*);

    switch (ap->it_kind)
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

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->proc_accessory = proc_accessory;

    ftCommon_FireFlowerShoot_InitStatusVars(fp);
}

// 0x801478EC
void ftCommon_ItemShootAir_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    itStruct *ap = itGetStruct(fp->item_hold);
    s32 status_id;
    void (*proc_accessory)(GObj*);

    switch (ap->it_kind)
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

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->proc_accessory = proc_accessory;

    func_ovl2_800D8EB8(fp);
    ftCommon_FireFlowerShoot_InitStatusVars(fp);
}
