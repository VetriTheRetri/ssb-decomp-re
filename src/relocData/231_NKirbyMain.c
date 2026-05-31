/* Fighter Main data for relocData file 231 (NKirbyMain) */
/* File size: 1552 bytes (0x610) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dKirbyMainMotion_EggLay_0x0154[];
extern DObjDesc dNKirbyModel_JointTree[];

/* Pre-attributes data (176 words, 0x02C0 bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNKirbyMain_pre+0x0) */
u32 dNKirbyMain_file_handles[1] = {

	(u32)&dKirbyMainMotion_EggLay_0x0154, /* extern -> 0x0154 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNKirbyMain_pre+0x4) */
u32 dNKirbyMain_animlock[2] = {
	0x04209480,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNKirbyMain_pre+0xC) */
u32 dNKirbyMain_setup_parts[2] = {
	0xEF7CFFC0,
	0x00000000,
};

/* @ 0x0014, 96 bytes: FTAttributes.hiddenparts target (was dNKirbyMain_pre+0x14) */
FTHiddenPart dNKirbyMain_hiddenparts[6] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001E, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000007, 0x00000006, 0x00000001, 0x00000001 },
	{ 0x00000013, 0x00000005, 0x00000001, 0x00000002 },
};

/* @ 0x0074, 108 bytes: FTAttributes.modelparts_container target (was dNKirbyMain_pre+0x74) */
FTModelPartDesc *dNKirbyMain_modelparts_container[27] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL,
};

/* @ 0x00E0, 4 bytes: FTAttributes.textureparts_container target (was dNKirbyMain_pre+0xE0) */
FTTexturePart dNKirbyMain_textureparts_container = { 0x06, { 0x00, 0x00 } };

/* @ 0x00E4, 32 bytes: FTAttributes.commonparts_container target (was dNKirbyMain_pre+0xE4) */
FTCommonPartContainer dNKirbyMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNKirbyModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dNKirbyModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x0104, 432 bytes: FTAttributes.thrown_status target (was dNKirbyMain_pre+0x104) */
FTThrownStatus dNKirbyMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
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

/* @ 0x02B4, 12 bytes: FTAttributes.sprites target (was dNKirbyMain_pre+0x2B4) */
FTSprites dNKirbyMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x016600AE, /* emblem */
};

FTAttributes dNKirbyMain_attr = {
	0.94f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.35f, /* walk_speed_mul */
	1.3f, /* traction */
	68.0f, /* dash_speed */
	5.4f, /* dash_decel */
	48.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.45f, /* jump_vel_x */
	0.6f, /* jump_height_mul */
	30.0f, /* jump_height_base */
	0.45f, /* jumpaerial_vel_x */
	0.8f, /* jumpaerial_height */
	0.04f, /* air_accel */
	28.0f, /* air_speed_max_x */
	0.5f, /* air_friction */
	2.4f, /* gravity */
	48.0f, /* tvel_base */
	76.0f, /* tvel_fast */
	6, /* jumps_max */
	1.2f, /* weight */
	24.0f, /* attack1_followup_frames */
	16.0f, /* dash_to_run */
	270.0f, /* shield_size */
	90.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	120.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	160.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	600.0f, /* camera_zoom_base */
	{ 230.0f, 160.0f, 0.0f, 130.0f }, /* map_coll */
	{ 250.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 112.0f, 0.0f }, { 336.0f, 150.0f }, { 80.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
	1.14f, /* halo_size */
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
		{ 5, 1, TRUE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ 6, 2, TRUE, { 0.0f, 30.0f, 0.0f }, { 260.0f, 260.0f, 260.0f } },
		{ 15, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 45.0f, 40.0f, 40.0f } },
		{ 10, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 40.0f, 40.0f } },
		{ 16, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 80.0f, 80.0f } },
		{ 11, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 80.0f, 80.0f } },
		{ 29, 0, FALSE, { 45.0f, 20.0f, 0.0f }, { 160.0f, 50.0f, 110.0f } },
		{ 24, 0, FALSE, { 45.0f, 20.0f, 0.0f }, { 160.0f, 50.0f, 110.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
	{ 800.0f, 400.0f, 800.0f }, /* hit_detect_range */
	(u32*)dNKirbyMain_setup_parts, /* setup_parts */
	(u32*)dNKirbyMain_animlock, /* animlock */
	{ 6, 16, 22, 27, 11 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNKirbyMain_hiddenparts, /* hiddenparts */
	&dNKirbyMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	25, /* joint_rfoot_id */
	61.848f, /* joint_rfoot_rotate */
	20, /* joint_lfoot_id */
	61.848f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0E, 0x42, 0x88, 0xEB, 0x85, 0x00, 0x00, 0x00, 0x09, 0x42, 0x89, 0x52, 0x6F }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNKirbyMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)&dNKirbyMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNKirbyMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dNKirbyMain_sprites, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dNKirbyMain_pad[2] = {
	0x00000000, 0x00000000,
};
