#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lItHarisenItemAttributes;   // 0x00000220
extern intptr_t lItHarisenDataStart;        // 0x00002198

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

intptr_t D_ovl3_80189A70[2] = { 0x2250, 0x2270 };

itCreateDesc dItHarisenItemDesc =
{
    It_Kind_Harisen,                        // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    &lItHarisenItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itHarisenAFallProcUpdate,               // Proc Update
    itHarisenAFallProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dItHarisenStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHarisenGWaitProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHarisenAFallProcUpdate,           // Proc Update
        itHarisenAFallProcMap,              // Proc Map
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
        itHarisenFThrowProcUpdate,          // Proc Update
        itHarisenFThrowProcMap,             // Proc Map
        itHarisenSDefaultProcHit,           // Proc Hit
        itHarisenSDefaultProcHit,           // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itHarisenSDefaultProcHit,           // Proc Set-Off
        itCommonSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itHarisenAFallProcUpdate,           // Proc Update
        itHarisenFDropProcMap,              // Proc Map
        itHarisenSDefaultProcHit,           // Proc Hit
        itHarisenSDefaultProcHit,           // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itHarisenSDefaultProcHit,           // Proc Set-Off
        itCommonSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itHarisenStatus
{
    itStatus_Harisen_GWait,
    itStatus_Harisen_AFall,
    itStatus_Harisen_FHold,
    itStatus_Harisen_FThrow,
    itStatus_Harisen_FDrop,
    itStatus_Harisen_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80175140
void itHarisenSDefaultSetScale(GObj *item_gobj, f32 scale)
{
    DObjGetStruct(item_gobj)->scale.vec.f.x = scale;
    DObjGetStruct(item_gobj)->scale.vec.f.y = scale;
    DObjGetStruct(item_gobj)->scale.vec.f.z = scale;
}

// 0x80175160
sb32 itHarisenAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITHARISEN_GRAVITY, ITHARISEN_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80175198
sb32 itHarisenGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itHarisenAFallSetStatus);

    return FALSE;
}

// 0x801751C0
sb32 itHarisenAFallProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.0F, 0.3F, itHarisenGWaitSetStatus);

    return FALSE;
}

// 0x801751F4
void itHarisenGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dItHarisenStatusDesc, itStatus_Harisen_GWait);
}

// 0x80175228
void itHarisenAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dItHarisenStatusDesc, itStatus_Harisen_AFall);
}

// 0x8017526C
void itHarisenFHoldSetStatus(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_Sca, 0);

    dobj->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dItHarisenStatusDesc, itStatus_Harisen_FHold);
}

// 0x801752C0
sb32 itHarisenFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITHARISEN_GRAVITY, ITHARISEN_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x801752F8
sb32 itHarisenFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.0F, 0.3F, itHarisenGWaitSetStatus);
}

// 0x80175328
sb32 itHarisenSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175350
void itHarisenFThrowSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dItHarisenStatusDesc, itStatus_Harisen_FThrow);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DEG_TO_RAD(-90.0F); // HALF_PI32
}

// 0x80175394
sb32 itHarisenFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.0F, 0.3F, itHarisenGWaitSetStatus);
}

// 0x801753C4
void itHarisenFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dItHarisenStatusDesc, itStatus_Harisen_FDrop);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DEG_TO_RAD(-90.0F);
}

// 0x80175408
void func_ovl3_80175408(GObj *item_gobj, s32 index) // Unused
{
    itStruct *ip = itGetStruct(item_gobj);

    func_8000BD8C(item_gobj, (((uintptr_t)ip->attributes->model_desc + D_ovl3_80189A70[index]) - (intptr_t)&lItHarisenDataStart), 0.0F); // Linker thing
    func_8000DF34(item_gobj);
}

// 0x80175460
GObj* itHarisenMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dItHarisenItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}
