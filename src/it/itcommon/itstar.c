#include <it/item.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITStarItemAttributes;      // 0x00000148

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITStarItemDesc =
{
    nITKindStar,                            // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITStarItemAttributes,                 // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itStarCommonProcUpdate,                 // Proc Update
    itStarCommonProcMap,                    // Proc Map
    itStarCommonProcHit,                    // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80174930
sb32 itStarCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITSTAR_GRAVITY, ITSTAR_TVEL);

    ip->it_multi--;

    if (ip->it_multi == 0)
    {
        itMainRefreshHit(item_gobj);
    }
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174990
sb32 itStarCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), ITSTAR_MAP_REBOUND_COMMON, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        ip->phys_info.vel_air.y = ITSTAR_BOUNCE_Y;

        func_800269C0_275C0(nSYAudioFGMStarMapCollide);
    }
    return FALSE;
}

// 0x80174A0C
sb32 itStarCommonProcHit(GObj *item_gobj)
{
    return TRUE;
}

// 0x80174A18
GObj* itStarMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    Camera *cam = CameraGetStruct(gCMManagerCameraGObj);
    GObj *item_gobj;
    DObj *dobj;
    itStruct *ip;
    Vec3f vel_real;
    Vec3f translate;

    vel_real.x = (pos->x < cam->vec.at.x) ? ITSTAR_VEL_X : -ITSTAR_VEL_X;
    vel_real.y = ITSTAR_BOUNCE_Y;
    vel_real.z = 0.0F;

    item_gobj = itManagerMakeItem(parent_gobj, &dITStarItemDesc, pos, &vel_real, flags);

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        translate = dobj->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->item_hit.interact_mask = GMHITCOLLISION_FLAG_FIGHTER; // Star Man can only interact with fighters
        
        ip->it_multi = ITSTAR_INTERACT_DELAY;

        ip->is_unused_item_bool = TRUE;

        gcAddGCMatrixForDObjFixed(dobj, 0x2E, 0);

        dobj->rotate.vec.f.z = 0.0F;

        dobj->translate.vec.f = translate;
    }
    return item_gobj;
}
