/* relocData file 333: CaptainSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0690 (1680 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 88 bytes) */
u8 dCaptainSpecial3_gap_0x0000[88] = {
	#include <CaptainSpecial3/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0058 (was gap+0x58, 40 bytes) */
u16 dCaptainSpecial3_gap_0x0000_sub_0x58[20] = {
	#include <CaptainSpecial3/gap_0x0000_sub_0x58.palette.inc.c>
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
/* MObjSub.sprites pointer table @ +0x490 (128 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
void *dCaptainSpecial3_gap_0x0000_sub_0x490[128] = {
	NULL,
	NULL,
	(void *)0x30300000,  /* unresolved */
	NULL,
	NULL,
	NULL,
	(void *)0x40040000,  /* unresolved */
	NULL,
	NULL,
	NULL,
	(void *)0x50570000,  /* unresolved */
	NULL,
	NULL,
	NULL,
	(void *)0x79700000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x00000003,  /* unresolved */
	(void *)0x70000000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x00000003,  /* unresolved */
	(void *)0x99000000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x00000004,  /* unresolved */
	(void *)0xCEA00000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x00000034,  /* unresolved */
	(void *)0xE8B00000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x00000035,  /* unresolved */
	(void *)0xE8C00000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x0000034C,  /* unresolved */
	(void *)0xE8E70000,  /* unresolved */
	NULL,
	NULL,
	(void *)0x0000356C,  /* unresolved */
	(void *)0xFFECB500,  /* unresolved */
	NULL,
	NULL,
	(void *)0x000446CF,  /* unresolved */
	(void *)0xFFFEDBB5,  /* unresolved */
	NULL,
	NULL,
	(void *)0x02499CFF,  /* unresolved */
	(void *)0xFF88FEDB,  /* unresolved */
	(void *)0x50000000,  /* unresolved */
	(void *)0x00000002,  /* unresolved */
	(void *)0x469CDEEF,  /* unresolved */
	(void *)0xFF8888FD,  /* unresolved */
	(void *)0xB5000000,  /* unresolved */
	(void *)0x00000046,  /* unresolved */
	(void *)0xACCDEFFF,  /* unresolved */
	(void *)0xFF88888F,  /* unresolved */
	(void *)0xDB550009,  /* unresolved */
	(void *)0x0000246C,  /* unresolved */
	(void *)0xDDDEEFF8,  /* unresolved */
	(void *)0x88888888,  /* unresolved */
	(void *)0xFFFC99DD,  /* unresolved */
	(void *)0x00002467,  /* unresolved */
	(void *)0x9DDEFF88,  /* unresolved */
	(void *)0x88888888,  /* unresolved */
	(void *)0x8FF88FE7,  /* unresolved */
	NULL,
	(void *)0x000029BC,  /* unresolved */
	(void *)0xEEFF8FEC,  /* unresolved */
	(void *)0xBCF88C00,  /* unresolved */
	NULL,
	(void *)0x00246CCD,  /* unresolved */
	(void *)0xEFFF8FE7,  /* unresolved */
	(void *)0x07997500,  /* unresolved */
	NULL,
	(void *)0x2455569B,  /* unresolved */
	(void *)0xBDEF8FEB,  /* unresolved */
	NULL,
	(void *)0x00000025,  /* unresolved */
	(void *)0x666AAAA9,  /* unresolved */
	(void *)0xDDEFF8FB,  /* unresolved */
	NULL,
	(void *)0x00001369,  /* unresolved */
	(void *)0xDDECDDEE,  /* unresolved */
	(void *)0xEEFFF8FB,  /* unresolved */
	NULL,
	(void *)0x00012346,  /* unresolved */
	(void *)0x9DDEEEEF,  /* unresolved */
	(void *)0xFFFFF88C,  /* unresolved */
	(void *)0xB0000000,  /* unresolved */
	(void *)0x00000003,  /* unresolved */
	(void *)0x7AACDEEE,  /* unresolved */
	(void *)0xEEFFFF8F,  /* unresolved */
	(void *)0xCB900000,  /* unresolved */
	(void *)0x00000227,  /* unresolved */
	(void *)0x9DDEEEFF,  /* unresolved */
	(void *)0xFFFFFF88,  /* unresolved */
	(void *)0xFEC97000,  /* unresolved */
	(void *)0x0024577C,  /* unresolved */
	(void *)0xDEEEEEEE,  /* unresolved */
	(void *)0xEEFFFF88,  /* unresolved */
	(void *)0x8FEC9970,  /* unresolved */
	(void *)0x0123577C,  /* unresolved */
	(void *)0x79CCBBBC,  /* unresolved */
	(void *)0xEFFF8888,  /* unresolved */
	(void *)0x88FFED97,  /* unresolved */
	(void *)0x00000012,  /* unresolved */
	(void *)0x557799DE,  /* unresolved */
	(void *)0xFF888888,  /* unresolved */
	(void *)0x8FFFED97,  /* unresolved */
	(void *)0x00001257,  /* unresolved */
	(void *)0x5779CDF8,  /* unresolved */
	(void *)0x88FFEEEE,  /* unresolved */
	(void *)0xEEC99770,  /* unresolved */
	(void *)0x0123579C,  /* unresolved */
	(void *)0xCEEEEEEC,  /* unresolved */
	(void *)0xCCCC7755,  /* unresolved */
	(void *)0x32000000,  /* unresolved */
	(void *)0x12569CC9,  /* unresolved */
	(void *)0x97432222,  /* unresolved */
	(void *)0x33322200,  /* unresolved */
	NULL,
	(void *)0x21233322,  /* unresolved */
	(void *)0x11000000,  /* unresolved */
	NULL,
	NULL,
};

/* MObjSub: FalconPunchMObjSub @ 0x690 */
MObjSub dCaptainSpecial3_FalconPunchMObjSub_MObjSub = {
	0x01A5,
	0x01, 0xC6,
	(void**)(dCaptainSpecial3_gap_0x0000_sub_0x490),
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
Vtx dCaptainSpecial3_gap_0x0708_sub_0x18[4] = {
	#include <CaptainSpecial3/gap_0x0708_sub_0x18.vtx.inc.c>
};

/* Raw data from file offset 0x0760 to 0x0830 (208 bytes) */
Gfx dCaptainSpecial3_DL_0x0760[26] = {
	#include <CaptainSpecial3/DL_0x0760.dl.inc.c>
};

/* Raw data from file offset 0x0830 to 0x0870 (64 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x834[];
extern u32 dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x86C[];

AObjEvent32 *dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint[1] = {
	(AObjEvent32 *)dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x86C,
};

u32 dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x834[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x834),
};

u32 dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x86C[] = {
	(u32)(dCaptainSpecial3_FalconPunchMatAnimJoint_MatAnimJoint_0x834),
};
