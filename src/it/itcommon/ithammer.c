#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITHammerItemAttributes;    // 0x00000374

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITHammerItemDesc =
{
    nITKindHammer,                         // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITHammerItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,         // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,     // Hitbox Update State
    itHammerFallProcUpdate,                // Proc Update
    itHammerFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITHammerStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itHammerWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itHammerFallProcUpdate,            // Proc Update
        itHammerFallProcMap,               // Proc Map
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
        itHammerThrownProcUpdate,           // Proc Update
        itHammerThrownProcMap,              // Proc Map
        itHammerCommonProcHit,            // Proc Hit
        itHammerCommonProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itHammerCommonProcHit,            // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itHammerFallProcUpdate,            // Proc Update
        itHammerDroppedProcMap,               // Proc Map
        itHammerCommonProcHit,            // Proc Hit
        itHammerCommonProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itHammerCommonProcHit,            // Proc Set-Off
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
    itStatus_Hammer_Wait,
    itStatus_Hammer_Fall,
    itStatus_Hammer_Hold,
    itStatus_Hammer_Thrown,
    itStatus_Hammer_Dropped,
    itStatus_Hammer_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80176110
void itHammerCommonSetColAnim(GObj *item_gobj)
{
    itMainCheckSetColAnimID(item_gobj, ITHAMMER_WEAR_COLANIM_ID, ITHAMMER_WEAR_COLANIM_LENGTH);
}

// 0x80176134
sb32 itHammerFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITHAMMER_GRAVITY, ITHAMMER_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017616C
sb32 itHammerWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itHammerFallSetStatus);

    return FALSE;
}

// 0x80176194
sb32 itHammerFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammerWaitSetStatus);
}

// 0x801761C4
void itHammerWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITHammerStatusDescs, itStatus_Hammer_Wait);
}

// 0x801761F8
void itHammerFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITHammerStatusDescs, itStatus_Hammer_Fall);
}

// 0x8017623C
void itHammerHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITHammerStatusDescs, itStatus_Hammer_Hold);
}

// 0x80176270
sb32 itHammerThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITHAMMER_GRAVITY, ITHAMMER_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x801762A8
sb32 itHammerThrownProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammerWaitSetStatus);
}

// 0x801762D8
sb32 itHammerCommonProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80176300
void itHammerThrownSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITHammerStatusDescs, itStatus_Hammer_Thrown);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

    ftParamTryUpdateItemMusic();
}

// 0x80176348
sb32 itHammerDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itHammerWaitSetStatus);
}

// 0x80176378
void itHammerDroppedSetStatus(GObj *item_gobj)
{
    itMainClearColAnim(item_gobj);
    itMainSetItemStatus(item_gobj, dITHammerStatusDescs, itStatus_Hammer_Dropped);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

    ftParamTryUpdateItemMusic();
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
