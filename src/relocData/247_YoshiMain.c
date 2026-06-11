/* Fighter Main data for relocData file 247 (YoshiMain) */
/* File size: 2000 bytes (0x7D0) */

#include "relocdata_types.h"
extern u32 dYoshiMainMotion_EggLay_0x0034[];

/* Step 3 forward decls auto-added by migrateStructShadows.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u32 dYoshiModel_FTEmblem[];
extern MObjSub *dYoshiModel_Joint_0x0080_post_sub_0xD7C[];
extern u32 dYoshiModel_Stock[];
extern Gfx dYoshiModel_gap_0xA860[];
extern Gfx dYoshiSpecial2_gap_0x0530[];
extern u8 dYoshiShieldPose_data0[];
extern u8 dYoshiShieldPose_data0_end[];
extern u8 dYoshiShieldPose_shield_anim_joint_1[];
extern u8 dYoshiShieldPose_shield_anim_joint_2[];
extern u8 dYoshiShieldPose_shield_anim_joint_3[];
extern u8 dYoshiShieldPose_shield_anim_joint_4[];
extern u8 dYoshiShieldPose_shield_anim_joint_5[];
extern u8 dYoshiShieldPose_shield_anim_joint_6[];
extern u8 dYoshiShieldPose_shield_anim_joint_7[];
extern AObjEvent32 **dYoshiModel_JointTree_post[];
extern AObjEvent32 **dYoshiModel_JointTree_0x6948_post[];
#include <ft/fttypes.h>

extern u8 dITCommonObject_StarRod_Weapon_data[];
extern DObjDesc dYoshiModel_JointTree[];
extern DObjDesc dYoshiModel_JointTree_0x6948[];
extern Gfx dYoshiModel_Joint_0x2398_DisplayList[];
extern Gfx dYoshiModel_Joint_0x5CF8_DisplayList[];
extern u8 dYoshiModel_Tex_0x9EF0[];
extern u8 dYoshiModel_gap_0x0000[];
extern u8 dYoshiModel_gap_0x0000_sub_0x18[];
extern u8 dYoshiModel_gap_0x38F4_sub_0x1410[];
extern u8 dYoshiModel_gap_0x38F4_sub_0x6E8[];
extern u8 dYoshiModel_gap_0x38F4_sub_0x73C[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x13BC[];
extern u8 dYoshiModel_DL_0x8300[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x1620[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x1A40[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x1CD0[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x1DE0[];
extern u8 dYoshiModel_DL_0x8D10[];
extern u8 dYoshiModel_DL_0x8DC0[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x2050[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x2160[];
extern u8 dYoshiModel_DL_0x9090[];
extern u8 dYoshiModel_DL_0x9220[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x24E0[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x6A4[];
extern u8 dYoshiModel_gap_0x6E70_sub_0x9A8[];
extern u8 dYoshiModel_gap_0x6E70_sub_0xEA0[];
extern u8 dYoshiModel_gap_0xA9D0_sub_0x30[];
extern u8 dYoshiModel_gap_0xA9D0_sub_0x58[];
extern u8 dYoshiModel_gap_0xA9D0_sub_0x8[];
extern u8 dYoshiModel_gap_0xA9D0_sub_0x80[];
extern u8 dYoshiModel_gap_0xA9D0_sub_0xA8[];
extern u16 dYoshiModel_palette_0xA9B0[];
extern u8 dYoshiSpecial2_gap_0x04D8_sub_0x18[];
extern DObjDesc dYoshiSpecial3_EggLay[];

/* Pre-attributes data (287 words, 0x047C bytes) */
/* @ 0x0000, 116 bytes: FTAttributes.file_handles target (was dYoshiMain_pre+0x0) */
u32 dYoshiMain_file_handles[29] = {

	(u32)&dYoshiMainMotion_EggLay_0x0034, /* extern */
	(u32)dYoshiSpecial2_gap_0x0530, /* extern -> 0x0530 */
	(u32)&dYoshiSpecial3_EggLay, /* extern -> 0x0960 */
	(u32)dYoshiModel_gap_0xA860, /* extern -> 0xA860 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00960000,
	0xFF6A0096,
	0x00C85A40,
	0x0C838000,
#if defined(REGION_JP)
	0x0660F134,
#else
	0x0660F934,
#endif
	0x0C800000,
	(u32)&dITCommonObject_StarRod_Weapon_data, /* extern -> 0x5458 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00640000,
	0xFF9C0060,
	0x00A05A40,
	0x1901001E,
#if defined(REGION_JP)
	0xFD6101BC,
#else
	0xFD6111BC,
#endif
	0x00000000,
};

/* @ 0x0074, 8 bytes: FTAttributes.animlock target (was dYoshiMain_pre+0x74) */
u32 dYoshiMain_animlock[2] = {
	0x02204A40,
	0x00000000,
};

/* @ 0x007C, 8 bytes: FTAttributes.setup_parts target (was dYoshiMain_pre+0x7C) */
u32 dYoshiMain_setup_parts[2] = {
	0xFBFFFFE0,
	0x00000000,
};

/* @ 0x0084, 80 bytes: FTAttributes.hiddenparts target (was dYoshiMain_pre+0x84) */
FTHiddenPart dYoshiMain_hiddenparts[5] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001F, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000009, 0x00000007, 0x00000001, 0x00000000 },
};

/* @ 0x00D4, 80 bytes: FTAttributes.sub_0x0D4 target (was dYoshiMain_pre+0xD4) */
FTModelPart dYoshiMain_modelparts_desc_0x0D4[4] = {
	{ (Gfx*)&dYoshiModel_Joint_0x2398_DisplayList, (MObjSub**)dYoshiModel_Joint_0x0080_post_sub_0xD7C, (AObjEvent32**)&dYoshiModel_gap_0x38F4_sub_0x6E8, NULL, 0x00 },
	{ (Gfx*)&dYoshiModel_Joint_0x5CF8_DisplayList, (MObjSub**)&dYoshiModel_gap_0x38F4_sub_0x1410, (AObjEvent32**)&dYoshiModel_gap_0x6E70_sub_0x6A4, NULL, 0x00 },
	{ (Gfx*)&dYoshiModel_gap_0x6E70_sub_0xEA0, (MObjSub**)&dYoshiModel_gap_0x6E70_sub_0x9A8, (AObjEvent32**)&dYoshiModel_gap_0x6E70_sub_0x13BC, NULL, 0x00 },
	{ (Gfx*)&dYoshiModel_gap_0x6E70_sub_0xEA0, (MObjSub**)&dYoshiModel_gap_0x6E70_sub_0x9A8, (AObjEvent32**)&dYoshiModel_gap_0x6E70_sub_0x13BC, NULL, 0x00 },
};

/* @ 0x0124, 112 bytes: FTAttributes.modelparts_container target (was dYoshiMain_pre+0x124) */
FTModelPartDesc *dYoshiMain_modelparts_container[28] = {
	NULL, NULL, NULL, (FTModelPartDesc*)dYoshiMain_modelparts_desc_0x0D4, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL,
};

/* @ 0x0194, 8 bytes: FTAttributes.textureparts_container target (was dYoshiMain_pre+0x194) */
FTTexturePartContainer dYoshiMain_textureparts_container = {
	{
		{ 0x07, { 0x00, 0x00 } },
		{ 0x07, { 0x01, 0x01 } },
	},
};

/* @ 0x019C, 32 bytes: FTAttributes.commonparts_container target (was dYoshiMain_pre+0x19C) */
FTCommonPartContainer dYoshiMain_commonparts_container = {
	{
		{ (DObjDesc*)&dYoshiModel_JointTree, (MObjSub***)&dYoshiModel_gap_0x0000, (AObjEvent32***)dYoshiModel_JointTree_post, 0x01 },
		{ (DObjDesc*)&dYoshiModel_JointTree_0x6948, (MObjSub***)&dYoshiModel_gap_0x38F4_sub_0x73C, (AObjEvent32***)dYoshiModel_JointTree_0x6948_post, 0x01 },
	},
};

/* @ 0x01BC, 432 bytes: FTAttributes.thrown_status target (was dYoshiMain_pre+0x1BC) */
FTThrownStatus dYoshiMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
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

/* @ 0x036C, 24 bytes: FTAttributes.sub_0x36C target (was dYoshiMain_pre+0x36C) */
int *dYoshiMain_stock_luts[6] = {
	(int*)&dYoshiModel_palette_0xA9B0,
	(int*)&dYoshiModel_gap_0xA9D0_sub_0x8,
	(int*)&dYoshiModel_gap_0xA9D0_sub_0x30,
	(int*)&dYoshiModel_gap_0xA9D0_sub_0x58,
	(int*)&dYoshiModel_gap_0xA9D0_sub_0x80,
	(int*)&dYoshiModel_gap_0xA9D0_sub_0xA8,
};

/* @ 0x0384, 12 bytes: FTAttributes.sprites target (was dYoshiMain_pre+0x384) */
FTSprites dYoshiMain_sprites = {
	(Sprite*)dYoshiModel_Stock, /* stock_sprite */
	(int**)dYoshiMain_stock_luts, /* stock_luts */
	(Sprite*)dYoshiModel_FTEmblem, /* emblem */
};

/* @ 0x0390, 224 bytes: FTAttributes.sub_0x390 target (was dYoshiMain_pre+0x390) */
FTSkeleton dYoshiMain_skeleton_dls[28] = {
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_DL_0x8300 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x1620 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x1A40 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x1DE0 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x1CD0 }, 0 },
	{ { (Gfx*)&dYoshiModel_DL_0x8D10 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x1DE0 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x1CD0 }, 0 },
	{ { (Gfx*)&dYoshiModel_DL_0x8DC0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_DL_0x9220 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x24E0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x2050 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x2160 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_DL_0x9090 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x2050 }, 0 },
	{ { (Gfx*)&dYoshiModel_gap_0x6E70_sub_0x2160 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dYoshiModel_DL_0x9090 }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x0470, 12 bytes: FTAttributes.skeleton target (was dYoshiMain_pre+0x470) */
FTSkeleton *dYoshiMain_skeleton[3] = {
	(FTSkeleton*)7,
	dYoshiMain_skeleton_dls,
	NULL,
};

FTAttributes dYoshiMain_attr = {
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
	27.5f, /* jump_height_base */
#if defined(REGION_JP)
	0.35f, /* jumpaerial_vel_x */
#else
	0.4f, /* jumpaerial_vel_x */
#endif
	1.2f, /* jumpaerial_height */
	0.04f, /* air_accel */
#if defined(REGION_JP)
	40.0f, /* air_speed_max_x */
#else
	44.0f, /* air_speed_max_x */
#endif
	0.4f, /* air_friction */
#if defined(REGION_JP)
	2.7f, /* gravity */
#else
	2.8f, /* gravity */
#endif
	#if defined(REGION_JP)
	55.0f, /* tvel_base */
#else
	58.0f, /* tvel_base */
#endif
	88.0f, /* tvel_fast */
	2, /* jumps_max */
	0.93f, /* weight */
	24.0f, /* attack1_followup_frames */
	16.0f, /* dash_to_run */
	300.0f, /* shield_size */
	80.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	175.0f, /* jostle_width */
	90.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	600.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 210.0f }, /* map_coll */
	{ 420.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceYoshiDead, nSYAudioFGMYoshiDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceYoshiDeadUp, /* deadup_sfx */
	nSYAudioVoiceYoshiDamage, /* damage_sfx */
	{ nSYAudioVoiceYoshiSmash1, nSYAudioVoiceYoshiSmash2, nSYAudioVoiceYoshiSmash3 }, /* smash_sfx */
	{ { 100.0f, 0.0f }, { 588.0f, 200.0f }, { 0.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceYoshiHeavyGet, /* heavyget_sfx */
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
	(u32*)dYoshiMain_setup_parts, /* setup_parts */
	(u32*)dYoshiMain_animlock, /* animlock */
	{ 7, 16, 23, 28, 12 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dYoshiMain_hiddenparts, /* hiddenparts */
	&dYoshiMain_commonparts_container, /* commonparts_container */
	(void *)&dYoshiShieldPose_data0, /* dobj_lookup */
	{ (void *)&dYoshiShieldPose_data0_end, (void *)&dYoshiShieldPose_shield_anim_joint_1, (void *)&dYoshiShieldPose_shield_anim_joint_2, (void *)&dYoshiShieldPose_shield_anim_joint_3, (void *)&dYoshiShieldPose_shield_anim_joint_4, (void *)&dYoshiShieldPose_shield_anim_joint_5, (void *)&dYoshiShieldPose_shield_anim_joint_6, (void *)&dYoshiShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	26, /* joint_rfoot_id */
	82.602f, /* joint_rfoot_rotate */
	21, /* joint_lfoot_id */
	82.602f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0E, 0x42, 0x2C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x0A, 0x42, 0x2C, 0xCC, 0xCD }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dYoshiMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	&dYoshiMain_textureparts_container, /* textureparts_container */
	31, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dYoshiMain_thrown_status, /* thrown_status */
	18, /* joint_itemlight_id */
	&dYoshiMain_sprites, /* sprites */
	(FTSkeleton**)dYoshiMain_skeleton, /* skeleton */
};

/* Trailing padding (3 words) */
u32 dYoshiMain_pad[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
