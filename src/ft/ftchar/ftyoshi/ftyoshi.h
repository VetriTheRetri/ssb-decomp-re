#ifndef _FTYOSHI_H_
#define _FTYOSHI_H_

#include <ft/fttypes.h>

#include "ftyoshi_functions.h"

#define FTYOSHI_JUMPAERIAL_KNOCKBACK_RESIST 140.0F

#define FTYOSHI_EGG_THROW_JOINT 3               // Bone to attach Egg

#define FTYOSHI_YOSHIBOMB_STAR_SPAWN_JOINT 0    // Bone to use as base for Star projectiles when landing
#define FTYOSHI_YOSHIBOMB_VEL_X_CLAMP 30.0F     // Not sure how this takes effect
#define FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP -150.0F   // Constant downward velocity during ground pound

extern ftStatusDesc dFTYoshiSpecialStatusDesc[/* */];

extern void *gFTDataYoshiMain;
extern void *gFTDataYoshiBattleMotion;
extern void *gFTDataYoshiModel;
extern void *gFTDataYoshiSpecial2;
extern void *gFTDataYoshiSpecial3;
extern u32 gFTDataYoshiParticleBankID;

extern void *gFTDataPolyYoshiMain;
extern void *gFTDataPolyYoshiSubMotion;
extern void *gFTDataPolyYoshiModel;
extern u32 gFTDataPolyYoshiParticleBankID;

typedef enum ftYoshiMotion
{
    // ID for SpecialAirLwLoop not required?

    ftMotion_Yoshi_AppearR = ftMotion_Common_SpecialStart,
    ftMotion_Yoshi_AppearL,
    ftMotion_Yoshi_SpecialHi,
    ftMotion_Yoshi_SpecialAirHi,
    ftMotion_Yoshi_SpecialLwStart,
    ftMotion_Yoshi_SpecialLwLanding,
    ftMotion_Yoshi_SpecialAirLwStart,
    ftMotion_Yoshi_SpecialN,
    ftMotion_Yoshi_SpecialNCatch,
    ftMotion_Yoshi_SpecialNRelease,
    ftMotion_Yoshi_SpecialAirN,
    ftMotion_Yoshi_SpecialAirNCatch,
    ftMotion_Yoshi_SpecialAirNRelease

} ftYoshiMotion;

typedef enum ftYoshiStatus
{
    ftStatus_Yoshi_AppearR = ftStatus_Common_SpecialStart,
    ftStatus_Yoshi_AppearL,
    ftStatus_Yoshi_SpecialHi,
    ftStatus_Yoshi_SpecialAirHi,
    ftStatus_Yoshi_SpecialLwStart,
    ftStatus_Yoshi_SpecialLwLanding,
    ftStatus_Yoshi_SpecialAirLwStart,
    ftStatus_Yoshi_SpecialAirLwLoop,
    ftStatus_Yoshi_SpecialN,
    ftStatus_Yoshi_SpecialNCatch,
    ftStatus_Yoshi_SpecialNRelease,
    ftStatus_Yoshi_SpecialAirN,
    ftStatus_Yoshi_SpecialAirNCatch,
    ftStatus_Yoshi_SpecialAirNRelease

} ftYoshiStatus;

typedef struct ftYoshiEggDesc
{
    f32 gfx_size;
    Vec3f offset;
    Vec3f size;

} ftYoshiEggDesc;

typedef struct ftYoshiSpecialNStatusVars
{
    u32 unk_0x0;
    u16 unk_0x4;

} ftYoshiSpecialNStatusVars;

typedef struct ftYoshiSpecialHiStatusVars
{
    GObj *egg_gobj;
    s16 throw_force;

} ftYoshiSpecialHiStatusVars;

typedef union ftYoshi_StatusVars
{
    // ftYoshiSpecialNStatusVars specialn;
    ftYoshiSpecialHiStatusVars specialhi;

} ftYoshi_StatusVars;

#endif
