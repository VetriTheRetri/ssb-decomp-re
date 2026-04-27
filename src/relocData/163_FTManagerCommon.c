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
	#include <FTManagerCommon/gap_0x0000_sub_0x8.tex.inc.c>
};

/* Vtx @ 0x0208 (4 vertices) */
Vtx dFTManagerCommon_gap_0x0000_sub_0x208[4] = {
	#include <FTManagerCommon/gap_0x0000_sub_0x208.vtx.inc.c>
};

/* gap sub-block @ 0x0248 (was gap+0x248, 168 bytes) */
Gfx dFTManagerCommon_DL_0x0248[21] = {
	#include <FTManagerCommon/DL_0x0248.dl.inc.c>
};

/* DObjDLLink @ 0x2F0 (2 entries) */
DObjDLLink dFTManagerCommon_DLLink_0x02F0[] = {
	{ 1, dFTManagerCommon_DL_0x0248 },
	{ 4, NULL },
};

/* DObjDesc: Shield @ 0x300 (3 entries) */
DObjDesc dFTManagerCommon_Shield[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFTManagerCommon_DLLink_0x02F0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

