/* relocData file 72: MVOpeningClashFighters — movie/opening camera animation data.
 *
 * Block boundaries from intern-chain relocation targets.
 * Each sub-block is a u32 AObjEvent32 command stream passed to
 * gcAddCObjCamAnimJoint by the movie engine.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* 8-byte header/pad @ 0x0000 */
u8 dMVOpeningClashFighters_data_0x0000[8] = {
	#include <MVOpeningClashFighters/data_0x0000.data.inc.c>
};

/* AObjEvent32 stream @ 0x0008 (2048 bytes) */
u32 dMVOpeningClashFighters_0x0008[512] = {
	#include <MVOpeningClashFighters/0x0008.data.inc.c>
};

/* AObjEvent32 stream @ 0x0808 (512 bytes) */
u32 dMVOpeningClashFighters_0x0808[128] = {
	#include <MVOpeningClashFighters/0x0808.data.inc.c>
};

/* AObjEvent32 stream @ 0x0A08 (16 bytes) */
u32 dMVOpeningClashFighters_0x0A08[4] = {
	#include <MVOpeningClashFighters/0x0A08.data.inc.c>
};

/* AObjEvent32 stream @ 0x0A18 (320 bytes) */
u32 dMVOpeningClashFighters_0x0A18[80] = {
	#include <MVOpeningClashFighters/0x0A18.data.inc.c>
};

/* AObjEvent32 stream @ 0x0B58 (160 bytes) */
u32 dMVOpeningClashFighters_0x0B58[40] = {
	#include <MVOpeningClashFighters/0x0B58.data.inc.c>
};

/* AObjEvent32 stream @ 0x0BF8 (16 bytes) */
u32 dMVOpeningClashFighters_0x0BF8[4] = {
	#include <MVOpeningClashFighters/0x0BF8.data.inc.c>
};

/* AObjEvent32 stream @ 0x0C08 (128 bytes) */
u32 dMVOpeningClashFighters_0x0C08[32] = {
	#include <MVOpeningClashFighters/0x0C08.data.inc.c>
};

/* AObjEvent32 stream @ 0x0C88 (16 bytes) */
u32 dMVOpeningClashFighters_0x0C88[4] = {
	#include <MVOpeningClashFighters/0x0C88.data.inc.c>
};

/* AObjEvent32 stream @ 0x0C98 (256 bytes) */
u32 dMVOpeningClashFighters_0x0C98[64] = {
	#include <MVOpeningClashFighters/0x0C98.data.inc.c>
};

/* AObjEvent32 stream @ 0x0D98 (80 bytes) */
u32 dMVOpeningClashFighters_0x0D98[20] = {
	#include <MVOpeningClashFighters/0x0D98.data.inc.c>
};

/* AObjEvent32 stream @ 0x0DE8 (144 bytes) */
u32 dMVOpeningClashFighters_0x0DE8[36] = {
	#include <MVOpeningClashFighters/0x0DE8.data.inc.c>
};

/* AObjEvent32 stream @ 0x0E78 (128 bytes) */
u32 dMVOpeningClashFighters_0x0E78[32] = {
	#include <MVOpeningClashFighters/0x0E78.data.inc.c>
};

/* AObjEvent32 stream @ 0x0EF8 (64 bytes) */
u32 dMVOpeningClashFighters_0x0EF8[16] = {
	#include <MVOpeningClashFighters/0x0EF8.data.inc.c>
};

/* AObjEvent32 stream @ 0x0F38 (64 bytes) */
u32 dMVOpeningClashFighters_0x0F38[16] = {
	#include <MVOpeningClashFighters/0x0F38.data.inc.c>
};

/* AObjEvent32 stream @ 0x0F78 (32 bytes) */
u32 dMVOpeningClashFighters_0x0F78[8] = {
	#include <MVOpeningClashFighters/0x0F78.data.inc.c>
};

/* AObjEvent32 stream @ 0x0F98 (1192 bytes) */
u32 dMVOpeningClashFighters_0x0F98[298] = {
	#include <MVOpeningClashFighters/0x0F98.data.inc.c>
};

/* CamAnimJoint @ 0x1440 (64 bytes) */
u32 dMVOpeningClashFighters_CamAnimJoint[16] = {
	aobjEvent32SetValAfter(0x266, 0),
	    0x43520000,
	    0x00000000,
	    0x43520000,
	    0x00000000,
	    0x41838232,
	aobjEvent32SetVal0Rate(0x010, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x001, 0),
	    0xC5672ED2,
	aobjEvent32SetVal0Rate(0x010, 170),
	    0x44D1A001,
	aobjEvent32SetValBlock(0x001, 170),
	    0xC525C869,
	aobjEvent32End(),
	aobjEvent32End(),
};
