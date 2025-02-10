#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITTomatoItemAttributes;    // 0x000000B8

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

ITDesc dITTomatoItemDesc =
{
    nITKindTomato,                          // Item Kind
    &gITManagerCommonData,                    // Pointer to item file data?
    &lITTomatoItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCMatrixKindTraRotRpyR,             // Main matrix transformations
        nGCMatrixKindNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMAttackStateOff,                      // Hitbox Update State
    itTomatoFallProcUpdate,                 // Proc Update
    itTomatoFallProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

ITStatusDesc dITTomatoStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itTomatoWaitProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itTomatoFallProcUpdate,             // Proc Update
        itTomatoFallProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Drop)
    {
        itTomatoFallProcUpdate,             // Proc Update
        itTomatoDroppedProcMap,             // Proc Map
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

enum itTomatoStatus
{
    nITTomatoStatusWait,
    nITTomatoStatusFall,
    nITTomatoStatusDropped,
    nITTomatoStatusEnumCount
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801744C0
sb32 itTomatoFallProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITTOMATO_GRAVITY, ITTOMATO_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x801744FC
sb32 itTomatoWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itTomatoFallSetStatus);

    return FALSE;
}

// 0x80174524
sb32 itTomatoFallProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITTOMATO_MAP_REBOUND_COMMON, ITTOMATO_MAP_REBOUND_GROUND, itTomatoWaitSetStatus);
}

// 0x80174554
void itTomatoWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetStatus(item_gobj, dITTomatoStatusDescs, nITTomatoStatusWait);
}

// 0x80174588
void itTomatoFallSetStatus(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetStatus(item_gobj, dITTomatoStatusDescs, nITTomatoStatusFall);
}

// 0x801745CC
sb32 itTomatoDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITTOMATO_MAP_REBOUND_COMMON, ITTOMATO_MAP_REBOUND_GROUND, itTomatoWaitSetStatus);
}

// 0x801745FC
void itTomatoDroppedSetStatus(GObj *item_gobj)
{
    itMainSetStatus(item_gobj, dITTomatoStatusDescs, nITTomatoStatusDropped);
}

// 0x80174624
GObj* itTomatoMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITTomatoItemDesc, pos, vel, flags);
    DObj *joint;
    Vec3f translate;
    ITStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);
        ip = itGetStruct(item_gobj);
        translate = joint->translate.vec.f;

        gcAddXObjForDObjFixed(joint, 0x2E, 0);

        joint->translate.vec.f = translate;

        ip->is_unused_item_bool = TRUE;

        ip->arrow_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
