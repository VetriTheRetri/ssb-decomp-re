/* Fighter Main data for relocData file 217 (SamusMain) */
/* File size: 2400 bytes (0x960) */

#include "relocdata_types.h"

/* Step 3 forward decls auto-added by migrateStructShadows.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dSamusModel_DL_0xE0D8[];
extern u32 dSamusModel_FTEmblem[];
extern u32 dSamusModel_Stock[];
extern MObjSub **dSamusModel_data_0xE008[];
extern u8 dSamusShieldPose_data0[];
extern u8 dSamusShieldPose_data0_end[];
extern u8 dSamusShieldPose_shield_anim_joint_1[];
extern u8 dSamusShieldPose_shield_anim_joint_2[];
extern u8 dSamusShieldPose_shield_anim_joint_3[];
extern u8 dSamusShieldPose_shield_anim_joint_4[];
extern u8 dSamusShieldPose_shield_anim_joint_5[];
extern u8 dSamusShieldPose_shield_anim_joint_6[];
extern u8 dSamusShieldPose_shield_anim_joint_7[];
extern MObjSub *dSamusModel_Joint_0x0040_post_sub_0xC34[];
extern MObjSub *dSamusModel_Joint_0x0040_post_sub_0xC58[];
extern u32 dSamusModel_gap_0x0000[];
#include <ft/fttypes.h>

extern u32 dSamusMainMotion_EggLay_0x0084[];
extern DObjDesc dSamusModel_JointTree[];
extern DObjDesc dSamusModel_JointTree_0x69D0[];
extern Gfx dSamusModel_Joint_0x20C8_DisplayList[];
extern Gfx dSamusModel_Joint_0x2608_DisplayList[];
extern Gfx dSamusModel_Joint_0x2C20_DisplayList[];
extern Gfx dSamusModel_Joint_0x5960_DisplayList[];
extern Gfx dSamusModel_Joint_0x5E00_DisplayList[];
extern u8 dSamusModel_Tex_0xD618[];
extern u8 dSamusModel_gap_0x3B24_sub_0x1150[];
extern u8 dSamusModel_gap_0x3B24_sub_0x1174[];
extern u8 dSamusModel_gap_0x3B24_sub_0x488[];
extern u8 dSamusModel_gap_0x3B24_sub_0x4A0[];
extern u8 dSamusModel_gap_0x3B24_sub_0x4DC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1184[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x13F0[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x148C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1734[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1990[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1A9C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1D2C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1DBC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x1FC0[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x20DC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x216C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x2370[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3D84[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3D8C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3D94[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3D9C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DA4[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DAC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DB4[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DBC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DC4[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DCC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DD4[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DDC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DE4[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DEC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DF4[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x3DFC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x488[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x4A0[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x5FC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x79C[];
extern u8 dSamusModel_gap_0x6FD4_sub_0x9B0[];
extern u8 dSamusModel_gap_0x6FD4_sub_0xADC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0xBEC[];
extern u8 dSamusModel_gap_0x6FD4_sub_0xDB0[];
extern u8 dSamusModel_gap_0x6FD4_sub_0xE4C[];
extern u8 dSamusModel_gap_0xE240_sub_0x30[];
extern u8 dSamusModel_gap_0xE240_sub_0x58[];
extern u8 dSamusModel_gap_0xE240_sub_0x8[];
extern u8 dSamusModel_gap_0xE240_sub_0x80[];
extern u16 dSamusModel_palette_0xE220[];
extern WPAttributes dSamusSpecial1_ChargeShot_WeaponAttributes;
extern DObjDesc dSamusSpecial2_GrappleBeamDObjDesc[];

/* Pre-attributes data (388 words, 0x0610 bytes) */
/* @ 0x0000, 64 bytes: FTAttributes.file_handles target (was dSamusMain_pre+0x0) */
u32 dSamusMain_file_handles[16] = {

	(u32)&dSamusMainMotion_EggLay_0x0084, /* extern -> 0x0084 */
	(u32)&dSamusSpecial2_GrappleBeamDObjDesc, /* extern -> 0x0380 */
	(u32)&dSamusSpecial1_ChargeShot_WeaponAttributes, /* extern -> 0x0000 */
	(u32)dSamusModel_DL_0xE0D8, /* extern -> 0xE0D8 */
	(u32)dSamusModel_data_0xE008, /* extern -> 0xE008 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x004B0000,
	0xFFB5004B,
	0x00A05A40,
	0x10424400,
	0x0140E124,
	0x02800000,
};

/* @ 0x0040, 8 bytes: FTAttributes.animlock target (was dSamusMain_pre+0x40) */
u32 dSamusMain_animlock[2] = {
	0x10200252,
	0x00000000,
};

/* @ 0x0048, 8 bytes: FTAttributes.setup_parts target (was dSamusMain_pre+0x48) */
u32 dSamusMain_setup_parts[2] = {
	0xFFF803FF,
	0x00000000,
};

/* @ 0x0050, 208 bytes: FTAttributes.hiddenparts target (was dSamusMain_pre+0x50) */
FTHiddenPart dSamusMain_hiddenparts[13] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x00000024, 0x00000004, 0x00000001, 0x00000000 },
	{ 0x00000011, 0x00000010, 0x00000001, 0x00000000 },
	{ 0x00000012, 0x00000011, 0x00000001, 0x00000000 },
	{ 0x00000013, 0x00000012, 0x00000001, 0x00000000 },
	{ 0x00000014, 0x00000013, 0x00000001, 0x00000000 },
	{ 0x00000015, 0x00000014, 0x00000001, 0x00000000 },
	{ 0x00000016, 0x00000015, 0x00000001, 0x00000000 },
	{ 0x00000017, 0x00000016, 0x00000001, 0x00000000 },
	{ 0x00000018, 0x00000010, 0x00000001, 0x00000000 },
	{ 0x00000019, 0x00000010, 0x00000001, 0x00000000 },
};

/* @ 0x0120, 120 bytes: FTAttributes.sub_0x120 target (was dSamusMain_pre+0x120) */
FTModelPart dSamusMain_modelparts_desc_0x120[6] = {
	{ (Gfx*)&dSamusModel_Joint_0x20C8_DisplayList, (MObjSub**)dSamusModel_Joint_0x0040_post_sub_0xC34, (AObjEvent32**)&dSamusModel_gap_0x3B24_sub_0x488, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_Joint_0x5960_DisplayList, (MObjSub**)&dSamusModel_gap_0x3B24_sub_0x1150, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x488, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1184, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0xE4C, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x13F0, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1184, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0xE4C, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x13F0, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1734, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x148C, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x1990, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1734, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x148C, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x1990, NULL, 0x00 },
};

/* @ 0x0198, 80 bytes: FTAttributes.sub_0x198 target (was dSamusMain_pre+0x198) */
FTModelPart dSamusMain_modelparts_desc_0x198[4] = {
	{ (Gfx*)&dSamusModel_Joint_0x2608_DisplayList, (MObjSub**)dSamusModel_Joint_0x0040_post_sub_0xC58, (AObjEvent32**)&dSamusModel_gap_0x3B24_sub_0x4A0, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_Joint_0x5E00_DisplayList, (MObjSub**)&dSamusModel_gap_0x3B24_sub_0x1174, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x4A0, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x79C, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x5FC, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x9B0, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0xBEC, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0xADC, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0xDB0, NULL, 0x00 },
};

/* @ 0x01E8, 40 bytes: FTAttributes.sub_0x1E8 target (was dSamusMain_pre+0x1E8) */
FTModelPart dSamusMain_modelparts_desc_0x1E8[2] = {
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1DBC, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x1D2C, NULL, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x1FC0, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1DBC, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x1D2C, NULL, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x1FC0, 0x00 },
};

/* @ 0x0210, 40 bytes: FTAttributes.sub_0x210 target (was dSamusMain_pre+0x210) */
FTModelPart dSamusMain_modelparts_desc_0x210[2] = {
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x216C, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x20DC, NULL, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x2370, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x216C, (MObjSub**)&dSamusModel_gap_0x6FD4_sub_0x20DC, NULL, (AObjEvent32**)&dSamusModel_gap_0x6FD4_sub_0x2370, 0x00 },
};

/* @ 0x0238, 80 bytes: FTAttributes.sub_0x238 target (was dSamusMain_pre+0x238) */
FTModelPart dSamusMain_modelparts_desc_0x238[4] = {
	{ (Gfx*)&dSamusModel_Joint_0x2C20_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_Joint_0x2C20_DisplayList, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1A9C, NULL, NULL, NULL, 0x00 },
	{ (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x1A9C, NULL, NULL, NULL, 0x00 },
};

/* @ 0x0288, 132 bytes: FTAttributes.modelparts_container target (was dSamusMain_pre+0x288) */
FTModelPartDesc *dSamusMain_modelparts_container[33] = {
	NULL, NULL, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x120, NULL, NULL, NULL,
	(FTModelPartDesc*)dSamusMain_modelparts_desc_0x198, NULL, NULL, NULL, NULL, NULL,
	NULL, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x1E8, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x210, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x210, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x210, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x210,
	(FTModelPartDesc*)dSamusMain_modelparts_desc_0x210, NULL, (FTModelPartDesc*)dSamusMain_modelparts_desc_0x238, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL,
};

/* @ 0x030C, 32 bytes: FTAttributes.commonparts_container target (was dSamusMain_pre+0x30C) */
FTCommonPartContainer dSamusMain_commonparts_container = {
	{
		{ (DObjDesc*)&dSamusModel_JointTree, (MObjSub***)dSamusModel_gap_0x0000, (AObjEvent32***)((u8*)dSamusModel_JointTree + 0x5E0), 0x00 },
		{ (DObjDesc*)&dSamusModel_JointTree_0x69D0, (MObjSub***)&dSamusModel_gap_0x3B24_sub_0x4DC, (AObjEvent32***)((u8*)dSamusModel_JointTree_0x69D0 + 0x5E0), 0x00 },
	},
};

/* @ 0x032C, 432 bytes: FTAttributes.thrown_status target (was dSamusMain_pre+0x32C) */
FTThrownStatus dSamusMain_thrown_status[54] = {
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

/* @ 0x04DC, 20 bytes: FTAttributes.sub_0x4DC target (was dSamusMain_pre+0x4DC) */
int *dSamusMain_stock_luts[5] = {
	(int*)&dSamusModel_palette_0xE220,
	(int*)&dSamusModel_gap_0xE240_sub_0x8,
	(int*)&dSamusModel_gap_0xE240_sub_0x30,
	(int*)&dSamusModel_gap_0xE240_sub_0x58,
	(int*)&dSamusModel_gap_0xE240_sub_0x80,
};

/* @ 0x04F0, 12 bytes: FTAttributes.sprites target (was dSamusMain_pre+0x4F0) */
FTSprites dSamusMain_sprites = {
	(Sprite*)dSamusModel_Stock, /* stock_sprite */
	(int**)dSamusMain_stock_luts, /* stock_luts */
	(Sprite*)dSamusModel_FTEmblem, /* emblem */
};

/* @ 0x04FC, 264 bytes: FTAttributes.sub_0x4FC target (was dSamusMain_pre+0x4FC) */
FTSkeleton dSamusMain_skeleton_dls[33] = {
	{ { NULL }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3D84 }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3D8C }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3D94 }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3D9C }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DA4 }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DAC }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DB4 }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DBC }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DC4 }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DCC }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { NULL }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DD4 }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DDC }, 1 },
	{ { NULL }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DE4 }, 1 },
	{ { NULL }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DEC }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DF4 }, 1 },
	{ { NULL }, 1 },
	{ { (Gfx*)&dSamusModel_gap_0x6FD4_sub_0x3DFC }, 1 },
	{ { NULL }, 1 },
};

/* @ 0x0604, 12 bytes: FTAttributes.skeleton target (was dSamusMain_pre+0x604) */
FTSkeleton *dSamusMain_skeleton[3] = {
	(FTSkeleton*)13,
	dSamusMain_skeleton_dls,
	NULL,
};

FTAttributes dSamusMain_attr = {
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
	56.0f, /* dash_speed */
	3.0f, /* dash_decel */
	54.0f, /* run_speed */
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
	1850.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	660.0f, /* camera_zoom_base */
	{ 500.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 440.0f, 550.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceSamusDead, nSYAudioFGMSamusDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceSamusDeadUp, /* deadup_sfx */
	nSYAudioVoiceSamusDamage, /* damage_sfx */
	{ nSYAudioVoiceSamusSmash1, nSYAudioVoiceSamusSmash2, nSYAudioVoiceSamusSmash3 }, /* smash_sfx */
	{ { 107.0f, 0.0f }, { 386.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
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
	(u32*)dSamusMain_setup_parts, /* setup_parts */
	(u32*)dSamusMain_animlock, /* animlock */
	{ 13, 16, 28, 33, 9 }, /* effect_joint_ids */
	{ FALSE, TRUE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dSamusMain_hiddenparts, /* hiddenparts */
	&dSamusMain_commonparts_container, /* commonparts_container */
	(void *)&dSamusShieldPose_data0, /* dobj_lookup */
	{ (void *)&dSamusShieldPose_data0_end, (void *)&dSamusShieldPose_shield_anim_joint_1, (void *)&dSamusShieldPose_shield_anim_joint_2, (void *)&dSamusShieldPose_shield_anim_joint_3, (void *)&dSamusShieldPose_shield_anim_joint_4, (void *)&dSamusShieldPose_shield_anim_joint_5, (void *)&dSamusShieldPose_shield_anim_joint_6, (void *)&dSamusShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	31, /* joint_rfoot_id */
	176.271f, /* joint_rfoot_rotate */
	26, /* joint_lfoot_id */
	176.271f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0E, 0x42, 0xD3, 0xA3, 0x54, 0x00, 0x00, 0x00, 0x07, 0x42, 0xD3, 0xA6, 0x66 }, /* filler_0x30C */
	100.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dSamusMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	36, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dSamusMain_thrown_status, /* thrown_status */
	11, /* joint_itemlight_id */
	&dSamusMain_sprites, /* sprites */
	(FTSkeleton**)dSamusMain_skeleton, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dSamusMain_pad[2] = {
	0x00000000, 0x00000000,
};
