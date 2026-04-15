/* relocData file 39: IFCommonObject — orphaned interface geometry
 * file. Not referenced by any code path in `src/` beyond its FileID
 * extern. The file exists in the ROM but its loader was never
 * committed to the decomp; first-pass typing splits it into the
 * three regions detectable from the reloc chain distribution:
 *
 *   0x0000..0x0C00  Vtx / Tex / Lut pool — target of every intern
 *                   reloc in the file, no pointers out
 *   0x0C00..0x3BC0  F3DEX2 display lists — ends cleanly with a
 *                   `gsSPEndDisplayList()` at 0x3BB8
 *   0x3BC0..0x3FE0  DObjDesc joint trees — consumed by the (missing)
 *                   loader via `gcSetupCustomDObjs` or similar
 *
 * Refine the block names when the loader path turns up. */

#include "relocdata_types.h"

/* @ 0x00000, 3072 bytes */
u8 dIFCommonObject_data_0x0000[0xC00] = {
	#include <IFCommonObject/data_0x0000.data.inc.c>
};

/* @ 0x00C00, 12224 bytes */
u8 dIFCommonObject_DisplayLists_0x0C00[0x2FC0] = {
	#include <IFCommonObject/DisplayLists_0x0C00.data.inc.c>
};

/* @ 0x03BC0, 1056 bytes */
u8 dIFCommonObject_DObjDescs_0x3BC0[0x420] = {
	#include <IFCommonObject/DObjDescs_0x3BC0.data.inc.c>
};
