#ifndef _EFVARS_H_
#define _EFVARS_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <ef/efdef.h>

#define EFPART_FLAMELR_OFF_X_BASE 300.0F
#define EFPART_FLAMELR_OFF_X_ADD (-150.0F)
#define EFPART_FLAMELR_OFF_Y_BASE 200.0F
#define EFPART_FLAMELR_OFF_Y_ADD (-150.0F)
#define EFPART_FLAMELR_VEL_BASE 20.0F

#define EFPART_FLAMERANDOM_ANGLE_BASE F_CLC_DTOR32(90.0F)
#define EFPART_FLAMERANDOM_ANGLE_ADD F_CLC_DTOR32(45.0F)
#define EFPART_FLAMERANDOM_VEL_BASE 15.0F

#define EFPART_DUSTCOLL_OFF_BASE 300.0F
#define EFPART_DUSTCOLL_OFF_ADD (-150.0F)
#define EFPART_DUSTCOLL_ANGLE_BASE F_CLC_DTOR32(90.0F)
#define EFPART_DUSTCOLL_ANGLE_ADD F_CLC_DTOR32(45.0F)
#define EFPART_DUSTCOLL_VEL_BASE 15.0F

#define EFPART_SHOCKSMALL_OFF_BASE 300.0F
#define EFPART_SHOCKSMALL_OFF_ADD  (-150.0F)
#define EFPART_SHOCKSMALL_SCALE_BASE 0.5F
#define EFPART_SHOCKSMALL_SCALE_ADD 0.75F

#define EFPART_DUSTNORMAL_LIFETIME 9
#define EFPART_DUSTNORMAL_ANGLE_BASE F_CLC_DTOR32(30.0F)
#define EFPART_DUSTNORMAL_ANGLE_ADD F_CLC_DTOR32(-15.0F)
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
#define EFPART_DAMAGESPAWNORBS_ANGLE_BASE F_CLC_DTOR32(60.0F)
#define EFPART_DAMAGESPAWNORBS_ANGLE_ADD1 F_CLC_DTOR32(-30.0F)
#define EFPART_DAMAGESPAWNORBS_ANGLE_ADD2 F_CLC_DTOR32(90.0F)

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
#define EFPART_DAMAGESPAWNMDUSTVEL_BASE 50.0F
#define EFPART_DAMAGESPAWNMDUSTVEL_ADD 0.004F

#define EFPART_QUAKE_MAGNITUDE 6500.0F

#define EFPART_CAPTUREKIRBYSTAR_SPARK_TIMER_MOD 2
#define EFPART_CAPTUREKIRBYSTAR_ROTATE_STEP F_CLC_DTOR32(10.0F)
#define EFPART_CAPTUREKIRBYSTAR_SPARK_OFF_Y 210.0F
#define EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_X 125.0F
#define EFPART_CAPTUREKIRBYSTAR_SPARK_SCATTER_Y 250.0F

#define EFPART_LOSEKIRBYSTAR_LIFETIME 50
#define EFPART_LOSEKIRBYSTAR_ROTATE_STEP F_CLC_DTOR32(10.0F)
#define EFPART_LOSEKIRBYSTAR_GRAVITY 3.0F
#define EFPART_LOSEKIRBYSTAR_TVEL (-90.0F)
#define EFPART_LOSEKIRBYSTAR_VEL_X 20.0F
#define EFPART_LOSEKIRBYSTAR_VEL_Y 80.0F
#define EFPART_LOSEKIRBYSTAR_OFF_Y 210.0F

typedef struct efCommonEffectVarsContainer
{
	s32 lifetime;
	s32 unk_ef_0x1C;

} efCommonEffectVarsContainer;

typedef struct efParticle_EffectVars_Basic2 // Stuff like the effect that is created when hit by a normal element attack
{
    Vec3f vel;
    u8 player;
    s32 size;
    efTransform *tfrm;
    u8 filler_0x2C[0x3C - 0x30];

} efParticle_EffectVars_Basic2;

typedef struct efCommonEffectVarsDamageNormalHeavy
{
    Vec3f pos;
    u8 player;
    s32 size;

} efCommonEffectVarsDamageNormalHeavy;

typedef struct efCommonEffectVarsCommon
{
    Vec3f vel;
    s32 size;
    efTransform *tfrm;

} efCommonEffectVarsCommon;

typedef struct efCommonEffectVarsDustLight
{
    Vec3f vel1, vel2;
    s32 lifetime;
    efTransform *tfrm;

} efCommonEffectVarsDustLight;

typedef struct efCommonEffectVarsDustHeavy
{
    Vec3f pos;
    s32 lr;
    s32 anim_frame;
    efTransform *tfrm;

} efCommonEffectVarsDustHeavy;

typedef struct efCommonEffectVarsDamageFlyOrbs
{
    Vec3f vel;
    s32 lifetime;

} efCommonEffectVarsDamageFlyOrbs;

typedef struct efCommonEffectVarsDamageSpawnOrbs
{
    s32 lifetime;
    Vec3f pos;

} efCommonEffectVarsDamageSpawnOrbs;

typedef struct efCommonEffectVarsImpactWave
{
    u8 index;
    f32 alpha;
    f32 decay;

} efCommonEffectVarsImpactWave;

typedef struct efCommonEffectVarsStarRodSpark
{
    Vec3f vel, add;
    s32 add_timer;

} efCommonEffectVarsStarRodSpark;

typedef struct efCommonEffectVarsDamageFlySpark
{
    Vec3f vel, add;
    s32 add_timer;

} efCommonEffectVarsDamageFlySpark;

typedef struct efCommonEffectVarsDamageSpawnSpark
{
    s32 lifetime;
    Vec3f pos;
    s32 lr;

} efCommonEffectVarsDamageSpawnSpark;

typedef struct efCommonEffectVarsDamageFlyMDust
{
    Vec3f vel, add;
    s32 add_timer;

} efCommonEffectVarsDamageFlyMDust;

typedef struct efCommonEffectVarsDamageSpawnMDust
{
    s32 lifetime;
    Vec3f pos;
    s32 lr;

} efCommonEffectVarsDamageSpawnMDust;

typedef struct efCommonEffectVarsQuake
{
    u8 priority;

} efCommonEffectVarsQuake;

typedef struct efCommonEffectVarsReflector
{
    s32 index, status;

} efCommonEffectVarsReflector;

typedef struct efCommonEffectVarsShield
{
    s32 player;
    sb32 is_damage_shield;

} efCommonEffectVarsShield;

typedef struct efCommonEffectVarsUnknown1
{
    s32 efvars_unk1_0x0;

} efCommonEffectVarsUnknown1;

typedef struct efCommonEffectVarsThunderTrail
{
    s32 lifetime;

} efCommonEffectVarsThunderTrail;

typedef struct efCommonEffectVarsVulcanJab
{
    s32 lifetime;
    Vec3f vel, add;

} efCommonEffectVarsVulcanJab;

typedef struct efCommonEffectVarsPKThunder
{
    s32 status;
    GObj *owner_gobj;

} efCommonEffectVarsPKThunder;

typedef struct efCommonEffectVarsYoshiEggLay
{
    s32 index, force_index;

} efCommonEffectVarsYoshiEggLay;

typedef struct efCommonEffectVarsCaptureKirbyStar
{
    s32 effect_timer;

} efCommonEffectVarsCaptureKirbyStar;

typedef struct efCommonEffectVarsLoseKirbyStar
{
    Vec2f vel;
    s16 lifetime;
    s16 lr;

} efCommonEffectVarsLoseKirbyStar;

typedef struct efGroundEffectVarsCommon
{
    Vec3f pos;
    s32 effect_status;
    f32 scale_step;
    s32 lr;
    void *anim_joint;
    void *matanim_joint;
    u8 lr_bool;

} efGroundEffectVarsCommon;

#endif
