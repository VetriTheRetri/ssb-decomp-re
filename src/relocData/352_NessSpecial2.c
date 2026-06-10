/* relocData file 352: NessSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Vtx dNessSpecial2_Vtx_0x08A0_Vtx[];
extern MObjSub *dNessSpecial2_gap_0x0888_sub_0x10[];
extern u8 dNessSpecial2_gap_0x0888[];


/* Raw data from file offset 0x0000 to 0x0810 (2064 bytes) */
PAD(8);

/* @tex fmt=IA8 dim=32x32 */
u8 dNessSpecial2_Tex_0x8[1024] = {
	#include <NessSpecial2/Tex_0x8.tex.inc.c>
};

PAD(8);

/* @tex fmt=IA8 dim=32x32 */
u8 dNessSpecial2_Tex_0x410[1024] = {
	#include <NessSpecial2/Tex_0x410.tex.inc.c>
};

MObjSub **dNessSpecial2_PsychicMagnetMObjSub_MObjSub[2] = {
	NULL,
	dNessSpecial2_gap_0x0888_sub_0x10,
};


/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dNessSpecial2_PsychicMagnetMObjSub_MObjSub_sprites[2] = {
	(void *)dNessSpecial2_Tex_0x410,
	(void *)dNessSpecial2_Tex_0x8,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dNessSpecial2_PsychicMagnetMObjSub_MObjSub_real[1] = {
	{
		0x0000,                                       /* pad00 */
		G_IM_FMT_IA, G_IM_SIZ_16b,                    /* fmt, siz */
		(void**)dNessSpecial2_PsychicMagnetMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0040, 0x0040,               /* unk08, unk0A, unk0C, unk0E */
		0,                                            /* unk10 */
		0.0f, 0.0f,                                   /* trau, trav */
		1.0f, 1.0f,                                   /* scau, scav */
		0.0f, 1.0f,                                   /* unk24, unk28 */
		(void**)0x00000000,                           /* palettes */
		0x0001,                                       /* flags */
		G_IM_FMT_IA, G_IM_SIZ_8b,                     /* block_fmt, block_siz */
		0x0020,                                       /* block_dxt (texture w=32) */
		0x0020, 0x0040, 0x0040,                       /* unk36 (h=32), unk38, unk3A */
		0.0f, 0.0f,                                   /* scrollu, scrollv */
		0.0f, 0.0f,                                   /* unk44, unk48 */
		0x00002001,                                   /* unk4C */
		{ { 0x78, 0xFF, 0xFF, 0xFF } },               /* primcolor */
		0x00, 0x00, { 0x00, 0x00 },                   /* prim_l, prim_m, prim_pad */
		{ { 0x00, 0xFF, 0x00, 0xFF } },               /* envcolor */
		{ { 0x00, 0x00, 0x00, 0x08 } },               /* blendcolor */
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },               /* light1color */
		{ { 0x80, 0x80, 0x80, 0x00 } },               /* light2color */
		0, 0,                                         /* unk68, unk6C */
		0, 0,                                         /* unk70, unk74 */
	}
};

/* Raw data from file offset 0x0888 to 0x08A0 (24 bytes) */
/* gap sub-block @ 0x0898 (was gap+0x10, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x898 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dNessSpecial2_gap_0x0888_sub_0x10[2] = {
	&dNessSpecial2_PsychicMagnetMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x08A0 @ 0x8A0 (4 vertices) */
Vtx dNessSpecial2_Vtx_0x08A0_Vtx[4] = {
	#include <NessSpecial2/Vtx_0x08A0.vtx.inc.c>
};

/* DisplayList: Joint_0x08E0 @ 0x8E0 (184 bytes) */
Gfx dNessSpecial2_Joint_0x08E0_DisplayList[23] = {
	#include <NessSpecial2/Joint_0x08E0.dl.inc.c>
};

/* DObjDLLink @ 0x0998 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dNessSpecial2_JointCmd_0x0998[] = {
	{ 1, dNessSpecial2_Joint_0x08E0_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: PsychicMagnetDObjDesc @ 0x9A8 (3 entries) */
DObjDesc dNessSpecial2_PsychicMagnetDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dNessSpecial2_JointCmd_0x0998, { 0.0f, 199.66717529296875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 2.0f, 2.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0A30 to 0x0AD0 (160 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38[];

AObjEvent32 *dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38,
};

u32 dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38[] = {
	aobjEvent32SetValAfter(0x380, 0),
	    0x40000000,  /* 2.0f */
	    0x40000000,  /* 2.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x004, 18),
	    0x40C90FDB,  /* 6.2831854820251465f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x400D6042,  /* 2.2090001106262207f */
	    0x400D6042,  /* 2.2090001106262207f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x3FEE147C,  /* 1.8600001335144043f */
	    0x3FEE147C,  /* 1.8600001335144043f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x40133333,  /* 2.299999952316284f */
	    0x40133333,  /* 2.299999952316284f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x3FF9999A,  /* 1.9500000476837158f */
	    0x3FF9999A,  /* 1.9500000476837158f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x400C8B44,  /* 2.196000099182129f */
	    0x400C8B44,  /* 2.196000099182129f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x40000000,  /* 2.0f */
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x400D6042,  /* 2.2090001106262207f */
	    0x400D6042,  /* 2.2090001106262207f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x3FEE147C,  /* 1.8600001335144043f */
	    0x3FEE147C,  /* 1.8600001335144043f */
	aobjEvent32SetValAfterBlock(0x180, 2),
	    0x40133333,  /* 2.299999952316284f */
	    0x40133333,  /* 2.299999952316284f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dNessSpecial2_PsychicMagnetAnimJoint_AnimJoint_0xA38),
	aobjEvent32End(),
};

/* Raw data from file offset 0x0AD0 to 0x0B10 (64 bytes).
 * Split into header[2] + main script + loop-back ptr + End so each
 * chain target is a bare block symbol. */
extern AObjEvent32 *dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_loop[1];
extern u32 dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_data[12];

AObjEvent32 **dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_loop,
};

/* Main script @ +0x08 (48 bytes) — 5x SetValAfterBlock(1, *) pairs,
 * SetAnim, then a chain-encoded back-pointer to data start. */
u32 dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_data[12] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0xB0800000,
	aobjEvent32SetValAfterBlock(0x001, 6),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 3),
	    0x32C00000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_data),    /* chain back to data start */
};

/* Chain back-pointer @ +0x38 — fixRelocChain rewrites this slot. */
AObjEvent32 *dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_loop[1] = {
	(AObjEvent32 *)dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_data,
};

/* Trailing End opcode @ +0x3C */
u32 dNessSpecial2_PsychicMagnetMatAnimJoint_MatAnimJoint_end = 0;
