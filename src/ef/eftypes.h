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
    u16 kind;               // Generator kind
	u16 texture_id;         // Texture ID?
    u16 generator_lifetime; // Total frames?
    u16 particle_lifetime;  // Particle lifetime?
    u32 flags;              // Flags?
	f32 gravity;
    f32 friction;
    Vec3f vel;
    f32 unk_script_0x20;
    f32 unk_script_0x24;
    f32 unk_script_0x28;
    f32 mscale;
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
    s32 fmt;
    s32 siz;
    s32 width, height;
    u32 flags;
    void *data[1];        // Offsets to image, then palette data
};

struct efGenerator
{
    efGenerator *next;
	u16 generator_id;
	u16 flags;
	u8 kind;
    u8 bank_id;
    u16 texture_id;
    u16 particle_lifetime;
	u16 generator_lifetime;
	u8 *bytecode;
    Vec3f pos;
    Vec3f vel;
    f32 gravity;
    f32 friction;
    f32 mscale;
    f32 unk_gtor_0x38;
    f32 unk_gtor_0x3C;
    f32 unk_gtor_0x40;
    f32 unk_gtor_0x44;
    DObj *dobj;
    efTransform *tfrm;

    union efGeneratorVars
    {
        struct efGeneratorRotate
        {
            f32 base, target;

        } rotate;

        Vec3f move;

        struct efGeneratorUnkVars
        {
            f32 f;
            u16 halfword;

        } unk_gtor_vars;

    } generator_vars;
};

// Might actually be the real efGenerator?
struct efTransform
{
    efTransform *next;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
    u8 transform_status;        // 0 = ???, 1 = prepare matrix for transformation, 2 = finished transformation
    u8 transform_id;
    u16 users_num;              // Number of other structs using this particular efTransform struct?
    Mtx44f affine;              // Translate + rotate + scale matrix
    Mtx44f projection;          // Projection matrix
    f32 pc0_magnitude;          // Projection matrix column 0 magnitude
    f32 pc1_magnitude;          // Projection matrix column 1 magnitude
    void (*proc_dead)(efTransform*);
    u16 generator_id;
    GObj *effect_gobj;
};

struct efParticle
{
    efParticle *next;
    u16 generator_id;
    u16 flags;                  // Flags?
    u8 bank_id;
    u8 link_id;
    u8 texture_id;
    u8 data_id;
    ub16 bytecode_timer;        // Wait timer before next bytecode event is parsed
    u16 unk_ptcl_0xE;
    u16 blend_primcolor_length;
    u16 blend_envcolor_length;
    u8 *bytecode;               // Bytecode base
    u16 bytecode_csr;
    u16 branch_ptr;             // Jump to 
    u16 subroutine_ptr;
    u16 lifetime;
    Vec3f pos;
    Vec3f vel;                  // Velocity?
    f32 gravity;                // Gravity?
    f32 friction;               // Friction?
    f32 mscale;                 // Scales efTransform affine matrix magnitude?
    f32 unk_ptcl_0x44;
    syColorRGBA primcolor;
    syColorRGBA blend_primcolor;
    syColorRGBA envcolor;
    syColorRGBA blend_envcolor;
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
