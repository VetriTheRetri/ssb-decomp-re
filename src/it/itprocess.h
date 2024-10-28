#ifndef _ITCOLLISION_H_
#define _ITCOLLISION_H_

#include "ittypes.h"
#include <wp/wptypes.h>
#include <ft/fttypes.h>

// Update positions of item hitboxes
void itProcessUpdateHitPositions(GObj* item_gobj);

// Update item's record of interacted targets (Decrement rehit timer if available, clear targets if timer reaches 0)
void itProcessUpdateHitRecord(GObj* item_gobj);

// Main item logic GObj process (animation, physics, collision, map_bound check)
void itProcessProcItemMain(GObj* item_gobj);

// Set type of interaction and record hit target when item's hitbox collides with another GObj
void itProcessSetHitInteractStats(ITAttackColl* it_atk_coll, GObj* victim_gobj, s32 atk_type, u32 interact_mask);

// Set stuff when item's hurtbox gets hit by a fighter
void itProcessUpdateDamageStatFighter(FTStruct* fp, FTAttackColl* ft_atk_coll, ITStruct* ip, ITDamageColl* it_dmgcoll,
									  GObj* fighter_gobj, GObj* item_gobj);

// Set stuff when item's hitbox collides with another item's hitbox
void itProcessUpdateAttackStatItem(ITStruct* this_ip, ITAttackColl* this_hit, s32 this_atk_id, ITStruct* victim_ip,
								   ITAttackColl* victim_hit, s32 victim_atk_id, GObj* this_gobj, GObj* victim_gobj);

// Set stuff when item's hitbox collides with a weapon's hitbox
void itProcessUpdateAttackStatWeapon(WPStruct* wp, WPAttackColl* wp_atk_coll, s32 wp_atk_coll_id, ITStruct* ip, ITAttackColl* it_atk_coll,
									 s32 it_atk_coll_id, GObj* weapon_gobj, GObj* item_gobj);

// Set stuff when item's hurtbox gets hit by another item's hitbox
void itProcessUpdateDamageStatItem(ITStruct* attack_ip, ITAttackColl* attack_it_atk_coll, s32 atk_id, ITStruct* defend_ip,
								   ITDamageColl* it_dmgcoll, GObj* attack_gobj, GObj* defend_gobj);

// Set  stuff when item's hurtbox gets hit by a weapon's hitbox
void itProcessUpdateDamageStatWeapon(WPStruct* wp, WPAttackColl* wp_atk_coll, s32 atk_id, ITStruct* ip, ITDamageColl* it_dmgcoll,
									 GObj* weapon_gobj, GObj* item_gobj);

// Search for collision with fighter hitbox
void itProcessSearchFighterHit(GObj* item_gobj);

// Search for collision with item hitbox
void itProcessSearchItemHit(GObj* this_gobj);

// Search for collision with weapon hitbox
void itProcessSearchWeaponHit(GObj* item_gobj);

// GObj process for searching hit collision with other entities
void itProcessProcSearchHitAll(GObj* item_gobj);

// GObj process for updating hit collision events
void itProcessProcHitCollisions(GObj* item_gobj);

#endif
