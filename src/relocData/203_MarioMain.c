/* Fighter Main data for relocData file 203 (MarioMain) */
/* File size: 1904 bytes (0x770) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dMarioMainMotion_0x0024[];
extern DObjDesc dMarioModel_JointTree[];
extern DObjDesc dMarioModel_JointTree_0x4590[];
extern Gfx dMarioModel_Joint_0x18D8_DisplayList[];
extern Gfx dMarioModel_Joint_0x1DC8_DisplayList[];
extern Gfx dMarioModel_Joint_0x3E60_DisplayList[];
extern Gfx dMarioModel_Joint_0x4278_DisplayList[];
extern u8 dMarioModel_gap_0x0000[];
extern u8 dMarioModel_gap_0x26D0_sub_0x320[];
extern u8 dMarioModel_gap_0x4A60_sub_0x10A0[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1360[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1470[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1560[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1660[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1780[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1890[];
extern u8 dMarioModel_gap_0x4A60_sub_0x1970[];
extern u8 dMarioModel_gap_0x4A60_sub_0x4B0[];
extern u8 dMarioModel_gap_0x4A60_sub_0x690[];
extern u8 dMarioModel_gap_0x4A60_sub_0x8A0[];
extern u8 dMarioModel_gap_0x4A60_sub_0xA80[];
extern u8 dMarioModel_gap_0x4A60_sub_0xBA0[];
extern u8 dMarioModel_gap_0x4A60_sub_0xC80[];
extern u8 dMarioModel_gap_0x7220_sub_0x30[];
extern u8 dMarioModel_gap_0x7220_sub_0x58[];
extern u8 dMarioModel_gap_0x7220_sub_0x8[];
extern u8 dMarioModel_gap_0x7220_sub_0x80[];
extern u16 dMarioModel_palette_0x7200[];
extern WPAttributes dMarioSpecial1_Fireball_WeaponAttributes;
extern DObjDesc dMarioSpecial2_EntryDokanDObjDesc[];

/* Pre-attributes data (266 words, 0x0428 bytes) */
/* @ 0x0000, 12 bytes: FTAttributes.file_handles target (was dMarioMain_pre+0x0) */
u32 dMarioMain_file_handles[3] = {

	(u32)&dMarioMainMotion_0x0024, /* extern -> 0x0024 */
	(u32)&dMarioSpecial2_EntryDokanDObjDesc, /* extern -> 0x0608 */
	(u32)&dMarioSpecial1_Fireball_WeaponAttributes, /* extern -> 0x0000 */
};

/* @ 0x000C, 8 bytes: FTAttributes.animlock target (was dMarioMain_pre+0xC) */
u32 dMarioMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x0014, 8 bytes: FTAttributes.setup_parts target (was dMarioMain_pre+0x14) */
u32 dMarioMain_setup_parts[2] = {
	0xFFFFFF00,
	0x00000000,
};

/* @ 0x001C, 64 bytes: FTAttributes.hiddenparts target (was dMarioMain_pre+0x1C) */
u32 dMarioMain_hiddenparts[16] = {
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
	0x0000001C,
	0x00000004,
	0x00000001,
	0x00000000,
};

/* @ 0x005C, 80 bytes: FTAttributes.sub_0x05C target (was dMarioMain_pre+0x5C) */
u32 dMarioMain_sub_0x05C[20] = {
	(u32)&dMarioModel_Joint_0x18D8_DisplayList, /* extern -> 0x18D8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_Joint_0x3E60_DisplayList, /* extern -> 0x3E60 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x8A0, /* extern -> 0x5300 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0xA80, /* extern -> 0x54E0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x00AC, 80 bytes: FTAttributes.sub_0x0AC target (was dMarioMain_pre+0xAC) */
u32 dMarioMain_sub_0x0AC[20] = {
	(u32)&dMarioModel_Joint_0x1DC8_DisplayList, /* extern -> 0x1DC8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_Joint_0x4278_DisplayList, /* extern -> 0x4278 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x4B0, /* extern -> 0x4F10 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x690, /* extern -> 0x50F0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x00FC, 100 bytes: FTAttributes.modelparts_container target (was dMarioMain_pre+0xFC) */
u32 dMarioMain_modelparts_container[25] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dMarioMain_sub_0x05C, /* intern -> 0x005C */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dMarioMain_sub_0x0AC, /* intern -> 0x00AC */
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

/* @ 0x0160, 4 bytes: FTAttributes.textureparts_container target (was dMarioMain_pre+0x160) */
u32 dMarioMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x0164, 32 bytes: FTAttributes.commonparts_container target (was dMarioMain_pre+0x164) */
u32 dMarioMain_commonparts_container[8] = {
	(u32)&dMarioModel_JointTree, /* extern -> 0x2200 */
	(u32)&dMarioModel_gap_0x0000, /* extern -> 0x0000 */
	(u32)((u8*)dMarioModel_JointTree + 0x480), /* extern -> 0x2680 */
	0x00000000,
	(u32)&dMarioModel_JointTree_0x4590, /* extern -> 0x4590 */
	(u32)&dMarioModel_gap_0x26D0_sub_0x320, /* extern -> 0x29F0 */
	(u32)((u8*)dMarioModel_JointTree_0x4590 + 0x480), /* extern -> 0x4A10 */
	0x00000000,
};

/* @ 0x0184, 432 bytes: FTAttributes.thrown_status target (was dMarioMain_pre+0x184) */
u32 dMarioMain_thrown_status[108] = {
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B6,
	0x000000B9,
};

/* @ 0x0334, 20 bytes: FTAttributes.sub_0x334 target (was dMarioMain_pre+0x334) */
u32 dMarioMain_sub_0x334[5] = {
	(u32)&dMarioModel_palette_0x7200, /* extern -> 0x7200 */
	(u32)&dMarioModel_gap_0x7220_sub_0x8, /* extern -> 0x7228 */
	(u32)&dMarioModel_gap_0x7220_sub_0x30, /* extern -> 0x7250 */
	(u32)&dMarioModel_gap_0x7220_sub_0x58, /* extern -> 0x7278 */
	(u32)&dMarioModel_gap_0x7220_sub_0x80, /* extern -> 0x72A0 */
};

/* @ 0x0348, 12 bytes: FTAttributes.sprites target (was dMarioMain_pre+0x348) */
u32 dMarioMain_sprites[3] = {
	(u32)((u8*)dMarioModel_gap_0x7220_sub_0x80 + 0x30), /* extern -> 0x72D0 */
	(u32)dMarioMain_sub_0x334, /* intern -> 0x0334 */
	(u32)((u8*)dMarioModel_gap_0x7220_sub_0x80 + 0x228), /* extern -> 0x74C8 */
};

/* @ 0x0354, 200 bytes: FTAttributes.sub_0x354 target (was dMarioMain_pre+0x354) */
u32 dMarioMain_sub_0x354[50] = {
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0xBA0, /* extern -> 0x5600 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0xC80, /* extern -> 0x56E0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1470, /* extern -> 0x5ED0 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1360, /* extern -> 0x5DC0 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1560, /* extern -> 0x5FC0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x10A0, /* extern -> 0x5B00 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1470, /* extern -> 0x5ED0 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1360, /* extern -> 0x5DC0 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1660, /* extern -> 0x60C0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1780, /* extern -> 0x61E0 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1890, /* extern -> 0x62F0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1970, /* extern -> 0x63D0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1780, /* extern -> 0x61E0 */
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1890, /* extern -> 0x62F0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dMarioModel_gap_0x4A60_sub_0x1970, /* extern -> 0x63D0 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x041C, 12 bytes: FTAttributes.skeleton target (was dMarioMain_pre+0x41C) */
u32 dMarioMain_skeleton[3] = {
	0x0000000C,
	(u32)dMarioMain_sub_0x354, /* intern -> 0x0354 */
	0x00000000,
};

FTAttributes dMarioMain_attr = {
	1.12f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.3f, /* walk_speed_mul */
	1.5f, /* traction */
	54.0f, /* dash_speed */
	2.8f, /* dash_decel */
	44.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	26.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.025f, /* air_accel */
	30.0f, /* air_speed_max_x */
	0.2f, /* air_friction */
	2.4f, /* gravity */
	44.0f, /* tvel_base */
	70.0f, /* tvel_fast */
	2, /* jumps_max */
	1.0f, /* weight */
	24.0f, /* attack1_followup_frames */
	14.0f, /* dash_to_run */
	260.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	1600.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	500.0f, /* camera_zoom_base */
	{ 320.0f, 190.0f, 0.0f, 150.0f }, /* map_coll */
	{ 400.0f, 360.0f }, /* cliffcatch_coll */
	{ 0x01B7, 0x0124 }, /* dead_fgm_ids */
	0x01B1, /* deadup_sfx */
	0x01B8, /* damage_sfx */
	{ 0x01AD, 0x01AE, 0x01AF }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x01B6, /* heavyget_sfx */
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
	1, /* is_have_voice */
	/* damage_coll_descs */
	{
		{ 6, 1, TRUE, { 0.0f, 10.0f, 4.0f }, { 103.0f, 112.0f, 95.0f } },
		{ 12, 2, TRUE, { 0.0f, 68.0f, 8.0f }, { 148.0f, 140.0f, 138.0f } },
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
	(u32*)dMarioMain_setup_parts, /* setup_parts */
	(u32*)dMarioMain_animlock, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dMarioMain_hiddenparts, /* hiddenparts */
	(FTCommonPartContainer*)dMarioMain_commonparts_container, /* commonparts_container */
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
	(FTModelPartContainer*)dMarioMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dMarioMain_textureparts_container, /* textureparts_container */
	28, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dMarioMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	(FTSprites*)dMarioMain_sprites, /* sprites */
	(FTSkeleton**)dMarioMain_skeleton, /* skeleton */
};
