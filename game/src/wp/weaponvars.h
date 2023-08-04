#ifndef _WEAPONVARS_H_
#define _WEAPONVARS_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#include "wpdef.h"

#define WPBLASTER_VEL_X 160.0F

#define WPCHARGESHOT_GFX_SIZE_DIV 30.0F
#define WPCHARGESHOT_ROTATE_SPEED 0.31415927F

#define WPSAMUSBOMB_EXPLODE_LIFETIME 6
#define WPSAMUSBOMB_EXPLODE_RADIUS 180.0F

#define WPSAMUSBOMB_WAIT_LIFETIME 100                           // Countdown of Bomb until it explodes
#define WPSAMUSBOMB_WAIT_VEL_Y 10.0F                            // Initial velocity of Bomb
#define WPSAMUSBOMB_WAIT_ROTATE_SPEED_AIR 0.34906587F           // Bomb spins at this rate while airborne
#define WPSAMUSBOMB_WAIT_ROTATE_SPEED_GROUND 0.17453294F        // Bomb spins at this rate while grounded
#define WPSAMUSBOMB_WAIT_COLLIDE_MOD_VEL 0.9F                   // Modify velocity when colliding with an obstruction?
#define WPSAMUSBOMB_WAIT_GRAVITY 1.0F                           // Bomb's gravity
#define WPSAMUSBOMB_WAIT_T_VEL 50.0F                            // Bomb's terminal velocity
#define WPSAMUSBOMB_WAIT_BLINK_SLOW 40                          // The light in the center of the bomb blinks at its "slow" rate while lifetime is greater than this value
#define WPSAMUSBOMB_WAIT_BLINK_MID 20                           // The light in the center of the bomb blinks at its "mid" rate while lifetime is greater than this value
#define WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW 8                     // Switch out Bomb's texture animation frame when this timer reaches 0
#define WPSAMUSBOMB_WAIT_BLINK_TIMER_MID 5                      // Switch out Bomb's texture animation frame when this timer reaches 0
#define WPSAMUSBOMB_WAIT_BLINK_TIMER_FAST 3                     // Switch out Bomb's texture animation frame when this timer reaches 0

#define WPPIKACHUJOLT_LIFETIME 100
#define WPPIKACHUJOLT_VEL 55.0F
#define WPPIKACHUJOLT_GRAVITY 0.0F
#define WPPIKACHUJOLT_T_VEL 50.0F
#define WPPIKACHUJOLT_ROTATE_ANGLE_MAX 1.7453293F               
#define WPPIKACHUJOLT_ANIM_PUSH_FRAME 7.5F                      // Frame on which Thunder Jolt gets pushed ahead to simulate movement?
#define WPPIKACHUJOLT_COLL_GROUND 0                             // ID of Thunder Jolt collision type
#define WPPIKACHUJOLT_COLL_RWALL 1                              // ID of Thunder Jolt collision type
#define WPPIKACHUJOLT_COLL_CEIL 2                               // ID of Thunder Jolt collision type
#define WPPIKACHUJOLT_COLL_LWALL 3                              // ID of Thunder Jolt collision type

#define WPPIKACHUTHUNDER_TEXTURE_COUNT 4                        // Number of textures Thunder contains
#define WPPIKACHUTHUNDER_SPAWN_LIFETIME 40                      // Duration of inital Thunder projectile?
#define WPPIKACHUTHUNDER_CHAIN_LIFETIME 10                      // Duration of subsequent Thunder segments?
#define WPPIKACHUTHUNDER_EXPIRE 6                               // Thunder can no longer damage opponents once its lifetime has dipped below this number

#define WPPKFIRE_LIFETIME 20
#define WPPKFIRE_VEL_MUL 160.0F

#define WPPKTHUNDER_LIFETIME 160
#define WPPKTHUNDER_SPAWN_TRAIL_FRAME (WPPKTHUNDER_LIFETIME - 2)// Subtracted from PK Thunder's maximum lifetime to determine when to begin spawning trails
#define WPPKTHUNDER_TURN_STICK_THRESHOLD 45                     // Minimum stick range required to steer PK Thunder
#define WPPKTHUNDER_ANGLE_STEP 0.10471976F                      // If there is a difference between PK Thunder and the control stick's current angle, step this amount
#define WPPKTHUNDER_ANGLE_DIV 7.5F                              // Divide angle difference then add to current PK Thunder angle if less than quarter pi
#define WPPKTHUNDER_VEL 60.0F
#define WPPKTHUNDER_REFLECT_POS_Y_ADD 250.0F                    // Added to Y position when PK Thunder is reflected
#define WPPKTHUNDER_TRAIL_COUNT 5
#define WPPKTHUNDER_TEXTURE_COUNT 4

#define WPFINALCUTTER_LIFETIME 20
#define WPFINALCUTTER_VEL 100.0F

#define WPEGGTHROW_LIFETIME 50
#define WPEGGTHROW_EXPLODE_LIFETIME 10
#define WPEGGTHROW_EXPLODE_SIZE 340.0F
#define WPEGGTHROW_TRAJECTORY_DIV 65.0F
#define WPEGGTHROW_TRAJECTORY_SUB_RIGHT 1.8675023F              // Default: 107 degrees; subtract angle from this if egg's facing direction is RIGHT
#define WPEGGTHROW_TRAJECTORY_SUB_LEFT 1.27409040928F           // Default: 73 degrees; subtract angle from this if egg's facing direction is LEFT
#define WPEGGTHROW_ANGLE_MUL 0.34906587F                        // Default: 20 degrees
#define WPEGGTHROW_ANGLE_CLAMP 0.10471976F                      // Default: 6 degrees; if less than this value, angle becomes 0.0
#define WPEGGTHROW_VEL_ADD 50.0F
#define WPEGGTHROW_VEL_FORCE_MUL 2.3F                           // Multiplies number of frames the B button was held
#define WPEGGTHROW_ANGLE_FORCE_MUL (-2.1F)
#define WPEGGTHROW_ANGLE_ADD (-1.5F)
#define WPEGGTHROW_GRAVITY 2.7F
#define WPEGGTHROW_T_VEL 120.0F

#define WPYOSHISTAR_LIFETIME 16
#define WPYOSHISTAR_LIFETIME_SCALE_MUL 0.175F
#define WPYOSHISTAR_LIFETIME_SCALE_ADD 0.3F
#define WPYOSHISTAR_ROTATE_SPEED 0.24F
#define WPYOSHISTAR_VEL_CLAMP 1.8F
#define WPYOSHISTAR_ANGLE 0.5235988F
#define WPYOSHISTAR_VEL 30.0F
#define WPYOSHISTAR_OFF_X 300.0F
#define WPYOSHISTAR_OFF_Y 20.0F

#define WPSPINATTACK_LIFETIME 100
#define WPSPINATTACK_EXTEND_POS_COUNT 4
#define WPSPINATTACK_VEL 28.0F
#define WPSPINATTACK_VEL_CLAMP 0.4F
#define WPSPINATTACK_OFF_X 40.0F
#define WPSPINATTACK_OFF_Y 80.0F
#define WPSPINATTACK_ANGLE F_DEG_TO_RAD(10.0F)                  // 0.17453294F

#define WPBOOMERANG_OFF_X 150.0F
#define WPBOOMERANG_OFF_Y 290.0F
#define WPBOOMERANG_HOMING_ANGLE_MAX 0.02617994F
#define WPBOOMERANG_HOMING_ANGLE_MIN 0.01308997F
#define WPBOOMERANG_VEL_SMASH 114.0F
#define WPBOOMERANG_VEL_TILT 85.0F
#define WPBOOMERANG_ANGLE_STICK_THRESHOLD 10                    // Minimum stick Y range required to angle Boomerang up or down
#define WPBOOMERANG_LIFETIME_SMASH 190
#define WPBOOMERANG_LIFETIME_TILT 160
#define WPBOOMERANG_LIFETIME_REFLECT 100

#define WPYUBIBULLET_EXPLODE_LIFETIME 6
#define WPYUBIBULLET_EXPLODE_SIZE 180.0F
#define WPYUBIBULLET_VEL_X 160.0F
#define WPYUBIBULLET_VEL_Y -25.0F

typedef enum wpPikachuThunderCollide
{
    wpPikachuThunder_Status_Active,
    wpPikachuThunder_Status_Collide,
    wpPikachuThunder_Status_Destroy

} wpPikachuThunderCollide;

typedef enum wpNessPKThunderCollide
{
    wpNessPKThunder_Status_Active,                                 // PK Thunder is active
    wpNessPKThunder_Status_Destroy,                                // PK Thunder despawns
    wpNessPKThunder_Status_Collide                                 // PK Thunder collides with Ness

} wpNessPKThunderCollide;

typedef struct wpMarioFireballAttributes
{
    s32 lifetime;
    f32 fall_speed_max;
    f32 collide_damage; // Item loses this much health when colliding with an obstruction
    f32 gravity;
    f32 collide_vel;
    f32 rotate_speed;
    f32 angle_ground;
    f32 angle_air;
    f32 vel_base;
    void *p_item;
    int offset;
    f32 anim_frame;    // Frame of texture animation to use? 0 = Mario Fireball, 1 = Luigi Fireball

} wpMarioFireballAttributes;

typedef struct wpSamusChargeShotAttributes
{
    f32 gfx_size;
    f32 vel_x;
    s32 damage;
    s32 hit_size;
    s32 coll_size;
    u32 shoot_sfx_id;
    u32 charge_sfx_id;
    u32 hit_sfx_id;
    s32 priority;

} wpSamusChargeShotAttributes;

typedef struct wpSamus_WeaponVars_Bomb
{
    s32 bomb_blink_timer;

} wpSamus_WeaponVars_Bomb;

typedef struct wpMario_WeaponVars_Fireball
{
    s32 index; // Index of Fireball description to use; 0 = Mario, 1 = Luigi

} wpMario_WeaponVars_Fireball;

typedef struct wpPikachu_WeaponVars_ThunderJolt
{
    s32 coll_type;
    Vec3f rotate;

} wpPikachu_WeaponVars_ThunderJolt;

typedef struct wpPikachu_WeaponVars_Thunder // Pikachu's Thunder
{
    s32 thunder_state;

} wpPikachu_WeaponVars_Thunder;

typedef struct _wpNess_WeaponVars_PKThunder
{
    s32 pkthunder_state;
    f32 angle;
    GObj *spawn_gobj; // PK Thunder's original owner
    GObj *trail_gobj[WPPKTHUNDER_TRAIL_COUNT];

} wpNess_WeaponVars_PKThunder;

typedef struct _wpNess_WeaponVars_PKThunderTrail
{
    s32 pkthunder_trail_state;
    s32 trail_index; // Also key of RGB struct to use to set color of PK Thunder trails?
    GObj *spawn_gobj; // Original owner?
    GObj *trail_gobj[WPPKTHUNDER_TRAIL_COUNT];

} wpNess_WeaponVars_PKThunderTrail;

typedef struct wpSamus_WeaponVars_ChargeShot
{
    bool32 is_release;
    bool32 is_full_charge;
    s32 charge_size;
    GObj *owner_gobj;

} wpSamus_WeaponVars_ChargeShot;

typedef struct wpLink_WeaponVars_SpinAttack
{
    s16 pos_x[WPSPINATTACK_EXTEND_POS_COUNT];
    s16 pos_y[WPSPINATTACK_EXTEND_POS_COUNT];
    Vec2f vel;
    s8 is_destroy;
    s8 pos_index;

} wpLink_WeaponVars_SpinAttack;

typedef struct wpLink_WeaponVars_Boomerang
{
    GObj *spawn_gobj; // GObj that spawned Boomerang
    u8 flyforward_timer;
    u8 homing_delay;
    u8 flags;
    u8 adjust_angle_delay;
    f32 default_angle;
    f32 homing_angle;

} wpLink_WeaponVars_Boomerang;

typedef struct wpYoshi_WeaponVars_EggThrow
{
    s8 is_spin; // Also determines whether Egg Throw is affected by gravity, not sure what to name it
    s8 is_throw;
    s8 stick_range;
    s8 lr;
    s16 throw_force;
    f32 angle;

} wpYoshi_WeaponVars_EggThrow;

typedef struct wpStarRod_WeaponVars_Star // Star Rod projectile
{
    s32 lifetime;

} wpStarRod_WeaponVars_Star;

typedef struct wpIwark_WeaponVars_Rock
{
    s32 unk_0x0; // Unused?
    s32 ground_line_id;
    s32 unk_0x8; // Unused?
    s32 unk_0xC; // Set but never used?
    GObj *owner_gobj;

} wpIwark_WeaponVars_Rock;

typedef struct wpNyars_WeaponVars_Coin
{
    s32 lifetime;

} wpNyars_WeaponVars_Coin;

typedef struct wpKamex_WeaponVars_Hydro
{
    s32 unk_0x0; // Set to 0 but never used
    s32 unk_0x4; // Set to 0 but never used

} wpKamex_WeaponVars_Hydro;

typedef struct wpDogas_WeaponVars_Smog
{
    wpAttributes *hit_desc;

} wpDogas_WeaponVars_Smog;

#endif