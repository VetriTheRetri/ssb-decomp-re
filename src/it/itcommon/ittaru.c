#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITTaruItemAttributes;      // 0x00000634
extern intptr_t lITTaruHitEvents;           // 0x0000067C

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITTaruItemDesc =
{
    nITKindTaru,                            // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITTaruItemAttributes,                 // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itTaruFallProcUpdate,                   // Proc Update
    itTaruFallProcMap,                      // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITTaruStatusDescs[/* */] = 
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itTaruWaitProcMap,                  // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itTaruCommonProcDamage              // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itTaruFallProcUpdate,               // Proc Update
        itTaruFallProcMap,                  // Proc Map
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
        itTaruFallProcUpdate,               // Proc Update
        itTaruThrownProcMap,                // Proc Map
        itTaruCommonProcHit,                // Proc Hit
        itTaruCommonProcHit,                // Proc Shield
        NULL,                               // Proc Hop
        itTaruCommonProcHit,                // Proc Set-Off
        itTaruCommonProcHit,                // Proc Reflector
        itTaruCommonProcDamage              // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itTaruFallProcUpdate,               // Proc Update
        itTaruThrownProcMap,                // Proc Map
        itTaruCommonProcHit,                // Proc Hit
        itTaruCommonProcHit,                // Proc Shield
        NULL,                               // Proc Hop
        itTaruCommonProcHit,                // Proc Set-Off
        itTaruCommonProcHit,                // Proc Reflector
        itTaruCommonProcDamage              // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itTaruExplodeProcUpdate,            // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Ground Roll)
    {
        itTaruRollProcUpdate,               // Proc Update
        itTaruRollProcMap,                  // Proc Map
        itTaruCommonProcHit,                // Proc Hit
        itTaruCommonProcHit,                // Proc Shield
        NULL,                               // Proc Hop
        itTaruCommonProcHit,                // Proc Set-Off
        itTaruCommonProcHit,                // Proc Reflector
        itTaruCommonProcDamage              // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itTaruStatus
{
    nITTaruStatusWait,
    nITTaruStatusFall,
    nITTaruStatusHold,
    nITTaruStatusThrown,
    nITTaruStatusDropped,
    nITTaruStatusExplode,
    nITTaruStatusRoll,
    nITTaruStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80179BA0
sb32 itTaruFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITTARU_GRAVITY, ITTARU_TVEL);

    DObjGetStruct(item_gobj)->rotate.vec.f.z += ip->item_vars.taru.roll_rotate_step;

    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80179BF8
sb32 itTaruWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itTaruFallSetStatus);

    return FALSE;
}

// 0x80179C20
sb32 itTaruCommonProcHit(GObj *item_gobj)
{
    func_800269C0_275C0(nSYAudioFGMContainerSmash);

    itBoxContainerSmashMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    if (itMainMakeContainerItem(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itTaruExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80179C78
sb32 itTaruCommonProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITTARU_HEALTH_MAX)
    {
        return itTaruCommonProcHit(item_gobj);
    }
    else return FALSE;
}

// 0x80179CB8
sb32 itTaruFallProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITTARU_MAP_REBOUND_COMMON, ITTARU_MAP_REBOUND_GROUND, itTaruWaitSetStatus);
}

// 0x80179CE8
void itTaruWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusWait);
}

// 0x80179D1C
void itTaruFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusFall);
}

// 0x80179D60
void itTaruHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusHold);
}

// 0x80179D88
sb32 itTaruThrownCheckMapCollision(GObj *item_gobj, f32 common_rebound)
{
    s32 unused;
    itStruct *ip;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80179DEC
void itTaruRollSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->lifetime = ITTARU_LIFETIME;

    ip->phys_info.vel_air.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusRoll);
}

// 0x80179E28
sb32 itTaruThrownProcMap(GObj *item_gobj)
{
    if (itTaruThrownCheckMapCollision(item_gobj, 0.5F) != FALSE)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->phys_info.vel_air.y >= 90.0F)       // Is it even possible to meet this condition? Didn't they mean ABSF(ip->phys_info.vel_air.y)?
        {
            itTaruCommonProcHit(item_gobj);       // This causes the barrel to smash on impact when landing from too high; doesn't seem possible to trigger

            return TRUE;
        }
        else if (ip->phys_info.vel_air.y < 30.0F)
        {
            itTaruRollSetStatus(item_gobj);
        }
        else
        {
            lbCommonReflect2D(&ip->phys_info.vel_air, &ip->coll_data.ground_angle);

            ip->phys_info.vel_air.y *= 0.2F;

            itMainVelSetRotateStepLR(item_gobj);
        }
        itMainClearOwnerStats(item_gobj);
    }
    return FALSE;
}

// 0x80179EF0
void itTaruThrownInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.x = F_CST_DTOR32(90.0F); // HALF_PI32

    ip->coll_data.objcoll.top = ip->coll_data.objcoll.width;
    ip->coll_data.objcoll.bottom = -ip->coll_data.objcoll.width;
}

// 0x80179F1C
void itTaruThrownSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusThrown);
    itTaruThrownInitItemVars(item_gobj);
}

// 0x80179F50 - Unused
sb32 func_ovl3_80179F50(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80179F74
void itTaruDroppedSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusDropped);
    itTaruThrownInitItemVars(item_gobj);
}

// 0x80179FA8
sb32 itTaruExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITTARU_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITTaruItemDesc, lITTaruHitEvents)); // Linker thing

    return FALSE;
}

// 0x8017A004
sb32 itTaruRollProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 roll_rotate_step;
    f32 sqrt_vel;

    ip->phys_info.vel_air.x += (-(atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_CLC_DTOR32(90.0F)) * ITTARU_MUL_VEL_X);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? nGMFacingR : nGMFacingL;

    sqrt_vel = sqrtf(SQUARE(ip->phys_info.vel_air.x) + SQUARE(ip->phys_info.vel_air.y));

    if (sqrt_vel < ITTARU_MIN_VEL_XY)
    {
        ip->lifetime--;

        if (ip->lifetime < ITTARU_DESPAWN_FLASH_START)
        {
            if (ip->lifetime == 0)
            {
                return TRUE;
            }
            else if ((ip->lifetime % 2) != 0)
            {
                DObjGetStruct(item_gobj)->flags ^= DOBJ_FLAG_HIDDEN;
            }
        }
    }
    roll_rotate_step = ((ip->lr == nGMFacingL) ? ITTARU_ROLL_ROTATE_MUL : -ITTARU_ROLL_ROTATE_MUL) * sqrt_vel;

    ip->item_vars.taru.roll_rotate_step = roll_rotate_step;

    DObjGetStruct(item_gobj)->rotate.vec.f.z += roll_rotate_step;

    return FALSE;
}

// 0x8017A148
sb32 itTaruRollProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestLRWallCheckGround(item_gobj) == FALSE)
    {
        itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusDropped);
    }
    else if (ip->coll_data.coll_mask_current & (MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL))
    {
        return itTaruCommonProcHit(item_gobj);
    }
    return FALSE;
}

// 0x8017A1B8
GObj* itTaruMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITTaruItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.taru.roll_rotate_step = 0.0F;

        ip->is_damage_all = TRUE;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// 0x8017A240
void itTaruExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_id = 0;

    ip->item_hit.hit_sfx = nSYAudioFGMExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;
    ip->item_hit.element = nGMHitElementFire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = nGMHitStatusNone;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITTaruItemDesc, lITTaruHitEvents));
}

// 0x8017A2D8
void itTaruExplodeSetStatus(GObj *item_gobj)
{
    itTaruExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITTaruStatusDescs, nITTaruStatusExplode);
}

// 0x8017A30C
void itTaruExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    lbParticle *ptcl;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ptcl = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (ptcl != NULL)
    {
        ptcl->tfrm->scale.x = ptcl->tfrm->scale.y = ptcl->tfrm->scale.z = ITTARU_EXPLODE_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_HIDDEN;

    itTaruExplodeSetStatus(item_gobj);
}
