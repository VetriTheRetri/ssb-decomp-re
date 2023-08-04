#ifndef _FTSAMUS_H_
#define _FTSAMUS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>

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

#define FTSAMUS_BOMB_VEL_Y_BASE 40.0F
#define FTSAMUS_BOMB_VEL_Y_SUB 10.0F
#define FTSAMUS_BOMB_DRIFT 0.66F

typedef enum ftSamusAction
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

} ftSamusAction;

#endif