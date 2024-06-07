#ifndef _FTLINK_H_
#define _FTLINK_H_

#include <ft/fttypes.h>

#include "ftlink_functions.h"

#define FTLINK_BOOMERANG_SPAWN_JOINT 0                  // Joint to attach Boomerang
#define FTLINK_BOOMERANG_SMASH_BUFFER 8                 // Frames of smash input buffer
#define FTLINK_BOOMERANG_SMASH_STICK_MIN 56             // Minimum X-Axis range range required for smash input

#define FTLINK_SPINATTACK_SPAWN_JOINT 0
#define FTLINK_SPINATTACK_EXTEND_POS_COUNT 4
#define FTLINK_SPINATTACK_FLAG_SIZE_1 0.0F             // Size of Spin Attack item hitbox when 0x184 @ ftStruct is 1
#define FTLINK_SPINATTACK_FLAG_SIZE_2 120.0F           // Size of Spin Attack item hitbox when 0x184 @ ftStruct is 2
#define FTLINK_SPINATTACK_FLAG_SIZE_3 100.0F           // Size of Spin Attack item hitbox when 0x184 @ ftStruct is 3
#define FTLINK_SPINATTACK_FLAG_SIZE_4 80.0F            // Size of Spin Attack item hitbox when 0x184 @ ftStruct is 4
#define FTLINK_SPINATTACK_AIR_VEL_Y 69.0F              // Nice vertical height gain
#define FTLINK_SPINATTACK_GRAVITY_MUL 0.23F            // Multiplies gravity
#define FTLINK_SPINATTACK_AIR_DRIFT_MUL 0.5F           // Multiplies aerial drift
#define FTLINK_SPINATTACK_FALLSPECIAL_DRIFT 0.6F       // Aerial drift multiplier once Link enters freefall after aerial Spin Attack
#define FTLINK_SPINATTACK_LANDING_LAG 0.65F            // Divide landing animation length by this value

extern ftStatusDesc dFTLinkSpecialStatusDesc[/* */];

extern void *gFTDataLinkMain;
extern void *gFTDataLinkBattleMotion;
extern void *gFTDataLinkModel;
extern void *gFTDataLinkSpecial1;
extern void *gFTDataLinkSpecial2;
extern void *gFTDataLinkSpecial3;
extern u32 gFTDataLinkParticleBankID;

extern void *gFTDataPolyLinkMain;
extern void *gFTDataPolyLinkSubMotion;
extern void *gFTDataPolyLinkModel;
extern u32 gFTDataPolyLinkParticleBankID;

typedef enum ftLinkMotion
{
    ftMotion_Link_Attack13 = ftMotion_Common_SpecialStart,
    ftMotion_Link_Attack100Start,
    ftMotion_Link_Attack100Loop,
    ftMotion_Link_Attack100End,
    ftMotion_Link_AppearR,
    ftMotion_Link_AppearL,
    ftMotion_Link_SpecialHi,
    ftMotion_Link_SpecialHiEnd,
    ftMotion_Link_SpecialAirHi,
    ftMotion_Link_SpecialN,
    ftMotion_Link_SpecialNReturn,
    ftMotion_Link_SpecialNEmpty,
    ftMotion_Link_SpecialAirN,
    ftMotion_Link_SpecialAirNReturn,
    ftMotion_Link_SpecialAirNEmpty,
    ftMotion_Link_SpecialLw,
    ftMotion_Link_SpecialAirLw

} ftLinkMotion;

typedef enum ftLinkStatus
{
    ftStatus_Link_Attack13 = ftStatus_Common_SpecialStart,
    ftStatus_Link_Attack100Start,
    ftStatus_Link_Attack100Loop,
    ftStatus_Link_Attack100End,
    ftStatus_Link_AppearR,
    ftStatus_Link_AppearL,
    ftStatus_Link_SpecialHi,
    ftStatus_Link_SpecialHiEnd,
    ftStatus_Link_SpecialAirHi,
    ftStatus_Link_SpecialN,
    ftStatus_Link_SpecialNReturn,
    ftStatus_Link_SpecialNEmpty,
    ftStatus_Link_SpecialAirN,
    ftStatus_Link_SpecialAirNReturn,
    ftStatus_Link_SpecialAirNEmpty,
    ftStatus_Link_SpecialLw,
    ftStatus_Link_SpecialAirLw

} ftLinkStatus;

typedef struct ftLink_FighterVars
{
    GObj *boomerang_gobj;

} ftLink_FighterVars;

typedef struct ftLinkSpecialNStatusVars
{
    sb32 is_smash;

} ftLinkSpecialNStatusVars;

typedef struct ftLinkSpecialHiStatusVars
{
    GObj *spin_attack_gobj;

} ftLinkSpecialHiStatusVars;

typedef union ftLink_StatusVars
{
    ftLinkSpecialNStatusVars specialn;
    ftLinkSpecialHiStatusVars specialhi;

} ftLink_StatusVars;

#endif