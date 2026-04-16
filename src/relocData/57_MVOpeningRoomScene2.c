/* relocData file 57: MVOpeningRoomScene2 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"

/* CamAnimJoint CamAnimJoint @ 0x0000 (80 bytes) */
u32 dMVOpeningRoomScene2_CamAnimJoint[20] = {
	#include <MVOpeningRoomScene2/CamAnimJoint.data.inc.c>
};
