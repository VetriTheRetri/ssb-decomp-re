/* relocData file 76: MVEnding — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"

/* CamAnimJoint OperatorCamAnimJoint @ 0x0000 (1264 bytes) */
u32 dMVEnding_OperatorCamAnimJoint[316] = {
	#include <MVEnding/OperatorCamAnimJoint.data.inc.c>
};
