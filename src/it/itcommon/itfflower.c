#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITFFlowerItemAttributes;   // 0x000002E4
extern intptr_t
lITFFlowerWeaponFlameWeaponAttributes;      // 0x0000032C
extern intptr_t lITFFlowerFlameAngles;      // 0x00000360

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITFFlowerItemDesc = 
{
    It_Kind_FFlower,                        // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITFFlowerItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itFFlowerAFallProcUpdate,               // Proc Update
    itFFlowerAFallProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITFFlowerStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itFFlowerGWaitProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itFFlowerAFallProcUpdate,           // Proc Update
        itFFlowerAFallProcMap,              // Proc Map
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
        itFFlowerAFallProcUpdate,           // Proc Update
        itFFlowerFThrowProcMap,             // Proc Map
        itFFlowerSDefaultProcHit,           // Proc Hit
        itFFlowerSDefaultProcHit,           // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itFFlowerSDefaultProcHit,           // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itFFlowerAFallProcUpdate,           // Proc Update
        itFFlowerFDropProcMap,              // Proc Map
        itFFlowerSDefaultProcHit,           // Proc Hit
        itFFlowerSDefaultProcHit,           // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itFFlowerSDefaultProcHit,           // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc dITFFlowerWeaponFlameWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_FFlowerFlame,                   // Weapon Kind
    &gITFileData,                           // Pointer to character's loaded files?
    &lITFFlowerWeaponFlameWeaponAttributes, // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    itFFlowerWeaponFlameProcUpdate,         // Proc Update
    itFFlowerWeaponFlameProcMap,            // Proc Map
    itFFlowerWeaponFlameProcHit,            // Proc Hit
    itFFlowerWeaponFlameProcHit,            // Proc Shield
    NULL,                                   // Proc Hop
    itFFlowerWeaponFlameProcHit,            // Proc Set-Off
    itFFlowerWeaponFlameProcReflector,      // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itFFlowerStatus
{
    itStatus_FFlower_GWait,
    itStatus_FFlower_AFall,
    itStatus_FFlower_FHold,
    itStatus_FFlower_FThrow,
    itStatus_FFlower_FDrop,
    itStatus_FFlower_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80175B20
sb32 itFFlowerAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITFFLOWER_GRAVITY, ITFFLOWER_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80175B5C
sb32 itFFlowerGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itFFlowerAFallSetStatus);

    return FALSE;
}

// 0x80175B84
sb32 itFFlowerAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.0F, 0.5F, itFFlowerGWaitSetStatus);
}

// 0x80175BB0
void itFFlowerGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITFFlowerStatusDesc, itStatus_FFlower_GWait);
}

// 0x80175BE4
void itFFlowerAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITFFlowerStatusDesc, itStatus_FFlower_AFall);
}

// 0x80175C28
void itFFlowerFHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITFFlowerStatusDesc, itStatus_FFlower_FHold);
}

// 0x80175C50
sb32 itFFlowerFThrowProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.0F);
    }
    else return itMapCheckMapCollideThrownLanding(item_gobj, 0.0F, 0.5F, itFFlowerGWaitSetStatus);
}

// 0x80175C9C
sb32 itFFlowerSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175CC4
void itFFlowerFThrowSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITFFlowerStatusDesc, itStatus_FFlower_FThrow);
}

// 0x80175CEC
sb32 itFFlowerFDropProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.0F);
    }
    else return itMapCheckMapCollideThrownLanding(item_gobj, 0.0F, 0.5F, itFFlowerGWaitSetStatus);
}

// 0x80175D38
void itFFlowerFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITFFlowerStatusDesc, itStatus_FFlower_FDrop);
}

// 0x80175D60
GObj* itFFlowerMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITFFlowerItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITFFLOWER_AMMO_MAX;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// 0x80175DDC
sb32 itFFlowerWeaponFlameProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801750E8
sb32 itFFlowerWeaponFlameProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x80175E4C
sb32 itFFlowerWeaponFlameProcHit(GObj *weapon_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeS);
    efManagerSparkleWhiteMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return FALSE;
}

// 0x80175E84
sb32 itFFlowerWeaponFlameProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f *translate;

    wp->lifetime = ITFFLOWER_AMMO_LIFETIME;

    wpMainReflectorSetLR(wp, fp);

    translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;

    func_ovl0_800CE8C0(gITEffectBankID | 8, 2, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(gITEffectBankID | 8, 0, translate->x, translate->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return FALSE;
}

// 0x80175F48
GObj* itFFlowerWeaponFlameMakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dITFFlowerWeaponFlameWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = vel->x * wp->lr;
    wp->phys_info.vel_air.y = vel->y;
    wp->phys_info.vel_air.z = vel->z;

    wp->lifetime = ITFFLOWER_AMMO_LIFETIME;

    func_ovl0_800CE8C0(gITEffectBankID | 8, 2, pos->x, pos->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(gITEffectBankID | 8, 0, pos->x, pos->y, 0.0F, wp->phys_info.vel_air.x, wp->phys_info.vel_air.y, 0.0F);

    return weapon_gobj;
}

// 0x8017604C
void itFFlowerShootFlame(GObj *fighter_gobj, Vec3f *pos, s32 index, s32 ammo_sub)
{
    itStruct *ip = itGetStruct(ftGetStruct(fighter_gobj)->item_hold);
    Vec3f vel;
    f32 *angle = (f32*) ((uintptr_t)*dITFFlowerItemDesc.p_file + (intptr_t)&lITFFlowerFlameAngles); // Linker thing

    vel.x = __cosf(angle[index]) * ITFFLOWER_AMMO_VEL;
    vel.y = __sinf(angle[index]) * ITFFLOWER_AMMO_VEL;
    vel.z = 0.0F;

    itFFlowerWeaponFlameMakeWeapon(fighter_gobj, pos, &vel);

    ip->it_multi -= ammo_sub;
}
