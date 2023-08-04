#ifndef _FIGHTERVARS_H_
#define _FIGHTERVARS_H_

#include <ft/chara/ftmario/ftmario_statusvars.h>
#include <ft/chara/ftfox/ftfox_statusvars.h>
#include <ft/chara/ftdonkey/ftdonkey_statusvars.h>
#include <ft/chara/ftsamus/ftsamus_statusvars.h>
#include <ft/chara/ftlink/ftlink_statusvars.h>
#include <ft/chara/ftyoshi/ftyoshi_statusvars.h>
#include <ft/chara/ftcaptain/ftcaptain_statusvars.h>
#include <ft/chara/ftkirby/ftkirby_statusvars.h>
#include <ft/chara/ftpikachu/ftpikachu_statusvars.h>
#include <ft/chara/ftpurin/ftpurin_statusvars.h>
#include <ft/chara/ftness/ftness_statusvars.h>
#include <ft/chara/ftmasterhand/ftmasterhand_statusvars.h>

#define FTCOMMON_DEAD_REBIRTH_WAIT 45
#define FTCOMMON_DEADUP_REBIRTH_WAIT 180
#define FTCOMMON_DEADUPFALL_VEL_Z -83.333336F

#define FTCOMMON_REBIRTH_INVINCIBLE_FRAMES 120                                                      // Invincibility frames; setting this to 0 makes invincibility last forever (?)
#define FTCOMMON_REBIRTH_HALO_LOWER_WAIT 90
#define FTCOMMON_REBIRTH_HALO_DESPAWN_WAIT 390
#define FTCOMMON_REBIRTH_HALO_UNK_WAIT 45
#define FTCOMMON_REBIRTH_HALO_STAND_WAIT 75

#define FTCOMMON_SLEEP_STOCK_STEAL_WAIT 30

#define FTCOMMON_ENTRY_WAIT 120

#define FTCOMMON_WALKFAST_STICK_RANGE_MIN 62                                                        // Minimum stick range required for fast walk speed
#define FTCOMMON_WALKMIDDLE_STICK_RANGE_MIN 26                                                      // Minimum stick range required for medium walk speed

#define FTCOMMON_TURN_STICK_RANGE_MIN (-20)

#define FTCOMMON_DASH_BUFFER_FRAMES_MAX 3                                                           // Dash will register if stick range is greater than or equal to FTCOMMON_DASH_STICK_RANGE_MIN within this window of time
#define FTCOMMON_DASH_STICK_RANGE_MIN 56
#define FTCOMMON_DASH_DECELERATE_BEGIN 7.0F

#define FTCOMMON_RUN_STICK_RANGE_MIN 50

#define FTCOMMON_TURNRUN_STICK_RANGE_MIN (-30)

#define FTCOMMON_KNEEBEND_INPUT_TYPE_NONE 0
#define FTCOMMON_KNEEBEND_INPUT_TYPE_STICK 1
#define FTCOMMON_KNEEBEND_INPUT_TYPE_BUTTON 2
#define FTCOMMON_KNEEBEND_BUFFER_FRAMES_MAX 3                                                       // Jumpsquat will register if stick range is greater than FTCOMMON_KNEEBEND_STICK_RANGE_MIN within this window of time
#define FTCOMMON_KNEEBEND_JUMP_F_OR_B_RANGE (-10)                                                   // Stick X range to determine whether to usee JumpF or JumpB action state
#define FTCOMMON_KNEEBEND_RUN_STICK_RANGE_MIN 44                                                    // Used for jumpsquat interrupt from run?
#define FTCOMMON_KNEEBEND_STICK_RANGE_MIN 53                                                        // Minimum stick Y range required for stick jump
#define FTCOMMON_KNEEBEND_BUTTON_SHORT_FORCE 9.0F                                                   // Jump force of C-button short jump
#define FTCOMMON_KNEEBEND_BUTTON_LONG_FORCE 17.0F                                                   // Jump force of C-button long jump
#define FTCOMMON_KNEEBEND_BUTTON_SHORT_MIN 36.0F                                                    // Minimum short jump height possible with C-button input
#define FTCOMMON_KNEEBEND_BUTTON_LONG_MIN 63.0F                                                     // Minimum long jump height possible with C-button input
#define FTCOMMON_KNEEBEND_BUTTON_HEIGHT_CLAMP 77.0F                                                 // Maximum jump height possible with C-button input
#define FTCOMMON_KNEEBEND_SHORT_HOP_FRAMES 3.0F                                                     // Universal short hop window, unlike Melee where the user must simply not be holding their jump input on the last frame of jumpsquat

#define FTCOMMON_JUMPAERIAL_INPUT_TYPE_NONE 0
#define FTCOMMON_JUMPAERIAL_INPUT_TYPE_STICK 1
#define FTCOMMON_JUMPAERIAL_INPUT_TYPE_BUTTON 2
#define FTCOMMON_JUMPAERIAL_F_OR_B_RANGE (-10)
#define FTCOMMON_JUMPAERIAL_STICK_RANGE_MIN 53
#define FTCOMMON_JUMPAERIAL_TURN_STICK_RANGE_MIN (-30)
#define FTCOMMON_JUMPAERIAL_TURN_FRAMES 12
#define FTCOMMON_JUMPAERIAL_TURN_INVERT_LR_WAIT 6                                                   // Invert facing direction on this frame of the direction turn process          
#define FTCOMMON_JUMPAERIAL_TURN_ROTATE_STEP (-(PI32 / FTCOMMON_JUMPAERIAL_TURN_FRAMES)) // Model Y-rotation step for characters who can turn around during their double jump

#define FTCOMMON_FALL_FAST_STICK_RANGE_MIN (-53)
#define FTCOMMON_FALL_FAST_BUFFER_FRAMES_MAX 4

#define FTCOMMON_DAMAGE_SMASH_DI_BUFFER_FRAMES_MAX 4
#define FTCOMMON_DAMAGE_SMASH_DI_RANGE_MIN 53
#define FTCOMMON_DAMAGE_CATCH_RELEASE_THRESHOLD 6                                                   // If a grabbed fighter takes more than this much damage in one hit, they're released
#define FTCOMMON_DAMAGE_FIGHTER_FLYROLL_DAMAGE_MIN 100
#define FTCOMMON_DAMAGE_GFX_WAIT_LOW 0
#define FTCOMMON_DAMAGE_GFX_WAIT_MID_LOW 8
#define FTCOMMON_DAMAGE_GFX_WAIT_MID 5
#define FTCOMMON_DAMAGE_GFX_WAIT_MID_HIGH 3
#define FTCOMMON_DAMAGE_GFX_WAIT_HIGH 2
#define FTCOMMON_DAMAGE_GFX_WAIT_DEFAULT 1
#define FTCOMMON_DAMAGE_GFX_KNOCKBACK_LOW 120.0F
#define FTCOMMON_DAMAGE_GFX_KNOCKBACK_MID_LOW 150.0F
#define FTCOMMON_DAMAGE_GFX_KNOCKBACK_MID 200.0F
#define FTCOMMON_DAMAGE_GFX_KNOCKBACK_MID_HIGH 300.0F
#define FTCOMMON_DAMAGE_GFX_KNOCKBACK_HIGH 600.0F
#define FTCOMMON_DAMAGE_SHUFFLE_MUL 1.3F
#define FTCOMMON_DAMAGE_SMASH_DI_RANGE_MUL 2.1F
#define FTCOMMON_DAMAGE_SAKURAI_KNOCKBACK_LOW 32.0F
#define FTCOMMON_DAMAGE_SAKURAI_ANGLE_LOW_GR 0.0F
#define FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GD 42.5F
#define FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GR F_DEG_TO_RAD(FTCOMMON_DAMAGE_SAKURAI_ANGLE_HIGH_GD)   // 0.741764903069F
#define FTCOMMON_DAMAGE_SAKURAI_ANGLE_DEFAULT_AR F_DEG_TO_RAD(43.0F)                                // 0.75049156F
#define FTCOMMON_DAMAGE_LEVEL_HITSTUN_LOW 12.0F                                                     // Knockback < this value                                                   -> DamageX1
#define FTCOMMON_DAMAGE_LEVEL_HITSTUN_MID 24.0F                                                     // Knockback < this value && knockback >= FTCOMMON_DAMAGE_LEVEL_HITSTUN_LOW -> DamageX2
#define FTCOMMON_DAMAGE_LEVEL_HITSTUN_HIGH 32.0F                                                    // Knockback < this value && knockback >= FTCOMMON_DAMAGE_LEVEL_HITSTUN_MID -> DamageX3
#define FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_ANGLE_LOW F_DEG_TO_RAD(75.0F)                             // 1.308997F
#define FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_ANGLE_HIGH F_DEG_TO_RAD(115.0F)                           // 2.0071287F
#define FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_MUL 0.8F                                        // Multiply crowd reaction knockback by this value if angle > ANGLE_LOW && angle < ANGLE_HIGH
#define FTCOMMON_DAMAGE_PUBLIC_REACT_GASP_KNOCKBACK_UNK 160.0F
#define FTCOMMON_DAMAGE_FIGHTER_FLYTOP_ANGLE_LOW F_DEG_TO_RAD(70.0F)                                // 1.2217306F
#define FTCOMMON_DAMAGE_FIGHTER_FLYTOP_ANGLE_HIGH F_DEG_TO_RAD(100.0F)                              // 1.9198622F
#define FTCOMMON_DAMAGE_FIGHTER_FLYROLL_RANDOM_CHANCE 0.5F
#define FTCOMMON_DAMAGE_FIGHTER_REACT_GASP_KNOCKBACK_MIN 80.0F                                      // Minimum knockback required for a fighter to play their damage voice effect when getting hit

#define FTCOMMON_WALLDAMAGE_INTANGIBLE_TIMER 15

#define FTCOMMON_PASS_STICK_RANGE_MIN (-53)                                                         // Minimum stick Y range required for platform drop to register
#define FTCOMMON_PASS_BUFFER_FRAMES_MAX 4

#define FTCOMMON_SQUAT_STICK_RANGE_MIN (-53)
#define FTCOMMON_SQUAT_BUFFER_FRAMES_MAX 4
#define FTCOMMON_SQUAT_PASS_WAIT 3                              

#define FTCOMMON_DOKAN_STICK_RANGE_MIN (-53)                                                        // Minimum stick Y range required for pipe enter to register
#define FTCOMMON_DOKAN_BUFFER_FRAMES_MAX 4
#define FTCOMMON_DOKAN_UNK_WAIT 20
#define FTCOMMON_DOKAN_TURN_STOP_WAIT_DEFAULT 8
#define FTCOMMON_DOKAN_TURN_STEP (HALF_PI32 / FTCOMMON_DOKAN_TURN_STOP_WAIT_DEFAULT)
#define FTCOMMON_DOKAN_POS_ADJUST 25.0F
#define FTCOMMON_DOKAN_DETECT_WIDTH 200.0F
#define FTCOMMON_DOKAN_POS_ADJUST_WAIT 30.0F
#define FTCOMMON_DOKAN_EXIT_WAIT 30.0F

#define FTCOMMON_OTTOTTO_WALK_DIST_X_MIN 60.0F                                                      // ???
#define FTCOMMON_OTTOTTO_WALK_STICK_RANGE_MIN 60                                                    // Minimum stick range required for walk interrupt???

#define FTCOMMON_LANDING_INTERRUPT_BEGIN 4.0F                                                       // If is_allow_interrupt == TRUE then landing can be interrupted once this many frames of the animation have played
#define FTCOMMON_LANDING_HEAVY_ANIM_SPEED 0.5F                                                      // Animation playback rate of landing after fastfall
#define FTCOMMON_LANDING_LIGHT_ANIM_SPEED 1.0F                                                      // Animation playback rate of normal landing

#define FTCOMMON_FALLSPECIAL_PASS_STICK_RANGE_MIN (-44)                                             // Minimum stick Y range required to pass through drop-through platforms while in FallSpecial
#define FTCOMMON_FALLSPECIAL_SKIP_LANDING_VEL_Y_MAX (-20.0F)                                        // Maximum Y velocity allowed for no impact land

#define FTCOMMON_TORNADO_RELEASE_WAIT 60.0F                     
#define FTCOMMON_TORNADO_PICKUP_WAIT 60                                                             // Frames before tornado can pick up individual fighter again

#define FTCOMMON_TARUCANN_RELEASE_WAIT 180                                                          // Maximum number of frames fighter can spend inside the Barrel Cannon on Kongo Jungle before automatically firing
#define FTCOMMON_TARUCANN_SHOOT_WAIT 10                                                             // Frames before fighter is released once the Barrel Cannon is in its firing state?
#define FTCOMMON_TARUCANN_PICKUP_WAIT 16                                                            // Frames before Barrel Cannon can be used again

#define FTCOMMON_DOWNWAIT_STAND_WAIT 180                                                            // Frames until fighter automatically stands up from knockdown
#define FTCOMMON_DOWNWAIT_STAND_STICK_RANGE_MIN 20                                                  // Minimum stick Y range required to stand up

#define FTCOMMON_DOWNBOUNCE_ATTACK_BUFFER 60

#define FTCOMMON_DOWN_FORWARD_BACK_RANGE_MIN 20                                                     // Minimum stick X range required for missed tech roll

#define FTCOMMON_PASSIVE_BUFFER_FRAMES_MAX 20                                                       // Tech buffer frames
#define FTCOMMON_PASSIVE_F_OR_B_RANGE 20 

#define FTCOMMON_CLIFF_CATCH_WAIT 30                                                                // Frames to wait before fighter can grab ledge again
#define FTCOMMON_CLIFF_DAMAGE_HIGH 100                                                              // If fighter's damage is greater than or equal to this, use Slow action states and hang time
#define FTCOMMON_CLIFF_FALL_WAIT_DAMAGE_HIGH 480
#define FTCOMMON_CLIFF_FALL_WAIT_DAMAGE_LOW 1080
#define FTCOMMON_CLIFF_MOTION_STICK_RANGE_MIN 20                                                    // Minimum stick range required to preform ledge actions (and drop from ledge)

#define FTCOMMON_GET_MASK_LIGHT (1 << 0)
#define FTCOMMON_GET_MASK_HEAVY (1 << 1)

#define FTCOMMON_LIFT_TURN_FRAMES 8
#define FTCOMMON_LIFT_TURN_STEP (-(PI32 / FTCOMMON_LIFT_TURN_FRAMES))                               // -0.3926991F

#define FTCOMMON_LIGHTTHROW_STICK_RANGE_XY_MIN 20
#define FTCOMMON_LIGHTTHROW4_STICK_RANGE_X_MIN 56
#define FTCOMMON_LIGHTTHROW4_STICK_RANGE_Y_MIN 53
#define FTCOMMON_LIGHTTHROW4_F_OR_B_BUFFER_FRAMES_MAX 8
#define FTCOMMON_LIGHTTHROW4_HI_OR_LW_BUFFER_FRAMES_MAX 4
#define FTCOMMON_LIGHTTHROW_HI_OR_LW_ANGLE F_DEG_TO_RAD(50.0F)                                      // 0.87266463F

#define FTCOMMON_HEAVYTHROW_STICK_RANGE_XY_MIN 20
#define FTCOMMON_HEAVYTHROW4_STICK_RANGE_X_MIN 56
#define FTCOMMON_HEAVYTHROW4_STICK_RANGE_Y_MIN 53
#define FTCOMMON_HEAVYTHROW4_F_OR_B_BUFFER_FRAMES_MAX 8
#define FTCOMMON_HEAVYTHROW4_HI_OR_LW_BUFFER_FRAMES_MAX 4
#define FTCOMMON_HEAVYTHROW_HI_OR_LW_ANGLE F_DEG_TO_RAD(50.0F)                                      // 0.87266463F

#define FTCOMMON_HARISENSWING_SCALE_RESET_WAIT 2
#define FTCOMMON_HARISENSWING_SCALE_HIT 1.5F

#define FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_X 0.0F
#define FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Y 60.0F
#define FTCOMMON_LGUNSHOOT_AMMO_SPAWN_OFF_Z 180.0F

#define FTCOMMON_FIREFLOWERSHOOT_GFX_SPAWN_INT 12
#define FTCOMMON_FIREFLOWERSHOOT_RELEASE_LAG 20
#define FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_MAX 8
#define FTCOMMON_FIREFLOWERSHOOT_AMMO_INDEX_LOOP 5
#define FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_X 60.0F
#define FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_Y 100.0F
#define FTCOMMON_FIREFLOWERSHOOT_AMMO_SPAWN_OFF_Z 0.0F

#define FTCOMMON_HAMMER_COLANIM_ID 0x49
#define FTCOMMON_HAMMER_COLANIM_LENGTH 0
#define FTCOMMON_HAMMER_TURN_FRAMES 12
#define FTCOMMON_HAMMER_SKIP_LANDING_VEL_Y_MAX (-20.0F)
#define FTCOMMON_HAMMER_TURN_ROTATE_STEP (-(PI32 / FTCOMMON_HAMMER_TURN_FRAMES))                    // -0.2617994F

#define FTCOMMON_GUARD_RELEASE_LAG 8
#define FTCOMMON_GUARD_DECAY_INT 16
#define FTCOMMON_GUARD_ANGLE_MAX 359.0F
#define FTCOMMON_GUARD_SIZE_HEALTH_DIV 55.0F
#define FTCOMMON_GUARD_SIZE_SCALE_MUL_INIT 0.65F
#define FTCOMMON_GUARD_SIZE_SCALE_MUL_ADD 0.35F
#define FTCOMMON_GUARD_SIZE_SCALE_MUL_DIV 30.0F
#define FTCOMMON_GUARD_SETOFF_MUL 1.62F
#define FTCOMMON_GUARD_SETOFF_ADD 4.0F
#define FTCOMMON_GUARD_VEL_MUL 2.0F                                                                 // Multiplies shieldstun frames and turns it into horizontal velocity

#define FTCOMMON_ESCAPE_STICK_RANGE_MIN 56
#define FTCOMMON_ESCAPE_BUFFER_FRAMES_MAX 4

#define FTCOMMON_SHIELDBREAK_COLANIM_ID 0x24
#define FTCOMMON_SHIELDBREAK_COLANIM_LENGTH 0

#define FTCOMMON_FURAFURA_COLANIM_ID 0x25
#define FTCOMMON_FURAFURA_COLANIM_LENGTH 0
#define FTCOMMON_FURAFURA_BREAKOUT_WAIT_DEFAULT 400
#define FTCOMMON_FURAFURA_BREAKOUT_WAIT_MIN 90

#define FTCOMMON_FURASLEEP_COLANIM_ID 0x26
#define FTCOMMON_FURASLEEP_COLANIM_LENGTH 0
#define FTCOMMON_FURASLEEP_BREAKOUT_WAIT_DEFAULT 300
#define FTCOMMON_FURASLEEP_BREAKOUT_WAIT_MIN 75

#define FTCOMMON_CATCH_THROW_WAIT 60
#define FTCOMMON_CATCH_THROW_STICK_RANGE_MIN 20

#define FTCOMMON_CAPTURE_MASH_STICK_RANGE_MIN 40

#define FTCOMMON_CAPTUREKIRBY_WIGGLE_STICK_RANGE_MIN 53
#define FTCOMMON_CAPTUREKIRBY_WIGGLE_BUFFER_FRAMES_MAX 4
#define FTCOMMON_CAPTUREKIRBY_MAGNITUDE_MAX 220.0F
#define FTCOMMON_CAPTUREKIRBY_MAGNITUDE_MUL 0.45F
#define FTCOMMON_CAPTUREKIRBY_MAGNITUDE_ADD 0.55F
#define FTCOMMON_CAPTUREKIRBY_DIST_X_MIN 28.0F
#define FTCOMMON_CAPTUREKIRBY_DIST_Y_MIN 36.0F
#define FTCOMMON_CAPTUREKIRBY_WIGGLE_VEL_XY 20.0F

#define FTCOMMON_THROWNKIRBYSTAR_BREAKOUT_INPUTS_MIN 3
#define FTCOMMON_THROWNKIRBYSTAR_DECELERATE 4.0F
#define FTCOMMON_THROWNKIRBYSTAR_RELEASE_VEL_X 22.0F
#define FTCOMMON_THROWNKIRBYSTAR_RELEASE_VEL_Y 70.0F

#define FTCOMMON_THROWNCOPYSTAR_BREAKOUT_INPUTS_MIN 3
#define FTCOMMON_THROWNCOPYSTAR_DECELERATE 5.2F

#define FTCOMMON_YOSHIEGG_INTANGIBLE_TIMER 12
#define FTCOMMON_YOSHIEGG_BREAKOUT_INPUTS_MIN 750
#define FTCOMMON_YOSHIEGG_ESCAPE_WAIT_DEFAULT 15
#define FTCOMMON_YOSHIEGG_ESCAPE_WAIT_MAX 250
#define FTCOMMON_YOSHIEGG_WIGGLE_STICK_RANGE_MIN 26
#define FTCOMMON_YOSHIEGG_LAY_VEL_X 20.0F
#define FTCOMMON_YOSHIEGG_LAY_VEL_Y 60.0F
#define FTCOMMON_YOSHIEGG_LAY_OFF_X 200.0F
#define FTCOMMON_YOSHIEGG_LAY_OFF_Y 90.0F
#define FTCOMMON_YOSHIEGG_DAMAGE_MUL 0.5F
#define FTCOMMON_YOSHIEGG_WIGGLE_GFX_RANGE_XY 22.0F
#define FTCOMMON_YOSHIEGG_WIGGLE_ANIM_SPEED 5.0F
#define FTCOMMON_YOSHIEGG_ESCAPE_OFF_Y 10.0F
#define FTCOMMON_YOSHIEGG_ESCAPE_VEL_Y 70.0F

#define FTCOMMON_CAPTURECAPTAIN_MASK_THROW (1 << 1)
#define FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE (1 << 2)                                              // No position adjustment? True only on grounded opponents?
#define FTCOMMON_CAPTURECAPTAIN_JOINT 29
#define FTCOMMON_CAPTURECAPTAIN_FRAME_BEGIN 4.0F
#define FTCOMMON_CAPTURECAPTAIN_ANIM_SPEED 0.0F

#define FTCOMMON_THROWFFALL_SKIP_LANDING_VEL_Y_MAX (-20.0F)

#define FTCOMMON_THROWFF_TURN_STICK_RANGE_MIN 20
#define FTCOMMON_THROWFF_TURN_FRAMES 6

#define FTCOMMON_ATTACK1_INTERRUPT_CATCH_FRAMES_MAX 2

#define FTCOMMON_ATTACK1_FOLLOWUP_FRAMES_DEFAULT 24.0F

#define FTCOMMON_ATTACKS3_STICK_RANGE_MIN 20
#define FTCOMMON_ATTACKS3_5ANGLE_HI_MIN F_DEG_TO_RAD(30.0F)                                         // 0.5235988F 
#define FTCOMMON_ATTACKS3_5ANGLE_HIS_MIN F_DEG_TO_RAD(10.0F)                                        // 0.17453294F
#define FTCOMMON_ATTACKS3_5ANGLE_LW_MIN F_DEG_TO_RAD(-30.0F)                                        // -0.5235988F
#define FTCOMMON_ATTACKS3_5ANGLE_LWS_MIN F_DEG_TO_RAD(-10.0F)                                       // -0.17453294F
#define FTCOMMON_ATTACKS3_3ANGLE_HI_MIN F_DEG_TO_RAD(17.0F)                                         // 0.296706F
#define FTCOMMON_ATTACKS3_3ANGLE_LW_MIN F_DEG_TO_RAD(-17.0F)                                        // -0.296706F

#define FTCOMMON_ATTACKHI3_STICK_RANGE_MIN 20

#define FTCOMMON_ATTACKLW3_STICK_RANGE_MIN (-20)

#define FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_ID_MAX 3
#define FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_X 60.0F
#define FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_Y 10.0F
#define FTCOMMON_ATTACKS4_THUNDERSHOCK_GFX_OFF_Z 100.0F

#define FTCOMMON_ATTACKS4_STICK_RANGE_MIN 56
#define FTCOMMON_ATTACKS4_BUFFER_FRAMES_MAX 3
#define FTCOMMON_ATTACKS4_5ANGLE_HI_MIN F_DEG_TO_RAD(21.0F)                                         // 0.36651915F
#define FTCOMMON_ATTACKS4_5ANGLE_HIS_MIN F_DEG_TO_RAD(7.0F)                                         // 0.122173056F
#define FTCOMMON_ATTACKS4_5ANGLE_LW_MIN F_DEG_TO_RAD(-21.0F)                                        // -0.36651915F
#define FTCOMMON_ATTACKS4_5ANGLE_LWS_MIN F_DEG_TO_RAD(-7.0F)                                        // -0.122173056F
#define FTCOMMON_ATTACKS4_3ANGLE_HI_MIN F_DEG_TO_RAD(17.0F)                                         // 0.296706F
#define FTCOMMON_ATTACKS4_3ANGLE_LW_MIN F_DEG_TO_RAD(-17.0F)                                        // -0.296706F

#define FTCOMMON_ATTACKHI4_STICK_RANGE_MIN 53
#define FTCOMMON_ATTACKHI4_BUFFER_FRAMES_MAX 4

#define FTCOMMON_ATTACKLW4_STICK_RANGE_MIN (-53)
#define FTCOMMON_ATTACKLW4_BUFFER_FRAMES_MAX 4

#define FTCOMMON_ATTACKAIR_SMOOTH_LANDING_BUFFER_FRAMES_MAX 10
#define FTCOMMON_ATTACKAIR_SKIP_LANDING_VEL_Y_MAX (-20.0F)
#define FTCOMMON_ATTACKAIR_DIRECTION_STICK_RANGE_MIN 20                                             // Minimum control stick range required for directional aerial attacks
#define FTCOMMON_LIGHTTHROWAIR4_BUFFER_FRAMES_MAX 8

#define FTCOMMON_ATTACKAIRLW_LINK_REHIT_TIMER 30
#define FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_BEGIN 35.0F
#define FTCOMMON_ATTACKAIRLW_LINK_REHIT_FRAME_END 65.0F
#define FTCOMMON_ATTACKAIRLW_LINK_REHIT_BOUNCE_VEL_Y 40.0F

#define FTCOMMON_SPECIALN_TURN_STICK_RANGE_MIN (-20)
#define FTCOMMON_SPECIALHI_STICK_RANGE_MIN 40
#define FTCOMMON_SPECIALLW_STICK_RANGE_MIN (-40)

typedef struct ftCommon_Dead_StatusVars
{
    s32 rebirth_wait;
    Vec3f pos;

} ftCommon_Dead_StatusVars;

typedef struct ftCommon_Rebirth_StatusVars
{
    Vec3f halo_offset;
    Vec3f pos;
    s32 halo_despawn_wait;
    s32 halo_number;
    s32 halo_lower_wait;

} ftCommon_Rebirth_StatusVars;

typedef struct ftCommon_Sleep_StatusVars
{
    s32 stock_steal_wait;

} ftCommon_Sleep_StatusVars;

typedef struct ftCommon_Entry_StatusVars
{
    s32 entry_wait;
    s32 lr_entry;
    s32 ground_line_id;
    bool32 is_rotate;

} ftCommon_Entry_StatusVars;

typedef struct ftCommon_Turn_StatusVars
{
    bool32 is_allow_turn_direction; // Cannot turn around at all if disabled + horizontal controls are inverted?
    bool32 is_disable_interrupts; // Sort of weird, still allows three interrupts even if false, one being shield and the other being jumpsquat, I don't know the third one
    u16 button_mask;
    s32 lr_dash;
    s32 lr_turn;
    s32 unk_0x14;

} ftCommon_Turn_StatusVars;

typedef struct ftCommon_KneeBend_StatusVars
{
    f32 jump_force;
    f32 anim_frame;
    s32 input_source;
    bool32 is_short_hop;

} ftCommon_KneeBend_StatusVars;

typedef struct ftCommon_JumpAerial_StatusVars
{
    f32 drift;
    f32 vel_x;
    s32 turn_frames;

} ftCommon_JumpAerial_StatusVars;

typedef struct ftCommon_Damage_StatusVars
{
    s32 hitstun_timer;
    s32 dust_gfx_int;
    f32 publicity_knockback;
    u16 coll_mask_curr;
    u16 coll_mask_prev;
    u16 coll_mask_unk;
    Vec3f wall_collide_angle;
    s32 unk_0xB38;
    s32 unk_0xB3C;
    s32 script_index;
    s32 status_id;
    bool32 is_knockback_over;

} ftCommon_Damage_StatusVars;

typedef struct ftCommon_Squat_StatusVars
{
    bool32 is_allow_pass;
    s32 pass_wait;
    s32 unk_0x8;

} ftCommon_Squat_StatusVars;

typedef struct ftCommon_Dokan_StatusVars
{
    s32 ground_material;
    s32 wall_line_id;
    Vec3f pos_current;
    Vec3f pos_target;
    s32 pos_adjust_wait;
    s32 set_unk_wait;
    s32 turn_stop_wait;

} ftCommon_Dokan_StatusVars;

typedef struct ftCommon_Landing_StatusVars
{
    bool32 is_allow_interrupt;

} ftCommon_Landing_StatusVars;

typedef struct ftCommon_FallSpecial_StatusVars
{
    f32 drift;
    bool32 is_allow_pass;
    bool32 is_goto_landing;
    f32 landing_lag;
    bool32 is_allow_interrupt;
    bool32 is_fall_accelerate;

} ftCommon_FallSpecial_StatusVars;

typedef struct ftCommon_Twister_StatusVars
{
    s32 release_wait;
    GObj *tornado_gobj;

} ftCommon_Twister_StatusVars;

typedef struct ftCommon_TaruCann_StatusVars
{
    s32 release_wait;
    s32 shoot_wait;
    GObj *tarucann_gobj;

} ftCommon_TaruCann_StatusVars;

typedef struct ftCommon_DownWait_StatusVars
{
    s32 stand_wait;

} ftCommon_DownWait_StatusVars;

typedef struct ftCommon_DownBounce_StatusVars
{
    s32 attack_buffer;

} ftCommon_DownBounce_StatusVars;

typedef struct ftCommon_Rebound_StatusVars
{
    f32 anim_speed;
    f32 rebound_timer;

} ftCommon_Rebound_StatusVars;

typedef struct ftCommon_CliffWait_StatusVars
{
    s32 status_id;
    s32 fall_wait;

} ftCommon_CliffWait_StatusVars;

typedef struct ftCommon_CliffMotion_StatusVars
{
    s32 status_id;
    s32 cliff_id;

} ftCommon_CliffMotion_StatusVars;

typedef struct ftCommon_Lift_StatusVars 
{
    s32 turn_frames;

} ftCommon_Lift_StatusVars;

typedef struct ftCommon_ItemThrow_StatusVars
{
    s32 turn_rotate_step;
    s32 turn_frames;
    s32 turn_invert_lr_wait;
    f32 throw_vel;
    s32 throw_angle;
    f32 throw_damage;
    Vec2f unk;
    s32 throw_wait;

} ftCommon_ItemThrow_StatusVars;

typedef struct ftCommon_ItemSwing_StatusVars
{
    s32 harisen_scale_reset_wait;

} ftCommon_ItemSwing_StatusVars;

typedef struct ftCommon_FireFlower_StatusVars
{
    s32 flame_vel_index;
    s32 ammo_sub;
    s32 gfx_spawn_int;
    s32 ammo_fire_count;
    bool32 is_release;
    s32 release_lag;

} ftCommon_FireFlower_StatusVars;

typedef struct ftCommon_Hammer_StatusVars
{
    union
    {
        f32 landing_anim_frame;
        f32 jump_force;
    };
    f32 kneebend_anim_frame;
    s32 input_source;
    bool32 is_short_hop;

} ftCommon_Hammer_StatusVars;

typedef struct ftCommon_Guard_StatusVars
{
    s32 release_lag;
    s32 shield_decay_wait;
    GObj *effect_gobj;
    bool32 is_release;
    s32 angle_i;
    f32 angle_f;
    f32 shield_rotate_range;
    f32 setoff_frames;// Shieldstun
    s32 slide_frames; // Carried over from dash
    bool32 is_setoff; // Set to TRUE if shield is hit, does not reset to FALSE until shield is released and put up again

} ftCommon_Guard_StatusVars;

typedef struct ftCommon_Escape_StatusVars
{
    s32 unk_0x0;

} ftCommon_Escape_StatusVars;

typedef struct ftCommon_Catch_StatusVars
{
    f32 catch_pull_frame_begin; // ???
    f32 catch_pull_anim_frames; // Time it takes to retract grabbed fighter
    u8 filler_0x8[0xB3C - 0xB20];
    u32 unk_0x24;

} ftCommon_Catch_StatusVars;

typedef struct ftCommon_CatchWait_StatusVars
{
    s32 throw_wait;

} ftCommon_CatchWait_StatusVars;

typedef struct ftCommon_Capture_StatusVars
{
    bool32 is_goto_pulled_wait;

} ftCommon_Capture_StatusVars;

typedef struct ftCommon_Thrown_StatusVars
{
    s32 status_id;

} ftCommon_Thrown_StatusVars;

typedef struct ftCommon_CaptureKirby_StatusVars
{
    s16 is_goto_capturewait;
    s16 lr;
    s16 is_kirby; // Set to TRUE if captured fighter is Kirby?

} ftCommon_CaptureKirby_StatusVars;

typedef struct ftCommon_CaptureYoshi_StatusVars
{
    GObj *effect_gobj;
    s16 stage;
    s16 breakout_wait;
    s8 lr;
    s8 unk_0x9;

} ftCommon_CaptureYoshi_StatusVars;

typedef struct ftCommon_CaptureCaptain_StatusVars
{
    u16 capture_flag;   // Collection of bit flags, only seen 0x4 and 0x2 used

} ftCommon_CaptureCaptain_StatusVars;

typedef struct ftCommon_ThrowF_StatusVars // Cargo Throw
{
    union
    {
        f32 landing_anim_frame;
        f32 jump_force;
    };
    f32 kneebend_anim_frame;
    s32 input_source;
    bool32 is_short_hop;

} ftCommon_ThrowF_StatusVars;

typedef struct ftCommon_ThrowFF_StatusVars
{
    bool32 is_turn; // Used to tell if Donkey Kong is doing "Cargo Back Throw" (this is still just Forward Throw but he turns around first)
    s32 turn_frames;

} ftCommon_ThrowFF_StatusVars;

typedef struct ftCommon_ThrowFDamaage_StatusVars
{
    s32 hitstun_timer;
    s32 dust_gfx_int;
    f32 publicity_knockback;
    u16 coll_mask;
    u8 filler_0xE[0x28 - 0xE];
    s32 unk_index;
    s32 status_id;
    bool32 is_knockback_over;

} ftCommon_ThrowFDamage_StatusVars;

typedef struct ftCommon_Attack1_StatusVars
{
    bool32 is_goto_followup;
    s32 interrupt_catch_timer; // Jab-Grab window

} ftCommon_Attack1_StatusVars;

typedef struct ftCommon_Attack100_StatusVars
{
    bool32 is_anim_end;
    bool32 is_goto_loop;

} ftCommon_Attack100_StatusVars;

typedef struct ftCommon_AttackLw3_StatusVars
{
    bool32 is_goto_attacklw3; // Interrupt Down Tilt into self

} ftCommon_AttackLw3_StatusVars;

typedef struct ftCommon_Attack4_StatusVars
{
    s32 gfx_id;
    s32 unk_0x4;
    bool32 is_goto_attacklw4;
    s32 unk_0xC;
    s32 lr;

} ftCommon_Attack4_StatusVars;

typedef struct ftCommon_AttackAir_StatusVars
{
    s32 rehit_timer;

} ftCommon_AttackAir_StatusVars;

typedef union ftCommon_StatusVars
{
    ftCommon_Dead_StatusVars dead;
    ftCommon_Rebirth_StatusVars rebirth;
    ftCommon_Sleep_StatusVars sleep;
    ftCommon_Entry_StatusVars entry;
    ftCommon_Turn_StatusVars turn;
    ftCommon_KneeBend_StatusVars kneebend;
    ftCommon_JumpAerial_StatusVars jumpaerial;
    ftCommon_Damage_StatusVars damage;
    ftCommon_Squat_StatusVars squat;
    ftCommon_Dokan_StatusVars dokan;
    ftCommon_Landing_StatusVars landing;
    ftCommon_FallSpecial_StatusVars fallspecial;
    ftCommon_Twister_StatusVars twister;
    ftCommon_TaruCann_StatusVars tarucann;
    ftCommon_DownWait_StatusVars downwait;
    ftCommon_DownBounce_StatusVars downbounce;
    ftCommon_Rebound_StatusVars rebound;
    ftCommon_CliffWait_StatusVars cliffwait;
    ftCommon_CliffMotion_StatusVars cliffmotion;
    ftCommon_Lift_StatusVars lift;
    ftCommon_ItemThrow_StatusVars itemthrow;
    ftCommon_ItemSwing_StatusVars itemswing;
    ftCommon_FireFlower_StatusVars fireflower;
    ftCommon_Hammer_StatusVars hammer;
    ftCommon_Guard_StatusVars guard;
    ftCommon_Escape_StatusVars escape;
    ftCommon_Catch_StatusVars catchmain;
    ftCommon_CatchWait_StatusVars catchwait;
    ftCommon_Capture_StatusVars capture;
    ftCommon_Thrown_StatusVars thrown;
    ftCommon_CaptureKirby_StatusVars capturekirby;
    ftCommon_CaptureYoshi_StatusVars captureyoshi;
    ftCommon_CaptureCaptain_StatusVars capturecaptain;
    ftCommon_ThrowF_StatusVars throwf;
    ftCommon_ThrowFF_StatusVars throwff;
    ftCommon_ThrowFDamage_StatusVars throwfdamage;
    ftCommon_Attack1_StatusVars attack1;
    ftCommon_Attack100_StatusVars attack100;
    ftCommon_AttackLw3_StatusVars attacklw3;
    ftCommon_Attack4_StatusVars attack4;
    ftCommon_AttackAir_StatusVars attackair;

} ftCommon_StatusVars;

#endif