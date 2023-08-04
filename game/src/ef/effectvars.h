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

typedef struct efVars_BoxSmash
{
	s32 lifetime;
	s32 unk_ef_0x1C;

} efVars_BoxSmash;

typedef struct efVars_Basic2 // Stuff like the effect that is created when hit by a normal element attack
{
    Vec3f vel;
    u8 player;
    s32 size;
    efTransform *eftrans;
    u8 filler_0x2C[0x3C - 0x30];

} efVars_Basic2;

typedef struct efVars_DamageNormalHeavy
{
    Vec3f pos;
    u8 player;
    s32 size;

} efVars_DamageNormalHeavy;

typedef struct efVars_Common
{
    Vec3f vel;
    s32 size;
    efTransform *eftrans;

} efVars_Common;

typedef struct efVars_DustLight
{
    Vec3f vel1, vel2;
    s32 lifetime;
    efTransform *eftrans;

} efVars_DustLight;

typedef struct efVars_DustHeavy
{
    Vec3f pos;
    s32 lr;
    s32 anim_frame;
    efTransform *eftrans;

} efVars_DustHeavy;

typedef struct efVars_DamageFlyOrbs
{
    Vec3f vel;
    s32 lifetime;

} efVars_DamageFlyOrbs;

typedef struct efVars_DamageSpawnOrbs
{
    s32 lifetime;
    Vec3f pos;

} efVars_DamageSpawnOrbs;

typedef struct efVars_ImpactSW
{
    u8 index;
    f32 alpha;
    f32 decay;

} efVars_ImpactSW;

typedef struct efVars_StarRodSpark
{
    Vec3f vel, add;
    s32 add_timer;

} efVars_StarRodSpark;

typedef struct efVars_DamageFlySpark
{
    Vec3f vel, add;
    s32 add_timer;

} efVars_DamageFlySpark;

typedef struct efVars_DamageSpawnSpark
{
    s32 lifetime;
    Vec3f pos;
    s32 lr;

} efVars_DamageSpawnSpark;

typedef struct efVars_DamageFlyMDust
{
    Vec3f vel, add;
    s32 add_timer;

} efVars_DamageFlyMDust;

typedef struct efVars_DamageSpawnMDust
{
    s32 lifetime;
    Vec3f pos;
    s32 lr;

} efVars_DamageSpawnMDust;

typedef struct efVars_Quake
{
    u8 priority;

} efVars_Quake;

typedef struct efVars_Reflector
{
    s32 index, status;

} efVars_Reflector;

typedef struct efVars_Shield
{
    s32 player;
    bool32 is_damage_shield;

} efVars_Shield;

typedef struct efVars_Unknown1
{
    s32 efvars_unk1_0x0;

} efVars_Unknown1;

#endif