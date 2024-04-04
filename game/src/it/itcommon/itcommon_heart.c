#include <it/item.h>

enum itHeartStatus
{
    itStatus_Heart_GWait,
    itStatus_Heart_AFall,
    itStatus_Heart_FDrop,
    itStatus_Heart_EnumMax
};

itCreateDesc itCommon_Heart_ItemDesc =
{
    It_Kind_Heart,                          // Item Kind
    &gItemFileData,                        // Pointer to item file data?
    0x100,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itHeart_AFall_ProcUpdate,               // Proc Update
    itHeart_AFall_ProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_Heart_StatusDesc[itStatus_Heart_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHeart_GWait_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHeart_AFall_ProcUpdate,           // Proc Update
        itHeart_AFall_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Drop)
    {
        itHeart_AFall_ProcUpdate,           // Proc Update
        itHeart_FDrop_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x801746F0
sb32 itHeart_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITHEART_GRAVITY, ITHEART_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174728
sb32 itHeart_GWait_ProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itHeart_AFall_SetStatus);

    return FALSE;
}

// 0x80174750
sb32 itHeart_AFall_ProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.1F, 0.0F, itHeart_GWait_SetStatus);
}

// 0x80174780
void itHeart_GWait_SetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_Heart_StatusDesc, itStatus_Heart_GWait);
}

// 0x801747B4
void itHeart_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, itCommon_Heart_StatusDesc, itStatus_Heart_AFall);
}

// 0x801747F8
sb32 itHeart_FDrop_ProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.1F, 0.0F, itHeart_GWait_SetStatus);
}

// 0x80174828
void itHeart_FDrop_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_Heart_StatusDesc, itStatus_Heart_FDrop);
}

// 0x80174850
GObj* itCommon_Heart_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &itCommon_Heart_ItemDesc, pos, vel, flags);
    DObj *joint;
    Vec3f translate;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);
        ip = itGetStruct(item_gobj);
        translate = joint->translate.vec.f;

        omAddOMMtxForDObjFixed(joint, 0x2E, 0);

        joint->translate.vec.f = translate;

        joint->rotate.vec.f.z = 0.0F;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}