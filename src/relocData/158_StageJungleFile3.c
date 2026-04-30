/* relocData file 158: StageJungleFile3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (2712 bytes) */
u32 dStageJungleFile3_AnimJoint_0x0000[1] = {
	aobjEvent32End(),
};

u8 dStageJungleFile3_AnimJoint_0x0000_post[2708] = {
	#include <StageJungleFile3/AnimJoint_0x0000_post.data.inc.c>
};

/* AnimJoint block @ 0x0A98 (584 bytes) */
u32 dStageJungleFile3_AnimJoint_0x0A98[1] = {
	aobjEvent32End(),
};

u8 dStageJungleFile3_AnimJoint_0x0A98_post[580] = {
	#include <StageJungleFile3/AnimJoint_0x0A98_post.data.inc.c>
};
