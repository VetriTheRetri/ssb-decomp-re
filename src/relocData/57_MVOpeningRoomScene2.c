/* relocData file 57: MVOpeningRoomScene2 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (80 bytes) */
u32 dMVOpeningRoomScene2_CamAnimJoint[17] = {
	aobjEvent32SetVal0RateBlock(0x277, 0),
	    0xC47F39E0,  /* -1020.904296875f */
	    0x453E361B,  /* 3043.381591796875f */
	    0xC493A5CA,  /* -1181.180908203125f */
	    0xC48EEDDF,  /* -1143.4334716796875f */
	    0x45056987,  /* 2134.595458984375f */
	    0xC56B334B,  /* -3763.205810546875f */
	    0x41800355,  /* 16.00162696838379f */
	aobjEvent32SetVal0RateBlock(0x277, 300),
	    0x43FC2BD5,  /* 504.3424377441406f */
	    0x459F6057,  /* 5100.04248046875f */
	    0x452CA200,  /* 2762.125f */
	    0x44028796,  /* 522.1185302734375f */
	    0x453CD9A7,  /* 3021.603271484375f */
	    0xC580EC18,  /* -4125.51171875f */
	    0x420510A0,  /* 33.2662353515625f */
	aobjEvent32End(),
};

u8 dMVOpeningRoomScene2_CamAnimJoint_post[12] = {
	#include <MVOpeningRoomScene2/CamAnimJoint_post.data.inc.c>
};
