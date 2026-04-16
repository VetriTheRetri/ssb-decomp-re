/* relocData file 354: YoshiSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0460 (1120 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 48 bytes) */
u8 dYoshiSpecial2_gap_0x0000[48] = {
	#include <YoshiSpecial2/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0030 (was gap+0x30, 40 bytes) */
u8 dYoshiSpecial2_gap_0x0000_sub_0x30[40] = {
	#include <YoshiSpecial2/gap_0x0000_sub_0x30.data.inc.c>
};

/* gap sub-block @ 0x0058 (was gap+0x58, 520 bytes) */
u8 dYoshiSpecial2_gap_0x0000_sub_0x58[520] = {
	#include <YoshiSpecial2/gap_0x0000_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x0260 (was gap+0x260, 512 bytes) */
u8 dYoshiSpecial2_gap_0x0000_sub_0x260[512] = {
	#include <YoshiSpecial2/gap_0x0000_sub_0x260.data.inc.c>
};

/* MObjSub: EntryEggMObjSub @ 0x460 */
MObjSub dYoshiSpecial2_EntryEggMObjSub_MObjSub = {
	0x0119,
	0x01, 0x3A,
	(void**)((u8*)dYoshiSpecial2_gap_0x0000 + 0x260),
	0x011D, 0x0016, 0x0000, 0x0000,
	514,
	3.416359210050968e-38f, 2.938735877055719e-39f,
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
	-256, 892679424,
};

/* Raw data from file offset 0x04D8 to 0x0530 (88 bytes) */
/* gap sub-block @ 0x04D8 (was gap+0x0, 16 bytes) */
u8 dYoshiSpecial2_gap_0x04D8[16] = {
	#include <YoshiSpecial2/gap_0x04D8.data.inc.c>
};

/* gap sub-block @ 0x04E8 (was gap+0x10, 8 bytes) */
u8 dYoshiSpecial2_gap_0x04D8_sub_0x10[8] = {
	#include <YoshiSpecial2/gap_0x04D8_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x04F0 (was gap+0x18, 64 bytes) */
u8 dYoshiSpecial2_gap_0x04D8_sub_0x18[64] = {
	#include <YoshiSpecial2/gap_0x04D8_sub_0x18.data.inc.c>
};

/* Raw data from file offset 0x0530 to 0x0600 (208 bytes) */
u8 dYoshiSpecial2_gap_0x0530[208] = {
	#include <YoshiSpecial2/gap_0x0530.data.inc.c>
};

/* Raw data from file offset 0x0600 to 0x0780 (384 bytes) */
u32 dYoshiSpecial2_EntryEggAnimJoint_AnimJoint[96] = {
	#include <YoshiSpecial2/EntryEggAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0780 to 0x07C0 (64 bytes) */
u32 dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint[16] = {
	#include <YoshiSpecial2/EntryEggMatAnimJoint_MatAnimJoint.data.inc.c>
};

