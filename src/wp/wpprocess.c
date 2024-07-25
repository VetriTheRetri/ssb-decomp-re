#include <wp/weapon.h>
#include <it/item.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <gm/battle.h>

extern void func_8000DF34_EB34(GObj*);
extern void wpCollision_GetWeaponHitImpactPosition();

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80165ED0
void wpProcessUpdateHitOffsets(DObj *dobj, Vec3f *offset)
{
    offset->x *= dobj->scale.vec.f.x;
    offset->y *= dobj->scale.vec.f.y;

    lbVector_Vec3fGetEulerRotation(offset, MTVECTOR_AXIS_Z, dobj->rotate.vec.f.z);

    offset->x += dobj->translate.vec.f.x;
    offset->y += dobj->translate.vec.f.y;
    offset->z += dobj->translate.vec.f.z;
}

// 0x80165F60
void wpProcessUpdateHitPositions(GObj *weapon_gobj) // Update hitbox(es?)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj = DObjGetStruct(weapon_gobj);
    s32 i;

    for (i = 0; i < wp->weapon_hit.hitbox_count; i++)
    {
        wpHitPositions *positions = &wp->weapon_hit.hit_positions[i];
        Vec3f *offset = &wp->weapon_hit.offset[i];
        Vec3f *translate = &dobj->translate.vec.f;

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
            else wpProcessUpdateHitOffsets(dobj, &positions->pos);
            
            wp->weapon_hit.update_state = gmHitCollision_UpdateState_Transfer;

            positions->unk_wphitpos_0x18 = FALSE;
            positions->unk_wphitpos_0x5C = 0;
            break;

        case gmHitCollision_UpdateState_Transfer:
            wp->weapon_hit.update_state = gmHitCollision_UpdateState_Interpolate;

            /* fallthrough */

        case gmHitCollision_UpdateState_Interpolate:
            positions->pos_prev = positions->pos;

            positions->pos = *offset;

            if ((offset->x == 0.0F) && (offset->y == 0.0F) && (offset->z == 0.0F))
            {
                positions->pos.x += translate->x;
                positions->pos.y += translate->y;
                positions->pos.z += translate->z;
            }
            else wpProcessUpdateHitOffsets(dobj, &positions->pos);
            
            positions->unk_wphitpos_0x18 = FALSE;
            positions->unk_wphitpos_0x5C = 0;
            break;
        }
    }
}

// 0x801661E0
void wpProcessUpdateHitRecord(GObj *weapon_gobj) // Set hitbox victim array
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    gmHitRecord *targets;
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

                        targets->victim_flags.group_id = 7;
                    }
                }
            }
        }
    }
}

// 0x801662BC
void wpProcessProcWeaponMain(GObj *weapon_gobj) // Run item logic pass 1 (animation, physics, collision, despawn check)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *translate;

    if (!(wp->is_hitlag_weapon))
    {
        func_8000DF34_EB34(weapon_gobj);

        if (wp->proc_update != NULL)
        {
            if (wp->proc_update(weapon_gobj) != FALSE)
            {
                wpMainDestroyWeapon(weapon_gobj);
                return;
            }
        }
        translate = &DObjGetStruct(weapon_gobj)->translate.vec.f;

        wp->coll_data.pos_curr = *translate;

        translate->x += wp->phys_info.vel_air.x;
        translate->y += wp->phys_info.vel_air.y;
        translate->z += wp->phys_info.vel_air.z;

        wp->coll_data.pos_correct.x = translate->x - wp->coll_data.pos_curr.x;
        wp->coll_data.pos_correct.y = translate->y - wp->coll_data.pos_curr.y;
        wp->coll_data.pos_correct.z = translate->z - wp->coll_data.pos_curr.z;

        if ((wp->ground_or_air == nMPKineticsGround) && (wp->coll_data.ground_line_id != -1) && (wp->coll_data.ground_line_id != -2) && (mpCollisionCheckExistLineID(wp->coll_data.ground_line_id) != FALSE))
        {
            mpCollisionGetSpeedLineID(wp->coll_data.ground_line_id, &wp->coll_data.pos_speed);

            translate->x += wp->coll_data.pos_speed.x;
            translate->y += wp->coll_data.pos_speed.y;
            translate->z += wp->coll_data.pos_speed.z;
        }
        else wp->coll_data.pos_speed.x = wp->coll_data.pos_speed.y = wp->coll_data.pos_speed.z = 0.0F;

        if 
        (
            (translate->y < gMPGroundData->blastzone_bottom)  || 
            (translate->x > gMPGroundData->blastzone_right)   || 
            (translate->x < gMPGroundData->blastzone_left)    || 
            (translate->y > gMPGroundData->blastzone_top)     || 
            (translate->z < -20000.0F)                      ||
            (translate->z > 20000.0F)
        )
        {
            if ((wp->proc_dead == NULL) || (wp->proc_dead(weapon_gobj) != FALSE))
            {
                wpMainDestroyWeapon(weapon_gobj);
                return;
            }
        }
        if (wp->proc_map != NULL)
        {
            wp->coll_data.coll_mask_prev = wp->coll_data.coll_mask_curr;
            wp->coll_data.coll_mask_curr = 0;
            wp->coll_data.is_coll_end = FALSE;
            wp->coll_data.coll_mask_stat = 0;
            wp->coll_data.coll_mask_unk = 0;

            if (wp->proc_map(weapon_gobj) != FALSE)
            {
                wpMainDestroyWeapon(weapon_gobj);
                return;
            }
        }
        wpProcessUpdateHitPositions(weapon_gobj);
        wpProcessUpdateHitRecord(weapon_gobj);
    }
}

// 0x80166594
void wpProcessSetHitInteractStats(wpHitbox *wp_hit, GObj *victim_gobj, s32 hitbox_type, u32 group_id)
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
                wp_hit->hit_targets[i].victim_flags.group_id = group_id;
                break;

            case gmHitCollision_Type_HurtRehit:
                wp_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
                wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
                break;

            default: 
                break;
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
            wp_hit->hit_targets[i].victim_flags.group_id = group_id;
            break;

        case gmHitCollision_Type_HurtRehit:
            wp_hit->hit_targets[i].victim_flags.is_interact_hurt = TRUE;
            wp_hit->hit_targets[i].victim_flags.timer_rehit = WEAPON_REHIT_TIME_DEFAULT;
            break;

        default: 
            break;
        }
    }
}

// 0x8016679C
void wpProcessUpdateHitInteractStatsGroupID(wpStruct *this_wp, wpHitbox *wp_hit, GObj *target_gobj, s32 hitbox_type, u32 interact_mask)
{
    if (this_wp->group_id != 0)
    {
        GObj *victim_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

        while (victim_gobj != NULL)
        {
            wpStruct *victim_wp = wpGetStruct(victim_gobj);

            if (victim_wp->group_id == this_wp->group_id)
            {
                wpProcessSetHitInteractStats(&victim_wp->weapon_hit, target_gobj, hitbox_type, interact_mask);
            }
            victim_gobj = victim_gobj->link_next;
        }
    }
    else wpProcessSetHitInteractStats(wp_hit, target_gobj, hitbox_type, interact_mask);
}

// 0x80166854
void wpProcessUpdateAttackStatWeapon(wpStruct *this_wp, wpHitbox *this_hit, s32 this_hit_id, wpStruct *victim_wp, wpHitbox *victim_hit, s32 victim_hit_id, GObj *this_gobj, GObj *victim_gobj)
{
    s32 this_hit_damage = wpMainGetStaledDamageOutput(this_wp);
    s32 victim_hit_damage = wpMainGetStaledDamageOutput(victim_wp);
    Vec3f pos;
    s32 priority_high;

    wpCollision_GetWeaponHitImpactPosition(&pos, victim_hit, victim_hit_id, this_hit, this_hit_id);

    priority_high = this_hit->priority;

    if (victim_hit->priority <= priority_high)
    {
        wpProcessUpdateHitInteractStatsGroupID(victim_wp, victim_hit, this_gobj, gmHitCollision_Type_Hit, 0);

        if (victim_wp->hit_attack_damage < victim_hit_damage)
        {
            victim_wp->hit_attack_damage = victim_hit_damage;
        }
        efManagerSetOffMakeEffect(&pos, victim_hit_damage);
    }
    priority_high = victim_hit->priority;

    if (this_hit->priority <= priority_high)
    {
        wpProcessUpdateHitInteractStatsGroupID(this_wp, this_hit, victim_gobj, gmHitCollision_Type_Hit, 0);

        if (this_wp->hit_attack_damage < this_hit_damage)
        {
            this_wp->hit_attack_damage = this_hit_damage;
        }
        efManagerSetOffMakeEffect(&pos, this_hit_damage);
    }
}

// 0x80166954
void wpProcessProcSearchHitWeapon(GObj *this_gobj) // Scan for hitbox collision with other items
{
    GObj *other_gobj;
    wpStruct *this_wp, *other_wp;
    wpHitbox *other_hit, *this_hit;
    gmHitCollisionFlags these_flags, those_flags;
    s32 m, n, i, j;
    sb32 is_check_self;

    this_wp = wpGetStruct(this_gobj);
    this_hit = &this_wp->weapon_hit;

    if ((this_hit->can_setoff) && (this_hit->update_state != gmHitCollision_UpdateState_Disable) && (this_hit->interact_mask & GMHITCOLLISION_MASK_WEAPON))
    {
        other_gobj = gOMObjCommonLinks[GObj_LinkID_Weapon];

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

                if ((gBattleState->is_team_battle == TRUE) && (gBattleState->is_team_attack == FALSE) && (this_wp->team == other_wp->team)) goto next_gobj;
                
                if ((other_hit->update_state != gmHitCollision_UpdateState_Disable) && (other_hit->can_setoff))
                {
                    if (other_hit->interact_mask & GMHITCOLLISION_MASK_WEAPON)
                    {
                        those_flags.group_id = 7;

                        for (m = 0; m < ARRAY_COUNT(other_hit->hit_targets); m++)
                        {
                            if (this_gobj == other_hit->hit_targets[m].victim_gobj)
                            {
                                those_flags = other_hit->hit_targets[m].victim_flags;

                                break;
                            }
                        }
                        if (those_flags.group_id == 7)
                        {
                            these_flags.group_id = 7;

                            for (n = 0; n < ARRAY_COUNT(this_hit->hit_targets); n++)
                            {
                                if (other_gobj == this_hit->hit_targets[n].victim_gobj)
                                {
                                    these_flags = this_hit->hit_targets[n].victim_flags;

                                    break;
                                }
                            }
                            if (these_flags.group_id == 7)
                            {
                                for (i = 0; i < other_hit->hitbox_count; i++)
                                {
                                    for (j = 0; j < this_hit->hitbox_count; j++)
                                    {
                                        if (wpCollision_CheckWeaponHitWeaponHitIntersect(other_hit, i, this_hit, j) != FALSE)
                                        {
                                            wpProcessUpdateAttackStatWeapon(other_wp, other_hit, i, this_wp, this_hit, j, other_gobj, this_gobj);

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
            other_gobj = other_gobj->link_next;        
        }
    }
}

// 0x80166BE4
void wpProcessProcHitCollisions(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wp->hit_normal_damage != 0) || (wp->hit_refresh_damage != 0))
    {
        if (wp->proc_hit != NULL)
        {
            if (wp->proc_hit(weapon_gobj) != FALSE)
            {
                wpMainDestroyWeapon(weapon_gobj);
                return;
            }
        }
    }
    if (wp->hit_shield_damage != 0)
    {
        if ((wp->weapon_hit.can_hop) && (wp->ground_or_air == nMPKineticsAir))
        {
            if (wp->shield_collide_angle < WEAPON_HOP_ANGLE_DEFAULT)
            {
                wp->shield_collide_angle -= F_CST_DTOR32(90.0F); // HALF_PI32

                if (wp->shield_collide_angle < 0.0F)
                {
                    wp->shield_collide_angle = 0.0F;
                }
                if (wp->proc_hop != NULL)
                {
                    if (wp->proc_hop(weapon_gobj) != FALSE)
                    {
                        wpMainDestroyWeapon(weapon_gobj);
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
                wpMainDestroyWeapon(weapon_gobj);
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
                wpMainDestroyWeapon(weapon_gobj);
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
                wpMainDestroyWeapon(weapon_gobj);
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
                wpMainDestroyWeapon(weapon_gobj);
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
