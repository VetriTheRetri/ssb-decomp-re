#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lBombHeiHitboxEvents;         // 0x0000046C
extern intptr_t lBombHeiDataStart;            // 0x000033F8
extern intptr_t lBombHeiWalkRightDisplayList; // 0x00003310
extern intptr_t lBombHeiWalkLeftDisplayList;  // 0x000034C0         
extern intptr_t lBombHeiWalkMatAnimJoint;     // 0x000035B8

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189F90
intptr_t itCommon_BombHei_DisplayListOffsets[/* */] = { 0x3310, 0x34C0 };

// 0x80189F98
itCreateDesc itCommon_BombHei_ItemDesc =
{
    It_Kind_BombHei,                        // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x424,                                  // Offset of item attributes in file?
    0x12,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBombHei_AFall_ProcUpdate,             // Proc Update
    itBombHei_AFall_ProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80189FCC
itStatusDesc itCommon_BombHei_StatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        itBombHei_GWait_ProcUpdate,         // Proc Update
        itBombHei_GWait_ProcMap,            // Proc Map
        itBombHei_SDefault_ProcHit,         // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBombHei_AFall_ProcUpdate,         // Proc Update
        itBombHei_AFall_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 2 (Fighter Hold)
    {
        NULL,                               // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 3 (Fighter Throw)
    {
        itBombHei_FThrow_ProcUpdate,        // Proc Update
        itBombHei_FThrow_ProcMap,           // Proc Map
        itBombHei_SDefault_ProcHit,         // Proc Hit
        itBombHei_SDefault_ProcHit,         // Proc Shield
        itCommonSDefaultProcHop,          // Proc Hop
        itBombHei_SDefault_ProcHit,         // Proc Set-Off
        itCommonSDefaultProcReflector,    // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 4 (Fighter Throw)
    {
        itBombHei_AFall_ProcUpdate,         // Proc Update
        itBombHei_FDrop_ProcMap,            // Proc Map
        itBombHei_SDefault_ProcHit,         // Proc Hit
        itBombHei_SDefault_ProcHit,         // Proc Shield
        itCommonSDefaultProcHop,          // Proc Hop
        itBombHei_SDefault_ProcHit,         // Proc Set-Off
        itCommonSDefaultProcReflector,    // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 5 (Ground Walk)
    {
        itBombHei_GWalk_ProcUpdate,         // Proc Update
        itBombHei_GWalk_ProcMap,            // Proc Map
        itBombHei_MExplode_ProcHit,         // Proc Hit
        itBombHei_MExplode_ProcHit,         // Proc Shield
        NULL,                               // Proc Hop
        itBombHei_MExplode_ProcHit,         // Proc Set-Off
        itBombHei_MExplode_ProcHit,         // Proc Reflector
        itBombHei_MExplode_ProcHit          // Proc Damage
    },

    // Status 6 (Map Collision Explosion)
    {
        itBombHei_MExplode_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        itBombHei_MExplode_ProcUpdate,      // Proc Hit
        itBombHei_MExplode_ProcUpdate,      // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itBombHei_MExplode_ProcUpdate,      // Proc Reflector
        itBombHei_MExplode_ProcUpdate       // Proc Damage
    },

    // Status 7 (Neutral / Hit Explosion)
    {
        itBombHei_NExplode_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 8 (Ground Walk Explosion Stall)
    {
        itBombHei_GExplodeWait_ProcUpdate,  // Proc Update
        itBombHei_GExplodeWait_ProcMap,     // Proc Map
        itBombHei_MExplode_ProcHit,         // Proc Hit
        itBombHei_MExplode_ProcHit,         // Proc Shield
        NULL,                               // Proc Hop
        itBombHei_MExplode_ProcHit,         // Proc Set-Off
        itBombHei_MExplode_ProcHit,         // Proc Reflector
        itBombHei_MExplode_ProcHit          // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itBombHeiStatus
{
    itStatus_BombHei_GWait,
    itStatus_BombHei_AFall,
    itStatus_BombHei_FHold,
    itStatus_BombHei_FThrow,
    itStatus_BombHei_FDrop,
    itStatus_BombHei_GWalk,
    itStatus_BombHei_MExplode,              // Explode on map collision
    itStatus_BombHei_NExplode,              // Neutral explosion
    itStatus_BombHei_GExplodeWait,          // Stall until explosion
    itStatus_BombHei_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80177060
void itBombHei_SDefault_SetExplode(GObj *item_gobj, u8 unused)
{
    s32 unused;
    DObj *joint = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    efParticle *efpart;

    itBombHei_SDefault_SetHitStatusNone(item_gobj);

    efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate.vec.f); // WARNING: Actually some sprite struct

    if (efpart != NULL)
    {
        efpart->effect_info->scale.x = ITBOMBHEI_EXPLODE_SCALE;
        efpart->effect_info->scale.y = ITBOMBHEI_EXPLODE_SCALE;
        efpart->effect_info->scale.z = ITBOMBHEI_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_RENDERFLAG_HIDDEN;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    itMainRefreshHit(item_gobj);
    itMainClearOwnerStats(item_gobj);
    itBombHei_NExplode_SetStatus(item_gobj);
}

// 0x80177104
void itBombHei_SDefault_SetWalkDirection(GObj *item_gobj, ub8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    Gfx *dll = itGetPData(ip, lBombHeiDataStart, lBombHeiWalkLeftDisplayList);  // (void*)((uintptr_t)((uintptr_t)ip->attributes->model_desc - (uintptr_t)&lBombHeiDataStart) + &lBombHeiWalkLeftDisplayList); // Linker thing
    Gfx *dlr = itGetPData(ip, lBombHeiDataStart, lBombHeiWalkRightDisplayList); // (void*)((uintptr_t)((uintptr_t)ip->attributes->model_desc - (uintptr_t)&lBombHeiDataStart) + &lBombHeiWalkRightDisplayList); // Linker thing

    if (lr != 0)
    {
        ip->lr = LR_Right;
        ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;

        joint->display_list = dlr;
    }
    else
    {
        ip->lr = LR_Left;
        ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

        joint->display_list = dll;
    }
}

// 0x80177180
void itBombHei_SDefault_CheckMakeDustEffect(GObj *item_gobj, u8 override)
{
    s32 unused[4];
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);

    if ((ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND) || (override != FALSE))
    {
        Vec3f pos = joint->translate.vec.f;

        pos.y += attributes->objectcoll_bottom;

        efParticle_DustHeavyDouble_MakeEffect(&pos, ip->lr, 1.0F);
    }
}

// 0x80177208
void itBombHei_SDefault_SetHitStatusNormal(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 0x80177218
void itBombHei_SDefault_SetHitStatusNone(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
}

// 0x80177224
sb32 itBombHei_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80177260
s32 itBombHei_GWalk_GetMostPlayersLR(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];
    Vec3f *translate;
    s32 lr;
    s32 ret_lr = 0;
    Vec3f dist;
    DObj *ij = DObjGetStruct(item_gobj);
    DObj *fj;

    while (fighter_gobj != NULL)
    {
        translate = &ij->translate.vec.f;
            
        fj = DObjGetStruct(fighter_gobj);

        lbVector_Vec3fSubtract(&dist, translate, &fj->translate.vec.f);

        lr = (dist.x < 0.0F) ? LR_Left : LR_Right;

        fighter_gobj = fighter_gobj->group_gobj_next;

        ret_lr += lr;
    }
    return ret_lr; // I assume this is getting the number of players on either side of the Bob-Omb so it starts moving towards the most crowded area
}

// 0x80177304
sb32 itBombHei_GWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *dll = itGetPData(ip, lBombHeiDataStart, lBombHeiWalkLeftDisplayList); // Linker thing
    s32 lr;

    if (ip->it_multi == ITBOMBHEI_WALK_WAIT)
    {
        lr = itBombHei_GWalk_GetMostPlayersLR(item_gobj);

        if (lr == LR_Center)
        {
            lr = lbRandom_GetIntRange(2) - 1;
        }
        if (lr < 0)
        {
            ip->lr = LR_Right;
            ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;
        }
        else
        {
            ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

            joint->display_list = dll;

            ip->lr = LR_Left;
        }
        itBombHei_GWalk_SetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801773F4
sb32 itBombHei_GWait_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itBombHei_AFall_SetStatus);

    return FALSE;
}

// 0x8017741C
sb32 itBombHei_SDefault_ProcHit(GObj *item_gobj)
{
    itBombHei_SDefault_ZeroVelSetExplode(item_gobj, 1);

    return FALSE;
}

// 0x80177440
sb32 itBombHei_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itBombHei_GWait_SetStatus);
}

// 0x80177474
void itBombHei_GWait_SetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_GWait);
}

// 0x801774B0
void itBombHei_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_AFall);
}

// 0x801774FC
void itBombHei_FHold_SetStatus(GObj *item_gobj)
{
    itBombHei_SDefault_SetHitStatusNone(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_FHold);
}

// 0x80177530
sb32 itBombHei_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017756C
sb32 itBombHei_FThrow_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapProcAll(item_gobj, itBombHei_MExplode_SetStatus);
}

// 0x80177590
void itBombHei_FThrow_SetStatus(GObj *item_gobj)
{
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_FThrow);
}

// 0x801775C4
sb32 itBombHei_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapProcAll(item_gobj, itBombHei_MExplode_SetStatus);
}

// 0x801775E8
void itBombHei_FDrop_SetStatus(GObj *item_gobj)
{
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_FDrop);
}

// 0x8017761C
void itBombHei_GWalk_UpdateGFX(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.bombhei.smoke_delay == 0)
    {
        Vec3f pos = joint->translate.vec.f;

        pos.y += 120.0F;

        efParticle_DustLight_MakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;
    }
    ip->item_vars.bombhei.smoke_delay--;
}

// 0x801776A0
sb32 itBombHei_GWalk_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    itBombHei_GWalk_UpdateGFX(item_gobj);

    if (mpCollision_CheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LR_Left)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.vec.f.x - attributes->objectcoll_width))
            {
                itBombHei_SDefault_SetWalkDirection(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.vec.f.x + attributes->objectcoll_width))
            {
                itBombHei_SDefault_SetWalkDirection(item_gobj, 0);
            }
        }
    }
    if (ip->it_multi == ITBOMBHEI_FLASH_WAIT)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

        itBombHei_GExplodeWait_SetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801777D8
sb32 itBombHei_GWalk_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_CheckLRWallProcGround(item_gobj, itBombHei_FDrop_SetStatus);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_LWALL)
    {
        itBombHei_SDefault_SetWalkDirection(item_gobj, 0);
    }
    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_RWALL)
    {
        itBombHei_SDefault_SetWalkDirection(item_gobj, 1);
    }
    return FALSE;
}

// 0x80177848
void itBombHei_GWalk_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    void *matanim_joint;
    s32 unused;
    Vec3f pos;

    ip->is_allow_pickup = FALSE;

    ip->it_multi = 0;

    ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;

    itMainRefreshHit(item_gobj);

    matanim_joint = itGetPData(ip, lBombHeiDataStart, lBombHeiWalkMatAnimJoint); // ((uintptr_t)ip->attributes->model_desc - (uintptr_t)&lBombHeiDataStart) + &lBombHeiWalkMatAnimJoint; // Linker thing

    omAddMObjAnimAll(joint->mobj, matanim_joint, 0.0F); // Set texture animation?

    func_8000DF34(item_gobj);

    if (mpCollision_CheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LR_Left)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.vec.f.x - attributes->objectcoll_width))
            {
                itBombHei_SDefault_SetWalkDirection(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.vec.f.x + attributes->objectcoll_width))
            {
                itBombHei_SDefault_SetWalkDirection(item_gobj, 0);
            }
        }
    }
    itMainClearOwnerStats(item_gobj);

    func_800269C0(alSound_SFX_BombHeiFuse);
}

// 0x801779A8
void itBombHei_GWalk_SetStatus(GObj *item_gobj)
{
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itBombHei_GWalk_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_GWalk);
}

// 0x801779E4
void itBombHei_SDefault_ZeroVelSetExplode(GObj *item_gobj, u8 unused)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    itBombHei_SDefault_SetExplode(item_gobj, unused);

    func_800269C0(alSound_SFX_ExplodeL);
}

// 0x80177A24
void itBombHei_SDefault_UpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(itCommon_BombHei_ItemDesc, lBombHeiHitboxEvents); // Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size = ev[ip->item_event_index].size;

        ip->item_hit.can_rehit_item = TRUE;
        ip->item_hit.can_hop = FALSE;
        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.can_setoff = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80177B10
sb32 itBombHei_MExplode_ProcUpdate(GObj *item_gobj)
{
    itBombHei_SDefault_CheckMakeDustEffect(item_gobj, FALSE);
    itBombHei_SDefault_ZeroVelSetExplode(item_gobj, 1);

    return FALSE;
}

// 0x80177B44
sb32 itBombHei_MExplode_ProcHit(GObj *item_gobj)
{
    itBombHei_SDefault_CheckMakeDustEffect(item_gobj, TRUE);
    itBombHei_SDefault_ZeroVelSetExplode(item_gobj, 0);

    return FALSE;
}

// 0x80177B78
void itBombHei_MExplode_SetStatus(GObj *item_gobj)
{
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_MExplode);
}

// 0x80177BAC
void itBombHei_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_hit.stale = ITEM_STALE_DEFAULT;

    ip->item_event_index = 0;

    itBombHei_SDefault_UpdateHitEvent(item_gobj);
}

// 0x80177BE8
sb32 itBombHei_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHei_SDefault_UpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITBOMBHEI_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80177C30
void itBombHei_NExplode_SetStatus(GObj *item_gobj)
{
    itBombHei_NExplode_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_NExplode);
}

// 0x80177C64
sb32 itBombHei_GExplodeWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHei_GWalk_UpdateGFX(item_gobj);

    if (ip->it_multi == ITBOMBHEI_EXPLODE_WAIT)
    {
        itBombHei_SDefault_CheckMakeDustEffect(item_gobj, TRUE);
        itBombHei_SDefault_ZeroVelSetExplode(item_gobj, 0);
        func_800269C0(alSound_SFX_ExplodeL);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x80177D00
sb32 itBombHei_GExplodeWait_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itBombHei_FDrop_SetStatus);

    return FALSE;
}

// 0x80177D28
void itBombHei_GExplodeWait_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    joint->mobj->unk_mobj_0x94 = 0;

    itMainCheckSetColAnimID(item_gobj, ITBOMBHEI_EXPLODE_COLANIM_ID, ITBOMBHEI_EXPLODE_COLANIM_DURATION);
}

// 0x80177D60
void itBombHei_GExplodeWait_SetStatus(GObj *item_gobj)
{
    itBombHei_SDefault_SetHitStatusNormal(item_gobj);
    itBombHei_GExplodeWait_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_GExplodeWait);
}

// 0x80177D9C
GObj* itCommon_BombHei_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_BombHei_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;
    Vec3f translate;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        translate = joint->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        itMainClearOwnerStats(item_gobj);

        func_80008CC0(joint, 0x2E, 0);

        joint->translate.vec.f = translate;

        ip->is_unused_item_bool = TRUE;

        joint->rotate.vec.f.z = 0.0F;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}