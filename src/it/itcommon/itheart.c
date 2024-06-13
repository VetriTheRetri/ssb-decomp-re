#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITHeartItemAttributes;     // 0x00000100

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITHeartItemDesc =
{
    It_Kind_Heart,                          // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITHeartItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itHeartAFallProcUpdate,                 // Proc Update
    itHeartAFallProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITHeartStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHeartGWaitProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHeartAFallProcUpdate,             // Proc Update
        itHeartAFallProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Drop)
    {
        itHeartAFallProcUpdate,             // Proc Update
        itHeartFDropProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itHeartStatus
{
    itStatus_Heart_GWait,
    itStatus_Heart_AFall,
    itStatus_Heart_FDrop,
    itStatus_Heart_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801746F0
sb32 itHeartAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITHEART_GRAVITY, ITHEART_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174728
sb32 itHeartGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itHeartAFallSetStatus);

    return FALSE;
}

// 0x80174750
sb32 itHeartAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.1F, 0.0F, itHeartGWaitSetStatus);
}

// 0x80174780
void itHeartGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITHeartStatusDesc, itStatus_Heart_GWait);
}

// 0x801747B4
void itHeartAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITHeartStatusDesc, itStatus_Heart_AFall);
}

// 0x801747F8
sb32 itHeartFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.1F, 0.0F, itHeartGWaitSetStatus);
}

// 0x80174828
void itHeartFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITHeartStatusDesc, itStatus_Heart_FDrop);
}

// 0x80174850
GObj* itHeartMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITHeartItemDesc, pos, vel, flags);
    DObj *dobj;
    Vec3f translate;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);
        ip = itGetStruct(item_gobj);
        translate = dobj->translate.vec.f;

        omAddOMMtxForDObjFixed(dobj, 0x2E, 0);

        dobj->translate.vec.f = translate;

        dobj->rotate.vec.f.z = 0.0F;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}
