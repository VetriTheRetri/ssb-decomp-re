/* Fighter Main data for relocData file 237 (NCaptainMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern DObjDesc dNCaptainModel_JointTree[];

/* Pre-attributes data (167 words, 0x029C bytes) */
/* @ 0x0000, 4 bytes: FTAttributes.file_handles target (was dNCaptainMain_pre+0x0) */
u32 dNCaptainMain_file_handles[1] = {

	0x0030001B, /* extern -> 0x006C */
};

/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dNCaptainMain_pre+0x4) */
u32 dNCaptainMain_animlock[2] = {
	0x10412900,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dNCaptainMain_pre+0xC) */
u32 dNCaptainMain_setup_parts[2] = {
	0xFFFFFF80,
	0x00000000,
};

/* @ 0x0014, 64 bytes: FTAttributes.hiddenparts target (was dNCaptainMain_pre+0x14) */
u32 dNCaptainMain_hiddenparts[16] = {
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
	0x0000001D,
	0x00000004,
	0x00000001,
	0x00000000,
};

/* @ 0x0054, 104 bytes: FTAttributes.modelparts_container target (was dNCaptainMain_pre+0x54) */
u32 dNCaptainMain_modelparts_container[26] = {
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

/* @ 0x00BC, 4 bytes: FTAttributes.textureparts_container target (was dNCaptainMain_pre+0xBC) */
u32 dNCaptainMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x00C0, 32 bytes: FTAttributes.commonparts_container target (was dNCaptainMain_pre+0xC0) */
u32 dNCaptainMain_commonparts_container[8] = {
	(u32)&dNCaptainModel_JointTree, /* extern -> 0x2D70 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dNCaptainModel_JointTree, /* extern -> 0x2D70 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x00E0, 432 bytes: FTAttributes.thrown_status target (was dNCaptainMain_pre+0xE0) */
u32 dNCaptainMain_thrown_status[108] = {
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
};

/* @ 0x0290, 12 bytes: FTAttributes.sprites target (was dNCaptainMain_pre+0x290) */
u32 dNCaptainMain_sprites[3] = {
	0x00000000,
	0x00000000,
	0x015D00AE, /* extern -> 0x02B8 */
};

FTAttributes dNCaptainMain_attr = {
	1.05f, /* size */
	85.0f, /* walkslow_anim_length */
	95.0f, /* walkmiddle_anim_length */
	64.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.32f, /* walk_speed_mul */
	1.8f, /* traction */
	80.0f, /* dash_speed */
	6.0f, /* dash_decel */
	70.0f, /* run_speed */
	4.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	1.0f, /* jump_height_mul */
	24.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.04f, /* air_accel */
	30.0f, /* air_speed_max_x */
	0.2f, /* air_friction */
	3.4f, /* gravity */
	60.0f, /* tvel_base */
	96.0f, /* tvel_fast */
	2, /* jumps_max */
	0.96f, /* weight */
	22.0f, /* attack1_followup_frames */
	12.0f, /* dash_to_run */
	290.0f, /* shield_size */
	90.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	115.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	900.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 440.0f, 550.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 107.0f, 0.0f }, { 322.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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
		{ 5, 1, TRUE, { 0.0f, -70.0f, -20.0f }, { 108.0f, 63.0f, 78.0f } },
		{ 6, 1, TRUE, { 0.0f, 20.0f, -20.0f }, { 150.0f, 156.0f, 114.0f } },
		{ 12, 2, TRUE, { 0.0f, 25.0f, 0.0f }, { 75.0f, 75.0f, 75.0f } },
		{ 14, 1, FALSE, { 45.0f, 0.0f, 0.0f }, { 138.0f, 54.0f, 54.0f } },
		{ 8, 1, FALSE, { 45.0f, 0.0f, 0.0f }, { 138.0f, 54.0f, 54.0f } },
		{ 15, 1, FALSE, { 54.0f, 0.0f, 0.0f }, { 138.0f, 50.0f, 50.0f } },
		{ 9, 1, FALSE, { 54.0f, 0.0f, 0.0f }, { 138.0f, 50.0f, 50.0f } },
		{ 25, 0, TRUE, { 78.0f, 0.0f, 3.0f }, { 129.0f, 74.0f, 66.0f } },
		{ 20, 0, TRUE, { 78.0f, 0.0f, 3.0f }, { 129.0f, 74.0f, 66.0f } },
		{ 26, 0, FALSE, { 93.0f, 3.0f, 0.0f }, { 180.0f, 70.0f, 64.0f } },
		{ 21, 0, FALSE, { 93.0f, -3.0f, 0.0f }, { 180.0f, 70.0f, 64.0f } },
	},
	{ 1200.0f, 600.0f, 1200.0f }, /* hit_detect_range */
	(u32*)dNCaptainMain_setup_parts, /* setup_parts */
	(u32*)dNCaptainMain_animlock, /* animlock */
	{ 12, 15, 21, 26, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dNCaptainMain_hiddenparts, /* hiddenparts */
	(FTCommonPartContainer*)dNCaptainMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	176.271f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	176.271f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0xD3, 0xA3, 0x54, 0x00, 0x00, 0x00, 0x07, 0x42, 0xD3, 0xA6, 0x66 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dNCaptainMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dNCaptainMain_textureparts_container, /* textureparts_container */
	29, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dNCaptainMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	(FTSprites*)dNCaptainMain_sprites, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding (3 words) */
u32 dNCaptainMain_pad[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
