#include <it/item.h>
#include <gm/battle.h>

itCreateDesc itCommon_Star_ItemDesc =
{
    It_Kind_Star,                           // Item Kind
    &gItemFileData,                        // Pointer to item file data?
    0x148,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itStar_SDefault_ProcUpdate,             // Proc Update
    itStar_SDefault_ProcMap,                // Proc Map
    itStar_SDefault_ProcHit,                // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80174930
bool32 itStar_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITSTAR_GRAVITY, ITSTAR_T_VEL);

    ip->it_multi--;

    if (ip->it_multi == 0)
    {
        itMain_RefreshHit(item_gobj);
    }
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80174990
bool32 itStar_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 unused;
    bool32 is_collide_ground = func_ovl3_801737B8(item_gobj, MPCOLL_KIND_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), 1.0F, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        ip->phys_info.vel_air.y = ITSTAR_BOUNCE_Y;

        func_800269C0(alSound_SFX_StarMapCollide);
    }
    return FALSE;
}

// 0x80174A0C
bool32 itStar_SDefault_ProcHit(GObj *item_gobj)
{
    return TRUE;
}

// 0x80174A18
GObj* itCommon_Star_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    OMCamera *cam = OMCameraGetStruct(gCameraGObj);
    GObj *item_gobj;
    DObj *joint;
    itStruct *ip;
    Vec3f vel_real;
    Vec3f translate;

    vel_real.x = (pos->x < cam->view.pan.x) ? ITSTAR_VEL_X : -ITSTAR_VEL_X;
    vel_real.y = ITSTAR_BOUNCE_Y;
    vel_real.z = 0.0F;

    item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Star_ItemDesc, pos, &vel_real, flags);

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        translate = joint->translate.vec.f;

        ip = itGetStruct(item_gobj);

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER; // Star Man can only interact with fighters
        ip->it_multi = ITSTAR_INTERACT_DELAY;

        ip->is_unused_item_bool = TRUE;

        func_80008CC0(joint, 0x2E, 0);

        joint->rotate.vec.f.z = 0.0F;

        joint->translate.vec.f = translate;
    }
    return item_gobj;
}