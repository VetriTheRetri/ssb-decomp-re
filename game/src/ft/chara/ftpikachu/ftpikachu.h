#ifndef _FTPIKACHU_H_
#define _FTPIKACHU_H_

#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTPIKACHU_THUNDERJOLT_SPAWN_JOINT 11					// Spawn Thunder Jolt relative to this bone
#define FTPIKACHU_THUNDERJOLT_SPAWN_ANGLE F_DEG_TO_RAD(-45.0F)	// Launch angle of Thunder Jolt in Radians (-0.7853982F)
#define FTPIKACHU_THUNDERJOLT_VEL 40.0F							// Constant velocity of aerial Thunder Jolt
#define FTPIKACHU_THUNDERJOLT_COLANIM_ID 0x3B					// ID of color animation applied to Pikachu's model
#define FTPIKACHU_THUNDERJOLT_COLANIM_LENGTH 0

#define FTPIKACHU_QUICKATTACK_BASE_JOINT 4						// Apply calculations to this joint (i.e. rotation, scale)
#define FTPIKACHU_QUICKATTACK_COLANIM_ID 0x39					// ID of color animation applied to Pikachu's model
#define FTPIKACHU_QUICKATTACK_COLANIM_LENGTH 0
#define FTPIKACHU_QUICKATTACK_SCALE_X 0.8F						// X scale of Pikachu's model
#define FTPIKACHU_QUICKATTACK_SCALE_Y 0.8F						// Y scale of Pikachu's model
#define FTPIKACHU_QUICKATTACK_SCALE_Z 1.2F						// Z scale of Pikachu's model
#define FTPIKACHU_QUICKATTACK_HALT_ANGLE F_DEG_TO_RAD(135.0F)	// Maximum angle of stage collision that doesn't cancel Quick Attack? (2.3561945F)
#define FTPIKACHU_QUICKATTACK_START_TIME 20						// Number of frames Pikachu spends in the startup animation of Quick Attack
#define FTPIKACHU_QUICKATTACK_ZIP_TIME 5						// Number of frames Pikachu spends in a Quick Attack zip
#define FTPIKACHU_QUICKATTACK_PASS_BUFFER_MAX 2
#define FTPIKACHU_QUICKATTACK_STICK_RANGE_MIN 60.0F				// Minimum stick range required for input read?
#define FTPIKACHU_QUICKATTACK_ANGLE_DIFF_MIN F_DEG_TO_RAD(42.0F)// Minimum angle difference required for subsequent zips (0.7330383F)
#define FTPIKACHU_QUICKATTACK_VEL_BASE 3.0F						// Base velocity of grounded Quick Attack
#define FTPIKACHU_QUICKATTACK_VEL_ADD 90.0F						// Added to ground velocity
#define FTPIKACHU_QUICKATTACK_VEL_MUL 0.9F						// Multiplies ground velocity on some condition
#define FTPIKACHU_QUICKATTACK_AIR_ACCEL_MUL 0.5F
#define FTPIKACHU_QUICKATTACK_AIR_SPEED_MUL 0.5F
#define FTPIKACHU_QUICKATTACK_VEL_Y_DIV 9.0F
#define FTPIKACHU_QUICKATTACK_VEL_BAK_MUL 0.2F					// Multiplies backed up velocity?
#define FTPIKACHU_QUICKATTACK_FALLSPECIAL_DRIFT 0.4F			// Air drift multiplier once Pikachu enters freefall after Quick Attack
#define FTPIKACHU_QUICKATTACK_LANDING_LAG 0.4F					// Landing lag

#define FTPIKACHU_THUNDER_SPAWN_JOINT 11						// Spawn Thunder relative to this bone
#define FTPIKACHU_THUNDER_SPAWN_OFF_Y 500.0F					// Thunder spawns at (top blastzone - this value)
#define FTPIKACHU_THUNDER_VEL_Y -450.0F							// Vertical velocity of Thunder
#define FTPIKACHU_THUNDER_COLL_OFF_Y 225.0F						// Added to Thunder's Y-position before calculating distance from Pikachu
#define FTPIKACHU_THUNDER_COLLIDE_X 200.0F						// Width of Thunder collision box
#define FTPIKACHU_THUNDER_COLLIDE_Y	800.0F						// Height of Thunder collision box
#define FTPIKACHU_THUNDER_HIT_GRAVITY 0.5F
#define FTPIKACHU_THUNDER_HIT_VEL_Y	20.0F						// Vertical velocity gained if Thunder connects with Pikachu

typedef enum ftPikachuAction
{
	ftStatus_Pikachu_AppearR = ftStatus_Common_SpecialStart,
	ftStatus_Pikachu_AppearL,
	ftStatus_Pikachu_SpecialN,
	ftStatus_Pikachu_SpecialAirN,
	ftStatus_Pikachu_SpecialLwStart,
	ftStatus_Pikachu_SpecialLwLoop,
	ftStatus_Pikachu_SpecialLwHit,
	ftStatus_Pikachu_SpecialLwEnd,
	ftStatus_Pikachu_SpecialAirLwStart,
	ftStatus_Pikachu_SpecialAirLwLoop,
	ftStatus_Pikachu_SpecialAirLwHit,
	ftStatus_Pikachu_SpecialAirLwEnd,
	ftStatus_Pikachu_SpecialHiStart,
	ftStatus_Pikachu_SpecialHi,
	ftStatus_Pikachu_SpecialHiEnd,
	ftStatus_Pikachu_SpecialAirHiStart,
	ftStatus_Pikachu_SpecialAirHi,
	ftStatus_Pikachu_SpecialAirHiEnd

} ftPikachuAction;

#endif