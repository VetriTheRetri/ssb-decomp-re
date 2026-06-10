/* Fighter Main data for relocData file 250 (BossMain) */
/* File size: 1072 bytes (0x430) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern ftMotionCommand dBossMainMotion_Default[];
extern u32 dMasterHandIcon_FTEmblem[];
extern u32 dMasterHandIcon_Stock[];
extern u8 dMasterHandIcon_Stock_tex[];

extern DObjDesc dBossModel_JointTree[];

ftMotionCommand * dBossMain_file_handles[1] = { dBossMainMotion_Default };


/* @ 0x0004, 8 bytes: FTAttributes.animlock target (was dBossMain_pre+0x4) */
u32 dBossMain_animlock[2] = {
	0x04884400,
	0x00000000,
};

/* @ 0x000C, 8 bytes: FTAttributes.setup_parts target (was dBossMain_pre+0xC) */
u32 dBossMain_setup_parts[2] = {
	0xFFFFFF80,
	0x00000000,
};

/* @ 0x0014, 64 bytes: FTAttributes.hiddenparts target (was dBossMain_pre+0x14) */
FTHiddenPart dBossMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x00000005, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0054, 100 bytes: FTAttributes.modelparts_container target (was dBossMain_pre+0x54) */
FTModelPartDesc *dBossMain_modelparts_container[25] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL,
};

/* @ 0x00B8, 32 bytes: FTAttributes.commonparts_container target (was dBossMain_pre+0xB8) */
FTCommonPartContainer dBossMain_commonparts_container = {
	{
		{ (DObjDesc*)&dBossModel_JointTree, NULL, NULL, 0x01 },
		{ (DObjDesc*)&dBossModel_JointTree, NULL, NULL, 0x01 },
	},
};

u32 dBossMain_stock_luts[1] = { (u32)(u8 *)dMasterHandIcon_Stock_tex + 0x88 };


/* @ 0x00DC, 12 bytes: FTAttributes.sprites target (was dBossMain_pre+0xDC) */
FTSprites dBossMain_sprites = {
	(Sprite*)dMasterHandIcon_Stock, /* stock_sprite */
	(int**)dBossMain_stock_luts, /* stock_luts */
	(Sprite*)0xFFFF00AE, /* emblem */
};

FTAttributes dBossMain_attr = {
	1.0f, /* size */
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
	2.0f, /* kneebend_anim_length */
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
	12.0f, /* dash_to_run */
	270.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	800.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	100.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	1200.0f, /* camera_zoom_base */
	{ 200.0f, 100.0f, 0.0f, 120.0f }, /* map_coll */
	{ 250.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* dead_fgm_ids */
	nSYAudioFGMVoiceEnd, /* deadup_sfx */
	nSYAudioFGMVoiceEnd, /* damage_sfx */
	{ nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd, nSYAudioFGMVoiceEnd }, /* smash_sfx */
	{ { 0.0f, 0.0f }, { 150.0f, 150.0f }, { 0.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
	1.0f, /* halo_size */
	{ { 0xFF, 0xFF, 0xFF, 0x00 }, { 0xFF, 0xFF, 0xFF, 0x00 }, { 0xFF, 0xFF, 0xFF, 0x00 } }, /* shade_color */
	{ 0x59, 0x00, 0x00, 0x00 }, /* fog_color */
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
	1, /* is_have_catch */
	1, /* is_have_voice */
	/* damage_coll_descs */
	{
		{ 20, 1, TRUE, { 15.0f, 105.0f, -196.0f }, { 574.0f, 1020.0f, 590.0f } },
		{ 8, 1, TRUE, { 132.0f, -90.0f, 0.0f }, { 210.0f, 461.0f, 240.0f } },
		{ 11, 1, TRUE, { 39.0f, 27.0f, -41.0f }, { 391.0f, 216.0f, 221.0f } },
		{ 13, 1, TRUE, { 208.0f, 28.0f, 19.0f }, { 336.0f, 163.0f, 158.0f } },
		{ 15, 1, TRUE, { 65.0f, 55.0f, 14.0f }, { 348.0f, 169.0f, 192.0f } },
		{ 17, 1, TRUE, { 288.0f, 38.0f, 0.0f }, { 411.0f, 189.0f, 162.0f } },
		{ 19, 1, TRUE, { 58.0f, 60.0f, 0.0f }, { 448.0f, 225.0f, 201.0f } },
		{ 22, 1, TRUE, { 227.0f, 30.0f, 0.0f }, { 319.0f, 191.0f, 162.0f } },
		{ 24, 1, TRUE, { 0.0f, 33.0f, 1.0f }, { 450.0f, 179.0f, 189.0f } },
		{ 26, 1, TRUE, { 199.0f, 28.0f, 0.0f }, { 220.0f, 183.0f, 162.0f } },
		{ 28, 1, TRUE, { 50.0f, 30.0f, 0.0f }, { 370.0f, 162.0f, 162.0f } },
	},
	{ 3600.0f, 900.0f, 2300.0f }, /* hit_detect_range */
	(u32*)dBossMain_setup_parts, /* setup_parts */
	(u32*)dBossMain_animlock, /* animlock */
	{ 8, 12, 16, 21, 25 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dBossMain_hiddenparts, /* hiddenparts */
	&dBossMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	-1, /* joint_rfoot_id */
	60.891f, /* joint_rfoot_rotate */
	-1, /* joint_lfoot_id */
	60.891f, /* joint_lfoot_rotate */
	{ 0xFF, 0xFF, 0xFF, 0xFF, 0x42, 0x0F, 0xA6, 0xE9, 0xFF, 0xFF, 0xFF, 0xFF, 0x42, 0x0F, 0x8B, 0x44 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dBossMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	5, /* joint_itemheavy_id */
	NULL, /* thrown_status */
	-1, /* joint_itemlight_id */
	&dBossMain_sprites, /* sprites */
	NULL, /* skeleton */
};
