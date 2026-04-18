/* relocData file 112: StageYamabukiFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dStageYamabukiFile2[64016] = {
	#include <StageYamabukiFile2/jp_raw.data.inc.c>
};

#else  /* REGION_US */

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0008_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0030 (1032 bytes) */
u8 dStageYamabukiFile2_Tex_0x0030[1032] = {
	#include <StageYamabukiFile2/Tex_0x0030.tex.inc.c>
};

/* Palette: Lut_0x0438 @ 0x438 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0438_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0438.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0460 (2104 bytes) */
u8 dStageYamabukiFile2_Tex_0x0460[2104] = {
	#include <StageYamabukiFile2/Tex_0x0460.tex.inc.c>
};

/* Palette: Lut_0x0C98 @ 0xC98 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0C98_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0C98.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0CC0 (72 bytes) */
u8 dStageYamabukiFile2_Tex_0x0CC0[72] = {
	#include <StageYamabukiFile2/Tex_0x0CC0.tex.inc.c>
};

/* Palette: Lut_0x0D08 @ 0xD08 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0D08_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0D08.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0D30 (72 bytes) */
u8 dStageYamabukiFile2_Tex_0x0D30[72] = {
	#include <StageYamabukiFile2/Tex_0x0D30.tex.inc.c>
};

/* Palette: Lut_0x0D78 @ 0xD78 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0D78_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0D78.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0DA0 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x0DA0[136] = {
	#include <StageYamabukiFile2/Tex_0x0DA0.tex.inc.c>
};

/* Palette: Lut_0x0E28 @ 0xE28 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0E28_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0E28.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0E50 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x0E50[136] = {
	#include <StageYamabukiFile2/Tex_0x0E50.tex.inc.c>
};

/* Palette: Lut_0x0ED8 @ 0xED8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0ED8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0ED8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0F00 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x0F00[136] = {
	#include <StageYamabukiFile2/Tex_0x0F00.tex.inc.c>
};

/* Palette: Lut_0x0F88 @ 0xF88 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0F88_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0F88.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0FB0 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x0FB0[136] = {
	#include <StageYamabukiFile2/Tex_0x0FB0.tex.inc.c>
};

/* Palette: Lut_0x1038 @ 0x1038 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1038_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1038.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1060 (264 bytes) */
u8 dStageYamabukiFile2_Tex_0x1060[264] = {
	#include <StageYamabukiFile2/Tex_0x1060.tex.inc.c>
};

/* Palette: Lut_0x1168 @ 0x1168 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1168_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1168.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1190 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x1190[136] = {
	#include <StageYamabukiFile2/Tex_0x1190.tex.inc.c>
};

/* Palette: Lut_0x1218 @ 0x1218 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1218_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1218.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1240 (264 bytes) */
u8 dStageYamabukiFile2_Tex_0x1240[264] = {
	#include <StageYamabukiFile2/Tex_0x1240.tex.inc.c>
};

/* Palette: Lut_0x1348 @ 0x1348 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1348_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1348.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1370 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x1370[136] = {
	#include <StageYamabukiFile2/Tex_0x1370.tex.inc.c>
};

/* Palette: Lut_0x13F8 @ 0x13F8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x13F8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x13F8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1420 (1032 bytes) */
u8 dStageYamabukiFile2_Tex_0x1420[1032] = {
	#include <StageYamabukiFile2/Tex_0x1420.tex.inc.c>
};

/* Palette: Lut_0x1828 @ 0x1828 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1828_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1828.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1850 (72 bytes) */
u8 dStageYamabukiFile2_Tex_0x1850[72] = {
	#include <StageYamabukiFile2/Tex_0x1850.tex.inc.c>
};

/* Palette: Lut_0x1898 @ 0x1898 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1898_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1898.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x18C0 (520 bytes) */
u8 dStageYamabukiFile2_Tex_0x18C0[520] = {
	#include <StageYamabukiFile2/Tex_0x18C0.tex.inc.c>
};

/* Palette: Lut_0x1AC8 @ 0x1AC8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1AC8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1AC8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1AF0 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x1AF0[136] = {
	#include <StageYamabukiFile2/Tex_0x1AF0.tex.inc.c>
};

/* Palette: Lut_0x1B78 @ 0x1B78 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1B78_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1B78.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1BA0 (1592 bytes) */
u8 dStageYamabukiFile2_Tex_0x1BA0[1592] = {
	#include <StageYamabukiFile2/Tex_0x1BA0.tex.inc.c>
};

/* Palette: Lut_0x21D8 @ 0x21D8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x21D8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x21D8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x2200 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x2200[136] = {
	#include <StageYamabukiFile2/Tex_0x2200.tex.inc.c>
};

/* Palette: Lut_0x2288 @ 0x2288 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2288_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2288.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x22B0 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x22B0[136] = {
	#include <StageYamabukiFile2/Tex_0x22B0.tex.inc.c>
};

/* Palette: Lut_0x2338 @ 0x2338 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2338_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2338.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x2360 (520 bytes) */
u8 dStageYamabukiFile2_Tex_0x2360[520] = {
	#include <StageYamabukiFile2/Tex_0x2360.tex.inc.c>
};

/* Palette: Lut_0x2568 @ 0x2568 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2568_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2568.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x2590 (520 bytes) */
u8 dStageYamabukiFile2_Tex_0x2590[520] = {
	#include <StageYamabukiFile2/Tex_0x2590.tex.inc.c>
};

/* Palette: Lut_0x2798 @ 0x2798 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2798_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2798.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x27C0 (264 bytes) */
u8 dStageYamabukiFile2_Tex_0x27C0[264] = {
	#include <StageYamabukiFile2/Tex_0x27C0.tex.inc.c>
};

/* Palette: Lut_0x28C8 @ 0x28C8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x28C8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x28C8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x28F0 (3360 bytes) */
u8 dStageYamabukiFile2_Tex_0x28F0[3360] = {
	#include <StageYamabukiFile2/Tex_0x28F0.tex.inc.c>
};

/* Palette: Lut_0x3610 @ 0x3610 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x3610_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x3610.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3638 (520 bytes) */
u8 dStageYamabukiFile2_Tex_0x3638[520] = {
	#include <StageYamabukiFile2/Tex_0x3638.tex.inc.c>
};

/* Palette: Lut_0x3840 @ 0x3840 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x3840_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x3840.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3868 (136 bytes) */
u8 dStageYamabukiFile2_Tex_0x3868[136] = {
	#include <StageYamabukiFile2/Tex_0x3868.tex.inc.c>
};

/* Palette: Lut_0x38F0 @ 0x38F0 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x38F0_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x38F0.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3918 (520 bytes) */
u8 dStageYamabukiFile2_Tex_0x3918[520] = {
	#include <StageYamabukiFile2/Tex_0x3918.tex.inc.c>
};

/* Palette: Lut_0x3B20 @ 0x3B20 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x3B20_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x3B20.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3B48 (128 bytes) */
u8 dStageYamabukiFile2_Tex_0x3B48[128] = {
	#include <StageYamabukiFile2/Tex_0x3B48.tex.inc.c>
};

/* Vtx: Vtx_0x3BC8 @ 0x3BC8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3BC8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3BC8.vtx.inc.c>
};

/* Vtx: Vtx_0x3C08 @ 0x3C08 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3C08_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3C08.vtx.inc.c>
};

/* Vtx: Vtx_0x3C48 @ 0x3C48 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3C48_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3C48.vtx.inc.c>
};

/* Vtx: Vtx_0x3C88 @ 0x3C88 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3C88_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3C88.vtx.inc.c>
};

/* Vtx: Vtx_0x3CC8 @ 0x3CC8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3CC8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3CC8.vtx.inc.c>
};

/* Vtx: Vtx_0x3D08 @ 0x3D08 (6 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3D08_Vtx[6] = {
	#include <StageYamabukiFile2/Vtx_0x3D08.vtx.inc.c>
};

/* Vtx: Vtx_0x3D68 @ 0x3D68 (6 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3D68_Vtx[6] = {
	#include <StageYamabukiFile2/Vtx_0x3D68.vtx.inc.c>
};

/* Vtx: Vtx_0x3DC8 @ 0x3DC8 (6 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3DC8_Vtx[6] = {
	#include <StageYamabukiFile2/Vtx_0x3DC8.vtx.inc.c>
};

/* Vtx: Vtx_0x3E28 @ 0x3E28 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3E28_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3E28.vtx.inc.c>
};

/* Vtx: Vtx_0x3E68 @ 0x3E68 (3 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3E68_Vtx[3] = {
	#include <StageYamabukiFile2/Vtx_0x3E68.vtx.inc.c>
};

/* Vtx: Vtx_0x3E98 @ 0x3E98 (3 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3E98_Vtx[3] = {
	#include <StageYamabukiFile2/Vtx_0x3E98.vtx.inc.c>
};

/* Vtx: Vtx_0x3EC8 @ 0x3EC8 (3 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3EC8_Vtx[3] = {
	#include <StageYamabukiFile2/Vtx_0x3EC8.vtx.inc.c>
};

/* Vtx: Vtx_0x3EF8 @ 0x3EF8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3EF8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3EF8.vtx.inc.c>
};

/* Vtx: Vtx_0x3F38 @ 0x3F38 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3F38_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3F38.vtx.inc.c>
};

/* Vtx: Vtx_0x3F78 @ 0x3F78 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3F78_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3F78.vtx.inc.c>
};

/* Vtx: Vtx_0x3FB8 @ 0x3FB8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3FB8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3FB8.vtx.inc.c>
};

/* Vtx: Vtx_0x3FF8 @ 0x3FF8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x3FF8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x3FF8.vtx.inc.c>
};

/* Vtx: Vtx_0x4038 @ 0x4038 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4038_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4038.vtx.inc.c>
};

/* Vtx: Vtx_0x4078 @ 0x4078 (6 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4078_Vtx[6] = {
	#include <StageYamabukiFile2/Vtx_0x4078.vtx.inc.c>
};

/* Vtx: Vtx_0x40D8 @ 0x40D8 (6 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x40D8_Vtx[6] = {
	#include <StageYamabukiFile2/Vtx_0x40D8.vtx.inc.c>
};

/* Vtx: Vtx_0x4138 @ 0x4138 (6 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4138_Vtx[6] = {
	#include <StageYamabukiFile2/Vtx_0x4138.vtx.inc.c>
};

/* Vtx: Vtx_0x4198 @ 0x4198 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4198_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4198.vtx.inc.c>
};

/* Vtx: Vtx_0x41D8 @ 0x41D8 (12 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x41D8_Vtx[12] = {
	#include <StageYamabukiFile2/Vtx_0x41D8.vtx.inc.c>
};

/* Vtx: Vtx_0x4298 @ 0x4298 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4298_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4298.vtx.inc.c>
};

/* Vtx: Vtx_0x42D8 @ 0x42D8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x42D8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x42D8.vtx.inc.c>
};

/* Vtx: Vtx_0x4318 @ 0x4318 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4318_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4318.vtx.inc.c>
};

/* Vtx: Vtx_0x4358 @ 0x4358 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4358_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4358.vtx.inc.c>
};

/* Vtx: Vtx_0x4398 @ 0x4398 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4398_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4398.vtx.inc.c>
};

/* Vtx: Vtx_0x43D8 @ 0x43D8 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x43D8_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x43D8.vtx.inc.c>
};

/* Vtx: Vtx_0x4418 @ 0x4418 (8 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4418_Vtx[8] = {
	#include <StageYamabukiFile2/Vtx_0x4418.vtx.inc.c>
};

/* Vtx: Vtx_0x4498 @ 0x4498 (8 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4498_Vtx[8] = {
	#include <StageYamabukiFile2/Vtx_0x4498.vtx.inc.c>
};

/* Vtx: Vtx_0x4518 @ 0x4518 (8 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4518_Vtx[8] = {
	#include <StageYamabukiFile2/Vtx_0x4518.vtx.inc.c>
};

/* Vtx: Vtx_0x4598 @ 0x4598 (4 vertices) */
Vtx dStageYamabukiFile2_Vtx_0x4598_Vtx[4] = {
	#include <StageYamabukiFile2/Vtx_0x4598.vtx.inc.c>
};

/* Raw data from file offset 0x45D8 to 0x5058 (2688 bytes) */
/* gap sub-block @ 0x45D8 (was gap+0x0, 72 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8[72] = {
	#include <StageYamabukiFile2/gap_0x45D8.data.inc.c>
};

/* gap sub-block @ 0x4620 (was gap+0x48, 496 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8_sub_0x48[496] = {
	#include <StageYamabukiFile2/gap_0x45D8_sub_0x48.data.inc.c>
};

/* gap sub-block @ 0x4810 (was gap+0x238, 296 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8_sub_0x238[296] = {
	#include <StageYamabukiFile2/gap_0x45D8_sub_0x238.data.inc.c>
};

/* gap sub-block @ 0x4938 (was gap+0x360, 136 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8_sub_0x360[136] = {
	#include <StageYamabukiFile2/gap_0x45D8_sub_0x360.data.inc.c>
};

/* gap sub-block @ 0x49C0 (was gap+0x3E8, 504 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8_sub_0x3E8[504] = {
	#include <StageYamabukiFile2/gap_0x45D8_sub_0x3E8.data.inc.c>
};

/* gap sub-block @ 0x4BB8 (was gap+0x5E0, 152 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8_sub_0x5E0[152] = {
	#include <StageYamabukiFile2/gap_0x45D8_sub_0x5E0.data.inc.c>
};

/* gap sub-block @ 0x4C50 (was gap+0x678, 1032 bytes) */
u8 dStageYamabukiFile2_gap_0x45D8_sub_0x678[1032] = {
	#include <StageYamabukiFile2/gap_0x45D8_sub_0x678.data.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x5058 (3 entries) */
DObjDesc dStageYamabukiFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_gap_0x45D8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageYamabukiFile2_gap_0x45D8 + 0x238), { -3002.714599609375f, 115.08750915527344f, -3241.796630859375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0x50DC to 0x51C0 (228 bytes) */
u8 dStageYamabukiFile2_gap_0x50DC[228] = {
	#include <StageYamabukiFile2/gap_0x50DC.data.inc.c>
};

/* Raw data from file offset 0x51C0 to 0x5260 (160 bytes) */
u32 dStageYamabukiFile2_Layer0Anim_AnimJoint[40] = {
	#include <StageYamabukiFile2/Layer0Anim_AnimJoint.data.inc.c>
};

/* MObjSub: Layer1MObj @ 0x5260 */
MObjSub dStageYamabukiFile2_Layer1MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x0000, 0x0000,
	0,
	1.60631370417321e-26f, 0.0f,
	1.626508851495659e-26f, 0.0f,
	1.6362753192808443e-26f, 1.646293236479569e-26f,
	(void**)((u8*)dStageYamabukiFile2_Tex_0x28F0 + 0x510),
	0x14A5,
	0x0C, 0x82,
	0x14A6,
	0x0A7E, 0x14A9, 0x0B80,
	0.0f, 1.0789998175301091e-42f,
	2.010200164661866e-26f, 2.938735877055719e-39f,
	0x00200020,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	1065353216, 0,
	10552065, 2097184,
};

/* Raw data from file offset 0x52D8 to 0x6A70 (6040 bytes) */
/* gap sub-block @ 0x52D8 (was gap+0x0, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8.data.inc.c>
};

/* gap sub-block @ 0x5318 (was gap+0x40, 120 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x40[120] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x40.data.inc.c>
};

/* gap sub-block @ 0x5390 (was gap+0xB8, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xB8[8] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xB8.data.inc.c>
};

/* gap sub-block @ 0x5398 (was gap+0xC0, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xC0[8] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xC0.data.inc.c>
};

/* gap sub-block @ 0x53A0 (was gap+0xC8, 96 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xC8[96] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xC8.data.inc.c>
};

/* gap sub-block @ 0x5400 (was gap+0x128, 96 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x128[96] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x128.data.inc.c>
};

/* gap sub-block @ 0x5460 (was gap+0x188, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x188[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x188.data.inc.c>
};

/* gap sub-block @ 0x54A0 (was gap+0x1C8, 176 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1C8[176] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1C8.data.inc.c>
};

/* gap sub-block @ 0x5550 (was gap+0x278, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x278[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x278.data.inc.c>
};

/* gap sub-block @ 0x5590 (was gap+0x2B8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x2B8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x2B8.data.inc.c>
};

/* gap sub-block @ 0x55D0 (was gap+0x2F8, 288 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x2F8[288] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x2F8.data.inc.c>
};

/* gap sub-block @ 0x56F0 (was gap+0x418, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x418[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x418.data.inc.c>
};

/* gap sub-block @ 0x5730 (was gap+0x458, 288 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x458[288] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x458.data.inc.c>
};

/* gap sub-block @ 0x5850 (was gap+0x578, 192 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x578[192] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x578.data.inc.c>
};

/* gap sub-block @ 0x5910 (was gap+0x638, 128 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x638[128] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x638.data.inc.c>
};

/* gap sub-block @ 0x5990 (was gap+0x6B8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x6B8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x6B8.data.inc.c>
};

/* gap sub-block @ 0x59D0 (was gap+0x6F8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x6F8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x6F8.data.inc.c>
};

/* gap sub-block @ 0x5A10 (was gap+0x738, 128 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x738[128] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x738.data.inc.c>
};

/* gap sub-block @ 0x5A90 (was gap+0x7B8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x7B8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x7B8.data.inc.c>
};

/* gap sub-block @ 0x5AD0 (was gap+0x7F8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x7F8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x7F8.data.inc.c>
};

/* gap sub-block @ 0x5B10 (was gap+0x838, 128 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x838[128] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x838.data.inc.c>
};

/* gap sub-block @ 0x5B90 (was gap+0x8B8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x8B8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x8B8.data.inc.c>
};

/* gap sub-block @ 0x5BD0 (was gap+0x8F8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x8F8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x8F8.data.inc.c>
};

/* gap sub-block @ 0x5C10 (was gap+0x938, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x938[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x938.data.inc.c>
};

/* gap sub-block @ 0x5C50 (was gap+0x978, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x978[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x978.data.inc.c>
};

/* gap sub-block @ 0x5C90 (was gap+0x9B8, 128 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x9B8[128] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x9B8.data.inc.c>
};

/* gap sub-block @ 0x5D10 (was gap+0xA38, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xA38[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xA38.data.inc.c>
};

/* gap sub-block @ 0x5D50 (was gap+0xA78, 96 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xA78[96] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xA78.data.inc.c>
};

/* gap sub-block @ 0x5DB0 (was gap+0xAD8, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xAD8[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xAD8.data.inc.c>
};

/* gap sub-block @ 0x5DF0 (was gap+0xB18, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xB18[64] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xB18.data.inc.c>
};

/* gap sub-block @ 0x5E30 (was gap+0xB58, 72 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xB58[72] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xB58.data.inc.c>
};

/* gap sub-block @ 0x5E78 (was gap+0xBA0, 1528 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0xBA0[1528] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xBA0.data.inc.c>
};

/* gap sub-block @ 0x6470 (was gap+0x1198, 152 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1198[152] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1198.data.inc.c>
};

/* gap sub-block @ 0x6508 (was gap+0x1230, 328 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1230[328] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1230.data.inc.c>
};

/* gap sub-block @ 0x6650 (was gap+0x1378, 128 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1378[128] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1378.data.inc.c>
};

/* gap sub-block @ 0x66D0 (was gap+0x13F8, 312 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x13F8[312] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x13F8.data.inc.c>
};

/* gap sub-block @ 0x6808 (was gap+0x1530, 176 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1530[176] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1530.data.inc.c>
};

/* gap sub-block @ 0x68B8 (was gap+0x15E0, 56 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x15E0[56] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x15E0.data.inc.c>
};

/* gap sub-block @ 0x68F0 (was gap+0x1618, 48 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1618[48] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1618.data.inc.c>
};

/* gap sub-block @ 0x6920 (was gap+0x1648, 96 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1648[96] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1648.data.inc.c>
};

/* gap sub-block @ 0x6980 (was gap+0x16A8, 112 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x16A8[112] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x16A8.data.inc.c>
};

/* gap sub-block @ 0x69F0 (was gap+0x1718, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1718[16] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1718.data.inc.c>
};

/* gap sub-block @ 0x6A00 (was gap+0x1728, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1728[16] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1728.data.inc.c>
};

/* gap sub-block @ 0x6A10 (was gap+0x1738, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1738[16] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1738.data.inc.c>
};

/* gap sub-block @ 0x6A20 (was gap+0x1748, 24 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1748[24] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1748.data.inc.c>
};

/* gap sub-block @ 0x6A38 (was gap+0x1760, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1760[16] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1760.data.inc.c>
};

/* gap sub-block @ 0x6A48 (was gap+0x1770, 24 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1770[24] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1770.data.inc.c>
};

/* gap sub-block @ 0x6A60 (was gap+0x1788, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x52D8_sub_0x1788[16] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1788.data.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x6A70 (2 entries) */
DObjDesc dStageYamabukiFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageYamabukiFile2_gap_0x52D8 + 0x1718), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0x6AC8 to 0x6E8C (964 bytes) */
/* gap sub-block @ 0x6AC8 (was gap+0x0, 352 bytes) */
u8 dStageYamabukiFile2_gap_0x6AC8[352] = {
	#include <StageYamabukiFile2/gap_0x6AC8.data.inc.c>
};

/* gap sub-block @ 0x6C28 (was gap+0x160, 188 bytes) */
u8 dStageYamabukiFile2_gap_0x6AC8_sub_0x160[188] = {
	#include <StageYamabukiFile2/gap_0x6AC8_sub_0x160.data.inc.c>
};

/* gap sub-block @ 0x6CE4 (was gap+0x21C, 84 bytes) */
u8 dStageYamabukiFile2_gap_0x6AC8_sub_0x21C[84] = {
	#include <StageYamabukiFile2/gap_0x6AC8_sub_0x21C.data.inc.c>
};

/* gap sub-block @ 0x6D38 (was gap+0x270, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x6AC8_sub_0x270[64] = {
	#include <StageYamabukiFile2/gap_0x6AC8_sub_0x270.data.inc.c>
};

/* gap sub-block @ 0x6D78 (was gap+0x2B0, 72 bytes) */
u8 dStageYamabukiFile2_gap_0x6AC8_sub_0x2B0[72] = {
	#include <StageYamabukiFile2/gap_0x6AC8_sub_0x2B0.data.inc.c>
};

/* gap sub-block @ 0x6DC0 (was gap+0x2F8, 204 bytes) */
u8 dStageYamabukiFile2_gap_0x6AC8_sub_0x2F8[204] = {
	#include <StageYamabukiFile2/gap_0x6AC8_sub_0x2F8.data.inc.c>
};

/* Raw data from file offset 0x6E8C to 0x6EB0 (36 bytes) */
u8 dStageYamabukiFile2_MPGeometryData_0x6E8C[36] = {
	#include <StageYamabukiFile2/MPGeometryData_0x6E8C.data.inc.c>
};

/* Raw data from file offset 0x6EB0 to 0x7000 (336 bytes) */
u32 dStageYamabukiFile2_Layer1Anim_AnimJoint[84] = {
	#include <StageYamabukiFile2/Layer1Anim_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7000 to 0x8718 (5912 bytes) */
u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint[1478] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint.data.inc.c>
};

/* DObjDesc: Layer3DObj @ 0x8718 (4 entries) */
DObjDesc dStageYamabukiFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint + 0x16F8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint + 0x1708), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x87C8 to 0x10270 (31400 bytes) */
/* gap sub-block @ 0x87C8 (was gap+0x0, 136 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8[136] = {
	#include <StageYamabukiFile2/gap_0x87C8.data.inc.c>
};

/* gap sub-block @ 0x8850 (was gap+0x88, 40 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x88[40] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x8878 (was gap+0xB0, 968 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0xB0[968] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0xB0.data.inc.c>
};

/* gap sub-block @ 0x8C40 (was gap+0x478, 968 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x478[968] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x478.data.inc.c>
};

/* gap sub-block @ 0x9008 (was gap+0x840, 968 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x840[968] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x840.data.inc.c>
};

/* gap sub-block @ 0x93D0 (was gap+0xC08, 968 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0xC08[968] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0xC08.data.inc.c>
};

/* gap sub-block @ 0x9798 (was gap+0xFD0, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0xFD0[16] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0xFD0.data.inc.c>
};

/* gap sub-block @ 0x97A8 (was gap+0xFE0, 120 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0xFE0[120] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0xFE0.data.inc.c>
};

/* gap sub-block @ 0x9820 (was gap+0x1058, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x1058[8] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1058.data.inc.c>
};

/* gap sub-block @ 0x9828 (was gap+0x1060, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x1060[64] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1060.data.inc.c>
};

/* gap sub-block @ 0x9868 (was gap+0x10A0, 384 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x10A0[384] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x10A0.data.inc.c>
};

/* gap sub-block @ 0x99E8 (was gap+0x1220, 992 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x1220[992] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1220.data.inc.c>
};

/* gap sub-block @ 0x9DC8 (was gap+0x1600, 976 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x1600[976] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1600.data.inc.c>
};

/* gap sub-block @ 0xA198 (was gap+0x19D0, 216 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x19D0[216] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x19D0.data.inc.c>
};

/* gap sub-block @ 0xA270 (was gap+0x1AA8, 40 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x1AA8[40] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1AA8.data.inc.c>
};

/* gap sub-block @ 0xA298 (was gap+0x1AD0, 1544 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x1AD0[1544] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1AD0.data.inc.c>
};

/* gap sub-block @ 0xA8A0 (was gap+0x20D8, 1544 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x20D8[1544] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x20D8.data.inc.c>
};

/* gap sub-block @ 0xAEA8 (was gap+0x26E0, 1544 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x26E0[1544] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x26E0.data.inc.c>
};

/* gap sub-block @ 0xB4B0 (was gap+0x2CE8, 1544 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x2CE8[1544] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x2CE8.data.inc.c>
};

/* gap sub-block @ 0xBAB8 (was gap+0x32F0, 1544 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x32F0[1544] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x32F0.data.inc.c>
};

/* gap sub-block @ 0xC0C0 (was gap+0x38F8, 1544 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x38F8[1544] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x38F8.data.inc.c>
};

/* gap sub-block @ 0xC6C8 (was gap+0x3F00, 24 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x3F00[24] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3F00.data.inc.c>
};

/* gap sub-block @ 0xC6E0 (was gap+0x3F18, 120 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x3F18[120] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3F18.data.inc.c>
};

/* gap sub-block @ 0xC758 (was gap+0x3F90, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x3F90[8] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3F90.data.inc.c>
};

/* gap sub-block @ 0xC760 (was gap+0x3F98, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x3F98[64] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3F98.data.inc.c>
};

/* gap sub-block @ 0xC7A0 (was gap+0x3FD8, 392 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x3FD8[392] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3FD8.data.inc.c>
};

/* gap sub-block @ 0xC928 (was gap+0x4160, 192 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x4160[192] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x4160.data.inc.c>
};

/* gap sub-block @ 0xC9E8 (was gap+0x4220, 208 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x4220[208] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x4220.data.inc.c>
};

/* gap sub-block @ 0xCAB8 (was gap+0x42F0, 176 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x42F0[176] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x42F0.data.inc.c>
};

/* gap sub-block @ 0xCB68 (was gap+0x43A0, 40 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x43A0[40] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x43A0.data.inc.c>
};

/* gap sub-block @ 0xCB90 (was gap+0x43C8, 1160 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x43C8[1160] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x43C8.data.inc.c>
};

/* gap sub-block @ 0xD018 (was gap+0x4850, 1160 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x4850[1160] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x4850.data.inc.c>
};

/* gap sub-block @ 0xD4A0 (was gap+0x4CD8, 1160 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x4CD8[1160] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x4CD8.data.inc.c>
};

/* gap sub-block @ 0xD928 (was gap+0x5160, 1160 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5160[1160] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5160.data.inc.c>
};

/* gap sub-block @ 0xDDB0 (was gap+0x55E8, 1160 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x55E8[1160] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x55E8.data.inc.c>
};

/* gap sub-block @ 0xE238 (was gap+0x5A70, 24 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5A70[24] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5A70.data.inc.c>
};

/* gap sub-block @ 0xE250 (was gap+0x5A88, 120 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5A88[120] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5A88.data.inc.c>
};

/* gap sub-block @ 0xE2C8 (was gap+0x5B00, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5B00[8] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5B00.data.inc.c>
};

/* gap sub-block @ 0xE2D0 (was gap+0x5B08, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5B08[64] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5B08.data.inc.c>
};

/* gap sub-block @ 0xE310 (was gap+0x5B48, 392 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5B48[392] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5B48.data.inc.c>
};

/* gap sub-block @ 0xE498 (was gap+0x5CD0, 304 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5CD0[304] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5CD0.data.inc.c>
};

/* gap sub-block @ 0xE5C8 (was gap+0x5E00, 260 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5E00[260] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5E00.data.inc.c>
};

/* gap sub-block @ 0xE6CC (was gap+0x5F04, 132 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5F04[132] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5F04.data.inc.c>
};

/* gap sub-block @ 0xE750 (was gap+0x5F88, 40 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5F88[40] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5F88.data.inc.c>
};

/* gap sub-block @ 0xE778 (was gap+0x5FB0, 1352 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x5FB0[1352] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5FB0.data.inc.c>
};

/* gap sub-block @ 0xECC0 (was gap+0x64F8, 1352 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x64F8[1352] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x64F8.data.inc.c>
};

/* gap sub-block @ 0xF208 (was gap+0x6A40, 1352 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x6A40[1352] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x6A40.data.inc.c>
};

/* gap sub-block @ 0xF750 (was gap+0x6F88, 1352 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x6F88[1352] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x6F88.data.inc.c>
};

/* gap sub-block @ 0xFC98 (was gap+0x74D0, 16 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x74D0[16] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x74D0.data.inc.c>
};

/* gap sub-block @ 0xFCA8 (was gap+0x74E0, 120 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x74E0[120] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x74E0.data.inc.c>
};

/* gap sub-block @ 0xFD20 (was gap+0x7558, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x7558[8] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x7558.data.inc.c>
};

/* gap sub-block @ 0xFD28 (was gap+0x7560, 64 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x7560[64] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x7560.data.inc.c>
};

/* gap sub-block @ 0xFD68 (was gap+0x75A0, 384 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x75A0[384] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x75A0.data.inc.c>
};

/* gap sub-block @ 0xFEE8 (was gap+0x7720, 240 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x7720[240] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x7720.data.inc.c>
};

/* gap sub-block @ 0xFFD8 (was gap+0x7810, 656 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x7810[656] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x7810.data.inc.c>
};

/* gap sub-block @ 0x10268 (was gap+0x7AA0, 8 bytes) */
u8 dStageYamabukiFile2_gap_0x87C8_sub_0x7AA0[8] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x7AA0.data.inc.c>
};

#endif  /* REGION_US */

