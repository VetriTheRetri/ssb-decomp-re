/* Fighter Main data for relocData file 215 (GDonkeyMain) */
/* File size: 1808 bytes (0x710) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern FTModelPart dGDonkeyMain_modelparts_desc_0x058[];
extern FTModelPart dGDonkeyMain_modelparts_desc_0x0A8[];
extern FTModelPart dGDonkeyMain_modelparts_desc_0x120[];
extern FTThrownStatus dGDonkeyMain_thrown_status[];
extern u32 dDkIcon_Stock[];
extern u16 dDkIcon_Stock_lut0[];
extern u16 dDkIcon_Stock_lut1[];
extern u16 dDkIcon_Stock_lut2[];
extern u16 dDkIcon_Stock_lut3[];
extern u16 dDkIcon_Stock_lut4[];
extern u32 dDkIcon_FTEmblem[];
extern AObjEvent32 **dDonkeyModel_gap_0x3E50[];
extern AObjEvent32 **dDonkeyModel_gap_0x7370[];
extern u8 dDonkeyShieldPose_data0[];
extern u8 dDonkeyShieldPose_data0_end[];
extern u8 dDonkeyShieldPose_shield_anim_joint_1[];
extern u8 dDonkeyShieldPose_shield_anim_joint_2[];
extern u8 dDonkeyShieldPose_shield_anim_joint_3[];
extern u8 dDonkeyShieldPose_shield_anim_joint_4[];
extern u8 dDonkeyShieldPose_shield_anim_joint_5[];
extern u8 dDonkeyShieldPose_shield_anim_joint_6[];
extern u8 dDonkeyShieldPose_shield_anim_joint_7[];

extern u32 dDonkeyMainMotion_EggLay_0x0000[];
extern DObjDesc dDonkeyModel_JointTree[];
extern DObjDesc dDonkeyModel_JointTree_0x6EC0[];
extern Gfx dDonkeyModel_Joint_0x2760_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x2930_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x2F08_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x6188_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x61F8_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x6748_DisplayList[];
extern MObjSub **dDonkeyModel_gap_0x0000[];
extern MObjSub *dDonkeyModel_Joint_0x0080_post_sub_0xE98[];
extern MObjSub *dDonkeyModel_Joint_0x0080_post_sub_0xEA8[];
extern MObjSub *dDonkeyModel_Joint_0x0080_post_sub_0xED0[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x11F8[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x1200[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x1228[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x5D4[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x5E0[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x5FC[];
extern u8 dDonkeyModel_gap_0x3E78_sub_0x628[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x1230[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x16C8[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x1B94[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x1E60[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x2228[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x26B4[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x2980[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x2E28[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x32F4[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x35C0[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x3978[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x3E04[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x4A4[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x4A8[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x4C4[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x570[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x658[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x7B8[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x850[];
extern u8 dDonkeyModel_gap_0x7390_sub_0x8F8[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xA28[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xAC0[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xBA8[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xD08[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xDA0[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xE48[];
extern u8 dDonkeyModel_gap_0x7390_sub_0xF78[];
extern DObjDesc dDonkeySpecial2_EntryTaruDObjDesc[];

/* Pre-attributes data (242 words, 0x03C8 bytes) */
/* @ 0x0000, 8 bytes: FTAttributes.file_handles target (was dGDonkeyMain_pre+0x0) */
u32 dGDonkeyMain_file_handles[2] = {

	(u32)&dDonkeyMainMotion_EggLay_0x0000, /* extern -> 0x0000 */
	(u32)&dDonkeySpecial2_EntryTaruDObjDesc, /* extern -> 0x07C8 */
};

/* @ 0x0008, 8 bytes: FTAttributes.animlock target (was dGDonkeyMain_pre+0x8) */
u32 dGDonkeyMain_animlock[2] = {
	0x10412900,
	0x00000000,
};

/* @ 0x0010, 8 bytes: FTAttributes.setup_parts target (was dGDonkeyMain_pre+0x10) */
u32 dGDonkeyMain_setup_parts[2] = {
	0xFFFFFF80,
	0x00000000,
};

/* @ 0x0018, 64 bytes: FTAttributes.hiddenparts target (was dGDonkeyMain_pre+0x18) */
FTHiddenPart dGDonkeyMain_hiddenparts[4] = {
	{ 0x00000002, 0x00000000, 0x00000001, 0x00000003 },
	{ 0x00000001, 0x00000000, 0x00000000, 0x00000003 },
	{ 0x00000003, 0x00000002, 0x00000001, 0x00000000 },
	{ 0x0000001D, 0x00000004, 0x00000001, 0x00000000 },
};

/* @ 0x0058, 80 bytes: FTAttributes.sub_0x058 target (was dGDonkeyMain_pre+0x58) */
FTModelPart dGDonkeyMain_modelparts_desc_0x058[4] = {
	{ (Gfx*)&dDonkeyModel_Joint_0x2760_DisplayList, (MObjSub**)&dDonkeyModel_Joint_0x0080_post_sub_0xE98, (AObjEvent32**)&dDonkeyModel_gap_0x3E78_sub_0x5D4, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_Joint_0x6188_DisplayList, (MObjSub**)&dDonkeyModel_gap_0x3E78_sub_0x11F8, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x4A4, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0xBA8, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0xAC0, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0xD08, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0xE48, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0xDA0, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0xF78, NULL, 0x00 },
};

/* @ 0x00A8, 120 bytes: FTAttributes.sub_0x0A8 target (was dGDonkeyMain_pre+0xA8) */
FTModelPart dGDonkeyMain_modelparts_desc_0x0A8[6] = {
	{ (Gfx*)&dDonkeyModel_Joint_0x2930_DisplayList, (MObjSub**)&dDonkeyModel_Joint_0x0080_post_sub_0xEA8, (AObjEvent32**)&dDonkeyModel_gap_0x3E78_sub_0x5E0, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_Joint_0x61F8_DisplayList, (MObjSub**)&dDonkeyModel_gap_0x3E78_sub_0x1200, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x4A8, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0x16C8, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0x1230, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x1B94, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0x2228, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0x1E60, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x26B4, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0x2E28, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0x2980, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x32F4, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0x3978, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0x35C0, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x3E04, NULL, 0x00 },
};

/* @ 0x0120, 80 bytes: FTAttributes.sub_0x120 target (was dGDonkeyMain_pre+0x120) */
FTModelPart dGDonkeyMain_modelparts_desc_0x120[4] = {
	{ (Gfx*)&dDonkeyModel_Joint_0x2F08_DisplayList, (MObjSub**)&dDonkeyModel_Joint_0x0080_post_sub_0xED0, (AObjEvent32**)&dDonkeyModel_gap_0x3E78_sub_0x5FC, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_Joint_0x6748_DisplayList, (MObjSub**)&dDonkeyModel_gap_0x3E78_sub_0x1228, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x4C4, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0x658, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0x570, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0x7B8, NULL, 0x00 },
	{ (Gfx*)&dDonkeyModel_gap_0x7390_sub_0x8F8, (MObjSub**)&dDonkeyModel_gap_0x7390_sub_0x850, (AObjEvent32**)&dDonkeyModel_gap_0x7390_sub_0xA28, NULL, 0x00 },
};

/* @ 0x0170, 104 bytes: FTAttributes.modelparts_container target (was dGDonkeyMain_pre+0x170) */
FTModelPartDesc *dGDonkeyMain_modelparts_container[26] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dGDonkeyMain_modelparts_desc_0x058, NULL, (FTModelPartDesc*)dGDonkeyMain_modelparts_desc_0x0A8, NULL, NULL, NULL,
	(FTModelPartDesc*)dGDonkeyMain_modelparts_desc_0x120, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL,
};

/* @ 0x01D8, 32 bytes: FTAttributes.commonparts_container target (was dGDonkeyMain_pre+0x1D8) */
FTCommonPartContainer dGDonkeyMain_commonparts_container = {
	{
		{ (DObjDesc*)&dDonkeyModel_JointTree, (MObjSub***)&dDonkeyModel_gap_0x0000, (AObjEvent32***)dDonkeyModel_gap_0x3E50, 0x00 },
		{ (DObjDesc*)&dDonkeyModel_JointTree_0x6EC0, (MObjSub***)&dDonkeyModel_gap_0x3E78_sub_0x628, (AObjEvent32***)dDonkeyModel_gap_0x7370, 0x00 },
	},
};

/* @ 0x01F8, 432 bytes: FTAttributes.thrown_status target (was dGDonkeyMain_pre+0x1F8) */
FTThrownStatus dGDonkeyMain_thrown_status[54] = {
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
	{  nFTCommonStatusThrownStart, nFTCommonStatusShouldered   },
	{                          -1, nFTCommonStatusThrownCommon },
};

u32 dGDonkeyMain_stock_luts[1] = { (u32)dDkIcon_Stock_lut0 };

u32 dGDonkeyMain_data_0x03AC[1] = { (u32)dDkIcon_Stock_lut1 };

u32 dGDonkeyMain_data_0x03B0[1] = { (u32)dDkIcon_Stock_lut2 };

u32 dGDonkeyMain_data_0x03B4[1] = { (u32)dDkIcon_Stock_lut3 };

u32 dGDonkeyMain_data_0x03B8[1] = { (u32)dDkIcon_Stock_lut4 };


/* @ 0x03BC, 12 bytes: FTAttributes.sprites target (was dGDonkeyMain_pre+0x3BC) */
FTSprites dGDonkeyMain_sprites = {
	(Sprite*)dDkIcon_Stock, /* stock_sprite */
	(int**)dGDonkeyMain_stock_luts, /* stock_luts */
	(Sprite*)dDkIcon_FTEmblem, /* emblem */
};

FTAttributes dGDonkeyMain_attr = {
	2.0f, /* size */
	50.0f, /* walkslow_anim_length */
	35.0f, /* walkmiddle_anim_length */
	20.0f, /* walkfast_anim_length */
	50.0f, /* throw_walkslow_anim_length */
	35.0f, /* throw_walkmiddle_anim_length */
	20.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.5f, /* walk_speed_mul */
	1.6f, /* traction */
	90.0f, /* dash_speed */
	5.5f, /* dash_decel */
	70.0f, /* run_speed */
	8.0f, /* kneebend_anim_length */
	0.5f, /* jump_vel_x */
	0.85f, /* jump_height_mul */
	65.0f, /* jump_height_base */
	0.5f, /* jumpaerial_vel_x */
	1.0f, /* jumpaerial_height */
	0.025f, /* air_accel */
	30.0f, /* air_speed_max_x */
	0.3f, /* air_friction */
	4.0f, /* gravity */
	72.0f, /* tvel_base */
	100.0f, /* tvel_fast */
	2, /* jumps_max */
	0.93f, /* weight */
	28.0f, /* attack1_followup_frames */
	19.0f, /* dash_to_run */
	350.0f, /* shield_size */
	120.0f, /* shield_break_vel_y */
	350.0f, /* shadow_size */
	140.0f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	2000.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	1000.0f, /* camera_zoom_base */
	{ 500.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 500.0f, 600.0f }, /* cliffcatch_coll */
	{ nSYAudioVoiceDonkeyDead2, nSYAudioFGMDonkeyDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceDonkeyDeadUp, /* deadup_sfx */
	nSYAudioVoiceDonkeyDamage, /* damage_sfx */
	{ nSYAudioVoiceDonkeySmash1, nSYAudioVoiceDonkeySmash2, nSYAudioVoiceDonkeySmash3 }, /* smash_sfx */
	{ { 163.0f, 0.0f }, { 490.0f, 150.0f }, { 116.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioVoiceDonkeyHeavyGet, /* heavyget_sfx */
	1.7f, /* halo_size */
	{ { 0xFF, 0xFF, 0xFF, 0x50 }, { 0x00, 0x00, 0x00, 0x50 }, { 0x00, 0x00, 0x00, 0x00 } }, /* shade_color */
	{ 0x80, 0x00, 0x00, 0x00 }, /* fog_color */
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
	0, /* is_have_specialairlw */
	1, /* is_have_catch */
	1, /* is_have_voice */
	/* damage_coll_descs */
	{
		{ 5, 1, TRUE, { 0.0f, 0.0f, 0.0f }, { 143.0f, 106.0f, 116.0f } },
		{ 6, 1, TRUE, { 0.0f, 146.0f, 120.0f }, { 195.0f, 260.0f, 260.0f } },
		{ 12, 2, TRUE, { 0.0f, 0.0f, 15.0f }, { 170.0f, 200.0f, 210.0f } },
		{ 14, 1, TRUE, { 45.0f, 0.0f, 0.0f }, { 170.0f, 88.0f, 92.0f } },
		{ 8, 1, TRUE, { 45.0f, 0.0f, 0.0f }, { 170.0f, 88.0f, 92.0f } },
		{ 15, 1, FALSE, { 94.0f, 0.0f, 0.0f }, { 207.0f, 96.0f, 108.0f } },
		{ 9, 1, FALSE, { 94.0f, 0.0f, 0.0f }, { 207.0f, 96.0f, 108.0f } },
		{ 25, 0, FALSE, { 57.0f, 0.0f, 0.0f }, { 133.0f, 60.0f, 64.0f } },
		{ 20, 0, FALSE, { 57.0f, 0.0f, 0.0f }, { 133.0f, 60.0f, 64.0f } },
		{ 26, 0, FALSE, { 64.0f, 8.0f, 0.0f }, { 174.0f, 70.0f, 64.0f } },
		{ 21, 0, FALSE, { 64.0f, 8.0f, 0.0f }, { 174.0f, 70.0f, 64.0f } },
	},
	{ 2400.0f, 1200.0f, 2400.0f }, /* hit_detect_range */
	(u32*)dGDonkeyMain_setup_parts, /* setup_parts */
	(u32*)dGDonkeyMain_animlock, /* animlock */
	{ 12, 15, 21, 26, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dGDonkeyMain_hiddenparts, /* hiddenparts */
	&dGDonkeyMain_commonparts_container, /* commonparts_container */
	(void *)&dDonkeyShieldPose_data0, /* dobj_lookup */
	{ (void *)&dDonkeyShieldPose_data0_end, (void *)&dDonkeyShieldPose_shield_anim_joint_1, (void *)&dDonkeyShieldPose_shield_anim_joint_2, (void *)&dDonkeyShieldPose_shield_anim_joint_3, (void *)&dDonkeyShieldPose_shield_anim_joint_4, (void *)&dDonkeyShieldPose_shield_anim_joint_5, (void *)&dDonkeyShieldPose_shield_anim_joint_6, (void *)&dDonkeyShieldPose_shield_anim_joint_7 }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	152.787f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	152.79f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x43, 0x4B, 0x2A, 0x7F, 0x00, 0x00, 0x00, 0x07, 0x43, 0x4B, 0x29, 0xBA }, /* filler_0x30C */
	100.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dGDonkeyMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	29, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dGDonkeyMain_thrown_status, /* thrown_status */
	17, /* joint_itemlight_id */
	&dGDonkeyMain_sprites, /* sprites */
	NULL, /* skeleton */
};
