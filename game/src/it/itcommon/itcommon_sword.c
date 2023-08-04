#include <it/item.h>

enum itSwordStatus
{
    itStatus_Sword_GWait,
    itStatus_Sword_AFall,
    itStatus_Sword_FHold,
    itStatus_Sword_FThrow,
    itStatus_Sword_FDrop,
    itStatus_Sword_EnumMax
};

itCreateDesc itCommon_Sword_ItemDesc =
{
    It_Kind_Sword,                          // Item Kind
    &gpItemFileData,                         // Pointer to item file data?
    0x190,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itSword_AFall_ProcUpdate,               // Proc Update
    itSword_AFall_ProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_Sword_StatusDesc[itStatus_Sword_EnumMax] = 
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itSword_GWait_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itSword_AFall_ProcUpdate,           // Proc Update
        itSword_AFall_ProcMap,              // Proc Map
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
        itSword_AFall_ProcUpdate,           // Proc Update
        itSword_FThrow_ProcMap,             // Proc Map
        itSword_FThrow_ProcHit,             // Proc Hit
        itSword_FThrow_ProcHit,             // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itSword_FThrow_ProcHit,             // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itSword_AFall_ProcUpdate,           // Proc Update
        itSword_FDrop_ProcMap,              // Proc Map
        itSword_FThrow_ProcHit,             // Proc Hit
        itSword_FThrow_ProcHit,             // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itSword_FThrow_ProcHit,             // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x80174B50
bool32 itSword_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITSWORD_GRAVITY, ITSWORD_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174B8C
bool32 itSword_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itSword_AFall_SetStatus);

    return FALSE;
}

// 0x80174BB4
bool32 itSword_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itSword_GWait_SetStatus);
}

// 0x80174BE4
void itSword_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Sword_StatusDesc, itStatus_Sword_GWait);
}

// 0x80174C18
void itSword_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_Sword_StatusDesc, itStatus_Sword_AFall);
}

// 0x80174C5C
void itSword_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_Sword_StatusDesc, itStatus_Sword_FHold);
}

// 0x80174C90
bool32 itSword_FThrow_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itSword_GWait_SetStatus);
}

// 0x80174CC0
bool32 itSword_FThrow_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x80174CE8
void itSword_FThrow_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Sword_StatusDesc, itStatus_Sword_FThrow);

    DObjGetStruct(item_gobj)->next->rotate.y = F_DEG_TO_RAD(90.0F);
}

// 0x80174D2C
void itSword_FDrop_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itSword_GWait_SetStatus);
}

// 0x80174D5C
void itSword_FDrop_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Sword_StatusDesc, itStatus_Sword_FDrop);

    DObjGetStruct(item_gobj)->next->rotate.y = F_DEG_TO_RAD(90.0F);
}

// 0x80174DA0
GObj* itCommon_Sword_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Sword_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.y = F_DEG_TO_RAD(90.0F);

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}