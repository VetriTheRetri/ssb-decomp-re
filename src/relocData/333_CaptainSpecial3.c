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
/* @tex fmt=CI4 dim=32x32 */
u8 dCaptainSpecial3_Tex_0x80[520] = {
	#include <CaptainSpecial3/Tex_0x80.tex.inc.c>
};

/* gap sub-block @ 0x0288 (was gap+0x288, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dCaptainSpecial3_Tex_0x288[520] = {
	#include <CaptainSpecial3/Tex_0x288.tex.inc.c>
};

/* gap sub-block @ 0x0490 (was gap+0x490, 512 bytes) */
/* MObjSub.sprites pointer table @ +0x490 (128 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
/* @tex fmt=CI4 dim=32x32 */
u8 dCaptainSpecial3_Tex_0x490[512] = {
	#include <CaptainSpecial3/Tex_0x490.tex.inc.c>
};

/* MObjSub-list head @ 0x690 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dCaptainSpecial3_FalconPunchMObjSub_MObjSub_real below). */
MObjSub **dCaptainSpecial3_FalconPunchMObjSub_MObjSub[1] = {
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x4). */
void *dCaptainSpecial3_FalconPunchMObjSub_MObjSub_sprites[3] = {
	(void *)dCaptainSpecial3_Tex_0x490,
	(void *)dCaptainSpecial3_Tex_0x288,
	(void *)dCaptainSpecial3_Tex_0x80,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dCaptainSpecial3_FalconPunchMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dCaptainSpecial3_FalconPunchMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x00A1,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFE, 0xFF, 0x00 } },
		{ { 0x66, 0x66, 0x66, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x0708 to 0x0760 (88 bytes) */
/* gap sub-block @ 0x0718 (was gap+0x10, 8 bytes) */
MObjSub *dCaptainSpecial3_gap_0x0708_sub_0x10[2] = {
	&dCaptainSpecial3_FalconPunchMObjSub_MObjSub_real,
	NULL,
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
