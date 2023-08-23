#ifndef _ITMANAGER_H_
#define _ITMANAGER_H_

#include "ittypes.h"
#include <wp/wptypes.h>
#include <ft/fttypes.h>

// Allocate memory for item structs and initialize global item-related data
void		itManager_AllocUserData				(void);


// Get memory region for item struct and advance global region pointer
itStruct*	itManager_GetStructSetNextAlloc		(void);


// Roll back local and global item struct pointer by one unit
void		itManager_SetPrevAlloc				(itStruct *ip);


// Unknown, something to do with setting up item models?
void		func_ovl3_8016DFF4					(GObj *gobj, DObjDesc *joint_desc, DObj **p_ptr_dobj, u8 arg3);


// Create new item
GObj*		itManager_MakeItem					(GObj *spawn_gobj, itCreateDesc *spawn_data, Vec3f *pos, Vec3f *vel, u32 flags);


// Create item and init spawn GFX + spin rotation if common item (indexes 0 - 19)
GObj*		itManager_MakeItemSetupCommon		(GObj *spawn_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 spawn_flags);


// Get current item user_data to see if != NULL
itStruct*	itManager_GetCurrentStructAlloc		(void);


// Set wait timer for next item spawn
void		itManager_SetItemSpawnWait			(void);


// GObj process for hidden object that randomly spawns items - argument is unused
void		itManager_ProcMakeItems				(GObj *item_gobj);


// Set up item spawn positions?
GObj*		func_ovl3_8016EC40					(void);


// Set up item spawn positions part 2?
void		func_ovl3_8016EF40					(void);


// Set up global Pokémon spawn variables
void		itManager_InitMonsterVars			(void);


// Make immediate item with index
GObj*		itManager_MakeItemIndex				(GObj *spawn_gobj, s32 index, Vec3f *pos, Vec3f *vel, u32 flags);


// Update positions of item hitboxes
void		itManager_UpdateHitPositions		(GObj *item_gobj);


// Update item's record of interacted targets (Decrement rehit timer if available, clear targets if timer reaches 0)
void		itManager_UpdateHitRecord			(GObj *item_gobj);


// Main item logic GObj process (animation, physics, collision, blastzone check)
void		itManager_ProcItemMain				(GObj *item_gobj);


// Set type of interaction and record hit target when item's hitbox collides with another GObj
void		itManager_SetHitVictimInteractStats	(itHitbox *it_hit, GObj *victim_gobj, s32 hitbox_type, u32 interact_mask);


// Set stuff when item's hurtbox gets hit by a fighter
void		itManager_UpdateDamageStatFighter	(ftStruct *fp, ftHitbox *ft_hit, itStruct *ip, itHurtbox *it_hurt, GObj *fighter_gobj, GObj *item_gobj);


// Set stuff when item's hitbox collides with another item's hitbox
void		itManager_UpdateAttackStatItem		(itStruct *this_ip, itHitbox *this_hit, s32 this_hit_id, itStruct *victim_ip, itHitbox *victim_hit, s32 victim_hit_id, GObj *this_gobj, GObj *victim_gobj);


// Set stuff when item's hitbox collides with a weapon's hitbox
void		itManager_UpdateAttackStatWeapon	(wpStruct *wp, wpHitbox *wp_hit, s32 wp_hit_id, itStruct *ip, itHitbox *it_hit, s32 it_hit_id, GObj *weapon_gobj, GObj *item_gobj);


// Set stuff when item's hurtbox gets hit by another item's hitbox
void		itManager_UpdateDamageStatItem		(itStruct *attack_ip, itHitbox *attack_it_hit, s32 hitbox_id, itStruct *defend_ip, itHurtbox *it_hurt, GObj *attack_gobj, GObj *defend_gobj);


// Set  stuff when item's hurtbox gets hit by a weapon's hitbox
void		itManager_UpdateDamageStatWeapon	(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, itStruct *ip, itHurtbox *it_hurt, GObj *weapon_gobj, GObj *item_gobj);


// Search for collision with fighter hitbox
void		itManager_SearchHitFighter			(GObj *item_gobj);


// Search for collision with item hitbox
void		itManager_SearchHitItem				(GObj *this_gobj);


// Search for collision with weapon hitbox
void		itManager_SearchHitWeapon			(GObj *item_gobj);


// GObj process for searching hit collision with other entities
void		itManager_ProcSearchHitAll			(GObj *item_gobj);


// GObj process for updating hit collision events
void		itManager_ProcUpdateHitCollisions	(GObj *item_gobj);


// Update item's ColAnim data
void		itManager_UpdateColAnim				(GObj *item_gobj);


// Update item's spin rotation
void		itManager_UpdateSpin				(GObj *item_gobj);

#endif