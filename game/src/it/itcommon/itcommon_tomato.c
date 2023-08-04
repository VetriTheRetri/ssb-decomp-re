#include <it/item.h>

itCreateDesc itCommon_Tomato_ItemDesc =
{
    It_Kind_Tomato,                         // Item Kind
    &gpItemFileData,                         // Pointer to item file data?
    0xB8,                                   // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itTomato_AFall_ProcUpdate,              // Proc Update
    itTomato_AFall_ProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_Tomato_StatusDesc[itStatus_Tomato_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itTomato_GWait_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itTomato_AFall_ProcUpdate,          // Proc Update
        itTomato_AFall_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Drop)
    {
        itTomato_AFall_ProcUpdate,          // Proc Update
        itTomato_FDrop_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

enum itTomatoStatus
{
    itStatus_Tomato_GWait,
    itStatus_Tomato_AFall,
    itStatus_Tomato_FDrop,
    itStatus_Tomato_EnumMax
};

// 0x801744C0
bool32 itTomato_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITTOMATO_GRAVITY, ITTOMATO_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x801744FC
bool32 itTomato_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itTomato_AFall_SetStatus);

    return FALSE;
}

// 0x80174524
bool32 itTomato_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.3F, 0.5F, itTomato_GWait_SetStatus);
}

// 0x80174554
void itTomato_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Tomato_StatusDesc, itStatus_Tomato_GWait);
}

// 0x80174588
void itTomato_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_Tomato_StatusDesc, itStatus_Tomato_AFall);
}

// 0x801745CC
bool32 itTomato_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.3F, 0.5F, itTomato_GWait_SetStatus);
}

// 0x801745FC
void itTomato_FDrop_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Tomato_StatusDesc, itStatus_Tomato_FDrop);
}

// 0x80174624
GObj* itCommon_Tomato_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Tomato_ItemDesc, pos, vel, flags);
    DObj *joint;
    Vec3f translate;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);
        ip = itGetStruct(item_gobj);
        translate = joint->translate;

        func_80008CC0(joint, 0x2E, 0);

        joint->translate = translate;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}
