/* relocData file 105: StageZebesFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x2B48 (11080 bytes) */
u8 dStageZebesFile2_gap_0x0000[11080] = {
	#include <StageZebesFile2/gap_0x0000.data.inc.c>
};

/* MObjSub: Layer1MObj @ 0x2B48 */
MObjSub dStageZebesFile2_Layer1MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x0AD40D42,
	0x0AD7, 0x0D46, 0x0000, 0x0000,
	0,
	2.080504218910902e-32f, 2.1190231116722343e-32f,
	0.0f, 0.0f,
	0.0f, 2.2056902530432476e-32f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0000, 0x0000,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x0AEA0D50,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x0A, 0xED, 0x0D, 0x52 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 183373140,
	183435566, 183501092,
};

/* Raw data from file offset 0x2BC0 to 0x5AC0 (12032 bytes) */
u8 dStageZebesFile2_gap_0x2BC0[12032] = {
	#include <StageZebesFile2/gap_0x2BC0.data.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x5AC0 (10 entries) */
DObjDesc dStageZebesFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2D70), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2D80), { 2988.0009765625f, 363.28582763671875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2D90), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2DA0), { 1140.0f, -56.71417236328125f, -570.0f }, { 0.0f, -0.4193980097770691f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2DB0), { -2100.0f, 705.2859497070312f, -465.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2DC0), { -1692.0f, 576.2859497070312f, -462.0000915527344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2DD0), { -2502.0f, 666.2859497070312f, -462.0000915527344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageZebesFile2_gap_0x2BC0 + 0x2DE0), { 1488.0f, -20.714149475097656f, -417.0000915527344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0x5C78 to 0x6160 (1256 bytes) */
u8 dStageZebesFile2_gap_0x5C78[1256] = {
	#include <StageZebesFile2/gap_0x5C78.data.inc.c>
};

/* Raw data from file offset 0x6160 to 0x6180 (32 bytes) */
u8 dStageZebesFile2_MPGeometryData_0x6160[32] = {
	#include <StageZebesFile2/MPGeometryData_0x6160.data.inc.c>
};

/* Raw data from file offset 0x6180 to 0x6410 (656 bytes) */
u8 dStageZebesFile2_Layer1Anim_AnimJoint[656] = {
	#include <StageZebesFile2/Layer1Anim_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6410 to 0xDF60 (31568 bytes) */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint[31568] = {
	#include <StageZebesFile2/Layer1MatAnim_MatAnimJoint.data.inc.c>
};

