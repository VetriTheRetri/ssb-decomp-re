#include <it/item.h>
#include <gr/ground.h>
#include <sys/develop.h>

extern intptr_t D_NF_0000B158;
extern intptr_t D_NF_00013624;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AB40
itCreateDesc itMonster_Kabigon_ItemDesc = 
{
    It_Kind_Kabigon,                        // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x7A8,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itKabigon_SDefault_ProcUpdate,          // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AB74
itStatusDesc itMonster_Kabigon_StatusDesc[/* */] = 
{
    // Status 0 (Neutral Jump)
    {
        itKabigon_NJump_ProcUpdate,         // Proc Update
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
        itKabigon_NFall_ProcUpdate,         // Proc Update
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

enum itDogasStatus
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
bool32 itKabigon_NFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.kabigon.rumble_wait == 0)
    {
        efParticle_Quake_MakeEffect(0);

        ip->item_vars.kabigon.rumble_wait = ITKABIGON_RUMBLE_WAIT;
    }
    ip->item_vars.kabigon.rumble_wait--;

    if (joint->translate.vec.f.y < (gGroundInfo->blastzone_bottom + ITKABIGON_MAP_OFF_Y))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8017E100
void itKabigon_NFall_ProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRender_CheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
            itRender_DisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

            func_80014038(item_gobj);
        }
        else itRender_DisplayHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8017E25C
void itKabigon_NFall_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->phys_info.vel_air.y = ITKABIGON_DROP_VEL_Y;

    joint->translate.vec.f.x += ((ITKABIGON_DROP_OFF_X_MUL * lbRandom_GetFloat()) + ITKABIGON_DROP_OFF_X_ADD);

    itMain_RefreshHit(item_gobj);

    ip->item_vars.kabigon.rumble_wait = 0;

    func_800269C0(alSound_SFX_KabigonFall);

    if (ip->it_kind == It_Kind_Kabigon)
    {
        func_800269C0(alSound_Voice_MBallKabigonFall);

        joint->scale.vec.f.x = joint->scale.vec.f.y = ITKABIGON_DROP_SIZE_KABIGON;

        ip->item_hit.size *= ITKABIGON_DROP_SIZE_KABIGON;
    }
    else
    {
        joint->scale.vec.f.x = joint->scale.vec.f.y = ITKABIGON_DROP_SIZE_OTHER;

        ip->item_hit.size *= ITKABIGON_DROP_SIZE_OTHER;
    }
    item_gobj->proc_render = itKabigon_NFall_ProcRender;

    om_g_move_obj_dl_head(item_gobj, 0x12, item_gobj->room_order);
}

// 0x8017E350
void itKabigon_NFall_SetStatus(GObj *item_gobj)
{
    itKabigon_NFall_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itMonster_Kabigon_StatusDesc, itStatus_Kabigon_NFall);
}

// 0x8017E384
bool32 itKabigon_NJump_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (joint->translate.vec.f.y >= (gGroundInfo->blastzone_top - ITKABIGON_MAP_OFF_Y))
    {
        ip->it_multi--;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_multi == 0)
        {
            itKabigon_NFall_SetStatus(item_gobj);
        }
    }
    if (ip->item_vars.kabigon.dust_gfx_int == 0)
    {
        Vec3f pos = joint->translate;

        pos.x += (lbRandom_GetFloat() * ITKABIGON_JUMP_GFX_MUL_OFF) - ITKABIGON_JUMP_GFX_SUB_OFF;
        pos.y += (lbRandom_GetFloat() * ITKABIGON_JUMP_GFX_MUL_OFF) - ITKABIGON_JUMP_GFX_SUB_OFF;

        efParticle_DustExpandLarge_MakeEffect(&pos);

        ip->item_vars.kabigon.dust_gfx_int = ITKABIGON_GFX_SPAWN_INT;
    }
    ip->item_vars.kabigon.dust_gfx_int--;

    return FALSE;
}

// 0x8017E4A4
void itKabigon_SDefault_ProcRender(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    if (itRender_CheckItemVisible(ip) != FALSE)
    {
        if ((ip->display_mode == dbObject_DisplayMode_Master) || (ip->is_hold))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
        }
        else if (ip->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
            itRender_DisplayMapCollisions(item_gobj);
        }
        else if ((ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) && (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable))
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);

            func_80014038(item_gobj);
        }
        else itRender_DisplayHitCollisions(item_gobj);
    }
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x8017E600
void itKabigon_NJump_InitItemVars(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_800269C0(alSound_SFX_KabigonJump);

    ap->it_multi = ITKABIGON_DROP_WAIT;

    ap->item_vars.kabigon.dust_gfx_int = ITKABIGON_GFX_SPAWN_INT;

    ap->phys_info.vel_air.y = ITKABIGON_JUMP_VEL_Y;
}

// 0x8017E648
void itKabigon_NJump_SetStatus(GObj *item_gobj)
{
    itKabigon_NJump_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itMonster_Kabigon_StatusDesc, itStatus_Kabigon_NJump);
}

// 0x8017E67C
bool32 itKabigon_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itKabigon_NJump_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017E6C0
GObj* itMonster_Kabigon_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Kabigon_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddDObjAnimAll(joint, itGetPData(ip, D_NF_0000B158, D_NF_00013624), 0.0F); // Linker thing

        if (ip->it_kind == It_Kind_Kabigon)
        {
            func_800269C0(alSound_Voice_MBallKabigonSpawn);
        }
        item_gobj->proc_render = itKabigon_SDefault_ProcRender;
    }
    return item_gobj;
}