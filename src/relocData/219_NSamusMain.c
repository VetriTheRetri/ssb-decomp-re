/* Figatree motion data for relocData file 219 (NSamusMain) */
/* File size: 1808 bytes (0x710) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dNSamusMain_ptrs1[];
extern u16 dNSamusMain_script0_1[];
extern u16 dNSamusMain_script0_0[];
extern u16 dNSamusMain_script0_2[];
extern u32 dNSamusMain_ptrs2[];
extern u16 dNSamusMain_script2_0[];
extern u16 dNSamusMain_script2_1[];

/* Pointer array at word 0x0000 (1 slots, 1 extern) */
u32 dNSamusMain_ptrs0[1] = {
	0x00390021, /* [0] extern -> 0x0021 */
};

/* Script at word 0x0001 (4 u16s) */
u16 dNSamusMain_script0_0[4] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 594,
	ftAnimEnd(),
	0x0000,
};

/* Script at word 0x0003 (4 u16s) */
u16 dNSamusMain_script0_1[4] = {
	0xFFF8, /* unknown opcode 31 */
	0x03FF, /* End */
	0x0000, 0x0000,
};

/* Script at word 0x0005 (104 u16s) */
u16 dNSamusMain_script0_2[104] = {
	ftAnimEnd(),
	0x0002, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0003, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0003, 0x0000, 0x0003, 0x0000, 0x0002, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0024, 0x0000, 0x0004, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0011, 0x0000, 0x0010, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0012, 0x0000, 0x0011, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0013, 0x0000, 0x0012, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0014, 0x0000, 0x0013, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0015, 0x0000, 0x0014, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0016, 0x0000, 0x0015, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0017, 0x0000, 0x0016, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0018, 0x0000, 0x0010, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0019, 0x0000, 0x0010, 0x0000, 0x0001, 0x0000, 0x0000,
};

/* Pointer array at word 0x0039 (33 slots, 1 intern, 6 extern) */
u32 dNSamusMain_ptrs1[33] = {
	0x003E0700, /* [0] extern -> 0x0700 */
	0x00000000, /* [1] NULL */
	0x00000000, /* [2] NULL */
	0x00000000, /* [3] NULL */
	0x00000000, /* [4] NULL */
	0x00430700, /* [5] extern -> 0x0700 */
	0x00000000, /* [6] NULL */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	0x00480EFC, /* [10] extern -> 0x0EFC */
	0x00000000, /* [11] NULL */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x004D0EFC, /* [15] extern -> 0x0EFC */
	0x00000000, /* [16] NULL */
	0x00000000, /* [17] NULL */
	0x00000000, /* [18] NULL */
	0x00000000, /* [19] NULL */
	0x00521258, /* [20] extern -> 0x1258 */
	0x00000000, /* [21] NULL */
	0x00000000, /* [22] NULL */
	0x00000000, /* [23] NULL */
	0x00000000, /* [24] NULL */
	0x00781258, /* [25] extern -> 0x1258 */
	0x00000000, /* [26] NULL */
	0x00000000, /* [27] NULL */
	0x00000000, /* [28] NULL */
	0x00000000, /* [29] NULL */
	0x00000000, /* [30] NULL */
	0x00000000, /* [31] NULL */
	(u32)dNSamusMain_ptrs1, /* [32] intern -> 0x0039 */
};

/* Data region at word 0x005A (30 words) */
u32 dNSamusMain_data1[30] = {
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

/* Pointer array at word 0x0078 (5 slots, 2 extern) */
u32 dNSamusMain_ptrs2[5] = {
	0x007C0A84, /* [0] extern -> 0x0A84 */
	0x00000000, /* [1] NULL */
	0x00000000, /* [2] NULL */
	0x00000000, /* [3] NULL */
	0x00EE0A84, /* [4] extern -> 0x0A84 */
};

/* Pre-data at word 0x007D (3 words) */
u32 dNSamusMain_pre2[3] = {
	0x00000000, 0x00000000, 0x00000000,
};

/* Script at word 0x0080 (216 u16s) */
u16 dNSamusMain_script2_0[216] = {
	0xFFFF, /* unknown opcode 31 */
	0xFFFF, /* unknown opcode 31 */
	ftAnimEnd(),
	0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA,
};

/* Script at word 0x00EC (4 u16s) */
u16 dNSamusMain_script2_1[4] = {
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};

/* Pointer array at word 0x00EE (1 slots, 1 extern) */
u32 dNSamusMain_ptrs3[1] = {
	0x01A500AE, /* [0] extern -> 0x00AE */
};

FTAttributes dNSamusMain_attr = {
	1.0f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	45.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.34f, /* walk_speed_mul */
	2.0f, /* traction */
	55.0f, /* dash_speed */
	3.0f, /* dash_decel */
	52.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.5f, /* jump_height_mul */
	36.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.94f, /* jumpaerial_height */
	0.03f, /* air_accel */
	28.0f, /* air_speed_max_x */
	0.3f, /* air_friction */
	1.9f, /* gravity */
	42.0f, /* tvel_base */
	67.0f, /* tvel_fast */
	2, /* jumps_max */
	0.92f, /* weight */
	30.0f, /* attack1_followup_frames */
	14.0f, /* dash_to_run */
	330.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	115.0f, /* jostle_width */
	0.0f, /* jostle_x */
	TRUE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	900.0f, /* camera_zoom_base */
	{ 500.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 440.0f, 550.0f }, /* cliffcatch_coll */
	{ 0x02B7, 0x02B7 }, /* dead_fgm_ids */
	0x02B7, /* deadup_sfx */
	0x02B7, /* damage_sfx */
	{ 0x02B7, 0x02B7, 0x02B7 }, /* smash_sfx */
	{ { 107.0f, 0.0f }, { 322.0f, 150.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x02B7, /* heavyget_sfx */
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
		{ 5, 1, TRUE, { 0.0f, -69.0f, -6.0f }, { 88.0f, 64.0f, 86.0f } },
		{ 6, 1, TRUE, { 0.0f, 25.0f, -8.0f }, { 120.0f, 132.0f, 110.0f } },
		{ 13, 2, TRUE, { 0.0f, 0.0f, 0.0f }, { 69.0f, 49.0f, 68.0f } },
		{ 15, 1, FALSE, { 39.0f, 0.0f, 0.0f }, { 147.0f, 56.0f, 56.0f } },
		{ 8, 1, FALSE, { 39.0f, 0.0f, 0.0f }, { 147.0f, 56.0f, 56.0f } },
		{ 16, 1, FALSE, { 84.0f, 0.0f, 0.0f }, { 147.0f, 60.0f, 60.0f } },
		{ 9, 1, FALSE, { 84.0f, 0.0f, 0.0f }, { 147.0f, 47.0f, 44.0f } },
		{ 32, 0, TRUE, { 70.0f, 8.0f, 0.0f }, { 153.0f, 64.0f, 74.0f } },
		{ 27, 0, TRUE, { 70.0f, 8.0f, 0.0f }, { 153.0f, 64.0f, 74.0f } },
		{ 33, 0, FALSE, { 80.0f, 0.0f, 0.0f }, { 203.0f, 56.0f, 64.0f } },
		{ 28, 0, FALSE, { 80.0f, 0.0f, 0.0f }, { 203.0f, 56.0f, 64.0f } },
	},
	{ 1200.0f, 600.0f, 1200.0f }, /* hit_detect_range */
	NULL, /* setup_parts */
	NULL, /* animlock */
	{ 13, 16, 28, 33, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	NULL, /* hiddenparts */
	NULL, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	31, /* joint_rfoot_id */
	176.271f, /* joint_rfoot_rotate */
	26, /* joint_lfoot_id */
	176.271f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0E, 0x42, 0xD3, 0xA3, 0x54, 0x00, 0x00, 0x00, 0x07, 0x42, 0xD3, 0xA6, 0x66 }, /* filler_0x30C */
	100.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	NULL, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	36, /* joint_itemheavy_id */
	NULL, /* thrown_status */
	11, /* joint_itemlight_id */
	NULL, /* sprites */
	NULL, /* skeleton */
};

/* Trailing padding at word 0x01C1 (3 words) */
u32 dNSamusMain_trailing[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
