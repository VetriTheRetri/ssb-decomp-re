#include <it/item.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lSawamuraDataStart;         // 0x00011F40
extern intptr_t lSawamuraDisplayList;       // 0x00012340

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B220
itCreateDesc itMonster_Sawamura_ItemDesc =
{
    It_Kind_Sawamura,                       // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xBB0,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itSawamura_SDefault_ProcUpdate,         // Proc Update
    itSawamura_SDefault_ProcMap,            // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018B254
itStatusDesc itMonster_Sawamura_StatusDesc[/* */] =
{
    // Status 0 (Air Fall)
    {
        itSawamura_AFall_ProcUpdate,        // Proc Update
        itSawamura_AFall_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Fall)
    {
        itSawamura_GWait_ProcUpdate,        // Proc Update
        itSawamura_GWait_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Attack)
    {
        itSawamura_NAttack_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itSawamuraStatus
{
    itStatus_Sawamura_AFall,
    itStatus_Sawamura_GWait,
    itStatus_Sawamura_NAttack,
    itStatus_Sawamura_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80182630
sb32 itSawamura_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITSAWAMURA_GRAVITY, ITSAWAMURA_T_VEL);

    return FALSE;
}

// 0x80182660
sb32 itSawamura_AFall_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itSawamura_GWait_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801826A8
void itSawamura_AFall_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itMonster_Sawamura_StatusDesc, itStatus_Sawamura_AFall);
}

// 0x801826D0
sb32 itSawamura_GWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itSawamura_NAttack_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182714
sb32 itSawamura_GWait_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itSawamura_AFall_SetStatus);

    return FALSE;
}

// 0x8018273C
void itSawamura_GWait_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itMonster_Sawamura_StatusDesc, itStatus_Sawamura_GWait);
}

// 0x80182764
sb32 itSawamura_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITSAWAMURA_GRAVITY, ITSAWAMURA_T_VEL);

    if ((ip->lr == LR_Right) && (joint->translate.vec.f.x >= (gGroundInfo->blastzone_right - ITSAWAMURA_DESPAWN_OFF_X)))
    {
        return TRUE;
    }
    else if ((ip->lr == LR_Left) && (joint->translate.vec.f.x <= (gGroundInfo->blastzone_left + ITSAWAMURA_DESPAWN_OFF_X)))
    {
        return TRUE;
    }
    else if (ip->it_multi == 0)
    {
        return TRUE;
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8018285C
void itSawamura_NAttack_SetFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *ij = DObjGetStruct(item_gobj);
    DObj *fj = DObjGetStruct(fighter_gobj);
    s32 unused;
    Vec3f dist;
    Vec3f target_pos;

    target_pos = fj->translate.vec.f;

    target_pos.y += ITSAWAMURA_TARGET_POS_OFF_Y - fp->coll_data.object_coll.bottom;

    lbVector_Vec3fSubtract(&dist, &target_pos, &ij->translate.vec.f);

    ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;
    ip->phys_info.vel_air.x = ITSAWAMURA_KICK_VEL_X;

    lbVector_Vec3fGetEulerRotation(&ip->phys_info.vel, 4, atan2f(dist.y, dist.x));

    ip->lr = (dist.x < 0.0F) ? LR_Left : LR_Right;

    if (ip->lr == LR_Right)
    {
        ij->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
    }
}

// 0x80182958
void itSawamura_NAttack_InitItemVars(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkIndex_Fighter];
    itStruct *ip = itGetStruct(item_gobj);
    GObj *victim_gobj;
    s32 unused2[3];
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
    itSawamura_NAttack_SetFollowPlayerLR(item_gobj, victim_gobj);

    if (ip->it_kind == It_Kind_Sawamura)
    {
        void *dl = itGetPData(ip, lSawamuraDataStart, lSawamuraDisplayList); // Linker thing

        joint->display_list = dl;

        func_800269C0(alSound_Voice_MBallSawamuraKick);
    }
    ip->it_multi = ITSAWAMURA_LIFETIME;

    ip->item_hit.size = ITSAWAMURA_KICK_SIZE;
}

// 0x80182AAC
void itSawamura_NAttack_SetStatus(GObj *item_gobj)
{
    itSawamura_NAttack_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Sawamura_StatusDesc, itStatus_Sawamura_NAttack);
}

// 0x80182AE0
sb32 itSawamura_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->it_multi = ITSAWAMURA_KICK_WAIT;

        ip->phys_info.vel_air.y = 0.0F;

        itSawamura_AFall_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182B34
sb32 itSawamura_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80182B74
GObj* itMonster_Sawamura_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Sawamura_ItemDesc, pos, vel, flags);

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

        omAddDObjAnimAll(joint, itGetPData(ip, lSawamuraDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing

        func_800269C0(alSound_Voice_MBallSawamuraSpawn);

        omMoveGObjDLHead(item_gobj, 0x12, item_gobj->dl_link_order);
    }
    return item_gobj;
}