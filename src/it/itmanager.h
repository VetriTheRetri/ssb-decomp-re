#ifndef _ITMANAGER_H_
#define _ITMANAGER_H_

#include "ittypes.h"
#include <wp/wptypes.h>
#include <ft/fttypes.h>

// Allocate memory for item structs and initialize global item-related data
void itManagerInitItems();

// Get memory region for item struct and advance global region pointer
itStruct* itManagerGetItemSetNextAlloc();

// Roll back local and global item struct pointer by one unit
void itManagerSetPrevAlloc(itStruct* ip);

// Unknown, something to do with setting up item models?
void itManagerDObjSetup(GObj* gobj, DObjDesc* dobj_desc, DObj** p_ptr_dobj, u8 transform_kind);

// Create new item
GObj* itManagerMakeItem(GObj* spawn_gobj, itCreateDesc* item_desc, Vec3f* pos, Vec3f* vel, u32 flags);

// Create item and init spawn GFX + spin rotation if common item (indexes 0 - 19)
GObj* itManagerMakeItemSetupCommon(GObj* spawn_gobj, s32 index, Vec3f* pos, Vec3f* vel, u32 spawn_flags);

// Get current item user_data to see if != NULL
itStruct* itManagerGetAllocFree();

// Set wait timer for next item spawn
void itManagerSetItemSpawnWait();

// GObj process for hidden object that randomly spawns items - argument is unused
void itManagerMakeRandomItem(GObj* item_gobj);

// Set up item spawn positions?
GObj* itManagerMakeItemSpawnActor();

// Set up item spawn positions part 2?
void itManagerSetupContainerDrops();

// Set up global Pokémon spawn variables
void itManagerInitMonsterVars();

// Make immediate item with index
GObj* itManagerMakeItemIndex(GObj* spawn_gobj, s32 index, Vec3f* pos, Vec3f* vel, u32 flags);

// Update positions of item hitboxes
void itManagerUpdateHitPositions(GObj* item_gobj);

// Update item's record of interacted targets (Decrement rehit timer if available, clear targets if timer reaches 0)
void itManagerUpdateHitRecord(GObj* item_gobj);

// Main item logic GObj process (animation, physics, collision, blastzone check)
void itManagerProcItemMain(GObj* item_gobj);

// Set type of interaction and record hit target when item's hitbox collides with another GObj
void itManagerSetHitInteractStats(itHitbox* it_hit, GObj* victim_gobj, s32 hitbox_type, u32 interact_mask);

// Set stuff when item's hurtbox gets hit by a fighter
void itManagerUpdateDamageStatFighter(ftStruct* fp, ftHitbox* ft_hit, itStruct* ip, itHurtbox* it_hurt,
									  GObj* fighter_gobj, GObj* item_gobj);

// Set stuff when item's hitbox collides with another item's hitbox
void itManagerUpdateAttackStatItem(itStruct* this_ip, itHitbox* this_hit, s32 this_hit_id, itStruct* victim_ip,
								   itHitbox* victim_hit, s32 victim_hit_id, GObj* this_gobj, GObj* victim_gobj);

// Set stuff when item's hitbox collides with a weapon's hitbox
void itManagerUpdateAttackStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 wp_hit_id, itStruct* ip, itHitbox* it_hit,
									 s32 it_hit_id, GObj* weapon_gobj, GObj* item_gobj);

// Set stuff when item's hurtbox gets hit by another item's hitbox
void itManagerUpdateDamageStatItem(itStruct* attack_ip, itHitbox* attack_it_hit, s32 hitbox_id, itStruct* defend_ip,
								   itHurtbox* it_hurt, GObj* attack_gobj, GObj* defend_gobj);

// Set  stuff when item's hurtbox gets hit by a weapon's hitbox
void itManagerUpdateDamageStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, itStruct* ip, itHurtbox* it_hurt,
									 GObj* weapon_gobj, GObj* item_gobj);

// Search for collision with fighter hitbox
void itManagerSearchFighterHit(GObj* item_gobj);

// Search for collision with item hitbox
void itManagerSearchItemHit(GObj* this_gobj);

// Search for collision with weapon hitbox
void itManagerSearchWeaponHit(GObj* item_gobj);

// GObj process for searching hit collision with other entities
void itManagerProcSearchHitAll(GObj* item_gobj);

// GObj process for updating hit collision events
void itManagerProcHitCollisions(GObj* item_gobj);

// Update item's ColAnim data
void itManagerUpdateColAnim(GObj* item_gobj);

// Update item's spin rotation
void itManagerUpdateSpin(GObj* item_gobj);

#endif