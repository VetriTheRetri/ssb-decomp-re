/* relocData file 313: FoxModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 *dFoxModel_Joint_0x0060_post_sub_0xC[];
extern u16 dFoxModel_Lut_0x72D8_palette[];
extern u16 dFoxModel_Lut_0x7508_palette[];
extern u16 dFoxModel_Lut_0x7808_palette[];
extern u8 dFoxModel_Tex_0x75D0[];
extern u8 dFoxModel_Tex_0x79D8[];
extern u8 dFoxModel_Tex_0x7AE0[];
extern Vtx dFoxModel_Vtx_0x0890_Vtx[];
extern Vtx dFoxModel_Vtx_0x0910_Vtx[];
extern Vtx dFoxModel_Vtx_0x09A0_Vtx[];
extern Vtx dFoxModel_Vtx_0x0A00_Vtx[];
extern Vtx dFoxModel_Vtx_0x0A60_Vtx[];
extern Vtx dFoxModel_Vtx_0x0AC0_Vtx[];
extern Vtx dFoxModel_Vtx_0x0B10_Vtx[];
extern Vtx dFoxModel_Vtx_0x0BA0_Vtx[];
extern Vtx dFoxModel_Vtx_0x0C30_Vtx[];
extern Vtx dFoxModel_Vtx_0x0C80_Vtx[];
extern Vtx dFoxModel_Vtx_0x0CD0_Vtx[];
extern Vtx dFoxModel_Vtx_0x0D60_Vtx[];
extern Vtx dFoxModel_Vtx_0x0DB0_Vtx[];
extern Vtx dFoxModel_Vtx_0x0E50_Vtx[];
extern Vtx dFoxModel_Vtx_0x0EF0_Vtx[];
extern Vtx dFoxModel_Vtx_0x1050_Vtx[];
extern Vtx dFoxModel_Vtx_0x1120_Vtx[];
extern Vtx dFoxModel_Vtx_0x1310_Vtx[];
extern Vtx dFoxModel_Vtx_0x13A0_Vtx[];
extern Vtx dFoxModel_Vtx_0x13F0_Vtx[];
extern Vtx dFoxModel_Vtx_0x1440_Vtx[];
extern Vtx dFoxModel_Vtx_0x14D0_Vtx[];
extern Vtx dFoxModel_Vtx_0x1590_Vtx[];
extern Vtx dFoxModel_Vtx_0x1600_Vtx[];
extern Vtx dFoxModel_Vtx_0x1660_Vtx[];
extern Vtx dFoxModel_Vtx_0x16B0_Vtx[];
extern Vtx dFoxModel_Vtx_0x1770_Vtx[];
extern Vtx dFoxModel_Vtx_0x17E0_Vtx[];
extern Vtx dFoxModel_Vtx_0x1840_Vtx[];
extern Vtx dFoxModel_Vtx_0x1890_Vtx[];
extern Vtx dFoxModel_Vtx_0x1920_Vtx[];
extern Vtx dFoxModel_Vtx_0x39C0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3A20_Vtx[];
extern Vtx dFoxModel_Vtx_0x3AA0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3B00_Vtx[];
extern Vtx dFoxModel_Vtx_0x3B60_Vtx[];
extern Vtx dFoxModel_Vtx_0x3BB0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3C30_Vtx[];
extern Vtx dFoxModel_Vtx_0x3CC0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3CF0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3D40_Vtx[];
extern Vtx dFoxModel_Vtx_0x3DD0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3E20_Vtx[];
extern Vtx dFoxModel_Vtx_0x3EA0_Vtx[];
extern Vtx dFoxModel_Vtx_0x3F20_Vtx[];
extern Vtx dFoxModel_Vtx_0x4030_Vtx[];
extern Vtx dFoxModel_Vtx_0x40E0_Vtx[];
extern Vtx dFoxModel_Vtx_0x4280_Vtx[];
extern Vtx dFoxModel_Vtx_0x4310_Vtx[];
extern Vtx dFoxModel_Vtx_0x4340_Vtx[];
extern Vtx dFoxModel_Vtx_0x4390_Vtx[];
extern Vtx dFoxModel_Vtx_0x4420_Vtx[];
extern Vtx dFoxModel_Vtx_0x44A0_Vtx[];
extern Vtx dFoxModel_Vtx_0x44E0_Vtx[];
extern Vtx dFoxModel_Vtx_0x4540_Vtx[];
extern Vtx dFoxModel_Vtx_0x4560_Vtx[];
extern Vtx dFoxModel_Vtx_0x45E0_Vtx[];
extern Vtx dFoxModel_Vtx_0x4620_Vtx[];
extern Vtx dFoxModel_Vtx_0x46A0_Vtx[];
extern Vtx dFoxModel_Vtx_0x46E0_Vtx[];
extern MObjSub **dFoxModel_gap_0x0000[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x1058[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x1158[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x1258[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x1368[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x1408[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x14B8[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x1568[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x2C8[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x418[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x528[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x678[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x788[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x878[];
extern Vtx dFoxModel_gap_0x5A38_sub_0x9D8[];
extern Vtx dFoxModel_gap_0x5A38_sub_0xAF8[];
extern Vtx dFoxModel_gap_0x5A38_sub_0xE38[];
extern Vtx dFoxModel_gap_0x5A38_sub_0xF48[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2B0[];
extern u8 dFoxModel_Joint_0x0060_post[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x284[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB54[];

extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB4C[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xAFC[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB44[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xAF0[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB24[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB10[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB18[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB34[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB2C[];
extern MObjSub *dFoxModel_gap_0x2E60_sub_0xB3C[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2C0[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C0[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C4[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C8[];
/* MObjSub-dispatch table at file 0x0000 (96 bytes, 24 u32 slots).
 * Sparse pointer array — chain-encoded `MObjSub **` pointers to the
 * trailing-index cells inside dFoxModel_Joint_0x0060_post. The original splitter
 * sliced this region into 4 fragments (see git history); the
 * .reloc relationships only make sense as one continuous table. */
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7C0[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7CC[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7E0[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7E8[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7F4[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7FC[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x804[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x80C[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x814[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x81C[];
extern MObjSub *dFoxModel_Joint_0x0060_post_sub_0x824[];

MObjSub **dFoxModel_gap_0x0000[27] = {
	NULL,  /* +0x00 */
	dFoxModel_Joint_0x0060_post_sub_0x7C0,  /* +0x04 */
	dFoxModel_Joint_0x0060_post_sub_0x7CC,  /* +0x08 */
	NULL,  /* +0x0C */
	dFoxModel_Joint_0x0060_post_sub_0x7E0,  /* +0x10 */
	NULL,  /* +0x14 */
	NULL,  /* +0x18 */
	NULL,  /* +0x1C */
	dFoxModel_Joint_0x0060_post_sub_0x7E8,  /* +0x20 */
	NULL,  /* +0x24 */
	dFoxModel_Joint_0x0060_post_sub_0x7F4,  /* +0x28 */
	NULL,  /* +0x2C */
	NULL,  /* +0x30 */
	NULL,  /* +0x34 */
	NULL,  /* +0x38 */
	dFoxModel_Joint_0x0060_post_sub_0x7FC,  /* +0x3C */
	dFoxModel_Joint_0x0060_post_sub_0x804,  /* +0x40 */
	NULL,  /* +0x44 */
	dFoxModel_Joint_0x0060_post_sub_0x80C,  /* +0x48 */
	NULL,  /* +0x4C */
	dFoxModel_Joint_0x0060_post_sub_0x814,  /* +0x50 */
	dFoxModel_Joint_0x0060_post_sub_0x81C,  /* +0x54 */
	NULL,  /* +0x58 */
	dFoxModel_Joint_0x0060_post_sub_0x824,  /* +0x5C */
	NULL,  /* +0x60 */
	NULL,  /* +0x64 */
	NULL,  /* +0x68 */
};

extern u8 dFoxModel_Tex_0x70D0[];
extern u8 dFoxModel_Tex_0x7300[];
extern u8 dFoxModel_Tex_0x7700[];
extern u8 dFoxModel_Tex_0x7830[];
extern u16 dFoxModel_gap_0x7528_sub_0x8[];
extern u16 dFoxModel_gap_0x7528_sub_0x30[];
extern u16 dFoxModel_gap_0x7528_sub_0x58[];
extern u16 dFoxModel_gap_0x7528_sub_0x80[];
extern u16 dFoxModel_gap_0x7828_sub_0x110[];
extern u16 dFoxModel_gap_0x7828_sub_0x138[];
extern u16 dFoxModel_gap_0x7828_sub_0x160[];
extern u16 dFoxModel_gap_0x7828_sub_0x188[];

u16 *dFoxModel_Joint_0x0060_post_sub_0xC[4] = { 
	dFoxModel_gap_0x7528_sub_0x80,
	dFoxModel_gap_0x7528_sub_0x8,
	dFoxModel_gap_0x7528_sub_0x30,
	dFoxModel_gap_0x7528_sub_0x58
};

u8 *dFoxModel_Joint_0x0060_post_sub_0x1C[2] = { 
	dFoxModel_Tex_0x7300,
	dFoxModel_Tex_0x70D0,
};

u8 *dFoxModel_Joint_0x0060_post_sub_0x24[2] = { 
	dFoxModel_Tex_0x7830,
	dFoxModel_Tex_0x7700
};

u16 *dFoxModel_Joint_0x0060_post_sub_0x2C[4] = { 
	dFoxModel_gap_0x7828_sub_0x188,
	dFoxModel_gap_0x7828_sub_0x110,
	dFoxModel_gap_0x7828_sub_0x138,
	dFoxModel_gap_0x7828_sub_0x160
};

PAD(4);

/* MObjSub @ Joint_0x0060_post+0x40 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x40[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x002D, 0x0005, 0x0020, 0x0020,
		0,
		0.15000000596046448f, 0.1809999942779541f,
		0.699999988079071f, 0.75f,
		0.15000000596046448f, 0.699999988079071f,
		(void**)dFoxModel_Joint_0x0060_post_sub_0xC,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.15000000596046448f, 0.1809999942779541f,
		0.15000000596046448f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0xB8 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0xB8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x130 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x130[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x1A8 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x1A8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x220 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x220[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x298 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x298[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dFoxModel_Joint_0x0060_post_sub_0x1C,
		0x0072, 0x000B, 0x0040, 0x0020,
		0,
		0.1599999964237213f, 0.3919999897480011f,
		0.6800000071525574f, 0.2800000011920929f,
		0.1599999964237213f, 0.6800000071525574f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.1599999964237213f, 0.3919999897480011f,
		0.1599999964237213f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x310 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x310[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dFoxModel_Joint_0x0060_post_sub_0x24,
		0x00D5, 0x0014, 0x0020, 0x0010,
		0,
		0.609499990940094f, 0.7577499747276306f,
		0.4129999876022339f, 0.15000000596046448f,
		0.609499990940094f, 0.4129999876022339f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.609499990940094f, 0.7577499747276306f,
		0.609499990940094f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x388 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x388[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x400 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x400[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dFoxModel_Joint_0x0060_post_sub_0x2C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x478 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x478[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x4A, 0x5A, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x4F0 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x4F0[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x568 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x568[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x5E0 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x5E0[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x4A, 0x5A, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x658 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x658[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x6D0 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x6D0[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ Joint_0x0060_post+0x748 */
MObjSub dFoxModel_Joint_0x0060_post_sub_0x748[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x4A, 0x5A, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* === Trailing-index cells @ Joint_0x0060_post+0x7C0..+0x830 === */
MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7C0[3] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x400,
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x478,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7CC[5] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x40,
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0xB8,
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x130,
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x1A8,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7E0[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x220,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7E8[3] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x298,
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x310,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7F4[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x388,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x7FC[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x5E0,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x804[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x568,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x80C[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x4F0,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x814[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x748,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x81C[2] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x6D0,
	NULL,
};

MObjSub *dFoxModel_Joint_0x0060_post_sub_0x824[3] = {
	(MObjSub *)dFoxModel_Joint_0x0060_post_sub_0x658,
	NULL,
	NULL,
};


/* Vtx: Vtx_0x0890 @ 0x890 (8 vertices) */
Vtx dFoxModel_Vtx_0x0890_Vtx[8] = {
	#include <FoxModel/Vtx_0x0890.vtx.inc.c>
};

/* Vtx: Vtx_0x0910 @ 0x910 (9 vertices) */
Vtx dFoxModel_Vtx_0x0910_Vtx[9] = {
	#include <FoxModel/Vtx_0x0910.vtx.inc.c>
};

/* Vtx: Vtx_0x09A0 @ 0x9A0 (6 vertices) */
Vtx dFoxModel_Vtx_0x09A0_Vtx[6] = {
	#include <FoxModel/Vtx_0x09A0.vtx.inc.c>
};

/* Vtx: Vtx_0x0A00 @ 0xA00 (6 vertices) */
Vtx dFoxModel_Vtx_0x0A00_Vtx[6] = {
	#include <FoxModel/Vtx_0x0A00.vtx.inc.c>
};

/* Vtx: Vtx_0x0A60_Vtx @ 0xA60 (6 vertices) */
Vtx dFoxModel_Vtx_0x0A60_Vtx[6] = {
	#include <FoxModel/Vtx_0x0A60.vtx.inc.c>
};

/* Vtx: Vtx_0x0AC0 @ 0xAC0 (5 vertices) */
Vtx dFoxModel_Vtx_0x0AC0_Vtx[5] = {
	#include <FoxModel/Vtx_0x0AC0.vtx.inc.c>
};

/* Vtx: Vtx_0x0B10 @ 0xB10 (9 vertices) */
Vtx dFoxModel_Vtx_0x0B10_Vtx[9] = {
	#include <FoxModel/Vtx_0x0B10.vtx.inc.c>
};

/* Vtx: Vtx_0x0BA0 @ 0xBA0 (9 vertices) */
Vtx dFoxModel_Vtx_0x0BA0_Vtx[9] = {
	#include <FoxModel/Vtx_0x0BA0.vtx.inc.c>
};

/* Vtx: Vtx_0x0C30 @ 0xC30 (5 vertices) */
Vtx dFoxModel_Vtx_0x0C30_Vtx[5] = {
	#include <FoxModel/Vtx_0x0C30.vtx.inc.c>
};

/* Vtx: Vtx_0x0C80 @ 0xC80 (5 vertices) */
Vtx dFoxModel_Vtx_0x0C80_Vtx[5] = {
	#include <FoxModel/Vtx_0x0C80.vtx.inc.c>
};

/* Vtx: Vtx_0x0CD0 @ 0xCD0 (9 vertices) */
Vtx dFoxModel_Vtx_0x0CD0_Vtx[9] = {
	#include <FoxModel/Vtx_0x0CD0.vtx.inc.c>
};

/* Vtx: Vtx_0x0D60 @ 0xD60 (5 vertices) */
Vtx dFoxModel_Vtx_0x0D60_Vtx[5] = {
	#include <FoxModel/Vtx_0x0D60.vtx.inc.c>
};

/* Vtx: Vtx_0x0DB0 @ 0xDB0 (10 vertices) */
Vtx dFoxModel_Vtx_0x0DB0_Vtx[10] = {
	#include <FoxModel/Vtx_0x0DB0.vtx.inc.c>
};

/* Vtx: Vtx_0x0E50 @ 0xE50 (10 vertices) */
Vtx dFoxModel_Vtx_0x0E50_Vtx[10] = {
	#include <FoxModel/Vtx_0x0E50.vtx.inc.c>
};

/* Vtx: Vtx_0x0EF0 @ 0xEF0 (22 vertices) */
Vtx dFoxModel_Vtx_0x0EF0_Vtx[22] = {
	#include <FoxModel/Vtx_0x0EF0.vtx.inc.c>
};

/* Vtx: Vtx_0x1050 @ 0x1050 (13 vertices) */
Vtx dFoxModel_Vtx_0x1050_Vtx[13] = {
	#include <FoxModel/Vtx_0x1050.vtx.inc.c>
};

/* Vtx: Vtx_0x1120 @ 0x1120 (31 vertices) */
Vtx dFoxModel_Vtx_0x1120_Vtx[31] = {
	#include <FoxModel/Vtx_0x1120.vtx.inc.c>
};

/* Vtx: Vtx_0x1310_Vtx @ 0x1310 (9 vertices) */
Vtx dFoxModel_Vtx_0x1310_Vtx[9] = {
	#include <FoxModel/Vtx_0x1310.vtx.inc.c>
};

/* Vtx: Vtx_0x13A0 @ 0x13A0 (5 vertices) */
Vtx dFoxModel_Vtx_0x13A0_Vtx[5] = {
	#include <FoxModel/Vtx_0x13A0.vtx.inc.c>
};

/* Vtx: Vtx_0x13F0 @ 0x13F0 (5 vertices) */
Vtx dFoxModel_Vtx_0x13F0_Vtx[5] = {
	#include <FoxModel/Vtx_0x13F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1440 @ 0x1440 (9 vertices) */
Vtx dFoxModel_Vtx_0x1440_Vtx[9] = {
	#include <FoxModel/Vtx_0x1440.vtx.inc.c>
};

/* Vtx: Vtx_0x14D0 @ 0x14D0 (12 vertices) */
Vtx dFoxModel_Vtx_0x14D0_Vtx[12] = {
	#include <FoxModel/Vtx_0x14D0.vtx.inc.c>
};

/* Vtx: Vtx_0x1590 @ 0x1590 (7 vertices) */
Vtx dFoxModel_Vtx_0x1590_Vtx[7] = {
	#include <FoxModel/Vtx_0x1590.vtx.inc.c>
};

/* Vtx: Vtx_0x1600 @ 0x1600 (6 vertices) */
Vtx dFoxModel_Vtx_0x1600_Vtx[6] = {
	#include <FoxModel/Vtx_0x1600.vtx.inc.c>
};

/* Vtx: Vtx_0x1660 @ 0x1660 (5 vertices) */
Vtx dFoxModel_Vtx_0x1660_Vtx[5] = {
	#include <FoxModel/Vtx_0x1660.vtx.inc.c>
};

/* Vtx: Vtx_0x16B0 @ 0x16B0 (12 vertices) */
Vtx dFoxModel_Vtx_0x16B0_Vtx[12] = {
	#include <FoxModel/Vtx_0x16B0.vtx.inc.c>
};

/* Vtx: Vtx_0x1770 @ 0x1770 (7 vertices) */
Vtx dFoxModel_Vtx_0x1770_Vtx[7] = {
	#include <FoxModel/Vtx_0x1770.vtx.inc.c>
};

/* Vtx: Vtx_0x17E0 @ 0x17E0 (6 vertices) */
Vtx dFoxModel_Vtx_0x17E0_Vtx[6] = {
	#include <FoxModel/Vtx_0x17E0.vtx.inc.c>
};

/* Vtx: Vtx_0x1840 @ 0x1840 (5 vertices) */
Vtx dFoxModel_Vtx_0x1840_Vtx[5] = {
	#include <FoxModel/Vtx_0x1840.vtx.inc.c>
};

/* Vtx: Vtx_0x1890 @ 0x1890 (9 vertices) */
Vtx dFoxModel_Vtx_0x1890_Vtx[9] = {
	#include <FoxModel/Vtx_0x1890.vtx.inc.c>
};

/* Vtx: Vtx_0x1920 @ 0x1920 (5 vertices) */
Vtx dFoxModel_Vtx_0x1920_Vtx[5] = {
	#include <FoxModel/Vtx_0x1920.vtx.inc.c>
};

/* DisplayList: Joint_0x1970 @ 0x1970 (320 bytes, 40 cmds) */
Gfx dFoxModel_Joint_0x1970_DisplayList[40] = {
	#include <FoxModel/Joint_0x1970.dl.inc.c>
};

/* DisplayList: Joint_0x1AB0 @ 0x1AB0 (536 bytes, 67 cmds) */
Gfx dFoxModel_Joint_0x1AB0_DisplayList[67] = {
	#include <FoxModel/Joint_0x1AB0.dl.inc.c>
};

/* DisplayList: Joint_0x1CC8 @ 0x1CC8 (208 bytes, 26 cmds) */
Gfx dFoxModel_Joint_0x1CC8_DisplayList[26] = {
	#include <FoxModel/Joint_0x1CC8.dl.inc.c>
};

/* DisplayList: Joint_0x1D98 @ 0x1D98 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x1D98_DisplayList[12] = {
	#include <FoxModel/Joint_0x1D98.dl.inc.c>
};

/* DisplayList: Joint_0x1DF8 @ 0x1DF8 (128 bytes, 16 cmds) */
Gfx dFoxModel_Joint_0x1DF8_DisplayList[16] = {
	#include <FoxModel/Joint_0x1DF8.dl.inc.c>
};

/* DisplayList: Joint_0x1E78 @ 0x1E78 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x1E78_DisplayList[12] = {
	#include <FoxModel/Joint_0x1E78.dl.inc.c>
};

/* DisplayList: Joint_0x1ED8 @ 0x1ED8 (776 bytes, 97 cmds) */
Gfx dFoxModel_Joint_0x1ED8_DisplayList[97] = {
	#include <FoxModel/Joint_0x1ED8.dl.inc.c>
};

/* DisplayList: Joint_0x21E0 @ 0x21E0 (216 bytes, 27 cmds) */
Gfx dFoxModel_Joint_0x21E0_DisplayList[27] = {
	#include <FoxModel/Joint_0x21E0.dl.inc.c>
};

/* DisplayList: Joint_0x22B8 @ 0x22B8 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x22B8_DisplayList[12] = {
	#include <FoxModel/Joint_0x22B8.dl.inc.c>
};

/* DisplayList: Joint_0x2318 @ 0x2318 (128 bytes, 16 cmds) */
Gfx dFoxModel_Joint_0x2318_DisplayList[16] = {
	#include <FoxModel/Joint_0x2318.dl.inc.c>
};

/* DisplayList: Joint_0x2398 @ 0x2398 (160 bytes, 20 cmds) */
Gfx dFoxModel_Joint_0x2398_DisplayList[20] = {
	#include <FoxModel/Joint_0x2398.dl.inc.c>
};

/* DisplayList: Joint_0x2438 @ 0x2438 (112 bytes, 14 cmds) */
Gfx dFoxModel_Joint_0x2438_DisplayList[14] = {
	#include <FoxModel/Joint_0x2438.dl.inc.c>
};

/* DisplayList: Joint_0x24A8 @ 0x24A8 (176 bytes, 22 cmds) */
Gfx dFoxModel_Joint_0x24A8_DisplayList[22] = {
	#include <FoxModel/Joint_0x24A8.dl.inc.c>
};

/* DisplayList: Joint_0x2558 @ 0x2558 (160 bytes, 20 cmds) */
Gfx dFoxModel_Joint_0x2558_DisplayList[20] = {
	#include <FoxModel/Joint_0x2558.dl.inc.c>
};

/* DisplayList: Joint_0x25F8 @ 0x25F8 (112 bytes, 14 cmds) */
Gfx dFoxModel_Joint_0x25F8_DisplayList[14] = {
	#include <FoxModel/Joint_0x25F8.dl.inc.c>
};

/* DisplayList: Joint_0x2668 @ 0x2668 (176 bytes, 22 cmds) */
Gfx dFoxModel_Joint_0x2668_DisplayList[22] = {
	#include <FoxModel/Joint_0x2668.dl.inc.c>
};

/* DisplayList: Joint_0x2718 @ 0x2718 (256 bytes, 32 cmds) */
Gfx dFoxModel_Joint_0x2718_DisplayList[32] = {
	#include <FoxModel/Joint_0x2718.dl.inc.c>
};

/* DisplayList: Joint_0x2818 @ 0x2818 (288 bytes, 36 cmds) */
Gfx dFoxModel_Joint_0x2818_DisplayList[36] = {
	#include <FoxModel/Joint_0x2818.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2938 (28 entries, 0x4D0 bytes — array always
 * terminates at the `{ 18, ... }` sentinel. The 22 u32s that formerly
 * looked like 2 trailing entries are slots 0..21 of the AObjEvent32 **
 * dispatch immediately following — see JointTree_post). */
DObjDesc dFoxModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 249.00003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFoxModel_Joint_0x1970_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dFoxModel_Joint_0x1AB0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 88.84941864013672f, 62.64089584350586f, 6.855183124542236f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x1CC8_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.3161090016365051f, -0.09201399981975555f, 0.05490599945187569f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dFoxModel_Joint_0x1D98_DisplayList, { 47.682411193847656f, 0.0f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, -0.014669000171124935f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x1DF8_DisplayList, { 67.4215087890625f, 0.0010189999593421817f, 3.600000127335079e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x1E78_DisplayList, { 0.0f, 84.00003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x1ED8_DisplayList, { 0.0f, 15.749988555908203f, -4.500002861022949f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -88.84941864013672f, 62.64098358154297f, 6.855183124542236f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x21E0_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.3161099851131439f, 0.09200900048017502f, 0.05488999933004379f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dFoxModel_Joint_0x22B8_DisplayList, { 48.124549865722656f, 9.999999974752427e-07f, -3.199999991920777e-05f }, { 0.0f, 0.0f, -0.014636999927461147f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x2318_DisplayList, { 68.08529663085938f, 0.00101500004529953f, -4.999999873689376e-05f }, { -7.999999979801942e-06f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 47.99993896484375f, -20.990631103515625f, 3.065778970718384f }, { 0.0030900000128895044f, 1.8999999156221747e-05f, -3.1415929794311523f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 33.287269592285156f, -32.33538055419922f, 11.215353012084961f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x2398_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.0919020026922226f, -0.019415000453591347f, 0.05171699821949005f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x2438_DisplayList, { 106.63200378417969f, 3.999999989900971e-06f, 3.999999989900971e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 97.20323181152344f, 1.4250140190124512f, 2.4349489212036133f }, { 0.0f, -9.999999974752427e-07f, -1.5991380214691162f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x24A8_DisplayList, { 2.9999999242136255e-05f, 9.999999974752427e-07f, 0.0f }, { 0.06964600086212158f, -0.3764989972114563f, 0.004381999839097261f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -33.28751754760742f, -32.33538055419922f, 11.215353012084961f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x2558_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { -0.09189099818468094f, 0.01941400021314621f, 0.05171699821949005f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x25F8_DisplayList, { 106.6320571899414f, 4.999999873689376e-06f, -3.999999989900971e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 97.03240203857422f, 1.2569830417633057f, 2.4349451065063477f }, { 0.0f, 9.999999974752427e-07f, -1.5991380214691162f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x2668_DisplayList, { 3.000000106112566e-06f, -1.2999999853491317e-05f, 0.0f }, { -0.08951599895954132f, 0.4125710129737854f, 0.0058120000176131725f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dFoxModel_Joint_0x2718_DisplayList, { 0.0f, -31.50003433227539f, -24.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x2818_DisplayList, { 0.0f, 16.19999885559082f, -112.50000762939453f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -249.00003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);  /* alignment between JointTree and JointTree_post */

/* AObjEvent32 ** dispatch table @ file 0x2E10 (108 bytes, 27 slots).
 * Lives immediately after the PAD and is referenced from FoxMain via
 * commonparts_container+0x8. Was previously split as two bogus
 * DObjDesc entries (slots 0..21) + `AObjEvent32 *gap_0x2E60[7]`
 * (slots 20..26 — naming offset because gap_0x2E60 was the first byte
 * of a new file region in the original splitter view). */
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x28C[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x294[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2A4[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2A8[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2B4[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2B8[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2BC[];
extern AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C8[];

AObjEvent32 **dFoxModel_JointTree_post[27] = {
	NULL,
	dFoxModel_gap_0x2E60_sub_0x28C,                  /* +0x4 (slot 1) */
	dFoxModel_gap_0x2E60_sub_0x294,                  /* +0x8 (slot 2) */
	NULL,
	dFoxModel_gap_0x2E60_sub_0x2A4,                  /* +0x10 (slot 4) */
	NULL, NULL, NULL,
	dFoxModel_gap_0x2E60_sub_0x2A8,                  /* +0x20 (slot 8) */
	NULL,
	dFoxModel_gap_0x2E60_sub_0x2B0,                  /* +0x28 (slot 10) */
	NULL, NULL, NULL, NULL,
	dFoxModel_gap_0x2E60_sub_0x2B4,                  /* +0x3C (slot 15) */
	dFoxModel_gap_0x2E60_sub_0x2B8,                  /* +0x40 (slot 16) */
	NULL,
	dFoxModel_gap_0x2E60_sub_0x2BC,                  /* +0x48 (slot 18) */
	NULL,
	dFoxModel_gap_0x2E60_sub_0x2C0,                  /* +0x50 (slot 20, was gap_0x2E60+0x0) */
	dFoxModel_gap_0x2E60_sub_0x2C4,                  /* +0x54 (slot 21, was gap_0x2E60+0x4) */
	NULL,
	dFoxModel_gap_0x2E60_sub_0x2C8,                  /* +0x5C (slot 23, was gap_0x2E60+0xC) */
	NULL, NULL, NULL,
};

/* Raw data from file offset 0x2E7C to 0x39C0 (2884 bytes — original gap
 * region 0x2E60..0x39C0 minus the 28 bytes folded into JointTree_post). */

/* gap sub-block @ 0x2E7C (was gap+0x1C, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x1C[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x1C.palette.inc.c>
};

/* gap sub-block @ 0x2EA4 (was gap+0x44, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x44[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x44.palette.inc.c>
};

/* gap sub-block @ 0x2ECC (was gap+0x6C, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x6C[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x6C.palette.inc.c>
};

/* gap sub-block @ 0x2EF4 (was gap+0x94, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x94[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x94.palette.inc.c>
};

/* gap sub-block @ 0x2F1C (was gap+0xBC, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0xBC[20] = {
	#include <FoxModel/gap_0x2E60_sub_0xBC.palette.inc.c>
};

/* gap sub-block @ 0x2F44 (was gap+0xE4, 32 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0xE4[16] = {
	#include <FoxModel/gap_0x2E60_sub_0xE4.palette.inc.c>
};

/* gap sub-block @ 0x2F64 (was gap+0x104, 32 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x104[16] = {
	#include <FoxModel/gap_0x2E60_sub_0x104.palette.inc.c>
};

/* gap sub-block @ 0x2F84 (was gap+0x124, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x124[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x124.palette.inc.c>
};

/* gap sub-block @ 0x2FAC (was gap+0x14C, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x14C[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x14C.palette.inc.c>
};

/* gap sub-block @ 0x2FD4 (was gap+0x174, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x174[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x174.palette.inc.c>
};

/* gap sub-block @ 0x2FFC (was gap+0x19C, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x19C[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x19C.palette.inc.c>
};

/* gap sub-block @ 0x3024 (was gap+0x1C4, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x1C4[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x1C4.palette.inc.c>
};

/* gap sub-block @ 0x304C (was gap+0x1EC, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x1EC[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x1EC.palette.inc.c>
};

/* gap sub-block @ 0x3074 (was gap+0x214, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x214[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x214.palette.inc.c>
};

/* gap sub-block @ 0x309C (was gap+0x23C, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x23C[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x23C.palette.inc.c>
};

/* gap sub-block @ 0x30C4 (was gap+0x264, 40 bytes) */
u16 dFoxModel_gap_0x2E60_sub_0x264[20] = {
	#include <FoxModel/gap_0x2E60_sub_0x264.palette.inc.c>
};

/* gap sub-block @ 0x30EC (was gap+0x28C, 8 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x28C[2] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x14C,
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x174,
};

/* gap sub-block @ 0x30F4 (was gap+0x294, 16 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x294[4] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x1C,
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x44,
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x6C,
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x94,
};

/* gap sub-block @ 0x3104 (was gap+0x2A4, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2A4[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0xBC,
};

/* gap sub-block @ 0x3108 (was gap+0x2A8, 8 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2A8[2] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0xE4,
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x104,
};

/* gap sub-block @ 0x3110 (was gap+0x2B0, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2B0[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x124,
};

/* gap sub-block @ 0x3114 (was gap+0x2B4, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2B4[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x1EC,
};

/* gap sub-block @ 0x3118 (was gap+0x2B8, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2B8[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x1C4,
};

/* gap sub-block @ 0x311C (was gap+0x2BC, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2BC[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x19C,
};

/* gap sub-block @ 0x3120 (was gap+0x2C0, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C0[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x264,
};

/* gap sub-block @ 0x3124 (was gap+0x2C4, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C4[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x23C,
};

/* gap sub-block @ 0x3128 (was gap+0x2C8, 8 bytes) */
AObjEvent32 *dFoxModel_gap_0x2E60_sub_0x2C8[2] = {
	(AObjEvent32 *)dFoxModel_gap_0x2E60_sub_0x214,
	NULL,
};

/* gap sub-block @ 0x3130 (was gap+0x2D0, 108 bytes) */
MObjSub **dFoxModel_gap_0x2E60_sub_0x2D0[27] = {
	NULL,
	dFoxModel_gap_0x2E60_sub_0xAF0,
	dFoxModel_gap_0x2E60_sub_0xAFC,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB10,
	NULL,
	NULL,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB18,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB24,
	NULL,
	NULL,
	NULL,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB2C,
	dFoxModel_gap_0x2E60_sub_0xB34,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB3C,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB44,
	dFoxModel_gap_0x2E60_sub_0xB4C,
	NULL,
	dFoxModel_gap_0x2E60_sub_0xB54,
	NULL,
	NULL,
	NULL,
};

/* Palette-pointer table @ 0x319C (4 entries). All slots are chain-encoded
 * intern pointers patched by fixRelocChain at load time. */
void *dFoxModel_gap_0x2E60_sub_0x33C[4] = {
	dFoxModel_gap_0x7528_sub_0x80,
	dFoxModel_gap_0x7528_sub_0x8,
	dFoxModel_gap_0x7528_sub_0x30,
	dFoxModel_gap_0x7528_sub_0x58,
};

/* Texture-pointer table @ 0x31AC (2 entries). Both slots are chain-encoded. */
void *dFoxModel_gap_0x2E60_sub_0x34C[2] = {
	dFoxModel_Tex_0x7300,
	dFoxModel_Tex_0x70D0,
};

/* Texture-pointer table @ 0x31B4 (2 entries). Both slots are chain-encoded. */
void *dFoxModel_gap_0x2E60_sub_0x354[2] = {
	dFoxModel_Tex_0x7830,
	dFoxModel_Tex_0x7700,
};

/* Palette-pointer table @ 0x31BC (5 entries, NULL-terminated). Slots 0..3
 * are chain-encoded; the final slot is a literal NULL sentinel. */
void *dFoxModel_gap_0x2E60_sub_0x35C[5] = {
	dFoxModel_gap_0x7828_sub_0x188,
	dFoxModel_gap_0x7828_sub_0x110,
	dFoxModel_gap_0x7828_sub_0x138,
	dFoxModel_gap_0x7828_sub_0x160,
	NULL,
};

/* MObjSub @ 0x31D0 */
MObjSub dFoxModel_gap_0x2E60_sub_0x370[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3248 */
MObjSub dFoxModel_gap_0x2E60_sub_0x3E8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x002D, 0x0005, 0x0020, 0x0020,
		0,
		0.15000000596046448f, 0.07500000298023224f,
		0.699999988079071f, 0.8500000238418579f,
		0.15000000596046448f, 0.699999988079071f,
		(void**)dFoxModel_gap_0x2E60_sub_0x33C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.15000000596046448f, 0.07500000298023224f,
		0.15000000596046448f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x32C0 */
MObjSub dFoxModel_gap_0x2E60_sub_0x460[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3338 */
MObjSub dFoxModel_gap_0x2E60_sub_0x4D8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x33B0 */
MObjSub dFoxModel_gap_0x2E60_sub_0x550[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3428 */
MObjSub dFoxModel_gap_0x2E60_sub_0x5C8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dFoxModel_gap_0x2E60_sub_0x34C,
		0x007B, 0x000B, 0x0040, 0x0020,
		0,
		0.1599999964237213f, 0.3919999897480011f,
		0.6800000071525574f, 0.25999999046325684f,
		0.1599999964237213f, 0.6800000071525574f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.1599999964237213f, 0.3919999897480011f,
		0.1599999964237213f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x34A0 */
MObjSub dFoxModel_gap_0x2E60_sub_0x640[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dFoxModel_gap_0x2E60_sub_0x354,
		0x00D5, 0x0014, 0x0020, 0x0010,
		0,
		0.609499990940094f, 0.7577000260353088f,
		0.4129999876022339f, 0.15000000596046448f,
		0.609499990940094f, 0.4129999876022339f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0020, 0x0010,
		0.609499990940094f, 0.7577000260353088f,
		0.609499990940094f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3518 */
MObjSub dFoxModel_gap_0x2E60_sub_0x6B8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xEF, 0xEF, 0xA5, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3590 */
MObjSub dFoxModel_gap_0x2E60_sub_0x730[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0005, 0x0020, 0x0020,
		0,
		0.0f, 0.052000001072883606f,
		1.0f, 1.0800000429153442f,
		0.0f, 1.0f,
		(void**)dFoxModel_gap_0x2E60_sub_0x35C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.052000001072883606f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3608 */
MObjSub dFoxModel_gap_0x2E60_sub_0x7A8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x4A, 0x5A, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3680 */
MObjSub dFoxModel_gap_0x2E60_sub_0x820[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x36F8 */
MObjSub dFoxModel_gap_0x2E60_sub_0x898[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3770 */
MObjSub dFoxModel_gap_0x2E60_sub_0x910[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x4A, 0x5A, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x37E8 */
MObjSub dFoxModel_gap_0x2E60_sub_0x988[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3860 */
MObjSub dFoxModel_gap_0x2E60_sub_0xA00[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x38D8 */
MObjSub dFoxModel_gap_0x2E60_sub_0xA78[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0x4A, 0x5A, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x3950 (was gap+0xAF0, 12 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xAF0[3] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x730,
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x7A8,
	NULL,
};

/* gap sub-block @ 0x395C (was gap+0xAFC, 20 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xAFC[5] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x370,
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x3E8,
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x460,
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x4D8,
	NULL,
};

/* gap sub-block @ 0x3970 (was gap+0xB10, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB10[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x550,
	NULL,
};

/* gap sub-block @ 0x3978 (was gap+0xB18, 12 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB18[3] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x5C8,
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x640,
	NULL,
};

/* gap sub-block @ 0x3984 (was gap+0xB24, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB24[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x6B8,
	NULL,
};

/* gap sub-block @ 0x398C (was gap+0xB2C, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB2C[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x910,
	NULL,
};

/* gap sub-block @ 0x3994 (was gap+0xB34, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB34[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x898,
	NULL,
};

/* gap sub-block @ 0x399C (was gap+0xB3C, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB3C[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x820,
	NULL,
};

/* gap sub-block @ 0x39A4 (was gap+0xB44, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB44[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0xA78,
	NULL,
};

/* gap sub-block @ 0x39AC (was gap+0xB4C, 8 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB4C[2] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0xA00,
	NULL,
};

/* gap sub-block @ 0x39B4 (was gap+0xB54, 12 bytes) */
MObjSub *dFoxModel_gap_0x2E60_sub_0xB54[3] = {
	(MObjSub *)dFoxModel_gap_0x2E60_sub_0x988,
	NULL,
	NULL,
};

/* Vtx: Vtx_0x39C0 @ 0x39C0 (6 vertices) */
Vtx dFoxModel_Vtx_0x39C0_Vtx[6] = {
	#include <FoxModel/Vtx_0x39C0.vtx.inc.c>
};

/* Vtx: Vtx_0x3A20 @ 0x3A20 (8 vertices) */
Vtx dFoxModel_Vtx_0x3A20_Vtx[8] = {
	#include <FoxModel/Vtx_0x3A20.vtx.inc.c>
};

/* Vtx: Vtx_0x3AA0 @ 0x3AA0 (6 vertices) */
Vtx dFoxModel_Vtx_0x3AA0_Vtx[6] = {
	#include <FoxModel/Vtx_0x3AA0.vtx.inc.c>
};

/* Vtx: Vtx_0x3B00 @ 0x3B00 (6 vertices) */
Vtx dFoxModel_Vtx_0x3B00_Vtx[6] = {
	#include <FoxModel/Vtx_0x3B00.vtx.inc.c>
};

/* Vtx: Vtx_0x3B60 @ 0x3B60 (5 vertices) */
Vtx dFoxModel_Vtx_0x3B60_Vtx[5] = {
	#include <FoxModel/Vtx_0x3B60.vtx.inc.c>
};

/* Vtx: Vtx_0x3BB0_Vtx @ 0x3BB0 (8 vertices) */
Vtx dFoxModel_Vtx_0x3BB0_Vtx[8] = {
	#include <FoxModel/Vtx_0x3BB0.vtx.inc.c>
};

/* Vtx: Vtx_0x3C30 @ 0x3C30 (9 vertices) */
Vtx dFoxModel_Vtx_0x3C30_Vtx[9] = {
	#include <FoxModel/Vtx_0x3C30.vtx.inc.c>
};

/* Vtx: Vtx_0x3CC0 @ 0x3CC0 (3 vertices) */
Vtx dFoxModel_Vtx_0x3CC0_Vtx[3] = {
	#include <FoxModel/Vtx_0x3CC0.vtx.inc.c>
};

/* Vtx: Vtx_0x3CF0 @ 0x3CF0 (5 vertices) */
Vtx dFoxModel_Vtx_0x3CF0_Vtx[5] = {
	#include <FoxModel/Vtx_0x3CF0.vtx.inc.c>
};

/* Vtx: Vtx_0x3D40 @ 0x3D40 (9 vertices) */
Vtx dFoxModel_Vtx_0x3D40_Vtx[9] = {
	#include <FoxModel/Vtx_0x3D40.vtx.inc.c>
};

/* Vtx: Vtx_0x3DD0 @ 0x3DD0 (5 vertices) */
Vtx dFoxModel_Vtx_0x3DD0_Vtx[5] = {
	#include <FoxModel/Vtx_0x3DD0.vtx.inc.c>
};

/* Vtx: Vtx_0x3E20 @ 0x3E20 (8 vertices) */
Vtx dFoxModel_Vtx_0x3E20_Vtx[8] = {
	#include <FoxModel/Vtx_0x3E20.vtx.inc.c>
};

/* Vtx: Vtx_0x3EA0 @ 0x3EA0 (8 vertices) */
Vtx dFoxModel_Vtx_0x3EA0_Vtx[8] = {
	#include <FoxModel/Vtx_0x3EA0.vtx.inc.c>
};

/* Vtx: Vtx_0x3F20 @ 0x3F20 (17 vertices) */
Vtx dFoxModel_Vtx_0x3F20_Vtx[17] = {
	#include <FoxModel/Vtx_0x3F20.vtx.inc.c>
};

/* Vtx: Vtx_0x4030 @ 0x4030 (11 vertices) */
Vtx dFoxModel_Vtx_0x4030_Vtx[11] = {
	#include <FoxModel/Vtx_0x4030.vtx.inc.c>
};

/* Vtx: Vtx_0x40E0 @ 0x40E0 (26 vertices) */
Vtx dFoxModel_Vtx_0x40E0_Vtx[26] = {
	#include <FoxModel/Vtx_0x40E0.vtx.inc.c>
};

/* Vtx: Vtx_0x4280 @ 0x4280 (9 vertices) */
Vtx dFoxModel_Vtx_0x4280_Vtx[9] = {
	#include <FoxModel/Vtx_0x4280.vtx.inc.c>
};

/* Vtx: Vtx_0x4310 @ 0x4310 (3 vertices) */
Vtx dFoxModel_Vtx_0x4310_Vtx[3] = {
	#include <FoxModel/Vtx_0x4310.vtx.inc.c>
};

/* Vtx: Vtx_0x4340 @ 0x4340 (5 vertices) */
Vtx dFoxModel_Vtx_0x4340_Vtx[5] = {
	#include <FoxModel/Vtx_0x4340.vtx.inc.c>
};

/* Vtx: Vtx_0x4390 @ 0x4390 (9 vertices) */
Vtx dFoxModel_Vtx_0x4390_Vtx[9] = {
	#include <FoxModel/Vtx_0x4390.vtx.inc.c>
};

/* Vtx: Vtx_0x4420 @ 0x4420 (8 vertices) */
Vtx dFoxModel_Vtx_0x4420_Vtx[8] = {
	#include <FoxModel/Vtx_0x4420.vtx.inc.c>
};

/* Vtx: Vtx_0x44A0 @ 0x44A0 (4 vertices) */
Vtx dFoxModel_Vtx_0x44A0_Vtx[4] = {
	#include <FoxModel/Vtx_0x44A0.vtx.inc.c>
};

/* Vtx: Vtx_0x44E0 @ 0x44E0 (6 vertices) */
Vtx dFoxModel_Vtx_0x44E0_Vtx[6] = {
	#include <FoxModel/Vtx_0x44E0.vtx.inc.c>
};

/* Vtx: Vtx_0x4540 @ 0x4540 (2 vertices) */
Vtx dFoxModel_Vtx_0x4540_Vtx[2] = {
	#include <FoxModel/Vtx_0x4540.vtx.inc.c>
};

/* Vtx: Vtx_0x4560 @ 0x4560 (8 vertices) */
Vtx dFoxModel_Vtx_0x4560_Vtx[8] = {
	#include <FoxModel/Vtx_0x4560.vtx.inc.c>
};

/* Vtx: Vtx_0x45E0 @ 0x45E0 (4 vertices) */
Vtx dFoxModel_Vtx_0x45E0_Vtx[4] = {
	#include <FoxModel/Vtx_0x45E0.vtx.inc.c>
};

/* Vtx: Vtx_0x4620_Vtx @ 0x4620 (8 vertices) */
Vtx dFoxModel_Vtx_0x4620_Vtx[8] = {
	#include <FoxModel/Vtx_0x4620.vtx.inc.c>
};

/* Vtx: Vtx_0x46A0 @ 0x46A0 (4 vertices) */
Vtx dFoxModel_Vtx_0x46A0_Vtx[4] = {
	#include <FoxModel/Vtx_0x46A0.vtx.inc.c>
};

/* Vtx: Vtx_0x46E0 @ 0x46E0 (4 vertices) */
Vtx dFoxModel_Vtx_0x46E0_Vtx[4] = {
	#include <FoxModel/Vtx_0x46E0.vtx.inc.c>
};

/* DisplayList: Joint_0x4720 @ 0x4720 (288 bytes, 36 cmds) */
Gfx dFoxModel_Joint_0x4720_DisplayList[36] = {
	#include <FoxModel/Joint_0x4720.dl.inc.c>
};

/* DisplayList: Joint_0x4840 @ 0x4840 (456 bytes, 57 cmds) */
Gfx dFoxModel_Joint_0x4840_DisplayList[57] = {
	#include <FoxModel/Joint_0x4840.dl.inc.c>
};

/* DisplayList: Joint_0x4A08 @ 0x4A08 (184 bytes, 23 cmds) */
Gfx dFoxModel_Joint_0x4A08_DisplayList[23] = {
	#include <FoxModel/Joint_0x4A08.dl.inc.c>
};

/* DisplayList: Joint_0x4AC0 @ 0x4AC0 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x4AC0_DisplayList[12] = {
	#include <FoxModel/Joint_0x4AC0.dl.inc.c>
};

/* DisplayList: Joint_0x4B20 @ 0x4B20 (120 bytes, 15 cmds) */
Gfx dFoxModel_Joint_0x4B20_DisplayList[15] = {
	#include <FoxModel/Joint_0x4B20.dl.inc.c>
};

/* DisplayList: Joint_0x4B98 @ 0x4B98 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x4B98_DisplayList[12] = {
	#include <FoxModel/Joint_0x4B98.dl.inc.c>
};

/* DisplayList: Joint_0x4BF8 @ 0x4BF8 (688 bytes, 86 cmds) */
Gfx dFoxModel_Joint_0x4BF8_DisplayList[86] = {
	#include <FoxModel/Joint_0x4BF8.dl.inc.c>
};

/* DisplayList: Joint_0x4EA8 @ 0x4EA8 (184 bytes, 23 cmds) */
Gfx dFoxModel_Joint_0x4EA8_DisplayList[23] = {
	#include <FoxModel/Joint_0x4EA8.dl.inc.c>
};

/* DisplayList: Joint_0x4F60 @ 0x4F60 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x4F60_DisplayList[12] = {
	#include <FoxModel/Joint_0x4F60.dl.inc.c>
};

/* DisplayList: Joint_0x4FC0 @ 0x4FC0 (120 bytes, 15 cmds) */
Gfx dFoxModel_Joint_0x4FC0_DisplayList[15] = {
	#include <FoxModel/Joint_0x4FC0.dl.inc.c>
};

/* DisplayList: Joint_0x5038 @ 0x5038 (112 bytes, 14 cmds) */
Gfx dFoxModel_Joint_0x5038_DisplayList[14] = {
	#include <FoxModel/Joint_0x5038.dl.inc.c>
};

/* DisplayList: Joint_0x50A8 @ 0x50A8 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x50A8_DisplayList[12] = {
	#include <FoxModel/Joint_0x50A8.dl.inc.c>
};

/* DisplayList: Joint_0x5108 @ 0x5108 (168 bytes, 21 cmds) */
Gfx dFoxModel_Joint_0x5108_DisplayList[21] = {
	#include <FoxModel/Joint_0x5108.dl.inc.c>
};

/* DisplayList: Joint_0x51B0 @ 0x51B0 (112 bytes, 14 cmds) */
Gfx dFoxModel_Joint_0x51B0_DisplayList[14] = {
	#include <FoxModel/Joint_0x51B0.dl.inc.c>
};

/* DisplayList: Joint_0x5220 @ 0x5220 (96 bytes, 12 cmds) */
Gfx dFoxModel_Joint_0x5220_DisplayList[12] = {
	#include <FoxModel/Joint_0x5220.dl.inc.c>
};

/* DisplayList: Joint_0x5280 @ 0x5280 (160 bytes, 20 cmds) */
Gfx dFoxModel_Joint_0x5280_DisplayList[20] = {
	#include <FoxModel/Joint_0x5280.dl.inc.c>
};

/* DisplayList: Joint_0x5320 @ 0x5320 (224 bytes, 28 cmds) */
Gfx dFoxModel_Joint_0x5320_DisplayList[28] = {
	#include <FoxModel/Joint_0x5320.dl.inc.c>
};

/* DisplayList: Joint_0x5400 @ 0x5400 (272 bytes, 34 cmds) */
Gfx dFoxModel_Joint_0x5400_DisplayList[34] = {
	#include <FoxModel/Joint_0x5400.dl.inc.c>
};

/* DObjDesc: JointTree_0x5510 @ 0x5510 (28 entries, 0x4D0 bytes — array
 * always terminates at the `{ 18, ... }` sentinel. The 22 u32s that
 * formerly looked like 2 trailing entries are slots 0..21 of the
 * AObjEvent32 ** dispatch immediately following — see
 * JointTree_0x5510_post). */
DObjDesc dFoxModel_JointTree_0x5510[] = {
	{ 0, (void*)0x00000000, { 0.0f, 249.00003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFoxModel_Joint_0x4720_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dFoxModel_Joint_0x4840_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 88.84941864013672f, 62.64089584350586f, 6.855183124542236f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x4A08_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.3199400007724762f, -0.08934299647808075f, 0.04671400040388107f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dFoxModel_Joint_0x4AC0_DisplayList, { 47.682411193847656f, 0.0f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x4B20_DisplayList, { 67.4215087890625f, 0.0010189999593421817f, 3.600000127335079e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x4B98_DisplayList, { 0.0f, 84.00003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x4BF8_DisplayList, { 0.0f, 15.749988555908203f, -4.500002861022949f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -88.84941864013672f, 62.64098358154297f, 6.855183124542236f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x4EA8_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.3199400007724762f, 0.08934199810028076f, 0.04671400040388107f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dFoxModel_Joint_0x4F60_DisplayList, { 48.124549865722656f, 9.999999974752427e-07f, -3.199999991920777e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x4FC0_DisplayList, { 68.08529663085938f, 0.00101500004529953f, -4.999999873689376e-05f }, { -7.999999979801942e-06f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 48.0000114440918f, -21.000003814697266f, 3.0000040531158447f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 33.287269592285156f, -32.33538055419922f, 11.215353012084961f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x5038_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.09220899641513824f, -0.019415000453591347f, 0.05171699821949005f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x50A8_DisplayList, { 106.63200378417969f, 3.999999989900971e-06f, 3.999999989900971e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 97.20323181152344f, 1.4250140190124512f, 2.4349489212036133f }, { 0.0f, -9.999999974752427e-07f, -1.5991380214691162f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x5108_DisplayList, { 2.9999999242136255e-05f, 0.0f, 0.0f }, { 0.0879250019788742f, -0.3766170144081116f, 0.012249000370502472f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -33.28751754760742f, -32.33538055419922f, 11.215353012084961f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x51B0_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { -0.09219799935817719f, 0.01941400021314621f, 0.05171699821949005f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dFoxModel_Joint_0x5220_DisplayList, { 106.6320571899414f, 4.999999873689376e-06f, -3.999999989900971e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 97.03240203857422f, 1.2569830417633057f, 2.4349451065063477f }, { 0.0f, 9.999999974752427e-07f, -1.5991380214691162f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dFoxModel_Joint_0x5280_DisplayList, { 3.999999989900971e-06f, -1.4000000192027073e-05f, 0.0f }, { -0.10169100016355515f, 0.41267600655555725f, 0.013690999709069729f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dFoxModel_Joint_0x5320_DisplayList, { 0.0f, -31.50003433227539f, -24.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dFoxModel_Joint_0x5400_DisplayList, { 0.0f, 16.19999885559082f, -112.50000762939453f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -249.00003051757812f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* AObjEvent32 ** dispatch table @ file 0x59E0 (108 bytes, 27 slots).
 * Lives immediately after JointTree_0x5510 (no PAD) and is referenced
 * from FoxMain via commonparts_container+0x18. Was previously split as
 * two bogus DObjDesc entries (slots 0..21) + `AObjEvent32 *gap_0x5A38[5]`
 * (slots 22..26). */
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x28C[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x29C[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2A0[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2A8[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2AC[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2B0[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2B4[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2B8[];
extern AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2BC[];

AObjEvent32 **dFoxModel_JointTree_0x5510_post[27] = {
	NULL,
	dFoxModel_gap_0x5A38_sub_0x284,                  /* +0x4 (slot 1) */
	dFoxModel_gap_0x5A38_sub_0x28C,                  /* +0x8 (slot 2) */
	NULL,
	dFoxModel_gap_0x5A38_sub_0x29C,                  /* +0x10 (slot 4) */
	NULL, NULL, NULL,
	dFoxModel_gap_0x5A38_sub_0x2A0,                  /* +0x20 (slot 8) */
	NULL,
	dFoxModel_gap_0x5A38_sub_0x2A8,                  /* +0x28 (slot 10) */
	NULL, NULL, NULL, NULL,
	dFoxModel_gap_0x5A38_sub_0x2AC,                  /* +0x3C (slot 15) */
	dFoxModel_gap_0x5A38_sub_0x2B0,                  /* +0x40 (slot 16) */
	NULL,
	dFoxModel_gap_0x5A38_sub_0x2B4,                  /* +0x48 (slot 18) */
	NULL,
	dFoxModel_gap_0x5A38_sub_0x2B8,                  /* +0x50 (slot 20) */
	dFoxModel_gap_0x5A38_sub_0x2BC,                  /* +0x54 (slot 21) */
	NULL,
	dFoxModel_gap_0x5A38_sub_0x2C0,                  /* +0x5C (slot 23, was gap_0x5A38+0x4) */
	NULL, NULL, NULL,
};

/* Raw data from file offset 0x5A4C to 0x72D8 (6284 bytes — original gap
 * region 0x5A38..0x72D8 minus the 20 bytes folded into JointTree_0x5510_post). */

/* gap sub-block @ 0x5A4C (was gap+0x14, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x14[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x14.palette.inc.c>
};

/* gap sub-block @ 0x5A74 (was gap+0x3C, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x3C[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x3C.palette.inc.c>
};

/* gap sub-block @ 0x5A9C (was gap+0x64, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x64[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x64.palette.inc.c>
};

/* gap sub-block @ 0x5AC4 (was gap+0x8C, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x8C[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x8C.palette.inc.c>
};

/* gap sub-block @ 0x5AEC (was gap+0xB4, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0xB4[20] = {
	#include <FoxModel/gap_0x5A38_sub_0xB4.palette.inc.c>
};

/* gap sub-block @ 0x5B14 (was gap+0xDC, 32 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0xDC[16] = {
	#include <FoxModel/gap_0x5A38_sub_0xDC.palette.inc.c>
};

/* gap sub-block @ 0x5B34 (was gap+0xFC, 32 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0xFC[16] = {
	#include <FoxModel/gap_0x5A38_sub_0xFC.palette.inc.c>
};

/* gap sub-block @ 0x5B54 (was gap+0x11C, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x11C[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x11C.palette.inc.c>
};

/* gap sub-block @ 0x5B7C (was gap+0x144, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x144[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x144.palette.inc.c>
};

/* gap sub-block @ 0x5BA4 (was gap+0x16C, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x16C[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x16C.palette.inc.c>
};

/* gap sub-block @ 0x5BCC (was gap+0x194, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x194[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x194.palette.inc.c>
};

/* gap sub-block @ 0x5BF4 (was gap+0x1BC, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x1BC[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x1BC.palette.inc.c>
};

/* gap sub-block @ 0x5C1C (was gap+0x1E4, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x1E4[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x1E4.palette.inc.c>
};

/* gap sub-block @ 0x5C44 (was gap+0x20C, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x20C[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x20C.palette.inc.c>
};

/* gap sub-block @ 0x5C6C (was gap+0x234, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x234[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x234.palette.inc.c>
};

/* gap sub-block @ 0x5C94 (was gap+0x25C, 40 bytes) */
u16 dFoxModel_gap_0x5A38_sub_0x25C[20] = {
	#include <FoxModel/gap_0x5A38_sub_0x25C.palette.inc.c>
};

/* gap sub-block @ 0x5CBC (was gap+0x284, 8 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x284[2] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x144,
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x16C,
};

/* gap sub-block @ 0x5CC4 (was gap+0x28C, 16 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x28C[4] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x14,
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x3C,
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x64,
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x8C,
};

/* gap sub-block @ 0x5CD4 (was gap+0x29C, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x29C[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0xB4,
};

/* gap sub-block @ 0x5CD8 (was gap+0x2A0, 8 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2A0[2] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0xDC,
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0xFC,
};

/* gap sub-block @ 0x5CE0 (was gap+0x2A8, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2A8[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x11C,
};

/* gap sub-block @ 0x5CE4 (was gap+0x2AC, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2AC[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x1E4,
};

/* gap sub-block @ 0x5CE8 (was gap+0x2B0, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2B0[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x1BC,
};

/* gap sub-block @ 0x5CEC (was gap+0x2B4, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2B4[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x194,
};

/* gap sub-block @ 0x5CF0 (was gap+0x2B8, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2B8[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x25C,
};

/* gap sub-block @ 0x5CF4 (was gap+0x2BC, 4 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2BC[1] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x234,
};

/* gap sub-block @ 0x5CF8 (was gap+0x2C0, 8 bytes) */
AObjEvent32 *dFoxModel_gap_0x5A38_sub_0x2C0[2] = {
	(AObjEvent32 *)dFoxModel_gap_0x5A38_sub_0x20C,
	NULL,
};

/* gap sub-block @ 0x5D00 (was gap+0x2C8, 208 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x2C8[13] = {
	#include <FoxModel/gap_0x5A38_sub_0x2C8.vtx.inc.c>
};

/* gap sub-block @ 0x5DD0 (was gap+0x398, 128 bytes) */
Gfx dFoxModel_DL_0x5DD0[16] = {
	#include <FoxModel/DL_0x5DD0.dl.inc.c>
};

/* gap sub-block @ 0x5E50 (was gap+0x418, 144 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x418[9] = {
	#include <FoxModel/gap_0x5A38_sub_0x418.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x4A8 @ 0x5EE0 (15 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x4A8[15] = {
	#include <FoxModel/gap_0x5A38_sub_0x4A8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5F60 (was gap+0x528, 208 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x528[13] = {
	#include <FoxModel/gap_0x5A38_sub_0x528.vtx.inc.c>
};

/* gap sub-block @ 0x6030 (was gap+0x5F8, 128 bytes) */
Gfx dFoxModel_DL_0x6030[16] = {
	#include <FoxModel/DL_0x6030.dl.inc.c>
};

/* gap sub-block @ 0x60B0 (was gap+0x678, 144 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x678[9] = {
	#include <FoxModel/gap_0x5A38_sub_0x678.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x708 @ 0x6140 (15 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x708[15] = {
	#include <FoxModel/gap_0x5A38_sub_0x708.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x61C0 (was gap+0x788, 128 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x788[8] = {
	#include <FoxModel/gap_0x5A38_sub_0x788.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x808 @ 0x6240 (13 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x808[13] = {
	#include <FoxModel/gap_0x5A38_sub_0x808.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x62B0 (was gap+0x878, 112 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x878[7] = {
	#include <FoxModel/gap_0x5A38_sub_0x878.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x8E8 @ 0x6320 (29 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x8E8[29] = {
	#include <FoxModel/gap_0x5A38_sub_0x8E8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6410 (was gap+0x9D8, 288 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x9D8[18] = {
	#include <FoxModel/gap_0x5A38_sub_0x9D8.vtx.inc.c>
};

/* gap sub-block @ 0x6530 (was gap+0xAF8, 384 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0xAF8[24] = {
	#include <FoxModel/gap_0x5A38_sub_0xAF8.vtx.inc.c>
};

/* gap sub-block @ 0x66B0 (was gap+0xC78, 448 bytes) */
Gfx dFoxModel_DL_0x66B0[56] = {
	#include <FoxModel/DL_0x66B0.dl.inc.c>
};

/* gap sub-block @ 0x6870 (was gap+0xE38, 160 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0xE38[10] = {
	#include <FoxModel/gap_0x5A38_sub_0xE38.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0xED8 @ 0x6910 (13 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0xED8[13] = {
	#include <FoxModel/gap_0x5A38_sub_0xED8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6980 (was gap+0xF48, 160 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0xF48[10] = {
	#include <FoxModel/gap_0x5A38_sub_0xF48.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0xFE8 @ 0x6A20 (13 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0xFE8[13] = {
	#include <FoxModel/gap_0x5A38_sub_0xFE8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6A90 (was gap+0x1058, 128 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x1058[8] = {
	#include <FoxModel/gap_0x5A38_sub_0x1058.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x10D8 @ 0x6B10 (15 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x10D8[15] = {
	#include <FoxModel/gap_0x5A38_sub_0x10D8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6B90 (was gap+0x1158, 128 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x1158[8] = {
	#include <FoxModel/gap_0x5A38_sub_0x1158.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x11D8 @ 0x6C10 (15 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x11D8[15] = {
	#include <FoxModel/gap_0x5A38_sub_0x11D8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6C90 (was gap+0x1258, 160 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x1258[10] = {
	#include <FoxModel/gap_0x5A38_sub_0x1258.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x12F8 @ 0x6D30 (13 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x12F8[13] = {
	#include <FoxModel/gap_0x5A38_sub_0x12F8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6DA0 (was gap+0x1368, 64 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x1368[4] = {
	#include <FoxModel/gap_0x5A38_sub_0x1368.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x13A8 @ 0x6DE0 (11 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x13A8[11] = {
	#include <FoxModel/gap_0x5A38_sub_0x13A8.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6E40 (was gap+0x1408, 80 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x1408[5] = {
	#include <FoxModel/gap_0x5A38_sub_0x1408.vtx.inc.c>
};

/* gap sub-block @ 0x6E90 (was gap+0x1458, 96 bytes) */
Gfx dFoxModel_DL_0x6E90[12] = {
	#include <FoxModel/DL_0x6E90.dl.inc.c>
};

/* gap sub-block @ 0x6EF0 (was gap+0x14B8, 176 bytes) */
/* Vtx data @ 0x6EF0 (80 B / 5 vertices) */
Vtx dFoxModel_gap_0x5A38_sub_0x14B8[5] = {
	#include <FoxModel/gap_0x5A38_sub_0x14B8.vtx.inc.c>
};

/* Gfx DL @ 0x6F40 (96 B / 12 cmds) */
Gfx dFoxModel_DL_0x6F40[12] = {
	#include <FoxModel/DL_0x6F40.dl.inc.c>
};

/* gap sub-block @ 0x6FA0 (was gap+0x1568, 128 bytes) */
Vtx dFoxModel_gap_0x5A38_sub_0x1568[8] = {
	#include <FoxModel/gap_0x5A38_sub_0x1568.vtx.inc.c>
};

/* Gfx DL: gap_0x5A38_sub_0x15E8 @ 0x7020 (15 cmds) */
Gfx dFoxModel_gap_0x5A38_sub_0x15E8[15] = {
	#include <FoxModel/gap_0x5A38_sub_0x15E8.dl.inc.c>
};

/* Pre-texture alignment pad @ 0x7098 (16 zero bytes). */
PAD(16);

/* Palette: Lut_0x70A8 @ 0x70A8 (16 colors RGBA5551). Byte-identical to
 * Lut_0x72D8 — a leading duplicate of the same TLUT for Tex_0x70D0 that
 * isn't referenced by any chain pointer in this file, but lives where a
 * CI4 texture's TLUT would conventionally sit (immediately before the
 * texel block). */
u16 dFoxModel_Lut_0x70A8_palette[16] = {
	#include <FoxModel/Lut_0x70A8.palette.inc.c>
};

/* Trailing 8 zero bytes to align Tex_0x70D0 to its 16-byte boundary. */
PAD(8);

/* gap sub-block @ 0x70D0 (was gap+0x1698, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dFoxModel_Tex_0x70D0[520] = {
	#include <FoxModel/Tex_0x70D0.tex.inc.c>
};

/* Palette: Lut_0x72D8 @ 0x72D8 (16 colors RGBA5551) */
u16 dFoxModel_Lut_0x72D8_palette[16] = {
	#include <FoxModel/Lut_0x72D8.palette.inc.c>
};

/* Raw data from file offset 0x72F8 to 0x7508 (528 bytes) */
PAD(8);  /* was 8 zero bytes typed as `u32 gap_0x72F8[2] = { End, End }`;
		  * no relocations reference it. */

/* gap sub-block @ 0x7300 (was gap+0x8, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dFoxModel_Tex_0x7300[520] = {
	#include <FoxModel/Tex_0x7300.tex.inc.c>
};

/* Palette: Lut_0x7508 @ 0x7508 (16 colors RGBA5551) */
u16 dFoxModel_Lut_0x7508_palette[16] = {
	#include <FoxModel/Lut_0x7508.palette.inc.c>
};

/* Raw data from file offset 0x7528 to 0x75D0 (168 bytes) */
PAD(8);  /* was 8 zero bytes typed as `u32 gap_0x7528[2] = { End, End }`. */

/* gap sub-block @ 0x7530 (was gap+0x8, 40 bytes) */
u16 dFoxModel_gap_0x7528_sub_0x8[16] = {
	#include <FoxModel/gap_0x7528_sub_0x8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x7558 (was gap+0x30, 40 bytes) */
u16 dFoxModel_gap_0x7528_sub_0x30[16] = {
	#include <FoxModel/gap_0x7528_sub_0x30.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x7580 (was gap+0x58, 40 bytes) */
u16 dFoxModel_gap_0x7528_sub_0x58[16] = {
	#include <FoxModel/gap_0x7528_sub_0x58.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x75A8 (was gap+0x80, 40 bytes) */
u16 dFoxModel_gap_0x7528_sub_0x80[16] = {
	#include <FoxModel/gap_0x7528_sub_0x80.palette.inc.c>
};
PAD(8);

/* Texture data @ 0x75D0 (568 bytes) */
/* @tex fmt=CI4 dim=16x32 */
u8 dFoxModel_Tex_0x75D0[304] = {
	#include <FoxModel/Tex_0x75D0.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x16 */
u8 dFoxModel_Tex_0x7700[264] = {
	#include <FoxModel/Tex_0x7700.tex.inc.c>
};

/* Palette: Lut_0x7808 @ 0x7808 (16 colors RGBA5551) */
u16 dFoxModel_Lut_0x7808_palette[16] = {
	#include <FoxModel/Lut_0x7808.palette.inc.c>
};

/* Raw data from file offset 0x7828 to 0x79D8 (432 bytes) */
PAD(8);  /* was 8 zero bytes typed as `u32 gap_0x7828[2] = { End, End }`. */

/* gap sub-block @ 0x7830 (was gap+0x8, 264 bytes) */
/* @tex fmt=CI4 dim=32x16 */
u8 dFoxModel_Tex_0x7830[264] = {
	#include <FoxModel/Tex_0x7830.tex.inc.c>
};

/* gap sub-block @ 0x7938 (was gap+0x110, 40 bytes) */
u16 dFoxModel_gap_0x7828_sub_0x110[16] = {
	#include <FoxModel/gap_0x7828_sub_0x110.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x7960 (was gap+0x138, 40 bytes) */
u16 dFoxModel_gap_0x7828_sub_0x138[16] = {
	#include <FoxModel/gap_0x7828_sub_0x138.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x7988 (was gap+0x160, 40 bytes) */
u16 dFoxModel_gap_0x7828_sub_0x160[16] = {
	#include <FoxModel/gap_0x7828_sub_0x160.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x79B0 (was gap+0x188, 40 bytes) */
u16 dFoxModel_gap_0x7828_sub_0x188[16] = {
	#include <FoxModel/gap_0x7828_sub_0x188.palette.inc.c>
};
PAD(8);

/* Texture data @ 0x79D8 (264 bytes) */
/* @tex fmt=CI4 dim=16x32 */
u8 dFoxModel_Tex_0x79D8[256] = {
	#include <FoxModel/Tex_0x79D8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x7AE0 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dFoxModel_Lut_0x7508_palette */
u8 dFoxModel_Tex_0x7AE0[72] = {
	#include <FoxModel/Tex_0x7AE0.tex.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dFoxModel_Stock_tex[88] = {
	#include <FoxModel/Stock.ci4.inc.c>
};

/* Palette: @ 0x7B80 (16 colors RGBA5551) */
u16 dFoxModel_palette_0x7B80[16] = {
	#include <FoxModel/palette_0x7B80.palette.inc.c>
};

/* "Stock LUTs" — palette frames cycled by FTSprites.stock_luts (FoxMain).
 * Pointers in dFoxMain_stock_luts[4] target palette_0x7B80, gap_0x7BA0_sub_0x8,
 * gap_0x7BA0_sub_0x30, gap_0x7BA0_sub_0x58. Each frame is 16 colors RGBA5551
 * (32 bytes), with an 8-byte trailing pad between frames; the last frame has
 * no pad. The standalone gap_0x7BA0[8] is the trailing pad of palette_0x7B80. */
u16 dFoxModel_gap_0x7BA0[4] = {
	#include <FoxModel/gap_0x7BA0.palette.inc.c>
};

u16 dFoxModel_gap_0x7BA0_sub_0x8[16] = {
	#include <FoxModel/gap_0x7BA0_sub_0x8.palette.inc.c>
};
PAD(8);

u16 dFoxModel_gap_0x7BA0_sub_0x30[16] = {
	#include <FoxModel/gap_0x7BA0_sub_0x30.palette.inc.c>
};
PAD(8);

u16 dFoxModel_gap_0x7BA0_sub_0x58[16] = {
	#include <FoxModel/gap_0x7BA0_sub_0x58.palette.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dFoxModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dFoxModel_Stock_tex, 10, 0 },
};

Sprite dFoxModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dFoxModel_palette_0x7B80,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dFoxModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FTEmblem */

Gfx dFoxModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (30(32)x24 i4) */
u8 dFoxModel_FTEmblem_tex[384] = {
	#include <FoxModel/FTEmblem.i4.inc.c>
};

Bitmap dFoxModel_FTEmblem_bitmaps[] = {
	{ 30, 32, 0, 0, dFoxModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (30x24 i4) */
Sprite dFoxModel_FTEmblem = {
	0, 0,
	30, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	4, 0,
	(Bitmap*)dFoxModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
