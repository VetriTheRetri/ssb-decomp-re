#ifndef _FTDONKEY_H_
#define _FTDONKEY_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>

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

typedef enum ftDonkeyAction
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

} ftDonkeyAction;

#endif