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
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITCapsuleItemDesc = 
{
    It_Kind_Capsule,                        // Item Kind
    &gITemFileData,                         // Pointer to item file data?
    &lITCapsuleItemAttributes,              // Offset of item attributes in file?
    
    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itCapsuleAFallProcUpdate,               // Proc Update
    itCapsuleAFallProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itCapsuleSDefaultProcHit                // Proc Damage
};

itStatusDesc dITCapsuleStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itCapsuleGWaitProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itCapsuleSDefaultProcHit            // Proc Damage
    },

    // Status 1 (Air Fall Wait)
    {
        itCapsuleAFallProcUpdate,           // Proc Update
        itCapsuleAFallProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itCapsuleSDefaultProcHit            // Proc Damage
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
        itCapsuleFThrowProcUpdate,          // Proc Update
        itCapsuleFThrowProcMap,             // Proc Map
        itCapsuleSDefaultProcHit,           // Proc Hit
        itCapsuleSDefaultProcHit,           // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itCapsuleSDefaultProcHit,           // Proc Set-Off
        itCapsuleSDefaultProcHit,           // Proc Reflector
        itCapsuleSDefaultProcHit            // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itCapsuleAFallProcUpdate,           // Proc Update
        itCapsuleFDropProcMap,              // Proc Map
        itCapsuleSDefaultProcHit,           // Proc Hit
        itCapsuleSDefaultProcHit,           // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itCapsuleSDefaultProcHit,           // Proc Set-Off
        itCapsuleSDefaultProcHit,           // Proc Reflector
        itCapsuleSDefaultProcHit            // Proc Damage
    },

    // Status 5 (Fighter Hold)
    {
        itCapsuleNExplodeProcUpdate,        // Proc Update
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
    itStatus_Capsule_GWait,
    itStatus_Capsule_AFall,
    itStatus_Capsule_FHold,
    itStatus_Capsule_FThrow,
    itStatus_Capsule_FDrop,
    itStatus_Capsule_NExplode,
    itStatus_Capsule_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80173F90
sb32 itCapsuleAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITCAPSULE_GRAVITY, ITCAPSULE_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80173FCC
sb32 itCapsuleGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itCapsuleAFallSetStatus);

    return FALSE;
}

// 0x80173FF4
sb32 itCapsuleSDefaultProcHit(GObj *item_gobj)
{
    if (itMainMakeContainerItem(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itCapsuleNExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80174030
sb32 itCapsuleAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.4F, itCapsuleGWaitSetStatus);
}

// 0x80174064
void itCapsuleGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDesc, itStatus_Capsule_GWait);
}

// 0x80174098
void itCapsuleAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMainSetItemStatus(item_gobj, dITCapsuleStatusDesc, itStatus_Capsule_AFall);
}

// 0x801740FC
void itCapsuleFHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDesc, itStatus_Capsule_FHold);
}

// 0x80174124
sb32 itCapsuleFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITCAPSULE_GRAVITY, ITCAPSULE_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174160
sb32 itCapsuleFThrowProcMap(GObj *item_gobj)
{
    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE)
    {
        if (itMainMakeContainerItem(item_gobj) != FALSE)
        {
            return TRUE;
        }
        else itCapsuleNExplodeMakeEffectGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801741B0
void itCapsuleFThrowSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMainSetItemStatus(item_gobj, dITCapsuleStatusDesc, itStatus_Capsule_FThrow);
}

// 0x801741F0
sb32 func_ovl3_801741F0(GObj *item_gobj) // Unused
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80174214
sb32 itCapsuleFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.4F, itCapsuleGWaitSetStatus);
}

// 0x80174248
void itCapsuleFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDesc, itStatus_Capsule_FDrop);
}

// 0x80174270
sb32 itCapsuleNExplodeProcUpdate(GObj *item_gobj)
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

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}

// 0x80174340
void itCapsuleNExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_index = 0;
    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;
    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;

    func_800269C0(alSound_SFX_ExplodeL);

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);

    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITCapsuleItemDesc, lITCapsuleHitEvents)); // Linker thing
}

// 0x801743F4
void itCapsuleNExplodeSetStatus(GObj *item_gobj)
{
    itCapsuleNExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITCapsuleStatusDesc, itStatus_Capsule_NExplode);
}

// 0x80174428
void itCapsuleNExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    efParticle *ep;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f);

    if (ep != NULL)
    {
        ep->effect_info->scale.vec.f.x = ep->effect_info->scale.vec.f.y = ep->effect_info->scale.vec.f.z = ITCAPSULE_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itCapsuleNExplodeSetStatus(item_gobj);
}
