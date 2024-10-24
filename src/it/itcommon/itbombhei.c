#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITBombHeiItemAttributes;       // 0x00000424
extern intptr_t lITBombHeiHitEvents;            // 0x0000046C
extern intptr_t lITBombHeiDataStart;            // 0x000033F8
extern intptr_t lITBombHeiWalkRightDisplayList; // 0x00003310
extern intptr_t lITBombHeiWalkLeftDisplayList;  // 0x000034C0         
extern intptr_t lITBombHeiWalkMatAnimJoint;     // 0x000035B8

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189F90 - unused?
intptr_t dITBombHeiDisplayListOffsets[/* */] = 
{
    &lITBombHeiWalkRightDisplayList, 
    &lITBombHeiWalkLeftDisplayList
};

// 0x80189F98
itCreateDesc dITBombHeiItemDesc =
{
    nITKindBombHei,                         // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITBombHeiItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTra,                    // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itBombHeiFallProcUpdate,                // Proc Update
    itBombHeiFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80189FCC
itStatusDesc dITBombHeiStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        itBombHeiWaitProcUpdate,            // Proc Update
        itBombHeiWaitProcMap,               // Proc Map
        itBombHeiCommonProcHit,             // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHeiCommonProcHit              // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBombHeiFallProcUpdate,            // Proc Update
        itBombHeiFallProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHeiCommonProcHit              // Proc Damage
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
        itBombHeiThrownProcUpdate,          // Proc Update
        itBombHeiThrownProcMap,             // Proc Map
        itBombHeiCommonProcHit,             // Proc Hit
        itBombHeiCommonProcHit,             // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itBombHeiCommonProcHit,             // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        itBombHeiCommonProcHit              // Proc Damage
    },

    // Status 4 (Fighter Throw)
    {
        itBombHeiFallProcUpdate,            // Proc Update
        itBombHeiDroppedProcMap,            // Proc Map
        itBombHeiCommonProcHit,             // Proc Hit
        itBombHeiCommonProcHit,             // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itBombHeiCommonProcHit,             // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        itBombHeiCommonProcHit              // Proc Damage
    },

    // Status 5 (Ground Walk)
    {
        itBombHeiWalkProcUpdate,            // Proc Update
        itBombHeiWalkProcMap,               // Proc Map
        itBombHeiExplodeCommonProcHit,      // Proc Hit
        itBombHeiExplodeCommonProcHit,      // Proc Shield
        NULL,                               // Proc Hop
        itBombHeiExplodeCommonProcHit,      // Proc Set-Off
        itBombHeiExplodeCommonProcHit,      // Proc Reflector
        itBombHeiExplodeCommonProcHit       // Proc Damage
    },

    // Status 6 (Map Collision Explosion)
    {
        itBombHeiExplodeMapProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        itBombHeiExplodeMapProcUpdate,      // Proc Hit
        itBombHeiExplodeMapProcUpdate,      // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itBombHeiExplodeMapProcUpdate,      // Proc Reflector
        itBombHeiExplodeMapProcUpdate       // Proc Damage
    },

    // Status 7 (Neutral / Hit Explosion)
    {
        itBombHeiExplodeProcUpdate,         // Proc Update
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
        itBombHeiExplodeWaitProcUpdate,     // Proc Update
        itBombHeiExplodeWaitProcMap,        // Proc Map
        itBombHeiExplodeCommonProcHit,      // Proc Hit
        itBombHeiExplodeCommonProcHit,      // Proc Shield
        NULL,                               // Proc Hop
        itBombHeiExplodeCommonProcHit,      // Proc Set-Off
        itBombHeiExplodeCommonProcHit,      // Proc Reflector
        itBombHeiExplodeCommonProcHit       // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itBombHeiStatus
{
    nITBombHeiStatusWait,
    nITBombHeiStatusFall,
    nITBombHeiStatusHold,
    nITBombHeiStatusThrown,
    nITBombHeiStatusDropped,
    nITBombHeiStatusWalk,
    nITBombHeiStatusExplodeMap,             // Explode on map collision
    nITBombHeiStatusExplode,               // Neutral explosion
    nITBombHeiStatusExplodeWait,            // Stall until explosion
    nITBombHeiStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80177060
void itBombHeiCommonSetExplode(GObj *item_gobj, u8 unused_arg)
{
    s32 unused;
    DObj *dobj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    lbParticle *ptcl;

    itBombHeiCommonSetHitStatusNone(item_gobj);

    ptcl = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f); // WARNING: Actually some sprite struct

    if (ptcl != NULL)
    {
        ptcl->tfrm->scale.x = ITBOMBHEI_EXPLODE_SCALE;
        ptcl->tfrm->scale.y = ITBOMBHEI_EXPLODE_SCALE;
        ptcl->tfrm->scale.z = ITBOMBHEI_EXPLODE_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_HIDDEN;

    ip->item_hit.hit_sfx = nSYAudioFGMExplodeL;

    itMainRefreshHit(item_gobj);
    itMainClearOwnerStats(item_gobj);
    itBombHeiExplodeSetStatus(item_gobj);
}

// 0x80177104
void itBombHeiCommonSetWalkLR(GObj *item_gobj, ub8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Gfx *dll = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkLeftDisplayList);  // (void*)((uintptr_t)((uintptr_t)ip->attributes->dobj_setup - (uintptr_t)&lITBombHeiDataStart) + &lITBombHeiWalkLeftDisplayList); // Linker thing
    Gfx *dlr = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkRightDisplayList); // (void*)((uintptr_t)((uintptr_t)ip->attributes->dobj_setup - (uintptr_t)&lITBombHeiDataStart) + &lITBombHeiWalkRightDisplayList); // Linker thing

    if (lr != 0)
    {
        ip->lr = nGMFacingR;
        ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;

        dobj->display_list = dlr;
    }
    else
    {
        ip->lr = nGMFacingL;
        ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

        dobj->display_list = dll;
    }
}

// 0x80177180
void itBombHeiCommonCheckMakeDustEffect(GObj *item_gobj, u8 override)
{
    s32 unused[4];
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->coll_data.coll_mask_current & MPCOLL_FLAG_GROUND) || (override != FALSE))
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.y += attributes->objcoll_bottom;

        efManagerDustHeavyDoubleMakeEffect(&pos, ip->lr, 1.0F);
    }
}

// 0x80177208
void itBombHeiCommonSetHitStatusNormal(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = nGMHitStatusNormal;
}

// 0x80177218
void itBombHeiCommonSetHitStatusNone(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = nGMHitStatusNone;
}

// 0x80177224
sb32 itBombHeiFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80177260
s32 itBombHeiWalkGetLR(GObj *item_gobj)
{
    GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];
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

        syVectorDiff3D(&dist, translate, &fighter_dobj->translate.vec.f);

        lr = (dist.x < 0.0F) ? nGMFacingL : nGMFacingR;

        fighter_gobj = fighter_gobj->link_next;

        ret_lr += lr;
    }
    return ret_lr; // I assume this is getting the number of players on either side of the Bob-Omb so it starts moving towards the most crowded area
}

// 0x80177304
sb32 itBombHeiWaitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    void *dll = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkLeftDisplayList); // Linker thing
    s32 lr;

    if (ip->it_multi == ITBOMBHEI_WALK_WAIT)
    {
        lr = itBombHeiWalkGetLR(item_gobj);

        if (lr == nGMFacingC)
        {
            lr = mtTrigGetRandomIntRange(2) - 1;
        }
        if (lr < 0)
        {
            ip->lr = nGMFacingR;
            ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;
        }
        else
        {
            ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

            dobj->display_list = dll;

            ip->lr = nGMFacingL;
        }
        itBombHeiWalkSetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801773F4
sb32 itBombHeiWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBombHeiFallSetStatus);

    return FALSE;
}

// 0x8017741C
sb32 itBombHeiCommonProcHit(GObj *item_gobj)
{
    itBombHeiCommonClearVelSetExplode(item_gobj, TRUE);

    return FALSE;
}

// 0x80177440
sb32 itBombHeiFallProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITBOMBHEI_MAP_REBOUND_COMMON, ITBOMBHEI_MAP_REBOUND_GROUND, itBombHeiWaitSetStatus);
}

// 0x80177474
void itBombHeiWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusWait);
}

// 0x801774B0
void itBombHeiFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusFall);
}

// 0x801774FC
void itBombHeiHoldSetStatus(GObj *item_gobj)
{
    itBombHeiCommonSetHitStatusNone(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusHold);
}

// 0x80177530
sb32 itBombHeiThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017756C
sb32 itBombHeiThrownProcMap(GObj *item_gobj)
{
    return itMapCheckMapProcAll(item_gobj, itBombHeiExplodeMapSetStatus);
}

// 0x80177590
void itBombHeiThrownSetStatus(GObj *item_gobj)
{
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusThrown);
}

// 0x801775C4
sb32 itBombHeiDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckMapProcAll(item_gobj, itBombHeiExplodeMapSetStatus);
}

// 0x801775E8
void itBombHeiDroppedSetStatus(GObj *item_gobj)
{
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusDropped);
}

// 0x8017761C
void itBombHeiWalkUpdateEffect(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.bombhei.smoke_delay == 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.y += 120.0F;

        efManagerDustLightMakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;
    }
    ip->item_vars.bombhei.smoke_delay--;
}

// 0x801776A0
sb32 itBombHeiWalkProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos;

    itBombHeiWalkUpdateEffect(item_gobj);

    if (mpCollisionCheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == nGMFacingL)
        {
            mpCollisionGetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (dobj->translate.vec.f.x - attributes->objcoll_width))
            {
                itBombHeiCommonSetWalkLR(item_gobj, 1);
            }
        }
        else
        {
            mpCollisionGetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (dobj->translate.vec.f.x + attributes->objcoll_width))
            {
                itBombHeiCommonSetWalkLR(item_gobj, 0);
            }
        }
    }
    if (ip->it_multi == ITBOMBHEI_FLASH_WAIT)
    {
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

        itBombHeiExplodeWaitSetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801777D8
sb32 itBombHeiWalkProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapCheckLRWallProcGround(item_gobj, itBombHeiDroppedSetStatus);

    if (ip->coll_data.coll_mask_current & MPCOLL_FLAG_LWALL)
    {
        itBombHeiCommonSetWalkLR(item_gobj, 0);
    }
    if (ip->coll_data.coll_mask_current & MPCOLL_FLAG_RWALL)
    {
        itBombHeiCommonSetWalkLR(item_gobj, 1);
    }
    return FALSE;
}

// 0x80177848
void itBombHeiWalkInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    void *matanim_joint;
    s32 unused;
    Vec3f pos;

    ip->is_allow_pickup = FALSE;

    ip->it_multi = 0;

    ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;

    itMainRefreshHit(item_gobj);

    matanim_joint = itGetPData(ip, lITBombHeiDataStart, lITBombHeiWalkMatAnimJoint); // ((uintptr_t)ip->attributes->dobj_setup - (uintptr_t)&lITBombHeiDataStart) + &lITBombHeiWalkMatAnimJoint; // Linker thing

    gcAddMObjMatAnimJoint(dobj->mobj, matanim_joint, 0.0F); // Set texture animation?

    gcPlayAnimAll(item_gobj);

    if (mpCollisionCheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == nGMFacingL)
        {
            mpCollisionGetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (dobj->translate.vec.f.x - attributes->objcoll_width))
            {
                itBombHeiCommonSetWalkLR(item_gobj, 1);
            }
        }
        else
        {
            mpCollisionGetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (dobj->translate.vec.f.x + attributes->objcoll_width))
            {
                itBombHeiCommonSetWalkLR(item_gobj, 0);
            }
        }
    }
    itMainClearOwnerStats(item_gobj);

    func_800269C0_275C0(nSYAudioFGMBombHeiFuse);
}

// 0x801779A8
void itBombHeiWalkSetStatus(GObj *item_gobj)
{
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itBombHeiWalkInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusWalk);
}

// 0x801779E4
void itBombHeiCommonClearVelSetExplode(GObj *item_gobj, u8 unused)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0.0F;

    itBombHeiCommonSetExplode(item_gobj, unused);

    func_800269C0_275C0(nSYAudioFGMExplodeL);
}

// 0x80177A24
void itBombHeiCommonUpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(dITBombHeiItemDesc, lITBombHeiHitEvents); // Linker thing

    if (ip->it_multi == ev[ip->item_event_id].timer)
    {
        ip->item_hit.angle = ev[ip->item_event_id].angle;
        ip->item_hit.damage = ev[ip->item_event_id].damage;
        ip->item_hit.size = ev[ip->item_event_id].size;

        ip->item_hit.can_rehit_item = TRUE;
        ip->item_hit.can_hop = FALSE;
        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.can_setoff = FALSE;

        ip->item_hit.element = nGMHitElementFire;

        ip->item_event_id++;

        if (ip->item_event_id == 4)
        {
            ip->item_event_id = 3;
        }
    }
}

// 0x80177B10
sb32 itBombHeiExplodeMapProcUpdate(GObj *item_gobj)
{
    itBombHeiCommonCheckMakeDustEffect(item_gobj, FALSE);
    itBombHeiCommonClearVelSetExplode(item_gobj, TRUE);

    return FALSE;
}

// 0x80177B44
sb32 itBombHeiExplodeCommonProcHit(GObj *item_gobj)
{
    itBombHeiCommonCheckMakeDustEffect(item_gobj, TRUE);
    itBombHeiCommonClearVelSetExplode(item_gobj, FALSE);

    return FALSE;
}

// 0x80177B78
void itBombHeiExplodeMapSetStatus(GObj *item_gobj)
{
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusExplodeMap);
}

// 0x80177BAC
void itBombHeiExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;

    ip->item_event_id = 0;

    itBombHeiCommonUpdateHitEvent(item_gobj);
}

// 0x80177BE8
sb32 itBombHeiExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHeiCommonUpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITBOMBHEI_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80177C30
void itBombHeiExplodeSetStatus(GObj *item_gobj)
{
    itBombHeiExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusExplode);
}

// 0x80177C64
sb32 itBombHeiExplodeWaitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHeiWalkUpdateEffect(item_gobj);

    if (ip->it_multi == ITBOMBHEI_EXPLODE_WAIT)
    {
        itBombHeiCommonCheckMakeDustEffect(item_gobj, TRUE);
        itBombHeiCommonClearVelSetExplode(item_gobj, 0);
        func_800269C0_275C0(nSYAudioFGMExplodeL);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x80177D00
sb32 itBombHeiExplodeWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBombHeiDroppedSetStatus);

    return FALSE;
}

// 0x80177D28
void itBombHeiExplodeWaitInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    dobj->mobj->matanim_joint.event32 = NULL;

    itMainCheckSetColAnimID(item_gobj, ITBOMBHEI_EXPLODE_COLANIM_ID, ITBOMBHEI_EXPLODE_COLANIM_DURATION);
}

// 0x80177D60
void itBombHeiExplodeWaitSetStatus(GObj *item_gobj)
{
    itBombHeiCommonSetHitStatusNormal(item_gobj);
    itBombHeiExplodeWaitInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBombHeiStatusDescs, nITBombHeiStatusExplodeWait);
}

// 0x80177D9C
GObj* itBombHeiMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITBombHeiItemDesc, pos, vel, flags);
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

        gcAddGCMatrixForDObjFixed(dobj, 0x2E, 0);

        dobj->translate.vec.f = translate;

        ip->is_unused_item_bool = TRUE;

        dobj->rotate.vec.f.z = 0.0F;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
