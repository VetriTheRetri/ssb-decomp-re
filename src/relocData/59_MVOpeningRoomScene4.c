/* relocData file 59: MVOpeningRoomScene4 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (224 bytes) */
u32 dMVOpeningRoomScene4_CamAnimJoint[56] = {
	aobjEvent32SetValAfterBlock(0x005, 0),
	    0xC481FC2E,
	    0xC49A6567,
	aobjEvent32SetVal0RateBlock(0x200, 0),
	    0x413F0CF0,
	aobjEvent32SetValRateBlock(0x002, 0),
	    0x4547F60F,
	    0xBD88D3AD,
	aobjEvent32SetValRate(0x200, 90),
	    0x41C75F13,
	    0x3BED9FAA,
	aobjEvent32Cmd12(0x200, 3),
	aobjEvent32SetValRate(0x002, 95),
	    0x4547F60F,
	    0xBE89F6DB,
	aobjEvent32Cmd12(0x002, 3),
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x4504FD31,
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC4914D1D,
	    0xC570D12C,
	aobjEvent32SetValRate(0x020, 92),
	    0x451E0C1F,
	    0x4110F59B,
	aobjEvent32Wait(87),
	aobjEvent32SetValRate(0x200, 50),
	    0x41B906AD,
	    0xBCD3E4B1,
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x002, 25),
	    0x454CDACD,
	    0x3F717E0C,
	aobjEvent32SetValRateBlock(0x020, 15),
	    0x452EFBE6,
	    0x414929AD,
	aobjEvent32SetValRate(0x020, 30),
	    0x45376740,
	    0xC14E5516,
	aobjEvent32Wait(10),
	aobjEvent32SetVal0Rate(0x002, 58),
	    0x454CDACD,
	aobjEvent32Wait(20),
	aobjEvent32SetVal0Rate(0x200, 43),
	    0x41B4208E,
	aobjEvent32SetValRateBlock(0x020, 13),
	    0x450C539B,
	    0xC187E0C6,
	aobjEvent32SetVal0RateBlock(0x020, 25),
	    0x450F1085,
	aobjEvent32SetValBlock(0x022, 5),
	    0x454CDACD,
	    0x450F1085,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
