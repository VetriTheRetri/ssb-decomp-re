#ifndef _WPMAIN_H_
#define _WPMAIN_H_

#include "wptypes.h"
#include <ft/fttypes.h>

// Stop weapon's ongoing sound effect
void		wpMain_StopSFX						(wpStruct *wp);


// Play sound effect if applicable
void		wpMain_PlaySFX						(wpStruct *wp, u16 sfx_id);


// Set weapon's facing direction based on velocity
void		wpMain_VelSetLR						(GObj *weapon_gobj);


// Set weapon's Yaw rotation based on velocity
void		wpMain_VelSetModelYaw				(GObj *weapon_gobj);


// Decrement weapon's lifetime and return bool for whether weapon has expired
bool32		wpMain_DecLifeCheckExpire			(wpStruct *wp);


// Destroy weapon
void		wpMain_DestroyWeapon				(GObj *weapon_gobj);


// Transfer weapon's ground velocity to aerial velocity
void		wpMain_VelGroundTransferAir			(GObj *weapon_gobj);


// Update weapon's gravity and clamp to terminal velocity if greater than
void		 wpMain_UpdateGravityClampTVel		(wpStruct *wp, f32 gravity, f32 terminal_velocity);


// Set weapon's facing direction when reflected
void		wpMain_ReflectorSetLR				(wpStruct *wp, ftStruct *fp);


// Apply stale multiplier to final hitbox damage output (+ 0.999% bonus)
s32			wpMain_GetDamageOutput				(wpStruct *wp);


// Reset weapon's record of previously hit targets
void		wpMain_ClearHitRecord				(wpStruct *wp);


// Unknown
void		func_ovl3_80168428					(GObj *weapon_gobj);

#endif