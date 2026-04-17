/* Fighter Main data for relocData file 203 (MarioMain) */
/* File size: 1904 bytes (0x770) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dMarioMainMotion_0x0024[];
extern DObjDesc dMarioModel_JointTree[];
extern DObjDesc dMarioModel_JointTree_0x4590[];
extern Gfx dMarioModel_Joint_0x18D8_DisplayList[];
extern Gfx dMarioModel_Joint_0x1DC8_DisplayList[];
extern Gfx dMarioModel_Joint_0x3E60_DisplayList[];
extern Gfx dMarioModel_Joint_0x4278_DisplayList[];
extern u8 dMarioModel_gap_0x0000[];
extern u8 dMarioModel_gap_0x26D0_sub_0x320[];
extern u8 dMarioModel_gap_0x4A60_sub_0x10A0[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1360[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1470[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1560[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1660[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1780[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1890[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1970[];
extern u8 dMarioModel_gap_0x4A60_sub_0x4B0[];
extern u8 dMarioModel_gap_0x4A60_sub_0x690[];
extern u8 dMarioModel_gap_0x4A60_sub_0x8A0[];
extern u8 dMarioModel_gap_0x4A60_sub_0xA80[];
extern u8 dMarioModel_gap_0x4A60_sub_0xBA0[];
extern u8 dMarioModel_gap_0x4A60_sub_0xC80[];
extern u8 dMarioModel_gap_0x7220_sub_0x30[];
extern u8 dMarioModel_gap_0x7220_sub_0x58[];
extern u8 dMarioModel_gap_0x7220_sub_0x8[];
extern u8 dMarioModel_gap_0x7220_sub_0x80[];
extern u16 dMarioModel_palette_0x7200[];
extern WPAttributes dMarioSpecial1_Fireball_WeaponAttributes;
extern DObjDesc dMarioSpecial2_EntryDokanDObjDesc[];

/* Pre-attributes data (266 words, 0x0428 bytes) */
/* @ 0x0000, 12 bytes: FTAttributes.file_handles target (was dMarioMain_pre+0x0) */
u32 dMarioMain_file_handles[3] = {

	(u32)&dMarioMainMotion_0x0024, /* extern -> 0x0024 */
	(u32)&dMarioSpecial2_EntryDokanDObjDesc, /* extern -> 0x0608 */
	(u32)&dMarioSpecial1_Fireball_WeaponAttributes, /* extern -> 0x0000 */
};

/* @ 0x000C, 8 bytes: FTAttributes.animlock target (was dMarioMain_pre+0xC) */
u32 dMarioMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x0014, 8 bytes: FTAttributes.setup_parts target (was dMarioMain_pre+0x14) */
u32 dMarioMain_setup_parts[2] = {
	0xFFFFFF00,
	0x00000000,
};

/* @ 0x001C, 64 bytes: FTAttributes.hiddenparts target (was dMarioMain_pre+0x1C) */
FTHiddenPart dMarioMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001C, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x005C, 80 bytes: FTAttributes.sub_0x05C target (was dMarioMain_pre+0x5C) */
FTModelPart dMarioMain_modelparts_desc_0x05C[4] = {
	{ (Gfx*)&dMarioModel_Joint_0x18D8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dMarioModel_Joint_0x3E60_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dMarioModel_gap_0x4A60_sub_0x8A0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dMarioModel_gap_0x4A60_sub_0xA80, NULL, NULL, NULL, 0x00 },
};

/* @ 0x00AC, 80 bytes: FTAttributes.sub_0x0AC target (was dMarioMain_pre+0xAC) */
FTModelPart dMarioMain_modelparts_desc_0x0AC[4] = {
	{ (Gfx*)&dMarioModel_Joint_0x1DC8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dMarioModel_Joint_0x4278_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dMarioModel_gap_0x4A60_sub_0x4B0, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dMarioModel_gap_0x4A60_sub_0x690, NULL, NULL, NULL, 0x00 },
};

/* @ 0x00FC, 100 bytes: FTAttributes.modelparts_container target (was dMarioMain_pre+0xFC) */
FTModelPartDesc *dMarioMain_modelparts_container[25] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dMarioMain_modelparts_desc_0x05C, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dMarioMain_modelparts_desc_0x0AC, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL,
};

/* @ 0x0160, 4 bytes: FTAttributes.textureparts_container target (was dMarioMain_pre+0x160) */
u32 dMarioMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x0164, 32 bytes: FTAttributes.commonparts_container target (was dMarioMain_pre+0x164) */
FTCommonPartContainer dMarioMain_commonparts_container = {
	{
		{ (DObjDesc*)&dMarioModel_JointTree, (MObjSub***)&dMarioModel_gap_0x0000, (AObjEvent32***)((u8*)dMarioModel_JointTree + 0x480), 0x00 },
		{ (DObjDesc*)&dMarioModel_JointTree_0x4590, (MObjSub***)&dMarioModel_gap_0x26D0_sub_0x320, (AObjEvent32***)((u8*)dMarioModel_JointTree_0x4590 + 0x480), 0x00 },
	},
};

/* @ 0x0184, 432 bytes: FTAttributes.thrown_status target (was dMarioMain_pre+0x184) */
FTThrownStatus dMarioMain_thrown_status[54] = {
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

/* @ 0x0334, 20 bytes: FTAttributes.sub_0x334 target (was dMarioMain_pre+0x334) */
int *dMarioMain_stock_luts[5] = {
	(int*)&dMarioModel_palette_0x7200,
	(int*)&dMarioModel_gap_0x7220_sub_0x8,
	(int*)&dMarioModel_gap_0x7220_sub_0x30,
	(int*)&dMarioModel_gap_0x7220_sub_0x58,
	(int*)&dMarioModel_gap_0x7220_sub_0x80,
};

/* @ 0x0348, 12 bytes: FTAttributes.sprites target (was dMarioMain_pre+0x348) */
FTSprites dMarioMain_sprites = {
	(Sprite*)((u8*)dMarioModel_gap_0x7220_sub_0x80 + 0x30), /* stock_sprite */
	(int**)dMarioMain_stock_luts, /* stock_luts */
	(Sprite*)((u8*)dMarioModel_gap_0x7220_sub_0x80 + 0x228), /* emblem */
};

/* @ 0x0354, 200 bytes: FTAttributes.sub_0x354 target (was dMarioMain_pre+0x354) */
FTSkeleton dMarioMain_skeleton_dls[25] = {
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0xBA0 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0xC80 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1470 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1360 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1560 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x10A0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1470 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1360 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1660 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1780 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1890 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1970 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1780 }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1890 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dMarioModel_gap_0x4A60_sub_0x1970 }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x041C, 12 bytes: FTAttributes.skeleton target (was dMarioMain_pre+0x41C) */
FTSkeleton *dMarioMain_skeleton[3] = {
	(FTSkeleton*)12,
	dMarioMain_skeleton_dls,
	NULL,
};

FTAttributes dMarioMain_attr = {
#if defined(REGION_JP)
	1.0f, /* size */
#else
	1.12f, /* size */
#endif
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.3f, /* walk_speed_mul */
	1.5f, /* traction */
	54.0f, /* dash_speed */
	2.8f, /* dash_decel */
	44.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	26.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.025f, /* air_accel */
	30.0f, /* air_speed_max_x */
	0.2f, /* air_friction */
	2.4f, /* gravity */
	44.0f, /* tvel_base */
	70.0f, /* tvel_fast */
	2, /* jumps_max */
	1.0f, /* weight */
	24.0f, /* attack1_followup_frames */
	14.0f, /* dash_to_run */
	260.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	1600.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	500.0f, /* camera_zoom_base */
	{ 320.0f, 190.0f, 0.0f, 150.0f }, /* map_coll */
	{ 400.0f, 360.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceMarioDead, nSYAudioFGMMarioDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceMarioDeadUp, /* deadup_sfx */
	nSYAudioVoiceMarioDamage, /* damage_sfx */
	{ nSYAudioVoiceMarioSmash1, nSYAudioVoiceMarioSmash2, nSYAudioVoiceMarioSmash3 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceMarioHeavyGet, /* heavyget_sfx */
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
		{ 6, 1, TRUE, { 0.0f, 10.0f, 4.0f }, { 103.0f, 112.0f, 95.0f } },
#if defined(REGION_JP)
		{ 12, 2, TRUE, { 0.0f, 68.0f, 8.0f }, { 148.0f, 160.0f, 138.0f } },
#else
		{ 12, 2, TRUE, { 0.0f, 68.0f, 8.0f }, { 148.0f, 140.0f, 138.0f } },
#endif
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
	(u32*)dMarioMain_setup_parts, /* setup_parts */
	(u32*)dMarioMain_animlock, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dMarioMain_hiddenparts, /* hiddenparts */
	&dMarioMain_commonparts_container, /* commonparts_container */
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
	(FTModelPartContainer*)dMarioMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dMarioMain_textureparts_container, /* textureparts_container */
	28, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dMarioMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dMarioMain_sprites, /* sprites */
	(FTSkeleton**)dMarioMain_skeleton, /* skeleton */
};
