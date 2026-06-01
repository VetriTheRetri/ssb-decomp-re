/* Fighter Main data for relocData file 243 (PikachuMain) */
/* File size: 1904 bytes (0x770) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */
extern u8 dPikachuShieldPose_data0[];
extern u8 dPikachuShieldPose_data0_end[];
extern u8 dPikachuShieldPose_shield_anim_joint_1[];
extern u8 dPikachuShieldPose_shield_anim_joint_2[];
extern u8 dPikachuShieldPose_shield_anim_joint_3[];
extern u8 dPikachuShieldPose_shield_anim_joint_4[];
extern u8 dPikachuShieldPose_shield_anim_joint_5[];
extern u8 dPikachuShieldPose_shield_anim_joint_6[];
extern u8 dPikachuShieldPose_shield_anim_joint_7[];
#include <ft/fttypes.h>

extern DObjDesc dPikachuModel_JointTree[];
extern DObjDesc dPikachuModel_JointTree_0x5490[];
extern DObjDesc dPikachuModel_ThunderTrailDObjDesc[];
extern MObjSub dPikachuModel_ThunderTrailMObjSub_MObjSub;
extern u8 dPikachuModel_gap_0x0000[];
extern u8 dPikachuModel_gap_0x2B78_sub_0x8B8[];
extern u8 dPikachuModel_DL_0x6AE0[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x1338[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x1438[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x1548[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x1658[];
extern u8 dPikachuModel_DL_0x70D0[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x1868[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x1908[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x998[];
extern u8 dPikachuModel_gap_0x59B8_sub_0xA38[];
extern u8 dPikachuModel_gap_0x59B8_sub_0xB94[];
extern u8 dPikachuModel_gap_0x59B8_sub_0xC38[];
extern u8 dPikachuModel_DL_0x6740[];
extern u8 dPikachuModel_gap_0x9950_sub_0x30[];
extern u8 dPikachuModel_gap_0x9950_sub_0x58[];
extern u8 dPikachuModel_gap_0x9950_sub_0x8[];
extern u8 dPikachuModel_gap_0x9950_sub_0x80[];
extern u16 dPikachuModel_palette_0x9930[];
extern DObjDesc dPikachuSpecial2_UnkDObjDesc[];

/* Pre-attributes data (263 words, 0x041C bytes) */
/* @ 0x0000, 116 bytes: FTAttributes.file_handles target (was dPikachuMain_pre+0x0) */
u32 dPikachuMain_file_handles[29] = {

	0x00010004, /* extern -> 0x0010 */
	(u32)&dPikachuSpecial2_UnkDObjDesc, /* extern -> 0x0800 */
	0x00030000, /* extern -> 0x0000 */
	(u32)&dPikachuModel_ThunderTrailDObjDesc, /* extern -> 0x95B0 */
	(u32)&dPikachuModel_ThunderTrailMObjSub_MObjSub, /* extern -> 0x9420 */
	0x00000000,
	0x00000000,
	0x000000E1,
	0x00000000,
	0x00000000,
	0x00640000,
	0xFF9C0032,
	0x00641180,
	0x0C830800,
	0x0140B9C0,
	0x14000000,
	(u32)&dPikachuModel_ThunderTrailDObjDesc, /* extern -> 0x95B0 */
	(u32)&dPikachuModel_ThunderTrailMObjSub_MObjSub, /* extern -> 0x9420 */
	0x00000000,
	0x00000000,
	0x000000F0,
	0x00000000,
	0xFF100000,
	0x00E10000,
	0xFF1F004B,
	0x01901180,
	0x0C830800,
	0x0180B984,
	0x14000000,
};

/* @ 0x0074, 8 bytes: FTAttributes.animlock target (was dPikachuMain_pre+0x74) */
u32 dPikachuMain_animlock[2] = {
	0x08092900,
	0x00000000,
};

/* @ 0x007C, 8 bytes: FTAttributes.setup_parts target (was dPikachuMain_pre+0x7C) */
u32 dPikachuMain_setup_parts[2] = {
	0xFFFFFFC0,
	0x00000000,
};

/* @ 0x0084, 64 bytes: FTAttributes.hiddenparts target (was dPikachuMain_pre+0x84) */
FTHiddenPart dPikachuMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001E, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x00C4, 108 bytes: FTAttributes.modelparts_container target (was dPikachuMain_pre+0xC4) */
FTModelPartDesc *dPikachuMain_modelparts_container[27] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL,
};

/* @ 0x0130, 16 bytes: FTAttributes.accesspart target (was dPikachuMain_pre+0x130) */
u32 dPikachuMain_accesspart[4] = {
	0x0000000B,
	(u32)&dPikachuModel_gap_0x59B8_sub_0xA38, /* extern -> 0x63F0 */
	(u32)&dPikachuModel_gap_0x59B8_sub_0x998, /* extern -> 0x6350 */
	(u32)&dPikachuModel_gap_0x59B8_sub_0xB94, /* extern -> 0x654C */
};

/* @ 0x0140, 8 bytes: FTAttributes.textureparts_container target (was dPikachuMain_pre+0x140) */
FTTexturePartContainer dPikachuMain_textureparts_container = {
	{
		{ 0x0B, { 0x00, 0x00 } },
		{ 0x0B, { 0x01, 0x01 } },
	},
};

/* @ 0x0148, 32 bytes: FTAttributes.commonparts_container target (was dPikachuMain_pre+0x148) */
FTCommonPartContainer dPikachuMain_commonparts_container = {
	{
		{ (DObjDesc*)&dPikachuModel_JointTree, (MObjSub***)&dPikachuModel_gap_0x0000, (AObjEvent32***)((u8*)dPikachuModel_JointTree + 0x4D0), 0x00 },
		{ (DObjDesc*)&dPikachuModel_JointTree_0x5490, (MObjSub***)&dPikachuModel_gap_0x2B78_sub_0x8B8, (AObjEvent32***)((u8*)dPikachuModel_JointTree_0x5490 + 0x4D0), 0x00 },
	},
};

/* @ 0x0168, 432 bytes: FTAttributes.thrown_status target (was dPikachuMain_pre+0x168) */
FTThrownStatus dPikachuMain_thrown_status[54] = {
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

/* @ 0x0318, 20 bytes: FTAttributes.sub_0x318 target (was dPikachuMain_pre+0x318) */
int *dPikachuMain_stock_luts[5] = {
	(int*)&dPikachuModel_palette_0x9930,
	(int*)&dPikachuModel_gap_0x9950_sub_0x8,
	(int*)&dPikachuModel_gap_0x9950_sub_0x30,
	(int*)&dPikachuModel_gap_0x9950_sub_0x58,
	(int*)&dPikachuModel_gap_0x9950_sub_0x80,
};

/* @ 0x032C, 12 bytes: FTAttributes.sprites target (was dPikachuMain_pre+0x32C) */
FTSprites dPikachuMain_sprites = {
	(Sprite*)((u8*)dPikachuModel_gap_0x9950_sub_0x80 + 0x30), /* stock_sprite */
	(int**)dPikachuMain_stock_luts, /* stock_luts */
	(Sprite*)((u8*)dPikachuModel_gap_0x9950_sub_0x80 + 0x218), /* emblem */
};

/* @ 0x0338, 216 bytes: FTAttributes.sub_0x338 target (was dPikachuMain_pre+0x338) */
FTSkeleton dPikachuMain_skeleton_dls[27] = {
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0xC38 }, 0 },
	{ { (Gfx*)&dPikachuModel_DL_0x6740 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1438 }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1338 }, 0 },
	{ { (Gfx*)&dPikachuModel_DL_0x6AE0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1868 }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1908 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1438 }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1338 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1548 }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1658 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_DL_0x70D0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1548 }, 0 },
	{ { (Gfx*)&dPikachuModel_gap_0x59B8_sub_0x1658 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dPikachuModel_DL_0x70D0 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x0410, 12 bytes: FTAttributes.skeleton target (was dPikachuMain_pre+0x410) */
FTSkeleton *dPikachuMain_skeleton[3] = {
	(FTSkeleton*)11,
	dPikachuMain_skeleton_dls,
	NULL,
};

FTAttributes dPikachuMain_attr = {
	0.95f, /* size */
	60.0f, /* walkslow_anim_length */
	30.0f, /* walkmiddle_anim_length */
	30.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.42f, /* walk_speed_mul */
	2.0f, /* traction */
	60.0f, /* dash_speed */
	4.5f, /* dash_decel */
	55.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.67f, /* jump_height_mul */
	37.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	1.0f, /* jumpaerial_height */
	0.055f, /* air_accel */
	37.5f, /* air_speed_max_x */
	0.45f, /* air_friction */
	3.0f, /* gravity */
	52.0f, /* tvel_base */
	83.0f, /* tvel_fast */
	2, /* jumps_max */
	1.16f, /* weight */
	24.0f, /* attack1_followup_frames */
	13.0f, /* dash_to_run */
	288.0f, /* shield_size */
	100.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	115.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	150.0f, /* cam_offset_y */
	1650.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	470.0f, /* camera_zoom_base */
	{ 300.0f, 150.0f, 0.0f, 140.0f }, /* map_coll */
	{ 400.0f, 280.0f }, /* cliffcatch_coll */
	{ nSYAudioVoicePikachuDead, nSYAudioFGMPikachuDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoicePikachuDeadUp, /* deadup_sfx */
	nSYAudioVoicePikachuDamage, /* damage_sfx */
	{ nSYAudioVoicePikachuSmash1, nSYAudioVoicePikachuSmash2, nSYAudioVoicePikachuSmash3 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoicePikachuHeavyGet, /* heavyget_sfx */
	1.1f, /* halo_size */
	{ { 0xFF, 0xFF, 0xFF, 0x50 }, { 0x00, 0x00, 0x00, 0x50 }, { 0x00, 0x00, 0x00, 0x00 } }, /* shade_color */
	{ 0xFF, 0x00, 0x00, 0x00 }, /* fog_color */
	1, /* is_have_attack11 */
	0, /* is_have_attack12 */
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
		{ 5, 1, TRUE, { 0.0f, -3.0f, 0.0f }, { 200.0f, 96.0f, 165.0f } },
		{ 6, 1, TRUE, { 0.0f, 0.0f, 10.0f }, { 212.0f, 129.0f, 178.0f } },
		{ 11, 2, TRUE, { 0.0f, 46.0f, 12.0f }, { 191.0f, 149.0f, 203.0f } },
		{ 17, 1, FALSE, { 0.0f, 0.0f, -6.0f }, { 38.0f, 38.0f, 38.0f } },
		{ 9, 1, FALSE, { 0.0f, 0.0f, 6.0f }, { 38.0f, 38.0f, 38.0f } },
		{ 18, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 31.0f, 24.0f, 24.0f } },
		{ 18, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 31.0f, 24.0f, 24.0f } },
		{ 25, 0, FALSE, { 0.0f, 9.0f, -6.0f }, { 96.0f, 69.0f, 60.0f } },
		{ 20, 0, FALSE, { 0.0f, 9.0f, 6.0f }, { 96.0f, 69.0f, 60.0f } },
		{ 26, 0, FALSE, { 43.0f, 3.0f, 0.0f }, { 69.0f, 45.0f, 45.0f } },
		{ 21, 0, FALSE, { 43.0f, 3.0f, 0.0f }, { 69.0f, 45.0f, 45.0f } },
	},
	{ 800.0f, 400.0f, 800.0f }, /* hit_detect_range */
	(u32*)dPikachuMain_setup_parts, /* setup_parts */
	(u32*)dPikachuMain_animlock, /* animlock */
	{ 11, 18, 21, 26, 10 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dPikachuMain_hiddenparts, /* hiddenparts */
	&dPikachuMain_commonparts_container, /* commonparts_container */
	(void *)&dPikachuShieldPose_data0, /* dobj_lookup */
	{ (void *)&dPikachuShieldPose_data0_end, (void *)&dPikachuShieldPose_shield_anim_joint_1, (void *)&dPikachuShieldPose_shield_anim_joint_2, (void *)&dPikachuShieldPose_shield_anim_joint_3, (void *)&dPikachuShieldPose_shield_anim_joint_4, (void *)&dPikachuShieldPose_shield_anim_joint_5, (void *)&dPikachuShieldPose_shield_anim_joint_6, (void *)&dPikachuShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	79.671f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	79.671f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x10, 0x41, 0xD5, 0xF5, 0xC3, 0x00, 0x00, 0x00, 0x08, 0x41, 0xD5, 0xF5, 0xC3 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dPikachuMain_modelparts_container, /* modelparts_container */
	(FTAccessPart*)dPikachuMain_accesspart, /* accesspart */
	&dPikachuMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dPikachuMain_thrown_status, /* thrown_status */
	12, /* joint_itemlight_id */
	&dPikachuMain_sprites, /* sprites */
	(FTSkeleton**)dPikachuMain_skeleton, /* skeleton */
};

/* Trailing padding (3 words) */
u32 dPikachuMain_pad[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
