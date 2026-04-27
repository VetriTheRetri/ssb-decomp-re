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
/* @tex fmt=CI4 dim=32x32 */
u8 dYoshiSpecial2_Tex_0x58[520] = {
	#include <YoshiSpecial2/Tex_0x58.tex.inc.c>
};

/* gap sub-block @ 0x0260 (was gap+0x260, 512 bytes) */
/* MObjSub.sprites pointer table @ +0x260 (128 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
/* @tex fmt=CI4 dim=32x32 */
u8 dYoshiSpecial2_Tex_0x260[512] = {
	#include <YoshiSpecial2/Tex_0x260.tex.inc.c>
};

/* MObjSub-list head @ 0x460 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dYoshiSpecial2_EntryEggMObjSub_MObjSub_real below). */
MObjSub **dYoshiSpecial2_EntryEggMObjSub_MObjSub[1] = {
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x4). */
void *dYoshiSpecial2_EntryEggMObjSub_MObjSub_sprites[3] = {
	(void *)dYoshiSpecial2_Tex_0x260,
	(void *)dYoshiSpecial2_Tex_0x58,
	NULL,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dYoshiSpecial2_EntryEggMObjSub_MObjSub_real = {
	0x0000,
	G_IM_FMT_CI, G_IM_SIZ_16b,
	(void**)dYoshiSpecial2_EntryEggMObjSub_MObjSub_sprites,
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
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },
	{ { 0x35, 0x35, 0x35, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x04D8 to 0x0530 (88 bytes) */
/* gap sub-block @ 0x04E8 (was gap+0x10, 8 bytes) */
MObjSub *dYoshiSpecial2_gap_0x04D8_sub_0x10[2] = {
	&dYoshiSpecial2_EntryEggMObjSub_MObjSub_real,
	NULL,
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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial2_EntryEggAnimJoint_AnimJoint_0x604[];

AObjEvent32 *dYoshiSpecial2_EntryEggAnimJoint_AnimJoint[1] = {
	(AObjEvent32 *)dYoshiSpecial2_EntryEggAnimJoint_AnimJoint_0x604,
};

u32 dYoshiSpecial2_EntryEggAnimJoint_AnimJoint_0x604[] = {
	aobjEvent32SetValAfter(0x006, 0),
	    0x3FC90FDB,  /* 1.5707963705062866f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x3A0, 0),
	    0x44BB8000,  /* 1500.0f */
	    0x3F800000,  /* 1.0f */
	    0x40266666,  /* 2.5999999046325684f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 14),
	    0x00000000,  /* 0.0f */
	    0xC1480000,  /* -12.5f */
	aobjEvent32SetVal(0x001, 27),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x380, 9),
	    0x3F800000,  /* 1.0f */
	    0x40266666,  /* 2.5999999046325684f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3CEA0EA3,  /* 0.02857143245637417f */
	    0x40266666,  /* 2.5999999046325684f */
	    0xBE83A83A,  /* -0.2571428418159485f */
	    0x3F800000,  /* 1.0f */
	    0x3E2F8AF9,  /* 0.17142857611179352f */
	aobjEvent32SetVal(0x020, 106),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x380, 2),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3D08888A,  /* 0.03333333879709244f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	    0xBD888885,  /* -0.06666664034128189f */
	    0x400CCCCD,  /* 2.200000047683716f */
	    0x3D08888A,  /* 0.03333333879709244f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3C23D701,  /* 0.00999999139457941f */
	    0x400CCCCD,  /* 2.200000047683716f */
	    0xBC3CE421,  /* -0.011528999544680119f */
	    0x3F99999A,  /* 1.2000000476837158f */
	    0xBD23D70E,  /* -0.04000001400709152f */
	aobjEvent32SetValRateBlock(0x380, 6),
	    0x3FA66666,  /* 1.2999999523162842f */
	    0x3CDF6B0E,  /* 0.027272727340459824f */
	    0x3F2F4928,  /* 0.6847100257873535f */
	    0xBD8253CA,  /* -0.06363637745380402f */
	    0x3FE66666,  /* 1.7999999523162842f */
	    0x3CDF6B0E,  /* 0.027272727340459824f */
	aobjEvent32SetValRate(0x380, 5),
	    0x3FC00000,  /* 1.5f */
	    0x3C031270,  /* 0.008000001311302185f */
	    0x3FC00000,  /* 1.5f */
	    0x3D0593BD,  /* 0.03261159732937813f */
	    0x3FC00000,  /* 1.5f */
	    0xBC449BA3,  /* -0.011999997310340405f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x001, 0),
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValRate(0x001, 3),
	    0x00000000,  /* 0.0f */
	    0x3DD2E441,  /* 0.10297442227602005f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x380, 20),
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32Wait(2),
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	    0x3DD2E441,  /* 0.10297442227602005f */
	aobjEvent32SetVal0RateBlock(0x001, 3),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x001, 3),
	    0x00000000,  /* 0.0f */
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetVal0Rate(0x380, 69),
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetValBlock(0x001, 11),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x001, 58),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0780 to 0x07C0 (64 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint_0x784[];
extern u32 dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint_0x7B4[];

AObjEvent32 *dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint[1] = {
	(AObjEvent32 *)dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint_0x7B4,
};

u32 dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint_0x784[] = {
	aobjEvent32SetValAfterBlock(0x01F, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x001, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(118),
	aobjEvent32End(),
};

u32 dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint_0x7B4[] = {
	(u32)(dYoshiSpecial2_EntryEggMatAnimJoint_MatAnimJoint_0x784),
	aobjEvent32End(),
};

PAD(4);
