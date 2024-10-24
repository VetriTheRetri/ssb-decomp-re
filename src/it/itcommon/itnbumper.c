#include <it/item.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITNBumperItemAttributes;   // 0x0000069C
extern intptr_t lITNBumperDataStart;        // 0x00007648
extern intptr_t lITNBumperWaitMObjSub;      // 0x00007A38
extern intptr_t lITNBumperWaitDisplayList;  // 0x00007AF8

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018A690
itCreateDesc dITNBumperItemDesc =
{
    nITKindNBumper,                         // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITNBumperItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTra,                    // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itNBumperFallProcUpdate,                // Proc Update
    itNBumperFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018A6C4
itStatusDesc dITNBumperStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itNBumperWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itNBumperFallProcUpdate,            // Proc Update
        itNBumperFallProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
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
        itNBumperThrownProcUpdate,          // Proc Update
        itNBumperThrownProcMap,             // Proc Map
        itNBumperThrownProcHit,             // Proc Hit
        itNBumperThrownProcShield,          // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperThrownProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itNBumperThrownProcUpdate,          // Proc Update
        itNBumperThrownProcMap,             // Proc Map
        itNBumperThrownProcHit,             // Proc Hit
        itNBumperThrownProcShield,          // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperThrownProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Active Wait)
    {
        itNBumperAttachedProcUpdate,        // Proc Update
        itNBumperAttachedProcMap,           // Proc Map
        itNBumperAttachedProcHit,           // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperAttachedProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Airborne after Ground Active Wait)
    {
        itNBumperHitAirProcUpdate,          // Proc Update
        itNBumperThrownProcMap,             // Proc Map
        itNBumperThrownProcHit,             // Proc Hit
        itNBumperThrownProcShield,          // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperThrownProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 7 (Despawn)
    {
        itNBumperGDisappearProcUpdate,      // Proc Update
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

enum itNBumperStatus
{
    nITNBumperStatusWait,                   // Ground neutral
    nITNBumperStatusFall,                   // Airborne neutral
    nITNBumperStatusHold,                   // Fighter hold
    nITNBumperStatusThrown,                 // Fighter throw
    nITNBumperStatusDropped,                // Fighter drop
    nITNBumperStatusAttached,                // Ground active
    nITNBumperStatusHitAir,                   // Airborne hit
    nITNBumperStatusGDisappear,             // Ground despawn
    nITNBumperStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017B430
sb32 itNBumperFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBUMPER_GRAVITY_NORMAL, ITBUMPER_TVEL);

    if (ip->it_multi != 0)
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = (2.0F - (10 - ip->it_multi) * 0.1F);

        ip->it_multi--;
    }
    else dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 1.0F;
    
    if (!ip->item_vars.bumper.damage_all_delay)
    {
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017B520
sb32 itNBumperWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itNBumperFallSetStatus);

    return FALSE;
}

// 0x8017B548
sb32 itNBumperFallProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITBUMPER_MAP_REBOUND_COMMON, ITBUMPER_MAP_REBOUND_GROUND, itNBumperWaitSetStatus);
}

// 0x8017B57C
sb32 itNBumperThrownProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.y = 2.0F;
    dobj->scale.vec.f.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    dobj->mobj->palette_id = 1.0F;

    ip->phys_info.vel_air.x = ITBUMPER_REBOUND_AIR_X * ip->lr_attack;
    ip->phys_info.vel_air.y = ITBUMPER_REBOUND_AIR_Y;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    itNBumperHitAirSetStatus(item_gobj);

    return FALSE;
}

// 0x8017B600
void itNBumperWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusWait);
}

// 0x8017B634
void itNBumperFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusFall);
}

// 0x8017B678
void itNBumperHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusHold);
}

// 0x8017B6A0
sb32 itNBumperThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBUMPER_GRAVITY_NORMAL, ITBUMPER_TVEL);

    if (!(ip->item_vars.bumper.damage_all_delay))
    {
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017B720
sb32 itNBumperThrownProcMap(GObj *item_gobj)
{
    return itMapCheckMapReboundProcGround(item_gobj, 0.8F, itNBumperAttachedSetStatus);
}

// 0x8017B74C
sb32 itNBumperThrownProcShield(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);
    itMainClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017B778
sb32 itNBumperThrownProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    if ((ip->phys_info.vel_air.x * fp->lr) < 0.0F)
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
    }
    itMainClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017B7DC
void itNBumperThrownSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    ip->coll_data.objcoll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.objcoll.bottom = -ITBUMPER_COLL_SIZE;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusThrown);
}

// 0x8017B828
void itNBumperDroppedSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    ip->coll_data.objcoll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.objcoll.bottom = -ITBUMPER_COLL_SIZE;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusDropped);
}

// 0x8017B874
void itNBumperAttachedSetModelYaw(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    Vec3f ground_angle;
    DObj *dobj = DObjGetStruct(item_gobj);

    ground_angle = ip->coll_data.ground_angle;

    ip->attach_line_id = ip->coll_data.ground_line_id;

    dobj->rotate.vec.f.z = atan2f(ground_angle.y, ground_angle.x) - F_CLC_DTOR32(90.0F); // HALF_PI32
}

// 0x8017B8DC
void itNBumperAttachedInitItemVars(GObj *item_gobj)
{
    s32 unused[2];
    DObj *dobj;
    itStruct *ip;
    MObjSub *mobjsub;
    Gfx *dl;

    ip = itGetStruct(item_gobj);
    dobj = DObjGetStruct(item_gobj);

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    dl = itGetPData(ip, lITNBumperDataStart, lITNBumperWaitDisplayList); // (uintptr_t)((uintptr_t)ip->attributes->dobj_setup - (intptr_t)&lITNBumperDataStart) + (intptr_t)&lITNBumperWaitDisplayList; Linker thing

    dobj->display_list = dl;

    mobjsub = itGetPData(ip, lITNBumperDataStart, lITNBumperWaitMObjSub); // ((uintptr_t)((uintptr_t)ip->attributes->dobj_setup - (intptr_t)&lITNBumperDataStart) + (intptr_t)&lITNBumperWaitMObjSub); // Linker thing

    gcRemoveMObjAll(dobj);
    gcAddMObjForDObj(dobj, mobjsub);

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 1.0F;

    ip->coll_data.objcoll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.objcoll.bottom = -ITBUMPER_COLL_SIZE;

    itNBumperAttachedSetModelYaw(item_gobj);

    ip->is_attach_surface = TRUE;

    ip->lifetime = ITBUMPER_LIFETIME;

    itMainClearOwnerStats(item_gobj);
}

// 0x8017B9C8
sb32 itNBumperAttachedProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    dobj->mobj->palette_id = 1.0F;

    ip->lr = -ip->lr_attack;

    ip->phys_info.vel_air.x = ip->lr_attack * ITBUMPER_REBOUND_VEL_X;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    return FALSE;
}

// 0x8017BA2C
sb32 itNBumperAttachedProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f edge_pos;

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (dobj->mobj->palette_id == 1.0F))
    {
        dobj->mobj->palette_id = 0.0F;
    }
    else ip->item_vars.bumper.hit_anim_length--;

    if (mpCollisionCheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == nGMFacingL)
        {
            mpCollisionGetLREdgeLeft(ip->coll_data.ground_line_id, &edge_pos);

            if (edge_pos.x >= (dobj->translate.vec.f.x - attributes->objcoll_width))
            {
                ip->phys_info.vel_air.x = 0.0F;
            }
        }
        else
        {
            mpCollisionGetLREdgeRight(ip->coll_data.ground_line_id, &edge_pos);

            if (edge_pos.x <= (dobj->translate.vec.f.x + attributes->objcoll_width))
            {
                ip->phys_info.vel_air.x = 0.0F;
            }
        }
    }
    if (ip->it_multi < ITBUMPER_RESETVEL_TIMER)
    {
        ip->phys_info.vel_air.x = 0.0F;
    }
    if (ip->it_multi != 0)
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.z = 2.0F - ((10 - ip->it_multi) * 0.1F);

        ip->it_multi--;
    }
    else dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 1.0F;
    
    if (ip->lifetime == 0)
    {
        itNBumperGDisappearSetStatus(item_gobj);
    }
    ip->lifetime--;

    return FALSE;
}

// 0x8017BBFC
sb32 itNBumperAttachedProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (itMapCheckLRWallProcGround(item_gobj, itNBumperDroppedSetStatus) != FALSE)
    {
        if (mpCollisionCheckExistLineID(ip->attach_line_id) == FALSE)
        {
            ip->is_attach_surface = FALSE;

            itNBumperDroppedSetStatus(item_gobj);

            joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

            joint->mobj->palette_id = 0.0F;
        }
        else if (ip->it_multi == 0)
        {
            itNBumperAttachedSetModelYaw(item_gobj);
        }
    }
    return FALSE;
}

// 0x8017BCC0
sb32 itNBumperAttachedProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = 3;

    dobj->mobj->palette_id = 1.0F;

    ip->phys_info.vel_air.x = (-fp->lr * ITBUMPER_REBOUND_VEL_X);

    ip->lr = fp->lr;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    itMainClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017BD4C
void itNBumperAttachedSetStatus(GObj *item_gobj)
{
    itNBumperAttachedInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusAttached);
}

// 0x8017BD80
sb32 itNBumperHitAirProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (dobj->mobj->palette_id == 1.0F))
    {
        dobj->mobj->palette_id = 0.0F;
    }
    else ip->item_vars.bumper.hit_anim_length--;

    itMainApplyGravityClampTVel(ip, ITBUMPER_GRAVITY_HIT, ITBUMPER_TVEL);

    if (ip->it_multi != 0)
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = (2.0F - (10 - ip->it_multi) * 0.1F);

        ip->it_multi--;
    }
    else dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 1;
    
    if (!ip->item_vars.bumper.damage_all_delay)
    {
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    return FALSE;
}

// 0x8017BEA0
void itNBumperHitAirSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusHitAir);
}

// 0x8017BED4
sb32 itNBumperGDisappearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->lifetime == 0)
    {
        return TRUE;
    }
    else if ((ip->lifetime % 2) != 0)
    {
        DObj *dobj = DObjGetStruct(item_gobj);

        dobj->flags ^= DOBJ_FLAG_HIDDEN;
    }
    ip->lifetime--;

    return FALSE;
}

// 0x8017BF1C
void itNBumperGDisappearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->mobj->palette_id = 0;

    dobj->scale.vec.f.x = 1.0F;
    dobj->scale.vec.f.y = 1.0F;
    dobj->scale.vec.f.z = 1.0F;

    ip->lifetime = ITBUMPER_DESPAWN_TIMER;

    dobj->flags = DOBJ_FLAG_NONE;

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDescs, nITNBumperStatusGDisappear);
}

// 0x8017BF8C
GObj* itNBumperMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITNBumperItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = dobj->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->item_hit.interact_mask = GMHITCOLLISION_FLAG_FIGHTER;

        ip->item_hit.can_rehit_shield = TRUE;

        dobj->mobj->palette_id = 0.0F;

        gcAddGCMatrixForDObjFixed(dobj, 0x2E, 0);

        dobj->translate.vec.f = translate;

        dobj->rotate.vec.f.z = 0.0F;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
