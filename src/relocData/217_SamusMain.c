/* Fighter Main data for relocData file 217 (SamusMain) */
/* File size: 2400 bytes (0x960) */

#include "relocdata_types.h"
#include <ft/fttypes.h>

extern u32 dSamusMainMotion_0x0084[];
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

	(u32)&dSamusMainMotion_0x0084, /* extern -> 0x0084 */
	(u32)&dSamusSpecial2_GrappleBeamDObjDesc, /* extern -> 0x0380 */
	(u32)&dSamusSpecial1_ChargeShot_WeaponAttributes, /* extern -> 0x0000 */
	(u32)((u8*)dSamusModel_Tex_0xD618 + 0xAC0), /* extern -> 0xE0D8 */
	(u32)((u8*)dSamusModel_Tex_0xD618 + 0x9F0), /* extern -> 0xE008 */
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
u32 dSamusMain_hiddenparts[52] = {
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
	0x00000024,
	0x00000004,
	0x00000001,
	0x00000000,
	0x00000011,
	0x00000010,
	0x00000001,
	0x00000000,
	0x00000012,
	0x00000011,
	0x00000001,
	0x00000000,
	0x00000013,
	0x00000012,
	0x00000001,
	0x00000000,
	0x00000014,
	0x00000013,
	0x00000001,
	0x00000000,
	0x00000015,
	0x00000014,
	0x00000001,
	0x00000000,
	0x00000016,
	0x00000015,
	0x00000001,
	0x00000000,
	0x00000017,
	0x00000016,
	0x00000001,
	0x00000000,
	0x00000018,
	0x00000010,
	0x00000001,
	0x00000000,
	0x00000019,
	0x00000010,
	0x00000001,
	0x00000000,
};

/* @ 0x0120, 120 bytes: FTAttributes.sub_0x120 target (was dSamusMain_pre+0x120) */
u32 dSamusMain_sub_0x120[30] = {
	(u32)&dSamusModel_Joint_0x20C8_DisplayList, /* extern -> 0x20C8 */
	0x004A031D, /* extern -> 0x0C74 */
	(u32)&dSamusModel_gap_0x3B24_sub_0x488, /* extern -> 0x3FAC */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_Joint_0x5960_DisplayList, /* extern -> 0x5960 */
	(u32)&dSamusModel_gap_0x3B24_sub_0x1150, /* extern -> 0x4C74 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x488, /* extern -> 0x745C */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1184, /* extern -> 0x8158 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0xE4C, /* extern -> 0x7E20 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x13F0, /* extern -> 0x83C4 */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1184, /* extern -> 0x8158 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0xE4C, /* extern -> 0x7E20 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x13F0, /* extern -> 0x83C4 */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1734, /* extern -> 0x8708 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x148C, /* extern -> 0x8460 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1990, /* extern -> 0x8964 */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1734, /* extern -> 0x8708 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x148C, /* extern -> 0x8460 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1990, /* extern -> 0x8964 */
	0x00000000,
	0x00000000,
};

/* @ 0x0198, 80 bytes: FTAttributes.sub_0x198 target (was dSamusMain_pre+0x198) */
u32 dSamusMain_sub_0x198[20] = {
	(u32)&dSamusModel_Joint_0x2608_DisplayList, /* extern -> 0x2608 */
	0x00680326, /* extern -> 0x0C98 */
	(u32)&dSamusModel_gap_0x3B24_sub_0x4A0, /* extern -> 0x3FC4 */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_Joint_0x5E00_DisplayList, /* extern -> 0x5E00 */
	(u32)&dSamusModel_gap_0x3B24_sub_0x1174, /* extern -> 0x4C98 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x4A0, /* extern -> 0x7474 */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x79C, /* extern -> 0x7770 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x5FC, /* extern -> 0x75D0 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x9B0, /* extern -> 0x7984 */
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0xBEC, /* extern -> 0x7BC0 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0xADC, /* extern -> 0x7AB0 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0xDB0, /* extern -> 0x7D84 */
	0x00000000,
	0x00000000,
};

/* @ 0x01E8, 40 bytes: FTAttributes.sub_0x1E8 target (was dSamusMain_pre+0x1E8) */
u32 dSamusMain_sub_0x1E8[10] = {
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1DBC, /* extern -> 0x8D90 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1D2C, /* extern -> 0x8D00 */
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1FC0, /* extern -> 0x8F94 */
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1DBC, /* extern -> 0x8D90 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1D2C, /* extern -> 0x8D00 */
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1FC0, /* extern -> 0x8F94 */
	0x00000000,
};

/* @ 0x0210, 40 bytes: FTAttributes.sub_0x210 target (was dSamusMain_pre+0x210) */
u32 dSamusMain_sub_0x210[10] = {
	(u32)&dSamusModel_gap_0x6FD4_sub_0x216C, /* extern -> 0x9140 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x20DC, /* extern -> 0x90B0 */
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x2370, /* extern -> 0x9344 */
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x216C, /* extern -> 0x9140 */
	(u32)&dSamusModel_gap_0x6FD4_sub_0x20DC, /* extern -> 0x90B0 */
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x2370, /* extern -> 0x9344 */
	0x00000000,
};

/* @ 0x0238, 80 bytes: FTAttributes.sub_0x238 target (was dSamusMain_pre+0x238) */
u32 dSamusMain_sub_0x238[20] = {
	(u32)&dSamusModel_Joint_0x2C20_DisplayList, /* extern -> 0x2C20 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_Joint_0x2C20_DisplayList, /* extern -> 0x2C20 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1A9C, /* extern -> 0x8A70 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x1A9C, /* extern -> 0x8A70 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};

/* @ 0x0288, 132 bytes: FTAttributes.modelparts_container target (was dSamusMain_pre+0x288) */
u32 dSamusMain_modelparts_container[33] = {
	0x00000000,
	0x00000000,
	(u32)dSamusMain_sub_0x120, /* intern -> 0x0120 */
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dSamusMain_sub_0x198, /* intern -> 0x0198 */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	(u32)dSamusMain_sub_0x1E8, /* intern -> 0x01E8 */
	(u32)dSamusMain_sub_0x210, /* intern -> 0x0210 */
	(u32)dSamusMain_sub_0x210, /* intern -> 0x0210 */
	(u32)dSamusMain_sub_0x210, /* intern -> 0x0210 */
	(u32)dSamusMain_sub_0x210, /* intern -> 0x0210 */
	(u32)dSamusMain_sub_0x210, /* intern -> 0x0210 */
	0x00000000,
	(u32)dSamusMain_sub_0x238, /* intern -> 0x0238 */
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

/* @ 0x030C, 32 bytes: FTAttributes.commonparts_container target (was dSamusMain_pre+0x30C) */
u32 dSamusMain_commonparts_container[8] = {
	(u32)&dSamusModel_JointTree, /* extern -> 0x3520 */
	0x00C50000, /* extern -> 0x0000 */
	(u32)((u8*)dSamusModel_JointTree + 0x5E0), /* extern -> 0x3B00 */
	0x00000000,
	(u32)&dSamusModel_JointTree_0x69D0, /* extern -> 0x69D0 */
	(u32)&dSamusModel_gap_0x3B24_sub_0x4DC, /* extern -> 0x4000 */
	(u32)((u8*)dSamusModel_JointTree_0x69D0 + 0x5E0), /* extern -> 0x6FB0 */
	0x00000000,
};

/* @ 0x032C, 432 bytes: FTAttributes.thrown_status target (was dSamusMain_pre+0x32C) */
u32 dSamusMain_thrown_status[108] = {
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

/* @ 0x04DC, 20 bytes: FTAttributes.sub_0x4DC target (was dSamusMain_pre+0x4DC) */
u32 dSamusMain_sub_0x4DC[5] = {
	(u32)&dSamusModel_palette_0xE220, /* extern -> 0xE220 */
	(u32)&dSamusModel_gap_0xE240_sub_0x8, /* extern -> 0xE248 */
	(u32)&dSamusModel_gap_0xE240_sub_0x30, /* extern -> 0xE270 */
	(u32)&dSamusModel_gap_0xE240_sub_0x58, /* extern -> 0xE298 */
	(u32)&dSamusModel_gap_0xE240_sub_0x80, /* extern -> 0xE2C0 */
};

/* @ 0x04F0, 12 bytes: FTAttributes.sprites target (was dSamusMain_pre+0x4F0) */
u32 dSamusMain_sprites[3] = {
	(u32)((u8*)dSamusModel_gap_0xE240_sub_0x80 + 0x30), /* extern -> 0xE2F0 */
	(u32)dSamusMain_sub_0x4DC, /* intern -> 0x04DC */
	(u32)((u8*)dSamusModel_gap_0xE240_sub_0x80 + 0x248), /* extern -> 0xE508 */
};

/* @ 0x04FC, 264 bytes: FTAttributes.sub_0x4FC target (was dSamusMain_pre+0x4FC) */
u32 dSamusMain_sub_0x4FC[66] = {
	0x00000000,
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3D84, /* extern -> 0xAD58 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3D8C, /* extern -> 0xAD60 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3D94, /* extern -> 0xAD68 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3D9C, /* extern -> 0xAD70 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DA4, /* extern -> 0xAD78 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DAC, /* extern -> 0xAD80 */
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DB4, /* extern -> 0xAD88 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DBC, /* extern -> 0xAD90 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DC4, /* extern -> 0xAD98 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DCC, /* extern -> 0xADA0 */
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	0x00000000,
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DD4, /* extern -> 0xADA8 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DDC, /* extern -> 0xADB0 */
	0x01000000,
	0x00000000,
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DE4, /* extern -> 0xADB8 */
	0x01000000,
	0x00000000,
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DEC, /* extern -> 0xADC0 */
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DF4, /* extern -> 0xADC8 */
	0x01000000,
	0x00000000,
	0x01000000,
	(u32)&dSamusModel_gap_0x6FD4_sub_0x3DFC, /* extern -> 0xADD0 */
	0x01000000,
	0x00000000,
	0x01000000,
};

/* @ 0x0604, 12 bytes: FTAttributes.skeleton target (was dSamusMain_pre+0x604) */
u32 dSamusMain_skeleton[3] = {
	0x0000000D,
	(u32)dSamusMain_sub_0x4FC, /* intern -> 0x04FC */
	0x00000000,
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
	{ 0x0246, 0x0128 }, /* dead_fgm_ids */
	0x0240, /* deadup_sfx */
	0x0245, /* damage_sfx */
	{ 0x023D, 0x023E, 0x023F }, /* smash_sfx */
	{ { 107.0f, 0.0f }, { 386.0f, 200.0f }, { 75.0f, 0.0f }, { 150.0f, 150.0f } }, /* item_pickup */
	0x0064, /* itemthrow_vel_scale */
	0x0064, /* itemthrow_damage_scale */
	0x02B7, /* heavyget_sfx */
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
	(FTCommonPartContainer*)dSamusMain_commonparts_container, /* commonparts_container */
	NULL, /* dobj_lookup */
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }, /* shield_anim_joints */
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
	(FTSprites*)dSamusMain_sprites, /* sprites */
	(FTSkeleton**)dSamusMain_skeleton, /* skeleton */
};

/* Trailing padding (2 words) */
u32 dSamusMain_pad[2] = {
	0x00000000, 0x00000000,
};
