#include <it/item.h>
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
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AB40
itCreateDesc dITKabigonItemDesc = 
{
    nITKindKabigon,                         // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITKabigonItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyRSca,          // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateNew,                        // Hitbox Update State
    itKabigonCommonProcUpdate,              // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AB74
itStatusDesc dITKabigonStatusDescs[/* */] = 
{
    // Status 0 (Neutral Jump)
    {
        itKabigonJumpProcUpdate,           // Proc Update
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
        itKabigonFallProcUpdate,           // Proc Update
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
    nITKabigonStatusJump,
    nITKabigonStatusFall,
    nITKabigonStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017E070
sb32 itKabigonFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.kabigon.rumble_wait == 0)
    {
        efManagerQuakeMakeEffect(0);

        ip->item_vars.kabigon.rumble_wait = ITKABIGON_RUMBLE_WAIT;
    }
    ip->item_vars.kabigon.rumble_wait--;

    if (dobj->translate.vec.f.y < (gMPCollisionGroundData->blastzone_bottom + ITKABIGON_MAP_OFF_Y))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8017E100
void itKabigonFallProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8017E25C
void itKabigonFallInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->phys_info.vel_air.y = ITKABIGON_DROP_VEL_Y;

    dobj->translate.vec.f.x += ((ITKABIGON_DROP_OFF_X_MUL * mtTrigGetRandomFloat()) + ITKABIGON_DROP_OFF_X_ADD);

    itMainRefreshHit(item_gobj);

    ip->item_vars.kabigon.rumble_wait = 0;

    func_800269C0_275C0(nGMSoundFGMKabigonFall);

    if (ip->it_kind == nITKindKabigon)
    {
        func_800269C0_275C0(nGMSoundVoiceMBallKabigonFall);

        dobj->scale.vec.f.x = dobj->scale.vec.f.y = ITKABIGON_DROP_SIZE_KABIGON;

        ip->item_hit.size *= ITKABIGON_DROP_SIZE_KABIGON;
    }
    else
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.y = ITKABIGON_DROP_SIZE_OTHER;

        ip->item_hit.size *= ITKABIGON_DROP_SIZE_OTHER;
    }
    item_gobj->proc_render = itKabigonFallProcRender;

    omMoveGObjDLHead(item_gobj, 18, item_gobj->dl_link_order);
}

// 0x8017E350
void itKabigonFallSetStatus(GObj *item_gobj)
{
    itKabigonFallInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITKabigonStatusDescs, nITKabigonStatusFall);
}

// 0x8017E384
sb32 itKabigonJumpProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (dobj->translate.vec.f.y >= (gMPCollisionGroundData->blastzone_top - ITKABIGON_MAP_OFF_Y))
    {
        ip->it_multi--;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_multi == 0)
        {
            itKabigonFallSetStatus(item_gobj);
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
void itKabigonCommonProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRenderCheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == nDBDisplayModeMaster) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else if (ip->display_mode == nDBDisplayModeMapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
            itRenderMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == nGMHitStatusNone) && (ip->item_hit.update_state == nGMHitUpdateDisable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            odRenderDObjTreeForGObj(item_gobj);
        }
        else itRenderHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8017E600
void itKabigonJumpInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_800269C0_275C0(nGMSoundFGMKabigonJump);

    ip->it_multi = ITKABIGON_DROP_WAIT;

    ip->item_vars.kabigon.dust_effect_int = ITKABIGON_EFFECT_SPAWN_INT;

    ip->phys_info.vel_air.y = ITKABIGON_JUMP_VEL_Y;
}

// 0x8017E648
void itKabigonJumpSetStatus(GObj *item_gobj)
{
    itKabigonJumpInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITKabigonStatusDescs, nITKabigonStatusJump);
}

// 0x8017E67C
sb32 itKabigonCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itKabigonJumpSetStatus(item_gobj);
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

        ip->item_hit.interact_mask = GMHITCOLLISION_FLAG_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        gcAddDObjAnimJoint(dobj, itGetMonsterAnimNode(ip, lITKabigonAnimJoint), 0.0F); // Linker thing

        if (ip->it_kind == nITKindKabigon)
        {
            func_800269C0_275C0(nGMSoundVoiceMBallKabigonSpawn);
        }
        item_gobj->proc_render = itKabigonCommonProcRender;
    }
    return item_gobj;
}
