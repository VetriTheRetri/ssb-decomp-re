/* relocData file 103: StagePupupuImages — Pupupu stage image pool.
 *
 * Orphaned in the source tree: no code path in src/ references
 * llStagePupupuImagesFileID beyond its extern declaration, and the file has
 * zero intern/extern relocs (pure data pool), so we can't walk
 * a chain to recover block boundaries. First-pass typing just
 * splits off the leading 8-byte pad so anyone who finds the
 * loader can carve the body into typed Tex / LUT blocks without
 * an initial conversion step. */

#include "relocdata_types.h"

PAD(8);

/* @ 0x00008, 12,216 bytes — image data pool */
u8 dStagePupupuImages_data_0x0008[0x2FB8] = {
	#include <StagePupupuImages/data_0x0008.data.inc.c>
};
