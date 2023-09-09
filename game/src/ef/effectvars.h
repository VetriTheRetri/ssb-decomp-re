#ifndef _EFFECT_VARS_H_
#define _EFFECT_VARS_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj_renderer.h> // Probably shouldn't be included
#include <PR/ultratypes.h>
#include <sys/obj.h>

#include "efdef.h"

#define EFPART_FLAMELR_OFF_X_BASE 300.0F
#define EFPART_FLAMELR_OFF_X_ADD (-150.0F)
#define EFPART_FLAMELR_OFF_Y_BASE 200.0F
#define EFPART_FLAMELR_OFF_Y_ADD (-150.0F)
#define EFPART_FLAMELR_VEL_BASE 20.0F

#define EFPART_FLAMERANDOM_ANGLE_BASE F_DEG_TO_RAD(90.0F)
#define EFPART_FLAMERANDOM_ANGLE_ADD F_DEG_TO_RAD(45.0F)
#define EFPART_FLAMERANDOM_VEL_BASE 15.0F

#define EFPART_DUSTCOLL_OFF_BASE 300.0F
#define EFPART_DUSTCOLL_OFF_ADD (-150.0F)
#define EFPART_DUSTCOLL_ANGLE_BASE F_DEG_TO_RAD(90.0F)
#define EFPART_DUSTCOLL_ANGLE_ADD F_DEG_TO_RAD(45.0F)
#define EFPART_DUSTCOLL_VEL_BASE 15.0F

#define EFPART_SHOCKSMALL_OFF_BASE 300.0F
#define EFPART_SHOCKSMALL_OFF_ADD  (-150.0F)
#define EFPART_SHOCKSMALL_SCALE_BASE 0.5F
#define EFPART_SHOCKSMALL_SCALE_ADD 0.75F

#define EFPART_DUSTNORMAL_LIFETIME 9
#define EFPART_DUSTNORMAL_ANGLE_BASE F_DEG_TO_RAD(30.0F)
#define EFPART_DUSTNORMAL_ANGLE_ADD F_DEG_TO_RAD(-15.0F)
#define EFPART_DUSTNORMAL_OFF_Y 39.375F
#define EFPART_DUSTNORMAL_VEL_BASE 36.0F
#define EFPART_DUSTNORMAL_SCATTER (1.0F / (float)EFPART_DUSTNORMAL_LIFETIME)

#define EFPART_DUSTHEAVY_OFF_Y 126.0F

#define EFPART_DUSTEXPANDLARGE_OFF_BASE 160.0F
#define EFPART_DUSTEXPANDLARGE_OFF_SUB 80.0F
#define EFPART_DUSTEXPANDLARGE_SCALE 3.0F

#define EFPART_DUSTEXPANDSMALL_VEL_Y 5.0F
#define EFPART_DUSTEXPANDSMALL_VEL_X 0.0F

#define EFPART_DUSTDASH_SCALE_SMALL 1.0F
#define EFPART_DUSTDASH_SCALE_LARGE 1.5F
#define EFPART_DUSTDASH_OFF_Y 280.0F

#define EFPART_DAMAGEFLYORBS_VEL_SUB 10.0F

#define EFPART_DAMAGESPAWNORBS_LIFETIME_RANDOM_MOD 4
#define EFPART_DAMAGESPAWNORBS_LIFETIME_ADD 12
#define EFPART_DAMAGESPAWNORBS_SCALE_BASE 2
#define EFPART_DAMAGESPAWNORBS_SCALE_ADD 3.0F
#define EFPART_DAMAGESPAWNORBS_VEL_BASE 100.0F
#define EFPART_DAMAGESPAWNORBS_VEL_ADD 120.0F
#define EFPART_DAMAGESPAWNORBS_ANGLE_BASE F_DEG_TO_RAD(60.0F)
#define EFPART_DAMAGESPAWNORBS_ANGLE_ADD1 F_DEG_TO_RAD(-30.0F)
#define EFPART_DAMAGESPAWNORBS_ANGLE_ADD2 F_DEG_TO_RAD(90.0F)

#define EFPART_STARRODSPARK_ADD_TIMER 62
#define EFPART_STARRODSPARK_SCALE 0.75F
#define EFPART_STARRODSPARK_VEL_BASE 25.0F
#define EFPART_STARRODSPARK_VEL_ADD (-0.4F)

#define EFPART_DAMAGESPAWNSPARK_LIFETIME 8
#define EFPART_DAMAGESPAWNSPARK_ADD_TIMER 250
#define EFPART_DAMAGESPAWNSPARK_LIFETIME_MOD 4
#define EFPART_DAMAGESPAWNSPARK_VEL_BASE 50.0F
#define EFPART_DAMAGESPAWNSPARK_VEL_ADD 0.004F

#define EFPART_DAMAGESPAWNMDUST_LIFETIME 8
#define EFPART_DAMAGESPAWNMDUST_ADD_TIMER 250
#define EFPART_DAMAGESPAWNMDUST_LIFETIME_MOD 4
#define EFPART_DAMAGESPAWNMDUST_VEL_BASE 50.0F
#define EFPART_DAMAGESPAWNMDUST_VEL_ADD 0.004F

#define EFPART_QUAKE_MAGNITUDE 6500.0F

#define EFPART_CAPTUREKIRBYSTAR_SPARK_TIMER_MOD 2
#define EFPART_CAPTUREKIRBYSTAR_ROTATE_STEP F_DEG_TO_RAD(10.0F)
#define EFPART_CAPTUREKIRBYSTAR_SPARK_OFF_Y 210.0F
#define EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_X 125.0F
#define EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_Y 250.0F

#define EFPART_LOSEKIRBYSTAR_LIFETIME 50
#define EFPART_LOSEKIRBYSTAR_ROTATE_STEP F_DEG_TO_RAD(10.0F)
#define EFPART_LOSEKIRBYSTAR_GRAVITY 3.0F
#define EFPART_LOSEKIRBYSTAR_TVEL (-90.0F)
#define EFPART_LOSEKIRBYSTAR_VEL_X 20.0F
#define EFPART_LOSEKIRBYSTAR_VEL_Y 80.0F
#define EFPART_LOSEKIRBYSTAR_OFF_Y 210.0F

typedef struct efParticle_EffectVars_BoxSmash
{
	s32 lifetime;
	s32 unk_ef_0x1C;

} efParticle_EffectVars_BoxSmash;

typedef struct efParticle_EffectVars_Basic2 // Stuff like the effect that is created when hit by a normal element attack
{
    Vec3f vel;
    u8 player;
    s32 size;
    efTransform *eftrans;
    u8 filler_0x2C[0x3C - 0x30];

} efParticle_EffectVars_Basic2;

typedef struct efParticle_EffectVars_DamageNormalHeavy
{
    Vec3f pos;
    u8 player;
    s32 size;

} efParticle_EffectVars_DamageNormalHeavy;

typedef struct efParticle_EffectVars_Common
{
    Vec3f vel;
    s32 size;
    efTransform *eftrans;

} efParticle_EffectVars_Common;

typedef struct efParticle_EffectVars_DustLight
{
    Vec3f vel1, vel2;
    s32 lifetime;
    efTransform *eftrans;

} efParticle_EffectVars_DustLight;

typedef struct efParticle_EffectVars_DustHeavy
{
    Vec3f pos;
    s32 lr;
    s32 anim_frame;
    efTransform *eftrans;

} efParticle_EffectVars_DustHeavy;

typedef struct efParticle_EffectVars_DamageFlyOrbs
{
    Vec3f vel;
    s32 lifetime;

} efParticle_EffectVars_DamageFlyOrbs;

typedef struct efParticle_EffectVars_DamageSpawnOrbs
{
    s32 lifetime;
    Vec3f pos;

} efParticle_EffectVars_DamageSpawnOrbs;

typedef struct efParticle_EffectVars_ImpactSW
{
    u8 index;
    f32 alpha;
    f32 decay;

} efParticle_EffectVars_ImpactSW;

typedef struct efParticle_EffectVars_StarRodSpark
{
    Vec3f vel, add;
    s32 add_timer;

} efParticle_EffectVars_StarRodSpark;

typedef struct efParticle_EffectVars_DamageFlySpark
{
    Vec3f vel, add;
    s32 add_timer;

} efParticle_EffectVars_DamageFlySpark;

typedef struct efParticle_EffectVars_DamageSpawnSpark
{
    s32 lifetime;
    Vec3f pos;
    s32 lr;

} efParticle_EffectVars_DamageSpawnSpark;

typedef struct efParticle_EffectVars_DamageFlyMDust
{
    Vec3f vel, add;
    s32 add_timer;

} efParticle_EffectVars_DamageFlyMDust;

typedef struct efParticle_EffectVars_DamageSpawnMDust
{
    s32 lifetime;
    Vec3f pos;
    s32 lr;

} efParticle_EffectVars_DamageSpawnMDust;

typedef struct efParticle_EffectVars_Quake
{
    u8 priority;

} efParticle_EffectVars_Quake;

typedef struct efParticle_EffectVars_Reflector
{
    s32 index, status;

} efParticle_EffectVars_Reflector;

typedef struct efParticle_EffectVars_Shield
{
    s32 player;
    bool32 is_damage_shield;

} efParticle_EffectVars_Shield;

typedef struct efParticle_EffectVars_Unknown1
{
    s32 efvars_unk1_0x0;

} efParticle_EffectVars_Unknown1;

typedef struct efParticle_EffectVars_ThunderTrail
{
    s32 lifetime;

} efParticle_EffectVars_ThunderTrail;

typedef struct efParticle_EffectVars_VulcanJab
{
    s32 lifetime;
    Vec3f vel, add;

} efParticle_EffectVars_VulcanJab;

typedef struct efParticle_EffectVars_PKThunder
{
    s32 status;
    GObj *owner_gobj;

} efParticle_EffectVars_PKThunder;

typedef struct efParticle_EffectVars_YoshiEggLay
{
    s32 index, force_index;

} efParticle_EffectVars_YoshiEggLay;

typedef struct efParticle_EffectVars_CaptureKirbyStar
{
    s32 effect_timer;

} efParticle_EffectVars_CaptureKirbyStar;

typedef struct efParticle_EffectVars_LoseKirbyStar
{
    Vec2f vel;
    s16 lifetime;
    s16 lr;

} efParticle_EffectVars_LoseKirbyStar;

typedef struct efParticle_EffectVars_GroundEffect
{
    Vec3f pos;
    s32 groundeffect__0xC;
    f32 scale_step;
    s32 lr;
    void *groundeffect__0x18;
    void *groundeffect__0x1C;
    u8 groundeffect__0x20;

} efParticle_EffectVars_GroundEffect;

#endif