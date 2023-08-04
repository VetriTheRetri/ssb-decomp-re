#ifndef _WPMAP_H_
#define _WPMAP_H_

#include "wptypes.h"

// Check if weapon collides with ground
bool32		wpMap_CheckCollideGround			(mpCollData *coll_data, s32 arg1, s32 arg2);


// Unknown
bool32		func_ovl3_8016796C					(GObj *weapon_gobj);


// Unknown	
bool32		func_ovl3_801679A0					(mpCollData *coll_data, s32 arg1, s32 arg2);


// Unknown
bool32		func_ovl3_80167A58					(GObj *weapon_gobj);


// Unknown
bool32		func_ovl3_80167A8C					(mpCollData *coll_data, s32 arg1, s32 arg2);


// Unknown
bool32		func_ovl3_80167B58					(GObj *weapon_gobj);


// Unknown
bool32		func_ovl3_80167B8C					(mpCollData *weapon_gobj, s32 arg1, s32 arg2);


// Unknown
bool32		func_ovl3_80167C04					(GObj *weapon_gobj);


// Check for specific weapon map collision and modify velocity on contact
bool32		wpMap_CheckCollideAllRebound		(GObj *weapon_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos);


// Make weapon grounded
void		wpMap_SetGround						(wpStruct *ip);


// Make weapon airborne
void		wpMap_SetAir						(wpStruct *ip);

#endif