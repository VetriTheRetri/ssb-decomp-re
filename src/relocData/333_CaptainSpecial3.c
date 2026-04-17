/* relocData file 333: CaptainSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0690 (1680 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 88 bytes) */
u8 dCaptainSpecial3_gap_0x0000[88] = {
	#include <CaptainSpecial3/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0058 (was gap+0x58, 40 bytes) */
u8 dCaptainSpecial3_gap_0x0000_sub_0x58[40] = {
	#include <CaptainSpecial3/gap_0x0000_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x0080 (was gap+0x80, 520 bytes) */
u8 dCaptainSpecial3_gap_0x0000_sub_0x80[520] = {
	#include <CaptainSpecial3/gap_0x0000_sub_0x80.data.inc.c>
};

/* gap sub-block @ 0x0288 (was gap+0x288, 520 bytes) */
u8 dCaptainSpecial3_gap_0x0000_sub_0x288[520] = {
	#include <CaptainSpecial3/gap_0x0000_sub_0x288.data.inc.c>
};

/* gap sub-block @ 0x0490 (was gap+0x490, 512 bytes) */
u8 dCaptainSpecial3_gap_0x0000_sub_0x490[512] = {
	#include <CaptainSpecial3/gap_0x0000_sub_0x490.data.inc.c>
};

/* MObjSub: FalconPunchMObjSub @ 0x690 */
MObjSub dCaptainSpecial3_FalconPunchMObjSub_MObjSub = {
	0x01A5,
	0x01, 0xC6,
	(void**)((u8*)dCaptainSpecial3_gap_0x0000 + 0x490),
	0x01A7, 0x00A2, 0x01A9, 0x0020,
	514,
	7.273607274374296e-38f, 2.938735877055719e-39f,
	2.938780718606577e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.478623234625032e-38f,
	2.938780718606577e-39f, 2.938780718606577e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x05 } },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	255, 0,
	-65792, 1717986816,
};

/* Raw data from file offset 0x0708 to 0x0760 (88 bytes) */
/* gap sub-block @ 0x0708 (was gap+0x0, 16 bytes) */
u8 dCaptainSpecial3_gap_0x0708[16] = {
	#include <CaptainSpecial3/gap_0x0708.data.inc.c>
};

/* gap sub-block @ 0x0718 (was gap+0x10, 8 bytes) */
u8 dCaptainSpecial3_gap_0x0708_sub_0x10[8] = {
	#include <CaptainSpecial3/gap_0x0708_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x0720 (was gap+0x18, 64 bytes) */
u8 dCaptainSpecial3_gap_0x0708_sub_0x18[64] = {
	#include <CaptainSpecial3/gap_0x0708_sub_0x18.data.inc.c>
};

/* Raw data from file offset 0x0760 to 0x0830 (208 bytes) */
u8 dCaptainSpecial3_gap_0x0760[208] = {
	#include <CaptainSpecial3/gap_0x0760.data.inc.c>
};

/* Raw data from file offset 0x0830 to 0x0870 (64 bytes) */
u32 dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint[16] = {
	#include <CaptainSpecial3/FalconPunchMatAnimJoint_MatAnimJoint.data.inc.c>
};
