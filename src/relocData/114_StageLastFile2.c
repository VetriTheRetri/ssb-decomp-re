/* relocData file 114: StageLastFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dStageLastFile2_gap_0x20F0[];

/* Raw data from file offset 0x0000 to 0x2078 (8312 bytes) */
u8 dStageLastFile2_gap_0x0000[8312] = {
	#include <StageLastFile2/gap_0x0000.data.inc.c>
};

/* MObjSub: Layer1MObj @ 0x2078 */
MObjSub dStageLastFile2_Layer1MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dStageLastFile2_gap_0x20F0 + 0x960),
	0x0821, 0x0A9A, 0x0822, 0x0AA0,
	136514211,
	4.935279052793796e-34f, 4.965367116400038e-34f,
	4.995455180006281e-34f, 5.025543243612524e-34f,
	5.055631307218766e-34f, 5.085719370825009e-34f,
	(void**)((u8*)dStageLastFile2_gap_0x0000 + 0x1E8),
	0x082B,
	0x00, 0x70,
	0x082C,
	0x0066, 0x082D, 0x005C,
	5.236159688856222e-34f, 5.266247752462465e-34f,
	5.296335816068708e-34f, 5.32642387967495e-34f,
	0x0832002A,
	{ { 0x08, 0x33, 0x00, 0x20 } },
	0x08, 0x34, { 0x00, 0x16 },
	{ { 0x08, 0x35, 0x00, 0x0C } },
	{ { 0x08, 0x36, 0x00, 0xB6 } },
	{ { 0x08, 0x37, 0x00, 0xAC } },
	{ { 0x08, 0x38, 0x00, 0xA2 } },
	137953432, 138018958,
	138084484, 138150010,
};

/* Raw data from file offset 0x20F0 to 0x4D48 (11352 bytes) */
u8 dStageLastFile2_gap_0x20F0[11352] = {
	#include <StageLastFile2/gap_0x20F0.data.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x4D48 (6 entries) */
DObjDesc dStageLastFile2_Layer1DObj[] = {
	{ 0, (void*)((u8*)dStageLastFile2_gap_0x20F0 + 0x1F88), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageLastFile2_gap_0x20F0 + 0x2140), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageLastFile2_gap_0x20F0 + 0x24E8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dStageLastFile2_gap_0x20F0 + 0x2890), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageLastFile2_gap_0x20F0 + 0x2C28), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x4E50 to 0x4EF4 (164 bytes) */
u8 dStageLastFile2_gap_0x4E50[164] = {
	#include <StageLastFile2/gap_0x4E50.data.inc.c>
};

/* Raw data from file offset 0x4EF4 to 0x4F10 (28 bytes) */
u8 dStageLastFile2_MPGeometryData_0x4EF4[28] = {
	#include <StageLastFile2/MPGeometryData_0x4EF4.data.inc.c>
};

/* Raw data from file offset 0x4F10 to 0x4F40 (48 bytes) */
u8 dStageLastFile2_Layer1Anim_AnimJoint[48] = {
	#include <StageLastFile2/Layer1Anim_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x4F40 to 0x12960 (55840 bytes) */
u8 dStageLastFile2_Layer1MatAnim_MatAnimJoint[55840] = {
	#include <StageLastFile2/Layer1MatAnim_MatAnimJoint.data.inc.c>
};

