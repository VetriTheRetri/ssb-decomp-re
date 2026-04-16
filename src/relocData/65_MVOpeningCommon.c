/* relocData file 65: MVOpeningCommon — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"

/* CamAnimJoint MarioCamAnimJoint @ 0x0000 (48 bytes) */
u32 dMVOpeningCommon_MarioCamAnimJoint[12] = {
	#include <MVOpeningCommon/MarioCamAnimJoint.data.inc.c>
};

/* CamAnimJoint DonkeyCamAnimJoint @ 0x0030 (48 bytes) */
u32 dMVOpeningCommon_DonkeyCamAnimJoint[12] = {
	#include <MVOpeningCommon/DonkeyCamAnimJoint.data.inc.c>
};

/* CamAnimJoint SamusCamAnimJoint @ 0x0060 (48 bytes) */
u32 dMVOpeningCommon_SamusCamAnimJoint[12] = {
	#include <MVOpeningCommon/SamusCamAnimJoint.data.inc.c>
};

/* CamAnimJoint FoxCamAnimJoint @ 0x0090 (48 bytes) */
u32 dMVOpeningCommon_FoxCamAnimJoint[12] = {
	#include <MVOpeningCommon/FoxCamAnimJoint.data.inc.c>
};

/* CamAnimJoint LinkCamAnimJoint @ 0x00C0 (48 bytes) */
u32 dMVOpeningCommon_LinkCamAnimJoint[12] = {
	#include <MVOpeningCommon/LinkCamAnimJoint.data.inc.c>
};

/* CamAnimJoint YoshiCamAnimJoint @ 0x00F0 (48 bytes) */
u32 dMVOpeningCommon_YoshiCamAnimJoint[12] = {
	#include <MVOpeningCommon/YoshiCamAnimJoint.data.inc.c>
};

/* CamAnimJoint PikachuCamAnimJoint @ 0x0120 (48 bytes) */
u32 dMVOpeningCommon_PikachuCamAnimJoint[12] = {
	#include <MVOpeningCommon/PikachuCamAnimJoint.data.inc.c>
};

/* CamAnimJoint KirbyCamAnimJoint @ 0x0150 (48 bytes) */
u32 dMVOpeningCommon_KirbyCamAnimJoint[12] = {
	#include <MVOpeningCommon/KirbyCamAnimJoint.data.inc.c>
};
