/* Fighter Main data for relocData file 227 (NLinkMain) */
/* File size: 1568 bytes (0x620) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dLinkMainMotion_EggLay_0x0014[];
extern DObjDesc dNLinkModel_JointTree[];

/* Pre-attributes data (182 words, 0x02D8 bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNLinkMain_pre+0x0) */
u32 dNLinkMain_file_handles[1] = {

	(u32)&dLinkMainMotion_EggLay_0x0014, /* extern -> 0x0014 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNLinkMain_pre+0x4) */
u32 dNLinkMain_animlock[2] = {
	0x108004A4,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNLinkMain_pre+0xC) */
u32 dNLinkMain_setup_parts[2] = {
	0xFFF9FFFE,
	0x00000000,
};

/* @ 0x0014, 96 bytes: FTAttributes.hiddenparts target (was dNLinkMain_pre+0x14) */
FTHiddenPart dNLinkMain_hiddenparts[6] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x00000023, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000011, 0x00000010, 0x00000001, 0x00000000 },
	{ 0x00000012, 0x00000010, 0x00000001, 0x00000000 },
};

/* @ 0x0074, 128 bytes: FTAttributes.modelparts_container target (was dNLinkMain_pre+0x74) */
FTModelPartDesc *dNLinkMain_modelparts_container[32] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL,
};

/* @ 0x00F4, 8 bytes: FTAttributes.textureparts_container target (was dNLinkMain_pre+0xF4) */
FTTexturePartContainer dNLinkMain_textureparts_container = {
	{
		{ 0x17, { 0x00, 0x00 } },
		{ 0x17, { 0x01, 0x01 } },
	},
};

/* @ 0x00FC, 32 bytes: FTAttributes.commonparts_container target (was dNLinkMain_pre+0xFC) */
FTCommonPartContainer dNLinkMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNLinkModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dNLinkModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x011C, 432 bytes: FTAttributes.thrown_status target (was dNLinkMain_pre+0x11C) */
FTThrownStatus dNLinkMain_thrown_status[54] = {
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

/* @ 0x02CC, 12 bytes: FTAttributes.sprites target (was dNLinkMain_pre+0x2CC) */
FTSprites dNLinkMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x016C00AE, /* emblem */
};

FTAttributes dNLinkMain_attr = {
	1.24f, /* size */
	80.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	35.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.4f, /* walk_speed_mul */
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
	30.0f, /* air_speed_max_x */
	0.0f, /* air_friction */
	3.2f, /* gravity */
	64.0f, /* tvel_base */
	102.0f, /* tvel_fast */
	2, /* jumps_max */
	0.96f, /* weight */
	24.0f, /* attack1_followup_frames */
	18.0f, /* dash_to_run */
	260.0f, /* shield_size */
	90.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	800.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 280.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 315.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
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
	(u32*)dNLinkMain_setup_parts, /* setup_parts */
	(u32*)dNLinkMain_animlock, /* animlock */
	{ 23, 14, 27, 32, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNLinkMain_hiddenparts, /* hiddenparts */
	&dNLinkMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	30, /* joint_rfoot_id */
	92.628f, /* joint_rfoot_rotate */
	25, /* joint_lfoot_id */
	92.628f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0C, 0x42, 0x77, 0xAE, 0x14, 0x00, 0x00, 0x00, 0x07, 0x42, 0x79, 0x9C, 0xAC }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNLinkMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	&dNLinkMain_textureparts_container, /* textureparts_container */
	35, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNLinkMain_thrown_status, /* thrown_status */
	16, /* joint_itemlight_id */
	&dNLinkMain_sprites, /* sprites */
	NULL, /* skeleton */
};
