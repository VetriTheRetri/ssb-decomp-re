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

struct efScriptDesc
{
    s32 scripts_num;        // Number of scripts in array?
    efScript *scripts[1];   // Dynamic array
};

struct efScript
{
    u16 unk_efscript_0x0;
	u16 texture_id;         // Texture ID?
    u16 unk_efscript_0x4;
	u16 unk_efscript_0x6;   // Total frames?
    u32 flags;              // Flags?
	f32 unk_efscript_0xC;
    f32 unk_efscript_0x10;
    Vec3f vel;
    f32 unk_efscript_0x20;
    f32 unk_efscript_0x24;
    f32 unk_efscript_0x28;
    f32 unk_efscript_0x2C;
    u8 bytecode[1];         // Particle bytecode
};

struct efTextureDesc
{
    s32 textures_num;
    efTexture *textures[1];
};

struct efTexture
{
    u32 count;
    s32 format;
    s32 color_depth;
    s32 width, height;
    u32 flags;
    void *data[1];        // Offsets to image, then palette data
};

struct efGenerator
{
    efGenerator *next;
	u16 unk_gtor_0x4;
	u16 flags;
	s32 unk_gtor_0x8;
	f32 unk_gtor_0xC;
	f32 unk_gtor_0x10;
    Vec3f pos;
    f32 unk_gtor_0x20;
    f32 unk_gtor_0x24;
    f32 unk_gtor_0x28;
    f32 unk_gtor_0x2C;
    f32 unk_gtor_0x30;
    f32 unk_gtor_0x34;
    f32 unk_gtor_0x38;
    f32 unk_gtor_0x3C;
    f32 unk_gtor_0x40;
    f32 unk_gtor_0x44;
    DObj *dobj;
    efTransform *tfrm;
};

// Might actually be the real efGenerator?
struct efTransform
{
    efTransform *next;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
    u8 unk_tfrm_0x28;
    u8 unk_tfrm_0x29;
    u16 users_num;              // Number of users using this particular efTransform struct?
    Mtx44f unk_tfrm_0x2C;
    Mtx44f unk_tfrm_0x6C;
    f32 unk_tfrm_0xAC;
    f32 unk_tfrm_0xB0;
    void (*proc_dead)(efTransform*);
    u16 unk_tfrm_0xB8;
    GObj *effect_gobj;
};

struct efParticle
{
    efParticle *next;
    u16 unk_ptcl_0x4;
    u16 flags;                  // Flags?
    u8 bank_id;
    u8 unk_ptcl_0x9;
    u8 unk_ptcl_0xA;
    u8 unk_ptcl_0xB;
    ub16 is_have_bytecode;      // Whether particle has bytecode script?
    u16 unk_ptcl_0xE;
    u16 unk_ptcl_0x10;
    u16 unk_ptcl_0x12;
    u8 *bytecode;
    u16 unk_ptcl_0x18;
    u16 unk_ptcl_0x1A;
    u16 unk_ptcl_0x1C;
    u16 unk_ptcl_0x1E;
    Vec3f pos;
    Vec3f vel;                  // Velocity?
    f32 unk_ptcl_0x38;
    f32 unk_ptcl_0x3C;
    f32 unk_ptcl_0x40;
    f32 unk_ptcl_0x44;
    syColorRGBA color1;
    s32 unk_ptcl_0x4C;
    syColorRGBA color2;
    s32 unk_ptcl_0x54;
    efGenerator *gtor;
    efTransform *tfrm;
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
    efTransform *tfrm;

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
