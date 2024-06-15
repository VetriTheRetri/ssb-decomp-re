#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

extern void itCollision_GetHurtImpactPosition();
extern void itCollision_GetItemHitImpactPosition();
extern void wpCollision_GetItemHitImpactPosition();
extern f32 ftCollision_GetDamageSlashRotation();
extern f32 gmCommonObject_DamageCalcKnockback(s32 percent_damage, s32 recent_damage, s32 hit_damage, s32 knockback_weight, s32 knockback_scale, s32 knockback_base, f32 weight, s32 attack_handicap, s32 defend_handicap);
extern s32 gmCommon_DamageCalcHitLag(s32, s32, f32);

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

    ftMainSetHitVictimInteractStats(fp, ft_hit->group_id, item_gobj, gmHitCollision_Type_Hurt, 0, FALSE);

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

    is_rehit = ((defend_ip->type == It_Type_Damage) && (attack_it_hit->can_rehit_item)) ? TRUE : FALSE;

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
                defend_ip->lr_damage = lr = (DObjGetStruct(defend_gobj)->translate.vec.f.x < DObjGetStruct(attack_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
            }
            else
            {
                lr = (attack_ip->phys_info.vel_air.x < 0) ? LR_Right : LR_Left;

                defend_ip->lr_damage = lr;
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
            knockback = gmCommonObject_DamageCalcKnockback(defend_ip->percent_damage, defend_ip->damage_queue, damage, attack_it_hit->knockback_weight, attack_it_hit->knockback_scale, attack_it_hit->knockback_base, 1.0F, attack_ip->handicap, defend_ip->handicap);

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
    func_800269C0_275C0(attack_it_hit->hit_sfx);
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

    is_rehit = ((ip->type == It_Type_Damage) && (wp_hit->can_rehit_item)) ? TRUE : FALSE;

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
                ip->lr_damage = lr = (DObjGetStruct(item_gobj)->translate.vec.f.x < DObjGetStruct(weapon_gobj)->translate.vec.f.x) ? LR_Right : LR_Left;
            }
            else
            {
                lr = (wp->phys_info.vel_air.x < 0) ? LR_Right : LR_Left;

                ip->lr_damage = lr;
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
    func_800269C0_275C0(wp_hit->hit_sfx);
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
            
            for (i = 0; i < ARRAY_COUNT(gFTMainIsHurtDetect); i++)
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
                            gFTMainIsHurtDetect[i] = TRUE;
                            k++;

                            continue;
                        }
                    }
                }
                gFTMainIsHurtDetect[i] = FALSE;
            }
            if (k != 0)
            {
                for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
                {
                    it_hurt = &ip->item_hurt;

                    if (gFTMainIsHurtDetect[i] != FALSE)
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

                if ((is_check_self != FALSE) && (this_hit->can_setoff) && (other_hit->can_setoff) && (this_ip->owner_gobj != other_ip->owner_gobj))
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
            wp_hit = &wp->weapon_hit;

            if ((ip->owner_gobj == wp->owner_gobj) && !(ip->is_damage_all)) goto next_gobj;

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
                    if ((those_flags.is_interact_hurt) || (those_flags.is_interact_shield) || (those_flags.group_id != 7)) goto next_gobj;
                    
                    if ((it_hit->can_setoff) && (wp_hit->can_setoff) && (ip->owner_gobj != wp->owner_gobj))
                    {
                        if ((gBattleState->is_team_battle != TRUE) || (gBattleState->is_team_attack != FALSE) || (ip->team != wp->team))
                        {
                            if (it_hit->update_state != gmHitCollision_UpdateState_Disable)
                            {
                                if(it_hit->interact_mask & GMHITCOLLISION_MASK_WEAPON)
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

                                    else for (i = 0; i < wp_hit->hitbox_count; i++)
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
                    }
                hurtbox_check:
                    for (i = 0; i < wp_hit->hitbox_count; i++) // ...it also flips you off if you DON'T reuse 'i' here
                    {
                        it_hurt = &ip->item_hurt;

                        if (ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None) break;

                        else if (it_hurt->hitstatus == gmHitCollision_HitStatus_Intangible) continue;

                        else if (itCollision_CheckWeaponHitItemHurtIntersect(wp_hit, i, it_hurt, item_gobj) != FALSE)
                        {
                            itManagerUpdateDamageStatWeapon(wp, wp_hit, i, ip, it_hurt, weapon_gobj, item_gobj);

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
                ip->shield_collide_angle -= F_DTOR32(90.0F); // HALF_PI32

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
