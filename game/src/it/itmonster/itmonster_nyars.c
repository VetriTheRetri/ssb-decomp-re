#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lNyarsDataStart; // 0x0000C130

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018ACA0
itCreateDesc itMonster_Nyars_ItemDesc =
{
    It_Kind_Nyars,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x880,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itNyars_SDefault_ProcUpdate,            // Proc Update
    itNyars_SDefault_ProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018ACD4
itStatusDesc itMonster_Nyars_StatusDesc[/* */] =
{
    // Status 0 (Neutral Attack)
    {
        itNyars_NAttack_ProcUpdate,         // Proc Update
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
wpCreateDesc wpNyars_Coin_WeaponDesc =
{
    1,                                      // Render flags?
    Wp_Kind_NyarsCoin,                      // Weapon Kind
    &gItemFileData,                         // Pointer to character's loaded files?
    0x8C8,                                  // Offset of weapon attributes in loaded files
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    wpNyars_Coin_ProcUpdate,                // Proc Update
    NULL,                                   // Proc Map
    wpNyars_Coin_ProcHit,                   // Proc Hit
    wpNyars_Coin_ProcHit,                   // Proc Shield
    wpNyars_Coin_ProcHop,                   // Proc Hop
    wpNyars_Coin_ProcHit,                   // Proc Set-Off
    wpNyars_Coin_ProcReflector,             // Proc Reflector
    wpNyars_Coin_ProcHit                    // Proc Absorb
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
sb32 itNyars_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    if (ip->it_multi == ip->item_vars.nyars.coin_spawn_wait)
    {
        itNyars_NAttack_MakeCoin(item_gobj, ip->item_vars.nyars.coin_rotate_step * ITNYARS_COIN_ANGLE_STEP);

        ip->item_vars.nyars.coin_rotate_step++;
        ip->item_vars.nyars.coin_spawn_wait = ip->it_multi - ITNYARS_COIN_SPAWN_WAIT;

        func_800269C0(alSound_SFX_NyarsCoin);
    }
    if (ip->item_vars.nyars.model_rotate_wait == 0)
    {
        joint->rotate.vec.f.y += F_DEG_TO_RAD(180.0F); // PI32

        ip->item_vars.nyars.model_rotate_wait = ITNYARS_MODEL_ROTATE_WAIT;
    }
    ip->item_vars.nyars.model_rotate_wait--;

    ip->it_multi--;

    return FALSE;
}

// 0x8017EFA0
void itNyars_NAttack_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITNYARS_LIFETIME;

    ip->item_vars.nyars.coin_spawn_wait = ip->it_multi - (ITNYARS_COIN_SPAWN_WAIT / 2);
    ip->item_vars.nyars.coin_rotate_step = 0;
    ip->item_vars.nyars.model_rotate_wait = ITNYARS_MODEL_ROTATE_WAIT;
}

// 0x8017EFC4
void itNyars_NAttack_SetStatus(GObj *item_gobj)
{
    itNyars_NAttack_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Nyars_StatusDesc, itStatus_Nyars_NAttack);
}

// 0x8017EFF8
sb32 itNyars_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itNyars_NAttack_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017F04C
sb32 itNyars_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017F08C
GObj* itMonster_Nyars_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Nyars_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ip, lNyarsDataStart, lMonsterAnimBankStart), 0.0F);
    }
    return item_gobj;
}

// 0x8017F17C
sb32 wpNyars_Coin_ProcUpdate(GObj *weapon_gobj)
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
sb32 wpNyars_Coin_ProcHit(GObj *weapon_gobj)
{
    efParticle_DamageCoin_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x8017F1CC
sb32 wpNyars_Coin_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

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
sb32 wpNyars_Coin_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x8017F2E4
GObj* wpNyars_Coin_MakeWeapon(GObj *item_gobj, u8 coin_number, f32 rotate_angle)
{
    wpStruct *wp;
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &wpNyars_Coin_WeaponDesc, &DObjGetStruct(item_gobj)->translate.vec.f, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.coin.lifetime = ITNYARS_COIN_LIFETIME;

    wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;
    wp->phys_info.vel_air.x = ITNYARS_COIN_VEL_X;

    lbVector_Vec3fGetEulerRotation(&wp->phys_info.vel, 4, F_DEG_TO_RAD((coin_number * ITNYARS_COIN_ANGLE_DIFF) + rotate_angle));

    joint = DObjGetStruct(weapon_gobj);

    func_80008CC0(joint, 0x1C, 0);
    func_80008CC0(joint, 0x46, 0);

    joint->translate.vec.f = DObjGetStruct(item_gobj)->translate.vec.f;

    return weapon_gobj;
}

// 0x8017F408
void itNyars_NAttack_MakeCoin(GObj *item_gobj, f32 angle)
{
    s32 coin_count;

    for (coin_count = 0; coin_count < ITNYARS_COIN_SPAWN_MAX; coin_count++)
    {
        wpNyars_Coin_MakeWeapon(item_gobj, coin_count, angle);
    }
}