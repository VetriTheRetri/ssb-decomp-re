#ifndef _FTTYPES_H_
#define _FTTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj_renderer.h> // Probably shouldn't be included
#include <PR/ultratypes.h>
#include <sys/thread6.h>
#include <sys/hal_input.h>
#include <sys/obj.h>
#include <mp/mpcoll.h>
#include <gm/gmmisc.h>
#include <gm/gmsound.h>
#include <gm/gmscript.h>

#include "ftdef.h"
#include "ftfunctions.h"

#include <ft/ftcommon.h>
#include <ft/ftchara.h>

// Macros

#define FTPARTS_HURT_NUM_MAX 11
#define FTPARTS_JOINT_NUM_MAX 37

#define FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN 8                                            // Default minimum stick range required to clamp air drift in respective physics routine

#define FTINPUT_STICKBUFFER_FRAMES_MAX      ( U8_MAX - 1)
#define FTINPUT_ZBUTTONLAST_FRAMES_MAX      (U16_MAX + 1)

#define FTSTAT_CHARDATA_START 0x20000
#define FTSTAT_OPENING1_START 0x1000F
#define FTSTAT_OPENING2_START 0x10000

#define FTDATA_FLAG_ANIM_MOVIE              0x1
#define FTDATA_FLAG_ANIM_GAME               0x2

#define FTSTATUPDATE_NONE_PRESERVE          (0)                                         // 0x0 - Just zero
#define FTSTATUPDATE_HIT_PRESERVE           (1 << ftStatusUpdate_Hit_Preserve)          // 0x1
#define FTSTATUPDATE_COLANIM_PRESERVE       (1 << ftStatusUpdate_ColAnim_Preserve)      // 0x2
#define FTSTATUPDATE_GFX_PRESERVE           (1 << ftStatusUpdate_GFX_Preserve)          // 0x4
#define FTSTATUPDATE_FASTFALL_PRESERVE      (1 << ftStatusUpdate_FastFall_Preserve)     // 0x8
#define FTSTATUPDATE_HITSTATUS_PRESERVE     (1 << ftStatusUpdate_HitStatus_Preserve)    // 0x10
#define FTSTATUPDATE_MODELPART_PRESERVE     (1 << ftStatusUpdate_ModelPart_Preserve)    // 0x20
#define FTSTATUPDATE_SLOPECONTOUR_PRESERVE  (1 << ftStatusUpdate_SlopeContour_Preserve) // 0x40
#define FTSTATUPDATE_TEXTUREPART_PRESERVE   (1 << ftStatusUpdate_TexturePart_Preserve)  // 0x80
#define FTSTATUPDATE_PLAYERTAG_PRESERVE     (1 << ftStatusUpdate_PlayerTag_Preserve)    // 0x100
#define FTSTATUPDATE_THROWPOINTER_PRESERVE  (1 << ftStatusUpdate_ThrowGObj_Preserve)    // 0x200
#define FTSTATUPDATE_SHUFFLETIME_PRESERVE   (1 << ftStatusUpdate_ShuffleTime_Preserve)  // 0x400
#define FTSTATUPDATE_LOOPSFX_PRESERVE       (1 << ftStatusUpdate_LoopSFX_Preserve)      // 0x800
#define FTSTATUPDATE_DAMAGEPORT_PRESERVE    (1 << ftStatusUpdate_DamagePort_Preserve)   // 0x1000
#define FTSTATUPDATE_AFTERIMAGE_PRESERVE    (1 << ftStatusUpdate_AfterImage_Preserve)   // 0x2000
#define FTSTATUPDATE_RUMBLE_PRESERVE        (1 << ftStatusUpdate_Rumble_Preserve)       // 0x4000

#define FTCATCHKIND_MASK_SPECIALNYOSHI      (1 << ftCatch_Kind_SpecialNYoshi)           // 0x1
#define FTCATCHKIND_MASK_SPECIALNKIRBY      (1 << ftCatch_Kind_SpecialNKirby)           // 0x2
#define FTCATCHKIND_MASK_TARUCANN           (1 << ftCatch_Kind_TaruCann)                // 0x4
#define FTCATCHKIND_MASK_TWISTER            (1 << ftCatch_Kind_Twister)                 // 0x8
#define FTCATCHKIND_MASK_CATCHCOMMON        (1 << ftCatch_Kind_CatchCommon)             // 0x10
#define FTCATCHKIND_MASK_SPECIALHICAPTAIN   (1 << ftCatch_Kind_SpecialHiCaptain)        // 0x20

#define FTCATCHKIND_MASK_NONE (0)
#define FTCATCHKIND_MASK_ALL            \
(                                       \
    FTCATCHKIND_MASK_SPECIALHICAPTAIN | \
    FTCATCHKIND_MASK_CATCHCOMMON      | \
    FTCATCHKIND_MASK_TWISTER          | \
    FTCATCHKIND_MASK_TARUCANN         | \
    FTCATCHKIND_MASK_SPECIALNKIRBY    | \
    FTCATCHKIND_MASK_SPECIALNYOSHI      \
)

#define FTCOMPUTER_COMMAND_TIMER_BITS           (0x4)
#define FTCOMPUTER_COMMAND_OPCODE_BITS          (0x4)

#define FTCOMPUTER_COMMAND_TIMER_MASK           (0x0F)
#define FTCOMPUTER_COMMAND_OPCODE_MASK          (0xF0)

#define FTCOMPUTER_COMMAND_BUTTON_A_PRESS       (ftComputer_Command_ButtonAPress        << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x0
#define FTCOMPUTER_COMMAND_BUTTON_A_RELEASE     (ftComputer_Command_ButtonARelease      << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x10
#define FTCOMPUTER_COMMAND_BUTTON_B_PRESS       (ftComputer_Command_ButtonBPress        << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x20
#define FTCOMPUTER_COMMAND_BUTTON_B_RELEASE     (ftComputer_Command_ButtonBRelease      << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x30
#define FTCOMPUTER_COMMAND_BUTTON_Z_PRESS       (ftComputer_Command_ButtonZPress        << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x40
#define FTCOMPUTER_COMMAND_BUTTON_Z_RELEASE     (ftComputer_Command_ButtonZRelease      << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x50
#define FTCOMPUTER_COMMAND_BUTTON_L_PRESS       (ftComputer_Command_ButtonLPress        << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x60
#define FTCOMPUTER_COMMAND_BUTTON_L_RELEASE     (ftComputer_Command_ButtonLRelease      << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x70
#define FTCOMPUTER_COMMAND_BUTTON_START_PRESS   (ftComputer_Command_ButtonStartPress    << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x80
#define FTCOMPUTER_COMMAND_BUTTON_START_RELEASE (ftComputer_Command_ButtonStartRelease  << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0x90
#define FTCOMPUTER_COMMAND_STICK_X_TILT         (ftComputer_Command_StickX              << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0xA0
#define FTCOMPUTER_COMMAND_STICK_Y_TILT         (ftComputer_Command_StickY              << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0xB0
#define FTCOMPUTER_COMMAND_MOVEAUTO             (ftComputer_Command_MoveAuto            << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0xC0
#define FTCOMPUTER_COMMAND_STICK_X_VAR          (ftComputer_Command_StickXVar           << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0xD0
#define FTCOMPUTER_COMMAND_STICK_Y_VAR          (ftComputer_Command_StickYVar           << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0xE0
#define FTCOMPUTER_COMMAND_DEFAULT_MAX          (ftComputer_Command_EnumMax             << FTCOMPUTER_COMMAND_TIMER_BITS)   // 0xF0
#define FTCOMPUTER_COMMAND_PKTHUNDER            (0xF3)
#define FTCOMPUTER_COMMAND_END                  (0xFF)

#define FTCOMPUTER_STICK_AUTOFULL               (0x7F)
#define FTCOMPUTER_STICK_AUTOHALF               (0x80)

#define FTCOMPUTER_EVENT_INSTRUCTION(k, t)      ( ((((k) << FTCOMPUTER_COMMAND_TIMER_BITS) & FTCOMPUTER_COMMAND_OPCODE_MASK) | ((t) & FTCOMPUTER_COMMAND_TIMER_MASK)) & U8_MAX )
#define FTCOMPUTER_EVENT_STICK_X(x, t)          FTCOMPUTER_EVENT_INSTRUCTION(ftComputer_Command_StickX, t), (x)
#define FTCOMPUTER_EVENT_STICK_Y(y, t)          FTCOMPUTER_EVENT_INSTRUCTION(ftComputer_Command_StickY, t), (y)
#define FTCOMPUTER_EVENT_PKTHUNDER()            (FTCOMPUTER_COMMAND_PKTHUNDER)
#define FTCOMPUTER_EVENT_END()                  (FTCOMPUTER_COMMAND_END)

#define FTEXPLAIN_EVENT_INSTRUCTION(k, t)       ( ((((k) << 12) & 0xF000) | ((t) & 0xFFF)) & U16_MAX )
#define FTEXPLAIN_EVENT_STICK(x, y, t)          FTEXPLAIN_EVENT_INSTRUCTION(ftExplain_Command_Stick, t), (((((x) << 8) & 0xFF00) | (((y) << 0) & 0x00FF)) & U16_MAX)
#define FTEXPLAIN_EVENT_BUTTON(b, t)            FTEXPLAIN_EVENT_INSTRUCTION(ftExplain_Command_Button, t), ((b) & U16_MAX)
#define FTEXPLAIN_EVENT_END()                   FTEXPLAIN_EVENT_INSTRUCTION(ftExplain_Command_End, 0)

// Structs
struct ftSpecialHit
{
    s32 hit_type;
    s32 joint_id;
    Vec3f offset;
    Vec3f size;
    s32 damage_resist;
};

struct ftItemPickup
{
    Vec2f pickup_offset_light;
    Vec2f pickup_range_light;
    Vec2f pickup_offset_heavy;
    Vec2f pickup_range_heavy;
};

struct ftThrownStatus
{
    s32 status1, status2;
};

struct ftThrownStatusArray
{
    ftThrownStatus ft_thrown[2];
};

struct ftDataUnkContainer3
{
    s32 x0;
};

struct ftScriptInfo
{
    s32 anim_id;            // Animation file ID
    intptr_t offset;        // Offset?
    ftAnimFlags anim_flags; // Animation flags
};

struct ftScriptInfoArray
{
    ftScriptInfo script_info[1]; // Array size = last animation ID?
};

struct ftData
{
    intptr_t file_main_id; // File size in bytes?
    intptr_t file_battlemotion_id;
    intptr_t file_submotion_id;
    intptr_t file_model_id;
    intptr_t file_shieldpose_id;
    intptr_t file_special1_id;
    intptr_t file_special2_id;
    intptr_t file_special3_id;
    intptr_t file_special4_id;
    size_t file_main_size;
    void **p_file_main; // Pointer to character's file?
    s32 **p_file_battlemotion;
    s32 **p_file_submotion;
    s32 **p_file_model;
    s32 **p_file_shieldpose;
    s32 **p_file_special1;
    s32 **p_file_special2;
    s32 **p_file_special3;
    s32 **p_file_special4;
    s32 *p_particle;
    intptr_t o_particles1;
    intptr_t o_particles2;
    intptr_t o_particles3;
    intptr_t o_particles4;
    intptr_t o_attributes; // Offset to fighter's attributes
    ftScriptInfoArray *battlemotion;
    ftScriptInfoArray *submotion;
    s32 battlemotion_array_count;
    s32 *submotion_array_count;
    size_t anim_file_size;
};

struct ftModelPart
{
    void *display_list;
    void *unk_modelpart_0x4;
    void *unk_modelpart_0x8;
    void *unk_modelpart_0xC;
    u8 unk_modelpart_0x10;
};

struct ftModelPartDesc
{
    ftModelPart model_part[4][2];
};

struct ftModelPartContainer
{
    ftModelPartDesc *model_part_desc[FTPARTS_JOINT_NUM_MAX];
};

struct ftModelPartRenderState
{
    s8 render_state_b0, render_state_b1;
};

struct ftTexturePartInfo
{
    u8 joint_id;
    u8 lod[2];
};

struct ftTexturePartContainer
{
    ftTexturePartInfo texture_part_info[2];
};

struct ftTexturePartRenderState
{
    s8 frame_index_default, frame_index_current;
};

union ftAnimFlags
{
    struct
    {
        u32 is_use_xrotn_joint : 1;  // 0x80000000
        u32 is_use_transn_joint : 1; // 0x40000000
        u32 is_use_yrotn_joint : 1;  // 0x20000000
        u32 x198_flag_b3 : 1;
        u32 x198_flag_b4 : 1;
        u32 x198_flag_b5 : 1;
        u32 x198_flag_b6 : 1;
        u32 x198_flag_b7 : 1;
        u32 x199_flag_b0 : 1;
        u32 x199_flag_b1 : 1;
        u32 x199_flag_b2 : 1;
        u32 x199_flag_b3 : 1;
        u32 x199_flag_b4 : 1;
        u32 x199_flag_b5 : 1;
        u32 x199_flag_b6 : 1;
        u32 x199_flag_b7 : 1;
        u32 x19A_flag_b0 : 1;
        u32 x19A_flag_b1 : 1;
        u32 x19A_flag_b2 : 1;
        u32 x19A_flag_b3 : 1;
        u32 x19A_flag_b4 : 1;
        u32 x19A_flag_b5 : 1;
        u32 x19A_flag_b6 : 1;
        u32 x19A_flag_b7 : 1;
        u32 x19B_flag_b0 : 1;
        u32 x19B_flag_b1 : 1;
        u32 x19B_flag_b2 : 1;
        u32 x19B_flag_b3 : 1;
        u32 x19B_flag_b4 : 1;
        u32 x19B_flag_b5 : 1;
        u32 x19B_flag_b6 : 1;
        u32 x19B_flag_b7 : 1;

    } flags;

    u32 word;
};

struct ftMotionFlags
{
    s16 motion_id : 10;
    u16 motion_attack_id : 6;
};

struct ftStatusDesc
{
    ftMotionFlags mflags;
    gmStatFlags sflags;

    void (*proc_update)(GObj*);
    void (*proc_interrupt)(GObj*);
    void (*proc_physics)(GObj*);
    void (*proc_map)(GObj*);
};

struct ftIntroStatusDesc
{
    s32 motion_id;
    void (*proc_update)(GObj*);
};

struct ftThrowHitDesc
{
    s32 status_id;
    s32 damage;
    s32 angle;
    s32 knockback_scale;
    s32 knockback_weight;
    s32 knockback_base;
    s32 element;
};

struct ftThrowReleaseDesc
{
    s32 angle;
    s32 knockback_scale;
    s32 knockback_weight;
    s32 knockback_base;
};

struct ftCreateDesc
{
    s32 ft_kind;
    Vec3f pos;
    s32 lr_spawn;
    u8 team;
    u8 player;
    u8 model_lod;
    u8 costume;
    u8 shade;
    u8 handicap;
    u8 cp_level;
    u8 stock_count;
    u8 unk_rebirth_0x1C;
    u8 unk_rebirth_0x1D;
    u8 team_order;                  // Order number of fighter if member of "VS *character* Team" 
    ub32 is_skip_entry : 1;         // If TRUE, fighter gets spawned in Wait or Fall state, otherwise use entry state
    ub32 is_skip_shadow_setup : 1;  // If TRUE, fighter's shadow is not initialized
    ub32 is_skip_magnify : 1;       // If TRUE, fighter's magnifying glass is not rendered?
    s32 copy_kind;                  // Kirby's copy ID on spawn
    s32 damage;
    s32 pl_kind;
    gsController *controller;       // Pointer to player's controller input struct
    u16 button_mask_a;
    u16 button_mask_b;
    u16 button_mask_z;
    u16 button_mask_l;
    void *anim_heap;                // Pointer to animation bank?
    void *proc_render;
};

struct ftHitMatrix
{
    sb32 unk_fthitmtx_0x0;
    Mtx44f mtx;
    f32 unk_fthitmtx_0x44;
};

struct ftHitbox
{
    gmHitCollisionUpdateState update_state;
    u32 group_id;
    s32 joint_id;
    s32 damage;
    gmHitCollisionElement element;
    DObj *joint;
    Vec3f offset;
    f32 size;
    s32 angle;
    s32 knockback_scale;
    s32 knockback_weight;
    s32 knockback_base;
    s32 shield_damage;
    u32 sfx_level : 3;
    u32 sfx_kind : 4;
    ub32 is_hit_air : 1;
    ub32 is_hit_ground : 1;
    ub32 can_rebound : 1;
    ub32 is_scale_pos : 1;
    u32 attack_id : 6;
    u16 motion_count;
    u16 stat_count;
    Vec3f pos;
    Vec3f pos_prev;
    gmHitRecord hit_targets[GMHITRECORD_COUNT_MAX];
    ftHitMatrix hit_matrix;
};

struct ftHurtboxDesc
{
    s32 joint_id;
    s32 placement;
    sb32 is_grabbable;
    Vec3f offset;
    Vec3f size;
};

struct ftHurtbox
{
    s32 hitstatus;
    s32 joint_id;
    DObj *joint;
    s32 placement;              // 0 = low, 1 = middle, 2 = high
    sb32 is_grabbable;
    Vec3f offset;
    Vec3f size;
};

struct ftHitCollisionLog // Might have to return once structs are cleaned up (alas once forward declarations are implemented to replace void* with struct*)
{
    s32 attacker_object_class;
    void *attacker_hit;
    s32 hitbox_id;
    GObj *attacker_gobj;
    ftHurtbox *victim_hurt; // Victim fighter's hurtbox
    u8 attacker_player;
    s32 attacker_player_number;
};

struct ftItemThrow
{
    sb32 is_smash_throw : 1;
    s32 velocity : 10;
    s32 angle : 11;
    u32 damage : 10;
};

struct ftItemSwing
{
    u32 anim_speed : 10;
};

// PObj / Polygon object?
struct ftParts
{
    s32 transform_update_mode;              // Update mode of DObj's transformations?
    // 0 = free transformation updates
    // 1 = lock transformation updates
    // 2 = ???
    // 3 = ???
    u8 unk_dobjtrans_0x4;
    u8 unk_dobjtrans_0x5;
    u8 unk_dobjtrans_0x6;
    u8 unk_dobjtrans_0x7;
    ftParts *alloc_next;
    u8 unk_0xC;
    u8 joint_id;
    u8 unk_dobjtrans_0xE;
    u8 unk_dobjtrans_0xF;
    Mtx44f unk_dobjtrans_0x10;
    Mtx44f mtx_translate;
    Vec3f vec_translate; // ???
    Mtx44f unk_dobjtrans_0x9C;
    GObj *ftparts_gobj;
};

struct ftPartIndex
{
    s32 joint_id;
    s32 partindex_0x4;
    s32 partindex_0x8;
    s32 partindex_0xC;
};

struct ftPartsUnkIndexTable // Probably animation-related
{
    s32 unk_ftpartunkindex_0x0;
    s32 unk_ftpartunkindex_0x4;
};

// Skeleton joints for electric shock effects?
struct ftSkeleton
{
    union
    {
        Gfx *display_list;
        Gfx **dl_array;
    };
    u8 flags;
};

struct ftCostumeIndex
{
    u8 ffa[4];
    u8 team[3];
    u8 unk_ftcostume_0x7;
};

struct ftAfterImage
{
    s16 translate_x;
    s16 translate_y;
    s16 translate_z;
    Vec3f vec;
};

struct ftCamera
{
    ftStruct *target_fp;
    Vec3f target_pos;
    f32 unk_ftcam_0x10;
};

struct ftSprites
{
    Sprite *stock_spr;
    int **stock_lut;
    Sprite *emblem;
};

struct ftComputer
{
    u8 objective;                           // CPU player's current objective
    u8 objective_default;                   // CPU player's default objective
    u8 input_kind;                          // Stick + Button combination CPU player is set to execute
    u8 behavior;                            // CPU player's general behavior
    u8 unk_ftcom_0x4;                       // Unused?
    u8 trait;                               // CPU player will determine behavior based on this
    u8 unk_ftcom_0x6;                       // Unused?
    u8 input_wait;                          // "Controller command wait timer"
    u8 *p_command;                          // Controller input commands
    sb32 (*proc_com)(GObj*);                // "Main behavior routine"
    u16 jump_wait;                          // CPU player will wait this many frames before jumping on "jump" behavior?
    u16 item_track_wait;                    // CPU player will wait this many frames before targeting an item?
    u16 behavior_change_wait;               // CPU player will wait this many frames before changing behavior?
    u16 unk_ftcom_0x16;                     // Unused?
    u16 walk_stop_wait;                     // CPU player will wait this many frames before stopping after walking for 2.5 seconds?
    u16 fighter_follow_since;               // CPU player has followed its opponent for this many frames?
    u16 fighter_follow_wait;                // CPU player will wait this many frames before following target?
    u16 fighter_follow_end;                 // CPU player will stop following target after this many frames?
    u16 unk_ftcom_0x20;                     // ???
    u16 wiggle_wait;                   // CPU player will wait this many frames before finding a new target?
    u16 target_damage_percent;              // ???
    u16 unk_ftcom_0x26;                     // Unused?
    u16 attack_hit_count;                   // Number of times CPU player successfully dealt damage?
    u16 appeal_attempt_frames;              // CPU player will attempt to taunt while this is not 0
    u16 stand_stop_wait;                    // CPU player will wait this many frames before breaking out of idle behavior
    GObj *target_gobj;                      // CPU player's target's GObj
    u8 item_throw_wait;                     // CPU player will wait this many frames before throwing held item?
    u8 unk_ftcom_0x35;
    u8 unk_ftcom_0x36;                      // Unused?
    u8 input_repeat_count;                  // Number of times CPU player has repeated the same input combination?
    u8 unk_ftcom_0x38;
    u8 stickn_button_a_count;               // Jab
    u8 sticktilts_button_a_count;           // Forward Tilt
    u8 sticksmashs_button_a_count;          // Forward Smash
    u8 sticktilthi_button_a_count;          // Up Tilt
    u8 sticksmashhi_button_a_count;      // Up Tilt / Up Aerial / Down Tilt / Down Aerial?
    u8 sticktiltlw_button_a_count;          // Down Tilt
    u8 sticksmashlw_button_a_count;         // Down Smash / Down Aerial
    u8 sticksmashs_button_b_count;          // Neutral Special
    u8 sticksmashhi_button_b_count;         // Up Special
    u8 sticksmashlw_button_b_count;         // Down Special
    u8 stickn_button_z_button_a_count;      // Grab
    ub32 unk_ftcom_0x44;                    // Unused?
    ub32 ftcom_flags_0x48_b0 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b1 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b2 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b3 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b4 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b5 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b6 : 1;           // Unused?
    ub32 ftcom_flags_0x48_b7 : 1;           // Unused?
    ub32 is_within_vertical_bounds : 1;     // ???
    ub32 ftcom_flags_0x49_b1 : 1;
    ub32 ftcom_flags_0x49_b2 : 1;           // Never set but compared against to check if CPU player should act appropriately VS fighters with reflector/absorb moves?
    ub32 ftcom_flags_0x49_b3 : 1;
    ub32 is_counterattack : 1;              // Whether CPU player will act just before landing from DamageFall?
    ub32 is_shield_item_weapon : 1;         // CPU player will attempt to shield if it detects an incoming weapon or item
    ub32 is_opponent_ra : 1;                // Whether CPU player's opponent can reflect or absorb?
    ub32 is_attempt_specialhi_recovery : 1; // Whether CPU will attempt to recover with Up Speciial
    ub32 ftcom_flags_0x4A_b0 : 1;
    ub32 ftcom_flags_0x4A_b1 : 1;
    ub32 is_stop_stand : 1;                 // Whether CPU player should leave standing / idle state
    Vec2f cliff_left_pos;                   // Nearest left ledge?
    Vec2f cliff_right_pos;                  // Nearest right ledge?
    s32 target_line_id;                     // CPU's target's line ID
    Vec2f target_pos;                       // CPU's target's position
    f32 target_dist;                        // FLOAT_MAX when offstage
    void *target_user;                      // ftStruct* most of the time, but can be itStruct* too when looking for nearest item
    Vec2f origin_pos;                       // CPU player's TopN position at creation?
    Vec2f edge_pos;                         // CPU player's patrol range? (ends at edges of ground_line_id?)
    Vec2f stand_pos;                        // ??? Is this where the CPU player is supposed to stand when idling?
    s32 ground_line_id;                     // Some kind of collision line ID
    f32 dash_predict;                       // CPU player uses this to predict when it's appropriate to dash / run?
    f32 jump_predict;                       // CPU player uses this to predict what jump height to go for?
};

struct ftComputerAttack
{
    s32 input_kind;
    s32 hit_start_frame;
    s32 hit_end_frame;
    f32 detect_near_x;
    f32 detect_far_x;
    f32 detect_near_y;
    f32 detect_far_y;
};

struct ftPlayerInput
{
    u16 button_hold;
    u16 button_tap;
    u16 button_tap_prev;
    Vec2b stick_range;
    Vec2b stick_prev; // Previous stick range?
};

struct ftComputerInput
{
    u16 button_inputs;
    Vec2b stick_range; // CPU stick input?
};

union ftExplainCommand
{
    u16 halfword;

    struct
    {
        u16 opcode : 4;
        u16 param : 12;
    } 
    command;

    Vec2b stick_range;
};

struct ftExplainInput
{
    s32 input_wait;
    ftExplainCommand *input_seq;
};

struct ftAttributes
{
    f32 size_mul;
    f32 walkslow_anim_length;
    f32 walkmiddle_anim_length;
    f32 walkfast_anim_length;
    f32 throw_walkslow_anim_length;
    f32 throw_walkmiddle_anim_length;
    f32 throw_walkfast_anim_length; // Cargo Throw
    f32 rebound_anim_length;
    f32 walk_speed_mul;
    f32 traction;
    f32 dash_speed;
    f32 dash_decelerate;
    f32 run_speed;
    f32 kneebend_anim_length; // Jump squat frames
    f32 jump_vel_x;
    f32 jump_height_mul;
    f32 jump_height_base;
    f32 aerial_jump_vel_x;
    f32 aerial_jump_height;
    f32 aerial_acceleration;
    f32 aerial_speed_max_x;
    f32 aerial_friction;
    f32 gravity;
    f32 fall_speed_max;
    f32 fast_fall_speed;
    s32 jumps_max; // Number of jumps
    f32 weight;
    f32 attack1_followup_frames; // Jab combo connection frames
    f32 dash_to_run; // Frames before dash transitions to run?
    f32 shield_size;
    f32 shield_break_vel_y;
    f32 shadow_size;
    f32 jostle_width; // ???
    f32 jostle_x;
    sb32 is_metallic; // So far only seen this used to determine whether the character makes blue sparks or gray metal dust particles when hit; used by Metal Mario and Samus
    f32 cam_offset_y;
    f32 closeup_cam_zoom;
    f32 cam_zoom;
    f32 cam_zoom_default;
    mpObjectColl object_coll;
    Vec2f cliff_catch; // Ledge grab box
    u16 dead_sfx[2]; // KO voices
    u16 deadup_sfx;  // Star-KO voice
    u16 damage_sfx;
    u16 smash_sfx[3]; // Random Smash SFX
    // s16 unk_0xC2;
    ftItemPickup item_pickup;
    s16 item_throw_vel;
    s16 item_throw_mul;
    u16 throw_heavy_sfx;
    u16 unk_0xEA;
    f32 halo_size; // Respawn platform size?
    gsColorRGBA shade_color[4];
    ub32 is_have_attack11    : 1;
    ub32 is_have_attack12    : 1;
    ub32 is_have_attackdash  : 1;
    ub32 is_have_attacks3    : 1;
    ub32 is_have_attackhi3   : 1;
    ub32 is_have_attacklw3   : 1;
    ub32 is_have_attacks4    : 1;
    ub32 is_have_attackhi4   : 1;
    ub32 is_have_attacklw4   : 1;
    ub32 is_have_attackairn  : 1;
    ub32 is_have_attackairf  : 1;
    ub32 is_have_attackairb  : 1;
    ub32 is_have_attackairhi : 1;
    ub32 is_have_attackairlw : 1;
    ub32 is_have_specialn    : 1;
    ub32 is_have_specialairn : 1;
    ub32 is_have_specialhi   : 1;
    ub32 is_have_specialairhi: 1;
    ub32 is_have_speciallw   : 1;
    ub32 is_have_specialairlw: 1;
    ub32 is_have_catch       : 1;   // Whether fighter has a grab
    ub32 is_have_voice       : 1;
    ftHurtboxDesc fighter_hurt_desc[FTPARTS_HURT_NUM_MAX];
    Vec3f hit_detect_range;         // This is a radius around the fighter within which hitbox detection can occur
    s32 unk_ftca_0x29C;
    ftPartsUnkIndexTable *unk_ftca_0x2A0;
    s32 gfx_joint_cycle_index[5]; // The game will cycle through these joints when applying certain particles such as electricity and flames
    sb32 cliff_status_ground_air_id[5];
    u8 filler_0x2CC[0x2D0 - 0x2CC];
    ftPartIndex *p_ftpart_lookup;
    DObjDescContainer *dobj_desc_container;
    DObjDesc *dobj_lookup; // WARNING: Not actually DObjDesc* but I don't know what this struct is or what its bounds are; bunch of consecutive floats
    s32 *unk_joint[8];
    s32 joint_id1; // What does this do?
    f32 joint_float1;
    s32 joint_id2;
    f32 joint_float2;
    u8 filler_0x304[0x31C - 0x30C];
    f32 unk_0x31C;
    f32 unk_0x320;
    Vec3f *unk_0x324; // Pointer to some array of vectors, something to do with joints
    ftModelPartContainer *model_parts;
    ftMesh *mesh;
    ftTexturePartContainer *texture_parts;
    s32 joint_itemhold_heavy;
    ftThrownStatusArray *thrown_status;
    s32 joint_itemhold_light;
    ftSprites *sprites;
    ftSkeleton **skeleton;
};

struct ftMesh
{
    s32 joint_id;
    Gfx *dl;
    s32 unk_ftdobj_0x8;
    s32 unk_ftdobj_0xC;
};

// Main fighter struct
struct ftStruct
{
    ftStruct *alloc_next;
    GObj *fighter_gobj;
    ftKind ft_kind;
    u8 team;
    u8 player;
    u8 lod_current;             // Hi-Poly = 1, Low-Poly = 2
    u8 lod_match;               // Hi-Poly = 1, Low-Poly = 2
    u8 costume;
    u8 shade;                   // i.e. When multiple instances of the same character costume are in-game
    u8 handicap;
    u8 cp_level;
    s8 stock_count;
    u8 team_order;              // Order number if this fighter is a "VS *character* Team" member; used to check for bonuses such as Yoshi Rainbow
    u8 dl_link;
    s32 player_number;          // Player's number? (Note: NOT player port, e.g. if players 2 and 4 are in a match,
                                // player 2 will be number 1 and player 4 will be number 2; used to match fighters and items?)

    struct ftStatusInfo         // Status = Action State
    {
        u32 status_time_spent;  // Frames spent in this action state
        plKind pl_kind;
        s32 status_id;
        s32 motion_id;          // Index of moveset command script to use

    } status_info;

    s32 percent_damage;
    s32 damage_resist;          // Resits a specific amount of % damage before breaking, effectively damage-based armor
    s32 shield_health;
    f32 unk_ft_0x38;
    s32 x3C_unk;
    u32 hitlag_timer;
    s32 lr;                     // Facing direction; -1 = LR_Left, 1 = LR_Right

    struct ftPhysicsInfo
    {
        Vec3f vel_air; // Aerial self-induced velocity
        Vec3f vel_damage_air; // Aerial knockback velocity
        Vec3f vel_ground; // Grounded self-induced velocity
        f32 vel_damage_ground;
        f32 vel_jostle_x;
        f32 vel_jostle_z;

    } phys_info;

    mpCollData coll_data;

    u8 jumps_used;
    u8 unk_ft_0x149;
    mpGroundAir ground_or_air;

    f32 attack1_followup_frames;
    s32 attack1_status_id;
    s32 attack1_input_count;
    s32 cliffcatch_wait;
    s32 time_since_last_z;  // Frames since last Z-press, resets to 65536 on action state change
    s32 acid_wait;          // Wait this many frames before fighter can be hurt by Planet Zebes acid again
    s32 twister_wait;       // Wait this many frames before fighter can be picked up by the Hyrule Tornado again
    s32 tarucann_wait;      // Wait this many frames before fighter can enter Barrel Cannon again
    s32 damagefloor_wait;   // Wait this many frames before fighter can be hurt by damaging floors again (e.g. Mario's Board the Platforms stage)
    s32 playertag_wait;     // Wait this many frames before fighter's player indicator is shown again; tag is shown when this reaches 1 or is overridden by position on stage
    s32 unk_0x178;

    union ftCommandVars
    {
        struct ftCommandFlags
        {
            u32 flag0;
            u32 flag1;
            u32 flag2;
            u32 flag3;

        } flags;

        struct ftItemThrowFlags
        {
            sb32 is_throw_item;
            u8 unk1;
            u32 damage : 24;
            u8 unk2;
            u32 vel : 12;
            s32 angle : 12;

        } item_throw;

        // Equivalent to ftcmd flags from Melee?

    } command_vars;

    ub32 is_hitbox_active : 1;
    ub32 is_hitstatus_nodamage : 1;
    ub32 is_hurtbox_modify : 1;
    ub32 is_modelpart_modify : 1;
    ub32 is_texturepart_modify : 1;
    ub32 is_reflect : 1;                // Fighter's reflect box is active
    s32 lr_reflect : 2;
    ub32 is_absorb : 1;                 // Fighter's absorb box is active
    s32 lr_absorb : 2;
    ub32 is_goto_attack100 : 1;
    ub32 is_fast_fall : 1;
    ub32 x18D_flag_b5 : 1;
    ub32 is_ignore_blastzone : 1;       // When Master Hand is defeated, this is set to TRUE so the player cannot die if they are offstage
    ub32 is_invisible : 1;

    ub32 x18E_flag_b0 : 1;
    ub32 x18E_flag_b1 : 1;
    ub32 is_ignore_magnify : 1;         // Skip rendering magnifying glass if TRUE?
    ub32 is_playertag_hide : 1;         // Skip rendering player indicator if TRUE
    ub32 is_playertag_bossend : 1;      // Also skips rendering player indicator? Used only in "Master Hand defeated" cinematic from what I can tell so far
    ub32 is_playing_gfx : 1;
    u32 joint_cycle_array_index : 4;    // Goes up to 5 by default; index of the array from gfx_joint_cycle_index from ftAttributes which houses the actual joint ID
    ub32 is_shield : 1;                 // Fighter's shield bubble is active
    ub32 is_attach_effect : 1;          // Destroy GFX on action state change if TRUE, not sure why this and is_playing_gfx are different
    ub32 x18F_flag_b4 : 1;
    ub32 x18F_flag_b5 : 1;
    ub32 is_disable_control : 1;        // Fighter cannot be controlled if TRUE; enabled when training mode menu is up
    ub32 is_hitstun : 1;

    u32 slope_contour : 3;
    ub32 x190_flag_b3 : 1;
    ub32 is_playing_sfx : 1;
    ub32 x190_flag_b5 : 1;
    ub32 is_show_item : 1;
    ub32 x190_flag_b7 : 1;
    ub32 is_effect_interrupt : 1;       // Is this flag's sole purpose to fast-forward GFX in the moveset event parser?
    ub32 is_nullstatus : 1;             // Dead / Entry / Appear / Rebirth, ignore hit collisions + blastzones?
    ub32 is_damage_resist : 1;
    ub32 is_ignore_startbutton : 1;
    u32 camera_mode : 4;
    ub32 is_special_interrupt : 1;      // Whether move can be interrupted by Link's boomerang? Have not seen this used anywhere else
    ub32 x192_flag_b1 : 1;
    ub32 is_catchstatus : 1;
    ub32 x192_flag_b3 : 1;
    ub32 is_use_fogcolor : 1;
    ub32 is_shield_catch : 1;           // Set to TRUE when fighter grabs after getting shield poked; there is a check for this flag that halves throw damage if TRUE
    ub32 x192_flag_b6 : 1;
    ub32 x192_flag_b7 : 1;
    u8 capture_ignore_mask;             // Fighter is immune to these grab types
    u8 catch_mask;                      // Fighter's current grab type

    ftAnimFlags anim_flags;
    Vec3f anim_vel;

    f32 ifpos_x;
    f32 ifpos_y;

    struct ftInputStruct
    {
        void *controller;               // Controller inputs?
        u16 button_mask_a;
        u16 button_mask_b;
        u16 button_mask_z;
        u16 button_mask_l;
        ftPlayerInput pl;
        ftComputerInput cp;

    } input;

    ftComputer fighter_com;

    Vec2f hurtbox_size;                 // Width and height of fighter's hurtbox; calculated from distance of TopN position to farthest hurtbox multiplied by 0.55

    u8 tap_stick_x;                     // Frames control stick has been tapped
    u8 tap_stick_y;                     // Frames control stick has been tapped
    u8 hold_stick_x;                    // Frames control stick has been tapped or held
    u8 hold_stick_y;                    // Frames control stick has been tapped or held

    s32 breakout_wait;                  // Frames until fighter breaks out of shield break / sleep / Cargo Throw
    s8 breakout_lr;                     // Whether victim is mashing left or right
    s8 breakout_ud;                     // Whether victim is mashing up or down

    u8 shuffle_frame_index;             // Ranges from 0-3; position of fighter's model vibration is adjusted based on this index when receiving hitlag
    u8 shuffle_index_max;               // How many iterations the frame index increments before looping back to 0;
    ub8 is_shuffle_electric;            // Fighter vibrates horizontally instead of vertically if hit by an electric attack
    u16 shuffle_timer;                  // Model shift timer

    GObj *throw_gobj;                   // GObj of opponent that threw this fighter
    ftKind throw_ft_kind;               // Kind of opponent that threw this fighter
    u8 throw_team;                      // Team of opponent that threw this fighter
    u8 throw_player;                    // Port of opponent that threw this fighter
    s32 throw_player_number;            // Pnum of opponent that threw this fighter

    u32 attack_id;                      // 
    u16 motion_count;                   // This is used to tell the game not to stale multihit attacks
    gmStatFlags stat_flags;
    u16 stat_count;

    ftHitbox fighter_hit[4];

    s32 invincible_timer;
    s32 intangible_timer;
    s32 special_hitstatus;
    s32 star_invincible_timer;
    s32 star_hitstatus;  // Enemy CPUs avoid player depending on this?
    s32 hitstatus;

    ftHurtbox fighter_hurt[FTPARTS_HURT_NUM_MAX];

    f32 unk_ft_0x7A0;       // Unused?
    f32 hitlag_mul;
    f32 shield_lifeup_wait;
    s32 unk_ft_0x7AC;       // Unused?

    s32 attack_damage;
    f32 attack_knockback;
    u16 attack_hit_count; // Number of times this fighter successfully dealt damage 
    s32 attack_shield_push; // Used to calculate shield/rebound pushback
    f32 attack_rebound; // Actually 2x staled damage?
    s32 lr_attack;
    s32 shield_damage;
    s32 shield_damage_total; // shield_damage + hitbox damage + hitbox shield damage, does not persist?
    s32 lr_shield;
    s32 shield_player; // Port of player hitting this fighter's shield
    s32 reflect_damage;
    s32 damage_lag; // Used to calculate hitlag?
    f32 damage_knockback;
    f32 knockback_resist_passive;// Passive armor, always active (?)
    f32 knockback_resist_status; // Resist this many units of knockback, effectively knockback-based armor
    f32 damage_stack;               // Knockback stacking?
    s32 damage_queue;            // Used to calculate knockback?
    s32 damage_angle;
    s32 damage_element;
    s32 lr_damage;
    s32 damage_index;
    s32 damage_joint_id;
    s32 damage_player_number;
    s32 damage_player; // Port index of damaging fighter
    u16 damage_count;
    s32 damage_kind;
    s32 damage_heal; // Percent damage to heal
    f32 damage_mul;
    s32 damage_object_class;    // Fighter, Weapon, Item or Ground
    s32 damage_object_kind;     // ftKind, wpKind, itKind, envKind
    gmStatFlags damage_stat_flags;
    u16 damage_stat_count; // Might be raw u16

    f32 publicity_knockback; // Knockback value used for crowd reactions

    GObj *search_gobj;  // GObj this fighter found when searching for grabbable fighters?
    f32 search_gobj_dist;
    void (*proc_catch)(GObj*); // Run this callback on grabbing attacker
    void (*proc_capture)(GObj*, GObj*); // Run this callback on grabbed victim
    GObj *catch_gobj;   // GObj this fighter has caught
    GObj *capture_gobj; // GObj this fighter is captured by

    ftThrowHitDesc *fighter_throw; // Pointer to throw description

    GObj *item_hold;

    ftSpecialHit *special_hit;

    Vec3f entry_pos;

    f32 cam_zoom_frame; // Maximum size of fighter's camera range?
    f32 cam_zoom_range; // Multiplier of fighter's camera range?

    ftMotionEvent motion_event[2][2];

    DObj *joint[FTPARTS_JOINT_NUM_MAX];

    ftModelPartRenderState joint_render_state[FTPARTS_JOINT_NUM_MAX - ftParts_Joint_EnumMax]; // Display List active = 0, inactive = -1?
    ftTexturePartRenderState texture_render_state[2];

    ftData *ft_data;
    ftAttributes *attributes;

    void *anim_bank;            // Main animation bank?
    void *anim_load;            // Load animations into this?

    void(*proc_update)(GObj*);
    void(*proc_accessory)(GObj*);
    void(*proc_interrupt)(GObj*);
    void(*proc_physics)(GObj*);
    void(*proc_map)(GObj*);
    void(*proc_slope)(GObj*);   // Slope Contour update
    void(*proc_damage)(GObj*);
    void(*proc_trap)(GObj*);    // Used only by Yoshi Egg so far
    void(*proc_shield)(GObj*);
    void(*proc_hit)(GObj*);
    void(*proc_gfx)(GObj*);
    void(*proc_lagupdate)(GObj*);
    void(*proc_lagstart)(GObj*);
    void(*proc_lagend)(GObj*);
    void(*proc_status)(GObj*);

    alSoundEffect *p_sfx;
    u16 sfx_id;
    alSoundEffect *p_voice;
    u16 voice_id;
    alSoundEffect *p_loop_sfx;
    u16 loop_sfx_id;

    caStruct colanim;

    gsColorRGBA fog_color;      // Used only by Master Hand, when in the background on the -Z plane?
    gsColorRGBA shade_color;    // Shade colors of character costume

    ftExplainInput explain;     // "How To Play" tutorial command struct

    struct ftAfterImageInfo
    {
        ub8 is_itemswing;
        s8 render_state;
        u8 desc_index;
        ftAfterImage desc[3];

    } afterimage;

    union ftFighterVars
    {
        ftMario_FighterVars         mario;
        ftDonkey_FighterVars        donkey;
        ftSamus_FighterVars         samus;
        ftLink_FighterVars          link;
        ftCaptain_FighterVars       captain;
        ftKirby_FighterVars         kirby;
        ftPikachu_FighterVars       pikachu;
        ftPurin_FighterVars         purin;
        ftNess_FighterVars          ness;
        ftMasterHand_FighterVars    masterhand;

    } fighter_vars;

    s32 hammer_timer;

    union ftStatusVars
    {
        ftCommon_StatusVars         common;
        ftMario_StatusVars          mario;
        ftFox_StatusVars            fox;
        ftDonkey_StatusVars         donkey;
        ftSamus_StatusVars          samus;
        ftLink_StatusVars           link;
        ftYoshi_StatusVars          yoshi;
        ftCaptain_StatusVars        captain;
        ftKirby_StatusVars          kirby;
        ftPikachu_StatusVars        pikachu;
        ftNess_StatusVars           ness;
        ftMasterHand_StatusVars     masterhand;

    } status_vars;

    s32 display_mode;
};

#endif