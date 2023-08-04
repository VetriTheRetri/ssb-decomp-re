#ifndef _ITTYPES_H_
#define _ITTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <mp/mpcoll.h>
#include <it/itemvars.h>
#include <gm/gmmisc.h>
#include <gm/gmsound.h>
#include <ef/effect.h>
#include <gm/gmmatch.h>

#include "itdef.h"

// Macros
#define ITEM_ALLOC_MAX 16

#define ITEM_FLAG_PROJECT (1 << 31)              // Perform initial collision check when spawning item?

#define ITEM_MASK_SPAWN_FIGHTER 0                   // Item spawned by fighter
#define ITEM_MASK_SPAWN_GROUND 1                    // Item spawned by stage 
#define ITEM_MASK_SPAWN_ITEM 2                      // Item spawned by another item
#define ITEM_MASK_SPAWN_ITEM 3                   // Item spawned by Pokémon / misc entity class(es?)
#define ITEM_MASK_SPAWN_DEFAULT 4

#define ITEM_MASK_SPAWN_ALL 0xF                     // Mask all GObj classes that can spawn items?

#define ITEM_TEAM_DEFAULT 4                         // Item is teamless; deals damage to any eligible target
#define ITEM_PORT_DEFAULT GMMATCH_PLAYERS_MAX
#define ITEM_HANDICAP_DEFAULT 9 // Handicap?
#define ITEM_STALE_DEFAULT 1.0F

#define ITEM_PICKUP_WAIT_DEFAULT 1400               // "Lifetime" while item is not being carried

#define ITEM_REFLECT_MAX_DEFAULT 100                // Maximum damage cap for reflected articles
#define ITEM_REFLECT_MUL_DEFAULT 1.8F               // Universal reflect damage multiplier
#define ITEM_REFLECT_ADD_DEFAULT 0.99F              // Added after multiplying article's hitbox damage

#define ITEM_DESPAWN_FLASH_BEGIN_DEFAULT 180U       // Item starts flashing rapidly once its lifetime (?) drops below this value
#define ITEM_ARROW_FLASH_INT_DEFAULT 45             // Red arrow pointing downward at article "blinks" at this frequency (45 frames visible, 45 frames invisible)

#define ITEM_REHIT_TIME_DEFAULT 16

#define ITEM_HOP_ANGLE_DEFAULT F_DEG_TO_RAD(135.0F) // 2.3561945F

#define ITEM_SPIN_SPEED_MUL_DEFAULT F_DEG_TO_RAD(18.0F)     // 0.31415927F
#define ITEM_SPIN_SPEED_MUL_NEW_SPAWN F_DEG_TO_RAD(10.0F)   // 0.17453294F, might actually be incorrect
#define ITEM_SPIN_SPEED_MUL_PREV_SPAWN F_DEG_TO_RAD(16.0F)  // 0.27925268F

#define ITEM_SPIN_SPEED_SET_SMASH_THROW F_DEG_TO_RAD(-21.0F) // -0.36651915F
#define ITEM_SPIN_SPEED_SET_NORMAL_THROW F_DEG_TO_RAD(-10.0F) // -0.17453294F

#define ITEM_SPIN_SPEED_FRACTION_DEFAULT 0.01F // Also multiplies spin speed

// Enums
enum itKind
{
    // Common items
    It_Kind_CommonStart,                        // Start of common item IDs
    It_Kind_Box = It_Kind_CommonStart,          // Crate
    It_Kind_Taru,                               // Barrel
    It_Kind_Capsule,                            // Capsule
    It_Kind_Egg,                                // Egg
    It_Kind_Tomato,                             // Maxim Tomato
    It_Kind_Heart,                              // Heart
    It_Kind_Star,                               // Star Man
    It_Kind_Sword,                              // Beam Sword
    It_Kind_Bat,                                // Home-Run Bat
    It_Kind_Harisen,                            // Fan
    It_Kind_StarRod,                            // Star Rod
    It_Kind_LGun,                               // Ray Gun
    It_Kind_FFlower,                            // Fire Flower
    It_Kind_Hammer,                             // Hammer
    It_Kind_MSBomb,                             // Motion-Sensor Bomb
    It_Kind_BombHei,                            // Bob-Omb
    It_Kind_NBumper,                            // Bumper (Item)
    It_Kind_GShell,                             // Green Shell
    It_Kind_RShell,                             // Red Shell
    It_Kind_MBall,                              // Poké Ball
    It_Kind_CommonMax,                          // End of common item IDs

    // Fighter items
    It_Kind_FighterStart = It_Kind_CommonMax,   // Start of fighter item IDs
    It_Kind_PKFire = It_Kind_FighterStart,      // PK Fire pillar
    It_Kind_LinkBomb,                           // Link's Bomb
    It_Kind_FighterMax,                         // End of fighter item IDs

    // Stage items
    It_Kind_GroundStart = It_Kind_FighterMax,   // Start of stage hazard IDs
    It_Kind_PowerBlock = It_Kind_GroundStart,   // POW block
    It_Kind_GBumper,                            // Bumper (Stage Hazard)
    It_Kind_Pakkun,                             // Pirahna Plant
    It_Kind_Mato,                               // Target
    It_Kind_RBomb,                              // Race to the Finish bomb

    It_Kind_GrMonsterStart,                     // Start of stage Pokémon
    It_Kind_GLucky = It_Kind_GrMonsterStart,    // Chansey (Saffron City)
    It_Kind_Marumine,                           // Electrode
    It_Kind_Hitokage,                           // Charmander
    It_Kind_Fushigibana,                        // Venusaur
    It_Kind_Porygon,                            // Porygon
    It_Kind_GrMonsterMax = It_Kind_Porygon,     // End of stage Pokémon IDs

    It_Kind_GroundMax,                          // End of stage hazard IDs

    // Pokémon
    It_Kind_MbMonsterStart = It_Kind_GroundMax, // Start of Pokémon item IDs
    It_Kind_Iwark = It_Kind_MbMonsterStart,     // Onix
    It_Kind_Kabigon,                            // Snorlax
    It_Kind_Tosakinto,                          // Goldeen
    It_Kind_Nyars,                              // Meowth
    It_Kind_Lizardon,                           // Charizard
    It_Kind_Spear,                              // Beedrill
    It_Kind_Kamex,                              // Blastoise
    It_Kind_MLucky,                             // Chansey (Poké Ball)
    It_Kind_Starmie,                            // Starmie
    It_Kind_Sawamura,                           // Hitmonlee
    It_Kind_Dogas,                              // Koffing
    It_Kind_Pippi,                              // Clefairy
    It_Kind_Mew,                                // Mew
    It_Kind_MbMonsterMax = It_Kind_Mew,         // End of Pokémon item IDs

    It_Kind_EnumMax                             // End of all item IDs
};

enum itType
{
    It_Type_Ground,                             // Item is spawned by the stage (?)
    It_Type_Swing,                              // Item can be thrown and swung
    It_Type_Shoot,                              // Item can be fired
    It_Type_Throw,                              // Item can only be thrown
    It_Type_Touch,                              // Item has special properties on hitbox interaction
    It_Type_Special,                            // Hammer, Heart and Maxim Tomato?
    It_Type_Fighter                             // Item spawned by fighter's weapon?
};

enum itWeight
{
    It_Weight_Heavy,                            // Crate and barrel
    It_Weight_Light                             // Everything else lol
};

// Structs
struct itMonsterInfo
{
    u8 monster_curr;
    u8 monster_prev;
    u8 monster_index[44];
    u8 monster_count;
};

struct itFileData
{
    f32 spawn_vel_y[It_Kind_CommonMax];
};

struct itCreateDesc
{
    itKind it_kind;
    void **p_file;
    intptr_t offset;
    u8 unk_aspd_0xC;
    u8 unk_aspd_0xD;
    u8 unk_aspd_0xE;
    s32 update_state;
    bool32(*proc_update)(GObj*);
    bool32(*proc_map)(GObj*);
    bool32(*proc_hit)(GObj*);
    bool32(*proc_shield)(GObj*);
    bool32(*proc_hop)(GObj*);
    bool32(*proc_setoff)(GObj*);
    bool32(*proc_reflector)(GObj*);
    bool32(*proc_damage)(GObj*);
};

struct itStatusDesc
{
    bool32(*proc_update)(GObj*);
    bool32(*proc_map)(GObj*);
    bool32(*proc_hit)(GObj*);
    bool32(*proc_shield)(GObj*);
    bool32(*proc_hop)(GObj*);
    bool32(*proc_setoff)(GObj*);
    bool32(*proc_reflector)(GObj*);
    bool32(*proc_damage)(GObj*);
};

struct itHitPositions
{
    Vec3f pos;
    Vec3f pos_prev;
    s32 unused1;
    u8 filler[0x5C - 0x1C];
    f32 unused2;
};

struct itHitbox
{
    s32 update_state;                   // Hitbox's position update mode (0 = disabled, 1 = fresh, 2 = transfer, 3 = interpolate)
    s32 damage;                         // Hitbox's base damage output
    f32 stale;                          // Might be swapped with throw_mul
    f32 throw_mul;                      // Might be swapped with stale
    s32 element;                        // Hitbox's element
    Vec3f offset[2];                    // Hitbox offset from TopN translation vector?
    f32 size;                           // Hitbox size
    s32 angle;                          // Launch angle
    u32 knockback_scale;                // Knockback growth
    u32 knockback_weight;               // Weight-Dependent Set Knockback
    u32 knockback_base;                 // Base knockback
    s32 shield_damage;                  // Shield damage
    s32 priority;                       // Priority?
    u8 interact_mask;                   // Mask of object classes hitbox can interact with; 0x1 = fighters, 0x2 = items, 0x4 = articles
    u16 hit_sfx;                        // Played when hitbox connects with a hurtbox
    u32 rebound : 1;                    // Item's hitbox can collide with other hitboxes
    u32 can_rehit_item : 1;             // Item can rehit item after default rehit cooldown expires
    u32 can_rehit_fighter : 1;          // Item can rehit fighter after default rehit cooldown expires
    u32 can_rehit_shield : 1;           // Item can rehit shield after default rehit cooldown expires
    u32 can_hop : 1;                    // Item can bounce off shields
    u32 can_reflect : 1;                // Item can be reflected
    u32 can_shield : 1;                 // Item can be shielded
    u32 attack_id : 6;                  // Attack ID copied from object that spawned this item
    u16 motion_count;                   // Item's animation update number?
    gmStatFlags stat_flags;             // Item's status flags 
    u16 stat_count;                     // Item's status update number
    s32 hitbox_count;                   // Item's hitbox count, up to two
    itHitPositions hit_positions[2];    // Item hitbox position?
    gmHitCollisionRecord hit_targets[4];// Item's record of attacked targets
};

struct itHitEvent                       // Miniature Hitbox subaction event? Used by explosions.
{
    u8 timer;
    s32 angle : 10;
    u32 damage : 8;
    u16 size;
};

struct itHitParty                       // Full-scale hitbox subaction event? Used by Venusaur and Porygon.
{
    u8 timer;
    s32 angle : 10;
    u32 damage : 8;
    u16 size;
    u32 knockback_scale;
    u32 knockback_weight;
    u32 knockback_base;
    s32 element;
    u32 rebound : 1;
    s32 shield_damage;
    u16 hit_sfx;
};

struct itHurtbox
{
    u8 interact_mask;                   // 0x1 = interact with fighters, 0x2 = interact with weapons, 0x4 = interact with other items
    s32 hitstatus;                      // 0 = none, 1 = normal, 2 = invincible, 3 = intangible
    Vec3f offset;                       // Offset added to TopN joint's translation vector
    Vec3f size;                         // Hurtbox size
};

struct itAttributes
{
    void *unk_0x0;
    void ***mobj;
    void **anim_joint;
    void ***matanim_joint;
    u32 is_render_transparency : 1;
    u32 unk_0x10_b1 : 1;
    u32 is_render_colanim : 1;
    u32 is_give_hitlag : 1;
    u32 weight : 1;                     // Heavy = 0, Light = 1
    s32 hit_offset1_x : 16;
    s32 hit_offset1_y : 16;             // When in doubt, make these raw s16
    s32 hit_offset1_z : 16;
    s32 hit_offset2_x : 16;
    s32 hit_offset2_y : 16;
    s32 hit_offset2_z : 16;
    Vec3h hurt_offset;
    Vec3h hurt_size;
    s16 objectcoll_top;
    s16 objectcoll_center;
    s16 objectcoll_bottom;
    s16 objectcoll_width;
    u16 size;
    s32 angle : 10;
    u32 knockback_scale : 10;
    u32 damage : 8;
    u32 element : 4;
    u32 knockback_weight : 10;
    s32 shield_damage : 8;
    u32 hitbox_count : 2;
    u32 rebound : 1;
    u32 hit_sfx : 10;
    u32 priority : 3;
    u32 can_rehit_item : 1;
    u32 can_rehit_fighter : 1;
    u32 can_hop : 1;
    u32 can_reflect : 1;
    u32 can_shield : 1;
    u32 knockback_base : 10;
    u32 type : 4;
    u32 hitstatus : 4;
    u32 unk_atca_0x3C_b6 : 1;
    u32 unk_atca_0x3C_b7 : 1;
    u32 unk_atca_sfx : 10;
    u32 drop_sfx : 10;
    u32 throw_sfx : 10;
    u32 vel_scale : 9;
    u16 spin_speed;
};

struct itStruct                         // Common items, stage hazards, fighter items and Pokémon
{
    void *ip_alloc_next;                // Memory region allocated for next itStruct
    GObj *item_gobj;                    // Item's GObj pointer
    GObj *owner_gobj;                   // Item's owner
    itKind it_kind;                     // Item ID
    itType type;                        // Item type
    u8 team;                            // Item's team
    u8 player;                          // Item's port index
    u8 handicap;                        // Item's handicap
    s32 player_number;                  // Item's player number
    s32 percent_damage;                 // Item's damage
    u32 hitlag_timer;                   // Item's hitlag
    s32 lr;                             // Item's facing direction

    struct phys_info
    {
        f32 vel_ground;                 // Item's ground velocity
        Vec3f vel_air;                  // Item's aerial velocity

    } phys_info;

    mpCollData coll_data;               // Item's collision data
    mpGroundAir ground_or_air;          // Ground or air bool

    itHitbox item_hit;                  // Item's hitbox
    itHurtbox item_hurt;                // Item's hurtbox

    s32 hit_normal_damage;              // Damage applied to entity this item has hit
    s32 lr_attack;                      // Direction of outgoing attack?
    s32 hit_refresh_damage;             // Damage applied to entity this item has hit, if rehit is possible?
    s32 hit_attack_damage;              // Damage item dealt to other attack

    s32 hit_shield_damage;              // Damage item dealt to shield
    f32 shield_collide_angle;           // Angle at which item collided with shield?
    Vec3f shield_collide_vec;           // Position of shield item collided with? (Update: only Z axis appears to be used, can be 0, -1 or 1 depending on attack direction

    GObj *reflect_gobj;                 // GObj that reflected this item
    gmStatFlags reflect_stat_flags;     // Status flags of GObj reflecting this item (e.g. is_smash_attack, is_ground_or_air, is_special_attack, etc.)
    u16 reflect_stat_count;             // Status update count at the time the item is reflected?

    s32 damage_highest;                 // I don't know why there are at least two of these
    f32 damage_knockback;               // Item's calculated knockback
    s32 damage_queue;                   // Used to calculate knockback?
    s32 damage_angle;                   // Angle of attack that hit the item
    s32 damage_element;                 // Element of attack that hit the item
    s32 lr_damage;                      // Direction of incoming attack
    GObj *damage_gobj;                  // GObj that last dealt damage to this item?
    u8 damage_team;                     // Team of attacker
    u8 damage_port;                     // Controller port of attacker
    s32 damage_player_number;           // Player number of attacker
    u8 damage_handicap;                 // Handicap of attacker
    s32 damage_display_mode;            // Display mode of attacker which the item takes on
    s32 damage_lag;                     // Used to calculate hitlag?

    s32 lifetime;                       // Item's duration in frames

    f32 vel_scale;                      // Scale item's velocity

    u16 unk_sfx;                        // Unused?
    u16 drop_sfx;                       // SFX to play when item is dropped?
    u16 throw_sfx;                      // SFX to play when item is thrown?

    u32 is_allow_pickup : 1;            // Bool to check whether item can be picked up or not
    u32 is_hold : 1;                    // I think this is used to tell if a fighter is holding this article?
    u32 times_landed : 2;               // Number of times item has touched the ground when landing, used to tell how many times item should bounce up
    u32 times_thrown : 3;               // Number of times item has been dropped or thrown by player; overflows after 7
    u32 weight : 1;                     // 0 = item is heavy, 1 = item is light
    u32 is_damage_all : 1;              // Item ignores ownership and can damage anything?
    u32 is_attach_surface : 1;          // Item is "sticking" to a collision line specified by attach_line_id
    u32 is_thrown : 1;                  // Apply magnitude and stale multiplier to damage output
    u16 attach_line_id;                 // Line ID that item is attached to
    u32 pickup_wait : 12;               // Number of frames item can last without being picked up (if applicable)
    u32 is_allow_knockback : 1;         // Item can receive knockback velocity?
    u32 is_unused_item_bool : 1;        // Unused? Set various times, but no item process makes use of it
    u32 is_static_damage : 1;           // Ignore reflect multiplier if TRUE

    itAttributes *attributes;     // Pointer to standard attributes

    caStruct colanim;                   // Item's color animation struct

    u32 is_hitlag_victim : 1;           // Item can deal hitlag to target

    u16 it_multi;                       // Some sort of universal multi-purpose variable, e.g. it is used as intangibility delay for Star Man and ammo count for Ray Gun
    u32 item_event_index : 4;           // Item hitbox script index? When in doubt, make this u8 : 4

    f32 rotate_step;                    // Item spin rotation step

    GObj *indicator_gobj;               // Red arrow pickup indicator GObj
    u8 indicator_timer;               // Frequency of red arrow indicator flash

    union item_vars                     // Item-specific state variables
    {
        // Common items
        itCommon_ItemVars_Taru taru;
        itCommon_ItemVars_BombHei bombhei;
        itCommon_ItemVars_Bumper bumper;
        itCommon_ItemVars_Shell shell;
        itCommon_ItemVars_MBall m_ball;

        // Fighter items
        itFighter_ItemVars_PKFire pkfire;
        itFighter_ItemVars_LinkBomb link_bomb;

        // Stage items
        itGround_ItemVars_Pakkun pakkun;
        itGround_ItemVars_RaceBomb rbomb;
        itGround_ItemVars_GrLucky grlucky;
        itGround_ItemVars_Marumine marumine;
        itGround_ItemVars_Hitokage hitokage;
        itGround_ItemVars_Fushigibana fushigibana;
        itGround_ItemVars_Porygon porygon;

        // Poké Ball Pokémon
        itMonster_ItemVars_Iwark iwark;
        itMonster_ItemVars_Kabigon kabigon;
        itMonster_ItemVars_Tosakinto tosakinto;
        itMonster_ItemVars_Nyars nyars;
        itMonster_ItemVars_Lizardon lizardon;
        itMonster_ItemVars_Spear spear;
        itMonster_ItemVars_Kamex kamex;
        itMonster_ItemVars_MbLucky mblucky;
        itMonster_ItemVars_Starmie starmie;
        itMonster_ItemVars_Dogas dogas;
        itMonster_ItemVars_Mew mew;

    } item_vars;

    s32 display_mode;                   // Item's display mode: 0 = normal, 1 = hit collisions, 2 = opaque hurtboxes + outlined attack hitboxes, 3 = map collisions

    bool32(*proc_update)(GObj*);        // Update general item information
    bool32(*proc_map)(GObj*);           // Update item's map collision
    bool32(*proc_hit)(GObj*);           // Runs when item collides with a hurtbox
    bool32(*proc_shield)(GObj*);        // Runs when item collides with a shield
    bool32(*proc_hop)(GObj*);           // Runs when item bounces off a shield
    bool32(*proc_setoff)(GObj*);        // Runs when item's hitbox collides with another hitbox
    bool32(*proc_reflector)(GObj*);     // Runs when item is reflected
    bool32(*proc_damage)(GObj*);        // Runs when item takes damage
    bool32(*proc_dead)(GObj*);          // Runs when item is in a blast zone
};

#endif