#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITSwordItemAttributes;     // 0x00000190

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITSwordITemDesc =
{
    It_Kind_Sword,                          // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITSwordItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itSwordAFallProcUpdate,                 // Proc Update
    itSwordAFallProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITSwordStatusDesc[/* */] = 
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itSwordGWaitProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itSwordAFallProcUpdate,             // Proc Update
        itSwordAFallProcMap,                // Proc Map
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
        itSwordAFallProcUpdate,             // Proc Update
        itSwordFThrowProcMap,               // Proc Map
        itSwordFThrowProcHit,               // Proc Hit
        itSwordFThrowProcHit,               // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itSwordFThrowProcHit,               // Proc Set-Off
        itCommonSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itSwordAFallProcUpdate,             // Proc Update
        itSwordFDropProcMap,                // Proc Map
        itSwordFThrowProcHit,               // Proc Hit
        itSwordFThrowProcHit,               // Proc Shield
        itCommonSDefaultProcHop,            // Proc Hop
        itSwordFThrowProcHit,               // Proc Set-Off
        itCommonSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itSwordStatus
{
    itStatus_Sword_GWait,
    itStatus_Sword_AFall,
    itStatus_Sword_FHold,
    itStatus_Sword_FThrow,
    itStatus_Sword_FDrop,
    itStatus_Sword_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80174B50
sb32 itSwordAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSWORD_GRAVITY, ITSWORD_T_VEL);
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174B8C
sb32 itSwordGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itSwordAFallSetStatus);

    return FALSE;
}

// 0x80174BB4
sb32 itSwordAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itSwordGWaitSetStatus);
}

// 0x80174BE4
void itSwordGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITSwordStatusDesc, itStatus_Sword_GWait);
}

// 0x80174C18
void itSwordAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITSwordStatusDesc, itStatus_Sword_AFall);
}

// 0x80174C5C
void itSwordFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DTOR32(0.0F);

    itMainSetItemStatus(item_gobj, dITSwordStatusDesc, itStatus_Sword_FHold);
}

// 0x80174C90
sb32 itSwordFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itSwordGWaitSetStatus);
}

// 0x80174CC0
sb32 itSwordFThrowProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80174CE8
void itSwordFThrowSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITSwordStatusDesc, itStatus_Sword_FThrow);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DTOR32(90.0F);
}

// 0x80174D2C
sb32 itSwordFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itSwordGWaitSetStatus);
}

// 0x80174D5C
void itSwordFDropSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITSwordStatusDesc, itStatus_Sword_FDrop);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DTOR32(90.0F);
}

// 0x80174DA0
GObj* itSwordMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITSwordITemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DTOR32(90.0F);

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}
