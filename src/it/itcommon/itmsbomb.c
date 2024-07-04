#include <it/item.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITMSBombItemAttributes;    // 0x000003BC
extern intptr_t lITMSBombHitEvents;          // 0x00000404

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITMSBombItemDesc =
{
    It_Kind_MSBomb,                         // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITMSBombItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMSBombAFallProcUpdate,                // Proc Update
    itMSBombAFallProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITMSBombStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itMSBombGWaitProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itMSBombAFallProcUpdate,            // Proc Update
        itMSBombAFallProcMap,               // Proc Map
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
        itMSBombFThrowProcUpdate,           // Proc Update
        itMSBombFThrowProcMap,              // Proc Map
        itMSBombSDefaultProcHit,            // Proc Hit
        itMSBombSDefaultProcHit,            // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itMSBombSDefaultProcHit,            // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itMSBombAFallProcUpdate,            // Proc Update
        itMSBombFDropProcMap,               // Proc Map
        itMSBombSDefaultProcHit,            // Proc Hit
        itMSBombSDefaultProcHit,            // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itMSBombSDefaultProcHit,            // Proc Set-Off
        itMainSDefaultProcReflector,      // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Attach)
    {
        itMSBombGAttachProcUpdate,          // Proc Update
        itMSBombGAttachProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMSBombSDefaultProcDamage          // Proc Damage
    },

    // Status 6 (Air Detach from Surface)
    {
        itMSBombADetachProcUpdate,          // Proc Update
        itMSBombFDropProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMSBombSDefaultProcDamage          // Proc Damage
    },

    // Status 7 (Neutral Explosion)
    {
        itMSBombNExplodeProcUpdate,         // Proc Update
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

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80176450
sb32 itMSBombAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMSBOMB_GRAVITY, ITMSBOMB_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    joint->child->sib_next->rotate.vec.f.z = joint->rotate.vec.f.z;

    return FALSE;
}

// 0x801764A8
sb32 itMSBombGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itMSBombAFallSetStatus);

    return FALSE;
}

// 0x801764D0
sb32 itMSBombAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itMSBombGWaitSetStatus);
}

// 0x80176504
void itMSBombGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_GWait);
}

// 0x80176538
void itMSBombAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_AFall);
}

// 0x8017657C
void itMSBombFHoldSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_FHold);
}

// 0x801765A4
sb32 itMSBombFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMSBOMB_GRAVITY, ITMSBOMB_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    joint->child->sib_next->rotate.vec.f.z = joint->rotate.vec.f.z;

    return FALSE;
}

// 0x801765FC
sb32 itMSBombFThrowProcMap(GObj *item_gobj)
{
    return itMapCheckMapProcAll(item_gobj, itMSBombGAttachSetStatus);
}

// 0x80176620
sb32 itMSBombSDefaultProcHit(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80176644
void itMSBombFThrowSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->coll_data.object_coll.top = ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.center = 0.0F;
    ip->coll_data.object_coll.bottom = -ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.width = ITMSBOMB_COLL_SIZE;

    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_FThrow);
}

// 0x80176694
sb32 itMSBombFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapProcAll(item_gobj, itMSBombGAttachSetStatus);
}

// 0x801766B8
void itMSBombFDropSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->coll_data.object_coll.top = ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.center = 0.0F;
    ip->coll_data.object_coll.bottom = -ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.width = ITMSBOMB_COLL_SIZE;

    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_FDrop);
}

// 0x80176708
void itMSBombGAttachUpdateSurface(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    mpCollData *coll_data = &ip->coll_data;
    Vec3f angle;
    DObj *joint = DObjGetStruct(item_gobj);

    if ((coll_data->coll_mask_curr & MPCOLL_KIND_CEIL) || (coll_data->coll_mask_curr & MPCOLL_KIND_GROUND))
    {
        if (coll_data->coll_mask_curr & MPCOLL_KIND_CEIL)
        {
            angle = coll_data->ceil_angle;

            ip->attach_line_id = coll_data->ceil_line_id;
        }
        if (coll_data->coll_mask_curr & MPCOLL_KIND_GROUND)
        {
            angle = coll_data->ground_angle;

            ip->attach_line_id = coll_data->ground_line_id;
        }
    }
    else
    {
        if (coll_data->coll_mask_curr & MPCOLL_KIND_LWALL)
        {
            angle = coll_data->lwall_angle;

            ip->attach_line_id = coll_data->lwall_line_id;
        }
        if (coll_data->coll_mask_curr & MPCOLL_KIND_RWALL)
        {
            angle = coll_data->rwall_angle;

            ip->attach_line_id = coll_data->rwall_line_id;
        }
    }
    joint->rotate.vec.f.z = atan2f(angle.y, angle.x) - F_CST_DTOR32(90.0F); // HALF_PI32
}

// 0x80176840
void itMSBombGAttachInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->coll_data.object_coll.top = ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.center = 0.0F;
    ip->coll_data.object_coll.bottom = -ITMSBOMB_COLL_SIZE;
    ip->coll_data.object_coll.width = ITMSBOMB_COLL_SIZE;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = ip->phys_info.vel_air.z = 0;

    dobj->child->flags = DOBJ_FLAG_NONE;
    dobj->child->sib_next->flags = DOBJ_FLAG_NORENDER;

    itMSBombGAttachUpdateSurface(item_gobj);

    ip->is_attach_surface = TRUE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    if ((ip->player != -1) && (ip->player != GMMATCH_PLAYERS_MAX)) // Macro might be off though
    {
        GObj *fighter_gobj = gBattleState->player_block[ip->player].fighter_gobj;

        if (fighter_gobj != NULL)
        {
            ftMainMakeRumble(ftGetStruct(fighter_gobj), 6, 0);
        }
    }
    func_800269C0_275C0(alSound_SFX_MSBombAttach);

    itMainClearOwnerStats(item_gobj);
}

// 0x80176934
void itMSBombNExplodeMakeEffect(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *dobj = DObjGetStruct(item_gobj);
    s32 unused[4];

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        Vec3f translate = dobj->translate.vec.f;

        translate.y += attributes->objectcoll_bottom;

        efParticle_DustHeavyDouble_MakeEffect(&translate, ip->lr, 1.0F);
    }
}

// 0x801769AC
void itMSBombNExplodeInitStatusVars(GObj *item_gobj, sb32 is_make_effect)
{
    efParticle *efpart;
    DObj *dobj = DObjGetStruct(item_gobj);

    if (is_make_effect != FALSE)
    {
        itMSBombNExplodeMakeEffect(item_gobj);
    }
    efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.x = ITMSBOMB_EXPLODE_SCALE;
        efpart->effect_info->scale.y = ITMSBOMB_EXPLODE_SCALE;
        efpart->effect_info->scale.z = ITMSBOMB_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);
    itMainRefreshHit(item_gobj);
    itMSBombNExplodeSetStatus(item_gobj);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;
}

// 0x80176A34
sb32 itMSBombSDefaultProcDamage(GObj *item_gobj)
{
    func_800269C0_275C0(alSound_SFX_ExplodeL);
    itMSBombNExplodeInitStatusVars(item_gobj, FALSE);

    return FALSE;
}

// 0x80176A68
sb32 itMSBombGAttachProcUpdate(GObj *item_gobj)
{
    s32 unused[2];
    GObj *fighter_gobj;
    Vec3f *translate;
    Vec3f dist;
    Vec3f fighter_pos;
    DObj *item_dobj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi < ITMSBOMB_DETECT_FIGHTER_DELAY)
    {
        ip->it_multi++;
    }
    else
    {
        fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

        translate = &item_dobj->translate.vec.f;

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);
            DObj *fighter_dobj = DObjGetStruct(fighter_gobj);
            f32 var = fp->attributes->object_coll.top * 0.5F;

            fighter_pos = fighter_dobj->translate.vec.f;

            fighter_pos.y += var;

            lbVector_Vec3fSubtract(&dist, &fighter_pos, translate);

            if ((SQUARE(dist.x) + SQUARE(dist.y) + SQUARE(dist.z)) < ITMSBOMB_DETECT_FIGHTER_RADIUS)
            {
                itMSBombNExplodeInitStatusVars(item_gobj, TRUE); // We might want to break out of the loop here
            }
            fighter_gobj = fighter_gobj->link_next;
        }
    }
    return FALSE;
}

// 0x80176B94
void itMSBombGAttachSetStatus(GObj *item_gobj)
{
    itMSBombGAttachInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_GAttach);
}

// 0x80176BC8
sb32 itMSBombGAttachProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (mpCollision_CheckExistLineID(ip->attach_line_id) == FALSE)
    {
        ip->is_attach_surface = FALSE;

        itMSBombADetachSetStatus(item_gobj);
    }
    return FALSE;
}

void itMSBombNExplodeUpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = itGetHitEvent(dITMSBombItemDesc, lITMSBombHitEvents); // (itHitEvent *)((uintptr_t)*dITMSBombItemDesc.p_file + &lITMSBombHitEvents); - Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle  = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size   = ev[ip->item_event_index].size;

        ip->item_hit.can_rehit_item = TRUE;
        ip->item_hit.can_hop = FALSE;
        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.can_setoff = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80176D00
void itMSBombADetachInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    itMainClearOwnerStats(item_gobj);
}

// 0x80176D2C
sb32 itMSBombADetachProcUpdate(GObj *item_gobj)
{
    s32 unused[2];
    GObj *fighter_gobj;
    Vec3f *translate;
    Vec3f dist;
    Vec3f fighter_pos;
    DObj *item_dobj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMSBOMB_GRAVITY, ITMSBOMB_T_VEL);

    if (ip->it_multi < ITMSBOMB_DETECT_FIGHTER_DELAY)
    {
        ip->it_multi++;
    }
    else
    {
        fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

        translate = &item_dobj->translate.vec.f;

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);
            DObj *fighter_dobj = DObjGetStruct(fighter_gobj);
            f32 offset_y = fp->attributes->object_coll.top * 0.5F;

            fighter_pos = fighter_dobj->translate.vec.f;

            fighter_pos.y += offset_y;

            lbVector_Vec3fSubtract(&dist, &fighter_pos, translate);

            if ((SQUARE(dist.x) + SQUARE(dist.y) + SQUARE(dist.z)) < ITMSBOMB_DETECT_FIGHTER_RADIUS)
            {
                itMSBombNExplodeInitStatusVars(item_gobj, FALSE); // We might want to break out of the loop here
            }
            fighter_gobj = fighter_gobj->link_next;
        }
    }
    return FALSE;
}

// 0x80176E68
void itMSBombADetachSetStatus(GObj *item_gobj)
{
    itMSBombADetachInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_ADetach);
}

// 0x80176E9C
void itMSBombNExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_event_index = 0;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;
    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMSBombNExplodeUpdateHitEvent(item_gobj);
}

// 0x80176EE4
sb32 itMSBombNExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMSBombNExplodeUpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITMSBOMB_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80176F2C
void itMSBombNExplodeSetStatus(GObj *item_gobj)
{
    itMSBombNExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITMSBombStatusDesc, itStatus_MSBomb_NExplode);
}

// 0x80176F60
GObj* itMSBombMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITMSBombItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;
    Vec3f translate;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        dobj->child->flags = DOBJ_FLAG_NORENDER;
        dobj->child->sib_next->flags = DOBJ_FLAG_NONE;

        translate = dobj->translate.vec.f;

        omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj->child->sib_next, 0x46, 0);

        dobj->translate.vec.f = translate;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);

        dobj->rotate.vec.f.z = 0.0F;
    }
    return item_gobj;
}
