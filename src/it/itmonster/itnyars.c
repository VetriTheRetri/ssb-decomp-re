#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITNyarsItemAttributes;     // 0x00000880
extern intptr_t
lITNyarsWeaponCoinWeaponAttributes;         // 0x000008C8
extern intptr_t lITNyarsAnimJoint;          // 0x0000C130

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8018ACA0
itCreateDesc dITNyarsItemDesc =
{
    It_Kind_Nyars,                          // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITNyarsItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itNyarsSDefaultProcUpdate,              // Proc Update
    itNyarsSDefaultProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018ACD4
itStatusDesc dITNyarsStatusDesc[/* */] =
{
    // Status 0 (Neutral Attack)
    {
        itNyarsNAttackProcUpdate,           // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018ACF4
wpCreateDesc dITNyarsWeaponCoinWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_NyarsCoin,                      // Weapon Kind
    &gITManagerFileData,                         // Pointer to character's loaded files?
    &lITNyarsWeaponCoinWeaponAttributes,    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itNyarsWeaponCoinProcUpdate,            // Proc Update
    NULL,                                   // Proc Map
    itNyarsWeaponCoinProcHit,               // Proc Hit
    itNyarsWeaponCoinProcHit,               // Proc Shield
    itNyarsWeaponCoinProcHop,               // Proc Hop
    itNyarsWeaponCoinProcHit,               // Proc Set-Off
    itNyarsWeaponCoinProcReflector,         // Proc Reflector
    itNyarsWeaponCoinProcHit                // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itNyarsStatus
{
    itStatus_Nyars_NAttack,
    itStatus_Nyars_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017EEB0
sb32 itNyarsNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    if (ip->it_multi == ip->item_vars.nyars.coin_spawn_wait)
    {
        itNyarsNAttackMakeCoin(item_gobj, ip->item_vars.nyars.coin_rotate_step * ITNYARS_COIN_ANGLE_STEP);

        ip->item_vars.nyars.coin_rotate_step++;
        ip->item_vars.nyars.coin_spawn_wait = ip->it_multi - ITNYARS_COIN_SPAWN_WAIT;

        func_800269C0_275C0(alSound_SFX_NyarsCoin);
    }
    if (ip->item_vars.nyars.model_rotate_wait == 0)
    {
        dobj->rotate.vec.f.y += F_CST_DTOR32(180.0F); // PI32

        ip->item_vars.nyars.model_rotate_wait = ITNYARS_MODEL_ROTATE_WAIT;
    }
    ip->item_vars.nyars.model_rotate_wait--;

    ip->it_multi--;

    return FALSE;
}

// 0x8017EFA0
void itNyarsNAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITNYARS_LIFETIME;

    ip->item_vars.nyars.coin_spawn_wait = ip->it_multi - (ITNYARS_COIN_SPAWN_WAIT / 2);
    ip->item_vars.nyars.coin_rotate_step = 0;
    ip->item_vars.nyars.model_rotate_wait = ITNYARS_MODEL_ROTATE_WAIT;
}

// 0x8017EFC4
void itNyarsNAttackSetStatus(GObj *item_gobj)
{
    itNyarsNAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITNyarsStatusDesc, itStatus_Nyars_NAttack);
}

// 0x8017EFF8
sb32 itNyarsSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itNyarsNAttackSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017F04C
sb32 itNyarsSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017F08C
GObj* itNyarsMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITNyarsItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITNyarsAnimJoint), 0.0F);
    }
    return item_gobj;
}

// 0x8017F17C
sb32 itNyarsWeaponCoinProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.coin.lifetime == 0)
    {
        return TRUE;
    }
    wp->weapon_vars.coin.lifetime--;

    return FALSE;
}

// 0x8017F1A4
sb32 itNyarsWeaponCoinProcHit(GObj *weapon_gobj)
{
    efManagerDamageCoinMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x8017F1CC
sb32 itNyarsWeaponCoinProcHop(GObj *weapon_gobj)
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

// 0x8017F274
sb32 itNyarsWeaponCoinProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x8017F2E4
GObj* itNyarsWeaponCoinMakeWeapon(GObj *item_gobj, u8 coin_number, f32 rotate_angle)
{
    wpStruct *wp;
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITNyarsWeaponCoinWeaponDesc, &DObjGetStruct(item_gobj)->translate.vec.f, WEAPON_MASK_SPAWN_ITEM);
    DObj *dobj;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.coin.lifetime = ITNYARS_COIN_LIFETIME;

    wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;
    wp->phys_info.vel_air.x = ITNYARS_COIN_VEL_X;

    lbVector_Vec3fGetEulerRotation(&wp->phys_info.vel_air, MTVECTOR_AXIS_Z, F_CLC_DTOR32((coin_number * ITNYARS_COIN_ANGLE_DIFF) + rotate_angle));

    dobj = DObjGetStruct(weapon_gobj);

    omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyRSca, 0);
    omAddOMMtxForDObjFixed(dobj, 0x46, 0);

    dobj->translate.vec.f = DObjGetStruct(item_gobj)->translate.vec.f;

    return weapon_gobj;
}

// 0x8017F408
void itNyarsNAttackMakeCoin(GObj *item_gobj, f32 angle)
{
    s32 coin_count;

    for (coin_count = 0; coin_count < ITNYARS_COIN_SPAWN_MAX; coin_count++)
    {
        itNyarsWeaponCoinMakeWeapon(item_gobj, coin_count, angle);
    }
}
