/* relocData file 154: StageYosterFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (256 bytes) */
u32 dStageYosterFile3_AnimJoint_0x0000[2] = {
	    0xD9C0F9FA,
	aobjEvent32End(),
};

u8 dStageYosterFile3_AnimJoint_0x0000_post[248] = {
	#include <StageYosterFile3/AnimJoint_0x0000_post.data.inc.c>
};

/* AnimJoint block @ 0x0100 (1456 bytes) */
u32 dStageYosterFile3_AnimJoint_0x0100[1] = {
	aobjEvent32End(),
};

u8 dStageYosterFile3_AnimJoint_0x0100_post[1452] = {
	#include <StageYosterFile3/AnimJoint_0x0100_post.data.inc.c>
};
