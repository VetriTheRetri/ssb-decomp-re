/* relocData file 154: StageYosterFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"

/* AnimJoint block @ 0x0000 (256 bytes) */
u32 dStageYosterFile3_AnimJoint_0x0000[64] = {
	#include <StageYosterFile3/AnimJoint_0x0000.data.inc.c>
};

/* AnimJoint block @ 0x0100 (1456 bytes) */
u32 dStageYosterFile3_AnimJoint_0x0100[364] = {
	#include <StageYosterFile3/AnimJoint_0x0100.data.inc.c>
};
