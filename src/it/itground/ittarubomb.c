#include <it/item.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern f32 mtTrigGetRandomFloat();
extern f32 atan2f(f32, f32);

extern alSoundEffect *func_800269C0_275C0(u16);

extern intptr_t lITTaruBombItemAttributes;     // 0x000000A8
extern intptr_t lITTaruBombHitEvents;          // 0x000000F0
extern intptr_t lITTaruBombDataStart;          // 0x00000788
extern intptr_t lITTaruBombEffectDisplayList;  // 0x000008A0

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITTaruBombItemDesc =
{
    nITKindTaruBomb,                            // Item Kind
    &gGRCommonStruct.bonus3.item_head,          // Pointer to item file data?
    &lITTaruBombItemAttributes,                 // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,                 // Main matrix transformations
        nOMTransformNull,                       // Secondary matrix transformations?
        0                                       // ???
    },

    nGMHitUpdateNew,                            // Hitbox Update State
    itTaruBombFallProcUpdate,                   // Proc Update
    itTaruBombFallProcMap,                      // Proc Map
    itTaruBombCommonProcHit,                    // Proc Hit
    itTaruBombCommonProcHit,                    // Proc Shield
    NULL,                                       // Proc Hop
    itTaruBombCommonProcHit,                    // Proc Set-Off
    itTaruBombCommonProcHit,                    // Proc Reflector
    itTaruBombCommonProcDamage                  // Proc Damage
};

itStatusDesc dITTaruBombStatusDescs[/* */] =
{
    // Status 0 (Air Wait Fall)
    {
        itTaruBombFallProcUpdate,               // Proc Update
        itTaruBombFallProcMap,                  // Proc Map
        itTaruBombCommonProcHit,                // Proc Hit
        itTaruBombCommonProcHit,                // Proc Shield
        NULL,                                   // Proc Hop
        itTaruBombCommonProcHit,                // Proc Set-Off
        itTaruBombCommonProcHit,                // Proc Reflector
        itTaruBombCommonProcDamage              // Proc Damage
    },

    // Status 1 (Neutral Explosion)
    {
        itTaruBombExplodeProcUpdate,            // Proc Update
        NULL,                                   // Proc Map
        NULL,                                   // Proc Hit
        NULL,                                   // Proc Shield
        NULL,                                   // Proc Hop
        NULL,                                   // Proc Set-Off
        NULL,                                   // Proc Reflector
        NULL                                    // Proc Damage
    },

    // Status 2 (Ground Roll)
    {
        itTaruBombRollProcUpdate,               // Proc Update
        itTaruBombRollProcMap,                  // Proc Map
        itTaruBombCommonProcHit,                // Proc Hit
        itTaruBombCommonProcHit,                // Proc Shield
        NULL,                                   // Proc Hop
        itTaruBombCommonProcHit,                // Proc Set-Off
        itTaruBombCommonProcHit,                // Proc Reflector
        itTaruBombCommonProcDamage              // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itTaruBombStatus
{
    nITTaruBombStatusFall,
    nITTaruBombStatusExplode,
    nITTaruBombStatusRoll,
    nITTaruBombStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80184A70
void itTaruBombContainerSmashUpdateEffect(GObj *effect_gobj) // RTTF bomb explode GFX process
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    ep->effect_vars.container.lifetime--;

    if (ep->effect_vars.container.lifetime == 0)
    {
        efManagerSetPrevStructAlloc(ep);
        gcEjectGObj(effect_gobj);
    }
    else while (dobj != NULL)
    {
        dobj->scale.vec.f.y -= 1.3F;

        dobj->translate.vec.f.x += dobj->scale.vec.f.x; // This makes no sense, seems this custom effect is very... custom
        dobj->translate.vec.f.y += dobj->scale.vec.f.y;
        dobj->translate.vec.f.z += dobj->scale.vec.f.z;

        dobj->rotate.vec.f.x += dobj->anim_remain; // ??? Seems to be rotation step, but only in this case? Otherwise -FLOAT32_MAX?
        dobj->rotate.vec.f.y += dobj->anim_speed;
        dobj->rotate.vec.f.z += dobj->anim_frame;

        dobj = dobj->sib_next;
    }
}

// 0x80184B44
void itTaruBombContainerSmashMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep = efManagerGetEffectNoForce();
    DObj *dobj;
    s32 i;
    Gfx *dl;

    if (ep != NULL)
    {
        effect_gobj = gcMakeGObjSPAfter(nOMObjCommonKindEffect, NULL, nOMObjCommonLinkIDEffect, GOBJ_LINKORDER_DEFAULT);

        if (effect_gobj != NULL)
        {
            gcAddGObjRenderProc(effect_gobj, gcDrawDObjTreeForGObj, 11, GOBJ_DLLINKORDER_DEFAULT, -1);

            dl = (Gfx*) ((*(uintptr_t*)((uintptr_t)*dITTaruBombItemDesc.p_file + dITTaruBombItemDesc.o_attributes) - (uintptr_t)&lITTaruBombDataStart) + (uintptr_t)&lITTaruBombEffectDisplayList); // Linker thing

            for (i = 0; i < ITTARUBOMB_EFFECT_COUNT; i++)
            {
                dobj = gcAddDObjForGObj(effect_gobj, dl);

                gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);

                dobj->translate.vec.f = *pos;

                dobj->scale.vec.f.x = (mtTrigGetRandomFloat() * 48.0F) + -24.0F;
                dobj->scale.vec.f.y = (mtTrigGetRandomFloat() * 50.0F) + 10.0F;
                dobj->scale.vec.f.z = (mtTrigGetRandomFloat() * 32.0F) + -16.0F;

                dobj->anim_remain = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
                dobj->anim_speed = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
                dobj->anim_frame = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
            }
            ep->effect_vars.container.lifetime = ITTARUBOMB_GFX_LIFETIME;

            effect_gobj->user_data.p = ep;

            gcAddGObjCommonProc(effect_gobj, itTaruBombContainerSmashUpdateEffect, 1, 3);
        }
    }
}

// 0x80184D74
sb32 itTaruBombFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    itMainApplyGravityClampTVel(ip, ITTARUBOMB_GRAVITY, ITTARUBOMB_TVEL);

    dobj = DObjGetStruct(item_gobj);
    dobj->rotate.vec.f.z += ip->item_vars.tarubomb.roll_rotate_step;

    return FALSE;
}

// 0x80184DC4
sb32 itTaruBombCommonProcHit(GObj *item_gobj)
{
    func_800269C0_275C0(nSYAudioFGMTaruBombHit);
    itTaruBombContainerSmashMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
    itTaruBombExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80184E04
sb32 itTaruBombCommonProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITTARUBOMB_HEALTH_MAX)
    {
        return itTaruBombCommonProcHit(item_gobj);
    }
    return FALSE;
} 

// 0x80184E44
void itTaruBombRollSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITTaruBombStatusDescs, nITTaruBombStatusRoll);
}

// 0x80184E78
sb32 itTaruBombFallCheckCollideGround(GObj *item_gobj, f32 common_rebound)
{
    s32 unused;
    itStruct *ip;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_FLAG_CEIL | MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL), common_rebound, NULL) != FALSE)
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
sb32 itTaruBombFallProcMap(GObj *item_gobj)
{
    if (itTaruBombFallCheckCollideGround(item_gobj, ITTARUBOMB_MAP_REBOUND_COMMON) != FALSE)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->phys_info.vel_air.y >= 90.0F) // Is it even possible to meet this condition? Didn't they mean <= inverse of this value?
        {
            itTaruBombCommonProcHit(item_gobj); // This causes the bomb to smash on impact when landing from too high; doesn't seem possible to trigger

            return TRUE;
        }
        else if (ip->phys_info.vel_air.y < 30.0F)
        {
            itTaruBombRollSetStatus(item_gobj);
        }
        else
        {
            func_ovl0_800C7B08(&ip->phys_info.vel_air, &ip->coll_data.ground_angle);

            ip->phys_info.vel_air.y *= 0.2F;

            itMainVelSetRotateStepLR(item_gobj);
        }
        func_800269C0_275C0(nSYAudioFGMTaruBombMap);
        itMainClearOwnerStats(item_gobj);
    }
    return FALSE;
}


// 0x80184FAC
void itTaruBombCommonSetMapCollisionBox(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.x = F_CLC_DTOR32(90.0F); // HALF_PI32

    ip->coll_data.objcoll.top = ip->coll_data.objcoll.width;
    ip->coll_data.objcoll.bottom = -ip->coll_data.objcoll.width;
}

// 0x80184FD4
sb32 itTaruBombExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITTARUBOMB_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITTaruBombItemDesc, lITTaruBombHitEvents)); // Linker thing

    return FALSE;
}

// 0x80185030
sb32 itTaruBombRollProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 roll_rotate_step;
    f32 sqrt_vel;

    ip->phys_info.vel_air.x += (-(atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_CLC_DTOR32(90.0F) /*HALF_PI32*/) * ITTARUBOMB_MUL_VEL_X);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? nGMFacingR : nGMFacingL;

    sqrt_vel = sqrtf(SQUARE(ip->phys_info.vel_air.x) + SQUARE(ip->phys_info.vel_air.y));

    roll_rotate_step = ((ip->lr == nGMFacingL) ? ITTARUBOMB_ROLL_ROTATE_MUL : -ITTARUBOMB_ROLL_ROTATE_MUL) * sqrt_vel;

    ip->item_vars.tarubomb.roll_rotate_step = roll_rotate_step;

    DObjGetStruct(item_gobj)->rotate.vec.f.z += roll_rotate_step;

    return FALSE;
}

// 0x8018511C
sb32 itTaruBombRollProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestLRWallCheckGround(item_gobj) == FALSE)
    {
        itMainSetItemStatus(item_gobj, dITTaruBombStatusDescs, nITTaruBombStatusFall);
    }
    else if (ip->coll_data.coll_mask_curr & (MPCOLL_FLAG_RWALL | MPCOLL_FLAG_LWALL))
    {
        return itTaruBombCommonProcHit(item_gobj);
    }
    return FALSE;
}

// 0x8018518C
GObj* itTaruBombMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITTaruBombItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.tarubomb.roll_rotate_step = 0.0F;

        itTaruBombCommonSetMapCollisionBox(item_gobj);
    }
    return item_gobj;
}

// 0x801851F4
void itTaruBombExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_id = 0;

    ip->item_hit.hit_sfx = nSYAudioFGMExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;
    ip->item_hit.element = nGMHitElementFire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = nGMHitStatusNone;

    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITTaruBombItemDesc, lITTaruBombHitEvents));
}

// 0x80185284
void itTaruBombExplodeSetStatus(GObj *item_gobj)
{
    itTaruBombExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITTaruBombStatusDescs, nITTaruBombStatusExplode);
}

// 0x801852B8
void itTaruBombExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    efParticle *efpart;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    efpart = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.x =
        efpart->effect_info->scale.y =
        efpart->effect_info->scale.z = ITTARUBOMB_EXPLODE_EFFECT_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itTaruBombExplodeSetStatus(item_gobj);
}
