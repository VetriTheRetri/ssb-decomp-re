#ifndef _FTNESS_H_
#define _FTNESS_H_

#include <ft/fttypes.h>
#include <wp/weaponvars.h>

#include "ftness_functions.h"

// Special move attributes

#define FTNESS_PKFIRE_SPAWN_JOINT 0
#define FTNESS_PKFIRE_SPAWN_OFF_X 100.0F
#define FTNESS_PKFIRE_SPAWN_OFF_Y 180.0F
#define FTNESS_PKFIRE_SPARK_ANGLE_AIR F_DEG_TO_RAD(-38.0F) // -0.6632251F
#define FTNESS_PKFIRE_SPARK_ANGLE_GROUND (-3.6F) // -0.06283185F
#define FTNESS_PKFIRE_SPARK_VEL_AIR 95.0F
#define FTNESS_PKFIRE_SPARK_VEL_GROUND 73.0F

#define FTNESS_PKTHUNDER_TRAIL_POS_COUNT ((WPPKTHUNDER_PARTS_COUNT * 2) + ((WPPKTHUNDER_PARTS_COUNT * 2) / WPPKTHUNDER_PARTS_COUNT))
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

extern ftStatusDesc ftStatus_Ness_SpecialDesc[/* */];

// Moveset script IDs
typedef enum ftNessMotion
{
    ftMotion_Ness_Attack13 = ftMotion_Common_SpecialStart,
    ftMotion_Ness_AppearRStart,
    ftMotion_Ness_AppearLStart,
    ftMotion_Ness_AppearWait,
    ftMotion_Ness_AppearREnd,
    ftMotion_Ness_AppearLEnd,
    ftMotion_Ness_SpecialN,
    ftMotion_Ness_SpecialAirN,
    ftMotion_Ness_SpecialHiStart,
    ftMotion_Ness_SpecialHiHold,
    ftMotion_Ness_SpecialHiEnd,
    ftMotion_Ness_SpecialHi,
    ftMotion_Ness_SpecialAirHiStart,
    ftMotion_Ness_SpecialAirHiHold,
    ftMotion_Ness_SpecialAirHiEnd,
    ftMotion_Ness_SpecialAirHiBound,
    ftMotion_Ness_SpecialAirHi,
    ftMotion_Ness_SpecialLwStart,
    ftMotion_Ness_SpecialLwHold,
    ftMotion_Ness_SpecialLwHit,
    ftMotion_Ness_SpecialLwEnd,
    ftMotion_Ness_SpecialAirLwStart,
    ftMotion_Ness_SpecialAirLwHold,
    ftMotion_Ness_SpecialAirLwHit,
    ftMotion_Ness_SpecialAirLwEnd

} ftNessMotion;

// Status IDs
typedef enum ftNessStatus
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

} ftNessStatus;

typedef struct ftNess_FighterVars
{
    bool32 is_thunder_destroy;      // Bool to check if PK Thunder exists
    s32 pkthunder_trail_id;
    s16 pkthunder_trail_x[FTNESS_PKTHUNDER_TRAIL_POS_COUNT];
    s16 pkthunder_trail_y[FTNESS_PKTHUNDER_TRAIL_POS_COUNT];

} ftNess_FighterVars;

typedef struct ftNess_SpecialHi_StatusVars
{
    s32 pkjibaku_delay;            // Frames before PK Thunder Blast can be initiated (PK Thunder will go through Ness while this timer is greater than 0)
    s32 pkthunder_end_delay;       // Frames before PK Thunder transitions to its ending animation after the projectile despawns 
    s32 pkthunder_gravity_delay;   // Frames before Ness is affected by gravity while performing PK Thunder
    GObj *pkthunder_gobj;          // Pointer to the PK Thunder object
    s32 pkjibaku_anim_length;      // Number of frames PK Thunder Blast will loop
    f32 pkjibaku_angle;            // Angle of PK Thunder Blast (converted to 2D velocity vector with sin(vel) and cos(vel))
    Vec3f pkthunder_pos;           // Might be PK Thunder's collision detection when checking if Ness is hitting himself with it?

} ftNess_SpecialHi_StatusVars;

typedef struct ftNess_SpecialLw_StatusVars
{
    s32 release_lag;                // Frames PSI Magnet automatically stays in the hold animation after initiating the move
    bool32 is_release;              // Bool to check if PSI Magnet should be dropped (alas the B button is no longer being held)
    s32 gravity_delay;              // Frames before Ness is affected by gravity after initiating PSI Magnet

} ftNess_SpecialLw_StatusVars;

typedef union ftNess_StatusVars
{
    ftNess_SpecialHi_StatusVars specialhi;
    ftNess_SpecialLw_StatusVars speciallw;

} ftNess_StatusVars;



#endif