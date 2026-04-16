/* Fighter Main data for relocData file 215 (GDonkeyMain) */
/* File size: 1808 bytes (0x710) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dDonkeyMainMotion_0x0000[];
extern DObjDesc dDonkeyModel_JointTree[];
extern DObjDesc dDonkeyModel_JointTree_0x6EC0[];
extern Gfx dDonkeyModel_Joint_0x2760_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x2930_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x2F08_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x6188_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x61F8_DisplayList[];
extern Gfx dDonkeyModel_Joint_0x6748_DisplayList[];
extern u8 dDonkeyModel_gap_0x0000[];
extern u8 dDonkeyModel_gap_0x0000_sub_0x18[];
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

	(u32)&dDonkeyMainMotion_0x0000, /* extern -> 0x0000 */
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
u32 dGDonkeyMain_hiddenparts[16] = {
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

/* @ 0x0058, 80 bytes: FTAttributes.sub_0x058 target (was dGDonkeyMain_pre+0x58) */
u32 dGDonkeyMain_sub_0x058[20] = {
	(u32)&dDonkeyModel_Joint_0x2760_DisplayList, /* extern -> 0x2760 */
	(u32)((u8*)dDonkeyModel_gap_0x0000_sub_0x18 + 0xF00), /* extern -> 0x0F18 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x5D4, /* extern -> 0x444C */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_Joint_0x6188_DisplayList, /* extern -> 0x6188 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x11F8, /* extern -> 0x5070 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x4A4, /* extern -> 0x7834 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0xBA8, /* extern -> 0x7F38 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0xAC0, /* extern -> 0x7E50 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0xD08, /* extern -> 0x8098 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0xE48, /* extern -> 0x81D8 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0xDA0, /* extern -> 0x8130 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0xF78, /* extern -> 0x8308 */
	0x00000000,
	0x00000000,
};

/* @ 0x00A8, 120 bytes: FTAttributes.sub_0x0A8 target (was dGDonkeyMain_pre+0xA8) */
u32 dGDonkeyMain_sub_0x0A8[30] = {
	(u32)&dDonkeyModel_Joint_0x2930_DisplayList, /* extern -> 0x2930 */
	(u32)((u8*)dDonkeyModel_gap_0x0000_sub_0x18 + 0xF10), /* extern -> 0x0F28 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x5E0, /* extern -> 0x4458 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_Joint_0x61F8_DisplayList, /* extern -> 0x61F8 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x1200, /* extern -> 0x5078 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x4A8, /* extern -> 0x7838 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0x16C8, /* extern -> 0x8A58 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x1230, /* extern -> 0x85C0 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x1B94, /* extern -> 0x8F24 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0x2228, /* extern -> 0x95B8 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x1E60, /* extern -> 0x91F0 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x26B4, /* extern -> 0x9A44 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0x2E28, /* extern -> 0xA1B8 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x2980, /* extern -> 0x9D10 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x32F4, /* extern -> 0xA684 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0x3978, /* extern -> 0xAD08 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x35C0, /* extern -> 0xA950 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x3E04, /* extern -> 0xB194 */
	0x00000000,
	0x00000000,
};

/* @ 0x0120, 80 bytes: FTAttributes.sub_0x120 target (was dGDonkeyMain_pre+0x120) */
u32 dGDonkeyMain_sub_0x120[20] = {
	(u32)&dDonkeyModel_Joint_0x2F08_DisplayList, /* extern -> 0x2F08 */
	(u32)((u8*)dDonkeyModel_gap_0x0000_sub_0x18 + 0xF38), /* extern -> 0x0F50 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x5FC, /* extern -> 0x4474 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_Joint_0x6748_DisplayList, /* extern -> 0x6748 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x1228, /* extern -> 0x50A0 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x4C4, /* extern -> 0x7854 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0x658, /* extern -> 0x79E8 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x570, /* extern -> 0x7900 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x7B8, /* extern -> 0x7B48 */
	0x00000000,
	0x00000000,
	(u32)&dDonkeyModel_gap_0x7390_sub_0x8F8, /* extern -> 0x7C88 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0x850, /* extern -> 0x7BE0 */
	(u32)&dDonkeyModel_gap_0x7390_sub_0xA28, /* extern -> 0x7DB8 */
	0x00000000,
	0x00000000,
};

/* @ 0x0170, 104 bytes: FTAttributes.modelparts_container target (was dGDonkeyMain_pre+0x170) */
u32 dGDonkeyMain_modelparts_container[26] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dGDonkeyMain_sub_0x058, /* intern -> 0x0058 */
	0x00000000,
	(u32)dGDonkeyMain_sub_0x0A8, /* intern -> 0x00A8 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dGDonkeyMain_sub_0x120, /* intern -> 0x0120 */
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

/* @ 0x01D8, 32 bytes: FTAttributes.commonparts_container target (was dGDonkeyMain_pre+0x1D8) */
u32 dGDonkeyMain_commonparts_container[8] = {
	(u32)&dDonkeyModel_JointTree, /* extern -> 0x39A8 */
	(u32)&dDonkeyModel_gap_0x0000, /* extern -> 0x0000 */
	(u32)((u8*)dDonkeyModel_JointTree + 0x4A8), /* extern -> 0x3E50 */
	0x00000000,
	(u32)&dDonkeyModel_JointTree_0x6EC0, /* extern -> 0x6EC0 */
	(u32)&dDonkeyModel_gap_0x3E78_sub_0x628, /* extern -> 0x44A0 */
	(u32)((u8*)dDonkeyModel_JointTree_0x6EC0 + 0x4B0), /* extern -> 0x7370 */
	0x00000000,
};

/* @ 0x01F8, 432 bytes: FTAttributes.thrown_status target (was dGDonkeyMain_pre+0x1F8) */
u32 dGDonkeyMain_thrown_status[108] = {
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
	0x000000B5,
	0x000000B8,
	0xFFFFFFFF,
	0x000000BA,
};

/* @ 0x03A8, 20 bytes: FTAttributes.sub_0x3A8 target (was dGDonkeyMain_pre+0x3A8) */
u32 dGDonkeyMain_sub_0x3A8[5] = {
	0x00EB0018, /* extern -> 0x0060 */
	0x00EC0022, /* extern -> 0x0088 */
	0x00ED002C, /* extern -> 0x00B0 */
	0x00EE0036, /* extern -> 0x00D8 */
	0x00EF0040, /* extern -> 0x0100 */
};

/* @ 0x03BC, 12 bytes: FTAttributes.sprites target (was dGDonkeyMain_pre+0x3BC) */
u32 dGDonkeyMain_sprites[3] = {
	0x00F1004C, /* extern -> 0x0130 */
	(u32)dGDonkeyMain_sub_0x3A8, /* intern -> 0x03A8 */
	0x01A800BE, /* extern -> 0x02F8 */
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
	(FTCommonPartContainer*)dGDonkeyMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
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
	(FTSprites*)dGDonkeyMain_sprites, /* sprites */
	NULL, /* skeleton */
};
