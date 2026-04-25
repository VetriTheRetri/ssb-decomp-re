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
	    0x43E0BD64,  /* 449.4796142578125f */
	    0x438342D8,  /* 262.522216796875f */
	    0x4458B992,  /* 866.8995361328125f */
	    0x43AC636B,  /* 344.7767028808594f */
	    0x432F0F58,  /* 175.0599365234375f */
	    0xBFB76D80,  /* -1.4330291748046875f */
	    0x42262863,  /* 41.5394401550293f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint DonkeyCamAnimJoint @ 0x0030 (48 bytes) */
u32 dMVOpeningCommon_DonkeyCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC38F6F05,  /* -286.8673400878906f */
	    0x438C0EC1,  /* 280.1152648925781f */
	    0x4413780A,  /* 589.8756103515625f */
	    0xC3A612E8,  /* -332.147705078125f */
	    0x4331D43F,  /* 177.82908630371094f */
	    0xC1BFF0A9,  /* -23.992509841918945f */
	    0x428E17D4,  /* 71.04653930664062f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint SamusCamAnimJoint @ 0x0060 (48 bytes) */
u32 dMVOpeningCommon_SamusCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC28799D0,  /* -67.8004150390625f */
	    0x4441B511,  /* 774.8291625976562f */
	    0x4573CE72,  /* 3900.90283203125f */
	    0xC2879838,  /* -67.79730224609375f */
	    0x44097ADE,  /* 549.9197998046875f */
	    0x43081A99,  /* 136.10389709472656f */
	    0x4093F316,  /* 4.6234235763549805f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint FoxCamAnimJoint @ 0x0090 (48 bytes) */
u32 dMVOpeningCommon_FoxCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC3811EC5,  /* -258.2403869628906f */
	    0x438F11EA,  /* 286.13995361328125f */
	    0x43D9B474,  /* 435.4097900390625f */
	    0xC2A8BE17,  /* -84.37126922607422f */
	    0x43706AFA,  /* 240.41787719726562f */
	    0x427C0FBB,  /* 63.01536178588867f */
	    0x4295329F,  /* 74.59886932373047f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint LinkCamAnimJoint @ 0x00C0 (48 bytes) */
u32 dMVOpeningCommon_LinkCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x423C3D48,  /* 47.059844970703125f */
	    0x43586FB6,  /* 216.43637084960938f */
	    0x442E044F,  /* 696.0673217773438f */
	    0x41ECA387,  /* 29.57984733581543f */
	    0x43581B71,  /* 216.10719299316406f */
	    0x4218A8FA,  /* 38.165016174316406f */
	    0x418A1580,  /* 17.260498046875f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint YoshiCamAnimJoint @ 0x00F0 (48 bytes) */
u32 dMVOpeningCommon_YoshiCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0xC1200D56,  /* -10.003255844116211f */
	    0x43802D80,  /* 256.35546875f */
	    0x44C44629,  /* 1570.1925048828125f */
	    0xC29DACD8,  /* -78.83758544921875f */
	    0x4347885C,  /* 199.53265380859375f */
	    0x427302D3,  /* 60.75275802612305f */
	    0x416E9078,  /* 14.910270690917969f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint PikachuCamAnimJoint @ 0x0120 (48 bytes) */
u32 dMVOpeningCommon_PikachuCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x437D518E,  /* 253.31857299804688f */
	    0x4424FFA4,  /* 659.994384765625f */
	    0x45260092,  /* 2656.03564453125f */
	    0xC1615200,  /* -14.08251953125f */
	    0x429806F9,  /* 76.01361846923828f */
	    0xC110E340,  /* -9.05548095703125f */
	    0x418A1580,  /* 17.260498046875f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* CamAnimJoint KirbyCamAnimJoint @ 0x0150 (48 bytes) */
u32 dMVOpeningCommon_KirbyCamAnimJoint[12] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x41989603,  /* 19.0732479095459f */
	    0x43E524A6,  /* 458.28631591796875f */
	    0x44ACD3C2,  /* 1382.617431640625f */
	    0xC190D3BC,  /* -18.10338592529297f */
	    0x43109B71,  /* 144.60719299316406f */
	    0x427B8A2E,  /* 62.88494110107422f */
	    0x41F7FAA0,  /* 30.99737548828125f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};
