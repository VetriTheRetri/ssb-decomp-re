/* relocData file 101: StagePupupuBeta1 — Pupupu Beta stage geometry.
 *
 * 6,560 bytes split into three structural regions discovered by walking
 * the gsSPEndDisplayList markers and the intern + extern reloc chains:
 *
 *   0x0000-0x030F  data pool (Vtx arrays, palettes, possibly DObjDesc
 *                  tables — 784 bytes targeted by intern chain entries)
 *   0x0310-0x190F  Gfx section: 8 contiguous display lists (each ending
 *                  in gsSPEndDisplayList). 48 intern chain entries inside
 *                  resolve to the data pool; 34 extern chain entries
 *                  resolve into StagePupupuBetaImages (LUT + Tex pairs).
 *   0x1910-0x199F  trailer: a couple of DObjDesc-shaped records and pad.
 *
 * Held as raw u8[] sub-blocks until each DL gets typed Gfx[] + the data
 * pool is broken into named Vtx[] / DObjDesc[] arrays.
 */

#include "relocdata_types.h"

/* @ 0x0000, 784 bytes — Vtx / DObjDesc / palette pool */
u8 dStagePupupuBeta1_data_pool[0x310] = {
	#include <StagePupupuBeta1/data_pool.data.inc.c>
};

/* @ 0x0310, 5632 bytes — 8 contiguous display lists */
u8 dStagePupupuBeta1_gfx_section[0x1600] = {
	#include <StagePupupuBeta1/gfx_section.data.inc.c>
};

/* @ 0x1910, 144 bytes — trailing DObjDesc-shaped records + pad */
u8 dStagePupupuBeta1_trailer[0x90] = {
	#include <StagePupupuBeta1/trailer.data.inc.c>
};
