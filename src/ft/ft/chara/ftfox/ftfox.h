#ifndef _FTFOX_H_
#define _FTFOX_H_

#include <ft/fttypes.h>

#include "ftfox_functions.h"

#define FTFOX_BLASTER_HOLD_JOINT 17		// Joint to attach Blaster
#define FTFOX_BLASTER_SPAWN_OFF_X 60.0F // X-Offset of Blaster spawn

#define FTFOX_FIREFOX_LAUNCH_DELAY 35				// Startup frames required to pass for Firefox to take off
#define FTFOX_FIREFOX_GRAVITY_DELAY 15				// Frames required for gravity to take effect
#define FTFOX_FIREFOX_DECELERATE_DELAY 2			// Frames required to pass for Firefox to being deceleration
#define FTFOX_FIREFOX_DECELERATE_VEL 3.03571438789F // Value removed from velocity per frame on deceleration
#define FTFOX_FIREFOX_DECELERATE_END 1.5F // Value removed from velocity per frame on end animation (ground only?)
#define FTFOX_FIREFOX_COLL_ANGLE_UNK 0.349065870047F // ???
#define FTFOX_FIREFOX_TRAVEL_TIME 30				 // Frames Firefox travels
#define FTFOX_FIREFOX_VEL_XY 115.0F
#define FTFOX_FIREFOX_ANGLE_STICK_THRESHOLD 45 // Minimum stick range required to angle Firefox
#define FTFOX_FIREFOX_MODEL_STICK_THRESHOLD 11 // Minimum stick range required to change Fox's model rotation
#define FTFOX_FIREFOX_AIR_DRIFT 1.0F		   // Aerial drift multiplier during freefall (FallSpecial)
#define FTFOX_FIREFOX_LANDING_LAG                                                                                      \
	0.34F // Divides animation length and rounds it up (7 / 0.34 = 21 frames of
		  // landing lag)

#define FTFOX_REFLECTOR_RELEASE_LAG                                                                                    \
	18 // Number of frames Fox is automatically locked in Reflector before the
	   // B button is read
#define FTFOX_REFLECTOR_TURN_FRAMES 4	// Number of frames it takes Fox to turn around during Reflector
#define FTFOX_REFLECTOR_GRAVITY_DELAY 5 // Frames required for gravity to take effect
#define FTFOX_REFLECTOR_GRAVITY 0.8F

extern ftStatusDesc ftStatus_SpecialDesc_Fox[/* */];

typedef enum ftFoxMotion
{
	ftMotion_Fox_Attack100Start = ftMotion_Common_SpecialStart,
	ftMotion_Fox_Attack100Loop,
	ftMotion_Fox_Attack100End,
	ftMotion_Fox_AppearR,
	ftMotion_Fox_AppearL,
	ftMotion_Fox_SpecialN,
	ftMotion_Fox_SpecialAirN,
	ftMotion_Fox_SpecialHiStart,
	ftMotion_Fox_SpecialAirHiStart,
	ftMotion_Fox_SpecialHiHold,
	ftMotion_Fox_SpecialAirHiHold,
	ftMotion_Fox_SpecialHi,
	ftMotion_Fox_SpecialAirHi,
	ftMotion_Fox_SpecialHiEnd,
	ftMotion_Fox_SpecialAirHiEnd,
	ftMotion_Fox_SpecialAirHiBound,
	ftMotion_Fox_SpecialLwStart,
	ftMotion_Fox_SpecialLwLoop,
	ftMotion_Fox_SpecialLwHit,
	ftMotion_Fox_SpecialLwEnd,
	ftMotion_Fox_SpecialAirLwStart,
	ftMotion_Fox_SpecialAirLwLoop,
	ftMotion_Fox_SpecialAirLwHit,
	ftMotion_Fox_SpecialAirLwEnd

} ftFoxMotion;

typedef enum ftFoxStatus
{
	ftStatus_Fox_Attack100Start = ftStatus_Common_SpecialStart,
	ftStatus_Fox_Attack100Loop,
	ftStatus_Fox_Attack100End,
	ftStatus_Fox_AppearR,
	ftStatus_Fox_AppearL,
	ftStatus_Fox_SpecialN,
	ftStatus_Fox_SpecialAirN,
	ftStatus_Fox_SpecialHiStart,
	ftStatus_Fox_SpecialAirHiStart,
	ftStatus_Fox_SpecialHiHold,
	ftStatus_Fox_SpecialAirHiHold,
	ftStatus_Fox_SpecialHi,
	ftStatus_Fox_SpecialAirHi,
	ftStatus_Fox_SpecialHiEnd,
	ftStatus_Fox_SpecialAirHiEnd,
	ftStatus_Fox_SpecialAirHiBound,
	ftStatus_Fox_SpecialLwStart,
	ftStatus_Fox_SpecialLwHit,
	ftStatus_Fox_SpecialLwEnd,
	ftStatus_Fox_SpecialLwLoop,
	ftStatus_Fox_SpecialLwTurn,
	ftStatus_Fox_SpecialAirLwStart,
	ftStatus_Fox_SpecialAirLwHit,
	ftStatus_Fox_SpecialAirLwEnd,
	ftStatus_Fox_SpecialAirLwLoop,
	ftStatus_Fox_SpecialAirLwTurn

} ftFoxStatus;

typedef struct ftFox_SpecialHi_StatusVars
{
	s32 launch_delay;
	s32 gravity_delay;
	f32 angle;
	s32 anim_frames;
	s32 decelerate_wait;
	s32 pass_timer;

} ftFox_SpecialHi_StatusVars;

typedef struct ftFox_SpecialLw_StatusVars
{
	s32 release_lag;
	s32 turn_frames;
	sb32 is_release;
	GObj* effect_gobj;
	s32 gravity_delay;

} ftFox_SpecialLw_StatusVars;

typedef union ftFox_StatusVars
{
	ftFox_SpecialHi_StatusVars specialhi;
	ftFox_SpecialLw_StatusVars speciallw;

} ftFox_StatusVars;

#endif