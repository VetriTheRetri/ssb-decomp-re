#ifndef _WPMAP_H_
#define _WPMAP_H_

#include "wptypes.h"

// Check if weapon collides with ground
sb32		wpMap_ProcLRWallCheckGround			(mpCollData *coll_data, GObj *weapon_gobj, u32 flags);


// Unknown
sb32		wpMap_TestLRWallCheckGround					(GObj *weapon_gobj);


// Unknown	
sb32		wpMap_ProcAll					(mpCollData *coll_data, GObj *weapon_gobj, u32 flags);


// Unknown
sb32		wpMap_TestAll					(GObj *weapon_gobj);


// Unknown
sb32		wpMap_ProcAllCheckGround					(mpCollData *coll_data, GObj *weapon_gobj, u32 flags);


// Unknown
sb32		wpMap_TestAllCheckGround					(GObj *weapon_gobj);


// Unknown
sb32		wpMap_ProcAllCheckCollEnd					(mpCollData *coll_data, GObj *weapon_gobj, u32 flags);


// Unknown
sb32		wpMap_TestAllCheckCollEnd					(GObj *weapon_gobj);


// Check for specific weapon map collision and modify velocity on contact
sb32		wpMap_CheckCollideAllRebound		(GObj *weapon_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos);


// Make weapon grounded
void		wpMap_SetGround						(wpStruct *ip);


// Make weapon airborne
void		wpMap_SetAir						(wpStruct *ip);

#endif