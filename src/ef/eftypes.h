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
    void (*func_display)(GObj*);
    intptr_t o_dobjsetup;
    intptr_t o_mobjsub;
    intptr_t o_anim_joint;
    intptr_t o_matanim_joint;
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

    u16 bank_id;
    lbTransform *tfrm;

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
