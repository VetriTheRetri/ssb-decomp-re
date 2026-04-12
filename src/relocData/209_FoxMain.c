/* Figatree motion data for relocData file 209 (FoxMain) */
/* File size: 1984 bytes (0x7C0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dFoxMain_ptrs1[];
extern u16 dFoxMain_script0_0[];

/* Pointer array at word 0x0000 (110 slots, 3 intern, 20 extern) */
u32 dFoxMain_ptrs0[110] = {
	0x00010000, /* [0] extern -> 0x0000 */
	0x000200AC, /* [1] extern -> 0x00AC */
	0x00030B0C, /* [2] extern -> 0x0B0C */
	0x00180000, /* [3] extern -> 0x0000 */
	0x10425200, /* [4] */
	0x00000000, /* [5] NULL */
	0xFFFFFFC0, /* [6] */
	0x00000000, /* [7] NULL */
	0x00000002, /* [8] */
	0x00000000, /* [9] NULL */
	0x00000001, /* [10] */
	0x00000003, /* [11] */
	0x00000001, /* [12] */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x00000003, /* [15] */
	0x00000003, /* [16] */
	0x00000002, /* [17] */
	0x00000001, /* [18] */
	0x00000000, /* [19] NULL */
	0x0000001E, /* [20] */
	0x00000004, /* [21] */
	0x00000001, /* [22] */
	0x00000000, /* [23] NULL */
	0x001D077E, /* [24] extern -> 0x077E */
	0x00000000, /* [25] NULL */
	0x00000000, /* [26] NULL */
	0x00000000, /* [27] NULL */
	0x00000000, /* [28] NULL */
	0x002212C8, /* [29] extern -> 0x12C8 */
	0x00000000, /* [30] NULL */
	0x00000000, /* [31] NULL */
	0x00000000, /* [32] NULL */
	0x00000000, /* [33] NULL */
	0x0027180C, /* [34] extern -> 0x180C */
	0x00000000, /* [35] NULL */
	0x00000000, /* [36] NULL */
	0x00000000, /* [37] NULL */
	0x00000000, /* [38] NULL */
	0x002C1850, /* [39] extern -> 0x1850 */
	0x00000000, /* [40] NULL */
	0x00000000, /* [41] NULL */
	0x00000000, /* [42] NULL */
	0x00000000, /* [43] NULL */
	0x003108C6, /* [44] extern -> 0x08C6 */
	0x00000000, /* [45] NULL */
	0x00000000, /* [46] NULL */
	0x00000000, /* [47] NULL */
	0x00000000, /* [48] NULL */
	0x003613F0, /* [49] extern -> 0x13F0 */
	0x00000000, /* [50] NULL */
	0x00000000, /* [51] NULL */
	0x00000000, /* [52] NULL */
	0x00000000, /* [53] NULL */
	0x003B1774, /* [54] extern -> 0x1774 */
	0x00000000, /* [55] NULL */
	0x00000000, /* [56] NULL */
	0x00000000, /* [57] NULL */
	0x00000000, /* [58] NULL */
	0x004017B8, /* [59] extern -> 0x17B8 */
	0x00000000, /* [60] NULL */
	0x00000000, /* [61] NULL */
	0x00000000, /* [62] NULL */
	0x00000000, /* [63] NULL */
	0x004500FC, /* [64] extern -> 0x00FC */
	0x00000000, /* [65] NULL */
	0x00000000, /* [66] NULL */
	0x00000000, /* [67] NULL */
	0x00000000, /* [68] NULL */
	0x006700FC, /* [69] extern -> 0x00FC */
	0x00000000, /* [70] NULL */
	0x00000000, /* [71] NULL */
	0x00000000, /* [72] NULL */
	0x00000000, /* [73] NULL */
	0x00000000, /* [74] NULL */
	0x00000000, /* [75] NULL */
	0x00000000, /* [76] NULL */
	0x00000000, /* [77] NULL */
	0x00000000, /* [78] NULL */
	0x00000000, /* [79] NULL */
	0x00560018, /* [80] intern -> 0x0018 */
	0x00000000, /* [81] NULL */
	0x00000000, /* [82] NULL */
	0x00000000, /* [83] NULL */
	0x00000000, /* [84] NULL */
	0x00000000, /* [85] NULL */
	0x0057002C, /* [86] intern -> 0x002C */
	0x00E00040, /* [87] intern -> 0x0040 */
	0x00000000, /* [88] NULL */
	0x00000000, /* [89] NULL */
	0x00000000, /* [90] NULL */
	0x00000000, /* [91] NULL */
	0x00000000, /* [92] NULL */
	0x00000000, /* [93] NULL */
	0x00000000, /* [94] NULL */
	0x00000000, /* [95] NULL */
	0x00000000, /* [96] NULL */
	0x00000000, /* [97] NULL */
	0x00000000, /* [98] NULL */
	0x00000000, /* [99] NULL */
	0x00000000, /* [100] NULL */
	0x0C00000C, /* [101] */
	0x01010000, /* [102] */
	0x00680A4E, /* [103] extern -> 0x0A4E */
	0x00690000, /* [104] extern -> 0x0000 */
	0x006B0B84, /* [105] extern -> 0x0B84 */
	0x00000000, /* [106] NULL */
	0x006C1544, /* [107] extern -> 0x1544 */
	0x006D0C4C, /* [108] extern -> 0x0C4C */
	0x00DB1678, /* [109] extern -> 0x1678 */
};

/* Pre-data at word 0x006E (1 words) */
u32 dFoxMain_pre0[1] = {
	0x00000000,
};

/* Script at word 0x006F (216 u16s) */
u16 dFoxMain_script0_0[216] = {
	0xFFFF, /* unknown opcode 31 */
	0xFFFF, /* unknown opcode 31 */
	ftAnimEnd(),
	0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0x0000, 0x00B7, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B7, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0x0000, 0x00B7, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B7, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BB, 0xFFFF, 0xFFFF, 0x0000, 0x00BC, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA, 0x0000, 0x00B7, 0x0000, 0x00BA, 0xFFFF, 0xFFFF, 0x0000, 0x00BA,
};

/* Pointer array at word 0x00DB (63 slots, 2 intern, 22 extern) */
u32 dFoxMain_ptrs1[63] = {
	0x00DC1EE0, /* [0] extern -> 0x1EE0 */
	0x00DD1EEA, /* [1] extern -> 0x1EEA */
	0x00DE1EF4, /* [2] extern -> 0x1EF4 */
	0x00DF1EFE, /* [3] extern -> 0x1EFE */
	0x00E11F0A, /* [4] extern -> 0x1F0A */
	(u32)dFoxMain_ptrs1, /* [5] intern -> 0x00DB */
	0x00E41F82, /* [6] extern -> 0x1F82 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	0x00E61890, /* [9] extern -> 0x1890 */
	0x00000000, /* [10] NULL */
	0x00EA18C8, /* [11] extern -> 0x18C8 */
	0x00000000, /* [12] NULL */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	0x00EC1A88, /* [15] extern -> 0x1A88 */
	0x00000000, /* [16] NULL */
	0x00EE1A44, /* [17] extern -> 0x1A44 */
	0x00000000, /* [18] NULL */
	0x00F21AC4, /* [19] extern -> 0x1AC4 */
	0x00000000, /* [20] NULL */
	0x00000000, /* [21] NULL */
	0x00000000, /* [22] NULL */
	0x00F619AC, /* [23] extern -> 0x19AC */
	0x00000000, /* [24] NULL */
	0x00000000, /* [25] NULL */
	0x00000000, /* [26] NULL */
	0x00F81A88, /* [27] extern -> 0x1A88 */
	0x00000000, /* [28] NULL */
	0x00FA1A44, /* [29] extern -> 0x1A44 */
	0x00000000, /* [30] NULL */
	0x01001B04, /* [31] extern -> 0x1B04 */
	0x00000000, /* [32] NULL */
	0x00000000, /* [33] NULL */
	0x00000000, /* [34] NULL */
	0x00000000, /* [35] NULL */
	0x00000000, /* [36] NULL */
	0x01021B4C, /* [37] extern -> 0x1B4C */
	0x00000000, /* [38] NULL */
	0x01061B78, /* [39] extern -> 0x1B78 */
	0x00000000, /* [40] NULL */
	0x00000000, /* [41] NULL */
	0x00000000, /* [42] NULL */
	0x010A1BA4, /* [43] extern -> 0x1BA4 */
	0x00000000, /* [44] NULL */
	0x00000000, /* [45] NULL */
	0x00000000, /* [46] NULL */
	0x010C1B4C, /* [47] extern -> 0x1B4C */
	0x00000000, /* [48] NULL */
	0x01101B78, /* [49] extern -> 0x1B78 */
	0x00000000, /* [50] NULL */
	0x00000000, /* [51] NULL */
	0x00000000, /* [52] NULL */
	0x01121BA4, /* [53] extern -> 0x1BA4 */
	0x00000000, /* [54] NULL */
	0x01D11C08, /* [55] extern -> 0x1C08 */
	0x00000000, /* [56] NULL */
	0x00000000, /* [57] NULL */
	0x00000000, /* [58] NULL */
	0x00000000, /* [59] NULL */
	0x00000000, /* [60] NULL */
	0x0000000C, /* [61] */
	0x01C200E2, /* [62] intern -> 0x00E2 */
};

/* Data region at word 0x011A (1 words) */
u32 dFoxMain_data1[1] = {
	0x00000000,
};

FTAttributes dFoxMain_attr = {
	1.0f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	60.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.45f, /* walk_speed_mul */
	2.0f, /* traction */
	81.0f, /* dash_speed */
	10.0f, /* dash_decel */
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
	1600.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	610.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 400.0f, 400.0f }, /* cliffcatch_coll */
	{ 0x0172, 0x0121 }, /* dead_fgm_ids */
	0x0168, /* deadup_sfx */
	0x0177, /* damage_sfx */
	{ 0x0176, 0x0174, 0x0175 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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

/* Data region at word 0x01ED (3 words) */
u32 dFoxMain_data2[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
