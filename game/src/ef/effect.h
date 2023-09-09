#ifndef _EFFECT_H_
#define _EFFECT_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj_renderer.h> // Probably shouldn't be included
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <gm/gmmisc.h>

#include "efdef.h"
#include "effectvars.h"

#define EFFECT_ALLOC_NUM 38
#define EFFECT_ALLOC_ALIGN 0x8

enum efKind
{
    Ef_Kind_DamageNormal,               // Texture displayed when hit by an attack of the normal element
    Ef_Kind_FlameLR = 6,                // Flame whose velocity depends on the user's facing direction
    Ef_Kind_FlameRandom,                // Small flame texture that scatters
    Ef_Kind_FlameStatic,                // Small flame texture that is stationary?
    Ef_Kind_ShockSmall = 10,            // Texture displayed when hit by an attack of the electric element; small shockwave texture
    Ef_Kind_DustLight,                  // e.g. Light landing (no fast fall)
    Ef_Kind_DustLightRapid,             // Faster version of DustLight?
    Ef_Kind_DustHeavyDouble,            // Two instances of heavy dust clouds
    Ef_Kind_DustHeavyDoubleRapid,       // Two instances of faster heavy dust clouds?
    Ef_Kind_DustHeavy,                  // Single instance of heavy dust cloud
    Ef_Kind_DustHeavyReverse,           // Single instance of direction-flipped heavy dust cloud
    Ef_Kind_DustExpandLarge,            // Large dust cloud that grows in size
    Ef_Kind_DustExpandSmall,            // Small dust cloud that grows in size
    Ef_Kind_DustDashSmall,              // Small (actually pretty large) dust kickup behind user
    Ef_Kind_DustDashLarge,              // Large dust kickup behind user
    Ef_Kind_DamageFlyOrbs,              // Cyan orbs that fly outward
    Ef_Kind_ImpactSW,                   // Green impact shockwave that is created when a character slams into collision
    Ef_Kind_StarRodSpark,               // Star Rod / Star projectile sparkles 
    Ef_Kind_DamageFlySparks,            // Shows sometimes when getting hit
    Ef_Kind_DamageFlySparksReverse,     // LR-inverted version
    Ef_Kind_DamageFlyMDust,             // Metal dust effect, shows sometimes when getting hit
    Ef_Kind_DamageFlyMDustReverse,      // LR-inverted version
    Ef_Kind_SparkleWhite,               // Plays when a flame (Fire Flower, Charizard, Charmander) or when Pikachu's Thunder hits the ground
    Ef_Kind_SparkleWhiteMultiExplode,   // e.g. Kirby's F-Throw explosion
    Ef_Kind_SparkleWhiteMulti,          // I can't really trigger this but it's just SparkleWhiteMultiExplode without the explosion; seems to be exclusive to fighter scripts
    Ef_Kind_SparkleWhiteScale,          // Most common white sparkle, plays during many moves such as Smash attacks
    Ef_Kind_QuakeM0,                    // Creates an earthquake of magnitude 0
    Ef_Kind_QuakeM1,                    // Creates an earthquake of magnitude 1
    Ef_Kind_QuakeM2,                    // Creates an earthquake of magnitude 2
    Ef_Kind_FireSpark = 37,             // Not sure who uses this
    Ef_Kind_FuraSparkle = 40,           // Dizzy sparkles after shield break
    Ef_Kind_Psionic,                    // Ness PSI sparkles
    Ef_Kind_FlashSmall,                 // Expanding green circle, plays when teching
    Ef_Kind_FlashMiddle,                // Other expanding green circle, plays when grabbing ledge
    Ef_Kind_FlashLarge,                 // Large expanding green circle, plays when grabbing Star Man?
    Ef_Kind_BoxSmash = 46,              // Crate / Barrel smash effect
    Ef_Kind_CrashTheGame,               // Literally crashes the game; this takes an argument which acts as a timer; must be extra specific, during a certain scene
    Ef_Kind_KirbyStar = 54,             // Can be created manually but this plays when Kirby makes impact with stage collision
    Ef_Kind_ThunderHit = 70,            // Pikachu's Thunder self-hit
    Ef_Kind_Ripple,                     // Pikachu's Quick-Attack, Ness's PSI Magnet, Mew spawn, etc.
    Ef_Kind_ChargeSparkle = 73,         // Fully charged Neutral Special, e.g. DK or Samus
    Ef_Kind_HealSparkles,               // Used for Heart, Maxim Tomato and Star Man
    Ef_Kind_YoshiEggRoll = 87,
    Ef_Kind_SingNote = 90,
    Ef_Kind_EggBreak
};

struct efCreateDesc
{
    u8 unk_efcreate_0x0;
    u8 unk_efcreate_0x1;
    void *unk_efcreate_0x4;
    DObjRenderTypes unk_efcreate_0x8;
    DObjRenderTypes unk_efcreate_0xB;
    void (*proc_update)(GObj *);
    void (*unk_efcreate_0x14)(GObj *);
    intptr_t unk_efcreate_0x18;
    intptr_t unk_efcreate_0x1C;
    intptr_t unk_efcreate_0x20;
    intptr_t unk_efcreate_0x24;
};

struct efGenerator
{
    u8 filler_0x0[0x14];
    Vec3f pos;
};

struct efTransform
{
    u8 filler_0x0[0x4];
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
    u16 unk_effect_0x28;
    u16 unk_effect_0x2A;
    u8 filler_0x2C[0xB4 - 0x2C];
    void (*proc_dead)(GObj*);
    u16 unk_effect_0xB8;
    GObj *effect_gobj;
};

struct efParticle
{
    u8 filler_0x0[0x8];
    u8 unk_efpart_0x8;
    u16 unk_efpart_0xA;
    u8 filler_0xC[0x20 - 0xC];
    Vec3f pos;
    u8 filler_0x2C[0x48 - 0x2C];
    GfxColorAlpha color1;
    s32 unk_efpart_0x4C;
    GfxColorAlpha color2;
    u8 filler_0x54[0x5C - 0x54];
    efTransform *effect_info;
};

typedef struct grEffectParam
{
    u16 effect_id;
    u16 reset_wait;
    s32 lr;
    u8 unk_ovl2efptr_0x8;

} grEffectParam;

typedef struct grEffectData
{
    Vec3f pos;
    f32 unk_ovl2efvec_scale;
    u16 unk_ovl2efvec_0x10;
    void (*unk_ovl2efvec_proc)(GObj*);
    efCreateDesc effect_desc;

} grEffectData;

typedef struct grEffectVars
{
    u8 unk_ovl2efsub_0x0;
    grEffectParam *unk_ovl2efsub_0x4;
    s32 unk_ovl2efsub_0x8;
    grEffectData *effect_data;

} grEffectVars;

typedef struct grEffect
{
    s32 spawn_wait;
    u16 effect_id;
    u16 reset_wait;
    u8 unk_ovl2efmain_0x8;
    u8* unk_ovl2efmain_0xC;
    s32 lr;
    s32 unk_ovl2efmain_0x14;
    grEffectVars *effect_vars;

} grEffect;

struct efStruct
{
    efStruct *ep_alloc_next;
    GObj *fighter_gobj;

    u16 unk_effectstruct_0x8;
    efTransform *einfo;

    u32 is_pause_effect : 1;
    u32 effect_flags_b1 : 1;
    u32 effect_flags_b2 : 1;
    u32 effect_flags_b3 : 1;

    void (*proc_update)(GObj*);

    union effect_vars // Effect vars union?
    {
        efParticle_EffectVars_Common common;
        efParticle_EffectVars_BoxSmash basic1;
        efParticle_EffectVars_Basic2 basic2;
        efParticle_EffectVars_DamageNormalHeavy damage_normal_heavy;
        efParticle_EffectVars_DustLight dust_light;
        efParticle_EffectVars_DustHeavy dust_heavy;
        efParticle_EffectVars_DamageFlyOrbs damage_fly_orbs;
        efParticle_EffectVars_DamageSpawnOrbs damage_spawn_orbs;
        efParticle_EffectVars_ImpactSW impact_sw;
        efParticle_EffectVars_StarRodSpark star_rod_spark;
        efParticle_EffectVars_DamageFlySpark damage_fly_sparks;
        efParticle_EffectVars_DamageSpawnSpark damage_spawn_sparks;
        efParticle_EffectVars_DamageFlyMDust damage_fly_mdust;
        efParticle_EffectVars_DamageSpawnMDust damage_spawn_mdust;
        efParticle_EffectVars_Quake quake;
        efParticle_EffectVars_Reflector reflector;
        efParticle_EffectVars_Shield shield;
        efParticle_EffectVars_Unknown1 unknown1;
        efParticle_EffectVars_ThunderTrail thunder_trail;
        efParticle_EffectVars_VulcanJab vulcan_jab;
        efParticle_EffectVars_PKThunder pkthunder;
        efParticle_EffectVars_YoshiEggLay yoshi_egg_lay;
        efParticle_EffectVars_CaptureKirbyStar capture_kirby_star;
        efParticle_EffectVars_LoseKirbyStar lose_kirby_star;
        efParticle_EffectVars_GroundEffect ground_effect; // Used in func_ovl2_80115E80

    } effect_vars;
};

#define efGetStruct(effect_gobj) \
((efStruct*)(effect_gobj)->user_data) \

#endif