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

/* @ 0x09CC, 3188 bytes — data pool: a 4-entry pointer table, four 104-B
 * sub-blocks, and the Vtx data referenced by gsSPVertex across this
 * file's DLs. Run tools/splitTexPoolByDL.py to slice the Vtx blocks. */
u8 dStagePupupuBeta2_data_0x09CC[0x1C4] = {
	#include <StagePupupuBeta2/data_0x09CC.data.inc.c>
};

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

/* @ 0x1DDC, 1028 bytes — data pool: pointer table + sub-blocks + Vtx
 * data referenced by gsSPVertex. Run tools/splitTexPoolByDL.py. */
u8 dStagePupupuBeta2_data_0x1DDC[0x374] = {
	#include <StagePupupuBeta2/data_0x1DDC.data.inc.c>
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

/* @ 0x2354, 556 bytes — data pool: Vtx data referenced by gsSPVertex
 * from DL_0x25F0 / DL_0x2678. Run tools/splitTexPoolByDL.py. */
u8 dStagePupupuBeta2_data_0x2354[0xC] = {
	#include <StagePupupuBeta2/data_0x2354.data.inc.c>
};

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

/* @ 0x28C0, 64 bytes — unknown 64-B trailer with two internal chain-pointer
 * slots (at +0x4 and +0x34) that both target +0xC. The "inner" 40 B at
 * +0xC..+0x34 contains floats matching DObjDesc[1].translate
 * (-840.57, 168.32, 800.99, -476.65) interspersed with non-float u32s
 * (0x12080000, 0x14300000, 0x1008001D, 0x1008001E, 0x1C000000). Likely some
 * kind of scene-binding / extension record; exact struct unknown. The two
 * embedded chain slots are now in the .reloc and rebuilt by
 * fixRelocChain — left as u8[] until the layout is understood. */
u8 dStagePupupuBeta2_data_0x28C0[64] = {
	#include <StagePupupuBeta2/data_0x28C0.data.inc.c>
};
