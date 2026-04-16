/* Fighter Main data for relocData file 248 (NYoshiMain) */
/* File size: 1536 bytes (0x600) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern DObjDesc dNYoshiModel_JointTree[];

/* Pre-attributes data (174 words, 0x02B8 bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNYoshiMain_pre+0x0) */
u32 dNYoshiMain_file_handles[1] = {

	0x0037000D, /* extern -> 0x0034 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNYoshiMain_pre+0x4) */
u32 dNYoshiMain_animlock[2] = {
	0x02204A40,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNYoshiMain_pre+0xC) */
u32 dNYoshiMain_setup_parts[2] = {
	0xFBFFFFE0,
	0x00000000,
};

/* @ 0x0014, 80 bytes: FTAttributes.hiddenparts target (was dNYoshiMain_pre+0x14) */
FTHiddenPart dNYoshiMain_hiddenparts[5] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001F, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000009, 0x00000007, 0x00000001, 0x00000000 },
};

/* @ 0x0064, 112 bytes: FTAttributes.modelparts_container target (was dNYoshiMain_pre+0x64) */
FTModelPartDesc *dNYoshiMain_modelparts_container[28] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL,
};

/* @ 0x00D4, 8 bytes: FTAttributes.textureparts_container target (was dNYoshiMain_pre+0xD4) */
FTTexturePartContainer dNYoshiMain_textureparts_container = {
	{
		{ 0x07, { 0x00, 0x00 } },
		{ 0x07, { 0x01, 0x01 } },
	},
};

/* @ 0x00DC, 32 bytes: FTAttributes.commonparts_container target (was dNYoshiMain_pre+0xDC) */
FTCommonPartContainer dNYoshiMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNYoshiModel_JointTree, NULL, NULL, 0x01 },
		{ (DObjDesc*)&dNYoshiModel_JointTree, NULL, NULL, 0x01 },
	},
};

/* @ 0x00FC, 432 bytes: FTAttributes.thrown_status target (was dNYoshiMain_pre+0xFC) */
FTThrownStatus dNYoshiMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
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

/* @ 0x02AC, 12 bytes: FTAttributes.sprites target (was dNYoshiMain_pre+0x2AC) */
FTSprites dNYoshiMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x016400AE, /* emblem */
};

FTAttributes dNYoshiMain_attr = {
	1.1f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.38f, /* walk_speed_mul */
	1.6f, /* traction */
	40.0f, /* dash_speed */
	1.5f, /* dash_decel */
	50.0f, /* run_speed */
	5.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	26.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	1.2f, /* jumpaerial_height */
	0.04f, /* air_accel */
	40.0f, /* air_speed_max_x */
	0.4f, /* air_friction */
	2.7f, /* gravity */
	55.0f, /* tvel_base */
	88.0f, /* tvel_fast */
	2, /* jumps_max */
	0.95f, /* weight */
	24.0f, /* attack1_followup_frames */
	8.0f, /* dash_to_run */
	300.0f, /* shield_size */
	80.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	175.0f, /* jostle_width */
	90.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	800.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 210.0f }, /* map_coll */
	{ 320.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 100.0f, 0.0f }, { 490.0f, 150.0f }, { 0.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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
		{ 5, 1, TRUE, { 0.0f, 3.0f, -9.0f }, { 117.0f, 141.0f, 237.0f } },
		{ 6, 1, TRUE, { 0.0f, 81.0f, 60.0f }, { 72.0f, 72.0f, 72.0f } },
		{ 7, 2, TRUE, { 0.0f, 45.0f, 48.0f }, { 150.0f, 201.0f, 240.0f } },
		{ 15, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ 11, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ 16, 1, FALSE, { 3.0f, 6.0f, 0.0f }, { 51.0f, 51.0f, 51.0f } },
		{ 12, 1, FALSE, { 3.0f, -6.0f, 0.0f }, { 51.0f, 51.0f, 51.0f } },
		{ 27, 0, FALSE, { 12.0f, 15.0f, 0.0f }, { 75.0f, 72.0f, 48.0f } },
		{ 22, 0, FALSE, { 12.0f, -15.0f, 0.0f }, { 75.0f, 72.0f, 48.0f } },
		{ 28, 0, FALSE, { 36.0f, 0.0f, 0.0f }, { 90.0f, 45.0f, 51.0f } },
		{ 23, 0, FALSE, { 36.0f, 0.0f, 0.0f }, { 90.0f, 45.0f, 51.0f } },
	},
	{ 1200.0f, 600.0f, 1200.0f }, /* hit_detect_range */
	(u32*)dNYoshiMain_setup_parts, /* setup_parts */
	(u32*)dNYoshiMain_animlock, /* animlock */
	{ 7, 16, 23, 28, 12 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNYoshiMain_hiddenparts, /* hiddenparts */
	&dNYoshiMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	26, /* joint_rfoot_id */
	82.602f, /* joint_rfoot_rotate */
	21, /* joint_lfoot_id */
	82.602f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0E, 0x42, 0x2C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x0A, 0x42, 0x2C, 0xCC, 0xCD }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNYoshiMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	&dNYoshiMain_textureparts_container, /* textureparts_container */
	31, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNYoshiMain_thrown_status, /* thrown_status */
	18, /* joint_itemlight_id */
	&dNYoshiMain_sprites, /* sprites */
	NULL, /* skeleton */
};
