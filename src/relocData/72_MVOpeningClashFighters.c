/* relocData file 72: MVOpeningClashFighters — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"

/* Raw data @ 0x0000 (5184 bytes) */
u8 dMVOpeningClashFighters_data_0x0000[5184] = {
	#include <MVOpeningClashFighters/data_0x0000.data.inc.c>
};

/* CamAnimJoint CamAnimJoint @ 0x1440 (64 bytes) */
u32 dMVOpeningClashFighters_CamAnimJoint[16] = {
	#include <MVOpeningClashFighters/CamAnimJoint.data.inc.c>
};
