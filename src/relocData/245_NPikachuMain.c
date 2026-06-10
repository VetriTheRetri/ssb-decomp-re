/* Fighter Main data for relocData file 245 (NPikachuMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */
extern u8 dPikachuShieldPose_data0[];
extern u8 dPikachuShieldPose_data0_end[];
extern u8 dPikachuShieldPose_shield_anim_joint_1[];
extern u8 dPikachuShieldPose_shield_anim_joint_2[];
extern u8 dPikachuShieldPose_shield_anim_joint_3[];
extern u8 dPikachuShieldPose_shield_anim_joint_4[];
extern u8 dPikachuShieldPose_shield_anim_joint_5[];
extern u8 dPikachuShieldPose_shield_anim_joint_6[];
extern u8 dPikachuShieldPose_shield_anim_joint_7[];
extern u32 dMasterHandIcon_FTEmblem[];
extern u32 dPikachuMainMotion_Idle_0x0010[];
#include <ft/fttypes.h>

extern DObjDesc dNPikachuModel_JointTree[];
extern DObjDesc dPikachuSpecial2_UnkDObjDesc[];

/* Pre-attributes data (170 words, 0x02A8 bytes) */
/* @ 0x0000, 8 bytes: FTAttributes.file_handles target (was dNPikachuMain_pre+0x0) */
u32 dNPikachuMain_file_handles[2] = {

	(u32)&dPikachuMainMotion_Idle_0x0010, /* extern -> 0x0010 */
	(u32)&dPikachuSpecial2_UnkDObjDesc, /* extern -> 0x0800 */
};

/* @ 0x0008, 8 bytes: FTAttributes.animlock target (was dNPikachuMain_pre+0x8) */
u32 dNPikachuMain_animlock[2] = {
	0x08092900,
	0x00000000,
};

/* @ 0x0010, 8 bytes: FTAttributes.setup_parts target (was dNPikachuMain_pre+0x10) */
u32 dNPikachuMain_setup_parts[2] = {
	0xFFFFFFC0,
	0x00000000,
};

/* @ 0x0018, 64 bytes: FTAttributes.hiddenparts target (was dNPikachuMain_pre+0x18) */
FTHiddenPart dNPikachuMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001E, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0058, 108 bytes: FTAttributes.modelparts_container target (was dNPikachuMain_pre+0x58) */
FTModelPartDesc *dNPikachuMain_modelparts_container[27] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL,
};

/* @ 0x00C4, 8 bytes: FTAttributes.textureparts_container target (was dNPikachuMain_pre+0xC4) */
FTTexturePartContainer dNPikachuMain_textureparts_container = {
	{
		{ 0x0B, { 0x00, 0x00 } },
		{ 0x0B, { 0x01, 0x01 } },
	},
};

/* @ 0x00CC, 32 bytes: FTAttributes.commonparts_container target (was dNPikachuMain_pre+0xCC) */
FTCommonPartContainer dNPikachuMain_commonparts_container = {
	{
		{ (DObjDesc*)&dNPikachuModel_JointTree, NULL, NULL, 0x01 },
		{ (DObjDesc*)&dNPikachuModel_JointTree, NULL, NULL, 0x01 },
	},
};

/* @ 0x00EC, 432 bytes: FTAttributes.thrown_status target (was dNPikachuMain_pre+0xEC) */
FTThrownStatus dNPikachuMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
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

/* @ 0x029C, 12 bytes: FTAttributes.sprites target (was dNPikachuMain_pre+0x29C) */
FTSprites dNPikachuMain_sprites = {
	NULL, /* stock_sprite */
	NULL, /* stock_luts */
	(Sprite*)dMasterHandIcon_FTEmblem, /* emblem */
};

FTAttributes dNPikachuMain_attr = {
	0.95f, /* size */
	60.0f, /* walkslow_anim_length */
	30.0f, /* walkmiddle_anim_length */
	30.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.42f, /* walk_speed_mul */
	2.0f, /* traction */
	60.0f, /* dash_speed */
	4.5f, /* dash_decel */
	54.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.67f, /* jump_height_mul */
	37.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	1.0f, /* jumpaerial_height */
	0.04f, /* air_accel */
	34.0f, /* air_speed_max_x */
	0.3f, /* air_friction */
	3.0f, /* gravity */
	52.0f, /* tvel_base */
	83.0f, /* tvel_fast */
	2, /* jumps_max */
	1.16f, /* weight */
	24.0f, /* attack1_followup_frames */
	10.0f, /* dash_to_run */
	288.0f, /* shield_size */
	100.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	115.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	150.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	600.0f, /* camera_zoom_base */
	{ 300.0f, 150.0f, 0.0f, 140.0f }, /* map_coll */
	{ 400.0f, 280.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 78.0f, 0.0f }, { 230.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
	1.1f, /* halo_size */
	{ { 0xFF, 0xFF, 0xFF, 0x50 }, { 0x00, 0x00, 0x00, 0x50 }, { 0x00, 0x00, 0x00, 0x00 } }, /* shade_color */
	{ 0xFF, 0x00, 0x00, 0x00 }, /* fog_color */
	1, /* is_have_attack11 */
	0, /* is_have_attack12 */
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
		{ 5, 1, TRUE, { 0.0f, -3.0f, 0.0f }, { 200.0f, 96.0f, 165.0f } },
		{ 6, 1, TRUE, { 0.0f, 0.0f, 10.0f }, { 212.0f, 129.0f, 178.0f } },
		{ 11, 2, TRUE, { 0.0f, 30.0f, 12.0f }, { 191.0f, 129.0f, 203.0f } },
		{ 17, 1, FALSE, { 0.0f, 0.0f, -6.0f }, { 38.0f, 38.0f, 38.0f } },
		{ 9, 1, FALSE, { 0.0f, 0.0f, 6.0f }, { 38.0f, 38.0f, 38.0f } },
		{ 18, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 31.0f, 24.0f, 24.0f } },
		{ 18, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 31.0f, 24.0f, 24.0f } },
		{ 25, 0, FALSE, { 0.0f, 9.0f, -6.0f }, { 96.0f, 69.0f, 60.0f } },
		{ 20, 0, FALSE, { 0.0f, 9.0f, 6.0f }, { 96.0f, 69.0f, 60.0f } },
		{ 26, 0, FALSE, { 43.0f, 3.0f, 0.0f }, { 69.0f, 45.0f, 45.0f } },
		{ 21, 0, FALSE, { 43.0f, 3.0f, 0.0f }, { 69.0f, 45.0f, 45.0f } },
	},
	{ 800.0f, 400.0f, 800.0f }, /* hit_detect_range */
	(u32*)dNPikachuMain_setup_parts, /* setup_parts */
	(u32*)dNPikachuMain_animlock, /* animlock */
	{ 11, 18, 21, 26, 10 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNPikachuMain_hiddenparts, /* hiddenparts */
	&dNPikachuMain_commonparts_container, /* commonparts_container */
	(void *)&dPikachuShieldPose_data0, /* dobj_lookup */
	{ (void *)&dPikachuShieldPose_data0_end, (void *)&dPikachuShieldPose_shield_anim_joint_1, (void *)&dPikachuShieldPose_shield_anim_joint_2, (void *)&dPikachuShieldPose_shield_anim_joint_3, (void *)&dPikachuShieldPose_shield_anim_joint_4, (void *)&dPikachuShieldPose_shield_anim_joint_5, (void *)&dPikachuShieldPose_shield_anim_joint_6, (void *)&dPikachuShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	79.671f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	79.671f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x10, 0x41, 0xD5, 0xF5, 0xC3, 0x00, 0x00, 0x00, 0x08, 0x41, 0xD5, 0xF5, 0xC3 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNPikachuMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	&dNPikachuMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNPikachuMain_thrown_status, /* thrown_status */
	12, /* joint_itemlight_id */
	&dNPikachuMain_sprites, /* sprites */
	NULL, /* skeleton */
};
