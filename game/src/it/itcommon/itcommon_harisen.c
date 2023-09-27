#include <it/item.h>

enum itHarisenStatus
{
    itStatus_Harisen_GWait,
    itStatus_Harisen_AFall,
    itStatus_Harisen_FHold,
    itStatus_Harisen_FThrow,
    itStatus_Harisen_FDrop,
    itStatus_Harisen_EnumMax
};

intptr_t D_ovl3_80189A70[2] = { 0x2250, 0x2270 };

itCreateDesc itCommon_Harisen_ItemDesc =
{
    It_Kind_Harisen,                        // Item Kind
    &gItemFileData,                        // Pointer to item file data?
    0x220,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itHarisen_AFall_ProcUpdate,             // Proc Update
    itHarisen_AFall_ProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_Harisen_StatusDesc[itStatus_Harisen_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHarisen_GWait_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHarisen_AFall_ProcUpdate,         // Proc Update
        itHarisen_AFall_ProcMap,            // Proc Map
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
        itHarisen_FThrow_ProcUpdate,        // Proc Update
        itHarisen_FThrow_ProcMap,           // Proc Map
        itHarisen_SDefault_ProcHit,         // Proc Hit
        itHarisen_SDefault_ProcHit,         // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itHarisen_SDefault_ProcHit,         // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itHarisen_AFall_ProcUpdate,         // Proc Update
        itHarisen_FDrop_ProcMap,            // Proc Map
        itHarisen_SDefault_ProcHit,         // Proc Hit
        itHarisen_SDefault_ProcHit,         // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itHarisen_SDefault_ProcHit,         // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x80175140
void itHairsen_SDefault_SetScale(GObj *item_gobj, f32 scale)
{
    DObjGetStruct(item_gobj)->scale.vec.f.x = scale;
    DObjGetStruct(item_gobj)->scale.vec.f.y = scale;
    DObjGetStruct(item_gobj)->scale.vec.f.z = scale;
}

// 0x80175160
bool32 itHarisen_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITHARISEN_GRAVITY, ITHARISEN_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80175198
bool32 itHarisen_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itHarisen_AFall_SetStatus);

    return FALSE;
}

// 0x801751C0
bool32 itHarisen_AFall_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.0F, 0.3F, itHarisen_GWait_SetStatus);

    return FALSE;
}

// 0x801751F4
void itHarisen_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_Harisen_StatusDesc, itStatus_Harisen_GWait);
}

// 0x80175228
void itHarisen_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_Harisen_StatusDesc, itStatus_Harisen_AFall);
}

// 0x8017526C
void itHarisen_FHold_SetStatus(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);

    func_80008CC0(joint, 0x20, 0);

    joint->rotate.vec.f.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_Harisen_StatusDesc, itStatus_Harisen_FHold);
}

// 0x801752C0
bool32 itHarisen_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITHARISEN_GRAVITY, ITHARISEN_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x801752F8
bool32 itHarisen_FThrow_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.0F, 0.3F, itHarisen_GWait_SetStatus);
}

// 0x80175328
bool32 itHarisen_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175350
void itHarisen_FThrow_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Harisen_StatusDesc, itStatus_Harisen_FThrow);

    DObjGetStruct(item_gobj)->next->rotate.vec.f.y = F_DEG_TO_RAD(-90.0F); // HALF_PI32
}

// 0x80175394
bool32 itHarisen_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.0F, 0.3F, itHarisen_GWait_SetStatus);
}

// 0x801753C4
void itHarisen_FDrop_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_Harisen_StatusDesc, itStatus_Harisen_FDrop);

    DObjGetStruct(item_gobj)->next->rotate.vec.f.y = F_DEG_TO_RAD(-90.0F);
}

extern intptr_t D_NF_00002198;

void func_ovl3_80175408(GObj *item_gobj, s32 index) // Unused
{
    itStruct *ip = itGetStruct(item_gobj);

    func_8000BD8C(item_gobj, ((D_ovl3_80189A70[index] + (uintptr_t)ip->attributes->model_desc) - (intptr_t)&D_NF_00002198), 0.0F); // Linker thing
    func_8000DF34(item_gobj);
}

// 0x80175460
GObj* itCommon_Harisen_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Harisen_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}