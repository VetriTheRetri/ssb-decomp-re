#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITBatItemAttributes;       // 0x000001D8

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x80189990
itCreateDesc dITBatItemDesc =
{
    nITKindBat,                            // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITBatItemAttributes,                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBatAFallProcUpdate,                   // Proc Update
    itBatAFallProcMap,                      // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x801899C4
itStatusDesc dITBatStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itBatGWaitProcMap,                  // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBatAFallProcUpdate,               // Proc Update
        itBatAFallProcMap,                  // Proc Map
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
        itBatFThrowProcUpdate,              // Proc Update
        itBatFThrowProcMap,                 // Proc Map
        itBatFThrowProcHit,                 // Proc Hit
        itBatFThrowProcHit,                 // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itBatFThrowProcHit,                 // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itBatAFallProcUpdate,               // Proc Update
        itBatFDropProcMap,                  // Proc Map
        itBatFThrowProcHit,                 // Proc Hit
        itBatFThrowProcHit,                 // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itBatFThrowProcHit,                 // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
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
sb32 itBatAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITBAT_GRAVITY, ITBAT_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174E68
sb32 itBatGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBatAFallSetStatus);

    return FALSE;
}

// 0x80174E90
sb32 itBatAFallProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBatGWaitSetStatus);

    return FALSE;
}

// 0x80174EC4
void itBatGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITBatStatusDesc, itStatus_Bat_GWait);
}

// 0x80174EF8
void itBatAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITBatStatusDesc, itStatus_Bat_AFall);
}

// 0x80174F3C
void itBatFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(0.0F);

    itMainSetItemStatus(item_gobj, dITBatStatusDesc, itStatus_Bat_FHold);
}

// 0x80174F70
sb32 itBatFThrowProcUpdate(GObj *item_gobj)
{
    itMainApplyGClampTVel(itGetStruct(item_gobj), ITBAT_GRAVITY, ITBAT_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174FA8
sb32 itBatFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBatGWaitSetStatus);
}

// 0x80174FD8
sb32 itBatFThrowProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175000
void itBatFThrowSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITBatStatusDesc, itStatus_Bat_FThrow);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32
}

// 0x80175044
sb32 itBatFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBatGWaitSetStatus);
}

// 0x80175074
void itBatFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITBatStatusDesc, itStatus_Bat_FDrop);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32
}

// 0x801750B8
GObj* itBatMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITBatItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
