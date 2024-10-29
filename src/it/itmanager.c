#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t D_NF_000000FB;
extern intptr_t lITManagerParticleBankScriptsLo;        // 0x00B1BCA0
extern intptr_t lITManagerParticleBankScriptsHi;        // 0x00B1BDE0
extern intptr_t lITManagerParticleBankTexturesLo;       // 0x00B1BDE0
extern intptr_t lITManagerParticleBankTexturesHi;       // 0x00B1E640

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018D040
void *gITManagerFileData;

// 0x8018D044
s32 gITManagerParticleBankID;

// 0x8018D048
ITRandomWeights gITManagerRandomWeights;

// 0x8018D060
ITMonsterData gITManagerMonsterData;

// 0x8018D090
s32 gITManagerDisplayMode;

// 0x8018D094 - points to next available item struct
ITStruct *gITManagerStructsAllocFree;

// 0x8018D098
ITSpawnActor gITManagerSpawnActor;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80189450 - 0 spawns random, non-0 spawns item ID of dITManagerForceMonsterKind + (nITMBallMonsterStart - 1)
s32 dITManagerForceMonsterKind = 0;

// 0x80189454
u16 dITManagerAppearanceRatesMin[/* */] = 
{
    I_SEC_TO_TICS(0), 
    I_SEC_TO_TICS(30),
    I_SEC_TO_TICS(25),
    I_SEC_TO_TICS(20),
    I_SEC_TO_TICS(15),
    I_SEC_TO_TICS(10)
};

// 0x80189460
u16 dITManagerAppearanceRatesMax[/* */] =
{
    I_SEC_TO_TICS(0),
    I_SEC_TO_TICS(30) + 90,
    I_SEC_TO_TICS(25) + 75,
    I_SEC_TO_TICS(20) + 60,
    I_SEC_TO_TICS(15) + 45,
    I_SEC_TO_TICS(10) + 30
};

// 0x8018946C
GObj* (*dITManagerProcMakeList[/* */])(GObj*, Vec3f*, Vec3f*, u32) = 
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
    NULL,                   // Ness' PK Fire
    NULL,                   // Link's Bomb

    // Stage items
    itPowerBlockMakeItem,   // Mushroom Kingdom POW Block
    itGBumperMakeItem,      // Common Stage Bumper
    itPakkunMakeItem,       // Mushroom Kingdom Piranha Plant
    itTargetMakeItem,       // Bonus Stage Target
    itTaruBombMakeItem,     // Race to the Finish Bomb
    itGLuckyMakeItem,       // Saffron City Chansey
    itMarumineMakeItem,     // Saffron City Electrode
    itHitokageMakeItem,     // Saffron City Charmander
    itFushigibanaMakeItem,  // Saffron City Venusaur
    itPorygonMakeItem,      // Saffron City Porygon

    // Pokémon items
    itIwarkMakeItem,        // Poké Ball Onix
    itKabigonMakeItem,      // Poké Ball Snorlax
    itTosakintoMakeItem,    // Poké Ball Goldeen
    itNyarsMakeItem,        // Poké Ball Meowth
    itLizardonMakeItem,     // Poké Ball Charizard
    itSpearMakeItem,        // Poké Ball Beedrill
    itKamexMakeItem,        // Poké Ball Blastoise
    itMLuckyMakeItem,       // Poké Ball Chansey
    itStarmieMakeItem,      // Poké Ball Starmie
    itSawamuraMakeItem,     // Poké Ball Hitmonlee
    itDogasMakeItem,        // Poké Ball Koffing
    itPippiMakeItem,        // Poké Ball Clefairy
    itMewMakeItem           // Poké Ball Mew
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8016DEA0
void itManagerInitItems(void) // Many linker things here
{
    ITStruct *ip;
    s32 i;

    gITManagerStructsAllocFree = ip = syTaskmanMalloc(sizeof(ITStruct) * ITEM_ALLOC_MAX, 0x8);

    for (i = 0; i < (ITEM_ALLOC_MAX - 1); i++)
    {
        ip[i].alloc_next = &ip[i + 1];
    }
    if (ip != NULL)
    {
        ip[i].alloc_next = NULL;
    }
    gITManagerFileData = (void*) lbRelocGetFileExternHeap(&D_NF_000000FB, syTaskmanMalloc(lbRelocGetFileSize(&D_NF_000000FB), 0x10));

    gITManagerParticleBankID = efAllocGetAddParticleBankID
    (
        &lITManagerParticleBankScriptsLo, 
        &lITManagerParticleBankScriptsHi,
        &lITManagerParticleBankTexturesLo, 
        &lITManagerParticleBankTexturesHi
    );
    itManagerSetupContainerDrops();
    itManagerInitMonsterVars();
    ifCommonItemArrowSetAttr();

    gITManagerDisplayMode = nDBDisplayModeMaster;
}

// 0x8016DFAC
ITStruct* itManagerGetNextStructAlloc(void) // Set global Item user_data link pointer to next member
{
    ITStruct *new_item = gITManagerStructsAllocFree;
    ITStruct *get_item;

    if (new_item == NULL)
    {
        return NULL;
    }
    get_item = new_item;

    gITManagerStructsAllocFree = new_item->alloc_next;

    return get_item;
}

// 0x8016DFDC
void itManagerSetPrevStructAlloc(ITStruct *ip) // Set global Item user_data link pointer to previous member
{
    ip->alloc_next = gITManagerStructsAllocFree;

    gITManagerStructsAllocFree = ip;
}

// 0x8016DFF4
void itManagerSetupItemDObjs(GObj *gobj, DObjDesc *dobjdesc, DObj **dobjs, u8 transform_kind)
{
    s32 i, id;
    DObj *dobj, *array_dobjs[DOBJ_ARRAY_MAX];

    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    for (i = 0; dobjdesc->index != ARRAY_COUNT(array_dobjs); i++, dobjdesc++)
    {
        id = dobjdesc->index & 0xFFF;

        if (id != 0)
        {
            dobj = array_dobjs[id] = gcAddChildForDObj(array_dobjs[id - 1], dobjdesc->display_list);
        }
        else dobj = array_dobjs[0] = gcAddDObjForGObj(gobj, dobjdesc->display_list);
        
        if (i == 1)
        {
            gcDecideDObjTriTransformKind(dobj, transform_kind, nGCTransformNull, nGCTransformNull, nGCTransformNull);
        }
        else if (transform_kind != nGCTransformNull)
        {
            gcAddXObjForDObjFixed(dobj, transform_kind, nGCTransformNull);
        }
        dobj->translate.vec.f = dobjdesc->translate;
        dobj->rotate.vec.f = dobjdesc->rotate;
        dobj->scale.vec.f = dobjdesc->scale;

        if (dobjs != NULL)
        {
            dobjs[i] = dobj;
        }
    }
}

// 0x8016E174
GObj* itManagerMakeItem(GObj *parent_gobj, ITCreateDesc *item_desc, Vec3f *pos, Vec3f *vel, u32 flags)
{
    ITStruct *ip = itManagerGetNextStructAlloc();
    GObj *item_gobj;
    ITAttributes *attr;
    void (*func_display)(GObj*);
    s32 unused[4];

    if (ip == NULL)
    {
        return NULL;
    }
    item_gobj = gcMakeGObjSPAfter(nGCCommonKindItem, NULL, nGCCommonLinkIDItem, GOBJ_LINKORDER_DEFAULT);

    if (item_gobj == NULL)
    {
        itManagerSetPrevStructAlloc(ip);

        return NULL;
    }
    attr = lbRelocGetDataFromFile(ITAttributes*, *item_desc->p_file, item_desc->o_attributes);

    if (attr->is_display_colanim)
    {
        func_display = (attr->is_display_xlu) ? itDisplayColAnimXLUFuncDisplay : itDisplayColAnimOPAFuncDisplay;
    }
    else func_display = (attr->is_display_xlu) ? itDisplayXLUFuncDisplay : itDisplayOPAFuncDisplay;

    gcAddGObjDisplay(item_gobj, func_display, 11, GOBJ_DLLINKORDER_DEFAULT, -1);

    item_gobj->user_data.p = ip;

    ip->item_gobj = item_gobj;
    ip->owner_gobj = NULL;

    ip->it_kind = item_desc->it_kind;
    ip->type = attr->type;

    ip->physics.vel_air = *vel;
    ip->physics.vel_ground = 0.0F;

    ip->attr = attr;

    itMainVelSetRotateStepLR(item_gobj);
    itMainResetPlayerVars(item_gobj);

    ip->is_allow_pickup     = FALSE;
    ip->is_hold             = FALSE;
    ip->is_allow_knockback  = FALSE;
    ip->is_unused_item_bool = FALSE;
    ip->is_static_damage    = FALSE;

    ip->pickup_wait         = ITEM_PICKUP_WAIT_DEFAULT;

    ip->percent_damage      = 0;
    ip->hitlag_tics         = 0;
    ip->damage_highest      = 0;
    ip->damage_knockback    = 0.0F;
    ip->damage_queue        = 0;
    ip->damage_lag          = 0;

    ip->times_landed        = 0;
    ip->times_thrown        = 0;

    ip->weight              = attr->weight;
    ip->is_hitlag_victim    = attr->is_give_hitlag;
    ip->drop_sfx            = attr->drop_sfx;
    ip->throw_sfx           = attr->throw_sfx;
    ip->smash_sfx           = attr->smash_sfx;

    ip->vel_scale           = F_PCT_TO_DEC(attr->vel_scale);

    ip->is_damage_all       = FALSE;
    ip->is_thrown           = FALSE; // Applies magnitude and stale multiplier if TRUE and hitbox is active?
    ip->is_attach_surface   = FALSE;

    ip->rotate_step         = 0.0F;

    ip->arrow_gobj          = NULL;
    ip->arrow_timer         = 0;

    ip->atk_coll.atk_state          = item_desc->atk_state;
    ip->atk_coll.damage             = attr->damage;
    ip->atk_coll.throw_mul          = 1.0F;
    ip->atk_coll.stale              = 1.0F;
    ip->atk_coll.element            = attr->element;
    ip->atk_coll.offset[0].x        = attr->atk_offset0_x;
    ip->atk_coll.offset[0].y        = attr->atk_offset0_y;
    ip->atk_coll.offset[0].z        = attr->atk_offset0_z;
    ip->atk_coll.offset[1].x        = attr->atk_offset1_x;
    ip->atk_coll.offset[1].y        = attr->atk_offset1_y;
    ip->atk_coll.offset[1].z        = attr->atk_offset1_z;
    ip->atk_coll.size               = attr->size * 0.5F;
    ip->atk_coll.angle              = attr->angle;
    ip->atk_coll.knockback_scale    = attr->knockback_scale;
    ip->atk_coll.knockback_weight   = attr->knockback_weight;
    ip->atk_coll.knockback_base     = attr->knockback_base;
    ip->atk_coll.can_setoff         = attr->can_setoff;
    ip->atk_coll.shield_damage      = attr->shield_damage;
    ip->atk_coll.hit_sfx            = attr->hit_sfx;
    ip->atk_coll.priority           = attr->priority;
    ip->atk_coll.can_rehit_item     = attr->can_rehit_item;
    ip->atk_coll.can_rehit_fighter  = attr->can_rehit_fighter;
    ip->atk_coll.can_rehit_shield   = FALSE;
    ip->atk_coll.can_hop            = attr->can_hop;
    ip->atk_coll.can_reflect        = attr->can_reflect;
    ip->atk_coll.can_shield         = attr->can_shield;
    ip->atk_coll.atk_count          = attr->atk_count;
    ip->atk_coll.interact_mask      = GMHITCOLLISION_FLAG_ALL;

    ip->atk_coll.attack_id                  = nFTMotionAttackIDNone;
    ip->atk_coll.motion_count               = ftParamGetMotionCount();
    ip->atk_coll.stat_flags.stat_attack_id  = nFTStatusAttackIDNull;
    ip->atk_coll.stat_flags.is_smash_attack = ip->atk_coll.stat_flags.ga = ip->atk_coll.stat_flags.is_projectile = 0;
    ip->atk_coll.stat_count                 = ftParamGetStatUpdateCount();

    itMainClearHitRecord(ip);

    ip->dmg_coll.hitstatus     = attr->hitstatus;
    ip->dmg_coll.offset.x      = attr->dmg_coll_offset.x;
    ip->dmg_coll.offset.y      = attr->dmg_coll_offset.y;
    ip->dmg_coll.offset.z      = attr->dmg_coll_offset.z;
    ip->dmg_coll.size.x        = attr->dmg_coll_size.x * 0.5F;
    ip->dmg_coll.size.y        = attr->dmg_coll_size.y * 0.5F;
    ip->dmg_coll.size.z        = attr->dmg_coll_size.z * 0.5F;
    ip->dmg_coll.interact_mask = GMHITCOLLISION_FLAG_ALL;

    ip->shield_collide_angle = 0.0F;
    ip->shield_collide_dir.x = 0.0F;
    ip->shield_collide_dir.y = 0.0F;
    ip->shield_collide_dir.z = 0.0F;

    ip->hit_normal_damage  = 0;
    ip->hit_refresh_damage = 0;
    ip->hit_attack_damage  = 0;
    ip->hit_shield_damage  = 0;

    ip->reflect_gobj = NULL;

    if (attr->dobj_setup != NULL)
    {
        if (!(attr->is_item_dobjs))
        {
            gcSetupCustomDObjsWithMObj(item_gobj, attr->dobj_setup, attr->p_mobjsubs, NULL, item_desc->transform_types.tk1, item_desc->transform_types.tk2, item_desc->transform_types.tk3);
        }
        else
        {
            itManagerSetupItemDObjs(item_gobj, attr->dobj_setup, NULL, item_desc->transform_types.tk1);

            if (attr->p_mobjsubs != NULL)
            {
                gcAddMObjAll(item_gobj, attr->p_mobjsubs);
            }
        }
        if ((attr->anim_joints != NULL) || (attr->p_matanim_joints != NULL))
        {
            gcAddAnimAll(item_gobj, attr->anim_joints, attr->p_matanim_joints, 0.0F);
            gcPlayAnimAll(item_gobj);
        }
        lbCommonEjectTreeDObj(DObjGetStruct(item_gobj));
    }
    else gcAddDObjForGObj(item_gobj, NULL);
    
    ip->coll_data.p_translate       = &DObjGetStruct(item_gobj)->translate.vec.f;
    ip->coll_data.p_lr              = &ip->lr;
    ip->coll_data.obj_coll.top       = attr->obj_coll_top;
    ip->coll_data.obj_coll.center    = attr->obj_coll_center;
    ip->coll_data.obj_coll.bottom    = attr->obj_coll_bottom;
    ip->coll_data.obj_coll.width     = attr->obj_coll_width;
    ip->coll_data.p_obj_coll         = &ip->coll_data.obj_coll;
    ip->coll_data.ignore_line_id    = -1;
    ip->coll_data.coll_update_frame = gMPCollisionUpdateFrame;
    ip->coll_data.coll_mask_current    = 0;
    ip->coll_data.vel_push.x        = 0.0F;
    ip->coll_data.vel_push.y        = 0.0F;
    ip->coll_data.vel_push.z        = 0.0F;

    gcAddGObjProcess(item_gobj, itProcessProcItemMain, nGCProcessKindProc, 3);
    gcAddGObjProcess(item_gobj, itProcessProcSearchHitAll, nGCProcessKindProc, 1);
    gcAddGObjProcess(item_gobj, itProcessProcHitCollisions, nGCProcessKindProc, 0);

    ip->proc_update     = item_desc->proc_update;
    ip->proc_map        = item_desc->proc_map;
    ip->proc_hit        = item_desc->proc_hit;
    ip->proc_shield     = item_desc->proc_shield;
    ip->proc_hop        = item_desc->proc_hop;
    ip->proc_setoff     = item_desc->proc_setoff;
    ip->proc_reflector  = item_desc->proc_reflector;
    ip->proc_damage     = item_desc->proc_damage;
    ip->proc_dead       = NULL;

    ip->coll_data.pos_current = DObjGetStruct(item_gobj)->translate.vec.f = *pos;

    if (flags & ITEM_FLAG_COLLPROJECT)
    {
        switch (flags & ITEM_MASK_PARENT)
        {
        case ITEM_FLAG_PARENT_GROUND:
        case ITEM_FLAG_PARENT_DEFAULT: // Default?
            break;

        case ITEM_FLAG_PARENT_FIGHTER:
            mpCommonRunItemCollisionDefault(item_gobj, ftGetStruct(parent_gobj)->coll_data.p_translate, &ftGetStruct(parent_gobj)->coll_data);
            break;

        case ITEM_FLAG_PARENT_WEAPON:
            mpCommonRunItemCollisionDefault(item_gobj, wpGetStruct(parent_gobj)->coll_data.p_translate, &wpGetStruct(parent_gobj)->coll_data);
            break;

        case ITEM_FLAG_PARENT_ITEM:
            mpCommonRunItemCollisionDefault(item_gobj, itGetStruct(parent_gobj)->coll_data.p_translate, &itGetStruct(parent_gobj)->coll_data);
            break;

        default:
            break;
        }
    }
    ip->ga = nMPKineticsAir;

    itProcessUpdateHitPositions(item_gobj);
    itMainClearColAnim(item_gobj);

    return item_gobj;
}

// 0x8016EA78
GObj* itManagerMakeItemSetupCommon(GObj *parent_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 spawn_flags)
{
    GObj *item_gobj = dITManagerProcMakeList[index](parent_gobj, pos, vel, spawn_flags);

    if (item_gobj != NULL)
    {
        if (index <= nITKindCommonEnd)
        {
            efManagerItemSpawnSwirlMakeEffect(pos);
            func_ovl3_80172394(item_gobj, FALSE);
        }
    }
    return item_gobj;
}

// 0x8016EB00
ITStruct* itManagerGetCurrentAlloc(void)
{
    return gITManagerStructsAllocFree;
}

// 0x8016EB0C
void itManagerSetItemSpawnWait(void)
{
    gITManagerSpawnActor.item_spawn_wait = 
    dITManagerAppearanceRatesMin[gBattleState->item_appearance_rate] + 
    mtTrigGetRandomIntRange(dITManagerAppearanceRatesMax[gBattleState->item_appearance_rate] - dITManagerAppearanceRatesMin[gBattleState->item_appearance_rate]);
}

// 0x8016EB78
void itManagerMakeRandomItem(GObj *item_gobj)
{
    s32 unused;
    s32 index;
    Vec3f pos;
    Vec3f vel;

    if (gBattleState->game_status != nSCBattleGameStatusWait)
    {
        if (gITManagerSpawnActor.item_spawn_wait > 0)
        {
            gITManagerSpawnActor.item_spawn_wait--;

            return;
        }
        if (itManagerGetCurrentAlloc() != NULL)
        {
            index = itMainGetWeightedItemKind(&gITManagerSpawnActor.weights);

            mpCollisionGetMapObjPositionID(gITManagerSpawnActor.item_mapobjs[mtTrigGetRandomIntRange(gITManagerSpawnActor.item_mapobj_count)], &pos);

            vel.x = vel.y = vel.z = 0.0F;

            func_800269C0_275C0(nSYAudioFGMItemSpawn1);

            itManagerMakeItemSetupCommon(NULL, index, &pos, &vel, ITEM_FLAG_PARENT_DEFAULT);
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
    MPItemWeights *item_count_qty;
    s32 item_weights;
    s32 item_mapobj_count;
    s32 item_mapobj_ids[30];
    u32 item_count_toggles;
    s32 j;
    u32 item_id_toggles;
    MPItemWeights *item_weight_qty;
    u32 item_num_toggles;

    if (gBattleState->item_appearance_rate != nSCBattleItemSwitchNone)
    {
        if (gBattleState->item_toggles != 0)
        {
            if (gMPCollisionGroundData->item_weights != NULL)
            {
                item_count_qty = gMPCollisionGroundData->item_weights;

                item_num_toggles = gBattleState->item_toggles;

                item_count = 0;

                for (i = 0; i <= nITKindCommonEnd; i++, item_num_toggles >>= 1)
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
                gITManagerSpawnActor.weights.item_num = item_count;

                item_mapobj_count = mpCollisionGetMapObjCountKind(nMPMapObjKindItemSpawn);

                if (item_mapobj_count == 0)
                {
                    return NULL;
                }
                if (item_mapobj_count > ARRAY_COUNT(item_mapobj_ids))
                {
                    while (TRUE)
                    {
                        syErrorPrintf("Item positions are over %d!\n", ARRAY_COUNT(item_mapobj_ids));
                        scManagerRunPrintGObjStatus();
                    }
                }
                gITManagerSpawnActor.item_mapobj_count = item_mapobj_count;
                gITManagerSpawnActor.item_mapobjs = (u8*)syTaskmanMalloc(item_mapobj_count * sizeof(*gITManagerSpawnActor.item_mapobjs), 0);

                mpCollisionGetMapObjIDsKind(nMPMapObjKindItemSpawn, item_mapobj_ids);

                for (i = 0; i < item_mapobj_count; i++)
                {
                    gITManagerSpawnActor.item_mapobjs[i] = item_mapobj_ids[i];
                }
                gobj = gcMakeGObjSPAfter(nGCCommonKindItem, NULL, nGCCommonLinkIDItemActor, GOBJ_LINKORDER_DEFAULT);

                gcAddGObjProcess(gobj, itManagerMakeRandomItem, nGCProcessKindProc, 3);

                item_count_toggles = gBattleState->item_toggles;

                item_weight_qty = gMPCollisionGroundData->item_weights;

                for (i = nITKindCommonStart, j = 0; i <= nITKindCommonEnd; i++, item_count_toggles >>= 1)
                {
                    if ((item_count_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                    {
                        j++;
                    }
                }
                gITManagerSpawnActor.weights.item_count = j;
                gITManagerSpawnActor.weights.item_kinds = (u8*)syTaskmanMalloc(j * sizeof(*gITManagerSpawnActor.weights.item_kinds), 0x0);
                gITManagerSpawnActor.weights.item_totals = (u16*)syTaskmanMalloc(j * sizeof(*gITManagerSpawnActor.weights.item_totals), 0x2);

                item_id_toggles = gBattleState->item_toggles;

                item_weights = 0;

                for (i = nITKindCommonStart, j = 0; i <= nITKindCommonEnd; i++, item_id_toggles >>= 1)
                {
                    if ((item_id_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                    {
                        gITManagerSpawnActor.weights.item_kinds[j] = i;
                        gITManagerSpawnActor.weights.item_totals[j] = item_weights;
                        item_weights += item_weight_qty->item_quantities[i];

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
    MPItemWeights *item_count_qty;
    MPItemWeights *item_weight_qty;
    s32 item_tenth_round;

    if ((gBattleState->item_appearance_rate != nSCBattleItemSwitchNone) && (gBattleState->item_toggles != 0) && (gMPCollisionGroundData->item_weights != NULL))
    {
        item_num_toggles = gBattleState->item_toggles >> nITKindUtilityStart;
        item_count_qty = gMPCollisionGroundData->item_weights;

        item_count = 0;

        for (i = nITKindUtilityStart; i <= nITKindUtilityEnd; i++, item_num_toggles >>= 1)
        {
            if (item_num_toggles & 1)
            {
                item_count += item_count_qty->item_quantities[i];
            }
        }
        gITManagerRandomWeights.item_num = item_count;

        if (item_count != 0)
        {
            item_id_toggles = gBattleState->item_toggles >> nITKindUtilityStart;
            item_weight_qty = gMPCollisionGroundData->item_weights;

            for (j = 0, i = nITKindUtilityStart; i <= nITKindUtilityEnd; i++, item_id_toggles >>= 1)
            {
                if ((item_id_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                {
                    j++;
                }
            }
            j++;

            gITManagerRandomWeights.item_count = j;
            gITManagerRandomWeights.item_kinds = (u8*)syTaskmanMalloc(j * sizeof(*gITManagerRandomWeights.item_kinds), 0x0);
            gITManagerRandomWeights.item_totals = (u16*)syTaskmanMalloc(j * sizeof(*gITManagerRandomWeights.item_totals), 0x2);

            item_id_toggles = gBattleState->item_toggles >> nITKindUtilityStart;

            item_weights = 0;

            for (j = 0, i = nITKindUtilityStart; i <= nITKindUtilityEnd; i++, item_id_toggles >>= 1)
            {
                if ((item_id_toggles & 1) && (item_weight_qty->item_quantities[i] != 0))
                {
                    gITManagerRandomWeights.item_kinds[j] = i;
                    gITManagerRandomWeights.item_totals[j] = item_weights;
                    item_weights += item_weight_qty->item_quantities[i];
                    j++;
                }
            }
            gITManagerRandomWeights.item_kinds[j] = nITKindMBallMonsterStart;
            gITManagerRandomWeights.item_totals[j] = item_weights;

            item_tenth_round = (gITManagerRandomWeights.item_num * 0.1F);

            if (item_tenth_round != 0)
            {
                item_tenth_floor = item_tenth_round;
            }
            else item_tenth_floor = 1;

            gITManagerRandomWeights.item_num += item_tenth_floor;
        }
    }
    else gITManagerRandomWeights.item_num = 0;
}

// 0x8016F218
void itManagerInitMonsterVars(void)
{
    gITManagerMonsterData.monster_curr = gITManagerMonsterData.monster_prev = U8_MAX;
    gITManagerMonsterData.monster_count = (nITKindMBallMonsterEnd - nITKindMBallMonsterStart);
}

// 0x8016F238
GObj* itManagerMakeItemKind(GObj *parent_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 flags)
{
    return dITManagerProcMakeList[index](parent_gobj, pos, vel, flags);
}
