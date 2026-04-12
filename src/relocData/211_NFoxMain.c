/* Figatree motion data for relocData file 211 (NFoxMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u16 dNFoxMain_script0_1[];
extern u16 dNFoxMain_script0_0[];
extern u16 dNFoxMain_script0_2[];
extern u32 dNFoxMain_ptrs1[];
extern u16 dNFoxMain_script0_3[];
extern u16 dNFoxMain_script0_4[];
extern u16 dNFoxMain_script1_0[];
extern u16 dNFoxMain_script1_1[];

/* Pointer array at word 0x0000 (1 slots, 1 extern) */
u32 dNFoxMain_ptrs0[1] = {
	0x00320000, /* [0] extern -> 0x0000 */
};

/* Script at word 0x0001 (4 u16s) */
u16 dNFoxMain_script0_0[4] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 20992, 0,
	ftAnimEnd(),
};

/* Script at word 0x0003 (4 u16s) */
u16 dNFoxMain_script0_1[4] = {
	0xFFFF, /* unknown opcode 31 */
	0xFFC0, /* unknown opcode 31 */
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0005 (32 u16s) */
u16 dNFoxMain_script0_2[32] = {
	ftAnimEnd(),
	0x0002, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0003, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0003, 0x0000, 0x0003, 0x0000, 0x0002, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x001E, 0x0000, 0x0004, 0x0000, 0x0001, 0x0000, 0x0000,
};

/* Script at word 0x0015 (54 u16s) */
u16 dNFoxMain_script0_3[54] = {
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Script at word 0x0030 (4 u16s) */
u16 dNFoxMain_script0_4[4] = {
	ftAnimBlock0(FT_ANIM_SCAZ),
	0x000C, /* End */
	0x0101, 0x0000,
};

/* Pointer array at word 0x0032 (5 slots, 2 extern) */
u32 dNFoxMain_ptrs1[5] = {
	0x00360B7E, /* [0] extern -> 0x0B7E */
	0x00000000, /* [1] NULL */
	0x00000000, /* [2] NULL */
	0x00000000, /* [3] NULL */
	0x00A80B7E, /* [4] extern -> 0x0B7E */
};

/* Pre-data at word 0x0037 (3 words) */
u32 dNFoxMain_pre1[3] = {
	0x00000000, 0x00000000, 0x00000000,
};

/* Script at word 0x003A (216 u16s) */
u16 dNFoxMain_script1_0[216] = {
	0xFFFF, /* unknown opcode 31 */
	0xFFFF, /* unknown opcode 31 */
	ftAnimEnd(),
	0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0x0000, 0x00B7, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B7, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0x0000, 0x00B7, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B7, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B7, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA,
};

/* Script at word 0x00A6 (4 u16s) */
u16 dNFoxMain_script1_1[4] = {
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};

/* Pointer array at word 0x00A8 (1 slots, 1 extern) */
u32 dNFoxMain_ptrs2[1] = {
	0x015F00AE, /* [0] extern -> 0x00AE */
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
	{ 0x02B7, 0x02B7 }, /* dead_fgm_ids */
	0x02B7, /* deadup_sfx */
	0x02B7, /* damage_sfx */
	{ 0x02B7, 0x02B7, 0x02B7 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 314.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x02B7, /* heavyget_sfx */
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
	NULL, /* setup_parts */
	NULL, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	NULL, /* hiddenparts */
	NULL, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	23, /* joint_rfoot_id */
	89.754f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	89.754f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x87, 0xDD, 0x2F, 0x00, 0x00, 0x00, 0x07, 0x42, 0x86, 0x89, 0xBA }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	NULL, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	30, /* joint_itemheavy_id */
	NULL, /* thrown_status */
	17, /* joint_itemlight_id */
	NULL, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding at word 0x017B (1 words) */
u32 dNFoxMain_trailing[1] = {
	0x00000000,
};
