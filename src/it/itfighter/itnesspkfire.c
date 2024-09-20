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
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITNessPKFireItemDesc = 
{
    nITKindNessPKFire,                      // Item Kind
    &gFTNessFileSpecial1,                   // Pointer to item file data?
    &lITNessPKFireItemAttributes,           // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,          // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateNew,                        // Hitbox Update State
    itNessPKFireCommonProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITNessPKFireStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        itNessPKFireWaitProcUpdate,         // Proc Update
        itNessPKFireWaitProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itNessPKFireCommonProcDamage        // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itNessPKFireFallProcUpdate,         // Proc Update
        itNessPKFireFallProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itNessPKFireCommonProcDamage        // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itPKFireStatus
{
    nITNessPKFireStatusWait,
    nITNessPKFireStatusFall,
    nITNessPKFireStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80185350
sb32 itNessPKFireCommonProcUpdate(GObj *item_gobj)
{
    itNessPKFireFallSetStatus(item_gobj);

    return FALSE;
}

// 0x80185374
sb32 itNessPKFireCommonUpdateAllCheckDestroy(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes;
    f32 unused;
    f32 half = 0.5;
    f32 lifetime_scale = ((ip->lifetime * half) / 100.0F) + half;
    efTransform *tfrm = ip->item_vars.pkfire.tfrm;

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

    if (tfrm != NULL)
    {
        tfrm->scale.x = DObjGetStruct(item_gobj)->scale.vec.f.x;
        tfrm->scale.y = DObjGetStruct(item_gobj)->scale.vec.f.y;
        tfrm->scale.z = DObjGetStruct(item_gobj)->scale.vec.f.z;

        tfrm->translate = DObjGetStruct(item_gobj)->translate.vec.f;
    }
    ip->lifetime--;

    if (ip->lifetime < 0)
    {
        efManagerDustExpandSmallMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f, 1.0F);

        if (tfrm != NULL)
        {
            lbParticleEjectStructID(tfrm->generator_id, 0);
        }
        return TRUE;
    }
    else return FALSE;
}

// 0x801855E4
sb32 itNessPKFireWaitProcUpdate(GObj *item_gobj)
{
    if (itNessPKFireCommonUpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    return FALSE;
}

// 0x80185614
sb32 itNessPKFireFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itNessPKFireCommonUpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    else itMainApplyGravityClampTVel(ip, ITPKFIRE_GRAVITY, ITPKFIRE_TVEL);

    return FALSE;
}

// 0x80185660
sb32 itNessPKFireWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itNessPKFireFallSetStatus);

    return FALSE;
}

// 0x80185688
sb32 itNessPKFireFallProcMap(GObj *item_gobj)
{
    itMapCheckLanding(item_gobj, ITPKFIRE_MAP_REBOUND_COMMON, ITPKFIRE_MAP_REBOUND_GROUND, itNessPKFireWaitSetStatus);

    return FALSE;
}

// 0x801856BC
sb32 itNessPKFireCommonProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->lifetime > 0)
    {
        ip->lifetime -= ip->damage_highest * ITPKFIRE_HURT_DAMAGE_MUL;
    }
    if (itNessPKFireCommonUpdateAllCheckDestroy(item_gobj) == TRUE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80185710
void itNessPKFireWaitSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmStatFlags stat_flags;
    u16 stat_count;

    itMapSetGround(ip);

    ip->phys_info.vel_ground = 0.0F;
    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    stat_flags = ip->item_hit.stat_flags;
    stat_count = ip->item_hit.stat_count;

    itMainSetItemStatus(item_gobj, dITNessPKFireStatusDescs, nITNessPKFireStatusWait);

    ip->item_hit.stat_flags = stat_flags;
    ip->item_hit.stat_count = stat_count;
}

// 0x8018579C
void itNessPKFireFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmStatFlags stat_flags;
    u16 stat_count;

    itMapSetAir(ip);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    stat_flags = ip->item_hit.stat_flags;
    stat_count = ip->item_hit.stat_count;

    itMainSetItemStatus(item_gobj, dITNessPKFireStatusDescs, nITNessPKFireStatusFall);

    ip->item_hit.stat_flags = stat_flags;
    ip->item_hit.stat_count = stat_count;
}

// 0x80185824
GObj* itNessPKFireMakeItem(GObj *weapon_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *item_gobj;
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip;
    efParticle *ptcl;
    efTransform *tfrm;

    item_gobj = itManagerMakeItem(weapon_gobj, &dITNessPKFireItemDesc, pos, vel, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_WEAPON));

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

    ptcl = lbParticleMakeScriptID(gFTNessParticleBankID, 0);

    if (ptcl != NULL)
    {
        tfrm = lbParticleAddTransformForParticle(ptcl, 0);

        if (tfrm != NULL)
        {
            ip->item_vars.pkfire.tfrm = tfrm;

            lbParticleProcessStruct(ptcl);

            if (tfrm->users_num == 0)
            {
                ip->item_vars.pkfire.tfrm = NULL;
            }
            else tfrm->translate = *pos;
        }
        else
        {
            lbParticleEjectStruct(ptcl);

            ip->item_vars.pkfire.tfrm = NULL;
        }
    }
    else ip->item_vars.pkfire.tfrm = NULL;
    
    return item_gobj;
}
