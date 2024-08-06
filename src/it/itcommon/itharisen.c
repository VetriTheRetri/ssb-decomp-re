#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITHarisenItemAttributes;   // 0x00000220
extern intptr_t lITHarisenDataStart;        // 0x00002198

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189A70
intptr_t dITHarisenAnimJoint[/* */] = 
{ 
    0x2250, 0x2270 
};

itCreateDesc dITHarisenItemDesc =
{
    nITKindHarisen,                         // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITHarisenItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,          // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itHarisenFallProcUpdate,                // Proc Update
    itHarisenFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITHarisenStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHarisenWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHarisenFallProcUpdate,            // Proc Update
        itHarisenFallProcMap,               // Proc Map
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
        itHarisenThrownProcUpdate,          // Proc Update
        itHarisenThrownProcMap,             // Proc Map
        itHarisenCommonProcHit,             // Proc Hit
        itHarisenCommonProcHit,             // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itHarisenCommonProcHit,             // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itHarisenFallProcUpdate,            // Proc Update
        itHarisenDroppedProcMap,            // Proc Map
        itHarisenCommonProcHit,             // Proc Hit
        itHarisenCommonProcHit,             // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itHarisenCommonProcHit,             // Proc Set-Off
        itMainCommonProcReflector,          // Proc Reflector
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
    nITHarisenStatusWait,
    nITHarisenStatusFall,
    nITHarisenStatusHold,
    nITHarisenStatusThrown,
    nITHarisenStatusDropped,
    nITHarisenStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80175140
void itHarisenCommonSetScale(GObj *item_gobj, f32 scale)
{
    DObjGetStruct(item_gobj)->scale.vec.f.x = scale;
    DObjGetStruct(item_gobj)->scale.vec.f.y = scale;
    DObjGetStruct(item_gobj)->scale.vec.f.z = scale;
}

// 0x80175160
sb32 itHarisenFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITHARISEN_GRAVITY, ITHARISEN_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80175198
sb32 itHarisenWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itHarisenFallSetStatus);

    return FALSE;
}

// 0x801751C0
sb32 itHarisenFallProcMap(GObj *item_gobj)
{
    itMapCheckDestroyDropped(item_gobj, ITHARISEN_MAP_REBOUND_COMMON, ITHARISEN_MAP_REBOUND_GROUND, itHarisenWaitSetStatus);

    return FALSE;
}

// 0x801751F4
void itHarisenWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITHarisenStatusDescs, nITHarisenStatusWait);
}

// 0x80175228
void itHarisenFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITHarisenStatusDescs, nITHarisenStatusFall);
}

// 0x8017526C
void itHarisenHoldSetStatus(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    omAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);

    dobj->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITHarisenStatusDescs, nITHarisenStatusHold);
}

// 0x801752C0
sb32 itHarisenThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITHARISEN_GRAVITY, ITHARISEN_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x801752F8
sb32 itHarisenThrownProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITHARISEN_MAP_REBOUND_COMMON, ITHARISEN_MAP_REBOUND_GROUND, itHarisenWaitSetStatus);
}

// 0x80175328
sb32 itHarisenCommonProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80175350
void itHarisenThrownSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITHarisenStatusDescs, nITHarisenStatusThrown);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(-90.0F); // HALF_PI32
}

// 0x80175394
sb32 itHarisenDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITHARISEN_MAP_REBOUND_COMMON, ITHARISEN_MAP_REBOUND_GROUND, itHarisenWaitSetStatus);
}

// 0x801753C4
void itHarisenDroppedSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITHarisenStatusDescs, nITHarisenStatusDropped);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(-90.0F);
}

// 0x80175408
void func_ovl3_80175408(GObj *item_gobj, s32 index) // Unused
{
    itStruct *ip = itGetStruct(item_gobj);

    gcAddAnimJointAll(item_gobj, (((uintptr_t)ip->attributes->dobj_setup + dITHarisenAnimJoint[index]) - (intptr_t)&lITHarisenDataStart), 0.0F); // Linker thing
    gcPlayAnimAll(item_gobj);
}

// 0x80175460
GObj* itHarisenMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITHarisenItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(-90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
