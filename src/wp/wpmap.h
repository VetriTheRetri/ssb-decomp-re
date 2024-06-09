#ifndef _WPMAP_H_
#define _WPMAP_H_

#include "wptypes.h"

// Check if weapon collides with ground
sb32 wpMapProcLRWallCheckGround(mpCollData* coll_data, GObj* weapon_gobj, u32 flags);

// Unknown
sb32 wpMapTestLRWallCheckGround(GObj* weapon_gobj);

// Unknown
sb32 wpMapProcAll(mpCollData* coll_data, GObj* weapon_gobj, u32 flags);

// Unknown
sb32 wpMapTestAll(GObj* weapon_gobj);

// Unknown
sb32 wpMapProcAllCheckGround(mpCollData* coll_data, GObj* weapon_gobj, u32 flags);

// Unknown
sb32 wpMapTestAllCheckGround(GObj* weapon_gobj);

// Unknown
sb32 wpMapProcAllCheckCollEnd(mpCollData* coll_data, GObj* weapon_gobj, u32 flags);

// Unknown
sb32 wpMapTestAllCheckCollEnd(GObj* weapon_gobj);

// Check for specific weapon map collision and modify velocity on contact
sb32 wpMapCheckAllRebound(GObj* weapon_gobj, u32 check_flags, f32 mod_vel, Vec3f* pos);

// Make weapon grounded
void wpMapSetGround(wpStruct* ip);

// Make weapon airborne
void wpMapSetAir(wpStruct* ip);

#endif
