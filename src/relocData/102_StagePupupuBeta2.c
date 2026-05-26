/* relocData file 102: StagePupupuBeta2 — Pupupu Beta stage geometry.
 *
 * Layout: 26 Vtx arrays, 13 Gfx[] display lists, and 4 DObjDesc scene-
 * object lists (DObjDesc_0x0898 / _0x1D00 / _0x22D0 / _0x2810). The three
 * mid-file DObjDesc arrays were previously mis-typed as one giant Gfx DL
 * each — each is really DObjDesc[N] + a Vtx data pool + the real tail DL.
 * Chain relocations are tracked in the companion .reloc: 63 intern entries
 * resolve within this file, 42 extern entries resolve into
 * StagePupupuBetaImages (file 100, LUT + Tex pairs).
 *
 * Still raw u8: data_0x09CC / _0x1DDC hold a 4-entry pointer table plus
 * 104-B sub-blocks of an unidentified per-object struct; data_0x2354 is a
 * 12-B remnant; data_0x28C0 is the 64-B trailer (see its comment).
 */

#include "relocdata_types.h"

/* @ 0x0000, 112 bytes — Vtx[7] */
Vtx dStagePupupuBeta2_Vtx_0x0000[7] = {
	#include <StagePupupuBeta2/Vtx_0x0000.vtx.inc.c>
};

/* @ 0x0070, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x0070[4] = {
	#include <StagePupupuBeta2/Vtx_0x0070.vtx.inc.c>
};

/* @ 0x00B0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x00B0[4] = {
	#include <StagePupupuBeta2/Vtx_0x00B0.vtx.inc.c>
};

/* @ 0x00F0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x00F0[4] = {
	#include <StagePupupuBeta2/Vtx_0x00F0.vtx.inc.c>
};

/* @ 0x0130, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x0130[4] = {
	#include <StagePupupuBeta2/Vtx_0x0130.vtx.inc.c>
};

/* @ 0x0170, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x0170[4] = {
	#include <StagePupupuBeta2/Vtx_0x0170.vtx.inc.c>
};

/* @ 0x01B0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x01B0[4] = {
	#include <StagePupupuBeta2/Vtx_0x01B0.vtx.inc.c>
};

/* @ 0x01F0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x01F0[4] = {
	#include <StagePupupuBeta2/Vtx_0x01F0.vtx.inc.c>
};

/* @ 0x0230, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x0230[4] = {
	#include <StagePupupuBeta2/Vtx_0x0230.vtx.inc.c>
};

/* @ 0x0270, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x0270[4] = {
	#include <StagePupupuBeta2/Vtx_0x0270.vtx.inc.c>
};

/* @ 0x02B0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x02B0[4] = {
	#include <StagePupupuBeta2/Vtx_0x02B0.vtx.inc.c>
};

/* @ 0x02F0, 64 bytes — Vtx[4] */
Vtx dStagePupupuBeta2_Vtx_0x02F0[4] = {
	#include <StagePupupuBeta2/Vtx_0x02F0.vtx.inc.c>
};

/* @ 0x0330, 104 bytes — Gfx[13] DL */
Gfx dStagePupupuBeta2_DL_0x0330[13] = {
	#include <StagePupupuBeta2/DL_0x0330.dl.inc.c>
};

/* @ 0x0398, 504 bytes — Gfx[63] DL */
Gfx dStagePupupuBeta2_DL_0x0398[63] = {
	#include <StagePupupuBeta2/DL_0x0398.dl.inc.c>
};

/* @ 0x0590, 120 bytes — Gfx[15] DL */
Gfx dStagePupupuBeta2_DL_0x0590[15] = {
	#include <StagePupupuBeta2/DL_0x0590.dl.inc.c>
};

/* @ 0x0608, 144 bytes — Gfx[18] DL */
Gfx dStagePupupuBeta2_DL_0x0608[18] = {
	#include <StagePupupuBeta2/DL_0x0608.dl.inc.c>
};

/* @ 0x0698, 232 bytes — Gfx[29] DL */
Gfx dStagePupupuBeta2_DL_0x0698[29] = {
	#include <StagePupupuBeta2/DL_0x0698.dl.inc.c>
};

/* @ 0x0780, 280 bytes — Gfx[35] DL */
Gfx dStagePupupuBeta2_DL_0x0780[35] = {
	#include <StagePupupuBeta2/DL_0x0780.dl.inc.c>
};

/* @ 0x0898, 308 bytes — DObjDesc[7]. Scene-root object list; entry [6]
 * with id=18 terminates. Mis-typed as a Gfx DL before — the actual
 * display list is at the tail (DL_0x1640). */
DObjDesc dStagePupupuBeta2_DObjDesc_0x0898[7] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x0330, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, dStagePupupuBeta2_DL_0x0590, { -180.00003051757812f, 1769.9998779296875f, -660.0f }, { 0.0f, 0.0f, 0.00020399999630171806f }, { 0.9998540282249451f, 0.9998540282249451f, 1.0f } },
	{ 2, dStagePupupuBeta2_DL_0x0608, { 480.0f, 1290.0f, -570.0f }, { 0.0f, 0.0f, 0.00020399999630171806f }, { 0.9998540282249451f, 0.9998540282249451f, 1.0f } },
	{ 2, dStagePupupuBeta2_DL_0x0698, { -450.0f, 1260.0f, -510.0f }, { 0.0f, 0.0f, -0.00020399999630171806f }, { 0.9500730037689209f, 0.9500730037689209f, 1.0f } },
	{ 2, dStagePupupuBeta2_DL_0x0780, { 180.00003051757812f, 1620.0f, -420.0f }, { 0.0f, 0.0f, -0.00020399999630171806f }, { 0.9001460075378418f, 0.9001460075378418f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x09CC, 452 bytes — animation/material driver record: 12-byte
 * header, 4-entry chain-pointer table at +0xC, four 104-byte
 * AObjEvent32-like sub-scripts (each starts with op=8
 * SetVal0RateBlock(0x184, 0) and has a self-back-ref chain at +0x64),
 * plus an 8-byte trailer. */
extern u32 dStagePupupuBeta2_data_0x09CC_sub_0x1C[26];
extern u32 dStagePupupuBeta2_data_0x09CC_sub_0x84[26];
extern u32 dStagePupupuBeta2_data_0x09CC_sub_0xEC[26];
extern u32 dStagePupupuBeta2_data_0x09CC_sub_0x154[26];

PAD(12);

/* Chain-pointer table @ +0xC — 4 entries pointing to the sub-scripts. */
AObjEvent32 *dStagePupupuBeta2_data_0x09CC_ptrs[4] = {
	(AObjEvent32 *)dStagePupupuBeta2_data_0x09CC_sub_0x1C,
	(AObjEvent32 *)dStagePupupuBeta2_data_0x09CC_sub_0x84,
	(AObjEvent32 *)dStagePupupuBeta2_data_0x09CC_sub_0xEC,
	(AObjEvent32 *)dStagePupupuBeta2_data_0x09CC_sub_0x154,
};

u32 dStagePupupuBeta2_data_0x09CC_sub_0x1C[26] = {
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
	    (u32)dStagePupupuBeta2_data_0x09CC_sub_0x1C,
};
u32 dStagePupupuBeta2_data_0x09CC_sub_0x84[26] = {
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
	    (u32)dStagePupupuBeta2_data_0x09CC_sub_0x84,
};
u32 dStagePupupuBeta2_data_0x09CC_sub_0xEC[26] = {
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
	    (u32)dStagePupupuBeta2_data_0x09CC_sub_0xEC,
};
u32 dStagePupupuBeta2_data_0x09CC_sub_0x154[26] = {
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
	    (u32)dStagePupupuBeta2_data_0x09CC_sub_0x154,
};

PAD(8);

Vtx dStagePupupuBeta2_Vtx_0x0B90[8] = {
	#include <StagePupupuBeta2/Vtx_0x0B90.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x0C10[13] = {
	#include <StagePupupuBeta2/Vtx_0x0C10.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x0CE0[16] = {
	#include <StagePupupuBeta2/Vtx_0x0CE0.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x0DE0[27] = {
	#include <StagePupupuBeta2/Vtx_0x0DE0.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x0F90[10] = {
	#include <StagePupupuBeta2/Vtx_0x0F90.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x1030[41] = {
	#include <StagePupupuBeta2/Vtx_0x1030.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x12C0[20] = {
	#include <StagePupupuBeta2/Vtx_0x12C0.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x1400[12] = {
	#include <StagePupupuBeta2/Vtx_0x1400.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x14C0[24] = {
	#include <StagePupupuBeta2/Vtx_0x14C0.vtx.inc.c>
};

/* @ 0x1640, 360 bytes — Gfx[45] DL (the real display list for this
 * object; entered via DObjDesc / DL_0x1D00). */
Gfx dStagePupupuBeta2_DL_0x1640[45] = {
	#include <StagePupupuBeta2/DL_0x1640.dl.inc.c>
};

/* @ 0x17A8, 448 bytes — Gfx[56] DL */
Gfx dStagePupupuBeta2_DL_0x17A8[56] = {
	#include <StagePupupuBeta2/DL_0x17A8.dl.inc.c>
};

/* @ 0x1968, 920 bytes — Gfx[115] DL */
Gfx dStagePupupuBeta2_DL_0x1968[115] = {
	#include <StagePupupuBeta2/DL_0x1968.dl.inc.c>
};

/* @ 0x1D00, 220 bytes — DObjDesc[5]. Scene-root object list; entry [4]
 * with id=18 terminates. The real display list is at the tail (DL_0x21E0). */
DObjDesc dStagePupupuBeta2_DObjDesc_0x1D00[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x1640, { -4219.80908203125f, 969.1185302734375f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x17A8, { 1503.3779296875f, 1251.1199951171875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x1968, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1DDC, 884 bytes — MPGroundData-style collision/anim record for the
 * DObjDesc_0x1D00 scene. Layout: 5 MP* sub-blocks feeding MPGeometryData
 * + a 4-entry AObjEvent32 anim_joints table that mirrors DObjDesc_0x1D00. */
extern MPVertexData dStagePupupuBeta2_data_0x1DDC_sub_0x0[54];
extern u16 dStagePupupuBeta2_data_0x1DDC_sub_0x144[82];
extern MPVertexLinks dStagePupupuBeta2_data_0x1DDC_sub_0x1E8[30];
extern MPLineInfo dStagePupupuBeta2_data_0x1DDC_sub_0x260[3];
extern MPMapObjData dStagePupupuBeta2_data_0x1DDC_sub_0x298[5];
extern u32 dStagePupupuBeta2_data_0x1DDC_sub_0x2E4[23];
extern u32 dStagePupupuBeta2_data_0x1DDC_sub_0x340[13];

/* MPVertexData[54] @ 0x1DDC — vertex positions (MPGeometryData.vertex_data). */
MPVertexData dStagePupupuBeta2_data_0x1DDC_sub_0x0[54] = {
	{ {    222,    171 }, 0x8000 },
	{ {      0,    171 }, 0x8000 },
	{ {   -222,    171 }, 0x0000 },
	{ {   -222,   -132 }, 0x0000 },
	{ {   -222,   -171 }, 0x0000 },
	{ {      0,   -171 }, 0x0000 },
	{ {    222,   -171 }, 0x0000 },
	{ {    222,   -132 }, 0x0000 },
	{ {    354,    470 }, 0x0000 },
	{ {    354,      0 }, 0x0000 },
	{ {    354,   -470 }, 0x0000 },
	{ {    455,   -470 }, 0x0000 },
	{ {    471,   -470 }, 0x0000 },
	{ {    471,      0 }, 0x0000 },
	{ {    471,    470 }, 0x0000 },
	{ {    455,    470 }, 0x0000 },
	{ {   -352,   -470 }, 0x0000 },
	{ {   -352,      0 }, 0x0000 },
	{ {   -352,    470 }, 0x0000 },
	{ {   -452,    470 }, 0x0000 },
	{ {   -469,    470 }, 0x0000 },
	{ {   -469,      0 }, 0x0000 },
	{ {   -469,   -470 }, 0x0000 },
	{ {   -452,   -470 }, 0x0000 },
	{ {  -1258,   3103 }, 0x0000 },
	{ {    -58,   3103 }, 0x0000 },
	{ {    -58,   2953 }, 0x0000 },
	{ {  -1258,   2953 }, 0x0000 },
	{ {    575,   1551 }, 0x0000 },
	{ {      5,   1551 }, 0x0000 },
	{ {   -565,   1551 }, 0x0000 },
	{ {   2259,    780 }, 0x0000 },
	{ {   1506,    780 }, 0x0000 },
	{ {    754,    780 }, 0x0000 },
	{ {    754,    680 }, 0x0000 },
	{ {    754,    663 }, 0x0000 },
	{ {   1506,    663 }, 0x0000 },
	{ {   2259,    663 }, 0x0000 },
	{ {   2259,    680 }, 0x0000 },
	{ {  -1373,    802 }, 0x0000 },
	{ {  -3485,    751 }, 0x0000 },
	{ {  -3485,    994 }, 0x8000 },
	{ {  -3020,   1014 }, 0x0000 },
	{ {  -2818,   1651 }, 0x0000 },
	{ {  -2979,   2096 }, 0x8000 },
	{ {  -2040,   2207 }, 0x0000 },
	{ {  -1949,   1904 }, 0x0000 },
	{ {  -2080,   1226 }, 0x8000 },
	{ {  -1343,   1135 }, 0x0000 },
	{ {  -4046,     -6 }, 0x8000 },
	{ {  -2023,     -6 }, 0x8000 },
	{ {      0,     -6 }, 0x8000 },
	{ {   2019,    109 }, 0x8000 },
	{ {   4046,     -6 }, 0x0000 },
};

/* MPVertexArray (u16[82]) @ 0x1F20 — vertex ids (MPGeometryData.vertex_id). */
u16 dStagePupupuBeta2_data_0x1DDC_sub_0x144[82] = {
	  0,   1,   2,   4,   5,   6,   6,   7,   0,   2,   3,   4,
	 14,  15,   8,  18,  19,  20,  10,  11,  12,  22,  23,  16,
	 12,  13,  14,  16,  17,  18,  20,  21,  22,   8,   9,  10,
	 24,  25,  44,  45,  28,  29,  30,  47,  48,  41,  42,  31,
	 32,  33,  49,  50,  51,  52,  53,  35,  36,  37,  39,  40,
	 26,  27,  37,  38,  31,  25,  26,  48,  39,  45,  46,  47,
	 40,  41,  42,  43,  44,  27,  24,  33,  34,  35,
};

/* MPVertexLinks[30] @ 0x1FC4 — line vertex pairs (MPGeometryData.vertex_links). */
MPVertexLinks dStagePupupuBeta2_data_0x1DDC_sub_0x1E8[30] = {
	{   0,  3 }, {   3,  3 }, {   6,  3 }, {   9,  3 }, {  12,  3 },
	{  15,  3 }, {  18,  3 }, {  21,  3 }, {  24,  3 }, {  27,  3 },
	{  30,  3 }, {  33,  3 }, {  36,  2 }, {  38,  2 }, {  40,  3 },
	{  43,  2 }, {  45,  2 }, {  47,  3 }, {  50,  5 }, {  55,  3 },
	{  58,  2 }, {  60,  2 }, {  62,  3 }, {  65,  2 }, {  67,  2 },
	{  69,  3 }, {  72,  2 }, {  74,  3 }, {  77,  2 }, {  79,  3 },
};

/* MPLineInfo[3] @ 0x203C — yakumono line groups (MPGeometryData.line_info).
 * 3 × 18 bytes + 2-byte alignment pad before MPMapObjData below. */
MPLineInfo dStagePupupuBeta2_data_0x1DDC_sub_0x260[3] = {
	{ 1, { {  0,   1 }, {  1,   1 }, {  2,   1 }, {  3,   1 } } },
	{ 2, { {  4,   2 }, {  6,   2 }, {  8,   2 }, { 10,   2 } } },
	{ 3, { { 12,   7 }, { 19,   3 }, { 22,   4 }, { 26,   4 } } },
};

PAD(2);

/* MPMapObjData[5] @ 0x2074 — map objects (MPGeometryData.mapobjs). */
MPMapObjData dStagePupupuBeta2_data_0x1DDC_sub_0x298[5] = {
	{ 4, { -1005, 2595 } },
	{ 0, {  -450,  150 } },
	{ 1, {   450,  150 } },
	{ 2, {     0, 1701 } },
	{ 3, {  1522,  930 } },
};

PAD(2);

/* MPGeometryData stage descriptor @ 0x2094 — pointer fields are
 * chain-rewritten by fixRelocChain at link time per the .reloc. */
MPGeometryData dStagePupupuBeta2_MPGeometryData_0x2094 = {
	3,
	(MPVertexPosContainer *)dStagePupupuBeta2_data_0x1DDC_sub_0x0,
	(MPVertexArray *)dStagePupupuBeta2_data_0x1DDC_sub_0x144,
	dStagePupupuBeta2_data_0x1DDC_sub_0x1E8,
	dStagePupupuBeta2_data_0x1DDC_sub_0x260,
	5,
	(MPMapObjContainer *)dStagePupupuBeta2_data_0x1DDC_sub_0x298,
};

/* AObjEvent32 *[4] @ 0x20B0 — anim_joints table for DObjDesc_0x1D00.
 * [0] root has no anim; [1] / [2] drive translation of DL_0x1640 /
 * DL_0x17A8 respectively; [3] (DL_0x1968) is static. */
AObjEvent32 *dStagePupupuBeta2_DObjDesc_0x1D00_AnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dStagePupupuBeta2_data_0x1DDC_sub_0x2E4,
	(AObjEvent32 *)dStagePupupuBeta2_data_0x1DDC_sub_0x340,
	NULL,
};

u32 dStagePupupuBeta2_data_0x1DDC_sub_0x2E4[23] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0xC583DE79,  /* -4219.93408203125f */
	    0x44724796,  /* 968.9994506835938f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 47),
	    0x449F8711,  /* 1276.222412109375f */
	    0xC0174F91,  /* -2.36422061920166f */
	aobjEvent32SetValRateBlock(0x010, 44),
	    0xC5778A14,  /* -3960.50537109375f */
	    0xC0031D76,  /* -2.0486392974853516f */
	aobjEvent32SetValRate(0x010, 89),
	    0xC58C6987,  /* -4493.18994140625f */
	    0xBFF58A12,  /* -1.9182311296463013f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x020, 86),
	    0x4423B992,  /* 655.3995971679688f */
	    0xC015079C,  /* -2.328557252883911f */
	aobjEvent32SetVal0RateBlock(0x030, 46),
	    0xC583DE79,  /* -4219.93408203125f */
	    0x44724796,  /* 968.9994506835938f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStagePupupuBeta2_data_0x1DDC_sub_0x2E4,
};
u32 dStagePupupuBeta2_data_0x1DDC_sub_0x340[13] = {
	aobjEvent32SetVal(0x010, 0),
	    0x44BBEC18,  /* 1503.6904296875f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x449C63D7,  /* 1251.120361328125f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 44),
	    0x4498E8A4,  /* 1223.270751953125f */
	aobjEvent32SetValBlock(0x010, 90),
	    0x44DF7E49,  /* 1787.9466552734375f */
	aobjEvent32SetValBlock(0x010, 45),
	    0x44BBEC18,  /* 1503.6904296875f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStagePupupuBeta2_data_0x1DDC_sub_0x340,
};

Vtx dStagePupupuBeta2_Vtx_0x2150[9] = {
	#include <StagePupupuBeta2/Vtx_0x2150.vtx.inc.c>
};

/* @ 0x21E0, 240 bytes — Gfx[30] DL (the real display list). */
Gfx dStagePupupuBeta2_DL_0x21E0[30] = {
	#include <StagePupupuBeta2/DL_0x21E0.dl.inc.c>
};

/* @ 0x22D0, 132 bytes — DObjDesc[3]. Scene-root object list; entry [2]
 * with id=18 terminates. The real display list is at the tail (DL_0x2580). */
DObjDesc dStagePupupuBeta2_DObjDesc_0x22D0[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x21E0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

Vtx dStagePupupuBeta2_Vtx_0x2360[4] = {
	#include <StagePupupuBeta2/Vtx_0x2360.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x23A0[4] = {
	#include <StagePupupuBeta2/Vtx_0x23A0.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x23E0[14] = {
	#include <StagePupupuBeta2/Vtx_0x23E0.vtx.inc.c>
};

Vtx dStagePupupuBeta2_Vtx_0x24C0[12] = {
	#include <StagePupupuBeta2/Vtx_0x24C0.vtx.inc.c>
};

/* @ 0x2580, 112 bytes — Gfx[14] DL (the real display list; also the
 * dl_link_ptr target of DObjDesc_0x2810[1]). */
Gfx dStagePupupuBeta2_DL_0x2580[14] = {
	#include <StagePupupuBeta2/DL_0x2580.dl.inc.c>
};

/* @ 0x25F0, 136 bytes — Gfx[17] DL */
Gfx dStagePupupuBeta2_DL_0x25F0[17] = {
	#include <StagePupupuBeta2/DL_0x25F0.dl.inc.c>
};

/* @ 0x2678, 408 bytes — Gfx[51] DL */
Gfx dStagePupupuBeta2_DL_0x2678[51] = {
	#include <StagePupupuBeta2/DL_0x2678.dl.inc.c>
};

/* @ 0x2810, 176 bytes — DObjDesc[4]. The two non-NULL dl_link_ptrs are
 * chain-encoded slots rewritten at link time by tools/fixRelocChain.py
 * using the symbolic targets in the companion .reloc file. */
DObjDesc dStagePupupuBeta2_DObjDesc_0x2810[4] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x2580, { -840.57373046875f, 168.32167053222656f, 800.991943359375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, dStagePupupuBeta2_DL_0x2678, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x28C0, 56 bytes — AObjEvent32 *[3] anim_joints table for DObjDesc_0x2810,
 * followed by a single SetVal0Rate/SetValAfterBlock script that holds DObj[1]
 * at translate (-840.57, 168.32, 800.99) with a brief Z bob to -476.65. */
extern u32 dStagePupupuBeta2_data_0x28C0_body[11];

AObjEvent32 *dStagePupupuBeta2_DObjDesc_0x2810_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dStagePupupuBeta2_data_0x28C0_body,
	NULL,
};

u32 dStagePupupuBeta2_data_0x28C0_body[11] = {
	aobjEvent32SetVal0Rate(0x010, 0),
	    0xC45224B8,  /* -840.5739135742188f */
	aobjEvent32SetValAfterBlock(0x060, 0),
	    0x43285259,  /* 168.32167053222656f */
	    0x44483F7C,  /* 800.9919433593750f */
	aobjEvent32SetVal0RateBlock(0x010, 29),
	    0xC3EE530A,  /* -476.64880371093750f */
	aobjEvent32SetVal0RateBlock(0x010, 30),
	    0xC45224B8,  /* -840.5739135742188f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStagePupupuBeta2_data_0x28C0_body,
};

PAD(8);
