/* relocData file 253: ITBonus1ObjectHeader — raw blob with
 * 3 per-region word tweaks. */

#include "relocdata_types.h"

extern u8 dITBonus1Object_DObjDesc[];

u32 dITBonus1ObjectHeader[] = {
	(u32)dITBonus1Object_DObjDesc,
	0x00000000,
	0x00000000,
	0x00000000,
	0xD8000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x012C012C,
	0x012C00B4,
	0x0000FF4C,
	0x00B400C8,
	0x5A464010,
#if defined(REGION_JP)
	0x64001856,
#else
	0x6400185E,
#endif
	0x3F029840,
#if defined(REGION_JP)
	0x0D4350D4,
#else
	0x0E4390E4,
#endif
	0x32000000,
	0x00000000,
	0x00000000,
};

