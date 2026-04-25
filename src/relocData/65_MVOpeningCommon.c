/* relocData file 65: MVOpeningCommon — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint MarioCamAnimJoint @ 0x0000 (48 bytes) */
u32 dMVOpeningCommon_MarioCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x43E0BD64,
	    0x438342D8,
	    0x4458B992,
	    0x43AC636B,
	    0x432F0F58,
	    0xBFB76D80,
	    0x42262863,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint DonkeyCamAnimJoint @ 0x0030 (48 bytes) */
u32 dMVOpeningCommon_DonkeyCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC38F6F05,
	    0x438C0EC1,
	    0x4413780A,
	    0xC3A612E8,
	    0x4331D43F,
	    0xC1BFF0A9,
	    0x428E17D4,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint SamusCamAnimJoint @ 0x0060 (48 bytes) */
u32 dMVOpeningCommon_SamusCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC28799D0,
	    0x4441B511,
	    0x4573CE72,
	    0xC2879838,
	    0x44097ADE,
	    0x43081A99,
	    0x4093F316,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint FoxCamAnimJoint @ 0x0090 (48 bytes) */
u32 dMVOpeningCommon_FoxCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC3811EC5,
	    0x438F11EA,
	    0x43D9B474,
	    0xC2A8BE17,
	    0x43706AFA,
	    0x427C0FBB,
	    0x4295329F,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint LinkCamAnimJoint @ 0x00C0 (48 bytes) */
u32 dMVOpeningCommon_LinkCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x423C3D48,
	    0x43586FB6,
	    0x442E044F,
	    0x41ECA387,
	    0x43581B71,
	    0x4218A8FA,
	    0x418A1580,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint YoshiCamAnimJoint @ 0x00F0 (48 bytes) */
u32 dMVOpeningCommon_YoshiCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC1200D56,
	    0x43802D80,
	    0x44C44629,
	    0xC29DACD8,
	    0x4347885C,
	    0x427302D3,
	    0x416E9078,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint PikachuCamAnimJoint @ 0x0120 (48 bytes) */
u32 dMVOpeningCommon_PikachuCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x437D518E,
	    0x4424FFA4,
	    0x45260092,
	    0xC1615200,
	    0x429806F9,
	    0xC110E340,
	    0x418A1580,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint KirbyCamAnimJoint @ 0x0150 (48 bytes) */
u32 dMVOpeningCommon_KirbyCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x41989603,
	    0x43E524A6,
	    0x44ACD3C2,
	    0xC190D3BC,
	    0x43109B71,
	    0x427B8A2E,
	    0x41F7FAA0,
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
