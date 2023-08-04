#ifndef _GMMISC_H_
#define _GMMISC_H_

// Data that is shared between different headers but does not really belong anywhere... yet

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#define PERCENT_DAMAGE_MAX 999

#define LEFT -1
#define CENTER 0
#define RIGHT 1
#define WALL_UP 2               // Apparently a valid facing direction value used by Pikachu's Thunder Jolt?
#define WALL_DOWN 3             // Apparently a valid facing direction value used by Pikachu's Thunder Jolt?

#define GMCOMPLAYER_LEVEL_MAX 9

#define GMHITCOLLISION_MASK_FIGHTER (1 << 0)    // Can interact with fighters
#define GMHITCOLLISION_MASK_WEAPON  (1 << 1)    // Can interact with weapons
#define GMHITCOLLISION_MASK_ITEM    (1 << 2)    // Can interact with items

#define GMHITCOLLISION_MASK_ALL     (GMHITCOLLISION_MASK_FIGHTER | GMHITCOLLISION_MASK_WEAPON | GMHITCOLLISION_MASK_ITEM)

typedef enum gmHitCollisionStatus
{
    gmHitCollision_HitStatus_None, // User's hurtboxes are disabled
    gmHitCollision_HitStatus_Normal, // User can be hit
    gmHitCollision_HitStatus_Invincible, // User can be hit, but is immune to damage
    gmHitCollision_HitStatus_Intangible // User cannot be hit

} gmHitCollisionStatus;

typedef enum gmHitCollisionElement
{
    gmHitCollision_Element_Normal,
    gmHitCollision_Element_Fire,
    gmHitCollision_Element_Electric,
    gmHitCollision_Element_Slash,
    gmHitCollision_Element_Coin,
    gmHitCollision_Element_Unk1,
    gmHitCollision_Element_Sleep,
    gmHitCollision_Element_Unk2

} gmHitCollisionElement;

typedef enum gmHitCollisionType // Hitbox types, this is universal but I don't know where else to put it so both fighters and items can see it without redefining it for each
{
    gmHitCollision_Type_Hurt,
    gmHitCollision_Type_Shield,
    gmHitCollision_Type_ShieldRehit,
    gmHitCollision_Type_Hit,
    gmHitCollision_Type_HurtRehit,             // Only used for specific articles? e.g. Pirahna Plants dealing damage
    gmHitCollision_Type_Absorb,
    gmHitCollision_Type_Reflect

} gmHitCollisionType;

typedef enum gmHitCollisionUpdateState
{
    gmHitCollision_UpdateState_Disable,          // No active hitbox or updates
    gmHitCollision_UpdateState_New,              // Initialize hitbox positions
    gmHitCollision_UpdateState_Transfer,         // Transitions to interpolation mode, that's it
    gmHitCollision_UpdateState_Interpolate       // Copies current position to previous

} gmHitCollisionUpdateState;

typedef enum gmHitCollisionSoundEffect
{
    gmHitCollision_SoundEffect_Punch,
    gmHitCollision_SoundEffect_Kick,
    gmHitCollision_SoundEffect_Coin,
    gmHitCollision_SoundEffect_Burn,
    gmHitCollision_SoundEffect_Zap,
    gmHitCollision_SoundEffect_Slash,
    gmHitCollision_SoundEffect_Fan,
    gmHitCollision_SoundEffect_Bat,
    gmHitCollision_SoundEffect_EnumMax

} gmHitCollisionSoundEffect;

typedef enum gmHitCollisionSoundLevel
{
    gmHitCollision_SoundLevel_Weak,
    gmHitCollision_SoundLevel_Mid,
    gmHitCollision_SoundLevel_Strong,
    gmHitCollision_SoundLevel_EnumMax

} gmHitCollisionSoundLevel;

typedef enum ftHitCollisionLogKind
{
    ftHitlog_ObjectClass_Fighter = 1,
    ftHitlog_ObjectClass_Weapon,
    ftHitlog_ObjectClass_Item,
    ftHitlog_ObjectClass_Ground

} ftHitCollisionLogKind;

typedef struct gmHitCollisionFlags
{
    u32 is_interact_hurt : 1;
    u32 is_interact_shield : 1;
    u32 is_interact_reflect : 1;
    u32 is_interact_absorb : 1;
    u32 interact_mask : 3;
    u32 timer_rehit : 6;

} gmHitCollisionFlags;

typedef struct gmHitCollisionRecord
{
    GObj *victim_gobj;
    gmHitCollisionFlags victim_flags;

} gmHitCollisionRecord;

typedef struct gmPlayerInput
{
    u16 button_hold;
    u16 button_tap;
    u16 button_tap_prev;
    Vec2b stick_range;
    Vec2b stick_prev; // Previous stick range?

} gmPlayerInput;

typedef struct gmComputerInput
{
    u16 button_inputs;
    Vec2b stick_range; // CPU stick input?

} gmComputerInput;

typedef union gmStatFlags
{
    struct
    {
        u16 is_ground_or_air0 : 1;
        u16 is_special_attack0 : 1;
        u16 flags_0x2000 : 1;
        u16 is_smash_attack : 1;
        u16 is_ground_or_air : 1;
        u16 is_special_attack : 1;
        u16 attack_group_id : 10;
    };
    u16 halfword;

} gmStatFlags;

typedef struct caScript
{
    u32 *p_script; // Pointer to Color Animation script?
    u16 color_event_timer;
    u16 script_index;
    void *p_subroutine[1];
    s32 loop_count[1];
    void *p_goto[2];
    s32 unk_ca_timer;

} caScript;

typedef struct caColorInfo
{
    u8 r, g, b, a;
    s16 ir, ig, ib, ia; // Interpolation step

} caColorInfo;

typedef struct caStruct
{
    caScript cs[2];
    s32 duration;
    s32 colanim_id;
    caColorInfo envcolor;
    f32 light_angle1;
    f32 light_angle2;
    caColorInfo blendcolor;
    u8 is_use_envcolor : 1;
    u8 is_use_light : 1;
    u8 is_use_blendcolor : 1;
    u8 unk_ca_0x60_b34 : 2;

} caStruct;

typedef struct ColAnimDesc
{
    void *p_script;
    u8 unk_colanimdesc_0x4;
    u8 unk_colanimdesc_0x5;

} ColAnimDesc;

#endif