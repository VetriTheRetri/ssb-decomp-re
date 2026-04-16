/* Fighter Main data for relocData file 211 (NFoxMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dFoxMainMotion_0x0000[];
extern u32 dFoxShieldPose_ptrs1[];
extern u16 dFoxShieldPose_script0_17[];
extern u16 dFoxShieldPose_script2_17[];
extern u16 dFoxShieldPose_script3_17[];
extern u16 dFoxShieldPose_script4_17[];
extern u16 dFoxShieldPose_script5_17[];
extern u16 dFoxShieldPose_script6_17[];
extern u16 dFoxShieldPose_script7_17[];
extern u16 dFoxShieldPose_script8_17[];
extern DObjDesc dNFoxModel_JointTree[];

/* Pre-attributes data (169 words, 0x02A4 bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNFoxMain_pre+0x0) */
u32 dNFoxMain_file_handles[1] = {

	(u32)&dFoxMainMotion_0x0000, /* extern -> 0x0000 */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNFoxMain_pre+0x4) */
u32 dNFoxMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNFoxMain_pre+0xC) */
u32 dNFoxMain_setup_parts[2] = {
	0xFFFFFFC0,
	0x00000000,
};

/* @ 0x0014, 64 bytes: FTAttributes.hiddenparts target (was dNFoxMain_pre+0x14) */
u32 dNFoxMain_hiddenparts[16] = {
	0x00000002,
	0x00000000,
	0x00000001,
	0x00000003,
	0x00000001,
	0x00000000,
	0x00000000,
	0x00000003,
	0x00000003,
	0x00000002,
	0x00000001,
	0x00000000,
	0x0000001E,
	0x00000004,
	0x00000001,
	0x00000000,
};

/* @ 0x0054, 108 bytes: FTAttributes.modelparts_container target (was dNFoxMain_pre+0x54) */
u32 dNFoxMain_modelparts_container[27] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x00C0, 8 bytes: FTAttributes.textureparts_container target (was dNFoxMain_pre+0xC0) */
u32 dNFoxMain_textureparts_container[2] = {
	0x0C00000C,
	0x01010000,
};

/* @ 0x00C8, 32 bytes: FTAttributes.commonparts_container target (was dNFoxMain_pre+0xC8) */
u32 dNFoxMain_commonparts_container[8] = {
	(u32)&dNFoxModel_JointTree, /* extern -> 0x2DF8 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dNFoxModel_JointTree, /* extern -> 0x2DF8 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x00E8, 432 bytes: FTAttributes.thrown_status target (was dNFoxMain_pre+0xE8) */
u32 dNFoxMain_thrown_status[108] = {
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0x000000B7,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B7,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0x000000B7,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B7,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BB,
	0xFFFFFFFF,
	0x000000BC,
	0xFFFFFFFF,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B7,
	0x000000BA,
	0xFFFFFFFF,
	0x000000BA,
};

/* @ 0x0298, 12 bytes: FTAttributes.sprites target (was dNFoxMain_pre+0x298) */
u32 dNFoxMain_sprites[3] = {
	0x00000000,
	0x00000000,
	0x015F00AE, /* extern -> 0x02B8 */
};

FTAttributes dNFoxMain_attr = {
	1.0f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	60.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.45f, /* walk_speed_mul */
	2.2f, /* traction */
	80.0f, /* dash_speed */
	8.0f, /* dash_decel */
	60.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.5f, /* jump_vel_x */
	1.0f, /* jump_height_mul */
	23.0f, /* jump_height_base */
	0.5f, /* jumpaerial_vel_x */
	1.1f, /* jumpaerial_height */
	0.03f, /* air_accel */
	36.0f, /* air_speed_max_x */
	0.3f, /* air_friction */
	4.0f, /* gravity */
	60.0f, /* tvel_base */
	96.0f, /* tvel_fast */
	2, /* jumps_max */
	1.0f, /* weight */
	30.0f, /* attack1_followup_frames */
	12.0f, /* dash_to_run */
	280.0f, /* shield_size */
	100.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	700.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 400.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 314.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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
		{ 5, 1, TRUE, { 0.0f, -32.0f, 0.0f }, { 102.0f, 52.0f, 45.0f } },
		{ 6, 1, TRUE, { 0.0f, 48.0f, 0.0f }, { 136.0f, 90.0f, 82.0f } },
		{ 12, 2, TRUE, { 0.0f, 74.0f, 10.0f }, { 136.0f, 144.0f, 122.0f } },
		{ 14, 1, FALSE, { 15.0f, 0.0f, 0.0f }, { 63.0f, 38.0f, 34.0f } },
		{ 8, 1, FALSE, { 15.0f, 0.0f, 0.0f }, { 63.0f, 38.0f, 34.0f } },
		{ 15, 1, FALSE, { 42.0f, 0.0f, 0.0f }, { 92.0f, 38.0f, 34.0f } },
		{ 9, 1, FALSE, { 42.0f, 0.0f, 0.0f }, { 92.0f, 38.0f, 34.0f } },
		{ 24, 0, TRUE, { 54.0f, 0.0f, 0.0f }, { 102.0f, 60.0f, 52.0f } },
		{ 19, 0, TRUE, { 54.0f, 0.0f, 0.0f }, { 102.0f, 60.0f, 52.0f } },
		{ 25, 0, FALSE, { 36.0f, 0.0f, 0.0f }, { 113.0f, 44.0f, 44.0f } },
		{ 20, 0, FALSE, { 36.0f, 0.0f, 0.0f }, { 113.0f, 44.0f, 44.0f } },
	},
	{ 1100.0f, 550.0f, 1100.0f }, /* hit_detect_range */
	(u32*)dNFoxMain_setup_parts, /* setup_parts */
	(u32*)dNFoxMain_animlock, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNFoxMain_hiddenparts, /* hiddenparts */
	(FTCommonPartContainer*)dNFoxMain_commonparts_container, /* commonparts_container */
	(DObjDesc*)((u8*)dFoxShieldPose_script0_17 + 0x10), /* dobj_lookup */
	{
		(AObjEvent32**)((u8*)dFoxShieldPose_ptrs1 + 0x23C),
		(AObjEvent32**)((u8*)dFoxShieldPose_script2_17 + 0x2C),
		(AObjEvent32**)((u8*)dFoxShieldPose_script3_17 + 0x30),
		(AObjEvent32**)((u8*)dFoxShieldPose_script4_17 + 0x2C),
		(AObjEvent32**)((u8*)dFoxShieldPose_script5_17 + 0x2C),
		(AObjEvent32**)((u8*)dFoxShieldPose_script6_17 + 0x30),
		(AObjEvent32**)((u8*)dFoxShieldPose_script7_17 + 0x34),
		(AObjEvent32**)((u8*)dFoxShieldPose_script8_17 + 0x38),
	}, /* shield_anim_joints */
	23, /* joint_rfoot_id */
	89.754f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	89.754f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x87, 0xDD, 0x2F, 0x00, 0x00, 0x00, 0x07, 0x42, 0x86, 0x89, 0xBA }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNFoxMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dNFoxMain_textureparts_container, /* textureparts_container */
	30, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNFoxMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	(FTSprites*)dNFoxMain_sprites, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding (1 words) */
u32 dNFoxMain_pad[1] = {
	0x00000000,
};
