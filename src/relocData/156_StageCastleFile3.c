/* relocData file 156: StageCastleFile3 — stage auxiliary data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"

/* Data block @ 0x0000 (64 bytes) */
u8 dStageCastleFile3_data_0x0000[64] = {
	#include <StageCastleFile3/data_0x0000.data.inc.c>
};
