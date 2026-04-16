/* Fighter Main data for relocData file 206 (MMarioMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dMMarioMainMotion_0x001C[];
extern DObjDesc dMMarioModel_JointTree[];
extern u16 dMMarioModel_palette_0x2CD0[];
extern u32 dMarioMainMotion_0x0024[];
extern WPAttributes dMarioSpecial1_Fireball_WeaponAttributes;
extern DObjDesc dMarioSpecial2_EntryDokanDObjDesc[];

/* Pre-attributes data (170 words, 0x02A8 bytes) */
/* @ 0x0000, 16 bytes: FTAttributes.file_handles target (was dMMarioMain_pre+0x0) */
u32 dMMarioMain_file_handles[4] = {

	(u32)((u8*)dMMarioMainMotion_0x001C + 0x1C), /* extern -> 0x0038 */
	(u32)&dMarioMainMotion_0x0024, /* extern -> 0x0024 */
	(u32)&dMarioSpecial2_EntryDokanDObjDesc, /* extern -> 0x0608 */
	(u32)&dMarioSpecial1_Fireball_WeaponAttributes, /* extern -> 0x0000 */
};

/* @ 0x0010, 8 bytes: FTAttributes.animlock target (was dMMarioMain_pre+0x10) */
u32 dMMarioMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x0018, 8 bytes: FTAttributes.setup_parts target (was dMMarioMain_pre+0x18) */
u32 dMMarioMain_setup_parts[2] = {
	0xFFFFFF00,
	0x00000000,
};

/* @ 0x0020, 64 bytes: FTAttributes.hiddenparts target (was dMMarioMain_pre+0x20) */
FTHiddenPart dMMarioMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001C, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0060, 100 bytes: FTAttributes.modelparts_container target (was dMMarioMain_pre+0x60) */
FTModelPartDesc *dMMarioMain_modelparts_container[25] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL,
};

/* @ 0x00C4, 4 bytes: FTAttributes.textureparts_container target (was dMMarioMain_pre+0xC4) */
u32 dMMarioMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x00C8, 32 bytes: FTAttributes.commonparts_container target (was dMMarioMain_pre+0xC8) */
FTCommonPartContainer dMMarioMain_commonparts_container = {
	{
		{ (DObjDesc*)&dMMarioModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dMMarioModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x00E8, 432 bytes: FTAttributes.thrown_status target (was dMMarioMain_pre+0xE8) */
FTThrownStatus dMMarioMain_thrown_status[54] = {
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

/* @ 0x0298, 4 bytes: FTAttributes.sub_0x298 target (was dMMarioMain_pre+0x298) */
int *dMMarioMain_stock_luts[1] = {
	(int*)&dMMarioModel_palette_0x2CD0,
};

/* @ 0x029C, 12 bytes: FTAttributes.sprites target (was dMMarioMain_pre+0x29C) */
FTSprites dMMarioMain_sprites = {
	(Sprite*)((u8*)dMMarioModel_palette_0x2CD0 + 0x30), /* stock_sprite */
	(int**)dMMarioMain_stock_luts, /* stock_luts */
	(Sprite*)((u8*)dMMarioModel_palette_0x2CD0 + 0x228), /* emblem */
};

FTAttributes dMMarioMain_attr = {
	1.0f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.3f, /* walk_speed_mul */
	4.0f, /* traction */
	50.0f, /* dash_speed */
	2.8f, /* dash_decel */
	40.0f, /* run_speed */
	8.0f, /* kneebend_anim_length */
	0.5f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	38.0f, /* jump_height_base */
	0.5f, /* jumpaerial_vel_x */
	1.1f, /* jumpaerial_height */
	0.035f, /* air_accel */
	30.0f, /* air_speed_max_x */
	0.2f, /* air_friction */
	4.8f, /* gravity */
	100.0f, /* tvel_base */
	70.0f, /* tvel_fast */
	2, /* jumps_max */
	1.0f, /* weight */
	24.0f, /* attack1_followup_frames */
	18.0f, /* dash_to_run */
	260.0f, /* shield_size */
	120.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	TRUE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	600.0f, /* camera_zoom_base */
	{ 500.0f, 300.0f, 0.0f, 230.0f }, /* map_coll */
	{ 600.0f, 500.0f }, /* cliffcatch_coll */
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
	1, /* is_have_specialn */
	1, /* is_have_specialairn */
	1, /* is_have_specialhi */
	1, /* is_have_specialairhi */
	1, /* is_have_speciallw */
	1, /* is_have_specialairlw */
	1, /* is_have_catch */
	0, /* is_have_voice */
	/* damage_coll_descs */
	{
		{ 6, 1, TRUE, { 0.0f, 10.0f, 4.0f }, { 103.0f, 112.0f, 95.0f } },
		{ 12, 2, TRUE, { 0.0f, 68.0f, 8.0f }, { 148.0f, 160.0f, 138.0f } },
		{ 14, 1, FALSE, { 15.0f, 0.0f, 0.0f }, { 36.0f, 50.0f, 50.0f } },
		{ 8, 1, FALSE, { 15.0f, 0.0f, 0.0f }, { 36.0f, 50.0f, 50.0f } },
		{ 15, 1, FALSE, { 30.0f, 0.0f, 0.0f }, { 58.0f, 54.0f, 54.0f } },
		{ 9, 1, FALSE, { 30.0f, 0.0f, 0.0f }, { 58.0f, 54.0f, 54.0f } },
		{ 24, 0, FALSE, { 22.0f, 0.0f, 0.0f }, { 58.0f, 67.0f, 67.0f } },
		{ 19, 0, FALSE, { 22.0f, 0.0f, 0.0f }, { 58.0f, 67.0f, 67.0f } },
		{ 25, 0, FALSE, { 28.0f, 0.0f, 0.0f }, { 66.0f, 78.0f, 76.0f } },
		{ 20, 0, FALSE, { 28.0f, 0.0f, 0.0f }, { 66.0f, 78.0f, 76.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
	{ 900.0f, 450.0f, 900.0f }, /* hit_detect_range */
	(u32*)dMMarioMain_setup_parts, /* setup_parts */
	(u32*)dMMarioMain_animlock, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dMMarioMain_hiddenparts, /* hiddenparts */
	&dMMarioMain_commonparts_container, /* commonparts_container */
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
	(FTModelPartContainer*)dMMarioMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dMMarioMain_textureparts_container, /* textureparts_container */
	28, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dMMarioMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dMMarioMain_sprites, /* sprites */
	NULL, /* skeleton */
};
