/* relocData file 342: PikachuSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x1A20 (6688 bytes) */
u8 dPikachuSpecial3_gap_0x0000[6688] = {
	#include <PikachuSpecial3/gap_0x0000.data.inc.c>
};

/* Raw data from file offset 0x1A20 to 0x1AE0 (192 bytes) */
u8 dPikachuSpecial3_ThunderJoltBAnimJoint_AnimJoint[192] = {
	#include <PikachuSpecial3/ThunderJoltBAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x1AE0 to 0x1C70 (400 bytes) */
u8 dPikachuSpecial3_ThunderJoltBMatAnimJoint_MatAnimJoint[400] = {
	#include <PikachuSpecial3/ThunderJoltBMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Palette: Lut_0x1C70 @ 0x1C70 (16 colors RGBA5551) */
u16 dPikachuSpecial3_Lut_0x1C70_palette[16] = {
	#include <PikachuSpecial3/Lut_0x1C70.palette.inc.c>
};

/* Raw data from file offset 0x1C90 to 0x20A0 (1040 bytes) */
u8 dPikachuSpecial3_gap_0x1C90[1040] = {
	#include <PikachuSpecial3/gap_0x1C90.data.inc.c>
};

/* MObjSub: ThunderJoltMObjSub @ 0x20A0 */
MObjSub dPikachuSpecial3_ThunderJoltMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x082A084A,
	0x082B, 0x07A8, 0x082D, 0x0726,
	514,
	6.079676067907064e-34f, 2.938735877055719e-39f,
	5.877516595662296e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.255296097172552e-41f,
	2.938780718606577e-39f, 5.877516595662296e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x05 } },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	255, 0,
	-256, -2139062272,
};

/* Raw data from file offset 0x2118 to 0x2130 (24 bytes) */
u8 dPikachuSpecial3_gap_0x2118[24] = {
	#include <PikachuSpecial3/gap_0x2118.data.inc.c>
};

/* Vtx: Vtx_0x2130 @ 0x2130 (4 vertices) */
Vtx dPikachuSpecial3_Vtx_0x2130_Vtx[4] = {
	#include <PikachuSpecial3/Vtx_0x2130.vtx.inc.c>
};

/* DisplayList: Joint_0x2170 @ 0x2170 (232 bytes) */
Gfx dPikachuSpecial3_Joint_0x2170_DisplayList[29] = {
	#include <PikachuSpecial3/Joint_0x2170.dl.inc.c>
};

/* DObjDesc: ThunderJoltDObjDesc @ 0x2258 (3 entries) */
DObjDesc dPikachuSpecial3_ThunderJoltDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPikachuSpecial3_Joint_0x2170_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.2000000476837158f, 1.5f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x22E0 to 0x2350 (112 bytes) */
u8 dPikachuSpecial3_ThunderJoltAnimJoint_AnimJoint[112] = {
	#include <PikachuSpecial3/ThunderJoltAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x2350 to 0x2390 (64 bytes) */
u8 dPikachuSpecial3_ThunderJoltMatAnimJoint_MatAnimJoint[64] = {
	#include <PikachuSpecial3/ThunderJoltMatAnimJoint_MatAnimJoint.data.inc.c>
};

