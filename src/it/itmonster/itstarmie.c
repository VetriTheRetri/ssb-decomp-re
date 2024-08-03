#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITStarmieItemAttributes;   // 0x00000B34
extern intptr_t
lITStarmieWeaponSwiftWeaponAttributes;      // 0x00000B7C
extern intptr_t lITStarmieDataStart;        // 0x000112A0
extern intptr_t lITStarmieMatAnimJoint;     // 0x00011338

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B170
itCreateDesc dITStarmieItemDesc = 
{
    nITKindStarmie,                        // Item Kind
    &gITManagerFileData,                         // Pointer to item file data?
    &lITStarmieItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,         // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateNew,         // Hitbox Update State
    itStarmieSDefaultProcUpdate,            // Proc Update
    itStarmieSDefaultProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018B1A4
itStatusDesc dITStarmieStatusDescs[/* */] =
{
    // Status 0 (Neutral Follow)
    {
        itStarmieNFollowProcUpdate,         // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Attack)
    {
        itStarmieNAttackProcUpdate,         // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018B1E4
wpCreateDesc dITStarmieWeaponSwiftWeaponDesc = 
{
    0x03,                                   // Render flags?
    nWPKindStarmieSwift,                   // Weapon Kind
    &gITManagerFileData,                         // Pointer to character's loaded files?
    &lITStarmieWeaponSwiftWeaponAttributes, // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,      // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itStarmieWeaponSwiftProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    itStarmieWeaponSwiftProcHit,            // Proc Hit
    itStarmieWeaponSwiftProcHit,            // Proc Shield
    itStarmieWeaponSwiftProcHop,            // Proc Hop
    itStarmieWeaponSwiftProcHit,            // Proc Set-Off
    itStarmieWeaponSwiftProcReflector,      // Proc Reflector
    itStarmieWeaponSwiftProcHit             // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itStarmieStatus
{
    itStatus_Starmie_NFollow,
    itStatus_Starmie_NAttack,
    itStatus_Starmie_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80181C20
void itStarmieNAttackUpdateSwift(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.starmie.swift_spawn_wait <= 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        if (ip->it_kind == nITKindStarmie)
        {
            pos.x += ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_X * ip->lr;
            pos.y += ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_Y;
        }
        else pos.x += ITSTARMIE_OTHER_SWIFT_SPAWN_OFF_X * ip->lr;

        itStarmieNAttackMakeSwift(item_gobj, &pos);

        func_800269C0_275C0(nGMSoundFGMMonsterShoot);

        ip->item_vars.starmie.swift_spawn_wait = (mtTrigGetRandomIntRange(ITSTARMIE_SWIFT_SPAWN_WAIT_RANDOM) + ITSTARMIE_SWIFT_SPAWN_WAIT_CONST);

        ip->phys_info.vel_air.x = -ip->lr * ITSTARMIE_PUSH_VEL_X;
    }
}

// 0x80181D24
sb32 itStarmieNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    itStarmieNAttackUpdateSwift(item_gobj);

    ip->item_vars.starmie.swift_spawn_wait--;

    ip->phys_info.vel_air.x += ip->item_vars.starmie.add_vel_x;

    ip->it_multi--;

    return FALSE;
}

// 0x80181D8C
void itStarmieNAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 lr_bak = ip->lr;

    ip->lr = (ip->item_vars.starmie.victim_pos.x < dobj->translate.vec.f.x) ? nGMDirectionL : nGMDirectionR;

    if (ip->lr != lr_bak)
    {
        dobj->rotate.vec.f.y += F_CST_DTOR32(180.0F); // PI32
    }
    ip->it_multi = ITSTARMIE_LIFETIME;

    ip->item_vars.starmie.swift_spawn_wait = 0;
    ip->item_vars.starmie.add_vel_x = ip->lr * ITSTARMIE_ADD_VEL_X;
}

// 0x80181E0C
void itStarmieNAttackSetStatus(GObj *item_gobj)
{
    itStarmieNAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITStarmieStatusDescs, itStatus_Starmie_NAttack);
}

// 0x80181E40
sb32 itStarmieNFollowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->lr == nGMDirectionR) && (dobj->translate.vec.f.x >= ip->item_vars.starmie.target_pos.x))
    {
        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;

        itStarmieNAttackSetStatus(item_gobj);
    }
    if ((ip->lr == nGMDirectionL) && (dobj->translate.vec.f.x <= ip->item_vars.starmie.target_pos.x))
    {
        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;

        itStarmieNAttackSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80181EF4
void itStarmieNFollowFindFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *item_dobj = DObjGetStruct(item_gobj);
    DObj *fighter_dobj = DObjGetStruct(fighter_gobj);
    Vec3f dist;
    Vec3f target_pos;
    Vec3f *victim_pos;

    target_pos = fighter_dobj->translate.vec.f;

    dist.x = fighter_dobj->translate.vec.f.x - item_dobj->translate.vec.f.x;

    target_pos.y += ITSTARMIE_TARGET_POS_OFF_Y - fp->coll_data.object_coll.bottom;

    target_pos.x -= (fp->coll_data.object_coll.width + ITSTARMIE_TARGET_POS_OFF_X) * ((dist.x < 0.0F) ? nGMDirectionL : nGMDirectionR);

    victim_pos = &fighter_dobj->translate.vec.f;

    lbVector_Vec3fSubtract(&dist, &target_pos, &item_dobj->translate.vec.f);
    
    ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;
    ip->phys_info.vel_air.x = ITSTARMIE_FOLLOW_VEL_X;

    lbVector_Vec3fGetEulerRotation(&ip->phys_info.vel_air, MTVECTOR_AXIS_Z, atan2f(dist.y, dist.x));

    ip->item_vars.starmie.target_pos = target_pos;

    ip->item_vars.starmie.victim_pos = *victim_pos;

    ip->lr = (dist.x < 0.0F) ? nGMDirectionL : nGMDirectionR;

    if (ip->lr == nGMDirectionR)
    {
        item_dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
    }
    if (ip->it_kind == nITKindStarmie)
    {
        omAddMObjAnimAll(item_dobj->mobj, itGetPData(ip, lITStarmieDataStart, lITStarmieMatAnimJoint), 0); // Linker thing

        func_8000DF34_EB34(item_gobj);
    }
}

// 0x801820CC
void itStarmieNFollowInitItemVars(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];
    itStruct *ip = itGetStruct(item_gobj);
    GObj *victim_gobj;
    s32 unused2[2];
    DObj *dobj = DObjGetStruct(item_gobj);
    f32 square_xy;
    f32 dist_x;
    f32 dist_xy;
    Vec3f dist;
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
    itStarmieNFollowFindFollowPlayerLR(item_gobj, victim_gobj);

    if (ip->it_kind == nITKindStarmie)
    {
        func_800269C0_275C0(nGMSoundVoiceMBallStarmieSpawn);
    }
}

// 0x801821E8
void itStarmieNFollowSetStatus(GObj *item_gobj)
{
    itStarmieNFollowInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITStarmieStatusDescs, itStatus_Starmie_NFollow);
}

// 0x8018221C
sb32 itStarmieSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {    
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itStarmieNFollowSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182270
sb32 itStarmieSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x801822B0
GObj* itStarmieMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITStarmieItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITStarmieDataStart), 0.0F); // Linker thing

        omMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
    }
    return item_gobj;
}

// 0x801823B4
sb32 itStarmieWeaponSwiftProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.x; // Bruh

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801823E8
sb32 itStarmieWeaponSwiftProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efManagerStarSplashMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->lr);

    return TRUE;
}

// 0x80182418
sb32 itStarmieWeaponSwiftProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = nGMDirectionR;
    }
    else wp->lr = nGMDirectionL;

    return FALSE;
}

// 0x801824C0
sb32 itStarmieWeaponSwiftProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x80182530
GObj* itStarmieWeaponSwiftMakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITStarmieWeaponSwiftWeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *dobj;
    s32 unused;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = ip->lr;

    wp->phys_info.vel_air.x = wp->lr * ITSTARMIE_SWIFT_VEL_X;

    dobj = DObjGetStruct(weapon_gobj);

    dobj->translate.vec.f = *pos;

    efManagerSparkleWhiteScaleMakeEffect(&dobj->translate.vec.f, 1.0F);

    wp->lifetime = ITSTARMIE_SWIFT_LIFETIME;

    if (wp->lr == nGMDirectionR)
    {
        dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
    }
    return weapon_gobj;
}

// 0x80182608
void itStarmieNAttackMakeSwift(GObj *item_gobj, Vec3f *pos)
{
    itStarmieWeaponSwiftMakeWeapon(item_gobj, pos);
}
