#ifndef _FTLINK_H_
#define _FTLINK_H_

#include "ftlinkfunctions.h"

#define FTLINK_BOOMERANG_SPAWN_JOINT ftParts_Joint_TopN // Joint to attach Boomerang
#define FTLINK_BOOMERANG_SMASH_BUFFER 8                 // Frames of smash input buffer
#define FTLINK_BOOMERANG_SMASH_STICK_MIN 56             // Minimum X-Axis range range required for smash input

#define FTLINK_SPINATTACK_SPAWN_JOINT ftParts_Joint_TopN
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
    nFTLinkMotionAttack13 = nFTCommonMotionSpecialStart,
    nFTLinkMotionAttack100Start,
    nFTLinkMotionAttack100Loop,
    nFTLinkMotionAttack100End,
    nFTLinkMotionAppearR,
    nFTLinkMotionAppearL,
    nFTLinkMotionSpecialHi,
    nFTLinkMotionSpecialHiEnd,
    nFTLinkMotionSpecialAirHi,
    nFTLinkMotionSpecialN,
    nFTLinkMotionSpecialNReturn,
    nFTLinkMotionSpecialNEmpty,
    nFTLinkMotionSpecialAirN,
    nFTLinkMotionSpecialAirNReturn,
    nFTLinkMotionSpecialAirNEmpty,
    nFTLinkMotionSpecialLw,
    nFTLinkMotionSpecialAirLw

} ftLinkMotion;

typedef enum ftLinkStatus
{
    nFTLinkStatusAttack13 = nFTCommonStatusSpecialStart,
    nFTLinkStatusAttack100Start,
    nFTLinkStatusAttack100Loop,
    nFTLinkStatusAttack100End,
    nFTLinkStatusAppearR,
    nFTLinkStatusAppearL,
    nFTLinkStatusSpecialHi,
    nFTLinkStatusSpecialHiEnd,
    nFTLinkStatusSpecialAirHi,
    nFTLinkStatusSpecialN,
    nFTLinkStatusSpecialNReturn,
    nFTLinkStatusSpecialNEmpty,
    nFTLinkStatusSpecialAirN,
    nFTLinkStatusSpecialAirNReturn,
    nFTLinkStatusSpecialAirNEmpty,
    nFTLinkStatusSpecialLw,
    nFTLinkStatusSpecialAirLw

} ftLinkStatus;

typedef struct ftLinkFighterVars
{
    GObj *boomerang_gobj;

} ftLinkFighterVars;

typedef struct ftLinkSpecialNStatusVars
{
    sb32 is_smash;

} ftLinkSpecialNStatusVars;

typedef struct ftLinkSpecialHiStatusVars
{
    GObj *spin_attack_gobj;

} ftLinkSpecialHiStatusVars;

typedef union ftLinkStatusVars
{
    ftLinkSpecialNStatusVars specialn;
    ftLinkSpecialHiStatusVars specialhi;

} ftLinkStatusVars;

#endif
