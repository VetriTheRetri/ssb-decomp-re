#include <it/item.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITNBumperItemAttributes;   // 0x0000069C
extern intptr_t lITNBumperDataStart;        // 0x00007648
extern intptr_t lITNBumperGWaitMObjSub;     // 0x00007A38
extern intptr_t lITNBumperGWaitDisplayList; // 0x00007AF8

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018A690
itCreateDesc dITNBumperItemDesc =
{
    It_Kind_NBumper,                        // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITNBumperItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itNBumperAFallProcUpdate,               // Proc Update
    itNBumperAFallProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018A6C4
itStatusDesc dITNBumperStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itNBumperGWaitProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itNBumperAFallProcUpdate,           // Proc Update
        itNBumperAFallProcMap,              // Proc Map
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
        itNBumperFThrowProcUpdate,          // Proc Update
        itNBumperFThrowProcMap,             // Proc Map
        itNBumperFThrowProcHit,             // Proc Hit
        itNBumperFThrowProcShield,          // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperFThrowProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itNBumperFThrowProcUpdate,          // Proc Update
        itNBumperFThrowProcMap,             // Proc Map
        itNBumperFThrowProcHit,             // Proc Hit
        itNBumperFThrowProcShield,          // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperFThrowProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Active Wait)
    {
        itNBumperGWaitHitProcUpdate,        // Proc Update
        itNBumperGWaitHitProcMap,           // Proc Map
        itNBumperGWaitHitProcHit,           // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperGWaitHitProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Airborne after Ground Active Wait)
    {
        itNBumperAHitProcUpdate,            // Proc Update
        itNBumperFThrowProcMap,             // Proc Map
        itNBumperFThrowProcHit,             // Proc Hit
        itNBumperFThrowProcShield,          // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumperFThrowProcReflector,       // Proc Reflector
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
    itStatus_NBumper_GWait,                 // Ground neutral
    itStatus_NBumper_AFall,                 // Airborne neutral
    itStatus_NBumper_FHold,                 // Fighter hold
    itStatus_NBumper_FThrow,                // Fighter throw
    itStatus_NBumper_FDrop,                 // Fighter drop
    itStatus_NBumper_GWaitHit,              // Ground active
    itStatus_NBumper_AHit,                  // Airborne hit
    itStatus_NBumper_GDisappear,            // Ground despawn
    itStatus_NBumper_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017B430
sb32 itNBumperAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITBUMPER_GRAVITY_NORMAL, ITBUMPER_T_VEL);

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
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017B520
sb32 itNBumperGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itNBumperAFallSetStatus);

    return FALSE;
}

// 0x8017B548
sb32 itNBumperAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.8F, 0.8F, itNBumperGWaitSetStatus);
}

// 0x8017B57C
sb32 itNBumperFThrowProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.y = 2.0F;
    dobj->scale.vec.f.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    dobj->mobj->image_frame = 1.0F;

    ip->phys_info.vel_air.x = ITBUMPER_REBOUND_AIR_X * ip->lr_attack;
    ip->phys_info.vel_air.y = ITBUMPER_REBOUND_AIR_Y;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    itNBumperAHitSetStatus(item_gobj);

    return FALSE;
}

// 0x8017B600
void itNBumperGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_GWait);
}

// 0x8017B634
void itNBumperAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_AFall);
}

// 0x8017B678
void itNBumperFHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_FHold);
}

// 0x8017B6A0
sb32 itNBumperFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITBUMPER_GRAVITY_NORMAL, ITBUMPER_T_VEL);

    if (!(ip->item_vars.bumper.damage_all_delay))
    {
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017B720
sb32 itNBumperFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapReboundProcGround(item_gobj, 0.8F, itNBumperGWaitHitSetStatus);
}

// 0x8017B74C
sb32 itNBumperFThrowProcShield(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);
    itMainClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017B778
sb32 itNBumperFThrowProcReflector(GObj *item_gobj)
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
void itNBumperFThrowSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    ip->coll_data.object_coll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.object_coll.bottom = -ITBUMPER_COLL_SIZE;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_FThrow);
}

// 0x8017B828
void itNBumperFDropSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    ip->coll_data.object_coll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.object_coll.bottom = -ITBUMPER_COLL_SIZE;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_FDrop);
}

// 0x8017B874
void itNBumperGWaitHitSetModelYaw(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    Vec3f ground_angle;
    DObj *dobj = DObjGetStruct(item_gobj);

    ground_angle = ip->coll_data.ground_angle;

    ip->attach_line_id = ip->coll_data.ground_line_id;

    dobj->rotate.vec.f.z = atan2f(ground_angle.y, ground_angle.x) - F_DEG_TO_RAD(90.0F); // HALF_PI32
}

// 0x8017B8DC
void itNBumperGWaitHitInitItemVars(GObj *item_gobj)
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

    dl = itGetPData(ip, lITNBumperDataStart, lITNBumperGWaitDisplayList); // (uintptr_t)((uintptr_t)ip->attributes->model_desc - (intptr_t)&lITNBumperDataStart) + (intptr_t)&lITNBumperGWaitDisplayList; Linker thing

    dobj->display_list = dl;

    mobjsub = itGetPData(ip, lITNBumperDataStart, lITNBumperGWaitMObjSub); // ((uintptr_t)((uintptr_t)ip->attributes->model_desc - (intptr_t)&lITNBumperDataStart) + (intptr_t)&lITNBumperGWaitMObjSub); // Linker thing

    omRemoveMObjFromDObj(dobj);
    omAddMObjForDObj(dobj, mobjsub);

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 1.0F;

    ip->coll_data.object_coll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.object_coll.bottom = -ITBUMPER_COLL_SIZE;

    itNBumperGWaitHitSetModelYaw(item_gobj);

    ip->is_attach_surface = TRUE;

    ip->lifetime = ITBUMPER_LIFETIME;

    itMainClearOwnerStats(item_gobj);
}

// 0x8017B9C8
sb32 itNBumperGWaitHitProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    dobj->mobj->image_frame = 1.0F;

    ip->lr = -ip->lr_attack;

    ip->phys_info.vel_air.x = ip->lr_attack * ITBUMPER_REBOUND_VEL_X;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    return FALSE;
}

// 0x8017BA2C
sb32 itNBumperGWaitHitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f edge_pos;

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (dobj->mobj->image_frame == 1.0F))
    {
        dobj->mobj->image_frame = 0.0F;
    }
    else ip->item_vars.bumper.hit_anim_length--;

    if (mpCollision_CheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LR_Left)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &edge_pos);

            if (edge_pos.x >= (dobj->translate.vec.f.x - attributes->objectcoll_width))
            {
                ip->phys_info.vel_air.x = 0.0F;
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &edge_pos);

            if (edge_pos.x <= (dobj->translate.vec.f.x + attributes->objectcoll_width))
            {
                ip->phys_info.vel_air.x = 0.0F;
            }
        }
    }
    if (ip->it_multi < ITBUMPER_RESET_VEL_TIMER)
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
sb32 itNBumperGWaitHitProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (itMapCheckLRWallProcGround(item_gobj, itNBumperFDropSetStatus) != FALSE)
    {
        if (mpCollision_CheckExistLineID(ip->attach_line_id) == FALSE)
        {
            ip->is_attach_surface = FALSE;

            itNBumperFDropSetStatus(item_gobj);

            joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

            joint->mobj->image_frame = 0.0F;
        }
        else if (ip->it_multi == 0)
        {
            itNBumperGWaitHitSetModelYaw(item_gobj);
        }
    }
    return FALSE;
}

// 0x8017BCC0
sb32 itNBumperGWaitHitProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = 3;

    dobj->mobj->image_frame = 1.0F;

    ip->phys_info.vel_air.x = (-fp->lr * ITBUMPER_REBOUND_VEL_X);

    ip->lr = fp->lr;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    itMainClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017BD4C
void itNBumperGWaitHitSetStatus(GObj *item_gobj)
{
    itNBumperGWaitHitInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_GWaitHit);
}

// 0x8017BD80
sb32 itNBumperAHitProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (dobj->mobj->image_frame == 1.0F))
    {
        dobj->mobj->image_frame = 0.0F;
    }
    else ip->item_vars.bumper.hit_anim_length--;

    itMainApplyGClampTVel(ip, ITBUMPER_GRAVITY_HIT, ITBUMPER_T_VEL);

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
void itNBumperAHitSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_AHit);
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

        dobj->flags ^= DOBJ_FLAG_NORENDER;
    }
    ip->lifetime--;

    return FALSE;
}

// 0x8017BF1C
void itNBumperGDisappearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->mobj->image_frame = 0;

    dobj->scale.vec.f.x = 1.0F;
    dobj->scale.vec.f.y = 1.0F;
    dobj->scale.vec.f.z = 1.0F;

    ip->lifetime = ITBUMPER_DESPAWN_TIMER;

    dobj->flags = DOBJ_FLAG_NONE;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    itMainSetItemStatus(item_gobj, dITNBumperStatusDesc, itStatus_NBumper_GDisappear);
}

// 0x8017BF8C
GObj* itNBumperMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITNBumperItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = dobj->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->item_hit.can_rehit_shield = TRUE;

        dobj->mobj->image_frame = 0.0F;

        omAddOMMtxForDObjFixed(dobj, 0x2E, 0);

        dobj->translate.vec.f = translate;

        dobj->rotate.vec.f.z = 0.0F;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}
