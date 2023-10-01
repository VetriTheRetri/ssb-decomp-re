#ifndef _FTPHYSICS_H_
#define _FTPHYSICS_H_

#include "ftdef.h"
#include <ssb_types.h>
#include <sys/objdef.h>

// Transfer all ground velocity into aerial velocity
void ftPhysics_SetGroundVelTransferAir(GObj *fighter_gobj);

// Clamp ground velocity
void ftPhysics_ClampGroundVel(ftStruct *fp, f32 clamp);

// Apply friction to ground velocity
void ftPhysics_SetGroundVelFriction(ftStruct *fp, f32 friction);

// Apply and clamp ground velocity if stick range is greater than stick_x_min
void ftPhysics_ApplyClampGroundVelStickRange(ftStruct *fp, s32 stick_x_min, f32 vel, f32 clamp);

// Set ground velocity to vel * absolute stick range; apply friction
void ftPhysics_SetGroundVelAbsStickRange(ftStruct *fp, f32 vel, f32 friction);

// Set ground velocity to vel * stick range; apply friction
void ftPhysics_SetGroundVelStickRange(ftStruct *fp, f32 vel, f32 friction);

// Run ftPhysics_SetGroundVelTransferAir; don't know why this is a separate function
void ftPhysics_ApplyGroundVelTransferAir(GObj *fighter_gobj);

// Apply friction to ground velocity the transfer to air velocity?
void ftPhysics_ApplyGroundVelFriction(GObj *fighter_gobj);

// Set velocity to update from TrasnN joint's translation tracks
void ftPhysics_ApplyGroundVelTransN(GObj *fighter_gobj);

// Run ftPhysics_ApplyGroundVelTransN if applicable, else run ftPhysics_ApplyGroundVelFriction
void ftPhysics_ApplyGroundFrictionOrTransN(GObj *fighter_gobj);

// Clamp maximum positive aerial Y velocity
void ftPhysics_ClampAirVelY(ftStruct *fp, f32 clamp);

// Add to aerial Y velocity and clamp
void ftPhysics_AddClampAirVelY(ftStruct *fp, f32 vel, f32 clamp);

// Apply gravity and clamp to terminal velocity
void ftPhysics_ApplyGravityClampTVel(ftStruct *fp, f32 gravity, f32 t_vel);

// Set aerial Y velocity to fast fall speed
void ftPhysics_ApplyFastFall(ftStruct *fp, ftAttributes *attributes);

// Check for fast fall input from player
void ftPhysics_CheckSetFastFall(ftStruct *fp);

// Runs ftPhysics_ApplyGravityClampTVel
void ftPhysics_ApplyGravityDefault(ftStruct *fp, ftAttributes *attributes);

// Clamp aerial X velocity
void ftPhysics_ClampAirVelX(ftStruct *fp, f32 clamp);

// Clamp maximum aerial X velocity to fighter's aerial_speed_max_x
void ftPhysics_ClampAirVelXMax(ftStruct *fp);

// If horizontal air speed is greater than clamp value, decrement velocity by 1.0 at a time; return bool for whether decrement occurred
sb32 ftPhysics_CheckClampAirVelXDec(ftStruct *fp, f32 clamp);

// Run ftPhysics_CheckClampAirVelXDec with character's maximum horizontal air speed as clamp value
sb32 ftPhysics_CheckClampAirVelXDecMax(ftStruct *fp, ftAttributes *attributes);

// Apply and clamp aerial X velocity if stick range is greater than stick_x_min
void ftPhysics_ClampAirVelXStickRange(ftStruct *fp, s32 stick_range_min, f32 vel, f32 clamp);

// Apply and clamp aerial X velocity if stick range is greater than 8 units
void ftPhysics_ClampAirVelXStickDefault(ftStruct *fp, ftAttributes *attributes);

// Apply friction to aerial X velocity
void ftPhysics_ApplyAirVelXFriction(ftStruct *fp, ftAttributes *attributes);

// Standard air drift physics
void ftPhysics_ApplyAirVelDrift(GObj *fighter_gobj);

// Air drift physics, fast fall allowed
void ftPhysics_ApplyAirVelDriftFastFall(GObj *fighter_gobj);

// Air physics, no drift allowed
void ftPhysics_ApplyAirVelFriction(GObj *fighter_gobj);

// Get velocity from TransN joint's translation tracks into float pointers Z, Y and X; X and Z are swapped for some reason
void ftPhysics_GetAirVelTransN(ftStruct *fp, f32 *z, f32 *y, f32 *x);

// Set velocity to update from TransN joint's translation tracks
void ftPhysics_SetAirVelTransN(GObj *fighter_gobj);

// Apply TransN velocity to all three velocity axes
void ftPhysics_ApplyAirVelTransNAll(GObj *fighter_gobj);

// Apply TransN velocity to Y and Z axes
void ftPhysics_ApplyAirVelTransNYZ(GObj *fighter_gobj);

// Set all velocity to 0.0
void ftPhysics_StopVelAll(GObj *fighter_gobj);

#endif