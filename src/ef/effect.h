#ifndef _EFFECT_H_
#define _EFFECT_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj_renderer.h> // Probably shouldn't be included
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <gm/gmmisc.h>

#define EFFECT_ALLOC_NUM 38
#define EFFECT_ALLOC_ALIGN 0x8

typedef enum efKind
{
	Ef_Kind_DamageNormal,			  // Texture displayed when hit by an attack of the
									  // normal element
	Ef_Kind_FlameLR = 6,			  // Flame whose velocity depends on the user's facing direction
	Ef_Kind_FlameRandom,			  // Small flame texture that scatters
	Ef_Kind_FlameStatic,			  // Small flame texture that is stationary?
	Ef_Kind_ShockSmall = 10,		  // Texture displayed when hit by an attack of the
									  // electric element; small shockwave texture
	Ef_Kind_DustLight,				  // e.g. Light landing (no fast fall)
	Ef_Kind_DustLightRapid,			  // Faster version of DustLight?
	Ef_Kind_DustHeavyDouble,		  // Two instances of heavy dust clouds
	Ef_Kind_DustHeavyDoubleRapid,	  // Two instances of faster heavy dust clouds?
	Ef_Kind_DustHeavy,				  // Single instance of heavy dust cloud
	Ef_Kind_DustHeavyReverse,		  // Single instance of direction-flipped heavy
									  // dust cloud
	Ef_Kind_DustExpandLarge,		  // Large dust cloud that grows in size
	Ef_Kind_DustExpandSmall,		  // Small dust cloud that grows in size
	Ef_Kind_DustDashSmall,			  // Small (actually pretty large) dust kickup behind
									  // user
	Ef_Kind_DustDashLarge,			  // Large dust kickup behind user
	Ef_Kind_DamageFlyOrbs,			  // Cyan orbs that fly outward
	Ef_Kind_ImpactSW,				  // Green impact shockwave that is created when a
									  // character slams into collision
	Ef_Kind_StarRodSpark,			  // Star Rod / Star projectile sparkles
	Ef_Kind_DamageFlySparks,		  // Shows sometimes when getting hit
	Ef_Kind_DamageFlySparksReverse,	  // LR-inverted version
	Ef_Kind_DamageFlyMDust,			  // Metal dust effect, shows sometimes when getting
									  // hit
	Ef_Kind_DamageFlyMDustReverse,	  // LR-inverted version
	Ef_Kind_SparkleWhite,			  // Plays when a flame (Fire Flower, Charizard,
									  // Charmander) or when Pikachu's Thunder hits the
									  // ground
	Ef_Kind_SparkleWhiteMultiExplode, // e.g. Kirby's F-Throw explosion
	Ef_Kind_SparkleWhiteMulti,		  // I can't really trigger this but it's just
									  // SparkleWhiteMultiExplode without the
									  // explosion; seems to be exclusive to fighter
									  // scripts
	Ef_Kind_SparkleWhiteScale,		  // Most common white sparkle, plays during many
									  // moves such as Smash attacks
	Ef_Kind_QuakeM0,				  // Creates an earthquake of magnitude 0
	Ef_Kind_QuakeM1,				  // Creates an earthquake of magnitude 1
	Ef_Kind_QuakeM2,				  // Creates an earthquake of magnitude 2
	Ef_Kind_FireSpark = 37,			  // Not sure who uses this
	Ef_Kind_FuraSparkle = 40,		  // Dizzy sparkles after shield break
	Ef_Kind_Psionic,				  // Ness PSI sparkles
	Ef_Kind_FlashSmall,				  // Expanding green circle, plays when teching
	Ef_Kind_FlashMiddle,			  // Other expanding green circle, plays when grabbing
									  // ledge
	Ef_Kind_FlashLarge,				  // Large expanding green circle, plays when grabbing
									  // Star Man?
	Ef_Kind_BoxSmash = 46,			  // Crate / Barrel smash effect
	Ef_Kind_CrashTheGame,			  // Literally crashes the game; this takes an argument
									  // which acts as a timer; must be extra specific,
									  // during a certain scene
	Ef_Kind_KirbyStar = 54,			  // Can be created manually but this plays when
									  // Kirby makes impact with stage collision
	Ef_Kind_ThunderHit = 70,		  // Pikachu's Thunder self-hit
	Ef_Kind_Ripple,					  // Pikachu's Quick-Attack, Ness's PSI Magnet, Mew spawn, etc.
	Ef_Kind_ChargeSparkle = 73,		  // Fully charged Neutral Special, e.g. DK or Samus
	Ef_Kind_HealSparkles,			  // Used for Heart, Maxim Tomato and Star Man
	Ef_Kind_YoshiEggRoll = 87,
	Ef_Kind_SingNote = 90,
	Ef_Kind_EggBreak

} efKind;

typedef struct efCreateDesc
{
	u8 unk_efcreate_0x0;
	u8 unk_efcreate_0x1;
	void* unk_efcreate_0x4;
	DObjTransformTypes unk_efcreate_0x8;
	DObjTransformTypes unk_efcreate_0xB;
	void (*proc_update)(GObj*);
	void (*unk_efcreate_0x14)(GObj*);
	intptr_t unk_efcreate_0x18;
	intptr_t unk_efcreate_0x1C;
	intptr_t unk_efcreate_0x20;
	intptr_t unk_efcreate_0x24;

} efCreateDesc;

typedef struct efGenerator
{
	u8 filler_0x0[0x14];
	Vec3f pos;

} efGenerator;

typedef struct efTransform
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
	GObj* effect_gobj;

} efTransform;

typedef struct efParticle
{
	u8 filler_0x0[0x8];
	u8 unk_efpart_0x8;
	u16 unk_efpart_0xA;
	u8 filler_0xC[0x20 - 0xC];
	Vec3f pos;
	u8 filler_0x2C[0x48 - 0x2C];
	ColorRGBA color1;
	s32 unk_efpart_0x4C;
	ColorRGBA color2;
	u8 filler_0x54[0x5C - 0x54];
	efTransform* effect_info;

} efParticle;

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
	grEffectParam* unk_ovl2efsub_0x4;
	s32 unk_ovl2efsub_0x8;
	grEffectData* effect_data;

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
	grEffectVars* effect_vars;

} grEffect;

#define efGetStruct(effect_gobj) ((efStruct*)(effect_gobj)->user_data.p)

// ---- vars ---- //

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
#define EFPART_SHOCKSMALL_OFF_ADD (-150.0F)
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

typedef struct efParticle_EffectVars_Basic2 // Stuff like the effect that is
											// created when hit by a normal
											// element attack
{
	Vec3f vel;
	u8 player;
	s32 size;
	efTransform* eftrans;
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
	efTransform* eftrans;

} efParticle_EffectVars_Common;

typedef struct efParticle_EffectVars_DustLight
{
	Vec3f vel1, vel2;
	s32 lifetime;
	efTransform* eftrans;

} efParticle_EffectVars_DustLight;

typedef struct efParticle_EffectVars_DustHeavy
{
	Vec3f pos;
	s32 lr;
	s32 anim_frame;
	efTransform* eftrans;

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
	sb32 is_damage_shield;

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
	GObj* owner_gobj;

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
	void* groundeffect__0x18;
	void* groundeffect__0x1C;
	u8 groundeffect__0x20;

} efParticle_EffectVars_GroundEffect;

typedef struct efStruct
{
	struct efStruct* ep_alloc_next;
	GObj* fighter_gobj;

	u16 unk_effectstruct_0x8;
	efTransform* einfo;

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

} efStruct;

#endif