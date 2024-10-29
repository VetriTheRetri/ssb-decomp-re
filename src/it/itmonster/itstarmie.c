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
ITCreateDesc dITStarmieItemDesc = 
{
    nITKindStarmie,                         // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITStarmieItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMAttackStateNew,                      // Hitbox Update State
    itStarmieCommonProcUpdate,              // Proc Update
    itStarmieCommonProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018B1A4
ITStatusDesc dITStarmieStatusDescs[/* */] =
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
        itStarmieAttackProcUpdate,          // Proc Update
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
WPCreateDesc dITStarmieWeaponSwiftWeaponDesc = 
{
    0x03,                                   // Render flags?
    nWPKindStarmieSwift,                    // Weapon Kind
    &gITManagerFileData,                    // Pointer to character's loaded files?
    &lITStarmieWeaponSwiftWeaponAttributes, // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nGCTransformTraRotRpyRSca,          // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
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
    nITStarmieStatusNFollow,
    nITStarmieStatusAttack,
    nITStarmieStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80181C20
void itStarmieAttackUpdateSwift(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
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

        itStarmieAttackMakeSwift(item_gobj, &pos);

        func_800269C0_275C0(nSYAudioFGMMonsterShoot);

        ip->item_vars.starmie.swift_spawn_wait = (mtTrigGetRandomIntRange(ITSTARMIE_SWIFT_SPAWN_WAIT_RANDOM) + ITSTARMIE_SWIFT_SPAWN_WAIT_CONST);

        ip->physics.vel_air.x = -ip->lr * ITSTARMIE_PUSH_VEL_X;
    }
}

// 0x80181D24
sb32 itStarmieAttackProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    itStarmieAttackUpdateSwift(item_gobj);

    ip->item_vars.starmie.swift_spawn_wait--;

    ip->physics.vel_air.x += ip->item_vars.starmie.add_vel_x;

    ip->it_multi--;

    return FALSE;
}

// 0x80181D8C
void itStarmieAttackInitItemVars(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 lr_bak = ip->lr;

    ip->lr = (ip->item_vars.starmie.victim_pos.x < dobj->translate.vec.f.x) ? -1 : +1;

    if (ip->lr != lr_bak)
    {
        dobj->rotate.vec.f.y += F_CST_DTOR32(180.0F); // PI32
    }
    ip->it_multi = ITSTARMIE_LIFETIME;

    ip->item_vars.starmie.swift_spawn_wait = 0;
    ip->item_vars.starmie.add_vel_x = ip->lr * ITSTARMIE_ADD_VEL_X;
}

// 0x80181E0C
void itStarmieAttackSetStatus(GObj *item_gobj)
{
    itStarmieAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITStarmieStatusDescs, nITStarmieStatusAttack);
}

// 0x80181E40
sb32 itStarmieNFollowProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->lr == +1) && (dobj->translate.vec.f.x >= ip->item_vars.starmie.target_pos.x))
    {
        ip->physics.vel_air.x = 0.0F;
        ip->physics.vel_air.y = 0.0F;

        itStarmieAttackSetStatus(item_gobj);
    }
    if ((ip->lr == -1) && (dobj->translate.vec.f.x <= ip->item_vars.starmie.target_pos.x))
    {
        ip->physics.vel_air.x = 0.0F;
        ip->physics.vel_air.y = 0.0F;

        itStarmieAttackSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80181EF4
void itStarmieNFollowFindFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    FTStruct *fp = ftGetStruct(fighter_gobj);
    DObj *item_dobj = DObjGetStruct(item_gobj);
    DObj *fighter_dobj = DObjGetStruct(fighter_gobj);
    Vec3f dist;
    Vec3f target_pos;
    Vec3f *victim_pos;

    target_pos = fighter_dobj->translate.vec.f;

    dist.x = fighter_dobj->translate.vec.f.x - item_dobj->translate.vec.f.x;

    target_pos.y += ITSTARMIE_TARGET_POS_OFF_Y - fp->coll_data.object_coll.bottom;

    target_pos.x -= (fp->coll_data.object_coll.width + ITSTARMIE_TARGET_POS_OFF_X) * ((dist.x < 0.0F) ? -1 : +1);

    victim_pos = &fighter_dobj->translate.vec.f;

    syVectorDiff3D(&dist, &target_pos, &item_dobj->translate.vec.f);
    
    ip->physics.vel_air.y = ip->physics.vel_air.z = 0.0F;
    ip->physics.vel_air.x = ITSTARMIE_FOLLOW_VEL_X;

    syVectorRotate3D(&ip->physics.vel_air, SYVECTOR_AXIS_Z, atan2f(dist.y, dist.x));

    ip->item_vars.starmie.target_pos = target_pos;

    ip->item_vars.starmie.victim_pos = *victim_pos;

    ip->lr = (dist.x < 0.0F) ? -1 : +1;

    if (ip->lr == +1)
    {
        item_dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
    }
    if (ip->it_kind == nITKindStarmie)
    {
        gcAddMObjMatAnimJoint(item_dobj->mobj, itGetPData(ip, lITStarmieDataStart, lITStarmieMatAnimJoint), 0); // Linker thing

        gcPlayAnimAll(item_gobj);
    }
}

// 0x801820CC
void itStarmieNFollowInitItemVars(GObj *item_gobj)
{
    GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];
    ITStruct *ip = itGetStruct(item_gobj);
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
        FTStruct *fp = ftGetStruct(fighter_gobj);

        if ((fighter_gobj != ip->owner_gobj) && (fp->team != ip->team))
        {
            syVectorDiff3D(&dist, &DObjGetStruct(fighter_gobj)->translate.vec.f, &dobj->translate.vec.f);

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
        func_800269C0_275C0(nSYAudioVoiceMBallStarmieAppear);
    }
}

// 0x801821E8
void itStarmieNFollowSetStatus(GObj *item_gobj)
{
    itStarmieNFollowInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITStarmieStatusDescs, nITStarmieStatusNFollow);
}

// 0x8018221C
sb32 itStarmieCommonProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {    
        ip->physics.vel_air.x = ip->physics.vel_air.y = 0.0F;

        itStarmieNFollowSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182270
sb32 itStarmieCommonProcMap(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE)
    {
        ip->physics.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x801822B0
GObj* itStarmieMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITStarmieItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        ITStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->physics.vel_air.x = ip->physics.vel_air.z = 0.0F;
        ip->physics.vel_air.y = ITMONSTER_RISE_VEL_Y;

        gcAddXObjForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        dobj->translate.vec.f.y -= ip->attributes->object_coll_bottom;

        gcAddDObjAnimJoint(dobj, itGetMonsterAnimNode(ip, lITStarmieDataStart), 0.0F); // Linker thing

        gcMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
    }
    return item_gobj;
}

// 0x801823B4
sb32 itStarmieWeaponSwiftProcUpdate(GObj *weapon_gobj)
{
    WPStruct *wp = wpGetStruct(weapon_gobj);

    wp->physics.vel_air.x = wp->physics.vel_air.x; // Bruh

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801823E8
sb32 itStarmieWeaponSwiftProcHit(GObj *weapon_gobj)
{
    WPStruct *wp = wpGetStruct(weapon_gobj);

    efManagerStarSplashMakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->lr);

    return TRUE;
}

// 0x80182418
sb32 itStarmieWeaponSwiftProcHop(GObj *weapon_gobj)
{
    WPStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->physics.vel_air, &wp->shield_collide_dir, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->physics.vel_air.y, wp->physics.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    if (wp->physics.vel_air.x > 0.0F)
    {
        wp->lr = +1;
    }
    else wp->lr = -1;

    return FALSE;
}

// 0x801824C0
sb32 itStarmieWeaponSwiftProcReflector(GObj *weapon_gobj)
{
    WPStruct *wp = wpGetStruct(weapon_gobj);
    FTStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->physics.vel_air.y, wp->physics.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x80182530
GObj* itStarmieWeaponSwiftMakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    ITStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITStarmieWeaponSwiftWeaponDesc, pos, WEAPON_FLAG_PARENT_ITEM);
    DObj *dobj;
    s32 unused;
    WPStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = ip->lr;

    wp->physics.vel_air.x = wp->lr * ITSTARMIE_SWIFTVEL_X;

    dobj = DObjGetStruct(weapon_gobj);

    dobj->translate.vec.f = *pos;

    efManagerSparkleWhiteScaleMakeEffect(&dobj->translate.vec.f, 1.0F);

    wp->lifetime = ITSTARMIE_SWIFT_LIFETIME;

    if (wp->lr == +1)
    {
        dobj->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
    }
    return weapon_gobj;
}

// 0x80182608
void itStarmieAttackMakeSwift(GObj *item_gobj, Vec3f *pos)
{
    itStarmieWeaponSwiftMakeWeapon(item_gobj, pos);
}
