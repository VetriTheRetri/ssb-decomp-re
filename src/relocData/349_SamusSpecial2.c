/* relocData file 349: SamusSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dSamusSpecial2_gap_0x0288[];

extern MObjSub *dSamusSpecial2_gap_0x0288_sub_0x10[2];

/* Raw data from file offset 0x0000 to 0x0210 (528 bytes) */
PAD(8);

/* @tex fmt=IA8 dim=16x16 */
u8 dSamusSpecial2_Tex_0x8[256] = {
	#include <SamusSpecial2/Tex_0x8.tex.inc.c>
};

PAD(8);

/* @tex fmt=IA8 dim=16x16 */
u8 dSamusSpecial2_Tex_0x110[256] = {
	#include <SamusSpecial2/Tex_0x110.tex.inc.c>
};

/* MObjSub-list head @ 0x210 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dSamusSpecial2_GrappleBeamMObjSub_MObjSub_real below). */
MObjSub **dSamusSpecial2_GrappleBeamMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dSamusSpecial2_GrappleBeamMObjSub_MObjSub_sprites[2] = {
	(void *)dSamusSpecial2_Tex_0x110,
	(void *)dSamusSpecial2_Tex_0x8,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dSamusSpecial2_GrappleBeamMObjSub_MObjSub_real[1] = {
	{
		0x0000,                                       /* pad00 */
		G_IM_FMT_IA, G_IM_SIZ_16b,                    /* fmt, siz */
		(void**)dSamusSpecial2_GrappleBeamMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0020, 0x0020,               /* unk08, unk0A, unk0C, unk0E */
		0,                                            /* unk10 */
		0.0f, 0.0f,                                   /* trau, trav */
		1.0f, 1.0f,                                   /* scau, scav */
		0.0f, 1.0f,                                   /* unk24, unk28 */
		(void**)0x00000000,                           /* palettes */
		0x0001,                                       /* flags */
		G_IM_FMT_IA, G_IM_SIZ_8b,                     /* block_fmt, block_siz */
		0x0010,                                       /* block_dxt (texture w=16) */
		0x0010, 0x0020, 0x0020,                       /* unk36 (h=16), unk38, unk3A */
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0x00, 0x38, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x55, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x0288 to 0x02A0 (24 bytes) */
/* gap sub-block @ 0x0298 (was gap+0x10, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x298 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dSamusSpecial2_gap_0x0288_sub_0x10[2] = {
	&dSamusSpecial2_GrappleBeamMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x02A0 @ 0x2A0 (4 vertices) */
Vtx dSamusSpecial2_Vtx_0x02A0_Vtx[4] = {
	#include <SamusSpecial2/Vtx_0x02A0.vtx.inc.c>
};

/* DisplayList: Joint_0x02E0 @ 0x2E0 (144 bytes) */
Gfx dSamusSpecial2_Joint_0x02E0_DisplayList[18] = {
	#include <SamusSpecial2/Joint_0x02E0.dl.inc.c>
};

/* DObjDLLink @ 0x0370 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dSamusSpecial2_JointCmd_0x0370[] = {
	{ 1, dSamusSpecial2_Joint_0x02E0_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: GrappleBeamDObjDesc @ 0x380 (3 entries) */
DObjDesc dSamusSpecial2_GrappleBeamDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dSamusSpecial2_JointCmd_0x0370, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0410 to 0x0480 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSamusSpecial2_GrappleBeamAnimJoint_AnimJoint_0x418[];

AObjEvent32 *dSamusSpecial2_GrappleBeamAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dSamusSpecial2_GrappleBeamAnimJoint_AnimJoint_0x418,
};

u32 dSamusSpecial2_GrappleBeamAnimJoint_AnimJoint_0x418[] = {
	aobjEvent32SetValAfter(0x007, 0),
	    0x00000000,
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x380, 0),
	    0x3ECB3681,
	    0x3ECB3681,
	    0x3ECB3681,
	aobjEvent32SetValAfter(0x004, 6),
	    0x3F490FDB,
	aobjEvent32SetVal(0x200, 12),
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 6),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x180, 0),
	    0x3ECB367A,
	    0x3ECB367A,
	aobjEvent32SetValAfter(0x004, 6),
	    0x00000000,
	aobjEvent32SetValBlock(0x180, 6),
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0480 to 0x04C8 (72 bytes).
 * Split into header[2] + main script + loop-back ptr + trailing zeros
 * so each chain target is a bare block symbol. */
extern AObjEvent32 *dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_loop;
extern u32 dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_data[12];

AObjEvent32 *dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)&dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_loop,
};

/* Main script @ +0x08 (48 bytes) — 5x SetValAfterBlock(0x001, *), then
 * SetAnim with a chain-encoded back-pointer to data start. */
u32 dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_data[12] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_data),
};

/* Chain back-pointer @ +0x38 — fixRelocChain rewrites this slot. */
AObjEvent32 *dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_loop =
	(AObjEvent32 *)dSamusSpecial2_GrappleBeamMatAnimJoint_MatAnimJoint_data;

/* Trailing zero pad @ +0x3C..+0x47 (12 bytes) */
PAD(12);

/* Palette: Lut_0x04C8 @ 0x4C8 (16 colors RGBA5551) */
u16 dSamusSpecial2_Lut_0x04C8_palette[16] = {
	#include <SamusSpecial2/Lut_0x04C8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x04F0 to 0x0570 (128 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dSamusSpecial2_Lut_0x04C8_palette */
u8 dSamusSpecial2_Tex_0x04F0[128] = {
	#include <SamusSpecial2/Tex_0x04F0.tex.inc.c>
};

/* Vtx: Vtx_0x0570 @ 0x570 (32 vertices) */
Vtx dSamusSpecial2_Vtx_0x0570_Vtx[32] = {
	#include <SamusSpecial2/Vtx_0x0570.vtx.inc.c>
};

/* Vtx: Vtx_0x0770 @ 0x770 (4 vertices) */
Vtx dSamusSpecial2_Vtx_0x0770_Vtx[4] = {
	#include <SamusSpecial2/Vtx_0x0770.vtx.inc.c>
};

/* Vtx: Vtx_0x07B0 @ 0x7B0 (12 vertices) */
Vtx dSamusSpecial2_Vtx_0x07B0_Vtx[12] = {
	#include <SamusSpecial2/Vtx_0x07B0.vtx.inc.c>
};

/* Vtx: Vtx_0x0870 @ 0x870 (12 vertices) */
Vtx dSamusSpecial2_Vtx_0x0870_Vtx[12] = {
	#include <SamusSpecial2/Vtx_0x0870.vtx.inc.c>
};

/* DisplayList: Joint_0x0930 @ 0x930 (416 bytes) */
Gfx dSamusSpecial2_Joint_0x0930_DisplayList[52] = {
	#include <SamusSpecial2/Joint_0x0930.dl.inc.c>
};

/* Gfx DL: Joint_0x0930_post @ 0xAD0 (21 cmds) */
Gfx dSamusSpecial2_Joint_0x0930_post[21] = {
	#include <SamusSpecial2/Joint_0x0930_post.dl.inc.c>
};

/* DObjDLLink @ 0x0B78 (3 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dSamusSpecial2_JointCmd_0x0B78[] = {
	{ 0, dSamusSpecial2_Joint_0x0930_DisplayList },
	{ 1, dSamusSpecial2_Joint_0x0930_post },
	{ 4, NULL },
};

/* DObjDesc: EntryPointDObjDesc @ 0xB90 (3 entries) */
DObjDesc dSamusSpecial2_EntryPointDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dSamusSpecial2_JointCmd_0x0B78, { 0.0f, 435.0f, -330.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 9.999999747378752e-06f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0C20 to 0x0CA0 (128 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSamusSpecial2_EntryPointAnimJoint_AnimJoint_0xC28[];

AObjEvent32 *dSamusSpecial2_EntryPointAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dSamusSpecial2_EntryPointAnimJoint_AnimJoint_0xC28,
};

u32 dSamusSpecial2_EntryPointAnimJoint_AnimJoint_0xC28[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0x43D98000,  /* 435.0f */
	    0xC3A50000,  /* -330.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(0x280, 109),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 1),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x100, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 98),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 10),
	    0x3F800000,  /* 1.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(8);
