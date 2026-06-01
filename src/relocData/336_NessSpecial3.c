/* relocData file 336: NessSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dNessSpecial3_PKFireDL_post[];
extern u8 dNessSpecial3_Tex_0x02A8[];
extern u8 dNessSpecial3_Tex_0x0330[];
extern Vtx dNessSpecial3_Vtx_0x0730_Vtx[];
extern Vtx dNessSpecial3_Vtx_0x07B0_Vtx[];
extern Vtx dNessSpecial3_Vtx_0x0830_Vtx[];
extern Vtx dNessSpecial3_gap_0x0000_sub_0x108[];
extern Vtx dNessSpecial3_gap_0x0000_sub_0x138[];

extern MObjSub *dNessSpecial3_gap_0x0000_sub_0xF8[];
extern AObjEvent32 *dNessSpecial3_gap_0x0000_sub_0x294[];
extern u32 dNessSpecial3_gap_0x0000_sub_0x1E4[];
extern u32 dNessSpecial3_gap_0x0000_sub_0x23C[];
extern Gfx dNessSpecial3_PKFireDL_DisplayList[];
extern Gfx dNessSpecial3_PKFireDL_post_post[];
extern DObjDLLink dNessSpecial3_PKFireDL_DLLink_a[];
extern DObjDLLink dNessSpecial3_PKFireDL_DLLink_b[];
extern u32 dNessSpecial3_PKFireDL_script_a[];
extern u32 dNessSpecial3_PKFireDL_script_b[];

/* Raw data from file offset 0x0000 to 0x02A8 (680 bytes) */
/* @ 0x0000, 8 bytes: MObjSub** pointer array referenced by 240's PKFire
 * WPAttributes.p_mobjsubs. */
MObjSub **dNessSpecial3_gap_0x0000[2] = {
	(MObjSub **)dNessSpecial3_gap_0x0000_sub_0xF8,
	NULL,
};

/* MObjSub @ 0x8 */
MObjSub dNessSpecial3_gap_0x0000_sub_0x8[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x80 */
MObjSub dNessSpecial3_gap_0x0000_sub_0x80[1] = {
	{
		0x0000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_RGBA, G_IM_SIZ_16b,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x00F8 (was gap+0xF8, 16 bytes) */
MObjSub *dNessSpecial3_gap_0x0000_sub_0xF8[4] = {
	(MObjSub *)dNessSpecial3_gap_0x0000_sub_0x8,
	(MObjSub *)dNessSpecial3_gap_0x0000_sub_0x80,
	NULL,
	NULL,
};

/* gap sub-block @ 0x0108 (was gap+0x108, 48 bytes) */
Vtx dNessSpecial3_gap_0x0000_sub_0x108[3] = {
	#include <NessSpecial3/gap_0x0000_sub_0x108.vtx.inc.c>
};

/* gap sub-block @ 0x0138 (was gap+0x138, 48 bytes) */
Vtx dNessSpecial3_gap_0x0000_sub_0x138[3] = {
	#include <NessSpecial3/gap_0x0000_sub_0x138.vtx.inc.c>
};

/* gap sub-block @ 0x0168 (was gap+0x168, 120 bytes) */
Gfx dNessSpecial3_DL_0x0168[15] = {
	#include <NessSpecial3/DL_0x0168.dl.inc.c>
};

/* @ 0x01E0, 4 bytes: AObjEvent32** pointer (single slot) referenced by 240's
 * PKFire WPAttributes.p_matanim_joints — points to sub_0x294. */
AObjEvent32 **dNessSpecial3_gap_0x0000_sub_0x1E0[1] = {
	(AObjEvent32 **)dNessSpecial3_gap_0x0000_sub_0x294,
};

/* @ 0x01E4, 88 bytes: AObjEvent32 script (material anim joint). */
u32 dNessSpecial3_gap_0x0000_sub_0x1E4[22] = {
	aobjEvent32SetExtValBlock(0x018, 0),
	    0xFFFF0000,  /* nanf */
	    0xFFFF0000,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 6),
	    0xFFFF2600,  /* nanf */
	    0xFFFF2600,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 5),
	    0xFFFFF300,  /* nanf */
	    0xFFFFF300,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 1),
	    0xFFFFF300,  /* nanf */
	    0xFFFFF300,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 9),
	    0xFFFF2600,  /* nanf */
	    0xFFFF2600,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 10),
	    0xFFFF0000,  /* nanf */
	    0xFFFF0000,  /* nanf */
	aobjEvent32End(),
};

/* @ 0x023C, 88 bytes: AObjEvent32 script (material anim joint) — same payload
 * as sub_0x1E4. */
u32 dNessSpecial3_gap_0x0000_sub_0x23C[22] = {
	aobjEvent32SetExtValBlock(0x018, 0),
	    0xFFFF0000,  /* nanf */
	    0xFFFF0000,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 6),
	    0xFFFF2600,  /* nanf */
	    0xFFFF2600,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 5),
	    0xFFFFF300,  /* nanf */
	    0xFFFFF300,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 1),
	    0xFFFFF300,  /* nanf */
	    0xFFFFF300,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 9),
	    0xFFFF2600,  /* nanf */
	    0xFFFF2600,  /* nanf */
	aobjEvent32SetExtValBlock(0x018, 10),
	    0xFFFF0000,  /* nanf */
	    0xFFFF0000,  /* nanf */
	aobjEvent32End(),
};

/* @ 0x0294, 20 bytes: AObjEvent32* pointer array (5 slots) — first 2 point to
 * the sub_0x1E4 / sub_0x23C scripts, rest are NULL. */
AObjEvent32 *dNessSpecial3_gap_0x0000_sub_0x294[5] = {
	(AObjEvent32 *)dNessSpecial3_gap_0x0000_sub_0x1E4,
	(AObjEvent32 *)dNessSpecial3_gap_0x0000_sub_0x23C,
	NULL,
	NULL,
	NULL,
};

/* Raw data from file offset 0x02A8 to 0x0330 (136 bytes) */
/* @tex fmt=IA8 dim=8x16 */
u8 dNessSpecial3_Tex_0x02A8[128] = {
	#include <NessSpecial3/Tex_0x02A8.tex.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0330 to 0x0730 (1024 bytes) */
/* @tex fmt=IA8 dim=32x32 */
u8 dNessSpecial3_Tex_0x0330[1024] = {
	#include <NessSpecial3/Tex_0x0330.tex.inc.c>
};

/* Vtx: Vtx_0x0730 @ 0x730 (8 vertices) */
Vtx dNessSpecial3_Vtx_0x0730_Vtx[8] = {
	#include <NessSpecial3/Vtx_0x0730.vtx.inc.c>
};

/* Vtx: Vtx_0x07B0 @ 0x7B0 (8 vertices) */
Vtx dNessSpecial3_Vtx_0x07B0_Vtx[8] = {
	#include <NessSpecial3/Vtx_0x07B0.vtx.inc.c>
};

/* Vtx: Vtx_0x0830 @ 0x830 (3 vertices) */
Vtx dNessSpecial3_Vtx_0x0830_Vtx[3] = {
	#include <NessSpecial3/Vtx_0x0830.vtx.inc.c>
};

/* Vtx @ 0x860 (1 vertex) — absorbs the 8 bytes previously labeled gap_0x0860
 * plus the 8 bytes the extractor had at the head of PKFireDL_DisplayList. */
Vtx dNessSpecial3_Vtx_0x0860_Vtx[1] = {
	#include <NessSpecial3/Vtx_0x0860.vtx.inc.c>
};

/* DisplayList: PKFireDL @ 0x870 (80 bytes) — real DL starts here (after the
 * Vtx at 0x860), with DLLink_a's dl now resolving to the bare symbol. */
Gfx dNessSpecial3_PKFireDL_DisplayList[10] = {
	#include <NessSpecial3/PKFireDL.dl.inc.c>
};

/* Gfx DL: PKFireDL_post @ 0x8C0 (20 cmds) */
Gfx dNessSpecial3_PKFireDL_post[20] = {
	#include <NessSpecial3/PKFireDL_post.dl.inc.c>
};

/* Gfx DL: PKFireDL_post_post @ 0x960 (17 cmds) */
Gfx dNessSpecial3_PKFireDL_post_post[17] = {
	#include <NessSpecial3/PKFireDL_post_post.dl.inc.c>
};

/* ===== Trailing data tree @ 0x9E8 (440 bytes total) — typed sub-blocks ===== */

/* @ 0x9E8: DObjDLLink array (1 entry + sentinel) calling into PKFireDL_DisplayList. */
DObjDLLink dNessSpecial3_PKFireDL_DLLink_a[2] = {
	{ 1, dNessSpecial3_PKFireDL_DisplayList },
	{ 4, NULL },
};

/* @ 0x9F8: DObjDLLink array (1 entry + sentinel) calling into PKFireDL_post_post. */
DObjDLLink dNessSpecial3_PKFireDL_DLLink_b[2] = {
	{ 1, dNessSpecial3_PKFireDL_post_post },
	{ 4, NULL },
};

/* @ 0xA08: DObjDesc array — 4 real entries + 1 sentinel (id=18). */
DObjDesc dNessSpecial3_PKFireDL_DObjDescs[5] = {
	{ 0,      (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,      (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2,      (void *)dNessSpecial3_PKFireDL_DLLink_a, { 0.0f, 0.0f, 0.0f }, { 0.0f, 5.497787f, 0.0f }, { 1.03906202f, 0.96875f, 1.03906202f } },
	{ 0x2002, (void *)dNessSpecial3_PKFireDL_DLLink_b, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.899999976f, 0.899999976f, 1.0f } },
	{ 18,     (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xAE4: 20 bytes of zero padding between the DObjDesc array and the script-pointer table. */
PAD(20);

/* @ 0xAF8: AObjEvent32* pointer table — entries are the two scripts below. */
AObjEvent32 *dNessSpecial3_PKFireDL_script_ptrs[2] = {
	(AObjEvent32 *)dNessSpecial3_PKFireDL_script_a,
	(AObjEvent32 *)dNessSpecial3_PKFireDL_script_b,
};

/* @ 0xB00: AObjEvent32 script_a (84 bytes / 21 u32) — referenced by script_ptrs[0]. */
u32 dNessSpecial3_PKFireDL_script_a[21] = {
	aobjEvent32SetValAfter(0x005, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x002, 8),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetVal0RateBlock(0x380, 4),
	    0x3FA00000,  /* 1.25f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	    0x3FA00000,  /* 1.25f */
	aobjEvent32SetVal0RateBlock(0x380, 4),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dNessSpecial3_PKFireDL_script_a,
};

/* @ 0xB54: AObjEvent32 script_b (72 bytes / 18 u32) — referenced by script_ptrs[1].
 * Script ends with SetAnim loopback + 1 End; trailing 4 bytes are PAD. */
u32 dNessSpecial3_PKFireDL_script_b[18] = {
	aobjEvent32SetValBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F4CCCCD,  /* 0.800000011920929f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F800000,  /* 1.0f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F4CCCCD,  /* 0.800000011920929f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 2),
	    0x3F800000,  /* 1.0f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dNessSpecial3_PKFireDL_script_b,
	aobjEvent32End(),
};
