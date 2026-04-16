/* Fighter Main data for relocData file 241 (NNessMain) */
/* File size: 1600 bytes (0x640) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern DObjDesc dNNessModel_JointTree[];
extern u8 dNNessModel_gap_0x3210_sub_0x2B0[];
extern u8 dNNessModel_gap_0x3210_sub_0x30[];
extern u32 dNessMainMotion_0x0024[];

/* Pre-attributes data (188 words, 0x02F0 bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNNessMain_pre+0x0) */
u32 dNNessMain_file_handles[1] = {

	(u32)&dNessMainMotion_0x0024, /* extern -> 0x0024 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNNessMain_pre+0x4) */
u32 dNNessMain_animlock[2] = {
	0x10424900,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNNessMain_pre+0xC) */
u32 dNNessMain_setup_parts[2] = {
	0xFFFFFFC0,
	0x00000000,
};

/* @ 0x0014, 64 bytes: FTAttributes.hiddenparts target (was dNNessMain_pre+0x14) */
FTHiddenPart dNNessMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001E, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0054, 40 bytes: FTAttributes.sub_0x054 target (was dNNessMain_pre+0x54) */
FTModelPart dNNessMain_modelparts_desc_0x054[2] = {
	{ (Gfx*)&dNNessModel_gap_0x3210_sub_0x2B0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNNessModel_gap_0x3210_sub_0x2B0, NULL, NULL, NULL, 0x00 },
};

/* @ 0x007C, 40 bytes: FTAttributes.sub_0x07C target (was dNNessMain_pre+0x7C) */
FTModelPart dNNessMain_modelparts_desc_0x07C[2] = {
	{ (Gfx*)&dNNessModel_gap_0x3210_sub_0x30, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNNessModel_gap_0x3210_sub_0x30, NULL, NULL, NULL, 0x00 },
};

/* @ 0x00A4, 108 bytes: FTAttributes.modelparts_container target (was dNNessMain_pre+0xA4) */
FTModelPartDesc *dNNessMain_modelparts_container[27] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, (FTModelPartDesc*)dNNessMain_modelparts_desc_0x054, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, (FTModelPartDesc*)dNNessMain_modelparts_desc_0x07C,
};

/* @ 0x0110, 4 bytes: FTAttributes.textureparts_container target (was dNNessMain_pre+0x110) */
u32 dNNessMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x0114, 32 bytes: FTAttributes.commonparts_container target (was dNNessMain_pre+0x114) */
FTCommonPartContainer dNNessMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNNessModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dNNessModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x0134, 432 bytes: FTAttributes.thrown_status target (was dNNessMain_pre+0x134) */
FTThrownStatus dNNessMain_thrown_status[54] = {
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

/* @ 0x02E4, 12 bytes: FTAttributes.sprites target (was dNNessMain_pre+0x2E4) */
FTSprites dNNessMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x017200AE, /* emblem */
};

FTAttributes dNNessMain_attr = {
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
	2.0f, /* kneebend_anim_length */
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
	12.0f, /* dash_to_run */
	320.0f, /* shield_size */
	85.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	140.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	600.0f, /* camera_zoom_base */
	{ 250.0f, 140.0f, 0.0f, 115.0f }, /* map_coll */
	{ 250.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 315.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
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
	(u32*)dNNessMain_setup_parts, /* setup_parts */
	(u32*)dNNessMain_animlock, /* animlock */
	{ 12, 15, 20, 26, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNNessMain_hiddenparts, /* hiddenparts */
	&dNNessMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	60.891f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	60.891f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x0F, 0xA6, 0xE9, 0x00, 0x00, 0x00, 0x07, 0x42, 0x0F, 0x8B, 0x44 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNNessMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dNNessMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNNessMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dNNessMain_sprites, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dNNessMain_pad[2] = {
	0x00000000, 0x00000000,
};
