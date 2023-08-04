#ifndef _ITMAP_H_
#define _ITMAP_H_

#include "ittypes.h"

// Check if item collides with ground
bool32		itMap_CheckCollideGround			(mpCollData *coll_data, s32 arg1, s32 arg2);


// Unknown
bool32		func_ovl3_8017356C					(GObj *item_gobj);


// Unknown
bool32		func_ovl3_801735A0					(GObj *item_gobj, void (*proc_map)(GObj*));


// Unknown
bool32		func_ovl3_801735E0					(mpCollData *coll_data, GObj *item_gobj, s32 arg2);


// Unknown
bool32		func_ovl3_80173680					(GObj *item_gobj);


// Unknown
bool32		func_ovl3_801736B4					(mpCollData *coll_data, GObj *item_gobj, u32 coll_flags);


// Unknown
bool32		func_ovl3_801737B8					(GObj *item_gobj, bool32 flag);


// Check for specific item map collision and modify velocity on contact
bool32		itMap_CheckCollideAllRebound		(GObj *item_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos);


// Unknown
void		func_ovl3_80173A48					(Vec3f *vel, Vec3f *ground_angle, f32 ground_rebound);


// Check if item is landing after being dropped / thrown?
bool32		itMap_CheckMapCollideThrownLanding	(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_status)(GObj*));


// Check if item is landing normally?
bool32		itMap_CheckMapCollideLanding		(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_map)(GObj*));


// Unknown
bool32		func_ovl3_80173DF4					(GObj *item_gobj, f32 wall_ceil_rebound);


// Unknown
bool32		func_ovl3_80173E58					(GObj *item_gobj, void (*proc)(GObj*));


// Unknown
bool32		func_ovl3_80173E9C					(GObj *item_gobj, void (*proc)(GObj*));


// Unknown
bool32		func_ovl3_80173EE8					(GObj *item_gobj, f32 wall_ceil_rebound, void (*proc)(GObj*));


// Make item grounded
void		itMap_SetGround						(itStruct *ip);


// Make item airborne
void		itMap_SetAir						(itStruct *ip);

#endif