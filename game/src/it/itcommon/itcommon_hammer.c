#include <it/item.h>

enum itHammerStatus
{
    itStatus_Hammer_GWait,
    itStatus_Hammer_AFall,
    itStatus_Hammer_FHold,
    itStatus_Hammer_FThrow,
    itStatus_Hammer_FDrop,
    itStatus_Hammer_EnumMax
};

itCreateDesc itCommon_Hammer_ItemDesc =
{
    It_Kind_Hammer,                         // Item Kind
    &gpItemFileData,                        // Pointer to item file data?
    0x374,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itHammer_AFall_ProcUpdate,              // Proc Update
    itHammer_AFall_ProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_Hammer_StatusDesc[itStatus_Hammer_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHammer_GWait_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHammer_AFall_ProcUpdate,          // Proc Update
        itHammer_AFall_ProcMap,             // Proc Map
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
        itHammer_FThrow_ProcUpdate,         // Proc Update
        itHammer_FThrow_ProcMap,            // Proc Map
        itHammer_SDefault_ProcHit,          // Proc Hit
        itHammer_SDefault_ProcHit,          // Proc Shield
        NULL,                               // Proc Hop
        itHammer_SDefault_ProcHit,          // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itHammer_AFall_ProcUpdate,          // Proc Update
        itHammer_FDrop_ProcMap,             // Proc Map
        itHammer_SDefault_ProcHit,          // Proc Hit
        itHammer_SDefault_ProcHit,          // Proc Shield
        NULL,                               // Proc Hop
        itHammer_SDefault_ProcHit,          // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x80176110
void itHammer_SDefault_SetColAnim(GObj *item_gobj)
{
    itMain_CheckSetColAnimIndex(item_gobj, ITHAMMER_WEAR_COLANIM_ID, ITHAMMER_WEAR_COLANIM_LENGTH);
}

// 0x80176134
bool32 itHammer_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITHAMMER_GRAVITY, ITHAMMER_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017616C
bool32 itHammer_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itHammer_AFall_SetStatus);

    return FALSE;
}

// 0x80176194
bool32 itHammer_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammer_GWait_SetStatus);
}

extern itStatusDesc itCommon_Hammer_StatusDesc[];

// 0x801761C4
void itHammer_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Hammer_StatusDesc, itStatus_Hammer_GWait);
}

extern itStatusDesc itCommon_Hammer_StatusDesc[];

// 0x801761F8
void itHammer_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_Hammer_StatusDesc, itStatus_Hammer_AFall);
}

// 0x8017623C
void itHammer_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_Hammer_StatusDesc, itStatus_Hammer_FHold);
}

// 0x80176270
bool32 itHammer_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITHAMMER_GRAVITY, ITHAMMER_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x801762A8
bool32 itHammer_FThrow_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammer_GWait_SetStatus);
}

// 0x801762D8
bool32 itHammer_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x80176300
void itHammer_FThrow_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Hammer_StatusDesc, itStatus_Hammer_FThrow);

    DObjGetStruct(item_gobj)->next->rotate.y = HALF_PI32;

    ftSpecialItem_BGMCheckFighters();
}

// 0x80176348
bool32 itHammer_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammer_GWait_SetStatus);
}

// 0x80176378
void itHammer_FDrop_SetStatus(GObj *item_gobj)
{
    itMain_ResetColAnim(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Hammer_StatusDesc, itStatus_Hammer_FDrop);

    DObjGetStruct(item_gobj)->next->rotate.y = HALF_PI32;

    ftSpecialItem_BGMCheckFighters();
}

// 0x8017633C8
GObj* itCommon_Hammer_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Hammer_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.y = HALF_PI32;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}