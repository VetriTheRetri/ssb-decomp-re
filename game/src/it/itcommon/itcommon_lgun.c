#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

enum itLGunStatus
{
    itStatus_LGun_GWait,
    itStatus_LGun_AFall,
    itStatus_LGun_FHold,
    itStatus_LGun_FThrow,
    itStatus_LGun_FDrop,
    itStatus_LGun_EnumMax
};

itCreateDesc itCommon_LGun_ItemDesc =
{
    It_Kind_LGun,                           // Item Kind
    &gpItemFileData,                        // Pointer to item file data?
    0x268,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itLGun_AFall_ProcUpdate,                // Proc Update
    itLGun_AFall_ProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_LGun_StatusDesc[itStatus_LGun_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itLGun_GWait_ProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itLGun_AFall_ProcUpdate,            // Proc Update
        itLGun_AFall_ProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Hold)
    {
        NULL,                               // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 3 (Fighter Throw)
    {
        itLGun_AFall_ProcUpdate,            // Proc Update
        itLGun_FThrow_ProcMap,              // Proc Map
        itLGun_SDefault_ProcHit,            // Proc Hit
        itLGun_SDefault_ProcHit,            // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itLGun_SDefault_ProcHit,            // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itLGun_AFall_ProcMap,               // Proc Update
        itLGun_FDrop_ProcMap,               // Proc Map
        itLGun_SDefault_ProcHit,            // Proc Hit
        itLGun_SDefault_ProcHit,            // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itLGun_SDefault_ProcHit,            // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc wpLGun_Ammo_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_LGunAmmo,                       // Weapon Kind
    &gpItemFileData,                        // Pointer to character's loaded files?
    0x2B0,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpLGun_Ammo_ProcUpdate,                 // Proc Update
    wpLGun_Ammo_ProcMap,                    // Proc Map
    wpLGun_Ammo_ProcHit,                    // Proc Hit
    wpLGun_Ammo_ProcHit,                    // Proc Shield
    wpLGun_Ammo_ProcHop,                    // Proc Hop
    wpLGun_Ammo_ProcHit,                    // Proc Set-Off
    wpLGun_Ammo_ProcReflector,              // Proc Reflector
    wpLGun_Ammo_ProcHit                     // Proc Absorb
};

// 0x801754F0
bool32 itLGun_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITLGUN_GRAVITY, ITLGUN_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80175528
bool32 itLGun_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itLGun_AFall_SetStatus);

    return FALSE;
}

// 0x80175550
bool32 itLGun_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.1F, itLGun_GWait_SetStatus);
}

// 0x80175584
void itLGun_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_LGun_StatusDesc, itStatus_LGun_GWait);
}

// 0x801755B8
void itLGun_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_LGun_StatusDesc, itStatus_LGun_AFall);
}

// 0x801755FC
void itLGun_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_LGun_StatusDesc, itStatus_LGun_FHold);
}

// 0x80175630
bool32 itLGun_FThrow_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return func_ovl3_80173DF4(item_gobj, 0.2F);
    }
    else return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.1F, itLGun_GWait_SetStatus);
}

// 0x80175684
bool32 itLGun_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x801756AC
void itLGun_FThrow_SetStatus(GObj *item_gobj)
{
    s32 lr = ftGetStruct(itGetStruct(item_gobj)->owner_gobj)->lr;

    itMain_SetItemStatus(item_gobj, itCommon_LGun_StatusDesc, itStatus_LGun_FThrow);

    DObjGetStruct(item_gobj)->next->rotate.y = (lr == LEFT) ? F_DEG_TO_RAD(-90.0F) : F_DEG_TO_RAD(90.0F); // -HALF_PI32, HALF_PI32
}

// 0x8017572C
bool32 itLGun_FDrop_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return func_ovl3_80173DF4(item_gobj, 0.2F);
    }
    else return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.1F, itLGun_GWait_SetStatus);
}

// 0x80175780
void itLGun_FDrop_SetStatus(GObj *item_gobj)
{
    s32 lr = ftGetStruct(itGetStruct(item_gobj)->owner_gobj)->lr;

    itMain_SetItemStatus(item_gobj, itCommon_LGun_StatusDesc, itStatus_LGun_FDrop);

    DObjGetStruct(item_gobj)->next->rotate.y = (lr == LEFT) ? F_DEG_TO_RAD(-90.0F) : F_DEG_TO_RAD(90.0F); // -HALF_PI32, HALF_PI32
}

GObj* itCommon_LGun_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_LGun_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITLGUN_AMMO_MAX;

        DObjGetStruct(item_gobj)->rotate.y = (lbRandom_GetShort() & 1) ? F_DEG_TO_RAD(90.0F) : F_DEG_TO_RAD(-90.0F); // HALF_PI32, -HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}

// Ray Gun ammo functions
bool32 wpLGun_Ammo_ProcUpdate(GObj *weapon_gobj)
{
    DObj *joint = DObjGetStruct(weapon_gobj);

    if (joint->scale.x < ITLGUN_AMMO_CLAMP_SCALE_X)
    {
        joint->scale.x += ITLGUN_AMMO_STEP_SCALE_X;

        joint = DObjGetStruct(weapon_gobj); // Y tho lol

        if (joint->scale.x > ITLGUN_AMMO_CLAMP_SCALE_X)
        {
            joint->scale.x = ITLGUN_AMMO_CLAMP_SCALE_X;
        }
    }
    return FALSE;
}

// 0x80175914
bool32 wpLGun_Ammo_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x80175958
bool32 wpLGun_Ammo_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return TRUE;
}

// 0x80175988
bool32 wpLGun_Ammo_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    return FALSE;
}

// 0x80175A00
bool32 wpLGun_Ammo_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    return FALSE;
}

// 0x80175A60
GObj* wpLGun_Ammo_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpLGun_Ammo_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->lr * ITLGUN_AMMO_VEL_X;

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    return weapon_gobj;
}

// 0x80175AD8
void ftCommon_LGunShoot_CreateAmmo(GObj *fighter_gobj, Vec3f *pos)
{
    itStruct *ip = itGetStruct(ftGetStruct(fighter_gobj)->item_hold);

    wpLGun_Ammo_MakeWeapon(fighter_gobj, pos);

    ip->it_multi--;
}