#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lStarmieDataStart;      // 0x000112A0
extern intptr_t lStarmieMatAnimJoint;   // 0x00011338

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B170
itCreateDesc itMonster_Starmie_ItemDesc = 
{
    It_Kind_Starmie,                        // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xB34,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itStarmie_SDefault_ProcUpdate,          // Proc Update
    itStarmie_SDefault_ProcMap,             // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018B1A4
itStatusDesc itMonster_Starmie_StatusDesc[/* */] =
{
    // Status 0 (Neutral Follow)
    {
        itStarmie_NFollow_ProcUpdate,       // Proc Update
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
        itStarmie_NAttack_ProcUpdate,       // Proc Update
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
wpCreateDesc wpStarmie_Swift_WeaponDesc = 
{
    3,                                      // Render flags?
    Wp_Kind_StarmieSwift,                   // Weapon Kind
    &gItemFileData,                         // Pointer to character's loaded files?
    0xB7C,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpStarmie_Swift_ProcUpdate,             // Proc Update
    NULL,                                   // Proc Map
    wpStarmie_Swift_ProcHit,                // Proc Hit
    wpStarmie_Swift_ProcHit,                // Proc Shield
    wpStarmie_Swift_ProcHop,                // Proc Hop
    wpStarmie_Swift_ProcHit,                // Proc Set-Off
    wpStarmie_Swift_ProcReflector,          // Proc Reflector
    wpStarmie_Swift_ProcHit                 // Proc Absorb
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
void itStarmie_NAttack_UpdateSwift(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.starmie.swift_spawn_wait <= 0)
    {
        Vec3f pos = joint->translate.vec.f;

        if (ip->it_kind == It_Kind_Starmie)
        {
            pos.x += ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_X * ip->lr;
            pos.y += ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_Y;
        }
        else pos.x += ITSTARMIE_OTHER_SWIFT_SPAWN_OFF_X * ip->lr;

        itStarmie_NAttack_MakeSwift(item_gobj, &pos);

        func_800269C0(alSound_SFX_MonsterShoot);

        ip->item_vars.starmie.swift_spawn_wait = (lbRandom_GetIntRange(ITSTARMIE_SWIFT_SPAWN_WAIT_RANDOM) + ITSTARMIE_SWIFT_SPAWN_WAIT_CONST);

        ip->phys_info.vel_air.x = -ip->lr * ITSTARMIE_PUSH_VEL_X;
    }
}

// 0x80181D24
sb32 itStarmie_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    itStarmie_NAttack_UpdateSwift(item_gobj);

    ip->item_vars.starmie.swift_spawn_wait--;

    ip->phys_info.vel_air.x += ip->item_vars.starmie.add_vel_x;

    ip->it_multi--;

    return FALSE;
}

// 0x80181D8C
void itStarmie_NAttack_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    s32 lr_bak = ip->lr;

    ip->lr = (ip->item_vars.starmie.victim_pos.x < joint->translate.vec.f.x) ? LR_Left : LR_Right;

    if (ip->lr != lr_bak)
    {
        joint->rotate.vec.f.y += F_DEG_TO_RAD(180.0F); // PI32
    }
    ip->it_multi = ITSTARMIE_LIFETIME;

    ip->item_vars.starmie.swift_spawn_wait = 0;
    ip->item_vars.starmie.add_vel_x = ip->lr * ITSTARMIE_ADD_VEL_X;
}

// 0x80181E0C
void itStarmie_NAttack_SetStatus(GObj *item_gobj)
{
    itStarmie_NAttack_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Starmie_StatusDesc, itStatus_Starmie_NAttack);
}

// 0x80181E40
sb32 itStarmie_NFollow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if ((ip->lr == LR_Right) && (joint->translate.vec.f.x >= ip->item_vars.starmie.target_pos.x))
    {
        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;

        itStarmie_NAttack_SetStatus(item_gobj);
    }
    if ((ip->lr == LR_Left) && (joint->translate.vec.f.x <= ip->item_vars.starmie.target_pos.x))
    {
        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;

        itStarmie_NAttack_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80181EF4
void itStarmie_NFollow_FindFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *ij = DObjGetStruct(item_gobj);
    DObj *fj = DObjGetStruct(fighter_gobj);
    Vec3f dist;
    Vec3f target_pos;
    Vec3f *victim_pos;

    target_pos = fj->translate.vec.f;

    dist.x = fj->translate.vec.f.x - ij->translate.vec.f.x;

    target_pos.y += ITSTARMIE_TARGET_POS_OFF_Y - fp->coll_data.object_coll.bottom;

    target_pos.x -= (fp->coll_data.object_coll.width + ITSTARMIE_TARGET_POS_OFF_X) * ((dist.x < 0.0F) ? LR_Left : LR_Right);

    victim_pos = &fj->translate.vec.f;

    lbVector_Vec3fSubtract(&dist, &target_pos, &ij->translate.vec.f);
    
    ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;
    ip->phys_info.vel_air.x = ITSTARMIE_FOLLOW_VEL_X;

    lbVector_Vec3fGetEulerRotation(&ip->phys_info.vel, 4, atan2f(dist.y, dist.x));

    ip->item_vars.starmie.target_pos = target_pos;

    ip->item_vars.starmie.victim_pos = *victim_pos;

    ip->lr = (dist.x < 0.0F) ? LR_Left : LR_Right;

    if (ip->lr == LR_Right)
    {
        ij->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
    }
    if (ip->it_kind == It_Kind_Starmie)
    {
        omAddMObjAnimAll(ij->mobj, itGetPData(ip, lStarmieDataStart, lStarmieMatAnimJoint), 0); // Linker thing

        func_8000DF34(item_gobj);
    }
}

// 0x801820CC
void itStarmie_NFollow_InitItemVars(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
    itStruct *ip = itGetStruct(item_gobj);
    GObj *victim_gobj;
    s32 unused2[2];
    DObj *joint = DObjGetStruct(item_gobj);
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
            lbVector_Vec3fSubtract(&dist, &DObjGetStruct(fighter_gobj)->translate.vec.f, &joint->translate.vec.f);

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
    itStarmie_NFollow_FindFollowPlayerLR(item_gobj, victim_gobj);

    if (ip->it_kind == It_Kind_Starmie)
    {
        func_800269C0(alSound_Voice_MBallStarmieSpawn);
    }
}

// 0x801821E8
void itStarmie_NFollow_SetStatus(GObj *item_gobj)
{
    itStarmie_NFollow_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Starmie_StatusDesc, itStatus_Starmie_NFollow);
}

// 0x8018221C
sb32 itStarmie_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {    
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itStarmie_NFollow_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182270
sb32 itStarmie_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x801822B0
GObj* itMonster_Starmie_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Starmie_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddOMMtxForDObjFixed(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ip, lStarmieDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing

        omMoveGObjDLHead(item_gobj, 0x12, item_gobj->dl_link_order);
    }
    return item_gobj;
}

// 0x801823B4
sb32 wpStarmie_Swift_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.x; // Bruh

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801823E8
sb32 wpStarmie_Swift_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efParticle_StarSplash_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->lr);

    return TRUE;
}

// 0x80182418
sb32 wpStarmie_Swift_ProcHop(GObj *weapon_gobj)
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

// 0x801824C0
sb32 wpStarmie_Swift_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x80182530
GObj* wpStarmie_Swift_MakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &wpStarmie_Swift_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    s32 unused;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = ip->lr;

    wp->phys_info.vel_air.x = wp->lr * ITSTARMIE_SWIFT_VEL_X;

    joint = DObjGetStruct(weapon_gobj);

    joint->translate.vec.f = *pos;

    efParticle_SparkleWhiteScale_MakeEffect(&joint->translate.vec.f, 1.0F);

    wp->lifetime = ITSTARMIE_SWIFT_LIFETIME;

    if (wp->lr == LR_Right)
    {
        joint->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
    }
    return weapon_gobj;
}

// 0x80182608
void itStarmie_NAttack_MakeSwift(GObj *item_gobj, Vec3f *pos)
{
    wpStarmie_Swift_MakeWeapon(item_gobj, pos);
}
