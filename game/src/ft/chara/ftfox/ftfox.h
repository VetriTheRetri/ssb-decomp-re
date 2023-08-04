#ifndef _FTFOX_H_
#define _FTFOX_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>

#define FTFOX_BLASTER_HOLD_JOINT 17                     // Joint to attach Blaster
#define FTFOX_BLASTER_SPAWN_OFF_X 60.0F                 // X-Offset of Blaster spawn

#define FTFOX_FIREFOX_LAUNCH_DELAY 35                   // Startup frames required to pass for Firefox to take off 
#define FTFOX_FIREFOX_GRAVITY_DELAY 15                  // Frames required for gravity to take effect
#define FTFOX_FIREFOX_DECELERATE_DELAY 2                // Frames required to pass for Firefox to being deceleration
#define FTFOX_FIREFOX_DECELERATE_VEL 3.03571438789F     // Value removed from velocity per frame on deceleration
#define FTFOX_FIREFOX_DECELERATE_END 1.5F               // Value removed from velocity per frame on end animation (ground only?)
#define FTFOX_FIREFOX_COLL_ANGLE_UNK 0.349065870047F    // ???
#define FTFOX_FIREFOX_TRAVEL_TIME 30                    // Frames Firefox travels
#define FTFOX_FIREFOX_VEL_XY 115.0F
#define FTFOX_FIREFOX_ANGLE_STICK_THRESHOLD 45          // Minimum stick range required to angle Firefox
#define FTFOX_FIREFOX_MODEL_STICK_THRESHOLD 11          // Minimum stick range required to change Fox's model rotation
#define FTFOX_FIREFOX_AIR_DRIFT 1.0F                    // Aerial drift multiplier during freefall (FallSpecial)
#define FTFOX_FIREFOX_LANDING_LAG 0.34F                 // Divides animation length and rounds it up (7 / 0.34 = 21 frames of landing lag)

#define FTFOX_REFLECTOR_RELEASE_LAG 18                  // Number of frames Fox is automatically locked in Reflector before the B button is read
#define FTFOX_REFLECTOR_TURN_FRAMES 4                   // Number of frames it takes Fox to turn around during Reflector
#define FTFOX_REFLECTOR_GRAVITY_DELAY 5                 // Frames required for gravity to take effect
#define FTFOX_REFLECTOR_GRAVITY 0.8F

typedef enum ftFoxAction
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
    ftStatus_Fox_SpecialHiBound,
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

} ftFoxAction;

#endif