#ifndef _FTMARIO_H_
#define _FTMARIO_H_

#include <ft/fttypes.h>

#define FTMARIO_FIREBALL_SPAWN_JOINT 16

#define FTMARIO_SUPERJUMP_TURN_STICK_THRESHOLD 50   // Minimum stick range required for direction change (velocity)
#define FTMARIO_SUPERJUMP_TURN_MODEL_THRESHOLD 21   // Minimum stick range required for direction change (model rotation)
#define FTMARIO_SUPERJUMP_AIR_DRIFT 0.6F            // Aerial drift multiplier during freefall (FallSpecial)
#define FTMARIO_SUPERJUMP_LANDING_LAG 0.28F         // Divides animation length and rounds it up (7 / 0.28 = 25 frames of landing lag) 
#define FTMARIO_SUPERJUMP_STICK_Y_UNK -44           // ???

#define FTMARIO_TORNADO_TAP_VEL_ADD 22.0F           // Y-velocity added per B-tap during Mario Tornado

typedef enum ftMarioAction
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

} ftMarioAction;

typedef struct ftMario_FighterVars
{
    bool32 is_expend_tornado;

} ftMario_FighterVars;

typedef struct ftMario_SpecialHi_StatusVars
{
    bool32 is_air_bool;

} ftMario_SpecialHi_StatusVars;

typedef struct ftMario_SpecialLw_StatusVars
{
    f32 friction; // Ground drift of Mario Tornado
    s32 dust_gfx_int;  // Interval between dust GFX kicked up during Mario Tornado

} ftMario_SpecialLw_StatusVars;

typedef union ftMario_StatusVars
{
    ftMario_SpecialHi_StatusVars specialhi;
    ftMario_SpecialLw_StatusVars speciallw;

} ftMario_StatusVars;

#endif