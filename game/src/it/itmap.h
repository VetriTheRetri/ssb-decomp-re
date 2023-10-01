#ifndef _ITMAP_H_
#define _ITMAP_H_

#include "ittypes.h"

// Check if item collides with ground
sb32		itMap_CheckCollideGround			(mpCollData *coll_data, s32 arg1, s32 arg2);


// Unknown
sb32		func_ovl3_8017356C					(GObj *item_gobj);


// Unknown
sb32		func_ovl3_801735A0					(GObj *item_gobj, void (*proc_map)(GObj*));


// Unknown
sb32		func_ovl3_801735E0					(mpCollData *coll_data, GObj *item_gobj, s32 arg2);


// Unknown
sb32		func_ovl3_80173680					(GObj *item_gobj);


// Unknown
sb32		func_ovl3_801736B4					(mpCollData *coll_data, GObj *item_gobj, u32 coll_flags);


// Unknown
sb32		func_ovl3_801737B8					(GObj *item_gobj, sb32 flag);


// Check for specific item map collision and modify velocity on contact
sb32		itMap_CheckCollideAllRebound		(GObj *item_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos);


// Unknown
void		func_ovl3_80173A48					(Vec3f *vel, Vec3f *ground_angle, f32 ground_rebound);


// Check if item is landing after being dropped / thrown?
sb32		itMap_CheckMapCollideThrownLanding	(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_status)(GObj*));


// Check if item is landing normally?
sb32		itMap_CheckMapCollideLanding		(GObj *item_gobj, f32 wall_ceil_rebound, f32 ground_rebound, void (*proc_map)(GObj*));


// Unknown
sb32		func_ovl3_80173DF4					(GObj *item_gobj, f32 wall_ceil_rebound);


// Unknown
sb32		func_ovl3_80173E58					(GObj *item_gobj, void (*proc)(GObj*));


// Unknown
sb32		func_ovl3_80173E9C					(GObj *item_gobj, void (*proc)(GObj*));


// Unknown
sb32		func_ovl3_80173EE8					(GObj *item_gobj, f32 wall_ceil_rebound, void (*proc)(GObj*));


// Make item grounded
void		itMap_SetGround						(itStruct *ip);


// Make item airborne
void		itMap_SetAir						(itStruct *ip);

#endif