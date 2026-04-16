/* Fighter Main data for relocData file 225 (LinkMain) */
/* File size: 2640 bytes (0xA50) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern Gfx dLinkBoomerangModel_Joint_0x00F8_DisplayList[];
extern u32 dLinkMainMotion_0x0014[];
extern DObjDesc dLinkModel_JointTree[];
extern DObjDesc dLinkModel_JointTree_0x74B0[];
extern Gfx dLinkModel_Joint_0x2630_DisplayList[];
extern Gfx dLinkModel_Joint_0x2C88_DisplayList[];
extern Gfx dLinkModel_Joint_0x2E08_DisplayList[];
extern Gfx dLinkModel_Joint_0x2EF0_DisplayList[];
extern Gfx dLinkModel_Joint_0x3398_DisplayList[];
extern Gfx dLinkModel_Joint_0x6370_DisplayList[];
extern Gfx dLinkModel_Joint_0x6950_DisplayList[];
extern Gfx dLinkModel_Joint_0x6A30_DisplayList[];
extern Gfx dLinkModel_Joint_0x6E08_DisplayList[];
extern Gfx dLinkModel_Joint_0x7DB0_DisplayList[];
extern Gfx dLinkModel_Joint_0x7EA8_DisplayList[];
extern Gfx dLinkModel_Joint_0x7F98_DisplayList[];
extern Gfx dLinkModel_Joint_0x93B8_DisplayList[];
extern Gfx dLinkModel_Joint_0x94F0_DisplayList[];
extern Gfx dLinkModel_Joint_0x9B98_DisplayList[];
extern u8 dLinkModel_Tex_0xE338[];
extern u8 dLinkModel_gap_0x0000[];
extern u8 dLinkModel_gap_0x0000_sub_0x18[];
extern u8 dLinkModel_gap_0x11CC0_sub_0x30[];
extern u8 dLinkModel_gap_0x11CC0_sub_0x58[];
extern u8 dLinkModel_gap_0x11CC0_sub_0x8[];
extern u8 dLinkModel_gap_0x40EC_sub_0x238[];
extern u8 dLinkModel_gap_0x40EC_sub_0x244[];
extern u8 dLinkModel_gap_0x40EC_sub_0x254[];
extern u8 dLinkModel_gap_0x40EC_sub_0x7E4[];
extern u8 dLinkModel_gap_0x40EC_sub_0x7F4[];
extern u8 dLinkModel_gap_0x7AE0_sub_0x204[];
extern u8 dLinkModel_gap_0x7AE0_sub_0x210[];
extern u8 dLinkModel_gap_0x8110_sub_0x270[];
extern u8 dLinkModel_gap_0x8110_sub_0x5B0[];
extern u8 dLinkModel_gap_0x8110_sub_0x5C0[];
extern u8 dLinkModel_gap_0x8110_sub_0xB0[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x1048[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x10F8[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x12B8[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x1378[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x358[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x618[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x6E8[];
extern u8 dLinkModel_gap_0x9DA8_sub_0x958[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xB58[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xC68[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xCC[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xD48[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xD8[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xE28[];
extern u8 dLinkModel_gap_0x9DA8_sub_0xF38[];
extern u16 dLinkModel_palette_0x11CA0[];
extern WPAttributes dLinkSpecial1_Boomerang_WeaponAttributes;
extern DObjDesc dLinkSpecial2_EntryWaveDObjDesc[];
extern DObjDesc dLinkSpecial2_SpinAttackDObjDesc[];

/* Pre-attributes data (450 words, 0x0708 bytes) */
/* @ 0x0000, 192 bytes: FTAttributes.file_handles target (was dLinkMain_pre+0x0) */
u32 dLinkMain_file_handles[48] = {

	(u32)&dLinkMainMotion_0x0014, /* extern -> 0x0014 */
	(u32)&dLinkSpecial2_EntryWaveDObjDesc, /* extern -> 0x03F8 */
	(u32)&dLinkSpecial1_Boomerang_WeaponAttributes, /* extern -> 0x0000 */
	(u32)((u8*)dLinkModel_Tex_0xE338 + 0x35D0), /* extern -> 0x11908 */
	(u32)((u8*)dLinkModel_Tex_0xE338 + 0x2D70), /* extern -> 0x110A8 */
	(u32)((u8*)dLinkModel_Tex_0xE338 + 0x3658), /* extern -> 0x11990 */
	(u32)((u8*)dLinkModel_Tex_0xE338 + 0x3708), /* extern -> 0x11A40 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00960000,
	0xFF6A0096,
	0x01900780,
	0x0C814000,
	0x01A10184,
	0x07800000,
	(u32)((u8*)dLinkSpecial2_SpinAttackDObjDesc + 0x718), /* extern -> 0x18D8 */
	0x00000000,
	(u32)((u8*)dLinkSpecial2_SpinAttackDObjDesc + 0x7D0), /* extern -> 0x1990 */
	0x00000000,
	0xB8000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00640064,
	0x00640071,
	0x0000FF8F,
	0x007100DC,
	0x14014020,
	0x00001040,
	0x270F0C00,
	0x0E4390E4,
	0x1E000000,
	0x005A4140,
	0x012C0000,
	0x025A4140,
	0x00E60000,
	0x045A4140,
	0x00960000,
	0x065A4140,
	0x00000000,
	0x3F4CCCCD,
	0x3F800000,
	0x3F99999A,
	0x3FB33333,
	0x3FCCCCCD,
	0x3FE66666,
};

/* @ 0x00C0, 8 bytes: FTAttributes.animlock target (was dLinkMain_pre+0xC0) */
u32 dLinkMain_animlock[2] = {
	0x108004A4,
	0x00000000,
};

/* @ 0x00C8, 8 bytes: FTAttributes.setup_parts target (was dLinkMain_pre+0xC8) */
u32 dLinkMain_setup_parts[2] = {
	0xFFF9FFFE,
	0x00000000,
};

/* @ 0x00D0, 96 bytes: FTAttributes.hiddenparts target (was dLinkMain_pre+0xD0) */
u32 dLinkMain_hiddenparts[24] = {
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
	0x00000023,
	0x00000004,
	0x00000001,
	0x00000000,
	0x00000011,
	0x00000010,
	0x00000001,
	0x00000000,
	0x00000012,
	0x00000010,
	0x00000001,
	0x00000000,
};

/* @ 0x0130, 120 bytes: FTAttributes.sub_0x130 target (was dLinkMain_pre+0x130) */
u32 dLinkMain_sub_0x130[30] = {
	(u32)&dLinkModel_Joint_0x2630_DisplayList, /* extern -> 0x2630 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x6370_DisplayList, /* extern -> 0x6370 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkBoomerangModel_Joint_0x00F8_DisplayList, /* extern -> 0x00F8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkBoomerangModel_Joint_0x00F8_DisplayList, /* extern -> 0x00F8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x358, /* extern -> 0xA100 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x358, /* extern -> 0xA100 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x01A8, 40 bytes: FTAttributes.sub_0x1A8 target (was dLinkMain_pre+0x1A8) */
u32 dLinkMain_sub_0x1A8[10] = {
	(u32)&dLinkModel_Joint_0x7DB0_DisplayList, /* extern -> 0x7DB0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x7DB0_DisplayList, /* extern -> 0x7DB0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x01D0, 40 bytes: FTAttributes.sub_0x1D0 target (was dLinkMain_pre+0x1D0) */
u32 dLinkMain_sub_0x1D0[10] = {
	(u32)&dLinkModel_Joint_0x7EA8_DisplayList, /* extern -> 0x7EA8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x7EA8_DisplayList, /* extern -> 0x7EA8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x01F8, 40 bytes: FTAttributes.sub_0x1F8 target (was dLinkMain_pre+0x1F8) */
u32 dLinkMain_sub_0x1F8[10] = {
	(u32)&dLinkModel_Joint_0x7F98_DisplayList, /* extern -> 0x7F98 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x7F98_DisplayList, /* extern -> 0x7F98 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0220, 40 bytes: FTAttributes.sub_0x220 target (was dLinkMain_pre+0x220) */
u32 dLinkMain_sub_0x220[10] = {
	(u32)&dLinkModel_Joint_0x2C88_DisplayList, /* extern -> 0x2C88 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x2C88_DisplayList, /* extern -> 0x2C88 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0248, 40 bytes: FTAttributes.sub_0x248 target (was dLinkMain_pre+0x248) */
u32 dLinkMain_sub_0x248[10] = {
	(u32)&dLinkModel_gap_0x8110_sub_0xB0, /* extern -> 0x81C0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x8110_sub_0x270, /* extern -> 0x8380 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0270, 40 bytes: FTAttributes.sub_0x270 target (was dLinkMain_pre+0x270) */
u32 dLinkMain_sub_0x270[10] = {
	(u32)&dLinkModel_Joint_0x2C88_DisplayList, /* extern -> 0x2C88 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x2C88_DisplayList, /* extern -> 0x2C88 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0298, 80 bytes: FTAttributes.sub_0x298 target (was dLinkMain_pre+0x298) */
u32 dLinkMain_sub_0x298[20] = {
	(u32)&dLinkModel_Joint_0x2E08_DisplayList, /* extern -> 0x2E08 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x6950_DisplayList, /* extern -> 0x6950 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x93B8_DisplayList, /* extern -> 0x93B8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x93B8_DisplayList, /* extern -> 0x93B8 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x02E8, 80 bytes: FTAttributes.sub_0x2E8 target (was dLinkMain_pre+0x2E8) */
u32 dLinkMain_sub_0x2E8[20] = {
	(u32)&dLinkModel_Joint_0x2EF0_DisplayList, /* extern -> 0x2EF0 */
	(u32)((u8*)dLinkModel_gap_0x0000_sub_0x18 + 0x578), /* extern -> 0x0590 */
	(u32)&dLinkModel_gap_0x40EC_sub_0x238, /* extern -> 0x4324 */
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x6A30_DisplayList, /* extern -> 0x6A30 */
	(u32)&dLinkModel_gap_0x40EC_sub_0x7E4, /* extern -> 0x48D0 */
	(u32)&dLinkModel_gap_0x7AE0_sub_0x204, /* extern -> 0x7CE4 */
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x94F0_DisplayList, /* extern -> 0x94F0 */
	(u32)&dLinkModel_gap_0x8110_sub_0x5B0, /* extern -> 0x86C0 */
	(u32)&dLinkModel_gap_0x9DA8_sub_0xCC, /* extern -> 0x9E74 */
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x94F0_DisplayList, /* extern -> 0x94F0 */
	(u32)&dLinkModel_gap_0x8110_sub_0x5B0, /* extern -> 0x86C0 */
	(u32)&dLinkModel_gap_0x9DA8_sub_0xCC, /* extern -> 0x9E74 */
	0x00000000,
	0x00000000,
};

/* @ 0x0338, 80 bytes: FTAttributes.sub_0x338 target (was dLinkMain_pre+0x338) */
u32 dLinkMain_sub_0x338[20] = {
	(u32)&dLinkModel_Joint_0x3398_DisplayList, /* extern -> 0x3398 */
	(u32)((u8*)dLinkModel_gap_0x0000_sub_0x18 + 0x588), /* extern -> 0x05A0 */
	(u32)&dLinkModel_gap_0x40EC_sub_0x244, /* extern -> 0x4330 */
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x6E08_DisplayList, /* extern -> 0x6E08 */
	(u32)&dLinkModel_gap_0x40EC_sub_0x7F4, /* extern -> 0x48E0 */
	(u32)&dLinkModel_gap_0x7AE0_sub_0x210, /* extern -> 0x7CF0 */
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x9B98_DisplayList, /* extern -> 0x9B98 */
	(u32)&dLinkModel_gap_0x8110_sub_0x5C0, /* extern -> 0x86D0 */
	(u32)&dLinkModel_gap_0x9DA8_sub_0xD8, /* extern -> 0x9E80 */
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_Joint_0x9B98_DisplayList, /* extern -> 0x9B98 */
	(u32)&dLinkModel_gap_0x8110_sub_0x5C0, /* extern -> 0x86D0 */
	(u32)&dLinkModel_gap_0x9DA8_sub_0xD8, /* extern -> 0x9E80 */
	0x00000000,
	0x00000000,
};

/* @ 0x0388, 128 bytes: FTAttributes.modelparts_container target (was dLinkMain_pre+0x388) */
u32 dLinkMain_modelparts_container[32] = {
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dLinkMain_sub_0x130, /* intern -> 0x0130 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dLinkMain_sub_0x1A8, /* intern -> 0x01A8 */
	(u32)dLinkMain_sub_0x1D0, /* intern -> 0x01D0 */
	(u32)dLinkMain_sub_0x1F8, /* intern -> 0x01F8 */
	(u32)dLinkMain_sub_0x220, /* intern -> 0x0220 */
	(u32)dLinkMain_sub_0x248, /* intern -> 0x0248 */
	(u32)dLinkMain_sub_0x270, /* intern -> 0x0270 */
	(u32)dLinkMain_sub_0x298, /* intern -> 0x0298 */
	(u32)dLinkMain_sub_0x2E8, /* intern -> 0x02E8 */
	(u32)dLinkMain_sub_0x338, /* intern -> 0x0338 */
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

/* @ 0x0408, 8 bytes: FTAttributes.textureparts_container target (was dLinkMain_pre+0x408) */
u32 dLinkMain_textureparts_container[2] = {
	0x17000017,
	0x01010000,
};

/* @ 0x0410, 32 bytes: FTAttributes.commonparts_container target (was dLinkMain_pre+0x410) */
u32 dLinkMain_commonparts_container[8] = {
	(u32)&dLinkModel_JointTree, /* extern -> 0x3AE8 */
	(u32)&dLinkModel_gap_0x0000, /* extern -> 0x0000 */
	(u32)((u8*)dLinkModel_JointTree + 0x5B8), /* extern -> 0x40A0 */
	0x00000000,
	(u32)&dLinkModel_JointTree_0x74B0, /* extern -> 0x74B0 */
	(u32)&dLinkModel_gap_0x40EC_sub_0x254, /* extern -> 0x4340 */
	(u32)((u8*)dLinkModel_JointTree_0x74B0 + 0x5B0), /* extern -> 0x7A60 */
	0x00000000,
};

/* @ 0x0430, 432 bytes: FTAttributes.thrown_status target (was dLinkMain_pre+0x430) */
u32 dLinkMain_thrown_status[108] = {
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

/* @ 0x05E0, 16 bytes: FTAttributes.sub_0x5E0 target (was dLinkMain_pre+0x5E0) */
u32 dLinkMain_sub_0x5E0[4] = {
	(u32)&dLinkModel_palette_0x11CA0, /* extern -> 0x11CA0 */
	(u32)&dLinkModel_gap_0x11CC0_sub_0x8, /* extern -> 0x11CC8 */
	(u32)&dLinkModel_gap_0x11CC0_sub_0x30, /* extern -> 0x11CF0 */
	(u32)&dLinkModel_gap_0x11CC0_sub_0x58, /* extern -> 0x11D18 */
};

/* @ 0x05F0, 12 bytes: FTAttributes.sprites target (was dLinkMain_pre+0x5F0) */
u32 dLinkMain_sprites[3] = {
	(u32)((u8*)dLinkModel_gap_0x11CC0_sub_0x58 + 0x30), /* extern -> 0x11D48 */
	(u32)dLinkMain_sub_0x5E0, /* intern -> 0x05E0 */
	(u32)((u8*)dLinkModel_gap_0x11CC0_sub_0x58 + 0x210), /* extern -> 0x11F28 */
};

/* @ 0x05FC, 256 bytes: FTAttributes.sub_0x5FC target (was dLinkMain_pre+0x5FC) */
u32 dLinkMain_sub_0x5FC[64] = {
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x618, /* extern -> 0xA3C0 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x6E8, /* extern -> 0xA490 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xC68, /* extern -> 0xAA10 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xB58, /* extern -> 0xA900 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xD48, /* extern -> 0xAAF0 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x12B8, /* extern -> 0xB060 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xC68, /* extern -> 0xAA10 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xB58, /* extern -> 0xA900 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xE28, /* extern -> 0xABD0 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x1378, /* extern -> 0xB120 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x958, /* extern -> 0xA700 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xF38, /* extern -> 0xACE0 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x1048, /* extern -> 0xADF0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x10F8, /* extern -> 0xAEA0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0xF38, /* extern -> 0xACE0 */
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x1048, /* extern -> 0xADF0 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dLinkModel_gap_0x9DA8_sub_0x10F8, /* extern -> 0xAEA0 */
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x06FC, 12 bytes: FTAttributes.skeleton target (was dLinkMain_pre+0x6FC) */
u32 dLinkMain_skeleton[3] = {
	0x00000017,
	(u32)dLinkMain_sub_0x5FC, /* intern -> 0x05FC */
	0x00000000,
};

FTAttributes dLinkMain_attr = {
	1.24f, /* size */
	80.0f, /* walkslow_anim_length */
	60.0f, /* walkmiddle_anim_length */
	35.0f, /* walkfast_anim_length */
	0.0f, /* throw_walkslow_anim_length */
	0.0f, /* throw_walkmiddle_anim_length */
	0.0f, /* throw_walkfast_anim_length */
	16.0f, /* rebound_anim_length */
	0.37f, /* walk_speed_mul */
	2.0f, /* traction */
	68.0f, /* dash_speed */
	5.4f, /* dash_decel */
	42.0f, /* run_speed */
	7.0f, /* kneebend_anim_length */
	0.35f, /* jump_vel_x */
	0.7f, /* jump_height_mul */
	36.0f, /* jump_height_base */
	0.35f, /* jumpaerial_vel_x */
	0.9f, /* jumpaerial_height */
	0.04f, /* air_accel */
	31.0f, /* air_speed_max_x */
	0.0f, /* air_friction */
	3.4f, /* gravity */
	64.0f, /* tvel_base */
	102.0f, /* tvel_fast */
	2, /* jumps_max */
	0.96f, /* weight */
	24.0f, /* attack1_followup_frames */
	16.0f, /* dash_to_run */
	280.0f, /* shield_size */
	90.0f, /* shield_break_vel_y */
	200.0f, /* shadow_size */
	112.5f, /* jostle_width */
	0.0f, /* jostle_x */
	FALSE, /* is_metallic */
	250.0f, /* cam_offset_y */
	1700.0f, /* closeup_camera_zoom */
	1.0f, /* camera_zoom */
	630.0f, /* camera_zoom_base */
	{ 400.0f, 250.0f, 0.0f, 150.0f }, /* map_coll */
	{ 280.0f, 400.0f }, /* cliffcatch_coll */
	{ 0x019D, 0x0123 }, /* dead_fgm_ids */
	0x0195, /* deadup_sfx */
	0x0197, /* damage_sfx */
	{ 0x0191, 0x0192, 0x0193 }, /* smash_sfx */
	{ { 105.0f, 0.0f }, { 378.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x019B, /* heavyget_sfx */
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
		{ 5, 1, TRUE, { 0.0f, 0.0f, 0.0f }, { 90.0f, 60.0f, 78.0f } },
		{ 6, 1, TRUE, { 0.0f, 40.0f, 0.0f }, { 98.0f, 111.0f, 78.0f } },
		{ 23, 2, TRUE, { 0.0f, 30.0f, 0.0f }, { 68.0f, 84.0f, 88.0f } },
		{ 13, 1, FALSE, { 24.0f, 0.0f, 0.0f }, { 85.0f, 41.0f, 41.0f } },
		{ 8, 1, FALSE, { 24.0f, 0.0f, 0.0f }, { 85.0f, 41.0f, 41.0f } },
		{ 14, 1, FALSE, { 33.0f, 0.0f, 0.0f }, { 99.0f, 33.0f, 33.0f } },
		{ 9, 1, FALSE, { 33.0f, 0.0f, 0.0f }, { 99.0f, 33.0f, 33.0f } },
		{ 31, 0, TRUE, { 45.0f, 3.0f, 0.0f }, { 86.0f, 38.0f, 46.0f } },
		{ 26, 0, TRUE, { 45.0f, -3.0f, 0.0f }, { 86.0f, 38.0f, 46.0f } },
		{ 32, 0, FALSE, { 43.0f, 3.0f, 0.0f }, { 121.0f, 43.0f, 51.0f } },
		{ 27, 0, FALSE, { 43.0f, -3.0f, 0.0f }, { 121.0f, 43.0f, 51.0f } },
	},
	{ 1200.0f, 600.0f, 1200.0f }, /* hit_detect_range */
	(u32*)dLinkMain_setup_parts, /* setup_parts */
	(u32*)dLinkMain_animlock, /* animlock */
	{ 23, 14, 27, 32, 9 }, /* effect_joint_ids */
	{ FALSE, FALSE, FALSE, FALSE, FALSE }, /* cliff_status_ga */
	0, /* unused_0x2CC */
	(FTHiddenPart*)dLinkMain_hiddenparts, /* hiddenparts */
	(FTCommonPartContainer*)dLinkMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
	30, /* joint_rfoot_id */
	92.628f, /* joint_rfoot_rotate */
	25, /* joint_lfoot_id */
	92.628f, /* joint_lfoot_rotate */
	{ 0x00, 0x00, 0x00, 0x0C, 0x42, 0x77, 0xAE, 0x14, 0x00, 0x00, 0x00, 0x07, 0x42, 0x79, 0x9C, 0xAC }, /* filler_0x30C */
	50.0f, /* unk_0x31C */
	0.5235988f, /* unk_0x320 */
	NULL, /* translate_scales */
	(FTModelPartContainer*)dLinkMain_modelparts_container, /* modelparts_container */
	NULL, /* accesspart */
	(FTTexturePartContainer*)dLinkMain_textureparts_container, /* textureparts_container */
	35, /* joint_itemheavy_id */
	(FTThrownStatusArray*)dLinkMain_thrown_status, /* thrown_status */
	16, /* joint_itemlight_id */
	(FTSprites*)dLinkMain_sprites, /* sprites */
	(FTSkeleton**)dLinkMain_skeleton, /* skeleton */
};
