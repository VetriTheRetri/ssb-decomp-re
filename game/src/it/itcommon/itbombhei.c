#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITBombHeiItemAttributes;       // 0x00000424
extern intptr_t lITBombHeiHitboxEvents;         // 0x0000046C
extern intptr_t lITBombHeiDataStart;            // 0x000033F8
extern intptr_t lITBombHeiWalkRightDisplayList; // 0x00003310
extern intptr_t lITBombHeiWalkLeftDisplayList;  // 0x000034C0         
extern intptr_t lITBombHeiWalkMatAnimJoint;     // 0x000035B8

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189F90 - unused?
intptr_t dITBombHeiDisplayListOffsets[/* */] = { 0x3310, 0x34C0 };

// 0x80189F98
itCreateDesc dITBombHeiItemDesc =
{
    It_Kind_BombHei,                        // Item Kind
    &gITFileData,                         // Pointer to item file data?
    &lITBombHeiItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBombHeiAFallProcUpdate,               // Proc Update
    itBombHeiAFallProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80189FCC
itStatusDesc dITBombHeiStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        itBombHeiGWaitProcUpdate,           // Proc Update
        itBombHeiGWaitProcMap,              // Proc Map
        itBombHeiSDefaultProcHit,           // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHeiSDefaultProcHit            // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBombHeiAFallProcUpdate,           // Proc Update
        itBombHeiAFallProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHeiSDefaultProcHit            // Proc Damage
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
        itBombHeiFThrowProcUpdate,          // Proc Update
        itBombHeiFThrowProcMap,             // Proc Map
        itBombHeiSDefaultProcHit,           // Proc Hit
        itBombHeiSDefaultProcHit,           // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itBombHeiSDefaultProcHit,           // Proc Set-Off
        itCommonSDefaultProcReflector,      // Proc Reflector
        itBombHeiSDefaultProcHit            // Proc Damage
    },

    // Status 4 (Fighter Throw)
    {
        itBombHeiAFallProcUpdate,           // Proc Update
        itBombHeiFDropProcMap,              // Proc Map
        itBombHeiSDefaultProcHit,           // Proc Hit
        itBombHeiSDefaultProcHit,           // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itBombHeiSDefaultProcHit,           // Proc Set-Off
        itCommonSDefaultProcReflector,      // Proc Reflector
        itBombHeiSDefaultProcHit            // Proc Damage
    },

    // Status 5 (Ground Walk)
    {
        itBombHeiGWalkProcUpdate,           // Proc Update
        itBombHeiGWalkProcMap,              // Proc Map
        itBombHeiMExplodeProcHit,           // Proc Hit
        itBombHeiMExplodeProcHit,           // Proc Shield
        NULL,                               // Proc Hop
        itBombHeiMExplodeProcHit,           // Proc Set-Off
        itBombHeiMExplodeProcHit,           // Proc Reflector
        itBombHeiMExplodeProcHit            // Proc Damage
    },

    // Status 6 (Map Collision Explosion)
    {
        itBombHeiMExplodeProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        itBombHeiMExplodeProcUpdate,        // Proc Hit
        itBombHeiMExplodeProcUpdate,        // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itBombHeiMExplodeProcUpdate,        // Proc Reflector
        itBombHeiMExplodeProcUpdate         // Proc Damage
    },

    // Status 7 (Neutral / Hit Explosion)
    {
        itBombHeiNExplodeProcUpdate,        // Proc Update
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
        itBombHeiGExplodeWaitProcUpdate,    // Proc Update
        itBombHeiGExplodeWaitProcMap,       // Proc Map
        itBombHeiMExplodeProcHit,           // Proc Hit
        itBombHeiMExplodeProcHit,           // Proc Shield
        NULL,                               // Proc Hop
        itBombHeiMExplodeProcHit,           // Proc Set-Off
        itBombHeiMExplodeProcHit,           // Proc Reflector
        itBombHeiMExplodeProcHit            // Proc Damage
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
void itBombHeiSDefaultSetExplode(GObj *item_gobj, u8 unused)
{
    s32 unused;
    DObj *dobj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    efParticle *efpart;

    itBombHeiSDefaultSetHitStatusNone(item_gobj);

    efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f); // WARNING: Actually some sprite struct

    if (efpart != NULL)
    {
        efpart->effect_info->scale.x = ITBOMBHEI_EXPLODE_SCALE;
        efpart->effect_info->scale.y = ITBOMBHEI_EXPLODE_SCALE;
        efpart->effect_info->scale.z = ITBOMBHEI_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    itMainRefreshHit(item_gobj);
    itMainClearOwnerStats(item_gobj);
    itBombHeiNExplodeSetStatus(item_gobj);
}

// 0x80177104
void itBombHeiSDefaultSetWalkDirection(GObj *item_gobj, ub8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Gfx *dll = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkLeftDisplayList);  // (void*)((uintptr_t)((uintptr_t)ip->attributes->model_desc - (uintptr_t)&lITBombHeiDataStart) + &lITBombHeiWalkLeftDisplayList); // Linker thing
    Gfx *dlr = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkRightDisplayList); // (void*)((uintptr_t)((uintptr_t)ip->attributes->model_desc - (uintptr_t)&lITBombHeiDataStart) + &lITBombHeiWalkRightDisplayList); // Linker thing

    if (lr != 0)
    {
        ip->lr = LR_Right;
        ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;

        dobj->display_list = dlr;
    }
    else
    {
        ip->lr = LR_Left;
        ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

        dobj->display_list = dll;
    }
}

// 0x80177180
void itBombHeiSDefaultCheckMakeDustEffect(GObj *item_gobj, u8 override)
{
    s32 unused[4];
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND) || (override != FALSE))
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.y += attributes->objectcoll_bottom;

        efParticle_DustHeavyDouble_MakeEffect(&pos, ip->lr, 1.0F);
    }
}

// 0x80177208
void itBombHeiSDefaultSetHitStatusNormal(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 0x80177218
void itBombHeiSDefaultSetHitStatusNone(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
}

// 0x80177224
sb32 itBombHeiAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80177260
s32 itBombHeiGWalkGetMostPlayersLR(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
    Vec3f *translate;
    s32 lr;
    s32 ret_lr = 0;
    Vec3f dist;
    DObj *item_dobj = DObjGetStruct(item_gobj);
    DObj *fighter_dobj;

    while (fighter_gobj != NULL)
    {
        translate = &item_dobj->translate.vec.f;
            
        fighter_dobj = DObjGetStruct(fighter_gobj);

        lbVector_Vec3fSubtract(&dist, translate, &fighter_dobj->translate.vec.f);

        lr = (dist.x < 0.0F) ? LR_Left : LR_Right;

        fighter_gobj = fighter_gobj->link_next;

        ret_lr += lr;
    }
    return ret_lr; // I assume this is getting the number of players on either side of the Bob-Omb so it starts moving towards the most crowded area
}

// 0x80177304
sb32 itBombHeiGWaitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    void *dll = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkLeftDisplayList); // Linker thing
    s32 lr;

    if (ip->it_multi == ITBOMBHEI_WALK_WAIT)
    {
        lr = itBombHeiGWalkGetMostPlayersLR(item_gobj);

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

            dobj->display_list = dll;

            ip->lr = LR_Left;
        }
        itBombHeiGWalkSetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801773F4
sb32 itBombHeiGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBombHeiAFallSetStatus);

    return FALSE;
}

// 0x8017741C
sb32 itBombHeiSDefaultProcHit(GObj *item_gobj)
{
    itBombHeiSDefaultClearVelSetExplode(item_gobj, TRUE);

    return FALSE;
}

// 0x80177440
sb32 itBombHeiAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itBombHeiGWaitSetStatus);
}

// 0x80177474
void itBombHeiGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_GWait);
}

// 0x801774B0
void itBombHeiAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_AFall);
}

// 0x801774FC
void itBombHeiFHoldSetStatus(GObj *item_gobj)
{
    itBombHeiSDefaultSetHitStatusNone(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_FHold);
}

// 0x80177530
sb32 itBombHeiFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017756C
sb32 itBombHeiFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapProcAll(item_gobj, itBombHeiMExplodeSetStatus);
}

// 0x80177590
void itBombHeiFThrowSetStatus(GObj *item_gobj)
{
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_FThrow);
}

// 0x801775C4
sb32 itBombHeiFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapProcAll(item_gobj, itBombHeiMExplodeSetStatus);
}

// 0x801775E8
void itBombHeiFDropSetStatus(GObj *item_gobj)
{
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_FDrop);
}

// 0x8017761C
void itBombHeiGWalkUpdateEffect(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.bombhei.smoke_delay == 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.y += 120.0F;

        efParticle_DustLight_MakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;
    }
    ip->item_vars.bombhei.smoke_delay--;
}

// 0x801776A0
sb32 itBombHeiGWalkProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos;

    itBombHeiGWalkUpdateEffect(item_gobj);

    if (mpCollision_CheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LR_Left)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (dobj->translate.vec.f.x - attributes->objectcoll_width))
            {
                itBombHeiSDefaultSetWalkDirection(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (dobj->translate.vec.f.x + attributes->objectcoll_width))
            {
                itBombHeiSDefaultSetWalkDirection(item_gobj, 0);
            }
        }
    }
    if (ip->it_multi == ITBOMBHEI_FLASH_WAIT)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

        itBombHeiGExplodeWaitSetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801777D8
sb32 itBombHeiGWalkProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapCheckLRWallProcGround(item_gobj, itBombHeiFDropSetStatus);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_LWALL)
    {
        itBombHeiSDefaultSetWalkDirection(item_gobj, 0);
    }
    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_RWALL)
    {
        itBombHeiSDefaultSetWalkDirection(item_gobj, 1);
    }
    return FALSE;
}

// 0x80177848
void itBombHeiGWalkInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    void *matanim;
    s32 unused;
    Vec3f pos;

    ip->is_allow_pickup = FALSE;

    ip->it_multi = 0;

    ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;

    itMainRefreshHit(item_gobj);

    matanim = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkMatAnimJoint); // ((uintptr_t)ip->attributes->model_desc - (uintptr_t)&lITBombHeiDataStart) + &lITBombHeiWalkMatAnimJoint; // Linker thing

    omAddMObjAnimAll(dobj->mobj, matanim, 0.0F); // Set texture animation?

    func_8000DF34(item_gobj);

    if (mpCollision_CheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LR_Left)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (dobj->translate.vec.f.x - attributes->objectcoll_width))
            {
                itBombHeiSDefaultSetWalkDirection(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (dobj->translate.vec.f.x + attributes->objectcoll_width))
            {
                itBombHeiSDefaultSetWalkDirection(item_gobj, 0);
            }
        }
    }
    itMainClearOwnerStats(item_gobj);

    func_800269C0(alSound_SFX_BombHeiFuse);
}

// 0x801779A8
void itBombHeiGWalkSetStatus(GObj *item_gobj)
{
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itBombHeiGWalkInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_GWalk);
}

// 0x801779E4
void itBombHeiSDefaultClearVelSetExplode(GObj *item_gobj, u8 unused)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    itBombHeiSDefaultSetExplode(item_gobj, unused);

    func_800269C0(alSound_SFX_ExplodeL);
}

// 0x80177A24
void itBombHeiSDefaultUpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(dITBombHeiItemDesc, lITBombHeiHitboxEvents); // Linker thing

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
sb32 itBombHeiMExplodeProcUpdate(GObj *item_gobj)
{
    itBombHeiSDefaultCheckMakeDustEffect(item_gobj, FALSE);
    itBombHeiSDefaultClearVelSetExplode(item_gobj, TRUE);

    return FALSE;
}

// 0x80177B44
sb32 itBombHeiMExplodeProcHit(GObj *item_gobj)
{
    itBombHeiSDefaultCheckMakeDustEffect(item_gobj, TRUE);
    itBombHeiSDefaultClearVelSetExplode(item_gobj, FALSE);

    return FALSE;
}

// 0x80177B78
void itBombHeiMExplodeSetStatus(GObj *item_gobj)
{
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_MExplode);
}

// 0x80177BAC
void itBombHeiNExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;

    ip->item_event_index = 0;

    itBombHeiSDefaultUpdateHitEvent(item_gobj);
}

// 0x80177BE8
sb32 itBombHeiNExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHeiSDefaultUpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITBOMBHEI_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80177C30
void itBombHeiNExplodeSetStatus(GObj *item_gobj)
{
    itBombHeiNExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_NExplode);
}

// 0x80177C64
sb32 itBombHeiGExplodeWaitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHeiGWalkUpdateEffect(item_gobj);

    if (ip->it_multi == ITBOMBHEI_EXPLODE_WAIT)
    {
        itBombHeiSDefaultCheckMakeDustEffect(item_gobj, TRUE);
        itBombHeiSDefaultClearVelSetExplode(item_gobj, 0);
        func_800269C0(alSound_SFX_ExplodeL);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x80177D00
sb32 itBombHeiGExplodeWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBombHeiFDropSetStatus);

    return FALSE;
}

// 0x80177D28
void itBombHeiGExplodeWaitInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    dobj->mobj->actor.p = NULL;

    itMainCheckSetColAnimID(item_gobj, ITBOMBHEI_EXPLODE_COLANIM_ID, ITBOMBHEI_EXPLODE_COLANIM_DURATION);
}

// 0x80177D60
void itBombHeiGExplodeWaitSetStatus(GObj *item_gobj)
{
    itBombHeiSDefaultSetHitStatusNormal(item_gobj);
    itBombHeiGExplodeWaitInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDesc, itStatus_BombHei_GExplodeWait);
}

// 0x80177D9C
GObj* itBombHeiMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITBombHeiItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;
    Vec3f translate;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        translate = dobj->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        itMainClearOwnerStats(item_gobj);

        omAddOMMtxForDObjFixed(dobj, 0x2E, 0);

        dobj->translate.vec.f = translate;

        ip->is_unused_item_bool = TRUE;

        dobj->rotate.vec.f.z = 0.0F;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}