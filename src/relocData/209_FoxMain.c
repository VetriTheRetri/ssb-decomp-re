/* Fighter Main data for relocData file 209 (FoxMain) */
/* File size: 1984 bytes (0x7C0) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

/* Pre-attributes data (283 words, 0x046C bytes) */
/* @ 0x0000, 16 bytes: FTAttributes.file_handles target (was dFoxMain_pre+0x0) */
u32 dFoxMain_file_handles[4] = {

	0x00010000, /* extern -> 0x0000 */
	0x000200AC, /* extern -> 0x02B0 */
	0x00030B0C, /* extern -> 0x2C30 */
	0x00180000, /* extern -> 0x0000 */
};

/* @ 0x0010, 8 bytes: FTAttributes.animlock target (was dFoxMain_pre+0x10) */
u32 dFoxMain_animlock[2] = {
	0x10425200,
	0x00000000,
};

/* @ 0x0018, 8 bytes: FTAttributes.setup_parts target (was dFoxMain_pre+0x18) */
u32 dFoxMain_setup_parts[2] = {
	0xFFFFFFC0,
	0x00000000,
};

/* @ 0x0020, 64 bytes: FTAttributes.hiddenparts target */
FTHiddenPart dFoxMain_hiddenparts[4] = {
	{ 2, 0, 1, 3 },
	{ 1, 0, 0, 3 },
	{ 3, 2, 1, 0 },
	{ 30, 4, 1, 0 },
};

/* @ 0x0060, 80 bytes: modelparts_desc[0] pointed-to by modelparts_container.
 * The backing type is `FTModelPart[4]` — two 2-entry FTModelPartDesc groups. */
FTModelPart dFoxMain_modelparts_desc_0x060[4] = {
	{ (Gfx*)0x001D077E, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x002212C8, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x0027180C, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x002C1850, NULL, NULL, NULL, 0 },
};

/* @ 0x00B0, 80 bytes: modelparts_desc[1] (FTModelPart[4]) */
FTModelPart dFoxMain_modelparts_desc_0x0B0[4] = {
	{ (Gfx*)0x003108C6, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x003613F0, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x003B1774, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x004017B8, NULL, NULL, NULL, 0 },
};

/* @ 0x0100, 40 bytes: modelparts_desc[2] — FoxUnknown DLs (FTModelPart[2]) */
FTModelPart dFoxMain_modelparts_desc_0x100[2] = {
	{ (Gfx*)0x004500FC, NULL, NULL, NULL, 0 },
	{ (Gfx*)0x006700FC, NULL, NULL, NULL, 0 },
};

/* @ 0x0128, 108 bytes: FTAttributes.modelparts_container target.
 * FTPARTS_JOINT_NUM_MAX is 37; this file only packs 27 joint-slots. */
FTModelPartDesc *dFoxMain_modelparts_container[27] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dFoxMain_modelparts_desc_0x060,
	NULL, NULL, NULL, NULL, NULL,
	(FTModelPartDesc*)dFoxMain_modelparts_desc_0x0B0,
	(FTModelPartDesc*)dFoxMain_modelparts_desc_0x100,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
};

/* @ 0x0194, 8 bytes: FTAttributes.textureparts_container target */
FTTexturePartContainer dFoxMain_textureparts_container = {
	{
		{ 0x0C, { 0x00, 0x00 } },
		{ 0x0C, { 0x01, 0x01 } },
	},
};

/* @ 0x019C, 32 bytes: FTAttributes.commonparts_container target */
FTCommonPartContainer dFoxMain_commonparts_container = {
	{
		{ (DObjDesc*)0x00680A4E, (MObjSub***)0x00690000, (AObjEvent32***)0x006B0B84, 0 },
		{ (DObjDesc*)0x006C1544, (MObjSub***)0x006D0C4C, (AObjEvent32***)0x00DB1678, 0 },
	},
};

/* @ 0x01BC, 432 bytes: FTAttributes.thrown_status target */
FTThrownStatus dFoxMain_thrown_status[54] = {
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  187 },
	{   -1,  188 },
	{  183,  186 },
	{   -1,  186 },
	{  183,  187 },
	{   -1,  188 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  187 },
	{   -1,  188 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  187 },
	{   -1,  188 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  187 },
	{   -1,  188 },
	{  183,  186 },
	{   -1,  186 },
	{  183,  187 },
	{   -1,  188 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  187 },
	{   -1,  188 },
	{   -1,  186 },
	{   -1,  186 },
	{   -1,  187 },
	{   -1,  188 },
	{   -1,  186 },
	{   -1,  186 },
	{  183,  186 },
	{   -1,  186 },
};

/* @ 0x036C, 16 bytes: LUT-pointer array pointed-to by dFoxMain_sprites.stock_luts */
int *dFoxMain_stock_luts[4] = {
	(int*)0x00DC1EE0,
	(int*)0x00DD1EEA,
	(int*)0x00DE1EF4,
	(int*)0x00DF1EFE,
};

/* @ 0x037C, 12 bytes: FTAttributes.sprites target */
FTSprites dFoxMain_sprites = {
	(Sprite*)0x00E11F0A, /* stock_sprite */
	dFoxMain_stock_luts, /* stock_luts */
	(Sprite*)0x00E41F82, /* emblem */
};

/* @ 0x0388, 216 bytes: electric-damage skeleton DL array (FTSkeleton[27]) */
FTSkeleton dFoxMain_skeleton_dls[27] = {
	{ { NULL }, 0 },
	{ { (Gfx*)0x00E61890 }, 0 },
	{ { (Gfx*)0x00EA18C8 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x00EC1A88 }, 0 },
	{ { (Gfx*)0x00EE1A44 }, 0 },
	{ { (Gfx*)0x00F21AC4 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x00F619AC }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x00F81A88 }, 0 },
	{ { (Gfx*)0x00FA1A44 }, 0 },
	{ { (Gfx*)0x01001B04 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x01021B4C }, 0 },
	{ { (Gfx*)0x01061B78 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x010A1BA4 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x010C1B4C }, 0 },
	{ { (Gfx*)0x01101B78 }, 0 },
	{ { NULL }, 0 },
	{ { (Gfx*)0x01121BA4 }, 0 },
	{ { (Gfx*)0x01D11C08 }, 0 },
	{ { NULL }, 0 },
	{ { NULL }, 0 },
};

/* @ 0x0460, 12 bytes: FTAttributes.skeleton target.
 * Slot 0 stores a joint id (cast as pointer — see ftdisplaymain.c:939);
 * slot 1 points at the per-joint FTSkeleton array; slot 2 is NULL. */
FTSkeleton *dFoxMain_skeleton[3] = {
	(FTSkeleton*)12,
	dFoxMain_skeleton_dls,
	NULL,
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
	{ nSYAudioVoiceFoxDead, nSYAudioFGMFoxDeadSlam }, /* dead_fgm_ids */
	nSYAudioVoiceFoxDeadUp, /* deadup_sfx */
	nSYAudioVoiceFoxDamage, /* damage_sfx */
	{ nSYAudioVoiceFoxSmash3, nSYAudioVoiceFoxSmash1, nSYAudioVoiceFoxSmash2 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	nSYAudioFGMVoiceEnd, /* heavyget_sfx */
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

/* Trailing padding (3 words) */
u32 dFoxMain_pad[3] = {
	0x00000000, 0x00000000, 0x00000000,
};
