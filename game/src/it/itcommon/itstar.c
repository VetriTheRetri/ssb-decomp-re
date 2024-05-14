#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITStarItemAttributes;      // 0x00000148

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITStarItemDesc =
{
    It_Kind_Star,                           // Item Kind
    &gITemFileData,                         // Pointer to item file data?
    &lITStarItemAttributes,                 // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itStarSDefaultProcUpdate,               // Proc Update
    itStarSDefaultProcMap,                  // Proc Map
    itStarSDefaultProcHit,                  // Proc Hit
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
sb32 itStarSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSTAR_GRAVITY, ITSTAR_T_VEL);

    ip->it_multi--;

    if (ip->it_multi == 0)
    {
        itMainRefreshHit(item_gobj);
    }
    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174990
sb32 itStarSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), 1.0F, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        ip->phys_info.vel_air.y = ITSTAR_BOUNCE_Y;

        func_800269C0(alSound_SFX_StarMapCollide);
    }
    return FALSE;
}

// 0x80174A0C
sb32 itStarSDefaultProcHit(GObj *item_gobj)
{
    return TRUE;
}

// 0x80174A18
GObj* itStarMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    Camera *cam = CameraGetStruct(gCameraGObj);
    GObj *item_gobj;
    DObj *dobj;
    itStruct *ip;
    Vec3f vel_real;
    Vec3f translate;

    vel_real.x = (pos->x < cam->vec.at.x) ? ITSTAR_VEL_X : -ITSTAR_VEL_X;
    vel_real.y = ITSTAR_BOUNCE_Y;
    vel_real.z = 0.0F;

    item_gobj = itManagerMakeItem(spawn_gobj, &dITStarItemDesc, pos, &vel_real, flags);

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        translate = dobj->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER; // Star Man can only interact with fighters
        
        ip->it_multi = ITSTAR_INTERACT_DELAY;

        ip->is_unused_item_bool = TRUE;

        omAddOMMtxForDObjFixed(dobj, 0x2E, 0);

        dobj->rotate.vec.f.z = 0.0F;

        dobj->translate.vec.f = translate;
    }
    return item_gobj;
}
