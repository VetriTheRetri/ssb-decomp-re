#ifndef _FTLINK_H_
#define _FTLINK_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>

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

typedef enum ftLinkAction
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

} ftLinkAction;

#endif