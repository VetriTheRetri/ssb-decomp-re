/* relocData file 163: FTManagerCommon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0300 (768 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dFTManagerCommon_gap_0x0000[8] = {
	#include <FTManagerCommon/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 512 bytes) */
u8 dFTManagerCommon_gap_0x0000_sub_0x8[512] = {
	#include <FTManagerCommon/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0208 (was gap+0x208, 64 bytes) */
u8 dFTManagerCommon_gap_0x0000_sub_0x208[64] = {
	#include <FTManagerCommon/gap_0x0000_sub_0x208.data.inc.c>
};

/* gap sub-block @ 0x0248 (was gap+0x248, 168 bytes) */
u8 dFTManagerCommon_gap_0x0000_sub_0x248[168] = {
	#include <FTManagerCommon/gap_0x0000_sub_0x248.data.inc.c>
};

/* gap sub-block @ 0x02F0 (was gap+0x2F0, 16 bytes) */
u8 dFTManagerCommon_gap_0x0000_sub_0x2F0[16] = {
	#include <FTManagerCommon/gap_0x0000_sub_0x2F0.data.inc.c>
};

/* DObjDesc: Shield @ 0x300 (3 entries) */
DObjDesc dFTManagerCommon_Shield[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dFTManagerCommon_gap_0x0000 + 0x2F0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

