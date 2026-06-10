/* Fighter Main data for relocData file 221 (LuigiMain) */
/* File size: 2256 bytes (0x8D0) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */
extern u8 dMarioShieldPose_data0[];
extern u8 dMarioShieldPose_data0_end[];
extern u8 dMarioShieldPose_shield_anim_joint_1[];
extern u8 dMarioShieldPose_shield_anim_joint_2[];
extern u8 dMarioShieldPose_shield_anim_joint_3[];
extern u8 dMarioShieldPose_shield_anim_joint_4[];
extern u8 dMarioShieldPose_shield_anim_joint_5[];
extern u8 dMarioShieldPose_shield_anim_joint_6[];
extern u8 dMarioShieldPose_shield_anim_joint_7[];
extern MObjSub *dLuigiModel_Joint_0x00A0_post_sub_0x810[];
extern MObjSub *dLuigiModel_Joint_0x00A0_post_sub_0x844[];
#include <ft/fttypes.h>

extern u32 dLuigiMainMotion_EggLay_0x0024[];
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
extern u8 dLuigiModel_DL_0x6270[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x16A4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x17B4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x18A4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x19A4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x1AC4[];
extern u8 dLuigiModel_gap_0x4E8C_sub_0x1BD4[];
extern u8 dLuigiModel_DL_0x6B40[];
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

	(u32)&dLuigiMainMotion_EggLay_0x0024, /* extern -> 0x0024 */
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
FTHiddenPart dLuigiMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001C, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x005C, 80 bytes: FTAttributes.sub_0x05C target (was dLuigiMain_pre+0x5C) */
FTModelPart dLuigiMain_modelparts_desc_0x05C[4] = {
	{ (Gfx*)&dLuigiModel_Joint_0x1AB0_DisplayList, (MObjSub**)dLuigiModel_Joint_0x00A0_post_sub_0x810, (AObjEvent32**)&dLuigiModel_gap_0x28E0_sub_0x360, NULL, 0x00 },
	{ (Gfx*)&dLuigiModel_Joint_0x4248_DisplayList, (MObjSub**)&dLuigiModel_gap_0x28E0_sub_0xC50, (AObjEvent32**)&dLuigiModel_gap_0x4E8C_sub_0x384, NULL, 0x00 },
	{ (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0xA84, NULL, (AObjEvent32**)&dLuigiModel_gap_0x4E8C_sub_0xBF0, NULL, 0x00 },
	{ (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0xD14, (MObjSub**)&dLuigiModel_gap_0x4E8C_sub_0xE14, (AObjEvent32**)&dLuigiModel_gap_0x4E8C_sub_0xE60, NULL, 0x00 },
};

/* @ 0x00AC, 80 bytes: FTAttributes.sub_0x0AC target (was dLuigiMain_pre+0xAC) */
FTModelPart dLuigiMain_modelparts_desc_0x0AC[4] = {
	{ (Gfx*)&dLuigiModel_Joint_0x1FC0_DisplayList, (MObjSub**)dLuigiModel_Joint_0x00A0_post_sub_0x844, (AObjEvent32**)&dLuigiModel_gap_0x28E0_sub_0x384, NULL, 0x00 },
	{ (Gfx*)&dLuigiModel_Joint_0x46B8_DisplayList, (MObjSub**)&dLuigiModel_gap_0x28E0_sub_0xC84, (AObjEvent32**)&dLuigiModel_gap_0x4E8C_sub_0x3A8, NULL, 0x00 },
	{ (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x534, (MObjSub**)&dLuigiModel_gap_0x4E8C_sub_0x654, (AObjEvent32**)&dLuigiModel_gap_0x4E8C_sub_0x6A0, NULL, 0x00 },
	{ (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x7C4, (MObjSub**)&dLuigiModel_gap_0x4E8C_sub_0x8C4, (AObjEvent32**)&dLuigiModel_gap_0x4E8C_sub_0x910, NULL, 0x00 },
};

/* @ 0x00FC, 100 bytes: FTAttributes.modelparts_container target (was dLuigiMain_pre+0xFC) */
FTModelPartDesc *dLuigiMain_modelparts_container[25] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dLuigiMain_modelparts_desc_0x05C, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dLuigiMain_modelparts_desc_0x0AC, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL,
};

/* @ 0x0160, 4 bytes: FTAttributes.textureparts_container target (was dLuigiMain_pre+0x160) */
FTTexturePart dLuigiMain_textureparts_container = { 0x0C, { 0x00, 0x00 } };

/* @ 0x0164, 32 bytes: FTAttributes.commonparts_container target (was dLuigiMain_pre+0x164) */
FTCommonPartContainer dLuigiMain_commonparts_container = {
	{
		{ (DObjDesc*)&dLuigiModel_JointTree, (MObjSub***)&dLuigiModel_gap_0x0000, (AObjEvent32***)((u8*)dLuigiModel_JointTree + 0x480), 0x00 },
		{ (DObjDesc*)&dLuigiModel_JointTree_0x49E8, (MObjSub***)&dLuigiModel_gap_0x28E0_sub_0x3A0, (AObjEvent32***)((u8*)dLuigiModel_JointTree_0x49E8 + 0x478), 0x00 },
	},
};

/* @ 0x0184, 432 bytes: FTAttributes.thrown_status target (was dLuigiMain_pre+0x184) */
FTThrownStatus dLuigiMain_thrown_status[54] = {
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
	{                               -1, nFTCommonStatusThrownCommon      },
	{ nFTCommonStatusThrownMarioBStart, nFTCommonStatusThrownMarioB      },
};

/* @ 0x0334, 348 bytes: FTAttributes.translate_scales target (was dLuigiMain_pre+0x334) */
/* One per-joint Vec3f translation-scale vector for each of Luigi's 29 joints.
 * Identity except the Y axis of joints 3, 7, 11, 12, 13 — retargets Mario's
 * shared animation data onto Luigi's taller build. Applied by
 * lbCommonPlayTranslateScaledDObjAnim() (multiplies translation tracks only;
 * rotation tracks are left untouched). */
Vec3f dLuigiMain_translate_scales[29] = {
	{ 1.0f, 1.0f,    1.0f }, /* joint  0 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  1 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  2 */
	{ 1.0f, 1.1379f, 1.0f }, /* joint  3 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  4 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  5 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  6 */
	{ 1.0f, 1.1618f, 1.0f }, /* joint  7 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  8 */
	{ 1.0f, 1.0f,    1.0f }, /* joint  9 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 10 */
	{ 1.0f, 1.2488f, 1.0f }, /* joint 11 */
	{ 1.0f, 2.886f,  1.0f }, /* joint 12 */
	{ 1.0f, 1.1618f, 1.0f }, /* joint 13 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 14 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 15 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 16 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 17 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 18 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 19 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 20 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 21 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 22 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 23 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 24 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 25 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 26 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 27 */
	{ 1.0f, 1.0f,    1.0f }, /* joint 28 */
};

/* @ 0x0490, 16 bytes: FTAttributes.sub_0x490 target (was dLuigiMain_pre+0x490) */
int *dLuigiMain_stock_luts[4] = {
	(int*)&dLuigiModel_palette_0x7C30,
	(int*)&dLuigiModel_gap_0x7C50_sub_0x8,
	(int*)&dLuigiModel_gap_0x7C50_sub_0x30,
	(int*)&dLuigiModel_gap_0x7C50_sub_0x58,
};

/* @ 0x04A0, 12 bytes: FTAttributes.sprites target (was dLuigiMain_pre+0x4A0) */
FTSprites dLuigiMain_sprites = {
	(Sprite*)((u8*)dLuigiModel_gap_0x7C50_sub_0x68 + 0x20), /* stock_sprite */
	(int**)dLuigiMain_stock_luts, /* stock_luts */
	(Sprite*)((u8*)dLuigiModel_gap_0x7C50_sub_0x68 + 0x210), /* emblem */
};

/* @ 0x04AC, 200 bytes: FTAttributes.sub_0x4AC target (was dLuigiMain_pre+0x4AC) */
FTSkeleton dLuigiMain_skeleton_dls[25] = {
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0xEE4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0xFC4 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x17B4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x16A4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x18A4 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_DL_0x6270 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x17B4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x16A4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x19A4 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x1AC4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x1BD4 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_DL_0x6B40 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x1AC4 }, 0 },
	{ { (Gfx*)&dLuigiModel_gap_0x4E8C_sub_0x1BD4 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dLuigiModel_DL_0x6B40 }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x0574, 12 bytes: FTAttributes.skeleton target (was dLuigiMain_pre+0x574) */
FTSkeleton *dLuigiMain_skeleton[3] = {
	(FTSkeleton*)12,
	dLuigiMain_skeleton_dls,
	NULL,
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
	&dLuigiMain_commonparts_container, /* commonparts_container */
	(void *)&dMarioShieldPose_data0, /* dobj_lookup */
	{ (void *)&dMarioShieldPose_data0_end, (void *)&dMarioShieldPose_shield_anim_joint_1, (void *)&dMarioShieldPose_shield_anim_joint_2, (void *)&dMarioShieldPose_shield_anim_joint_3, (void *)&dMarioShieldPose_shield_anim_joint_4, (void *)&dMarioShieldPose_shield_anim_joint_5, (void *)&dMarioShieldPose_shield_anim_joint_6, (void *)&dMarioShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	23, /* joint_rfoot_id */
	60.891f, /* joint_rfoot_rotate */
	18, /* joint_lfoot_id */
	60.891f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0x0F, 0xA6, 0xE9, 0x00, 0x00, 0x00, 0x07, 0x42, 0x0F, 0x8B, 0x44 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	dLuigiMain_translate_scales, /* translate_scales */
	(FTModelPartContainer*)dLuigiMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)&dLuigiMain_textureparts_container, /* textureparts_container */
	28, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dLuigiMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dLuigiMain_sprites, /* sprites */
	(FTSkeleton**)dLuigiMain_skeleton, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dLuigiMain_pad[2] = {
	0x00000000, 0x00000000,
};
