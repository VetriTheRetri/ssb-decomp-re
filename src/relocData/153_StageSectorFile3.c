/* relocData file 153: StageSectorFile3 — stage auxiliary data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"

/* Data block @ 0x0000 (7248 bytes) */
u8 dStageSectorFile3_data_0x0000[7248] = {
	#include <StageSectorFile3/data_0x0000.data.inc.c>
};

/* Data block @ 0x1C50 (432 bytes) */
u8 dStageSectorFile3_data_0x1C50[432] = {
	#include <StageSectorFile3/data_0x1C50.data.inc.c>
};
