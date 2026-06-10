/* Fighter Main data for relocData file 234 (NPurinMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u32 dMasterHandIcon_FTEmblem[];
extern ftMotionCommand dPurinMainMotion_EggLay_0x0034[];
extern u8 dPurinShieldPose_data0[];
extern u8 dPurinShieldPose_data0_end[];
extern u8 dPurinShieldPose_shield_anim_joint_1[];
extern u8 dPurinShieldPose_shield_anim_joint_2[];
extern u8 dPurinShieldPose_shield_anim_joint_3[];
extern u8 dPurinShieldPose_shield_anim_joint_4[];
extern u8 dPurinShieldPose_shield_anim_joint_5[];
extern u8 dPurinShieldPose_shield_anim_joint_6[];
extern u8 dPurinShieldPose_shield_anim_joint_7[];
#include <ft/fttypes.h>

extern DObjDesc dNPurinModel_JointTree[];

ftMotionCommand * dNPurinMain_file_handles[1] = { dPurinMainMotion_EggLay_0x0034 };


/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNPurinMain_pre+0x4) */
u32 dNPurinMain_animlock[2] = {
	0x04412900,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNPurinMain_pre+0xC) */
u32 dNPurinMain_setup_parts[2] = {
	0xEFF9FF80,
	0x00000000,
};

/* @ 0x0014, 64 bytes: FTAttributes.hiddenparts target (was dNPurinMain_pre+0x14) */
FTHiddenPart dNPurinMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001D, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0054, 104 bytes: FTAttributes.modelparts_container target (was dNPurinMain_pre+0x54) */
FTModelPartDesc *dNPurinMain_modelparts_container[26] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL,
};

/* @ 0x00BC, 8 bytes: FTAttributes.textureparts_container target (was dNPurinMain_pre+0xBC) */
FTTexturePartContainer dNPurinMain_textureparts_container = {
	{
		{ 0x06, { 0x00, 0x00 } },
		{ 0x06, { 0x01, 0x01 } },
	},
};

/* @ 0x00C4, 32 bytes: FTAttributes.commonparts_container target (was dNPurinMain_pre+0xC4) */
FTCommonPartContainer dNPurinMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNPurinModel_JointTree, NULL, NULL, 0x00 },
		{ (DObjDesc*)&dNPurinModel_JointTree, NULL, NULL, 0x00 },
	},
};

/* @ 0x00E4, 432 bytes: FTAttributes.thrown_status target (was dNPurinMain_pre+0xE4) */
FTThrownStatus dNPurinMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
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

/* @ 0x0294, 12 bytes: FTAttributes.sprites target (was dNPurinMain_pre+0x294) */
FTSprites dNPurinMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)0x015E00AE, /* emblem */
};

FTAttributes dNPurinMain_attr = {
	1.05f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.28f, /* walk_speed_mul */
	1.1f, /* traction */
	50.0f, /* dash_speed */
	3.0f, /* dash_decel */
	42.0f, /* run_speed */
	6.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	20.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.7f, /* jumpaerial_height */
	0.07f, /* air_accel */
	35.0f, /* air_speed_max_x */
	1.0f, /* air_friction */
	2.0f, /* gravity */
	38.0f, /* tvel_base */
	60.5f, /* tvel_fast */
	6, /* jumps_max */
	1.2f, /* weight */
	24.0f, /* attack1_followup_frames */
	18.0f, /* dash_to_run */
	400.0f, /* shield_size */
	220.0f, /* shield_break_vel_y */
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
	{ { 118.0f, 0.0f }, { 350.0f, 150.0f }, { 80.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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
		{ 5, 1, TRUE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ 6, 2, TRUE, { 0.0f, 30.0f, 0.0f }, { 260.0f, 260.0f, 260.0f } },
		{ 14, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 45.0f, 40.0f, 40.0f } },
		{ 10, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 40.0f, 40.0f } },
		{ 15, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 80.0f, 80.0f } },
		{ 11, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 80.0f, 80.0f } },
		{ 28, 0, FALSE, { 45.0f, 20.0f, 0.0f }, { 160.0f, 50.0f, 110.0f } },
		{ 23, 0, FALSE, { 45.0f, 20.0f, 0.0f }, { 160.0f, 50.0f, 110.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
	{ 900.0f, 450.0f, 900.0f }, /* hit_detect_range */
	(u32*)dNPurinMain_setup_parts, /* setup_parts */
	(u32*)dNPurinMain_animlock, /* animlock */
	{ 6, 15, 21, 26, 11 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNPurinMain_hiddenparts, /* hiddenparts */
	&dNPurinMain_commonparts_container, /* commonparts_container */
	(void *)&dPurinShieldPose_data0, /* dobj_lookup */
	{ (void *)&dPurinShieldPose_data0_end, (void *)&dPurinShieldPose_shield_anim_joint_1, (void *)&dPurinShieldPose_shield_anim_joint_2, (void *)&dPurinShieldPose_shield_anim_joint_3, (void *)&dPurinShieldPose_shield_anim_joint_4, (void *)&dPurinShieldPose_shield_anim_joint_5, (void *)&dPurinShieldPose_shield_anim_joint_6, (void *)&dPurinShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	61.848f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	61.848f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x88, 0xEB, 0x85, 0x00, 0x00, 0x00, 0x09, 0x42, 0x89, 0x52, 0x6F }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNPurinMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	&dNPurinMain_textureparts_container, /* textureparts_container */
	29, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNPurinMain_thrown_status, /* thrown_status */
	16, /* joint_itemlight_id */
	&dNPurinMain_sprites, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dNPurinMain_pad[2] = {
	0x00000000, 0x00000000,
};
