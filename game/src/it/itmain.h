#ifndef _ITMAIN_H_
#define _ITMAIN_H_

#include "ittypes.h"

// Something to do with item spin rotation
void		func_ovl3_80172310				(GObj *item_gobj);


// Something to do with item spin rotation
void		func_ovl3_80172394				(GObj *item_gobj, sb32 is_prev_spawn);


// Something to do with item spin rotation
void		func_ovl3_8017245C				(GObj *item_gobj, f32 *spin_speed, sb32 is_smash_throw);


// Set item's facing direction and spin rotation based on velocity
void		itMainVelSetRotateStepLR		(GObj *item_gobj);


// Update item's gravity and clamp to terminal velocity if greater than
void		itMainApplyGClampTVel	(itStruct *ip, f32 gravity, f32 terminal_velocity);


// Reset item's player-related variables
void		itMainResetPlayerVars			(GObj *item_gobj);


// Clear item's record of previously hit targets
void		itMainClearHitRecord			(itStruct *ip);


// Renew item's hitbox
void		itMainRefreshHit				(GObj *item_gobj);


// Clear item's ownership status
void		itMainClearOwnerStats			(GObj *item_gobj);


// Get player-related variables from damaging entity
void		itMainCopyDamageStats			(GObj *item_gobj);


// Apply modifiers to final damage output (+ 0.999% bonus)
s32			itMainGetDamageOutput			(itStruct *ip);


// Check if shooting type item has run out of ammo
sb32		itMainCheckShootNoAmmo			(GObj *item_gobj);


// Destroy item
void		itMainDestroyItem				(GObj *item_gobj);


// Remove item from player - this is more than likely not included as Link's bomb erroneously calls this without initializing stat_flags and stat_count
// void itMainSetFighterRelease(GObj *item_gobj, Vec3f *vel, f32 stale, u16 stat_flags, u16 stat_count);


// Run item's drop routine
void		itMainSetFighterDrop			(GObj *item_gobj, Vec3f *vel, f32 stale);


// Run item's throw routine
void		itMainSetFighterThrow			(GObj *item_gobj, Vec3f *vel, f32 stale, sb32 is_smash_throw);


// Run item's pickup routine
void		itMainSetFighterHold			(GObj *item_gobj, GObj *fighter_gobj);


// Make item grounded, clear player variables and make it possible to pick up
void		itMainSetGroundAllowPickup		(GObj *item_gobj);


// Change item's action state
void		itMainSetItemStatus			(GObj *item_gobj, itStatusDesc *status_desc, s32 status_id);


// Apply ColAnim to item and return whether it was successfully applied
sb32		itMainCheckSetColAnimID		(GObj *item_gobj, s32 colanim_id, s32 duration);


// Reset item's ColAnim
void		itMainClearColAnim				(GObj *item_gobj);


// Runs when caller collides with a hurtbox
void		itMainVelSetRebound			(GObj *item_gobj);


// Binary search function to get item ID for container drop ?
s32 itMainSearchWeightedItemID(s32 random, itRandomWeights *container_drops, u32 min, u32 max);


// Get item ID for container
s32 itMainGetWeightedItemID(itRandomWeights *container_drops);


// Spawn new item from container?
sb32		itMainMakeContainerItem				(GObj *gobj);


// Some basic item subaction event? Updates hitbox damage, size and angle; it_multi acts as asynchronous timer
void		itMainUpdateHitEvent			(GObj *item_gobj, itHitEvent *ev);


// Create Pokémon
GObj*		itMainMakeMonster			(GObj *item_gobj);


// Default process run when item bounces off a shield (SDefault = status default)
sb32		itCommonSDefaultProcHop		(GObj *item_gobj);


// Default process run when item is reflected (SDefault = status default)
sb32		itCommonSDefaultProcReflector	(GObj *item_gobj);
	
#endif