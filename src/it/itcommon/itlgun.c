#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITLGunItemAttributes;      // 0x00000268
extern intptr_t 
lITLGunWeaponAmmoWeaponAttributes;          // 0x000002B0

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITLGunItemDesc =
{
    nITKindLGun,                           // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITLGunItemAttributes,                 // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,         // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,     // Hitbox Update State
    itLGunAFallProcUpdate,                  // Proc Update
    itLGunAFallProcMap,                     // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITLGunStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itLGunGWaitProcMap,                 // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itLGunAFallProcUpdate,              // Proc Update
        itLGunAFallProcMap,                 // Proc Map
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
        itLGunAFallProcUpdate,              // Proc Update
        itLGunFThrowProcMap,                // Proc Map
        itLGunSDefaultProcHit,              // Proc Hit
        itLGunSDefaultProcHit,              // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itLGunSDefaultProcHit,              // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itLGunAFallProcUpdate,              // Proc Update
        itLGunFDropProcMap,                 // Proc Map
        itLGunSDefaultProcHit,              // Proc Hit
        itLGunSDefaultProcHit,              // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itLGunSDefaultProcHit,              // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    }
};

wpCreateDesc itLGunWeaponAmmoWeaponDesc =
{
    0x00,                                   // Render flags?
    nWPKindLGunAmmo,                       // Weapon Kind
    &gITManagerFileData,                           // Pointer to character's loaded files?
    &lITLGunWeaponAmmoWeaponAttributes,     // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    itLGunWeaponAmmoProcUpdate,             // Proc Update
    itLGunWeaponAmmoProcMap,                // Proc Map
    itLGunWeaponAmmoProcHit,                // Proc Hit
    itLGunWeaponAmmoProcHit,                // Proc Shield
    itLGunWeaponAmmoProcHop,                // Proc Hop
    itLGunWeaponAmmoProcHit,                // Proc Set-Off
    itLGunWeaponAmmoProcReflector,          // Proc Reflector
    itLGunWeaponAmmoProcHit                 // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itLGunStatus
{
    itStatus_LGun_GWait,
    itStatus_LGun_AFall,
    itStatus_LGun_FHold,
    itStatus_LGun_FThrow,
    itStatus_LGun_FDrop,
    itStatus_LGun_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801754F0
sb32 itLGunAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITLGUN_GRAVITY, ITLGUN_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80175528
sb32 itLGunGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itLGunAFallSetStatus);

    return FALSE;
}

// 0x80175550
sb32 itLGunAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.1F, itLGunGWaitSetStatus);
}

// 0x80175584
void itLGunGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITLGunStatusDescs, itStatus_LGun_GWait);
}

// 0x801755B8
void itLGunAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITLGunStatusDescs, itStatus_LGun_AFall);
}

// 0x801755FC
void itLGunFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITLGunStatusDescs, itStatus_LGun_FHold);
}

// 0x80175630
sb32 itLGunFThrowProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.2F);
    }
    else return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.1F, itLGunGWaitSetStatus);
}

// 0x80175684
sb32 itLGunSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x801756AC
void itLGunFThrowSetStatus(GObj *item_gobj)
{
    s32 lr = ftGetStruct(itGetStruct(item_gobj)->owner_gobj)->lr;

    itMainSetItemStatus(item_gobj, dITLGunStatusDescs, itStatus_LGun_FThrow);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = (lr == nGMDirectionL) ? F_CST_DTOR32(-90.0F) : F_CST_DTOR32(90.0F); // -HALF_PI32, HALF_PI32
}

// 0x8017572C
sb32 itLGunFDropProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.2F);
    }
    else return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.1F, itLGunGWaitSetStatus);
}

// 0x80175780
void itLGunFDropSetStatus(GObj *item_gobj)
{
    s32 lr = ftGetStruct(itGetStruct(item_gobj)->owner_gobj)->lr;

    itMainSetItemStatus(item_gobj, dITLGunStatusDescs, itStatus_LGun_FDrop);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = (lr == nGMDirectionL) ? F_CST_DTOR32(-90.0F) : F_CST_DTOR32(90.0F); // -HALF_PI32, HALF_PI32
}

// 0x80175800
GObj* itLGunMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITLGunItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITLGUN_AMMO_MAX;

        DObjGetStruct(item_gobj)->rotate.vec.f.y = ((mtTrigGetRandomUShort() % 2) != 0) ? F_CST_DTOR32(90.0F) : F_CST_DTOR32(-90.0F); // HALF_PI32, -HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// Ray Gun ammo functions
sb32 itLGunWeaponAmmoProcUpdate(GObj *weapon_gobj)
{
    DObj *dobj = DObjGetStruct(weapon_gobj);

    if (dobj->scale.vec.f.x < ITLGUN_AMMO_CLAMP_SCALE_X)
    {
        dobj->scale.vec.f.x += ITLGUN_AMMO_STEP_SCALE_X;

    #if !defined (DAIRANTOU_OPT0)
        dobj = DObjGetStruct(weapon_gobj); // Y tho lol
    #endif

        if (dobj->scale.vec.f.x > ITLGUN_AMMO_CLAMP_SCALE_X)
        {
            dobj->scale.vec.f.x = ITLGUN_AMMO_CLAMP_SCALE_X;
        }
    }
    return FALSE;
}

// 0x80175914
sb32 itLGunWeaponAmmoProcMap(GObj *weapon_gobj)
{
    if (wpMapTestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x80175958
sb32 itLGunWeaponAmmoProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerImpactShockMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x80175988
sb32 itLGunWeaponAmmoProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    return FALSE;
}

// 0x80175A00
sb32 itLGunWeaponAmmoProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    return FALSE;
}

// 0x80175A60
GObj* itLGunWeaponAmmoMakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &itLGunWeaponAmmoWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->lr * ITLGUN_AMMO_VEL_X;

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    return weapon_gobj;
}

// 0x80175AD8
void itLGunMakeAmmo(GObj *fighter_gobj, Vec3f *pos)
{
    itStruct *ip = itGetStruct(ftGetStruct(fighter_gobj)->item_hold);

    itLGunWeaponAmmoMakeWeapon(fighter_gobj, pos);

    ip->it_multi--;
}
