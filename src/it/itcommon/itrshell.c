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
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

itCreateDesc dITRShellItemDesc =
{
    It_Kind_RShell,                         // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITRShellITemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itRShellAFallProcUpdate,                // Proc Update
    itRShellAFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itRShellSDefaultProcDamage              // Proc Damage
};

itStatusDesc dITRShellStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itRShellGWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itRShellSDefaultProcDamage          // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itRShellAFallProcUpdate,            // Proc Update
        itRShellAFallProcMap,               // Proc Map
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
        itRShellAFallProcUpdate,            // Proc Update
        itRShellFThrowProcMap,              // Proc Map
        itRShellSDefaultProcHit,            // Proc Hit
        itRShellSDefaultProcShield,         // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itRShellSDefaultProcShield,         // Proc Set-Off
        itRShellSDefaultProcReflector,      // Proc Reflector
        itRShellSDefaultProcDamage          // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itRShellAFallProcUpdate,            // Proc Update
        itRShellFThrowProcMap,              // Proc Map
        itRShellSDefaultProcHit,            // Proc Hit
        itRShellSDefaultProcShield,         // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itRShellSDefaultProcShield,         // Proc Set-Off
        itRShellSDefaultProcReflector,      // Proc Reflector
        itRShellSDefaultProcDamage          // Proc Damage
    },

    // Status 5 (Ground Spin)
    {
        itRShellGSpinProcUpdate,            // Proc Update
        itRShellGSpinProcMap,               // Proc Map
        itRShellSDefaultProcHit,            // Proc Hit
        itRShellSDefaultProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itRShellSDefaultProcReflector,      // Proc Reflector
        itRShellGSpinProcDamage             // Proc Damage
    },

    // Status 6 (Ground Spin)
    {
        itRShellAFallProcUpdate,            // Proc Update
        itRShellFThrowProcMap,              // Proc Map
        itRShellSDefaultProcHit,            // Proc Hit
        itRShellSDefaultProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itRShellSDefaultProcReflector,      // Proc Reflector
        itRShellSDefaultProcDamage          // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itRShellStatus
{
    itStatus_RShell_GWait,
    itStatus_RShell_AFall,
    itStatus_RShell_FHold,
    itStatus_RShell_FThrow,
    itStatus_RShell_FDrop,
    itStatus_RShell_GSpin,
    itStatus_RShell_ASpin,
    itStatus_RShell_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017A3A0
void itRShellGSpinUpdateFollowPlayer(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 vel_x;
    f32 dist_x;
    s32 lr_vel;
    s32 lr_dist;

    if (ip->ground_or_air == nMPKineticsGround)
    {
        dist_x = (DObjGetStruct(fighter_gobj)->translate.vec.f.x - DObjGetStruct(item_gobj)->translate.vec.f.x);

        lr_dist = (dist_x < 0.0F) ? LR_Left : LR_Right;

        vel_x = lr_dist * ITRSHELL_MUL_VEL_X;

        ip->item_vars.shell.vel_x = vel_x;

        ip->phys_info.vel_air.x += vel_x;

        lr_vel = (ip->phys_info.vel_air.x < 0.0F) ? LR_Left : LR_Right;

        lr_dist = (ip->item_vars.shell.vel_x < 0.0F) ? LR_Left : LR_Right;

        if (lr_dist == lr_vel)
        {
            if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_CLAMP_VEL_X)
            {
                ip->phys_info.vel_air.x = ip->lr * ITRSHELL_CLAMP_VEL_X;
            }
        }
        if (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable)
        {
            if (ABSF(ip->phys_info.vel_air.x) <= ITRSHELL_HIT_INIT_VEL_X)
            {
                ip->item_hit.update_state = gmHitCollision_UpdateState_New;

                itProcessUpdateHitPositions(item_gobj);
            }
        }
        ip->lr = (ip->phys_info.vel_air.x < 0.0F) ? LR_Left : LR_Right;
    }
}

// 0x8017A534
void itRShellGSpinSearchFollowPlayer(GObj *item_gobj)
{
    s32 unused;
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];
    GObj *nearest_gobj;
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f *translate = &dobj->translate.vec.f;
    s32 ft_count = 0;
    f32 next_dist;
    f32 nearest_dist;
    Vec3f dist;

    while (fighter_gobj != NULL)
    {
        lbVector_Vec3fSubtract(&dist, &DObjGetStruct(fighter_gobj)->translate.vec.f, translate);

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
    itRShellGSpinUpdateFollowPlayer(item_gobj, nearest_gobj);
}

// 0x8017A610
void itRShellGSpinUpdateGFX(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.shell.dust_effect_int == 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.y += ip->attributes->objectcoll_bottom;

        efManagerDustLightMakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.shell.dust_effect_int = ITRSHELL_EFFECT_SPAWN_INT;
    }
    ip->item_vars.shell.dust_effect_int--;
}

// 0x8017A6A0
void itRShellGSpinAddAnim(GObj *item_gobj) // Identical to Green Shell function
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 unused[2];

    omAddDObjAnimAll(dobj, itGetPData(ip, lITRShellDataStart, lITRShellAnimJoint), 0.0F); // Linker thing
    omAddMObjAnimAll(dobj->mobj, itGetPData(ip, lITRShellDataStart, lITRShellMatAnimJoint), 0.0F); // Linker thing
    func_8000DF34_EB34(item_gobj);
}

// 0x8017A734
void itRShellSDefaultClearAnim(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->mobj->actor.p = NULL;
    DObjGetStruct(item_gobj)->actor.p = NULL;
}

// 0x8017A74C
sb32 itRShellAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITRSHELL_GRAVITY, ITRSHELL_T_VEL);

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
sb32 itRShellGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itRShellAFallSetStatus);

    return FALSE;
}

// 0x8017A7EC
sb32 itRShellAFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.shell.health == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.25F);
    }
    itMapCheckMapCollideThrownLanding(item_gobj, 0.25F, 0.5F, func_ovl3_8017A964);

    return FALSE;
}

// 0x8017A83C
void itRShellGWaitUpdateStatusVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapSetGround(ip);

    if (ABSF(ip->phys_info.vel_air.x) < ITRSHELL_STOP_VEL_X)
    {
        itMainSetGroundAllowPickup(item_gobj);

        ip->item_vars.shell.is_damage = FALSE;
        ip->phys_info.vel_air.x = 0.0F;

        itMainClearOwnerStats(item_gobj);

        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

        itRShellSDefaultClearAnim(item_gobj);
        itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_GWait);
    }
    else if (ip->item_vars.shell.is_damage != FALSE)
    {
        ip->item_hit.update_state = gmHitCollision_UpdateState_New;

        itProcessUpdateHitPositions(item_gobj);
        itRShellGSpinSetStatus(item_gobj);
    }
    else
    {
        itMainSetGroundAllowPickup(item_gobj);

        ip->phys_info.vel_air.x = 0.0F;

        itMainClearOwnerStats(item_gobj);

        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

        itRShellSDefaultClearAnim(item_gobj);
        itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_GWait);
    }
}

// 0x8017A964
void func_ovl3_8017A964(GObj *item_gobj) // Unused
{
    itRShellGWaitUpdateStatusVars(item_gobj);
}

// 0x8017A984
void itRShellAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_AFall);
}

// 0x8017A9D0
sb32 itRShellSDefaultProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->damage_queue * ITRSHELL_DAMAGE_MUL_NORMAL * (-ip->lr_damage);

    if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_STOP_VEL_X)
    {
        ip->item_vars.shell.is_damage = TRUE;

        ip->item_hit.update_state = gmHitCollision_UpdateState_New;

        itProcessUpdateHitPositions(item_gobj);
        itMainCopyDamageStats(item_gobj);

        if (ip->ground_or_air != nMPKineticsGround)
        {
            itRShellASpinSetStatus(item_gobj);
        }
        else itRShellGSpinSetStatus(item_gobj);
    }
    else
    {
        ip->phys_info.vel_air.x = 0.0F;

        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    }
    return FALSE;
}

// 0x8017AABC
void itRShellFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_FHold);
}

// 0x8017AAF0
void itRShellFThrowSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;
    ip->item_vars.shell.damage_all_delay = ITRSHELL_DAMAGE_ALL_WAIT;

    ip->times_thrown = 0;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_FThrow);
}

// 0x8017AB48
void itRShellFDropSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;
    ip->item_vars.shell.damage_all_delay = ITRSHELL_DAMAGE_ALL_WAIT;

    ip->times_thrown = 0;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_FDrop);
}

// 0x8017ABA0
sb32 itRShellFThrowProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapCheckMapCollideLanding(item_gobj, 0.25F, 0.5F, itRShellGSpinSetStatus) != FALSE)
    {
        if (ip->phys_info.vel_air.x < 0.0F)
        {
            ip->lr = LR_Left;
        }
        else ip->lr = LR_Right;

        ip->phys_info.vel_air.x = ((ip->lr * -8.0F) + -10.0F) * 0.7F;
    }
    return FALSE;
}

// 0x8017AC40 - 0 = left, 1 = right
void itRShellGSpinEdgeInvertVelLR(GObj *item_gobj, ub8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;

    ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;

    if (lr != 0)
    {
        ip->lr = LR_Right;
    }
    else ip->lr = LR_Left;
}

// 0x8017AC84
void itRShellGSpinCheckCollisionEdge(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    if (mpCollisionCheckExistLineID(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LR_Left)
        {
            mpCollisionGetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.vec.f.x - attributes->objectcoll_width))
            {
                itRShellGSpinEdgeInvertVelLR(item_gobj, 1);
            }
        }
        else
        {
            mpCollisionGetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.vec.f.x + attributes->objectcoll_width))
            {
                itRShellGSpinEdgeInvertVelLR(item_gobj, 0);
            }
        }
    }
}

// 0x8017AD7C
sb32 itRShellGSpinProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itRShellGSpinUpdateGFX(item_gobj);
    itRShellGSpinSearchFollowPlayer(item_gobj);
    itRShellGSpinCheckCollisionEdge(item_gobj);

    if (ip->lifetime == 0)
    {
        return TRUE;
    }
    else ip->lifetime--;

    return FALSE;
}

// 0x8017ADD4
sb32 itRShellGSpinProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if ((itMapCheckLRWallProcGround(item_gobj, itRShellASpinSetStatus) != FALSE) && (ip->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL)))
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;

        itMainVelSetRotateStepLR(item_gobj);
        itMainClearOwnerStats(item_gobj);

        ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
    }
    return FALSE;
}

// 0x8017AE48
sb32 itRShellSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }
    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    ip->item_vars.shell.health = mtTrigGetRandomIntRange(ITRSHELL_HEALTH_MAX);

    ip->phys_info.vel_air.x = ((ip->phys_info.vel_air.x * -1.0F) + (ITRSHELL_RECOIL_VEL_X * ip->lr_attack)) * ITRSHELL_RECOIL_MUL_X;

    itRShellSDefaultClearAnim(item_gobj);

    if (ip->ground_or_air != nMPKineticsGround)
    {
        itRShellASpinSetStatus(item_gobj);
    }
    else itRShellGSpinSetStatus(item_gobj);
    
    return FALSE;
}

// 0x8017AF18
sb32 itRShellGSpinProcDamage(GObj *item_gobj)
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
        ip->item_hit.update_state = gmHitCollision_UpdateState_New;

        itProcessUpdateHitPositions(item_gobj);
        itMainCopyDamageStats(item_gobj);
        itRShellGSpinSetStatus(item_gobj);
    }
    else
    {
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    }
    return FALSE;
}

// 0x8017AFEC
void itRShellGSpinInitItemVars(GObj *item_gobj)
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
        ip->lr = LR_Left;
    }
    else ip->lr = LR_Right;

    if (ip->item_vars.shell.is_setup_vars == FALSE)
    {
        ip->lifetime = ITRSHELL_LIFETIME;

        ip->item_vars.shell.is_setup_vars = TRUE;

        ip->item_vars.shell.interact = ITRSHELL_INTERACT_MAX;
    }
    ip->item_vars.shell.dust_effect_int = ITRSHELL_EFFECT_SPAWN_INT;

    itRShellGSpinAddAnim(item_gobj);
    func_800269C0_275C0(alSound_SFX_BombHeiWalkStart);
    itMainClearOwnerStats(item_gobj);
    itMapSetGround(ip);
}

// 0x8017B0D4
void itRShellGSpinSetStatus(GObj *item_gobj)
{
    itRShellGSpinInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_GSpin);
}

// 0x8017B108
void itRShellASpinInitItemVars(GObj *item_gobj)
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
        ip->lr = LR_Left;
    }
    else ip->lr = LR_Right;

    itMainClearOwnerStats(item_gobj);
    itMapSetAir(ip);
}

// 0x8017B1A4
void itRShellASpinSetStatus(GObj *item_gobj)
{
    itRShellASpinInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITRShellStatusDesc, itStatus_RShell_ASpin);
}

// 0x8017B1D8
GObj* itRShellMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITRShellItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = dobj->translate.vec.f;

        dobj->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

        omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = translate;

        dobj->mobj->image_frame = 0.0F;

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
sb32 itRShellSDefaultProcShield(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017B31C
sb32 itRShellSDefaultProcReflector(GObj *item_gobj)
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
        ip->lr = LR_Left;

        if (ip->phys_info.vel_air.x >= 0.0F)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
            ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
        }
    }
    else
    {
        ip->lr = LR_Right;

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
