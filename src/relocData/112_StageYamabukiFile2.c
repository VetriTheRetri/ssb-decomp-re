/* relocData file 112: StageYamabukiFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dStageYamabukiFile2_DL_0x4620[];
extern Gfx dStageYamabukiFile2_DL_0x68F0[];
extern Gfx dStageYamabukiFile2_DL_0x5E78[];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x91C[8];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x99C[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x9DC[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xA1C[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xA5C[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xA9C[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xADC[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xB1C[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xB5C[8];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xBDC[8];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xC5C[8];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xCDC[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xD1C[5];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xD6C[5];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xDBC[6];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xE1C[5];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xE6C[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xEAC[4];
extern Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xEEC[6];
extern u16 dStageYamabukiFile2_Lut_0x0008_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0438_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0C98_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0D08_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0D78_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0E28_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0ED8_palette[];
extern u16 dStageYamabukiFile2_Lut_0x0F88_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1038_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1168_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1218_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1348_palette[];
extern u16 dStageYamabukiFile2_Lut_0x13F8_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1828_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1898_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1AC8_palette[];
extern u16 dStageYamabukiFile2_Lut_0x1B78_palette[];
extern u16 dStageYamabukiFile2_Lut_0x21D8_palette[];
extern u16 dStageYamabukiFile2_Lut_0x2288_palette[];
extern u16 dStageYamabukiFile2_Lut_0x2338_palette[];
extern u16 dStageYamabukiFile2_Lut_0x2568_palette[];
extern u16 dStageYamabukiFile2_Lut_0x2798_palette[];
extern u16 dStageYamabukiFile2_Lut_0x28C8_palette[];
extern u16 dStageYamabukiFile2_Lut_0x3610_palette[];
extern u16 dStageYamabukiFile2_Lut_0x3840_palette[];
extern u16 dStageYamabukiFile2_Lut_0x38F0_palette[];
extern u16 dStageYamabukiFile2_Lut_0x3B20_palette[];
extern u8 dStageYamabukiFile2_Tex_0x0030[];
extern u8 dStageYamabukiFile2_Tex_0x0460[];
extern u8 dStageYamabukiFile2_Tex_0x0CC0[];
extern u8 dStageYamabukiFile2_Tex_0x0D30[];
extern u8 dStageYamabukiFile2_Tex_0x0DA0[];
extern u8 dStageYamabukiFile2_Tex_0x0E50[];
extern u8 dStageYamabukiFile2_Tex_0x0F00[];
extern u8 dStageYamabukiFile2_Tex_0x0FB0[];
extern u8 dStageYamabukiFile2_Tex_0x1060[];
extern u8 dStageYamabukiFile2_Tex_0x1190[];
extern u8 dStageYamabukiFile2_Tex_0x1240[];
extern u8 dStageYamabukiFile2_Tex_0x1370[];
extern u8 dStageYamabukiFile2_Tex_0x1420[];
extern u8 dStageYamabukiFile2_Tex_0x1850[];
extern u8 dStageYamabukiFile2_Tex_0x18C0[];
extern u8 dStageYamabukiFile2_Tex_0x1AF0[];
extern u8 dStageYamabukiFile2_Tex_0x1BA0[];
extern u8 dStageYamabukiFile2_Tex_0x2200[];
extern u8 dStageYamabukiFile2_Tex_0x22B0[];
extern u8 dStageYamabukiFile2_Tex_0x2360[];
extern u8 dStageYamabukiFile2_Tex_0x2590[];
extern u8 dStageYamabukiFile2_Tex_0x27C0[];
extern u8 dStageYamabukiFile2_Tex_0x28F0[];
extern u8 dStageYamabukiFile2_Tex_0x3638[];
extern u8 dStageYamabukiFile2_Tex_0x3868[];
extern u8 dStageYamabukiFile2_Tex_0x3918[];
extern u8 dStageYamabukiFile2_Tex_0x3B48[];
extern Vtx dStageYamabukiFile2_Vtx_0x3BC8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3C08_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3C48_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3C88_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3CC8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3D08_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3D68_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3DC8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3E28_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3E68_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3E98_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3EC8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3EF8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3F38_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3F78_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3FB8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x3FF8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4038_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4078_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x40D8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4138_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4198_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x41D8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4298_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x42D8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4318_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4358_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4398_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x43D8_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4418_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4498_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4518_Vtx[];
extern Vtx dStageYamabukiFile2_Vtx_0x4598_Vtx[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x128[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x188[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x1C8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x278[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x2B8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x2F8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x418[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x458[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x578[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x638[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x6B8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x6F8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x738[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x7B8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x7F8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x838[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x8B8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x8F8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x938[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x978[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x9B8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xA38[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xA78[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xAD8[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xB18[];
extern Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xC8[];
extern Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x1060[];
extern u16 dStageYamabukiFile2_gap_0x87C8_sub_0x1AA8[];
extern Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x3F98[];
extern u16 dStageYamabukiFile2_gap_0x87C8_sub_0x43A0[];
extern Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x5B08[];
extern u16 dStageYamabukiFile2_gap_0x87C8_sub_0x5F88[];
extern Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x7560[];
extern u16 dStageYamabukiFile2_gap_0x87C8_sub_0x88[];
extern MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x1058[];
extern MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x3F90[];
extern MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x5B00[];
extern MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x7558[];
extern u32 dStageYamabukiFile2_Layer0Anim_AnimJoint_0x51DC[];

extern u32 dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6ED4[];
extern u32 dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6F8C[];

extern u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data[289];
extern AObjEvent32 **dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint[9];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0008_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0030 (1032 bytes) */
/* @tex fmt=CI4 dim=16x128 lut=dStageYamabukiFile2_Lut_0x0008_palette */
u8 dStageYamabukiFile2_Tex_0x0030[1024] = {
	#include <StageYamabukiFile2/Tex_0x0030.tex.inc.c>
};

PAD(8);

#if !defined(REGION_JP)
/* Palette: Lut_0x0438 @ 0x438 (16 colors RGBA5551) — US position (pair02) */
u16 dStageYamabukiFile2_Lut_0x0438_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0438.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0460 (US=2104 bytes) — US position (pair02) */
/* @tex fmt=CI4 dim=64x32 lut=dStageYamabukiFile2_Lut_0x0438_palette */
u8 dStageYamabukiFile2_Tex_0x0460[2104] = {
	#include <StageYamabukiFile2/Tex_0x0460.tex.inc.c>
};
#endif

/* Palette: Lut_0x0C98 @ 0xC98 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0C98_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0C98.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0CC0 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageYamabukiFile2_Lut_0x0C98_palette */
u8 dStageYamabukiFile2_Tex_0x0CC0[72] = {
	#include <StageYamabukiFile2/Tex_0x0CC0.tex.inc.c>
};

/* Palette: Lut_0x0D08 @ 0xD08 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0D08_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0D08.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0D30 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageYamabukiFile2_Lut_0x0D08_palette */
u8 dStageYamabukiFile2_Tex_0x0D30[72] = {
	#include <StageYamabukiFile2/Tex_0x0D30.tex.inc.c>
};

/* Palette: Lut_0x0D78 @ 0xD78 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0D78_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0D78.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0DA0 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x0D78_palette */
u8 dStageYamabukiFile2_Tex_0x0DA0[128] = {
	#include <StageYamabukiFile2/Tex_0x0DA0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0E28 @ 0xE28 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0E28_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0E28.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0E50 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x0E28_palette */
u8 dStageYamabukiFile2_Tex_0x0E50[128] = {
	#include <StageYamabukiFile2/Tex_0x0E50.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0ED8 @ 0xED8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0ED8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0ED8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0F00 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x0ED8_palette */
u8 dStageYamabukiFile2_Tex_0x0F00[128] = {
	#include <StageYamabukiFile2/Tex_0x0F00.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0F88 @ 0xF88 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x0F88_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0F88.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0FB0 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x0F88_palette */
u8 dStageYamabukiFile2_Tex_0x0FB0[128] = {
	#include <StageYamabukiFile2/Tex_0x0FB0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x1038 @ 0x1038 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1038_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1038.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1060 (264 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dStageYamabukiFile2_Lut_0x1038_palette */
u8 dStageYamabukiFile2_Tex_0x1060[256] = {
	#include <StageYamabukiFile2/Tex_0x1060.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x1168 @ 0x1168 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1168_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1168.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1190 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x1168_palette */
u8 dStageYamabukiFile2_Tex_0x1190[136] = {
	#include <StageYamabukiFile2/Tex_0x1190.tex.inc.c>
};

/* Palette: Lut_0x1218 @ 0x1218 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1218_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1218.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1240 (264 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dStageYamabukiFile2_Lut_0x1218_palette */
u8 dStageYamabukiFile2_Tex_0x1240[264] = {
	#include <StageYamabukiFile2/Tex_0x1240.tex.inc.c>
};

/* Palette: Lut_0x1348 @ 0x1348 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1348_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1348.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1370 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x1348_palette */
u8 dStageYamabukiFile2_Tex_0x1370[128] = {
	#include <StageYamabukiFile2/Tex_0x1370.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x13F8 @ 0x13F8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x13F8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x13F8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x1420 (1032 bytes) */
/* @tex fmt=CI4 dim=32x64 lut=dStageYamabukiFile2_Lut_0x13F8_palette */
u8 dStageYamabukiFile2_Tex_0x1420[1024] = {
	#include <StageYamabukiFile2/Tex_0x1420.tex.inc.c>
};

PAD(8);

#if defined(REGION_JP)
/* Palette: Lut_0x0438 (16 colors RGBA5551) — JP position (pair02, after pair17) */
u16 dStageYamabukiFile2_Lut_0x0438_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x0438.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0460 (JP=1032 bytes) — JP position (pair02, after pair17) */
/* @tex fmt=CI4 dim=64x32 lut=dStageYamabukiFile2_Lut_0x0438_palette */
u8 dStageYamabukiFile2_Tex_0x0460[1032] = {
	#include <StageYamabukiFile2/Tex_0x0460.tex.inc.c>
};
#endif

/* Palette: Lut_0x1828 @ 0x1828 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1828_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1828.palette.inc.c>
};

#if defined(REGION_JP)
static u8 _pad_0x1828[8] = { 0x00, 0x2D, 0xF9, 0xFD, 0x23, 0x8A, 0xC3, 0x59 };
#else
PAD(8);
#endif

/* Texture data @ 0x1850 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dStageYamabukiFile2_Lut_0x1828_palette */
u8 dStageYamabukiFile2_Tex_0x1850[64] = {
	#include <StageYamabukiFile2/Tex_0x1850.tex.inc.c>
};

#if defined(REGION_JP)
/* JP fills the gap between Tex_0x1850 and Lut_0x1898 with extra texture data. */
u8 dStageYamabukiFile2_Tex_0x1850_jp_pad[8] = { 0x00, 0x00, 0x33, 0x68, 0x81, 0x1A, 0x43, 0x59 };
#else
PAD(8);
#endif

/* Palette: Lut_0x1898 @ 0x1898 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1898_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1898.palette.inc.c>
};

#if defined(REGION_JP)
static u8 _pad_0x1898[8] = { 0x00, 0x2D, 0xF9, 0x99, 0xFD, 0x38, 0x43, 0x59 };
#else
PAD(8);
#endif

/* Texture data @ 0x18C0 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile2_Lut_0x1898_palette */
u8 dStageYamabukiFile2_Tex_0x18C0[520] = {
	#include <StageYamabukiFile2/Tex_0x18C0.tex.inc.c>
};

/* Palette: Lut_0x1AC8 @ 0x1AC8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1AC8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1AC8.palette.inc.c>
};

#if defined(REGION_JP)
static u8 _pad_0x1AC8[8] = { 0x7D, 0x77, 0x47, 0x82, 0x77, 0x65, 0x27, 0x77 };
#else
PAD(8);
#endif

/* Texture data @ 0x1AF0 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x1AC8_palette */
u8 dStageYamabukiFile2_Tex_0x1AF0[128] = {
	#include <StageYamabukiFile2/Tex_0x1AF0.tex.inc.c>
};

#if defined(REGION_JP)
/* JP fills the gap between Tex_0x1AF0 and Lut_0x1B78 with extra texture data. */
u8 dStageYamabukiFile2_Tex_0x1AF0_jp_pad[8] = { 0x01, 0x77, 0x74, 0x4C, 0xB9, 0x9B, 0x9C, 0xDC };
#else
PAD(8);
#endif

/* Palette: Lut_0x1B78 @ 0x1B78 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x1B78_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x1B78.palette.inc.c>
};

#if defined(REGION_JP)
static u8 _pad_0x1B78[8] = { 0x76, 0x9C, 0xC0, 0x77, 0x78, 0x89, 0x97, 0x74 };
#else
PAD(8);
#endif

/* Texture data @ 0x1BA0 (US=1592, JP=520 bytes) */
/* @tex fmt=CI4 dim=4x64 lut=dStageYamabukiFile2_Lut_0x1B78_palette */
u8 dStageYamabukiFile2_Tex_0x1BA0[
#if defined(REGION_JP)
	520
#else
	1592
#endif
] = {
	#include <StageYamabukiFile2/Tex_0x1BA0.tex.inc.c>
};

/* Palette: Lut_0x21D8 @ 0x21D8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x21D8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x21D8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x2200 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x21D8_palette */
u8 dStageYamabukiFile2_Tex_0x2200[128] = {
	#include <StageYamabukiFile2/Tex_0x2200.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x2288 @ 0x2288 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2288_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2288.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x22B0 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x2288_palette */
u8 dStageYamabukiFile2_Tex_0x22B0[128] = {
	#include <StageYamabukiFile2/Tex_0x22B0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x2338 @ 0x2338 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2338_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2338.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x2360 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile2_Lut_0x2338_palette */
u8 dStageYamabukiFile2_Tex_0x2360[512] = {
	#include <StageYamabukiFile2/Tex_0x2360.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x2568 @ 0x2568 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2568_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2568.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x2590 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile2_Lut_0x2568_palette */
u8 dStageYamabukiFile2_Tex_0x2590[512] = {
	#include <StageYamabukiFile2/Tex_0x2590.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x2798 @ 0x2798 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x2798_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x2798.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x27C0 (264 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dStageYamabukiFile2_Lut_0x2798_palette */
u8 dStageYamabukiFile2_Tex_0x27C0[256] = {
	#include <StageYamabukiFile2/Tex_0x27C0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x28C8 @ 0x28C8 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x28C8_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x28C8.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x28F0 (3360 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dStageYamabukiFile2_Lut_0x28C8_palette */
u8 dStageYamabukiFile2_Tex_0x28F0[264] = {
	#include <StageYamabukiFile2/Tex_0x28F0.tex.inc.c>
};

/* sprite frames indexed by the Layer1 MObjSubs */
/* @tex fmt=IA8 dim=32x32 */
u8 dStageYamabukiFile2_Tex_0x29F8[1032] = {
	#include <StageYamabukiFile2/Tex_0x29F8.tex.inc.c>
};
/* @tex fmt=IA8 dim=32x32 */
u8 dStageYamabukiFile2_Tex_0x2E00[1032] = {
	#include <StageYamabukiFile2/Tex_0x2E00.tex.inc.c>
};
/* @tex fmt=IA8 dim=32x32 */
u8 dStageYamabukiFile2_Tex_0x3208[1032] = {
	#include <StageYamabukiFile2/Tex_0x3208.tex.inc.c>
};

/* Palette: Lut_0x3610 @ 0x3610 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x3610_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x3610.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3638 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile2_Lut_0x3610_palette */
u8 dStageYamabukiFile2_Tex_0x3638[512] = {
	#include <StageYamabukiFile2/Tex_0x3638.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x3840 @ 0x3840 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x3840_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x3840.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3868 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x3840_palette */
u8 dStageYamabukiFile2_Tex_0x3868[128] = {
	#include <StageYamabukiFile2/Tex_0x3868.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x38F0 @ 0x38F0 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x38F0_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x38F0.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3918 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile2_Lut_0x38F0_palette */
u8 dStageYamabukiFile2_Tex_0x3918[512] = {
	#include <StageYamabukiFile2/Tex_0x3918.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x3B20 @ 0x3B20 (16 colors RGBA5551) */
u16 dStageYamabukiFile2_Lut_0x3B20_palette[16] = {
	#include <StageYamabukiFile2/Lut_0x3B20.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x3B48 (128 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile2_Lut_0x3B20_palette */
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
Gfx dStageYamabukiFile2_DL_0x45D8[9] = {
	#include <StageYamabukiFile2/DL_0x45D8.dl.inc.c>
};

/* gap sub-block @ 0x4620 (was gap+0x48, 496 bytes) */
Gfx dStageYamabukiFile2_DL_0x4620[62] = {
	#include <StageYamabukiFile2/DL_0x4620.dl.inc.c>
};

/* gap sub-block @ 0x4810 (was gap+0x238, 296 bytes) */
Gfx dStageYamabukiFile2_DL_0x4810[37] = {
	#include <StageYamabukiFile2/DL_0x4810.dl.inc.c>
};

/* gap sub-block @ 0x4938 (was gap+0x360, 136 bytes) */
Gfx dStageYamabukiFile2_DL_0x4938[17] = {
	#include <StageYamabukiFile2/DL_0x4938.dl.inc.c>
};

/* gap sub-block @ 0x49C0 (was gap+0x3E8, 504 bytes) */
Gfx dStageYamabukiFile2_DL_0x49C0[63] = {
	#include <StageYamabukiFile2/DL_0x49C0.dl.inc.c>
};

/* gap sub-block @ 0x4BB8 (was gap+0x5E0, 152 bytes) */
Gfx dStageYamabukiFile2_DL_0x4BB8[19] = {
	#include <StageYamabukiFile2/DL_0x4BB8.dl.inc.c>
};

/* gap sub-block @ 0x4C50 (was gap+0x678, 1032 bytes) */
Gfx dStageYamabukiFile2_DL_0x4C50[129] = {
	#include <StageYamabukiFile2/DL_0x4C50.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x5058 (8 entries, terminated by { 18, ... } sentinel
 * at +0x108 = 0x5160; the 5 trailing entries were previously split off as
 * `gap_0x50DC` but they form one continuous scene-graph walk). */
DObjDesc dStageYamabukiFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_DL_0x45D8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageYamabukiFile2_DL_0x4810, { -3002.714599609375f, 115.08750915527344f, -3241.796630859375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	/* +0x84 (file 0x50DC): continuation. */
	{ 32771, (void*)dStageYamabukiFile2_DL_0x4938, { 4.9857330322265625f, 3054.670166015625f, 13.561248779296875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_DL_0x49C0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageYamabukiFile2_DL_0x4BB8, { 923.3999633789062f, 1369.8443603515625f, -2440.9111328125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_DL_0x4C50, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
PAD(8);

/* Raw data from file offset 0x51C0 to 0x5260 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dStageYamabukiFile2_Layer0Anim_AnimJoint[7] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_Layer0Anim_AnimJoint_0x51DC,
	NULL,
	NULL,
	NULL,
	NULL,
};

u32 dStageYamabukiFile2_Layer0Anim_AnimJoint_0x51DC[] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	aobjEvent32SetValRateBlock(0x007, 104),
	    0xBD8EFA35,  /* -0.06981316953897476f */
	    0xB7E907A3,  /* -2.7779320589615963e-05f */
	    0xBE0EFA35,  /* -0.13962633907794952f */
	    0xB6B99994,  /* -5.531308488571085e-06f */
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xB83702D4,  /* -4.363323387224227e-05f */
	aobjEvent32SetValRateBlock(0x007, 210),
	    0x3D8EFA35,  /* 0.06981316953897476f */
	    0x37D02FBD,  /* 2.4817762096063234e-05f */
	    0x3E0EFA35,  /* 0.13962633907794952f */
	    0x3768BB9D,  /* 1.3871959708922077e-05f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0x38283782,  /* 4.010601696791127e-05f */
	aobjEvent32SetValRateBlock(0x007, 106),
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYamabukiFile2_Layer0Anim_AnimJoint_0x51DC),
	aobjEvent32End(),
};

PAD(8);

/* @ 0x5260 — Layer1 MObj sub-table; GRYamabukiMap gr_desc[1][2]
 * points here. MObjSub**[9]: slots 5/7 -> the MObjSub*[2] joint
 * arrays, the rest runtime state. */
extern MObjSub *dStageYamabukiFile2_gap_0x52D8_sub_0xB8[2];
extern MObjSub *dStageYamabukiFile2_gap_0x52D8_sub_0xC0[2];
MObjSub **dStageYamabukiFile2_Layer1MObj_MObjSub[9] = {
	NULL, NULL, NULL, NULL, NULL,
	(MObjSub **)dStageYamabukiFile2_gap_0x52D8_sub_0xB8,
	NULL,
	(MObjSub **)dStageYamabukiFile2_gap_0x52D8_sub_0xC0,
	NULL,
};

/* @ 0x5284 / 0x5290 — sprite-frame pointer arrays into Tex_0x28F0 */
void *dStageYamabukiFile2_Layer1MObj_MObjSub_sub_0x24[3] = {
	(void *)dStageYamabukiFile2_Tex_0x3208,
	(void *)dStageYamabukiFile2_Tex_0x29F8,
	(void *)dStageYamabukiFile2_Tex_0x2E00,
};
void *dStageYamabukiFile2_Layer1MObj_MObjSub_sub_0x30[3] = {
	(void *)dStageYamabukiFile2_Tex_0x3208,
	(void *)dStageYamabukiFile2_Tex_0x29F8,
	(void *)dStageYamabukiFile2_Tex_0x2E00,
};
PAD(4);

/* MObjSub @ 0x52A0 — spans the head tail + former gap_0x52D8 */
MObjSub dStageYamabukiFile2_Layer1MObj_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dStageYamabukiFile2_Layer1MObj_MObjSub_sub_0x24,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x00A1,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x5318 */
MObjSub dStageYamabukiFile2_gap_0x52D8_sub_0x40[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dStageYamabukiFile2_Layer1MObj_MObjSub_sub_0x30,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x00A1,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub*[2] @ 0x5390 (was gap+0xB8) — joint array for MObjSub @ 0x52A0 */
MObjSub *dStageYamabukiFile2_gap_0x52D8_sub_0xB8[2] = {
	(MObjSub *)dStageYamabukiFile2_Layer1MObj_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x5398 (was gap+0xC0, 8 bytes) */
MObjSub *dStageYamabukiFile2_gap_0x52D8_sub_0xC0[2] = {
	(MObjSub *)dStageYamabukiFile2_gap_0x52D8_sub_0x40,
	NULL,
};

/* gap sub-block @ 0x53A0 (was gap+0xC8, 96 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xC8[6] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xC8.vtx.inc.c>
};

/* gap sub-block @ 0x5400 (was gap+0x128, 96 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x128[6] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x128.vtx.inc.c>
};

/* gap sub-block @ 0x5460 (was gap+0x188, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x188[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x188.vtx.inc.c>
};

/* gap sub-block @ 0x54A0 (was gap+0x1C8, 176 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x1C8[11] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x1C8.vtx.inc.c>
};

/* gap sub-block @ 0x5550 (was gap+0x278, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x278[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x278.vtx.inc.c>
};

/* gap sub-block @ 0x5590 (was gap+0x2B8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x2B8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x2B8.vtx.inc.c>
};

/* gap sub-block @ 0x55D0 (was gap+0x2F8, 288 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x2F8[18] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x2F8.vtx.inc.c>
};

/* gap sub-block @ 0x56F0 (was gap+0x418, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x418[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x418.vtx.inc.c>
};

/* gap sub-block @ 0x5730 (was gap+0x458, 288 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x458[18] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x458.vtx.inc.c>
};

/* gap sub-block @ 0x5850 (was gap+0x578, 192 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x578[12] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x578.vtx.inc.c>
};

/* gap sub-block @ 0x5910 (was gap+0x638, 128 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x638[8] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x638.vtx.inc.c>
};

/* gap sub-block @ 0x5990 (was gap+0x6B8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x6B8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x6B8.vtx.inc.c>
};

/* gap sub-block @ 0x59D0 (was gap+0x6F8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x6F8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x6F8.vtx.inc.c>
};

/* gap sub-block @ 0x5A10 (was gap+0x738, 128 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x738[8] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x738.vtx.inc.c>
};

/* gap sub-block @ 0x5A90 (was gap+0x7B8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x7B8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x7B8.vtx.inc.c>
};

/* gap sub-block @ 0x5AD0 (was gap+0x7F8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x7F8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x7F8.vtx.inc.c>
};

/* gap sub-block @ 0x5B10 (was gap+0x838, 128 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x838[8] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x838.vtx.inc.c>
};

/* gap sub-block @ 0x5B90 (was gap+0x8B8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x8B8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x8B8.vtx.inc.c>
};

/* gap sub-block @ 0x5BD0 (was gap+0x8F8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x8F8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x8F8.vtx.inc.c>
};

/* gap sub-block @ 0x5C10 (was gap+0x938, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x938[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x938.vtx.inc.c>
};

/* gap sub-block @ 0x5C50 (was gap+0x978, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x978[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x978.vtx.inc.c>
};

/* gap sub-block @ 0x5C90 (was gap+0x9B8, 128 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0x9B8[8] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0x9B8.vtx.inc.c>
};

/* gap sub-block @ 0x5D10 (was gap+0xA38, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xA38[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xA38.vtx.inc.c>
};

/* gap sub-block @ 0x5D50 (was gap+0xA78, 96 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xA78[6] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xA78.vtx.inc.c>
};

/* gap sub-block @ 0x5DB0 (was gap+0xAD8, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xAD8[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xAD8.vtx.inc.c>
};

/* gap sub-block @ 0x5DF0 (was gap+0xB18, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x52D8_sub_0xB18[4] = {
	#include <StageYamabukiFile2/gap_0x52D8_sub_0xB18.vtx.inc.c>
};

/* gap sub-block @ 0x5E30 (was gap+0xB58, 72 bytes) */
Gfx dStageYamabukiFile2_DL_0x5E30[9] = {
	#include <StageYamabukiFile2/DL_0x5E30.dl.inc.c>
};

/* gap sub-block @ 0x5E78 (was gap+0xBA0, 1528 bytes) */
Gfx dStageYamabukiFile2_DL_0x5E78[191] = {
	#include <StageYamabukiFile2/DL_0x5E78.dl.inc.c>
};

/* gap sub-block @ 0x6470 (was gap+0x1198, 152 bytes) */
Gfx dStageYamabukiFile2_DL_0x6470[19] = {
	#include <StageYamabukiFile2/DL_0x6470.dl.inc.c>
};

/* gap sub-block @ 0x6508 (was gap+0x1230, 328 bytes) */
Gfx dStageYamabukiFile2_DL_0x6508[41] = {
	#include <StageYamabukiFile2/DL_0x6508.dl.inc.c>
};

/* gap sub-block @ 0x6650 (was gap+0x1378, 128 bytes) */
Gfx dStageYamabukiFile2_DL_0x6650[16] = {
	#include <StageYamabukiFile2/DL_0x6650.dl.inc.c>
};

/* gap sub-block @ 0x66D0 (was gap+0x13F8, 312 bytes) */
Gfx dStageYamabukiFile2_DL_0x66D0[39] = {
	#include <StageYamabukiFile2/DL_0x66D0.dl.inc.c>
};

/* gap sub-block @ 0x6808 (was gap+0x1530, 176 bytes) */
Gfx dStageYamabukiFile2_DL_0x6808[22] = {
	#include <StageYamabukiFile2/DL_0x6808.dl.inc.c>
};

/* gap sub-block @ 0x68B8 (was gap+0x15E0, 56 bytes) */
Gfx dStageYamabukiFile2_DL_0x68B8[7] = {
	#include <StageYamabukiFile2/DL_0x68B8.dl.inc.c>
};

/* gap sub-block @ 0x68F0 (was gap+0x1618, 48 bytes) */
Gfx dStageYamabukiFile2_DL_0x68F0[6] = {
	#include <StageYamabukiFile2/DL_0x68F0.dl.inc.c>
};

/* gap sub-block @ 0x6920 (was gap+0x1648, 96 bytes) */
Gfx dStageYamabukiFile2_DL_0x6920[12] = {
	#include <StageYamabukiFile2/DL_0x6920.dl.inc.c>
};

/* gap sub-block @ 0x6980 (was gap+0x16A8, 112 bytes) */
Gfx dStageYamabukiFile2_DL_0x6980[14] = {
	#include <StageYamabukiFile2/DL_0x6980.dl.inc.c>
};

/* DObjDLLink @ 0x1718 (2 entries) */
DObjDLLink dStageYamabukiFile2_DLLink_0x69F0[] = {
	{ 0, dStageYamabukiFile2_DL_0x5E30 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x6A00 (was gap+0x1728) */
DObjDLLink dStageYamabukiFile2_gap_0x52D8_sub_0x1728[2] = {
	{ 0, dStageYamabukiFile2_DL_0x6470 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x6A10 (was gap+0x1738) */
DObjDLLink dStageYamabukiFile2_gap_0x52D8_sub_0x1738[2] = {
	{ 1, dStageYamabukiFile2_DL_0x68B8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x6A20 (was gap+0x1748) */
DObjDLLink dStageYamabukiFile2_gap_0x52D8_sub_0x1748[3] = {
	{ 0, dStageYamabukiFile2_DL_0x6508 },
	{ 1, dStageYamabukiFile2_DL_0x6920 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x6A38 (was gap+0x1760) */
DObjDLLink dStageYamabukiFile2_gap_0x52D8_sub_0x1760[2] = {
	{ 0, dStageYamabukiFile2_DL_0x6650 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x6A48 (was gap+0x1770) */
DObjDLLink dStageYamabukiFile2_gap_0x52D8_sub_0x1770[3] = {
	{ 0, dStageYamabukiFile2_DL_0x66D0 },
	{ 1, dStageYamabukiFile2_DL_0x6980 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x6A60 (was gap+0x1788) */
DObjDLLink dStageYamabukiFile2_gap_0x52D8_sub_0x1788[2] = {
	{ 0, dStageYamabukiFile2_DL_0x6808 },
	{ 4, NULL },
};

/* DObjDesc: Layer1DObj @ 0x6A70 (10 entries, terminated by { 18, ... } sentinel
 * at +0x158 = 0x6BC8; the 8 trailing entries were previously split off as
 * `gap_0x6AC8` but they form one continuous scene-graph walk). */
DObjDesc dStageYamabukiFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_DLLink_0x69F0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	/* +0x58 (file 0x6AC8): continuation. */
	{ 8194, (void*)dStageYamabukiFile2_gap_0x52D8_sub_0x1728, { 1784.4000244140625f, 802.0511474609375f, -426.7783203125f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 1740.0f, 360.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_gap_0x52D8_sub_0x1738, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_gap_0x52D8_sub_0x1748, { -2325.599853515625f, 840.0f, -76.02198028564453f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageYamabukiFile2_gap_0x52D8_sub_0x1760, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_gap_0x52D8_sub_0x1770, { -4173.40380859375f, -900.0f, -76.02198028564453f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageYamabukiFile2_gap_0x52D8_sub_0x1788, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* MPVertexData[31] @ 0x6C28 — vertex positions (MPGeometryData.vertex_data); 2 bytes pad */
MPVertexData dStageYamabukiFile2_gap_0x6AC8_sub_0x160[31] = {
	{ {   1980, -10080 }, 0x0000 },
	{ {   1980,    810 }, 0x8004 },
	{ {   1470,    810 }, 0x0000 },
	{ {    960,    810 }, 0x0000 },
	{ {    960,    720 }, 0x0000 },
	{ {   1890,    720 }, 0x0000 },
	{ {   1890,      0 }, 0x000E },
	{ {    797,      0 }, 0x8000 },
	{ {    607,      0 }, 0x8000 },
	{ {    366,    -44 }, 0x8000 },
	{ {   -327,   -312 }, 0x8000 },
	{ {   -632,   -368 }, 0x8000 },
	{ {  -1653,   -368 }, 0x0000 },
	{ {  -1653, -10079 }, 0x0000 },
	{ {   2672, -10079 }, 0x0000 },
	{ {   2671,  -4810 }, 0x0000 },
	{ {   2670,    459 }, 0x8000 },
	{ {   3641,    458 }, 0x0000 },
	{ {   3641,  -4810 }, 0x0000 },
	{ {   3641, -10079 }, 0x0000 },
	{ {  -2460, -10080 }, 0x0000 },
	{ {  -2460,  -1620 }, 0x8000 },
	{ {  -3600,  -1620 }, 0x0000 },
	{ {  -3600, -10080 }, 0x0000 },
	{ {      0,   -360 }, 0x0000 },
	{ {      0,    -14 }, 0x0000 },
	{ {      0,    360 }, 0x0000 },
	{ {    527,    165 }, 0x4000 },
	{ {   -552,    165 }, 0x0000 },
	{ {    474,    336 }, 0x4000 },
	{ {   -586,     43 }, 0x0000 },
};

/* MPVertexArray (42 IDs) @ 0x6CE4 — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageYamabukiFile2_gap_0x6AC8_sub_0x21C[42] = {
	  1,   2,   3,  16,  17,   6,   7,   8,   9,  10,  11,  12,  21,  22,   4,   5,
	 17,  18,  19,   0,   1,  20,  21,  22,  23,  12,  13,   3,   4,   5,   6,  14,
	 15,  16,  24,  25,  26,  27,  28,  29,  30,   0,
};

/* MPVertexLinks[16] @ 0x6D38 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageYamabukiFile2_gap_0x6AC8_sub_0x270[16] = {
	{   0, 3 }, {   3, 2 }, {   5, 7 }, {  12, 2 }, {  14, 2 }, {  16, 3 },
	{  19, 2 }, {  21, 2 }, {  23, 2 }, {  25, 2 }, {  27, 2 }, {  29, 2 },
	{  31, 3 }, {  34, 3 }, {  37, 2 }, {  39, 2 },
};

/* MPLineInfo[4] @ 0x6D78 — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageYamabukiFile2_gap_0x6AC8_sub_0x2B0[4] = {
	{ 1, { {  0,   4}, {  4,   1}, {  5,   3}, {  8,   5} } },
	{ 3, { { 13,   0}, { 13,   0}, { 13,   0}, { 13,   1} } },
	{ 5, { { 14,   1}, { 15,   0}, { 15,   0}, { 15,   0} } },
	{ 7, { { 15,   1}, { 16,   0}, { 16,   0}, { 16,   0} } },
};

/* MPMapObjData[34] @ 0x6DC0 — map objects (MPGeometryData.mapobjs) */
MPMapObjData dStageYamabukiFile2_gap_0x6AC8_sub_0x2F8[34] = {
	{  37, {  1470,   930 } },
	{  33, {  -960,  -240 } },
	{  45, {  1470,   930 } },
	{  44, {  -960,  -240 } },
	{  24, {  -510,  -240 } },
	{  25, {     0,   -30 } },
	{  26, {   705,   165 } },
	{  27, {  1455,   945 } },
	{  28, {  3135,   585 } },
	{  29, { -3030, -1425 } },
	{  30, { -1440,  -210 } },
	{  31, { -2340,  1140 } },
	{   4, {  1161,  1670 } },
	{   4, {   401,   822 } },
	{   4, { -2417,  8355 } },
	{   4, {  -978,   143 } },
	{   4, {  -156,   492 } },
	{   4, {  3221,  5300 } },
	{   4, {   136,  7137 } },
	{   4, { -1222,  1180 } },
	{   4, { -4260,  -120 } },
	{   4, { -3054, -1104 } },
	{   4, {  3210,  1020 } },
	{  21, { -2940,  4170 } },
	{  18, {  1500,   360 } },
	{  17, {  1290,   255 } },
	{  14, {  1320,   270 } },
	{  16, {  1260,   225 } },
	{  15, {  1365,   270 } },
	{   0, {  1200,   810 } },
	{   1, {  -660,  -270 } },
	{   2, {   510,    90 } },
	{   3, { -1200,  -270 } },
	{  32, {     0,  1150 } },
};

/* MPGeometryData @ 0x6E8C (28 bytes + 8 bytes pad) */
MPGeometryData dStageYamabukiFile2_MPGeometryData_0x6E8C = {
	4,
	(MPVertexPosContainer*)dStageYamabukiFile2_gap_0x6AC8_sub_0x160,
	(MPVertexArray*)dStageYamabukiFile2_gap_0x6AC8_sub_0x21C,
	dStageYamabukiFile2_gap_0x6AC8_sub_0x270,
	dStageYamabukiFile2_gap_0x6AC8_sub_0x2B0,
	34,
	(MPMapObjContainer*)dStageYamabukiFile2_gap_0x6AC8_sub_0x2F8,
};
PAD(8);

/* Raw data from file offset 0x6EB0 to 0x7000 (336 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dStageYamabukiFile2_Layer1Anim_AnimJoint[9] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6ED4,
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6F8C,
	NULL,
};

u32 dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6ED4[] = {
	aobjEvent32SetValRate(0x020, 0),
	    0x44520000,  /* 840.0f */
	    0xC08C0925,  /* -4.3761162757873535f */
	aobjEvent32SetValAfterBlock(0x3D7, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xC5115999,  /* -2325.599853515625f */
	    0xC2980B41,  /* -76.02198028564453f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0x44160000,  /* 600.0f */
	aobjEvent32SetValRateBlock(0x020, 70),
	    0x44160000,  /* 600.0f */
	    0xC13ECD0B,  /* -11.92505931854248f */
	aobjEvent32SetValRateBlock(0x020, 13),
	    0x43D20000,  /* 420.0f */
	    0xC1B0D982,  /* -22.106204986572266f */
	aobjEvent32SetValRateBlock(0x020, 25),
	    0xC4070000,  /* -540.0f */
	    0xC0FFFA2E,  /* -7.999289512634277f */
	aobjEvent32SetVal0RateBlock(0x020, 32),
	    0xC3C30000,  /* -390.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0xC4070000,  /* -540.0f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0xC3C30000,  /* -390.0f */
	aobjEvent32SetValRateBlock(0x020, 30),
	    0xC4070000,  /* -540.0f */
	    0xBF313B12,  /* -0.6923075914382935f */
	aobjEvent32SetValRateBlock(0x020, 35),
	    0xC3D98000,  /* -435.0f */
	    0x40A805FB,  /* 5.250730037689209f */
	aobjEvent32SetValRateBlock(0x020, 15),
	    0xC3700000,  /* -240.0f */
	    0x41D09D89,  /* 26.076921463012695f */
	aobjEvent32SetValRateBlock(0x020, 50),
	    0x44610000,  /* 900.0f */
	    0xC02D8145,  /* -2.711014986038208f */
	aobjEvent32SetValRateBlock(0x020, 30),
	    0x44520000,  /* 840.0f */
	    0xC0759225,  /* -3.8370449542999268f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6ED4),
};

u32 dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6F8C[] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC4610000,  /* -900.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC5826B3B,  /* -4173.40380859375f */
	    0xC2980B41,  /* -76.02198028564453f */
	aobjEvent32SetValRateBlock(0x020, 42),
	    0xC4520000,  /* -840.0f */
	    0x3FF45D17,  /* 1.9090908765792847f */
	aobjEvent32SetValRateBlock(0x020, 68),
	    0xC42C8000,  /* -690.0f */
	    0xBF1E59BC,  /* -0.6185567378997803f */
	aobjEvent32SetValRateBlock(0x020, 29),
	    0xC4610000,  /* -900.0f */
	    0xC1828000,  /* -16.3125f */
	aobjEvent32SetValRateBlock(0x020, 51),
	    0xC4F96000,  /* -1995.0f */
	    0xC0A238E3,  /* -5.069444179534912f */
	aobjEvent32SetValRateBlock(0x020, 165),
	    0xC4F96000,  /* -1995.0f */
	    0x40CB40F6,  /* 6.351679801940918f */
	aobjEvent32SetValRateBlock(0x020, 20),
	    0xC4D98000,  /* -1740.0f */
	    0x4186C4EB,  /* 16.84615135192871f */
	aobjEvent32SetValRateBlock(0x020, 45),
	    0xC4610000,  /* -900.0f */
	    0x40671CDD,  /* 3.6111366748809814f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageYamabukiFile2_Layer1Anim_AnimJoint_0x6F8C),
	aobjEvent32End(),
};

/* Raw data from file offset 0x7000 to 0x8718 (5912 bytes) */
/* Pointer-table split fallback: chain-pointer table at the
 * head of the array, followed by raw data containing every
 * referenced (and orphan) script. The data block is dumped
 * as one u8[] include; fixRelocChain rewrites the table
 * entries to chain-encoded form per the .reloc. */
extern AObjEvent32 * dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x908[];
extern AObjEvent32 * dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x90C[];
AObjEvent32 **dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint[9] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x908,
	NULL,
	dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x90C,
	NULL,
};

/* Split AnimJoint blob: forward decls for sub-scripts. */
extern u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data[289];
extern u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x484[289];
extern AObjEvent32 * dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x908[1];
extern AObjEvent32 * dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x90C[1];
extern Gfx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xF4C[227];
extern Gfx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664[14];

u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data[289] = {
	aobjEvent32SetValAfterBlock(0x01E, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data,
};

u32 dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x484[289] = {
	aobjEvent32SetValAfterBlock(0x01E, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x484,
};

AObjEvent32 * dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x908[1] = {
	(AObjEvent32 *)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data,
};

AObjEvent32 * dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x90C[1] = {
	(AObjEvent32 *)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x484,
};
PAD(12);

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x91C[8] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0x91C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x99C[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0x99C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x9DC[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0x9DC.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xA1C[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xA1C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xA5C[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xA5C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xA9C[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xA9C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xADC[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xADC.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xB1C[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xB1C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xB5C[8] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xB5C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xBDC[8] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xBDC.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xC5C[8] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xC5C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xCDC[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xCDC.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xD1C[5] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xD1C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xD6C[5] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xD6C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xDBC[6] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xDBC.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xE1C[5] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xE1C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xE6C[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xE6C.vtx.inc.c>
};

Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xEAC[4] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xEAC.vtx.inc.c>
};

/* Vtx[6] — vertex pool for DL _0x1664 (gsSPVertex(_0xEEC, 6, 0)) */
Vtx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xEEC[6] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xEEC.vtx.inc.c>
};

Gfx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xF4C[227] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0xF4C.dl.inc.c>
};

Gfx dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664[14] = {
	#include <StageYamabukiFile2/Layer1MatAnim_MatAnimJoint_data_0x1664.dl.inc.c>
};
/* DObjDLLink arrays embedded after the DL — Layer3DObj dl targets */
DObjDLLink dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664_link0[2] = {
	{ 0, dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0xF4C },
	{ 4, NULL },
};
DObjDLLink dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664_link1[2] = {
	{ 1, dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664 },
	{ 4, NULL },
};

/* DObjDesc: Layer3DObj @ 0x8718 (4 entries) */
DObjDesc dStageYamabukiFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664_link0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageYamabukiFile2_Layer1MatAnim_MatAnimJoint_data_0x1664_link1, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x87C8 to 0x10270 (31400 bytes) */
/* gap sub-block @ 0x87C8 (was gap+0x0, 136 bytes) */
/* gap_0x87C8 @ 0x87C8 — PAD + 3 identical TLUTs */
PAD(16);
u16 dStageYamabukiFile2_gap_0x87C8_palette_0x10[16] = { 0x4250, 0x5AFF, 0x7BE3, 0xC571, 0xACE9, 0xE3E3, 0xAC65, 0x94AB, 0x8C69, 0xFFFF, 0xFFFF, 0xE7FF, 0xCEF7, 0x9EF7, 0x856B, 0xAD6F };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_palette_0x38[16] = { 0x4250, 0x5AFF, 0x7BE3, 0xC571, 0xACE9, 0xE3E3, 0xAC65, 0x94AB, 0x8C69, 0xFFFF, 0xFFFF, 0xE7FF, 0xCEF7, 0x9EF7, 0x856B, 0xAD6F };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_palette_0x60[16] = { 0x4250, 0x5AFF, 0x7BE3, 0xC571, 0xACE9, 0xE3E3, 0xAC65, 0x94AB, 0x8C69, 0xFFFF, 0xFFFF, 0xE7FF, 0xCEF7, 0x9EF7, 0x856B, 0xAD6F };
PAD(8);

/* gap sub-block @ 0x8850 (was gap+0x88, 40 bytes) */
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x88[16] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x88.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=16x121 */
u8 dStageYamabukiFile2_Tex_0x8878[968] = {
	#include <StageYamabukiFile2/Tex_0x8878.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x121 */
u8 dStageYamabukiFile2_Tex_0x8C40[968] = {
	#include <StageYamabukiFile2/Tex_0x8C40.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x121 */
u8 dStageYamabukiFile2_Tex_0x9008[968] = {
	#include <StageYamabukiFile2/Tex_0x9008.tex.inc.c>
};

/* @tex fmt=CI4 dim=48x40 */
u8 dStageYamabukiFile2_Tex_0x93D0[0x3C0] = {
	#include <StageYamabukiFile2/Tex_0x93D0.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYamabukiFile2_data_0x9794[1] = { dStageYamabukiFile2_gap_0x87C8_sub_0x1058 };


/* u32 pointer array @ 0x9798 (4 entries) */
void *dStageYamabukiFile2_gap_0x87C8_sub_0xFD0[4] = {
	(void *)dStageYamabukiFile2_Tex_0x93D0,
	(void *)dStageYamabukiFile2_Tex_0x9008,
	(void *)dStageYamabukiFile2_Tex_0x8C40,
	(void *)dStageYamabukiFile2_Tex_0x8878,
};

/* MObjSub @ 0x97A8 */
MObjSub dStageYamabukiFile2_gap_0x87C8_sub_0xFE0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYamabukiFile2_gap_0x87C8_sub_0xFD0,
		0x0020, 0x0000, 0x0028, 0x0028,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0028,
		0x0028, 0x0028, 0x0028,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x9820 (was gap+0x1058, 8 bytes) */
MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x1058[2] = {
	(MObjSub *)dStageYamabukiFile2_gap_0x87C8_sub_0xFE0,
	NULL,
};

/* gap sub-block @ 0x9828 (was gap+0x1060, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x1060[4] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1060.vtx.inc.c>
};

/* Gfx DL: gap_0x87C8_sub_0x10A0 @ 0x9868 (30 cmds) */
Gfx dStageYamabukiFile2_gap_0x87C8_sub_0x10A0[30] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x10A0.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x9958 (144 bytes) */
extern u32 dStageYamabukiFile2_gap_0x87C8_sub_0x1220[];
/* sub_0x10A0_post — DObjDesc[3] + AObjEvent32*[3] table */
DObjDesc dStageYamabukiFile2_gap_0x87C8_sub_0x10A0_post[3] = {
	{ 0, (void*)0x00000000, { -1200.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16385, (void*)dStageYamabukiFile2_gap_0x87C8_sub_0x10A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x10A0_tbl[3] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x1220,
	NULL,
};

/* gap sub-block @ 0x99E8 (was gap+0x1220, 992 bytes) */
extern AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x19D0[4];
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x1220[246] = {
	aobjEvent32SetValRate(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xC091ACC3,  /* -4.55233907699585f */
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 8),
	    0xC2340000,  /* -45.0f */
	    0xC0296969,  /* -2.6470587253570557f */
	aobjEvent32SetValRateBlock(0x020, 6),
	    0x41F00000,  /* 30.0f */
	    0x3FA00000,  /* 1.25f */
	aobjEvent32SetValRate(0x020, 6),
	    0x41700000,  /* 15.0f */
	    0xBEA17AF0,  /* -0.31539106369018555f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 9),
	    0xC2340000,  /* -45.0f */
	    0xC076DB6D,  /* -3.857142686843872f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x020, 6),
	    0x42340000,  /* 45.0f */
	    0x406B28B6,  /* 3.6743597984313965f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x010, 5),
	    0xC2C60000,  /* -99.0f */
	    0xC051745D,  /* -3.2727272510528564f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 8),
	    0x42700000,  /* 60.0f */
	    0x40700001,  /* 3.750000238418579f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 6),
	    0xC2A20000,  /* -81.0f */
	    0xBFCCCCCC,  /* -1.5999999046325684f */
	aobjEvent32Wait(4),
	aobjEvent32SetVal0Rate(0x020, 4),
	    0x42B40000,  /* 90.0f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 9),
	    0xC2F60000,  /* -123.0f */
	    0xC1055556,  /* -8.333333969116211f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x020, 5),
	    0x42700000,  /* 60.0f */
	    0xC0A00001,  /* -5.000000476837158f */
	aobjEvent32SetValRate(0x020, 7),
	    0x41F00000,  /* 30.0f */
	    0xC0C7FFFD,  /* -6.249998569488525f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 9),
	    0xC3670000,  /* -231.0f */
	    0xC1045BE3,  /* -8.272433280944824f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x020, 5),
	    0xC1700000,  /* -15.0f */
	    0xC0C80001,  /* -6.250000476837158f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 13),
	    0xC3888000,  /* -273.0f */
	    0xC0A33334,  /* -5.100000381469727f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 7),
	    0xC2340000,  /* -45.0f */
	    0xC0B40003,  /* -5.625001430511475f */
	aobjEvent32SetValRate(0x020, 9),
	    0xC2D20000,  /* -105.0f */
	    0xBF9FFFFE,  /* -1.249999761581421f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x010, 7),
	    0xC3A68000,  /* -333.0f */
	    0xC106FFFF,  /* -8.437499046325684f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x020, 3),
	    0xC2700000,  /* -60.0f */
	    0x40AE8B9F,  /* 5.454543590545654f */
	aobjEvent32SetValRate(0x010, 9),
	    0xC3CBFFFF,  /* -407.9999694824219f */
	    0xC037A6F4,  /* -2.869565010070801f */
	aobjEvent32SetValRateBlock(0x020, 8),
	    0xC2340000,  /* -45.0f */
	    0x40700006,  /* 3.7500014305114746f */
	aobjEvent32SetValRate(0x020, 4),
	    0xC1700000,  /* -15.0f */
	    0x405D89D6,  /* 3.4615378379821777f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x010, 14),
	    0xC3C78000,  /* -399.0f */
	    0xBFE9BD49,  /* -1.8260890245437622f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x020, 9),
	    0x00000000,  /* 0.0f */
	    0x408FFFFC,  /* 4.499998092651367f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41F00000,  /* 30.0f */
	    0x40B40001,  /* 5.625000476837158f */
	aobjEvent32SetValRate(0x020, 7),
	    0x42340000,  /* 45.0f */
	    0x405D89DE,  /* 3.4615397453308105f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x010, 9),
	    0xC3E10001,  /* -450.0000305175781f */
	    0xC02C633A,  /* -2.693556308746338f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 6),
	    0x42960000,  /* 75.0f */
	    0x3F892492,  /* 1.0714285373687744f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 5),
	    0xC4034000,  /* -525.0f */
	    0xC09B514A,  /* -4.853672981262207f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 8),
	    0x42700000,  /* 60.0f */
	    0x3F93B13A,  /* 1.153846025466919f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xC4178000,  /* -606.0f */
	    0xC0BDD044,  /* -5.931673049926758f */
	aobjEvent32SetValRate(0x010, 8),
	    0xC4267FFF,  /* -665.9999389648438f */
	    0xC096EDCF,  /* -4.716529369354248f */
	aobjEvent32SetValRateBlock(0x020, 5),
	    0x42B40000,  /* 90.0f */
	    0x4013B13F,  /* 2.3076932430267334f */
	aobjEvent32SetValRate(0x020, 8),
	    0x42B40000,  /* 90.0f */
	    0x40400003,  /* 3.0000007152557373f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 11),
	    0xC4340000,  /* -720.0f */
	    0x3E5B86B7,  /* 0.21438108384609222f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x020, 2),
	    0x42F00000,  /* 120.0f */
	    0x3FD5554C,  /* 1.6666655540466309f */
	aobjEvent32SetVal0Rate(0x020, 7),
	    0x42D20000,  /* 105.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 12),
	    0xC4448000,  /* -786.0f */
	    0xBFE98AA0,  /* -1.8245429992675781f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x020, 5),
	    0x42F00000,  /* 120.0f */
	    0x40B5571C,  /* 5.66688346862793f */
	aobjEvent32SetValRate(0x020, 7),
	    0x43250000,  /* 165.0f */
	    0x4013B13A,  /* 2.307692050933838f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 10),
	    0xC458C001,  /* -867.0000610351562f */
	    0xC08A58BD,  /* -4.3233323097229f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal0RateBlock(0x020, 6),
	    0x43160000,  /* 150.0f */
	aobjEvent32SetValRate(0x020, 6),
	    0x43250000,  /* 165.0f */
	    0x406FFFFC,  /* 3.7499990463256836f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x010, 15),
	    0xC4694001,  /* -933.0000610351562f */
	    0xC0071C6F,  /* -2.1111104488372803f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x020, 6),
	    0x43430000,  /* 195.0f */
	    0x404DB6DB,  /* 3.2142856121063232f */
	aobjEvent32SetValRate(0x020, 8),
	    0x43520000,  /* 210.0f */
	    0x404DB6DB,  /* 3.2142856121063232f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 12),
	    0xC4670001,  /* -924.0000610351562f */
	    0x40C58FEC,  /* 6.173818588256836f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x020, 6),
	    0x43700000,  /* 240.0f */
	    0x41055550,  /* 8.333328247070312f */
	aobjEvent32SetValRate(0x020, 3),
	    0x438E8000,  /* 285.0f */
	    0x40F0000F,  /* 7.500007152557373f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 9),
	    0xC4520000,  /* -840.0f */
	    0x40886BC8,  /* 4.263156890869141f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 5),
	    0x43960000,  /* 300.0f */
	    0xBFAE8B9F,  /* -1.3636358976364136f */
	aobjEvent32SetValRate(0x020, 6),
	    0x43870000,  /* 270.0f */
	    0xC08D2D2E,  /* -4.411765098571777f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x010, 10),
	    0xC452C001,  /* -843.0000610351562f */
	    0xBFCA1AEB,  /* -1.5789464712142944f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x020, 11),
	    0x43610000,  /* 225.0f */
	    0xC0CDB6DB,  /* -6.4285712242126465f */
	aobjEvent32Wait(7),
	aobjEvent32SetValRate(0x010, 9),
	    0xC4598000,  /* -870.0f */
	    0xBF7C5DF0,  /* -0.9858083724975586f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x020, 3),
	    0x43340000,  /* 180.0f */
	    0xC0EFFFF9,  /* -7.499996662139893f */
	aobjEvent32SetValRate(0x020, 7),
	    0x43160000,  /* 150.0f */
	    0xC0D55563,  /* -6.666673183441162f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x010, 12),
	    0xC4783FFF,  /* -992.9999389648438f */
	    0xC105174C,  /* -8.318187713623047f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x020, 2),
	    0x42F00000,  /* 120.0f */
	    0xC09FFFF9,  /* -4.999996662139893f */
	aobjEvent32SetValRate(0x020, 7),
	    0x42D20000,  /* 105.0f */
	    0xC082E8B7,  /* -4.090907573699951f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x010, 10),
	    0xC483A001,  /* -1053.0001220703125f */
	    0xC0C60001,  /* -6.187500476837158f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x42960000,  /* 75.0f */
	    0xC0800000,  /* -4.0f */
	aobjEvent32SetValRate(0x020, 11),
	    0x42340000,  /* 45.0f */
	    0xC08D2D2E,  /* -4.411765098571777f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x010, 6),
	    0xC4888000,  /* -1092.0f */
	    0xC10FFFFC,  /* -8.999996185302734f */
	aobjEvent32SetValRate(0x010, 4),
	    0xC48EE001,  /* -1143.0001220703125f */
	    0xC176DB76,  /* -15.428579330444336f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x020, 6),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal0RateBlock(0x010, 3),
	    0xC4960000,  /* -1200.0f */
	aobjEvent32End(),
};
PAD(4);
AObjEvent32 **dStageYamabukiFile2_gap_0x87C8_sub_0x1220_loop[1] = {
	dStageYamabukiFile2_gap_0x87C8_sub_0x19D0,
};

/* gap sub-block @ 0x9DC8 (was gap+0x1600, 976 bytes) */
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x1600[244] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYamabukiFile2_gap_0x87C8_sub_0x1600,
};

/* gap sub-block @ 0xA198 (was gap+0x19D0, 216 bytes) */
/* gap_0x87C8_sub_0x19D0 — AObjEvent32*[4] loopback table + 5 TLUTs */
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x19D0[4] = { (AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x1600, NULL, NULL, NULL };
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x19D0_palette_0[16] = { 0x6800, 0xFFD1, 0xFFD1, 0xFFD1, 0xFF91, 0xFED1, 0xFF91, 0xFE51, 0xFE59, 0xFE13, 0xFD93, 0xFCD3, 0xFC91, 0xF3D1, 0xE351, 0xD351 };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x19D0_palette_1[16] = { 0x6800, 0xFFD1, 0xFFD1, 0xFFD1, 0xFF91, 0xFED1, 0xFF91, 0xFE51, 0xFE59, 0xFE13, 0xFD93, 0xFCD3, 0xFC91, 0xF3D1, 0xE351, 0xD351 };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x19D0_palette_2[16] = { 0x6800, 0xFFD1, 0xFFD1, 0xFFD1, 0xFF91, 0xFED1, 0xFF91, 0xFE51, 0xFE59, 0xFE13, 0xFD93, 0xFCD3, 0xFC91, 0xF3D1, 0xE351, 0xD351 };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x19D0_palette_3[16] = { 0x6800, 0xFFD1, 0xFFD1, 0xFFD1, 0xFF91, 0xFED1, 0xFF91, 0xFE51, 0xFE59, 0xFE13, 0xFD93, 0xFCD3, 0xFC91, 0xF3D1, 0xE351, 0xD351 };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x19D0_palette_4[16] = { 0x6800, 0xFFD1, 0xFFD1, 0xFFD1, 0xFF91, 0xFED1, 0xFF91, 0xFE51, 0xFE59, 0xFE13, 0xFD93, 0xFCD3, 0xFC91, 0xF3D1, 0xE351, 0xD351 };
PAD(8);

/* gap sub-block @ 0xA270 (was gap+0x1AA8, 40 bytes) */
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x1AA8[16] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x1AA8.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=16x193 */
u8 dStageYamabukiFile2_Tex_0xA298[1544] = {
	#include <StageYamabukiFile2/Tex_0xA298.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x193 */
u8 dStageYamabukiFile2_Tex_0xA8A0[1544] = {
	#include <StageYamabukiFile2/Tex_0xA8A0.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x193 */
u8 dStageYamabukiFile2_Tex_0xAEA8[1544] = {
	#include <StageYamabukiFile2/Tex_0xAEA8.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x193 */
u8 dStageYamabukiFile2_Tex_0xB4B0[1544] = {
	#include <StageYamabukiFile2/Tex_0xB4B0.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x193 */
u8 dStageYamabukiFile2_Tex_0xBAB8[1544] = {
	#include <StageYamabukiFile2/Tex_0xBAB8.tex.inc.c>
};

/* @tex fmt=CI4 dim=8x385 */
u8 dStageYamabukiFile2_Tex_0xC0C0[0x604] = {
	#include <StageYamabukiFile2/Tex_0xC0C0.tex.inc.c>
};

MObjSub ** dStageYamabukiFile2_data_0xC6C4[1] = { dStageYamabukiFile2_gap_0x87C8_sub_0x3F90 };


/* u32 pointer array @ 0xC6C8 (6 entries) */
void *dStageYamabukiFile2_gap_0x87C8_sub_0x3F00[6] = {
	(void *)dStageYamabukiFile2_Tex_0xC0C0,
	(void *)dStageYamabukiFile2_Tex_0xBAB8,
	(void *)dStageYamabukiFile2_Tex_0xB4B0,
	(void *)dStageYamabukiFile2_Tex_0xAEA8,
	(void *)dStageYamabukiFile2_Tex_0xA8A0,
	(void *)dStageYamabukiFile2_Tex_0xA298,
};

/* MObjSub @ 0xC6E0 */
MObjSub dStageYamabukiFile2_gap_0x87C8_sub_0x3F18[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYamabukiFile2_gap_0x87C8_sub_0x3F00,
		0x0020, 0x0000, 0x0028, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0028,
		0x0040, 0x0028, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0xC758 (was gap+0x3F90, 8 bytes) */
MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x3F90[2] = {
	(MObjSub *)dStageYamabukiFile2_gap_0x87C8_sub_0x3F18,
	NULL,
};

/* gap sub-block @ 0xC760 (was gap+0x3F98, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x3F98[4] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3F98.vtx.inc.c>
};

/* Gfx DL: gap_0x87C8_sub_0x3FD8 @ 0xC7A0 (30 cmds) */
Gfx dStageYamabukiFile2_gap_0x87C8_sub_0x3FD8[30] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x3FD8.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0xC890 (152 bytes) */
extern u32 dStageYamabukiFile2_gap_0x87C8_sub_0x4160[];
/* sub_0x3FD8_post — DObjDesc[3] + AObjEvent32*[5] table */
DObjDesc dStageYamabukiFile2_gap_0x87C8_sub_0x3FD8_post[3] = {
	{ 0, (void*)0x00000000, { -2181.818115234375f, 80.43158721923828f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16385, (void*)dStageYamabukiFile2_gap_0x87C8_sub_0x3FD8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.5f, 1.5f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x3FD8_tbl[5] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x4160,
	NULL,
};

/* gap sub-block @ 0xC928 (was gap+0x4160, 192 bytes) */
extern AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x42F0[4];
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x4160[45] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 0),
	    0x00000000,  /* 0.0f */
	    0xC0013B14,  /* -2.019230842590332f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 264),
	    0xC5160000,  /* -2400.0f */
	aobjEvent32SetValRateBlock(0x020, 13),
	    0x41700000,  /* 15.0f */
	    0x408E38E4,  /* 4.44444465637207f */
	aobjEvent32SetValRateBlock(0x020, 14),
	    0x42F00000,  /* 120.0f */
	    0x3BC060C1,  /* 0.005870908964425325f */
	aobjEvent32SetValRateBlock(0x020, 39),
	    0x00000000,  /* 0.0f */
	    0xBC160F3B,  /* -0.009158904664218426f */
	aobjEvent32SetValRateBlock(0x020, 13),
	    0x41700000,  /* 15.0f */
	    0x408E38E5,  /* 4.4444451332092285f */
	aobjEvent32SetValRateBlock(0x020, 14),
	    0x42F00000,  /* 120.0f */
	    0x3BBB0DC3,  /* 0.005708427634090185f */
	aobjEvent32SetValRateBlock(0x020, 39),
	    0x00000000,  /* 0.0f */
	    0xBC08755E,  /* -0.008328763768076897f */
	aobjEvent32SetValRateBlock(0x020, 13),
	    0x41700000,  /* 15.0f */
	    0x408E38E3,  /* 4.444444179534912f */
	aobjEvent32SetValRateBlock(0x020, 14),
	    0x42F00000,  /* 120.0f */
	    0x3BA9FC86,  /* 0.005187573842704296f */
	aobjEvent32SetValRateBlock(0x020, 39),
	    0x00000000,  /* 0.0f */
	    0xBC050668,  /* -0.00811920315027237f */
	aobjEvent32SetValRateBlock(0x020, 13),
	    0x41700000,  /* 15.0f */
	    0x408E38E3,  /* 4.444444179534912f */
	aobjEvent32SetValRateBlock(0x020, 14),
	    0x42F00000,  /* 120.0f */
	    0x3BB2FD5A,  /* 0.005462330766022205f */
	aobjEvent32SetVal0RateBlock(0x020, 39),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
AObjEvent32 **dStageYamabukiFile2_gap_0x87C8_sub_0x4160_loop[1] = {
	dStageYamabukiFile2_gap_0x87C8_sub_0x42F0,
};

/* gap sub-block @ 0xC9E8 (was gap+0x4220, 208 bytes) */
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x4220[52] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 15),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 11),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 15),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 11),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 15),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 11),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 7),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 15),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 13),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 11),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYamabukiFile2_gap_0x87C8_sub_0x4220,
};

/* gap sub-block @ 0xCAB8 (was gap+0x42F0, 176 bytes) */
/* gap_0x87C8_sub_0x42F0 — AObjEvent32*[4] loopback table + 4 TLUTs */
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x42F0[4] = { (AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x4220, NULL, NULL, NULL };
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x42F0_palette_0[16] = { 0x6B58, 0xFFF5, 0xFFEF, 0xFF6B, 0xEF2B, 0xD669, 0xFE99, 0xEE17, 0xD597, 0xB55F, 0xBD17, 0xAC55, 0x9417, 0xFFFF, 0xB5A9, 0xFEEF };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x42F0_palette_1[16] = { 0x6B58, 0xFFF5, 0xFFEF, 0xFF6B, 0xEF2B, 0xD669, 0xFE99, 0xEE17, 0xD597, 0xB55F, 0xBD17, 0xAC55, 0x9417, 0xFFFF, 0xB5A9, 0xFEEF };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x42F0_palette_2[16] = { 0x6B58, 0xFFF5, 0xFFEF, 0xFF6B, 0xEF2B, 0xD669, 0xFE99, 0xEE17, 0xD597, 0xB55F, 0xBD17, 0xAC55, 0x9417, 0xFFFF, 0xB5A9, 0xFEEF };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x42F0_palette_3[16] = { 0x6B58, 0xFFF5, 0xFFEF, 0xFF6B, 0xEF2B, 0xD669, 0xFE99, 0xEE17, 0xD597, 0xB55F, 0xBD17, 0xAC55, 0x9417, 0xFFFF, 0xB5A9, 0xFEEF };
PAD(8);

/* gap sub-block @ 0xCB68 (was gap+0x43A0, 40 bytes) */
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x43A0[16] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x43A0.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=16x145 */
u8 dStageYamabukiFile2_Tex_0xCB90[1160] = {
	#include <StageYamabukiFile2/Tex_0xCB90.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x145 */
u8 dStageYamabukiFile2_Tex_0xD018[1160] = {
	#include <StageYamabukiFile2/Tex_0xD018.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x145 */
u8 dStageYamabukiFile2_Tex_0xD4A0[1160] = {
	#include <StageYamabukiFile2/Tex_0xD4A0.tex.inc.c>
};

/* @tex fmt=CI4 dim=16x145 */
u8 dStageYamabukiFile2_Tex_0xD928[1160] = {
	#include <StageYamabukiFile2/Tex_0xD928.tex.inc.c>
};

/* @tex fmt=CI4 dim=48x48 */
u8 dStageYamabukiFile2_Tex_0xDDB0[0x480] = {
	#include <StageYamabukiFile2/Tex_0xDDB0.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYamabukiFile2_data_0xE234[1] = { dStageYamabukiFile2_gap_0x87C8_sub_0x5B00 };


/* u32 pointer array @ 0xE238 (6 entries) */
void *dStageYamabukiFile2_gap_0x87C8_sub_0x5A70[5] = {
	(void *)dStageYamabukiFile2_Tex_0xDDB0,
	(void *)dStageYamabukiFile2_Tex_0xD928,
	(void *)dStageYamabukiFile2_Tex_0xD4A0,
	(void *)dStageYamabukiFile2_Tex_0xD018,
	(void *)dStageYamabukiFile2_Tex_0xCB90,
};
PAD(4);

/* MObjSub @ 0xE250 */
MObjSub dStageYamabukiFile2_gap_0x87C8_sub_0x5A88[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYamabukiFile2_gap_0x87C8_sub_0x5A70,
		0x0020, 0x0000, 0x0028, 0x0030,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0028,
		0x0030, 0x0028, 0x0030,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0xE2C8 (was gap+0x5B00, 8 bytes) */
MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x5B00[2] = {
	(MObjSub *)dStageYamabukiFile2_gap_0x87C8_sub_0x5A88,
	NULL,
};

/* gap sub-block @ 0xE2D0 (was gap+0x5B08, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x5B08[4] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5B08.vtx.inc.c>
};

/* Gfx DL: gap_0x87C8_sub_0x5B48 @ 0xE310 (30 cmds) */
Gfx dStageYamabukiFile2_gap_0x87C8_sub_0x5B48[30] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5B48.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0xE400 (152 bytes) */
extern u32 dStageYamabukiFile2_gap_0x87C8_sub_0x5CD0[];
/* sub_0x5B48_post — DObjDesc[3] + AObjEvent32*[5] table */
DObjDesc dStageYamabukiFile2_gap_0x87C8_sub_0x5B48_post[3] = {
	{ 0, (void*)0x00000000, { -4966.01904296875f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16385, (void*)dStageYamabukiFile2_gap_0x87C8_sub_0x5B48, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.2000000476837158f, 1.2000000476837158f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x5B48_tbl[5] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x5CD0,
	NULL,
};

/* gap sub-block @ 0xE498 (was gap+0x5CD0, 304 bytes) */
extern AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x5F04[3];
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x5CD0[73] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xC1E67F2E,  /* -28.81209945678711f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 20),
	    0x42700000,  /* 60.0f */
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValRateBlock(0x010, 10),
	    0xC32DD6CD,  /* -173.8390655517578f */
	    0xC15D18CD,  /* -13.818554878234863f */
	aobjEvent32SetValRate(0x010, 46),
	    0xC44175B3,  /* -773.8390502929688f */
	    0xC1A00000,  /* -20.0f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42F00000,  /* 120.0f */
	    0x40400001,  /* 3.000000238418579f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42F00000,  /* 120.0f */
	    0x40400001,  /* 3.000000238418579f */
	aobjEvent32SetVal0Rate(0x020, 10),
	    0x43340000,  /* 180.0f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x010, 74),
	    0xC520DD6B,  /* -2573.838623046875f */
	    0xC0EADA90,  /* -7.339179992675781f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x020, 30),
	    0x42D20000,  /* 105.0f */
	    0xC0F7B5E4,  /* -7.74095344543457f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 20),
	    0x42700000,  /* 60.0f */
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRate(0x010, 46),
	    0xC5465D6B,  /* -3173.838623046875f */
	    0xC1A55EC2,  /* -20.671268463134766f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	    0x403FFFFA,  /* 2.9999985694885254f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42F00000,  /* 120.0f */
	    0x40400003,  /* 3.0000007152557373f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42F00000,  /* 120.0f */
	    0x40400003,  /* 3.0000007152557373f */
	aobjEvent32SetVal0Rate(0x020, 10),
	    0x43340000,  /* 180.0f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x010, 64),
	    0xC5977D6C,  /* -4847.677734375f */
	    0xC1C2983A,  /* -24.324329376220703f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x020, 30),
	    0x42D20000,  /* 105.0f */
	    0xC0E37D82,  /* -7.109070777893066f */
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 10),
	    0xC59B6EB5,  /* -4973.83837890625f */
	    0xC0FFDD05,  /* -7.995729923248291f */
	aobjEvent32SetValBlock(0x020, 9),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
AObjEvent32 **dStageYamabukiFile2_gap_0x87C8_sub_0x5CD0_loop[1] = {
	dStageYamabukiFile2_gap_0x87C8_sub_0x5F04,
};

/* gap sub-block @ 0xE5C8 (was gap+0x5E00, 260 bytes) */
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x5E00[65] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 64),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x001, 64),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(73),
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYamabukiFile2_gap_0x87C8_sub_0x5E00,
};

/* gap sub-block @ 0xE6CC (was gap+0x5F04, 132 bytes) */
/* gap_0x87C8_sub_0x5F04 — AObjEvent32*[3] loopback table + 3 TLUTs */
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x5F04[3] = { (AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x5E00, NULL, NULL };
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x5F04_palette_0[16] = { 0x6ACA, 0xFFEB, 0xFFFF, 0xF7A3, 0xE69F, 0xBD57, 0xCDDF, 0xAD1F, 0x8C1D, 0x4A7B, 0xFD0D, 0xDC8D, 0xA413, 0x8BD3, 0xFDAB, 0xC4A3 };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x5F04_palette_1[16] = { 0x6ACA, 0xFFEB, 0xFFFF, 0xF7A3, 0xE69F, 0xBD57, 0xCDDF, 0xAD1F, 0x8C1D, 0x4A7B, 0xFD0D, 0xDC8D, 0xA413, 0x8BD3, 0xFDAB, 0xC4A3 };
PAD(8);
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x5F04_palette_2[16] = { 0x6ACA, 0xFFEB, 0xFFFF, 0xF7A3, 0xE69F, 0xBD57, 0xCDDF, 0xAD1F, 0x8C1D, 0x4A7B, 0xFD0D, 0xDC8D, 0xA413, 0x8BD3, 0xFDAB, 0xC4A3 };
PAD(8);

/* gap sub-block @ 0xE750 (was gap+0x5F88, 40 bytes) */
u16 dStageYamabukiFile2_gap_0x87C8_sub_0x5F88[16] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x5F88.palette.inc.c>
};
PAD(8);

/* @tex fmt=CI4 dim=48x56 */
u8 dStageYamabukiFile2_Tex_0xE778[1352] = {
	#include <StageYamabukiFile2/Tex_0xE778.tex.inc.c>
};

/* @tex fmt=CI4 dim=48x56 */
u8 dStageYamabukiFile2_Tex_0xECC0[1352] = {
	#include <StageYamabukiFile2/Tex_0xECC0.tex.inc.c>
};

/* @tex fmt=CI4 dim=48x56 */
u8 dStageYamabukiFile2_Tex_0xF208[1352] = {
	#include <StageYamabukiFile2/Tex_0xF208.tex.inc.c>
};

/* @tex fmt=CI4 dim=48x56 */
u8 dStageYamabukiFile2_Tex_0xF750[0x540] = {
	#include <StageYamabukiFile2/Tex_0xF750.tex.inc.c>
};

PAD(4);

MObjSub ** dStageYamabukiFile2_data_0xFC94[1] = { dStageYamabukiFile2_gap_0x87C8_sub_0x7558 };


/* u32 pointer array @ 0xFC98 (4 entries) */
void *dStageYamabukiFile2_gap_0x87C8_sub_0x74D0[4] = {
	(void *)dStageYamabukiFile2_Tex_0xF750,
	(void *)dStageYamabukiFile2_Tex_0xF208,
	(void *)dStageYamabukiFile2_Tex_0xECC0,
	(void *)dStageYamabukiFile2_Tex_0xE778,
};

/* MObjSub @ 0xFCA8 */
MObjSub dStageYamabukiFile2_gap_0x87C8_sub_0x74E0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageYamabukiFile2_gap_0x87C8_sub_0x74D0,
		0x0020, 0x0000, 0x0030, 0x0038,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0030,
		0x0038, 0x0030, 0x0038,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0xFD20 (was gap+0x7558, 8 bytes) */
MObjSub *dStageYamabukiFile2_gap_0x87C8_sub_0x7558[2] = {
	(MObjSub *)dStageYamabukiFile2_gap_0x87C8_sub_0x74E0,
	NULL,
};

/* gap sub-block @ 0xFD28 (was gap+0x7560, 64 bytes) */
Vtx dStageYamabukiFile2_gap_0x87C8_sub_0x7560[4] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x7560.vtx.inc.c>
};

/* Gfx DL: gap_0x87C8_sub_0x75A0 @ 0xFD68 (30 cmds) */
Gfx dStageYamabukiFile2_gap_0x87C8_sub_0x75A0[30] = {
	#include <StageYamabukiFile2/gap_0x87C8_sub_0x75A0.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0xFE58 (144 bytes) */
extern u32 dStageYamabukiFile2_gap_0x87C8_sub_0x7720[];
/* sub_0x75A0_post — DObjDesc[3] + AObjEvent32*[3] table */
DObjDesc dStageYamabukiFile2_gap_0x87C8_sub_0x75A0_post[3] = {
	{ 0, (void*)0x00000000, { -3000.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16385, (void*)dStageYamabukiFile2_gap_0x87C8_sub_0x75A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.800000011920929f, 0.800000011920929f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x75A0_tbl[3] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x7720,
	NULL,
};

/* gap sub-block @ 0xFEE8 (was gap+0x7720, 240 bytes) */
extern AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x7AA0[2];
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x7720[57] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0xB54D5000,  /* -7.648486644029617e-07f */
	aobjEvent32SetVal(0x010, 240),
	    0xC53B8000,  /* -3000.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x41F00000,  /* 30.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
AObjEvent32 **dStageYamabukiFile2_gap_0x87C8_sub_0x7720_loop[1] = {
	dStageYamabukiFile2_gap_0x87C8_sub_0x7AA0,
};

/* gap sub-block @ 0xFFD8 (was gap+0x7810, 656 bytes) */
u32 dStageYamabukiFile2_gap_0x87C8_sub_0x7810[164] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageYamabukiFile2_gap_0x87C8_sub_0x7810,
};

/* gap sub-block @ 0x10268 (was gap+0x7AA0, 8 bytes) */
AObjEvent32 *dStageYamabukiFile2_gap_0x87C8_sub_0x7AA0[2] = {
	(AObjEvent32 *)dStageYamabukiFile2_gap_0x87C8_sub_0x7810,
	NULL,
};
