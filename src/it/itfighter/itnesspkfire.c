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

ITCreateDesc dITNessPKFireItemDesc = 
{
    nITKindNessPKFire,                      // Item Kind
    &gFTNessFileSpecial1,                   // Pointer to item file data?
    &lITNessPKFireItemAttributes,           // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyRSca,          // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMAttackStateNew,                      // Hitbox Update State
    itNessPKFireCommonProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

ITStatusDesc dITNessPKFireStatusDescs[/* */] =
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
    ITStruct *ip = itGetStruct(item_gobj);
    ITAttributes *attr;
    f32 unused;
    f32 half = 0.5;
    f32 lifetime_scale = ((ip->lifetime * half) / 100.0F) + half;
    LBTransform *tfrm = ip->item_vars.pkfire.tfrm;

    DObjGetStruct(item_gobj)->scale.vec.f.x = DObjGetStruct(item_gobj)->scale.vec.f.y = DObjGetStruct(item_gobj)->scale.vec.f.z = lifetime_scale;

    attr = ip->attr;

    ip->atk_coll.offset[0].x = attr->atk_offset0_x * lifetime_scale;
    ip->atk_coll.offset[0].y = attr->atk_offset0_y * lifetime_scale;
    ip->atk_coll.offset[0].z = attr->atk_offset0_z * lifetime_scale;
    ip->atk_coll.offset[1].x = attr->atk_offset1_x * lifetime_scale;
    ip->atk_coll.offset[1].y = attr->atk_offset1_y * lifetime_scale;
    ip->atk_coll.offset[1].z = attr->atk_offset1_z * lifetime_scale;

    ip->atk_coll.size = attr->size * 0.5F * lifetime_scale;

    ip->dmg_coll.offset.x = attr->dmg_coll_offset.x * lifetime_scale;
    ip->dmg_coll.offset.y = attr->dmg_coll_offset.y * lifetime_scale;
    ip->dmg_coll.offset.z = attr->dmg_coll_offset.z * lifetime_scale;
    ip->dmg_coll.size.x = attr->dmg_coll_size.x * 0.5F * lifetime_scale;
    ip->dmg_coll.size.y = attr->dmg_coll_size.y * 0.5F * lifetime_scale;
    ip->dmg_coll.size.z = attr->dmg_coll_size.z * 0.5F * lifetime_scale;

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
            LBParticleEjectStructID(tfrm->generator_id, 0);
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
    ITStruct *ip = itGetStruct(item_gobj);

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
    ITStruct *ip = itGetStruct(item_gobj);

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
    ITStruct *ip = itGetStruct(item_gobj);
    GMStatFlags stat_flags;
    u16 stat_count;

    itMapSetGround(ip);

    ip->physics.vel_ground = 0.0F;
    ip->physics.vel_air.x = ip->physics.vel_air.y = 0.0F;

    stat_flags = ip->atk_coll.stat_flags;
    stat_count = ip->atk_coll.stat_count;

    itMainSetItemStatus(item_gobj, dITNessPKFireStatusDescs, nITNessPKFireStatusWait);

    ip->atk_coll.stat_flags = stat_flags;
    ip->atk_coll.stat_count = stat_count;
}

// 0x8018579C
void itNessPKFireFallSetStatus(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    GMStatFlags stat_flags;
    u16 stat_count;

    itMapSetAir(ip);

    ip->physics.vel_air.x = ip->physics.vel_air.y = 0.0F;

    stat_flags = ip->atk_coll.stat_flags;
    stat_count = ip->atk_coll.stat_count;

    itMainSetItemStatus(item_gobj, dITNessPKFireStatusDescs, nITNessPKFireStatusFall);

    ip->atk_coll.stat_flags = stat_flags;
    ip->atk_coll.stat_count = stat_count;
}

// 0x80185824
GObj* itNessPKFireMakeItem(GObj *weapon_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *item_gobj;
    WPStruct *wp = wpGetStruct(weapon_gobj);
    ITStruct *ip;
    LBParticle *ptcl;
    LBTransform *tfrm;

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

    ip->atk_coll.can_rehit_shield = TRUE;

    ip->atk_coll.stale = wp->atk_coll.stale;
    ip->atk_coll.attack_id = wp->atk_coll.attack_id;
    ip->atk_coll.motion_count = wp->atk_coll.motion_count;
    ip->atk_coll.stat_flags = wp->atk_coll.stat_flags;
    ip->atk_coll.stat_count = wp->atk_coll.stat_count;

    itMapSetAir(ip);
    itProcessUpdateHitPositions(item_gobj);

    ip->lifetime = ITPKFIRE_LIFETIME;

    ptcl = LBParticleMakeScriptID(gFTNessParticleBankID, 0);

    if (ptcl != NULL)
    {
        tfrm = LBParticleAddTransformForStruct(ptcl, 0);

        if (tfrm != NULL)
        {
            ip->item_vars.pkfire.tfrm = tfrm;

            LBParticleProcessStruct(ptcl);

            if (tfrm->users_num == 0)
            {
                ip->item_vars.pkfire.tfrm = NULL;
            }
            else tfrm->translate = *pos;
        }
        else
        {
            LBParticleEjectStruct(ptcl);

            ip->item_vars.pkfire.tfrm = NULL;
        }
    }
    else ip->item_vars.pkfire.tfrm = NULL;
    
    return item_gobj;
}
