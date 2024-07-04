#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITHammerItemAttributes;    // 0x00000374

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITHammerItemDesc =
{
    It_Kind_Hammer,                         // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITHammerItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itHammerAFallProcUpdate,                // Proc Update
    itHammerAFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITHammerStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHammerGWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHammerAFallProcUpdate,            // Proc Update
        itHammerAFallProcMap,               // Proc Map
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
        itHammerFThrowProcUpdate,           // Proc Update
        itHammerFThrowProcMap,              // Proc Map
        itHammerSDefaultProcHit,            // Proc Hit
        itHammerSDefaultProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itHammerSDefaultProcHit,            // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itHammerAFallProcUpdate,            // Proc Update
        itHammerFDropProcMap,               // Proc Map
        itHammerSDefaultProcHit,            // Proc Hit
        itHammerSDefaultProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itHammerSDefaultProcHit,            // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itHammerStatus
{
    itStatus_Hammer_GWait,
    itStatus_Hammer_AFall,
    itStatus_Hammer_FHold,
    itStatus_Hammer_FThrow,
    itStatus_Hammer_FDrop,
    itStatus_Hammer_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80176110
void itHammerSDefaultSetColAnim(GObj *item_gobj)
{
    itMainCheckSetColAnimID(item_gobj, ITHAMMER_WEAR_COLANIM_ID, ITHAMMER_WEAR_COLANIM_LENGTH);
}

// 0x80176134
sb32 itHammerAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITHAMMER_GRAVITY, ITHAMMER_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017616C
sb32 itHammerGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itHammerAFallSetStatus);

    return FALSE;
}

// 0x80176194
sb32 itHammerAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammerGWaitSetStatus);
}

// 0x801761C4
void itHammerGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITHammerStatusDesc, itStatus_Hammer_GWait);
}

// 0x801761F8
void itHammerAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITHammerStatusDesc, itStatus_Hammer_AFall);
}

// 0x8017623C
void itHammerFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITHammerStatusDesc, itStatus_Hammer_FHold);
}

// 0x80176270
sb32 itHammerFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITHAMMER_GRAVITY, ITHAMMER_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x801762A8
sb32 itHammerFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammerGWaitSetStatus);
}

// 0x801762D8
sb32 itHammerSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80176300
void itHammerFThrowSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITHammerStatusDesc, itStatus_Hammer_FThrow);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

    ftSpecialItem_BGMCheckFighters();
}

// 0x80176348
sb32 itHammerFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammerGWaitSetStatus);
}

// 0x80176378
void itHammerFDropSetStatus(GObj *item_gobj)
{
    itMainClearColAnim(item_gobj);
    itMainSetItemStatus(item_gobj, dITHammerStatusDesc, itStatus_Hammer_FDrop);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

    ftSpecialItem_BGMCheckFighters();
}

// 0x8017633C8
GObj* itHammerMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITHammerItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
