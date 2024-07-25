#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITNessPKFireItemAttributes;// 0x00000034

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITNessPKFireItemDesc = 
{
    It_Kind_NessPKFire,                     // Item Kind
    &gFTDataNessSpecial1,                   // Pointer to item file data?
    &lITNessPKFireItemAttributes,           // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itNessPKFireSDefaultProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITNessPKFireStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        itNessPKFireGWaitProcUpdate,        // Proc Update
        itNessPKFireGWaitProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itNessPKFireSDefaultProcDamage      // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itNessPKFireAFallProcUpdate,        // Proc Update
        itNessPKFireAFallProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itNessPKFireSDefaultProcDamage      // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itPKFireStatus
{
    itStatus_PKFire_GWait,
    itStatus_PKFire_AFall,
    itStatus_PKFire_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80185350
sb32 itNessPKFireSDefaultProcUpdate(GObj *item_gobj)
{
    itNessPKFireAFallSetStatus(item_gobj);

    return FALSE;
}

// 0x80185374
sb32 itNessPKFireSDefaultUpdateAllCheckDestroy(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes;
    f32 unused;
    f32 half = 0.5;
    f32 lifetime_scale = ((ip->lifetime * half) / 100.0F) + half;
    efTransform *effect = ip->item_vars.pkfire.effect;

    DObjGetStruct(item_gobj)->scale.vec.f.x = DObjGetStruct(item_gobj)->scale.vec.f.y = DObjGetStruct(item_gobj)->scale.vec.f.z = lifetime_scale;

    attributes = ip->attributes;

    ip->item_hit.offset[0].x = attributes->hit_offset1_x * lifetime_scale;
    ip->item_hit.offset[0].y = attributes->hit_offset1_y * lifetime_scale;
    ip->item_hit.offset[0].z = attributes->hit_offset1_z * lifetime_scale;
    ip->item_hit.offset[1].x = attributes->hit_offset2_x * lifetime_scale;
    ip->item_hit.offset[1].y = attributes->hit_offset2_y * lifetime_scale;
    ip->item_hit.offset[1].z = attributes->hit_offset2_z * lifetime_scale;

    ip->item_hit.size = attributes->size * 0.5F * lifetime_scale;

    ip->item_hurt.offset.x = attributes->hurt_offset.x * lifetime_scale;
    ip->item_hurt.offset.y = attributes->hurt_offset.y * lifetime_scale;
    ip->item_hurt.offset.z = attributes->hurt_offset.z * lifetime_scale;
    ip->item_hurt.size.x = attributes->hurt_size.x * 0.5F * lifetime_scale;
    ip->item_hurt.size.y = attributes->hurt_size.y * 0.5F * lifetime_scale;
    ip->item_hurt.size.z = attributes->hurt_size.z * 0.5F * lifetime_scale;

    if (effect != NULL)
    {
        effect->scale.x = DObjGetStruct(item_gobj)->scale.vec.f.x;
        effect->scale.y = DObjGetStruct(item_gobj)->scale.vec.f.y;
        effect->scale.z = DObjGetStruct(item_gobj)->scale.vec.f.z;

        effect->translate = DObjGetStruct(item_gobj)->translate.vec.f;
    }
    ip->lifetime--;

    if (ip->lifetime < 0)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f, 1.0F);

        if (effect != NULL)
        {
            func_ovl0_800D39D4(effect->unk_effect_0xB8, 0);
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x801855E4
sb32 itNessPKFireGWaitProcUpdate(GObj *item_gobj)
{
    if (itNessPKFireSDefaultUpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    return FALSE;
}

// 0x80185614
sb32 itNessPKFireAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itNessPKFireSDefaultUpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    else itMainApplyGClampTVel(ip, ITPKFIRE_GRAVITY, ITPKFIRE_T_VEL);

    return FALSE;
}

// 0x80185660
sb32 itNessPKFireGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itNessPKFireAFallSetStatus);

    return FALSE;
}

// 0x80185688
sb32 itNessPKFireAFallProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideLanding(item_gobj, 0.2F, 0.5F, itNessPKFireGWaitSetStatus);

    return FALSE;
}

// 0x801856BC
sb32 itNessPKFireSDefaultProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->lifetime > 0)
    {
        ip->lifetime -= ip->damage_highest * ITPKFIRE_HURT_DAMAGE_MUL;
    }
    if (itNessPKFireSDefaultUpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80185710
void itNessPKFireGWaitSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmStatFlags stat_flags;
    u16 stat_count;

    itMapSetGround(ip);

    ip->phys_info.vel_ground = 0.0F;
    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    stat_flags = ip->item_hit.stat_flags;
    stat_count = ip->item_hit.stat_count;

    itMainSetItemStatus(item_gobj, dITNessPKFireStatusDesc, itStatus_PKFire_GWait);

    ip->item_hit.stat_flags = stat_flags;
    ip->item_hit.stat_count = stat_count;
}

// 0x8018579C
void itNessPKFireAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmStatFlags stat_flags;
    u16 stat_count;

    itMapSetAir(ip);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    stat_flags = ip->item_hit.stat_flags;
    stat_count = ip->item_hit.stat_count;

    itMainSetItemStatus(item_gobj, dITNessPKFireStatusDesc, itStatus_PKFire_AFall);

    ip->item_hit.stat_flags = stat_flags;
    ip->item_hit.stat_count = stat_count;
}

// 0x80185824
GObj* itNessPKFireMakeItem(GObj *weapon_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *item_gobj;
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip;
    efParticle *efpart;
    efTransform *eftrans;

    item_gobj = itManagerMakeItem(weapon_gobj, &dITNessPKFireItemDesc, pos, vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_WEAPON));

    if (item_gobj == NULL)
    {
        return NULL;
    }
    ip = itGetStruct(item_gobj);

    ip->owner_gobj = wp->owner_gobj;

    ip->is_allow_pickup = FALSE;
    ip->is_hold = FALSE;

    ip->team = wp->team;
    ip->player = wp->player;
    ip->handicap = wp->handicap;
    ip->player_number = wp->player_number;

    ip->item_hit.can_rehit_shield = TRUE;

    ip->item_hit.stale = wp->weapon_hit.stale;
    ip->item_hit.attack_id = wp->weapon_hit.attack_id;
    ip->item_hit.motion_count = wp->weapon_hit.motion_count;
    ip->item_hit.stat_flags = wp->weapon_hit.stat_flags;
    ip->item_hit.stat_count = wp->weapon_hit.stat_count;

    itMapSetAir(ip);
    itProcessUpdateHitPositions(item_gobj);

    ip->lifetime = ITPKFIRE_LIFETIME;

    efpart = func_ovl0_800CE9E8(gFTDataNessParticleBankID, 0);

    if (efpart != NULL)
    {
        eftrans = func_ovl0_800CE1DC(efpart, 0);

        if (eftrans != NULL)
        {
            ip->item_vars.pkfire.effect = eftrans;

            func_ovl0_800CEA14(efpart);

            if (eftrans->unk_effect_0x2A == 0)
            {
                ip->item_vars.pkfire.effect = NULL;
            }
            else eftrans->translate = *pos;
        }
        else
        {
            func_ovl0_800CEA40(efpart);

            ip->item_vars.pkfire.effect = NULL;
        }
    }
    else ip->item_vars.pkfire.effect = NULL;
    
    return item_gobj;
}
