/* relocData file 69: MVOpeningStandoff */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern u8 dMVOpeningStandoff_gap_0x61B8[];

extern MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x328[];

extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6BEC[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6C24[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6C54[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6C8C[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6CC4[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D0C[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D44[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D48[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D4C[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D50[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D54[];
extern u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D58[];

extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6D94[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6E1C[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6EA4[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6F4C[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6FDC[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x7060[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x70CC[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x7144[];
extern u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x71B0[];
extern u8 dMVOpeningStandoff_Tex_0x2128[];
extern u8 dMVOpeningStandoff_Tex_0x3130[];
extern u8 dMVOpeningStandoff_Tex_0x4138[];
extern u8 dMVOpeningStandoff_Tex_0x5140[];


/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dMVOpeningStandoff_Lut_0x0008_palette[16] = {
	#include <MVOpeningStandoff/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dMVOpeningStandoff_Lut_0x0030_palette[16] = {
	#include <MVOpeningStandoff/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0058 @ 0x58 (16 colors RGBA5551) */
u16 dMVOpeningStandoff_Lut_0x0058_palette[16] = {
	#include <MVOpeningStandoff/Lut_0x0058.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x0080 (2056 bytes) */
/* @tex fmt=CI4 dim=256x256 lut=dMVOpeningStandoff_Lut_0x0008_palette */
u8 dMVOpeningStandoff_Tex_0x0080[2048] = {
	#include <MVOpeningStandoff/Tex_0x0080.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x0888 (2056 bytes) */
/* @tex fmt=CI4 dim=128x128 lut=dMVOpeningStandoff_Lut_0x0030_palette */
u8 dMVOpeningStandoff_Tex_0x0888[2048] = {
	#include <MVOpeningStandoff/Tex_0x0888.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x1090 (512 bytes) */
/* @tex fmt=CI4 dim=128x32 lut=dMVOpeningStandoff_Lut_0x0058_palette */
u8 dMVOpeningStandoff_Tex_0x1090[512] = {
	#include <MVOpeningStandoff/Tex_0x1090.tex.inc.c>
};

/* Vtx: Vtx_0x1290 @ 0x1290 (32 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1290_Vtx[32] = {
	#include <MVOpeningStandoff/Vtx_0x1290.vtx.inc.c>
};

/* Vtx: Vtx_0x1490_Vtx @ 0x1490 (20 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1490_Vtx[20] = {
	#include <MVOpeningStandoff/Vtx_0x1490.vtx.inc.c>
};

/* Vtx: Vtx_0x15D0 @ 0x15D0 (28 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x15D0_Vtx[28] = {
	#include <MVOpeningStandoff/Vtx_0x15D0.vtx.inc.c>
};

/* Vtx: Vtx_0x1790 @ 0x1790 (22 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1790_Vtx[22] = {
	#include <MVOpeningStandoff/Vtx_0x1790.vtx.inc.c>
};

/* Vtx: Vtx_0x18F0 @ 0x18F0 (10 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x18F0_Vtx[10] = {
	#include <MVOpeningStandoff/Vtx_0x18F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1990 @ 0x1990 (7 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1990_Vtx[7] = {
	#include <MVOpeningStandoff/Vtx_0x1990.vtx.inc.c>
};

/* Vtx: Vtx_0x1A00 @ 0x1A00 (9 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1A00_Vtx[9] = {
	#include <MVOpeningStandoff/Vtx_0x1A00.vtx.inc.c>
};

/* Vtx: Vtx_0x1A90 @ 0x1A90 (24 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1A90_Vtx[24] = {
	#include <MVOpeningStandoff/Vtx_0x1A90.vtx.inc.c>
};

/* DisplayList: Ground @ 0x1C10 (1288 bytes, 161 cmds) */
Gfx dMVOpeningStandoff_Ground_DisplayList[161] = {
	#include <MVOpeningStandoff/Ground.dl.inc.c>
};

/* Raw data from file offset 0x2118 to 0x6140 (16424 bytes) */
u8 dMVOpeningStandoff_Ground_post[16] = {
	#include <MVOpeningStandoff/Ground_post.data.inc.c>
};
/* @tex fmt=I4 dim=64x128 */
u8 dMVOpeningStandoff_Tex_0x2128[4104] = {
	#include <MVOpeningStandoff/Tex_0x2128.tex.inc.c>
};
/* @tex fmt=I4 dim=64x128 */
u8 dMVOpeningStandoff_Tex_0x3130[4104] = {
	#include <MVOpeningStandoff/Tex_0x3130.tex.inc.c>
};
/* @tex fmt=I4 dim=64x128 */
u8 dMVOpeningStandoff_Tex_0x4138[4104] = {
	#include <MVOpeningStandoff/Tex_0x4138.tex.inc.c>
};
/* @tex fmt=I4 dim=64x128 */
u8 dMVOpeningStandoff_Tex_0x5140[4096] = {
	#include <MVOpeningStandoff/Tex_0x5140.tex.inc.c>
};

/* MObjSub: LightningMObjSub @ 0x6140 */
MObjSub dMVOpeningStandoff_LightningMObjSub_MObjSub[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_4b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x1854, 0x1930,
		408361266,
		0.0f, 0.0f,
		2.79300700000659e-24f, 2.8317814856504657e-24f,
		0.0f, 0.0f,
		(void**)(dMVOpeningStandoff_gap_0x61B8_sub_0x328),
		0x185D,
		0x19, 0x3A,
		0x185F,
		0x1450, 0x0000, 0x0000,
		2.895955320290195e-24f, 2.908677674539147e-24f,
		2.9214000287880987e-24f, 2.9478564513969484e-24f,
		0x00000000,
		{ { 0x18, 0x65, 0x10, 0x4E } },
		0x18, 0x66, { 0x0C, 0x4C },
		{ { 0x18, 0x67, 0x08, 0x4A } },
		{ { 0x18, 0x69, 0x14, 0x50 } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x18, 0x6A, 0x10, 0x4E } },
		409668684, 409733194,
		409867344, 0,
	}
};

/* Raw data from file offset 0x61B8 to 0x6950 (1944 bytes) */
/* gap sub-block @ 0x61B8 (was gap+0x0, 12 bytes) */
u8 dMVOpeningStandoff_gap_0x61B8[12] = {
	#include <MVOpeningStandoff/gap_0x61B8.data.inc.c>
};

/* u32 pointer array @ 0x61C4 (5 entries) */
u32 dMVOpeningStandoff_gap_0x61B8_sub_0xC[5] = {
	(u32)&dMVOpeningStandoff_Tex_0x5140,
	0x00000000,
	(u32)&dMVOpeningStandoff_Tex_0x4138,
	(u32)&dMVOpeningStandoff_Tex_0x3130,
	(u32)&dMVOpeningStandoff_Tex_0x2128,
};

/* u32 pointer array @ 0x61D8 (6 entries) */
u32 dMVOpeningStandoff_gap_0x61B8_sub_0x20[6] = {
	(u32)&dMVOpeningStandoff_Tex_0x5140,
	0x00000000,
	(u32)&dMVOpeningStandoff_Tex_0x4138,
	(u32)&dMVOpeningStandoff_Tex_0x3130,
	(u32)&dMVOpeningStandoff_Tex_0x2128,
	0x00000000,
};

/* MObjSub @ 0x61F0 */
MObjSub dMVOpeningStandoff_gap_0x61B8_sub_0x38[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)((u8*)dMVOpeningStandoff_LightningMObjSub_MObjSub + 0x34),
		0x0020, 0x0000, 0x0040, 0x0080,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		0x04, 0x00,
		0x0040,
		0x0080, 0x0040, 0x0080,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x88, 0xF8 } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x2A, 0x33, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x6268 */
MObjSub dMVOpeningStandoff_gap_0x61B8_sub_0xB0[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)((u8*)dMVOpeningStandoff_LightningMObjSub_MObjSub + 0x48),
		0x0020, 0x0000, 0x0040, 0x0080,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		0x04, 0x00,
		0x0040,
		0x0080, 0x0040, 0x0080,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x88, 0xF8 } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x2A, 0x33, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x62E0 */
MObjSub dMVOpeningStandoff_gap_0x61B8_sub_0x128[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)((u8*)dMVOpeningStandoff_LightningMObjSub_MObjSub + 0x5C),
		0x0020, 0x0000, 0x0040, 0x0080,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		0x04, 0x00,
		0x0040,
		0x0080, 0x0040, 0x0080,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x88, 0xF8 } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x2A, 0x33, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x6358 */
MObjSub dMVOpeningStandoff_gap_0x61B8_sub_0x1A0[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)((u8*)dMVOpeningStandoff_LightningMObjSub_MObjSub + 0x70),
		0x0020, 0x0000, 0x0040, 0x0080,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		0x04, 0x00,
		0x0040,
		0x0080, 0x0040, 0x0080,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x88, 0xF8 } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x2A, 0x33, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x63D0 */
MObjSub dMVOpeningStandoff_gap_0x61B8_sub_0x218[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)dMVOpeningStandoff_gap_0x61B8_sub_0xC,
		0x0020, 0x0000, 0x0040, 0x0080,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x00A1,
		0x04, 0x00,
		0x0040,
		0x0080, 0x0040, 0x0080,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x88, 0xF8 } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x2A, 0x33, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x6448 */
MObjSub dMVOpeningStandoff_gap_0x61B8_sub_0x290[1] = {
	{
		0x0000,
		0x04, 0x02,
		(void**)dMVOpeningStandoff_gap_0x61B8_sub_0x20,
		0x0020, 0x0000, 0x0040, 0x0080,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		0x04, 0x00,
		0x0040,
		0x0080, 0x0040, 0x0080,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0xFF, 0x88, 0xF8 } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x2A, 0x33, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x64C0 (was gap+0x308, 8 bytes) */
MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x308[2] = {
	(MObjSub *)dMVOpeningStandoff_gap_0x61B8_sub_0x38,
	NULL,
};

/* gap sub-block @ 0x64C8 (was gap+0x310, 8 bytes) */
MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x310[2] = {
	(MObjSub *)dMVOpeningStandoff_gap_0x61B8_sub_0xB0,
	NULL,
};

/* gap sub-block @ 0x64D0 (was gap+0x318, 8 bytes) */
MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x318[2] = {
	(MObjSub *)dMVOpeningStandoff_gap_0x61B8_sub_0x128,
	NULL,
};

/* gap sub-block @ 0x64D8 (was gap+0x320, 8 bytes) */
MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x320[2] = {
	(MObjSub *)dMVOpeningStandoff_gap_0x61B8_sub_0x1A0,
	NULL,
};

/* gap sub-block @ 0x64E0 (was gap+0x328, 8 bytes) */
MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x328[2] = {
	(MObjSub *)dMVOpeningStandoff_gap_0x61B8_sub_0x218,
	NULL,
};

/* gap sub-block @ 0x64E8 (was gap+0x330, 8 bytes) */
MObjSub *dMVOpeningStandoff_gap_0x61B8_sub_0x330[2] = {
	(MObjSub *)dMVOpeningStandoff_gap_0x61B8_sub_0x290,
	NULL,
};

/* gap sub-block @ 0x64F0 (was gap+0x338, 64 bytes) */
Vtx dMVOpeningStandoff_gap_0x61B8_sub_0x338[4] = {
	#include <MVOpeningStandoff/gap_0x61B8_sub_0x338.vtx.inc.c>
};

/* gap sub-block @ 0x6530 (was gap+0x378, 64 bytes) */
Vtx dMVOpeningStandoff_gap_0x61B8_sub_0x378[4] = {
	#include <MVOpeningStandoff/gap_0x61B8_sub_0x378.vtx.inc.c>
};

/* gap sub-block @ 0x6570 (was gap+0x3B8, 152 bytes) */
Gfx dMVOpeningStandoff_DL_0x6570[19] = {
	#include <MVOpeningStandoff/DL_0x6570.dl.inc.c>
};

/* gap sub-block @ 0x6608 (was gap+0x450, 152 bytes) */
Gfx dMVOpeningStandoff_DL_0x6608[19] = {
	#include <MVOpeningStandoff/DL_0x6608.dl.inc.c>
};

/* gap sub-block @ 0x66A0 (was gap+0x4E8, 152 bytes) */
Gfx dMVOpeningStandoff_DL_0x66A0[19] = {
	#include <MVOpeningStandoff/DL_0x66A0.dl.inc.c>
};

/* gap sub-block @ 0x6738 (was gap+0x580, 152 bytes) */
Gfx dMVOpeningStandoff_DL_0x6738[19] = {
	#include <MVOpeningStandoff/DL_0x6738.dl.inc.c>
};

/* gap sub-block @ 0x67D0 (was gap+0x618, 136 bytes) */
Gfx dMVOpeningStandoff_DL_0x67D0[17] = {
	#include <MVOpeningStandoff/DL_0x67D0.dl.inc.c>
};

/* gap sub-block @ 0x6858 (was gap+0x6A0, 152 bytes) */
Gfx dMVOpeningStandoff_DL_0x6858[19] = {
	#include <MVOpeningStandoff/DL_0x6858.dl.inc.c>
};

/* Vtx: Vtx_0x68F0 @ 0x68F0 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x68F0_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x68F0.vtx.inc.c>
};

/* Vtx: Vtx_0x6900 @ 0x6900 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x6900_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x6900.vtx.inc.c>
};

/* Vtx: Vtx_0x6910 @ 0x6910 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x6910_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x6910.vtx.inc.c>
};

/* Vtx: Vtx_0x6920 @ 0x6920 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x6920_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x6920.vtx.inc.c>
};

/* Vtx: Vtx_0x6930 @ 0x6930 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x6930_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x6930.vtx.inc.c>
};

/* Vtx: Vtx_0x6940 @ 0x6940 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x6940_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x6940.vtx.inc.c>
};

/* DObjDesc: LightningDObjDesc @ 0x6950 (14 entries) */
DObjDesc dMVOpeningStandoff_LightningDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -6660.990234375f, 6960.31884765625f, 1707.0179443359375f }, { 0.0f, 2.1540000438690186f, 0.0f }, { 12.284400939941406f, 12.284400939941406f, 12.284400939941406f } },
	{ 3, (void*)((u8*)dMVOpeningStandoff_gap_0x61B8 + 0x738), { 0.0f, 30.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVOpeningStandoff_gap_0x61B8 + 0x748), { 0.0f, 30.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -1148.34423828125f, 6119.240234375f, -5615.26123046875f }, { 0.0f, -0.07675500214099884f, 0.0f }, { 12.284400939941406f, 12.284400939941406f, 12.284400939941406f } },
	{ 3, (void*)((u8*)dMVOpeningStandoff_gap_0x61B8 + 0x758), { 0.0f, 30.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.8180000185966492f, 0.8180000185966492f, 0.8180000185966492f } },
	{ 3, (void*)((u8*)dMVOpeningStandoff_gap_0x61B8 + 0x768), { 0.0f, 30.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.8180000185966492f, 0.8180000185966492f, 0.8180000185966492f } },
	{ 1, (void*)0x00000000, { 0.0f, -2327.17822265625f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 6840.69091796875f, 9287.05859375f, -3070.6103515625f }, { 0.0f, -1.5599989891052246f, 0.0f }, { 123.1999740600586f, 60.162986755371094f, 60.162986755371094f } },
	{ 3, (void*)((u8*)dMVOpeningStandoff_gap_0x61B8 + 0x778), { 2.9000000722589903e-05f, 30.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVOpeningStandoff_gap_0x61B8 + 0x788), { 2.9000000722589903e-05f, 30.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x6BB8 to 0x6D60 (424 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint[13] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D44,
	(AObjEvent32 *)dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D48,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D4C,
	(AObjEvent32 *)dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D50,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D54,
	(AObjEvent32 *)dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D58,
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6BEC[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x001, 261),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfter(0x001, 1),
	    0x00000000,
	aobjEvent32Wait(56),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6C24[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfter(0x001, 1),
	    0x00000000,
	aobjEvent32Wait(317),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6C54[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x001, 150),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfter(0x001, 1),
	    0x00000000,
	aobjEvent32Wait(167),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6C8C[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x001, 150),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfter(0x001, 1),
	    0x00000000,
	aobjEvent32Wait(167),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6CC4[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfter(0x001, 1),
	    0x00000000,
	aobjEvent32Wait(297),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D0C[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40800000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40400000,
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,
	aobjEvent32SetValAfter(0x001, 16),
	    0x00000000,
	aobjEvent32Wait(316),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D44[] = {
	aobjEvent32SetInterp(6907, 0x2A4),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D48[] = {
	aobjEvent32SetInterp(6921, 0x2A6),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D4C[] = {
	aobjEvent32SetInterp(6933, 0x2A8),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D50[] = {
	aobjEvent32SetInterp(6947, 0x2AA),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D54[] = {
	aobjEvent32SetInterp(6961, 0x2AC),
};

u32 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint_0x6D58[] = {
	aobjEvent32SetInterp(6979, 0x2B4),
	aobjEvent32End(),
};

/* Raw data from file offset 0x6D60 to 0x7250 (1264 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dMVOpeningStandoff_LightningAnimJoint_AnimJoint[13] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6D94,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6E1C,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6EA4,
	NULL,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6F4C,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6FDC,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x7060,
	NULL,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x70CC,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x7144,
	(AObjEvent32 *)dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x71B0,
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6D94[] = {
	aobjEvent32SetValAfter(0x055, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xC5D027EC,  /* -6660.990234375f */
	    0x44D56093,  /* 1707.0179443359375f */
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x41448CE8,  /* 12.284400939941406f */
	    0x41448CE8,  /* 12.284400939941406f */
	    0x41448CE8,  /* 12.284400939941406f */
	aobjEvent32SetValBlock(0x022, 0),
	    0x4009DB21,  /* 2.1539995670318604f */
	    0x45D9828D,  /* 6960.31884765625f */
	aobjEvent32SetValRate(0x380, 262),
	    0x431891D9,  /* 152.56971740722656f */
	    0x3E844BF7,  /* 0.2583920657634735f */
	    0x4285E77A,  /* 66.95210266113281f */
	    0x3DFEF40F,  /* 0.1244889423251152f */
	    0x425FEB8A,  /* 55.980018615722656f */
	    0x3DFEF40F,  /* 0.1244889423251152f */
	aobjEvent32SetVal(0x002, 265),
	    0x40053F77,  /* 2.081998586654663f */
	aobjEvent32SetValBlock(0x020, 261),
	    0x45ABC6BC,  /* 5496.841796875f */
	aobjEvent32SetVal(0x020, 90),
	    0x45ABC6BC,  /* 5496.841796875f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x380, 89),
	    0x42CDF5C5,  /* 102.98001861572266f */
	    0x425FEB8A,  /* 55.980018615722656f */
	    0x425FEB8A,  /* 55.980018615722656f */
	aobjEvent32Wait(3),
	aobjEvent32SetValBlock(0x002, 55),
	    0x40053F77,  /* 2.081998586654663f */
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6E1C[] = {
	aobjEvent32SetValBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x2F7, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x100, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetVal0Rate(0x100, 262),
	    0x3FBAE144,  /* 1.4599995613098145f */
	aobjEvent32SetValBlock(0x002, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 259),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x002, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x100, 89),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetFlags(0x003, 0),
	aobjEvent32SetValAfter(0x002, 85),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(54),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6EA4[] = {
	aobjEvent32SetValBlock(0x182, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x277, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetVal(0x100, 261),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x080, 262),
	    0x3F2C3654,  /* 0.6727039813995361f */
	aobjEvent32SetValBlock(0x002, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 259),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x002, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3FBA2056,  /* 1.4541118144989014f */
	aobjEvent32SetVal(0x080, 89),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3FF5C28D,  /* 1.9199997186660767f */
	aobjEvent32SetVal(0x100, 86),
	    0x3FF5C28D,  /* 1.9199997186660767f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x003, 0),
	aobjEvent32SetValAfter(0x002, 85),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(54),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6F4C[] = {
	aobjEvent32SetValAfter(0x077, 0),
	    0x00000000,  /* 0.0f */
	    0xBD9D31B2,  /* -0.07675494253635406f */
	    0x00000000,  /* 0.0f */
	    0xC48F8B04,  /* -1148.34423828125f */
	    0x45BF39EC,  /* 6119.240234375f */
	    0xC5AF7A17,  /* -5615.26123046875f */
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x41448CE8,  /* 12.284400939941406f */
	    0x41448CE8,  /* 12.284400939941406f */
	    0x41448CE8,  /* 12.284400939941406f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValRate(0x380, 153),
	    0x428815B2,  /* 68.04237365722656f */
	    0x3F09129A,  /* 0.5354400873184204f */
	    0x4270D5EF,  /* 60.208919525146484f */
	    0x3E55A9BF,  /* 0.20865534245967865f */
	    0x420BD3AB,  /* 34.95670700073242f */
	    0x3E2AC7A2,  /* 0.16677716374397278f */
	aobjEvent32Wait(150),
	aobjEvent32SetFlags(0x000, 3),
	aobjEvent32SetValRate(0x380, 109),
	    0x431891D9,  /* 152.56971740722656f */
	    0x3E34B007,  /* 0.17645274102687836f */
	    0x4285E77A,  /* 66.95210266113281f */
	    0xBCAEF727,  /* -0.021358085796236992f */
	    0x425FEB8A,  /* 55.980018615722656f */
	    0x3DD97407,  /* 0.10617833584547043f */
	aobjEvent32Wait(3),
	aobjEvent32SetFlags(0x002, 106),
	aobjEvent32SetVal0Rate(0x380, 89),
	    0x42CDF5C5,  /* 102.98001861572266f */
	    0x425FEB8A,  /* 55.980018615722656f */
	    0x425FEB8A,  /* 55.980018615722656f */
	aobjEvent32Wait(58),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x6FDC[] = {
	aobjEvent32SetVal(0x180, 0),
	    0x3F516873,  /* 0.8180000185966492f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValAfter(0x277, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValBlock(0x180, 150),
	    0x3F516873,  /* 0.8180000185966492f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3F7CF704,  /* 0.9881441593170166f */
	    0x3FF7C9E6,  /* 1.9358489513397217f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3F7CF704,  /* 0.9881441593170166f */
	    0x3FA604B6,  /* 1.2970187664031982f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3FC108B6,  /* 1.5080783367156982f */
	    0x400D38EC,  /* 2.206599235534668f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3FAAF919,  /* 1.3357268571853638f */
	    0x400B3D9B,  /* 2.1756350994110107f */
	aobjEvent32SetValBlock(0x180, 1),
	    0x3FAAF919,  /* 1.3357268571853638f */
	    0x3F968BE7,  /* 1.1761444807052612f */
	aobjEvent32SetValBlock(0x180, 160),
	    0x3FAAF919,  /* 1.3357268571853638f */
	    0x3F968BE7,  /* 1.1761444807052612f */
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x7060[] = {
	aobjEvent32SetVal(0x180, 0),
	    0x3F516873,  /* 0.8180000185966492f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValAfter(0x277, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValBlock(0x180, 150),
	    0x3F516873,  /* 0.8180000185966492f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3F94C58C,  /* 1.162278652191162f */
	    0x4002CD39,  /* 2.043775796890259f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3F516873,  /* 0.8180000185966492f */
	    0x3F516873,  /* 0.8180000185966492f */
	aobjEvent32SetValBlock(0x180, 3),
	    0x3F847104,  /* 1.0346989631652832f */
	    0x3FE6F82B,  /* 1.8044484853744507f */
	aobjEvent32SetValBlock(0x180, 161),
	    0x3F847104,  /* 1.0346989631652832f */
	    0x3FE6F82B,  /* 1.8044484853744507f */
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x70CC[] = {
	aobjEvent32SetValAfter(0x075, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x45D5C587,  /* 6840.69091796875f */
	    0x46111C3C,  /* 9287.05859375f */
	    0xC53FE9C4,  /* -3070.6103515625f */
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x42F66663,  /* 123.1999740600586f */
	    0x4270A6E6,  /* 60.162986755371094f */
	    0x4270A6E6,  /* 60.162986755371094f */
	aobjEvent32SetValBlock(0x002, 0),
	    0xBFC7AE0A,  /* -1.5599987506866455f */
	aobjEvent32SetVal(0x002, 320),
	    0xBFC147A1,  /* -1.5099984407424927f */
	aobjEvent32SetValRateBlock(0x380, 21),
	    0x42F66663,  /* 123.1999740600586f */
	    0x4022A50A,  /* 2.541323184967041f */
	    0x4270A6E6,  /* 60.162986755371094f */
	    0x3EF2FF80,  /* 0.4746055603027344f */
	    0x4270A6E6,  /* 60.162986755371094f */
	    0x3EBDF460,  /* 0.3710050582885742f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x43383115,  /* 184.1917266845703f */
	    0x428F1B67,  /* 71.55352020263672f */
	    0x428A225C,  /* 69.06710815429688f */
	aobjEvent32SetVal0RateBlock(0x380, 296),
	    0x42F66663,  /* 123.1999740600586f */
	    0x4270A6E6,  /* 60.162986755371094f */
	    0x4270A6E6,  /* 60.162986755371094f */
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x7144[] = {
	aobjEvent32SetValBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x3F7, 0),
	    0x00000000,  /* 0.0f */
	    0xB3800000,  /* -5.960464477539063e-08f */
	    0x00000000,  /* 0.0f */
	    0x37F00000,  /* 2.86102294921875e-05f */
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetValBlock(0x002, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 18),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfterBlock(0x002, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetFlags(0x003, 0),
	aobjEvent32SetValAfterBlock(0x002, 295),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dMVOpeningStandoff_LightningAnimJoint_AnimJoint_0x71B0[] = {
	aobjEvent32SetValBlock(0x102, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x2F7, 0),
	    0x00000000,  /* 0.0f */
	    0xB3800000,  /* -5.960464477539063e-08f */
	    0x00000000,  /* 0.0f */
	    0x37F00000,  /* 2.86102294921875e-05f */
	    0x41F00000,  /* 30.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetVal(0x100, 20),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x002, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 18),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x002, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(0x002, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3FC10F6F,  /* 1.5082834959030151f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3FF5C28D,  /* 1.9199997186660767f */
	aobjEvent32SetVal(0x100, 296),
	    0x3FF5C28D,  /* 1.9199997186660767f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x003, 0),
	aobjEvent32SetValAfterBlock(0x002, 295),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x7250 to 0x8F30 (7392 bytes) */
u32 dMVOpeningStandoff_Cam_AnimJoint[1848] = {
	aobjEvent32SetValAfter(0x210, 0),
	    0x00000000,  /* 0.0f */
	    0x428E5385,  /* 71.16312408447266f */
	aobjEvent32SetVal0Rate(0x001, 0),
	    0xC511CA4F,  /* -2332.644287109375f */
	aobjEvent32SetValBlock(0x066, 0),
	    0x42C3537C,  /* 97.66305541992188f */
	    0xC4A9F7BC,  /* -1359.74169921875f */
	    0x436459C7,  /* 228.35069274902344f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5129BE3,  /* -2345.742919921875f */
	    0xC14E84E7,  /* -12.90744686126709f */
	aobjEvent32SetVal(0x020, 89),
	    0x436459C7,  /* 228.35069274902344f */
	aobjEvent32SetValAfter(0x210, 90),
	    0x44160000,  /* 600.0f */
	    0x411FAEE1,  /* 9.980195045471191f */
	aobjEvent32SetVal(0x040, 300),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3537A,  /* 97.66304016113281f */
	    0xC4A626CF,  /* -1329.2127685546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5136758,  /* -2358.458984375f */
	    0xC14861A9,  /* -12.523842811584473f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35379,  /* 97.66303253173828f */
	    0xC4A250BA,  /* -1298.522705078125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5142CA6,  /* -2370.79052734375f */
	    0xC14236E7,  /* -12.13840389251709f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35378,  /* 97.66302490234375f */
	    0xC49E75A6,  /* -1267.676513671875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC514EBC6,  /* -2382.73583984375f */
	    0xC13C0597,  /* -11.751364707946777f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35377,  /* 97.66301727294922f */
	    0xC49A95B8,  /* -1236.6787109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC515A4B1,  /* -2394.293212890625f */
	    0xC135CC51,  /* -11.362381935119629f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35376,  /* 97.66300964355469f */
	    0xC496B112,  /* -1205.533447265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC516575F,  /* -2405.460693359375f */
	    0xC12F8B11,  /* -10.971451759338379f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35375,  /* 97.66300201416016f */
	    0xC492C7E5,  /* -1174.2467041015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51703C7,  /* -2416.236083984375f */
	    0xC12941D6,  /* -10.578573226928711f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35373,  /* 97.6629867553711f */
	    0xC48EDA54,  /* -1142.82275390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC517A9E3,  /* -2426.617919921875f */
	    0xC122F20E,  /* -10.18409538269043f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35372,  /* 97.66297912597656f */
	    0xC48AE88A,  /* -1111.266845703125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51849AC,  /* -2436.6044921875f */
	    0xC11C9B41,  /* -9.787903785705566f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35370,  /* 97.6629638671875f */
	    0xC486F2AC,  /* -1079.58349609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC518E319,  /* -2446.193603515625f */
	    0xC1163C01,  /* -9.389649391174316f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3536F,  /* 97.66295623779297f */
	    0xC482F8E0,  /* -1047.77734375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5197624,  /* -2455.3837890625f */
	    0xC10FD541,  /* -8.989563941955566f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3536E,  /* 97.66294860839844f */
	    0xC47DF6A3,  /* -1015.8536987304688f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51A02C4,  /* -2464.1728515625f */
	    0xC1096779,  /* -8.587761878967285f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3536C,  /* 97.66293334960938f */
	    0xC475F451,  /* -983.8174438476562f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51A88F2,  /* -2472.55908203125f */
	    0xC102F231,  /* -8.184128761291504f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3536B,  /* 97.66292572021484f */
	    0xC46DEB1E,  /* -951.6737060546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51B08A8,  /* -2480.541015625f */
	    0xC0F8EAD1,  /* -7.7786641120910645f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35369,  /* 97.66291046142578f */
	    0xC465DB4F,  /* -919.4266967773438f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51B81DD,  /* -2488.116455078125f */
	    0xC0EBE23A,  /* -7.371365547180176f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35368,  /* 97.66290283203125f */
	    0xC45DC53C,  /* -887.081787109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51BF48A,  /* -2495.28369140625f */
	    0xC0DEC9C1,  /* -6.962128162384033f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35368,  /* 97.66290283203125f */
	    0xC455A938,  /* -854.64404296875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51C60A7,  /* -2502.040771484375f */
	    0xC0D1A151,  /* -6.5509419441223145f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35366,  /* 97.66288757324219f */
	    0xC44D8797,  /* -822.1185913085938f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51CC62C,  /* -2508.3857421875f */
	    0xC0C469E1,  /* -6.137924671173096f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35365,  /* 97.66287994384766f */
	    0xC44560A9,  /* -789.5103149414062f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51D2511,  /* -2514.316650390625f */
	    0xC0B72371,  /* -5.723076343536377f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35363,  /* 97.6628646850586f */
	    0xC43D34C2,  /* -756.8243408203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51D7D4F,  /* -2519.831787109375f */
	    0xC0A9CC21,  /* -5.306168079376221f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35362,  /* 97.66285705566406f */
	    0xC435042B,  /* -724.0651245117188f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51DCEDD,  /* -2524.928955078125f */
	    0xC09C64E1,  /* -4.887314319610596f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35360,  /* 97.662841796875f */
	    0xC42CCF42,  /* -691.2384033203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51E19B4,  /* -2529.6064453125f */
	    0xC08EEDB1,  /* -4.466515064239502f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3535F,  /* 97.66283416748047f */
	    0xC424965B,  /* -658.3493041992188f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51E5DCB,  /* -2533.862060546875f */
	    0xC0816691,  /* -4.0437703132629395f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3535D,  /* 97.6628189086914f */
	    0xC41C59CE,  /* -625.4031982421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51E9B1A,  /* -2537.69384765625f */
	    0xC0679B41,  /* -3.6188509464263916f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3535C,  /* 97.66281127929688f */
	    0xC41419ED,  /* -592.4050903320312f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51ED198,  /* -2541.099609375f */
	    0xC04C47A1,  /* -3.1918718814849854f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3535B,  /* 97.66280364990234f */
	    0xC40BD70D,  /* -559.3601684570312f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F013E,  /* -2544.07763671875f */
	    0xC030D421,  /* -2.7629473209381104f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3535A,  /* 97.66279602050781f */
	    0xC403918C,  /* -526.274169921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F2A02,  /* -2546.62548828125f */
	    0xC0154841,  /* -2.3325350284576416f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35359,  /* 97.66278839111328f */
	    0xC3F6936A,  /* -493.15167236328125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F4BE2,  /* -2548.74267578125f */
	    0xBFF369C1,  /* -1.9016648530960083f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35357,  /* 97.66277313232422f */
	    0xC3E5FFE4,  /* -459.9991455078125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F66DD,  /* -2550.428955078125f */
	    0xBFBC37C1,  /* -1.4704514741897583f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35356,  /* 97.66276550292969f */
	    0xC3D56938,  /* -426.822021484375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F7AF0,  /* -2551.68359375f */
	    0xBF84FA81,  /* -1.038894772529602f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35354,  /* 97.66275024414062f */
	    0xC3C4D019,  /* -393.6257629394531f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F881C,  /* -2552.5068359375f */
	    0xBF1B72F7,  /* -0.6072229743003845f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35353,  /* 97.6627426147461f */
	    0xC3B4353F,  /* -360.4159851074219f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F8E5F,  /* -2552.898193359375f */
	    0xBE33A5F6,  /* -0.1754377782344818f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35351,  /* 97.66272735595703f */
	    0xC3A3995B,  /* -327.1980895996094f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F8DB9,  /* -2552.857666015625f */
	    0x3E835E08,  /* 0.2565767765045166f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35350,  /* 97.6627197265625f */
	    0xC392FD33,  /* -293.9781188964844f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F8629,  /* -2552.385009765625f */
	    0x3F30568B,  /* 0.6888205409049988f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3534E,  /* 97.66270446777344f */
	    0xC382617D,  /* -260.7616271972656f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F77AE,  /* -2551.47998046875f */
	    0x3F8F82B7,  /* 1.1211766004562378f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3534D,  /* 97.6626968383789f */
	    0xC3638DD9,  /* -227.55409240722656f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F6248,  /* -2550.142578125f */
	    0x3FC6DDF5,  /* 1.553648591041565f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3534C,  /* 97.66268920898438f */
	    0xC3425C64,  /* -194.36090087890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F45F6,  /* -2548.37255859375f */
	    0x3FFE4490,  /* 1.9864673614501953f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3534A,  /* 97.66267395019531f */
	    0xC321302E,  /* -161.18820190429688f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51F22B7,  /* -2546.169677734375f */
	    0x401AD76A,  /* 2.4193978309631348f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3534A,  /* 97.66267395019531f */
	    0xC3000A9C,  /* -128.04144287109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51EF88B,  /* -2543.533935546875f */
	    0x40368C76,  /* 2.852323055267334f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35348,  /* 97.66265869140625f */
	    0xC2BDDA2F,  /* -94.92613983154297f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51EC771,  /* -2540.465087890625f */
	    0x40524735,  /* 3.2855961322784424f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35347,  /* 97.66265106201172f */
	    0xC277648C,  /* -61.84819030761719f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51E8F67,  /* -2536.962646484375f */
	    0x406E03EF,  /* 3.7189900875091553f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35345,  /* 97.66263580322266f */
	    0xC1E68110,  /* -28.813018798828125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51E506F,  /* -2533.027099609375f */
	    0x4084E138,  /* 4.152492523193359f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35344,  /* 97.66262817382812f */
	    0x40858888,  /* 4.172916412353516f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51E0A86,  /* -2528.65771484375f */
	    0x4092C337,  /* 4.586329936981201f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35342,  /* 97.66261291503906f */
	    0x42146AE2,  /* 37.10437774658203f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51DBDAC,  /* -2523.8544921875f */
	    0x40A0A637,  /* 5.020289897918701f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35341,  /* 97.66260528564453f */
	    0x428BF36A,  /* 69.97541809082031f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51D69E0,  /* -2518.6171875f */
	    0x40AE8A3B,  /* 5.454373836517334f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3533F,  /* 97.66259002685547f */
	    0x42CD8F40,  /* 102.77978515625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51D0F21,  /* -2512.945556640625f */
	    0x40BC70E6,  /* 5.888781547546387f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3533E,  /* 97.66258239746094f */
	    0x43078313,  /* 135.5120086669922f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51CAD6F,  /* -2506.839599609375f */
	    0x40CA5985,  /* 6.323427677154541f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3533D,  /* 97.6625747680664f */
	    0x43282A8B,  /* 168.1661834716797f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51C44C8,  /* -2500.298828125f */
	    0x40D8432E,  /* 6.758200645446777f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3533C,  /* 97.66256713867188f */
	    0x4348BC54,  /* 200.73565673828125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51BD52C,  /* -2493.3232421875f */
	    0x40E62F8E,  /* 7.193305015563965f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3533B,  /* 97.66255950927734f */
	    0x43693708,  /* 233.2149658203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51B5E98,  /* -2485.912109375f */
	    0x40F41EA3,  /* 7.628739833831787f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35339,  /* 97.66254425048828f */
	    0x4384CC81,  /* 265.5976867675781f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51AE10D,  /* -2478.065673828125f */
	    0x41010761,  /* 8.064301490783691f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35338,  /* 97.66253662109375f */
	    0x4394F053,  /* 297.8775329589844f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC51A5C89,  /* -2469.783447265625f */
	    0x4107FE90,  /* 8.499649047851562f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35337,  /* 97.66252899169922f */
	    0x43A50630,  /* 330.04833984375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC519D110,  /* -2461.06640625f */
	    0x410EF101,  /* 8.933838844299316f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35335,  /* 97.66251373291016f */
	    0x43B50D5D,  /* 362.1044006347656f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5193EA8,  /* -2451.916015625f */
	    0x4115DCD0,  /* 9.366409301757812f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35334,  /* 97.66250610351562f */
	    0x43C50503,  /* 394.0391540527344f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC518A556,  /* -2442.33349609375f */
	    0x411CC21F,  /* 9.797392845153809f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35332,  /* 97.66249084472656f */
	    0x43D4EC74,  /* 425.8472900390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5180523,  /* -2432.321044921875f */
	    0x41239F8A,  /* 10.226449966430664f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35331,  /* 97.66248321533203f */
	    0x43E4C2E1,  /* 457.5224914550781f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5175E17,  /* -2421.880615234375f */
	    0x412A7563,  /* 10.653658866882324f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35330,  /* 97.6624755859375f */
	    0x43F4878E,  /* 489.05902099609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC516B038,  /* -2411.013671875f */
	    0x4131450E,  /* 11.07935905456543f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3532E,  /* 97.66246032714844f */
	    0x44021CDC,  /* 520.450927734375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC515FB8D,  /* -2399.721923828125f */
	    0x41380D4E,  /* 11.50324821472168f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3532D,  /* 97.6624526977539f */
	    0x4409EC61,  /* 551.6934204101562f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC515401E,  /* -2388.00732421875f */
	    0x413ECD34,  /* 11.925098419189453f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3532C,  /* 97.66244506835938f */
	    0x4411B1DE,  /* 582.7791748046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5147DF3,  /* -2375.871826171875f */
	    0x41458674,  /* 12.345325469970703f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3532B,  /* 97.66243743896484f */
	    0x44196CFD,  /* 613.7029418945312f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC513B511,  /* -2363.316650390625f */
	    0x414C38AD,  /* 12.763836860656738f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3532A,  /* 97.66242980957031f */
	    0x44211D61,  /* 644.4590454101562f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC512E581,  /* -2350.343994140625f */
	    0x4152E2BC,  /* 13.180355072021484f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35328,  /* 97.66241455078125f */
	    0x4428C2A5,  /* 675.0413208007812f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5120F4B,  /* -2336.955810546875f */
	    0x4159857B,  /* 13.595088005065918f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35327,  /* 97.66240692138672f */
	    0x44305C6B,  /* 705.4440307617188f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5113276,  /* -2323.15380859375f */
	    0x416020EE,  /* 14.008039474487305f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35326,  /* 97.66239929199219f */
	    0x4437EA53,  /* 735.6613159179688f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5104F0A,  /* -2308.93994140625f */
	    0x4166B4AE,  /* 14.419111251831055f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35324,  /* 97.66238403320312f */
	    0x443F6BF4,  /* 765.686767578125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50F650D,  /* -2294.315673828125f */
	    0x416D40EF,  /* 14.828352928161621f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35323,  /* 97.6623764038086f */
	    0x4446E0F3,  /* 795.5148315429688f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50E7488,  /* -2279.283203125f */
	    0x4173C5AF,  /* 15.235762596130371f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35322,  /* 97.66236877441406f */
	    0x444E48E7,  /* 825.1390991210938f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50D7D82,  /* -2263.84423828125f */
	    0x417A4200,  /* 15.64111328125f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35320,  /* 97.662353515625f */
	    0x4455A36B,  /* 854.5534057617188f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50C8004,  /* -2248.0009765625f */
	    0x41805BA4,  /* 16.04474639892578f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3531F,  /* 97.66234588623047f */
	    0x445CF019,  /* 883.7515258789062f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50B7C13,  /* -2231.754638671875f */
	    0x418392E1,  /* 16.446718215942383f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3531E,  /* 97.66233825683594f */
	    0x44642E8D,  /* 912.7273559570312f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50A71B8,  /* -2215.107421875f */
	    0x4186C605,  /* 16.846689224243164f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3531E,  /* 97.66233825683594f */
	    0x446B5E6F,  /* 941.4755249023438f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50960FB,  /* -2198.061279296875f */
	    0x4189F511,  /* 17.244661331176758f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3531C,  /* 97.66232299804688f */
	    0x44727F44,  /* 969.988525390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50849E4,  /* -2180.6181640625f */
	    0x418D203D,  /* 17.6407413482666f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3531B,  /* 97.66231536865234f */
	    0x447990A4,  /* 998.260009765625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5072C7A,  /* -2162.77978515625f */
	    0x419047E5,  /* 18.035104751586914f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3531A,  /* 97.66230773925781f */
	    0x44804914,  /* 1026.28369140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC50608C4,  /* -2144.5478515625f */
	    0x41936B19,  /* 18.42729377746582f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35319,  /* 97.66230010986328f */
	    0x4483C1B5,  /* 1054.0533447265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC504DECE,  /* -2125.92529296875f */
	    0x419687F9,  /* 18.81639289855957f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35318,  /* 97.66229248046875f */
	    0x44873202,  /* 1081.562744140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC503AEA5,  /* -2106.915283203125f */
	    0x41999C82,  /* 19.201419830322266f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35316,  /* 97.66227722167969f */
	    0x448A99CD,  /* 1108.8062744140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC502785B,  /* -2087.522216796875f */
	    0x419CA971,  /* 19.582735061645508f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35315,  /* 97.66226959228516f */
	    0x448DF8E4,  /* 1135.77783203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC5013BFE,  /* -2067.74951171875f */
	    0x419FAF42,  /* 19.960575103759766f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35314,  /* 97.66226196289062f */
	    0x44914F1D,  /* 1162.4722900390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4FFF33D,  /* -2047.6011962890625f */
	    0x41A2ACF6,  /* 20.334453582763672f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35313,  /* 97.6622543334961f */
	    0x44949C4F,  /* 1188.8846435546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4FD6296,  /* -2027.080810546875f */
	    0x41A5A23A,  /* 20.704212188720703f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35312,  /* 97.66224670410156f */
	    0x4497E04F,  /* 1215.0096435546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4FAC62B,  /* -2006.1927490234375f */
	    0x41A88F4B,  /* 21.06996726989746f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35311,  /* 97.66223907470703f */
	    0x449B1AE8,  /* 1240.8408203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4F81E1C,  /* -1984.94091796875f */
	    0x41AB7553,  /* 21.432287216186523f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530F,  /* 97.66222381591797f */
	    0x449E4BF0,  /* 1266.373046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4F56A81,  /* -1963.3282470703125f */
	    0x41AE52AF,  /* 21.790372848510742f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530E,  /* 97.66221618652344f */
	    0x44A17343,  /* 1291.6019287109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4F2AB86,  /* -1941.360107421875f */
	    0x41B12754,  /* 22.144203186035156f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530E,  /* 97.66221618652344f */
	    0x44A490AA,  /* 1316.520751953125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4EFE145,  /* -1919.0396728515625f */
	    0x41B3F519,  /* 22.49467658996582f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530D,  /* 97.6622085571289f */
	    0x44A7A3FD,  /* 1341.1246337890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4ED0BDD,  /* -1896.3707275390625f */
	    0x41B6BA3F,  /* 22.840940475463867f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530C,  /* 97.66220092773438f */
	    0x44AAAD11,  /* 1365.4083251953125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4EA2B74,  /* -1873.35791015625f */
	    0x41B97762,  /* 23.183292388916016f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530B,  /* 97.66219329833984f */
	    0x44ADABB3,  /* 1389.3656005859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4E74022,  /* -1850.004150390625f */
	    0x41BC2C32,  /* 23.52157974243164f */
	aobjEvent32SetValBlock(0x026, 1),
	    0x42C3530A,  /* 97.66218566894531f */
	    0x44B09FBE,  /* 1412.991943359375f */
	    0x438744C2,  /* 270.53717041015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4E44A13,  /* -1826.3148193359375f */
	    0x41BED837,  /* 23.855573654174805f */
	aobjEvent32SetVal(0x020, 15),
	    0x438744C2,  /* 270.53717041015625f */
	aobjEvent32SetValAfter(0x210, 15),
	    0x00000000,  /* 0.0f */
	    0x428E5382,  /* 71.16310119628906f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35309,  /* 97.66217803955078f */
	    0x44B388FB,  /* 1436.2806396484375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4E14961,  /* -1802.2930908203125f */
	    0x41C17CA0,  /* 24.18585205078125f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35308,  /* 97.66217041015625f */
	    0x44B66740,  /* 1459.2265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4DE3E2E,  /* -1777.943115234375f */
	    0x41C4186A,  /* 24.511920928955078f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35307,  /* 97.66216278076172f */
	    0x44B93A5F,  /* 1481.8240966796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4DB289C,  /* -1753.26904296875f */
	    0x41C6AC10,  /* 24.834014892578125f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35306,  /* 97.66215515136719f */
	    0x44BC0229,  /* 1504.0675048828125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4D808CC,  /* -1728.27490234375f */
	    0x41C936C1,  /* 25.151735305786133f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35305,  /* 97.66214752197266f */
	    0x44BEBE6E,  /* 1525.950927734375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4D4DEE7,  /* -1702.9656982421875f */
	    0x41CBB8D3,  /* 25.465246200561523f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35304,  /* 97.66213989257812f */
	    0x44C16EFA,  /* 1547.468017578125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4D1AB06,  /* -1677.344482421875f */
	    0x41CE330B,  /* 25.77492332458496f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35303,  /* 97.6621322631836f */
	    0x44C413A1,  /* 1568.6134033203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4CE6D4F,  /* -1651.4158935546875f */
	    0x41D0A36B,  /* 26.07979393005371f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35302,  /* 97.66212463378906f */
	    0x44C6AC30,  /* 1589.380859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4CB25EB,  /* -1625.1849365234375f */
	    0x41D30B79,  /* 26.38060188293457f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35301,  /* 97.66211700439453f */
	    0x44C93872,  /* 1609.763916015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4C7D4F3,  /* -1598.6546630859375f */
	    0x41D56937,  /* 26.676374435424805f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35300,  /* 97.662109375f */
	    0x44CBB83E,  /* 1629.757568359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4C47AA2,  /* -1571.832275390625f */
	    0x41D7BA75,  /* 26.96604347229004f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35300,  /* 97.662109375f */
	    0x44CE2B66,  /* 1649.356201171875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4C1171F,  /* -1544.7225341796875f */
	    0x41DA00FF,  /* 27.250486373901367f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35300,  /* 97.662109375f */
	    0x44D091CC,  /* 1668.55615234375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4BDAA99,  /* -1517.3311767578125f */
	    0x41DC3A7E,  /* 27.528560638427734f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FF,  /* 97.66210174560547f */
	    0x44D2EB4D,  /* 1687.3531494140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4BA354B,  /* -1489.6654052734375f */
	    0x41DE67F4,  /* 27.800758361816406f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FE,  /* 97.66209411621094f */
	    0x44D537C0,  /* 1705.7421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4B6B75A,  /* -1461.729736328125f */
	    0x41E08957,  /* 28.067060470581055f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FD,  /* 97.6620864868164f */
	    0x44D77709,  /* 1723.7198486328125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4B33101,  /* -1433.5313720703125f */
	    0x41E29E32,  /* 28.32724380493164f */
	aobjEvent32SetValAfter(0x210, 75),
	    0xC4160000,  /* -600.0f */
	    0x4111C222,  /* 9.109895706176758f */
	aobjEvent32SetValBlock(0x026, 1),
	    0x42C352FD,  /* 97.6620864868164f */
	    0x44D9A8FF,  /* 1741.2811279296875f */
	    0x436459C7,  /* 228.35069274902344f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4AFA269,  /* -1405.0753173828125f */
	    0x41E4A717,  /* 28.581586837768555f */
	aobjEvent32SetVal(0x020, 73),
	    0x436459C7,  /* 228.35069274902344f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FC,  /* 97.66207885742188f */
	    0x44DBCD85,  /* 1758.4224853515625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4AC0BC8,  /* -1376.3681640625f */
	    0x41E6A42E,  /* 28.83016586303711f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FB,  /* 97.66207122802734f */
	    0x44DDE472,  /* 1775.138916015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4A86D46,  /* -1347.414794921875f */
	    0x41E89496,  /* 29.072551727294922f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FA,  /* 97.66206359863281f */
	    0x44DFEDAC,  /* 1791.42724609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4A4C722,  /* -1318.222900390625f */
	    0x41EA786F,  /* 29.308805465698242f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FA,  /* 97.66206359863281f */
	    0x44E1E905,  /* 1807.2818603515625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4A11983,  /* -1288.7972412109375f */
	    0x41EC503B,  /* 29.539175033569336f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F9,  /* 97.66205596923828f */
	    0x44E3D663,  /* 1822.6995849609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC49D64A1,  /* -1259.1446533203125f */
	    0x41EE1AAB,  /* 29.76302146911621f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F8,  /* 97.66204833984375f */
	    0x44E5B59C,  /* 1837.67529296875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC499A8AE,  /* -1229.271240234375f */
	    0x41EFD945,  /* 29.981088638305664f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F8,  /* 97.66204833984375f */
	    0x44E7868F,  /* 1852.2049560546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC495E5D7,  /* -1199.1824951171875f */
	    0x41F18B73,  /* 30.193090438842773f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F7,  /* 97.66204071044922f */
	    0x44E9491A,  /* 1866.284423828125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4921C53,  /* -1168.8851318359375f */
	    0x41F33027,  /* 30.39851188659668f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F6,  /* 97.66203308105469f */
	    0x44EAFD15,  /* 1879.9088134765625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC48E4C57,  /* -1138.3856201171875f */
	    0x41F4C872,  /* 30.59787368774414f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F6,  /* 97.66203308105469f */
	    0x44ECA25C,  /* 1893.07373046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC48A760E,  /* -1107.689208984375f */
	    0x41F653B7,  /* 30.790876388549805f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F5,  /* 97.66202545166016f */
	    0x44EE38CD,  /* 1905.7750244140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC48699B8,  /* -1076.8037109375f */
	    0x41F7D163,  /* 30.97723960876465f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F5,  /* 97.66202545166016f */
	    0x44EFC03B,  /* 1918.0072021484375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC482B783,  /* -1045.7347412109375f */
	    0x41F9422E,  /* 31.15731430053711f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F4,  /* 97.66201782226562f */
	    0x44F13886,  /* 1929.766357421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC47D9F4D,  /* -1014.4890747070312f */
	    0x41FAA59C,  /* 31.33086395263672f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F4,  /* 97.66201782226562f */
	    0x44F2A183,  /* 1941.0472412109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC475C4AE,  /* -983.0731201171875f */
	    0x41FBFB9F,  /* 31.497861862182617f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F3,  /* 97.6620101928711f */
	    0x44F3FB0C,  /* 1951.84521484375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC46DDF94,  /* -951.493408203125f */
	    0x41FD4275,  /* 31.65744972229004f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F3,  /* 97.6620101928711f */
	    0x44F544FD,  /* 1962.1558837890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC465F088,  /* -919.75830078125f */
	    0x41FE79E2,  /* 31.809513092041016f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F2,  /* 97.66200256347656f */
	    0x44F67F36,  /* 1971.975341796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC45DF7F7,  /* -887.8744506835938f */
	    0x41FFA27C,  /* 31.95433807373047f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F2,  /* 97.66200256347656f */
	    0x44F7A9A7,  /* 1981.3016357421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC455F661,  /* -855.8496704101562f */
	    0x42005D6E,  /* 32.09123992919922f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F2,  /* 97.66200256347656f */
	    0x44F8C43A,  /* 1990.132080078125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC44DEC4B,  /* -823.6920776367188f */
	    0x4200E207,  /* 32.22072982788086f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F1,  /* 97.66199493408203f */
	    0x44F9CEDE,  /* 1998.464599609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC445DA21,  /* -791.4082641601562f */
	    0x42015F08,  /* 32.342803955078125f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F1,  /* 97.66199493408203f */
	    0x44FAC97E,  /* 2006.296630859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC43DC063,  /* -759.0060424804688f */
	    0x4201D384,  /* 32.45655822753906f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F1,  /* 97.66199493408203f */
	    0x44FBB40C,  /* 2013.62646484375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4359FAA,  /* -726.4947509765625f */
	    0x42023FBE,  /* 32.56224822998047f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FC8E6C,  /* 2020.45068359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC42D786C,  /* -693.881591796875f */
	    0x4202A4A4,  /* 32.66078186035156f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FD588F,  /* 2026.7674560546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4254B16,  /* -661.1732177734375f */
	    0x420301A1,  /* 32.751590728759766f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FE1265,  /* 2032.5748291015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC41D1839,  /* -628.3784790039062f */
	    0x42035681,  /* 32.834476470947266f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FEBBD7,  /* 2037.8699951171875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC414E047,  /* -595.5043334960938f */
	    0x4203A361,  /* 32.909549713134766f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FF54D4,  /* 2042.65087890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC40CA3CE,  /* -562.5594482421875f */
	    0x4203E7FE,  /* 32.97655487060547f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FFDD48,  /* 2046.9150390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC4046349,  /* -529.5513305664062f */
	    0x4204245F,  /* 33.035518646240234f */
	aobjEvent32SetVal(0x002, 5),
	    0x42C352F0,  /* 97.6619873046875f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x45002A8F,  /* 2050.659912109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3F83E86,  /* -496.48846435546875f */
	    0x42045860,  /* 33.0863037109375f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x45005E22,  /* 2053.88330078125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3E7B07C,  /* -463.3787841796875f */
	    0x42048495,  /* 33.12947463989258f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x45008953,  /* 2056.582763671875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3D71D63,  /* -430.2295837402344f */
	    0x4204A808,  /* 33.164093017578125f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x4500AC16,  /* 2058.75537109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3C6867C,  /* -397.0506591796875f */
	    0x4204C2C0,  /* 33.190185546875f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x4500C663,  /* 2060.399169921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3B5ECB5,  /* -363.8492736816406f */
	    0x4204D4BD,  /* 33.2077522277832f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x4500D82E,  /* 2061.51123046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3A5514E,  /* -330.63519287109375f */
	    0x4204DE70,  /* 33.21722412109375f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352EF,  /* 97.66197967529297f */
	    0x4500E16B,  /* 2062.088623046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC394B51B,  /* -297.4148864746094f */
	    0x4204DF92,  /* 33.21833038330078f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352EF,  /* 97.66197967529297f */
	    0x4500E211,  /* 2062.129150390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC384195C,  /* -264.1981201171875f */
	    0x4204D704,  /* 33.20997619628906f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x4500DA15,  /* 2061.630126953125f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC366FE9A,  /* -230.99453735351562f */
	    0x4204C57A,  /* 33.192848205566406f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x4500C970,  /* 2060.58984375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC345D000,  /* -197.8125f */
	    0x4204AB11,  /* 33.167057037353516f */
	aobjEvent32SetVal(0x002, 5),
	    0x42C352F0,  /* 97.6619873046875f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x4500B023,  /* 2059.008544921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC324A915,  /* -164.6604766845703f */
	    0x4204879C,  /* 33.13243103027344f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x45008E31,  /* 2056.886962890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC3038C36,  /* -131.54769897460938f */
	    0x42045B52,  /* 33.08917999267578f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x45006398,  /* 2054.224609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC2C4F6E2,  /* -98.48219299316406f */
	    0x42042595,  /* 33.03670120239258f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x4500305B,  /* 2051.022216796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC282F2E0,  /* -65.474365234375f */
	    0x4203E715,  /* 32.97566604614258f */
	aobjEvent32SetValBlock(0x004, 1),
	    0x44FFE8F6,  /* 2047.280029296875f */
	aobjEvent32SetValRate(0x001, 1),
	    0xC2021FA9,  /* -32.53091812133789f */
	    0x42039F83,  /* 32.9057731628418f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FF5FEF,  /* 2042.9979248046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x3EAC9A40,  /* 0.3371143341064453f */
	    0x42034DF3,  /* 32.82612228393555f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FEC5AA,  /* 2038.177001953125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x42047C2C,  /* 33.12126159667969f */
	    0x4202F411,  /* 32.738346099853516f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FE1A25,  /* 2032.8170166015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4283A0A3,  /* 65.8137435913086f */
	    0x42029087,  /* 32.64113998413086f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FD5D62,  /* 2026.918212890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x42C4CE95,  /* 98.40348052978516f */
	    0x4202238F,  /* 32.534725189208984f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F0,  /* 97.6619873046875f */
	    0x44FC8F68,  /* 2020.4814453125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4302E215,  /* 130.8831329345703f */
	    0x4201AD7E,  /* 32.41942596435547f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F1,  /* 97.66199493408203f */
	    0x44FBB037,  /* 2013.5067138671875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43233E06,  /* 163.24227905273438f */
	    0x42012D59,  /* 32.29428482055664f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F1,  /* 97.66199493408203f */
	    0x44FABFD2,  /* 2005.994384765625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x434378BD,  /* 195.4716339111328f */
	    0x4200A426,  /* 32.160301208496094f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F1,  /* 97.66199493408203f */
	    0x44F9BE3C,  /* 1997.94482421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43639033,  /* 227.5632781982422f */
	    0x42001149,  /* 32.01688003540039f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F2,  /* 97.66200256347656f */
	    0x44F8AB73,  /* 1989.3577880859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4381C0BE,  /* 259.50579833984375f */
	    0x41FEE8FA,  /* 31.863758087158203f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F2,  /* 97.66200256347656f */
	    0x44F78782,  /* 1980.234619140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4391A537,  /* 291.2907409667969f */
	    0x41FD9AEF,  /* 31.700651168823242f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F3,  /* 97.6620101928711f */
	    0x44F65262,  /* 1970.574462890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43A1741A,  /* 322.90704345703125f */
	    0x41FC37AE,  /* 31.52718734741211f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F3,  /* 97.6620101928711f */
	    0x44F50C1C,  /* 1960.37841796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43B12C2A,  /* 354.34503173828125f */
	    0x41FAC0EA,  /* 31.344196319580078f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F3,  /* 97.6620101928711f */
	    0x44F3B4AF,  /* 1949.6463623046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43C0CC35,  /* 385.5953674316406f */
	    0x41F93667,  /* 31.15156364440918f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F4,  /* 97.66201782226562f */
	    0x44F24C1D,  /* 1938.3785400390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43D052F5,  /* 416.6481018066406f */
	    0x41F797C3,  /* 30.9491024017334f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F4,  /* 97.66201782226562f */
	    0x44F0D270,  /* 1926.576171875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43DFBF2C,  /* 447.4935302734375f */
	    0x41F5E577,  /* 30.737043380737305f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F5,  /* 97.66202545166016f */
	    0x44EF47C3,  /* 1914.2425537109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43EF0FA2,  /* 478.12213134765625f */
	    0x41F421AD,  /* 30.516443252563477f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F6,  /* 97.66203308105469f */
	    0x44EDAC33,  /* 1901.3812255859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43FE435F,  /* 508.5263366699219f */
	    0x41F24A77,  /* 30.286359786987305f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F6,  /* 97.66203308105469f */
	    0x44EBFFD6,  /* 1887.994873046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4406AC78,  /* 538.69482421875f */
	    0x41F05EFB,  /* 30.046377182006836f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F7,  /* 97.66204071044922f */
	    0x44EA42CE,  /* 1874.087646484375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x440E279E,  /* 568.6190185546875f */
	    0x41EE6217,  /* 29.797895431518555f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F7,  /* 97.66204071044922f */
	    0x44E87538,  /* 1859.6630859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44159298,  /* 598.29052734375f */
	    0x41EC521B,  /* 29.540090560913086f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F8,  /* 97.66204833984375f */
	    0x44E6972C,  /* 1844.72412109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x441CECBF,  /* 627.6991577148438f */
	    0x41EA2DD7,  /* 29.272382736206055f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F9,  /* 97.66205596923828f */
	    0x44E4A8C9,  /* 1829.2745361328125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44243575,  /* 656.8352661132812f */
	    0x41E7F7B2,  /* 28.99594497680664f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352F9,  /* 97.66205596923828f */
	    0x44E2AA30,  /* 1813.318359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x442B6C40,  /* 685.69140625f */
	    0x41E5AE3B,  /* 28.710073471069336f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FA,  /* 97.66206359863281f */
	    0x44E09B75,  /* 1796.8580322265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4432905E,  /* 714.2557373046875f */
	    0x41E35034,  /* 28.414161682128906f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FB,  /* 97.66207122802734f */
	    0x44DE7CBF,  /* 1779.8983154296875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4439A142,  /* 742.5196533203125f */
	    0x41E0DED5,  /* 28.10880470275879f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FC,  /* 97.66207885742188f */
	    0x44DC4E28,  /* 1762.4423828125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44409E4B,  /* 770.4733276367188f */
	    0x41DE5903,  /* 27.7934627532959f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FC,  /* 97.66207885742188f */
	    0x44DA0FD1,  /* 1744.4942626953125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x444786D2,  /* 798.1065673828125f */
	    0x41DBBFF9,  /* 27.46873664855957f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FD,  /* 97.6620864868164f */
	    0x44D7C1D6,  /* 1726.057373046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x444E5A49,  /* 825.4107055664062f */
	    0x41D9134E,  /* 27.13442611694336f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FE,  /* 97.66209411621094f */
	    0x44D56453,  /* 1707.1351318359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44551806,  /* 852.3753662109375f */
	    0x41D64F7D,  /* 26.7888126373291f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C352FF,  /* 97.66210174560547f */
	    0x44D2F764,  /* 1687.73095703125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x445BBF40,  /* 878.98828125f */
	    0x41D376FE,  /* 26.433101654052734f */
	aobjEvent32SetValBlock(0x026, 1),
	    0x42C35300,  /* 97.662109375f */
	    0x44D07B36,  /* 1667.850341796875f */
	    0x438744C2,  /* 270.53717041015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44624F75,  /* 905.2415161132812f */
	    0x41D08A57,  /* 26.067548751831055f */
	aobjEvent32SetVal(0x020, 15),
	    0x438744C2,  /* 270.53717041015625f */
	aobjEvent32SetValAfter(0x210, 15),
	    0x411ADE5D,  /* 9.679287910461426f */
	    0x428E5385,  /* 71.16312408447266f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35300,  /* 97.662109375f */
	    0x44CDEFD9,  /* 1647.4952392578125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4468C7E5,  /* 931.1233520507812f */
	    0x41CD875D,  /* 25.69109535217285f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35301,  /* 97.66211700439453f */
	    0x44CB5573,  /* 1626.6702880859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x446F27EA,  /* 956.6236572265625f */
	    0x41CA7149,  /* 25.305315017700195f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35302,  /* 97.66212463378906f */
	    0x44C8AC29,  /* 1605.3800048828125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44756EF9,  /* 981.7339477539062f */
	    0x41C7490A,  /* 24.910663604736328f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35302,  /* 97.66212463378906f */
	    0x44C5F42E,  /* 1583.630615234375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x447B9C7A,  /* 1006.4449462890625f */
	    0x41C40FB0,  /* 24.507659912109375f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35303,  /* 97.6621322631836f */
	    0x44C32DBD,  /* 1561.4293212890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4480D7FA,  /* 1030.749267578125f */
	    0x41C0C4A4,  /* 24.09601593017578f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35304,  /* 97.66213989257812f */
	    0x44C0590A,  /* 1538.782470703125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4483D462,  /* 1054.636962890625f */
	    0x41BD67AB,  /* 23.67561912536621f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35305,  /* 97.66214752197266f */
	    0x44BD7653,  /* 1515.6976318359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4486C339,  /* 1078.1007080078125f */
	    0x41B9FA0E,  /* 23.24709701538086f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35307,  /* 97.66216278076172f */
	    0x44BA85CC,  /* 1492.18115234375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4489A434,  /* 1101.13134765625f */
	    0x41B67A25,  /* 22.809640884399414f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35308,  /* 97.66217041015625f */
	    0x44B787B3,  /* 1468.2406005859375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x448C770A,  /* 1123.719970703125f */
	    0x41B2E941,  /* 22.363893508911133f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35309,  /* 97.66217803955078f */
	    0x44B47C46,  /* 1443.883544921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x448F3B7E,  /* 1145.859130859375f */
	    0x41AF4633,  /* 21.909276962280273f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530A,  /* 97.66218566894531f */
	    0x44B163B2,  /* 1419.115478515625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4491F13B,  /* 1167.5384521484375f */
	    0x41AB90A1,  /* 21.445619583129883f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530B,  /* 97.66219329833984f */
	    0x44AE3E44,  /* 1393.94580078125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44949803,  /* 1188.7503662109375f */
	    0x41A7CA10,  /* 20.973663330078125f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530C,  /* 97.66220092773438f */
	    0x44AB0C2C,  /* 1368.38037109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44972F8C,  /* 1209.48583984375f */
	    0x41A3F0FC,  /* 20.49266815185547f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530D,  /* 97.6622085571289f */
	    0x44A7CDA7,  /* 1342.4266357421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4499B78A,  /* 1229.735595703125f */
	    0x41A00529,  /* 20.002519607543945f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3530E,  /* 97.66221618652344f */
	    0x44A482F2,  /* 1316.092041015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x449C2FB4,  /* 1249.49072265625f */
	    0x419C0657,  /* 19.503095626831055f */
	aobjEvent32SetValAfter(0x200, 105),
	    0x429BCC03,  /* 77.8984603881836f */
	aobjEvent32SetValAfter(0x010, 125),
	    0x411B0A3E,  /* 9.690000534057617f */
	aobjEvent32SetValBlock(0x026, 1),
	    0x42C3530E,  /* 97.66221618652344f */
	    0x44A12C4B,  /* 1289.3841552734375f */
	    0x436459C7,  /* 228.35069274902344f */
	aobjEvent32SetValRate(0x001, 1),
	    0x449E97BD,  /* 1268.7418212890625f */
	    0x4197F3D7,  /* 18.994062423706055f */
	aobjEvent32SetVal(0x020, 104),
	    0x436459C7,  /* 228.35069274902344f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35310,  /* 97.6622314453125f */
	    0x449DC9F0,  /* 1262.310546875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A0EF53,  /* 1287.4788818359375f */
	    0x4193CDA7,  /* 18.47541618347168f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35311,  /* 97.66223907470703f */
	    0x449A5C25,  /* 1234.8795166015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A3362A,  /* 1305.692626953125f */
	    0x418F945D,  /* 17.94744300842285f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35312,  /* 97.66224670410156f */
	    0x4496E327,  /* 1207.0985107421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A56BF6,  /* 1323.373779296875f */
	    0x418B46EB,  /* 17.40962791442871f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35313,  /* 97.6622543334961f */
	    0x44935F2D,  /* 1178.9742431640625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A79061,  /* 1340.5118408203125f */
	    0x4186E7A8,  /* 16.863113403320312f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3536F,  /* 97.66295623779297f */
	    0x448FD089,  /* 1150.5167236328125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A9A332,  /* 1357.099853515625f */
	    0x418279FB,  /* 16.309560775756836f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3564F,  /* 97.66857147216797f */
	    0x448C3781,  /* 1121.7344970703125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44ABA432,  /* 1373.131103515625f */
	    0x417BFCFA,  /* 15.749261856079102f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C35E79,  /* 97.68451690673828f */
	    0x4488946F,  /* 1092.6385498046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44AD9328,  /* 1388.5986328125f */
	    0x4172EBF3,  /* 15.182604789733887f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C36EC3,  /* 97.7163314819336f */
	    0x4484E7AC,  /* 1063.23974609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44AF6FE2,  /* 1403.496337890625f */
	    0x4169C0AF,  /* 14.609541893005371f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C38A10,  /* 97.7696533203125f */
	    0x44813187,  /* 1033.5477294921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B13A2A,  /* 1417.817626953125f */
	    0x4160794A,  /* 14.029611587524414f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3B351,  /* 97.85022735595703f */
	    0x447AE4AD,  /* 1003.5730590820312f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B2F1C7,  /* 1431.5555419921875f */
	    0x415715C5,  /* 13.442814826965332f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C3ED85,  /* 97.96390533447266f */
	    0x447354F3,  /* 973.3273315429688f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B49681,  /* 1444.7032470703125f */
	    0x414D98B5,  /* 12.84978199005127f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C43BBC,  /* 98.11666870117188f */
	    0x446BB490,  /* 942.8212890625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B62829,  /* 1457.2550048828125f */
	    0x41440037,  /* 12.250052452087402f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C4A114,  /* 98.31460571289062f */
	    0x44640422,  /* 912.0645751953125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B7A682,  /* 1469.203369140625f */
	    0x413A4B9C,  /* 11.64345932006836f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C520BA,  /* 98.56391906738281f */
	    0x445C4471,  /* 881.0693969726562f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B91158,  /* 1480.5419921875f */
	    0x41307BCF,  /* 11.030226707458496f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C5BDEE,  /* 98.87095642089844f */
	    0x44547626,  /* 849.8460693359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BA6871,  /* 1491.2637939453125f */
	    0x41268DC6,  /* 10.409612655639648f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C67C00,  /* 99.2421875f */
	    0x444C99F1,  /* 818.4053344726562f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BBAB8F,  /* 1501.3612060546875f */
	    0x411C82AE,  /* 9.781904220581055f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C75E4D,  /* 99.6841812133789f */
	    0x4444B0BA,  /* 786.7613525390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BCDA7C,  /* 1510.82763671875f */
	    0x41125AFD,  /* 9.14721393585205f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C8684B,  /* 100.20369720458984f */
	    0x443CBB18,  /* 754.92333984375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BDF4FA,  /* 1519.655517578125f */
	    0x410814D5,  /* 8.505085945129395f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42C99D7D,  /* 100.8075942993164f */
	    0x4434B9DA,  /* 722.9039306640625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BEFACF,  /* 1527.8377685546875f */
	    0x40FB5F77,  /* 7.855403423309326f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42CB017D,  /* 101.5029067993164f */
	    0x442CADC2,  /* 690.7149658203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BFEBB9,  /* 1535.3663330078125f */
	    0x40E6560A,  /* 7.198002815246582f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42CC97F5,  /* 102.29679107666016f */
	    0x442497A5,  /* 658.3694458007812f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C0C77C,  /* 1542.23388671875f */
	    0x40D119FB,  /* 6.534421443939209f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42CE6463,  /* 103.1960678100586f */
	    0x441C784F,  /* 625.8798217773438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C18DEE,  /* 1548.435302734375f */
	    0x40BBBD74,  /* 5.866876602172852f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42D067C0,  /* 104.20263671875f */
	    0x4414509F,  /* 593.2597045898438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C23EF6,  /* 1553.967529296875f */
	    0x40A6464A,  /* 5.196080207824707f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42D2A18B,  /* 105.31551361083984f */
	    0x440C2170,  /* 560.5224609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C2DA7A,  /* 1558.827392578125f */
	    0x4090B4E1,  /* 4.522079944610596f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42D51139,  /* 106.53363800048828f */
	    0x4403EBAD,  /* 527.6824340820312f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C36060,  /* 1563.01171875f */
	    0x4076153F,  /* 3.8450467586517334f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42D7B63B,  /* 107.85591888427734f */
	    0x43F7606D,  /* 494.7533264160156f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C3D090,  /* 1566.517578125f */
	    0x404A92CD,  /* 3.165210008621216f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42DA8FF3,  /* 109.2811508178711f */
	    0x43E6E023,  /* 461.7510681152344f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C42AF3,  /* 1569.3421630859375f */
	    0x401EDF9A,  /* 2.4823975563049316f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42DD9DDE,  /* 110.80833435058594f */
	    0x43D657DB,  /* 428.6863708496094f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C46F6F,  /* 1571.4822998046875f */
	    0x3FE5F92E,  /* 1.7966668605804443f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42E0DF50,  /* 112.4361572265625f */
	    0x43C5C9C6,  /* 395.57635498046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C49DF0,  /* 1572.935546875f */
	    0x3F8DD569,  /* 1.1080752611160278f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42E453BA,  /* 114.16352844238281f */
	    0x43B53776,  /* 362.43328857421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C4B65A,  /* 1573.698486328125f */
	    0x3ED5390D,  /* 0.4164508879184723f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42E7FA7B,  /* 115.98921966552734f */
	    0x43A4A2CF,  /* 329.2719421386719f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C4B897,  /* 1573.7684326171875f */
	    0xBE8E6989,  /* -0.27814891934394836f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42EBD2E0,  /* 117.911865234375f */
	    0x43940DEE,  /* 296.10882568359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C4A48D,  /* 1573.1422119140625f */
	    0xBF79CCD0,  /* -0.9757814407348633f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42EFDC55,  /* 119.93033599853516f */
	    0x43837A79,  /* 262.9568176269531f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C47A23,  /* 1571.8167724609375f */
	    0xBFD6998D,  /* -1.6765609979629517f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42F41633,  /* 122.0433578491211f */
	    0x4365D4A6,  /* 229.83065795898438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C43940,  /* 1569.7890625f */
	    0xC0185ADA,  /* -2.380545139312744f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42F87FD0,  /* 124.2496337890625f */
	    0x4344BED1,  /* 196.74537658691406f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C3E1C9,  /* 1567.0557861328125f */
	    0xC0459EF0,  /* -3.0878257751464844f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x42FD186B,  /* 126.54769134521484f */
	    0x4323B815,  /* 163.7190704345703f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C373A1,  /* 1563.6134033203125f */
	    0xC0731B8D,  /* -3.7985565662384033f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4300EFB8,  /* 128.9364013671875f */
	    0x4302C3A0,  /* 130.76416015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C2EEAD,  /* 1559.4586181640625f */
	    0xC0905F19,  /* -4.511608600616455f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43036A0A,  /* 131.41421508789062f */
	    0x42C3CC85,  /* 97.89945220947266f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C252E2,  /* 1554.590087890625f */
	    0xC0A72E52,  /* -5.224404335021973f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4305FAD6,  /* 133.97982788085938f */
	    0x428246A9,  /* 65.13800811767578f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C1A050,  /* 1549.009765625f */
	    0xC0BDEF04,  /* -5.935426712036133f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4308A1AA,  /* 136.63150024414062f */
	    0x4201FD97,  /* 32.49764633178711f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44C0D705,  /* 1542.7193603515625f */
	    0xC0D49FC5,  /* -6.644503116607666f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x430B5E17,  /* 139.36753845214844f */
	    0xBBB6DA2D,  /* -0.005580207798629999f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BFF711,  /* 1535.7208251953125f */
	    0xC0EB4187,  /* -7.351748943328857f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x430E2FB2,  /* 142.18630981445312f */
	    0xC2016D54,  /* -32.35676574707031f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BF0082,  /* 1528.015869140625f */
	    0xC100E970,  /* -8.056991577148438f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43111611,  /* 145.08619689941406f */
	    0xC28114CC,  /* -64.54061889648438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BDF36B,  /* 1519.6068115234375f */
	    0xC10C27C7,  /* -8.759711265563965f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x431410BC,  /* 148.06536865234375f */
	    0xC2C114C0,  /* -96.54052734375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BCCFE2,  /* 1510.496337890625f */
	    0xC1175DF5,  /* -9.46043872833252f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43171F38,  /* 151.1219482421875f */
	    0xC30056CD,  /* -128.3390655517578f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BB95F3,  /* 1500.6859130859375f */
	    0xC1228C9E,  /* -10.159330368041992f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x431A411B,  /* 154.2543182373047f */
	    0xC31FEBF1,  /* -159.92164611816406f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44BA45AF,  /* 1490.1776123046875f */
	    0xC12DB043,  /* -10.8555326461792f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x431D75EF,  /* 157.46067810058594f */
	    0xC33F45B7,  /* -191.27232360839844f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B8DF32,  /* 1478.974853515625f */
	    0xC138CD1C,  /* -11.55007553100586f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4320BD25,  /* 160.7388458251953f */
	    0xC35E5F05,  /* -222.3711700439453f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B7627B,  /* 1467.0775146484375f */
	    0xC143E1C0,  /* -12.24261474609375f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43241671,  /* 164.08766174316406f */
	    0xC37D351C,  /* -253.20745849609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B5CFAC,  /* 1454.48974609375f */
	    0xC14EEBD9,  /* -12.93257999420166f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4327812D,  /* 167.5045928955078f */
	    0xC38DE118,  /* -283.758544921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B426CC,  /* 1441.21240234375f */
	    0xC159EE36,  /* -13.620656967163086f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x432AFCF2,  /* 170.98806762695312f */
	    0xC39D013B,  /* -314.0096130371094f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B267F3,  /* 1427.2484130859375f */
	    0xC164E8D6,  /* -14.306844711303711f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x432E892D,  /* 174.5358428955078f */
	    0xC3ABF871,  /* -343.9409484863281f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44B09329,  /* 1412.5987548828125f */
	    0xC16FD8EB,  /* -14.990458488464355f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43322571,  /* 178.14625549316406f */
	    0xC3BAC4AB,  /* -373.5364685058594f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44AEA890,  /* 1397.267578125f */
	    0xC17AB3E9,  /* -15.668923377990723f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4335D160,  /* 181.81787109375f */
	    0xC3C96374,  /* -402.7769775390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44ACA859,  /* 1381.2608642578125f */
	    0xC182B674,  /* -16.339088439941406f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43398D1E,  /* 185.55123901367188f */
	    0xC3D7D2E3,  /* -431.6475524902344f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44AA92DC,  /* 1364.58935546875f */
	    0xC18803B9,  /* -17.00181770324707f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x433D58AF,  /* 189.34642028808594f */
	    0xC3E61031,  /* -460.1264953613281f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A8683C,  /* 1347.25732421875f */
	    0xC18D41FD,  /* -17.6572208404541f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43413471,  /* 193.20484924316406f */
	    0xC3F41A0F,  /* -488.2035827636719f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A628CD,  /* 1329.2750244140625f */
	    0xC1926E17,  /* -18.303754806518555f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4345207B,  /* 197.1268768310547f */
	    0xC400F6F8,  /* -515.85888671875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A3D4CB,  /* 1310.6497802734375f */
	    0xC19788C3,  /* -18.9417781829834f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43491D06,  /* 201.11337280273438f */
	    0xC407C4E8,  /* -543.07666015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44A16C82,  /* 1291.390869140625f */
	    0xC19C9244,  /* -19.57141876220703f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x434D2A42,  /* 205.16506958007812f */
	    0xC40E75B7,  /* -569.8392944335938f */
	aobjEvent32SetValRate(0x001, 1),
	    0x449EF03A,  /* 1271.507080078125f */
	    0xC1A18A1A,  /* -20.192432403564453f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43514866,  /* 209.28280639648438f */
	    0xC4150847,  /* -596.1293334960938f */
	aobjEvent32SetValRate(0x001, 1),
	    0x449C6032,  /* 1251.006103515625f */
	    0xC1A670D4,  /* -20.805091857910156f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x435577B9,  /* 213.46766662597656f */
	    0xC41B7B8F,  /* -621.9306030273438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4499BCB3,  /* 1229.8968505859375f */
	    0xC1AB45BF,  /* -21.409055709838867f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4359B878,  /* 217.7205810546875f */
	    0xC421CE6C,  /* -647.225341796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44970604,  /* 1208.18798828125f */
	    0xC1B007AD,  /* -22.003747940063477f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x435E0AF4,  /* 222.04278564453125f */
	    0xC427FFC2,  /* -671.9962158203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44943C76,  /* 1185.889404296875f */
	    0xC1B4B7AD,  /* -22.589685440063477f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43626F5E,  /* 226.43502807617188f */
	    0xC42E0E4E,  /* -696.2235107421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44916047,  /* 1163.0086669921875f */
	    0xC1B953FE,  /* -23.166011810302734f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4366E61D,  /* 230.8988800048828f */
	    0xC433F8FF,  /* -719.8905639648438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x448E71D7,  /* 1139.5574951171875f */
	    0xC1BDDDAC,  /* -23.733238220214844f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x436B6F60,  /* 235.43505859375f */
	    0xC439BE6C,  /* -742.975341796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x448B715A,  /* 1115.542236328125f */
	    0xC1C2527E,  /* -24.290279388427734f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43700ACE,  /* 240.04220581054688f */
	    0xC43F5D97,  /* -765.4623413085938f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44885F43,  /* 1090.9769287109375f */
	    0xC1C6AEB4,  /* -24.835304260253906f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4374B2C1,  /* 244.69825744628906f */
	    0xC444D567,  /* -787.3344116210938f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44853BE5,  /* 1065.8717041015625f */
	    0xC1CAF4E3,  /* -25.36957359313965f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43795FCF,  /* 249.37425231933594f */
	    0xC44A251F,  /* -808.5800170898438f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4482079C,  /* 1040.23779296875f */
	    0xC1CF2527,  /* -25.89314079284668f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x437E0A48,  /* 254.0401611328125f */
	    0xC44F4BF0,  /* -829.1865234375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x447D8578,  /* 1014.08544921875f */
	    0xC1D33EAF,  /* -26.405607223510742f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43815522,  /* 258.66510009765625f */
	    0xC454490C,  /* -849.141357421875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4476DB4F,  /* 987.4266967773438f */
	    0xC1D742C5,  /* -26.907602310180664f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43839BC6,  /* 263.21697998046875f */
	    0xC4591B8B,  /* -868.4303588867188f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4470114D,  /* 960.2703247070312f */
	    0xC1DB2F70,  /* -27.398162841796875f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4385D4DC,  /* 267.6629638671875f */
	    0xC45DC2A0,  /* -887.041015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4469284C,  /* 932.629638671875f */
	    0xC1DF04C0,  /* -27.8773193359375f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4387FBF6,  /* 271.96844482421875f */
	    0xC4623D3D,  /* -904.9568481445312f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44622102,  /* 904.5157470703125f */
	    0xC1E2C394,  /* -28.345497131347656f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x438A0C83,  /* 276.0977478027344f */
	    0xC4668A68,  /* -922.16259765625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x445AFC13,  /* 875.9386596679688f */
	    0xC1E667CE,  /* -28.80068588256836f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x438C01CD,  /* 280.0140686035156f */
	    0xC46AA924,  /* -938.642822265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4453BA86,  /* 846.9144287109375f */
	    0xC1E9F16F,  /* -29.242887496948242f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x438DD6CF,  /* 283.6781921386719f */
	    0xC46E982E,  /* -954.3778076171875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x444C5CFD,  /* 817.4529418945312f */
	    0xC1ED5F85,  /* -29.671640396118164f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x438F866A,  /* 287.05010986328125f */
	    0xC4725671,  /* -969.3506469726562f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4444E48E,  /* 787.5711669921875f */
	    0xC1F0AB9F,  /* -30.083799362182617f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43910B2D,  /* 290.0873107910156f */
	    0xC475E28C,  /* -983.539794921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x443D5244,  /* 757.285400390625f */
	    0xC1F3D0EF,  /* -30.477018356323242f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43925FBA,  /* 292.74786376953125f */
	    0xC4793B27,  /* -996.9242553710938f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4435A780,  /* 726.6171875f */
	    0xC1F6C3AE,  /* -30.84554672241211f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43938448,  /* 295.033447265625f */
	    0xC47C5F02,  /* -1009.4844970703125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x442DE60A,  /* 695.5943603515625f */
	    0xC1F97C03,  /* -31.1855525970459f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43947E5A,  /* 296.98712158203125f */
	    0xC47F4D06,  /* -1021.2034912109375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44260FC1,  /* 664.2461547851562f */
	    0xC1FBFD52,  /* -31.49869155883789f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439553F0,  /* 298.65576171875f */
	    0xC4810212,  /* -1032.064697265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x441E2636,  /* 632.5970458984375f */
	    0xC1FE48E6,  /* -31.785594940185547f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43960B62,  /* 300.08892822265625f */
	    0xC48241BE,  /* -1042.054443359375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44162B34,  /* 600.675048828125f */
	    0xC2002FC9,  /* -32.04666519165039f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4396AB49,  /* 301.3381652832031f */
	    0xC4836510,  /* -1051.158203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x440E203E,  /* 568.5037841796875f */
	    0xC201206E,  /* -32.28166961669922f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43973A8D,  /* 302.4574279785156f */
	    0xC4846B9B,  /* -1059.3626708984375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x44060727,  /* 536.1117553710938f */
	    0xC201F64C,  /* -32.49052429199219f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4397C05E,  /* 303.50286865234375f */
	    0xC48554EE,  /* -1066.654052734375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43FBC2EC,  /* 503.5228271484375f */
	    0xC202AFE5,  /* -32.67177200317383f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4398443A,  /* 304.53302001953125f */
	    0xC486209D,  /* -1073.0191650390625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43EB6238,  /* 470.767333984375f */
	    0xC2034D8A,  /* -32.825721740722656f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4398CDEB,  /* 305.6087341308594f */
	    0xC486CE36,  /* -1078.444091796875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43DAEF8B,  /* 437.8714294433594f */
	    0xC203CE72,  /* -32.95160675048828f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x4399658E,  /* 306.79339599609375f */
	    0xC4875D45,  /* -1082.9146728515625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43CA6E9E,  /* 404.86419677734375f */
	    0xC2042EAC,  /* -33.04557800292969f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439A1396,  /* 308.15301513671875f */
	    0xC487CD58,  /* -1086.4169921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43B9E3E2,  /* 371.78033447265625f */
	    0xC2046E1D,  /* -33.1075325012207f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439AE0B8,  /* 309.755615234375f */
	    0xC4881DF2,  /* -1088.935791015625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43A95319,  /* 338.6492004394531f */
	    0xC2048E88,  /* -33.139190673828125f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439BD149,  /* 311.6350402832031f */
	    0xC4884EB8,  /* -1090.4599609375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4398C043,  /* 305.5020446777344f */
	    0xC2049024,  /* -33.14076232910156f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439CE14E,  /* 313.76019287109375f */
	    0xC4885F82,  /* -1090.984619140625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x43882F12,  /* 272.36773681640625f */
	    0xC20472D6,  /* -33.112144470214844f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439E0BCB,  /* 316.0921325683594f */
	    0xC488502F,  /* -1090.5057373046875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x436F471E,  /* 239.27780151367188f */
	    0xC204388B,  /* -33.05521774291992f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x439F4B85,  /* 318.5899963378906f */
	    0xC48820A1,  /* -1089.0196533203125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x434E41E2,  /* 206.25735473632812f */
	    0xC203E27A,  /* -32.971168518066406f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A09B1A,  /* 321.21173095703125f */
	    0xC487D0B4,  /* -1086.52197265625f */
	aobjEvent32SetValRate(0x001, 1),
	    0x432D55E6,  /* 173.33554077148438f */
	    0xC2036E5D,  /* -32.8577766418457f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A1F4E8,  /* 323.913330078125f */
	    0xC4876046,  /* -1083.008544921875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x430C8AB7,  /* 140.54185485839844f */
	    0xC202DC2C,  /* -32.71501159667969f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A35310,  /* 326.64892578125f */
	    0xC486CF2B,  /* -1078.4739990234375f */
	aobjEvent32SetValRate(0x001, 1),
	    0x42D7CFA7,  /* 107.90557098388672f */
	    0xC2022C46,  /* -32.543235778808594f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A4AF6D,  /* 329.3705139160156f */
	    0xC4861D37,  /* -1072.9129638671875f */
	aobjEvent32SetValRate(0x001, 1),
	    0x4296E930,  /* 75.4554443359375f */
	    0xC2015BB6,  /* -32.339561462402344f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A60397,  /* 332.0280456542969f */
	    0xC4854A31,  /* -1066.3184814453125f */
	aobjEvent32SetValRate(0x001, 1),
	    0x422CE7F2,  /* 43.22650909423828f */
	    0xC20068E8,  /* -32.102447509765625f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A748C4,  /* 334.5684814453125f */
	    0xC48455E0,  /* -1058.68359375f */
	aobjEvent32SetVal0Rate(0x001, 1),
	    0x41340281,  /* 11.250611305236816f */
	aobjEvent32SetValBlock(0x006, 1),
	    0x43A877DD,  /* 336.9364318847656f */
	    0xC4833FFC,  /* -1049.99951171875f */
	aobjEvent32SetVal(0x046, 20),
	    0x43A877DD,  /* 336.9364318847656f */
	    0xC403F89A,  /* -527.8843994140625f */
	    0xC39243D7,  /* -292.5299987792969f */
	aobjEvent32SetValAfter(0x200, 20),
	    0x429BCC03,  /* 77.8984603881836f */
	aobjEvent32SetVal0Rate(0x001, 20),
	    0x41340281,  /* 11.250611305236816f */
	aobjEvent32SetValBlock(0x020, 10),
	    0x43EB0BA5,  /* 470.0909729003906f */
	aobjEvent32SetValBlock(0x020, 10),
	    0x445CB755,  /* 882.8645629882812f */
	aobjEvent32End(),
};

