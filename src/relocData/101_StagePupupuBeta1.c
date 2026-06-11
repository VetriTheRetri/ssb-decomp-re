/* relocData file 101: StagePupupuBeta1 — Pupupu Beta stage geometry.
 *
 * Fully typed: 12 Vtx arrays in the data pool, 8 contiguous Gfx[] DLs,
 * and a DObjDesc[3] trailer. 48 intern chain entries inside the DLs
 * resolve back into the Vtx pool; 34 extern chain entries resolve
 * into StagePupupuBetaImages (LUT + Tex pairs).
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* @ 0x0000, 80 bytes — Vtx[5] */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dStagePupupuBetaImages_Lut_0x0008_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0238_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0468_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0898_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0AC8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0CF8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x1128_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x11D8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x1A08_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x2238_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x22E8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x2398_palette[];
extern u8 dStagePupupuBetaImages_Tex_0x0030[];
extern u8 dStagePupupuBetaImages_Tex_0x0260[];
extern u8 dStagePupupuBetaImages_Tex_0x0490[];
extern u8 dStagePupupuBetaImages_Tex_0x08C0[];
extern u8 dStagePupupuBetaImages_Tex_0x0AF0[];
extern u8 dStagePupupuBetaImages_Tex_0x0D20[];
extern u8 dStagePupupuBetaImages_Tex_0x1150[];
extern u8 dStagePupupuBetaImages_Tex_0x1200[];
extern u8 dStagePupupuBetaImages_Tex_0x1A30[];
extern u8 dStagePupupuBetaImages_Tex_0x2260[];
extern u8 dStagePupupuBetaImages_Tex_0x2310[];
extern u8 dStagePupupuBetaImages_Tex_0x23C0[];
extern Gfx dStagePupupuBeta1_DL_0x0378[];
extern Gfx dStagePupupuBeta1_DL_0x0F80[];
extern u32 dStagePupupuBeta1_data_0x09C8[26];
extern u32 dStagePupupuBeta1_data_0x0A30[26];
extern u32 dStagePupupuBeta1_data_0x0A98[26];
extern u32 dStagePupupuBeta1_data_0x0B00[26];
extern u16 dStagePupupuBetaImages_Lut_0x0008_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0238_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0468_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0898_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0AC8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x0CF8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x1128_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x11D8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x1A08_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x2238_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x22E8_palette[];
extern u16 dStagePupupuBetaImages_Lut_0x2398_palette[];
extern u8 dStagePupupuBetaImages_Tex_0x0030[];
extern u8 dStagePupupuBetaImages_Tex_0x0260[];
extern u8 dStagePupupuBetaImages_Tex_0x0490[];
extern u8 dStagePupupuBetaImages_Tex_0x08C0[];
extern u8 dStagePupupuBetaImages_Tex_0x0AF0[];
extern u8 dStagePupupuBetaImages_Tex_0x0D20[];
extern u8 dStagePupupuBetaImages_Tex_0x1150[];
extern u8 dStagePupupuBetaImages_Tex_0x1200[];
extern u8 dStagePupupuBetaImages_Tex_0x1A30[];
extern u8 dStagePupupuBetaImages_Tex_0x2260[];
extern u8 dStagePupupuBetaImages_Tex_0x2310[];
extern u8 dStagePupupuBetaImages_Tex_0x23C0[];
Vtx dStagePupupuBeta1_Vtx_0x0000[5] = {
	#include <StagePupupuBeta1/Vtx_0x0000.vtx.inc.c>
};

/* @ 0x0050, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0050[4] = {
	#include <StagePupupuBeta1/Vtx_0x0050.vtx.inc.c>
};

/* @ 0x0090, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0090[4] = {
	#include <StagePupupuBeta1/Vtx_0x0090.vtx.inc.c>
};

/* @ 0x00D0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x00D0[4] = {
	#include <StagePupupuBeta1/Vtx_0x00D0.vtx.inc.c>
};

/* @ 0x0110, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0110[4] = {
	#include <StagePupupuBeta1/Vtx_0x0110.vtx.inc.c>
};

/* @ 0x0150, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0150[4] = {
	#include <StagePupupuBeta1/Vtx_0x0150.vtx.inc.c>
};

/* @ 0x0190, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0190[4] = {
	#include <StagePupupuBeta1/Vtx_0x0190.vtx.inc.c>
};

/* @ 0x01D0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x01D0[4] = {
	#include <StagePupupuBeta1/Vtx_0x01D0.vtx.inc.c>
};

/* @ 0x0210, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0210[4] = {
	#include <StagePupupuBeta1/Vtx_0x0210.vtx.inc.c>
};

/* @ 0x0250, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0250[4] = {
	#include <StagePupupuBeta1/Vtx_0x0250.vtx.inc.c>
};

/* @ 0x0290, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x0290[4] = {
	#include <StagePupupuBeta1/Vtx_0x0290.vtx.inc.c>
};

/* @ 0x02D0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta1_Vtx_0x02D0[4] = {
	#include <StagePupupuBeta1/Vtx_0x02D0.vtx.inc.c>
};

/* @ 0x0310, 104 bytes — Gfx[13] DL */
Gfx dStagePupupuBeta1_DL_0x0310[13] = {
	#include <StagePupupuBeta1/DL_0x0310.dl.inc.c>
};

/* @ 0x0378, 496 bytes — Gfx[62] DL */
Gfx dStagePupupuBeta1_DL_0x0378[62] = {
	#include <StagePupupuBeta1/DL_0x0378.dl.inc.c>
};

/* @ 0x0568, 120 bytes — Gfx[15] DL */
Gfx dStagePupupuBeta1_DL_0x0568[15] = {
	#include <StagePupupuBeta1/DL_0x0568.dl.inc.c>
};

/* @ 0x05E0, 144 bytes — Gfx[18] DL */
Gfx dStagePupupuBeta1_DL_0x05E0[18] = {
	#include <StagePupupuBeta1/DL_0x05E0.dl.inc.c>
};

/* @ 0x0670, 232 bytes — Gfx[29] DL */
Gfx dStagePupupuBeta1_DL_0x0670[29] = {
	#include <StagePupupuBeta1/DL_0x0670.dl.inc.c>
};

/* @ 0x0758, 280 bytes — Gfx[35] DL */
Gfx dStagePupupuBeta1_DL_0x0758[35] = {
	#include <StagePupupuBeta1/DL_0x0758.dl.inc.c>
};

/* @ 0x0870, 308 bytes — DObjDesc[7] layer-0 scene-object list
 * (GRPupupuSmallMap.gr_desc[0][0] targets it). */
DObjDesc dStagePupupuBeta1_DObjDesc_0x0870[7] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStagePupupuBeta1_DL_0x0310, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStagePupupuBeta1_DL_0x0568, { -180.00003051757812f, 1769.9998779296875f, -660.0f }, { 0.0f, 0.0f, 0.00020399999630171806f }, { 0.9998540282249451f, 0.9998540282249451f, 1.0f } },
	{ 2, (void*)dStagePupupuBeta1_DL_0x05E0, { 480.0f, 1290.0f, -570.0f }, { 0.0f, 0.0f, 0.00020399999630171806f }, { 0.9998540282249451f, 0.9998540282249451f, 1.0f } },
	{ 2, (void*)dStagePupupuBeta1_DL_0x0670, { -450.0f, 1260.0f, -510.0f }, { 0.0f, 0.0f, -0.00020399999630171806f }, { 0.9500730037689209f, 0.9500730037689209f, 1.0f } },
	{ 2, (void*)dStagePupupuBeta1_DL_0x0758, { 180.00003051757812f, 1620.0f, -420.0f }, { 0.0f, 0.0f, -0.00020399999630171806f }, { 0.9001460075378418f, 0.9001460075378418f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* AObjEvent32 *[6] @ 0x09B0 — anim_joints table for DObjDesc_0x0870
 * (GRPupupuSmallMap.gr_desc[0][1] targets it). [0]/[1] static;
 * [2]–[5] drive the four animated joints via the looping scripts below. */
AObjEvent32 *dStagePupupuBeta1_DObjDesc_0x0870_AnimJoint[6] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStagePupupuBeta1_data_0x09C8,
	(AObjEvent32 *)dStagePupupuBeta1_data_0x0A30,
	(AObjEvent32 *)dStagePupupuBeta1_data_0x0A98,
	(AObjEvent32 *)dStagePupupuBeta1_data_0x0B00,
};

u32 dStagePupupuBeta1_data_0x09C8[26] = {
	aobjEvent32SetVal0RateBlock(0x184, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x184, 45),
	    0x3E0EFA35,  /* 0.13962633907794952f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32Cmd12(0x184, 1),
	aobjEvent32Wait(44),
	aobjEvent32SetValRate(0x004, 45),
	    0x00000000,  /* 0.0f */
	    0xBB3702D2,  /* -0.002792526502162218f */
	aobjEvent32SetVal0RateBlock(0x180, 45),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x184, 55),
	    0xBE0EFA35,  /* -0.13962633907794952f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetVal0RateBlock(0x184, 35),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuBeta1_data_0x09C8,
};

u32 dStagePupupuBeta1_data_0x0A30[26] = {
	aobjEvent32SetVal0RateBlock(0x184, 0),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x184, 45),
	    0x3E0EFA35,  /* 0.13962633907794952f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32Cmd12(0x184, 1),
	aobjEvent32Wait(44),
	aobjEvent32SetValRate(0x004, 45),
	    0x00000000,  /* 0.0f */
	    0xBB3702D2,  /* -0.002792526502162218f */
	aobjEvent32SetVal0RateBlock(0x180, 45),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x184, 55),
	    0xBE0EFA35,  /* -0.13962633907794952f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetVal0RateBlock(0x184, 35),
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuBeta1_data_0x0A30,
};

u32 dStagePupupuBeta1_data_0x0A98[26] = {
	aobjEvent32SetVal0RateBlock(0x184, 0),
	    0x00000000,  /* 0.0f */
	    0x3F733333,  /* 0.949999988079071f */
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32SetVal0Rate(0x184, 45),
	    0xBE0EFA35,  /* -0.13962633907794952f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(0x184, 1),
	aobjEvent32Wait(44),
	aobjEvent32SetValRate(0x004, 45),
	    0x00000000,  /* 0.0f */
	    0x3B3702D2,  /* 0.002792526502162218f */
	aobjEvent32SetVal0RateBlock(0x180, 45),
	    0x3F733333,  /* 0.949999988079071f */
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32SetVal0RateBlock(0x184, 55),
	    0x3E0EFA35,  /* 0.13962633907794952f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x184, 35),
	    0x00000000,  /* 0.0f */
	    0x3F733333,  /* 0.949999988079071f */
	    0x3F733333,  /* 0.949999988079071f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuBeta1_data_0x0A98,
};

u32 dStagePupupuBeta1_data_0x0B00[26] = {
	aobjEvent32SetVal0RateBlock(0x184, 0),
	    0x00000000,  /* 0.0f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetVal0Rate(0x184, 45),
	    0xBE0EFA35,  /* -0.13962633907794952f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(0x184, 1),
	aobjEvent32Wait(44),
	aobjEvent32SetValRate(0x004, 45),
	    0x00000000,  /* 0.0f */
	    0x3B3702D2,  /* 0.002792526502162218f */
	aobjEvent32SetVal0RateBlock(0x180, 45),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetVal0RateBlock(0x184, 55),
	    0x3E0EFA35,  /* 0.13962633907794952f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x184, 35),
	    0x00000000,  /* 0.0f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStagePupupuBeta1_data_0x0B00,
};

PAD(8);

Vtx dStagePupupuBeta1_Vtx_0x0B70[65] = {
	#include <StagePupupuBeta1/Vtx_0x0B70.vtx.inc.c>
};

Gfx dStagePupupuBeta1_DL_0x0F80[91] = {
	#include <StagePupupuBeta1/DL_0x0F80.dl.inc.c>
};

/* @ 0x1258, 132 bytes — DObjDesc[3] layer-1 scene-object list
 * (GRPupupuSmallMap.gr_desc[1][0] targets it). */
DObjDesc dStagePupupuBeta1_DObjDesc_0x1258[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStagePupupuBeta1_DL_0x0F80, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* MPVertexData[11] @ 0x12DC — vertex positions (MPGeometryData_0x1374.vertex_data). */
MPVertexData dStagePupupuBeta1_data_0x12DC[11] = {
	{ {  -2023,     -6 }, 0x8000 },
	{ {   2023,     -6 }, 0x0000 },
	{ {   -459,    777 }, 0xC000 },
	{ {   -904,    777 }, 0xC000 },
	{ {  -1349,    777 }, 0x0000 },
	{ {    575,   1551 }, 0xC000 },
	{ {      5,   1551 }, 0xC000 },
	{ {   -565,   1551 }, 0x0000 },
	{ {   1472,    780 }, 0xC000 },
	{ {   1001,    780 }, 0xC000 },
	{ {    531,    780 }, 0x0000 },
};

/* MPVertexArray (u16[12]) @ 0x1320 — vertex ids (MPGeometryData_0x1374.vertex_id). */
u16 dStagePupupuBeta1_data_0x1320[12] = {
	  5,   6,   7,   8,   9,  10,   2,   3,   4,   0,   1,   0,
};

/* MPVertexLinks[4] @ 0x1338 — line vertex runs (MPGeometryData_0x1374.vertex_links). */
MPVertexLinks dStagePupupuBeta1_data_0x1338[4] = {
	{   0,  3 }, {   3,  3 }, {   6,  3 }, {   9,  2 },
};

/* MPLineInfo[1] @ 0x1348 — yakumono line group (MPGeometryData_0x1374.line_info).
 * 18 bytes; IDO inserts 2-byte trailing pad to 4-align MPMapObjData. */
MPLineInfo dStagePupupuBeta1_data_0x1348[1] = {
	{ 1, { {  0,   4 }, {  4,   0 }, {  4,   0 }, {  4,   0 } } },
};

/* MPMapObjData[4] @ 0x135C — map objects (MPGeometryData_0x1374.mapobjs). */
MPMapObjData dStagePupupuBeta1_data_0x135C[4] = {
	{ 0, {   954,   150 } },
	{ 1, {  1006,   930 } },
	{ 2, {  -892,   927 } },
	{ 3, {  -912,   150 } },
};

/* MPGeometryData stage descriptor @ 0x1374 —
 * GRPupupuSmallMap.map_geometry targets it. */
MPGeometryData dStagePupupuBeta1_MPGeometryData_0x1374 = {
	1,
	(MPVertexPosContainer *)dStagePupupuBeta1_data_0x12DC,
	(MPVertexArray *)dStagePupupuBeta1_data_0x1320,
	dStagePupupuBeta1_data_0x1338,
	dStagePupupuBeta1_data_0x1348,
	4,
	(MPMapObjContainer *)dStagePupupuBeta1_data_0x135C,
};

Vtx dStagePupupuBeta1_Vtx_0x1390[41] = {
	#include <StagePupupuBeta1/Vtx_0x1390.vtx.inc.c>
};

Gfx dStagePupupuBeta1_DL_0x1620[94] = {
	#include <StagePupupuBeta1/DL_0x1620.dl.inc.c>
};

/* @ 0x1910, 132 bytes — DObjDesc[3]. */
DObjDesc dStagePupupuBeta1_DObjDesc_0x1910[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStagePupupuBeta1_DL_0x1620, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1994, 12 bytes pad */
