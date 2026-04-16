/* Fighter Main data for relocData file 239 (NessMain) */
/* File size: 2320 bytes (0x910) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dNessMainMotion_0x0024[];
extern DObjDesc dNessModel_JointTree[];
extern DObjDesc dNessModel_JointTree_0x4FE8[];
extern Vtx dNessModel_JointVerts_Vtx[];
extern Gfx dNessModel_Joint_0x1AF8_DisplayList[];
extern Gfx dNessModel_Joint_0x1B88_DisplayList[];
extern Gfx dNessModel_Joint_0x20E8_DisplayList[];
extern Gfx dNessModel_Joint_0x4470_DisplayList[];
extern Gfx dNessModel_Joint_0x44E8_DisplayList[];
extern Gfx dNessModel_Joint_0x4A70_DisplayList[];
extern DObjDesc dNessModel_PKThunderWaveDObjDesc[];
extern u8 dNessModel_gap_0x2C04_sub_0x1E8[];
extern u8 dNessModel_gap_0x2C04_sub_0x20C[];
extern u8 dNessModel_gap_0x2C04_sub_0x8A4[];
extern u8 dNessModel_gap_0x553C_sub_0x1224[];
extern u8 dNessModel_gap_0x553C_sub_0x14A4[];
extern u8 dNessModel_gap_0x553C_sub_0x1614[];
extern u8 dNessModel_gap_0x553C_sub_0x1854[];
extern u8 dNessModel_gap_0x553C_sub_0x1F0[];
extern u8 dNessModel_gap_0x553C_sub_0x25BC[];
extern u8 dNessModel_gap_0x553C_sub_0x275C[];
extern u8 dNessModel_gap_0x553C_sub_0x27E4[];
extern u8 dNessModel_gap_0x553C_sub_0x2834[];
extern u8 dNessModel_gap_0x553C_sub_0x314[];
extern u8 dNessModel_gap_0x553C_sub_0x348C[];
extern u8 dNessModel_gap_0x553C_sub_0x3604[];
extern u8 dNessModel_gap_0x553C_sub_0x464[];
extern u8 dNessModel_gap_0x553C_sub_0x5E4[];
extern u8 dNessModel_gap_0x553C_sub_0x734[];
extern u8 dNessModel_gap_0x553C_sub_0x874[];
extern u8 dNessModel_gap_0x553C_sub_0x984[];
extern u8 dNessModel_gap_0x553C_sub_0xAC4[];
extern u8 dNessModel_gap_0x553C_sub_0xBD4[];
extern u8 dNessModel_gap_0xC100_sub_0x30[];
extern u8 dNessModel_gap_0xC100_sub_0x58[];
extern u8 dNessModel_gap_0xC100_sub_0x8[];
extern u16 dNessModel_palette_0xC0E0[];
extern DObjDesc dNessSpecial2_PsychicMagnetDObjDesc[];

/* Pre-attributes data (367 words, 0x05BC bytes) */
/* @ 0x0000, 116 bytes: FTAttributes.file_handles target (was dNessMain_pre+0x0) */
u32 dNessMain_file_handles[29] = {

	(u32)&dNessMainMotion_0x0024, /* extern -> 0x0024 */
	(u32)&dNessSpecial2_PsychicMagnetDObjDesc, /* extern -> 0x09A8 */
	0x00030000, /* extern -> 0x0000 */
	(u32)&dNessModel_gap_0x553C_sub_0x275C, /* extern -> 0x7C98 */
	(u32)&dNessModel_gap_0x553C_sub_0x25BC, /* extern -> 0x7AF8 */
	(u32)&dNessModel_gap_0x553C_sub_0x27E4, /* extern -> 0x7D20 */
	(u32)&dNessModel_gap_0x553C_sub_0x2834, /* extern -> 0x7D70 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00640000,
	0xFF9C0064,
	0x00961900,
	0x07818800,
	0x0160B91C,
	0x0C800000,
	(u32)&dNessModel_gap_0x553C_sub_0x3604, /* extern -> 0x8B40 */
	(u32)&dNessModel_gap_0x553C_sub_0x348C, /* extern -> 0x89C8 */
	0x00000000,
	0x00000000,
	0x0000FF9C,
	0x00000000,
	0x00000000,
	0x00320000,
	0xFFCE0032,
	0x00641900,
	0x0780C800,
	0x0140B984,
	0x0C800000,
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
	{ (Gfx*)&dNessModel_Joint_0x1B88_DisplayList, (MObjSub**)((u8*)dNessModel_JointVerts_Vtx + 0x698), (AObjEvent32**)&dNessModel_gap_0x2C04_sub_0x1E8, NULL, 0x00 },
	{ (Gfx*)&dNessModel_Joint_0x44E8_DisplayList, (MObjSub**)&dNessModel_gap_0x2C04_sub_0x8A4, (AObjEvent32**)&dNessModel_gap_0x553C_sub_0x1F0, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1224, NULL, NULL, NULL, 0x40 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1224, NULL, NULL, NULL, 0x40 },
};

/* @ 0x0114, 120 bytes: FTAttributes.sub_0x114 target (was dNessMain_pre+0x114) */
FTModelPart dNessMain_modelparts_desc_0x114[6] = {
	{ (Gfx*)&dNessModel_Joint_0x1AF8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_Joint_0x4470_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x5E4, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x734, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0xAC4, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0xBD4, NULL, NULL, NULL, 0x00 },
};

/* @ 0x018C, 120 bytes: FTAttributes.sub_0x18C target (was dNessMain_pre+0x18C) */
FTModelPart dNessMain_modelparts_desc_0x18C[6] = {
	{ (Gfx*)&dNessModel_Joint_0x20E8_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_Joint_0x4A70_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x314, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x464, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x874, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x984, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0204, 80 bytes: FTAttributes.sub_0x204 target (was dNessMain_pre+0x204) */
FTModelPart dNessMain_modelparts_desc_0x204[4] = {
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1614, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1614, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1854, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x1854, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0254, 40 bytes: FTAttributes.sub_0x254 target (was dNessMain_pre+0x254) */
FTModelPart dNessMain_modelparts_desc_0x254[2] = {
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x14A4, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dNessModel_gap_0x553C_sub_0x14A4, NULL, NULL, NULL, 0x00 },
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
u32 dNessMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x02EC, 32 bytes: FTAttributes.commonparts_container target (was dNessMain_pre+0x2EC) */
FTCommonPartContainer dNessMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNessModel_JointTree, (MObjSub***)&dNessModel_JointVerts_Vtx, (AObjEvent32***)((u8*)dNessModel_JointTree + 0x4D0), 0x00 },
		{ (DObjDesc*)&dNessModel_JointTree_0x4FE8, (MObjSub***)&dNessModel_gap_0x2C04_sub_0x20C, (AObjEvent32***)((u8*)dNessModel_JointTree_0x4FE8 + 0x4D8), 0x00 },
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
	(Sprite*)((u8*)dNessModel_gap_0xC100_sub_0x58 + 0x30), /* stock_sprite */
	(int**)dNessMain_stock_luts, /* stock_luts */
	(Sprite*)((u8*)dNessModel_gap_0xC100_sub_0x58 + 0x220), /* emblem */
};

/* @ 0x04D8, 216 bytes: FTAttributes.sub_0x4D8 target (was dNessMain_pre+0x4D8) */
FTSkeleton dNessMain_skeleton_dls[27] = {
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0x2D0) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0x3A0) }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xA80) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0x970) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xB60) }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0x710) }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xA80) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0x970) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xC40) }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xD50) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xE60) }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xF40) }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xD50) }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xE60) }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)((u8*)dNessModel_PKThunderWaveDObjDesc + 0xF40) }, 0 },
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
	{ 0x01C9, 0x0125 }, /* dead_fgm_ids */
	0x01BF, /* deadup_sfx */
	0x01C1, /* damage_sfx */
	{ 0x01BB, 0x01BC, 0x01BD }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x01C3, /* heavyget_sfx */
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
	(FTModelPartContainer*)dNessMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dNessMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNessMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dNessMain_sprites, /* sprites */
	(FTSkeleton**)dNessMain_skeleton, /* skeleton */
};

/* Trailing padding (3 words) */
u32 dNessMain_pad[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
