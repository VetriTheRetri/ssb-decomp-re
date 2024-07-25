#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITEggItemAttributes;       // 0x00000ACC
extern intptr_t lITCapsuleHitEvents;        // 0x00000098
extern intptr_t lITEggHitEvents;            // 0x00000B14

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

itCreateDesc dITEggItemDesc =
{
    It_Kind_Egg,                            // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITEggItemAttributes,                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itEggAFallProcUpdate,                   // Proc Update
    itEggAFallProcMap,                      // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itEggSDefaultProcHit                    // Proc Damage
};

itStatusDesc dITEggStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itEggGWaitProcMap,                  // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itEggSDefaultProcHit                // Proc Damage
    },

    // Status 1 (Air Fall Wait)
    {
        itEggAFallProcUpdate,               // Proc Update
        itEggAFallProcMap,                  // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itEggSDefaultProcHit                // Proc Damage
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
        itEggFThrowProcUpdate,              // Proc Update
        itEggFThrowProcMap,                 // Proc Map
        itEggSDefaultProcHit,               // Proc Hit
        itEggSDefaultProcHit,               // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itEggSDefaultProcHit,               // Proc Set-Off
        itEggSDefaultProcHit,               // Proc Reflector
        itEggSDefaultProcHit                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itEggAFallProcUpdate,               // Proc Update
        itEggFDropProcMap,                  // Proc Map
        itEggSDefaultProcHit,               // Proc Hit
        itEggSDefaultProcHit,               // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itEggSDefaultProcHit,               // Proc Set-Off
        itEggSDefaultProcHit,               // Proc Reflector
        itEggSDefaultProcHit                // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itEggNExplodeProcUpdate,            // Proc Update
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

enum itEggStatus
{
    itStatus_Egg_GWait,
    itStatus_Egg_AFall,
    itStatus_Egg_FHold,
    itStatus_Egg_FThrow,
    itStatus_Egg_FDrop,
    itStatus_Egg_NExplode,
    itStatus_Egg_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801815C0
sb32 itEggAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITEGG_GRAVITY, ITEGG_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    dobj->child->rotate.vec.f.z = dobj->rotate.vec.f.z;

    return FALSE;
}

// 0x80181618
sb32 itEggGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itEggAFallSetStatus);

    return FALSE;
}

// 0x80181640
sb32 itEggSDefaultProcHit(GObj *item_gobj)
{
    if (itMainMakeContainerItem(item_gobj) != FALSE)
    {
        efManagerEggBreakMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

        return TRUE;
    }
    else itEggNExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80181688
sb32 itEggAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itEggGWaitSetStatus);
}

// 0x801816B8
void itEggGWaitSetModelVars(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 1.0F;

    dobj->child->rotate.vec.f.z = dobj->rotate.vec.f.z;
}

// 0x801816E0
void itEggGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itEggGWaitSetModelVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITEggStatusDesc, itStatus_Egg_GWait);
}

// 0x8018171C
void itEggAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->is_damage_all = TRUE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITEggStatusDesc, itStatus_Egg_AFall);
}

// 0x80181778
void itEggFHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITEggStatusDesc, itStatus_Egg_FHold);
}

// 0x801817A0
sb32 itEggFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITEGG_GRAVITY, ITEGG_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    dobj->child->rotate.vec.f.z = dobj->rotate.vec.f.z;

    return FALSE;
}

// 0x801817F8
sb32 itEggFThrowProcMap(GObj *item_gobj)
{
    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE)
    {
        if (itMainMakeContainerItem(item_gobj) != FALSE)
        {
            efManagerEggBreakMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

            return TRUE;
        }
        else itEggNExplodeMakeEffectGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80181854
void itEggFThrowSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMainSetItemStatus(item_gobj, dITEggStatusDesc, itStatus_Egg_FThrow);
}

// 0x80181894
sb32 func_ovl3_80181894(GObj *item_gobj) // Unused
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x801818B8
sb32 itEggFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itEggGWaitSetStatus);
}

// 0x801818E8
void itEggFDropSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMainSetItemStatus(item_gobj, dITEggStatusDesc, itStatus_Egg_FDrop);
}

// 0x80181928
sb32 itEggNExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITEGG_EXPLODE_GFX_WAIT)
    {
        efManagerEggBreakMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

        return TRUE;
    }
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITEggItemDesc, lITEggHitEvents)); // Linker thing

    return FALSE;
}

// 0x80181998
GObj* itEggMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITEggItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *egg_ip = itGetStruct(item_gobj);

        egg_ip->is_unused_item_bool = TRUE;

        egg_ip->indicator_gobj = ifCommonItemArrowMakeInterface(egg_ip);

        omAddOMMtxForDObjFixed(dobj->child, 0x2E, 0);

        dobj->translate.vec.f = *pos;

        if (flags & ITEM_MASK_SPAWN_ITEM)
        {
            itStruct *spawn_ip = itGetStruct(spawn_gobj);

            if ((spawn_ip->it_kind == It_Kind_MLucky) && (mtTrigGetRandomIntRange(2) == 0))
            {
                dobj->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32

                egg_ip->phys_info.vel_air.x = -egg_ip->phys_info.vel_air.x;

                egg_ip->lr = -egg_ip->lr;
            }
        }
    }
    return item_gobj;
}

// 0x80181AA8
void itEggNExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_event_index = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;
    ip->item_hit.throw_mul = ITEM_THROW_DEFAULT;

    func_800269C0_275C0(alSound_SFX_ExplodeL);

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;
    ip->item_hit.can_setoff = FALSE;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITEggItemDesc, lITCapsuleHitEvents)); // Linker thing - should this be lITEggHitEvents?
}

// 0x80181B5C
void itEggNExplodeSetStatus(GObj *item_gobj)
{
    itEggNExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITEggStatusDesc, itStatus_Egg_NExplode);
}

// 0x80181B90
void itEggNExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    efParticle *ep;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ep = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ep->effect_info->scale.y = ep->effect_info->scale.z = ITEGG_EXPLODE_GFX_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itEggNExplodeSetStatus(item_gobj);
}
