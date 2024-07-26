#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITKamexItemAttributes;     // 0x00000A08
extern intptr_t
lITKamexWeaponHydroWeaponAttributes;        // 0x00000A50
extern intptr_t lITKamexDataStart;          // 0x0000EA60
extern intptr_t lITKamexDisplayList;        // 0x0000ED60

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8018AEE0
itCreateDesc dITKamexItemDesc = 
{
    nITKindKamex,                          // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITKamexItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateNew,         // Hitbox Update State
    itKamexSDefaultProcUpdate,              // Proc Update
    itKamexSDefaultProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AF14
itStatusDesc dITKamexStatusDesc[/* */] =
{
    // Status 0 (Air Fall)
    {
        itKamexAFallProcUpdate,             // Proc Update
        itKamexAFallProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Appear)
    {
        itKamexNAppearProcUpdate,           // Proc Update
        itKamexNAppearProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Attack)
    {
        itKamexNAttackProcUpdate,           // Proc Update
        itKamexNAttackProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018AF74
wpCreateDesc dITKamexWeaponHydroWeaponDesc =
{
    0x01,                                   // Render flags?
    nWPKindKamexHydro,                     // Weapon Kind
    &gITManagerFileData,                         // Pointer to weapon's loaded files?
    &lITKamexWeaponHydroWeaponAttributes,   // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itKamexWeaponHydroProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    itKamexWeaponHydroProcHit,              // Proc Hit
    itKamexWeaponHydroProcHit,              // Proc Shield
    NULL,                                   // Proc Hop
    itKamexWeaponHydroProcHit,              // Proc Set-Off
    itKamexWeaponHydroProcReflector,        // Proc Reflector
    itKamexWeaponHydroProcHit,              // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itKamexStatus
{
    itStatus_Kamex_AFall,
    itStatus_Kamex_NAppear,
    itStatus_Kamex_NAttack
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80180630
void itKamexNAttackUpdateHydro(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.kamex.hydro_spawn_wait <= 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        if (ip->it_kind == nITKindKamex)
        {
            pos.x += ITKAMEX_KAMEX_HYDRO_SPAWN_OFF_X * ip->lr;
            pos.y += ITKAMEX_KAMEX_HYDRO_SPAWN_OFF_Y;
        }
        else pos.x += ITKAMEX_OTHER_HYDRO_SPAWN_OFF_X * ip->lr;

        itKamexNAttackMakeHydro(item_gobj, &pos);
        efManagerDamageSpawnSparksMakeEffect(&pos, ip->lr);
        func_800269C0_275C0(alSound_SFX_KamexHydro);

        ip->item_vars.kamex.hydro_spawn_wait = mtTrigGetRandomIntRange(ITKAMEX_HYDRO_SPAWN_WAIT_RANDOM) + ITKAMEX_HYDRO_SPAWN_WAIT_CONST;

        pos = dobj->translate.vec.f;

        pos.y += ip->attributes->objectcoll_bottom;

        if (ip->it_kind == nITKindKamex)
        {
            pos.x += (ip->attributes->objectcoll_width + ITKAMEX_DUST_SPAWN_OFF_X) * -ip->lr;
        }
        ip->item_vars.kamex.is_apply_push = TRUE;

        ip->phys_info.vel_air.x = -ip->lr * ITKAMEX_CONST_VEL_X;

        efManagerDustHeavyMakeEffect(&pos, -ip->lr);
    }
}

// 0x801807DC
sb32 itKamexAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITKAMEX_GRAVITY, ITKAMEX_T_VEL);

    return FALSE;
}

// 0x80180808
sb32 itKamexAFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCollisionFlag(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL));

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        itKamexNAttackInitItemVars(item_gobj, TRUE);
        itKamexNAttackSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80180860
void itKamexAFallInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapSetAir(ip);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    ip->is_allow_pickup = FALSE;

    ip->item_vars.kamex.hydro_push_vel_x = 0.0F;
}

// 0x801808A4
void itKamexAFallSetStatus(GObj *item_gobj)
{
    itKamexAFallInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITKamexStatusDesc, itStatus_Kamex_AFall);
}

// 0x801808D8
sb32 itKamexNAppearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITKAMEX_GRAVITY, ITKAMEX_T_VEL);

    return FALSE;
}

// 0x80180904
sb32 itKamexNAppearProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCollisionFlag(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL));

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itKamexNAttackInitItemVars(item_gobj, FALSE);
        itKamexNAttackSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80180964
void itKamexNAppearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITKAMEX_LIFETIME;

    if (ip->it_kind == nITKindKamex)
    {
        func_800269C0_275C0(alSound_Voice_MBallKamexSpawn);
    }
    itMainSetItemStatus(item_gobj, dITKamexStatusDesc, itStatus_Kamex_NAppear);
}

// 0x801809BC
sb32 itKamexNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    itKamexNAttackUpdateHydro(item_gobj);

    if (ip->item_vars.kamex.is_apply_push != FALSE)
    {
        ip->phys_info.vel_air.x += ip->item_vars.kamex.hydro_push_vel_x;
    }
    ip->item_vars.kamex.hydro_spawn_wait--;

    ip->it_multi--;

    return FALSE;
}

// 0x80180A30
sb32 itKamexNAttackProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itKamexAFallSetStatus);

    return FALSE;
}

// 0x80180A58
void itKamexNAttackInitItemVars(GObj *item_gobj, sb32 is_ignore_setup)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (is_ignore_setup == FALSE)
    {
        ip->it_multi = ITKAMEX_LIFETIME;

        if (ip->it_kind == nITKindKamex)
        {
            Gfx *dl = (Gfx*)itGetPData(ip, lITKamexDataStart, lITKamexDisplayList); // Linker thing

            dobj->display_list = dl;

            ip->coll_data.object_coll.top = ITKAMEX_COLL_SIZE;
            ip->coll_data.object_coll.center = 0.0F;
            ip->coll_data.object_coll.bottom = -ITKAMEX_COLL_SIZE;
            ip->coll_data.object_coll.width = ITKAMEX_COLL_SIZE;
        }
    }
    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0;

    ip->item_vars.kamex.hydro_push_vel_x = ip->lr * ITKAMEX_PUSH_VEL_X;
    ip->item_vars.kamex.hydro_spawn_wait = 0;
    ip->item_vars.kamex.is_apply_push = FALSE;
}

// 0x80180AF4
void itKamexNAttackSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITKamexStatusDesc, itStatus_Kamex_NAttack);
}

// 0x80180B1C
sb32 itKamexSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itKamexNAppearSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80180B6C
sb32 itKamexSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80180BAC - Turn Blastoise towards the side with the most enemy players
void itKamexSDefaultFindTargetsSetLR(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];
    s32 unused1;
    GObj *victim_gobj;
    s32 unused2[3];
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    f32 dist_xy;
    f32 dist_x;
    Vec3f dist;
    f32 square_xy;
    s32 ft_count = 0;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fighter_gobj != ip->owner_gobj) && (fp->team != ip->team))
        {
            lbVector_Vec3fSubtract(&dist, &DObjGetStruct(fighter_gobj)->translate.vec.f, &dobj->translate.vec.f);

            if (ft_count == 0)
            {
                dist_xy = SQUARE(dist.x) + SQUARE(dist.y);
            }
            ft_count++;

            square_xy = SQUARE(dist.x) + SQUARE(dist.y);

            if (square_xy <= dist_xy)
            {
                dist_xy = square_xy;

                victim_gobj = fighter_gobj;
            }
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    dist_x = DObjGetStruct(victim_gobj)->translate.vec.f.x - dobj->translate.vec.f.x;

    ip->lr = (dist_x < 0.0F) ? nGMDirectionL : nGMDirectionR;
}

// 0x80180CDC
GObj* itKamexMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITKamexItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *kamex_ip;
    itStruct *mball_ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        kamex_ip = itGetStruct(item_gobj);

        kamex_ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        kamex_ip->phys_info.vel_air.x = kamex_ip->phys_info.vel_air.z = 0.0F;
        kamex_ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        mball_ip = itGetStruct(spawn_gobj);

        kamex_ip->owner_gobj = mball_ip->owner_gobj;
        kamex_ip->team = mball_ip->team;

        itKamexSDefaultFindTargetsSetLR(item_gobj);

        if (kamex_ip->lr == nGMDirectionL)
        {
            dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
        }
        dobj->translate.vec.f.y -= kamex_ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(kamex_ip, lITKamexDataStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x80180E10
sb32 itKamexWeaponHydroProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj = DObjGetStruct(weapon_gobj);

    wp->weapon_hit.offset[0].x = dobj->child->translate.vec.f.x * wp->lr;

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80180E60
sb32 itKamexWeaponHydroProcHit(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x80180E6C
sb32 itKamexWeaponHydroProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x80180EDC
GObj* itKamexWeaponHydroMakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITKamexWeaponHydroWeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *dobj;
    s32 unused;
    wpStruct *wp;
    Vec3f translate;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = ip->lr;

    dobj = DObjGetStruct(weapon_gobj);

    translate = dobj->translate.vec.f;

    efManagerSparkleWhiteScaleMakeEffect(&translate, 1.0F);

    if (wp->lr == nGMDirectionL)
    {
        dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
    }
    wp->weapon_vars.hydro.unk_0x0 = 0; // Set but never used?
    wp->weapon_vars.hydro.unk_0x4 = 0; // Set but never used?

    wp->lifetime = ITKAMEX_HYDRO_LIFETIME;

    return weapon_gobj;
}

// 0x80180F9C
void itKamexNAttackMakeHydro(GObj *item_gobj, Vec3f *pos)
{
    itKamexWeaponHydroMakeWeapon(item_gobj, pos);
}
