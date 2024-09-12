#ifndef _EFTYPES_H_
#define _EFTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <cm/camera.h>
#include <gm/generic.h>

#include <ef/efdef.h>
#include <ef/efvars.h>

struct efCreateDesc
{
    u8 flags;
    u8 dl_link;
    void **file_head;
    DObjTransformTypes transform_types1;
    DObjTransformTypes transform_types2;
    void (*proc_update)(GObj*);
    void (*proc_draw)(GObj*);
    intptr_t o_dobjsetup;
    intptr_t o_mobjsub;
    intptr_t o_anim_joint;
    intptr_t o_matanim_joint;
};

struct efGenerator
{
    u16 unk_efgen_0x0;
	u16 unk_efgen_0x2;
	u16 unk_efgen_0x4;
	u16 unk_efgen_0x6;
	s32 unk_efgen_0x8;
	f32 unk_efgen_0xC;
	f32 unk_efgen_0x10;
    Vec3f pos;
    f32 filler_0x20[10];
    DObj *dobj;
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
    void (*proc_dead)(efTransform*);
    u16 unk_effect_0xB8;
    GObj *effect_gobj;
};

struct efParticle
{
    efParticle *next;
    u8 filler_0x4[0x4];
    u8 unk_efpart_0x8;
    u16 unk_efpart_0xA;
    u8 filler_0xC[0x20 - 0xC];
    Vec3f pos;
    Vec3f vel;                  // Velocity?
    u8 filler_0x2C[0x48 - 0x38];
    syColorRGBA color1;
    s32 unk_efpart_0x4C;
    syColorRGBA color2;
    u8 filler_0x54[0x5C - 0x54];
    efTransform *effect_info;
};

typedef struct efGroundParam
{
    u16 effect_id;                      // Array index of effect desc to use
    u16 make_queue;                     // How many of this effect ID to spawn
    s32 lr;                             // 0 = random, -3 or 3 = ???
    u8 effect_weight;                   // Randomizer weight?

} efGroundParam;

typedef struct efGroundCreateDesc
{
    f32 alt_high;                       // Maximum alt
    f32 alt_low;                        // Minimum alt
    f32 pos_z;                          // Z-Axis position
    f32 scale;                          // Scale
    u16 effect_status;                  // Effect status? Always -1?
    void (*proc_groundeffect)(GObj*);   // ???
    efCreateDesc effect_desc;           // Effect description

} efGroundCreateDesc;

typedef struct efGroundData
{
    u8 param_num;                       // Number of elements in effect_param
    efGroundParam *effect_param;        // Effect parameter descriptions
    intptr_t o_data;                    // ???
    efGroundCreateDesc *effect_descs;   // Ground effect creation descriptions

} efGroundData;

typedef struct efGroundActor
{
    s32 make_wait;
    u16 effect_id;
    u16 make_queue;             // How many of this effect should be spawned
    u8 effect_count;            
    u8 *effect_ids;
    s32 lr;                     // Number of effects spawned, multiplied by LR sign
    void *file_head;
    efGroundData *effect_data;

} efGroundActor;

struct efStruct
{
    efStruct *alloc_next;
    GObj *fighter_gobj;

    u16 unk_effectstruct_0x8;
    efTransform *eftrans;

    ub32 is_pause_effect : 1;

    void (*proc_update)(GObj*);

    union efEffectVars // Effect vars union?
    {
        efCommonEffectVarsCommon common;
        efCommonEffectVarsContainer container;
        efCommonEffectVarsDamageNormalHeavy damage_normal_heavy;
        efCommonEffectVarsDustLight dust_light;
        efCommonEffectVarsDustHeavy dust_heavy;
        efCommonEffectVarsDamageFlyOrbs damage_fly_orbs;
        efCommonEffectVarsDamageSpawnOrbs damage_spawn_orbs;
        efCommonEffectVarsImpactWave impact_wave;
        efCommonEffectVarsStarRodSpark star_rod_spark;
        efCommonEffectVarsDamageFlySpark damage_fly_sparks;
        efCommonEffectVarsDamageSpawnSpark damage_spawn_sparks;
        efCommonEffectVarsDamageFlyMDust damage_fly_mdust;
        efCommonEffectVarsDamageSpawnMDust damage_spawn_mdust;
        efCommonEffectVarsQuake quake;
        efCommonEffectVarsReflector reflector;
        efCommonEffectVarsShield shield;
        efCommonEffectVarsUnknown1 unknown1;
        efCommonEffectVarsThunderTrail thunder_trail;
        efCommonEffectVarsVulcanJab vulcan_jab;
        efCommonEffectVarsPKThunder pkthunder;
        efCommonEffectVarsYoshiEggLay yoshi_egg_lay;
        efCommonEffectVarsCaptureKirbyStar capture_kirby_star;
        efCommonEffectVarsLoseKirbyStar lose_kirby_star;

        efGroundEffectVarsCommon ground_effect; // Used in efGroundCheckEffectInBounds

    } effect_vars;
};

#endif
