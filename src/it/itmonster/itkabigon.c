#include <it/item.h>
#include <gr/ground.h>
#include <sys/develop.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITKabigonItemAttributes;   // 0x000007A8
extern intptr_t lITKabigonAnimJoint;        // 0x0000B158

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AB40
itCreateDesc dITKabigonItemDesc = 
{
    It_Kind_Kabigon,                        // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITKabigonItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itKabigonSDefaultProcUpdate,            // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AB74
itStatusDesc dITKabigonStatusDesc[/* */] = 
{
    // Status 0 (Neutral Jump)
    {
        itKabigonNJumpProcUpdate,           // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Fall)
    {
        itKabigonNFallProcUpdate,           // Proc Update
        NULL,                               // Proc Map
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

enum itKabigonStatus
{
    itStatus_Kabigon_NJump,
    itStatus_Kabigon_NFall,
    itStatus_Kabigon_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017E070
sb32 itKabigonNFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.kabigon.rumble_wait == 0)
    {
        efManagerQuakeMakeEffect(0);

        ip->item_vars.kabigon.rumble_wait = ITKABIGON_RUMBLE_WAIT;
    }
    ip->item_vars.kabigon.rumble_wait--;

    if (dobj->translate.vec.f.y < (gGroundInfo->blastzone_bottom + ITKABIGON_MAP_OFF_Y))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8017E100
void itKabigonNFallProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8017E25C
void itKabigonNFallInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->phys_info.vel_air.y = ITKABIGON_DROP_VEL_Y;

    dobj->translate.vec.f.x += ((ITKABIGON_DROP_OFF_X_MUL * mtTrigGetRandomFloat()) + ITKABIGON_DROP_OFF_X_ADD);

    itMainRefreshHit(item_gobj);

    ip->item_vars.kabigon.rumble_wait = 0;

    func_800269C0_275C0(alSound_SFX_KabigonFall);

    if (ip->it_kind == It_Kind_Kabigon)
    {
        func_800269C0_275C0(alSound_Voice_MBallKabigonFall);

        dobj->scale.vec.f.x = dobj->scale.vec.f.y = ITKABIGON_DROP_SIZE_KABIGON;

        ip->item_hit.size *= ITKABIGON_DROP_SIZE_KABIGON;
    }
    else
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.y = ITKABIGON_DROP_SIZE_OTHER;

        ip->item_hit.size *= ITKABIGON_DROP_SIZE_OTHER;
    }
    item_gobj->proc_render = itKabigonNFallProcRender;

    omMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
}

// 0x8017E350
void itKabigonNFallSetStatus(GObj *item_gobj)
{
    itKabigonNFallInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITKabigonStatusDesc, itStatus_Kabigon_NFall);
}

// 0x8017E384
sb32 itKabigonNJumpProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (dobj->translate.vec.f.y >= (gGroundInfo->blastzone_top - ITKABIGON_MAP_OFF_Y))
    {
        ip->it_multi--;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_multi == 0)
        {
            itKabigonNFallSetStatus(item_gobj);
        }
    }
    if (ip->item_vars.kabigon.dust_effect_int == 0)
    {
        Vec3f pos = dobj->translate.vec.f;

        pos.x += (mtTrigGetRandomFloat() * ITKABIGON_JUMP_GFX_MUL_OFF) - ITKABIGON_JUMP_GFX_SUB_OFF;
        pos.y += (mtTrigGetRandomFloat() * ITKABIGON_JUMP_GFX_MUL_OFF) - ITKABIGON_JUMP_GFX_SUB_OFF;

        efManagerDustExpandLargeMakeEffect(&pos);

        ip->item_vars.kabigon.dust_effect_int = ITKABIGON_EFFECT_SPAWN_INT;
    }
    ip->item_vars.kabigon.dust_effect_int--;

    return FALSE;
}

// 0x8017E4A4
void itKabigonSDefaultProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8017E600
void itKabigonNJumpInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_800269C0_275C0(alSound_SFX_KabigonJump);

    ip->it_multi = ITKABIGON_DROP_WAIT;

    ip->item_vars.kabigon.dust_effect_int = ITKABIGON_EFFECT_SPAWN_INT;

    ip->phys_info.vel_air.y = ITKABIGON_JUMP_VEL_Y;
}

// 0x8017E648
void itKabigonNJumpSetStatus(GObj *item_gobj)
{
    itKabigonNJumpInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITKabigonStatusDesc, itStatus_Kabigon_NJump);
}

// 0x8017E67C
sb32 itKabigonSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itKabigonNJumpSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017E6C0
GObj* itKabigonMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITKabigonItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITKabigonAnimJoint), 0.0F); // Linker thing

        if (ip->it_kind == It_Kind_Kabigon)
        {
            func_800269C0_275C0(alSound_Voice_MBallKabigonSpawn);
        }
        item_gobj->proc_render = itKabigonSDefaultProcRender;
    }
    return item_gobj;
}
