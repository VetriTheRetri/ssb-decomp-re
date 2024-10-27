#ifndef _WPEXEC_H_
#define _WPEXEC_H_

#include "wptypes.h"

// Update weapon's scale, rotate and translate vectors
void wpProcessUpdateHitOffsets(DObj* joint, Vec3f* vec);

// Update weapon's hitbox positions
void wpProcessUpdateHitPositions(GObj* weapon_gobj);

// Update weapon's record of interacted targets	(Decrement rehit timer if
// available, clear targets if timer reaches 0)
void wpProcessUpdateHitRecord(GObj* weapon_gobj);

// Main weapon logic GObj process (animation, physics, collision, map_bound
// check)
void wpProcessProcWeaponMain(GObj* weapon_gobj);

// Set type of interaction and record hit target when weapon's hitbox collides
// with another GObj
void wpProcessSetHitInteractStats(WPHitColl* wp_atkcoll, GObj* victim_gobj, s32 hitbox_type, u32 interact_mask);

// Unknown
void wpProcessUpdateHitInteractStatsGroupID(WPStruct* this_wp, WPHitColl* wp_atkcoll, GObj* target_gobj, s32 hitbox_type,
										  u32 interact_mask);

// Set weapon VS weapon hitbox detection results
void wpProcessUpdateAttackStatWeapon(WPStruct* this_wp, WPHitColl* this_hit, s32 this_hit_id, WPStruct* victim_wp,
									  WPHitColl* victim_hit, s32 victim_hit_id, GObj* this_gobj, GObj* victim_gobj);

// GObj process for detecting other weapon hitboxes
void wpProcessProcSearchHitWeapon(GObj* weapon_gobj);

// GObj process for running various hitbox collision routines
void wpProcessProcHitCollisions(GObj* weapon_gobj);

#endif
