#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

enum itStarRodStatus
{
    itStatus_StarRod_GWait,
    itStatus_StarRod_AFall,
    itStatus_StarRod_FHold,
    itStatus_StarRod_FThrow,
    itStatus_StarRod_FDrop,
    itStatus_StarRod_EnumMax
};

itCreateDesc itCommon_StarRod_ItemDesc =
{
    It_Kind_StarRod,                        // Item Kind
    &gpItemFileData,                        // Pointer to item file data?
    0x48C,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itStarRod_AFall_ProcUpdate,             // Proc Update
    itStarRod_AFall_ProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_StarRod_StatusDesc[itStatus_StarRod_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itStarRod_GWait_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itStarRod_AFall_ProcUpdate,         // Proc Update
        itStarRod_AFall_ProcMap,            // Proc Map
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
        itStarRod_FThrow_ProcUpdate,        // Proc Update
        itStarRod_FThrow_ProcMap,           // Proc Map
        itStarRod_FThrow_ProcHit,           // Proc Hit
        itStarRod_FThrow_ProcHit,           // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itStarRod_FThrow_ProcHit,           // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itStarRod_AFall_ProcUpdate,         // Proc Update
        itStarRod_FDrop_ProcMap,            // Proc Map
        itStarRod_FThrow_ProcHit,           // Proc Hit
        itStarRod_FThrow_ProcHit,           // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itStarRod_FThrow_ProcHit,           // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc wpStarRod_Star_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_StarRodStar,                    // Weapon Kind
    &gpItemFileData,                        // Pointer to character's loaded files?
    0x4D4,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpStarRod_Star_ProcUpdate,              // Proc Update
    wpStarRod_Star_ProcMap,                 // Proc Map
    wpStarRod_Star_ProcHit,                 // Proc Hit
    wpStarRod_Star_ProcHit,                 // Proc Shield
    wpStarRod_Star_ProcHop,                 // Proc Hop
    wpStarRod_Star_ProcHit,                 // Proc Set-Off
    wpStarRod_Star_ProcReflector,           // Proc Reflector
    wpStarRod_Star_ProcHit                  // Proc Absorb
};

// 0x80177E80
bool32 itStarRod_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITSTARROD_GRAVITY, ITSTARROD_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80177EBC
bool32 itStarRod_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itStarRod_AFall_SetStatus);

    return FALSE;
}

// 0x80177EE4
bool32 itStarRod_AFall_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itStarRod_GWait_SetStatus);

    return FALSE;
}

// 0x80177F18
void itStarRod_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_StarRod_StatusDesc, itStatus_StarRod_GWait);
}

// 0x80177F4C
void itStarRod_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_StarRod_StatusDesc, itStatus_StarRod_AFall);
}

// 0x80177F90
void itStarRod_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_StarRod_StatusDesc, itStatus_StarRod_FHold);
}

// 0x80177FC4
bool32 itStarRod_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITSTARROD_GRAVITY, ITSTARROD_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80178000
bool32 itStarRod_FThrow_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itStarRod_GWait_SetStatus);
}

// 0x80178030
bool32 itStarRod_FThrow_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x80178058
void itStarRod_FThrow_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_StarRod_StatusDesc, itStatus_StarRod_FThrow);
    DObjGetStruct(item_gobj)->next->rotate.y = HALF_PI32;
}

// 0x8017809C
bool32 itStarRod_FDrop_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return func_ovl3_80173DF4(item_gobj, 0.2F);
    }
    else return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itStarRod_GWait_SetStatus);
}

// 0x801780F0
void itStarRod_FDrop_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_StarRod_StatusDesc, itStatus_StarRod_FDrop);
    DObjGetStruct(item_gobj)->next->rotate.y = HALF_PI32;
}

// 0x80178134
GObj* itCommon_StarRod_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_StarRod_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITSTARROD_AMMO_MAX;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}

// 0x801781B0
bool32 wpStarRod_Star_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    DObj *joint;

    if (wp->weapon_vars.star.lifetime == 0)
    {
        DObjGetStruct(weapon_gobj)->unk_0x54 = 2;

        efParticle_SparkleWhiteScale_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }

    wp->weapon_vars.star.lifetime--;

    joint = DObjGetStruct(weapon_gobj);

    joint->rotate.z += (-0.2F * wp->lr);

    if (wp->weapon_vars.star.lifetime % 2)
    {
        pos.x = DObjGetStruct(weapon_gobj)->translate.x;
        pos.y = (s32)lbRandom_GetIntRange(250) + (DObjGetStruct(weapon_gobj)->translate.y - 125.0F);
        pos.z = 0.0F;

        efParticle_StarRodSpark_MakeEffect(&pos, wp->lr * -1.0F, weapon_gobj);
    }
    return FALSE;
}

// 0x801782D4
bool32 wpStarRod_Star_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        func_ovl2_80102070(&DObjGetStruct(weapon_gobj)->translate, wp->lr);

        func_800269C0(0x35);

        return TRUE;
    }
    else return FALSE;
}

// 0x8017832C
bool32 wpStarRod_Star_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_80102070(&DObjGetStruct(weapon_gobj)->translate, wp->lr);

    return TRUE;
}

// 0x8017835C
bool32 wpStarRod_Star_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&ip->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = RIGHT;
    }
    else wp->lr = LEFT;

    return FALSE;
}

// 0x80178404
bool32 wpStarRod_Star_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

extern intptr_t StarRod_Linker_Unk;

// 0x80178474
GObj* wpStarRod_Star_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, u8 is_smash)
{
    GObj *weapon_gobj;
    DObj *joint;
    wpStruct *wp;

    if (is_smash == TRUE)
    {
        wpStarRod_Star_WeaponDesc.offset = (intptr_t)&StarRod_Linker_Unk; // Set attribute data on smash input - Linker thing
    }
    weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpStarRod_Star_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    joint = DObjGetStruct(weapon_gobj);
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = ((!(is_smash)) ? ITSTARROD_AMMO_TILT_VEL_X : ITSTARROD_AMMO_SMASH_VEL_X) * wp->lr;

    wp->weapon_vars.star.lifetime = (!(is_smash)) ? ITSTARROD_AMMO_TILT_LIFETIME : ITSTARROD_AMMO_SMASH_LIFETIME; // Why float lol

    func_80008CC0(joint, 0x2E, 0);

    joint->translate = *pos;

    joint->translate.z = 0.0F;

    return weapon_gobj;
}

// 0x80178594
void ftCommon_StarRodSwing_CreateStar(GObj *fighter_gobj, Vec3f *pos, u8 is_smash)
{
    itStruct *ip = itGetStruct(ftGetStruct(fighter_gobj)->item_hold);

    wpStarRod_Star_MakeWeapon(fighter_gobj, pos, is_smash);

    ip->it_multi--;
}