/* Fighter Main data for relocData file 236 (CaptainMain) */
/* File size: 2000 bytes (0x7D0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

/* Pre-attributes data (290 words, 0x0488 bytes) */
/* @ 0x0000, 12 bytes: FTAttributes.file_handles target (was dCaptainMain_pre+0x0) */
u32 dCaptainMain_file_handles[3] = {

	0x0001001B, /* extern -> 0x006C */
	0x000201D8, /* extern -> 0x0760 */
	0x001702C2, /* extern -> 0x0B08 */
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
u32 dCaptainMain_hiddenparts[16] = {
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

/* @ 0x005C, 120 bytes: FTAttributes.sub_0x05C target (was dCaptainMain_pre+0x5C) */
u32 dCaptainMain_sub_0x05C[30] = {
	0x00180AA6, /* extern -> 0x2A98 */
	0x00190483, /* extern -> 0x120C */
	0x001C120D, /* extern -> 0x4834 */
	0x00000000,
	0x00000000,
	0x001D1ABC, /* extern -> 0x6AF0 */
	0x001E1615, /* extern -> 0x5854 */
	0x00212119, /* extern -> 0x8464 */
	0x00000000,
	0x00000000,
	0x0022252A, /* extern -> 0x94A8 */
	0x002324E2, /* extern -> 0x9388 */
	0x002625AD, /* extern -> 0x96B4 */
	0x00000000,
	0x00000000,
	0x00272600, /* extern -> 0x9800 */
	0x002825D6, /* extern -> 0x9758 */
	0x002B2653, /* extern -> 0x994C */
	0x00000000,
	0x00000000,
	0x002C26E2, /* extern -> 0x9B88 */
	0x002D269E, /* extern -> 0x9A78 */
	0x00302769, /* extern -> 0x9DA4 */
	0x00000000,
	0x00000000,
	0x003127B4, /* extern -> 0x9ED0 */
	0x00322792, /* extern -> 0x9E48 */
	0x00352803, /* extern -> 0xA00C */
	0x00000000,
	0x00000000,
};

/* @ 0x00D4, 120 bytes: FTAttributes.sub_0x0D4 target (was dCaptainMain_pre+0xD4) */
u32 dCaptainMain_sub_0x0D4[30] = {
	0x00360CC2, /* extern -> 0x3308 */
	0x00370492, /* extern -> 0x1248 */
	0x003A1218, /* extern -> 0x4860 */
	0x00000000,
	0x00000000,
	0x003B1C52, /* extern -> 0x7148 */
	0x003C1621, /* extern -> 0x5884 */
	0x003F2121, /* extern -> 0x8484 */
	0x00000000,
	0x00000000,
	0x004021BE, /* extern -> 0x86F8 */
	0x00412176, /* extern -> 0x85D8 */
	0x00442241, /* extern -> 0x8904 */
	0x00000000,
	0x00000000,
	0x00452294, /* extern -> 0x8A50 */
	0x0046226A, /* extern -> 0x89A8 */
	0x004922E7, /* extern -> 0x8B9C */
	0x00000000,
	0x00000000,
	0x004A2376, /* extern -> 0x8DD8 */
	0x004B2332, /* extern -> 0x8CC8 */
	0x004E23FD, /* extern -> 0x8FF4 */
	0x00000000,
	0x00000000,
	0x004F2448, /* extern -> 0x9120 */
	0x00502426, /* extern -> 0x9098 */
	0x006E2497, /* extern -> 0x925C */
	0x00000000,
	0x00000000,
};

/* @ 0x014C, 104 bytes: FTAttributes.modelparts_container target (was dCaptainMain_pre+0x14C) */
u32 dCaptainMain_modelparts_container[26] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x005F0017, /* intern -> 0x005C */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00E90035, /* intern -> 0x00D4 */
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

/* @ 0x01B4, 4 bytes: FTAttributes.textureparts_container target (was dCaptainMain_pre+0x1B4) */
u32 dCaptainMain_textureparts_container[1] = {
	0x0C000000,
};

/* @ 0x01B8, 32 bytes: FTAttributes.commonparts_container target (was dCaptainMain_pre+0x1B8) */
u32 dCaptainMain_commonparts_container[8] = {
	0x006F0EF8, /* extern -> 0x3BE0 */
	0x00700000, /* extern -> 0x0000 */
	0x00721024, /* extern -> 0x4090 */
	0x00000000,
	0x00731E40, /* extern -> 0x7900 */
	0x00741224, /* extern -> 0x4890 */
	0x00E21F6C, /* extern -> 0x7DB0 */
	0x00000000,
};

/* @ 0x01D8, 432 bytes: FTAttributes.thrown_status target (was dCaptainMain_pre+0x1D8) */
u32 dCaptainMain_thrown_status[108] = {
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

/* @ 0x0388, 24 bytes: FTAttributes.sub_0x388 target (was dCaptainMain_pre+0x388) */
u32 dCaptainMain_sub_0x388[6] = {
	0x00E3316C, /* extern -> 0xC5B0 */
	0x00E43176, /* extern -> 0xC5D8 */
	0x00E53180, /* extern -> 0xC600 */
	0x00E6318A, /* extern -> 0xC628 */
	0x00E73194, /* extern -> 0xC650 */
	0x00E8319E, /* extern -> 0xC678 */
};

/* @ 0x03A0, 12 bytes: FTAttributes.sprites target (was dCaptainMain_pre+0x3A0) */
u32 dCaptainMain_sprites[3] = {
	0x00EA31AA, /* extern -> 0xC6A8 */
	0x012000E2, /* intern -> 0x0388 */
	0x00ED3212, /* extern -> 0xC848 */
};

/* @ 0x03AC, 208 bytes: FTAttributes.sub_0x3AC target (was dCaptainMain_pre+0x3AC) */
u32 dCaptainMain_sub_0x3AC[52] = {
	0x00000000,
	0x00000000,
	0x00EF2824, /* extern -> 0xA090 */
	0x00000000,
	0x00F32858, /* extern -> 0xA160 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00F529A4, /* extern -> 0xA690 */
	0x00000000,
	0x00F72960, /* extern -> 0xA580 */
	0x00000000,
	0x00FB2A40, /* extern -> 0xA900 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00FF28E4, /* extern -> 0xA390 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x01012A00, /* extern -> 0xA800 */
	0x00000000,
	0x01032960, /* extern -> 0xA580 */
	0x00000000,
	0x010B2A80, /* extern -> 0xAA00 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x010D2AC8, /* extern -> 0xAB20 */
	0x00000000,
	0x01112B0C, /* extern -> 0xAC30 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x01152B44, /* extern -> 0xAD10 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x01172AC8, /* extern -> 0xAB20 */
	0x00000000,
	0x011B2B0C, /* extern -> 0xAC30 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x01D82B44, /* extern -> 0xAD10 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x047C, 12 bytes: FTAttributes.skeleton target (was dCaptainMain_pre+0x47C) */
u32 dCaptainMain_skeleton[3] = {
	0x0000000C,
	0x01C900EB, /* intern -> 0x03AC */
	0x00000000,
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
	NULL, /* setup_parts */
	NULL, /* animlock */
	{ 12, 15, 21, 26, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	NULL, /* hiddenparts */
	NULL, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	24, /* joint_rfoot_id */
	176.271f, /* joint_rfoot_rotate */
	19, /* joint_lfoot_id */
	176.271f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0D, 0x42, 0xD3, 0xA3, 0x54, 0x00, 0x00, 0x00, 0x07, 0x42, 0xD3, 0xA6, 0x66 }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	NULL, /* modelparts_container */
	NULL, /* accesspart */
	NULL, /* textureparts_container */
	29, /* joint_itemheavy_id */
	NULL, /* thrown_status */
	17, /* joint_itemlight_id */
	NULL, /* sprites */
	NULL, /* skeleton */
};
