#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITStarRodItemAttributes;   // 0x0000048C     
extern intptr_t
lITStarRodWeaponStarWeaponAttributes;       // 0x000004D4
extern intptr_t 
lITStarRodWeaponStarSmashAttributes;        // 0x00000508

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITStarRodItemDesc =
{
    It_Kind_StarRod,                        // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITStarRodItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itStarRodAFallProcUpdate,               // Proc Update
    itStarRodAFallProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITStarRodStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itStarRodGWaitProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itStarRodAFallProcUpdate,           // Proc Update
        itStarRodAFallProcMap,              // Proc Map
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
        itStarRodFThrowProcUpdate,          // Proc Update
        itStarRodFThrowProcMap,             // Proc Map
        itStarRodFThrowProcHit,             // Proc Hit
        itStarRodFThrowProcHit,             // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itStarRodFThrowProcHit,             // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itStarRodAFallProcUpdate,           // Proc Update
        itStarRodFDropProcMap,              // Proc Map
        itStarRodFThrowProcHit,             // Proc Hit
        itStarRodFThrowProcHit,             // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itStarRodFThrowProcHit,             // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc dITStarRodWeaponStarWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_StarRodStar,                    // Weapon Kind
    &gITFileData,                           // Pointer to character's loaded files?
    &lITStarRodWeaponStarWeaponAttributes,  // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    itStarRodWeaponStarProcUpdate,          // Proc Update
    itStarRodWeaponStarProcMap,             // Proc Map
    itStarRodWeaponStarProcHit,             // Proc Hit
    itStarRodWeaponStarProcHit,             // Proc Shield
    itStarRodWeaponStarProcHop,             // Proc Hop
    itStarRodWeaponStarProcHit,             // Proc Set-Off
    itStarRodWeaponStarProcReflector,       // Proc Reflector
    itStarRodWeaponStarProcHit              // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itStarRodStatus
{
    itStatus_StarRod_GWait,
    itStatus_StarRod_AFall,
    itStatus_StarRod_FHold,
    itStatus_StarRod_FThrow,
    itStatus_StarRod_FDrop,
    itStatus_StarRod_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80177E80
sb32 itStarRodAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSTARROD_GRAVITY, ITSTARROD_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80177EBC
sb32 itStarRodGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itStarRodAFallSetStatus);

    return FALSE;
}

// 0x80177EE4
sb32 itStarRodAFallProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itStarRodGWaitSetStatus);

    return FALSE;
}

// 0x80177F18
void itStarRodGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITStarRodStatusDesc, itStatus_StarRod_GWait);
}

// 0x80177F4C
void itStarRodAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITStarRodStatusDesc, itStatus_StarRod_AFall);
}

// 0x80177F90
void itStarRodFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITStarRodStatusDesc, itStatus_StarRod_FHold);
}

// 0x80177FC4
sb32 itStarRodFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSTARROD_GRAVITY, ITSTARROD_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80178000
sb32 itStarRodFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itStarRodGWaitSetStatus);
}

// 0x80178030
sb32 itStarRodFThrowProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80178058
void itStarRodFThrowSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITStarRodStatusDesc, itStatus_StarRod_FThrow);
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DTOR32(90.0F); // HALF_PI32
}

// 0x8017809C
sb32 itStarRodFDropProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.2F);
    }
    else return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itStarRodGWaitSetStatus);
}

// 0x801780F0
void itStarRodFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITStarRodStatusDesc, itStatus_StarRod_FDrop);
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DTOR32(90.0F); // HALF_PI32
}

// 0x80178134
GObj* itStarRodMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITStarRodItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITSTARROD_AMMO_MAX;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}

// 0x801781B0
sb32 itStarRodWeaponStarProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    DObj *dobj;

    if (wp->weapon_vars.star.lifetime == 0)
    {
        DObjGetStruct(weapon_gobj)->flags = DOBJ_FLAG_NORENDER;

        efParticle_SparkleWhiteScale_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }

    wp->weapon_vars.star.lifetime--;

    dobj = DObjGetStruct(weapon_gobj);

    dobj->rotate.vec.f.z += (-0.2F * wp->lr);

    if (wp->weapon_vars.star.lifetime % 2)
    {
        pos.x = DObjGetStruct(weapon_gobj)->translate.vec.f.x;
        pos.y = mtTrigGetRandomIntRange(250) + (DObjGetStruct(weapon_gobj)->translate.vec.f.y - 125.0F);
        pos.z = 0.0F;

        efParticle_StarRodSpark_MakeEffect(&pos, wp->lr * -1.0F);
    }
    return FALSE;
}

// 0x801782D4
sb32 itStarRodWeaponStarProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efParticle_StarSplash_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->lr);

        func_800269C0_275C0(alSound_SFX_StarMapCollide);

        return TRUE;
    }
    else return FALSE;
}

// 0x8017832C
sb32 itStarRodWeaponStarProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efParticle_StarSplash_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->lr);

    return TRUE;
}

// 0x8017835C
sb32 itStarRodWeaponStarProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = LR_Right;
    }
    else wp->lr = LR_Left;

    return FALSE;
}

// 0x80178404
sb32 itStarRodWeaponStarProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x80178474
GObj* itStarRodWeaponStarMakeWeapon(GObj *fighter_gobj, Vec3f *pos, ub8 is_smash)
{
    GObj *weapon_gobj;
    DObj *dobj;
    wpStruct *wp;

    if (is_smash == TRUE)
    {
        dITStarRodWeaponStarWeaponDesc.o_attributes = (intptr_t)&lITStarRodWeaponStarSmashAttributes; // Set attribute data on smash input - Linker thing
    }
    weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dITStarRodWeaponStarWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    dobj = DObjGetStruct(weapon_gobj);
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = ((!(is_smash)) ? ITSTARROD_AMMO_TILT_VEL_X : ITSTARROD_AMMO_SMASH_VEL_X) * wp->lr;

    wp->weapon_vars.star.lifetime = (!(is_smash)) ? ITSTARROD_AMMO_TILT_LIFETIME : ITSTARROD_AMMO_SMASH_LIFETIME; // Why float lol

    omAddOMMtxForDObjFixed(dobj, 0x2E, 0);

    dobj->translate.vec.f = *pos;

    dobj->translate.vec.f.z = 0.0F;

    return weapon_gobj;
}

// 0x80178594
void itStarRodMakeStar(GObj *fighter_gobj, Vec3f *pos, ub8 is_smash)
{
    itStruct *ip = itGetStruct(ftGetStruct(fighter_gobj)->item_hold);

    itStarRodWeaponStarMakeWeapon(fighter_gobj, pos, is_smash);

    ip->it_multi--;
}
