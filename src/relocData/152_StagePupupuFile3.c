/* relocData file 152: StagePupupuFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (4336 bytes) */
u32 dStagePupupuFile3_AnimJoint_0x0000[1] = {
	aobjEvent32End(),
};

u8 dStagePupupuFile3_AnimJoint_0x0000_post[4332] = {
	#include <StagePupupuFile3/AnimJoint_0x0000_post.data.inc.c>
};

/* AnimJoint block @ 0x10F0 (9744 bytes) */
u32 dStagePupupuFile3_AnimJoint_0x10F0[1] = {
	aobjEvent32End(),
};

u8 dStagePupupuFile3_AnimJoint_0x10F0_post[9740] = {
	#include <StagePupupuFile3/AnimJoint_0x10F0_post.data.inc.c>
};
