/* relocData file 335: NessModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dMarioSecondaryImage_Tex_0x0008[];
extern u8 dMarioSecondaryImage_Tex_0x0018[];
extern u16 dMarioSecondaryImage_Tex_0x0060[];
extern u8 dMarioSecondaryImage_Tex_0x0078[];
extern u16 dNessModel_Lut_0xB9F0_palette[];
extern u16 dNessModel_Lut_0xC060_palette[16];
extern u8 dNessModel_Tex_0xAB20[];
extern u8 dNessModel_Tex_0xAC28[];
extern u8 dNessModel_Tex_0xAC50[];
extern u8 dNessModel_Tex_0xAD00[];
extern u8 dNessModel_Tex_0xAE30[];
extern u8 dNessModel_Tex_0xAF38[];
extern u8 dNessModel_Tex_0xB9A8[];
extern u8 dNessModel_Tex_0xBA18[];
extern u8 dNessModel_Tex_0xBB20[];
extern u8 dNessModel_Tex_0xBB48[];
extern u8 dNessModel_Tex_0xBD50[];
extern u8 dNessModel_Tex_0xBDE8[];
extern u8 dNessModel_Tex_0xBE30[];
extern u8 dNessModel_Tex_0xBE58[];
extern u16 dMarioSecondaryImage_Tex_0x0008[];
extern u8 dMarioSecondaryImage_Tex_0x0018[];
extern u16 dMarioSecondaryImage_Tex_0x0060[];
extern u8 dMarioSecondaryImage_Tex_0x0078[];
extern MObjSub **dNessModel_JointVerts_Vtx[];
extern void *dNessModel_Joint_0x0040_post[];
extern void *dNessModel_Joint_0x0040_post_palset_0x2C[];
extern u8 dNessModel_Tex_0x8B58[];
extern Vtx dNessModel_Vtx_0x06D0_Vtx[];
extern Vtx dNessModel_Vtx_0x07A0_Vtx[];
extern Vtx dNessModel_Vtx_0x0830_Vtx[];
extern Vtx dNessModel_Vtx_0x08D0_Vtx[];
extern Vtx dNessModel_Vtx_0x0930_Vtx[];
extern Vtx dNessModel_Vtx_0x09C0_Vtx[];
extern Vtx dNessModel_Vtx_0x0A40_Vtx[];
extern Vtx dNessModel_Vtx_0x0AC0_Vtx[];
extern Vtx dNessModel_Vtx_0x0B60_Vtx[];
extern Vtx dNessModel_Vtx_0x0C10_Vtx[];
extern Vtx dNessModel_Vtx_0x0C70_Vtx[];
extern Vtx dNessModel_Vtx_0x0D30_Vtx[];
extern Vtx dNessModel_Vtx_0x0EB0_Vtx[];
extern Vtx dNessModel_Vtx_0x0F10_Vtx[];
extern Vtx dNessModel_Vtx_0x0F90_Vtx[];
extern Vtx dNessModel_Vtx_0x1020_Vtx[];
extern Vtx dNessModel_Vtx_0x10A0_Vtx[];
extern Vtx dNessModel_Vtx_0x1120_Vtx[];
extern Vtx dNessModel_Vtx_0x11C0_Vtx[];
extern Vtx dNessModel_Vtx_0x1280_Vtx[];
extern Vtx dNessModel_Vtx_0x1380_Vtx[];
extern Vtx dNessModel_Vtx_0x1430_Vtx[];
extern Vtx dNessModel_Vtx_0x14F0_Vtx[];
extern Vtx dNessModel_Vtx_0x15F0_Vtx[];
extern Vtx dNessModel_Vtx_0x34E0_Vtx[];
extern Vtx dNessModel_Vtx_0x3570_Vtx[];
extern Vtx dNessModel_Vtx_0x3600_Vtx[];
extern Vtx dNessModel_Vtx_0x3620_Vtx[];
extern Vtx dNessModel_Vtx_0x3680_Vtx[];
extern Vtx dNessModel_Vtx_0x36F0_Vtx[];
extern Vtx dNessModel_Vtx_0x3750_Vtx[];
extern Vtx dNessModel_Vtx_0x37B0_Vtx[];
extern Vtx dNessModel_Vtx_0x3820_Vtx[];
extern Vtx dNessModel_Vtx_0x38B0_Vtx[];
extern Vtx dNessModel_Vtx_0x38F0_Vtx[];
extern Vtx dNessModel_Vtx_0x39B0_Vtx[];
extern Vtx dNessModel_Vtx_0x3A80_Vtx[];
extern Vtx dNessModel_Vtx_0x3AD0_Vtx[];
extern Vtx dNessModel_Vtx_0x3B30_Vtx[];
extern Vtx dNessModel_Vtx_0x3BA0_Vtx[];
extern Vtx dNessModel_Vtx_0x3C00_Vtx[];
extern Vtx dNessModel_Vtx_0x3C60_Vtx[];
extern Vtx dNessModel_Vtx_0x3CD0_Vtx[];
extern Vtx dNessModel_Vtx_0x3D50_Vtx[];
extern Vtx dNessModel_Vtx_0x3DC0_Vtx[];
extern Vtx dNessModel_Vtx_0x3E30_Vtx[];
extern Vtx dNessModel_Vtx_0x3EB0_Vtx[];
extern Vtx dNessModel_Vtx_0x3F20_Vtx[];
extern Vtx dNessModel_Vtx_0x9C60[];
extern Vtx dNessModel_Vtx_0x9D50[];
extern Vtx dNessModel_Vtx_0x9E90[];
extern Vtx dNessModel_Vtx_0x9F40[];
extern Vtx dNessModel_Vtx_0xA0C0[];
extern Vtx dNessModel_Vtx_0xA2E0[];
extern Vtx dNessModel_Vtx_0xA3F0[];
extern Vtx dNessModel_Vtx_0xA500[];
extern Vtx dNessModel_Vtx_0xA5E0[];
extern Vtx dNessModel_Vtx_0xA6C0[];
extern Vtx dNessModel_Vtx_0xA7D0[];
extern Vtx dNessModel_Vtx_0xA8E0[];
extern Vtx dNessModel_Vtx_0xA9C0[];
extern Vtx dNessModel_gap_0x553C_sub_0x1044[];
extern Vtx dNessModel_gap_0x553C_sub_0x1464[];
extern Vtx dNessModel_gap_0x553C_sub_0x1594[];
extern Vtx dNessModel_gap_0x553C_sub_0x15D4[];
extern Vtx dNessModel_gap_0x553C_sub_0x1734[];
extern Vtx dNessModel_gap_0x553C_sub_0x17A4[];
extern Vtx dNessModel_gap_0x553C_sub_0x214[];
extern Vtx dNessModel_gap_0x553C_sub_0x2654[];
extern Vtx dNessModel_gap_0x553C_sub_0x351C[];
extern Vtx dNessModel_gap_0x553C_sub_0x3A1C[];
extern Vtx dNessModel_gap_0x553C_sub_0x3A4[];
extern Vtx dNessModel_gap_0x553C_sub_0x4E4[];
extern Vtx dNessModel_gap_0x553C_sub_0x674[];
extern Vtx dNessModel_gap_0x553C_sub_0x7B4[];
extern Vtx dNessModel_gap_0x553C_sub_0x904[];
extern Vtx dNessModel_gap_0x553C_sub_0xA04[];
extern Vtx dNessModel_gap_0x553C_sub_0xB54[];
extern Vtx dNessModel_gap_0x553C_sub_0xC54[];
extern Vtx dNessModel_gap_0x553C_sub_0xD24[];
extern Vtx dNessModel_gap_0x553C_sub_0xE64[];
extern Vtx dNessModel_gap_0x98E8_sub_0x20[];
extern Gfx dNessModel_DL_0x7BD0[23];
extern u16 dNessModel_palette_0xACD8[16];
extern u16 dNessModel_palette_0xAE08[16];
extern u16 dNessModel_palette_0xBD98[16];
extern u16 dNessModel_palette_0xBDC0[16];
extern u8 dNessModel_Tex_0xAF80[520];
extern u8 dNessModel_Tex_0xB188[520];
extern u8 dNessModel_Tex_0xB390[520];
extern u8 dNessModel_Tex_0xB598[520];
extern u8 dNessModel_Tex_0xB7A0[520];
extern Gfx dNessModel_DL_0x8A98[21];
extern void *dNessModel_PKThunderWaveMObjSub_sprites_table[6];
extern MObjSub dNessModel_PKThunderWaveMObjSub_MObjSub[1];
extern AObjEvent32 *dNessModel_gap_0x98E8_sub_0x18[2];
extern u32 dNessModel_gap_0x2C04_sub_0x1B0[10];
extern u32 dNessModel_gap_0x553C_sub_0x1B8[10];
extern DObjDLLink dNessModel_DLLink_0x7C88[2];
extern u32 dNessModel_gap_0x553C_sub_0x27EC[18];
extern u32 dNessModel_gap_0x553C_sub_0x283C[10];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x1FC[1];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x1E0[3];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x1EC[1];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x200[1];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x204[1];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x208[1];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x20C[2];

extern u32 dNessModel_PKThunderWaveAnimJoint_AnimJoint_0x9ACC[];

extern u32 dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_0x9BBC[40];
extern AObjEvent32 *dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_inner_0x9C5C[1];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1E8[3];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x8A4[4];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x1F0[3];
extern MObjSub dNessModel_gap_0x2C04_sub_0x4CC[1];
extern MObjSub dNessModel_gap_0x2C04_sub_0x544[1];
extern MObjSub dNessModel_gap_0x2C04_sub_0x5BC[1];
extern u32 dNessModel_gap_0x2C04_sub_0x88[14];
extern u32 dNessModel_gap_0x2C04_sub_0xC0[10];
extern u32 dNessModel_gap_0x2C04_sub_0xE8[10];
extern u32 dNessModel_gap_0x553C_sub_0x90[14];
extern u32 dNessModel_gap_0x553C_sub_0xC8[10];
extern u32 dNessModel_gap_0x553C_sub_0xF0[10];
extern MObjSub *dNessModel_gap_0x553C_sub_0x264C[2];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x8C4[2];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x8CC[2];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x8D4[2];
extern MObjSub *dNessModel_gap_0x553C_sub_0x3514[2];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x8B4[2];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x8BC[2];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x88C[4];
extern MObjSub *dNessModel_gap_0x2C04_sub_0x89C[2];
extern MObjSub * dNessModel_Joint_0x0040_post_sub_0x658[4];
extern MObjSub * dNessModel_Joint_0x0040_post_sub_0x668[2];
extern MObjSub * dNessModel_Joint_0x0040_post_sub_0x670[2];
extern MObjSub * dNessModel_Joint_0x0040_post_sub_0x678[2];
extern MObjSub * dNessModel_Joint_0x0040_post_sub_0x680[2];
extern MObjSub * dNessModel_Joint_0x0040_post_sub_0x688[2];
extern u16 dNessModel_palette_0xAAA8[16];
extern u16 dNessModel_palette_0xAAD0[16];
extern u16 dNessModel_palette_0xAAF8[16];
extern AObjEvent32 *dNessModel_gap_0x553C_sub_0x2864[6];
/* Forward DObjDesc chain-target decls for fixRelocChain.py */
extern MObjSub *dNessModel_Joint_0x0040_post_sub_0x640[4];
extern MObjSub *dNessModel_Joint_0x0040_post_sub_0x650[2];
/* JointVerts @ 0x0 — 16-entry MObjSub** sparse dispatch table (NOT a Vtx
 * array, despite the legacy name). Absorbs the old `Joint_0x0020_post`
 * (entries [8..15], file 0x0020..0x003F). Each non-NULL entry points to a
 * per-joint MObjSub* list. Passed as `(MObjSub ***)` to the runtime
 * joint-tree material setup in 239_NessMain.c. */
MObjSub **dNessModel_JointVerts_Vtx[16] = {
	NULL,
	NULL,
	dNessModel_Joint_0x0040_post_sub_0x640,
	NULL,
	dNessModel_Joint_0x0040_post_sub_0x650,
	NULL,
	NULL,
	NULL,
	(MObjSub **)dNessModel_Joint_0x0040_post_sub_0x658,
	NULL,
	(MObjSub **)dNessModel_Joint_0x0040_post_sub_0x668,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* Raw data from file offset 0x40 to 0xE0 (160 bytes).
 * Holds palette/sprite tables. The 12 MObjSubs (0x78 bytes
 * each, file offsets 0xE0..0x680) and
 * 8 MObjSub* trailing-index cells (0x680..0x6D0)
 * have been split out below. */
void *dNessModel_Joint_0x0040_post[11] = {
	NULL,
	NULL,
	dNessModel_Joint_0x0040_post_sub_0x670,
	dNessModel_Joint_0x0040_post_sub_0x678,
	NULL,
	NULL,
	NULL,
	NULL,
	dNessModel_Joint_0x0040_post_sub_0x680,
	dNessModel_Joint_0x0040_post_sub_0x688,
	NULL,
};

/* palette/sprite set @ +0x2C (4 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x2C[4] = {
	dNessModel_Lut_0xC060_palette,
	dNessModel_palette_0xACD8,
	dNessModel_palette_0xAE08,
	(void *)dNessModel_palette_0xAAF8,
};

/* palette/sprite set @ +0x3C (4 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x3C[4] = {
	dNessModel_Lut_0xC060_palette,
	(void *)dNessModel_palette_0xAAA8,
	(void *)dNessModel_palette_0xAAD0,
	(void *)dNessModel_palette_0xAAF8,
};

/* palette/sprite set @ +0x4C (4 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x4C[4] = {
	dNessModel_palette_0xBDC0,
	(void *)dNessModel_palette_0xAAA8,
	(void *)dNessModel_palette_0xAAD0,
	dNessModel_palette_0xBD98,
};

/* palette/sprite set @ +0x5C (5 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x5C[5] = {
	dNessModel_Tex_0xB7A0,
	dNessModel_Tex_0xAF80,
	dNessModel_Tex_0xB188,
	dNessModel_Tex_0xB598,
	dNessModel_Tex_0xB390,
};

/* palette/sprite set @ +0x70 (4 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x70[4] = {
	dNessModel_palette_0xBDC0,
	(void *)dNessModel_palette_0xAAA8,
	(void *)dNessModel_palette_0xAAD0,
	dNessModel_palette_0xBD98,
};

/* palette/sprite set @ +0x80 (4 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x80[4] = {
	dNessModel_Lut_0xC060_palette,
	(void *)dNessModel_palette_0xAAA8,
	(void *)dNessModel_palette_0xAAD0,
	(void *)dNessModel_palette_0xAAF8,
};

/* palette/sprite set @ +0x90 (4 entries) */
void *dNessModel_Joint_0x0040_post_palset_0x90[4] = {
	dNessModel_Lut_0xC060_palette,
	(void *)dNessModel_palette_0xAAA8,
	(void *)dNessModel_palette_0xAAD0,
	(void *)dNessModel_palette_0xAAF8,
};

/* MObjSub @ 0xE0 */
MObjSub dNessModel_Joint_0x0040_post_sub_0xA0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0024, 0x0003, 0x0020, 0x0020,
		0,
		0.065700002014637f, 0.08100000023841858f,
		0.8686000108718872f, 0.949999988079071f,
		0.065700002014637f, 0.8686000108718872f,
		(void**)dNessModel_Joint_0x0040_post_palset_0x2C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.065700002014637f, 0.08100000023841858f,
		0.065700002014637f, 0.0f,
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
/* MObjSub @ 0x158 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x118[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0024, 0x0003, 0x0020, 0x0020,
		0,
		0.065700002014637f, 0.08100000023841858f,
		0.8686000108718872f, 0.949999988079071f,
		0.065700002014637f, 0.8686000108718872f,
		(void**)dNessModel_Joint_0x0040_post_palset_0x3C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.065700002014637f, 0.08100000023841858f,
		0.065700002014637f, 0.0f,
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
/* MObjSub @ 0x1D0 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x190[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x248 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x208[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0008, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dNessModel_Joint_0x0040_post_palset_0x4C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0010,
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
/* MObjSub @ 0x2C0 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x280[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dNessModel_Joint_0x0040_post_palset_0x5C,
		0x003E, 0x0011, 0x0040, 0x0020,
		0,
		0.2591100037097931f, 0.40198400616645813f,
		0.7457789778709412f, 0.5080320239067078f,
		0.2591100037097931f, 0.7457789778709412f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.2591100037097931f, 0.40198400616645813f,
		0.2591100037097931f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x8C, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x338 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x2F8[1] = {
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
		{ { 0xFF, 0x00, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x3B0 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x370[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x428 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x3E8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0008, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dNessModel_Joint_0x0040_post_palset_0x70,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0010,
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
/* MObjSub @ 0x4A0 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x460[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0008, 0x0008,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dNessModel_Joint_0x0040_post_palset_0x80,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0008,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xF8, 0xFF, 0xFF, 0x00 } },
		{ { 0x4D, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x518 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x4D8[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};
/* MObjSub @ 0x590 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x550[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0008, 0x0008,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dNessModel_Joint_0x0040_post_palset_0x90,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0008,
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
/* MObjSub @ 0x608 */
MObjSub dNessModel_Joint_0x0040_post_sub_0x5C8[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub* trailing-index cells, NULL-terminated lists indexed by
 * dNessModel_gap_0x0000[joint] dispatch. */
MObjSub *dNessModel_Joint_0x0040_post_sub_0x640[4] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0xA0,
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x118,
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x190,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x650[2] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x208,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x658[4] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x280,
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x2F8,
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x370,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x668[2] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x3E8,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x670[2] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x460,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x678[2] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x4D8,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x680[2] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x550,
	NULL,
};
MObjSub *dNessModel_Joint_0x0040_post_sub_0x688[2] = {
	(MObjSub *)dNessModel_Joint_0x0040_post_sub_0x5C8,
	NULL,
};

/* Vtx: Vtx_0x06D0 @ 0x6D0 (13 vertices) */
Vtx dNessModel_Vtx_0x06D0_Vtx[13] = {
	#include <NessModel/Vtx_0x06D0.vtx.inc.c>
};

/* Vtx: Vtx_0x07A0_Vtx @ 0x7A0 (9 vertices) */
Vtx dNessModel_Vtx_0x07A0_Vtx[9] = {
	#include <NessModel/Vtx_0x07A0.vtx.inc.c>
};

/* Vtx: Vtx_0x0830 @ 0x830 (10 vertices) */
Vtx dNessModel_Vtx_0x0830_Vtx[10] = {
	#include <NessModel/Vtx_0x0830.vtx.inc.c>
};

/* Vtx: Vtx_0x08D0 @ 0x8D0 (6 vertices) */
Vtx dNessModel_Vtx_0x08D0_Vtx[6] = {
	#include <NessModel/Vtx_0x08D0.vtx.inc.c>
};

/* Vtx: Vtx_0x0930 @ 0x930 (9 vertices) */
Vtx dNessModel_Vtx_0x0930_Vtx[9] = {
	#include <NessModel/Vtx_0x0930.vtx.inc.c>
};

/* Vtx: Vtx_0x09C0 @ 0x9C0 (8 vertices) */
Vtx dNessModel_Vtx_0x09C0_Vtx[8] = {
	#include <NessModel/Vtx_0x09C0.vtx.inc.c>
};

/* Vtx: Vtx_0x0A40 @ 0xA40 (8 vertices) */
Vtx dNessModel_Vtx_0x0A40_Vtx[8] = {
	#include <NessModel/Vtx_0x0A40.vtx.inc.c>
};

/* Vtx: Vtx_0x0AC0 @ 0xAC0 (10 vertices) */
Vtx dNessModel_Vtx_0x0AC0_Vtx[10] = {
	#include <NessModel/Vtx_0x0AC0.vtx.inc.c>
};

/* Vtx: Vtx_0x0B60 @ 0xB60 (11 vertices) */
Vtx dNessModel_Vtx_0x0B60_Vtx[11] = {
	#include <NessModel/Vtx_0x0B60.vtx.inc.c>
};

/* Vtx: Vtx_0x0C10_Vtx @ 0xC10 (6 vertices) */
Vtx dNessModel_Vtx_0x0C10_Vtx[6] = {
	#include <NessModel/Vtx_0x0C10.vtx.inc.c>
};

/* Vtx: Vtx_0x0C70 @ 0xC70 (12 vertices) */
Vtx dNessModel_Vtx_0x0C70_Vtx[12] = {
	#include <NessModel/Vtx_0x0C70.vtx.inc.c>
};

/* Vtx: Vtx_0x0D30 @ 0xD30 (24 vertices) */
Vtx dNessModel_Vtx_0x0D30_Vtx[24] = {
	#include <NessModel/Vtx_0x0D30.vtx.inc.c>
};

/* Vtx: Vtx_0x0EB0 @ 0xEB0 (6 vertices) */
Vtx dNessModel_Vtx_0x0EB0_Vtx[6] = {
	#include <NessModel/Vtx_0x0EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x0F10 @ 0xF10 (8 vertices) */
Vtx dNessModel_Vtx_0x0F10_Vtx[8] = {
	#include <NessModel/Vtx_0x0F10.vtx.inc.c>
};

/* Vtx: Vtx_0x0F90 @ 0xF90 (9 vertices) */
Vtx dNessModel_Vtx_0x0F90_Vtx[9] = {
	#include <NessModel/Vtx_0x0F90.vtx.inc.c>
};

/* Vtx: Vtx_0x1020 @ 0x1020 (8 vertices) */
Vtx dNessModel_Vtx_0x1020_Vtx[8] = {
	#include <NessModel/Vtx_0x1020.vtx.inc.c>
};

/* Vtx: Vtx_0x10A0 @ 0x10A0 (8 vertices) */
Vtx dNessModel_Vtx_0x10A0_Vtx[8] = {
	#include <NessModel/Vtx_0x10A0.vtx.inc.c>
};

/* Vtx: Vtx_0x1120 @ 0x1120 (10 vertices) */
Vtx dNessModel_Vtx_0x1120_Vtx[10] = {
	#include <NessModel/Vtx_0x1120.vtx.inc.c>
};

/* Vtx: Vtx_0x11C0_Vtx @ 0x11C0 (12 vertices) */
Vtx dNessModel_Vtx_0x11C0_Vtx[12] = {
	#include <NessModel/Vtx_0x11C0.vtx.inc.c>
};

/* Vtx: Vtx_0x1280 @ 0x1280 (16 vertices) */
Vtx dNessModel_Vtx_0x1280_Vtx[16] = {
	#include <NessModel/Vtx_0x1280.vtx.inc.c>
};

/* Vtx: Vtx_0x1380 @ 0x1380 (11 vertices) */
Vtx dNessModel_Vtx_0x1380_Vtx[11] = {
	#include <NessModel/Vtx_0x1380.vtx.inc.c>
};

/* Vtx: Vtx_0x1430_Vtx @ 0x1430 (12 vertices) */
Vtx dNessModel_Vtx_0x1430_Vtx[12] = {
	#include <NessModel/Vtx_0x1430.vtx.inc.c>
};

/* Vtx: Vtx_0x14F0 @ 0x14F0 (16 vertices) */
Vtx dNessModel_Vtx_0x14F0_Vtx[16] = {
	#include <NessModel/Vtx_0x14F0.vtx.inc.c>
};

/* Vtx: Vtx_0x15F0 @ 0x15F0 (11 vertices) */
Vtx dNessModel_Vtx_0x15F0_Vtx[11] = {
	#include <NessModel/Vtx_0x15F0.vtx.inc.c>
};

/* DisplayList: Joint_0x16A0 @ 0x16A0 (656 bytes, 82 cmds) */
Gfx dNessModel_Joint_0x16A0_DisplayList[82] = {
	#include <NessModel/Joint_0x16A0.dl.inc.c>
};

/* DisplayList: Joint_0x1930 @ 0x1930 (344 bytes, 43 cmds) */
Gfx dNessModel_Joint_0x1930_DisplayList[43] = {
	#include <NessModel/Joint_0x1930.dl.inc.c>
};

/* DisplayList: Joint_0x1A88 @ 0x1A88 (112 bytes, 14 cmds) */
Gfx dNessModel_Joint_0x1A88_DisplayList[14] = {
	#include <NessModel/Joint_0x1A88.dl.inc.c>
};

/* DisplayList: Joint_0x1AF8 @ 0x1AF8 (144 bytes, 18 cmds) */
Gfx dNessModel_Joint_0x1AF8_DisplayList[18] = {
	#include <NessModel/Joint_0x1AF8.dl.inc.c>
};

/* DisplayList: Joint_0x1B88 @ 0x1B88 (920 bytes, 115 cmds) */
Gfx dNessModel_Joint_0x1B88_DisplayList[115] = {
	#include <NessModel/Joint_0x1B88.dl.inc.c>
};

/* DisplayList: Joint_0x1F20 @ 0x1F20 (344 bytes, 43 cmds) */
Gfx dNessModel_Joint_0x1F20_DisplayList[43] = {
	#include <NessModel/Joint_0x1F20.dl.inc.c>
};

/* DisplayList: Joint_0x2078 @ 0x2078 (112 bytes, 14 cmds) */
Gfx dNessModel_Joint_0x2078_DisplayList[14] = {
	#include <NessModel/Joint_0x2078.dl.inc.c>
};

/* DisplayList: Joint_0x20E8 @ 0x20E8 (144 bytes, 18 cmds) */
Gfx dNessModel_Joint_0x20E8_DisplayList[18] = {
	#include <NessModel/Joint_0x20E8.dl.inc.c>
};

/* DisplayList: Joint_0x2178 @ 0x2178 (208 bytes, 26 cmds) */
Gfx dNessModel_Joint_0x2178_DisplayList[26] = {
	#include <NessModel/Joint_0x2178.dl.inc.c>
};

/* DisplayList: Joint_0x2248 @ 0x2248 (280 bytes, 35 cmds) */
Gfx dNessModel_Joint_0x2248_DisplayList[35] = {
	#include <NessModel/Joint_0x2248.dl.inc.c>
};

/* DisplayList: Joint_0x2360 @ 0x2360 (176 bytes, 22 cmds) */
Gfx dNessModel_Joint_0x2360_DisplayList[22] = {
	#include <NessModel/Joint_0x2360.dl.inc.c>
};

/* DisplayList: Joint_0x2410 @ 0x2410 (216 bytes, 27 cmds) */
Gfx dNessModel_Joint_0x2410_DisplayList[27] = {
	#include <NessModel/Joint_0x2410.dl.inc.c>
};

/* DisplayList: Joint_0x24E8 @ 0x24E8 (280 bytes, 35 cmds) */
Gfx dNessModel_Joint_0x24E8_DisplayList[35] = {
	#include <NessModel/Joint_0x24E8.dl.inc.c>
};

/* DisplayList: Joint_0x2600 @ 0x2600 (176 bytes, 22 cmds) */
Gfx dNessModel_Joint_0x2600_DisplayList[22] = {
	#include <NessModel/Joint_0x2600.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x26B0 (28 entries — the original 29th-31st
 * were the per-joint dispatch table at +0x4D0; split out below as
 * `gap_0x2B80`). */
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1D8[3];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1E4[1];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1E8[3];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1F4[1];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1F8[1];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1FC[1];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x200[1];
extern AObjEvent32 *dNessModel_gap_0x2C04_sub_0x204[2];

DObjDesc dNessModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_Joint_0x16A0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x1930_DisplayList, { 0.0f, -1.4000000192027073e-05f, 3.999999989900971e-06f }, { -0.05102600157260895f, -0.4999369978904724f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNessModel_Joint_0x1A88_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x1AF8_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x1B88_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x1F20_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.055590998381376266f, 0.49949100613594055f, 0.00952600035816431f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNessModel_Joint_0x2078_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017774999141693115f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x20E8_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.06251525878906f, -17.551252365112305f, 3.520073890686035f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.11142999678850174f, -0.08334500342607498f, -0.03497999906539917f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x2178_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x2248_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.07527299970388412f, -0.4641610085964203f, 0.21304699778556824f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_Joint_0x2360_DisplayList, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.10911700129508972f, 0.08337900042533875f, -0.018825000151991844f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x2410_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x24E8_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.030578000470995903f, 0.4896720051765442f, 0.19668099284172058f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_Joint_0x2600_DisplayList, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 120.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Per-joint dispatch table @ 0x2B80 — 27 slots holding the per-joint
 * pointer-table entries that JointTree DObjDesc[] chains into via float
 * fields. Originally rolled into JointTree as 29th-31st DObjDesc entries. */
void *dNessModel_gap_0x2B80[27] = {
	NULL, NULL,
	(void *)dNessModel_gap_0x2C04_sub_0x1D8,    /* +0x08 */
	NULL,
	(void *)dNessModel_gap_0x2C04_sub_0x1E4,    /* +0x10 */
	NULL, NULL, NULL,
	(void *)dNessModel_gap_0x2C04_sub_0x1E8,    /* +0x20 */
	NULL,
	(void *)dNessModel_gap_0x2C04_sub_0x1F4,    /* +0x28 */
	NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	(void *)dNessModel_gap_0x2C04_sub_0x1F8,    /* +0x48 */
	(void *)dNessModel_gap_0x2C04_sub_0x1FC,    /* +0x4C */
	NULL, NULL, NULL, NULL,
	(void *)dNessModel_gap_0x2C04_sub_0x200,    /* +0x60 */
	(void *)dNessModel_gap_0x2C04_sub_0x204,    /* +0x64 */
	NULL,
};

/* AObjEvent32 script @ 0x2BEC — 10-word script that ramps a material
 * track 0 → 1.0 → 2.0 → 3.0 (via SetValAfterBlock + SetValAfter), waits
 * 98 frames, then terminates. Absorbs the old `gap_0x2B80_sub_0x6C`
 * (mistyped as DObjDesc tail) + `gap_0x2C04` (the 4-word tail) — both
 * were halves of the same script. `gap_0x2C04_sub_0x1D8[0]` chain-points
 * to this symbol. */
u32 dNessModel_script_0x2BEC[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2C14 — PaletteID ramp (track 0x200): 0→1→2→3
 * via SetValAfterBlock + SetValAfter, then Wait(98) + End. Was previously
 * mistyped as a palette (u16[20]) because the byte layout coincidentally
 * matches 16 LUT colors + 4 trailing zeros. */
u32 dNessModel_gap_0x2C04_sub_0x10[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2C3C — Ext-color ramp (track 0x001) cycling
 * four RGBA8 packed colors then Wait(98) + End. Was mistyped as palette. */
u32 dNessModel_gap_0x2C04_sub_0x38[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,  /* -1.5022252390726089e-31f raw / RGBA: 8C42FFFF */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,  /* RGBA: 393939FF */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,  /* RGBA: CE4A84FF */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,  /* RGBA: FF7300FF */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2C64 — duplicate of sub_0x10 (PaletteID ramp). */
u32 dNessModel_gap_0x2C04_sub_0x60[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2C8C (was gap+0x88, 56 bytes) */
u32 dNessModel_gap_0x2C04_sub_0x88[14] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(47),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2CC4 (was gap+0xC0, 40 bytes) */
u32 dNessModel_gap_0x2C04_sub_0xC0[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFCE00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x0000FFFF,  /* 9.183409485952689e-41f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00BD00FF,  /* 1.7357266104968742e-38f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* gap sub-block @ 0x2CEC (was gap+0xE8, 40 bytes) */
u32 dNessModel_gap_0x2C04_sub_0xE8[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,  /* -1.5022252390726089e-31f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,  /* 0.0001766458008205518f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,  /* -849428416.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,  /* -3.230075749901835e+38f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2D14 — duplicate of sub_0x10 (PaletteID ramp). */
u32 dNessModel_gap_0x2C04_sub_0x110[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2D3C — duplicate of sub_0x10 (PaletteID ramp). */
u32 dNessModel_gap_0x2C04_sub_0x138[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2D64 — duplicate of sub_0x38 (Ext-color ramp). */
u32 dNessModel_gap_0x2C04_sub_0x160[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,  /* RGBA: 8C42FFFF */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,  /* RGBA: 393939FF */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,  /* RGBA: CE4A84FF */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,  /* RGBA: FF7300FF */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2D8C — duplicate of sub_0x10 (PaletteID ramp). */
u32 dNessModel_gap_0x2C04_sub_0x188[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x2DB4 — duplicate of sub_0x38 (Ext-color ramp). */
u32 dNessModel_gap_0x2C04_sub_0x1B0[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,  /* RGBA: 8C42FFFF */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,  /* RGBA: 393939FF */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,  /* RGBA: CE4A84FF */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,  /* RGBA: FF7300FF */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 *[3] @ 0x2DDC — 3-entry per-mobj script table for one
 * joint. All three targets are AObjEvent32 scripts (the chain back-ref
 * to script_0x2BEC is the joint's "default", the other two are alternate
 * material anims). */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1D8[3] = {
	(AObjEvent32 *)dNessModel_script_0x2BEC,
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x10,
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x38,
};

/* AObjEvent32 *[1] @ 0x2DE8 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1E4[1] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x60,
};

/* gap sub-block @ 0x2DEC (was gap+0x1E8, 12 bytes) */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1E8[3] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x88,
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0xC0,
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0xE8,
};

/* AObjEvent32 *[1] @ 0x2DF8 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1F4[1] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x110,
};

/* AObjEvent32 *[1] @ 0x2DFC — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1F8[1] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x138,
};

/* AObjEvent32 *[1] @ 0x2E00 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x1FC[1] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x160,
};

/* AObjEvent32 *[1] @ 0x2E04 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x200[1] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x188,
};

/* AObjEvent32 *[2] @ 0x2E08 — single-entry per-mobj script table + NULL term. */
AObjEvent32 *dNessModel_gap_0x2C04_sub_0x204[2] = {
	(AObjEvent32 *)dNessModel_gap_0x2C04_sub_0x1B0,
	NULL,
};

/* gap sub-block @ 0x2E10 (was gap+0x20C, 108 bytes) */
MObjSub **dNessModel_gap_0x2C04_sub_0x20C[27] = {
	NULL,
	NULL,
	dNessModel_gap_0x2C04_sub_0x88C,
	NULL,
	dNessModel_gap_0x2C04_sub_0x89C,
	NULL,
	NULL,
	NULL,
	dNessModel_gap_0x2C04_sub_0x8A4,
	NULL,
	dNessModel_gap_0x2C04_sub_0x8B4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	dNessModel_gap_0x2C04_sub_0x8BC,
	dNessModel_gap_0x2C04_sub_0x8C4,
	NULL,
	NULL,
	NULL,
	NULL,
	dNessModel_gap_0x2C04_sub_0x8CC,
	dNessModel_gap_0x2C04_sub_0x8D4,
	NULL,
};

/* u32 pointer array @ 0x2E7C (4 entries) */
u16 *dNessModel_gap_0x2C04_sub_0x278[4] = {
	(u16 *)dNessModel_Lut_0xC060_palette,
	(u16 *)dNessModel_palette_0xACD8,
	(u16 *)dNessModel_palette_0xAE08,
	(u16 *)dNessModel_palette_0xAAF8,
};

/* u32 pointer array @ 0x2E8C (4 entries) */
u16 *dNessModel_gap_0x2C04_sub_0x288[4] = {
	(u16 *)dNessModel_Lut_0xC060_palette,
	(u16 *)dNessModel_palette_0xAAA8,
	(u16 *)dNessModel_palette_0xAAD0,
	(u16 *)dNessModel_palette_0xAAF8,
};

/* u32 pointer array @ 0x2E9C (4 entries) */
u16 *dNessModel_gap_0x2C04_sub_0x298[4] = {
	(u16 *)dNessModel_palette_0xBDC0,
	(u16 *)dNessModel_palette_0xAAA8,
	(u16 *)dNessModel_palette_0xAAD0,
	(u16 *)dNessModel_palette_0xBD98,
};

/* u32 pointer array @ 0x2EAC (5 entries) */
u8 *dNessModel_gap_0x2C04_sub_0x2A8[5] = {
	dNessModel_Tex_0xB7A0,
	dNessModel_Tex_0xAF80,
	dNessModel_Tex_0xB188,
	dNessModel_Tex_0xB598,
	dNessModel_Tex_0xB390,
};

/* u32 pointer array @ 0x2EC0 (4 entries) */
u16 *dNessModel_gap_0x2C04_sub_0x2BC[4] = {
	(u16 *)dNessModel_palette_0xBDC0,
	(u16 *)dNessModel_palette_0xAAA8,
	(u16 *)dNessModel_palette_0xAAD0,
	(u16 *)dNessModel_palette_0xBD98,
};

/* u32 pointer array @ 0x2ED0 (4 entries) */
u16 *dNessModel_gap_0x2C04_sub_0x2CC[4] = {
	(u16 *)dNessModel_Lut_0xC060_palette,
	(u16 *)dNessModel_palette_0xAAA8,
	(u16 *)dNessModel_palette_0xAAD0,
	(u16 *)dNessModel_palette_0xAAF8,
};

/* u32 pointer array @ 0x2EE0 (4 entries) */
u16 *dNessModel_gap_0x2C04_sub_0x2DC[4] = {
	(u16 *)dNessModel_Lut_0xC060_palette,
	(u16 *)dNessModel_palette_0xAAA8,
	(u16 *)dNessModel_palette_0xAAD0,
	(u16 *)dNessModel_palette_0xAAF8,
};

/* MObjSub @ 0x2EF0 */
MObjSub dNessModel_gap_0x2C04_sub_0x2EC[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0024, 0x0003, 0x0020, 0x0020,
		0,
		0.065700002014637f, 0.08100000023841858f,
		0.8686000108718872f, 0.949999988079071f,
		0.065700002014637f, 0.8686000108718872f,
		(void**)dNessModel_gap_0x2C04_sub_0x278,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.065700002014637f, 0.08100000023841858f,
		0.065700002014637f, 0.0f,
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

/* MObjSub @ 0x2F68 */
MObjSub dNessModel_gap_0x2C04_sub_0x364[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0024, 0x0003, 0x0020, 0x0020,
		0,
		0.065700002014637f, 0.08100000023841858f,
		0.8686000108718872f, 0.949999988079071f,
		0.065700002014637f, 0.8686000108718872f,
		(void**)dNessModel_gap_0x2C04_sub_0x288,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.065700002014637f, 0.08100000023841858f,
		0.065700002014637f, 0.0f,
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

/* MObjSub @ 0x2FE0 */
MObjSub dNessModel_gap_0x2C04_sub_0x3DC[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3058 */
MObjSub dNessModel_gap_0x2C04_sub_0x454[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0008, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dNessModel_gap_0x2C04_sub_0x298,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0010,
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

/* MObjSub @ 0x30D0 */
MObjSub dNessModel_gap_0x2C04_sub_0x4CC[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dNessModel_gap_0x2C04_sub_0x2A8,
		0x003E, 0x0011, 0x0040, 0x0020,
		0,
		0.2591100037097931f, 0.40198400616645813f,
		0.7457789778709412f, 0.5080320239067078f,
		0.2591100037097931f, 0.7457789778709412f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0020,
		0.2591100037097931f, 0.40198400616645813f,
		0.2591100037097931f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x8C, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3148 */
MObjSub dNessModel_gap_0x2C04_sub_0x544[1] = {
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
		{ { 0xFF, 0x00, 0x00, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x31C0 */
MObjSub dNessModel_gap_0x2C04_sub_0x5BC[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3238 */
MObjSub dNessModel_gap_0x2C04_sub_0x634[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0008, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dNessModel_gap_0x2C04_sub_0x2BC,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0010,
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

/* MObjSub @ 0x32B0 */
MObjSub dNessModel_gap_0x2C04_sub_0x6AC[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0047, 0x0000, 0x0008, 0x0008,
		0,
		0.0f, 0.05999999865889549f,
		1.0f, 0.444599986076355f,
		0.0f, 1.0f,
		(void**)dNessModel_gap_0x2C04_sub_0x2CC,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0008,
		0.0f, 0.05999999865889549f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xF8, 0xFF, 0xFF, 0x00 } },
		{ { 0x4D, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3328 */
MObjSub dNessModel_gap_0x2C04_sub_0x724[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x33A0 */
MObjSub dNessModel_gap_0x2C04_sub_0x79C[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0047, 0x0000, 0x0008, 0x0008,
		0,
		0.0f, 0.05999999865889549f,
		1.0f, 0.444599986076355f,
		0.0f, 1.0f,
		(void**)dNessModel_gap_0x2C04_sub_0x2DC,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0008,
		0x0008, 0x0008, 0x0008,
		0.0f, 0.05999999865889549f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xF8, 0xFF, 0xFF, 0x00 } },
		{ { 0x4D, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3418 */
MObjSub dNessModel_gap_0x2C04_sub_0x814[1] = {
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
		{ { 0x8C, 0x42, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x3490 (was gap+0x88C, 16 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x88C[4] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x2EC,
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x364,
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x3DC,
	NULL,
};

/* gap sub-block @ 0x34A0 (was gap+0x89C, 8 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x89C[2] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x454,
	NULL,
};

/* gap sub-block @ 0x34A8 (was gap+0x8A4, 16 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x8A4[4] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x4CC,
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x544,
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x5BC,
	NULL,
};

/* gap sub-block @ 0x34B8 (was gap+0x8B4, 8 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x8B4[2] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x634,
	NULL,
};

/* gap sub-block @ 0x34C0 (was gap+0x8BC, 8 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x8BC[2] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x6AC,
	NULL,
};

/* gap sub-block @ 0x34C8 (was gap+0x8C4, 8 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x8C4[2] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x724,
	NULL,
};

/* gap sub-block @ 0x34D0 (was gap+0x8CC, 8 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x8CC[2] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x79C,
	NULL,
};

/* gap sub-block @ 0x34D8 (was gap+0x8D4, 8 bytes) */
MObjSub *dNessModel_gap_0x2C04_sub_0x8D4[2] = {
	(MObjSub *)dNessModel_gap_0x2C04_sub_0x814,
	NULL,
};

/* Vtx: Vtx_0x34E0 @ 0x34E0 (9 vertices) */
Vtx dNessModel_Vtx_0x34E0_Vtx[9] = {
	#include <NessModel/Vtx_0x34E0.vtx.inc.c>
};

/* Vtx: Vtx_0x3570_Vtx @ 0x3570 (9 vertices) */
Vtx dNessModel_Vtx_0x3570_Vtx[9] = {
	#include <NessModel/Vtx_0x3570.vtx.inc.c>
};

/* Vtx: Vtx_0x3600 @ 0x3600 (2 vertices) */
Vtx dNessModel_Vtx_0x3600_Vtx[2] = {
	#include <NessModel/Vtx_0x3600.vtx.inc.c>
};

/* Vtx: Vtx_0x3620 @ 0x3620 (6 vertices) */
Vtx dNessModel_Vtx_0x3620_Vtx[6] = {
	#include <NessModel/Vtx_0x3620.vtx.inc.c>
};

/* Vtx: Vtx_0x3680 @ 0x3680 (7 vertices) */
Vtx dNessModel_Vtx_0x3680_Vtx[7] = {
	#include <NessModel/Vtx_0x3680.vtx.inc.c>
};

/* Vtx: Vtx_0x36F0 @ 0x36F0 (6 vertices) */
Vtx dNessModel_Vtx_0x36F0_Vtx[6] = {
	#include <NessModel/Vtx_0x36F0.vtx.inc.c>
};

/* Vtx: Vtx_0x3750 @ 0x3750 (6 vertices) */
Vtx dNessModel_Vtx_0x3750_Vtx[6] = {
	#include <NessModel/Vtx_0x3750.vtx.inc.c>
};

/* Vtx: Vtx_0x37B0 @ 0x37B0 (7 vertices) */
Vtx dNessModel_Vtx_0x37B0_Vtx[7] = {
	#include <NessModel/Vtx_0x37B0.vtx.inc.c>
};

/* Vtx: Vtx_0x3820 @ 0x3820 (9 vertices) */
Vtx dNessModel_Vtx_0x3820_Vtx[9] = {
	#include <NessModel/Vtx_0x3820.vtx.inc.c>
};

/* Vtx: Vtx_0x38B0 @ 0x38B0 (4 vertices) */
Vtx dNessModel_Vtx_0x38B0_Vtx[4] = {
	#include <NessModel/Vtx_0x38B0.vtx.inc.c>
};

/* Vtx: Vtx_0x38F0 @ 0x38F0 (12 vertices) */
Vtx dNessModel_Vtx_0x38F0_Vtx[12] = {
	#include <NessModel/Vtx_0x38F0.vtx.inc.c>
};

/* Vtx: Vtx_0x39B0 @ 0x39B0 (13 vertices) */
Vtx dNessModel_Vtx_0x39B0_Vtx[13] = {
	#include <NessModel/Vtx_0x39B0.vtx.inc.c>
};

/* Vtx: Vtx_0x3A80 @ 0x3A80 (5 vertices) */
Vtx dNessModel_Vtx_0x3A80_Vtx[5] = {
	#include <NessModel/Vtx_0x3A80.vtx.inc.c>
};

/* Vtx: Vtx_0x3AD0 @ 0x3AD0 (6 vertices) */
Vtx dNessModel_Vtx_0x3AD0_Vtx[6] = {
	#include <NessModel/Vtx_0x3AD0.vtx.inc.c>
};

/* Vtx: Vtx_0x3B30 @ 0x3B30 (7 vertices) */
Vtx dNessModel_Vtx_0x3B30_Vtx[7] = {
	#include <NessModel/Vtx_0x3B30.vtx.inc.c>
};

/* Vtx: Vtx_0x3BA0 @ 0x3BA0 (6 vertices) */
Vtx dNessModel_Vtx_0x3BA0_Vtx[6] = {
	#include <NessModel/Vtx_0x3BA0.vtx.inc.c>
};

/* Vtx: Vtx_0x3C00 @ 0x3C00 (6 vertices) */
Vtx dNessModel_Vtx_0x3C00_Vtx[6] = {
	#include <NessModel/Vtx_0x3C00.vtx.inc.c>
};

/* Vtx: Vtx_0x3C60 @ 0x3C60 (7 vertices) */
Vtx dNessModel_Vtx_0x3C60_Vtx[7] = {
	#include <NessModel/Vtx_0x3C60.vtx.inc.c>
};

/* Vtx: Vtx_0x3CD0 @ 0x3CD0 (8 vertices) */
Vtx dNessModel_Vtx_0x3CD0_Vtx[8] = {
	#include <NessModel/Vtx_0x3CD0.vtx.inc.c>
};

/* Vtx: Vtx_0x3D50 @ 0x3D50 (7 vertices) */
Vtx dNessModel_Vtx_0x3D50_Vtx[7] = {
	#include <NessModel/Vtx_0x3D50.vtx.inc.c>
};

/* Vtx: Vtx_0x3DC0 @ 0x3DC0 (7 vertices) */
Vtx dNessModel_Vtx_0x3DC0_Vtx[7] = {
	#include <NessModel/Vtx_0x3DC0.vtx.inc.c>
};

/* Vtx: Vtx_0x3E30 @ 0x3E30 (8 vertices) */
Vtx dNessModel_Vtx_0x3E30_Vtx[8] = {
	#include <NessModel/Vtx_0x3E30.vtx.inc.c>
};

/* Vtx: Vtx_0x3EB0 @ 0x3EB0 (7 vertices) */
Vtx dNessModel_Vtx_0x3EB0_Vtx[7] = {
	#include <NessModel/Vtx_0x3EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x3F20 @ 0x3F20 (7 vertices) */
Vtx dNessModel_Vtx_0x3F20_Vtx[7] = {
	#include <NessModel/Vtx_0x3F20.vtx.inc.c>
};

/* DisplayList: Joint_0x3F90 @ 0x3F90 (624 bytes, 78 cmds) */
Gfx dNessModel_Joint_0x3F90_DisplayList[78] = {
	#include <NessModel/Joint_0x3F90.dl.inc.c>
};

/* DisplayList: Joint_0x4200 @ 0x4200 (392 bytes, 49 cmds) */
Gfx dNessModel_Joint_0x4200_DisplayList[49] = {
	#include <NessModel/Joint_0x4200.dl.inc.c>
};

/* DisplayList: Joint_0x4388 @ 0x4388 (232 bytes, 29 cmds) */
Gfx dNessModel_Joint_0x4388_DisplayList[29] = {
	#include <NessModel/Joint_0x4388.dl.inc.c>
};

/* DisplayList: Joint_0x4470 @ 0x4470 (120 bytes, 15 cmds) */
Gfx dNessModel_Joint_0x4470_DisplayList[15] = {
	#include <NessModel/Joint_0x4470.dl.inc.c>
};

/* DisplayList: Joint_0x44E8 @ 0x44E8 (792 bytes, 99 cmds) */
Gfx dNessModel_Joint_0x44E8_DisplayList[99] = {
	#include <NessModel/Joint_0x44E8.dl.inc.c>
};

/* DisplayList: Joint_0x4800 @ 0x4800 (392 bytes, 49 cmds) */
Gfx dNessModel_Joint_0x4800_DisplayList[49] = {
	#include <NessModel/Joint_0x4800.dl.inc.c>
};

/* DisplayList: Joint_0x4988 @ 0x4988 (232 bytes, 29 cmds) */
Gfx dNessModel_Joint_0x4988_DisplayList[29] = {
	#include <NessModel/Joint_0x4988.dl.inc.c>
};

/* DisplayList: Joint_0x4A70 @ 0x4A70 (120 bytes, 15 cmds) */
Gfx dNessModel_Joint_0x4A70_DisplayList[15] = {
	#include <NessModel/Joint_0x4A70.dl.inc.c>
};

/* DisplayList: Joint_0x4AE8 @ 0x4AE8 (240 bytes, 30 cmds) */
Gfx dNessModel_Joint_0x4AE8_DisplayList[30] = {
	#include <NessModel/Joint_0x4AE8.dl.inc.c>
};

/* DisplayList: Joint_0x4BD8 @ 0x4BD8 (248 bytes, 31 cmds) */
Gfx dNessModel_Joint_0x4BD8_DisplayList[31] = {
	#include <NessModel/Joint_0x4BD8.dl.inc.c>
};

/* DisplayList: Joint_0x4CD0 @ 0x4CD0 (152 bytes, 19 cmds) */
Gfx dNessModel_Joint_0x4CD0_DisplayList[19] = {
	#include <NessModel/Joint_0x4CD0.dl.inc.c>
};

/* DisplayList: Joint_0x4D68 @ 0x4D68 (240 bytes, 30 cmds) */
Gfx dNessModel_Joint_0x4D68_DisplayList[30] = {
	#include <NessModel/Joint_0x4D68.dl.inc.c>
};

/* DisplayList: Joint_0x4E58 @ 0x4E58 (248 bytes, 31 cmds) */
Gfx dNessModel_Joint_0x4E58_DisplayList[31] = {
	#include <NessModel/Joint_0x4E58.dl.inc.c>
};

/* DisplayList: Joint_0x4F50 @ 0x4F50 (152 bytes, 19 cmds) */
Gfx dNessModel_Joint_0x4F50_DisplayList[19] = {
	#include <NessModel/Joint_0x4F50.dl.inc.c>
};

/* DObjDesc: JointTree_0x4FE8 @ 0x4FE8 (31 entries) */
/* DObjDesc: JointTree_0x4FE8 @ 0x4FE8 (28 entries — original 29th-31st
 * were the per-joint dispatch table at +0x4D0; split out as
 * `gap_0x54B8`). */
DObjDesc dNessModel_JointTree_0x4FE8[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_Joint_0x3F90_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x4200_DisplayList, { 0.0f, -1.4000000192027073e-05f, 3.999999989900971e-06f }, { -0.05102600157260895f, -0.4999369978904724f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNessModel_Joint_0x4388_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x4470_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 75.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x44E8_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x4800_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.05559299886226654f, 0.49948999285697937f, 0.009530999697744846f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNessModel_Joint_0x4988_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017784999683499336f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x4A70_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.06251525878906f, -17.551252365112305f, 3.520073890686035f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.11142999678850174f, -0.08334500342607498f, -0.03497999906539917f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x4AE8_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x4BD8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.07527299970388412f, -0.4641610085964203f, 0.21304699778556824f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_Joint_0x4CD0_DisplayList, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.10911700129508972f, 0.08337900042533875f, -0.018825000151991844f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNessModel_Joint_0x4D68_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNessModel_Joint_0x4E58_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.030578000470995903f, 0.4896720051765442f, 0.19668099284172058f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_Joint_0x4F50_DisplayList, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 120.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Per-joint dispatch table @ 0x54B8 — 29 slots holding the per-joint
 * pointer-table entries that JointTree DObjDesc[] chains into. */
void *dNessModel_gap_0x54B8[29] = {
	NULL, NULL, NULL, NULL,
	(void *)dNessModel_gap_0x553C_sub_0x1E0,    /* +0x10 */
	NULL,
	(void *)dNessModel_gap_0x553C_sub_0x1EC,    /* +0x18 */
	NULL, NULL, NULL,
	(void *)dNessModel_gap_0x553C_sub_0x1F0,    /* +0x28 */
	NULL,
	(void *)dNessModel_gap_0x553C_sub_0x1FC,    /* +0x30 */
	NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	(void *)dNessModel_gap_0x553C_sub_0x200,    /* +0x50 */
	(void *)dNessModel_gap_0x553C_sub_0x204,    /* +0x54 */
	NULL, NULL, NULL, NULL,
	(void *)dNessModel_gap_0x553C_sub_0x208,    /* +0x68 */
	(void *)dNessModel_gap_0x553C_sub_0x20C,    /* +0x6C */
	NULL,
};

/* AObjEvent32 script @ 0x552C — 10-word PaletteID ramp (mirror of
 * script_0x2BEC). Absorbs the old `gap_0x54B8_sub_0x74` (mistyped as
 * DObjDesc tail) + `gap_0x553C` (the 6-word tail). gap_0x553C_sub_0x1E0[0]
 * chain-points to this symbol. */
u32 dNessModel_script_0x552C[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x5554 — PaletteID ramp (track 0x200) — mistyped
 * as palette previously (40 bytes matches LUT layout). */
u32 dNessModel_gap_0x553C_sub_0x18[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x557C — Ext-color ramp (track 0x001). */
u32 dNessModel_gap_0x553C_sub_0x40[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x55A4 — duplicate of sub_0x18 (PaletteID ramp). */
u32 dNessModel_gap_0x553C_sub_0x68[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* gap sub-block @ 0x55CC (was gap+0x90, 56 bytes) */
u32 dNessModel_gap_0x553C_sub_0x90[14] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(47),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5604 (was gap+0xC8, 40 bytes) */
u32 dNessModel_gap_0x553C_sub_0xC8[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0xFF0000FF,  /* -1.7014635547491816e+38f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xFFCE00FF,  /* nanf */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x0000FFFF,  /* 9.183409485952689e-41f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0x00BD00FF,  /* 1.7357266104968742e-38f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* gap sub-block @ 0x562C (was gap+0xF0, 40 bytes) */
u32 dNessModel_gap_0x553C_sub_0xF0[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,  /* -1.5022252390726089e-31f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,  /* 0.0001766458008205518f */
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,  /* -849428416.0f */
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,  /* -3.230075749901835e+38f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x5654 — duplicate of sub_0x18 (PaletteID ramp). */
u32 dNessModel_gap_0x553C_sub_0x118[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x567C — duplicate of sub_0x18 (PaletteID ramp). */
u32 dNessModel_gap_0x553C_sub_0x140[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x56A4 — duplicate of sub_0x40 (Ext-color ramp). */
u32 dNessModel_gap_0x553C_sub_0x168[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x56CC — duplicate of sub_0x18 (PaletteID ramp). */
u32 dNessModel_gap_0x553C_sub_0x190[10] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 script @ 0x56F4 — duplicate of sub_0x40 (Ext-color ramp). */
u32 dNessModel_gap_0x553C_sub_0x1B8[10] = {
	aobjEvent32SetExtValAfterBlock(0x001, 0),
	    0x8C42FFFF,
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0x393939FF,
	aobjEvent32SetExtValAfterBlock(0x001, 1),
	    0xCE4A84FF,
	aobjEvent32SetExtValAfter(0x001, 1),
	    0xFF7300FF,
	aobjEvent32Wait(98),
	aobjEvent32End(),
};

/* AObjEvent32 *[3] @ 0x571C — 3-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x1E0[3] = {
	(AObjEvent32 *)dNessModel_script_0x552C,
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x18,
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x40,
};

/* AObjEvent32 *[1] @ 0x5728 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x1EC[1] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x68,
};

/* gap sub-block @ 0x572C (was gap+0x1F0, 12 bytes) */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x1F0[3] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x90,
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0xC8,
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0xF0,
};

/* AObjEvent32 *[1] @ 0x5738 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x1FC[1] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x118,
};

/* AObjEvent32 *[1] @ 0x573C — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x200[1] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x140,
};

/* AObjEvent32 *[1] @ 0x5740 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x204[1] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x168,
};

/* AObjEvent32 *[1] @ 0x5744 — single-entry per-mobj script table. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x208[1] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x190,
};

/* AObjEvent32 *[2] @ 0x5748 — single-entry per-mobj script table + NULL term. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x20C[2] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x1B8,
	NULL,
};

/* gap sub-block @ 0x5750 (was gap+0x214, 256 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x214[16] = {
	#include <NessModel/gap_0x553C_sub_0x214.vtx.inc.c>
};

/* gap sub-block @ 0x5850 (was gap+0x314, 144 bytes) */
Gfx dNessModel_DL_0x5850[18] = {
	#include <NessModel/DL_0x5850.dl.inc.c>
};

/* gap sub-block @ 0x58E0 (was gap+0x3A4, 192 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x3A4[12] = {
	#include <NessModel/gap_0x553C_sub_0x3A4.vtx.inc.c>
};

/* Gfx DL: gap_0x553C_sub_0x464 @ 0x59A0 (15 cmds) */
Gfx dNessModel_gap_0x553C_sub_0x464[15] = {
	#include <NessModel/gap_0x553C_sub_0x464.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5A20 (was gap+0x4E4, 256 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x4E4[16] = {
	#include <NessModel/gap_0x553C_sub_0x4E4.vtx.inc.c>
};

/* gap sub-block @ 0x5B20 (was gap+0x5E4, 144 bytes) */
Gfx dNessModel_DL_0x5B20[18] = {
	#include <NessModel/DL_0x5B20.dl.inc.c>
};

/* gap sub-block @ 0x5BB0 (was gap+0x674, 192 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x674[12] = {
	#include <NessModel/gap_0x553C_sub_0x674.vtx.inc.c>
};

/* Gfx DL: gap_0x553C_sub_0x734 @ 0x5C70 (15 cmds) */
Gfx dNessModel_gap_0x553C_sub_0x734[15] = {
	#include <NessModel/gap_0x553C_sub_0x734.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5CF0 (was gap+0x7B4, 192 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x7B4[12] = {
	#include <NessModel/gap_0x553C_sub_0x7B4.vtx.inc.c>
};

/* gap sub-block @ 0x5DB0 (was gap+0x874, 144 bytes) */
Gfx dNessModel_DL_0x5DB0[18] = {
	#include <NessModel/DL_0x5DB0.dl.inc.c>
};

/* gap sub-block @ 0x5E40 (was gap+0x904, 128 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x904[8] = {
	#include <NessModel/gap_0x553C_sub_0x904.vtx.inc.c>
};

/* Gfx DL: gap_0x553C_sub_0x984 @ 0x5EC0 (15 cmds) */
Gfx dNessModel_gap_0x553C_sub_0x984[15] = {
	#include <NessModel/gap_0x553C_sub_0x984.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x5F40 (was gap+0xA04, 192 bytes) */
Vtx dNessModel_gap_0x553C_sub_0xA04[12] = {
	#include <NessModel/gap_0x553C_sub_0xA04.vtx.inc.c>
};

/* gap sub-block @ 0x6000 (was gap+0xAC4, 144 bytes) */
Gfx dNessModel_DL_0x6000[18] = {
	#include <NessModel/DL_0x6000.dl.inc.c>
};

/* gap sub-block @ 0x6090 (was gap+0xB54, 128 bytes) */
Vtx dNessModel_gap_0x553C_sub_0xB54[8] = {
	#include <NessModel/gap_0x553C_sub_0xB54.vtx.inc.c>
};

/* Gfx DL: gap_0x553C_sub_0xBD4 @ 0x6110 (15 cmds) */
Gfx dNessModel_gap_0x553C_sub_0xBD4[15] = {
	#include <NessModel/gap_0x553C_sub_0xBD4.dl.inc.c>
};

PAD(8);

/* Vtx: gap_0x553C_sub_0xC54 @ 0x6190 (13 vertices) */
Vtx dNessModel_gap_0x553C_sub_0xC54[13] = {
	#include <NessModel/gap_0x553C_sub_0xC54.vtx.inc.c>
};

/* gap sub-block @ 0x6260 (was gap+0xD24, 320 bytes) */
Vtx dNessModel_gap_0x553C_sub_0xD24[20] = {
	#include <NessModel/gap_0x553C_sub_0xD24.vtx.inc.c>
};

/* gap sub-block @ 0x63A0 (was gap+0xE64, 480 bytes) */
Vtx dNessModel_gap_0x553C_sub_0xE64[30] = {
	#include <NessModel/gap_0x553C_sub_0xE64.vtx.inc.c>
};

/* gap sub-block @ 0x6580 (was gap+0x1044, 480 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x1044[30] = {
	#include <NessModel/gap_0x553C_sub_0x1044.vtx.inc.c>
};

/* gap sub-block @ 0x6760 (was gap+0x1224, 576 bytes) */
Gfx dNessModel_DL_0x6760[72] = {
	#include <NessModel/DL_0x6760.dl.inc.c>
};

/* gap sub-block @ 0x69A0 (was gap+0x1464, 64 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x1464[4] = {
	#include <NessModel/gap_0x553C_sub_0x1464.vtx.inc.c>
};

/* gap sub-block @ 0x69E0 (was gap+0x14A4, 240 bytes) */
Gfx dNessModel_DL_0x69E0[30] = {
	#include <NessModel/DL_0x69E0.dl.inc.c>
};

/* gap sub-block @ 0x6AD0 (was gap+0x1594, 64 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x1594[4] = {
	#include <NessModel/gap_0x553C_sub_0x1594.vtx.inc.c>
};

/* gap sub-block @ 0x6B10 (was gap+0x15D4, 64 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x15D4[4] = {
	#include <NessModel/gap_0x553C_sub_0x15D4.vtx.inc.c>
};

/* gap sub-block @ 0x6B50 (was gap+0x1614, 288 bytes) */
Gfx dNessModel_DL_0x6B50[36] = {
	#include <NessModel/DL_0x6B50.dl.inc.c>
};

/* gap sub-block @ 0x6C70 (was gap+0x1734, 112 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x1734[7] = {
	#include <NessModel/gap_0x553C_sub_0x1734.vtx.inc.c>
};

/* gap sub-block @ 0x6CE0 (was gap+0x17A4, 176 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x17A4[11] = {
	#include <NessModel/gap_0x553C_sub_0x17A4.vtx.inc.c>
};

/* Gfx DL: gap_0x553C_sub_0x1854 @ 0x6D90 (41 cmds) */
Gfx dNessModel_gap_0x553C_sub_0x1854[41] = {
	#include <NessModel/gap_0x553C_sub_0x1854.dl.inc.c>
};

/* Raw tail after DL @ 0x6ED8 (16 bytes) — 4 NULL pointer slots */
void *dNessModel_gap_0x553C_sub_0x1854_post[4] = {
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x6EE8[1032] = {
	#include <NessModel/Tex_0x6EE8.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x72F0[1032] = {
	#include <NessModel/Tex_0x72F0.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x76F8[1024] = {
	#include <NessModel/Tex_0x76F8.tex.inc.c>
};

/* gap sub-block @ 0x7AF8 (was gap+0x25BC, 8 bytes) */
MObjSub **dNessModel_gap_0x553C_sub_0x25BC[2] = {
	NULL,
	dNessModel_gap_0x553C_sub_0x264C,
};

/* Sprite pointer array @ 0x7B00 — 3 IA8 textures + NULL terminator, used
 * as MObjSub.sprites for sub_0x25D4. */
u8 *dNessModel_gap_0x553C_sub_0x25C4[4] = {
	dNessModel_Tex_0x76F8,
	dNessModel_Tex_0x72F0,
	dNessModel_Tex_0x6EE8,
	NULL,
};

/* MObjSub @ 0x7B10 */
MObjSub dNessModel_gap_0x553C_sub_0x25D4[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dNessModel_gap_0x553C_sub_0x25C4,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xDE, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x3C, 0x00, 0x71, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x7B88 (was gap+0x264C, 8 bytes) */
MObjSub *dNessModel_gap_0x553C_sub_0x264C[2] = {
	(MObjSub *)dNessModel_gap_0x553C_sub_0x25D4,
	NULL,
};

/* gap sub-block @ 0x7B90 (was gap+0x2654, 64 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x2654[4] = {
	#include <NessModel/gap_0x553C_sub_0x2654.vtx.inc.c>
};

/* gap sub-block @ 0x7BD0 (was gap+0x2694, 184 bytes) */
Gfx dNessModel_DL_0x7BD0[23] = {
	#include <NessModel/DL_0x7BD0.dl.inc.c>
};

/* DObjDLLink @ 0x7C88 — single Gfx DL entry + cmd=4 sentinel. */
DObjDLLink dNessModel_DLLink_0x7C88[2] = {
	{ 1, dNessModel_DL_0x7BD0 },
	{ 4, NULL },
};

/* DObjDesc[3] @ 0x7C98 — 3-entry scene-object list: { id=0, no dl, sca 1.2 }
 * root + { id=1, dl=DLLink_0x7C88, sca 1.0 } visible joint + { 18, NULL, … }
 * terminator. Trailing 4 bytes of zero pad to align next decl. */
DObjDesc dNessModel_DObjDesc_0x7C98[3] = {
	{ 0,  NULL,                       { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.2000000476837158f, 1.2000000476837158f, 1.2000000476837158f } },
	{ 1,  (void *)dNessModel_DLLink_0x7C88, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL,                       { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
PAD(4);

/* gap sub-block @ 0x7D20 (was gap+0x27E4, 8 bytes) — single-entry AObjEvent32
 * pointer table + NULL terminator. */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x27E4[2] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x27EC,
	NULL,
};

/* gap sub-block @ 0x7D28 (was gap+0x27EC, 72 bytes) — AObjEvent32 script */
u32 dNessModel_gap_0x553C_sub_0x27EC[18] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x380, 2),
	    0x3F414F2A,  /* 0.7551141977310181f */
	    0x3F414F2A,  /* 0.7551141977310181f */
	    0x3F414F2A,  /* 0.7551141977310181f */
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dNessModel_gap_0x553C_sub_0x27EC,
};

/* gap sub-block @ 0x7D70 (was gap+0x2834, 8 bytes) */
AObjEvent32 **dNessModel_gap_0x553C_sub_0x2834[2] = {
	NULL,
	dNessModel_gap_0x553C_sub_0x2864,
};

/* gap sub-block @ 0x7D78 (was gap+0x283C, 40 bytes) — AObjEvent32 script */
u32 dNessModel_gap_0x553C_sub_0x283C[10] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dNessModel_gap_0x553C_sub_0x283C,
};

/* AObjEvent32 *[6] anim-joints table @ 0x7DA0 — only entry [0] is used
 * (drives the texture-id blink on the sub_0x349C MObjSub). */
AObjEvent32 *dNessModel_gap_0x553C_sub_0x2864[6] = {
	(AObjEvent32 *)dNessModel_gap_0x553C_sub_0x283C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x7DB8[1032] = {
	#include <NessModel/Tex_0x7DB8.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x81C0[1032] = {
	#include <NessModel/Tex_0x81C0.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x85C8[1024] = {
	#include <NessModel/Tex_0x85C8.tex.inc.c>
};

/* gap sub-block @ 0x89C8 (was gap+0x348C, 4 bytes) */
MObjSub **dNessModel_gap_0x553C_sub_0x348C[1] = {
	dNessModel_gap_0x553C_sub_0x3514,
};

/* Sprite pointer array @ 0x89CC — 3 IA8 textures, used as MObjSub.sprites
 * for sub_0x349C. */
u8 *dNessModel_gap_0x553C_sub_0x3490[3] = {
	dNessModel_Tex_0x85C8,
	dNessModel_Tex_0x81C0,
	dNessModel_Tex_0x7DB8,
};

/* MObjSub @ 0x89D8 */
MObjSub dNessModel_gap_0x553C_sub_0x349C[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dNessModel_gap_0x553C_sub_0x3490,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xB3, 0xF1, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0xA7, 0x75, 0xF8, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x8A50 (was gap+0x3514, 8 bytes) */
MObjSub *dNessModel_gap_0x553C_sub_0x3514[2] = {
	(MObjSub *)dNessModel_gap_0x553C_sub_0x349C,
	NULL,
};

/* gap sub-block @ 0x8A58 (was gap+0x351C, 64 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x351C[4] = {
	#include <NessModel/gap_0x553C_sub_0x351C.vtx.inc.c>
};

/* gap sub-block @ 0x8A98 (was gap+0x355C, 168 bytes) */
Gfx dNessModel_DL_0x8A98[21] = {
	#include <NessModel/DL_0x8A98.dl.inc.c>
};

/* DObjDLLink @ 0x8B40 — single Gfx DL entry + cmd=4 sentinel + 8 bytes of
 * trailing pad before Tex_0x8B58. */
DObjDLLink dNessModel_DLLink_0x8B40[2] = {
	{ 1, dNessModel_DL_0x8A98 },
	{ 4, NULL },
};
PAD(8);

/* gap sub-block @ 0x8B58 (was gap+0x361C, 1024 bytes) */
/* @tex fmt=IA8 dim=32x32 */
u8 dNessModel_Tex_0x8B58[1024] = {
	#include <NessModel/Tex_0x8B58.tex.inc.c>
};

/* gap sub-block @ 0x8F58 (was gap+0x3A1C, 64 bytes) */
Vtx dNessModel_gap_0x553C_sub_0x3A1C[4] = {
	#include <NessModel/gap_0x553C_sub_0x3A1C.vtx.inc.c>
};

/* gap sub-block @ 0x8F98 (was gap+0x3A5C, 184 bytes) */
Gfx dNessModel_DL_0x8F98[23] = {
	#include <NessModel/DL_0x8F98.dl.inc.c>
};

/* Raw data from file offset 0x9050 to 0x9870 (2080 bytes) */
/* gap sub-block @ 0x9050 (was gap+0x0, 24 bytes) */
/* DObjDLLink[2] + PAD(8) — DL_0x8F98 entry + sentinel */
DObjDLLink dNessModel_gap_0x9050[2] = {
	{ 1, dNessModel_DL_0x8F98 },
	{ 4, NULL },
};
PAD(8);

/* @tex */
u8 dNessModel_Tex_0x9068[1024] = {
	#include <NessModel/Tex_0x9068.tex.inc.c>
};
PAD(8);

/* gap sub-block @ 0x9470 (was gap+0x420, 1024 bytes) */
/* @tex */
u8 dNessModel_Tex_0x9470[1024] = {
	#include <NessModel/Tex_0x9470.tex.inc.c>
};

/* 6-entry sprite/MObj pointer table @ 0x9870 (24 bytes). MObjSub.sprites
 * (below) chain-points to &table[3], so entries [3..5] form the actual
 * sprite array [Tex_0x9470, Tex_0x9068, NULL]. Entry [2] holds a chain
 * back-ref to gap_0x98E8_sub_0x18 (the outer MObj* array); [0]/[1] are
 * unused/NULL. */
void *dNessModel_PKThunderWaveMObjSub_sprites_table[6] = {
	NULL,
	NULL,
	(void *)dNessModel_gap_0x98E8_sub_0x18,
	(void *)dNessModel_Tex_0x9470,
	(void *)dNessModel_Tex_0x9068,
	NULL,
};

/* MObjSub @ 0x9888 (= the real MObjSub, 120 bytes). The earlier typing
 * placed this at 0x9870 with a fake `MObjSub` shape; correct start is
 * +0x18 of the old combined block. Decodes cleanly as CI/16b texture
 * with sprites pointing to the table above. */
MObjSub dNessModel_PKThunderWaveMObjSub_MObjSub[1] = {
	{
		0x0000,                                     /* pad00 */
		G_IM_FMT_IA, G_IM_SIZ_16b,                  /* fmt, siz */
		(void **)&dNessModel_PKThunderWaveMObjSub_sprites_table[3],
		0x0020, 0x0000, 0x0040, 0x0020,             /* unk08, unk0A, unk0C, unk0E */
		0,                                          /* unk10 */
		0.0f, 0.0f,                                 /* trau, trav */
		1.0f, 1.0f,                                 /* scau, scav */
		0.0f, 1.0f,                                 /* unk24, unk28 */
		(void **)0x00000000,                        /* palettes */
		0x0001,                                     /* flags */
		G_IM_FMT_IA, G_IM_SIZ_8b,                   /* block_fmt, block_siz */
		0x0020,                                     /* block_dxt */
		0x0020, 0x0040, 0x0020,                     /* unk36, unk38, unk3A */
		0.0f, 0.0f,                                 /* scrollu, scrollv */
		0.0f, 0.0f,                                 /* unk44, unk48 */
		0x00002001,                                 /* unk4C */
		{ { 0x8F, 0xFF, 0xFF, 0xFF } },             /* primcolor */
		0x00, 0x00, { 0x00, 0x00 },                 /* prim_l, prim_m, prim_pad */
		{ { 0x44, 0x2B, 0xA6, 0xFF } },             /* envcolor */
		{ { 0x00, 0x00, 0x00, 0x08 } },             /* blendcolor */
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },             /* light1color */
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },             /* light2color */
		0, 0, 0, 0,                                 /* unk68, unk6C, unk70, unk74 */
	}
};

/* MObj *[2] @ 0x9900 — single-entry MObj* array + NULL terminator.
 * Entry [0] points to the MObjSub above (the chain target lives at
 * MObjSub+0x0 — the pad00/fmt/siz header). */
AObjEvent32 *dNessModel_gap_0x98E8_sub_0x18[2] = {
	(AObjEvent32 *)dNessModel_PKThunderWaveMObjSub_MObjSub,
	NULL,
};

/* gap sub-block @ 0x9908 (was gap+0x20, 64 bytes) */
Vtx dNessModel_gap_0x98E8_sub_0x20[4] = {
	#include <NessModel/gap_0x98E8_sub_0x20.vtx.inc.c>
};

/* gap sub-block @ 0x9948 (was gap+0x60, 184 bytes) */
Gfx dNessModel_DL_0x9948[23] = {
	#include <NessModel/DL_0x9948.dl.inc.c>
};

/* DObjDLLink @ 0x118 (2 entries) */
DObjDLLink dNessModel_DLLink_0x9A00[] = {
	{ 1, dNessModel_DL_0x9948 },
	{ 4, NULL },
};

/* DObjDesc: PKThunderWaveDObjDesc @ 0x9A10 (4 entries) */
DObjDesc dNessModel_PKThunderWaveDObjDesc[] = {
	{ 0, (void*)0x00000000, { -1.2421729564666748f, 109.17940521240234f, -6.0317840576171875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -127.5f, 180.0f, 87.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNessModel_DLLink_0x9A00, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x9AC0 to 0x9BB0 (240 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dNessModel_PKThunderWaveAnimJoint_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dNessModel_PKThunderWaveAnimJoint_AnimJoint_0x9ACC,
	NULL,
};

u32 dNessModel_PKThunderWaveAnimJoint_AnimJoint_0x9ACC[] = {
	aobjEvent32SetValAfterBlock(0x3F0, 0),
	    0xC2FF0000,  /* -127.5f */
	    0x43340000,  /* 180.0f */
	    0x42AE0000,  /* 87.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A4,  /* 1.4800000190734863f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A4,  /* 1.4800000190734863f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A4,  /* 1.4800000190734863f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A2,  /* 1.4799997806549072f */
	    0x3FBD70A4,  /* 1.4800000190734863f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	    0x3F58BAB6,  /* 0.8465989828109741f */
	aobjEvent32SetValAfterBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dNessModel_PKThunderWaveAnimJoint_AnimJoint_0x9ACC),
};

/* PKThunderWaveMatAnimJoint @ 0x9BB0 — material anim-joints table for the
 * 3-DObj PKThunderWave tree. Original layout was an opaque u32[955] data
 * block; now decomposed into:
 *   - one MAT anim script at the head (toggles texture/material attr)
 *   - inner AObjEvent32 *[1] table addressed by entry [2]
 *   - 13 Vtx pools + 11 Gfx DLs that render the wave geometry,
 *     interleaved (each DL ends with gsSPEndDisplayList and most have an
 *     8-byte zero pad before the next Vtx pool starts at a 16-byte boundary).
 * The C type is `AObjEvent32 *[3]` even though entry [2] actually points to
 * an inner `AObjEvent32 *[1]` array (so the dereferenced value is itself
 * a script ptr — matching the AObjEvent32 *** layout that
 * gcAddMatAnimJointAll walks). */
AObjEvent32 **dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint[3] = {
	NULL,
	NULL,
	dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_inner_0x9C5C,
};

/* The MAT anim script @ 0x9BBC. 19 SetValAfterBlock(0x001, …) entries
 * cycle the material track bit 0 between 0.0 and 1.0 with a 2-frame step,
 * then loop. Track bit 0 = nGCAnimTrackTextureIDCurrent — i.e. swaps
 * the active texture id (blinking effect for the PKThunder wave). */
u32 dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_0x9BBC[40] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_0x9BBC,
};

/* Inner per-mobj AObjEvent32 *[1] for joint [2] (single mobj). */
AObjEvent32 *dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_inner_0x9C5C[1] = {
	(AObjEvent32 *)dNessModel_PKThunderWaveMatAnimJoint_MatAnimJoint_0x9BBC,
};

/* 13 Vtx pools + 11 Gfx DLs rendering the PKThunderWave geometry.
 * Each DL terminates with gsSPEndDisplayList; some need an 8-byte
 * trailing pad before the next Vtx pool to keep 16-byte alignment.
 * Chain pointers within each DL (gsSPVertex / gsDPSetTextureImage /
 * gsDPLoadTLUTCmd address words) are rewritten by fixRelocChain per
 * the companion .reloc. */
Vtx dNessModel_Vtx_0x9C60[8] = {
	#include <NessModel/Vtx_0x9C60.vtx.inc.c>
};
Gfx dNessModel_DL_0x9CE0[13] = {
	#include <NessModel/DL_0x9CE0.dl.inc.c>
};
PAD(8);
Vtx dNessModel_Vtx_0x9D50[6] = {
	#include <NessModel/Vtx_0x9D50.vtx.inc.c>
};
Gfx dNessModel_DL_0x9DB0[28] = {
	#include <NessModel/DL_0x9DB0.dl.inc.c>
};
Vtx dNessModel_Vtx_0x9E90[11] = {
	#include <NessModel/Vtx_0x9E90.vtx.inc.c>
};
Vtx dNessModel_Vtx_0x9F40[24] = {
	#include <NessModel/Vtx_0x9F40.vtx.inc.c>
};
Vtx dNessModel_Vtx_0xA0C0[6] = {
	#include <NessModel/Vtx_0xA0C0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA120[55] = {
	#include <NessModel/DL_0xA120.dl.inc.c>
};
PAD(8);
Vtx dNessModel_Vtx_0xA2E0[10] = {
	#include <NessModel/Vtx_0xA2E0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA380[13] = {
	#include <NessModel/DL_0xA380.dl.inc.c>
};
PAD(8);
Vtx dNessModel_Vtx_0xA3F0[10] = {
	#include <NessModel/Vtx_0xA3F0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA490[13] = {
	#include <NessModel/DL_0xA490.dl.inc.c>
};
PAD(8);
Vtx dNessModel_Vtx_0xA500[7] = {
	#include <NessModel/Vtx_0xA500.vtx.inc.c>
};
Gfx dNessModel_DL_0xA570[14] = {
	#include <NessModel/DL_0xA570.dl.inc.c>
};
Vtx dNessModel_Vtx_0xA5E0[7] = {
	#include <NessModel/Vtx_0xA5E0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA650[14] = {
	#include <NessModel/DL_0xA650.dl.inc.c>
};
Vtx dNessModel_Vtx_0xA6C0[10] = {
	#include <NessModel/Vtx_0xA6C0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA760[13] = {
	#include <NessModel/DL_0xA760.dl.inc.c>
};
PAD(8);
Vtx dNessModel_Vtx_0xA7D0[10] = {
	#include <NessModel/Vtx_0xA7D0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA870[13] = {
	#include <NessModel/DL_0xA870.dl.inc.c>
};
PAD(8);
Vtx dNessModel_Vtx_0xA8E0[7] = {
	#include <NessModel/Vtx_0xA8E0.vtx.inc.c>
};
Gfx dNessModel_DL_0xA950[14] = {
	#include <NessModel/DL_0xA950.dl.inc.c>
};
Vtx dNessModel_Vtx_0xA9C0[7] = {
	#include <NessModel/Vtx_0xA9C0.vtx.inc.c>
};
Gfx dNessModel_DL_0xAA30[14] = {
	#include <NessModel/DL_0xAA30.dl.inc.c>
};
PAD(8);

u16 dNessModel_palette_0xAAA8[16] = {
	#include <NessModel/palette_0xAAA8.palette.inc.c>
};
PAD(8);

u16 dNessModel_palette_0xAAD0[16] = {
	#include <NessModel/palette_0xAAD0.palette.inc.c>
};
PAD(8);

u16 dNessModel_palette_0xAAF8[16] = {
	#include <NessModel/palette_0xAAF8.palette.inc.c>
};
PAD(8);

/* Texture: 0xAB20 (CI4 — trailing 0x28 bytes split as palette frames) */
u8 dNessModel_Tex_0xAB20[264] = {
	#include <NessModel/Tex_0xAB20.tex.inc.c>
};

u8 dNessModel_Tex_0xAC28[40] = {
	#include <NessModel/Tex_0xAC28.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x16 lut=dNessModel_Tex_0xAC28 */
u8 dNessModel_Tex_0xAC50[136] = {
	#include <NessModel/Tex_0xAC50.tex.inc.c>
};

u16 dNessModel_palette_0xACD8[16] = {
	#include <NessModel/palette_0xACD8.palette.inc.c>
};
PAD(8);

/* Texture data @ 0xAD00 (304 bytes) */
/* Texture: 0xAD00 (CI4 — trailing 0x28 bytes split as palette frames) */
/* @tex fmt=CI4 dim=16x32 */
u8 dNessModel_Tex_0xAD00[264] = {
	#include <NessModel/Tex_0xAD00.tex.inc.c>
};

u16 dNessModel_palette_0xAE08[16] = {
	#include <NessModel/palette_0xAE08.palette.inc.c>
};
PAD(8);

/* Texture data @ 0xAE30 (264 bytes) */
u8 dNessModel_Tex_0xAE30[256] = {
	#include <NessModel/Tex_0xAE30.tex.inc.c>
};

PAD(8);

/* Texture data @ 0xAF38 (2672 bytes) */
/* @tex fmt=CI4 dim=32x167 */
u8 dNessModel_Tex_0xAF38[72] = {
	#include <NessModel/Tex_0xAF38.tex.inc.c>
};

u8 dNessModel_Tex_0xAF80[520] = {
	#include <NessModel/Tex_0xAF80.tex.inc.c>
};

u8 dNessModel_Tex_0xB188[520] = {
	#include <NessModel/Tex_0xB188.tex.inc.c>
};

u8 dNessModel_Tex_0xB390[520] = {
	#include <NessModel/Tex_0xB390.tex.inc.c>
};

u8 dNessModel_Tex_0xB598[520] = {
	#include <NessModel/Tex_0xB598.tex.inc.c>
};

u8 dNessModel_Tex_0xB7A0[520] = {
	#include <NessModel/Tex_0xB7A0.tex.inc.c>
};





















/* Texture data @ 0xB9A8 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dNessModel_Lut_0xC060_palette */
u8 dNessModel_Tex_0xB9A8[72] = {
	#include <NessModel/Tex_0xB9A8.tex.inc.c>
};

/* Palette: Lut_0xB9F0 @ 0xB9F0 (16 colors RGBA5551) */
u16 dNessModel_Lut_0xB9F0_palette[16] = {
	#include <NessModel/Lut_0xB9F0.palette.inc.c>
};

PAD(8);

/* Texture data @ 0xBA18 (824 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dNessModel_Lut_0xB9F0_palette */
u8 dNessModel_Tex_0xBA18[264] = {
	#include <NessModel/Tex_0xBA18.tex.inc.c>
};

u8 dNessModel_Tex_0xBB20[40] = {
	#include <NessModel/Tex_0xBB20.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 lut=dNessModel_Tex_0xBB20 */
u8 dNessModel_Tex_0xBB48[520] = {
	#include <NessModel/Tex_0xBB48.tex.inc.c>
};

/* Texture data @ 0xBD50 (152 bytes) */
/* Texture: 0xBD50 (CI4 — trailing 0x50 bytes split as palette frames) */
/* @tex fmt=CI4 dim=16x8 lut=dNessModel_Lut_0xC060_palette */
u8 dNessModel_Tex_0xBD50[72] = {
	#include <NessModel/Tex_0xBD50.tex.inc.c>
};

u16 dNessModel_palette_0xBD98[16] = {
	#include <NessModel/palette_0xBD98.palette.inc.c>
};
PAD(8);

u16 dNessModel_palette_0xBDC0[16] = {
	#include <NessModel/palette_0xBDC0.palette.inc.c>
};
PAD(8);

/* Texture data @ 0xBDE8 (632 bytes) */
/* @tex fmt=CI4 dim=16x8 */
u8 dNessModel_Tex_0xBDE8[72] = {
	#include <NessModel/Tex_0xBDE8.tex.inc.c>
};

u8 dNessModel_Tex_0xBE30[40] = {
	#include <NessModel/Tex_0xBE30.tex.inc.c>
};

/* @tex fmt=CI4 dim=32x32 lut=dNessModel_Tex_0xBE30 */
u8 dNessModel_Tex_0xBE58[520] = {
	#include <NessModel/Tex_0xBE58.tex.inc.c>
};

/* Palette: Lut_0xC060 @ 0xC060 (16 colors RGBA5551) */
u16 dNessModel_Lut_0xC060_palette[16] = {
	#include <NessModel/Lut_0xC060.palette.inc.c>
};

PAD(8);

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dNessModel_Stock_tex[88] = {
	#include <NessModel/Stock.ci4.inc.c>
};

/* Palette: @ 0xC0E0 (16 colors RGBA5551) */
u16 dNessModel_palette_0xC0E0[16] = {
	#include <NessModel/palette_0xC0E0.palette.inc.c>
};

/* "Stock LUTs" — palette frames cycled by FTSprites.stock_luts (NessMain).
 * dNessMain_stock_luts[4] targets palette_0xC0E0, gap_0xC100_sub_0x{8,30,58}.
 * Each frame is 16 colors RGBA5551 (32 bytes); first 3 trail an 8-byte pad,
 * last has none. The standalone gap_0xC100[8] is the trailing pad of palette_0xC0E0. */
u16 dNessModel_gap_0xC100[4] = {
	#include <NessModel/gap_0xC100.palette.inc.c>
};

u16 dNessModel_gap_0xC100_sub_0x8[16] = {
	#include <NessModel/gap_0xC100_sub_0x8.palette.inc.c>
};
PAD(8);

u16 dNessModel_gap_0xC100_sub_0x30[16] = {
	#include <NessModel/gap_0xC100_sub_0x30.palette.inc.c>
};
PAD(8);

u16 dNessModel_gap_0xC100_sub_0x58[16] = {
	#include <NessModel/gap_0xC100_sub_0x58.palette.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dNessModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dNessModel_Stock_tex, 10, 0 },
};

Sprite dNessModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dNessModel_palette_0xC0E0,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dNessModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: FTEmblem */

Gfx dNessModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (25(32)x25 i4) */
u8 dNessModel_FTEmblem_tex[400] = {
	#include <NessModel/FTEmblem.i4.inc.c>
};

Bitmap dNessModel_FTEmblem_bitmaps[] = {
	{ 25, 32, 0, 0, dNessModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (25x25 i4) */
Sprite dNessModel_FTEmblem = {
	0, 0,
	25, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	4, 0,
	(Bitmap*)dNessModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
