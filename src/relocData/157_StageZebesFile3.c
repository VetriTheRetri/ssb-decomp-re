/* relocData file 157: StageZebesFile3 — stage auxiliary data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"

/* Data block @ 0x0000 (2824 bytes) */
u8 dStageZebesFile3_data_0x0000[2824] = {
	#include <StageZebesFile3/data_0x0000.data.inc.c>
};

/* Data block @ 0x0B08 (712 bytes) */
u8 dStageZebesFile3_data_0x0B08[712] = {
	#include <StageZebesFile3/data_0x0B08.data.inc.c>
};
