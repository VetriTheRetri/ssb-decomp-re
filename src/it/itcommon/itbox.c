#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITBoxItemAttributes;       // 0x000005CC
extern intptr_t lITBoxHitEvents;            // 0x00000614
extern intptr_t lITBoxDataStart;            // 0x00006778
extern intptr_t lITBoxEffectDisplayList;    // 0x000068F0

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8018A320
Vec2f dITBoxItemSpawnVelocities[/* */] =
{
    {  0.0F, 48.0F },
    { -2.0F, 48.0F },
    {  2.0F, 48.0F },
    { -5.0F, 48.2F },
    {  0.0F, 48.2F },
    {  5.2F, 48.2F }
};

// 0x8018A350
itCreateDesc dITBoxItemDesc = 
{
    It_Kind_Box,                            // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITBoxItemAttributes,                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBoxAFallProcUpdate,                   // Proc Update
    itBoxAFallProcMap,                      // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018A384
itStatusDesc dITBoxStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itBoxGWaitProcMap,                  // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBoxSDefaultProcDamage             // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBoxAFallProcUpdate,               // Proc Update
        itBoxAFallProcMap,                  // Proc Map
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
        itBoxAFallProcUpdate,               // Proc Update
        itBoxFThrowProcMap,                 // Proc Map
        itBoxSDefaultProcHit,               // Proc Hit
        itBoxSDefaultProcHit,               // Proc Shield
        NULL,                               // Proc Hop
        itBoxSDefaultProcHit,               // Proc Set-Off
        itBoxSDefaultProcHit,               // Proc Reflector
        itBoxSDefaultProcDamage             // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itBoxAFallProcUpdate,               // Proc Update
        itBoxFDropProcMap,                  // Proc Map
        itBoxSDefaultProcHit,               // Proc Hit
        itBoxSDefaultProcHit,               // Proc Shield
        NULL,                               // Proc Hop
        itBoxSDefaultProcHit,               // Proc Set-Off
        itBoxSDefaultProcHit,               // Proc Reflector
        itBoxSDefaultProcDamage             // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itBoxNExplodeProcUpdate,            // Proc Update
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

enum itBoxStatus
{
    itStatus_Box_GWait,
    itStatus_Box_AFall,
    itStatus_Box_FHold,
    itStatus_Box_FThrow,
    itStatus_Box_FDrop,
    itStatus_Box_NExplode,
    itStatus_Box_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80179120
void itBoxContainerSmashUpdateEffect(GObj *effect_gobj) // Barrel/Crate smash GFX process
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *dobj = DObjGetStruct(effect_gobj);

    ep->effect_vars.container.lifetime--;

    if (ep->effect_vars.container.lifetime == 0)
    {
        efManagerSetPrevAlloc(ep);
        omEjectGObj(effect_gobj);
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

// 0x801791F4
void itBoxContainerSmashMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep = efManagerGetEffectNoForce();
    DObj *dobj;
    s32 i;
    Gfx *dl;

    if (ep != NULL)
    {
        effect_gobj = omMakeGObjSPAfter(GObj_Kind_Effect, NULL, GObj_LinkID_Effect, GOBJ_LINKORDER_DEFAULT);

        if (effect_gobj != NULL)
        {
            omAddGObjRenderProc(effect_gobj, odRenderDObjTreeForGObj, 11, GOBJ_DLLINKORDER_DEFAULT, -1);

            dl = (Gfx*) ((*(uintptr_t*) ((uintptr_t)*dITBoxItemDesc.p_file + dITBoxItemDesc.o_attributes) - (intptr_t)&lITBoxDataStart) + (intptr_t)&lITBoxEffectDisplayList); // Linker thing

            for (i = 0; i < ITCONTAINER_GFX_COUNT; i++)
            {
                dobj = omAddDObjForGObj(effect_gobj, dl);

                omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);

                dobj->translate.vec.f = *pos;

                dobj->scale.vec.f.x = (mtTrigGetRandomFloat() * 48.0F) + -24.0F;
                dobj->scale.vec.f.y = (mtTrigGetRandomFloat() * 50.0F) + 10.0F;
                dobj->scale.vec.f.z = (mtTrigGetRandomFloat() * 32.0F) + -16.0F;

                dobj->dobj_f0 = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
                dobj->dobj_f1 = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
                dobj->dobj_f2 = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
            }
            ep->effect_vars.container.lifetime = ITCONTAINER_GFX_LIFETIME;

            effect_gobj->user_data.p = ep;

            omAddGObjCommonProc(effect_gobj, itBoxContainerSmashUpdateEffect, 1, 3);
        }
    }
}

// 0x80179424
sb32 itBoxSDefaultCheckSpawnItems(GObj *item_gobj)
{
    s32 random, spawn_item_num, index;
    s32 i, j;
    Vec2f *spawn_pos;
    Vec3f vel_identical;
    s32 unused;
    s32 bak;
    s32 item_count;
    Vec3f vel_different;

    func_800269C0_275C0(alSound_SFX_ContainerSmash);

    itBoxContainerSmashMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    if (gITRandomWeights.item_num != 0)
    {
        index = itMainGetWeightedItemID(&gITRandomWeights);

        if (index <= It_Kind_CommonEnd)
        {
            random = mtTrigGetRandomIntRange(5);

            if (random < 2)
            {
                spawn_item_num = 1;

                spawn_pos = &dITBoxItemSpawnVelocities[0];
            }
            else if (random < 3)
            {
                spawn_item_num = 2;

                spawn_pos = &dITBoxItemSpawnVelocities[1];
            }
            else
            {
                spawn_item_num = 3;

                spawn_pos = &dITBoxItemSpawnVelocities[3];
            }
            if (mtTrigGetRandomIntRange(32) == 0) // 1 in 32 chance to spawn identical items
            {
                vel_identical.z = 0.0F;

                for (i = 0; i < spawn_item_num; i++)
                {
                    vel_identical.x = spawn_pos[i].x;
                    vel_identical.y = spawn_pos[i].y;

                    itManagerMakeItemSetupCommon(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel_identical, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));
                }
            }
            else
            {
                bak = gITRandomWeights.item_num;
                item_count = gITRandomWeights.item_count - 1;

                gITRandomWeights.item_num = gITRandomWeights.item_totals[item_count];
                gITRandomWeights.item_count--;

                vel_different.z = 0.0F;

                for (j = 0; j < spawn_item_num; j++)
                {
                    if (j != 0)
                    {
                        index = itMainGetWeightedItemID(&gITRandomWeights);
                    }
                    vel_different.x = spawn_pos[j].x;
                    vel_different.y = spawn_pos[j].y;

                    itManagerMakeItemSetupCommon(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel_different, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));
                }
                gITRandomWeights.item_count++;
                gITRandomWeights.item_num = bak;
            }
            func_800269C0_275C0(alSound_SFX_FireFlowerShoot);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8017963C
sb32 itBoxAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITBOX_GRAVITY, ITBOX_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80179674
sb32 itBoxGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBoxAFallSetStatus);

    return FALSE;
}

// 0x8017969C
sb32 itBoxSDefaultProcHit(GObj *item_gobj)
{
    if (itBoxSDefaultCheckSpawnItems(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itBoxNExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x801796D8
sb32 itBoxSDefaultProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITBOX_HEALTH_MAX)
    {
        return itBoxSDefaultProcHit(item_gobj);
    }
    else return FALSE;
}

// 0x80179718
sb32 itBoxAFallProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBoxGWaitSetStatus);
}

// 0x80179748
void itBoxGWaitSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.z = atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_CST_DTOR32(90.0F); // HALF_PI32

    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITBoxStatusDesc, itStatus_Box_GWait);
}

// 0x801797A4
void itBoxAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITBoxStatusDesc, itStatus_Box_AFall);
}

// 0x801797E8
void itBoxFHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.z = 0.0F;
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITBoxStatusDesc, itStatus_Box_FHold);
}

// 0x8017982C
sb32 itBoxFThrowProcMap(GObj *item_gobj)
{
    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE)
    {
        if (itBoxSDefaultCheckSpawnItems(item_gobj) != FALSE)
        {
            return TRUE;
        }
        else itBoxNExplodeMakeEffectGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017987C
void itBoxFThrowSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

    itMainSetItemStatus(item_gobj, dITBoxStatusDesc, itStatus_Box_FThrow);
}

// 0x801798B8
sb32 func_ovl3_801798B8(GObj *item_gobj) // Unused
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x801798DC
sb32 itBoxFDropProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBoxGWaitSetStatus);
}

// 0x8017990C
void itBoxFDropSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F); // HALF_PI32

    itMainSetItemStatus(item_gobj, dITBoxStatusDesc, itStatus_Box_FDrop);
}

// 0x80179948
sb32 itBoxNExplodeProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITBOX_EXPLODE_FRAME_END)
    {
        return TRUE;
    }
    else itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITBoxItemDesc, lITBoxHitEvents)); // Linker thing

    return FALSE;
}

// 0x801799A4
GObj* itBoxMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITBoxItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F);

        ip->is_damage_all = TRUE;
        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// 0x80179A34
void itBoxNExplodeInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_event_index = 0;
    ip->it_multi = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(dITBoxItemDesc, lITBoxHitEvents)); // Linker thing
}

// 0x80179AD4
void itBoxNExplodeSetStatus(GObj *item_gobj)
{
    itBoxNExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBoxStatusDesc, itStatus_Box_NExplode);
}

// 0x80179B08
void itBoxNExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    efParticle *efpart;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    efpart = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.x = efpart->effect_info->scale.y = efpart->effect_info->scale.z = ITBOX_EXPLODE_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itBoxNExplodeSetStatus(item_gobj);
}
