#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITTomatoItemAttributes;    // 0x000000B8

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITTomatoItemDesc =
{
    It_Kind_Tomato,                         // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITTomatoItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itTomatoAFallProcUpdate,                // Proc Update
    itTomatoAFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITTomatoStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itTomatoGWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itTomatoAFallProcUpdate,            // Proc Update
        itTomatoAFallProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Drop)
    {
        itTomatoAFallProcUpdate,            // Proc Update
        itTomatoFDropProcMap,               // Proc Map
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
    itStatus_Tomato_GWait,
    itStatus_Tomato_AFall,
    itStatus_Tomato_FDrop,
    itStatus_Tomato_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801744C0
sb32 itTomatoAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITTOMATO_GRAVITY, ITTOMATO_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x801744FC
sb32 itTomatoGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itTomatoAFallSetStatus);

    return FALSE;
}

// 0x80174524
sb32 itTomatoAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.3F, 0.5F, itTomatoGWaitSetStatus);
}

// 0x80174554
void itTomatoGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITTomatoStatusDesc, itStatus_Tomato_GWait);
}

// 0x80174588
void itTomatoAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITTomatoStatusDesc, itStatus_Tomato_AFall);
}

// 0x801745CC
sb32 itTomatoFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.3F, 0.5F, itTomatoGWaitSetStatus);
}

// 0x801745FC
void itTomatoFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITTomatoStatusDesc, itStatus_Tomato_FDrop);
}

// 0x80174624
GObj* itTomatoMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITTomatoItemDesc, pos, vel, flags);
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

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
