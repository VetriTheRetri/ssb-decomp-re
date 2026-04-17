/* relocData file 102: StagePupupuBeta2 — Pupupu Beta stage geometry.
 *
 * 10,496 bytes split into three structural regions discovered by walking
 * the gsSPEndDisplayList markers and the intern + extern reloc chains:
 *
 *   0x0000-0x032F  data pool (Vtx arrays, palettes, possibly DObjDesc
 *                  tables — 816 bytes targeted by intern chain entries)
 *   0x0330-0x280F  Gfx section: 13 contiguous display lists (each ending
 *                  in gsSPEndDisplayList). 50 intern chain entries inside
 *                  resolve to the data pool; 42 extern chain entries
 *                  resolve into StagePupupuBetaImages (LUT + Tex pairs).
 *   0x2810-0x28FF  trailer: trailing Vtx data, a chain terminator, and
 *                  zero pad rounding the file up to 0x2900.
 *
 * Held as raw u8[] sub-blocks until each DL gets typed Gfx[] + the data
 * pool is broken into named Vtx[] / DObjDesc[] arrays.
 */

#include "relocdata_types.h"

/* @ 0x0000, 816 bytes — Vtx / DObjDesc / palette pool */
u8 dStagePupupuBeta2_data_pool[0x330] = {
	#include <StagePupupuBeta2/data_pool.data.inc.c>
};

/* @ 0x0330, 9440 bytes — 13 contiguous display lists */
u8 dStagePupupuBeta2_gfx_section[0x24E0] = {
	#include <StagePupupuBeta2/gfx_section.data.inc.c>
};

/* @ 0x2810, 240 bytes — trailing Vtx + chain terminator + pad */
u8 dStagePupupuBeta2_trailer[0xF0] = {
	#include <StagePupupuBeta2/trailer.data.inc.c>
};
