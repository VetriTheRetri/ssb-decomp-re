/* relocData file 59: MVOpeningRoomScene4 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (224 bytes) */
u32 dMVOpeningRoomScene4_CamAnimJoint[53] = {
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_EYEX | AOBJ_CAMFLAG_EYEZ, 0),
	    0xC481FC2E,  /* -1039.880615234375f */
	    0xC49A6567,  /* -1235.1688232421875f */
	aobjEvent32SetVal0RateBlock(AOBJ_CAMFLAG_FOVY, 0),
	    0x413F0CF0,  /* 11.940658569335938f */
	aobjEvent32SetValRateBlock(AOBJ_CAMFLAG_EYEY, 0),
	    0x4547F60F,  /* 3199.378662109375f */
	    0xBD88D3AD,  /* -0.0668099895119667f */
	aobjEvent32SetValRate(AOBJ_CAMFLAG_FOVY, 90),
	    0x41C75F13,  /* 24.921422958374023f */
	    0x3BED9FAA,  /* 0.0072516994550824165f */
	aobjEvent32Cmd12(AOBJ_CAMFLAG_FOVY, 3),
	aobjEvent32SetValRate(AOBJ_CAMFLAG_EYEY, 95),
	    0x4547F60F,  /* 3199.378662109375f */
	    0xBE89F6DB,  /* -0.2694614827632904f */
	aobjEvent32Cmd12(AOBJ_CAMFLAG_EYEY, 3),
	aobjEvent32SetVal0Rate(AOBJ_CAMFLAG_ATY, 0),
	    0x4504FD31,  /* 2127.824462890625f */
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_ATX | AOBJ_CAMFLAG_ATZ, 0),
	    0xC4914D1D,  /* -1162.4097900390625f */
	    0xC570D12C,  /* -3853.0732421875f */
	aobjEvent32SetValRate(AOBJ_CAMFLAG_ATY, 92),
	    0x451E0C1F,  /* 2528.757568359375f */
	    0x4110F59B,  /* 9.059962272644043f */
	aobjEvent32Wait(87),
	aobjEvent32SetValRate(AOBJ_CAMFLAG_FOVY, 50),
	    0x41B906AD,  /* 23.128259658813477f */
	    0xBCD3E4B1,  /* -0.025865884497761726f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(AOBJ_CAMFLAG_EYEY, 25),
	    0x454CDACD,  /* 3277.675048828125f */
	    0x3F717E0C,  /* 0.9433295726776123f */
	aobjEvent32SetValRateBlock(AOBJ_CAMFLAG_ATY, 15),
	    0x452EFBE6,  /* 2799.74365234375f */
	    0x414929AD,  /* 12.572674751281738f */
	aobjEvent32SetValRate(AOBJ_CAMFLAG_ATY, 30),
	    0x45376740,  /* 2934.453125f */
	    0xC14E5516,  /* -12.895772933959961f */
	aobjEvent32Wait(10),
	aobjEvent32SetVal0Rate(AOBJ_CAMFLAG_EYEY, 58),
	    0x454CDACD,  /* 3277.675048828125f */
	aobjEvent32Wait(20),
	aobjEvent32SetVal0Rate(AOBJ_CAMFLAG_FOVY, 43),
	    0x41B4208E,  /* 22.51589584350586f */
	aobjEvent32SetValRateBlock(AOBJ_CAMFLAG_ATY, 13),
	    0x450C539B,  /* 2245.225341796875f */
	    0xC187E0C6,  /* -16.984752655029297f */
	aobjEvent32SetVal0RateBlock(AOBJ_CAMFLAG_ATY, 25),
	    0x450F1085,  /* 2289.032470703125f */
	aobjEvent32SetValBlock(AOBJ_CAMFLAG_EYEY | AOBJ_CAMFLAG_ATY, 5),
	    0x454CDACD,  /* 3277.675048828125f */
	    0x450F1085,  /* 2289.032470703125f */
	aobjEvent32End(),
};
