/* relocData file 350: CaptainSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dCaptainSpecial2_gap_0x09D8[];

extern MObjSub *dCaptainSpecial2_gap_0x09D8_sub_0x10[];

/* Raw data from file offset 0x0000 to 0x0030 (48 bytes) */
u8 dCaptainSpecial2_gap_0x0000[48] = {
	#include <CaptainSpecial2/gap_0x0000.data.inc.c>
};

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dCaptainSpecial2_Lut_0x0030_palette[16] = {
	#include <CaptainSpecial2/Lut_0x0030.palette.inc.c>
};

/* Raw data from file offset 0x0050 to 0x0960 (2320 bytes) */
/* gap sub-block @ 0x0050 (was gap+0x0, 8 bytes) */
u8 dCaptainSpecial2_gap_0x0050[8] = {
	#include <CaptainSpecial2/gap_0x0050.data.inc.c>
};

/* gap sub-block @ 0x0058 (was gap+0x8, 1160 bytes) */
u8 dCaptainSpecial2_Tex_0x58[1160] = {
	#include <CaptainSpecial2/Tex_0x58.tex.inc.c>
};

/* gap sub-block @ 0x04E0 (was gap+0x490, 1152 bytes) */
u8 dCaptainSpecial2_Tex_0x4E0[1152] = {
	#include <CaptainSpecial2/Tex_0x4E0.tex.inc.c>
};

/* MObjSub-list head @ 0x960 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dCaptainSpecial2_FalconKickMObjSub_MObjSub_real below). */
MObjSub **dCaptainSpecial2_FalconKickMObjSub_MObjSub[2] = {
	NULL,
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dCaptainSpecial2_FalconKickMObjSub_MObjSub_sprites[2] = {
	(void *)dCaptainSpecial2_Tex_0x4E0,
	(void *)dCaptainSpecial2_Tex_0x58,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dCaptainSpecial2_FalconKickMObjSub_MObjSub_real = {
	0x0000,
	0x02, 0x02,
	(void**)dCaptainSpecial2_FalconKickMObjSub_MObjSub_sprites,
	0x0020, 0x0000, 0x0030, 0x0030,
	0,
	0.0f, 0.0f,
	1.0f, 1.0f,
	0.0f, 1.0f,
	(void**)0x00000000,
	0x00A1,
	0x02, 0x00,
	0x0030,
	0x0030, 0x0030, 0x0030,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00002005,
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0xFF, 0xFF, 0xFF, 0x00 } },
	{ { 0xFF, 0xFF, 0x59, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x09D8 to 0x09F0 (24 bytes) */
/* gap sub-block @ 0x09E8 (was gap+0x10, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x9E8 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dCaptainSpecial2_gap_0x09D8_sub_0x10[2] = {
	&dCaptainSpecial2_FalconKickMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x09F0 @ 0x9F0 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x09F0_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x09F0.vtx.inc.c>
};

/* DisplayList: Joint_0x0A30 @ 0xA30 (216 bytes) */
Gfx dCaptainSpecial2_Joint_0x0A30_DisplayList[27] = {
	#include <CaptainSpecial2/Joint_0x0A30.dl.inc.c>
};

/* DObjDesc: FalconKickDObjDesc @ 0xB08 (3 entries) */
DObjDesc dCaptainSpecial2_FalconKickDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, -66.0f, -324.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dCaptainSpecial2_Joint_0x0A30_DisplayList, { 0.0f, 66.0f, 324.00006103515625f }, { -0.026179999113082886f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0B90 to 0x0C00 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dCaptainSpecial2_FalconKickAnimJoint_AnimJoint_0xB98[];

AObjEvent32 *dCaptainSpecial2_FalconKickAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dCaptainSpecial2_FalconKickAnimJoint_AnimJoint_0xB98,
};

u32 dCaptainSpecial2_FalconKickAnimJoint_AnimJoint_0xB98[] = {
	aobjEvent32SetValRate(0x001, 0),
	    0xBCD67750,  /* -0.02617993950843811f */
	    0xBC8FFFAA,  /* -0.017577964812517166f */
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x001, 2),
	    0xBE8B6729,  /* -0.27227142453193665f */
	aobjEvent32SetValAfterBlock(0x300, 1),
	    0x3F570A3D,  /* 0.8399999737739563f */
	    0x3F570A3D,  /* 0.8399999737739563f */
	aobjEvent32SetValAfterBlock(0x300, 1),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F999999,  /* 1.1999999284744263f */
	aobjEvent32SetVal0Rate(0x001, 2),
	    0xBCD67750,  /* -0.02617993950843811f */
	aobjEvent32SetValAfterBlock(0x300, 1),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F19999A,  /* 0.6000000238418579f */
	aobjEvent32SetValAfterBlock(0x300, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dCaptainSpecial2_FalconKickAnimJoint_AnimJoint_0xB98),
	aobjEvent32End(),
};

/* Raw data from file offset 0x0C00 to 0x0C48 (72 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC08[];
extern u32 dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC3C[];

AObjEvent32 *dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC3C,
};

u32 dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC08[] = {
	aobjEvent32SetValAfterBlock(0x01E, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC08),
};

u32 dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC3C[] = {
	(u32)(dCaptainSpecial2_FalconKickMatAnimJoint_MatAnimJoint_0xC08),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0C48 to 0x1450 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x0C48[2056] = {
	#include <CaptainSpecial2/Tex_0x0C48.tex.inc.c>
};

/* Raw data from file offset 0x1450 to 0x1C58 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x1450[2056] = {
	#include <CaptainSpecial2/Tex_0x1450.tex.inc.c>
};

/* Raw data from file offset 0x1C58 to 0x2460 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x1C58[2056] = {
	#include <CaptainSpecial2/Tex_0x1C58.tex.inc.c>
};

/* Raw data from file offset 0x2460 to 0x2C68 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x2460[2056] = {
	#include <CaptainSpecial2/Tex_0x2460.tex.inc.c>
};

/* Raw data from file offset 0x2C68 to 0x2E70 (520 bytes) */
u8 dCaptainSpecial2_Tex_0x2C68[520] = {
	#include <CaptainSpecial2/Tex_0x2C68.tex.inc.c>
};

/* Raw data from file offset 0x2E70 to 0x3078 (520 bytes) */
u8 dCaptainSpecial2_Tex_0x2E70[520] = {
	#include <CaptainSpecial2/Tex_0x2E70.tex.inc.c>
};

/* Raw data from file offset 0x3078 to 0x3480 (1032 bytes) */
u8 dCaptainSpecial2_Tex_0x3078[1032] = {
	#include <CaptainSpecial2/Tex_0x3078.tex.inc.c>
};

/* Raw data from file offset 0x3480 to 0x3C88 (2056 bytes) */
u8 dCaptainSpecial2_Tex_0x3480[2056] = {
	#include <CaptainSpecial2/Tex_0x3480.tex.inc.c>
};

/* Raw data from file offset 0x3C88 to 0x3E90 (520 bytes) */
u8 dCaptainSpecial2_Tex_0x3C88[520] = {
	#include <CaptainSpecial2/Tex_0x3C88.tex.inc.c>
};

/* Raw data from file offset 0x3E90 to 0x3ED0 (64 bytes) */
u8 dCaptainSpecial2_Tex_0x3E90[64] = {
	#include <CaptainSpecial2/Tex_0x3E90.tex.inc.c>
};

/* Vtx: Vtx_0x3ED0 @ 0x3ED0 (24 vertices) */
Vtx dCaptainSpecial2_Vtx_0x3ED0_Vtx[24] = {
	#include <CaptainSpecial2/Vtx_0x3ED0.vtx.inc.c>
};

/* Vtx: Vtx_0x4050 @ 0x4050 (10 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4050_Vtx[10] = {
	#include <CaptainSpecial2/Vtx_0x4050.vtx.inc.c>
};

/* Vtx: Vtx_0x40F0 @ 0x40F0 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x40F0_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x40F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4130 @ 0x4130 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4130_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x4130.vtx.inc.c>
};

/* Vtx: Vtx_0x4310 @ 0x4310 (18 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4310_Vtx[18] = {
	#include <CaptainSpecial2/Vtx_0x4310.vtx.inc.c>
};

/* Vtx: Vtx_0x4430 @ 0x4430 (6 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4430_Vtx[6] = {
	#include <CaptainSpecial2/Vtx_0x4430.vtx.inc.c>
};

/* Vtx: Vtx_0x4490 @ 0x4490 (10 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4490_Vtx[10] = {
	#include <CaptainSpecial2/Vtx_0x4490.vtx.inc.c>
};

/* Vtx: Vtx_0x4530 @ 0x4530 (12 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4530_Vtx[12] = {
	#include <CaptainSpecial2/Vtx_0x4530.vtx.inc.c>
};

/* Vtx: Vtx_0x45F0 @ 0x45F0 (16 vertices) */
Vtx dCaptainSpecial2_Vtx_0x45F0_Vtx[16] = {
	#include <CaptainSpecial2/Vtx_0x45F0.vtx.inc.c>
};

/* Vtx: Vtx_0x46F0 @ 0x46F0 (8 vertices) */
Vtx dCaptainSpecial2_Vtx_0x46F0_Vtx[8] = {
	#include <CaptainSpecial2/Vtx_0x46F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4770 @ 0x4770 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4770_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x4770.vtx.inc.c>
};

/* Vtx: Vtx_0x47B0 @ 0x47B0 (31 vertices) */
Vtx dCaptainSpecial2_Vtx_0x47B0_Vtx[31] = {
	#include <CaptainSpecial2/Vtx_0x47B0.vtx.inc.c>
};

/* Vtx: Vtx_0x49A0 @ 0x49A0 (3 vertices) */
Vtx dCaptainSpecial2_Vtx_0x49A0_Vtx[3] = {
	#include <CaptainSpecial2/Vtx_0x49A0.vtx.inc.c>
};

/* Vtx: Vtx_0x49D0 @ 0x49D0 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x49D0_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x49D0.vtx.inc.c>
};

/* Vtx: Vtx_0x4BB0 @ 0x4BB0 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4BB0_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x4BB0.vtx.inc.c>
};

/* Vtx: Vtx_0x4D90 @ 0x4D90 (30 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4D90_Vtx[30] = {
	#include <CaptainSpecial2/Vtx_0x4D90.vtx.inc.c>
};

/* Vtx: Vtx_0x4F70 @ 0x4F70 (31 vertices) */
Vtx dCaptainSpecial2_Vtx_0x4F70_Vtx[31] = {
	#include <CaptainSpecial2/Vtx_0x4F70.vtx.inc.c>
};

/* Vtx: Vtx_0x5160 @ 0x5160 (31 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5160_Vtx[31] = {
	#include <CaptainSpecial2/Vtx_0x5160.vtx.inc.c>
};

/* Vtx: Vtx_0x5350 @ 0x5350 (20 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5350_Vtx[20] = {
	#include <CaptainSpecial2/Vtx_0x5350.vtx.inc.c>
};

/* Vtx: Vtx_0x5490 @ 0x5490 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5490_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x5490.vtx.inc.c>
};

/* Vtx: Vtx_0x54D0 @ 0x54D0 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x54D0_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x54D0.vtx.inc.c>
};

/* Vtx: Vtx_0x5510 @ 0x5510 (4 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5510_Vtx[4] = {
	#include <CaptainSpecial2/Vtx_0x5510.vtx.inc.c>
};

/* Vtx: Vtx_0x5550 @ 0x5550 (20 vertices) */
Vtx dCaptainSpecial2_Vtx_0x5550_Vtx[20] = {
	#include <CaptainSpecial2/Vtx_0x5550.vtx.inc.c>
};

/* DisplayList: Joint_0x5690 @ 0x5690 (1488 bytes) */
Gfx dCaptainSpecial2_Joint_0x5690_DisplayList[186] = {
	#include <CaptainSpecial2/Joint_0x5690.dl.inc.c>
};

/* DisplayList: Joint_0x5C60 @ 0x5C60 (88 bytes) */
Gfx dCaptainSpecial2_Joint_0x5C60_DisplayList[11] = {
	#include <CaptainSpecial2/Joint_0x5C60.dl.inc.c>
};

/* Gfx DL: Joint_0x5C60_post @ 0x5CB8 (13 cmds) */
Gfx dCaptainSpecial2_Joint_0x5C60_post[13] = {
	#include <CaptainSpecial2/Joint_0x5C60_post.dl.inc.c>
};

/* DisplayList: Joint_0x5D20 @ 0x5D20 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5D20_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5D20.dl.inc.c>
};

/* DisplayList: Joint_0x5D50 @ 0x5D50 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5D50_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5D50.dl.inc.c>
};

/* DisplayList: Joint_0x5D80 @ 0x5D80 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5D80_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5D80.dl.inc.c>
};

/* DisplayList: Joint_0x5DB0 @ 0x5DB0 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5DB0_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5DB0.dl.inc.c>
};

/* DisplayList: Joint_0x5DE0 @ 0x5DE0 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5DE0_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5DE0.dl.inc.c>
};

/* DisplayList: Joint_0x5E10 @ 0x5E10 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5E10_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5E10.dl.inc.c>
};

/* DisplayList: Joint_0x5E40 @ 0x5E40 (48 bytes) */
Gfx dCaptainSpecial2_Joint_0x5E40_DisplayList[6] = {
	#include <CaptainSpecial2/Joint_0x5E40.dl.inc.c>
};

/* DisplayList: Joint_0x5E70 @ 0x5E70 (176 bytes) */
Gfx dCaptainSpecial2_Joint_0x5E70_DisplayList[22] = {
	#include <CaptainSpecial2/Joint_0x5E70.dl.inc.c>
};

/* DObjDLLink @ 0x5F20 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F20[] = {
	{ 0, dCaptainSpecial2_Joint_0x5690_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F30 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F30[] = {
	{ 1, dCaptainSpecial2_Joint_0x5C60_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F40 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F40[] = {
	{ 1, dCaptainSpecial2_Joint_0x5D20_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F50 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F50[] = {
	{ 1, dCaptainSpecial2_Joint_0x5D50_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F60 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F60[] = {
	{ 1, dCaptainSpecial2_Joint_0x5D80_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F70 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F70[] = {
	{ 1, dCaptainSpecial2_Joint_0x5DB0_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F80 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F80[] = {
	{ 1, dCaptainSpecial2_Joint_0x5DE0_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F90 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5F90[] = {
	{ 1, dCaptainSpecial2_Joint_0x5E10_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5FA0 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5FA0[] = {
	{ 1, dCaptainSpecial2_Joint_0x5E40_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5FB0 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dCaptainSpecial2_JointCmd_0x5FB0[] = {
	{ 1, dCaptainSpecial2_Joint_0x5E70_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: EntryCar @ 0x5FC0 (13 entries) */
DObjDesc dCaptainSpecial2_EntryCar[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dCaptainSpecial2_JointCmd_0x5F20, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F30, { 285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F40, { 285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F50, { 285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F60, { 285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F70, { -285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F80, { -285.0f, 191.99990844726562f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5F90, { -285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dCaptainSpecial2_JointCmd_0x5FA0, { -285.0f, 74.99987030029297f, -780.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dCaptainSpecial2_JointCmd_0x5FB0, { 0.0f, 376.199951171875f, 112.79999542236328f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x6200 to 0x6518 (792 bytes) */
u32 dCaptainSpecial2__6200__AnimJoint[198] = {
	aobjEvent32End(),
	(u32)((u8*)dCaptainSpecial2__6200__AnimJoint + 0x30),
	(u32)((u8*)dCaptainSpecial2__6200__AnimJoint + 0x244),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dCaptainSpecial2__6200__AnimJoint + 0x2C4),
	aobjEvent32SetValRate(0x070, 0),
	    0xC58CA000,  /* -4500.0f */
	    0x42E313C0,  /* 113.53857421875f */
	    0xC58CA000,  /* -4500.0f */
	    0x436E8F05,  /* 238.5586700439453f */
	    0x460CA000,  /* 9000.0f */
	    0xC3579E9D,  /* -215.6195831298828f */
	aobjEvent32SetValAfterBlock(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x402D22FC,  /* 2.7052602767944336f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x070, 35),
	    0xC4813C19,  /* -1033.8780517578125f */
	    0x42C00000,  /* 96.0f */
	    0x42B40000,  /* 90.0f */
	    0x41B4A6CA,  /* 22.581439971923828f */
	    0x443B8000,  /* 750.0f */
	    0xC3610000,  /* -225.0f */
	aobjEvent32SetValRateBlock(0x070, 5),
	    0xC4250000,  /* -660.0f */
	    0x40D9876E,  /* 6.797781944274902f */
	    0x42EFFFFC,  /* 119.99996948242188f */
	    0xC0EFFFFE,  /* -7.499999046325684f */
	    0x00000000,  /* 0.0f */
	    0xBFB1E169,  /* -1.3896914720535278f */
	aobjEvent32SetVal(0x050, 50),
	    0xC4250000,  /* -660.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 5),
	    0x41700000,  /* 15.0f */
	aobjEvent32SetValBlock(0x020, 5),
	    0x42960000,  /* 75.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42F00000,  /* 120.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x43250000,  /* 165.0f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42960002,  /* 75.00001525878906f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x42EFFFFC,  /* 119.99996948242188f */
	aobjEvent32SetTargetRate(0x050, 0),
	    0x4051745D,  /* 3.2727272510528564f */
	    0x3FAAEEDE,  /* 1.3354146480560303f */
	aobjEvent32SetValRate(0x050, 5),
	    0xC3F00000,  /* -480.0f */
	    0x429C1AC0,  /* 78.05224609375f */
	    0xC4520000,  /* -840.0f */
	    0xC3C35D33,  /* -390.7281188964844f */
	aobjEvent32SetValBlock(0x020, 5),
	    0x43340000,  /* 180.0f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0x432C0000,  /* 172.0f */
	    0xC183F6FA,  /* -16.495594024658203f */
	aobjEvent32SetValRateBlock(0x070, 25),
	    0x458CA000,  /* 4500.0f */
	    0x43028661,  /* 130.52491760253906f */
	    0xC58CA000,  /* -4500.0f */
	    0xC338169D,  /* -184.0883331298828f */
	    0xC66A6000,  /* -15000.0f */
	    0xC3C14B0F,  /* -386.5863952636719f */
	aobjEvent32End(),
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x39934F9F,  /* 0.0002809734723996371f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x39724909,  /* 0.00023106126172933728f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x398C5666,  /* 0.00026767252711579204f */
	aobjEvent32SetValBlock(0x380, 48),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0x399C7B3B,  /* 0.0002984645252581686f */
	    0xB976541A,  /* -0.00023491718457080424f */
	    0xB972F33C,  /* -0.00023169530322775245f */
	aobjEvent32SetVal0RateBlock(0x380, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 30),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
	aobjEvent32SetVal(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 35),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x001, 5),
	    0xBF9C61AA,  /* -1.2217304706573486f */
	    0x39C4776B,  /* 0.0003747300652321428f */
	aobjEvent32SetValRateBlock(0x001, 20),
	    0xBF9C61AA,  /* -1.2217304706573486f */
	    0xB99B91B6,  /* -0.0002967246691696346f */
	aobjEvent32SetVal0RateBlock(0x001, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)0x6518,
};

/* Raw data from file offset 0x6518 to 0x6598 (128 bytes) */
u32 dCaptainSpecial2__6518__AnimJoint[32] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3DFFFFDF,  /* 0.1249997541308403f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3DFFFFDF,  /* 0.1249997541308403f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3DFFFFDF,  /* 0.1249997541308403f */
	aobjEvent32SetVal0RateBlock(0x380, 1),
	    0x3F9FFFFC,  /* 1.2499995231628418f */
	    0x3F9FFFFC,  /* 1.2499995231628418f */
	    0x3F9FFFFC,  /* 1.2499995231628418f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3F19999A,  /* 0.6000000238418579f */
	    0xBDFFFFDF,  /* -0.1249997541308403f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0xBDFFFFDF,  /* -0.1249997541308403f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0xBDFFFFDF,  /* -0.1249997541308403f */
	aobjEvent32SetVal0RateBlock(0x380, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dCaptainSpecial2__6518__AnimJoint,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)0x6598,
};

/* Raw data from file offset 0x6598 to 0x65E0 (72 bytes) */
u32 dCaptainSpecial2__6598__AnimJoint[18] = {
	aobjEvent32SetValAfter(0x080, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x200, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F5D916C,  /* 0.8655002117156982f */
	aobjEvent32SetValBlock(0x100, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x3F19999F,  /* 0.6000003218650818f */
	aobjEvent32SetValAfter(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x100, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dCaptainSpecial2__6598__AnimJoint,
	aobjEvent32End(),
};
