#include <it/item.h>

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

itCreateDesc itCommon_Capsule_ItemDesc =
{
    It_Kind_Egg,                            // Item Kind
    &gItemFileData,                        // Pointer to item file data?
    0xACC,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itEgg_AFall_ProcUpdate,                 // Proc Update
    itEgg_AFall_ProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itEgg_SDefault_ProcHit                  // Proc Damage
};

itStatusDesc itCommon_Egg_StatusDesc[itStatus_Egg_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itEgg_GWait_ProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itEgg_SDefault_ProcHit              // Proc Damage
    },

    // Status 1 (Air Fall Wait)
    {
        itEgg_AFall_ProcUpdate,             // Proc Update
        itEgg_AFall_ProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itEgg_SDefault_ProcHit              // Proc Damage
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
        itEgg_FThrow_ProcUpdate,            // Proc Update
        itEgg_FThrow_ProcMap,               // Proc Map
        itEgg_SDefault_ProcHit,             // Proc Hit
        itEgg_SDefault_ProcHit,             // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itEgg_SDefault_ProcHit,             // Proc Set-Off
        itEgg_SDefault_ProcHit,             // Proc Reflector
        itEgg_SDefault_ProcHit              // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itEgg_AFall_ProcUpdate,             // Proc Update
        itEgg_FDrop_ProcMap,                // Proc Map
        itEgg_SDefault_ProcHit,             // Proc Hit
        itEgg_SDefault_ProcHit,             // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itEgg_SDefault_ProcHit,             // Proc Set-Off
        itEgg_SDefault_ProcHit,             // Proc Reflector
        itEgg_SDefault_ProcHit              // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itEgg_NExplode_ProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x801815C0
sb32 itEgg_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITEGG_GRAVITY, ITEGG_T_VEL);
    itManager_UpdateSpin(item_gobj);

    joint->next->rotate.vec.f.z = joint->rotate.vec.f.z;

    return FALSE;
}

// 0x80181618
sb32 itEgg_GWait_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itEgg_AFall_SetStatus);

    return FALSE;
}

// 0x80181640
sb32 itEgg_SDefault_ProcHit(GObj *item_gobj)
{
    if (func_ovl3_801730D4(item_gobj) != FALSE)
    {
        efParticle_EggBreak_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

        return TRUE;
    }
    else itEgg_NExplode_CreateGFXGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80181688
sb32 itEgg_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itEgg_GWait_SetStatus);
}

// 0x801816B8
void itEgg_GWait_SetModelVars(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);

    joint->scale.vec.f.x = joint->scale.vec.f.y = joint->scale.vec.f.z = 1.0F;

    joint->next->rotate.vec.f.z = joint->rotate.vec.f.z;
}

// 0x801816E0
void itEgg_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itEgg_GWait_SetModelVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Egg_StatusDesc, itStatus_Egg_GWait);
}

// 0x8018171C
void itEgg_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->is_damage_all = TRUE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_Egg_StatusDesc, itStatus_Egg_AFall);
}

// 0x80181778
void itEgg_FHold_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Egg_StatusDesc, itStatus_Egg_FHold);
}

// 0x801817A0
sb32 itEgg_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITEGG_GRAVITY, ITEGG_T_VEL);
    itManager_UpdateSpin(item_gobj);

    joint->next->rotate.vec.f.z = joint->rotate.vec.f.z;

    return FALSE;
}

// 0x801817F8
sb32 itEgg_FThrow_ProcMap(GObj *item_gobj)
{
    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE)
    {
        if (func_ovl3_801730D4(item_gobj) != FALSE)
        {
            efParticle_EggBreak_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

            return TRUE;
        }
        else itEgg_NExplode_CreateGFXGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80181854
void itEgg_FThrow_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMain_SetItemStatus(item_gobj, itCommon_Egg_StatusDesc, itStatus_Egg_FThrow);
}

sb32 func_ovl3_80181894(GObj *item_gobj) // Unused
{
    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x801818B8
sb32 itEgg_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itEgg_GWait_SetStatus);
}

// 0x801818E8
void itEgg_FDrop_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMain_SetItemStatus(item_gobj, itCommon_Egg_StatusDesc, itStatus_Egg_FDrop);
}

extern itCreateDesc itCommon_Egg_ItemDesc;
extern intptr_t D_NF_00000B14;

// 0x80181928
sb32 itEgg_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITEGG_EXPLODE_GFX_WAIT)
    {
        efParticle_EggBreak_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

        return TRUE;
    }
    itMain_UpdateHitEvent(item_gobj, (itHitEvent*) ((uintptr_t)*itCommon_Egg_ItemDesc.p_file + (intptr_t)&D_NF_00000B14) ); // Linker thing

    return FALSE;
}

// 0x80181998
GObj* itCommon_Egg_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Egg_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *egg_ip = itGetStruct(item_gobj);

        egg_ip->is_unused_item_bool = TRUE;

        egg_ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(egg_ip);

        func_80008CC0(joint->next, 0x2EU, 0U);

        joint->translate.vec.f = *pos;

        if (flags & ITEM_MASK_SPAWN_ITEM)
        {
            itStruct *spawn_ip = itGetStruct(spawn_gobj);

            if ((spawn_ip->it_kind == It_Kind_MLucky) && (lbRandom_GetIntRange(2) == 0))
            {
                joint->next->rotate.vec.f.y = PI32;

                egg_ip->phys_info.vel_air.x = -egg_ip->phys_info.vel_air.x;

                egg_ip->lr = -egg_ip->lr;
            }
        }
    }
    return item_gobj;
}

extern intptr_t D_NF_00000098;

// 0x80181AA8
void itEgg_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_event_index = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;
    ip->item_hit.stale = ITEM_STALE_DEFAULT;

    func_800269C0(alSound_SFX_ExplodeL);

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;
    ip->item_hit.can_setoff = FALSE;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMain_ClearOwnerStats(item_gobj);
    itMain_RefreshHit(item_gobj);
    itMain_UpdateHitEvent(item_gobj, (itHitEvent*) ( (uintptr_t)*itCommon_Egg_ItemDesc.p_file + (intptr_t)&D_NF_00000098) ); // Linker thing
}

// 0x80181B5C
void itEgg_NExplode_SetStatus(GObj *item_gobj)
{
    itEgg_NExplode_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Egg_StatusDesc, itStatus_Egg_NExplode);
}

// 0x80181B90
void itEgg_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    efParticle *ep;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate.vec.f);

    if (ep != NULL)
    {
        ep->effect_info->scale.vec.f.x = ep->effect_info->scale.vec.f.y = ep->effect_info->scale.vec.f.z = ITEGG_EXPLODE_GFX_SCALE;
    }

    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_RENDERFLAG_HIDDEN;

    itEgg_NExplode_SetStatus(item_gobj);
}