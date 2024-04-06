#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_000000FB;
extern intptr_t D_NF_00B1BCA0;
extern intptr_t D_NF_00B1BDE0;
extern intptr_t D_NF_00B1BDE0_other;
extern intptr_t D_NF_00B1E640;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018D040
u32 *gItemFileData;

// 0x8018D044
s32 gItemEffectBank;

// 0x8018D048
itRandomWeights gItemRandomWeights;

// 0x8018D060
itMonsterInfo gItemMonsterData;

// 0x8018D090
s32 gItemDisplayMode;

// 0x8018D094 - points to next available item struct
itStruct *gItemAllocFree;

// 0x8018D098
itSpawnActor gItemSpawnActor;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189450 - Not uninitialized, so it's hardcoded upon building the ROM? 0 => random, beyond 0 => index of Pokémon to spawn; when in doubt, change to s32
s32 dItMonsterSpawnID = 0;

// 0x80189454
u16 dItCommonAppearanceRatesMin[/* */] = 
{
    I_SEC_TO_FRAMES(0), 
    I_SEC_TO_FRAMES(30),
    I_SEC_TO_FRAMES(25),
    I_SEC_TO_FRAMES(20),
    I_SEC_TO_FRAMES(15),
    I_SEC_TO_FRAMES(10)
};

// 0x80189460
u16 dItCommonAppearanceRatesMax[/* */] =
{
    I_SEC_TO_FRAMES(0),
    I_SEC_TO_FRAMES(30) + 90,
    I_SEC_TO_FRAMES(25) + 75,
    I_SEC_TO_FRAMES(20) + 60,
    I_SEC_TO_FRAMES(15) + 45,
    I_SEC_TO_FRAMES(10) + 30
};

// 0x8018946C
GObj* (*dItMakeProcList[/* */])(GObj*, Vec3f*, Vec3f*, u32) = 
{
    // Containers
    itBoxMakeItem,          // Box
    itTaruMakeItem,         // Barrel
    itCapsuleMakeItem,      // Capsule
    itEggMakeItem,          // Egg

    // Usable items
    itTomatoMakeItem,       // Maxim Tomato
    itHeartMakeItem,        // Heart Container
    itStarMakeItem,         // Star Man
    itSwordMakeItem,        // Beam Sword
    itBatMakeItem,          // Home Run Bat
    itHarisenMakeItem,      // Fan
    itStarRodMakeItem,      // Star Rod
    itLGunMakeItem,         // Ray Gun
    itFFlowerMakeItem,      // Fire Flower
    itHammerMakeItem,       // Hammer
    itMSBombMakeItem,       // Motion-sensor Bomb
    itBombHeiMakeItem,      // Bob-omb
    itNBumperMakeItem,      // Normal Bumper
    itGShellMakeItem,       // Green Shell
    itRShellMakeItem,       // Red Shell
    itMBallMakeItem,        // Poké Ball

    // Fighter items
    itNessPKFireMakeItem,   // Ness PK Fire
    itLinkBombMakeItem,     // Link Bomb

    // Stage items
    itPowerBlockMakeItem,   // Mushroom Kingdom POW Block
    itGBumperMakeItem,      // Common Stage Bumper
    itPakkunMakeItem,       // Mushroom Kingdom Piranha Plant
    itTargetMakeItem,       // Bonus Stage Target
    itRBombMakeItem,        // Race to the Finish Bomb
    itGLuckyMakeItem,       // Saffron City Chansey
    itMarumineMakeItem,     // Saffron City Electrode
    itHitokageMakeItem,     // Saffron City Charmander
    itFushigibanaMakeItem,  // Saffron City Venusaur
    itPorygonMakeItem,      // Saffron City Porygon

    // Pokémon items
    itIwarkMakeItem,        // Onix
    itKabigonMakeItem,      // Snorlax
    itTosakintoMakeItem,    // Goldeen
    itNyarsMakeItem,        // Meowth
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016DEA0
void itManagerInitItems(void) // Many linker things here
{
    itStruct *ip;
    s32 i;

    gItemAllocFree = ip = gsMemoryAlloc(sizeof(itStruct) * ITEM_ALLOC_MAX, 0x8);

    for (i = 0; i < (ITEM_ALLOC_MAX - 1); i++)
    {
        ip[i].alloc_next = &ip[i + 1];
    }
    if (ip != NULL)
    {
        ip[i].alloc_next = NULL;
    }
    gItemFileData = (u32*)rdManagerGetFileWithExternHeap(&D_NF_000000FB, gsMemoryAlloc(rdManagerGetFileSize(&D_NF_000000FB), 0x10));

    gItemEffectBank = efAlloc_SetParticleBank(&D_NF_00B1BCA0, &D_NF_00B1BDE0, &D_NF_00B1BDE0_other, &D_NF_00B1E640);

    itManagerSetupContainerDrops();
    itManagerInitMonsterVars();
    func_ovl2_80111F80();

    gItemDisplayMode = dbObject_DisplayMode_Master;
}

// 0x8016DFAC
itStruct* itManagerGetItemSetNextAlloc(void) // Set global Item user_data link pointer to next member
{
    itStruct *new_item = gItemAllocFree;
    itStruct *get_item;

    if (new_item == NULL)
    {
        return NULL;
    }
    get_item = new_item;

    gItemAllocFree = new_item->alloc_next;

    return get_item;
}

// 0x8016DFDC
void itManagerSetPrevAlloc(itStruct *ip) // Set global Item user_data link pointer to previous member
{
    ip->alloc_next = gItemAllocFree;

    gItemAllocFree = ip;
}

// 0x8016DFF4
void itManagerDObjSetup(GObj *gobj, DObjDesc *dobj_desc, DObj **p_dobj, u8 transform_kind)
{
    s32 i, index;
    DObj *joint, *dobj_array[18];

    for (i = 0; i < ARRAY_COUNT(dobj_array); i++)
    {
        dobj_array[i] = NULL;
    }
    for (i = 0; dobj_desc->index != ARRAY_COUNT(dobj_array); i++, dobj_desc++)
    {
        index = dobj_desc->index & 0xFFF;

        if (index != 0)
        {
            joint = dobj_array[index] = omAddChildForDObj(dobj_array[index - 1], dobj_desc->display_list);
        }
        else joint = dobj_array[0] = omAddDObjForGObj(gobj, dobj_desc->display_list);
        
        if (i == 1)
        {
            func_8000F364(joint, transform_kind, NULL, NULL, NULL);
        }
        else if (transform_kind != OMMtx_Transform_Null)
        {
            omAddOMMtxForDObjFixed(joint, transform_kind, NULL);
        }
        joint->translate.vec.f = dobj_desc->translate;
        joint->rotate.vec.f = dobj_desc->rotate;
        joint->scale.vec.f = dobj_desc->scale;

        if (p_dobj != NULL) // I have yet to find a case where this point is actually reached
        {
            p_dobj[i] = joint;
        }
    }
}

// 0x8016E174
GObj* itManagerMakeItem(GObj *spawn_gobj, itCreateDesc *item_desc, Vec3f *pos, Vec3f *vel, u32 flags)
{
    itStruct *ip = itManagerGetItemSetNextAlloc();
    GObj *item_gobj;
    itAttributes *attributes;
    void (*proc_render)(GObj*);
    s32 unused[4];

    if (ip == NULL)
    {
        return NULL;
    }
    else item_gobj = omMakeGObjCommon(GObj_Kind_Item, NULL, GObj_LinkID_Item, 0x80000000);

    if (item_gobj == NULL)
    {
        itManagerSetPrevAlloc(ip);

        return NULL;
    }
    attributes = (itAttributes*) ((uintptr_t)*item_desc->p_file + (intptr_t)item_desc->o_attributes);

    if (attributes->is_render_colanim)
    {
        proc_render = (attributes->is_render_transparency) ? itRenderProcRenderColAnimXLU : itRenderProcRenderColAnimOPA;
    }
    else proc_render = (attributes->is_render_transparency) ? itRenderProcRenderXLU : itRenderProcRenderOPA;

    omAddGObjRenderProc(item_gobj, proc_render, 0xB, 0x80000000, -1);

    item_gobj->user_data.p = ip;

    ip->item_gobj = item_gobj;
    ip->owner_gobj = NULL;

    ip->it_kind = item_desc->it_kind;
    ip->type = attributes->type;

    ip->phys_info.vel_air = *vel;
    ip->phys_info.vel_ground = 0.0F;

    ip->attributes = attributes;

    itMainVelSetRotateStepLR(item_gobj);
    itMainResetPlayerVars(item_gobj);

    ip->is_allow_pickup     = FALSE;
    ip->is_hold             = FALSE;
    ip->is_allow_knockback  = FALSE;
    ip->is_unused_item_bool = FALSE;
    ip->is_static_damage    = FALSE;

    ip->pickup_wait         = ITEM_PICKUP_WAIT_DEFAULT;

    ip->percent_damage      = 0;
    ip->hitlag_timer        = 0;
    ip->damage_highest      = 0;
    ip->damage_knockback    = 0.0F;
    ip->damage_queue        = 0;
    ip->damage_lag          = 0;

    ip->times_landed        = 0;
    ip->times_thrown        = 0;

    ip->weight              = attributes->weight;
    ip->is_hitlag_victim    = attributes->is_give_hitlag;
    ip->unk_sfx             = attributes->unk_atca_sfx;
    ip->drop_sfx            = attributes->drop_sfx;
    ip->throw_sfx           = attributes->throw_sfx;

    ip->vel_scale           = F_PCT_TO_DEC(attributes->vel_scale);

    ip->is_damage_all       = FALSE;
    ip->is_thrown           = FALSE; // Applies magnitude and stale multiplier if TRUE and hitbox is active?
    ip->is_attach_surface   = FALSE;

    ip->rotate_step         = 0.0F;

    ip->indicator_gobj      = NULL;
    ip->indicator_timer     = 0;

    ip->item_hit.update_state       = item_desc->update_state;
    ip->item_hit.damage             = attributes->damage;
    ip->item_hit.throw_mul          = 1.0F;
    ip->item_hit.stale              = 1.0F;
    ip->item_hit.element            = attributes->element;
    ip->item_hit.offset[0].x        = attributes->hit_offset1_x;
    ip->item_hit.offset[0].y        = attributes->hit_offset1_y;
    ip->item_hit.offset[0].z        = attributes->hit_offset1_z;
    ip->item_hit.offset[1].x        = attributes->hit_offset2_x;
    ip->item_hit.offset[1].y        = attributes->hit_offset2_y;
    ip->item_hit.offset[1].z        = attributes->hit_offset2_z;
    ip->item_hit.size               = attributes->size * 0.5F;
    ip->item_hit.angle              = attributes->angle;
    ip->item_hit.knockback_scale    = attributes->knockback_scale;
    ip->item_hit.knockback_weight   = attributes->knockback_weight;
    ip->item_hit.knockback_base     = attributes->knockback_base;
    ip->item_hit.can_setoff         = attributes->can_setoff;
    ip->item_hit.shield_damage      = attributes->shield_damage;
    ip->item_hit.hit_sfx            = attributes->hit_sfx;
    ip->item_hit.priority           = attributes->priority;
    ip->item_hit.can_rehit_item     = attributes->can_rehit_item;
    ip->item_hit.can_rehit_fighter  = attributes->can_rehit_fighter;
    ip->item_hit.can_rehit_shield   = FALSE;
    ip->item_hit.can_hop            = attributes->can_hop;
    ip->item_hit.can_reflect        = attributes->can_reflect;
    ip->item_hit.can_shield         = attributes->can_shield;
    ip->item_hit.hitbox_count       = attributes->hitbox_count;
    ip->item_hit.interact_mask      = GMHITCOLLISION_MASK_ALL;

    ip->item_hit.attack_id                  = ftMotion_AttackIndex_None;
    ip->item_hit.stat_count                 = gmCommon_GetMotionCountInc();
    ip->item_hit.stat_flags.stat_attack_id  = ftStatus_AttackIndex_Null;
    ip->item_hit.stat_flags.is_smash_attack = ip->item_hit.stat_flags.is_ground_or_air = ip->item_hit.stat_flags.is_projectile = 0;
    ip->item_hit.stat_count                 = gmCommon_GetStatUpdateCountInc();

    itMainClearHitRecord(ip);

    ip->item_hurt.hitstatus     = attributes->hitstatus;
    ip->item_hurt.offset.x      = attributes->hurt_offset.x;
    ip->item_hurt.offset.y      = attributes->hurt_offset.y;
    ip->item_hurt.offset.z      = attributes->hurt_offset.z;
    ip->item_hurt.size.x        = attributes->hurt_size.x * 0.5F;
    ip->item_hurt.size.y        = attributes->hurt_size.y * 0.5F;
    ip->item_hurt.size.z        = attributes->hurt_size.z * 0.5F;
    ip->item_hurt.interact_mask = GMHITCOLLISION_MASK_ALL;

    ip->shield_collide_angle = 0.0F;
    ip->shield_collide_vec.x = 0.0F;
    ip->shield_collide_vec.y = 0.0F;
    ip->shield_collide_vec.z = 0.0F;

    ip->hit_normal_damage  = 0;
    ip->hit_refresh_damage = 0;
    ip->hit_attack_damage  = 0;
    ip->hit_shield_damage  = 0;

    ip->reflect_gobj = NULL;

    if (attributes->model_desc != NULL)
    {
        if (!(attributes->unk_0x10_b1))
        {
            func_8000F720(item_gobj, attributes->model_desc, attributes->mobjsub, NULL, item_desc->transform_types.tk1, item_desc->transform_types.tk2, item_desc->transform_types.unk_dobjtransform_0x2);
        }
        else
        {
            itManagerDObjSetup(item_gobj, attributes->model_desc, NULL, item_desc->transform_types.tk1);

            if (attributes->mobjsub != NULL)
            {
                func_8000F8F4(item_gobj, attributes->mobjsub);
            }
        }
        if ((attributes->anim_joint != NULL) || (attributes->matanim_joint != NULL)) // Runs if item has joint or texture animation on spawn?
        {
            func_8000BED8(item_gobj, attributes->anim_joint, attributes->matanim_joint, 0.0F);
            func_8000DF34(item_gobj);
        }
        func_ovl0_800C9424(DObjGetStruct(item_gobj));
    }
    else omAddDObjForGObj(item_gobj, NULL);
    
    ip->coll_data.p_translate           = &DObjGetStruct(item_gobj)->translate.vec.f;
    ip->coll_data.p_lr                  = &ip->lr;
    ip->coll_data.object_coll.top       = attributes->objectcoll_top;
    ip->coll_data.object_coll.center    = attributes->objectcoll_center;
    ip->coll_data.object_coll.bottom    = attributes->objectcoll_bottom;
    ip->coll_data.object_coll.width     = attributes->objectcoll_width;
    ip->coll_data.p_object_coll         = &ip->coll_data.object_coll;
    ip->coll_data.ignore_line_id        = -1;
    ip->coll_data.coll_update_frame     = gMapCollUpdateFrame;
    ip->coll_data.coll_mask_curr        = 0;
    ip->coll_data.vel_push.x            = 0.0F;
    ip->coll_data.vel_push.y            = 0.0F;
    ip->coll_data.vel_push.z            = 0.0F;

    omAddGObjCommonProc(item_gobj, itManagerProcItemMain, 1, 3);
    omAddGObjCommonProc(item_gobj, itManagerProcSearchHitAll, 1, 1);
    omAddGObjCommonProc(item_gobj, itManagerProcHitCollisions, 1, 0);

    ip->proc_update     = item_desc->proc_update;
    ip->proc_map        = item_desc->proc_map;
    ip->proc_hit        = item_desc->proc_hit;
    ip->proc_shield     = item_desc->proc_shield;
    ip->proc_hop        = item_desc->proc_hop;
    ip->proc_setoff     = item_desc->proc_setoff;
    ip->proc_reflector  = item_desc->proc_reflector;
    ip->proc_damage     = item_desc->proc_damage;
    ip->proc_dead       = NULL;

    ip->coll_data.pos_curr = DObjGetStruct(item_gobj)->translate.vec.f = *pos;

    if (flags & ITEM_FLAG_PROJECT)
    {
        switch (flags & ITEM_MASK_SPAWN_ALL)
        {
        case ITEM_MASK_SPAWN_GROUND:
        case ITEM_MASK_SPAWN_DEFAULT: // Default?
            break;

        case ITEM_MASK_SPAWN_FIGHTER:
            itMapRunCollisionDefault(item_gobj, ftGetStruct(spawn_gobj)->coll_data.p_translate, &ftGetStruct(spawn_gobj)->coll_data);
            break;

        case ITEM_MASK_SPAWN_WEAPON:
            itMapRunCollisionDefault(item_gobj, wpGetStruct(spawn_gobj)->coll_data.p_translate, &wpGetStruct(spawn_gobj)->coll_data);
            break;

        case ITEM_MASK_SPAWN_ITEM:
            itMapRunCollisionDefault(item_gobj, itGetStruct(spawn_gobj)->coll_data.p_translate, &itGetStruct(spawn_gobj)->coll_data);
            break;
        }
    }
    ip->ground_or_air = GA_Air;

    itManagerUpdateHitPositions(item_gobj);
    itMainClearColAnim(item_gobj);

    return item_gobj;
}

// 0x8016EA78
GObj* itManagerMakeItemSetupCommon(GObj *spawn_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 spawn_flags)
{
    GObj *item_gobj = dItMakeProcList[index](spawn_gobj, pos, vel, spawn_flags);

    if (item_gobj != NULL)
    {
        if (index <= It_Kind_CommonEnd)
        {
            efParticle_ItemSpawnSwirl_MakeEffect(pos);
            func_ovl3_80172394(item_gobj, FALSE);
        }
    }
    return item_gobj;
}

// 0x8016EB00
itStruct* itManagerGetAllocFree(void)
{
    return gItemAllocFree;
}

// 0x8016EB0C
void itManagerSetItemSpawnWait(void)
{
    gItemSpawnActor.item_spawn_wait = 
    dItCommonAppearanceRatesMin[gBattleState->item_switch] + 
    lbRandom_GetIntRange(dItCommonAppearanceRatesMax[gBattleState->item_switch] - dItCommonAppearanceRatesMin[gBattleState->item_switch]);
}

// 0x8016EB78
void itManagerMakeRandomItem(GObj *item_gobj)
{
    s32 unused;
    s32 index;
    Vec3f pos;
    Vec3f vel;

    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        if (gItemSpawnActor.item_spawn_wait > 0)
        {
            gItemSpawnActor.item_spawn_wait--;

            return;
        }
        if (itManagerGetAllocFree() != NULL)
        {
            index = itMainGetWeightedItemID(&gItemSpawnActor.weights);

            mpCollision_GetMPointPositionID(gItemSpawnActor.item_mpoints[lbRandom_GetIntRange(gItemSpawnActor.item_mpoint_count)], &pos);

            vel.x = vel.y = vel.z = 0.0F;

            func_800269C0(alSound_SFX_ItemSpawn1);

            itManagerMakeItemSetupCommon(NULL, index, &pos, &vel, ITEM_MASK_SPAWN_DEFAULT);
        }
        itManagerSetItemSpawnWait();
    }
}

// 0x8016EC40 - create item spawner GObj?
GObj* itManagerMakeItemSpawnActor(void)
{
    GObj *gobj;
    s32 i;
    s32 item_count;
    grItemWeights *item_count_qty;
    s32 item_weights;
    s32 item_mpoint_count;
    s32 item_mpoint_ids[30];
    u32 item_count_toggles;
    s32 j;
    u32 item_id_toggles;
    grItemWeights *item_weight_qty;
    u32 item_num_toggles;

    if (gBattleState->item_switch != gmMatch_ItemSwitch_None)
    {
        if (gBattleState->item_toggles != 0)
        {
            if (gGroundInfo->item_weights != NULL)
            {
                item_count_qty = gGroundInfo->item_weights;

                item_num_toggles = gBattleState->item_toggles;

                item_count = 0;

                for (i = 0; i <= It_Kind_CommonEnd; i++, item_num_toggles >>= 1)
                {
                    if (item_num_toggles & 1)
                    {
                        item_count += item_count_qty->item_quantities[i];
                    }
                }
                if (item_count == 0)
                {
                    return NULL;
                }
                gItemSpawnActor.item_num = item_count;

                item_mpoint_count = mpCollision_GetMPointCountKind(mpMPoint_Kind_ItemSpawn);

                if (item_mpoint_count == 0)
                {
                    return NULL;
                }
                if (item_mpoint_count > ARRAY_COUNT(item_mpoint_ids))
                {
                    while (TRUE)
                    {
                        gsFatalPrintF("Item positions are over %d!\n", ARRAY_COUNT(item_mpoint_ids));
                        smCrashPrintGObjStatus();
                    }
                }
                gItemSpawnActor.item_mpoint_count = item_mpoint_count;
                gItemSpawnActor.item_mpoints = (u8*)gsMemoryAlloc(item_mpoint_count * sizeof(*gItemSpawnActor.item_mpoints), 0);

                mpCollision_GetMPointIDsKind(mpMPoint_Kind_ItemSpawn, item_mpoint_ids);

                for (i = 0; i < item_mpoint_count; i++)
                {
                    gItemSpawnActor.item_mpoints[i] = item_mpoint_ids[i];
                }
                gobj = omMakeGObjCommon(GObj_Kind_Item, NULL, 2, 0x80000000);

                omAddGObjCommonProc(gobj, itManagerMakeRandomItem, GObjProcess_Kind_Proc, 3);

                item_count_toggles = gBattleState->item_toggles;

                item_weight_qty = gGroundInfo->item_weights;

                for (i = 0, j = 0; i <= It_Kind_CommonEnd; i++, item_count_toggles >>= 1)
                {
                    if ((item_count_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                    {
                        j++;
                    }
                }
                gItemSpawnActor.weights.item_count = j;
                gItemSpawnActor.weights.item_ids = (u8*)gsMemoryAlloc(j * sizeof(*gItemSpawnActor.item_ids), 0x0);
                gItemSpawnActor.weights.item_totals = (u16*)gsMemoryAlloc(j * sizeof(*gItemSpawnActor.item_totals), 0x2);

                item_id_toggles = gBattleState->item_toggles;

                item_weights = 0;

                for (i = 0, j = 0; i <= It_Kind_CommonEnd; i++, item_id_toggles >>= 1)
                {
                    if ((item_id_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                    {
                        gItemSpawnActor.weights.item_ids[j] = i;
                        gItemSpawnActor.weights.item_totals[j] = item_weights;
                        item_weights += item_weight_qty->byte[i];

                        j++;
                    }
                }
                itManagerSetItemSpawnWait();

                return gobj;
            }
        }
    }
    return NULL;
}

// 0x8016EF40
void itManagerSetupContainerDrops(void)
{
    s32 item_tenth_floor;
    s32 item_count;
    u32 item_num_toggles;
    u32 item_id_toggles;
    s32 i;
    s32 j;
    s32 item_weights;
    grItemWeights *item_count_qty;
    grItemWeights *item_weight_qty;
    s32 item_tenth_round;

    if ((gBattleState->item_switch != gmMatch_ItemSwitch_None) && (gBattleState->item_toggles != 0) && (gGroundInfo->item_weights != NULL))
    {
        item_num_toggles = gBattleState->item_toggles >> It_Kind_UtilityStart;
        item_count_qty = gGroundInfo->item_weights;

        item_count = 0;

        for (i = It_Kind_UtilityStart; i <= It_Kind_UtilityEnd; i++, item_num_toggles >>= 1)
        {
            if (item_num_toggles & 1)
            {
                item_count += item_count_qty->item_quantities[i];
            }
        }
        gItemRandomWeights.item_num = item_count;

        if (item_count != 0)
        {
            item_id_toggles = gBattleState->item_toggles >> It_Kind_UtilityStart;
            item_weight_qty = gGroundInfo->item_weights;

            for (j = 0, i = It_Kind_UtilityStart; i <= It_Kind_UtilityEnd; i++, item_id_toggles >>= 1)
            {
                if ((item_id_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                {
                    j++;
                }
            }
            j++;

            gItemRandomWeights.item_count = j;
            gItemRandomWeights.item_ids = (u8*)gsMemoryAlloc(j * sizeof(*gItemRandomWeights.item_ids), 0x0);
            gItemRandomWeights.item_totals = (u16*)gsMemoryAlloc(j * sizeof(*gItemRandomWeights.item_totals), 0x2);

            item_id_toggles = gBattleState->item_toggles >> It_Kind_UtilityStart;

            item_weights = 0;

            for (j = 0, i = It_Kind_UtilityStart; i <= It_Kind_UtilityEnd; i++, item_id_toggles >>= 1)
            {
                if ((item_id_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                {
                    gItemRandomWeights.item_ids[j] = i;
                    gItemRandomWeights.item_totals[j] = item_weights;
                    item_weights += item_weight_qty->item_quantities[i];
                    j++;
                }
            }
            gItemRandomWeights.item_ids[j] = It_Kind_MbMonsterStart;
            gItemRandomWeights.item_totals[j] = item_weights;

            item_tenth_round = (gItemRandomWeights.item_num * 0.1F);

            if (item_tenth_round != 0)
            {
                item_tenth_floor = item_tenth_round;
            }
            else item_tenth_floor = 1;

            gItemRandomWeights.item_num += item_tenth_floor;
        }
    }
    else gItemRandomWeights.item_num = 0;
}

// 0x8016F218
void itManagerInitMonsterVars(void)
{
    gItemMonsterData.monster_curr = gItemMonsterData.monster_prev = U8_MAX;
    gItemMonsterData.monster_count = (It_Kind_MbMonsterEnd - It_Kind_MbMonsterStart);
}

// 0x8016F238
GObj* itManagerMakeItemIndex(GObj *spawn_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 flags)
{
    return dItMakeProcList[index](spawn_gobj, pos, vel, flags);
}

// 0x8016F280
void itManagerUpdateHitPositions(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 i;

    for (i = 0; i < ip->item_hit.hitbox_count; i++)
    {
        switch (ip->item_hit.update_state)
        {
        case gmHitCollision_UpdateState_Disable:
            break;

        case gmHitCollision_UpdateState_New:
            ip->item_hit.hit_positions[i].pos.x = ip->item_hit.offset[i].x + DObjGetStruct(item_gobj)->translate.vec.f.x;
            ip->item_hit.hit_positions[i].pos.y = ip->item_hit.offset[i].y + DObjGetStruct(item_gobj)->translate.vec.f.y;
            ip->item_hit.hit_positions[i].pos.z = ip->item_hit.offset[i].z + DObjGetStruct(item_gobj)->translate.vec.f.z;

            ip->item_hit.update_state = gmHitCollision_UpdateState_Transfer;

            ip->item_hit.hit_positions[i].unk_ithitpos_0x18 = FALSE;
            ip->item_hit.hit_positions[i].unk_ithitpos_0x5C = 0;
            break;

        case gmHitCollision_UpdateState_Transfer:
            ip->item_hit.update_state = gmHitCollision_UpdateState_Interpolate;

        case gmHitCollision_UpdateState_Interpolate:
            ip->item_hit.hit_positions[i].pos_prev = ip->item_hit.hit_positions[i].pos;

            ip->item_hit.hit_positions[i].pos.x = ip->item_hit.offset[i].x + DObjGetStruct(item_gobj)->translate.vec.f.x;
            ip->item_hit.hit_positions[i].pos.y = ip->item_hit.offset[i].y + DObjGetStruct(item_gobj)->translate.vec.f.y;
            ip->item_hit.hit_positions[i].pos.z = ip->item_hit.offset[i].z + DObjGetStruct(item_gobj)->translate.vec.f.z;

            ip->item_hit.hit_positions[i].unk_ithitpos_0x18 = FALSE;
            ip->item_hit.hit_positions[i].unk_ithitpos_0x5C = 0;
            break;
        }
    }
}

// 0x8016F3D4
void itManagerUpdateHitRecord(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    gmHitRecord *targets;
    itHitbox *it_hit;
    s32 i;

    it_hit = &ip->item_hit;

    if (it_hit->update_state != gmHitCollision_UpdateState_Disable)
    {
        for (i = 0; i < ARRAY_COUNT(ip->item_hit.hit_targets); i++)
        {
            targets = &it_hit->hit_targets[i];

            if (targets->victim_gobj != NULL)
            {
                if (targets->victim_flags.timer_rehit > 0)
                {
                    targets->victim_flags.timer_rehit--;

                    if (targets->victim_flags.timer_rehit <= 0)
                    {
                        targets->victim_gobj = NULL;

                        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = targets->victim_flags.is_interact_reflect = FALSE;

                        targets->victim_flags.group_id = 7;
                    }
                }
            }
        }
    }
}

// 0x8016F534
void itManagerProcItemMain(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f *translate;

    if (ip->hitlag_timer > 0)
    {
        ip->hitlag_timer--;
    }
    if (ip->hitlag_timer <= 0)
    {
        func_8000DF34(item_gobj);
    }
    if (ip->hitlag_timer <= 0)
    {
        if (ip->proc_update != NULL)
        {
            if (ip->proc_update(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
    }
    if (ip->is_allow_pickup)
    {
        ip->pickup_wait--;

        if (ip->pickup_wait <= ITEM_DESPAWN_FLASH_BEGIN_DEFAULT)
        {
            if (ip->pickup_wait == 0)
            {
                efParticle_SparkleWhiteScale_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f, 1.0F);

                itMainDestroyItem(item_gobj);
                return;
            }
            if ((ip->pickup_wait % 2) != 0) // Make item invisible on odd frames; when in doubt, simply do "& 1"
            {
                item_gobj->flags ^= GOBJ_FLAG_NORENDER;
            }
        }
        if (ip->indicator_timer == 0)
        {
            ip->indicator_timer = ITEM_ARROW_FLASH_INT_DEFAULT;
        }
        ip->indicator_timer--;
    }
    else item_gobj->flags = GOBJ_FLAG_NONE;

    if (!(ip->is_hold))
    {
        translate = &DObjGetStruct(item_gobj)->translate.vec.f;

        ip->coll_data.pos_curr = *translate;

        if (ip->hitlag_timer == 0)
        {
            translate->x += ip->phys_info.vel_air.x;
            translate->y += ip->phys_info.vel_air.y;
            translate->z += ip->phys_info.vel_air.z;
        }
        ip->coll_data.pos_correct.x = translate->x - ip->coll_data.pos_curr.x;
        ip->coll_data.pos_correct.y = translate->y - ip->coll_data.pos_curr.y;
        ip->coll_data.pos_correct.z = translate->z - ip->coll_data.pos_curr.z;

        if ((ip->is_attach_surface) && (mpCollision_CheckExistLineID(ip->attach_line_id) != FALSE))
        {
            mpCollData *coll_data = &ip->coll_data;

            mpCollision_GetSpeedLineID(ip->attach_line_id, &ip->coll_data.pos_speed);

            translate->x += coll_data->pos_speed.x;
            translate->y += coll_data->pos_speed.y;
            translate->z += coll_data->pos_speed.z;
        }

        else if ((ip->ground_or_air == GA_Ground) && (ip->coll_data.ground_line_id != -1) && (ip->coll_data.ground_line_id != -2) && (mpCollision_CheckExistLineID(ip->coll_data.ground_line_id) != FALSE))
        {
            mpCollision_GetSpeedLineID(ip->coll_data.ground_line_id, &ip->coll_data.pos_speed);

            translate->x += ip->coll_data.pos_speed.x;
            translate->y += ip->coll_data.pos_speed.y;
            translate->z += ip->coll_data.pos_speed.z;
        }
        else ip->coll_data.pos_speed.x = ip->coll_data.pos_speed.y = ip->coll_data.pos_speed.z = 0.0F;

        if ((translate->y < gGroundInfo->blastzone_bottom) || (translate->x > gGroundInfo->blastzone_right) || (translate->x < gGroundInfo->blastzone_left) || (translate->y > gGroundInfo->blastzone_top))
        {
            if ((ip->proc_dead == NULL) || (ip->proc_dead(item_gobj) != FALSE))
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
        if (ip->proc_map != NULL)
        {
            ip->coll_data.coll_mask_prev = ip->coll_data.coll_mask_curr;
            ip->coll_data.coll_mask_curr = 0;
            ip->coll_data.is_coll_end = FALSE;
            ip->coll_data.coll_mask_stat = 0;
            ip->coll_data.coll_mask_unk = 0;

            if (ip->proc_map(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
        itManagerUpdateHitPositions(item_gobj);
        itManagerUpdateHitRecord(item_gobj);
    }
    itManagerUpdateColAnim(item_gobj);
}

// 0x8016F930
void itManagerSetHitInteractStats(itHitbox *it_hit, GObj *victim_gobj, s32 hitbox_type, u32 interact_mask)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(it_hit->hit_targets); i++)
    {
        if (victim_gobj == it_hit->hit_targets[i].victim_gobj) // Run this if the victim we're checking has already been hit
        {
            switch (hitbox_type)
            {
            case gmHitCollision_Type_Hurt:
                it_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
                break;

            case gmHitCollision_Type_Shield:
                it_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
                break;

            case gmHitCollision_Type_ShieldRehit:
                it_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
                it_hit->hit_targets[i].victim_flags.timer_rehit = ITEM_REHIT_TIME_DEFAULT;
                break;

            case gmHitCollision_Type_Reflect:
                it_hit->hit_targets[i].victim_flags.is_interact_reflect = TRUE;
                it_hit->hit_targets[i].victim_flags.timer_rehit = ITEM_REHIT_TIME_DEFAULT;
                break;

            case gmHitCollision_Type_Hit:
                it_hit->hit_targets[i].victim_flags.group_id = interact_mask;
                break;

            case gmHitCollision_Type_HurtRehit:
                it_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
                it_hit->hit_targets[i].victim_flags.timer_rehit = ITEM_REHIT_TIME_DEFAULT;
                break;

            default: 
                break;
            }
            break;
        }
    }
    if (i == ARRAY_COUNT(it_hit->hit_targets)) // Check if all victim slots have been filled
    {
        for (i = 0; i < ARRAY_COUNT(it_hit->hit_targets); i++) // Reset hit count and increment until there is an empty slot
        {
            if (it_hit->hit_targets[i].victim_gobj == NULL) break;
        }
        if (i == ARRAY_COUNT(it_hit->hit_targets)) i = 0; // Reset hit count again if all victim slots are full

        it_hit->hit_targets[i].victim_gobj = victim_gobj; // Store victim's pointer to slot

        switch (hitbox_type)
        {
        case gmHitCollision_Type_Hurt:
            it_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
            break;

        case gmHitCollision_Type_Shield:
            it_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
            break;

        case gmHitCollision_Type_ShieldRehit:
            it_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
            it_hit->hit_targets[i].victim_flags.timer_rehit = ITEM_REHIT_TIME_DEFAULT;
            break;

        case gmHitCollision_Type_Reflect:
            it_hit->hit_targets[i].victim_flags.is_interact_reflect = TRUE;
            it_hit->hit_targets[i].victim_flags.timer_rehit = ITEM_REHIT_TIME_DEFAULT;
            break;

        case gmHitCollision_Type_Hit:
            it_hit->hit_targets[i].victim_flags.group_id = interact_mask;
            break;

        case gmHitCollision_Type_HurtRehit:
            it_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
            it_hit->hit_targets[i].victim_flags.timer_rehit = ITEM_REHIT_TIME_DEFAULT;
            break;

        default: 
            break;
        }
    }
}

// 0x8016FB18 - Item's hurtbox gets hit by a fighter
void itManagerUpdateDamageStatFighter(ftStruct *fp, ftHitbox *ft_hit, itStruct *ip, itHurtbox *it_hurt, GObj *fighter_gobj, GObj *item_gobj)
{
    s32 damage;
    f32 damage_knockback;
    Vec3f pos;

    ftMain_SetHitVictimInteractStats(fp, ft_hit->group_id, item_gobj, gmHitCollision_Type_Hurt, 0, FALSE);

    damage = ft_hit->damage;

    if (fp->attack_damage < damage)
    {
        fp->attack_damage = damage;
    }
    if (it_hurt->hitstatus == gmHitCollision_HitStatus_Normal)
    {
        ip->damage_queue += damage;

        if (ip->damage_highest < damage)
        {
            ip->damage_highest = damage;
            ip->damage_angle = ft_hit->angle;
            ip->damage_element = ft_hit->element;

            ip->lr_damage = (DObjGetStruct(item_gobj)->translate.vec.f.x < DObjGetStruct(fighter_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;

            ip->damage_gobj = fighter_gobj;
            ip->damage_team = fp->team;
            ip->damage_port = fp->player;
            ip->damage_player_number = fp->player_number;
            ip->damage_handicap = fp->handicap;
            ip->damage_display_mode = fp->display_mode;
        }
        if (ip->is_allow_knockback)
        {
            damage_knockback = gmCommonObject_DamageCalcKnockback(ip->percent_damage, ip->damage_queue, damage, ft_hit->knockback_weight, ft_hit->knockback_scale, ft_hit->knockback_base, 1.0F, fp->handicap, ip->handicap);

            if (ip->damage_knockback < damage_knockback)
            {
                ip->damage_knockback = damage_knockback;
            }
        }
        itCollision_GetHurtImpactPosition(&pos, ft_hit, it_hurt, item_gobj);

        switch (ft_hit->element)
        {
        case gmHitCollision_Element_Fire:
            efParticle_DamageFire_MakeEffect(&pos, ft_hit->damage);
            break;

        case gmHitCollision_Element_Electric:
            func_ovl2_800FE4EC(&pos, ft_hit->damage);
            break;

        case gmHitCollision_Element_Coin:
            efParticle_DamageCoin_MakeEffect(&pos);
            break;

        case gmHitCollision_Element_Slash:
            efParticle_DamageSlash_MakeEffect(&pos, ft_hit->damage, ftCollision_GetDamageSlashRotation(fp, ft_hit));
            break;

        default:
            efParticle_DamageNormalLight_MakeEffect(&pos, fp->player, ft_hit->damage, 0);
            break;
        }
    }
    func_ovl2_800E2C24(fp, ft_hit);
}

// 0x8016FD4C
void itManagerUpdateAttackStatItem(itStruct *this_ip, itHitbox *this_hit, s32 this_hit_id, itStruct *victim_ip, itHitbox *victim_hit, s32 victim_hit_id, GObj *this_gobj, GObj *victim_gobj)
{
    s32 victim_hit_damage = itMainGetDamageOutput(victim_ip);
    s32 this_hit_damage = itMainGetDamageOutput(this_ip);
    Vec3f pos;
    s32 highest_priority;

    itCollision_GetItemHitImpactPosition(&pos, victim_hit, victim_hit_id, this_hit, this_hit_id);

    highest_priority = this_hit->priority;

    if (victim_hit->priority <= highest_priority)
    {
        itManagerSetHitInteractStats(victim_hit, this_gobj, gmHitCollision_Type_Hit, 0);

        if (victim_ip->hit_attack_damage < victim_hit_damage)
        {
            victim_ip->hit_attack_damage = victim_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, victim_hit_damage);
    }
    highest_priority = victim_hit->priority;

    if (this_hit->priority <= highest_priority)
    {
        itManagerSetHitInteractStats(this_hit, victim_gobj, gmHitCollision_Type_Hit, 0);

        if (this_ip->hit_attack_damage < this_hit_damage)
        {
            this_ip->hit_attack_damage = this_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, this_hit_damage);
    }
}

// 0x8016FE4C
void itManagerUpdateAttackStatWeapon(wpStruct *wp, wpHitbox *wp_hit, s32 wp_hit_id, itStruct *ip, itHitbox *it_hit, s32 it_hit_id, GObj *weapon_gobj, GObj *item_gobj)
{
    s32 wp_hit_damage = wpMainGetStaledDamageOutput(wp);
    s32 it_hit_damage = itMainGetDamageOutput(ip);
    Vec3f pos;
    s32 highest_priority;

    wpCollision_GetItemHitImpactPosition(&pos, wp_hit, wp_hit_id, it_hit, it_hit_id);

    highest_priority = wp_hit->priority;

    if (it_hit->priority <= highest_priority)
    {
        itManagerSetHitInteractStats(it_hit, weapon_gobj, gmHitCollision_Type_Hit, 0);

        if (ip->hit_attack_damage < it_hit_damage)
        {
            ip->hit_attack_damage = it_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, it_hit_damage);
    }
    highest_priority = it_hit->priority;

    if (wp_hit->priority <= highest_priority)
    {
        wpManagerUpdateHitInteractStatsGroupID(wp, wp_hit, item_gobj, gmHitCollision_Type_Hit, 0);

        if (wp->hit_attack_damage < wp_hit_damage)
        {
            wp->hit_attack_damage = wp_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, wp_hit_damage);
    }
}

// 0x8016FF4C - Item's hurtbox gets hit by another item
void itManagerUpdateDamageStatItem(itStruct *attack_ip, itHitbox *attack_it_hit, s32 hitbox_id, itStruct *defend_ip, itHurtbox *it_hurt, GObj *attack_gobj, GObj *defend_gobj)
{
    s32 damage;
    f32 knockback;
    sb32 is_rehit;
    f32 vel;
    Vec3f pos;
    s32 lr;
    s32 unused;

    damage = itMainGetDamageOutput(attack_ip);

    is_rehit = ((defend_ip->type == It_Type_Ground) && (attack_it_hit->can_rehit_item)) ? TRUE : FALSE;

    itManagerSetHitInteractStats(attack_it_hit, defend_gobj, (is_rehit != FALSE) ? gmHitCollision_Type_HurtRehit : gmHitCollision_Type_Hurt, 0);

    if (is_rehit != FALSE)
    {
        if (attack_ip->hit_refresh_damage < damage)
        {
            attack_ip->hit_refresh_damage = damage;
        }
    }
    else if (attack_ip->hit_normal_damage < damage)
    {
        attack_ip->hit_normal_damage = damage;
    }
    vel = (attack_ip->phys_info.vel_air.x < 0.0F) ? -attack_ip->phys_info.vel_air.x : attack_ip->phys_info.vel_air.x;

    if (vel < 5.0F)
    {
        attack_ip->lr_attack = lr = (DObjGetStruct(defend_gobj)->translate.vec.f.x < DObjGetStruct(attack_gobj)->translate.vec.f.x) ? LR_Left : LR_Right;
    }
    else
    {
        lr = (attack_ip->phys_info.vel_air.x < 0) ? LR_Left : LR_Right;

        attack_ip->lr_attack = lr;
    }
    if (it_hurt->hitstatus == gmHitCollision_HitStatus_Normal)
    {
        defend_ip->damage_queue += damage;

        if (defend_ip->damage_highest < damage)
        {
            defend_ip->damage_highest   =   damage; // Last source of damage?
            defend_ip->damage_angle     =   attack_it_hit->angle;
            defend_ip->damage_element   =   attack_it_hit->element;

            vel = (attack_ip->phys_info.vel_air.x < 0.0F) ? -attack_ip->phys_info.vel_air.x : attack_ip->phys_info.vel_air.x;

            if (vel < 5.0F)
            {
                defend_ip->lr_hit = lr = (DObjGetStruct(defend_gobj)->translate.vec.f.x < DObjGetStruct(attack_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
            }
            else
            {
                lr = (attack_ip->phys_info.vel_air.x < 0) ? LR_Right : LR_Left;

                defend_ip->lr_hit = lr;
            }
            defend_ip->damage_gobj          =   attack_ip->owner_gobj;
            defend_ip->damage_team          =   attack_ip->team;
            defend_ip->damage_port          =   attack_ip->player;
            defend_ip->damage_player_number =   attack_ip->player_number;
            defend_ip->damage_handicap      =   attack_ip->handicap;
            defend_ip->damage_display_mode  =   attack_ip->display_mode;
        }
        if (defend_ip->is_allow_knockback)
        {
            knockback = gmCommonObject_DamageCalcKnockback(defend_ip->percent_damage, defend_ip->damage_queue, damage, attack_it_hit->knockback_weight, attack_it_hit->knockback_scale, attack_it_hit->knockback_base, 1.0f, attack_ip->handicap, )defend_ip->handicap);

            if (defend_ip->damage_knockback < knockback)
            {
                defend_ip->damage_knockback = knockback;
            }
        }
        if (attack_ip->is_hitlag_victim)
        {
            itCollision_GetItemHurtImpactPosition(&pos, attack_it_hit, hitbox_id, it_hurt, defend_gobj);

            switch (attack_it_hit->element)
            {
            case gmHitCollision_Element_Fire:
                efParticle_DamageFire_MakeEffect(&pos, damage);
                break;
            case gmHitCollision_Element_Electric:
                func_ovl2_800FE4EC(&pos, damage);
                break;
            case gmHitCollision_Element_Coin:
                efParticle_DamageCoin_MakeEffect(&pos);
                break;

            default:
                efParticle_DamageNormalLight_MakeEffect(&pos, attack_ip->player, damage, 0);
                break;
            }
        }
    }
    func_800269C0(attack_it_hit->hit_sfx);
}

// 0x801702C8 - Item's hurtbox gets hit by a weapon
void itManagerUpdateDamageStatWeapon(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, itStruct *ip, itHurtbox *it_hurt, GObj *weapon_gobj, GObj *item_gobj)
{
    s32 damage;
    s32 unused;
    s32 is_rehit;
    f32 knockback;
    Vec3f pos;
    f32 vel;
    s32 lr;

    damage = wpMainGetStaledDamageOutput(wp);

    is_rehit = ((ip->type == It_Type_Ground) && (wp_hit->can_rehit_item)) ? TRUE : FALSE;

    wpManagerUpdateHitInteractStatsGroupID(wp, wp_hit, item_gobj, ((is_rehit != FALSE) ? gmHitCollision_Type_HurtRehit : gmHitCollision_Type_Hurt), 0);

    if (is_rehit != FALSE)
    {
        if (wp->hit_refresh_damage < damage)
        {
            wp->hit_refresh_damage = damage;
        }
    }
    else if (wp->hit_normal_damage < damage)
    {
        wp->hit_normal_damage = damage;
    }
    if (it_hurt->hitstatus == gmHitCollision_HitStatus_Normal)
    {
        ip->damage_queue += damage;

        if (ip->damage_highest < damage)
        {
            ip->damage_highest = damage;
            ip->damage_angle = wp_hit->angle;
            ip->damage_element = wp_hit->element;

            vel = (wp->phys_info.vel_air.x < 0.0F) ? -wp->phys_info.vel_air.x : wp->phys_info.vel_air.x;

            if (vel < 5.0F)
            {
                ip->lr_hit = lr = (DObjGetStruct(item_gobj)->translate.vec.f.x < DObjGetStruct(weapon_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
            }
            else
            {
                lr = (wp->phys_info.vel_air.x < 0) ? LR_Right : LR_Left;

                ip->lr_hit = lr;
            }
            ip->damage_gobj          = wp->owner_gobj;
            ip->damage_team          = wp->team;
            ip->damage_port          = wp->player;
            ip->damage_player_number = wp->player_number;
            ip->damage_handicap      = wp->handicap;
            ip->damage_display_mode  = wp->display_mode;
        }
        if (ip->is_allow_knockback)
        {
            knockback = gmCommonObject_DamageCalcKnockback(ip->percent_damage, ip->damage_queue, damage, wp_hit->knockback_weight, wp_hit->knockback_scale, wp_hit->knockback_base, 1.0F, wp->handicap, ip->handicap);

            if (ip->damage_knockback < knockback)
            {
                ip->damage_knockback = knockback;
            }
        }
        if (wp->is_hitlag_victim)
        {
            wpCollision_GetItemHurtImpactPosition(&pos, wp_hit, hitbox_id, it_hurt, item_gobj);

            switch (wp_hit->element)
            {
            case gmHitCollision_Element_Fire:
                efParticle_DamageFire_MakeEffect(&pos, damage);
                break;

            case gmHitCollision_Element_Electric:
                func_ovl2_800FE4EC(&pos, damage);
                break;

            case gmHitCollision_Element_Coin:
                efParticle_DamageCoin_MakeEffect(&pos);
                break;

            default:
                efParticle_DamageNormalLight_MakeEffect(&pos, wp->player, damage, NULL);
                break;
            }
        }
    }
    func_800269C0(wp_hit->hit_sfx);
}

// 0x801705C4
void itManagerSearchFighterHit(GObj *item_gobj) // Check fighters for hit detection
{
    GObj *fighter_gobj;
    GObj *owner_gobj;
    s32 i;
    s32 k;
    s32 unused;
    s32 j;
    GObj *other_gobj;
    u32 team;
    ftHitbox *ft_hit;
    gmHitCollisionFlags fighter_victim_flags;
    itHurtbox *it_hurt;
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp;

    if (ip->item_hurt.interact_mask & GMHITCOLLISION_MASK_FIGHTER)
    {
        fighter_gobj = gOMObjCommonLinks[GObj_LinkID_Fighter];

        while (fighter_gobj != NULL)
        {           
            if ((fighter_gobj == ip->owner_gobj) && !(ip->is_damage_all)) goto next_gobj;

            fp = ftGetStruct(fighter_gobj);

            if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (((fp->throw_gobj != NULL) ? fp->throw_team : fp->team) == ip->team) && !(ip->is_damage_all)) goto next_gobj;
            
            if (fp->is_catchstatus) goto next_gobj;
            
            k = 0;

            if ((ip->owner_gobj != NULL) && (fp->throw_gobj != NULL) && (fp->throw_gobj == ip->owner_gobj)) goto next_gobj;
            
            for (i = 0; i < ARRAY_COUNT(gFighterIsHurtDetect); i++)
            {
                ft_hit = &fp->fighter_hit[i];

                if (ft_hit->update_state != gmHitCollision_UpdateState_Disable)
                {
                    if ((ip->ground_or_air == GA_Air) && (ft_hit->is_hit_air) || (ip->ground_or_air == GA_Ground) && (ft_hit->is_hit_ground))
                    {
                        fighter_victim_flags.is_interact_hurt = fighter_victim_flags.is_interact_shield = FALSE;

                        fighter_victim_flags.group_id = 7;

                        for (j = 0; j < ARRAY_COUNT(ft_hit->hit_targets); j++)
                        {
                            if (item_gobj == ft_hit->hit_targets[j].victim_gobj)
                            {
                                fighter_victim_flags = ft_hit->hit_targets[j].victim_flags;

                                break;
                            }
                        }
                        if ((!(fighter_victim_flags.is_interact_hurt)) && (!(fighter_victim_flags.is_interact_shield)) && (fighter_victim_flags.group_id == 7))
                        {
                            gFighterIsHurtDetect[i] = TRUE;
                            k++;

                            continue;
                        }
                    }
                }
                gFighterIsHurtDetect[i] = FALSE;
            }
            if (k != 0)
            {
                for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
                {
                    it_hurt = &ip->item_hurt;

                    if (gFighterIsHurtDetect[i] != FALSE)
                    {
                        if (ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) break;

                        if (it_hurt->hitstatus == gmHitCollision_HitStatus_Intangible) continue;

                        if (ftCollision_CheckFighterHitItemHurtIntersect(&fp->fighter_hit[i], it_hurt, item_gobj) != FALSE)
                        {
                            itManagerUpdateDamageStatFighter(fp, &fp->fighter_hit[i], ip, it_hurt, fighter_gobj, item_gobj);
                        }
                    }
                }
            }
        next_gobj:
            fighter_gobj = fighter_gobj->link_next;
        }
    }
}

// 0x8017088C
void itManagerSearchItemHit(GObj *this_gobj) // Check other items for hit detection
{
    itHitbox *this_hit;
    itStruct *other_ip;
    itStruct *this_ip;
    GObj *other_gobj;
    itHitbox *other_hit;
    gmHitCollisionFlags these_flags, those_flags;
    s32 i, j, m, n;
    sb32 is_check_self;
    itHurtbox *it_hurt;

    this_ip = itGetStruct(this_gobj);
    this_hit = &this_ip->item_hit;

    if (this_ip->item_hurt.interact_mask & GMHITCOLLISION_MASK_ITEM)
    {
        other_gobj = gOMObjCommonLinks[GObj_LinkID_Item];

        is_check_self = FALSE;

        while (other_gobj != NULL)
        {
            if (other_gobj == this_gobj)
            {
                is_check_self = TRUE;
            }
            else
            {
                other_ip = itGetStruct(other_gobj);
                other_hit = &other_ip->item_hit;

                if ((this_ip->owner_gobj == other_ip->owner_gobj) && !(this_ip->is_damage_all)) goto next_gobj;
                
                if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (this_ip->team == other_ip->team) && !(this_ip->is_damage_all)) goto next_gobj;

                if (other_hit->update_state == gmHitCollision_UpdateState_Disable) goto next_gobj;
                
                if (!(other_hit->interact_mask & GMHITCOLLISION_MASK_ITEM)) goto next_gobj;
                
                those_flags.is_interact_hurt = those_flags.is_interact_shield = FALSE;

                those_flags.group_id = 7;

                for (m = 0; m < ARRAY_COUNT(other_hit->hit_targets); m++) // IDO will flip you off if you don't use a new iterator here...
                {
                    if (this_gobj == other_hit->hit_targets[m].victim_gobj)
                    {
                        those_flags = other_hit->hit_targets[m].victim_flags;

                        break;
                    }
                }
                if ((those_flags.is_interact_hurt) || (those_flags.is_interact_shield) || (those_flags.group_id != 7)) goto next_gobj;

                if ((is_check_self != FALSE) && (this_hit->rebound) && (other_hit->rebound) && (this_ip->owner_gobj != other_ip->owner_gobj))
                {
                    if ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (this_ip->team != other_ip->team))
                    {
                        if (this_hit->update_state != gmHitCollision_UpdateState_Disable)
                        {
                            if (this_hit->interact_mask & GMHITCOLLISION_MASK_ITEM)
                            {
                                these_flags.is_interact_hurt = these_flags.is_interact_shield = FALSE;

                                these_flags.group_id = 7;

                                for (n = 0; n < ARRAY_COUNT(this_hit->hit_targets); n++)
                                {
                                    if (other_gobj == this_hit->hit_targets[n].victim_gobj)
                                    {
                                        these_flags = this_hit->hit_targets[n].victim_flags;

                                        break;
                                    }
                                }
                                if ((these_flags.is_interact_hurt) || (these_flags.is_interact_shield) || (these_flags.group_id != 7)) goto hurtbox_check;

                                for (i = 0; i < other_hit->hitbox_count; i++)
                                {
                                    for (j = 0; j < this_hit->hitbox_count; j++)
                                    {
                                        if (itCollision_CheckItemHitItemHitIntersect(other_hit, i, this_hit, j) != FALSE)
                                        {
                                            itManagerUpdateAttackStatItem(other_ip, other_hit, i, this_ip, this_hit, j, other_gobj, this_gobj);

                                            if (other_ip->hit_attack_damage != 0) goto next_gobj;

                                            else if (this_ip->hit_attack_damage != 0) goto hurtbox_check;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            hurtbox_check:
                for (i = 0; i < other_hit->hitbox_count; i++) // ...it also flips you off if you DON'T reuse 'i' here
                {
                    it_hurt = &this_ip->item_hurt;

                    if (this_ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) break;

                    if (it_hurt->hitstatus == gmHitCollision_HitStatus_Intangible) continue;

                    if (itCollision_CheckItemHitItemHurtIntersect(other_hit, i, it_hurt, this_gobj) != FALSE)
                    {
                        itManagerUpdateDamageStatItem(other_ip, other_hit, i, this_ip, it_hurt, other_gobj, this_gobj);

                        goto next_gobj;
                    }
                }
            }
        next_gobj:
            other_gobj = other_gobj->link_next;
        }
    }
}

// 0x80170C84
void itManagerSearchWeaponHit(GObj *item_gobj) // Check weapons for hit detection
{
    itHitbox *it_hit;
    wpStruct *wp;
    itStruct *ip;
    GObj *weapon_gobj;
    wpHitbox *wp_hit;
    gmHitCollisionFlags these_flags;
    gmHitCollisionFlags those_flags;
    s32 i, j, m, n;
    sb32 is_check_self;
    itHurtbox *it_hurt;

    ip = itGetStruct(item_gobj);
    it_hit = &ip->item_hit;

    if (ip->item_hurt.interact_mask & GMHITCOLLISION_MASK_WEAPON)
    {
        weapon_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

        while (weapon_gobj != NULL)
        {
            wp = wpGetStruct(weapon_gobj);
            wp_hit = &ip->weapon_hit;

            if ((ip->owner_gobj == wp->owner_gobj) || !(ip->is_damage_all)) goto next_gobj;

            if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (ip->team == wp->team) && !(ip->is_damage_all)) goto next_gobj;

            if (wp_hit->update_state != gmHitCollision_UpdateState_Disable)
            {
                if (wp_hit->interact_mask & GMHITCOLLISION_MASK_ITEM)
                {
                    those_flags.is_interact_hurt = those_flags.is_interact_shield = FALSE;

                    those_flags.group_id = 7;

                    for (m = 0; m < ARRAY_COUNT(wp_hit->hit_targets); m++) // IDO will flip you off if you don't use a new iterator here...
                    {
                        if (item_gobj == wp_hit->hit_targets[m].victim_gobj)
                        {
                            those_flags = wp_hit->hit_targets[m].victim_flags;

                            break;
                        }
                    }
                    if ((those_flags.is_interact_hurt) && (those_flags.is_interact_shield) && (those_flags.group_id != 7)) goto next_gobj;
                    
                    if ((it_hit->can_setoff) && (wp_hit->can_setoff) && (ip->owner_gobj != wp->owner_gobj))
                    {
                        if ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (ip->team != wp->team))
                        {
                            if ((it_hit->update_state != gmHitCollision_UpdateState_Disable) && (it_hit->interact_mask & GMHITCOLLISION_MASK_WEAPON))
                            {
                                these_flags.is_interact_hurt = these_flags.is_interact_shield = FALSE;

                                these_flags.group_id = 7;

                                for (n = 0; n < ARRAY_COUNT(it_hit->hit_targets); n++)
                                {
                                    if (weapon_gobj == it_hit->hit_targets[n].victim_gobj)
                                    {
                                        these_flags = it_hit->hit_targets[n].victim_flags;

                                        break;
                                    }
                                }

                                if ((these_flags.is_interact_hurt) || (these_flags.is_interact_shield) || (these_flags.group_id != 7)) goto hurtbox_check;

                                for (i = 0; i < wp_hit->hitbox_count; i++)
                                {
                                    for (j = 0; j < it_hit->hitbox_count; j++)
                                    {
                                        if (wpCollision_CheckWeaponHitItemHitIntersect(wp_hit, i, it_hit, j) != FALSE)
                                        {
                                            itManagerUpdateAttackStatWeapon(wp, wp_hit, i, ip, it_hit, j, weapon_gobj, item_gobj);

                                            if (wp->hit_attack_damage != 0) goto next_gobj;

                                            else if (ip->hit_attack_damage != 0) goto hurtbox_check;
                                        }
                                    }
                                }
                            }
                        }
                    }
                hurtbox_check:
                    for (i = 0; i < wp_hit->hitbox_count; i++) // ...it also flips you off if you DON'T reuse 'i' here
                    {
                        it_hurt = &ip->item_hurt;

                        if (ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) break;

                        else if (it_hurt->hitstatus == gmHitCollision_HitStatus_Intangible) continue;

                        else if (itCollision_CheckWeaponHitItemHurtIntersect(wp_hit, i, it_hurt, item_gobj) != FALSE)
                        {
                            itManagerUpdateDamageStatWeapon(ip, wp_hit, i, ip, it_hurt, weapon_gobj, item_gobj);

                            break;
                        }
                    }
                }
            }
        next_gobj:
            weapon_gobj = weapon_gobj->link_next;
        }
    }
}

// Copy pasted everything from Item VS Item hit collision logic and it immediately matched 82% of Item VS Weapon, even the stack; apparently in a much similar fashion to HAL

// 0x80171080
void itManagerProcSearchHitAll(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (!(ip->is_hold))
    {
        itManagerSearchFighterHit(item_gobj);
        itManagerSearchItemHit(item_gobj);
        itManagerSearchWeaponHit(item_gobj);
    }
}

// 0x801710C4
void itManagerProcHitCollisions(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->damage_queue != 0)
    {
        ip->percent_damage += ip->damage_queue;

        if (ip->percent_damage > GMCOMMON_PERCENT_DAMAGE_MAX)
        {
            ip->percent_damage = GMCOMMON_PERCENT_DAMAGE_MAX;
        }
        ip->damage_lag = ip->damage_queue;

        if (ip->proc_damage != NULL)
        {
            if (ip->proc_damage(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
    }
    if ((ip->hit_normal_damage != 0) || (ip->hit_refresh_damage != 0))
    {
        if (ip->proc_hit != NULL)
        {
            if (ip->proc_hit(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
    }
    if (ip->hit_shield_damage != 0)
    {
        if ((ip->item_hit.can_hop) && (ip->ground_or_air == GA_Air))
        {
            if (ip->shield_collide_angle < ITEM_HOP_ANGLE_DEFAULT)
            {
                ip->shield_collide_angle -= F_DEG_TO_RAD(90.0F); // HALF_PI32

                if (ip->shield_collide_angle < 0.0F)
                {
                    ip->shield_collide_angle = 0.0F;
                }
                if (ip->proc_hop != NULL)
                {
                    if (ip->proc_hop(item_gobj) != FALSE)
                    {
                        itMainDestroyItem(item_gobj);
                        return;
                    }
                }
                goto next_check;
            }
        }
        if (ip->proc_shield != NULL)
        {
            if (ip->proc_shield(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
    }
next_check:
    if (ip->hit_attack_damage != 0)
    {
        if (ip->proc_setoff != NULL)
        {
            if (ip->proc_setoff(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
    }
    if (ip->reflect_gobj != NULL)
    {
        ftStruct *fp;

        ip->owner_gobj = ip->reflect_gobj;

        fp = ftGetStruct(ip->reflect_gobj);

        ip->team = fp->team;
        ip->player = fp->player;
        ip->player_number = fp->player_number;
        ip->handicap = fp->handicap;
        ip->item_hit.stat_flags = ip->reflect_stat_flags;
        ip->item_hit.stat_count = ip->reflect_stat_count;

        if (ip->proc_reflector != NULL)
        {
            if (ip->proc_reflector(item_gobj) != FALSE)
            {
                itMainDestroyItem(item_gobj);
                return;
            }
        }
        if (!(ip->is_static_damage))
        {
            ip->item_hit.damage = (ip->item_hit.damage * ITEM_REFLECT_MUL_DEFAULT) + ITEM_REFLECT_ADD_DEFAULT;

            if (ip->item_hit.damage > ITEM_REFLECT_MAX_DEFAULT)
            {
                ip->item_hit.damage = ITEM_REFLECT_MAX_DEFAULT;
            }
        }
    }
    if (ip->damage_lag != 0)
    {
        ip->hitlag_timer = gmCommon_DamageCalcHitLag(ip->damage_lag, ftStatus_Common_Wait, 1.0F); // Maybe 10 is the "none" status ID?
    }

    ip->hit_normal_damage = 0;
    ip->hit_refresh_damage = 0;
    ip->hit_attack_damage = 0;
    ip->hit_shield_damage = 0;
    ip->reflect_gobj = NULL;
    ip->damage_highest = 0;
    ip->damage_queue = 0;
    ip->damage_lag = 0;
    ip->damage_knockback = 0.0F;
}

// 0x801713B0
void itManagerUpdateColAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ftMain_UpdateColAnim(&ip->colanim, item_gobj, FALSE, FALSE) != FALSE)
    {
        itMainClearColAnim(item_gobj);
    }
}

// 0x801713F4
void itManagerUpdateSpin(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->rotate.vec.f.z += ip->rotate_step;
}
