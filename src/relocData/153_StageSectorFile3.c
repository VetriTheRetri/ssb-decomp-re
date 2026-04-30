/* relocData file 153: StageSectorFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (7248 bytes) */
u32 dStageSectorFile3_AnimJoint_0x0000[2] = {
	aobjEvent32EndRaw(0x00E, 64),
	aobjEvent32End(),
};

u8 dStageSectorFile3_AnimJoint_0x0000_post[7240] = {
	#include <StageSectorFile3/AnimJoint_0x0000_post.data.inc.c>
};

/* AnimJoint block @ 0x1C50 (432 bytes) */
u32 dStageSectorFile3_AnimJoint_0x1C50[2] = {
	    0xE7000000,
	aobjEvent32End(),
};

u8 dStageSectorFile3_AnimJoint_0x1C50_post[424] = {
	#include <StageSectorFile3/AnimJoint_0x1C50_post.data.inc.c>
};
