#ifndef _FTCAPTAIN_H_
#define _FTCAPTAIN_H_

#include <ft/fttypes.h>

#define FTCAPTAIN_FALCONPUNCH_VEL_BASE 65.0F
#define FTCAPTAIN_FALCONPUNCH_VEL_MUL 0.92

#define FTCAPTAIN_FALCONDIVE_UNK_TIMER 15
#define FTCAPTAIN_FALCONDIVE_TURN_STICK_RANGE_MIN 18
#define FTCAPTAIN_FALCONDIVE_FALLSPECIAL_DRIFT 0.72F
#define FTCAPTAIN_FALCONDIVE_AIR_ACCEL_MUL 1.1F
#define FTCAPTAIN_FALCONDIVE_AIR_SPEED_MAX_MUL 0.8F
#define FTCAPTAIN_FALCONDIVE_LANDING_LAG 0.65F

#define FTCAPTAIN_FALCONKICK_VEL_SCALE_APPLY_TIME 6
#define FTCAPTAIN_FALCONKICK_VEL_SCALE_DIV 2.0F

extern ftStatusDesc ftStatus_Captain_SpecialDesc[/* */];

typedef enum ftCaptainAction
{
    ftStatus_Captain_Attack13 = ftStatus_Common_SpecialStart,
    ftStatus_Captain_Attack100Start,
    ftStatus_Captain_Attack100Loop,
    ftStatus_Captain_Attack100End,
    ftStatus_Captain_AppearRStart,
    ftStatus_Captain_AppearLStart,
    ftStatus_Captain_AppearREnd,
    ftStatus_Captain_AppearLEnd,
    ftStatus_Captain_SpecialN,
    ftStatus_Captain_SpecialAirN,
    ftStatus_Captain_SpecialLw,                                 // Grounded Falcon Kick
    ftStatus_Captain_SpecialLwAir,                              // Grounded -> aerial Falcon Kick
    ftStatus_Captain_SpecialLwLanding,                          // Landing from aerial Falcon Kick                             
    ftStatus_Captain_SpecialAirLw,                              // Aerial Falcon Kick
    ftStatus_Captain_SpecialLwBound,                            // Wall collision from Falcon Kick
    ftStatus_Captain_SpecialHi,
    ftStatus_Captain_SpecialHiCatch,
    ftStatus_Captain_SpecialHiThrow,
    ftStatus_Captain_SpecialAirHi

} ftCaptainAction;

typedef struct ftCaptain_FighterVars
{
    s32 falcon_punch_unk;

} ftCaptain_FighterVars;

typedef struct ftCaptain_SpecialHi_StatusVars
{
    u16 unk_0x0;
    Vec3f vel;

} ftCaptain_SpecialHi_StatusVars;

typedef struct ftCaptain_SpecialLw_StatusVars
{
    u16 scale_apply_timer;
    f32 vel_scale;

} ftCaptain_SpecialLw_StatusVars;

typedef union ftCaptain_StatusVars
{
    ftCaptain_SpecialHi_StatusVars specialhi;
    ftCaptain_SpecialLw_StatusVars speciallw;

} ftCaptain_StatusVars;

#endif