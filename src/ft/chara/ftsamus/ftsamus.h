#ifndef _FTSAMUS_H_
#define _FTSAMUS_H_

#include <ft/fttypes.h>

#include "ftsamus_functions.h"

#define FTSAMUS_CHARGE_JOINT 16             // Bone to attach Charge Shot
#define FTSAMUS_CHARGE_MAX 7                // Maximum charge level
#define FTSAMUS_CHARGE_INT 20               // Charge interval, level increrments once this timer hits zero, then begins counting the next iteration
#define FTSAMUS_CHARGE_COLANIM_ID 0x6
#define FTSAMUS_CHARGE_COLANIM_LENGTH 0
#define FTSAMUS_CHARGE_OFF_X 180.0F         // X-Offset of Charge Shot
#define FTSAMUS_CHARGE_RECOIL_BASE 10.0F    // Base unit of recoil taken from firing Charge Shot
#define FTSAMUS_CHARGE_RECOIL_MUL 2.0F      // Charge Recoil multiplier
#define FTSAMUS_CHARGE_RECOIL_ADD 20.0F     // Added velocity

#define FTSAMUS_SCREWATTACK_PASS_STICK_RANGE_MIN (-44)
#define FTSAMUS_SCREWATTACK_DRIFT_MUL 0.5F
#define FTSAMUS_SCREWATTACK_DRIFT_CLAMP 20.0F
#define FTSAMUS_SCREWATTACK_VEL_X_BASE 10.0F
#define FTSAMUS_SCREWATTACK_VEL_Y_BASE 62.0F
#define FTSAMUS_SCREWATTACK_FALLSPECIAL_DRIFT 0.66F
#define FTSAMUS_SCREWATTACK_LANDING_LAG 0.4F

#define FTSAMUS_BOMB_OFF_Y 60.0F
#define FTSAMUS_BOMB_VEL_Y_BASE 40.0F
#define FTSAMUS_BOMB_VEL_Y_SUB 10.0F
#define FTSAMUS_BOMB_DRIFT 0.66F

extern ftStatusDesc dFTSamusSpecialStatusDesc[/* */];

extern void *gFTDataSamusMain;
extern void *gFTDataSamusBattleMotion;
extern void *gFTDataSamusModel;
extern void *gFTDataSamusSpecial1;
extern void *gFTDataSamusSpecial2;
extern void *gFTDataSamusSpecial3;
extern u32 gFTDataSamusParticleBankID;

extern void *gFTDataPolySamusMain;
extern void *gFTDataPolySamusSubMotion;
extern void *gFTDataPolySamusModel;
extern u32 gFTDataPolySamusParticleBankID;

typedef enum ftSamusMotion
{
    ftMotion_Samus_AppearR = ftMotion_Common_SpecialStart,
    ftMotion_Samus_AppearL,
    ftMotion_Samus_SpecialNStart,
    ftMotion_Samus_SpecialNLoop,
    ftMotion_Samus_SpecialNEnd,
    ftMotion_Samus_SpecialAirNStart,
    ftMotion_Samus_SpecialAirNEnd,
    ftMotion_Samus_SpecialHi,
    ftMotion_Samus_SpecialAirHi,
    ftMotion_Samus_SpecialLw,
    ftMotion_Samus_SpecialAirLw

} ftSamusMotion;

typedef enum ftSamusStatus
{
    ftStatus_Samus_AppearR = ftStatus_Common_SpecialStart,
    ftStatus_Samus_AppearL,
    ftStatus_Samus_SpecialNStart,
    ftStatus_Samus_SpecialNLoop,
    ftStatus_Samus_SpecialNEnd,
    ftStatus_Samus_SpecialAirNStart,
    ftStatus_Samus_SpecialAirNEnd,
    ftStatus_Samus_SpecialHi,
    ftStatus_Samus_SpecialAirHi,
    ftStatus_Samus_SpecialLw,
    ftStatus_Samus_SpecialAirLw

} ftSamusStatus;

typedef struct ftSamus_FighterVars
{
    s32 charge_level;
    s32 charge_recoil;

} ftSamus_FighterVars;

typedef struct ftSamusSpecialNStatusVars
{
    sb32 is_release;
    s32 charge_int;
    GObj *charge_gobj;

} ftSamusSpecialNStatusVars;

typedef struct ftSamusSpecialLwStatusVars
{
    sb32 unused;

} ftSamusSpecialLwStatusVars;

typedef union ftSamus_StatusVars
{
    ftSamusSpecialNStatusVars specialn;
    ftSamusSpecialLwStatusVars speciallw;

} ftSamus_StatusVars;

#endif