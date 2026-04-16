/* relocData file 154: StageYosterFile3 — stage auxiliary data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"

/* Data block @ 0x0000 (256 bytes) */
u8 dStageYosterFile3_data_0x0000[256] = {
	#include <StageYosterFile3/data_0x0000.data.inc.c>
};

/* Data block @ 0x0100 (1456 bytes) */
u8 dStageYosterFile3_data_0x0100[1456] = {
	#include <StageYosterFile3/data_0x0100.data.inc.c>
};
