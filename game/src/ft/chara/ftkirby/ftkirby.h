#ifndef _FTKIRBY_H_
#define _FTKIRBY_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTKIRBY_COPYDAMAGE_LOSECOPY_RANDOM ((float) 1 / 12)  // 0.083333336F

#define FTKIRBY_VACUUM_RELEASE_LAG 40                   // Automatic lag frames before Inhale can be released
#define FTKIRBY_VACUUM_COPY_STICK_RANGE_MIN -40         // Minimum control stick threshold on Y-axis to get copy ability
#define FTKIRBY_VACUUM_TURN_STICK_RANGE_MIN 28
#define FTKIRBY_VACUUM_THROW_DAMAGE 10                  // Damage dealt to inhaled victim upon being shot out
#define FTKIRBY_VACUUM_COPY_DAMAGE 6                    // Damage dealt to inhaled victim upon being copied
#define FTKIRBY_VACUUM_COPY_ANGLE F_DEG_TO_RAD(75.0F)   // 1.308997F
#define FTKIRBY_VACUUM_COPY_VEL_BASE 100.0F
#define FTKIRBY_VACUUM_THROW_VEL_BASE 120.0F
#define FTKIRBY_VACUUM_STOPGFX_DIST_MIN 9216.0F
#define FTKIRBY_VACUUM_SPECIALNWAIT_DIST_MIN 1024.0F
#define FTKIRBY_VACUUM_GRAVITY_MUL 2.0F                 
#define FTKIRBY_VACUUM_FALL_MAX_MUL 2.0F

#define FTKIRBY_FINALCUTTER_BEAM_SPAWN_JOINT 0          // Spawn Final Cutter Beam at the position of this bone
#define FTKIRBY_FINALCUTTER_OFF_X 200.0F                // X-Offset of Final Cutter Beam spawn position
#define FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL 0.5F          // Multiplies air acceleration during Final Cutter

#define FTKIRBY_STONE_DURATION_MAX 160                  // Maximum time Kirby can spend in his Stone form
#define FTKIRBY_STONE_DURATION_MIN 18                   // Minimum time Kirby must spend in his Stone form before he can turn back
#define FTKIRBY_STONE_FALL_VEL -140.0F                  // Stone terminal velocity in midair
#define FTKIRBY_STONE_SLIDE_ANGLE F_DEG_TO_RAD(25.0F)   // Minimum surface angle required to slide? (Radians) (0.43633232F)
#define FTKIRBY_STONE_SLIDE_TRACTION_MUL 1.15F          // Traction multiplier?
#define FTKIRBY_STONE_SLIDE_VEL_MUL 36.0F               // Slide velocity multiplier
#define FTKIRBY_STONE_SLIDE_CLAMP_VEL_X 30.0F           // Maximum slide velocity?
#define FTKIRBY_STONE_HEALTH_MAX 38                     // Maximum % damage Kirby can withstand while transformed
#define FTKIRBY_STONE_HEALTH_MID 22                     // Begin flashing more rapidly when remaining Stone HP is compromised 
#define FTKIRBY_STONE_HEALTH_LOW 10                     // Begin flashing fast when remaining Stone HP is critical
#define FTKIRBY_STONE_COLANIM_ID_HIGH 0x33              // Color Animation ID of high-HP Stone
#define FTKIRBY_STONE_COLANIM_LENGTH_HIGH 0
#define FTKIRBY_STONE_COLANIM_ID_MID 0x34               // Color Animation ID of mid-HP Stone
#define FTKIRBY_STONE_COLANIM_LENGTH_MID 0
#define FTKIRBY_STONE_COLANIM_ID_LOW 0x35               // Color Animation ID of low-HP Stone
#define FTKIRBY_STONE_COLANIM_LENGTH_LOW 0

#define FTKIRBY_COPYMARIO_FIREBALL_SPAWN_JOINT 17

#define FTKIRBY_COPYFOX_BLASTER_SPAWN_JOINT 17
#define FTKIRBY_COPYFOX_BLASTER_SPAWN_OFF_X 70.0F

#define FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX 10
#define FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_DAMAGE_MUL 2 // Uncharged Giant Punch damage = base hitbox damage + charge level * this value
#define FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID 6
#define FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH 0
#define FTKIRBY_COPYDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED 2.0F
#define FTKIRBY_COPYDONKEY_GIANTPUNCH_VEL_MUL 8.0F        // Multiplies horizontal ground velocity only

#define FTKIRBY_COPYSAMUS_CHARGE_JOINT 0
#define FTKIRBY_COPYSAMUS_CHARGE_OFF_Y 200.0F
#define FTKIRBY_COPYSAMUS_CHARGE_OFF_Z 210.0F
#define FTKIRBY_COPYSAMUS_CHARGE_MAX 7                  // Maximum charge level
#define FTKIRBY_COPYSAMUS_CHARGE_INT 20                 // Charge interval, level increrments once this timer hits zero, then begins counting the next iteration
#define FTKIRBY_COPYSAMUS_CHARGE_COLANIM_ID 6
#define FTKIRBY_COPYSAMUS_CHARGE_COLANIM_LENGTH 0
#define FTKIRBY_COPYSAMUS_CHARGE_RECOIL_BASE 10.0F      // Base unit of recoil taken from firing Charge Shot
#define FTKIRBY_COPYSAMUS_CHARGE_RECOIL_MUL 2.0F        // Charge Recoil multiplier
#define FTKIRBY_COPYSAMUS_CHARGE_RECOIL_ADD 20.0F       // Added velocity

#define FTKIRBY_COPYLINK_BOOMERANG_SPAWN_JOINT 0        // Spawn Boomerang at the position of this bone
#define FTKIRBY_COPYLINK_BOOMERANG_SMASH_STICK_MIN 56
#define FTKIRBY_COPYLINK_BOOMERANG_SMASH_BUFFER 8

#define FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_BASE 65.0F  // 
#define FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_MUL 0.92F   //

#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_JOINT 0
#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_ANGLE F_DEG_TO_RAD(-45.0F) // -0.7853982F
#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_X 200.0F
#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_SPAWN_OFF_Y 200.0F
#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_VEL 40.0F
#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_ID 0x3B
#define FTKIRBY_COPYPIKACHU_THUNDERJOLT_COLANIM_LENGTH 0

#define FTKIRBY_COPYPURIN_POUND_VEL_BASE 65             //
#define FTKIRBY_COPYPURIN_POUND_VEL_MUL 0.92F           //

#define FTKIRBY_COPYNESS_PKFIRE_SPAWN_JOINT 0
#define FTKIRBY_COPYNESS_PKFIRE_SPAWN_OFF_X 240.0F
#define FTKIRBY_COPYNESS_PKFIRE_SPAWN_OFF_Y 190.0F
#define FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_AIR F_DEG_TO_RAD(-38.0F) // -0.6632251F
#define FTKIRBY_COPYNESS_PKFIRE_SPARK_ANGLE_GROUND F_DEG_TO_RAD(-3.6F) // -0.06283185F
#define FTKIRBY_COPYNESS_PKFIRE_SPARK_VEL_AIR 95.0F
#define FTKIRBY_COPYNESS_PKFIRE_SPARK_VEL_GROUND 73.0F

typedef enum ftKirbyAction
{
    ftStatus_Kirby_Attack100Start = ftStatus_Common_SpecialStart,
    ftStatus_Kirby_Attack100Loop,
    ftStatus_Kirby_Attack100End,
    ftStatus_Kirby_JumpAerialF1,
    ftStatus_Kirby_JumpAerialF2,
    ftStatus_Kirby_JumpAerialF3,
    ftStatus_Kirby_JumpAerialF4,
    ftStatus_Kirby_JumpAerialF5,
    ftStatus_Kirby_ThrowF,
    ftStatus_Kirby_ThrowFFall,
    ftStatus_Kirby_ThrowFLanding,
    ftStatus_Kirby_CopyMario_SpecialN,
    ftStatus_Kirby_CopyMario_SpecialAirN,
    ftStatus_Kirby_CopyLuigi_SpecialN,
    ftStatus_Kirby_CopyLuigi_SpecialAirN,
    ftStatus_Kirby_CopyFox_SpecialN,
    ftStatus_Kirby_CopyFox_SpecialAirN,
    ftStatus_Kirby_CopySamus_SpecialNStart,
    ftStatus_Kirby_CopySamus_SpecialNLoop,
    ftStatus_Kirby_CopySamus_SpecialNEnd,
    ftStatus_Kirby_CopySamus_SpecialAirNStart,
    ftStatus_Kirby_CopySamus_SpecialAirNEnd,
    ftStatus_Kirby_CopyDonkey_SpecialNStart,
    ftStatus_Kirby_CopyDonkey_SpecialAirNStart,
    ftStatus_Kirby_CopyDonkey_SpecialNLoop,
    ftStatus_Kirby_CopyDonkey_SpecialAirNLoop,
    ftStatus_Kirby_CopyDonkey_SpecialNEnd,
    ftStatus_Kirby_CopyDonkey_SpecialAirNEnd,
    ftStatus_Kirby_CopyDonkey_SpecialNFull,
    ftStatus_Kirby_CopyDonkey_SpecialAirNFull,
    ftStatus_Kirby_AppearR,
    ftStatus_Kirby_AppearL,
    ftStatus_Kirby_CopyPikachu_SpecialN,
    ftStatus_Kirby_CopyPikachu_SpecialAirN,
    ftStatus_Kirby_CopyNess_SpecialN,
    ftStatus_Kirby_CopyNess_SpecialAirN,
    ftStatus_Kirby_SpecialHi,
    ftStatus_Kirby_SpecialHiLanding,
    ftStatus_Kirby_SpecialAirHi,
    ftStatus_Kirby_SpecialAirHiFall,
    ftStatus_Kirby_SpecialLwStart,
    ftStatus_Kirby_SpecialLwUnk,
    ftStatus_Kirby_SpecialLwHold,
    ftStatus_Kirby_SpecialLwEnd,
    ftStatus_Kirby_SpecialAirLwStart,
    ftStatus_Kirby_SpecialAirLwHold,
    ftStatus_Kirby_SpecialAirLwLanding,
    ftStatus_Kirby_SpecialAirLwFall,
    ftStatus_Kirby_SpecialAirLwEnd,
    ftStatus_Kirby_SpecialNStart,
    ftStatus_Kirby_SpecialNLoop,
    ftStatus_Kirby_SpecialNEnd,
    ftStatus_Kirby_SpecialNCatch,
    ftStatus_Kirby_SpecialNEat,
    ftStatus_Kirby_SpecialNThrow,
    ftStatus_Kirby_SpecialNWait,
    ftStatus_Kirby_SpecialNTurn,
    ftStatus_Kirby_SpecialNCopy,
    ftStatus_Kirby_SpecialAirNStart,
    ftStatus_Kirby_SpecialAirNLoop,
    ftStatus_Kirby_SpecialAirNEnd,
    ftStatus_Kirby_SpecialAirNCatch,
    ftStatus_Kirby_SpecialAirNEat,
    ftStatus_Kirby_SpecialAirNThrow,
    ftStatus_Kirby_SpecialAirNWait,
    ftStatus_Kirby_SpecialAirNTurn,
    ftStatus_Kirby_SpecialAirNCopy,
    ftStatus_Kirby_CopyLink_SpecialN,
    ftStatus_Kirby_CopyLink_SpecialNReturn,
    ftStatus_Kirby_CopyLink_SpecialNEmpty,
    ftStatus_Kirby_CopyLink_SpecialAirN,
    ftStatus_Kirby_CopyLink_SpecialAirNReturn,
    ftStatus_Kirby_CopyLink_SpecialAirNEmpty,
    ftStatus_Kirby_CopyPurin_SpecialN,
    ftStatus_Kirby_CopyPurin_SpecialAirN,
    ftStatus_Kirby_CopyCaptain_SpecialN,
    ftStatus_Kirby_CopyCaptain_SpecialAirN,
    ftStatus_Kirby_CopyYoshi_SpecialN,
    ftStatus_Kirby_CopyYoshi_SpecialNCatch,
    ftStatus_Kirby_CopyYoshi_SpecialNRelease,
    ftStatus_Kirby_CopyYoshi_SpecialAirN,
    ftStatus_Kirby_CopyYoshi_SpecialAirNCatch,
    ftStatus_Kirby_CopyYoshi_SpecialAirNRelease

} ftKirbyAction;

typedef struct ftKirbyCopyData
{
    u16 copy_id;
    s16 copy_hat_rs;
    u32 unk_0x4;
    s32 star_damage;

} ftKirbyCopyData;

typedef struct ftKirbyAttack100Gfx
{
    Vec3f offset;
    Vec3f vel;

} ftKirbyAttack100Gfx;

#endif