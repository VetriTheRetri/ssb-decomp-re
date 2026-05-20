/* relocData file 106: StageCastleFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0008_palette[16] = {
	#include <StageCastleFile2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0030 (520 bytes) */
/* @tex fmt=CI4 dim=16x64 lut=dStageCastleFile2_Lut_0x0008_palette */
u8 dStageCastleFile2_Tex_0x0030[512] = {
	#include <StageCastleFile2/Tex_0x0030.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0238 @ 0x238 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0238_palette[16] = {
	#include <StageCastleFile2/Lut_0x0238.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0260 @ 0x260 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0260_palette[16] = {
	#include <StageCastleFile2/Lut_0x0260.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0288 @ 0x288 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0288_palette[16] = {
	#include <StageCastleFile2/Lut_0x0288.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x02B0 @ 0x2B0 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x02B0_palette[16] = {
	#include <StageCastleFile2/Lut_0x02B0.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x02D8 @ 0x2D8 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x02D8_palette[16] = {
	#include <StageCastleFile2/Lut_0x02D8.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0300 @ 0x300 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0300_palette[16] = {
	#include <StageCastleFile2/Lut_0x0300.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0328 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0328[64] = {
	#include <StageCastleFile2/Tex_0x0328.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0370 (24 bytes) */
/* @tex fmt=CI4 dim=16x2 lut=dStageCastleFile2_Lut_0x0238_palette */
u8 dStageCastleFile2_Tex_0x0370[16] = {
	#include <StageCastleFile2/Tex_0x0370.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0388 (136 bytes) */
/* @tex fmt=CI4 dim=32x8 lut=dStageCastleFile2_Lut_0x0238_palette */
u8 dStageCastleFile2_Tex_0x0388[128] = {
	#include <StageCastleFile2/Tex_0x0388.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0410 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageCastleFile2_Lut_0x0260_palette */
u8 dStageCastleFile2_Tex_0x0410[72] = {
	#include <StageCastleFile2/Tex_0x0410.tex.inc.c>
};

/* Palette: Lut_0x0458 @ 0x458 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0458_palette[16] = {
	#include <StageCastleFile2/Lut_0x0458.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0480 (200 bytes) */
/* @tex fmt=CI4 dim=16x24 lut=dStageCastleFile2_Lut_0x0458_palette */
u8 dStageCastleFile2_Tex_0x0480[200] = {
	#include <StageCastleFile2/Tex_0x0480.tex.inc.c>
};

/* Texture data @ 0x0548 (200 bytes) */
/* @tex fmt=CI4 dim=16x24 lut=dStageCastleFile2_Lut_0x0260_palette */
u8 dStageCastleFile2_Tex_0x0548[200] = {
	#include <StageCastleFile2/Tex_0x0548.tex.inc.c>
};

/* Palette: Lut_0x0610 @ 0x610 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0610_palette[16] = {
	#include <StageCastleFile2/Lut_0x0610.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0638 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageCastleFile2_Lut_0x0610_palette */
u8 dStageCastleFile2_Tex_0x0638[128] = {
	#include <StageCastleFile2/Tex_0x0638.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x06C0 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageCastleFile2_Lut_0x02D8_palette */
u8 dStageCastleFile2_Tex_0x06C0[128] = {
	#include <StageCastleFile2/Tex_0x06C0.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0748 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0748[72] = {
	#include <StageCastleFile2/Tex_0x0748.tex.inc.c>
};

/* Texture data @ 0x0790 (40 bytes) */
u8 dStageCastleFile2_Tex_0x0790[32] = {
	#include <StageCastleFile2/Tex_0x0790.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x07B8 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageCastleFile2_Lut_0x0300_palette */
u8 dStageCastleFile2_Tex_0x07B8[64] = {
	#include <StageCastleFile2/Tex_0x07B8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0800 (40 bytes) */
/* @tex fmt=CI4 dim=16x4 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0800[32] = {
	#include <StageCastleFile2/Tex_0x0800.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0828 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0828[72] = {
	#include <StageCastleFile2/Tex_0x0828.tex.inc.c>
};

/* Palette: Lut_0x0870 @ 0x870 (16 colors RGBA5551) */
u16 dStageCastleFile2_Lut_0x0870_palette[16] = {
	#include <StageCastleFile2/Lut_0x0870.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0898 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageCastleFile2_Lut_0x0870_palette */
u8 dStageCastleFile2_Tex_0x0898[128] = {
	#include <StageCastleFile2/Tex_0x0898.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0920 (392 bytes) */
/* @tex fmt=CI4 dim=32x24 lut=dStageCastleFile2_Lut_0x0288_palette */
u8 dStageCastleFile2_Tex_0x0920[392] = {
	#include <StageCastleFile2/Tex_0x0920.tex.inc.c>
};

/* Texture data @ 0x0AA8 (24 bytes) */
/* @tex fmt=CI4 dim=16x2 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0AA8[16] = {
	#include <StageCastleFile2/Tex_0x0AA8.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0AC0 (136 bytes) */
/* @tex fmt=CI4 dim=32x8 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0AC0[136] = {
	#include <StageCastleFile2/Tex_0x0AC0.tex.inc.c>
};

/* Texture data @ 0x0B48 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageCastleFile2_Lut_0x02B0_palette */
u8 dStageCastleFile2_Tex_0x0B48[64] = {
	#include <StageCastleFile2/Tex_0x0B48.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0B90 (512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageCastleFile2_Lut_0x0260_palette */
u8 dStageCastleFile2_Tex_0x0B90[512] = {
	#include <StageCastleFile2/Tex_0x0B90.tex.inc.c>
};

/* Vtx: Vtx_0x0D90 @ 0xD90 (3 vertices) */
Vtx dStageCastleFile2_Vtx_0x0D90_Vtx[3] = {
	#include <StageCastleFile2/Vtx_0x0D90.vtx.inc.c>
};

/* Vtx: Vtx_0x0DC0 @ 0xDC0 (4 vertices) */
Vtx dStageCastleFile2_Vtx_0x0DC0_Vtx[4] = {
	#include <StageCastleFile2/Vtx_0x0DC0.vtx.inc.c>
};

/* Vtx: Vtx_0x0E00 @ 0xE00 (3 vertices) */
Vtx dStageCastleFile2_Vtx_0x0E00_Vtx[3] = {
	#include <StageCastleFile2/Vtx_0x0E00.vtx.inc.c>
};

/* Vtx: Vtx_0x0E30 @ 0xE30 (8 vertices) */
Vtx dStageCastleFile2_Vtx_0x0E30_Vtx[8] = {
	#include <StageCastleFile2/Vtx_0x0E30.vtx.inc.c>
};

/* Vtx: Vtx_0x0EB0 @ 0xEB0 (9 vertices) */
Vtx dStageCastleFile2_Vtx_0x0EB0_Vtx[9] = {
	#include <StageCastleFile2/Vtx_0x0EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x0F40 @ 0xF40 (4 vertices) */
Vtx dStageCastleFile2_Vtx_0x0F40_Vtx[4] = {
	#include <StageCastleFile2/Vtx_0x0F40.vtx.inc.c>
};

/* Vtx: Vtx_0x0F80 @ 0xF80 (6 vertices) */
Vtx dStageCastleFile2_Vtx_0x0F80_Vtx[6] = {
	#include <StageCastleFile2/Vtx_0x0F80.vtx.inc.c>
};

/* Vtx: Vtx_0x0FE0 @ 0xFE0 (4 vertices) */
Vtx dStageCastleFile2_Vtx_0x0FE0_Vtx[4] = {
	#include <StageCastleFile2/Vtx_0x0FE0.vtx.inc.c>
};

/* Vtx: Vtx_0x1020 @ 0x1020 (19 vertices) */
Vtx dStageCastleFile2_Vtx_0x1020_Vtx[19] = {
	#include <StageCastleFile2/Vtx_0x1020.vtx.inc.c>
};

/* Vtx: Vtx_0x1150 @ 0x1150 (4 vertices) */
Vtx dStageCastleFile2_Vtx_0x1150_Vtx[4] = {
	#include <StageCastleFile2/Vtx_0x1150.vtx.inc.c>
};

/* Raw data from file offset 0x1190 to 0x1850 (1728 bytes) */
/* gap sub-block @ 0x1190 (was gap+0x0, 72 bytes) */
Gfx dStageCastleFile2_DL_0x1190[9] = {
	#include <StageCastleFile2/DL_0x1190.dl.inc.c>
};

/* gap sub-block @ 0x11D8 (was gap+0x48, 784 bytes) */
Gfx dStageCastleFile2_DL_0x11D8[98] = {
	#include <StageCastleFile2/DL_0x11D8.dl.inc.c>
};

/* gap sub-block @ 0x14E8 (was gap+0x358, 240 bytes) */
Gfx dStageCastleFile2_DL_0x14E8[30] = {
	#include <StageCastleFile2/DL_0x14E8.dl.inc.c>
};

/* gap sub-block @ 0x15D8 (was gap+0x448, 192 bytes) */
Gfx dStageCastleFile2_DL_0x15D8[24] = {
	#include <StageCastleFile2/DL_0x15D8.dl.inc.c>
};

/* gap sub-block @ 0x1698 (was gap+0x508, 200 bytes) */
Gfx dStageCastleFile2_DL_0x1698[25] = {
	#include <StageCastleFile2/DL_0x1698.dl.inc.c>
};

/* gap sub-block @ 0x1760 (was gap+0x5D0, 240 bytes) */
Gfx dStageCastleFile2_DL_0x1760[30] = {
	#include <StageCastleFile2/DL_0x1760.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x1850 (2 entries) */
DObjDesc dStageCastleFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x1190, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0x18A8 to 0x2A08 (4448 bytes) */
/* DObjDesc[5] @ 0x18A8 — scene-graph entries (entry 4 is the
 * { 18, NULL, ..., scale=0 } sentinel terminator). */
DObjDesc dStageCastleFile2_gap_0x18A8[5] = {
	{ 0x2001, (void*)dStageCastleFile2_DL_0x14E8, { 480.0f, 501.00003051757812f, -540.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x2001, (void*)dStageCastleFile2_DL_0x15D8, { -480.0f, 501.00003051757812f, -540.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x1698, { 0.0f, 1815.0f, -840.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x1760, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
PAD(12);

/* gap sub-block @ 0x1990 (was gap+0xE8, 176 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0xE8[11] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0xE8.vtx.inc.c>
};

/* gap sub-block @ 0x1A40 (was gap+0x198, 128 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x198[8] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x198.vtx.inc.c>
};

/* gap sub-block @ 0x1AC0 (was gap+0x218, 160 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x218[10] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x218.vtx.inc.c>
};

/* gap sub-block @ 0x1B60 (was gap+0x2B8, 256 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x2B8[16] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x2B8.vtx.inc.c>
};

/* gap sub-block @ 0x1C60 (was gap+0x3B8, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x3B8[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x3B8.vtx.inc.c>
};

/* gap sub-block @ 0x1CA0 (was gap+0x3F8, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x3F8[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x3F8.vtx.inc.c>
};

/* gap sub-block @ 0x1CE0 (was gap+0x438, 128 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x438[8] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x438.vtx.inc.c>
};

/* gap sub-block @ 0x1D60 (was gap+0x4B8, 128 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x4B8[8] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x4B8.vtx.inc.c>
};

/* gap sub-block @ 0x1DE0 (was gap+0x538, 128 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x538[8] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x538.vtx.inc.c>
};

/* gap sub-block @ 0x1E60 (was gap+0x5B8, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x5B8[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x5B8.vtx.inc.c>
};

/* gap sub-block @ 0x1EA0 (was gap+0x5F8, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x5F8[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x5F8.vtx.inc.c>
};

/* gap sub-block @ 0x1EE0 (was gap+0x638, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x638[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x638.vtx.inc.c>
};

/* gap sub-block @ 0x1F20 (was gap+0x678, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x678[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x678.vtx.inc.c>
};

/* gap sub-block @ 0x1F60 (was gap+0x6B8, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x6B8[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x6B8.vtx.inc.c>
};

/* gap sub-block @ 0x1FA0 (was gap+0x6F8, 128 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x6F8[8] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x6F8.vtx.inc.c>
};

/* gap sub-block @ 0x2020 (was gap+0x778, 128 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x778[8] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x778.vtx.inc.c>
};

/* gap sub-block @ 0x20A0 (was gap+0x7F8, 144 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x7F8[9] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x7F8.vtx.inc.c>
};

/* gap sub-block @ 0x2130 (was gap+0x888, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x888[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x888.vtx.inc.c>
};

/* gap sub-block @ 0x2170 (was gap+0x8C8, 144 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x8C8[9] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x8C8.vtx.inc.c>
};

/* gap sub-block @ 0x2200 (was gap+0x958, 64 bytes) */
Vtx dStageCastleFile2_gap_0x18A8_sub_0x958[4] = {
	#include <StageCastleFile2/gap_0x18A8_sub_0x958.vtx.inc.c>
};

/* gap sub-block @ 0x2240 (was gap+0x998, 72 bytes) */
Gfx dStageCastleFile2_DL_0x2240[9] = {
	#include <StageCastleFile2/DL_0x2240.dl.inc.c>
};

/* gap sub-block @ 0x2288 (was gap+0x9E0, 1232 bytes) */
Gfx dStageCastleFile2_DL_0x2288[154] = {
	#include <StageCastleFile2/DL_0x2288.dl.inc.c>
};

/* gap sub-block @ 0x2758 (was gap+0xEB0, 176 bytes) */
Gfx dStageCastleFile2_DL_0x2758[22] = {
	#include <StageCastleFile2/DL_0x2758.dl.inc.c>
};

/* gap sub-block @ 0x2808 (was gap+0xF60, 240 bytes) */
Gfx dStageCastleFile2_DL_0x2808[30] = {
	#include <StageCastleFile2/DL_0x2808.dl.inc.c>
};

/* gap sub-block @ 0x28F8 (was gap+0x1050, 272 bytes) */
Gfx dStageCastleFile2_DL_0x28F8[34] = {
	#include <StageCastleFile2/DL_0x28F8.dl.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x2A08 (6 entries) */
DObjDesc dStageCastleFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x2240, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x2758, { 842.3998413085938f, -225.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x2808, { 3869.294921875f, 3411.622314453125f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_DL_0x28F8, { -3869.294921875f, 3411.71240234375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2B10 to 0x2D58 (584 bytes) */
/* MPVertexData[25] @ 0x2B10 — MP collision vertex positions
 * (MPGeometryData.vertex_data). IDO 4-byte-aligns the following
 * MPVertexArray, supplying the 2 zero pad bytes at 0x2BA6. */
MPVertexData dStageCastleFile2_gap_0x2B10[25] = {
	{ {  -855,  -917 }, 0x0000 },
	{ {   855,  -915 }, 0x0000 },
	{ {   703,  -120 }, 0x0000 },
	{ {  1170,  -120 }, 0x0000 },
	{ {  1170,   375 }, 0x0000 },
	{ {   620,   510 }, 0x0000 },
	{ {  -620,   510 }, 0x0000 },
	{ { -1170,   375 }, 0x0000 },
	{ { -1170,  -120 }, 0x0000 },
	{ {  -703,  -120 }, 0x0000 },
	{ {  2220,  1230 }, 0x4000 },
	{ {  1810,  1225 }, 0x4000 },
	{ {  1342,  1422 }, 0x4000 },
	{ {  1138,  1446 }, 0x4000 },
	{ {   594,  1398 }, 0x4000 },
	{ { -1333,  1401 }, 0x4000 },
	{ { -1980,  1571 }, 0x0000 },
	{ {  2339,   124 }, 0x0000 },
	{ { -2339,   124 }, 0x0000 },
	{ {   210,  -360 }, 0x0000 },
	{ {  -420,  -390 }, 0x0000 },
	{ {   300,   450 }, 0x0000 },
	{ {  -210,  -360 }, 0x0000 },
	{ {   420,  -390 }, 0x0000 },
	{ {  -300,   450 }, 0x0000 },
};

/* MPVertexArray (40 IDs) @ 0x2BA8 — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageCastleFile2_gap_0x2B10_sub_0x98[40] = {
	 10,  11,  12,  13,  14,  15,  16,   4,   5,   6,   7,   0,   1,   2,   3,   8,
	  9,   3,   4,   1,   2,   7,   8,   9,   0,  17,  18,  19,  20,  21,  19,  20,
	 21,  22,  23,  23,  24,  24,  22,   0,
};

/* MPVertexLinks[16] @ 0x2BF8 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageCastleFile2_gap_0x2B10_sub_0xE8[16] = {
	{   0, 7 }, {   7, 4 }, {  11, 2 }, {  13, 2 }, {  15, 2 }, {  17, 2 },
	{  19, 2 }, {  21, 2 }, {  23, 2 }, {  25, 2 }, {  27, 2 }, {  29, 2 },
	{  31, 2 }, {  33, 2 }, {  35, 2 }, {  37, 2 },
};

/* MPLineInfo[4] @ 0x2C38 — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageCastleFile2_gap_0x2B10_sub_0x128[4] = {
	{ 1, { {  0,   2}, {  2,   3}, {  5,   2}, {  7,   2} } },
	{ 2, { {  9,   1}, { 10,   0}, { 10,   0}, { 10,   0} } },
	{ 3, { { 10,   0}, { 10,   1}, { 11,   1}, { 12,   1} } },
	{ 4, { { 13,   0}, { 13,   1}, { 14,   1}, { 15,   1} } },
};

/* MPMapObjData[36] @ 0x2C80 — map objects (MPGeometryData.mapobjs) */
MPMapObjData dStageCastleFile2_gap_0x2B10_sub_0x170[36] = {
	{  37, {   596,   657 } },
	{  38, {   851,  1581 } },
	{  33, {  -648,   633 } },
	{  34, {  -693,  1557 } },
	{  45, {  1256,  1599 } },
	{  44, { -1248,  1554 } },
	{  24, { -1428,  1617 } },
	{  25, {  -843,  1515 } },
	{  26, {  -213,  1578 } },
	{  27, {   761,  1566 } },
	{  28, {   506,   639 } },
	{  29, {  1376,  1578 } },
	{  30, {  -438,   654 } },
	{  31, {    11,   648 } },
	{   4, {  -963,  1089 } },
	{   4, {  -498,  1127 } },
	{   4, {    26,  9108 } },
	{   4, { -1023,  8469 } },
	{   4, {  -363,  8469 } },
	{   4, {   416,  8469 } },
	{   4, {    26,  1142 } },
	{   4, { -2973,  4698 } },
	{   4, { -1428,  9102 } },
	{   4, {  1586,  9066 } },
	{   4, {   446,  1134 } },
	{   4, {   735,  9117 } },
	{   4, {   896,  1106 } },
	{   4, {  2831,  4610 } },
	{   4, {  -678,  9105 } },
	{  19, {     0,  3525 } },
	{  21, {    -3,   648 } },
	{   0, {  -210,  1574 } },
	{   1, {   765,  1563 } },
	{   2, {   300,  1515 } },
	{   3, {  -840,  1526 } },
	{  32, {     0,  2940 } },
};

/* MPGeometryData @ 0x2D58 (28 bytes + 12 bytes pad) */
MPGeometryData dStageCastleFile2_MPGeometryData_0x2D58 = {
	4,
	(MPVertexPosContainer*)dStageCastleFile2_gap_0x2B10,
	(MPVertexArray*)dStageCastleFile2_gap_0x2B10_sub_0x98,
	dStageCastleFile2_gap_0x2B10_sub_0xE8,
	dStageCastleFile2_gap_0x2B10_sub_0x128,
	36,
	(MPMapObjContainer*)dStageCastleFile2_gap_0x2B10_sub_0x170,
};
PAD(12);

/* Raw data from file offset 0x2D80 to 0x3218 (1176 bytes) */
/* Split AnimJoint blob: forward decls for sub-scripts. */
extern u32 dStageCastleFile2_Layer1Anim_AnimJoint_0x14[20];
extern u32 dStageCastleFile2_Layer1Anim_AnimJoint_0x64[14];
extern u32 dStageCastleFile2_Layer1Anim_AnimJoint_0x9C[14];
extern Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0xE0[12];
extern Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x1A0[5];
extern Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x1F0[4];
extern Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x230[3];
extern Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x260[3];
extern Gfx dStageCastleFile2_Layer1Anim_AnimJoint_0x290[9];
extern Gfx dStageCastleFile2_Layer1Anim_AnimJoint_0x2D8[30];
extern Gfx dStageCastleFile2_Layer1Anim_AnimJoint_0x3C8[26];

AObjEvent32 *dStageCastleFile2_Layer1Anim_AnimJoint[5] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageCastleFile2_Layer1Anim_AnimJoint_0x14,
	(AObjEvent32 *)dStageCastleFile2_Layer1Anim_AnimJoint_0x64,
	(AObjEvent32 *)dStageCastleFile2_Layer1Anim_AnimJoint_0x9C,
};

u32 dStageCastleFile2_Layer1Anim_AnimJoint_0x14[20] = {
	aobjEvent32SetValBlock(0x010, 0),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetValBlock(0x010, 999),
	    0xC4E10000,  /* -1800.0f */
	aobjEvent32SetValBlock(0x010, 200),
	    0xC4E10000,  /* -1800.0f */
	aobjEvent32SetValBlock(0x010, 1000),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetValBlock(0x010, 200),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetValBlock(0x010, 1000),
	    0xC4E10000,  /* -1800.0f */
	aobjEvent32SetValBlock(0x010, 200),
	    0xC4E10000,  /* -1800.0f */
	aobjEvent32SetValBlock(0x010, 1000),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetValBlock(0x010, 200),
	    0x44E10000,  /* 1800.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageCastleFile2_Layer1Anim_AnimJoint_0x14),
};

u32 dStageCastleFile2_Layer1Anim_AnimJoint_0x64[14] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x453B8000,  /* 3000.0f */
	    0x45142000,  /* 2370.0f */
	aobjEvent32SetValBlock(0x030, 1),
	    0x453B8000,  /* 3000.0f */
	    0x45142000,  /* 2370.0f */
	aobjEvent32SetVal0RateBlock(0x030, 2398),
	    0x4573C031,  /* 3900.011962890625f */
	    0x455786D9,  /* 3448.427978515625f */
	aobjEvent32SetVal0RateBlock(0x030, 2400),
	    0x453B8000,  /* 3000.0f */
	    0x45142000,  /* 2370.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageCastleFile2_Layer1Anim_AnimJoint_0x64),
};

u32 dStageCastleFile2_Layer1Anim_AnimJoint_0x9C[14] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC53B8000,  /* -3000.0f */
	    0x45142000,  /* 2370.0f */
	aobjEvent32SetValBlock(0x030, 1),
	    0xC53B8000,  /* -3000.0f */
	    0x45142000,  /* 2370.0f */
	aobjEvent32SetVal0RateBlock(0x030, 2398),
	    0xC573C031,  /* -3900.011962890625f */
	    0x45578858,  /* 3448.521484375f */
	aobjEvent32SetVal0RateBlock(0x030, 2400),
	    0xC53B8000,  /* -3000.0f */
	    0x45142000,  /* 2370.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageCastleFile2_Layer1Anim_AnimJoint_0x9C,
};
PAD(12);

Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0xE0[12] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0xE0.vtx.inc.c>
};

Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x1A0[5] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x1A0.vtx.inc.c>
};

Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x1F0[4] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x1F0.vtx.inc.c>
};

Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x230[3] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x230.vtx.inc.c>
};

Vtx dStageCastleFile2_Layer1Anim_AnimJoint_0x260[3] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x260.vtx.inc.c>
};

Gfx dStageCastleFile2_Layer1Anim_AnimJoint_0x290[9] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x290.dl.inc.c>
};

Gfx dStageCastleFile2_Layer1Anim_AnimJoint_0x2D8[30] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x2D8.dl.inc.c>
};

Gfx dStageCastleFile2_Layer1Anim_AnimJoint_0x3C8[26] = {
	#include <StageCastleFile2/Layer1Anim_AnimJoint_0x3C8.dl.inc.c>
};

/* DObjDesc: Layer2DObj @ 0x3218 (4 entries) */
DObjDesc dStageCastleFile2_Layer2DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_Layer1Anim_AnimJoint_0x290, { 0.0f, -300.0f, 780.0f }, { 0.0f, 0.0f, 1.6713279485702515f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_Layer1Anim_AnimJoint_0x3C8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x32D0 to 0x3600 (816 bytes) */
/* Split AnimJoint blob: forward decls for sub-scripts. */
extern u32 dStageCastleFile2_Layer2Anim_AnimJoint_0xC[20];
extern Vtx dStageCastleFile2_Layer2Anim_AnimJoint_0x60[8];
extern Vtx dStageCastleFile2_Layer2Anim_AnimJoint_0xE0[12];
extern Gfx dStageCastleFile2_Layer2Anim_AnimJoint_0x1A0[50];

AObjEvent32 *dStageCastleFile2_Layer2Anim_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dStageCastleFile2_Layer2Anim_AnimJoint_0xC,
	NULL,
};

u32 dStageCastleFile2_Layer2Anim_AnimJoint_0xC[20] = {
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 999),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValBlock(0x004, 200),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValBlock(0x004, 1000),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 200),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 1000),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValBlock(0x004, 200),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValBlock(0x004, 1000),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x004, 200),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageCastleFile2_Layer2Anim_AnimJoint_0xC,
};
PAD(4);

Vtx dStageCastleFile2_Layer2Anim_AnimJoint_0x60[8] = {
	#include <StageCastleFile2/Layer2Anim_AnimJoint_0x60.vtx.inc.c>
};

Vtx dStageCastleFile2_Layer2Anim_AnimJoint_0xE0[12] = {
	#include <StageCastleFile2/Layer2Anim_AnimJoint_0xE0.vtx.inc.c>
};

Gfx dStageCastleFile2_Layer2Anim_AnimJoint_0x1A0[50] = {
	#include <StageCastleFile2/Layer2Anim_AnimJoint_0x1A0.dl.inc.c>
};

/* DObjDesc: Layer3DObj @ 0x3600 (3 entries) */
DObjDesc dStageCastleFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageCastleFile2_Layer2Anim_AnimJoint_0x1A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x3684 to 0x4520 (3740 bytes) */
PAD(20);

/* gap sub-block @ 0x3698 (was gap+0x14, 40 bytes) */
u16 dStageCastleFile2_gap_0x3684_sub_0x14[16] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x14.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x36C0 (was gap+0x3C, 40 bytes) */
u16 dStageCastleFile2_gap_0x3684_sub_0x3C[16] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x3C.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x36E8 (was gap+0x64, 40 bytes) */
u16 dStageCastleFile2_gap_0x3684_sub_0x64[16] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x64.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x3710 (was gap+0x8C, 1160 bytes) */
/* @tex fmt=CI4 dim=32x72 lut=dStageCastleFile2_gap_0x3684_sub_0x14 */
u8 dStageCastleFile2_Tex_0x3710[1160] = {
	#include <StageCastleFile2/Tex_0x3710.tex.inc.c>
};

/* gap sub-block @ 0x3B98 (was gap+0x514, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageCastleFile2_gap_0x3684_sub_0x3C */
u8 dStageCastleFile2_Tex_0x3B98[520] = {
	#include <StageCastleFile2/Tex_0x3B98.tex.inc.c>
};

/* gap sub-block @ 0x3DA0 (was gap+0x71C, 192 bytes) */
/* @tex fmt=CI4 dim=16x24 lut=dStageCastleFile2_gap_0x3684_sub_0x64 */
u8 dStageCastleFile2_Tex_0x3DA0[192] = {
	#include <StageCastleFile2/Tex_0x3DA0.tex.inc.c>
};

/* gap sub-block @ 0x3E60 (was gap+0x7DC, 64 bytes) */
Vtx dStageCastleFile2_gap_0x3684_sub_0x7DC[4] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x7DC.vtx.inc.c>
};

/* gap sub-block @ 0x3EA0 (was gap+0x81C, 64 bytes) */
Vtx dStageCastleFile2_gap_0x3684_sub_0x81C[4] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x81C.vtx.inc.c>
};

/* gap sub-block @ 0x3EE0 (was gap+0x85C, 64 bytes) */
Vtx dStageCastleFile2_gap_0x3684_sub_0x85C[4] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x85C.vtx.inc.c>
};

/* gap sub-block @ 0x3F20 (was gap+0x89C, 96 bytes) */
Gfx dStageCastleFile2_DL_0x3F20[12] = {
	#include <StageCastleFile2/DL_0x3F20.dl.inc.c>
};

/* gap sub-block @ 0x3F80 (was gap+0x8FC, 120 bytes) */
Gfx dStageCastleFile2_DL_0x3F80[15] = {
	#include <StageCastleFile2/DL_0x3F80.dl.inc.c>
};

/* gap sub-block @ 0x3FF8 (was gap+0x974, 120 bytes) */
Gfx dStageCastleFile2_DL_0x3FF8[15] = {
	#include <StageCastleFile2/DL_0x3FF8.dl.inc.c>
};

/* Gfx DL: gap_0x3684_sub_0x9EC @ 0x4070 (21 cmds) */
Gfx dStageCastleFile2_gap_0x3684_sub_0x9EC[21] = {
	#include <StageCastleFile2/gap_0x3684_sub_0x9EC.dl.inc.c>
};

/* Forward decls for the DObjDesc dl pointers and the joint table's
 * AObjEvent32 * targets — those decls appear later in the file. */
extern Gfx dStageCastleFile2_DL_0x3F20[];
extern Gfx dStageCastleFile2_DL_0x3FF8[];
extern u32 dStageCastleFile2_gap_0x3684_sub_0xBB0[24];
extern u32 dStageCastleFile2_gap_0x3684_sub_0xC14[54];
extern u32 dStageCastleFile2_gap_0x3684_sub_0xD00[16];
extern u32 dStageCastleFile2_gap_0x3684_sub_0xD40[];

/* DObjDesc[6] @ 0x4118 — scene-graph entries (entry 5 is the
 * { 18, NULL, ..., scale=0 } sentinel terminator). */
DObjDesc dStageCastleFile2_gap_0x3684_sub_0x9EC_post[6] = {
	{ 0, (void*)0x00000000, { -3000.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 30.0f, 0.0f, -30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4002, (void*)dStageCastleFile2_DL_0x3F20, { -30.0f, 0.0f, 30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageCastleFile2_DL_0x3FF8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageCastleFile2_gap_0x3684_sub_0x9EC, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* AObjEvent32 *[5] joint pointer table @ 0x4220 — animation scripts
 * for each DObj slot. Slots 0,1 → scripts at sub_0xBB0 / sub_0xC14;
 * remaining slots NULL. */
AObjEvent32 *dStageCastleFile2_gap_0x3684_sub_0x9EC_post_joint[5] = {
	(AObjEvent32 *)dStageCastleFile2_gap_0x3684_sub_0xBB0,
	(AObjEvent32 *)dStageCastleFile2_gap_0x3684_sub_0xC14,
	NULL,
	NULL,
	NULL,
};

/* gap sub-block @ 0x4234 (was gap+0xBB0, 100 bytes) */
u32 dStageCastleFile2_gap_0x3684_sub_0xBB0[24] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 256),
	    0xC53B8000,  /* -3000.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0xC2F00000,  /* -120.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0xC2F00000,  /* -120.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0xC2F00000,  /* -120.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0xC2F00000,  /* -120.0f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	aobjEvent32End(),
};
PAD(4);

/* gap sub-block @ 0x4298 (was gap+0xC14, 236 bytes) — AObjEvent32
 * script followed by a 2-entry AObjEvent32 * pointer array. */
u32 dStageCastleFile2_gap_0x3684_sub_0xC14[54] = {
	aobjEvent32SetVal0Rate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* AObjEvent32 *[2] pointer table @ 0x4370 (= sub_0xC14+0xD8) — chain
 * pointers to the two AObjEvent32 scripts at sub_0xD00 / sub_0xD40. */
AObjEvent32 *dStageCastleFile2_gap_0x3684_sub_0xC14_joint[2] = {
	(AObjEvent32 *)dStageCastleFile2_gap_0x3684_sub_0xD00,
	(AObjEvent32 *)dStageCastleFile2_gap_0x3684_sub_0xD40,
};
PAD(12);

/* gap sub-block @ 0x4384 (was gap+0xD00, 64 bytes) */
u32 dStageCastleFile2_gap_0x3684_sub_0xD00[16] = {
	aobjEvent32SetValRate(0x020, 0),
	    0xC4BB8000,  /* -1500.0f */
	    0x4186BD3A,  /* 16.842395782470703f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 768),
	    0xC68CA000,  /* -18000.0f */
	aobjEvent32SetValRateBlock(0x020, 384),
	    0x44E10000,  /* 1800.0f */
	    0x3D32031D,  /* 0.043460000306367874f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x3D322D0E,  /* 0.04349999874830246f */
	aobjEvent32SetValRateBlock(0x020, 384),
	    0xC4960000,  /* -1200.0f */
	    0xC115BA97,  /* -9.358054161071777f */
	aobjEvent32End(),
};

/* gap sub-block @ 0x43C4 (was gap+0xD40, 348 bytes) */
u32 dStageCastleFile2_gap_0x3684_sub_0xD40[84] = {
	aobjEvent32SetVal0Rate(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 368),
	    0x3F8CCCCD,  /* 1.100000023841858f */
	    0x3F8CCCCD,  /* 1.100000023841858f */
	aobjEvent32SetVal0RateBlock(0x180, 16),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};
PAD(12);
