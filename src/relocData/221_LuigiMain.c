/* Fighter Main data for relocData file 221 (LuigiMain) */
/* File size: 2256 bytes (0x8D0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dLuigiMainMotion_0x0024[];
extern DObjDesc dLuigiModel_JointTree[];
extern DObjDesc dLuigiModel_JointTree_0x49E8[];
extern Gfx dLuigiModel_Joint_0x1AB0_DisplayList[];
extern Gfx dLuigiModel_Joint_0x1FC0_DisplayList[];
extern Gfx dLuigiModel_Joint_0x4248_DisplayList[];
extern Gfx dLuigiModel_Joint_0x46B8_DisplayList[];
extern u8 dLuigiModel_gap_0x0000[];
extern u8 dLuigiModel_gap_0x0000_sub_0x18[];
extern u8 dLuigiModel_gap_0x28E0_sub_0x360[];
extern u8 dLuigiModel_gap_0x28E0_sub_0x384[];
extern u8 dLuigiModel_gap_0x28E0_sub_0x3A0[];
extern u8 dLuigiModel_gap_0x28E0_sub_0xC50[];
extern u8 dLuigiModel_gap_0x28E0_sub_0xC84[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x13E4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x16A4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x17B4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x18A4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x19A4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x1AC4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x1BD4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x1CB4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x384[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x3A8[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x534[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x654[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x6A0[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x7C4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x8C4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x910[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xA84[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xBF0[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xD14[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xE14[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xE60[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xEE4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0xFC4[];
extern u8 dLuigiModel_gap_0x7C50_sub_0x30[];
extern u8 dLuigiModel_gap_0x7C50_sub_0x58[];
extern u8 dLuigiModel_gap_0x7C50_sub_0x68[];
extern u8 dLuigiModel_gap_0x7C50_sub_0x8[];
extern u16 dLuigiModel_palette_0x7C30[];
extern WPAttributes dLuigiSpecial1_Fireball_WeaponAttributes;
extern DObjDesc dMarioSpecial2_EntryDokanDObjDesc[];

/* Pre-attributes data (352 words, 0x0580 bytes) */
/* @ 0x0000, 12 bytes: FTAttributes.file_handles target (was dLuigiMain_pre+0x0) */
u32 dLuigiMain_file_handles[3] = {

	(u32)&dLuigiMainMotion_0x0024, /* extern -> 0x0024 */
	(u32)&dMarioSpecial2_EntryDokanDObjDesc, /* extern -> 0x0608 */
	(u32)&dLuigiSpecial1_Fireball_WeaponAttributes, /* extern -> 0x0000 */
};

/* @ 0x000C, 8 bytes: FTAttributes.animlock target (was dLuigiMain_pre+0xC) */
u32 dLuigiMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x0014, 8 bytes: FTAttributes.setup_parts target (was dLuigiMain_pre+0x14) */
u32 dLuigiMain_setup_parts[2] = {
	0xFFFFFF00,
	0x00000000,
};

/* @ 0x001C, 64 bytes: FTAttributes.hiddenparts target (was dLuigiMain_pre+0x1C) */
u32 dLuigiMain_hiddenparts[16] = {
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

/* @ 0x005C, 80 bytes: FTAttributes.sub_0x05C target (was dLuigiMain_pre+0x5C) */
u32 dLuigiMain_sub_0x05C[20] = {
	(u32)&dLuigiModel_Joint_0x1AB0_DisplayList, /* extern -> 0x1AB0 */
	(u32)((u8*)dLuigiModel_gap_0x0000_sub_0x18 + 0x898), /* extern -> 0x08B0 */
	(u32)&dLuigiModel_gap_0x28E0_sub_0x360, /* extern -> 0x2C40 */
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_Joint_0x4248_DisplayList, /* extern -> 0x4248 */
	(u32)&dLuigiModel_gap_0x28E0_sub_0xC50, /* extern -> 0x3530 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x384, /* extern -> 0x5210 */
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xA84, /* extern -> 0x5910 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xBF0, /* extern -> 0x5A7C */
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xD14, /* extern -> 0x5BA0 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xE14, /* extern -> 0x5CA0 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xE60, /* extern -> 0x5CEC */
	0x00000000,
	0x00000000,
};

/* @ 0x00AC, 80 bytes: FTAttributes.sub_0x0AC target (was dLuigiMain_pre+0xAC) */
u32 dLuigiMain_sub_0x0AC[20] = {
	(u32)&dLuigiModel_Joint_0x1FC0_DisplayList, /* extern -> 0x1FC0 */
	(u32)((u8*)dLuigiModel_gap_0x0000_sub_0x18 + 0x8CC), /* extern -> 0x08E4 */
	(u32)&dLuigiModel_gap_0x28E0_sub_0x384, /* extern -> 0x2C64 */
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_Joint_0x46B8_DisplayList, /* extern -> 0x46B8 */
	(u32)&dLuigiModel_gap_0x28E0_sub_0xC84, /* extern -> 0x3564 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x3A8, /* extern -> 0x5234 */
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x534, /* extern -> 0x53C0 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x654, /* extern -> 0x54E0 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x6A0, /* extern -> 0x552C */
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x7C4, /* extern -> 0x5650 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x8C4, /* extern -> 0x5750 */
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x910, /* extern -> 0x579C */
	0x00000000,
	0x00000000,
};

/* @ 0x00FC, 100 bytes: FTAttributes.modelparts_container target (was dLuigiMain_pre+0xFC) */
u32 dLuigiMain_modelparts_container[25] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dLuigiMain_sub_0x05C, /* intern -> 0x005C */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dLuigiMain_sub_0x0AC, /* intern -> 0x00AC */
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

/* @ 0x0160, 4 bytes: FTAttributes.textureparts_container target (was dLuigiMain_pre+0x160) */
u32 dLuigiMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x0164, 32 bytes: FTAttributes.commonparts_container target (was dLuigiMain_pre+0x164) */
u32 dLuigiMain_commonparts_container[8] = {
	(u32)&dLuigiModel_JointTree, /* extern -> 0x2410 */
	(u32)&dLuigiModel_gap_0x0000, /* extern -> 0x0000 */
	(u32)((u8*)dLuigiModel_JointTree + 0x480), /* extern -> 0x2890 */
	0x00000000,
	(u32)&dLuigiModel_JointTree_0x49E8, /* extern -> 0x49E8 */
	(u32)&dLuigiModel_gap_0x28E0_sub_0x3A0, /* extern -> 0x2C80 */
	(u32)((u8*)dLuigiModel_JointTree_0x49E8 + 0x478), /* extern -> 0x4E60 */
	0x00000000,
};

/* @ 0x0184, 432 bytes: FTAttributes.thrown_status target (was dLuigiMain_pre+0x184) */
u32 dLuigiMain_thrown_status[108] = {
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

/* @ 0x0334, 348 bytes: FTAttributes.translate_scales target (was dLuigiMain_pre+0x334) */
u32 dLuigiMain_translate_scales[87] = {
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F91A6B5,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F94B5DD,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F9FD8AE,
	0x3F800000,
	0x3F800000,
	0x4038B439,
	0x3F800000,
	0x3F800000,
	0x3F94B5DD,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
	0x3F800000,
};

/* @ 0x0490, 16 bytes: FTAttributes.sub_0x490 target (was dLuigiMain_pre+0x490) */
u32 dLuigiMain_sub_0x490[4] = {
	(u32)&dLuigiModel_palette_0x7C30, /* extern -> 0x7C30 */
	(u32)&dLuigiModel_gap_0x7C50_sub_0x8, /* extern -> 0x7C58 */
	(u32)&dLuigiModel_gap_0x7C50_sub_0x30, /* extern -> 0x7C80 */
	(u32)&dLuigiModel_gap_0x7C50_sub_0x58, /* extern -> 0x7CA8 */
};

/* @ 0x04A0, 12 bytes: FTAttributes.sprites target (was dLuigiMain_pre+0x4A0) */
u32 dLuigiMain_sprites[3] = {
	(u32)((u8*)dLuigiModel_gap_0x7C50_sub_0x68 + 0x20), /* extern -> 0x7CD8 */
	(u32)dLuigiMain_sub_0x490, /* intern -> 0x0490 */
	(u32)((u8*)dLuigiModel_gap_0x7C50_sub_0x68 + 0x210), /* extern -> 0x7EC8 */
};

/* @ 0x04AC, 200 bytes: FTAttributes.sub_0x4AC target (was dLuigiMain_pre+0x4AC) */
u32 dLuigiMain_sub_0x4AC[50] = {
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xEE4, /* extern -> 0x5D70 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0xFC4, /* extern -> 0x5E50 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x17B4, /* extern -> 0x6640 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x16A4, /* extern -> 0x6530 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x18A4, /* extern -> 0x6730 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x13E4, /* extern -> 0x6270 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x17B4, /* extern -> 0x6640 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x16A4, /* extern -> 0x6530 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x19A4, /* extern -> 0x6830 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x1AC4, /* extern -> 0x6950 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x1BD4, /* extern -> 0x6A60 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x1CB4, /* extern -> 0x6B40 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x1AC4, /* extern -> 0x6950 */
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x1BD4, /* extern -> 0x6A60 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLuigiModel_gap_0x4E8C_sub_0x1CB4, /* extern -> 0x6B40 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0574, 12 bytes: FTAttributes.skeleton target (was dLuigiMain_pre+0x574) */
u32 dLuigiMain_skeleton[3] = {
	0x0000000C,
	(u32)dLuigiMain_sub_0x4AC, /* intern -> 0x04AC */
	0x00000000,
};

FTAttributes dLuigiMain_attr = {
#if defined(REGION_JP)
	1.0f, /* size */
#else
	1.12f, /* size */
#endif
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.3f, /* walk_speed_mul */
	0.7f, /* traction */
	50.0f, /* dash_speed */
	2.8f, /* dash_decel */
	40.0f, /* run_speed */
	3.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	30.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.025f, /* air_accel */
#if defined(REGION_JP)
	26.0f, /* air_speed_max_x */
#else
	22.5f, /* air_speed_max_x */
#endif
	0.15f, /* air_friction */
	2.1f, /* gravity */
	42.0f, /* tvel_base */
	67.5f, /* tvel_fast */
	2, /* jumps_max */
	1.0f, /* weight */
	24.0f, /* attack1_followup_frames */
	14.0f, /* dash_to_run */
	270.0f, /* shield_size */
	70.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	1700.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	530.0f, /* camera_zoom_base */
	{ 370.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 400.0f, 360.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceLuigiDead, nSYAudioFGMMarioDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceLuigiDeadUp, /* deadup_sfx */
	nSYAudioVoiceLuigiDamage, /* damage_sfx */
	{ nSYAudioVoiceLuigiSmash1, nSYAudioVoiceLuigiSmash2, nSYAudioVoiceLuigiSmash3 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceLuigiHeavyGet, /* heavyget_sfx */
	1.02f, /* halo_size */
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
#if defined(REGION_JP)
	/* damage_coll_descs */
	{
		{ 6, 1, TRUE, { 0.0f, 28.0f, 9.0f }, { 110.0f, 130.0f, 98.0f } },
		{ 12, 2, TRUE, { 0.0f, 81.0f, 14.0f }, { 155.0f, 200.0f, 150.0f } },
		{ 14, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 51.0f, 50.0f, 50.0f } },
		{ 8, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 51.0f, 50.0f, 50.0f } },
		{ 15, 1, FALSE, { 20.0f, 0.0f, 0.0f }, { 74.0f, 54.0f, 54.0f } },
		{ 9, 1, FALSE, { 20.0f, 0.0f, 0.0f }, { 74.0f, 54.0f, 54.0f } },
		{ 24, 0, FALSE, { 18.0f, 0.0f, 0.0f }, { 62.0f, 67.0f, 67.0f } },
		{ 19, 0, FALSE, { 18.0f, 0.0f, 0.0f }, { 62.0f, 67.0f, 67.0f } },
		{ 25, 0, FALSE, { 34.0f, 0.0f, 0.0f }, { 67.0f, 78.0f, 76.0f } },
		{ 20, 0, FALSE, { 34.0f, 0.0f, 0.0f }, { 67.0f, 78.0f, 76.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
#else
	/* damage_coll_descs */
	{
		{ 6, 1, TRUE, { 0.0f, 28.0f, 9.0f }, { 110.0f, 130.0f, 98.0f } },
		{ 12, 2, TRUE, { 0.0f, 81.0f, 14.0f }, { 155.0f, 160.0f, 150.0f } },
		{ 14, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 51.0f, 50.0f, 50.0f } },
		{ 8, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 51.0f, 50.0f, 50.0f } },
		{ 15, 1, FALSE, { 20.0f, 0.0f, 0.0f }, { 74.0f, 54.0f, 54.0f } },
		{ 9, 1, FALSE, { 20.0f, 0.0f, 0.0f }, { 74.0f, 54.0f, 54.0f } },
		{ 24, 0, FALSE, { 18.0f, 0.0f, 0.0f }, { 62.0f, 67.0f, 67.0f } },
		{ 19, 0, FALSE, { 18.0f, 0.0f, 0.0f }, { 62.0f, 67.0f, 67.0f } },
		{ 25, 0, FALSE, { 34.0f, 0.0f, 0.0f }, { 67.0f, 78.0f, 76.0f } },
		{ 20, 0, FALSE, { 34.0f, 0.0f, 0.0f }, { 67.0f, 78.0f, 76.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
#endif
	{ 900.0f, 450.0f, 900.0f }, /* hit_detect_range */
	(u32*)dLuigiMain_setup_parts, /* setup_parts */
	(u32*)dLuigiMain_animlock, /* animlock */
	{ 12, 15, 20, 25, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dLuigiMain_hiddenparts, /* hiddenparts */
	(FTCommonPartContainer*)dLuigiMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	23, /* joint_rfoot_id */
	60.891f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	60.891f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x0F, 0xA6, 0xE9, 0x00, 0x00, 0x00, 0x07, 0x42, 0x0F, 0x8B, 0x44 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	(Vec3f*)dLuigiMain_translate_scales, /* translate_scales */
	(FTModelPartContainer*)dLuigiMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dLuigiMain_textureparts_container, /* textureparts_container */
	28, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dLuigiMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	(FTSprites*)dLuigiMain_sprites, /* sprites */
	(FTSkeleton**)dLuigiMain_skeleton, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dLuigiMain_pad[2] = {
	0x00000000, 0x00000000,
};
