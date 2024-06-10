#ifndef _WPTYPES_H_
#define _WPTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <mp/mpcoll.h>
#include <wp/weaponvars.h>
#include <gm/gmmisc.h>
#include <gm/gmsound.h>
#include <sys/develop.h>
#include <gm/battle.h>

#include "wpdef.h"

// Macros
#define WEAPON_ALLOC_MAX 32 // Allocate this many weapon user_data structs at once
#define WEAPON_ALLOC_ALIGN 0x8

#define WEAPON_STALE_DEFAULT 1.0F

#define WEAPON_TEAM_DEFAULT 4
#define WEAPON_PORT_DEFAULT GMMATCH_PLAYERS_MAX
#define WEAPON_HANDICAP_DEFAULT 9 // CPU level?

#define WEAPON_FLAG_PROJECT (1 << 31) // Perform initial collision check when spawning weapon?

#define WEAPON_MASK_SPAWN_FIGHTER 0 // Weapon spawned by fighter
#define WEAPON_MASK_SPAWN_GROUND 1	// Weapon spawned by stage
#define WEAPON_MASK_SPAWN_WEAPON 2	// Weapon spawned by another weapon
#define WEAPON_MASK_SPAWN_ITEM 3	// Weapon spawned by Item

#define WEAPON_MASK_SPAWN_ALL 0xF // Mask all GObj classes that can spawn weapons?

#define WEAPON_HITBOX_COUNT_MAX 2
#define WEAPON_REHIT_TIME_DEFAULT                                                                                      \
	16 // If the weapon is multihit, its hitbox will refresh per victim after
	   // this many frames have passed

#define WEAPON_REFLECT_TIME_DEFAULT 100	 // Maximum damage cap for reflected weapons
#define WEAPON_REFLECT_MUL_DEFAULT 1.8F	 // Universal reflect damage multiplier
#define WEAPON_REFLECT_ADD_DEFAULT 0.99F // Added after multiplying weapon's hitbox damage

#define WEAPON_STALE_ADD_DEFAULT                                                                                       \
	0.999F // Bonus 1% added after multiplying hitbox damage with staling
		   // modifier

#define WEAPON_HOP_ANGLE_DEFAULT F_DEG_TO_RAD(135.0F) // 2.3561945F - Determines whether weapon bounces off a shield

// Structs

// Weapon's blueprint to feed into wpManagerMakeWeapon
struct wpCreateDesc
{
	u8 unk_0x0;
	wpKind wp_kind;
	void** p_weapon; // Pointer to various item data
	intptr_t o_attributes; // Offset to weapon's attributes
	DObjTransformTypes transform_types;
	sb32 (*proc_update)(GObj*);
	sb32 (*proc_map)(GObj*);
	sb32 (*proc_hit)(GObj*);
	sb32 (*proc_shield)(GObj*);
	sb32 (*proc_hop)(GObj*);
	sb32 (*proc_setoff)(GObj*);
	sb32 (*proc_reflector)(GObj*);
	sb32 (*proc_absorb)(GObj*);
};

struct wpAttributes // Moreso hitbox stuff
{
	void* model_desc;
	void*** mobj; // Triple pointer???
	void** anim_joint;
	void*** matanim_joint;
	Vec3h offset[2];
	s16 objectcoll_top;
	s16 objectcoll_center;
	s16 objectcoll_bottom;
	s16 objectcoll_width;
	u16 size;
	s32 angle : 10;
	u32 knockback_scale : 10;
	u32 damage : 8;
	u32 element : 4;
	u32 knockback_weight : 10;
	s32 shield_damage : 8;
	u32 hitbox_count : 2;
	ub32 can_setoff : 1;
	u32 sfx : 10;
	u32 priority : 3;
	ub32 can_rehit_item : 1;
	ub32 can_rehit_fighter : 1;
	ub32 can_hop : 1;
	ub32 can_reflect : 1;
	ub32 can_absorb : 1;
	ub32 can_shield : 1;
	ub32 flags_0x2F_b6 : 1;
	ub32 flags_0x2F_b7 : 1;
	u32 knockback_base : 10;
};

// Current and previous hitbox position are stored here
struct wpHitPositions
{
	Vec3f pos;
	Vec3f pos_prev;
	sb32 unk_wphitpos_0x18;
	Mtx44f mtx;
	f32 unk_wphitpos_0x5C;
};

// Weapon's hitbox parameters
struct wpHitbox
{
	gmHitCollisionUpdateState update_state;				   // 0 = disabled, 1 = new hitbox, 2 and 3 =
														   // interpolate/copy current position to previous
	s32 damage;											   // Hitbox base damage in %
	f32 stale;											   // Stale move negation multiplier
	gmHitCollisionElement element;						   // Hitbox hit effect
	Vec3f offset[WEAPON_HITBOX_COUNT_MAX];				   // Offset from TopN joint; up to two
														   // hitboxes by default
	f32 size;											   // Hitbox size
	s32 angle;											   // Hitbox angle
	u32 knockback_scale;								   // Knockback scaling/growth
	u32 knockback_weight;								   // Weight-Dependent Set Knockback
	u32 knockback_base;									   // Base knockback
	s32 shield_damage;									   // Additional shield damage; if (hitbox damage - shield
														   // damage) is negative, heals shield
	s32 priority;										   // Used to determine winner in hitbox vs hitbox interaction?
	u8 interact_mask;									   // Mask of object classes hitbox can interact with; 0x1 =
														   // fighters, 0x2 = weapons, 0x4 = items
	u16 hit_sfx;										   // Sound effect to play when colliding with a hurtbox
	ub32 can_setoff : 1;								   // Whether weapon can collide with other hitboxes
	ub32 can_rehit_item : 1;							   // Whether weapon can hit items repeatedly
	ub32 can_rehit_fighter : 1;							   // Whether weapon can hit fighters repeatedly
	ub32 can_rehit_shield : 1;							   // Whether weapon can hit shields repeatedly
	ub32 can_hop : 1;									   // Whether weapon can bounce off shields
	ub32 can_reflect : 1;								   // Whether weapon can be reflected
	ub32 can_absorb : 1;								   // Whether weapon can be absorbed
	ub32 can_not_heal : 1;								   // Somewhat strangely implemented, this allows the
														   // weapon to heal upon being absorbed only if FALSE
	ub32 can_shield : 1;								   // Whether weapon can be shielded
	u32 attack_id : 6;									   // Attack ID used for stale move negation queues
	u16 motion_count;									   // Motion count used for stale move negation queues
	gmStatFlags stat_flags;								   // Weapon's status flags
	u16 stat_count;										   // Weapon's status update count
	s32 hitbox_count;									   // Weapon's hitbox count
	wpHitPositions hit_positions[WEAPON_HITBOX_COUNT_MAX]; // Weapon's hitbox
														   // world positions
	gmHitRecord hit_targets[GMHITRECORD_COUNT_MAX];		   // Weapon's record of
														   // interacted targets
};

// Main weapon struct
struct wpStruct
{
	wpStruct* wp_alloc_next; // Memory region allocated for next wpStruct
	GObj* weapon_gobj;		 // Weapon's GObj pointer
	GObj* owner_gobj;		 // Weapon's owner
	wpKind wp_kind;			 // Weapon ID
	u8 team;				 // Weapon's team
	u8 player;				 // Weapon's port index
	u8 handicap;			 // Weapon's handicap
	s32 player_number;		 // Weapon's player number
	s32 lr;					 // Weapon's facing direction; -1 = LR_Left, 0 = LR_Center, 1 =
							 // LR_Right, 2 = WALL_UP (Thunder Jolt only?), 3 = WALL_DOWN
							 // (Thunder Jolt only?)

	struct wpPhysicsInfo
	{
		f32 vel_ground; // Weapon's ground velocity
		Vec3f vel_air;	// Weapon's aerial velocity

	} phys_info;

	mpCollData coll_data;	   // Weapon's collision data
	mpGroundAir ground_or_air; // Ground or air bool

	wpHitbox weapon_hit; // Weapon's hitbox

	s32 hit_normal_damage;			// Damage applied to entity this weapon has hit
	s32 hit_refresh_damage;			// Damage applied to entity this item has hit, if
									// rehit is possible?
	s32 hit_attack_damage;			// Damage weapon dealt to other attack
	s32 hit_shield_damage;			// Damage weapon dealt to shield
	f32 shield_collide_angle;		// Angle at which item collided with shield?
	Vec3f shield_collide_vec;		// Position of shield item collided with?
									// (Update: only Z axis appears to be used, can
									// be 0, -1 or 1 depending on attack direction
	GObj* reflect_gobj;				// GObj that reflected this weapon
	gmStatFlags reflect_stat_flags; // Status flags of GObj reflecting this
									// item (e.g. is_smash_attack,
									// is_ground_or_air, is_projectile, etc.)
	u16 reflect_stat_count;			// Status update count at the time the item is
									// reflected?
	GObj* absorb_gobj;				// GObj that absorbed this item

	ub32 is_hitlag_victim : 1; // Weapon can deal hitlag to target
	ub32 is_hitlag_weapon : 1; // Weapon is in hitlag

	u32 group_id; // Weapon's group, identical group IDs => hitbox victim
				  // records are linked together with other weapons sharing the
				  // same ID?

	s32 lifetime; // Weapon's duration in frames

	ub32 is_camera_follow : 1; // Camera will attempt to follow the weapon
	ub32 is_static_damage : 1; // Ignore reflect multiplier if TRUE

	alSoundEffect* p_sfx; // Pointer to weapon's current ongoing sound effect
	u16 sfx_id;			  // ID of sound effect this weapon is supposed to play? (This
						  // gets checked against alSoundEffect's ID when despawning)

	sb32 (*proc_update)(GObj*);	   // Update general weapon information
	sb32 (*proc_map)(GObj*);	   // Update weapon's map collision
	sb32 (*proc_hit)(GObj*);	   // Runs when weapon's hitbox collides with a hurtbox
	sb32 (*proc_shield)(GObj*);	   // Runs when weapon's hitbox collides with a shield
	sb32 (*proc_hop)(GObj*);	   // Runs when weapon bounces off a shield
	sb32 (*proc_setoff)(GObj*);	   // Runs when weapon's hitbox collides with another hitbox
	sb32 (*proc_reflector)(GObj*); // Runs when weapon is reflected
	sb32 (*proc_absorb)(GObj*);	   // Runs when weapon is absorbed
	sb32 (*proc_dead)(GObj*);	   // Runs when weapon is in a blast zone

	union wpStatusVars // Weapon-specific state variables
	{
		// Fighter Weapons
		wpMario_WeaponVars_Fireball fireball;
		wpSamus_WeaponVars_ChargeShot charge_shot;
		wpSamus_WeaponVars_Bomb samus_bomb;
		wpPikachu_WeaponVars_ThunderJolt thunder_jolt;
		wpPikachu_WeaponVars_Thunder thunder;
		wpNess_WeaponVars_PKThunder pkthunder;
		wpNess_WeaponVars_PKThunderTrail pkthunder_trail;
		wpYoshi_WeaponVars_EggThrow egg_throw;
		wpLink_WeaponVars_SpinAttack spin_attack; // Link's Up Special
		wpLink_WeaponVars_Boomerang boomerang;

		// Item Weapons
		wpStarRod_WeaponVars_Star star;
		wpIwark_WeaponVars_Rock rock; // Onix's Rock Slide
		wpNyars_WeaponVars_Coin coin;
		wpKamex_WeaponVars_Hydro hydro;
		wpDogas_WeaponVars_Smog smog;

	} weapon_vars;

	s32 display_mode; // Weapon's display mode: 0 = normal, 1 = hit collisions,
					  // 2 = opaque hurtboxes + outlined attack hitboxes, 3 =
					  // map collisions
};

#endif
