/* relocData file 58: MVOpeningRoomScene3 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (112 bytes) */
u32 dMVOpeningRoomScene3_CamAnimJoint[27] = {
	aobjEvent32SetVal0Rate(AOBJ_CAMFLAG_ATX | AOBJ_CAMFLAG_ATY, 0),
	    0x00000000,  /* 0.0f */
	    0x453BF52E,  /* 3007.32373046875f */
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_EYEX | AOBJ_CAMFLAG_EYEY | AOBJ_CAMFLAG_EYEZ | AOBJ_CAMFLAG_ATZ | AOBJ_CAMFLAG_FOVY, 0),
	    0x4114C9EF,  /* 9.299300193786621f */
	    0x4572863B,  /* 3880.389404296875f */
	    0x457EDFB5,  /* 4077.981689453125f */
	    0xC3C27A0A,  /* -388.95343017578125f */
	    0x41EB4B36,  /* 29.411724090576172f */
	aobjEvent32SetValRate(AOBJ_CAMFLAG_ATX | AOBJ_CAMFLAG_ATY, 150),
	    0x3F75E0B0,  /* 0.9604597091674805f */
	    0x3B7BC75D,  /* 0.0038418390322476625f */
	    0x453B40C0,  /* 2996.046875f */
	    0xBD38C315,  /* -0.045107919722795486f */
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_FOVY, 60),
	    0x41D6A8EA,  /* 26.832477569580078f */
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_FOVY, 30),
	    0x41BEB678,  /* 23.839096069335938f */
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_FOVY, 30),
	    0x41A85412,  /* 21.04104995727539f */
	aobjEvent32SetValAfterBlock(AOBJ_CAMFLAG_FOVY, 30),
	    0x4194DB85,  /* 18.607187271118164f */
	aobjEvent32SetVal0Rate(AOBJ_CAMFLAG_ATX | AOBJ_CAMFLAG_ATY, 100),
	    0x3F75E0B0,  /* 0.9604597091674805f */
	    0x453B40C0,  /* 2996.046875f */
	aobjEvent32Wait(10),
	aobjEvent32End(),
};
