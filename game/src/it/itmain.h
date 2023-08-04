#ifndef _ITMAIN_H_
#define _ITMAIN_H_

#include "ittypes.h"

// Something to do with item spin rotation
void		func_ovl3_80172310				(GObj *item_gobj);


// Something to do with item spin rotation
void		func_ovl3_80172394				(GObj *item_gobj, bool32 is_prev_spawn);


// Something to do with item spin rotation
void		func_ovl3_8017245C				(GObj *item_gobj, f32 *spin_speed, bool32 is_smash_throw);


// Set item's facing direction and spin rotation based on velocity
void		itMain_VelSetRotateStepLR		(GObj *item_gobj);


// Update item's gravity and clamp to terminal velocity if greater than
void		itMain_UpdateGravityClampTVel	(itStruct *ip, f32 gravity, f32 terminal_velocity);


// Reset item's player-related variables
void		itMain_ResetPlayerVars			(GObj *item_gobj);


// Clear item's record of previously hit targets
void		itMain_ClearHitRecord			(itStruct *ip);


// Renew item's hitbox
void		itMain_RefreshHit				(GObj *item_gobj);


// Clear item's ownership status
void		itMain_ClearOwnerStats			(GObj *item_gobj);


// Get player-related variables from damaging entity
void		itMain_CopyDamageStats			(GObj *item_gobj);


// Apply modifiers to final damage output (+ 0.999% bonus)
s32			itMain_GetDamageOutput			(itStruct *ip);


// Check if shooting type item has run out of ammo
bool32		itMain_CheckShootNoAmmo			(GObj *item_gobj);


// Destroy item
void		itMain_DestroyItem				(GObj *item_gobj);


// Remove item from player - this is more than likely not included as Link's bomb erroneously calls this without initializing stat_flags and stat_count
// void itMain_SetFighterRelease(GObj *item_gobj, Vec3f *vel, f32 stale, u16 stat_flags, u16 stat_count);


// Run item's drop routine
void		itMain_SetFighterDrop			(GObj *item_gobj, Vec3f *vel, f32 stale);


// Run item's throw routine
void		itMain_SetFighterThrow			(GObj *item_gobj, Vec3f *vel, f32 stale, bool32 is_smash_throw);


// Run item's pickup routine
void		itMain_SetFighterHold			(GObj *item_gobj, GObj *fighter_gobj);


// Make item grounded, clear player variables and make it possible to pick up
void		itMain_SetGroundAllowPickup		(GObj *item_gobj);


// Change item's action state
void		itMain_SetItemStatus			(GObj *item_gobj, itStatusDesc *status_desc, s32 status_id);


// Apply ColAnim to item and return whether it was successfully applied
bool32		itMain_CheckSetColAnimIndex		(GObj *item_gobj, s32 colanim_id, s32 duration);


// Reset item's ColAnim
void		itMain_ResetColAnim				(GObj *item_gobj);


// Runs when caller collides with a hurtbox
void		itMain_VelSetRebound			(GObj *item_gobj);


// Missing func_ovl3_8017301C and func_ovl3_80173090 here


// Spawn new item from container?
bool32		func_ovl3_801730D4				(GObj *gobj);


// Some basic item subaction event? Updates hitbox damage, size and angle; it_multi acts as asynchronous timer
void		itMain_UpdateHitEvent			(GObj *item_gobj, itHitEvent *ev);


// Create Pokémon
GObj*		itMain_CreateMonster			(GObj *item_gobj);


// Default process run when item bounces off a shield (SDefault = status default)
bool32		itCommon_SDefault_ProcHop		(GObj *item_gobj);


// Default process run when item is reflected (SDefault = status default)
bool32		itCommon_SDefault_ProcReflector	(GObj *item_gobj);
	
#endif