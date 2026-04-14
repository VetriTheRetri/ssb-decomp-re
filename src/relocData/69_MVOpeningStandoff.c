/* relocData file 69: MVOpeningStandoff */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

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
u8 dMVOpeningStandoff_Tex_0x0080[2056] = {
	#include <MVOpeningStandoff/Tex_0x0080.tex.inc.c>
};

/* Texture data @ 0x0888 (2056 bytes) */
u8 dMVOpeningStandoff_Tex_0x0888[2056] = {
	#include <MVOpeningStandoff/Tex_0x0888.tex.inc.c>
};

/* Texture data @ 0x1090 (512 bytes) */
u8 dMVOpeningStandoff_Tex_0x1090[512] = {
	#include <MVOpeningStandoff/Tex_0x1090.tex.inc.c>
};

/* Vtx: Vtx_0x1290 @ 0x1290 (32 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1290_Vtx[32] = {
	#include <MVOpeningStandoff/Vtx_0x1290.vtx.inc.c>
};

/* Vtx: Vtx_0x1490 @ 0x1490 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1490_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x1490.vtx.inc.c>
};

/* Vtx: Vtx_0x14A0 @ 0x14A0 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x14A0_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x14A0.vtx.inc.c>
};

/* Vtx: Vtx_0x14B0 @ 0x14B0 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x14B0_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x14B0.vtx.inc.c>
};

/* Vtx: Vtx_0x14C0 @ 0x14C0 (3 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x14C0_Vtx[3] = {
	#include <MVOpeningStandoff/Vtx_0x14C0.vtx.inc.c>
};

/* Vtx: Vtx_0x14F0 @ 0x14F0 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x14F0_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x14F0.vtx.inc.c>
};

/* Vtx: Vtx_0x1500 @ 0x1500 (1 vertices) */
Vtx dMVOpeningStandoff_Vtx_0x1500_Vtx[1] = {
	#include <MVOpeningStandoff/Vtx_0x1500.vtx.inc.c>
};

/* Raw data from file offset 0x1510 to 0x15D0 (192 bytes) */
u8 dMVOpeningStandoff_gap_0x1510[192] = {
	#include <MVOpeningStandoff/gap_0x1510.data.inc.c>
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
u8 dMVOpeningStandoff_Ground_post[16424] = {
	#include <MVOpeningStandoff/Ground_post.data.inc.c>
};

/* MObjSub: LightningMObjSub @ 0x6140 */
MObjSub dMVOpeningStandoff_LightningMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x1854, 0x1930,
	408361266,
	0.0f, 0.0f,
	2.79300700000659e-24f, 2.8317814856504657e-24f,
	0.0f, 0.0f,
	(void**)0x185C1938,
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
};

/* Raw data from file offset 0x61B8 to 0x6950 (1944 bytes) */
u8 dMVOpeningStandoff_gap_0x61B8[1944] = {
	#include <MVOpeningStandoff/gap_0x61B8.data.inc.c>
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
u8 dMVOpeningStandoff_LightningMatAnimJoint_MatAnimJoint[424] = {
	#include <MVOpeningStandoff/LightningMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6D60 to 0x7250 (1264 bytes) */
u8 dMVOpeningStandoff_LightningAnimJoint_AnimJoint[1264] = {
	#include <MVOpeningStandoff/LightningAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7250 to 0x8F30 (7392 bytes) */
u8 dMVOpeningStandoff_Cam_AnimJoint[7392] = {
	#include <MVOpeningStandoff/Cam_AnimJoint.data.inc.c>
};

