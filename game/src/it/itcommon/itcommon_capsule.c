#include <it/item.h>

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

itCreateDesc itCommon_Capsule_ItemDesc = 
{
    It_Kind_Capsule,                        // Item Kind
    &gpItemFileData,                         // Pointer to item file data?
    0x50,                                   // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itCapsule_AFall_ProcUpdate,             // Proc Update
    itCapsule_AFall_ProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itCapsule_SDefault_ProcHit              // Proc Damage
};

itStatusDesc itCommon_Capsule_StatusDesc[itStatus_Capsule_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itCapsule_GWait_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itCapsule_SDefault_ProcHit          // Proc Damage
    },

    // Status 1 (Air Fall Wait)
    {
        itCapsule_AFall_ProcUpdate,         // Proc Update
        itCapsule_AFall_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itCapsule_SDefault_ProcHit          // Proc Damage
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
        itCapsule_FThrow_ProcUpdate,        // Proc Update
        itCapsule_FThrow_ProcMap,           // Proc Map
        itCapsule_SDefault_ProcHit,         // Proc Hit
        itCapsule_SDefault_ProcHit,         // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itCapsule_SDefault_ProcHit,         // Proc Set-Off
        itCapsule_SDefault_ProcHit,         // Proc Reflector
        itCapsule_SDefault_ProcHit          // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itCapsule_AFall_ProcUpdate,         // Proc Update
        itCapsule_FDrop_ProcMap,            // Proc Map
        itCapsule_SDefault_ProcHit,         // Proc Hit
        itCapsule_SDefault_ProcHit,         // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itCapsule_SDefault_ProcHit,         // Proc Set-Off
        itCapsule_SDefault_ProcHit,         // Proc Reflector
        itCapsule_SDefault_ProcHit          // Proc Damage
    },

    // Status 5 (Fighter Hold)
    {
        itCapsule_NExplode_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x80173F90
bool32 itCapsule_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITCAPSULE_GRAVITY, ITCAPSULE_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80173FCC
bool32 itCapsule_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itCapsule_AFall_SetStatus);

    return FALSE;
}

// 0x80173FF4
bool32 itCapsule_SDefault_ProcHit(GObj *item_gobj)
{
    if (func_ovl3_801730D4(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itCapsule_NExplode_CreateGFXGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80174030
bool32 itCapsule_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.4F, itCapsule_GWait_SetStatus);
}

extern itStatusDesc itCommon_Capsule_StatusDesc[]; // Capsule states

// 0x80174064
void itCapsule_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Capsule_StatusDesc, itStatus_Capsule_GWait);
}

// 0x80174098
void itCapsule_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMain_SetItemStatus(item_gobj, itCommon_Capsule_StatusDesc, itStatus_Capsule_AFall);
}

// 0x801740FC
void itCapsule_FHold_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Capsule_StatusDesc, itStatus_Capsule_FHold);
}

// 0x80174124
bool32 itCapsule_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITCAPSULE_GRAVITY, ITCAPSULE_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174160
bool32 itCapsule_FThrow_ProcMap(GObj *item_gobj)
{
    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_MAIN_ALL) != FALSE)
    {
        if (func_ovl3_801730D4(item_gobj) != FALSE)
        {
            return TRUE;
        }
        else itCapsule_NExplode_CreateGFXGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801741B0
void itCapsule_FThrow_SetStatus(GObj *item_gobj) // Capsule gets thrown
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_damage_all = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMain_SetItemStatus(item_gobj, itCommon_Capsule_StatusDesc, itStatus_Capsule_FThrow);
}

// 0x801741F0
bool32 func_ovl3_801741F0(GObj *item_gobj) // Unused
{
    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x80174214
bool32 itCapsule_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.4F, itCapsule_GWait_SetStatus);
}

// 0x80174248
void itCapsule_FDrop_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Capsule_StatusDesc, itStatus_Capsule_FDrop);
}

extern intptr_t itCapsule_HitEvent_Offset; // D_NF_00000098

// 0x80174270
bool32 itCapsule_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITCAPSULE_EXPLODE_FRAME_END)
    {
        return TRUE;
    }
    itMain_UpdateHitEvent(item_gobj, itGetHitEvent(itCommon_Capsule_ItemDesc, itCapsule_HitEvent_Offset)); // (itHitEvent*) ((uintptr_t)*itCommon_Capsule_ItemDesc.p_file + (intptr_t)&D_NF_00000098); Linker thing

    return FALSE;
}

GObj* itCommon_Capsule_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Capsule_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}

// 0x80174340
void itCapsule_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_index = 0;
    ip->item_hit.hit_sfx = gmSound_SFX_ExplodeL;
    ip->item_hit.stale = ITEM_STALE_DEFAULT;

    func_800269C0(1);

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.rebound = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMain_ClearOwnerStats(item_gobj);
    itMain_RefreshHit(item_gobj);

    itMain_UpdateHitEvent(item_gobj, itGetHitEvent(itCommon_Capsule_ItemDesc, itCapsule_HitEvent_Offset)); // Linker thing
}

// 0x801743F4
void itCapsule_NExplode_SetStatus(GObj *item_gobj)
{
    itCapsule_NExplode_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Capsule_StatusDesc, itStatus_Capsule_NExplode);
}

// 0x80174428
void itCapsule_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    efParticle *ep;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate);

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ep->effect_info->scale.y = ep->effect_info->scale.z = ITCAPSULE_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->unk_0x54 = 2;

    itCapsule_NExplode_SetStatus(item_gobj);
}