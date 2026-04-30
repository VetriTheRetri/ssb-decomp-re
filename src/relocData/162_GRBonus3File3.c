/* relocData file 162: GRBonus3File3 — stage AnimJoint tree data.
 *
 * Block boundaries discovered via req-list reverse lookup: other files'
 * extern reloc chains reference specific offsets within this pool.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* AnimJoint block @ 0x0000 (1928 bytes) */
u32 dGRBonus3File3_AnimJoint_0x0000[1] = {
	aobjEvent32End(),
};

u8 dGRBonus3File3_AnimJoint_0x0000_post[1924] = {
	#include <GRBonus3File3/AnimJoint_0x0000_post.data.inc.c>
};

/* AnimJoint block @ 0x0788 (392 bytes) */
u32 dGRBonus3File3_AnimJoint_0x0788[1] = {
	aobjEvent32End(),
};

u8 dGRBonus3File3_AnimJoint_0x0788_post[388] = {
	#include <GRBonus3File3/AnimJoint_0x0788_post.data.inc.c>
};
