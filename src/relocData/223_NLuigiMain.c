/* Fighter Main data for relocData file 223 (NLuigiMain) */
/* File size: 1504 bytes (0x5E0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dLuigiMainMotion_EggLay_0x0024[];
extern DObjDesc dNMarioModel_JointTree[];

/* Pre-attributes data (166 words, 0x0298 bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNLuigiMain_pre+0x0) */
u32 dNLuigiMain_file_handles[1] = {

	(u32)&dLuigiMainMotion_EggLay_0x0024, /* extern -> 0x0024 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNLuigiMain_pre+0x4) */
u32 dNLuigiMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNLuigiMain_pre+0xC) */
u32 dNLuigiMain_setup_parts[2] = {
	0xFFFFFF00,
	0x00000000,
};

/* @ 0x0014, 64 bytes: FTAttributes.hiddenparts target (was dNLuigiMain_pre+0x14) */
FTHiddenPart dNLuigiMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001C, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0054, 100 bytes: FTAttributes.modelparts_container target (was dNLuigiMain_pre+0x54) */
FTModelPartDesc *dNLuigiMain_modelparts_container[25] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL,
};

/* @ 0x00B8, 4 bytes: FTAttributes.textureparts_container target (was dNLuigiMain_pre+0xB8) */
FTTexturePart dNLuigiMain_textureparts_container = { 0x0C, { 0x00, 0x00 } };

/* @ 0x00BC, 32 bytes: FTAttributes.commonparts_container target (was dNLuigiMain_pre+0xBC) */
FTCommonPartContainer dNLuigiMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNMarioModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dNMarioModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x00DC, 432 bytes: FTAttributes.thrown_status target (was dNLuigiMain_pre+0xDC) */
FTThrownStatus dNLuigiMain_thrown_status[54] = {
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
};

/* @ 0x028C, 12 bytes: FTAttributes.sprites target (was dNLuigiMain_pre+0x28C) */
FTSprites dNLuigiMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x015C00AE, /* emblem */
};

FTAttributes dNLuigiMain_attr = {
	1.0f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.3f, /* walk_speed_mul */
	0.7f, /* traction */
	50.0f, /* dash_speed */
	2.8f, /* dash_decel */
	40.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	30.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.025f, /* air_accel */
	26.0f, /* air_speed_max_x */
	0.15f, /* air_friction */
	2.1f, /* gravity */
	42.0f, /* tvel_base */
	67.5f, /* tvel_fast */
	2, /* jumps_max */
	1.0f, /* weight */
	24.0f, /* attack1_followup_frames */
	18.0f, /* dash_to_run */
	260.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	700.0f, /* camera_zoom_base */
	{ 370.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 400.0f, 360.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 315.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
	1.02f, /* halo_size */
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
		{ 6, 1, TRUE, { 0.0f, 28.0f, 9.0f }, { 110.0f, 130.0f, 98.0f } },
		{ 12, 2, TRUE, { 0.0f, 81.0f, 14.0f }, { 155.0f, 200.0f, 150.0f } },
		{ 14, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 51.0f, 50.0f, 50.0f } },
		{ 8, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 51.0f, 50.0f, 50.0f } },
		{ 15, 1, FALSE, { 20.0f, 0.0f, 0.0f }, { 74.0f, 54.0f, 54.0f } },
		{ 9, 1, FALSE, { 20.0f, 0.0f, 0.0f }, { 74.0f, 54.0f, 54.0f } },
		{ 24, 0, FALSE, { 18.0f, 0.0f, 0.0f }, { 62.0f, 67.0f, 67.0f } },
		{ 19, 0, FALSE, { 18.0f, 0.0f, 0.0f }, { 62.0f, 67.0f, 67.0f } },
		{ 25, 0, FALSE, { 34.0f, 0.0f, 0.0f }, { 67.0f, 78.0f, 76.0f } },
		{ 20, 0, FALSE, { 34.0f, 0.0f, 0.0f }, { 67.0f, 78.0f, 76.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
	{ 900.0f, 450.0f, 900.0f }, /* hit_detect_range */
	(u32*)dNLuigiMain_setup_parts, /* setup_parts */
	(u32*)dNLuigiMain_animlock, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNLuigiMain_hiddenparts, /* hiddenparts */
	&dNLuigiMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	23, /* joint_rfoot_id */
	60.891f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	60.891f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x0F, 0xA6, 0xE9, 0x00, 0x00, 0x00, 0x07, 0x42, 0x0F, 0x8B, 0x44 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNLuigiMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)&dNLuigiMain_textureparts_container, /* textureparts_container */
	28, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNLuigiMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dNLuigiMain_sprites, /* sprites */
	NULL, /* skeleton */
};
