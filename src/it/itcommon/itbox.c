#include <it/item.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITBoxItemAttributes;       // 0x000005CC
extern intptr_t lITBoxAttackEvents;            // 0x00000614
extern intptr_t lITBoxDataStart;            // 0x00006778
extern intptr_t lITBoxEffectDisplayList;    // 0x000068F0

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
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
ITDesc dITBoxItemDesc = 
{
    nITKindBox,                             // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITBoxItemAttributes,                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCMatrixKindTraRotRpyR,             // Main matrix transformations
        nGCMatrixKindNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMAttackStateOff,                      // Hitbox Update State
    itBoxFallProcUpdate,                    // Proc Update
    itBoxFallProcMap,                       // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018A384
ITStatusDesc dITBoxStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itBoxWaitProcMap,                   // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBoxCommonProcDamage               // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBoxFallProcUpdate,                // Proc Update
        itBoxFallProcMap,                   // Proc Map
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
        itBoxFallProcUpdate,                // Proc Update
        itBoxThrownProcMap,                 // Proc Map
        itBoxCommonProcHit,                 // Proc Hit
        itBoxCommonProcHit,                 // Proc Shield
        NULL,                               // Proc Hop
        itBoxCommonProcHit,                 // Proc Set-Off
        itBoxCommonProcHit,                 // Proc Reflector
        itBoxCommonProcDamage               // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itBoxFallProcUpdate,                // Proc Update
        itBoxDroppedProcMap,                // Proc Map
        itBoxCommonProcHit,                 // Proc Hit
        itBoxCommonProcHit,                 // Proc Shield
        NULL,                               // Proc Hop
        itBoxCommonProcHit,                 // Proc Set-Off
        itBoxCommonProcHit,                 // Proc Reflector
        itBoxCommonProcDamage               // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itBoxExplodeProcUpdate,             // Proc Update
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
    nITBoxStatusWait,
    nITBoxStatusFall,
    nITBoxStatusHold,
    nITBoxStatusThrown,
    nITBoxStatusDropped,
    nITBoxStatusExplode,
    nITBoxStatusEnumCount
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80179120
void itBoxContainerSmashUpdateEffect(GObj *effect_gobj) // Barrel/Crate smash GFX process
{
    EFStruct *ep = efGetStruct(effect_gobj);
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

        dobj->rotate.vec.f.x += dobj->anim_wait; // ??? Seems to be rotation step, but only in this case? Otherwise -FLOAT32_MAX?
        dobj->rotate.vec.f.y += dobj->anim_speed;
        dobj->rotate.vec.f.z += dobj->anim_frame;

        dobj = dobj->sib_next;
    }
}

// 0x801791F4
void itBoxContainerSmashMakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    EFStruct *ep = efManagerGetEffectNoForce();
    DObj *dobj;
    s32 i;
    Gfx *dl;

    if (ep != NULL)
    {
        effect_gobj = gcMakeGObjSPAfter(nGCCommonKindEffect, NULL, nGCCommonLinkIDEffect, GOBJ_PRIORITY_DEFAULT);

        if (effect_gobj != NULL)
        {
            gcAddGObjDisplay(effect_gobj, gcDrawDObjTreeForGObj, 11, GOBJ_PRIORITY_DEFAULT, ~0);

            dl = (Gfx*) ((*(uintptr_t*) ((uintptr_t)*dITBoxItemDesc.p_file + dITBoxItemDesc.o_attributes) - (intptr_t)&lITBoxDataStart) + (intptr_t)&lITBoxEffectDisplayList);

            for (i = 0; i < ITCONTAINER_EFFECT_COUNT; i++)
            {
                dobj = gcAddDObjForGObj(effect_gobj, dl);

                gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyR, 0);

                dobj->translate.vec.f = *pos;

                dobj->scale.vec.f.x = (mtTrigGetRandomFloat() * 48.0F) + -24.0F;
                dobj->scale.vec.f.y = (mtTrigGetRandomFloat() * 50.0F) + 10.0F;
                dobj->scale.vec.f.z = (mtTrigGetRandomFloat() * 32.0F) + -16.0F;

                dobj->anim_wait = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
                dobj->anim_speed = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
                dobj->anim_frame = F_CLC_DTOR32((mtTrigGetRandomFloat() * 100.0F) + -50.0F);
            }
            ep->effect_vars.container.lifetime = ITCONTAINER_GFX_LIFETIME;

            effect_gobj->user_data.p = ep;

            gcAddGObjProcess(effect_gobj, itBoxContainerSmashUpdateEffect, 1, 3);
        }
    }
}

// 0x80179424
sb32 itBoxCommonCheckSpawnItems(GObj *item_gobj)
{
    s32 random, spawn_item_num, index;
    s32 i, j;
    Vec2f *spawn_pos;
    Vec3f vel_identical;
    s32 unused;
    s32 bak;
    s32 item_count;
    Vec3f vel_different;

    func_800269C0_275C0(nSYAudioFGMContainerSmash);

    itBoxContainerSmashMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    if (gITManagerRandomWeights.item_num != 0)
    {
        index = itMainGetWeightedItemKind(&gITManagerRandomWeights);

        if (index <= nITKindCommonEnd)
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

                    itManagerMakeItemSetupCommon(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel_identical, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_ITEM));
                }
            }
            else
            {
                bak = gITManagerRandomWeights.item_num;
                item_count = gITManagerRandomWeights.item_count - 1;

                gITManagerRandomWeights.item_num = gITManagerRandomWeights.item_totals[item_count];
                gITManagerRandomWeights.item_count--;

                vel_different.z = 0.0F;

                for (j = 0; j < spawn_item_num; j++)
                {
                    if (j != 0)
                    {
                        index = itMainGetWeightedItemKind(&gITManagerRandomWeights);
                    }
                    vel_different.x = spawn_pos[j].x;
                    vel_different.y = spawn_pos[j].y;

                    itManagerMakeItemSetupCommon(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel_different, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_ITEM));
                }
                gITManagerRandomWeights.item_count++;
                gITManagerRandomWeights.item_num = bak;
            }
            func_800269C0_275C0(nSYAudioFGMFireFlowerShoot);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8017963C
sb32 itBoxFallProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBOX_GRAVITY, ITBOX_TVEL);
    itVisualsUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80179674
sb32 itBoxWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itBoxFallSetStatus);

    return FALSE;
}

// 0x8017969C
sb32 itBoxCommonProcHit(GObj *item_gobj)
{
    if (itBoxCommonCheckSpawnItems(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itBoxExplodeMakeEffectGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x801796D8
sb32 itBoxCommonProcDamage(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITBOX_HEALTH_MAX)
    {
        return itBoxCommonProcHit(item_gobj);
    }
    else return FALSE;
}

// 0x80179718
sb32 itBoxFallProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITBOX_MAP_REBOUND_COMMON, ITBOX_MAP_REBOUND_GROUND, itBoxWaitSetStatus);
}

// 0x80179748
void itBoxWaitSetStatus(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.z = atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_CST_DTOR32(90.0F);

    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITBoxStatusDescs, nITBoxStatusWait);
}

// 0x801797A4
void itBoxFallSetStatus(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITBoxStatusDescs, nITBoxStatusFall);
}

// 0x801797E8
void itBoxHoldSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.z = 0.0F;
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITBoxStatusDescs, nITBoxStatusHold);
}

// 0x8017982C
sb32 itBoxThrownProcMap(GObj *item_gobj)
{
    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_MAIN_MASK) != FALSE)
    {
        if (itBoxCommonCheckSpawnItems(item_gobj) != FALSE)
        {
            return TRUE;
        }
        else itBoxExplodeMakeEffectGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017987C
void itBoxThrownSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F);

    itMainSetItemStatus(item_gobj, dITBoxStatusDescs, nITBoxStatusThrown);
}

// 0x801798B8
sb32 func_ovl3_801798B8(GObj *item_gobj) // Unused
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x801798DC
sb32 itBoxDroppedProcMap(GObj *item_gobj)
{
    return itMapCheckDestroyDropped(item_gobj, ITBOX_MAP_REBOUND_COMMON, ITBOX_MAP_REBOUND_GROUND, itBoxWaitSetStatus);
}

// 0x8017990C
void itBoxDroppedSetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_CST_DTOR32(90.0F);

    itMainSetItemStatus(item_gobj, dITBoxStatusDescs, nITBoxStatusDropped);
}

// 0x80179948
sb32 itBoxExplodeProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->multi++;

    if (ip->multi == ITBOX_EXPLODE_FRAME_END)
    {
        return TRUE;
    }
    else itMainUpdateAttackEvent(item_gobj, itGetAttackEvent(dITBoxItemDesc, lITBoxAttackEvents));

    return FALSE;
}

// 0x801799A4
GObj* itBoxMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITBoxItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        ITStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F);

        ip->is_damage_all = TRUE;
        ip->is_unused_item_bool = TRUE;

        ip->arrow_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}

// 0x80179A34
void itBoxExplodeInitItemVars(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->event_id = 0;
    ip->multi = 0;

    ip->attack_coll.fgm_id = nSYAudioFGMExplodeL;

    ip->attack_coll.can_rehit_item = TRUE;
    ip->attack_coll.can_hop = FALSE;
    ip->attack_coll.can_reflect = FALSE;

    ip->attack_coll.throw_mul = ITEM_THROW_DEFAULT;
    ip->attack_coll.element = nGMHitElementFire;

    ip->attack_coll.can_setoff = FALSE;

    ip->damage_coll.hitstatus = nGMHitStatusNone;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshAttackColl(item_gobj);
    itMainUpdateAttackEvent(item_gobj, itGetAttackEvent(dITBoxItemDesc, lITBoxAttackEvents));
}

// 0x80179AD4
void itBoxExplodeSetStatus(GObj *item_gobj)
{
    itBoxExplodeInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITBoxStatusDescs, nITBoxStatusExplode);
}

// 0x80179B08
void itBoxExplodeMakeEffectGotoSetStatus(GObj *item_gobj)
{
    LBParticle *ptc;
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->attack_coll.attack_state = nGMAttackStateOff;

    ip->physics.vel_air.x = 0.0F;
    ip->physics.vel_air.y = 0.0F;
    ip->physics.vel_air.z = 0.0F;

    ptc = efManagerSparkleWhiteMultiExplodeMakeEffect(&dobj->translate.vec.f);

    if (ptc != NULL)
    {
        ptc->tfm->scale.x = 
        ptc->tfm->scale.y = 
        ptc->tfm->scale.z = ITBOX_EXPLODE_SCALE;
    }
    efManagerQuakeMakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_HIDDEN;

    itBoxExplodeSetStatus(item_gobj);
}
