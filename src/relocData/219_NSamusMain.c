/* Fighter Main data for relocData file 219 (NSamusMain) */
/* File size: 1808 bytes (0x710) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */
extern u8 dSamusShieldPose_data0[];
extern u8 dSamusShieldPose_data0_end[];
extern u8 dSamusShieldPose_shield_anim_joint_1[];
extern u8 dSamusShieldPose_shield_anim_joint_2[];
extern u8 dSamusShieldPose_shield_anim_joint_3[];
extern u8 dSamusShieldPose_shield_anim_joint_4[];
extern u8 dSamusShieldPose_shield_anim_joint_5[];
extern u8 dSamusShieldPose_shield_anim_joint_6[];
extern u8 dSamusShieldPose_shield_anim_joint_7[];
#include <ft/fttypes.h>

extern DObjDesc dNSamusModel_JointTree[];
extern Gfx dNSamusModel_Joint_0x1C00_DisplayList[];
extern u8 dNSamusModel_gap_0x2FE8_sub_0x1978[];
extern u8 dNSamusModel_DL_0x3BF0[];
extern u32 dSamusMainMotion_EggLay_0x0084[];

/* Pre-attributes data (239 words, 0x03BC bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNSamusMain_pre+0x0) */
u32 dNSamusMain_file_handles[1] = {

	(u32)&dSamusMainMotion_EggLay_0x0084, /* extern -> 0x0084 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNSamusMain_pre+0x4) */
u32 dNSamusMain_animlock[2] = {
	0x10200252,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNSamusMain_pre+0xC) */
u32 dNSamusMain_setup_parts[2] = {
	0xFFF803FF,
	0x00000000,
};

/* @ 0x0014, 208 bytes: FTAttributes.hiddenparts target (was dNSamusMain_pre+0x14) */
FTHiddenPart dNSamusMain_hiddenparts[13] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x00000024, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000011, 0x00000010, 0x00000001, 0x00000000 },
	{ 0x00000012, 0x00000011, 0x00000001, 0x00000000 },
	{ 0x00000013, 0x00000012, 0x00000001, 0x00000000 },
	{ 0x00000014, 0x00000013, 0x00000001, 0x00000000 },
	{ 0x00000015, 0x00000014, 0x00000001, 0x00000000 },
	{ 0x00000016, 0x00000015, 0x00000001, 0x00000000 },
	{ 0x00000017, 0x00000016, 0x00000001, 0x00000000 },
	{ 0x00000018, 0x00000010, 0x00000001, 0x00000000 },
	{ 0x00000019, 0x00000010, 0x00000001, 0x00000000 },
};

/* @ 0x00E4, 120 bytes: FTAttributes.sub_0x0E4 target (was dNSamusMain_pre+0xE4) */
FTModelPart dNSamusMain_modelparts_desc_0x0E4[6] = {
	{ (Gfx*)&dNSamusModel_Joint_0x1C00_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNSamusModel_Joint_0x1C00_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNSamusModel_DL_0x3BF0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNSamusModel_DL_0x3BF0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNSamusModel_gap_0x2FE8_sub_0x1978, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNSamusModel_gap_0x2FE8_sub_0x1978, NULL, NULL, NULL, 0x00 },
};

/* @ 0x015C, 132 bytes: FTAttributes.modelparts_container target (was dNSamusMain_pre+0x15C) */
FTModelPartDesc *dNSamusMain_modelparts_container[33] = {
	NULL, NULL, (FTModelPartDesc*)dNSamusMain_modelparts_desc_0x0E4, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL,
};

/* @ 0x01E0, 32 bytes: FTAttributes.commonparts_container target (was dNSamusMain_pre+0x1E0) */
FTCommonPartContainer dNSamusMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNSamusModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dNSamusModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x0200, 432 bytes: FTAttributes.thrown_status target (was dNSamusMain_pre+0x200) */
FTThrownStatus dNSamusMain_thrown_status[54] = {
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

/* @ 0x03B0, 12 bytes: FTAttributes.sprites target (was dNSamusMain_pre+0x3B0) */
FTSprites dNSamusMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x01A500AE, /* emblem */
};

FTAttributes dNSamusMain_attr = {
	1.0f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	45.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.34f, /* walk_speed_mul */
	2.0f, /* traction */
	55.0f, /* dash_speed */
	3.0f, /* dash_decel */
	52.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.5f, /* jump_height_mul */
	36.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.94f, /* jumpaerial_height */
	0.03f, /* air_accel */
	28.0f, /* air_speed_max_x */
	0.3f, /* air_friction */
	1.9f, /* gravity */
	42.0f, /* tvel_base */
	67.0f, /* tvel_fast */
	2, /* jumps_max */
	0.92f, /* weight */
	30.0f, /* attack1_followup_frames */
	14.0f, /* dash_to_run */
	330.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	115.0f, /* jostle_width */
	0.0f, /* jostle_x */
	TRUE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	900.0f, /* camera_zoom_base */
	{ 500.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 440.0f, 550.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 107.0f, 0.0f }, { 322.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
	1.2f, /* halo_size */
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
	0, /* is_have_specialn */
	0, /* is_have_specialairn */
	0, /* is_have_specialhi */
	0, /* is_have_specialairhi */
	0, /* is_have_speciallw */
	0, /* is_have_specialairlw */
	0, /* is_have_catch */
	0, /* is_have_voice */
	/* damage_coll_descs */
	{
		{ 5, 1, TRUE, { 0.0f, -69.0f, -6.0f }, { 88.0f, 64.0f, 86.0f } },
		{ 6, 1, TRUE, { 0.0f, 25.0f, -8.0f }, { 120.0f, 132.0f, 110.0f } },
		{ 13, 2, TRUE, { 0.0f, 0.0f, 0.0f }, { 69.0f, 49.0f, 68.0f } },
		{ 15, 1, FALSE, { 39.0f, 0.0f, 0.0f }, { 147.0f, 56.0f, 56.0f } },
		{ 8, 1, FALSE, { 39.0f, 0.0f, 0.0f }, { 147.0f, 56.0f, 56.0f } },
		{ 16, 1, FALSE, { 84.0f, 0.0f, 0.0f }, { 147.0f, 60.0f, 60.0f } },
		{ 9, 1, FALSE, { 84.0f, 0.0f, 0.0f }, { 147.0f, 47.0f, 44.0f } },
		{ 32, 0, TRUE, { 70.0f, 8.0f, 0.0f }, { 153.0f, 64.0f, 74.0f } },
		{ 27, 0, TRUE, { 70.0f, 8.0f, 0.0f }, { 153.0f, 64.0f, 74.0f } },
		{ 33, 0, FALSE, { 80.0f, 0.0f, 0.0f }, { 203.0f, 56.0f, 64.0f } },
		{ 28, 0, FALSE, { 80.0f, 0.0f, 0.0f }, { 203.0f, 56.0f, 64.0f } },
	},
	{ 1200.0f, 600.0f, 1200.0f }, /* hit_detect_range */
	(u32*)dNSamusMain_setup_parts, /* setup_parts */
	(u32*)dNSamusMain_animlock, /* animlock */
	{ 13, 16, 28, 33, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNSamusMain_hiddenparts, /* hiddenparts */
	&dNSamusMain_commonparts_container, /* commonparts_container */
	(void *)&dSamusShieldPose_data0, /* dobj_lookup */
	{ (void *)&dSamusShieldPose_data0_end, (void *)&dSamusShieldPose_shield_anim_joint_1, (void *)&dSamusShieldPose_shield_anim_joint_2, (void *)&dSamusShieldPose_shield_anim_joint_3, (void *)&dSamusShieldPose_shield_anim_joint_4, (void *)&dSamusShieldPose_shield_anim_joint_5, (void *)&dSamusShieldPose_shield_anim_joint_6, (void *)&dSamusShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	31, /* joint_rfoot_id */
	176.271f, /* joint_rfoot_rotate */
	26, /* joint_lfoot_id */
	176.271f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0E, 0x42, 0xD3, 0xA3, 0x54, 0x00, 0x00, 0x00, 0x07, 0x42, 0xD3, 0xA6, 0x66 }, /* filler_0x30C */
	100.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNSamusMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	36, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNSamusMain_thrown_status, /* thrown_status */
	11, /* joint_itemlight_id */
	&dNSamusMain_sprites, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding (3 words) */
u32 dNSamusMain_pad[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
