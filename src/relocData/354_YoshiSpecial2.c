/* relocData file 354: YoshiSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0460 (1120 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 48 bytes) */
u8 dYoshiSpecial2_gap_0x0000[48] = {
	#include <YoshiSpecial2/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0030 (was gap+0x30, 40 bytes) */
u16 dYoshiSpecial2_gap_0x0000_sub_0x30[20] = {
	#include <YoshiSpecial2/gap_0x0000_sub_0x30.palette.inc.c>
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
Vtx dYoshiSpecial2_gap_0x04D8_sub_0x18[4] = {
	#include <YoshiSpecial2/gap_0x04D8_sub_0x18.vtx.inc.c>
};

/* Gfx DL: gap_0x0530 @ 0x530 (25 cmds) */
Gfx dYoshiSpecial2_gap_0x0530[25] = {
	#include <YoshiSpecial2/gap_0x0530.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x5F8 (8 bytes) */
u8 dYoshiSpecial2_gap_0x0530_post[8] = {
	#include <YoshiSpecial2/gap_0x0530_post.data.inc.c>
};

/* Raw data from file offset 0x0600 to 0x0780 (384 bytes) */
u32 dYoshiSpecial2_EntryEggAnimJoint_AnimJoint[96] = {
	(u32)((u8*)dYoshiSpecial2_EntryEggAnimJoint_AnimJoint + 0x4),
	aobjEvent32SetValAfter(0x006, 0),
	    0x3FC90FDB,
	    0x00000000,
	aobjEvent32SetVal0Rate(0x3A0, 0),
	    0x44BB8000,
	    0x3F800000,
	    0x40266666,
	    0x3F800000,
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValRate(0x020, 14),
	    0x00000000,
	    0xC1480000,
	aobjEvent32SetVal(0x001, 27),
	    0x00000000,
	aobjEvent32SetVal0RateBlock(0x380, 9),
	    0x3F800000,
	    0x40266666,
	    0x3F800000,
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3F800000,
	    0x3CEA0EA3,
	    0x40266666,
	    0xBE83A83A,
	    0x3F800000,
	    0x3E2F8AF9,
	aobjEvent32SetVal(0x020, 106),
	    0x00000000,
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F99999A,
	    0x3D08888A,
	    0x3F4CCCCD,
	    0xBD888885,
	    0x400CCCCD,
	    0x3D08888A,
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F99999A,
	    0x3C23D701,
	    0x400CCCCD,
	    0xBC3CE421,
	    0x3F99999A,
	    0xBD23D70E,
	aobjEvent32SetValRateBlock(0x380, 6),
	    0x3FA66666,
	    0x3CDF6B0E,
	    0x3F2F4928,
	    0xBD8253CA,
	    0x3FE66666,
	    0x3CDF6B0E,
	aobjEvent32SetValRate(0x380, 5),
	    0x3FC00000,
	    0x3C031270,
	    0x3FC00000,
	    0x3D0593BD,
	    0x3FC00000,
	    0xBC449BA3,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x001, 0),
	    0xBDD2E441,
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0xBEB2B8C2,
	aobjEvent32SetValRate(0x001, 3),
	    0x00000000,
	    0x3DD2E441,
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x380, 20),
	    0x3FC00000,
	    0x3FC00000,
	    0x3FC00000,
	aobjEvent32Wait(2),
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0x3EB2B8C2,
	aobjEvent32SetValRateBlock(0x001, 3),
	    0x00000000,
	    0xBDD2E441,
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0xBEB2B8C2,
	aobjEvent32SetValRateBlock(0x001, 3),
	    0x00000000,
	    0x3DD2E441,
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0x3EB2B8C2,
	aobjEvent32SetValRateBlock(0x001, 3),
	    0x00000000,
	    0xBDD2E441,
	aobjEvent32SetVal0Rate(0x380, 69),
	    0x3FC00000,
	    0x3FC00000,
	    0x3FC00000,
	aobjEvent32SetValBlock(0x001, 11),
	    0x00000000,
	aobjEvent32SetVal0RateBlock(0x001, 58),
	    0x00000000,
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Raw data from file offset 0x0780 to 0x07C0 (64 bytes) */
u32 dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint[16] = {
	(u32)((u8*)dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint + 0x34),
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,
	aobjEvent32SetValAfter(0x001, 60),
	    0x3F800000,
	aobjEvent32Wait(118),
	aobjEvent32End(),
	(u32)((u8*)dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint + 0x4),
	aobjEvent32End(),
	aobjEvent32End(),
};
