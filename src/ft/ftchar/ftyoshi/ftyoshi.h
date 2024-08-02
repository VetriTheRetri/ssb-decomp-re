#ifndef _FTYOSHI_H_
#define _FTYOSHI_H_

#include "ftyoshifunctions.h"

#define FTYOSHI_JUMPAERIAL_KNOCKBACK_RESIST 140.0F

#define FTYOSHI_EGGTHROW_JOINT nFTPartsJointYRotN // Bone to attach Egg

#define FTYOSHI_YOSHIBOMB_STAR_SPAWN_JOINT 0    // Bone to use as base for Star projectiles when landing
#define FTYOSHI_YOSHIBOMB_VEL_X_CLAMP 30.0F     // Not sure how this takes effect
#define FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP -150.0F   // Constant downward velocity during ground pound

extern ftStatusDesc dFTYoshiSpecialStatusDesc[/* */];

extern void *gFTDataYoshiMain;
extern void *gFTDataYoshiMainMotion;
extern void *gFTDataYoshiModel;
extern void *gFTDataYoshiSpecial2;
extern void *gFTDataYoshiSpecial3;
extern s32 gFTDataYoshiParticleBankID;

typedef enum ftYoshiMotion
{
    // ID for SpecialAirLwLoop not required?

    nFTYoshiMotionAppearR = nFTCommonMotionSpecialStart,
    nFTYoshiMotionAppearL,
    nFTYoshiMotionSpecialHi,
    nFTYoshiMotionSpecialAirHi,
    nFTYoshiMotionSpecialLwStart,
    nFTYoshiMotionSpecialLwLanding,
    nFTYoshiMotionSpecialAirLwStart,
    nFTYoshiMotionSpecialN,
    nFTYoshiMotionSpecialNCatch,
    nFTYoshiMotionSpecialNRelease,
    nFTYoshiMotionSpecialAirN,
    nFTYoshiMotionSpecialAirNCatch,
    nFTYoshiMotionSpecialAirNRelease

} ftYoshiMotion;

typedef enum ftYoshiStatus
{
    nFTYoshiStatusAppearR = nFTCommonStatusSpecialStart,
    nFTYoshiStatusAppearL,
    nFTYoshiStatusSpecialHi,
    nFTYoshiStatusSpecialAirHi,
    nFTYoshiStatusSpecialLwStart,
    nFTYoshiStatusSpecialLwLanding,
    nFTYoshiStatusSpecialAirLwStart,
    nFTYoshiStatusSpecialAirLwLoop,
    nFTYoshiStatusSpecialN,
    nFTYoshiStatusSpecialNCatch,
    nFTYoshiStatusSpecialNRelease,
    nFTYoshiStatusSpecialAirN,
    nFTYoshiStatusSpecialAirNCatch,
    nFTYoshiStatusSpecialAirNRelease

} ftYoshiStatus;

typedef struct ftYoshiEggDesc
{
    f32 effect_size;
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

typedef union ftYoshiStatusVars
{
    // ftYoshiSpecialNStatusVars specialn;
    ftYoshiSpecialHiStatusVars specialhi;

} ftYoshiStatusVars;

#endif
