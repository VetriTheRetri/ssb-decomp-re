#ifndef _FTNESS_H_
#define _FTNESS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>

// Special move attributes

#define FTNESS_PKFIRE_SPAWN_JOINT 0
#define FTNESS_PKFIRE_SPAWN_OFF_X 100.0F
#define FTNESS_PKFIRE_SPAWN_OFF_Y 180.0F
#define FTNESS_PKFIRE_SPARK_ANGLE_AIR F_DEG_TO_RAD(-38.0F) // -0.6632251F
#define FTNESS_PKFIRE_SPARK_ANGLE_GROUND (-3.6F) // -0.06283185F
#define FTNESS_PKFIRE_SPARK_VEL_AIR 95.0F
#define FTNESS_PKFIRE_SPARK_VEL_GROUND 73.0F

#define FTNESS_PKTHUNDER_SPAWN_JOINT 12
#define FTNESS_PKTHUNDER_SPAWN_VEL_Y 60.0F
#define FTNESS_PKTHUNDER_COLLIDE_X 250.0F  // Width of Ness + PK Thunder collision detection box
#define FTNESS_PKTHUNDER_COLLIDE_Y 370.0F  // Height of Ness + PK Thunder collision detection box
#define FTNESS_PKTHUNDER_END_DELAY 30
#define FTNESS_PKTHUNDER_GRAVITY_DELAY 25
#define FTNESS_PKTHUNDER_LANDING_LAG F_PCT_TO_DEC(17.0F) // Divides landing animation length by this value
#define FTNESS_PKTHUNDER_FALLSPECIAL_DRIFT 0.6F
#define FTNESS_PKJIBAKU_DELAY 30
#define FTNESS_PKJIBAKU_ANIM_LENGTH 28
#define FTNESS_PKJIBAKU_HALT_ANGLE F_DEG_TO_RAD(155.0F) // Maximum angle of stage collision that doesn't cancel PK Thunder Blast? (2.7052603F)
#define FTNESS_PKJIBAKU_VEL 200.0F
#define FTNESS_PKJIBAKU_DECELERATE 6.142857F
#define FTNESS_PKJIBAKU_PASS_FRAME_END ((float)FTNESS_PKJIBAKU_ANIM_LENGTH - 3.0F)
#define FTNESS_PKJIBAKU_REBOUND_VEL_MAG 0.5F

#define FTNESS_PSI_MAGNET_RELEASE_LAG 30
#define FTNESS_PSI_MAGNET_GRAVITY_DELAY 4
#define FTNESS_PSI_MAGNET_COLANIM_ID 0x3F
#define FTNESS_PSI_MAGNET_COLANIM_LENGTH 0

typedef enum ftNessAction
{
    ftStatus_Ness_Attack13 = ftStatus_Common_SpecialStart,
    ftStatus_Ness_AppearRStart,
    ftStatus_Ness_AppearLStart,
    ftStatus_Ness_AppearWait,
    ftStatus_Ness_AppearREnd,
    ftStatus_Ness_AppearLEnd,
    ftStatus_Ness_SpecialN,
    ftStatus_Ness_SpecialAirN,
    ftStatus_Ness_SpecialHiStart,
    ftStatus_Ness_SpecialHiHold,
    ftStatus_Ness_SpecialHiEnd,
    ftStatus_Ness_SpecialHi,
    ftStatus_Ness_SpecialAirHiStart,
    ftStatus_Ness_SpecialAirHiHold,
    ftStatus_Ness_SpecialAirHiEnd,
    ftStatus_Ness_SpecialAirHiBound,
    ftStatus_Ness_SpecialAirHi,
    ftStatus_Ness_SpecialLwStart,
    ftStatus_Ness_SpecialLwHold,
    ftStatus_Ness_SpecialLwHit,
    ftStatus_Ness_SpecialLwEnd,
    ftStatus_Ness_SpecialAirLwStart,
    ftStatus_Ness_SpecialAirLwHold,
    ftStatus_Ness_SpecialAirLwHit,
    ftStatus_Ness_SpecialAirLwEnd

} ftNessAction;

#endif