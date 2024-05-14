#include <it/item.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITRBombItemAttributes;     // 0x000000A8
extern intptr_t lITRBombHitEvents;          // 0x000000F0
extern intptr_t lITRBombDataStart;          // 0x00000788
extern intptr_t lITRBombEffectDisplayList;  // 0x000008A0

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITRBombItemDesc =
{
    It_Kind_RBomb,                          // Item Kind
    &gGroundStruct.bonus3.item_head,        // Pointer to item file data?
    &lITRBombItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itRBombAFallProcUpdate,                 // Proc Update
    itRBombAFallProcMap,                    // Proc Map
    itRBombSDefaultProcHit,                 // Proc Hit
    itRBombSDefaultProcHit,                 // Proc Shield
    NULL,                                   // Proc Hop
    itRBombSDefaultProcHit,                 // Proc Set-Off
    itRBombSDefaultProcHit,                 // Proc Reflector
    itRBombSDefaultProcDamage               // Proc Damage
};

itStatusDesc dITRBombStatusDesc[/* */] =
{
    // Status 0 (Air Wait Fall)
    {
        itRBombAFallProcUpdate,             // Proc Update
        itRBombAFallProcMap,                // Proc Map
        itRBombSDefaultProcHit,             // Proc Hit
        itRBombSDefaultProcHit,             // Proc Shield
        NULL,                               // Proc Hop
        itRBombSDefaultProcHit,             // Proc Set-Off
        itRBombSDefaultProcHit,             // Proc Reflector
        itRBombSDefaultProcDamage           // Proc Damage
    },

    // Status 1 (Neutral Explosion)
    {
        itRBombNExplodeProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Ground Roll)
    {
        itRBombGRollProcUpdate,             // Proc Update
        itRBombGRollProcMap,                // Proc Map
        itRBombSDefaultProcHit,             // Proc Hit
        itRBombSDefaultProcHit,             // Proc Shield
        NULL,                               // Proc Hop
        itRBombSDefaultProcHit,             // Proc Set-Off
        itRBombSDefaultProcHit,             // Proc Reflector
        itRBombSDefaultProcDamage           // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itRBombStatus
{
    itStatus_RBomb_AFall,
    itStatus_RBomb_NExplode,
    itStatus_RBomb_GRoll,
    itStatus_RBomb_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80184A70
void itRBombContainerSmashUpdateEffect(GObj *effect_gobj) // RTTF bomb explode GFX process
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    ep->effect_vars.container.lifetime--;

    if (ep->effect_vars.container.lifetime == 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);
    }
    else while (dobj != NULL)
    {
        dobj->scale.vec.f.y -= 1.3F;

        dobj->translate.vec.f.x += dobj->scale.vec.f.x; // This makes no sense, seems this custom effect is very... custom
        dobj->translate.vec.f.y += dobj->scale.vec.f.y;
        dobj->translate.vec.f.z += dobj->scale.vec.f.z;

        dobj->rotate.vec.f.x += dobj->dobj_f0; // ??? Seems to be rotation step, but only in this case? Otherwise -FLOAT32_MAX?
        dobj->rotate.vec.f.y += dobj->dobj_f1;
        dobj->rotate.vec.f.z += dobj->dobj_f2;

        dobj = dobj->sib_next;
    }
}

// 0x80184B44
void itRBombContainerSmashMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep = efManager_GetStructNoForceReturn();
    DObj *dobj;
    s32 i;
    Gfx *dl;

    if (ep != NULL)
    {
        effect_gobj = omMakeGObjCommon(GObj_Kind_Effect, NULL, 6, 0x80000000);

        if (effect_gobj != NULL)
        {
            omAddGObjRenderProc(effect_gobj, odRenderDObjTreeForGObj, 0xB, 0x80000000, -1);

            dl = (Gfx*) (*(uintptr_t*)((uintptr_t)*dITRBombItemDesc.p_file + dITRBombItemDesc.offset) - (uintptr_t)&lITRBombDataStart) + (uintptr_t)&lITRBombEffectDisplayList; // Linker thing

            for (i = 0; i < ITRBOMB_GFX_COUNT; i++)
            {
                dobj = omAddDObjForGObj(effect_gobj, dl);

                omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);

                dobj->translate.vec.f = *pos;

                dobj->scale.vec.f.x = (lbRandom_GetFloat() * 48.0F) + -24.0F;
                dobj->scale.vec.f.y = (lbRandom_GetFloat() * 50.0F) + 10.0F;
                dobj->scale.vec.f.z = (lbRandom_GetFloat() * 32.0F) + -16.0F;

                dobj->dobj_f0 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
                dobj->dobj_f1 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
                dobj->dobj_f2 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
            }
            ep->effect_vars.container.lifetime = ITRBOMB_GFX_LIFETIME;

            effect_gobj->user_data.p = ep;

            omAddGObjCommonProc(effect_gobj, itRBombContainerSmashUpdateEffect, 1, 3);
        }
    }
}

// 0x80184D74
sb32 itRBombAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    itMainApplyGClampTVel(ip, ITRBOMB_GRAVITY, ITRBOMB_T_VEL);

    dobj = DObjGetStruct(item_gobj);
    dobj->rotate.vec.f.z += ip->item_vars.rbomb.roll_rotate_step;

    return FALSE;
}

// 0x80184DC4
sb32 itRBombSDefaultProcHit(GObj *item_gobj)
{
    func_800269C0(alSound_SFX_RBombHit);
    itRBombContainerSmashMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
    itRBombNExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80184E04
sb32 itRBombSDefaultProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITRBOMB_HEALTH_MAX)
    {
        return itRBombSDefaultProcHit(item_gobj);
    }
    return FALSE;
} 

// 0x80184E44
void itRBombGRollSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITRBombStatusDesc, itStatus_RBomb_GRoll);
}

// 0x80184E78
sb32 itRBombAFallCheckCollideGround(GObj *item_gobj, f32 vel_mod)
{
    s32 unused;
    itStruct *ip;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), vel_mod, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80184EDC
sb32 itRBombAFallProcMap(GObj *item_gobj)
{
    if (itRBombAFallCheckCollideGround(item_gobj, 0.5F) != FALSE)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->phys_info.vel_air.y >= 90.0F) // Is it even possible to meet this condition? Didn't they mean ABSF(ap->phys_info.vel_air.y)?
        {
            itRBombSDefaultProcHit(item_gobj); // This causes the bomb to smash on impact when landing from too high; doesn't seem possible to trigger

            return TRUE;
        }
        else if (ip->phys_info.vel_air.y < 30.0F)
        {
            itRBombGRollSetStatus(item_gobj);
        }
        else
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &ip->coll_data.ground_angle);

            ip->phys_info.vel_air.y *= 0.2F;

            itMainVelSetRotateStepLR(item_gobj);
        }
        func_800269C0(alSound_SFX_RBombMap);
        itMainClearOwnerStats(item_gobj);
    }
    return FALSE;
}


// 0x80184FAC
void itRBombSDefaultSetMapCollisionBox(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.x = F_DEG_TO_RAD(90.0F); // HALF_PI32

    ip->coll_data.object_coll.top = ip->coll_data.object_coll.width;
    ip->coll_data.object_coll.bottom = -ip->coll_data.object_coll.width;
}

// 0x80184FD4
sb32 itRBombNExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITRBOMB_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITRBombItemDesc, lITRBombHitEvents)); // Linker thing

    return FALSE;
}

// 0x80185030
sb32 itRBombGRollProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 roll_rotate_step;
    f32 sqrt_vel;

    ip->phys_info.vel_air.x += (-(atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_DEG_TO_RAD(90.0F) /*HALF_PI32*/) * ITRBOMB_MUL_VEL_X);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? LR_Right : LR_Left;

    sqrt_vel = sqrtf(SQUARE(ip->phys_info.vel_air.x) + SQUARE(ip->phys_info.vel_air.y));

    roll_rotate_step = ((ip->lr == LR_Left) ? ITRBOMB_ROLL_ROTATE_MUL : -ITRBOMB_ROLL_ROTATE_MUL) * sqrt_vel;

    ip->item_vars.rbomb.roll_rotate_step = roll_rotate_step;

    DObjGetStruct(item_gobj)->rotate.vec.f.z += roll_rotate_step;

    return FALSE;
}

// 0x8018511C
sb32 itRBombGRollProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestLRWallCheckGround(item_gobj) == FALSE)
    {
        itMainSetItemStatus(item_gobj, dITRBombStatusDesc, itStatus_RBomb_AFall);
    }
    else if (ip->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
    {
        return itRBombSDefaultProcHit(item_gobj);
    }
    return FALSE;
}

// 0x8018518C
GObj* itRBombMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITRBombItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.rbomb.roll_rotate_step = 0.0F;

        itRBombSDefaultSetMapCollisionBox(item_gobj);
    }
    return item_gobj;
}

// 0x801851F4
void itRBombNExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_index = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITRBombItemDesc, lITRBombHitEvents));
}

// 0x80185284
void itRBombNExplodeSetStatus(GObj *item_gobj)
{
    itRBombNExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITRBombStatusDesc, itStatus_RBomb_NExplode);
}

// 0x801852B8
void itRBombNExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    efParticle *efpart;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.vec.f.x = efpart->effect_info->scale.vec.f.y = efpart->effect_info->scale.vec.f.z = ITRBOMB_EXPLODE_GFX_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itRBombNExplodeSetStatus(item_gobj);
}
