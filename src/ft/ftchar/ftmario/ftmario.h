#ifndef _FTMARIO_H_
#define _FTMARIO_H_

#include "ftmario_functions.h"

#define FTMARIO_FIREBALL_SPAWN_JOINT 16

#define FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD 50   // Minimum stick range required for direction change (velocity)
#define FTMARIO_SUPERJUMP_TURN_MODEL_THRESHOLD 20   // Minimum stick range required for direction change (model rotation)
#define FTMARIO_SUPERJUMP_AIR_DRIFT 0.6F            // Aerial drift multiplier during freefall (FallSpecial)
#define FTMARIO_SUPERJUMP_LANDING_LAG 0.28F         // Divides animation length and rounds it up (7 / 0.28 = 25 frames of landing lag) 
#define FTMARIO_SUPERJUMP_STICK_Y_UNK -44           // ???

#define FTMARIO_TORNADO_VEL_X_GROUND 0.025F         // Base X-velocity on ground
#define FTMARIO_TORNADO_VEL_X_AIR 0.03F             // Base X-velocity in midair
#define FTMARIO_TORNADO_VEL_X_CLAMP 17.0F           // Maximum X-velocity
#define FTMARIO_TORNADO_VEL_Y_CLAMP 40.0F           // Maximum Y-velocity during Tornado
#define FTMARIO_TORNADO_VEL_Y_BASE 15.0F            // Subtract 0.0 or FTMARIO_TORNADO_VEL_Y_TAP based on whether tornado charge is empty or full, respectively
#define FTMARIO_TORNADO_VEL_Y_TAP 22.0F             // Y-velocity added per B-tap during Mario Tornado

extern ftStatusDesc dFTMarioSpecialStatusDesc[/* */];

extern void *gFTDataMarioMain;
extern void *gFTDataMarioBattleMotion;
extern void *gFTDataMarioModel;
extern void *gFTDataMarioSpecial1;
extern void *gFTDataMarioSpecial2;
extern void *gFTDataMarioSpecial3;
extern u32 gFTDataMarioParticleBankID;

extern void *gFTDataMetalMarioMain;
extern void *gFTDataMetalMarioBattleMotion;
extern void *gFTDataMetalMarioSubMotion;
extern void *gFTDataMetalMarioModel;
extern void *gFTDataMetalMarioSpecial1;
extern void *gFTDataMetalMarioSpecial2;
extern void *gFTDataMetalMarioSpecial3;
extern u32 gFTDataMetalMarioParticleBankID;

extern void *gFTDataPolyMarioMain;
extern void *gFTDataPolyMarioSubMotion;
extern void *gFTDataPolyMarioModel;
extern u32 gFTDataPolyMarioParticleBankID;

typedef enum ftMarioMotion
{
    ftMotion_Mario_Attack13 = ftMotion_Common_SpecialStart,
    ftMotion_Mario_AppearR,
    ftMotion_Mario_AppearL,
    ftMotion_Mario_SpecialN,
    ftMotion_Mario_SpecialAirN,
    ftMotion_Mario_SpecialHi,
    ftMotion_Mario_SpecialAirHi,
    ftMotion_Mario_SpecialLw,
    ftMotion_Mario_SpecialAirLw

} ftMarioMotion;

typedef enum ftMarioStatus
{
    ftStatus_Mario_Attack13 = ftStatus_Common_SpecialStart,
    ftStatus_Mario_AppearR,
    ftStatus_Mario_AppearL,
    ftStatus_Mario_SpecialN,
    ftStatus_Mario_SpecialAirN,
    ftStatus_Mario_SpecialHi,
    ftStatus_Mario_SpecialAirHi,
    ftStatus_Mario_SpecialLw,
    ftStatus_Mario_SpecialAirLw

} ftMarioStatus;

typedef struct ftMario_FighterVars
{
    sb32 is_expend_tornado;

} ftMario_FighterVars;

typedef struct ftMarioSpecialHiStatusVars
{
    sb32 is_air_bool;

} ftMarioSpecialHiStatusVars;

typedef struct ftMarioSpecialLwStatusVars
{
    f32 friction; // Ground drift of Mario Tornado
    s32 dust_gfx_int;  // Interval between dust GFX kicked up during Mario Tornado

} ftMarioSpecialLwStatusVars;

typedef union ftMario_StatusVars
{
    ftMarioSpecialHiStatusVars specialhi;
    ftMarioSpecialLwStatusVars speciallw;

} ftMario_StatusVars;

#endif
