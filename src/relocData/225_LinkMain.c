/* Fighter Main data for relocData file 225 (LinkMain) */
/* File size: 2640 bytes (0xA50) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern DObjDesc dLinkModel_DObjDesc_0x11908[];
extern void *dLinkModel_data_0x11990[];
extern u32 dLinkModel_FTEmblem[];
extern u32 dLinkModel_Stock[];
extern DObjDesc dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data_at_0x5E0[];
extern u8 dLinkShieldPose_data0[];
extern u8 dLinkShieldPose_data0_end[];
extern u8 dLinkShieldPose_shield_anim_joint_1[];
extern u8 dLinkShieldPose_shield_anim_joint_2[];
extern u8 dLinkShieldPose_shield_anim_joint_3[];
extern u8 dLinkShieldPose_shield_anim_joint_4[];
extern u8 dLinkShieldPose_shield_anim_joint_5[];
extern u8 dLinkShieldPose_shield_anim_joint_6[];
extern u8 dLinkShieldPose_shield_anim_joint_7[];
extern MObjSub *dLinkModel_Joint_0x0040_post_sub_0x550[];
extern MObjSub *dLinkModel_Joint_0x0040_post_sub_0x560[];
extern void *dLinkModel_data_0x110A8[];
extern void *dLinkModel_data_0x11A40[];
extern AObjEvent32 *dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data_at_0x698[];
#include <ft/fttypes.h>
#include <wp/wptypes.h>  // WPAttributes
#include <it/ittypes.h>  // ITAttributes, ITAttackEvent
#include <gm/gmsound.h>  // nSYAudioFGM*
#include <gm/gmdef.h>    // nGMHitElement*

extern Gfx dLinkBoomerangModel_Joint_0x00F8_DisplayList[];
extern u32 dLinkMainMotion_EggLay_0x0014[];
extern DObjDesc dLinkModel_JointTree[];
extern DObjDesc dLinkModel_JointTree_0x74B0[];
extern Gfx dLinkModel_Joint_0x2630_DisplayList[];
extern Gfx dLinkModel_Joint_0x2C88_DisplayList[];
extern u8 dLinkModel_Joint_0x2E08_DisplayList[];
extern Gfx dLinkModel_Joint_0x2EF0_DisplayList[];
extern Gfx dLinkModel_Joint_0x3398_DisplayList[];
extern Gfx dLinkModel_Joint_0x6370_DisplayList[];
extern Gfx dLinkModel_Joint_0x6950_DisplayList[];
extern Gfx dLinkModel_Joint_0x6A30_DisplayList[];
extern Gfx dLinkModel_Joint_0x6E08_DisplayList[];
extern Gfx dLinkModel_Joint_0x7DB0_DisplayList[];
extern Gfx dLinkModel_Joint_0x7EA8_DisplayList[];
extern Gfx dLinkModel_Joint_0x7F98_DisplayList[];
extern Gfx dLinkModel_Joint_0x93B8_DisplayList[];
extern Gfx dLinkModel_Joint_0x94F0_DisplayList[];
extern Gfx dLinkModel_Joint_0x9B98_DisplayList[];
extern u8 dLinkModel_Tex_0xE338[];
extern u8 dLinkModel_gap_0x0000[];
extern u8 dLinkModel_gap_0x0000_sub_0x18[];
extern u8 dLinkModel_gap_0x11CC0_sub_0x30[];
extern u8 dLinkModel_gap_0x11CC0_sub_0x58[];
extern u8 dLinkModel_gap_0x11CC0_sub_0x8[];
extern u8 dLinkModel_gap_0x40EC_sub_0x238[];
extern u8 dLinkModel_gap_0x40EC_sub_0x244[];
extern u8 dLinkModel_gap_0x40EC_sub_0x254[];
extern u8 dLinkModel_gap_0x40EC_sub_0x7E4[];
extern u8 dLinkModel_gap_0x40EC_sub_0x7F4[];
extern u8 dLinkModel_gap_0x7AE0_sub_0x204[];
extern u8 dLinkModel_gap_0x7AE0_sub_0x210[];
extern u8 dLinkModel_gap_0x8110_sub_0x270[];
extern u8 dLinkModel_gap_0x8110_sub_0x5B0[];
extern u8 dLinkModel_gap_0x8110_sub_0x5C0[];
extern u8 dLinkModel_gap_0x8110_sub_0xB0[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x1048[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x10F8[];
extern u8 dLinkModel_DL_0xB060[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x1378[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x358[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x618[];
extern u8 dLinkModel_DL_0xA490[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x958[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xB58[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xC68[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xCC[];
extern u8 dLinkModel_DL_0xAAF0[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xD8[];
extern u8 dLinkModel_DL_0xABD0[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xF38[];
extern u16 dLinkModel_palette_0x11CA0[];
extern WPAttributes dLinkSpecial1_Boomerang_WeaponAttributes;
extern DObjDesc dLinkSpecial2_EntryWaveDObjDesc[];
extern DObjDesc dLinkSpecial2_SpinAttackDObjDesc[];

/* Pre-attributes data (450 words, 0x0708 bytes) */
/* @ 0x0000, 12 bytes: 3 cross-file handle pointers (chain-rewritten). */
void *dLinkMain_file_handles[3] = {

	(void *)&dLinkMainMotion_EggLay_0x0014, /* extern -> 0x0014 */
	(void *)&dLinkSpecial2_EntryWaveDObjDesc, /* extern -> 0x03F8 */
	(void *)&dLinkSpecial1_Boomerang_WeaponAttributes, /* extern -> 0x0000 */
};

/* @ 0x000C, 52 bytes: WPAttributes for the Spin Attack slash effect.
 * Referenced from wp/wplink/wplinkspinattack.c via llLinkMainSpinAttackWeaponAttributes (0x0C). */
WPAttributes dLinkMain_SpinAttackWeaponAttributes = {
	(void *)dLinkModel_DObjDesc_0x11908,      /* data */
	(MObjSub ***)dLinkModel_data_0x110A8,     /* p_mobjsubs */
	(AObjEvent32 **)dLinkModel_data_0x11990,  /* anim_joints */
	(AObjEvent32 ***)dLinkModel_data_0x11A40, /* p_matanim_joints */
	{ { 0, 0, 0 }, { 0, 0, 0 } },             /* attack_offsets */
	150, 0, -150, 150,                        /* map_coll top/center/bottom/width */
	400,                  /* size             : 16 */
	30,                   /* angle            : 10 */
	50,                   /* knockback_scale  : 10 */
	5,                    /* damage           :  8 */
	nGMHitElementNormal,  /* element          :  4 */
	0,                    /* knockback_weight : 10 */
	1,                    /* shield_damage    :  8 */
	2,                    /* attack_count     :  2 */
	1,                    /* can_setoff       :  1 */
	nSYAudioFGMKickM,     /* sfx              : 10 */
	1,                    /* priority         :  3 */
	1,                    /* can_rehit_item   :  1 */
	0,                    /* can_rehit_fighter:  1 */
	0,                    /* can_hop          :  1 */
	0,                    /* can_reflect      :  1 */
	0,                    /* can_absorb       :  1 */
	1,                    /* can_shield       :  1 */
	0,                    /* unused_0x2F_b6   :  1 */
	0,                    /* unused_0x2F_b7   :  1 */
	30,                   /* knockback_base   : 10 */
};

/* @ 0x0040, 72 bytes: ITAttributes for Link's Bomb (the held/thrown item).
 * Referenced from it/itfighter/itlinkbomb.c via llLinkMainBombItemAttributes (0x40). */
ITAttributes dLinkMain_BombItemAttributes = {
	(void *)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data_at_0x5E0,        /* data */
	NULL,                                                                           /* p_mobjsubs */
	(AObjEvent32 **)dLinkSpecial2_SpinAttackMatAnimJoint_MatAnimJoint_data_at_0x698, /* anim_joints */
	NULL,                                                                           /* p_matanim_joints */
	1, 0, 1, 1, 1,     /* xlu,dobjs,colanim,hitlag,weight */
	0, 0, 0,           /* attack_offset0 x/y/z */
	0, 0, 0,           /* attack_offset1 x/y/z */
	{ 0, 0, 0 },       /* damage_coll_offset */
	{ 100, 100, 100 }, /* damage_coll_size */
	113, 0, -113, 113, /* map_coll top/center/bottom/width */
	220,               /* size */
	80,                /* angle */
#if defined(REGION_JP)
	65,                /* knockback_scale */
	1,                 /* damage */
#else
	20,                /* knockback_scale */
	2,                 /* damage */
#endif
	nGMHitElementNormal, /* element */
	0,                 /* knockback_weight */
	0,                 /* shield_damage */
	1,                 /* attack_count */
	0,                 /* can_setoff */
	nSYAudioFGMKickM,  /* hit_sfx */
	1,                 /* priority */
	0,                 /* can_rehit_item */
	0,                 /* can_rehit_fighter */
	1,                 /* can_hop */
	1,                 /* can_reflect */
	1,                 /* can_shield */
#if defined(REGION_JP)
	10,                /* knockback_base */
#else
	60,                /* knockback_base */
#endif
	3,                 /* type */
	0,                 /* hitstatus */
	0,                 /* unk_atca_0x3C_b6 */
	0,                 /* unk_atca_0x3C_b7 */
	nSYAudioFGMItemThrow, /* drop_sfx */
	nSYAudioFGMItemThrow, /* throw_sfx */
	nSYAudioFGMItemThrow, /* smash_sfx */
	60,                /* vel_scale */
	0,                 /* spin_speed */
};

/* @ 0x0088, 32 bytes: ITAttackEvent[4] for the Bomb explosion (shrinking hitbox).
 * Referenced from it/itfighter/itlinkbomb.c via llLinkMainBombAttackEvents (0x88). */
ITAttackEvent dLinkMain_BombAttackEvents[4] = {
#if defined(REGION_JP)
	{ 0, 361, 8, 350 },
	{ 2, 361, 6, 250 },
	{ 4, 361, 4, 150 },
	{ 6, 361, 1, 0 },
#else
	{ 0, 361, 5, 300 },
	{ 2, 361, 5, 230 },
	{ 4, 361, 5, 150 },
	{ 6, 361, 5, 0 },
#endif
};

/* @ 0x00A8, 24 bytes: f32[6] model scale ramp for the Bomb's pre-explosion bloat.
 * Referenced from it/itfighter/itlinkbomb.c via llLinkMainBombBloatScales (0xA8). */
f32 dLinkMain_BombBloatScales[6] = {
	0.8F, 1.0F, 1.2F, 1.4F, 1.6F, 1.8F,
};

/* @ 0x00C0, 8 bytes: FTAttributes.animlock target (was dLinkMain_pre+0xC0) */
u32 dLinkMain_animlock[2] = {
	0x108004A4,
	0x00000000,
};

/* @ 0x00C8, 8 bytes: FTAttributes.setup_parts target (was dLinkMain_pre+0xC8) */
u32 dLinkMain_setup_parts[2] = {
	0xFFF9FFFE,
	0x00000000,
};

/* @ 0x00D0, 96 bytes: FTAttributes.hiddenparts target (was dLinkMain_pre+0xD0) */
FTHiddenPart dLinkMain_hiddenparts[6] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x00000023, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000011, 0x00000010, 0x00000001, 0x00000000 },
	{ 0x00000012, 0x00000010, 0x00000001, 0x00000000 },
};

/* @ 0x0130, 120 bytes: FTAttributes.sub_0x130 target (was dLinkMain_pre+0x130) */
FTModelPart dLinkMain_modelparts_desc_0x130[6] = {
	{ (Gfx*)&dLinkModel_Joint_0x2630_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x6370_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkBoomerangModel_Joint_0x00F8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkBoomerangModel_Joint_0x00F8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x358, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x358, NULL, NULL, NULL, 0x00 },
};

/* @ 0x01A8, 40 bytes: FTAttributes.sub_0x1A8 target (was dLinkMain_pre+0x1A8) */
FTModelPart dLinkMain_modelparts_desc_0x1A8[2] = {
	{ (Gfx*)&dLinkModel_Joint_0x7DB0_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x7DB0_DisplayList, NULL, NULL, NULL, 0x00 },
};

/* @ 0x01D0, 40 bytes: FTAttributes.sub_0x1D0 target (was dLinkMain_pre+0x1D0) */
FTModelPart dLinkMain_modelparts_desc_0x1D0[2] = {
	{ (Gfx*)&dLinkModel_Joint_0x7EA8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x7EA8_DisplayList, NULL, NULL, NULL, 0x00 },
};

/* @ 0x01F8, 40 bytes: FTAttributes.sub_0x1F8 target (was dLinkMain_pre+0x1F8) */
FTModelPart dLinkMain_modelparts_desc_0x1F8[2] = {
	{ (Gfx*)&dLinkModel_Joint_0x7F98_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x7F98_DisplayList, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0220, 40 bytes: FTAttributes.sub_0x220 target (was dLinkMain_pre+0x220) */
FTModelPart dLinkMain_modelparts_desc_0x220[2] = {
	{ (Gfx*)&dLinkModel_Joint_0x2C88_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x2C88_DisplayList, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0248, 40 bytes: FTAttributes.sub_0x248 target (was dLinkMain_pre+0x248) */
FTModelPart dLinkMain_modelparts_desc_0x248[2] = {
	{ (Gfx*)&dLinkModel_gap_0x8110_sub_0xB0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_gap_0x8110_sub_0x270, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0270, 40 bytes: FTAttributes.sub_0x270 target (was dLinkMain_pre+0x270) */
FTModelPart dLinkMain_modelparts_desc_0x270[2] = {
	{ (Gfx*)&dLinkModel_Joint_0x2C88_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x2C88_DisplayList, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0298, 80 bytes: FTAttributes.sub_0x298 target (was dLinkMain_pre+0x298) */
FTModelPart dLinkMain_modelparts_desc_0x298[4] = {
	{ (Gfx*)&dLinkModel_Joint_0x2E08_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x6950_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x93B8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x93B8_DisplayList, NULL, NULL, NULL, 0x00 },
};

/* @ 0x02E8, 80 bytes: FTAttributes.sub_0x2E8 target (was dLinkMain_pre+0x2E8) */
FTModelPart dLinkMain_modelparts_desc_0x2E8[4] = {
	{ (Gfx*)&dLinkModel_Joint_0x2EF0_DisplayList, (MObjSub**)dLinkModel_Joint_0x0040_post_sub_0x550, (AObjEvent32**)&dLinkModel_gap_0x40EC_sub_0x238, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x6A30_DisplayList, (MObjSub**)&dLinkModel_gap_0x40EC_sub_0x7E4, (AObjEvent32**)&dLinkModel_gap_0x7AE0_sub_0x204, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x94F0_DisplayList, (MObjSub**)&dLinkModel_gap_0x8110_sub_0x5B0, (AObjEvent32**)&dLinkModel_gap_0x9DA8_sub_0xCC, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x94F0_DisplayList, (MObjSub**)&dLinkModel_gap_0x8110_sub_0x5B0, (AObjEvent32**)&dLinkModel_gap_0x9DA8_sub_0xCC, NULL, 0x00 },
};

/* @ 0x0338, 80 bytes: FTAttributes.sub_0x338 target (was dLinkMain_pre+0x338) */
FTModelPart dLinkMain_modelparts_desc_0x338[4] = {
	{ (Gfx*)&dLinkModel_Joint_0x3398_DisplayList, (MObjSub**)dLinkModel_Joint_0x0040_post_sub_0x560, (AObjEvent32**)&dLinkModel_gap_0x40EC_sub_0x244, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x6E08_DisplayList, (MObjSub**)&dLinkModel_gap_0x40EC_sub_0x7F4, (AObjEvent32**)&dLinkModel_gap_0x7AE0_sub_0x210, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x9B98_DisplayList, (MObjSub**)&dLinkModel_gap_0x8110_sub_0x5C0, (AObjEvent32**)&dLinkModel_gap_0x9DA8_sub_0xD8, NULL, 0x00 },
	{ (Gfx*)&dLinkModel_Joint_0x9B98_DisplayList, (MObjSub**)&dLinkModel_gap_0x8110_sub_0x5C0, (AObjEvent32**)&dLinkModel_gap_0x9DA8_sub_0xD8, NULL, 0x00 },
};

/* @ 0x0388, 128 bytes: FTAttributes.modelparts_container target (was dLinkMain_pre+0x388) */
FTModelPartDesc *dLinkMain_modelparts_container[32] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x130, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dLinkMain_modelparts_desc_0x1A8, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x1D0, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x1F8, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x220, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x248, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x270,
	(FTModelPartDesc*)dLinkMain_modelparts_desc_0x298, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x2E8, (FTModelPartDesc*)dLinkMain_modelparts_desc_0x338, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL,
};

/* @ 0x0408, 8 bytes: FTAttributes.textureparts_container target (was dLinkMain_pre+0x408) */
FTTexturePartContainer dLinkMain_textureparts_container = {
	{
		{ 0x17, { 0x00, 0x00 } },
		{ 0x17, { 0x01, 0x01 } },
	},
};

/* @ 0x0410, 32 bytes: FTAttributes.commonparts_container target (was dLinkMain_pre+0x410) */
FTCommonPartContainer dLinkMain_commonparts_container = {
	{
		{ (DObjDesc*)&dLinkModel_JointTree, (MObjSub***)&dLinkModel_gap_0x0000, (AObjEvent32***)((u8*)dLinkModel_JointTree + 0x5B8), 0x00 },
		{ (DObjDesc*)&dLinkModel_JointTree_0x74B0, (MObjSub***)&dLinkModel_gap_0x40EC_sub_0x254, (AObjEvent32***)((u8*)dLinkModel_JointTree_0x74B0 + 0x5B0), 0x00 },
	},
};

/* @ 0x0430, 432 bytes: FTAttributes.thrown_status target (was dLinkMain_pre+0x430) */
FTThrownStatus dLinkMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
};

/* @ 0x05E0, 16 bytes: FTAttributes.sub_0x5E0 target (was dLinkMain_pre+0x5E0) */
int *dLinkMain_stock_luts[4] = {
	(int*)&dLinkModel_palette_0x11CA0,
	(int*)&dLinkModel_gap_0x11CC0_sub_0x8,
	(int*)&dLinkModel_gap_0x11CC0_sub_0x30,
	(int*)&dLinkModel_gap_0x11CC0_sub_0x58,
};

/* @ 0x05F0, 12 bytes: FTAttributes.sprites target (was dLinkMain_pre+0x5F0) */
FTSprites dLinkMain_sprites = {
	(Sprite*)dLinkModel_Stock, /* stock_sprite */
	(int**)dLinkMain_stock_luts, /* stock_luts */
	(Sprite*)dLinkModel_FTEmblem, /* emblem */
};

/* @ 0x05FC, 256 bytes: FTAttributes.sub_0x5FC target (was dLinkMain_pre+0x5FC) */
FTSkeleton dLinkMain_skeleton_dls[32] = {
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x618 }, 0 },
	{ { (Gfx*)&dLinkModel_DL_0xA490 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0xC68 }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0xB58 }, 0 },
	{ { (Gfx*)&dLinkModel_DL_0xAAF0 }, 0 },
	{ { (Gfx*)&dLinkModel_DL_0xB060 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0xC68 }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0xB58 }, 0 },
	{ { (Gfx*)&dLinkModel_DL_0xABD0 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x1378 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x958 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0xF38 }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x1048 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x10F8 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0xF38 }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x1048 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLinkModel_gap_0x9DA8_sub_0x10F8 }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x06FC, 12 bytes: FTAttributes.skeleton target (was dLinkMain_pre+0x6FC) */
FTSkeleton *dLinkMain_skeleton[3] = {
	(FTSkeleton*)23,
	dLinkMain_skeleton_dls,
	NULL,
};

FTAttributes dLinkMain_attr = {
	1.24f, /* size */
	80.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	35.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
#if defined(REGION_JP)
	0.4f, /* walk_speed_mul */
#else
	0.37f, /* walk_speed_mul */
#endif
	2.0f, /* traction */
	68.0f, /* dash_speed */
	5.4f, /* dash_decel */
	42.0f, /* run_speed */
	7.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	36.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.04f, /* air_accel */
	31.0f, /* air_speed_max_x */
	0.0f, /* air_friction */
#if defined(REGION_JP)
	3.2f, /* gravity */
#else
	3.4f, /* gravity */
#endif
	64.0f, /* tvel_base */
	102.0f, /* tvel_fast */
	2, /* jumps_max */
	0.96f, /* weight */
	24.0f, /* attack1_followup_frames */
	16.0f, /* dash_to_run */
#if defined(REGION_JP)
	260.0f, /* shield_size */
#else
	280.0f, /* shield_size */
#endif
	90.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	1700.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	630.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 280.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceLinkDead, nSYAudioFGMLinkDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceLinkDeadUp, /* deadup_sfx */
	nSYAudioVoiceLinkDamage, /* damage_sfx */
	{ nSYAudioVoiceLinkSmash1, nSYAudioVoiceLinkSmash2, nSYAudioVoiceLinkSmash3 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceLinkHeavyGet, /* heavyget_sfx */
	1.1f, /* halo_size */
	{ { 0xFF, 0xFF, 0xFF, 0x50 }, { 0x00, 0x00, 0x00, 0x50 }, { 0x00, 0x00, 0x00, 0x00 } }, /* shade_color */
	{ 0xFF, 0x00, 0x00, 0x00 }, /* fog_color */
	1, /* is_have_attack11 */
	1, /* is_have_attack12 */
	1, /* is_have_attackdash */
	1, /* is_have_attacks3 */
	1, /* is_have_attackhi3 */
	1, /* is_have_attacklw3 */
	1, /* is_have_attacks4 */
	1, /* is_have_attackhi4 */
	1, /* is_have_attacklw4 */
	1, /* is_have_attackairn */
	1, /* is_have_attackairf */
	1, /* is_have_attackairb */
	1, /* is_have_attackairhi */
	1, /* is_have_attackairlw */
	1, /* is_have_specialn */
	1, /* is_have_specialairn */
	1, /* is_have_specialhi */
	1, /* is_have_specialairhi */
	1, /* is_have_speciallw */
	1, /* is_have_specialairlw */
	1, /* is_have_catch */
	1, /* is_have_voice */
	/* damage_coll_descs */
	{
		{ 5, 1, TRUE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 60.0f, 78.0f } },
		{ 6, 1, TRUE, { 0.0f, 40.0f, 0.0f }, { 98.0f, 111.0f, 78.0f } },
		{ 23, 2, TRUE, { 0.0f, 30.0f, 0.0f }, { 68.0f, 84.0f, 88.0f } },
		{ 13, 1, FALSE, { 24.0f, 0.0f, 0.0f }, { 85.0f, 41.0f, 41.0f } },
		{ 8, 1, FALSE, { 24.0f, 0.0f, 0.0f }, { 85.0f, 41.0f, 41.0f } },
		{ 14, 1, FALSE, { 33.0f, 0.0f, 0.0f }, { 99.0f, 33.0f, 33.0f } },
		{ 9, 1, FALSE, { 33.0f, 0.0f, 0.0f }, { 99.0f, 33.0f, 33.0f } },
		{ 31, 0, TRUE, { 45.0f, 3.0f, 0.0f }, { 86.0f, 38.0f, 46.0f } },
		{ 26, 0, TRUE, { 45.0f, -3.0f, 0.0f }, { 86.0f, 38.0f, 46.0f } },
		{ 32, 0, FALSE, { 43.0f, 3.0f, 0.0f }, { 121.0f, 43.0f, 51.0f } },
		{ 27, 0, FALSE, { 43.0f, -3.0f, 0.0f }, { 121.0f, 43.0f, 51.0f } },
	},
	{ 1200.0f, 600.0f, 1200.0f }, /* hit_detect_range */
	(u32*)dLinkMain_setup_parts, /* setup_parts */
	(u32*)dLinkMain_animlock, /* animlock */
	{ 23, 14, 27, 32, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	(FTHiddenPart*)dLinkMain_hiddenparts, /* hiddenparts */
	&dLinkMain_commonparts_container, /* commonparts_container */
	(void *)&dLinkShieldPose_data0, /* dobj_lookup */
	{ (void *)&dLinkShieldPose_data0_end, (void *)&dLinkShieldPose_shield_anim_joint_1, (void *)&dLinkShieldPose_shield_anim_joint_2, (void *)&dLinkShieldPose_shield_anim_joint_3, (void *)&dLinkShieldPose_shield_anim_joint_4, (void *)&dLinkShieldPose_shield_anim_joint_5, (void *)&dLinkShieldPose_shield_anim_joint_6, (void *)&dLinkShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	30, /* joint_rfoot_id */
	92.628f, /* joint_rfoot_rotate */
	25, /* joint_lfoot_id */
	92.628f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0C, 0x42, 0x77, 0xAE, 0x14, 0x00, 0x00, 0x00, 0x07, 0x42, 0x79, 0x9C, 0xAC }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dLinkMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	&dLinkMain_textureparts_container, /* textureparts_container */
	35, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dLinkMain_thrown_status, /* thrown_status */
	16, /* joint_itemlight_id */
	&dLinkMain_sprites, /* sprites */
	(FTSkeleton**)dLinkMain_skeleton, /* skeleton */
};
