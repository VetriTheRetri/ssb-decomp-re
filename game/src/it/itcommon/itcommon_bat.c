#include <it/item.h>

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189990
itCreateDesc itCommon_Bat_ItemDesc =
{
    It_Kind_Bat,                            // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x1D8,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBat_AFall_ProcUpdate,                 // Proc Update
    itBat_AFall_ProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x801899C4
itStatusDesc itCommon_Bat_StatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itBat_GWait_ProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBat_AFall_ProcUpdate,             // Proc Update
        itBat_AFall_ProcMap,                // Proc Map
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
        itBat_FThrow_ProcUpdate,            // Proc Update
        itBat_FThrow_ProcMap,               // Proc Map
        itBat_FThrow_ProcHit,               // Proc Hit
        itBat_FThrow_ProcHit,               // Proc Shield
        itCommonSDefaultProcHop,          // Proc Hop
        itBat_FThrow_ProcHit,               // Proc Set-Off
        itCommonSDefaultProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itBat_AFall_ProcUpdate,             // Proc Update
        itBat_FDrop_ProcMap,                // Proc Map
        itBat_FThrow_ProcHit,               // Proc Hit
        itBat_FThrow_ProcHit,               // Proc Shield
        itCommonSDefaultProcHop,          // Proc Hop
        itBat_FThrow_ProcHit,               // Proc Set-Off
        itCommonSDefaultProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itBatStatus
{
    itStatus_Bat_GWait,
    itStatus_Bat_AFall,
    itStatus_Bat_FHold,
    itStatus_Bat_FThrow,
    itStatus_Bat_FDrop,
    itStatus_Bat_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80174E30 
sb32 itBat_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBAT_GRAVITY, ITBAT_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174E68
sb32 itBat_GWait_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itBat_AFall_SetStatus);

    return FALSE;
}

// 0x80174E90
sb32 itBat_AFall_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBat_GWait_SetStatus);

    return FALSE;
}

// 0x80174EC4
void itBat_GWait_SetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_Bat_StatusDesc, itStatus_Bat_GWait);
}

// 0x80174EF8
void itBat_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMainSetItemStatus(item_gobj, itCommon_Bat_StatusDesc, itStatus_Bat_AFall);
}

// 0x80174F3C
void itBat_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(0.0F);

    itMainSetItemStatus(item_gobj, itCommon_Bat_StatusDesc, itStatus_Bat_FHold);
}

// 0x80174F70
sb32 itBat_FThrow_ProcUpdate(GObj *item_gobj)
{
    itMainApplyGravityClampTVel(itGetStruct(item_gobj), ITBAT_GRAVITY, ITBAT_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174FA8
sb32 itBat_FThrow_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBat_GWait_SetStatus);
}

// 0x80174FD8
sb32 itBat_FThrow_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->weapon_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175000
void itBat_FThrow_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_Bat_StatusDesc, itStatus_Bat_FThrow);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32
}

// 0x80175044
sb32 itBat_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBat_GWait_SetStatus);
}

// 0x80175074
void itBat_FDrop_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_Bat_StatusDesc, itStatus_Bat_FDrop);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32
}

// 0x801750B8
GObj* itCommon_Bat_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Bat_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}
