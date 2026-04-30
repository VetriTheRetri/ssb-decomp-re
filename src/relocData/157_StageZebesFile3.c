/* relocData file 157: StageZebesFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (2824 bytes) */
u32 dStageZebesFile3_AnimJoint_0x0000[1] = {
	aobjEvent32End(),
};

u8 dStageZebesFile3_AnimJoint_0x0000_post[2820] = {
	#include <StageZebesFile3/AnimJoint_0x0000_post.data.inc.c>
};

/* AnimJoint block @ 0x0B08 (712 bytes) */
u32 dStageZebesFile3_AnimJoint_0x0B08[1] = {
	aobjEvent32End(),
};

u8 dStageZebesFile3_AnimJoint_0x0B08_post[708] = {
	#include <StageZebesFile3/AnimJoint_0x0B08_post.data.inc.c>
};
