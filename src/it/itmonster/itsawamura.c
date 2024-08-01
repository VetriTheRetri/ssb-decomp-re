#include <it/item.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITSawamuraItemAttributes;  // 0x00000BB0
extern intptr_t lITSawamuraDataStart;       // 0x00011F40
extern intptr_t lITSawamuraDisplayList;     // 0x00012340

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8018B220
itCreateDesc dITSawamuraItemDesc =
{
    nITKindSawamura,                       // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITSawamuraItemAttributes,             // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,         // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateNew,         // Hitbox Update State
    itSawamuraSDefaultProcUpdate,           // Proc Update
    itSawamuraSDefaultProcMap,              // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018B254
itStatusDesc dITSawamuraStatusDesc[/* */] =
{
    // Status 0 (Air Fall)
    {
        itSawamuraAFallProcUpdate,          // Proc Update
        itSawamuraAFallProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Fall)
    {
        itSawamuraGWaitProcUpdate,          // Proc Update
        itSawamuraGWaitProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Attack)
    {
        itSawamuraNAttackProcUpdate,        // Proc Update
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
sb32 itSawamuraAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSAWAMURA_GRAVITY, ITSAWAMURA_T_VEL);

    return FALSE;
}

// 0x80182660
sb32 itSawamuraAFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itSawamuraGWaitSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801826A8
void itSawamuraAFallSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITSawamuraStatusDesc, itStatus_Sawamura_AFall);
}

// 0x801826D0
sb32 itSawamuraGWaitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itSawamuraNAttackSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182714
sb32 itSawamuraGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itSawamuraAFallSetStatus);

    return FALSE;
}

// 0x8018273C
void itSawamuraGWaitSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITSawamuraStatusDesc, itStatus_Sawamura_GWait);
}

// 0x80182764
sb32 itSawamuraNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSAWAMURA_GRAVITY, ITSAWAMURA_T_VEL);

    if ((ip->lr == nGMDirectionR) && (dobj->translate.vec.f.x >= (gMPCollisionGroundData->blastzone_right - ITSAWAMURA_DESPAWN_OFF_X)))
    {
        return TRUE;
    }
    else if ((ip->lr == nGMDirectionL) && (dobj->translate.vec.f.x <= (gMPCollisionGroundData->blastzone_left + ITSAWAMURA_DESPAWN_OFF_X)))
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
void itSawamuraNAttackSetFollowPlayerLR(GObj *item_gobj, GObj *fighter_gobj)
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

    lbVector_Vec3fGetEulerRotation(&ip->phys_info.vel_air, MTVECTOR_AXIS_Z, atan2f(dist.y, dist.x));

    ip->lr = (dist.x < 0.0F) ? nGMDirectionL : nGMDirectionR;

    if (ip->lr == nGMDirectionR)
    {
        ij->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
    }
}

// 0x80182958
void itSawamuraNAttackInitItemVars(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];
    itStruct *ip = itGetStruct(item_gobj);
    GObj *victim_gobj;
    s32 unused2[3];
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
    itSawamuraNAttackSetFollowPlayerLR(item_gobj, victim_gobj);

    if (ip->it_kind == nITKindSawamura)
    {
        Gfx *dl = (Gfx*)itGetPData(ip, lITSawamuraDataStart, lITSawamuraDisplayList); // Linker thing

        dobj->display_list = dl;

        func_800269C0_275C0(nGMSoundVoiceMBallSawamuraKick);
    }
    ip->it_multi = ITSAWAMURA_LIFETIME;

    ip->item_hit.size = ITSAWAMURA_KICK_SIZE;
}

// 0x80182AAC
void itSawamuraNAttackSetStatus(GObj *item_gobj)
{
    itSawamuraNAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITSawamuraStatusDesc, itStatus_Sawamura_NAttack);
}

// 0x80182AE0
sb32 itSawamuraSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->it_multi = ITSAWAMURA_KICK_WAIT;

        ip->phys_info.vel_air.y = 0.0F;

        itSawamuraAFallSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182B34
sb32 itSawamuraSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80182B74
GObj* itSawamuraMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITSawamuraItemDesc, pos, vel, flags);

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

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITSawamuraDataStart), 0.0F); // Linker thing

        func_800269C0_275C0(nGMSoundVoiceMBallSawamuraSpawn);

        omMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
    }
    return item_gobj;
}
