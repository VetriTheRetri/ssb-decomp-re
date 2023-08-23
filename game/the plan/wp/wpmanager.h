#ifndef _WPMANAGER_H_
#define _WPMANAGER_H_

#include "wptypes.h"

// Allocate memory for weapon structs
void		wpManager_AllocUserData				(void);


// Get memory region for weapon struct and advance global region pointer
wpStruct*	wpManager_GetStructSetNextAlloc		(void);


// Roll back local and global weapon struct pointer by one unit
void		wpManager_SetPrevAlloc				(wpStruct *wp);


// Get group index for weapon and increment global group count
u32			wpManager_GetGroupIndexInc			(void);


// Create new weapon
GObj*		wpManager_MakeWeapon				(GObj *spawn_gobj, wpCreateDesc *wp_desc, Vec3f *spawn_pos, u32 flags);


// Update weapon's scale, rotate and translate vectors
void		wpManager_UpdateWeaponVectors		(DObj *joint, Vec3f *vec);


// Update weapon's hitbox positions
void		wpManager_UpdateHitPositions		(GObj *weapon_gobj);


// Update weapon's record of interacted targets	(Decrement rehit timer if available, clear targets if timer reaches 0)
void		wpManager_UpdateHitRecord			(GObj *weapon_gobj);


// Main weapon logic GObj process (animation, physics, collision, blastzone check)
void		wpManager_ProcWeaponMain			(GObj *weapon_gobj);


// Set type of interaction and record hit target when weapon's hitbox collides with another GObj
void		wpManager_SetHitVictimInteractStats	(wpHitbox *wp_hit, GObj *victim_gobj, s32 hitbox_type, u32 interact_mask);


// Unknown
void		func_ovl3_8016679C					(wpStruct *this_wp, wpHitbox *wp_hit, GObj *target_gobj, s32 hitbox_type, u32 interact_mask);


// Set weapon VS weapon hitbox detection results
void		wpManager_UpdateAttackStatWeapon	(wpStruct *this_wp,		wpHitbox *this_hit,		s32 this_hit_id, 
												 wpStruct *victim_wp,	wpHitbox *victim_hit,	s32 victim_hit_id, 
																			GObj *this_gobj,	GObj *victim_gobj);


// GObj process for detecting other weapon hitboxes
void		wpManager_ProcSearchHitWeapon		(GObj *weapon_gobj);


// GObj process for running various hitbox collision routines
void		wpManager_ProcHitCollisions			(GObj *weapon_gobj);

#endif