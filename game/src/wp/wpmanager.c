#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <gr/ground.h>
#include <gm/gmmatch.h>
#include <it/item.h>

extern wpStruct *gpWeaponStructCurrent;
extern u32 gWeaponGroupIndex;
extern s32 gWeaponDisplayMode;

// 0x801654B0
void wpManager_AllocUserData(void)
{
    wpStruct *wp;
    s32 i;

    gpWeaponStructCurrent = wp = hal_alloc(sizeof(wpStruct) * WEAPON_ALLOC_MAX, 0x8);

    for (i = 0; i < (WEAPON_ALLOC_MAX - 1); i++)
    {
        wp[i].wp_alloc_next = &wp[i + 1];
    }
    if (wp != NULL)
    {
        wp[i].wp_alloc_next = NULL;
    }
    gWeaponGroupIndex = 1;
    gWeaponDisplayMode = dbObject_DisplayMode_Master;
}

// 0x80165558
wpStruct* wpManager_GetStructSetNextAlloc()
{
    wpStruct *next_weapon = gpWeaponStructCurrent;
    wpStruct *current_weapon;

    if (next_weapon == NULL)
    {
        return NULL;
    }
    current_weapon = next_weapon;

    gpWeaponStructCurrent = next_weapon->wp_alloc_next;

    return current_weapon;
}

// 0x80165588
void wpManager_SetPrevAlloc(wpStruct *wp)
{
    wp->wp_alloc_next = gpWeaponStructCurrent;

    gpWeaponStructCurrent = wp;
}

// 0x801655A0
u32 wpManager_GetGroupIndexInc(void)
{
    u32 group_id = gWeaponGroupIndex++;

    if (gWeaponGroupIndex == 0)
    {
        gWeaponGroupIndex++;
    }
    return group_id;
}

extern s32 D_ovl2_80131398;

// 0x801655C8
GObj* wpManager_MakeWeapon(GObj *spawn_gobj, wpCreateDesc *item_status_desc, Vec3f *spawn_pos, u32 flags)
{
    GObj *weapon_gobj;
    void (*cb)(GObj*);
    wpAttributes *attributes;
    wpStruct *wp;
    wpStruct *owner_wp;
    itStruct *ap;
    ftStruct *fp;
    s32 unused[8];

    wp = wpManager_GetStructSetNextAlloc(spawn_gobj);

    if (wp == NULL)
    {
        return NULL;
    }
    weapon_gobj = omMakeGObjCommon(0x3F4U, NULL, 5U, 0x80000000U);

    if (weapon_gobj == NULL)
    {
        wpManager_SetPrevAlloc(wp);
        return NULL;
    }
    attributes = *(uintptr_t*)item_status_desc->p_item + (intptr_t)item_status_desc->offset; // I hope this is correct?
    weapon_gobj->user_data = wp;
    wp->weapon_gobj = weapon_gobj;
    wp->wp_kind = item_status_desc->wp_kind;

    switch (flags & WEAPON_MASK_SPAWN_ALL)
    {
    case WEAPON_MASK_SPAWN_FIGHTER: // Items spawned by fighters
        fp = ftGetStruct(spawn_gobj);
        wp->owner_gobj = spawn_gobj;
        wp->team = fp->team;
        wp->player = fp->player;
        wp->handicap = fp->handicap;
        wp->player_number = fp->player_number;
        wp->lr = fp->lr;

        wp->display_mode = fp->display_mode;

        wp->weapon_hit.stale = gmCommon_DamageGetStaleMul(fp->player, fp->attack_id, fp->motion_count);
        wp->weapon_hit.attack_id = fp->attack_id;
        wp->weapon_hit.motion_count = fp->motion_count;
        wp->weapon_hit.stat_flags = fp->stat_flags;
        wp->weapon_hit.stat_count = fp->stat_count;
        break;

    case WEAPON_MASK_SPAWN_WEAPON: // Items spawned by other items
        owner_wp = wpGetStruct(spawn_gobj);
        wp->owner_gobj = owner_wp->owner_gobj;
        wp->team = owner_wp->team;
        wp->player = owner_wp->player;
        wp->handicap = owner_wp->handicap;
        wp->player_number = owner_wp->player_number;
        wp->lr = owner_wp->lr;

        wp->display_mode = owner_wp->display_mode;

        wp->weapon_hit.stale = owner_wp->weapon_hit.stale;
        wp->weapon_hit.attack_id = owner_wp->weapon_hit.attack_id;
        wp->weapon_hit.motion_count = owner_wp->weapon_hit.motion_count;
        wp->weapon_hit.stat_flags = owner_wp->weapon_hit.stat_flags;
        wp->weapon_hit.stat_count = owner_wp->weapon_hit.stat_count;
        break;

    case WEAPON_MASK_SPAWN_ITEM: // Items spawned by Pokémon
        ap = itGetStruct(spawn_gobj);
        wp->owner_gobj = ap->owner_gobj;
        wp->team = ap->team;
        wp->player = ap->player;
        wp->handicap = ap->handicap;
        wp->player_number = ap->player_number;
        wp->lr = ap->lr;

        wp->display_mode = ap->display_mode;

        wp->weapon_hit.stale = ap->item_hit.stale;
        wp->weapon_hit.attack_id = ap->item_hit.attack_id;
        wp->weapon_hit.motion_count = ap->item_hit.stat_count;
        wp->weapon_hit.stat_flags = ap->item_hit.stat_flags;
        wp->weapon_hit.stat_count = ap->item_hit.stat_count;
        break;

    default: // Items spawned independently 
    case WEAPON_MASK_SPAWN_GROUND:
        wp->owner_gobj = NULL;
        wp->team = WEAPON_TEAM_DEFAULT;
        wp->player = WEAPON_PORT_DEFAULT;
        wp->handicap = WEAPON_HANDICAP_DEFAULT;
        wp->player_number = 0;
        wp->lr = RIGHT;

        wp->display_mode = gWeaponDisplayMode;

        wp->weapon_hit.attack_id = ftMotion_AttackIndex_None;
        wp->weapon_hit.stale = WEAPON_STALE_DEFAULT;
        wp->weapon_hit.motion_count = gmCommon_GetMotionCountInc();
        wp->weapon_hit.stat_flags.attack_group_id = ftStatus_AttackIndex_None;
        wp->weapon_hit.stat_flags.is_smash_attack = wp->weapon_hit.stat_flags.is_ground_or_air = wp->weapon_hit.stat_flags.is_special_attack = FALSE;
        wp->weapon_hit.stat_count = gmCommon_GetStatUpdateCountInc();
        break;
    }
    wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;

    wp->phys_info.vel_air.z = 0.0F;
    wp->phys_info.vel_air.y = 0.0F;
    wp->phys_info.vel_air.x = 0.0F;

    wp->phys_info.vel_ground = 0.0F;

    wp->weapon_hit.damage = attributes->damage;

    wp->weapon_hit.element = attributes->element;

    wp->weapon_hit.offset[0].x = attributes->offset[0].x;
    wp->weapon_hit.offset[0].y = attributes->offset[0].y;
    wp->weapon_hit.offset[0].z = attributes->offset[0].z;
    wp->weapon_hit.offset[1].x = attributes->offset[1].x;
    wp->weapon_hit.offset[1].y = attributes->offset[1].y;
    wp->weapon_hit.offset[1].z = attributes->offset[1].z;

    wp->weapon_hit.size = attributes->size * 0.5F;

    wp->weapon_hit.angle = attributes->angle;

    wp->weapon_hit.knockback_scale = attributes->knockback_scale;
    wp->weapon_hit.knockback_weight = attributes->knockback_weight;
    wp->weapon_hit.knockback_base = attributes->knockback_base;

    wp->weapon_hit.rebound = attributes->rebound;
    wp->weapon_hit.shield_damage = attributes->shield_damage;

    wp->weapon_hit.hit_sfx = attributes->sfx;

    wp->weapon_hit.priority = attributes->priority;
    wp->weapon_hit.can_rehit_item = attributes->can_rehit_item;
    wp->weapon_hit.can_rehit_fighter = attributes->can_rehit_fighter;

    wp->weapon_hit.can_rehit_shield = FALSE;

    wp->weapon_hit.can_hop = attributes->can_hop;
    wp->weapon_hit.can_reflect = attributes->can_reflect;
    wp->weapon_hit.can_absorb = attributes->can_absorb;

    wp->weapon_hit.noheal = FALSE;

    wp->weapon_hit.can_shield = attributes->can_shield;
    wp->weapon_hit.hitbox_count = attributes->hitbox_count;

    wp->weapon_hit.interact_mask = GMHITCOLLISION_MASK_ALL;

    wpMain_ClearHitRecord(wp);

    wp->hit_normal_damage = 0;
    wp->hit_refresh_damage = 0;
    wp->hit_attack_damage = 0;
    wp->hit_shield_damage = 0;
    wp->reflect_gobj = NULL;
    wp->absorb_gobj = NULL;

    wp->is_hitlag_victim = FALSE;
    wp->is_hitlag_item = FALSE;
    wp->is_camera_follow = FALSE;

    wp->group_id = 0;

    wp->is_static_damage = FALSE;

    wp->p_sfx = NULL;
    wp->sfx_id = 0;

    wp->shield_collide_angle = 0.0F;

    wp->shield_collide_vec.x = wp->shield_collide_vec.y = wp->shield_collide_vec.z = 0.0F;

    if (item_status_desc->unk_0x0 & 1)
    {
        func_8000F590(weapon_gobj, attributes->unk_0x0, NULL, item_status_desc->unk_0x10, item_status_desc->unk_0x11, item_status_desc->unk_0x12);

        cb = (item_status_desc->unk_0x0 & 2) ? func_ovl3_8016763C : func_ovl3_80167618;
    }
    else
    {
        func_ovl0_800C89BC(func_800092D0(weapon_gobj, attributes->unk_0x0), item_status_desc->unk_0x10, item_status_desc->unk_0x11, item_status_desc->unk_0x12);

        cb = (item_status_desc->unk_0x0 & 2) ? func_ovl3_801675F4 : func_ovl3_801675D0;
    }
    func_80009DF4(weapon_gobj, cb, 0xE, 0x80000000, -1);

    if (attributes->mobj != NULL)
    {
        func_8000F8F4(weapon_gobj, attributes->mobj);
    }

    if ((attributes->anim_joint != NULL) || (attributes->matanim_joint != NULL))
    {
        func_8000BED8(weapon_gobj, attributes->anim_joint, attributes->matanim_joint, 0.0F);
    }
    wp->coll_data.p_translate = &DObjGetStruct(weapon_gobj)->translate;
    wp->coll_data.p_lr = &wp->lr;

    wp->coll_data.object_coll.top = attributes->objectcoll_top;
    wp->coll_data.object_coll.center = attributes->objectcoll_center;
    wp->coll_data.object_coll.bottom = attributes->objectcoll_bottom;
    wp->coll_data.object_coll.width = attributes->objectcoll_width;
    wp->coll_data.p_object_coll = &wp->coll_data.object_coll;

    wp->coll_data.ignore_line_id = -1;

    wp->coll_data.ground_line_id = -1;
    wp->coll_data.ceil_line_id = -1;
    wp->coll_data.rwall_line_id = -1;
    wp->coll_data.lwall_line_id = -1;

    wp->coll_data.wall_flag = D_ovl2_80131398;
    wp->coll_data.coll_mask = 0;

    wp->coll_data.vel_push.x = 0.0F;
    wp->coll_data.vel_push.y = 0.0F;
    wp->coll_data.vel_push.z = 0.0F;

    omAddGObjCommonProc(weapon_gobj, wpManager_ProcWeaponMain, 1, 3);
    omAddGObjCommonProc(weapon_gobj, wpManager_ProcSearchHitWeapon, 1, 1);
    omAddGObjCommonProc(weapon_gobj, wpManager_ProcHitCollisions, 1, 0);

    wp->proc_update = item_status_desc->proc_update;
    wp->proc_map = item_status_desc->proc_map;
    wp->proc_hit = item_status_desc->proc_hit;
    wp->proc_shield = item_status_desc->proc_shield;
    wp->proc_hop = item_status_desc->proc_hop;
    wp->proc_setoff = item_status_desc->proc_setoff;
    wp->proc_reflector = item_status_desc->proc_reflector;
    wp->proc_absorb = item_status_desc->proc_absorb;
    wp->proc_dead = NULL;

    wp->coll_data.pos_curr = DObjGetStruct(weapon_gobj)->translate = *spawn_pos;

    if (flags & WEAPON_FLAG_PROJECT)
    {
        switch (flags & WEAPON_MASK_SPAWN_ALL)
        {
        default:
        case WEAPON_MASK_SPAWN_GROUND:
            break;

        case WEAPON_MASK_SPAWN_FIGHTER:
            func_ovl2_800DF09C(weapon_gobj, ftGetStruct(spawn_gobj)->coll_data.p_translate, &ftGetStruct(spawn_gobj)->coll_data);
            break;

        case WEAPON_MASK_SPAWN_WEAPON:
            func_ovl2_800DF09C(weapon_gobj, wpGetStruct(spawn_gobj)->coll_data.p_translate, &wpGetStruct(spawn_gobj)->coll_data);
            break;

        case WEAPON_MASK_SPAWN_ITEM:
            func_ovl2_800DF09C(weapon_gobj, itGetStruct(spawn_gobj)->coll_data.p_translate, &itGetStruct(spawn_gobj)->coll_data);
            break;
        }
    }
    wp->ground_or_air = GA_Air;

    wpManager_UpdateHitPositions(weapon_gobj);

    return weapon_gobj;
}

// 0x80165ED0
void wpManager_UpdateWeaponVectors(DObj *joint, Vec3f *vec)
{
    vec->x *= joint->scale.x;
    vec->y *= joint->scale.y;

    vec3_get_euler_rotation(vec, 4, joint->rotate.z);

    vec->x += joint->translate.x;
    vec->y += joint->translate.y;
    vec->z += joint->translate.z;
}

// 0x80165F60
void wpManager_UpdateHitPositions(GObj *weapon_gobj) // Update hitbox(es?)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj);
    s32 i;

    for (i = 0; i < wp->weapon_hit.hitbox_count; i++)
    {
        wpHitPositions *positions = &wp->weapon_hit.hit_positions[i];

        Vec3f *offset = &wp->weapon_hit.offset[i];

        Vec3f *translate = &joint->translate;

        switch (wp->weapon_hit.update_state)
        {
        case gmHitCollision_UpdateState_Disable:
            break;

        case gmHitCollision_UpdateState_New:
            positions->pos = *offset;

            if ((offset->x == 0.0F) && (offset->y == 0.0F) && (offset->z == 0.0F))
            {
                positions->pos.x += translate->x;
                positions->pos.y += translate->y;
                positions->pos.z += translate->z;
            }
            else wpManager_UpdateWeaponVectors(joint, &positions->pos);
            
            wp->weapon_hit.update_state = gmHitCollision_UpdateState_Transfer;

            positions->unused1 = 0;
            positions->unused2 = 0;
            break;

        case gmHitCollision_UpdateState_Transfer:
            wp->weapon_hit.update_state = gmHitCollision_UpdateState_Interpolate;

        case gmHitCollision_UpdateState_Interpolate:
            positions->pos_prev = positions->pos;

            positions->pos = *offset;

            if ((offset->x == 0.0F) && (offset->y == 0.0F) && (offset->z == 0.0F))
            {
                positions->pos.x += translate->x;
                positions->pos.y += translate->y;
                positions->pos.z += translate->z;
            }
            else wpManager_UpdateWeaponVectors(joint, &positions->pos);
            
            positions->unused1 = 0;
            positions->unused2 = 0;
            break;
        }
    }
}

// 0x801661E0
void wpManager_UpdateHitRecord(GObj *weapon_gobj) // Set hitbox victim array
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    gmHitCollisionRecord *targets;
    wpHitbox *wp_hit;
    s32 i;

    wp_hit = &wp->weapon_hit;

    if (wp_hit->update_state != gmHitCollision_UpdateState_Disable)
    {
        for (i = 0; i < ARRAY_COUNT(wp->weapon_hit.hit_targets); i++)
        {
            targets = &wp_hit->hit_targets[i];

            if (targets->victim_gobj != NULL)
            {
                if (targets->victim_flags.timer_rehit > 0)
                {
                    targets->victim_flags.timer_rehit--;

                    if (targets->victim_flags.timer_rehit <= 0)
                    {
                        targets->victim_gobj = NULL;

                        targets->victim_flags.is_interact_hurt = targets->victim_flags.is_interact_shield = targets->victim_flags.is_interact_reflect = targets->victim_flags.is_interact_absorb = FALSE;

                        targets->victim_flags.interact_mask = GMHITCOLLISION_MASK_ALL;
                    }
                }
            }
        }
    }
}

// 0x801662BC
void wpManager_ProcWeaponMain(GObj *weapon_gobj) // Run item logic pass 1 (animation, physics, collision, despawn check)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *translate;
    DObj *joint;

    if (!(wp->is_hitlag_item))
    {
        func_8000DF34(weapon_gobj);

        if (wp->proc_update != NULL)
        {
            if (wp->proc_update(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
        joint = DObjGetStruct(weapon_gobj);

        translate = &DObjGetStruct(weapon_gobj)->translate;

        wp->coll_data.pos_curr = *translate;

        translate->x += wp->phys_info.vel_air.x;
        translate->y += wp->phys_info.vel_air.y;
        translate->z += wp->phys_info.vel_air.z;

        wp->coll_data.pos_prev.x = translate->x - wp->coll_data.pos_curr.x;
        wp->coll_data.pos_prev.y = translate->y - wp->coll_data.pos_curr.y;
        wp->coll_data.pos_prev.z = translate->z - wp->coll_data.pos_curr.z;

        if ((wp->ground_or_air == GA_Ground) && (wp->coll_data.ground_line_id != -1) && (wp->coll_data.ground_line_id != -2) && (func_ovl2_800FC67C(wp->coll_data.ground_line_id) != FALSE))
        {
            func_ovl2_800FA7B8(wp->coll_data.ground_line_id, &wp->coll_data.pos_correct);

            translate->x += wp->coll_data.pos_correct.x;
            translate->y += wp->coll_data.pos_correct.y;
            translate->z += wp->coll_data.pos_correct.z;
        }
        else
        {
            wp->coll_data.pos_correct.z = 0.0F;
            wp->coll_data.pos_correct.y = 0.0F;
            wp->coll_data.pos_correct.x = 0.0F;
        }

        if ((translate->y < gpGroundInfo->blastzone_bottom) || (gpGroundInfo->blastzone_right < translate->x) || (translate->x < gpGroundInfo->blastzone_left) || (gpGroundInfo->blastzone_top < translate->y) || (translate->z < -20000.0F) || (20000.0F < translate->z))
        {
            if ((wp->proc_dead == NULL) || (wp->proc_dead(weapon_gobj) != FALSE))
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }

        if (wp->proc_map != NULL)
        {
            wp->coll_data.coll_mask_prev = wp->coll_data.coll_mask;
            wp->coll_data.coll_mask = 0;
            wp->coll_data.unk_0x64 = 0;
            wp->coll_data.coll_type = 0;
            wp->coll_data.unk_0x58 = 0;

            if (wp->proc_map(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
        wpManager_UpdateHitPositions(weapon_gobj);
        wpManager_UpdateHitRecord(weapon_gobj);
    }
}

// 0x80166594
void wpManager_SetHitVictimInteractStats(wpHitbox *wp_hit, GObj *victim_gobj, s32 hitbox_type, u32 interact_mask)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(wp_hit->hit_targets); i++)
    {
        if (victim_gobj == wp_hit->hit_targets[i].victim_gobj) // Run this if the victim we're checking has already been hit
        {
            switch (hitbox_type)
            {
            case gmHitCollision_Type_Hurt:
                wp_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
                break;

            case gmHitCollision_Type_Shield:
                wp_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
                break;

            case gmHitCollision_Type_ShieldRehit:
                wp_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
                wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
                break;

            case gmHitCollision_Type_Reflect:
                wp_hit->hit_targets[i].victim_flags.is_interact_reflect = TRUE;
                wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
                break;

            case gmHitCollision_Type_Absorb:
                wp_hit->hit_targets[i].victim_flags.is_interact_absorb = TRUE;
                break;

            case gmHitCollision_Type_Hit:
                wp_hit->hit_targets[i].victim_flags.interact_mask = interact_mask;
                break;

            case gmHitCollision_Type_HurtRehit:
                wp_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
                wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
                break;

            default: break;
            }
            break;
        }
    }
    if (i == ARRAY_COUNT(wp_hit->hit_targets)) // Check if all victim slots have been filled
    {
        for (i = 0; i < ARRAY_COUNT(wp_hit->hit_targets); i++) // Reset hit count and increment until there is an empty slot
        {
            if (wp_hit->hit_targets[i].victim_gobj == NULL) break;
        }

        if (i == ARRAY_COUNT(wp_hit->hit_targets)) i = 0; // Reset hit count again if all victim slots are full

        wp_hit->hit_targets[i].victim_gobj = victim_gobj; // Store victim's pointer to slot

        switch (hitbox_type)
        {
        case gmHitCollision_Type_Hurt:
            wp_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
            break;

        case gmHitCollision_Type_Shield:
            wp_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
            break;

        case gmHitCollision_Type_ShieldRehit:
            wp_hit->hit_targets[i].victim_flags.is_interact_shield = TRUE;
            wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
            break;

        case gmHitCollision_Type_Reflect:
            wp_hit->hit_targets[i].victim_flags.is_interact_reflect = TRUE;
            wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
            break;

        case gmHitCollision_Type_Absorb:
            wp_hit->hit_targets[i].victim_flags.is_interact_absorb = TRUE;
            break;

        case gmHitCollision_Type_Hit:
            wp_hit->hit_targets[i].victim_flags.interact_mask = interact_mask;
            break;

        case gmHitCollision_Type_HurtRehit:
            wp_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
            wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
            break;

        default: break;
        }
    }
}

void func_ovl3_8016679C(wpStruct *this_wp, wpHitbox *wp_hit, GObj *target_gobj, s32 hitbox_type, u32 interact_mask)
{
    if (this_wp->group_id != 0)
    {
        GObj *victim_gobj = gOMObjCommonLinks[gOMObjLinkIndexWeapon];

        while (victim_gobj != NULL)
        {
            wpStruct *victim_wp = wpGetStruct(victim_gobj);

            if (victim_wp->group_id == this_wp->group_id)
            {
                wpManager_SetHitVictimInteractStats(&victim_wp->weapon_hit, target_gobj, hitbox_type, interact_mask);
            }
            victim_gobj = victim_gobj->group_gobj_next;
        }
    }
    else wpManager_SetHitVictimInteractStats(wp_hit, target_gobj, hitbox_type, interact_mask);
}

// 0x80166854
void wpManager_UpdateAttackStatWeapon(wpStruct *this_wp, wpHitbox *this_hit, s32 this_hit_id, wpStruct *victim_wp, wpHitbox *victim_hit, s32 victim_hit_id, GObj *this_gobj, GObj *victim_gobj)
{
    s32 this_hit_damage = wpMain_GetDamageOutput(this_wp);
    s32 victim_hit_damage = wpMain_GetDamageOutput(victim_wp);
    Vec3f sp2C;
    s32 priority_high;

    func_ovl2_800F0C94(&sp2C, victim_hit, victim_hit_id, this_hit, this_hit_id);

    priority_high = this_hit->priority;

    if (victim_hit->priority <= priority_high)
    {
        func_ovl3_8016679C(victim_wp, victim_hit, this_gobj, gmHitCollision_Type_Hit, 0);

        if (victim_wp->hit_attack_damage < victim_hit_damage)
        {
            victim_wp->hit_attack_damage = victim_hit_damage;
        }
        efParticle_DamageShieldImpact_MakeEffect(&sp2C, victim_hit_damage);
    }
    priority_high = victim_hit->priority;

    if (this_hit_priority <= priority_high)
    {
        func_ovl3_8016679C(this_wp, this_hit, victim_gobj, gmHitCollision_Type_Hit, 0);

        if (this_wp->hit_attack_damage < this_hit_damage)
        {
            this_wp->hit_attack_damage = this_hit_damage;
        }
        efParticle_DamageShieldImpact_MakeEffect(&sp2C, this_hit_damage);
    }
}

// 0x80166954
void wpManager_ProcSearchHitWeapon(GObj *this_gobj) // Scan for hitbox collision with other items
{
    GObj *other_gobj;
    wpStruct *this_wp, *other_wp;
    wpHitbox *other_hit, *this_hit;
    gmHitCollisionFlags these_flags, those_flags;
    s32 m, n, i, j;
    bool32 is_check_self;

    this_wp = wpGetStruct(this_gobj);
    this_hit = &this_wp->weapon_hit;

    if ((this_hit->rebound) && (this_hit->update_state != gmHitCollision_UpdateState_Disable) && (this_hit->interact_mask & GMHITCOLLISION_MASK_WEAPON))
    {
        other_gobj = gOMObjCommonLinks[gOMObjLinkIndexWeapon];

        is_check_self = FALSE;

        while (other_gobj != NULL)
        {
            other_wp = wpGetStruct(other_gobj);
            other_hit = &other_wp->weapon_hit;

            if (other_gobj == this_gobj)
            {
                is_check_self = TRUE; // Not really sure what to name this
            }
            else if (is_check_self != FALSE)
            {
                if(this_wp->owner_gobj == other_wp->owner_gobj) goto next_gobj;

                if ((gpBattleState->is_team_battle == TRUE) && (gpBattleState->is_team_attack == FALSE) && (this_wp->team == other_wp->team)) goto next_check;
                
                if ((other_hit->update_state != gmHitCollision_UpdateState_Disable) && (other_hit->rebound))
                {
                    if (other_hit->interact_mask & GMHITCOLLISION_MASK_WEAPON)
                    {
                        those_flags.interact_mask = GMHITCOLLISION_MASK_ALL;

                        for (m = 0; m < ARRAY_COUNT(other_hit->hit_targets); m++)
                        {
                            if (this_gobj == other_hit->hit_targets[m].victim_gobj)
                            {
                                those_flags = other_hit->hit_targets[m].victim_flags;

                                break;
                            }
                        }

                        if (those_flags.interact_mask == GMHITCOLLISION_MASK_ALL)
                        {
                            these_flags.interact_mask = GMHITCOLLISION_MASK_ALL;

                            for (n = 0; n < ARRAY_COUNT(this_hit->hit_targets); n++)
                            {
                                if (other_gobj == this_hit->hit_targets[n].victim_gobj)
                                {
                                    these_flags = this_hit->hit_targets[n].victim_flags;

                                    break;
                                }
                            }
                            if (these_flags.interact_mask == GMHITCOLLISION_MASK_ALL)
                            {
                                for (i = 0; i < other_hit->hitbox_count; i++)
                                {
                                    for (j = 0; j < this_hit->hitbox_count; j++)
                                    {
                                        if (func_ovl2_800F007C(other_hit, i, this_hit, j) != FALSE)
                                        {
                                            wpManager_UpdateAttackStatWeapon(other_wp, other_hit, i, this_wp, this_hit, j, other_gobj, this_gobj);

                                            goto next_gobj;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        next_gobj: 
            other_gobj = other_gobj->group_gobj_next;        
        }
    }
}

// 0x80166BE4
void wpManager_ProcHitCollisions(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wp->hit_normal_damage != 0) || (wp->hit_refresh_damage != 0)) // 0x238 = hit article damage?
    {
        if (wp->proc_hit != NULL)
        {
            if (wp->proc_hit(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
    }
    if (wp->hit_shield_damage != 0)
    {
        if ((wp->weapon_hit.can_hop) && (wp->ground_or_air == GA_Air))
        {
            if (wp->shield_collide_angle < WEAPON_HOP_ANGLE_DEFAULT)
            {
                wp->shield_collide_angle -= F_DEG_TO_RAD(90.0F); // HALF_PI32

                if (wp->shield_collide_angle < 0.0F)
                {
                    wp->shield_collide_angle = 0.0F;
                }
                if (wp->proc_hop != NULL)
                {
                    if (wp->proc_hop(weapon_gobj) != FALSE)
                    {
                        wpMain_DestroyWeapon(weapon_gobj);
                        return;
                    }
                }
                goto next_check;
            }
        }
        if (wp->proc_shield != NULL)
        {
            if (wp->proc_shield(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
    }
next_check:
    if (wp->hit_attack_damage != 0)
    {
        if (wp->proc_setoff != NULL)
        {
            if (wp->proc_setoff(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
    }

    if (wp->reflect_gobj != NULL)
    {
        ftStruct *fp;

        wp->owner_gobj = wp->reflect_gobj;

        fp = ftGetStruct(wp->reflect_gobj);

        wp->team = fp->team;
        wp->player = fp->player;
        wp->display_mode = fp->display_mode;
        wp->player_number = fp->player_number;
        wp->handicap = fp->handicap;
        wp->weapon_hit.stat_flags = wp->reflect_stat_flags;
        wp->weapon_hit.stat_count = wp->reflect_stat_count;

        if (wp->proc_reflector != NULL)
        {
            if (wp->proc_reflector(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
        if (!(wp->is_static_damage))
        {
            wp->weapon_hit.damage = (wp->weapon_hit.damage * WEAPON_REFLECT_MUL_DEFAULT) + WEAPON_REFLECT_ADD_DEFAULT;

            if (wp->weapon_hit.damage > WEAPON_REFLECT_TIME_DEFAULT)
            {
                wp->weapon_hit.damage = WEAPON_REFLECT_TIME_DEFAULT;
            }
        }
    }

    if (wp->absorb_gobj != NULL)
    {
        if (wp->proc_absorb != NULL)
        {
            if (wp->proc_absorb(weapon_gobj) != FALSE)
            {
                wpMain_DestroyWeapon(weapon_gobj);
                return;
            }
        }
    }
    wp->hit_normal_damage = 0;
    wp->hit_refresh_damage = 0;
    wp->hit_attack_damage = 0;
    wp->hit_shield_damage = 0;
    wp->reflect_gobj = NULL;
}
