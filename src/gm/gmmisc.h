#ifndef _GMMISC_H_
#define _GMMISC_H_

// Data that is shared between different headers but does not really belong
// anywhere... yet

#include <ssb_types.h>
#include <sys/obj.h>

#define GMCOMMON_PERCENT_DAMAGE_MAX 999

#define LEFT -1
#define CENTER 0
#define RIGHT 1
#define WALL_UP                                                                                                        \
	2 // Apparently a valid facing direction value used by Pikachu's Thunder
	  // Jolt?
#define WALL_DOWN                                                                                                      \
	3 // Apparently a valid facing direction value used by Pikachu's Thunder
	  // Jolt?

#define FTCOMPUTER_LEVEL_MAX 9

#define GMHITCOLLISION_FLAG_FIGHTER (1 << 0) // Can interact with fighters
#define GMHITCOLLISION_FLAG_WEAPON (1 << 1)	 // Can interact with weapons
#define GMHITCOLLISION_FLAG_ITEM (1 << 2)	 // Can interact with items

#define GMHITCOLLISION_FLAG_ALL (GMHITCOLLISION_FLAG_FIGHTER | GMHITCOLLISION_FLAG_WEAPON | GMHITCOLLISION_FLAG_ITEM)
#define GMHITRECORD_NUM_MAX 4

typedef enum gmDirectionSign
{
	nGMFacingL = -1,
	nGMFacingD = -1,
	nGMFacingC = 0,
	nGMFacingR = 1,
	nGMFacingU = 1,
	nGMFacingWallU = 2,    	// Exclusive to Pikachu's Thunder Jolt for riding walls up?
	nGMFacingWallD = 3     	// Exclusive to Pikachu's Thunder Jolt for riding walls down?

} gmDirectionSign;

typedef enum gmHitCollisionStatus
{
	nGMHitStatusNone,		 	// User's hurtboxes are disabled
	nGMHitStatusNormal,	 		// User can be hit
	nGMHitStatusInvincible, 	// User can be hit, but is immune to damage
	nGMHitStatusIntangible	 	// User cannot be hit

} gmHitCollisionStatus;

typedef enum gmHitCollisionElement
{
	nGMHitElementNormal,
	nGMHitElementFire,
	nGMHitElementElectric,
	nGMHitElementSlash,
	nGMHitElementCoin,
	nGMHitElementFreezing,	// This is only speculation. It causes the screen to flash blue if knockback > 160.0
	nGMHitElementSleep,
	nGMHitElementUnk2

} gmHitCollisionElement;

typedef enum gmHitCollisionType 	// Hitbox types, this is universal but I don't
									// know where else to put it so both fighters
									// and items can see it without redefining it
									// for each
{
	nGMHitTypeHurt,
	nGMHitTypeShield,
	nGMHitTypeShieldRehit,
	nGMHitTypeHit,
	nGMHitTypeHurtRehit, 			// Only used for specific articles? e.g.
								   	// Pirahna Plants dealing damage
	nGMHitTypeAbsorb,
	nGMHitTypeReflect

} gmHitCollisionType;

typedef enum gmHitCollisionUpdateState
{
	nGMHitUpdateDisable,	   		// No active hitbox or updates
	nGMHitUpdateNew,		   		// Initialize hitbox positions
	nGMHitUpdateTransfer,   		// Transitions to interpolation mode, that's it
	nGMHitUpdateInterpolate 		// Copies current position to previous

} gmHitCollisionUpdateState;

typedef enum gmHitCollisionSoundEffect
{
	nGMHitSoundPunch,
	nGMHitSoundKick,
	nGMHitSoundCoin,
	nGMHitSoundBurn,
	nGMHitSoundZap,
	nGMHitSoundSlash,
	nGMHitSoundFan,
	nGMHitSoundBat,
	nGMHitSoundEnumMax

} gmHitCollisionSoundEffect;

typedef enum gmHitCollisionSoundLevel
{
	nGMHitLevelWeak,
	nGMHitLevelMedium,
	nGMHitLevelStrong,
	nGMHitLevelEnumMax

} gmHitCollisionSoundLevel;

typedef enum gmHitCollisionEnvironment
{
	nGMHitEnvironmentAcid,
	nGMHitEnvironmentPowerBlock,
	nGMHitEnvironmentTwister,
	nGMHitEnvironmentTaruCann

} gmHitCollisionEnvironment;

typedef struct gmHitCollisionFlags
{
	u32 is_interact_hurt : 1;
	u32 is_interact_shield : 1;
	u32 is_interact_reflect : 1;
	u32 is_interact_absorb : 1;
	u32 group_id : 3; // Number of hitbox groups this object has been hit by /
					  // can be hit by? Its implementation feels abandoned.
	u32 timer_rehit : 6;

} gmHitCollisionFlags;

typedef struct gmHitRecord
{
	GObj* victim_gobj;
	gmHitCollisionFlags victim_flags;

} gmHitRecord;

typedef union gmStatFlags
{
	struct
	{
		u16 unused : 3;
		ub16 is_smash_attack : 1;
		ub16 ga : 1;
		ub16 is_projectile : 1;
		u16 stat_attack_id : 10;
	};
	u16 halfword;

} gmStatFlags;

typedef struct gmColScript
{
	u32 *p_script; // Pointer to Color Animation script?
	u16 color_event_timer;
	u16 script_id;
	void* p_subroutine[1];
	s32 loop_count[1];
	void* p_goto[2];
	s32 unk_ca_timer;

} gmColScript;

typedef struct gmColKeys
{
	u8 r, g, b, a;
	s16 ir, ig, ib, ia; 		// Interpolation step

} gmColKeys;

typedef struct gmColAnim
{
	gmColScript cs[2];
	s32 length;
	s32 colanim_id;
	gmColKeys maincolor; 		// Used as both PrimColor and EnvColor? Screen flashes use it as Prim and items as Env
	f32 light_angle1;
	f32 light_angle2;
	gmColKeys blendcolor;
	ub8 is_use_maincolor : 1;
	ub8 is_use_light : 1;
	ub8 is_use_blendcolor : 1;
	u8 skeleton_id : 2; 		// ID of skeleton model to use during electric shock ColAnim?

} gmColAnim;

typedef struct gmColDesc
{
	void *p_script;
	u8 priority;				// If this is >= current ColAnim's priority, the new ColAnim gets applied
	ub8 is_unlocked;			// If TRUE, ColAnim can be interrupted on fighter status change

} gmColDesc;

#endif
