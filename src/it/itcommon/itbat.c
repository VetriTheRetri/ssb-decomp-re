#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITBatItemAttributes;       // 0x000001D8

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189990
itCreateDesc dITBatItemDesc =
{
    nITKindBat,                             // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITBatItemAttributes,                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itBatFallProcUpdate,                    // Proc Update
    itBatFallProcMap,                       // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x801899C4
itStatusDesc dITBatStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itBatWaitProcMap,                   // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBatFallProcUpdate,                // Proc Update
        itBatFallProcMap,                   // Proc Map
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
        itBatThrownProcUpdate,              // Proc Update
        itBatThrownProcMap,                 // Proc Map
        itBatThrownProcHit,                 // Proc Hit
        itBatThrownProcHit,                 // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itBatThrownProcHit,                 // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itBatFallProcUpdate,                // Proc Update
        itBatDroppedProcMap,                // Proc Map
        itBatThrownProcHit,                 // Proc Hit
        itBatThrownProcHit,                 // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itBatThrownProcHit,                 // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
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
    nITBatStatusWait,
    nITBatStatusFall,
    nITBatStatusHold,
    nITBatStatusThrown,
    nITBatStatusDropped,
    nITBatStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80174E30 
sb32 itBatFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBAT_GRAVITY, ITBAT_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174E68
sb32 itBatWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBatFallSetStatus);

    return FALSE;
}

// 0x80174E90
sb32 itBatFallProcMap(GObj *item_gobj)
{
    itMapCheckDestroyDropped(item_gobj, ITBAT_MAP_REBOUND_COMMON, ITBAT_MAP_REBOUND_GROUND, itBatWaitSetStatus);

    return FALSE;
}

// 0x80174EC4
void itBatWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITBatStatusDescs, nITBatStatusWait);
}

// 0x80174EF8
void itBatFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITBatStatusDescs, nITBatStatusFall);
}

// 0x80174F3C
void itBatHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(0.0F);

    itMainSetItemStatus(item_gobj, dITBatStatusDescs, nITBatStatusHold);
}

// 0x80174F70
sb32 itBatThrownProcUpdate(GObj *item_gobj)
{
    itMainApplyGravityClampTVel(itGetStruct(item_gobj), ITBAT_GRAVITY, ITBAT_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174FA8
sb32 itBatThrownProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITBAT_MAP_REBOUND_COMMON, ITBAT_MAP_REBOUND_GROUND, itBatWaitSetStatus);
}

// 0x80174FD8
sb32 itBatThrownProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175000
void itBatThrownSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITBatStatusDescs, nITBatStatusThrown);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32
}

// 0x80175044
sb32 itBatDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITBAT_MAP_REBOUND_COMMON, ITBAT_MAP_REBOUND_GROUND, itBatWaitSetStatus);
}

// 0x80175074
void itBatDroppedSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITBatStatusDescs, nITBatStatusDropped);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32
}

// 0x801750B8
GObj* itBatMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITBatItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
