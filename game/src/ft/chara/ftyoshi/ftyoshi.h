#ifndef _FTYOSHI_H_
#define _FTYOSHI_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTYOSHI_EGG_THROW_JOINT 3               // Bone to attach Egg

#define FTYOSHI_YOSHIBOMB_STAR_SPAWN_JOINT 0    // Bone to use as base for Star projectiles when landing
#define FTYOSHI_YOSHIBOMB_VEL_X_CLAMP 30.0F     // Not sure how this takes effect
#define FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP -150.0F   // Constant downward velocity during ground pound

typedef enum ftYoshiAction
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

} ftYoshiAction;

typedef struct ftYoshiEggDesc
{
    f32 gfx_size;
    Vec3f offset;
    Vec3f size;

} ftYoshiEggDesc;

#endif