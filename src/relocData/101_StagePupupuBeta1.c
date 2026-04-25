/* relocData file 101: StagePupupuBeta1 — Pupupu Beta stage geometry.
 *
 * Fully typed: 12 Vtx arrays in the data pool, 8 contiguous Gfx[] DLs,
 * and a DObjDesc[3] trailer. 48 intern chain entries inside the DLs
 * resolve back into the Vtx pool; 34 extern chain entries resolve
 * into StagePupupuBetaImages (LUT + Tex pairs).
 */

#include "relocdata_types.h"

/* @ 0x0000, 80 bytes — Vtx[5] */
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

/* @ 0x0870, 2536 bytes — Gfx[317] DL */
Gfx dStagePupupuBeta1_DL_0x0870[317] = {
	#include <StagePupupuBeta1/DL_0x0870.dl.inc.c>
};

/* @ 0x1258, 1720 bytes — Gfx[215] DL */
Gfx dStagePupupuBeta1_DL_0x1258[215] = {
	#include <StagePupupuBeta1/DL_0x1258.dl.inc.c>
};

/* @ 0x1910, 132 bytes — DObjDesc[3].
 * The middle entry's `p_dobjs` is a chain-encoded pointer that
 * fixRelocChain rewrites at load time; held inline as the raw
 * placeholder since this fid currently has no .reloc file. */
DObjDesc dStagePupupuBeta1_DObjDesc_0x1910[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0xFFFF0588, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1994, 12 bytes pad */
PAD(12);
