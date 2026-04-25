/* relocData file 58: MVOpeningRoomScene3 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (112 bytes) */
u32 dMVOpeningRoomScene3_CamAnimJoint[28] = {
	aobjEvent32SetVal0Rate(0x030, 0),
	    0x00000000,
	    0x453BF52E,
	aobjEvent32SetValAfterBlock(0x247, 0),
	    0x4114C9EF,
	    0x4572863B,
	    0x457EDFB5,
	    0xC3C27A0A,
	    0x41EB4B36,
	aobjEvent32SetValRate(0x030, 150),
	    0x3F75E0B0,
	    0x3B7BC75D,
	    0x453B40C0,
	    0xBD38C315,
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x41D6A8EA,
	aobjEvent32SetValAfterBlock(0x200, 30),
	    0x41BEB678,
	aobjEvent32SetValAfterBlock(0x200, 30),
	    0x41A85412,
	aobjEvent32SetValAfterBlock(0x200, 30),
	    0x4194DB85,
	aobjEvent32SetVal0Rate(0x030, 100),
	    0x3F75E0B0,
	    0x453B40C0,
	aobjEvent32Wait(10),
	aobjEvent32End(),
	aobjEvent32End(),
};
