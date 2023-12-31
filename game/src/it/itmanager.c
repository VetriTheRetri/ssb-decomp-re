#include <it/item.h>
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <gm/battle.h>
#include <gr/ground.h>

// 0x8018D040
void *gItemFileData;

// 0x8018D044
void *gItemEffectBank;

// 0x8018D048
Unk_8018D048 D_ovl3_8018D048;

// 0x8018D060
itMonsterInfo gMonsterData;

// 0x8018D090
s32 gItemDisplayMode;

// 0x8018D094
itStruct *gItemStructCurrent;

extern intptr_t D_NF_000000FB;
extern intptr_t D_NF_00B1BCA0;
extern intptr_t D_NF_00B1BDE0;
extern intptr_t D_NF_00B1BDE0_other;
extern intptr_t D_NF_00B1E640;

// 0x8016DEA0
void itManager_AllocUserData(void) // Many linker things here
{
    itStruct *ip;
    s32 i;

    gItemStructCurrent = ip = hal_alloc(sizeof(itStruct) * ITEM_ALLOC_MAX, 0x8);

    for (i = 0; i < (ITEM_ALLOC_MAX - 1); i++)
    {
        ip[i].ip_alloc_next = &ip[i + 1];
    }
    if (ip != NULL)
    {
        ip[i].ip_alloc_next = NULL;
    }
    gItemFileData = rldm_get_file_with_external_heap(&D_NF_000000FB, hal_alloc(rldm_bytes_needed_to_load(&D_NF_000000FB), 0x10));

    gItemEffectBank = efAlloc_SetParticleBank(&D_NF_00B1BCA0, &D_NF_00B1BDE0, &D_NF_00B1BDE0_other, &D_NF_00B1E640);

    func_ovl3_8016EF40();
    itManager_InitMonsterVars();
    func_ovl2_80111F80();

    gItemDisplayMode = dbObject_DisplayMode_Master;
}

// 0x8016DFAC
itStruct* itManager_GetStructSetNextAlloc(void) // Set global Article user_data link pointer to next member
{
    itStruct *next_item = gItemStructCurrent;
    itStruct *current_item;

    if (next_item == NULL)
    {
        return NULL;
    }
    current_item = next_item;

    gItemStructCurrent = next_item->ip_alloc_next;

    return current_item;
}

// 0x8016DFDC
void itManager_SetPrevAlloc(itStruct *ip) // Set global Article user_data link pointer to previous member
{
    ip->ip_alloc_next = gItemStructCurrent;

    gItemStructCurrent = ip;
}

void func_ovl3_8016DFF4(GObj *gobj, DObjDesc *joint_desc, DObj **p_ptr_dobj, u8 arg3)
{
    s32 i, index;
    DObj *joint, *dobj_array[18];

    for (i = 0; i < ARRAY_COUNT(dobj_array); i++)
    {
        dobj_array[i] = NULL;
    }
    for (i = 0; joint_desc->index != ARRAY_COUNT(dobj_array); i++, joint_desc++)
    {
        index = joint_desc->index & 0xFFF;

        if (index != 0)
        {
            joint = dobj_array[index] = func_800093F4(dobj_array[index - 1], joint_desc->display_list);
        }
        else
        {
            joint = dobj_array[0] = func_800092D0(gobj, joint_desc->display_list);
        }
        if (i == 1)
        {
            func_8000F364(joint, arg3, NULL, NULL, NULL);
        }
        else if (arg3 != 0)
        {
            func_80008CC0(joint, arg3, NULL);
        }
        joint->translate.vec.f = joint_desc->translate;
        joint->rotate.vec.f = joint_desc->rotate;
        joint->scale.vec.f = joint_desc->scale;

        if (p_ptr_dobj != NULL) // I have yet to find a case where this point is actually reached
        {
            p_ptr_dobj[i] = joint;
        }
    }
}

// 0x8016E174
GObj* itManager_MakeItem(GObj *spawn_gobj, itCreateDesc *spawn_data, Vec3f *pos, Vec3f *vel, u32 flags)
{
    itStruct *ip = itManager_GetStructSetNextAlloc();
    GObj *item_gobj;
    itAttributes *attributes;
    void (*cb_render)(GObj*);
    s32 unused[4];

    if (ip == NULL)
    {
        return NULL;
    }
    else item_gobj = omMakeGObjCommon(omGObj_Kind_Item, NULL, 4U, 0x80000000U);

    if (item_gobj == NULL)
    {
        itManager_SetPrevAlloc(ip);

        return NULL;
    }
    attributes = (itAttributes*) ((uintptr_t)*spawn_data->p_file + (intptr_t)spawn_data->offset);

    if (attributes->is_render_colanim)
    {
        cb_render = (attributes->is_render_transparency) ? itRender_ProcRenderColAnimXLU : itRender_ProcRenderColAnimOPA;
    }
    else cb_render = (attributes->is_render_transparency) ? itRender_ProcRenderXLU : itRender_ProcRenderOPA;

    omAddGObjRenderProc(item_gobj, cb_render, 0xB, 0x80000000, -1);

    item_gobj->user_data = ip;
    ip->item_gobj = item_gobj;
    ip->owner_gobj = NULL;
    ip->it_kind = spawn_data->it_kind;
    ip->type = attributes->type;
    ip->phys_info.vel_air = *vel;
    ip->phys_info.vel_ground = 0.0F;
    ip->attributes = attributes;

    itMain_VelSetRotateStepLR(item_gobj);
    itMain_ResetPlayerVars(item_gobj);

    ip->is_allow_pickup     = FALSE;
    ip->is_hold             = FALSE;
    ip->is_allow_knockback  = FALSE;
    ip->is_unused_item_bool = FALSE;
    ip->is_static_damage    = FALSE;

    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;

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

    ip->rotate_step = 0.0F;

    ip->indicator_gobj      = NULL;
    ip->indicator_timer     = 0;

    ip->item_hit.update_state       = spawn_data->update_state;
    ip->item_hit.damage             = attributes->damage;
    ip->item_hit.stale              = 1.0F;
    ip->item_hit.throw_mul          = 1.0F;
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
    ip->item_hit.setoff             = attributes->setoff;
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
    ip->item_hit.stat_flags.is_smash_attack = ip->item_hit.stat_flags.is_ground_or_air = ip->item_hit.stat_flags.is_special_attack = FALSE;
    ip->item_hit.stat_count                 = gmCommon_GetStatUpdateCountInc();

    itMain_ClearHitRecord(ip);

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

    ip->hit_normal_damage   = 0;
    ip->hit_refresh_damage  = 0;
    ip->hit_attack_damage   = 0;
    ip->hit_shield_damage   = 0;

    ip->reflect_gobj = NULL;

    if (attributes->model_desc != NULL)
    {
        if (!(attributes->unk_0x10_b1))
        {
            func_8000F720(item_gobj, attributes->model_desc, attributes->mobj, NULL, spawn_data->unk_aspd_0xC, spawn_data->unk_aspd_0xD, spawn_data->unk_aspd_0xE);
        }
        else
        {
            func_ovl3_8016DFF4(item_gobj, attributes->model_desc, NULL, spawn_data->unk_aspd_0xC);

            if (attributes->mobj != NULL)
            {
                func_8000F8F4(item_gobj, attributes->mobj);
            }
        }
        if ((attributes->anim_joint != NULL) || (attributes->matanim_joint != NULL)) // Runs if item has joint or texture animation on spawn?
        {
            func_8000BED8(item_gobj, attributes->anim_joint, attributes->matanim_joint, 0.0F);
            func_8000DF34(item_gobj);
        }
        func_ovl0_800C9424(DObjGetStruct(item_gobj));
    }
    else
    {
        func_800092D0(item_gobj, NULL);
    }
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

    omAddGObjCommonProc(item_gobj, itManager_ProcItemMain, 1, 3);
    omAddGObjCommonProc(item_gobj, itManager_ProcSearchHitAll, 1, 1);
    omAddGObjCommonProc(item_gobj, itManager_ProcUpdateHitCollisions, 1, 0);

    ip->proc_update     = spawn_data->proc_update;
    ip->proc_map        = spawn_data->proc_map;
    ip->proc_hit        = spawn_data->proc_hit;
    ip->proc_shield     = spawn_data->proc_shield;
    ip->proc_hop        = spawn_data->proc_hop;
    ip->proc_setoff     = spawn_data->proc_setoff;
    ip->proc_reflector  = spawn_data->proc_reflector;
    ip->proc_damage     = spawn_data->proc_damage;
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
            itMap_RunCollisionDefault(item_gobj, ftGetStruct(spawn_gobj)->coll_data.p_translate, &ftGetStruct(spawn_gobj)->coll_data);
            break;

        case ITEM_MASK_SPAWN_ITEM:
            itMap_RunCollisionDefault(item_gobj, wpGetStruct(spawn_gobj)->coll_data.p_translate, &wpGetStruct(spawn_gobj)->coll_data);
            break;

        case ITEM_MASK_SPAWN_ITEM:
            itMap_RunCollisionDefault(item_gobj, itGetStruct(spawn_gobj)->coll_data.p_translate, &itGetStruct(spawn_gobj)->coll_data);
            break;
        }
    }
    ip->ground_or_air = GA_Air;

    itManager_UpdateHitPositions(item_gobj);
    itMain_ResetColAnim(item_gobj);

    return item_gobj;
}

// Don't forget the following two functions here, stashed until I better understand articles (idk and itManager_MakeItemSetupCommon)

GObj* (*itManager_ProcMake[/* */])(GObj*, Vec3f*, Vec3f*, u32); // Array count is likely 45, but might be 44 if targets are excluded

// 0x8016EA78
GObj* itManager_MakeItemSetupCommon(GObj *spawn_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 spawn_flags)
{
    GObj *item_gobj = itManager_ProcMake[index](spawn_gobj, pos, vel, spawn_flags);

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
itStruct* itManager_GetCurrentStructAlloc(void)
{
    return gItemStructCurrent;
}

u32 itMonster_Global_SelectMonsterIndex = 0;    // Not uninitialized, so it's hardcoded upon building the ROM? 0 = random, beyond 0 = index of Pok�mon to spawn
                                                // When in doubt, change to s32

extern u16 gItemAppearanceRate1[6];
extern u16 gItemAppearanceRate2[6];

extern gmItemSpawn gItemSpawnActor; // Static (.bss)

// 0x8016EB0C
void itManager_SetItemSpawnWait(void)
{
    gItemSpawnActor.item_spawn_wait = gItemAppearanceRate1[gBattleState->item_switch] + lbRandom_GetIntRange(gItemAppearanceRate2[gBattleState->item_switch] - gItemAppearanceRate1[gBattleState->item_switch]);
}

// 0x8016EB78
void itManager_ProcMakeItems(GObj *item_gobj)
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
        if (itManager_GetCurrentStructAlloc() != NULL)
        {
            index = func_ovl3_80173090(&gItemSpawnActor.unk_0xC);

            mpCollision_GetMPointPositionID(gItemSpawnActor.item_toggles[lbRandom_GetIntRange(gItemSpawnActor.max_items)], &pos);

            vel.x = vel.y = vel.z = 0.0F;

            func_800269C0(alSound_SFX_ItemSpawn1);

            itManager_MakeItemSetupCommon(NULL, index, &pos, &vel, ITEM_MASK_SPAWN_DEFAULT);
        }
        itManager_SetItemSpawnWait();
    }
}

// 0x8016EC40 - create item spawner GObj?
GObj* func_ovl3_8016EC40(void)
{
    GObj *gobj;
    s32 i;
    s32 item_count;
    gmGroundUnkBytes *unk_0x84_2;
    s32 item_count_2;
    s32 max_items;
    s32 item_toggles[30];
    u32 item_bits;
    s32 j;
    u32 item_bits_3;
    gmGroundUnkBytes *unk_0x84;
    u32 item_bits_2;

    // TO DO: Figure out where the iterator limit of 20 is coming from

    if (gBattleState->item_switch != 0)
    {
        if (gBattleState->item_toggles != 0)
        {
            if (gGroundInfo->unk_0x84 != NULL)
            {
                unk_0x84_2 = gGroundInfo->unk_0x84;

                item_bits_2 = gBattleState->item_toggles;

                item_count = 0;

                for (i = 0; i <= It_Kind_CommonEnd; i++, item_bits_2 >>= 1)
                {
                    if (item_bits_2 & 1)
                    {
                        item_count += unk_0x84_2->byte[i];
                    }
                }
                if (item_count == 0)
                {
                    return NULL;
                }
                gItemSpawnActor.unk_0x1C = item_count;

                max_items = mpCollision_GetMPointCountKind(mpCollision_MPointKind_ItemSpawn);

                if (max_items == 0)
                {
                    return NULL;
                }
                if (max_items > ARRAY_COUNT(item_toggles))
                {
                    while (TRUE)
                    {
                        fatal_printf("Item positions are over %d!\n", ARRAY_COUNT(item_toggles));
                        scnmgr_crash_print_gobj_state();
                    }
                }
                gItemSpawnActor.max_items = max_items;
                gItemSpawnActor.item_toggles = hal_alloc(max_items * sizeof(*gItemSpawnActor.item_toggles), 0);

                mpCollision_GetMPointIDsKind(mpCollision_MPointKind_ItemSpawn, item_toggles);

                for (i = 0; i < max_items; i++)
                {
                    gItemSpawnActor.item_toggles[i] = item_toggles[i];
                }
                gobj = omMakeGObjCommon(omGObj_Kind_Item, NULL, 2U, 0x80000000U);

                omAddGObjCommonProc(gobj, itManager_ProcMakeItems, 1, 3);

                item_bits = gBattleState->item_toggles;

                unk_0x84 = gGroundInfo->unk_0x84;

                for (i = 0, j = 0; i <= It_Kind_CommonEnd; i++, item_bits >>= 1)
                {
                    if ((item_bits & 1) && (unk_0x84->byte[i] != 0))
                    {
                        j++;
                    }
                }
                gItemSpawnActor.unk_0x14 = j;
                gItemSpawnActor.unk_0x18 = hal_alloc(j * sizeof(*gItemSpawnActor.unk_0x18), 0);
                gItemSpawnActor.unk_0x20 = hal_alloc(j * sizeof(*gItemSpawnActor.unk_0x20), 2);

                item_bits_3 = gBattleState->item_toggles;

                item_count_2 = 0;

                for (i = 0, j = 0; i <= It_Kind_CommonEnd; i++, item_bits_3 >>= 1)
                {
                    if ((item_bits_3 & 1) && (unk_0x84->byte[i] != 0))
                    {
                        gItemSpawnActor.unk_0x18[j] = i;
                        gItemSpawnActor.unk_0x20[j] = item_count_2;
                        item_count_2 += unk_0x84->byte[i];

                        j++;
                    }
                }
                itManager_SetItemSpawnWait();

                return gobj;
            }
        }
    }
    return NULL;
}

static Unk_8018D048 D_ovl3_8018D048;

void func_ovl3_8016EF40(void)
{
    s32 sp28;
    s32 sp1C;
    s32 item_count_2;
    gmGroundUnkBytes *temp_a3;
    s32 temp_f18;
    s32 j;
    s32 item_count_4;
    s32 k;
    gmGroundUnkBytes *temp_t1;
    s32 item_count_2_2;
    s32 temp_a0;
    s32 i;
    s32 item_count;
    u32 item_bits;
    u32 item_bits_2;
    u32 item_bits_3;

    if ((gBattleState->item_switch != gmMatch_ItemSwitch_None) && (gBattleState->item_toggles != 0) && (gGroundInfo->unk_0x84 != NULL))
    {
        item_bits = gBattleState->item_toggles >> 4;

        temp_a3 = gGroundInfo->unk_0x84;

        item_count = 0;

        for (i = It_Kind_UtilityStart; i <= It_Kind_UtilityEnd; i++, item_bits >>= 1)
        {
            if (item_bits & 1)
            {
                item_count += temp_a3->byte[i];
            }
        }
        D_ovl3_8018D048.unk_0x10 = item_count;

        if (item_count != 0)
        {
            item_bits_2 = gBattleState->item_toggles >> 4;

            temp_t1 = gGroundInfo->unk_0x84;

            for (j = 0, i = It_Kind_UtilityStart; i <= It_Kind_UtilityEnd; i++, item_bits_2 >>= 1)
            {
                if ((item_bits_2 & 1) && (temp_t1->byte[i] != 0))
                {
                    j++;
                }
            }
            j++;

            D_ovl3_8018D048.unk_0x8 = j;
            D_ovl3_8018D048.unk_0xC = hal_alloc(j * sizeof(*D_ovl3_8018D048.unk_0xC), 0x0);
            D_ovl3_8018D048.unk_0x14 = hal_alloc(j * sizeof(*D_ovl3_8018D048.unk_0x14), 0x2);

            item_bits_2 = gBattleState->item_toggles >> 4;

            item_count_2 = 0;

            for (j = 0, i = It_Kind_UtilityStart; i <= It_Kind_UtilityEnd; i++, item_bits_2 >>= 1)
            {
                if ((item_bits_2 & 1) && (temp_t1->byte[i] != 0))
                {
                    D_ovl3_8018D048.unk_0xC[j] = i;
                    D_ovl3_8018D048.unk_0x14[j] = item_count_2;
                    item_count_2 += temp_t1->byte[i];
                    j++;
                }
            }
            D_ovl3_8018D048.unk_0xC[j] = 32;
            D_ovl3_8018D048.unk_0x14[j] = item_count_2;

            temp_f18 = (s32)(D_ovl3_8018D048.unk_0x10 * 0.1F);

            if (temp_f18 != 0)
            {
                item_count_4 = temp_f18;
            }
            else item_count_4 = 1;

            D_ovl3_8018D048.unk_0x10 += item_count_4;
        }
    }
    else
    {
        D_ovl3_8018D048.unk_0x10 = 0;
    }
}

// 0x8016F218
void itManager_InitMonsterVars(void)
{
    gMonsterData.monster_curr = gMonsterData.monster_prev = U8_MAX;
    gMonsterData.monster_count = (It_Kind_MbMonsterEnd - It_Kind_MbMonsterStart);
}

// 0x8016F238
GObj* itManager_MakeItemIndex(GObj *spawn_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 flags)
{
    return itManager_ProcMake[index](spawn_gobj, pos, vel, flags);
}

// 0x8016F280
void itManager_UpdateHitPositions(GObj *item_gobj)
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
void itManager_UpdateHitRecord(GObj *item_gobj)
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
void itManager_ProcItemMain(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    Vec3f *translate;
    DObj *joint;

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
                itMain_DestroyItem(item_gobj);
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

                itMain_DestroyItem(item_gobj);
                return;
            }
            if (ip->pickup_wait % 2) // Make item invisible on odd frames
            {
                item_gobj->obj_renderflags ^= GOBJ_RENDERFLAG_HIDDEN;
            }
        }
        if (ip->indicator_timer == 0)
        {
            ip->indicator_timer = ITEM_ARROW_FLASH_INT_DEFAULT;
        }
        ip->indicator_timer--;
    }
    else item_gobj->obj_renderflags = 0;

    if (!(ip->is_hold))
    {
        joint = DObjGetStruct(item_gobj);

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
        else
        {
            ip->coll_data.pos_speed.z = 0.0F;
            ip->coll_data.pos_speed.y = 0.0F;
            ip->coll_data.pos_speed.x = 0.0F;
        }

        if ((translate->y < gGroundInfo->blastzone_bottom) || (translate->x > gGroundInfo->blastzone_right) || (translate->x < gGroundInfo->blastzone_left) || (translate->y > gGroundInfo->blastzone_top))
        {
            if ((ip->proc_dead == NULL) || (ip->proc_dead(item_gobj) != FALSE))
            {
                itMain_DestroyItem(item_gobj);
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
                itMain_DestroyItem(item_gobj);
                return;
            }
        }
        itManager_UpdateHitPositions(item_gobj);
        itManager_UpdateHitRecord(item_gobj);
    }
    itManager_UpdateColAnim(item_gobj);
}

// 0x8016F930
void itManager_SetHitVictimInteractStats(itHitbox *it_hit, GObj *victim_gobj, s32 hitbox_type, u32 interact_mask)
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
void itManager_UpdateDamageStatFighter(ftStruct *fp, ftHitbox *ft_hit, itStruct *ip, itHurtbox *it_hurt, GObj *fighter_gobj, GObj *item_gobj)
{
    s32 damage;
    f32 damage_knockback;
    Vec3f sp4C;

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
        itCollision_GetHurtImpactPosition(&sp4C, ft_hit, it_hurt, item_gobj);

        switch (ft_hit->element)
        {
        case gmHitCollision_Element_Fire:
            efParticle_DamageFire_MakeEffect(&sp4C, ft_hit->damage);
            break;

        case gmHitCollision_Element_Electric:
            func_ovl2_800FE4EC(&sp4C, ft_hit->damage);
            break;

        case gmHitCollision_Element_Coin:
            efParticle_DamageCoin_MakeEffect(&sp4C);
            break;

        case gmHitCollision_Element_Slash:
            efParticle_DamageSlash_MakeEffect(&sp4C, ft_hit->damage, ftCollision_GetDamageSlashRotation(fp, ft_hit));
            break;

        default:
            efParticle_DamageNormalLight_MakeEffect(&sp4C, fp->player, ft_hit->damage, 0);
            break;
        }
    }
    func_ovl2_800E2C24(fp, ft_hit);
}

// 0x8016FD4C
void itManager_UpdateAttackStatItem(itStruct *this_ip, itHitbox *this_hit, s32 this_hit_id, itStruct *victim_ip, itHitbox *victim_hit, s32 victim_hit_id, GObj *this_gobj, GObj *victim_gobj)
{
    s32 victim_hit_damage = itMain_GetDamageOutput(victim_ip);
    s32 this_hit_damage = itMain_GetDamageOutput(this_ip);
    Vec3f pos;
    s32 highest_priority;

    itCollision_GetItemHitImpactPosition(&pos, victim_hit, victim_hit_id, this_hit, this_hit_id);

    highest_priority = this_hit->priority;

    if (victim_hit->priority <= highest_priority)
    {
        itManager_SetHitVictimInteractStats(victim_hit, this_gobj, gmHitCollision_Type_Hit, 0);

        if (victim_ip->hit_attack_damage < victim_hit_damage)
        {
            victim_ip->hit_attack_damage = victim_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, victim_hit_damage);
    }
    highest_priority = victim_hit->priority;

    if (this_hit->priority <= highest_priority)
    {
        itManager_SetHitVictimInteractStats(this_hit, victim_gobj, gmHitCollision_Type_Hit, 0);

        if (this_ip->hit_attack_damage < this_hit_damage)
        {
            this_ip->hit_attack_damage = this_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, this_hit_damage);
    }
}

// 0x8016FE4C
void itManager_UpdateAttackStatWeapon(wpStruct *wp, wpHitbox *wp_hit, s32 wp_hit_id, itStruct *ip, itHitbox *it_hit, s32 it_hit_id, GObj *weapon_gobj, GObj *item_gobj)
{
    s32 wp_hit_damage = wpMain_GetDamageOutput(wp);
    s32 it_hit_damage = itMain_GetDamageOutput(ip);
    Vec3f pos;
    s32 highest_priority;

    wpCollision_GetItemHitImpactPosition(&pos, wp_hit, wp_hit_id, it_hit, it_hit_id);

    highest_priority = wp_hit->priority;

    if (it_hit->priority <= highest_priority)
    {
        itManager_SetHitVictimInteractStats(it_hit, weapon_gobj, gmHitCollision_Type_Hit, 0);

        if (ip->hit_attack_damage < it_hit_damage)
        {
            ip->hit_attack_damage = it_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, it_hit_damage);
    }
    highest_priority = it_hit->priority;

    if (wp_hit->priority <= highest_priority)
    {
        wpManager_UpdateInteractStatsGroupID(wp, wp_hit, item_gobj, gmHitCollision_Type_Hit, 0);

        if (wp->hit_attack_damage < wp_hit_damage)
        {
            wp->hit_attack_damage = wp_hit_damage;
        }
        efParticle_SetOff_MakeEffect(&pos, wp_hit_damage);
    }
}

// 0x8016FF4C - Item's hurtbox gets hit by another item
void itManager_UpdateDamageStatItem(itStruct *attack_ip, itHitbox *attack_it_hit, s32 hitbox_id, itStruct *defend_ip, itHurtbox *it_hurt, GObj *attack_gobj, GObj *defend_gobj)
{
    s32 damage;
    f32 knockback;
    sb32 is_rehit;
    f32 vel;
    Vec3f pos;
    s32 lr;
    s32 unused;

    damage = itMain_GetDamageOutput(attack_ip);

    is_rehit = ((defend_ip->type == It_Type_Ground) && (attack_it_hit->can_rehit_item)) ? TRUE : FALSE;

    itManager_SetHitVictimInteractStats(attack_it_hit, defend_gobj, (is_rehit != FALSE) ? gmHitCollision_Type_HurtRehit : gmHitCollision_Type_Hurt, 0);

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
void itManager_UpdateDamageStatWeapon(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, itStruct *ip, itHurtbox *it_hurt, GObj *weapon_gobj, GObj *item_gobj)
{
    s32 damage;
    s32 unused;
    s32 is_rehit;
    f32 knockback;
    Vec3f pos;
    f32 vel;
    s32 lr;

    damage = wpMain_GetDamageOutput(wp);

    is_rehit = ((ip->type == It_Type_Ground) && (wp_hit->can_rehit_item)) ? TRUE : FALSE;

    wpManager_UpdateInteractStatsGroupID(wp, wp_hit, item_gobj, ((is_rehit != FALSE) ? gmHitCollision_Type_HurtRehit : gmHitCollision_Type_Hurt), 0);

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
            ip->damage_gobj             =       wp->owner_gobj;
            ip->damage_team             =       wp->team;
            ip->damage_port             =       wp->player;
            ip->damage_player_number    =       wp->player_number;
            ip->damage_handicap         =       wp->handicap;
            ip->damage_display_mode     =       wp->display_mode;
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
void itManager_SearchFighterHit(GObj *item_gobj) // Check fighters for hit detection
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
        fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

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
                            itManager_UpdateDamageStatFighter(fp, &fp->fighter_hit[i], ip, it_hurt, fighter_gobj, item_gobj);
                        }
                    }
                }
            }
            next_gobj:
            fighter_gobj = fighter_gobj->group_gobj_next;
        }
    }
}

// 0x8017088C
void itManager_SearchItemHit(GObj *this_gobj) // Check other items for hit detection
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
        other_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Item];

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
                                            itManager_UpdateAttackStatItem(other_ip, other_hit, i, this_ip, this_hit, j, other_gobj, this_gobj);

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
                        itManager_UpdateDamageStatItem(other_ip, other_hit, i, this_ip, it_hurt, other_gobj, this_gobj);

                        goto next_gobj;
                    }
                }
            }
        next_gobj:
            other_gobj = other_gobj->group_gobj_next;
        }
    }
}

// 0x80170C84
void itManager_SearchWeaponHit(GObj *item_gobj) // Check weapons for hit detection
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
        weapon_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Weapon];

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
                    
                    if ((it_hit->setoff) && (wp_hit->setoff) && (ip->owner_gobj != wp->owner_gobj))
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
                                            itManager_UpdateAttackStatWeapon(wp, wp_hit, i, ip, it_hit, j, weapon_gobj, item_gobj);

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
                            itManager_UpdateDamageStatWeapon(ip, wp_hit, i, ip, it_hurt, weapon_gobj, item_gobj);

                            break;
                        }
                    }
                }
            }
        next_gobj:
            weapon_gobj = weapon_gobj->group_gobj_next;
        }
    }
}

// Copy pasted everything from Item VS Item hit collision logic and it immediately matched 82% of Item VS Weapon, even the stack; apparently in a much similar fashion to HAL

// 0x80171080
void itManager_ProcSearchHitAll(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (!(ip->is_hold))
    {
        itManager_SearchFighterHit(item_gobj);
        itManager_SearchItemHit(item_gobj);
        itManager_SearchWeaponHit(item_gobj);
    }
}

// 0x801710C4
void itManager_ProcUpdateHitCollisions(GObj *item_gobj)
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
                itMain_DestroyItem(item_gobj);
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
                itMain_DestroyItem(item_gobj);
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
                        itMain_DestroyItem(item_gobj);
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
                itMain_DestroyItem(item_gobj);
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
                itMain_DestroyItem(item_gobj);
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
                itMain_DestroyItem(item_gobj);
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
void itManager_UpdateColAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ftMain_UpdateColAnim(&ip->colanim, item_gobj, FALSE, FALSE) != FALSE)
    {
        itMain_ResetColAnim(item_gobj);
    }
}

// 0x801713F4
void itManager_UpdateSpin(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->rotate.vec.f.z += ip->rotate_step;
}