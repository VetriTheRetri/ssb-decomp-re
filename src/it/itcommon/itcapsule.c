#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITCapsuleItemAttributes;   // 0x00000050
extern intptr_t lITCapsuleHitEvents;        // 0x00000098

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITCapsuleItemDesc = 
{
    nITKindCapsule,                         // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITCapsuleItemAttributes,              // Offset of item attributes in file?
    
    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,             // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itCapsuleFallProcUpdate,                // Proc Update
    itCapsuleFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itCapsuleCommonProcHit                  // Proc Damage
};

itStatusDesc dITCapsuleStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itCapsuleWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itCapsuleCommonProcHit              // Proc Damage
    },

    // Status 1 (Air Fall Wait)
    {
        itCapsuleFallProcUpdate,            // Proc Update
        itCapsuleFallProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itCapsuleCommonProcHit              // Proc Damage
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
        itCapsuleThrownProcUpdate,          // Proc Update
        itCapsuleThrownProcMap,             // Proc Map
        itCapsuleCommonProcHit,             // Proc Hit
        itCapsuleCommonProcHit,             // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itCapsuleCommonProcHit,             // Proc Set-Off
        itCapsuleCommonProcHit,             // Proc Reflector
        itCapsuleCommonProcHit              // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itCapsuleFallProcUpdate,            // Proc Update
        itCapsuleDroppedProcMap,            // Proc Map
        itCapsuleCommonProcHit,             // Proc Hit
        itCapsuleCommonProcHit,             // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itCapsuleCommonProcHit,             // Proc Set-Off
        itCapsuleCommonProcHit,             // Proc Reflector
        itCapsuleCommonProcHit              // Proc Damage
    },

    // Status 5 (Fighter Hold)
    {
        itCapsuleExplodeProcUpdate,         // Proc Update
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

enum itCapsuleStatus
{
    nITCapsuleStatusWait,
    nITCapsuleStatusFall,
    nITCapsuleStatusHold,
    nITCapsuleStatusThrown,
    nITCapsuleStatusDropped,
    nITCapsuleStatusExplode,
    nITCapsuleStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80173F90
sb32 itCapsuleFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITCAPSULE_GRAVITY, ITCAPSULE_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80173FCC
sb32 itCapsuleWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itCapsuleFallSetStatus);

    return FALSE;
}

// 0x80173FF4
sb32 itCapsuleCommonProcHit(GObj *item_gobj)
{
    if (itMainMakeContainerItem(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itCapsuleExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80174030
sb32 itCapsuleFallProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITCAPSULE_MAP_REBOUND_COMMON, ITCAPSULE_MAP_REBOUND_GROUND, itCapsuleWaitSetStatus);
}

// 0x80174064
void itCapsuleWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDescs, nITCapsuleStatusWait);
}

// 0x80174098
void itCapsuleFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = nGMHitStatusNormal;

    itMainSetItemStatus(item_gobj, dITCapsuleStatusDescs, nITCapsuleStatusFall);
}

// 0x801740FC
void itCapsuleHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDescs, nITCapsuleStatusHold);
}

// 0x80174124
sb32 itCapsuleThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITCAPSULE_GRAVITY, ITCAPSULE_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174160
sb32 itCapsuleThrownProcMap(GObj *item_gobj)
{
    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE)
    {
        if (itMainMakeContainerItem(item_gobj) != FALSE)
        {
            return TRUE;
        }
        else itCapsuleExplodeMakeEffectGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801741B0
void itCapsuleThrownSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = nGMHitStatusNormal;

    itMainSetItemStatus(item_gobj, dITCapsuleStatusDescs, nITCapsuleStatusThrown);
}

// 0x801741F0
sb32 func_ovl3_801741F0(GObj *item_gobj) // Unused
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80174214
sb32 itCapsuleDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITCAPSULE_MAP_REBOUND_COMMON, ITCAPSULE_MAP_REBOUND_GROUND, itCapsuleWaitSetStatus);
}

// 0x80174248
void itCapsuleDroppedSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDescs, nITCapsuleStatusDropped);
}

// 0x80174270
sb32 itCapsuleExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITCAPSULE_EXPLODE_FRAME_END)
    {
        return TRUE;
    }
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITCapsuleItemDesc, lITCapsuleHitEvents)); // (itHitEvent*) ((uintptr_t)*dITCapsuleItemDesc.p_file + (intptr_t)&D_NF_00000098); Linker thing

    return FALSE;
}

GObj* itCapsuleMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITCapsuleItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// 0x80174340
void itCapsuleExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_id = 0;
    ip->item_hit.hit_sfx = nGMSoundFGMExplodeL;
    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;

    func_800269C0_275C0(nGMSoundFGMExplodeL);

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.element = nGMHitElementFire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = nGMHitStatusNone;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);

    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITCapsuleItemDesc, lITCapsuleHitEvents)); // Linker thing
}

// 0x801743F4
void itCapsuleExplodeSetStatus(GObj *item_gobj)
{
    itCapsuleExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDescs, nITCapsuleStatusExplode);
}

// 0x80174428
void itCapsuleExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    efParticle *ep;

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ep = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ep->effect_info->scale.y = ep->effect_info->scale.z = ITCAPSULE_EXPLODE_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itCapsuleExplodeSetStatus(item_gobj);
}
