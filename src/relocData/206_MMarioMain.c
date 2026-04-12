/* Figatree motion data for relocData file 206 (MMarioMain) */
/* File size: 1520 bytes (0x5F0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dMMarioMain_ptrs2[];
extern u16 dMMarioMain_script0_1[];
extern u16 dMMarioMain_script0_0[];
extern u16 dMMarioMain_script0_2[];
extern u32 dMMarioMain_ptrs1[];
extern u16 dMMarioMain_script0_3[];
extern u16 dMMarioMain_script0_4[];
extern u16 dMMarioMain_script1_0[];

/* Pointer array at word 0x0000 (4 slots, 4 extern) */
u32 dMMarioMain_ptrs0[4] = {
	0x0001000E, /* [0] extern -> 0x000E */
	0x00020009, /* [1] extern -> 0x0009 */
	0x00030182, /* [2] extern -> 0x0182 */
	0x00320000, /* [3] extern -> 0x0000 */
};

/* Script at word 0x0004 (4 u16s) */
u16 dMMarioMain_script0_0[4] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), 20992, 0,
	ftAnimEnd(),
};

/* Script at word 0x0006 (4 u16s) */
u16 dMMarioMain_script0_1[4] = {
	0xFFFF, /* unknown opcode 31 */
	0xFF00, /* unknown opcode 31 */
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0008 (32 u16s) */
u16 dMMarioMain_script0_2[32] = {
	ftAnimEnd(),
	0x0002, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0003, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0003, 0x0000, 0x0003, 0x0000, 0x0002, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x001C, 0x0000, 0x0004, 0x0000, 0x0001, 0x0000, 0x0000,
};

/* Script at word 0x0018 (50 u16s) */
u16 dMMarioMain_script0_3[50] = {
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

/* Script at word 0x0031 (2 u16s) */
u16 dMMarioMain_script0_4[2] = {
	ftAnimBlock0(FT_ANIM_SCAZ),
	ftAnimEnd(),
};

/* Pointer array at word 0x0032 (5 slots, 2 extern) */
u32 dMMarioMain_ptrs1[5] = {
	0x00360782, /* [0] extern -> 0x0782 */
	0x00000000, /* [1] NULL */
	0x00000000, /* [2] NULL */
	0x00000000, /* [3] NULL */
	0x00A60782, /* [4] extern -> 0x0782 */
};

/* Pre-data at word 0x0037 (3 words) */
u32 dMMarioMain_pre1[3] = {
	0x00000000, 0x00000000, 0x00000000,
};

/* Script at word 0x003A (216 u16s) */
u16 dMMarioMain_script1_0[216] = {
	0xFFFF, /* unknown opcode 31 */
	0xFFFF, /* unknown opcode 31 */
	ftAnimEnd(),
	0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B6, 0x0000, 0x00B9,
};

/* Pointer array at word 0x00A6 (4 slots, 1 intern, 3 extern) */
u32 dMMarioMain_ptrs2[4] = {
	0x00A70B34, /* [0] extern -> 0x0B34 */
	0x00A90B40, /* [1] extern -> 0x0B40 */
	(u32)dMMarioMain_ptrs2, /* [2] intern -> 0x00A6 */
	0x01600BBE, /* [3] extern -> 0x0BBE */
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
	{ 0x02B7, 0x02B7 }, /* dead_fgm_ids */
	0x02B7, /* deadup_sfx */
	0x02B7, /* damage_sfx */
	{ 0x02B7, 0x02B7, 0x02B7 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 315.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x02B7, /* heavyget_sfx */
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
	NULL, /* setup_parts */
	NULL, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	NULL, /* hiddenparts */
	NULL, /* commonparts_container */
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
	NULL, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	28, /* joint_itemheavy_id */
	NULL, /* thrown_status */
	17, /* joint_itemlight_id */
	NULL, /* sprites */
	NULL, /* skeleton */
};
