#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITGShellItemAttributes;    // 0x0000053C
extern intptr_t lITGShellDataStart;         // 0x00005F88
extern intptr_t lITGShellAnimJoint;         // 0x00006018
extern intptr_t lITGShellMatAnimJoint;      // 0x00006048

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITGShellItemDesc =
{
    nITKindGShell,                         // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITGShellItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,     // Hitbox Update State
    itGShellFallProcUpdate,                // Proc Update
    itGShellFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITGShellStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itGShellWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itGShellCommonProcDamage          // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itGShellFallProcUpdate,            // Proc Update
        itGShellFallProcMap,               // Proc Map
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
        itGShellThrownProcUpdate,           // Proc Update
        itGShellThrownProcMap,              // Proc Map
        itGShellCommonProcHit,            // Proc Hit
        itGShellCommonProcShield,         // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itGShellCommonProcShield,         // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        itGShellCommonProcDamage          // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itGShellFallProcUpdate,            // Proc Update
        itGShellThrownProcMap,              // Proc Map
        itGShellCommonProcHit,            // Proc Hit
        itGShellCommonProcShield,         // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itGShellCommonProcShield,         // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        itGShellCommonProcDamage          // Proc Damage
    },

    // Status 5 (Ground Spin)
    {
        itGShellGSpinProcUpdate,            // Proc Update
        itGShellGSpinProcMap,               // Proc Map
        itGShellCommonProcHit,            // Proc Hit
        itGShellCommonProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        itGShellGASpinProcDamage            // Proc Damage
    },

    // Status 6 (Air Spin)
    {
        itGShellFallProcUpdate,            // Proc Update
        itGShellThrownProcMap,              // Proc Map
        itGShellCommonProcHit,            // Proc Hit
        itGShellCommonProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        itGShellGASpinProcDamage            // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itGShellStatus
{
    itStatus_GShell_Wait,
    itStatus_GShell_Fall,
    itStatus_GShell_Hold,
    itStatus_GShell_Thrown,
    itStatus_GShell_Dropped,
    itStatus_GShell_GSpin,
    itStatus_GShell_ASpin,
    itStatus_GShell_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801785E0
void itGShellGSpinUpdateEffect(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos;

    if (ip->item_vars.shell.dust_effect_int == 0)
    {
        pos = dobj->translate.vec.f;

        pos.y += ip->attributes->objectcoll_bottom;

        efManagerDustLightMakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.shell.dust_effect_int = ITGSHELL_EFFECT_SPAWN_INT;
    }
    ip->item_vars.shell.dust_effect_int--;
}

// 0x80178670
void itGShellGSpinAddAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 unused[2];

    omAddDObjAnimAll(dobj, itGetPData(ip, lITGShellDataStart, lITGShellAnimJoint), 0.0F); // Linker thing
    omAddMObjAnimAll(dobj->mobj, itGetPData(ip, lITGShellDataStart, lITGShellMatAnimJoint), 0.0F); // Linker thing
    func_8000DF34_EB34(item_gobj);
}

// 0x80178704
void itGShellCommonClearAnim(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->mobj->actor.p = NULL;
    DObjGetStruct(item_gobj)->actor.p = NULL;
}

// 0x8017871C
sb32 itGShellFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITGSHELL_GRAVITY, ITGSHELL_TVEL);

    return FALSE;
}

// 0x8017874C
sb32 itGShellWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itGShellFallSetStatus);

    return FALSE;
}

// 0x80178774
sb32 itGShellFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.shell.health == 0)
    {
        return itMapCheckMapReboundGround(item_gobj, 0.2F);
    }
    else itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itGShellWaitSetStatus);

    return FALSE;
}

// 0x801787CC
void itGShellWaitInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapSetGround(ip);

    if (ABSF(ip->phys_info.vel_air.x) < ITGSHELL_STOP_VEL_X)
    {
        itMainSetGroundAllowPickup(item_gobj);

        ip->item_vars.shell.is_damage = FALSE;

        ip->is_damage_all = TRUE;

        ip->item_hurt.hitstatus = nGMHitStatusNormal;
        ip->item_hit.update_state = nGMHitUpdateDisable;

        ip->phys_info.vel_air.x = 0.0F;

        itGShellCommonClearAnim(item_gobj);
        itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_Wait);
    }
    else if (ip->item_vars.shell.is_damage != FALSE)
    {
        ip->item_hit.update_state = nGMHitUpdateNew;

        itProcessUpdateHitPositions(item_gobj);
        itGShellGSpinSetStatus(item_gobj);
    }
    else
    {
        itMainSetGroundAllowPickup(item_gobj);

        ip->is_damage_all = TRUE;

        ip->item_hurt.hitstatus = nGMHitStatusNormal;
        ip->item_hit.update_state = nGMHitUpdateDisable;

        ip->phys_info.vel_air.x = 0.0F;

        itGShellCommonClearAnim(item_gobj);
        itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_Wait);
    }
}

// 0x80178910
void itGShellWaitSetStatus(GObj *item_gobj)
{
    itGShellWaitInitItemVars(item_gobj);
}

// 0x80178930
void itGShellFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = nGMHitStatusNone;

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_Fall);
}

// 0x8017897C
sb32 itGShellCommonProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->damage_queue * ITGSHELL_DAMAGE_MUL_NORMAL * (-ip->lr_damage);

    if (ABSF(ip->phys_info.vel_air.x) > ITGSHELL_STOP_VEL_X)
    {
        ip->item_vars.shell.is_damage = TRUE;

        ip->item_hit.update_state = nGMHitUpdateNew;

        itProcessUpdateHitPositions(item_gobj);

        ip->item_hurt.hitstatus = nGMHitStatusNone;

        itMainCopyDamageStats(item_gobj);

        if (ip->ga != nMPKineticsGround)
        {
            itGShellASpinSetStatus(item_gobj);
        }
        else itGShellGSpinSetStatus(item_gobj);
    }
    else
    {
        ip->phys_info.vel_air.x = 0.0F;

        if (ip->ga != nMPKineticsGround)
        {
            itGShellFallSetStatus(item_gobj);
        }
        else itGShellWaitSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80178A90
void itGShellHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_Hold);
}

// 0x80178AC4
sb32 itGShellThrownProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideLanding(item_gobj, 0.2F, 0.5F, itGShellWaitSetStatus);

    return FALSE;
}

// 0x80178AF8
sb32 itGShellThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITGSHELL_GRAVITY, ITGSHELL_TVEL);

    return FALSE;
}

// 0x80178B28
void itGShellThrownSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;

    itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_Thrown);
}

// 0x80178B60
void itGShellDroppedSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;

    itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_Dropped);
}

// 0x80178B98
sb32 itGShellGSpinProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itGShellGSpinUpdateEffect(item_gobj);

    if (!(ip->item_vars.shell.damage_all_delay))
    {
        ip->is_damage_all = TRUE;

        ip->item_vars.shell.damage_all_delay = -1;
    }
    if (ip->item_vars.shell.damage_all_delay != -1)
    {
        ip->item_vars.shell.damage_all_delay--;
    }
    if (ip->lifetime == 0)
    {
        return TRUE;
    }
    else ip->lifetime--;

    return FALSE;
}

// 0x80178C10
sb32 itGShellGSpinProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itGShellFallSetStatus);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), 0.2F, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
        itMainClearOwnerStats(item_gobj);
    }
    return FALSE;
}

// 0x80178C6C
sb32 itGShellCommonProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = nGMHitStatusNormal;

    ip->item_vars.shell.health = mtTrigGetRandomIntRange(ITGSHELL_HEALTH_MAX);

    ip->phys_info.vel_air.y = ITGSHELL_REBOUND_VEL_Y;

    ip->phys_info.vel_air.x = mtTrigGetRandomFloat() * (-ip->phys_info.vel_air.x * ITGSHELL_REBOUND_MUL_X);

    itMainClearOwnerStats(item_gobj);
    itGShellCommonClearAnim(item_gobj);
    itGShellFallSetStatus(item_gobj);

    return FALSE;
}

// 0x80178CF8
sb32 itGShellGASpinProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x += (ip->damage_queue * ITGSHELL_DAMAGE_MUL_ADD * -ip->lr_damage);

    if (ABSF(ip->phys_info.vel_air.x) > ITGSHELL_STOP_VEL_X)
    {
        ip->item_hit.update_state = nGMHitUpdateNew;

        itProcessUpdateHitPositions(item_gobj);
        itMainCopyDamageStats(item_gobj);

        if (ip->ga != FALSE)
        {
            itGShellASpinSetStatus(item_gobj);
        }
        else itGShellGSpinSetStatus(item_gobj);
    }
    else
    {
        ip->phys_info.vel_air.x = 0.0F;

        if (ip->ga != nMPKineticsGround)
        {
            itGShellFallSetStatus(item_gobj);
        }
        else itGShellWaitSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80178E04
void itGShellGSpinInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;

    if (ip->phys_info.vel_air.x > ITGSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = ITGSHELL_CLAMP_VEL_X;
    }
    if (ip->phys_info.vel_air.x < -ITGSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = -ITGSHELL_CLAMP_VEL_X;
    }
    ip->phys_info.vel_air.y = 0.0F;

    if (ip->phys_info.vel_air.x < 0.0F)
    {
        ip->lr = nGMDirectionL;
    }
    else ip->lr = nGMDirectionR;

    ip->item_vars.shell.dust_effect_int = ITGSHELL_EFFECT_SPAWN_INT;
    ip->item_vars.shell.damage_all_delay = ITGSHELL_DAMAGE_ALL_WAIT;

    itGShellGSpinAddAnim(item_gobj);

    ip->is_damage_all = FALSE;

    itMainRefreshHit(item_gobj);
    func_800269C0_275C0(nGMSoundFGMBombHeiWalkStart);
}

// 0x80178EDC
void itGShellGSpinSetStatus(GObj *item_gobj)
{
    itGShellGSpinInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_GSpin);
}

// 0x80178F10
void itGShellASpinInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->phys_info.vel_air.x > ITGSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = ITGSHELL_CLAMP_VEL_X;
    }
    if (ip->phys_info.vel_air.x < -ITGSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = -ITGSHELL_CLAMP_VEL_X;
    }
    if (ip->phys_info.vel_air.x < 0.0F)
    {
        ip->lr = nGMDirectionL;
    }
    else ip->lr = nGMDirectionR;

    ip->is_damage_all = FALSE;

    itMainRefreshHit(item_gobj);
}

// 0x80178FA8
void itGShellASpinSetStatus(GObj *item_gobj)
{
    itGShellASpinInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITGShellStatusDescs, itStatus_GShell_ASpin);
}

// 0x80178FDC
GObj* itGShellMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITGShellItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = dobj->translate.vec.f;

        dobj->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

        omAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = translate;

        dobj->mobj->texture_frame = 1.0F;

        ip = itGetStruct(item_gobj);

        ip->item_hit.can_rehit_shield = TRUE;

        ip->item_vars.shell.health = 1;
        ip->item_vars.shell.is_damage = FALSE;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);

        ip->lifetime = ITGSHELL_LIFETIME;
    }
    return item_gobj;
}

// 0x801790F4
sb32 itGShellCommonProcShield(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}
