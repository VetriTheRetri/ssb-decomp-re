/* Fighter Main data for relocData file 236 (CaptainMain) */
/* File size: 2000 bytes (0x7D0) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u32 dCaptainModel_FTEmblem[];
extern MObjSub *dCaptainModel_Joint_0x0080_post_sub_0x118C[];
extern MObjSub *dCaptainModel_Joint_0x0080_post_sub_0x11C8[];
extern u32 dCaptainModel_Stock[];
extern Gfx dCaptainSpecial3_DL_0x0760[];
extern u8 dCaptainShieldPose_data0[];
extern u8 dCaptainShieldPose_data0_end[];
extern u8 dCaptainShieldPose_shield_anim_joint_1[];
extern u8 dCaptainShieldPose_shield_anim_joint_2[];
extern u8 dCaptainShieldPose_shield_anim_joint_3[];
extern u8 dCaptainShieldPose_shield_anim_joint_4[];
extern u8 dCaptainShieldPose_shield_anim_joint_5[];
extern u8 dCaptainShieldPose_shield_anim_joint_6[];
extern u8 dCaptainShieldPose_shield_anim_joint_7[];
#include <ft/fttypes.h>

extern DObjDesc dCaptainModel_JointTree[];
extern u8 dCaptainModel_Joint_0x0080_post[];
extern DObjDesc dCaptainModel_JointTree_0x7900[];
extern Gfx dCaptainModel_Joint_0x2A98_DisplayList[];
extern Gfx dCaptainModel_Joint_0x3308_DisplayList[];
extern Gfx dCaptainModel_Joint_0x6AF0_DisplayList[];
extern Gfx dCaptainModel_Joint_0x7148_DisplayList[];
extern MObjSub **dCaptainModel_gap_0x0000[];
extern u8 dCaptainModel_gap_0x40B0_sub_0x17A4[];
extern u8 dCaptainModel_gap_0x40B0_sub_0x17D4[];
extern u8 dCaptainModel_gap_0x40B0_sub_0x784[];
extern u8 dCaptainModel_gap_0x40B0_sub_0x7B0[];
extern u8 dCaptainModel_gap_0x40B0_sub_0x7E0[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1008[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1224[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x12C8[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1350[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x148C[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x15B8[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x16D8[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x18E4[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1988[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1A30[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1B7C[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1CA8[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1DB8[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x1FD4[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2078[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2100[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x223C[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x22C0[];
extern u8 dCaptainModel_DL_0xA160[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x25C0[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x27B0[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x28C0[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2A30[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2B30[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2C30[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2D50[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x2E60[];
extern u8 dCaptainModel_DL_0xAD10[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x694[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x6B4[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x808[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0x928[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0xB34[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0xBD8[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0xC80[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0xDCC[];
extern u8 dCaptainModel_gap_0x7DD0_sub_0xEF8[];
extern u8 dCaptainModel_gap_0xC5D0_sub_0x30[];
extern u8 dCaptainModel_gap_0xC5D0_sub_0x58[];
extern u8 dCaptainModel_gap_0xC5D0_sub_0x8[];
extern u8 dCaptainModel_gap_0xC5D0_sub_0x80[];
extern u8 dCaptainModel_gap_0xC5D0_sub_0xA8[];
extern u16 dCaptainModel_palette_0xC5B0[];
extern DObjDesc dCaptainSpecial2_FalconKickDObjDesc[];
extern u8 dCaptainSpecial3_gap_0x0708_sub_0x18[];

/* Pre-attributes data (290 words, 0x0488 bytes) */
/* @ 0x0000, 12 bytes: FTAttributes.file_handles target (was dCaptainMain_pre+0x0) */
u32 dCaptainMain_file_handles[3] = {

	0x0001001B, /* extern -> 0x006C */
	(u32)dCaptainSpecial3_DL_0x0760, /* extern -> 0x0760 */
	(u32)&dCaptainSpecial2_FalconKickDObjDesc, /* extern -> 0x0B08 */
};

/* @ 0x000C, 8 bytes: FTAttributes.animlock target (was dCaptainMain_pre+0xC) */
u32 dCaptainMain_animlock[2] = {
	0x10412900,
	0x00000000,
};

/* @ 0x0014, 8 bytes: FTAttributes.setup_parts target (was dCaptainMain_pre+0x14) */
u32 dCaptainMain_setup_parts[2] = {
	0xFFFFFF80,
	0x00000000,
};

/* @ 0x001C, 64 bytes: FTAttributes.hiddenparts target (was dCaptainMain_pre+0x1C) */
FTHiddenPart dCaptainMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001D, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x005C, 120 bytes: FTAttributes.sub_0x05C target (was dCaptainMain_pre+0x5C) */
FTModelPart dCaptainMain_modelparts_desc_0x05C[6] = {
	{ (Gfx*)&dCaptainModel_Joint_0x2A98_DisplayList, (MObjSub**)dCaptainModel_Joint_0x0080_post_sub_0x118C, (AObjEvent32**)&dCaptainModel_gap_0x40B0_sub_0x784, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_Joint_0x6AF0_DisplayList, (MObjSub**)&dCaptainModel_gap_0x40B0_sub_0x17A4, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x694, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x16D8, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0x15B8, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x18E4, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x1A30, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0x1988, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x1B7C, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x1DB8, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0x1CA8, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x1FD4, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2100, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0x2078, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x223C, NULL, 0x00 },
};

/* @ 0x00D4, 120 bytes: FTAttributes.sub_0x0D4 target (was dCaptainMain_pre+0xD4) */
FTModelPart dCaptainMain_modelparts_desc_0x0D4[6] = {
	{ (Gfx*)&dCaptainModel_Joint_0x3308_DisplayList, (MObjSub**)dCaptainModel_Joint_0x0080_post_sub_0x11C8, (AObjEvent32**)&dCaptainModel_gap_0x40B0_sub_0x7B0, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_Joint_0x7148_DisplayList, (MObjSub**)&dCaptainModel_gap_0x40B0_sub_0x17D4, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x6B4, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x928, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0x808, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0xB34, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0xC80, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0xBD8, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0xDCC, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x1008, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0xEF8, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x1224, NULL, 0x00 },
	{ (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x1350, (MObjSub**)&dCaptainModel_gap_0x7DD0_sub_0x12C8, (AObjEvent32**)&dCaptainModel_gap_0x7DD0_sub_0x148C, NULL, 0x00 },
};

/* @ 0x014C, 104 bytes: FTAttributes.modelparts_container target (was dCaptainMain_pre+0x14C) */
FTModelPartDesc *dCaptainMain_modelparts_container[26] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dCaptainMain_modelparts_desc_0x05C, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dCaptainMain_modelparts_desc_0x0D4, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL,
};

/* @ 0x01B4, 4 bytes: FTAttributes.textureparts_container target (was dCaptainMain_pre+0x1B4) */
FTTexturePart dCaptainMain_textureparts_container = { 0x0C, { 0x00, 0x00 } };

/* @ 0x01B8, 32 bytes: FTAttributes.commonparts_container target (was dCaptainMain_pre+0x1B8) */
FTCommonPartContainer dCaptainMain_commonparts_container = {
	{
		{ (DObjDesc*)&dCaptainModel_JointTree, (MObjSub***)&dCaptainModel_gap_0x0000, (AObjEvent32***)((u8*)dCaptainModel_JointTree + 0x4B0), 0x00 },
		{ (DObjDesc*)&dCaptainModel_JointTree_0x7900, (MObjSub***)&dCaptainModel_gap_0x40B0_sub_0x7E0, (AObjEvent32***)((u8*)dCaptainModel_JointTree_0x7900 + 0x4B0), 0x00 },
	},
};

/* @ 0x01D8, 432 bytes: FTAttributes.thrown_status target (was dCaptainMain_pre+0x1D8) */
FTThrownStatus dCaptainMain_thrown_status[54] = {
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
	{                          -1, nFTCommonStatusThrownCommon },
};

/* @ 0x0388, 24 bytes: FTAttributes.sub_0x388 target (was dCaptainMain_pre+0x388) */
int *dCaptainMain_stock_luts[6] = {
	(int*)&dCaptainModel_palette_0xC5B0,
	(int*)&dCaptainModel_gap_0xC5D0_sub_0x8,
	(int*)&dCaptainModel_gap_0xC5D0_sub_0x30,
	(int*)&dCaptainModel_gap_0xC5D0_sub_0x58,
	(int*)&dCaptainModel_gap_0xC5D0_sub_0x80,
	(int*)&dCaptainModel_gap_0xC5D0_sub_0xA8,
};

/* @ 0x03A0, 12 bytes: FTAttributes.sprites target (was dCaptainMain_pre+0x3A0) */
FTSprites dCaptainMain_sprites = {
	(Sprite*)dCaptainModel_Stock, /* stock_sprite */
	(int**)dCaptainMain_stock_luts, /* stock_luts */
	(Sprite*)dCaptainModel_FTEmblem, /* emblem */
};

/* @ 0x03AC, 208 bytes: FTAttributes.sub_0x3AC target (was dCaptainMain_pre+0x3AC) */
FTSkeleton dCaptainMain_skeleton_dls[26] = {
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x22C0 }, 0 },
	{ { (Gfx*)&dCaptainModel_DL_0xA160 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x28C0 }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x27B0 }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2B30 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x25C0 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2A30 }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x27B0 }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2C30 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2D50 }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2E60 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_DL_0xAD10 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2D50 }, 0 },
	{ { (Gfx*)&dCaptainModel_gap_0x7DD0_sub_0x2E60 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)&dCaptainModel_DL_0xAD10 }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x047C, 12 bytes: FTAttributes.skeleton target (was dCaptainMain_pre+0x47C) */
FTSkeleton *dCaptainMain_skeleton[3] = {
	(FTSkeleton*)12,
	dCaptainMain_skeleton_dls,
	NULL,
};

FTAttributes dCaptainMain_attr = {
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
#if defined(REGION_JP)
	70.0f, /* run_speed */
#else
	75.0f, /* run_speed */
#endif
	4.0f, /* kneebend_anim_length */
#if defined(REGION_JP)
	0.35f, /* jump_vel_x */
#else
	0.31f, /* jump_vel_x */
#endif
	1.0f, /* jump_height_mul */
#if defined(REGION_JP)
	25.0f, /* jump_height_base */
#else
	24.0f, /* jump_height_base */
#endif
	0.35f, /* jumpaerial_vel_x */
#if defined(REGION_JP)
	0.95f, /* jumpaerial_height */
#else
	0.9f, /* jumpaerial_height */
#endif
	0.04f, /* air_accel */
	31.0f, /* air_speed_max_x */
	0.2f, /* air_friction */
	3.4f, /* gravity */
#if defined(REGION_JP)
	60.0f, /* tvel_base */
#else
	66.0f, /* tvel_base */
#endif
	100.0f, /* tvel_fast */
	2, /* jumps_max */
	0.96f, /* weight */
	22.0f, /* attack1_followup_frames */
	16.0f, /* dash_to_run */
	290.0f, /* shield_size */
	90.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	115.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	1850.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	615.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 440.0f, 550.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceCaptainDead, nSYAudioFGMCaptainDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceCaptainDeadUp, /* deadup_sfx */
	nSYAudioVoiceCaptainDamage, /* damage_sfx */
	{ nSYAudioVoiceCaptainSmash3, nSYAudioVoiceCaptainSmash2, nSYAudioVoiceCaptainJumpAerial }, /* smash_sfx */
	{ { 107.0f, 0.0f }, { 386.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceCaptainHeavyGet, /* heavyget_sfx */
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
	(u32*)dCaptainMain_setup_parts, /* setup_parts */
	(u32*)dCaptainMain_animlock, /* animlock */
	{ 12, 15, 21, 26, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dCaptainMain_hiddenparts, /* hiddenparts */
	&dCaptainMain_commonparts_container, /* commonparts_container */
	(void *)&dCaptainShieldPose_data0, /* dobj_lookup */
	{ (void *)&dCaptainShieldPose_data0_end, (void *)&dCaptainShieldPose_shield_anim_joint_1, (void *)&dCaptainShieldPose_shield_anim_joint_2, (void *)&dCaptainShieldPose_shield_anim_joint_3, (void *)&dCaptainShieldPose_shield_anim_joint_4, (void *)&dCaptainShieldPose_shield_anim_joint_5, (void *)&dCaptainShieldPose_shield_anim_joint_6, (void *)&dCaptainShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	176.271f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	176.271f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0xD3, 0xA3, 0x54, 0x00, 0x00, 0x00, 0x07, 0x42, 0xD3, 0xA6, 0x66 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dCaptainMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)&dCaptainMain_textureparts_container, /* textureparts_container */
	29, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dCaptainMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dCaptainMain_sprites, /* sprites */
	(FTSkeleton**)dCaptainMain_skeleton, /* skeleton */
};
