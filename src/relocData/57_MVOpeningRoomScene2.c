/* relocData file 57: MVOpeningRoomScene2 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (80 bytes) */
u32 dMVOpeningRoomScene2_CamAnimJoint[20] = {
	aobjEvent32SetVal0RateBlock(0x277, 0),
	    0xC47F39E0,
	    0x453E361B,
	    0xC493A5CA,
	    0xC48EEDDF,
	    0x45056987,
	    0xC56B334B,
	    0x41800355,
	aobjEvent32SetVal0RateBlock(0x277, 300),
	    0x43FC2BD5,
	    0x459F6057,
	    0x452CA200,
	    0x44028796,
	    0x453CD9A7,
	    0xC580EC18,
	    0x420510A0,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
