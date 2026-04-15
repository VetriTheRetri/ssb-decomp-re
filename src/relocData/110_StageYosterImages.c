/* relocData file 110: StageYosterImages — Yoster stage image pool.
 *
 * Orphaned in the source tree: no code path in src/ references
 * llStageYosterImagesFileID beyond its extern declaration, and the file has
 * zero intern/extern relocs (pure data pool), so we can't walk
 * a chain to recover block boundaries. First-pass typing just
 * splits off the leading 8-byte pad so anyone who finds the
 * loader can carve the body into typed Tex / LUT blocks without
 * an initial conversion step. */

#include "relocdata_types.h"

PAD(8);

/* @ 0x00008, 21,032 bytes — image data pool */
u8 dStageYosterImages_data_0x0008[0x5228] = {
	#include <StageYosterImages/data_0x0008.data.inc.c>
};
