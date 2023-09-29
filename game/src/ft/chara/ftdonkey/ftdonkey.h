#ifndef _FTDONKEY_H_
#define _FTDONKEY_H_

#include <ft/fttypes.h>

#include "ftdonkey_functions.h"

#define FTDONKEY_GIANTPUNCH_CHARGE_MAX 10
#define FTDONKEY_GIANTPUNCH_CHARGE_DAMAGE_MUL 2 // Uncharged Giant Punch damage = base hitbox damage + charge level * this value
#define FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID 6
#define FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH 0
#define FTDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED 2.0F
#define FTDONKEY_GIANTPUNCH_VEL_MUL 8.0F        // Multiplies horizontal ground velocity only

#define FTDONKEY_SPINNINGKONG_GROUND_ACCEL 0.025F
#define FTDONKEY_SPINNINGKONG_GROUND_VEL_MAX 26.0F
#define FTDONKEY_SPINNINGKONG_AIR_VEL_Y 20.3F
#define FTDONKEY_SPINNINGKONG_AIR_ACCEL 0.05F
#define FTDONKEY_SPINNINGKONG_AIR_VEL_MAX 38.0F
#define FTDONKEY_SPINNINGKONG_START_GRAVITY_MUL 0.07F
#define FTDONKEY_SPINNINGKONG_END_GRAVITY_MUL 1.0F
#define FTDONKEY_SPINNINGKONG_FALLSPECIAL_DRIFT 1.0F
#define FTDONKEY_SPINNINGKONG_LANDING_LAG 0.3F

extern ftStatusDesc ftStatus_Donkey_SpecialDesc[/* */];

typedef enum ftDonkeyMotion
{
	ftMotion_Donkey_AppearR = ftMotion_Common_SpecialStart,
	ftMotion_Donkey_AppearL,
	ftMotion_Donkey_SpecialNStart,
	ftMotion_Donkey_SpecialAirNStart,
	ftMotion_Donkey_SpecialNLoop,
	ftMotion_Donkey_SpecialAirNLoop,
	ftMotion_Donkey_SpecialNEnd,
	ftMotion_Donkey_SpecialAirNEnd,
	ftMotion_Donkey_SpecialNFull,
	ftMotion_Donkey_SpecialAirNFull,
	ftMotion_Donkey_SpecialHi,
	ftMotion_Donkey_SpecialAirHi,
	ftMotion_Donkey_SpecialLwStart,
	ftMotion_Donkey_SpecialLwLoop,
	ftMotion_Donkey_SpecialLwEnd,
	ftMotion_Donkey_ThrowFWait,
	ftMotion_Donkey_ThrowFWalkSlow,
	ftMotion_Donkey_ThrowFWalkMiddle,
	ftMotion_Donkey_ThrowFWalkFast,
	ftMotion_Donkey_ThrowFTurn,
	ftMotion_Donkey_ThrowFKneeBend,
	ftMotion_Donkey_ThrowFFall,
	ftMotion_Donkey_ThrowFLanding,
	ftMotion_Donkey_ThrowFDamage,
	ftMotion_Donkey_ThrowFF,
	ftMotion_Donkey_ThrowAirFF,

	// These last few are probably nonexistent

	ftMotion_Donkey_HeavyThrowF,
	ftMotion_Donkey_HeavyThrowB,
	ftMotion_Donkey_HeavyThrowF4,
	ftMotion_Donkey_HeavyThrowB4

} ftDonkeyMotion;

typedef enum ftDonkeyStatus
{
	ftStatus_Donkey_AppearR = ftStatus_Common_SpecialStart,
	ftStatus_Donkey_AppearL,
	ftStatus_Donkey_SpecialNStart,
	ftStatus_Donkey_SpecialAirNStart,
	ftStatus_Donkey_SpecialNLoop,
	ftStatus_Donkey_SpecialAirNLoop,
	ftStatus_Donkey_SpecialNEnd,
	ftStatus_Donkey_SpecialAirNEnd,
	ftStatus_Donkey_SpecialNFull,
	ftStatus_Donkey_SpecialAirNFull,
	ftStatus_Donkey_SpecialHi,
	ftStatus_Donkey_SpecialAirHi,
	ftStatus_Donkey_SpecialLwStart,
	ftStatus_Donkey_SpecialLwLoop,
	ftStatus_Donkey_SpecialLwEnd,
	ftStatus_Donkey_ThrowFWait,
	ftStatus_Donkey_ThrowFWalkSlow,
	ftStatus_Donkey_ThrowFWalkMiddle,
	ftStatus_Donkey_ThrowFWalkFast,
	ftStatus_Donkey_ThrowFTurn,
	ftStatus_Donkey_ThrowFKneeBend,
	ftStatus_Donkey_ThrowFFall,
	ftStatus_Donkey_ThrowFLanding,
	ftStatus_Donkey_ThrowFDamage,
	ftStatus_Donkey_ThrowFF,
	ftStatus_Donkey_ThrowAirFF,
	ftStatus_Donkey_HeavyThrowF,
	ftStatus_Donkey_HeavyThrowB,
	ftStatus_Donkey_HeavyThrowF4,
	ftStatus_Donkey_HeavyThrowB4

} ftDonkeyStatus;

typedef struct ftDonkey_FighterVars
{
	s32 charge_level;

} ftDonkey_FighterVars;

typedef struct ftDonkey_SpecialN_StatusVars
{
	bool32 is_release;
	s32 charge_level;
	bool32 is_charging;
	bool32 is_cancel;

} ftDonkey_SpecialN_StatusVars;

typedef struct ftDonkey_SpecialHi_StatusVars
{
	s32 unk_0x0;

} ftDonkey_SpecialHi_StatusVars;

typedef struct ftDonkey_SpecialLw_StatusVars
{
	bool32 is_loop;

} ftDonkey_SpecialLw_StatusVars;

typedef union ftDonkey_StatusVars
{
	ftDonkey_SpecialN_StatusVars specialn;
	ftDonkey_SpecialHi_StatusVars specialhi;
	ftDonkey_SpecialLw_StatusVars speciallw;

} ftDonkey_StatusVars;

#endif