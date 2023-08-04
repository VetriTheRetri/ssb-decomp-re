#include <it/item.h>
#include <ft/fighter.h>

enum itMSBombStatus
{
    itStatus_MSBomb_GWait,
    itStatus_MSBomb_AFall,
    itStatus_MSBomb_FHold,
    itStatus_MSBomb_FThrow,
    itStatus_MSBomb_FDrop,
    itStatus_MSBomb_GAttach,
    itStatus_MSBomb_ADetach,
    itStatus_MSBomb_NExplode,
    itStatus_MSBomb_EnumMax
};

itCreateDesc itCommon_MSBomb_ItemDesc =
{
    It_Kind_MSBomb,                         // Item Kind
    &gpItemFileData,                        // Pointer to item file data?
    0x3BC,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMSBomb_AFall_ProcUpdate,              // Proc Update
    itMSBomb_AFall_ProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_MSBomb_StatusDesc[itStatus_MSBomb_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itMSBomb_GWait_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itMSBomb_AFall_ProcUpdate,          // Proc Update
        itMSBomb_AFall_ProcMap,             // Proc Map
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
        itMSBomb_FThrow_ProcUpdate,         // Proc Update
        itMSBomb_FThrow_ProcMap,            // Proc Map
        itMSBomb_SDefault_ProcHit,          // Proc Hit
        itMSBomb_SDefault_ProcHit,          // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itMSBomb_SDefault_ProcHit,          // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itMSBomb_AFall_ProcUpdate,          // Proc Update
        itMSBomb_FDrop_ProcMap,             // Proc Map
        itMSBomb_SDefault_ProcHit,          // Proc Hit
        itMSBomb_SDefault_ProcHit,          // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itMSBomb_SDefault_ProcHit,          // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Attach)
    {
        itMSBomb_GAttach_ProcUpdate,        // Proc Update
        itMSBomb_GAttach_ProcMap,           // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMSBomb_SDefault_ProcDamage        // Proc Damage
    },

    // Status 6 (Air Detach from Surface)
    {
        itMSBomb_ADetach_ProcUpdate,        // Proc Update
        itMSBomb_FDrop_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMSBomb_SDefault_ProcDamage        // Proc Damage
    },

    // Status 7 (Neutral Explosion)
    {
        itMSBomb_NExplode_ProcUpdate,       // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x80176450
bool32 itMSBomb_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITMSBOMB_GRAVITY, ITMSBOMB_T_VEL);
    itManager_UpdateSpin(item_gobj);

    joint->next->unk_0x8->rotate.z = joint->rotate.z;

    return FALSE;
}

// 0x801764A8
bool32 itMSBomb_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itMSBomb_AFall_SetStatus);

    return FALSE;
}

// 0x801764D0
bool32 itMSBomb_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itMSBomb_GWait_SetStatus);
}

// 0x80176504
void itMSBomb_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_GWait);
}

// 0x80176538
void itMSBomb_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_AFall);
}

// 0x8017657C
void itMSBomb_FHold_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_FHold);
}

// 0x801765A4
bool32 itMSBomb_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITMSBOMB_GRAVITY, ITMSBOMB_T_VEL);
    itManager_UpdateSpin(item_gobj);

    joint->next->unk_0x8->rotate.z = joint->rotate.z;

    return FALSE;
}

// 0x801765FC
bool32 itMSBomb_FThrow_ProcMap(GObj *item_gobj)
{
    return func_ovl3_80173E58(item_gobj, itMSBomb_GAttach_SetStatus);
}

// 0x80176620
bool32 itMSBomb_SDefault_ProcHit(GObj *item_gobj)
{
    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x80176644
void itMSBomb_FThrow_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->coll_data.object_coll.top = ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.center = 0.0F;
    ip->coll_data.object_coll.bottom = -ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.width = ITMSBOMB_COLL_SIZE;

    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_FThrow);
}

// 0x80176694
bool32 itMSBomb_FDrop_ProcMap(GObj *item_gobj)
{
    return func_ovl3_80173E58(item_gobj, itMSBomb_GAttach_SetStatus);
}

// 0x801766B8
void itMSBomb_FDrop_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->coll_data.object_coll.top = ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.center = 0.0F;
    ip->coll_data.object_coll.bottom = -ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.width = ITMSBOMB_COLL_SIZE;

    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_FDrop);
}

// 0x80176708
void itMSBomb_GAttach_UpdateSurfaceData(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    mpCollData *coll_data = &ip->coll_data;
    Vec3f angle;
    DObj *joint = DObjGetStruct(item_gobj);

    if ((coll_data->coll_mask & MPCOLL_MASK_CEIL) || (coll_data->coll_mask & MPCOLL_MASK_GROUND))
    {
        if (coll_data->coll_mask & MPCOLL_MASK_CEIL)
        {
            angle = coll_data->ceil_angle;

            ip->attach_line_id = coll_data->ceil_line_id;
        }
        if (coll_data->coll_mask & MPCOLL_MASK_GROUND)
        {
            angle = coll_data->ground_angle;

            ip->attach_line_id = coll_data->ground_line_id;
        }
    }
    else
    {
        if (coll_data->coll_mask & MPCOLL_MASK_RWALL)
        {
            angle = coll_data->rwall_angle;

            ip->attach_line_id = coll_data->rwall_line_id;
        }
        if (coll_data->coll_mask & MPCOLL_MASK_LWALL)
        {
            angle = coll_data->lwall_angle;

            ip->attach_line_id = coll_data->lwall_line_id;
        }
    }
    joint->rotate.z = atan2f(angle.y, angle.x) - HALF_PI32;
}

// 0x80176840
void itMSBomb_GAttach_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->coll_data.object_coll.top = ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.center = 0.0F;
    ip->coll_data.object_coll.bottom = -ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.width = ITMSBOMB_COLL_SIZE;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0;

    joint->next->unk_0x54 = 0;
    joint->next->unk_0x8->unk_0x54 = 2;

    itMSBomb_GAttach_UpdateSurfaceData(item_gobj);

    ip->is_attach_surface = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    if ((ip->player != -1) && (ip->player != GMMATCH_PLAYERS_MAX)) // Macro might be off though
    {
        GObj *fighter_gobj = gpBattleState->player_block[ip->player].fighter_gobj;

        if (fighter_gobj != NULL)
        {
            ftMain_MakeRumble(ftGetStruct(fighter_gobj), 6, 0);
        }
    }
    func_800269C0(0x2CU);

    itMain_ClearOwnerStats(item_gobj);
}

// 0x80176934
void itMSBomb_NExplode_SpawnGFXFighter(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    s32 unused[4];

    if (ip->coll_data.coll_mask & MPCOLL_MASK_GROUND)
    {
        Vec3f translate = joint->translate;

        translate.y += attributes->objectcoll_bottom;

        efParticle_DustHeavyDouble_MakeEffect(&translate, ip->lr, 1.0F);
    }
}

// 0x801769AC
void itMSBomb_NExplode_InitStatusVars(GObj *item_gobj, bool32 is_create_gfx)
{
    efParticle *ep;
    DObj *joint = DObjGetStruct(item_gobj);

    if (is_create_gfx != FALSE)
    {
        itMSBomb_NExplode_SpawnGFXFighter(item_gobj);
    }
    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate);

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ITMSBOMB_EXPLODE_SCALE;
        ep->effect_info->scale.y = ITMSBOMB_EXPLODE_SCALE;
        ep->effect_info->scale.z = ITMSBOMB_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);
    itMain_RefreshHit(item_gobj);
    itMSBomb_NExplode_SetStatus(item_gobj);

    DObjGetStruct(item_gobj)->unk_0x54 = 2;
}

// 0x80176A34
bool32 itMSBomb_SDefault_ProcDamage(GObj *item_gobj)
{
    func_800269C0(gmSound_SFX_ExplodeL);
    itMSBomb_NExplode_InitStatusVars(item_gobj, FALSE);

    return FALSE;
}

// 0x80176A68
bool32 itMSBomb_GAttach_ProcUpdate(GObj *item_gobj)
{
    s32 unused[2];
    GObj *fighter_gobj;
    Vec3f *translate;
    Vec3f dist;
    Vec3f f_pos;
    DObj *aj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi < ITMSBOMB_DETECT_FIGHTER_DELAY)
    {
        ip->it_multi++;
    }
    else
    {
        fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        translate = &aj->translate;

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);
            DObj *fj = DObjGetStruct(fighter_gobj);
            f32 var = fp->attributes->object_coll.top * 0.5F;

            f_pos = fj->translate;

            f_pos.y += var;

            vec3f_sub(&dist, &f_pos, translate);

            if ((SQUARE(dist.x) + SQUARE(dist.y) + SQUARE(dist.z)) < ITMSBOMB_DETECT_FIGHTER_RADIUS)
            {
                itMSBomb_NExplode_InitStatusVars(item_gobj, TRUE); // We might want to break out of the loop here
            }
            fighter_gobj = fighter_gobj->group_gobj_next;
        }
    }
    return FALSE;
}

// 0x80176B94
void itMSBomb_GAttach_SetStatus(GObj *item_gobj)
{
    itMSBomb_GAttach_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_GAttach);
}

// 0x80176BC8
bool32 itMSBomb_GAttach_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (func_ovl2_800FC67C(ip->attach_line_id) == FALSE)
    {
        ip->is_attach_surface = FALSE;

        itMSBomb_ADetach_SetStatus(item_gobj);
    }
    return FALSE;
}

extern intptr_t D_NF_00000404;

void itMSBomb_NExplode_UpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(itCommon_MSBomb_ItemDesc, D_NF_00000404); // (itHitEvent *)((uintptr_t)*itCommon_MSBomb_ItemDesc.p_file + &D_NF_00000404); - Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size   = ev[ip->item_event_index].size;

        ip->item_hit.can_rehit_item = TRUE;
        ip->item_hit.can_hop = FALSE;
        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.rebound = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80176D00
void itMSBomb_ADetach_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMain_ClearOwnerStats(item_gobj);
}

// 0x80176D2C
bool32 itMSBomb_ADetach_ProcUpdate(GObj *item_gobj)
{
    s32 unused[2];
    GObj *fighter_gobj;
    Vec3f *translate;
    Vec3f dist;
    Vec3f f_pos;
    DObj *aj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITMSBOMB_GRAVITY, ITMSBOMB_T_VEL);

    if (ip->it_multi < ITMSBOMB_DETECT_FIGHTER_DELAY)
    {
        ip->it_multi++;
    }
    else
    {
        fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        translate = &aj->translate;

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);
            DObj *fj = DObjGetStruct(fighter_gobj);
            f32 var = fp->attributes->object_coll.top * 0.5F;

            f_pos = fj->translate;

            f_pos.y += var;

            vec3f_sub(&dist, &f_pos, translate);

            if ((SQUARE(dist.x) + SQUARE(dist.y) + SQUARE(dist.z)) < ITMSBOMB_DETECT_FIGHTER_RADIUS)
            {
                itMSBomb_NExplode_InitStatusVars(item_gobj, FALSE); // We might want to break out of the loop here
            }
            fighter_gobj = fighter_gobj->group_gobj_next;
        }
    }
    return FALSE;
}

// 0x80176E68
void itMSBomb_ADetach_SetStatus(GObj *item_gobj)
{
    itMSBomb_ADetach_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_ADetach);
}

// 0x80176E9C
void itMSBomb_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_event_index = 0;

    ip->item_hit.stale = ITEM_STALE_DEFAULT;
    ip->item_hit.hit_sfx = gmSound_SFX_ExplodeL;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMSBomb_NExplode_UpdateHitEvent(item_gobj);
}

// 0x80176EE4
bool32 itMSBomb_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMSBomb_NExplode_UpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITMSBOMB_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80176F2C
void itMSBomb_NExplode_SetStatus(GObj *item_gobj)
{
    itMSBomb_NExplode_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MSBomb_StatusDesc, itStatus_MSBomb_NExplode);
}

// 0x80176F60
GObj* itCommon_MSBomb_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_MSBomb_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;
    Vec3f translate;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        joint->next->unk_0x54 = 2;
        joint->next->unk_0x8->unk_0x54 = 0;

        translate = joint->translate;

        func_80008CC0(joint, 0x1B, 0);
        func_80008CC0(joint->next->unk_0x8, 0x46, 0);

        joint->translate = translate;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);

        joint->rotate.z = 0.0F;
    }
    return item_gobj;
}