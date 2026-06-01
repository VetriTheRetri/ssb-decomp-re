/* Fighter Main data for relocData file 239 (NessMain) */
/* File size: 2320 bytes (0x910) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */
extern u8 dNessShieldPose_data0[];
extern u8 dNessShieldPose_data0_end[];
extern u8 dNessShieldPose_shield_anim_joint_1[];
extern u8 dNessShieldPose_shield_anim_joint_2[];
extern u8 dNessShieldPose_shield_anim_joint_3[];
extern u8 dNessShieldPose_shield_anim_joint_4[];
extern u8 dNessShieldPose_shield_anim_joint_5[];
extern u8 dNessShieldPose_shield_anim_joint_6[];
extern u8 dNessShieldPose_shield_anim_joint_7[];
#include <ft/fttypes.h>
#include <wp/wptypes.h>

extern u32 dNessMainMotion_EggLay_0x0024[];
extern DObjDesc dNessModel_JointTree[];
extern DObjDesc dNessModel_JointTree_0x4FE8[];
extern MObjSub **dNessModel_JointVerts_Vtx[];
extern Gfx dNessModel_Joint_0x1AF8_DisplayList[];
extern Gfx dNessModel_Joint_0x1B88_DisplayList[];
extern Gfx dNessModel_Joint_0x20E8_DisplayList[];
extern Gfx dNessModel_Joint_0x4470_DisplayList[];
extern Gfx dNessModel_Joint_0x44E8_DisplayList[];
extern Gfx dNessModel_Joint_0x4A70_DisplayList[];
extern DObjDesc dNessModel_PKThunderWaveDObjDesc[];
extern Gfx dNessModel_DL_0x9CE0[];
extern Gfx dNessModel_DL_0x9DB0[];
extern Gfx dNessModel_DL_0xA120[];
extern Gfx dNessModel_DL_0xA380[];
extern Gfx dNessModel_DL_0xA490[];
extern Gfx dNessModel_DL_0xA570[];
extern Gfx dNessModel_DL_0xA650[];
extern Gfx dNessModel_DL_0xA760[];
extern Gfx dNessModel_DL_0xA870[];
extern Gfx dNessModel_DL_0xA950[];
extern void *dNessModel_gap_0x2B80[];
extern void *dNessModel_gap_0x54B8[];
extern MObjSub **dNessModel_Joint_0x0040_post_sub_0x658[3];
extern Sprite dNessModel_Stock;
extern Sprite dNessModel_FTEmblem;
extern u8 dNessModel_gap_0x2C04_sub_0x1E8[];
extern u8 dNessModel_gap_0x2C04_sub_0x20C[];
extern u8 dNessModel_gap_0x2C04_sub_0x8A4[];
extern u8 dNessModel_DL_0x6760[];
extern u8 dNessModel_DL_0x69E0[];
extern u8 dNessModel_DL_0x6B50[];
extern u8 dNessModel_gap_0x553C_sub_0x1854[];
extern u8 dNessModel_gap_0x553C_sub_0x1F0[];
extern u8 dNessModel_gap_0x553C_sub_0x25BC[];
extern DObjDesc dNessModel_DObjDesc_0x7C98[3];
extern u8 dNessModel_gap_0x553C_sub_0x27E4[];
extern u8 dNessModel_gap_0x553C_sub_0x2834[];
extern u8 dNessModel_DL_0x5850[];
extern u8 dNessModel_gap_0x553C_sub_0x348C[];
extern DObjDLLink dNessModel_DLLink_0x8B40[2];
extern u8 dNessModel_gap_0x553C_sub_0x464[];
extern u8 dNessModel_DL_0x5B20[];
extern u8 dNessModel_gap_0x553C_sub_0x734[];
extern u8 dNessModel_DL_0x5DB0[];
extern u8 dNessModel_gap_0x553C_sub_0x984[];
extern u8 dNessModel_DL_0x6000[];
extern u8 dNessModel_gap_0x553C_sub_0xBD4[];
extern u8 dNessModel_gap_0xC100_sub_0x30[];
extern u8 dNessModel_gap_0xC100_sub_0x58[];
extern u8 dNessModel_gap_0xC100_sub_0x8[];
extern u16 dNessModel_palette_0xC0E0[];
extern DObjDesc dNessSpecial2_PsychicMagnetDObjDesc[];
extern WPAttributes dNessSpecial1_PKFire_WeaponAttributes;

/* Pre-attributes data (367 words, 0x05BC bytes) */
/* @ 0x0000, 12 bytes: 3 cross-file handle pointers (chain-rewritten). */
void *dNessMain_file_handles[3] = {

	(void *)&dNessMainMotion_EggLay_0x0024,
	(void *)&dNessSpecial2_PsychicMagnetDObjDesc,
	(void *)&dNessSpecial1_PKFire_WeaponAttributes,
};

/* @ 0x000C, 52 bytes: WPAttributes for PK Thunder head projectile.
 * Referenced from wp/wpness/wpnesspkthunder.c via llNessMainPKThunderWeaponAttributes (0x0C). */
WPAttributes dNessMain_PKThunderWeaponAttributes = {
	(void *)&dNessModel_DObjDesc_0x7C98,                /* data */
	(MObjSub ***)&dNessModel_gap_0x553C_sub_0x25BC,     /* p_mobjsubs */
	(AObjEvent32 **)&dNessModel_gap_0x553C_sub_0x27E4,  /* anim_joints */
	(AObjEvent32 ***)&dNessModel_gap_0x553C_sub_0x2834, /* p_matanim_joints */
	{ { 0, 0, 0 }, { 0, 0, 0 } },                       /* attack_offsets */
	100, 0, -100, 100,                                  /* map_coll top/center/bottom/width */
	150, /* size             : 16 */
	100, /* angle            : 10 */
	30,  /* knockback_scale  : 10 */
	6,   /* damage           :  8 */
	2,   /* element          :  4 */
	0,   /* knockback_weight : 10 */
	1,   /* shield_damage    :  8 */
	1,   /* attack_count     :  2 */
	1,   /* can_setoff       :  1 */
	23,  /* sfx              : 10 */
	1,   /* priority         :  3 */
	0,   /* can_rehit_item   :  1 */
	0,   /* can_rehit_fighter:  1 */
	0,   /* can_hop          :  1 */
	1,   /* can_reflect      :  1 */
	1,   /* can_absorb       :  1 */
	1,   /* can_shield       :  1 */
	0,   /* unused_0x2F_b6   :  1 */
	0,   /* unused_0x2F_b7   :  1 */
	50,  /* knockback_base   : 10 */
};

/* @ 0x0040, 52 bytes: WPAttributes for PK Thunder trail projectile (uses a
 * display list rather than a DObjDesc).
 * Referenced from wp/wpness/wpnesspkthunder.c via llNessMainPKThunderTrailWeaponAttributes (0x40). */
WPAttributes dNessMain_PKThunderTrailWeaponAttributes = {
	(void *)&dNessModel_DLLink_0x8B40,              /* data */
	(MObjSub ***)&dNessModel_gap_0x553C_sub_0x348C, /* p_mobjsubs */
	NULL,                                           /* anim_joints */
	NULL,                                           /* p_matanim_joints */
	{ { 0, -100, 0 }, { 0, 0, 0 } },                /* attack_offsets */
	50, 0, -50, 50,                                 /* map_coll top/center/bottom/width */
	100, /* size             : 16 */
	100, /* angle            : 10 */
	30,  /* knockback_scale  : 10 */
	3,   /* damage           :  8 */
	2,   /* element          :  4 */
	0,   /* knockback_weight : 10 */
	1,   /* shield_damage    :  8 */
	1,   /* attack_count     :  2 */
	0,   /* can_setoff       :  1 */
	23,  /* sfx              : 10 */
	1,   /* priority         :  3 */
	1,   /* can_rehit_item   :  1 */
	0,   /* can_rehit_fighter:  1 */
	0,   /* can_hop          :  1 */
	0,   /* can_reflect      :  1 */
	0,   /* can_absorb       :  1 */
	1,   /* can_shield       :  1 */
	0,   /* unused_0x2F_b6   :  1 */
	0,   /* unused_0x2F_b7   :  1 */
	50,  /* knockback_base   : 10 */
};

/* @ 0x0074, 8 bytes: FTAttributes.animlock target (was dNessMain_pre+0x74) */
u32 dNessMain_animlock[2] = {
	0x10424900,
	0x00000000,
};

/* @ 0x007C, 8 bytes: FTAttributes.setup_parts target (was dNessMain_pre+0x7C) */
u32 dNessMain_setup_parts[2] = {
	0xFFFFFFC0,
	0x00000000,
};

/* @ 0x0084, 64 bytes: FTAttributes.hiddenparts target (was dNessMain_pre+0x84) */
FTHiddenPart dNessMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001E, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x00C4, 80 bytes: FTAttributes.sub_0x0C4 target (was dNessMain_pre+0xC4) */
FTModelPart dNessMain_modelparts_desc_0x0C4[4] = {
	{ (Gfx*)&dNessModel_Joint_0x1B88_DisplayList, (MObjSub**)&dNessModel_Joint_0x0040_post_sub_0x658, (AObjEvent32**)&dNessModel_gap_0x2C04_sub_0x1E8, NULL, 0x00 },
	{ (Gfx*)&dNessModel_Joint_0x44E8_DisplayList, (MObjSub**)&dNessModel_gap_0x2C04_sub_0x8A4, (AObjEvent32**)&dNessModel_gap_0x553C_sub_0x1F0, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x6760, NULL, NULL, NULL, 0x40 },
	{ (Gfx*)&dNessModel_DL_0x6760, NULL, NULL, NULL, 0x40 },
};

/* @ 0x0114, 120 bytes: FTAttributes.sub_0x114 target (was dNessMain_pre+0x114) */
FTModelPart dNessMain_modelparts_desc_0x114[6] = {
	{ (Gfx*)&dNessModel_Joint_0x1AF8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_Joint_0x4470_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x5B20, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x734, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x6000, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0xBD4, NULL, NULL, NULL, 0x00 },
};

/* @ 0x018C, 120 bytes: FTAttributes.sub_0x18C target (was dNessMain_pre+0x18C) */
FTModelPart dNessMain_modelparts_desc_0x18C[6] = {
	{ (Gfx*)&dNessModel_Joint_0x20E8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_Joint_0x4A70_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x5850, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x464, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x5DB0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x984, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0204, 80 bytes: FTAttributes.sub_0x204 target (was dNessMain_pre+0x204) */
FTModelPart dNessMain_modelparts_desc_0x204[4] = {
	{ (Gfx*)&dNessModel_DL_0x6B50, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x6B50, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1854, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1854, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0254, 40 bytes: FTAttributes.sub_0x254 target (was dNessMain_pre+0x254) */
FTModelPart dNessMain_modelparts_desc_0x254[2] = {
	{ (Gfx*)&dNessModel_DL_0x69E0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_DL_0x69E0, NULL, NULL, NULL, 0x00 },
};

/* @ 0x027C, 108 bytes: FTAttributes.modelparts_container target (was dNessMain_pre+0x27C) */
FTModelPartDesc *dNessMain_modelparts_container[27] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dNessMain_modelparts_desc_0x114, NULL, (FTModelPartDesc*)dNessMain_modelparts_desc_0x0C4, NULL, NULL, NULL,
	(FTModelPartDesc*)dNessMain_modelparts_desc_0x18C, (FTModelPartDesc*)dNessMain_modelparts_desc_0x204, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, (FTModelPartDesc*)dNessMain_modelparts_desc_0x254,
};

/* @ 0x02E8, 4 bytes: FTAttributes.textureparts_container target (was dNessMain_pre+0x2E8) */
FTTexturePart dNessMain_textureparts_container = { 0x0C, { 0x00, 0x00 } };

/* @ 0x02EC, 32 bytes: FTAttributes.commonparts_container target (was dNessMain_pre+0x2EC) */
FTCommonPartContainer dNessMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNessModel_JointTree, (MObjSub***)&dNessModel_JointVerts_Vtx, (AObjEvent32***)&dNessModel_gap_0x2B80, 0x00 },
		{ (DObjDesc*)&dNessModel_JointTree_0x4FE8, (MObjSub***)&dNessModel_gap_0x2C04_sub_0x20C, (AObjEvent32***)&dNessModel_gap_0x54B8[2], 0x00 },
	},
};

/* @ 0x030C, 432 bytes: FTAttributes.thrown_status target (was dNessMain_pre+0x30C) */
FTThrownStatus dNessMain_thrown_status[54] = {
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

/* @ 0x04BC, 16 bytes: FTAttributes.sub_0x4BC target (was dNessMain_pre+0x4BC) */
int *dNessMain_stock_luts[4] = {
	(int*)&dNessModel_palette_0xC0E0,
	(int*)&dNessModel_gap_0xC100_sub_0x8,
	(int*)&dNessModel_gap_0xC100_sub_0x30,
	(int*)&dNessModel_gap_0xC100_sub_0x58,
};

/* @ 0x04CC, 12 bytes: FTAttributes.sprites target (was dNessMain_pre+0x4CC) */
FTSprites dNessMain_sprites = {
	&dNessModel_Stock, /* stock_sprite */
	(int**)dNessMain_stock_luts, /* stock_luts */
	&dNessModel_FTEmblem, /* emblem */
};

/* @ 0x04D8, 216 bytes: FTAttributes.sub_0x4D8 target (was dNessMain_pre+0x4D8) */
FTSkeleton dNessMain_skeleton_dls[27] = {
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0x9CE0 }, 0 },
	{ { (Gfx*)dNessModel_DL_0x9DB0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA490 }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA380 }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA570 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA120 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA490 }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA380 }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA650 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA760 }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA870 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA950 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA760 }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA870 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)dNessModel_DL_0xA950 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x05B0, 12 bytes: FTAttributes.skeleton target (was dNessMain_pre+0x5B0) */
FTSkeleton *dNessMain_skeleton[3] = {
	(FTSkeleton*)12,
	dNessMain_skeleton_dls,
	NULL,
};

FTAttributes dNessMain_attr = {
	1.05f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.28f, /* walk_speed_mul */
	2.0f, /* traction */
	68.0f, /* dash_speed */
	5.4f, /* dash_decel */
	40.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	26.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	1.2f, /* jumpaerial_height */
	0.04f, /* air_accel */
	28.0f, /* air_speed_max_x */
	0.4f, /* air_friction */
	2.7f, /* gravity */
	55.0f, /* tvel_base */
	88.25f, /* tvel_fast */
	2, /* jumps_max */
	1.1f, /* weight */
	24.0f, /* attack1_followup_frames */
	14.0f, /* dash_to_run */
	320.0f, /* shield_size */
	85.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	140.0f, /* cam_offset_y */
	1600.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	500.0f, /* camera_zoom_base */
	{ 250.0f, 140.0f, 0.0f, 115.0f }, /* map_coll */
	{ 280.0f, 420.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceNessDead, nSYAudioFGMNessDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceNessDeadUp, /* deadup_sfx */
	nSYAudioVoiceNessDamage, /* damage_sfx */
	{ nSYAudioVoiceNessSmash1, nSYAudioVoiceNessSmash2, nSYAudioVoiceNessSmash3 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceNessHeavyGet, /* heavyget_sfx */
	1.0f, /* halo_size */
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
		{ 5, 1, TRUE, { 0.0f, -30.0f, 0.0f }, { 117.0f, 73.0f, 105.0f } },
		{ 6, 1, TRUE, { 0.0f, 28.0f, 0.0f }, { 118.0f, 100.0f, 112.0f } },
		{ 12, 2, TRUE, { 0.0f, 91.0f, 6.0f }, { 143.0f, 153.0f, 147.0f } },
		{ 14, 1, FALSE, { 15.0f, 0.0f, 0.0f }, { 59.0f, 32.0f, 32.0f } },
		{ 8, 1, FALSE, { 15.0f, 0.0f, 0.0f }, { 59.0f, 32.0f, 32.0f } },
		{ 15, 1, FALSE, { 25.0f, 0.0f, 3.0f }, { 51.0f, 32.0f, 32.0f } },
		{ 9, 1, FALSE, { 25.0f, 0.0f, 3.0f }, { 51.0f, 32.0f, 32.0f } },
		{ 25, 0, FALSE, { 33.0f, 0.0f, 0.0f }, { 59.0f, 65.0f, 58.0f } },
		{ 19, 0, FALSE, { 33.0f, 0.0f, 0.0f }, { 59.0f, 65.0f, 58.0f } },
		{ 26, 0, FALSE, { 26.0f, 0.0f, -2.0f }, { 68.0f, 47.0f, 42.0f } },
		{ 20, 0, FALSE, { 26.0f, 0.0f, -2.0f }, { 68.0f, 47.0f, 42.0f } },
	},
	{ 900.0f, 900.0f, 600.0f }, /* hit_detect_range */
	(u32*)dNessMain_setup_parts, /* setup_parts */
	(u32*)dNessMain_animlock, /* animlock */
	{ 12, 15, 20, 26, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNessMain_hiddenparts, /* hiddenparts */
	&dNessMain_commonparts_container, /* commonparts_container */
	(void *)&dNessShieldPose_data0, /* dobj_lookup */
	{ (void *)&dNessShieldPose_data0_end, (void *)&dNessShieldPose_shield_anim_joint_1, (void *)&dNessShieldPose_shield_anim_joint_2, (void *)&dNessShieldPose_shield_anim_joint_3, (void *)&dNessShieldPose_shield_anim_joint_4, (void *)&dNessShieldPose_shield_anim_joint_5, (void *)&dNessShieldPose_shield_anim_joint_6, (void *)&dNessShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	60.891f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	60.891f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x0F, 0xA6, 0xE9, 0x00, 0x00, 0x00, 0x07, 0x42, 0x0F, 0x8B, 0x44 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNessMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)&dNessMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNessMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dNessMain_sprites, /* sprites */
	(FTSkeleton**)dNessMain_skeleton, /* skeleton */
};
