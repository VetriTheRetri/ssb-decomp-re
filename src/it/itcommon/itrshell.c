#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITRShellITemAttributes;    // 0x00000584
extern intptr_t lITRShellDataStart;         // 0x00005F88
extern intptr_t lITRShellAnimJoint;         // 0x00006018
extern intptr_t lITRShellMatAnimJoint;      // 0x00006048

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITRShellItemDesc =
{
    nITKindRShell,                          // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITRShellITemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformNull,                   // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itRShellFallProcUpdate,                 // Proc Update
    itRShellFallProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itRShellCommonProcDamage                // Proc Damage
};

itStatusDesc dITRShellStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itRShellWaitProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itRShellCommonProcDamage            // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itRShellFallProcUpdate,             // Proc Update
        itRShellFallProcMap,                // Proc Map
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
        itRShellFallProcUpdate,             // Proc Update
        itRShellThrownProcMap,              // Proc Map
        itRShellCommonProcHit,              // Proc Hit
        itRShellCommonProcShield,           // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itRShellCommonProcShield,           // Proc Set-Off
        itRShellCommonProcReflector,        // Proc Reflector
        itRShellCommonProcDamage            // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itRShellFallProcUpdate,             // Proc Update
        itRShellThrownProcMap,              // Proc Map
        itRShellCommonProcHit,              // Proc Hit
        itRShellCommonProcShield,           // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itRShellCommonProcShield,           // Proc Set-Off
        itRShellCommonProcReflector,        // Proc Reflector
        itRShellCommonProcDamage            // Proc Damage
    },

    // Status 5 (Ground Spin)
    {
        itRShellSpinProcUpdate,             // Proc Update
        itRShellSpinProcMap,                // Proc Map
        itRShellCommonProcHit,              // Proc Hit
        itRShellCommonProcHit,              // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itRShellCommonProcReflector,        // Proc Reflector
        itRShellSpinProcDamage              // Proc Damage
    },

    // Status 6 (Ground Spin)
    {
        itRShellFallProcUpdate,             // Proc Update
        itRShellThrownProcMap,              // Proc Map
        itRShellCommonProcHit,              // Proc Hit
        itRShellCommonProcHit,              // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itRShellCommonProcReflector,        // Proc Reflector
        itRShellCommonProcDamage            // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itRShellStatus
{
    nITRShellStatusWait,
    nITRShellStatusFall,
    nITRShellStatusHold,
    nITRShellStatusThrown,
    nITRShellStatusDropped,
    nITRShellStatusSpin,
    nITRShellStatusSpinAir,
    nITRShellStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017A3A0
void itRShellSpinUpdateFollowPlayer(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 vel_x;
    f32 dist_x;
    s32 lr_vel;
    s32 lr_dist;

    if (ip->ga == nMPKineticsGround)
    {
        dist_x = (DObjGetStruct(fighter_gobj)->translate.vec.f.x - DObjGetStruct(item_gobj)->translate.vec.f.x);

        lr_dist = (dist_x < 0.0F) ? nGMFacingL : nGMFacingR;

        vel_x = lr_dist * ITRSHELL_MUL_VEL_X;

        ip->item_vars.shell.vel_x = vel_x;

        ip->phys_info.vel_air.x += vel_x;

        lr_vel = (ip->phys_info.vel_air.x < 0.0F) ? nGMFacingL : nGMFacingR;

        lr_dist = (ip->item_vars.shell.vel_x < 0.0F) ? nGMFacingL : nGMFacingR;

        if (lr_dist == lr_vel)
        {
            if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_CLAMP_VEL_X)
            {
                ip->phys_info.vel_air.x = ip->lr * ITRSHELL_CLAMP_VEL_X;
            }
        }
        if (ip->item_hit.update_state == nGMHitUpdateDisable)
        {
            if (ABSF(ip->phys_info.vel_air.x) <= ITRSHELL_HIT_INITVEL_X)
            {
                ip->item_hit.update_state = nGMHitUpdateNew;

                itProcessUpdateHitPositions(item_gobj);
            }
        }
        ip->lr = (ip->phys_info.vel_air.x < 0.0F) ? nGMFacingL : nGMFacingR;
    }
}

// 0x8017A534
void itRShellSpinSearchFollowPlayer(GObj *item_gobj)
{
    s32 unused;
    GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];
    GObj *nearest_gobj;
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f *translate = &dobj->translate.vec.f;
    s32 ft_count = 0;
    f32 next_dist;
    f32 nearest_dist;
    Vec3f dist;

    while (fighter_gobj != NULL)
    {
        syVectorDiff3D(&dist, &DObjGetStruct(fighter_gobj)->translate.vec.f, translate);

        if (ft_count == 0)
        {
            nearest_dist = SQUARE(dist.x) + SQUARE(dist.y);
        }
        next_dist = SQUARE(dist.x) + SQUARE(dist.y);

        if (nearest_dist >= next_dist)
        {
            nearest_dist = next_dist;

            nearest_gobj = fighter_gobj;
        }
        fighter_gobj = fighter_gobj->link_next;

        ft_count++;
    }
    itRShellSpinUpdateFollowPlayer(item_gobj, nearest_gobj);
}

// 0x8017A610
void itRShellSpinUpdateGFX(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.shell.dust_effect_int == 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.y += ip->attributes->objcoll_bottom;

        efManagerDustLightMakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.shell.dust_effect_int = ITRSHELL_EFFECT_SPAWN_INT;
    }
    ip->item_vars.shell.dust_effect_int--;
}

// 0x8017A6A0
void itRShellSpinAddAnim(GObj *item_gobj) // Identical to Green Shell function
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 unused[2];

    gcAddDObjAnimJoint(dobj, itGetPData(ip, lITRShellDataStart, lITRShellAnimJoint), 0.0F); // Linker thing
    gcAddMObjMatAnimJoint(dobj->mobj, itGetPData(ip, lITRShellDataStart, lITRShellMatAnimJoint), 0.0F); // Linker thing
    gcPlayAnimAll(item_gobj);
}

// 0x8017A734
void itRShellCommonClearAnim(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->mobj->matanim_joint.event32 = NULL;
    DObjGetStruct(item_gobj)->anim_joint.event32 = NULL;
}

// 0x8017A74C
sb32 itRShellFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITRSHELL_GRAVITY, ITRSHELL_TVEL);

    if (!(ip->item_vars.shell.damage_all_delay))
    {
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.shell.damage_all_delay = -1;
    }
    if (ip->item_vars.shell.damage_all_delay != -1)
    {
        ip->item_vars.shell.damage_all_delay--;
    }
    return FALSE;
}

// 0x8017A7C4
sb32 itRShellWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itRShellFallSetStatus);

    return FALSE;
}

// 0x8017A7EC
sb32 itRShellFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.shell.health == 0)
    {
        return itMapCheckDestroyLanding(item_gobj, ITRSHELL_MAP_REBOUND_COMMON);
    }
    itMapCheckDestroyDropped(item_gobj, ITRSHELL_MAP_REBOUND_COMMON, ITRSHELL_MAP_REBOUND_GROUND, itRShellCommonProcStatusWaitOrSpin);

    return FALSE;
}

// 0x8017A83C
void itRShellCommonSetStatusWaitOrSpin(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapSetGround(ip);

    if (ABSF(ip->phys_info.vel_air.x) < ITRSHELL_STOP_VEL_X)
    {
        itMainSetGroundAllowPickup(item_gobj);

        ip->item_vars.shell.is_damage = FALSE;
        ip->phys_info.vel_air.x = 0.0F;

        itMainClearOwnerStats(item_gobj);

        ip->item_hurt.hitstatus = nGMHitStatusNormal;
        ip->item_hit.update_state = nGMHitUpdateDisable;

        itRShellCommonClearAnim(item_gobj);
        itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusWait);
    }
    else if (ip->item_vars.shell.is_damage != FALSE)
    {
        ip->item_hit.update_state = nGMHitUpdateNew;

        itProcessUpdateHitPositions(item_gobj);
        itRShellSpinSetStatus(item_gobj);
    }
    else
    {
        itMainSetGroundAllowPickup(item_gobj);

        ip->phys_info.vel_air.x = 0.0F;

        itMainClearOwnerStats(item_gobj);

        ip->item_hurt.hitstatus = nGMHitStatusNormal;
        ip->item_hit.update_state = nGMHitUpdateDisable;

        itRShellCommonClearAnim(item_gobj);
        itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusWait);
    }
}

// 0x8017A964
void itRShellCommonProcStatusWaitOrSpin(GObj *item_gobj)
{
    itRShellCommonSetStatusWaitOrSpin(item_gobj);
}

// 0x8017A984
void itRShellFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    ip->item_hurt.hitstatus = nGMHitStatusNormal;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusFall);
}

// 0x8017A9D0
sb32 itRShellCommonProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->damage_queue * ITRSHELL_DAMAGE_MUL_NORMAL * (-ip->lr_damage);

    if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_STOP_VEL_X)
    {
        ip->item_vars.shell.is_damage = TRUE;

        ip->item_hit.update_state = nGMHitUpdateNew;

        itProcessUpdateHitPositions(item_gobj);
        itMainCopyDamageStats(item_gobj);

        if (ip->ga != nMPKineticsGround)
        {
            itRShellSpinAirSetStatus(item_gobj);
        }
        else itRShellSpinSetStatus(item_gobj);
    }
    else
    {
        ip->phys_info.vel_air.x = 0.0F;

        ip->item_hit.update_state = nGMHitUpdateDisable;
    }
    return FALSE;
}

// 0x8017AABC
void itRShellHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(0.0F);

    itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusHold);
}

// 0x8017AAF0
void itRShellThrownSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;
    ip->item_vars.shell.damage_all_delay = ITRSHELL_DAMAGE_ALL_WAIT;

    ip->times_thrown = 0;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusThrown);
}

// 0x8017AB48
void itRShellDroppedSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;
    ip->item_vars.shell.damage_all_delay = ITRSHELL_DAMAGE_ALL_WAIT;

    ip->times_thrown = 0;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusDropped);
}

// 0x8017ABA0
sb32 itRShellThrownProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapCheckLanding(item_gobj, 0.25F, 0.5F, itRShellSpinSetStatus) != FALSE)
    {
        if (ip->phys_info.vel_air.x < 0.0F)
        {
            ip->lr = nGMFacingL;
        }
        else ip->lr = nGMFacingR;

        ip->phys_info.vel_air.x = ((ip->lr * -8.0F) + -10.0F) * 0.7F;
    }
    return FALSE;
}

// 0x8017AC40 - 0 = left, 1 = right
void itRShellSpinEdgeInvertVelLR(GObj *item_gobj, ub8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;

    ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;

    if (lr != 0)
    {
        ip->lr = nGMFacingR;
    }
    else ip->lr = nGMFacingL;
}

// 0x8017AC84
void itRShellSpinCheckCollisionEdge(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    if (mpCollisionCheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == nGMFacingL)
        {
            mpCollisionGetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.vec.f.x - attributes->objcoll_width))
            {
                itRShellSpinEdgeInvertVelLR(item_gobj, 1);
            }
        }
        else
        {
            mpCollisionGetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.vec.f.x + attributes->objcoll_width))
            {
                itRShellSpinEdgeInvertVelLR(item_gobj, 0);
            }
        }
    }
}

// 0x8017AD7C
sb32 itRShellSpinProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itRShellSpinUpdateGFX(item_gobj);
    itRShellSpinSearchFollowPlayer(item_gobj);
    itRShellSpinCheckCollisionEdge(item_gobj);

    if (ip->lifetime == 0)
    {
        return TRUE;
    }
    else ip->lifetime--;

    return FALSE;
}

// 0x8017ADD4
sb32 itRShellSpinProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if ((itMapCheckLRWallProcGround(item_gobj, itRShellSpinAirSetStatus) != FALSE) && (ip->coll_data.coll_mask_current & (MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL)))
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;

        itMainVelSetRotateStepLR(item_gobj);
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
    }
    return FALSE;
}

// 0x8017AE48
sb32 itRShellCommonProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }
    ip->item_hurt.hitstatus = nGMHitStatusNormal;

    ip->item_vars.shell.health = mtTrigGetRandomIntRange(ITRSHELL_HEALTH_MAX);

    ip->phys_info.vel_air.x = ((ip->phys_info.vel_air.x * -1.0F) + (ITRSHELL_RECOIL_VEL_X * ip->lr_attack)) * ITRSHELL_RECOIL_MUL_X;

    itRShellCommonClearAnim(item_gobj);

    if (ip->ga != nMPKineticsGround)
    {
        itRShellSpinAirSetStatus(item_gobj);
    }
    else itRShellSpinSetStatus(item_gobj);
    
    return FALSE;
}

// 0x8017AF18
sb32 itRShellSpinProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }
    ip->phys_info.vel_air.x += (ip->damage_queue * 2.0F) * -ip->lr_damage;

    if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_STOP_VEL_X)
    {
        ip->item_hit.update_state = nGMHitUpdateNew;

        itProcessUpdateHitPositions(item_gobj);
        itMainCopyDamageStats(item_gobj);
        itRShellSpinSetStatus(item_gobj);
    }
    else
    {
        ip->item_hit.update_state = nGMHitUpdateDisable;
    }
    return FALSE;
}

// 0x8017AFEC
void itRShellSpinInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;
    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;

    if (ip->phys_info.vel_air.x > ITRSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = ITRSHELL_CLAMP_VEL_X;
    }
    if (ip->phys_info.vel_air.x < -ITRSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = -ITRSHELL_CLAMP_VEL_X;
    }
    ip->phys_info.vel_air.y = 0.0F;

    if (ip->phys_info.vel_air.x < 0.0F)
    {
        ip->lr = nGMFacingL;
    }
    else ip->lr = nGMFacingR;

    if (ip->item_vars.shell.is_setup_vars == FALSE)
    {
        ip->lifetime = ITRSHELL_LIFETIME;

        ip->item_vars.shell.is_setup_vars = TRUE;

        ip->item_vars.shell.interact = ITRSHELL_INTERACT_MAX;
    }
    ip->item_vars.shell.dust_effect_int = ITRSHELL_EFFECT_SPAWN_INT;

    itRShellSpinAddAnim(item_gobj);
    func_800269C0_275C0(nSYAudioFGMBombHeiWalkStart);
    itMainClearOwnerStats(item_gobj);
    itMapSetGround(ip);
}

// 0x8017B0D4
void itRShellSpinSetStatus(GObj *item_gobj)
{
    itRShellSpinInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusSpin);
}

// 0x8017B108
void itRShellSpinAirInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    if (ip->phys_info.vel_air.x > ITRSHELL_CLAMP_AIR_X)
    {
        ip->phys_info.vel_air.x = ITRSHELL_CLAMP_AIR_X;
    }
    if (ip->phys_info.vel_air.x < -ITRSHELL_CLAMP_AIR_X)
    {
        ip->phys_info.vel_air.x = -ITRSHELL_CLAMP_AIR_X;
    }
    if (ip->phys_info.vel_air.x < 0.0F)
    {
        ip->lr = nGMFacingL;
    }
    else ip->lr = nGMFacingR;

    itMainClearOwnerStats(item_gobj);
    itMapSetAir(ip);
}

// 0x8017B1A4
void itRShellSpinAirSetStatus(GObj *item_gobj)
{
    itRShellSpinAirInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITRShellStatusDescs, nITRShellStatusSpinAir);
}

// 0x8017B1D8
GObj* itRShellMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITRShellItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = dobj->translate.vec.f;

        dobj->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

        gcAddGCMatrixForDObjFixed(dobj, nGCTransformTraRotRpyR, 0);
        gcAddGCMatrixForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = translate;

        dobj->mobj->palette_id = 0.0F;

        ip = itGetStruct(item_gobj);

        ip->item_hit.can_rehit_shield = TRUE;

        ip->item_vars.shell.health = 1;
        ip->item_vars.shell.is_setup_vars = FALSE;
        ip->item_vars.shell.is_damage = FALSE;
        ip->item_vars.shell.damage_all_delay = -1;
        ip->item_vars.shell.vel_x = 0;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// 0x8017B2F8
sb32 itRShellCommonProcShield(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017B31C
sb32 itRShellCommonProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *item_dobj = DObjGetStruct(item_gobj), *fighter_dobj = DObjGetStruct(ip->owner_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }

    if (item_dobj->translate.vec.f.x < fighter_dobj->translate.vec.f.x)
    {
        ip->lr = nGMFacingL;

        if (ip->phys_info.vel_air.x >= 0.0F)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
            ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
        }
    }
    else
    {
        ip->lr = nGMFacingR;

        if (ip->phys_info.vel_air.x < 0.0F)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
            ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
        }
    }
    ip->phys_info.vel_air.x += (ITRSHELL_ADD_VEL_X * ip->lr);

    itMainClearOwnerStats(item_gobj);

    return FALSE;
}
