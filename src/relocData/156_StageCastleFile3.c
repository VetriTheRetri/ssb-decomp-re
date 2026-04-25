/* relocData file 156: StageCastleFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (64 bytes) */
u32 dStageCastleFile3_AnimJoint_0x0000[16] = {
	aobjEvent32EndRaw(0x018, 1),
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x010, 599),
	    0xC4834000,
	aobjEvent32SetValBlock(0x010, 1200),
	    0x44834000,
	aobjEvent32SetValBlock(0x010, 600),
	    0x00000000,
	aobjEvent32SetValBlock(0x010, 2400),
	    0x00000000,
	aobjEvent32SetAnim(0x000, 0),
	    0xFFFF0001,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
