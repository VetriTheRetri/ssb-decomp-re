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

struct efCreateDesc
{
	u8 unk_efcreate_0x0;
	u8 unk_efcreate_0x1;
	void* unk_efcreate_0x4;
	DObjRenderTypes unk_efcreate_0x8;
	DObjRenderTypes unk_efcreate_0xB;
	void (*proc_update)(GObj*);
	void (*unk_efcreate_0x14)(GObj*);
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
	GObj* effect_gobj;
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
	efTransform* effect_info;
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

struct efStruct
{
	efStruct* ep_alloc_next;
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
};

#define efGetStruct(effect_gobj) ((efStruct*)(effect_gobj)->user_data.p)

#endif