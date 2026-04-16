/* Fighter Main data for relocData file 233 (PurinMain) */
/* File size: 1984 bytes (0x7C0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern DObjDesc dPurinModel_JointTree[];
extern DObjDesc dPurinModel_JointTree_0x40A0[];
extern Vtx dPurinModel_JointVerts_Vtx[];
extern Gfx dPurinModel_Joint_0x3D10_DisplayList[];
extern Gfx dPurinModel_Joint_0x3D90_DisplayList[];
extern Gfx dPurinModel_Joint_0x3E38_DisplayList[];
extern Gfx dPurinModel_Joint_0x3ED8_DisplayList[];
extern Gfx dPurinModel_Joint_0x3F90_DisplayList[];
extern Gfx dPurinModel_Joint_0x4018_DisplayList[];
extern Gfx dPurinModel_Joint_0x54C0_DisplayList[];
extern Gfx dPurinModel_Joint_0x5850_DisplayList[];
extern Gfx dPurinModel_Joint_0x58D0_DisplayList[];
extern Gfx dPurinModel_Joint_0x5978_DisplayList[];
extern Gfx dPurinModel_Joint_0x59F8_DisplayList[];
extern Gfx dPurinModel_Joint_0x5AA0_DisplayList[];
extern Gfx dPurinModel_Joint_0x5B28_DisplayList[];
extern u8 dPurinModel_gap_0x24F8_sub_0x3B8[];
extern u8 dPurinModel_gap_0x459C_sub_0x434[];
extern u8 dPurinModel_gap_0x459C_sub_0x4C4[];
extern u8 dPurinModel_gap_0x459C_sub_0x648[];
extern u8 dPurinModel_gap_0x6028_sub_0x4A8[];
extern u8 dPurinModel_gap_0x7B00_sub_0x30[];
extern u8 dPurinModel_gap_0x7B00_sub_0x58[];
extern u8 dPurinModel_gap_0x7B00_sub_0x8[];
extern u8 dPurinModel_gap_0x7B00_sub_0x80[];
extern u16 dPurinModel_palette_0x7AE0[];
extern DObjDesc dPurinSpecial2_SingDObjDesc[];

/* Pre-attributes data (285 words, 0x0474 bytes) */
/* @ 0x0000, 8 bytes: FTAttributes.file_handles target (was dPurinMain_pre+0x0) */
u32 dPurinMain_file_handles[2] = {

	0x0001000D, /* extern -> 0x0034 */
	(u32)&dPurinSpecial2_SingDObjDesc, /* extern -> 0x2130 */
};

/* @ 0x0008, 8 bytes: FTAttributes.animlock target (was dPurinMain_pre+0x8) */
u32 dPurinMain_animlock[2] = {
	0x04412900,
	0x00000000,
};

/* @ 0x0010, 8 bytes: FTAttributes.setup_parts target (was dPurinMain_pre+0x10) */
u32 dPurinMain_setup_parts[2] = {
	0xEFF9FF80,
	0x00000000,
};

/* @ 0x0018, 64 bytes: FTAttributes.hiddenparts target (was dPurinMain_pre+0x18) */
u32 dPurinMain_hiddenparts[16] = {
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

/* @ 0x0058, 104 bytes: FTAttributes.modelparts_container target (was dPurinMain_pre+0x58) */
u32 dPurinMain_modelparts_container[26] = {
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

/* @ 0x00C0, 16 bytes: FTAttributes.accesspart target (was dPurinMain_pre+0xC0) */
u32 dPurinMain_accesspart[4] = {
	0x00000006,
	(u32)&dPurinModel_gap_0x459C_sub_0x4C4, /* extern -> 0x4A60 */
	(u32)&dPurinModel_gap_0x459C_sub_0x434, /* extern -> 0x49D0 */
	(u32)&dPurinModel_gap_0x459C_sub_0x648, /* extern -> 0x4BE4 */
};

/* @ 0x00D0, 8 bytes: FTAttributes.textureparts_container target (was dPurinMain_pre+0xD0) */
u32 dPurinMain_textureparts_container[2] = {
	0x06000006,
	0x01010000,
};

/* @ 0x00D8, 32 bytes: FTAttributes.commonparts_container target (was dPurinMain_pre+0xD8) */
u32 dPurinMain_commonparts_container[8] = {
	(u32)&dPurinModel_JointTree, /* extern -> 0x2028 */
	(u32)&dPurinModel_JointVerts_Vtx, /* extern -> 0x0000 */
	(u32)((u8*)dPurinModel_JointTree + 0x4A8), /* extern -> 0x24D0 */
	0x00000000,
	(u32)&dPurinModel_JointTree_0x40A0, /* extern -> 0x40A0 */
	(u32)&dPurinModel_gap_0x24F8_sub_0x3B8, /* extern -> 0x28B0 */
	(u32)((u8*)dPurinModel_JointTree_0x40A0 + 0x4B0), /* extern -> 0x4550 */
	0x00000000,
};

/* @ 0x00F8, 432 bytes: FTAttributes.thrown_status target (was dPurinMain_pre+0xF8) */
u32 dPurinMain_thrown_status[108] = {
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

/* @ 0x02A8, 20 bytes: FTAttributes.sub_0x2A8 target (was dPurinMain_pre+0x2A8) */
u32 dPurinMain_sub_0x2A8[5] = {
	(u32)&dPurinModel_palette_0x7AE0, /* extern -> 0x7AE0 */
	(u32)&dPurinModel_gap_0x7B00_sub_0x8, /* extern -> 0x7B08 */
	(u32)&dPurinModel_gap_0x7B00_sub_0x30, /* extern -> 0x7B30 */
	(u32)&dPurinModel_gap_0x7B00_sub_0x58, /* extern -> 0x7B58 */
	(u32)&dPurinModel_gap_0x7B00_sub_0x80, /* extern -> 0x7B80 */
};

/* @ 0x02BC, 12 bytes: FTAttributes.sprites target (was dPurinMain_pre+0x2BC) */
u32 dPurinMain_sprites[3] = {
	(u32)((u8*)dPurinModel_gap_0x7B00_sub_0x80 + 0x30), /* extern -> 0x7BB0 */
	(u32)dPurinMain_sub_0x2A8, /* intern -> 0x02A8 */
	(u32)((u8*)dPurinModel_gap_0x7B00_sub_0x80 + 0x218), /* extern -> 0x7D98 */
};

/* @ 0x02C8, 208 bytes: FTAttributes.sub_0x2C8 target (was dPurinMain_pre+0x2C8) */
u32 dPurinMain_sub_0x2C8[52] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x54C0_DisplayList, /* extern -> 0x54C0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x5850_DisplayList, /* extern -> 0x5850 */
	0x00000000,
	(u32)&dPurinModel_Joint_0x58D0_DisplayList, /* extern -> 0x58D0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x5978_DisplayList, /* extern -> 0x5978 */
	0x00000000,
	(u32)&dPurinModel_Joint_0x59F8_DisplayList, /* extern -> 0x59F8 */
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
	(u32)&dPurinModel_Joint_0x5AA0_DisplayList, /* extern -> 0x5AA0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x5B28_DisplayList, /* extern -> 0x5B28 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0398, 208 bytes: FTAttributes.sub_0x398 target (was dPurinMain_pre+0x398) */
u32 dPurinMain_sub_0x398[52] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_gap_0x6028_sub_0x4A8, /* extern -> 0x64D0 */
	0x40000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x3D10_DisplayList, /* extern -> 0x3D10 */
	0x00000000,
	(u32)&dPurinModel_Joint_0x3D90_DisplayList, /* extern -> 0x3D90 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x3E38_DisplayList, /* extern -> 0x3E38 */
	0x00000000,
	(u32)&dPurinModel_Joint_0x3ED8_DisplayList, /* extern -> 0x3ED8 */
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
	(u32)&dPurinModel_Joint_0x3F90_DisplayList, /* extern -> 0x3F90 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dPurinModel_Joint_0x4018_DisplayList, /* extern -> 0x4018 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0468, 12 bytes: FTAttributes.skeleton target (was dPurinMain_pre+0x468) */
u32 dPurinMain_skeleton[3] = {
	0x0000000A,
	(u32)dPurinMain_sub_0x2C8, /* intern -> 0x02C8 */
	(u32)dPurinMain_sub_0x398, /* intern -> 0x0398 */
};

FTAttributes dPurinMain_attr = {
	1.05f, /* size */
	90.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	40.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.28f, /* walk_speed_mul */
	1.1f, /* traction */
	50.0f, /* dash_speed */
	3.0f, /* dash_decel */
	42.0f, /* run_speed */
	6.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	20.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.7f, /* jumpaerial_height */
	0.07f, /* air_accel */
	35.0f, /* air_speed_max_x */
	1.0f, /* air_friction */
	2.0f, /* gravity */
	38.0f, /* tvel_base */
	60.5f, /* tvel_fast */
	6, /* jumps_max */
	1.3f, /* weight */
	24.0f, /* attack1_followup_frames */
	16.0f, /* dash_to_run */
	400.0f, /* shield_size */
	220.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	120.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	160.0f, /* cam_offset_y */
	1600.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	410.0f, /* camera_zoom_base */
	{ 230.0f, 160.0f, 0.0f, 130.0f }, /* map_coll */
	{ 250.0f, 400.0f }, /* cliffcatch_coll */
	{ nSYAudioVoicePurinDamage, nSYAudioFGMPurinDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoicePurinDeadUp, /* deadup_sfx */
	nSYAudioVoicePurinDamage, /* damage_sfx */
	{ nSYAudioVoicePurinSmash1, nSYAudioVoicePurinSmash2, nSYAudioVoicePurinSmash3 }, /* smash_sfx */
	{ { 118.0f, 0.0f }, { 420.0f, 200.0f }, { 80.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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
		{ 5, 1, TRUE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ 6, 2, TRUE, { 0.0f, 30.0f, 0.0f }, { 260.0f, 260.0f, 260.0f } },
		{ 14, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 45.0f, 40.0f, 40.0f } },
		{ 10, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 40.0f, 40.0f } },
		{ 15, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 80.0f, 80.0f } },
		{ 11, 1, FALSE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 80.0f, 80.0f } },
		{ 28, 0, FALSE, { 45.0f, 20.0f, 0.0f }, { 160.0f, 50.0f, 110.0f } },
		{ 23, 0, FALSE, { 45.0f, 20.0f, 0.0f }, { 160.0f, 50.0f, 110.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
		{ -1, 0, FALSE, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	},
	{ 900.0f, 450.0f, 900.0f }, /* hit_detect_range */
	(u32*)dPurinMain_setup_parts, /* setup_parts */
	(u32*)dPurinMain_animlock, /* animlock */
	{ 6, 15, 21, 26, 11 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dPurinMain_hiddenparts, /* hiddenparts */
	(FTCommonPartContainer*)dPurinMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	61.848f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	61.848f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x88, 0xEB, 0x85, 0x00, 0x00, 0x00, 0x09, 0x42, 0x89, 0x52, 0x6F }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dPurinMain_modelparts_container, /* modelparts_container */
	(FTAccessPart*)dPurinMain_accesspart, /* accesspart */
	(FTTexturePartContainer*)dPurinMain_textureparts_container, /* textureparts_container */
	29, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dPurinMain_thrown_status, /* thrown_status */
	16, /* joint_itemlight_id */
	(FTSprites*)dPurinMain_sprites, /* sprites */
	(FTSkeleton**)dPurinMain_skeleton, /* skeleton */
};

/* Trailing padding (1 words) */
u32 dPurinMain_pad[1] = {
	0x00000000,
};
