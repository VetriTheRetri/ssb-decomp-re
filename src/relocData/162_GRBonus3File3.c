/* relocData file 162: GRBonus3File3 — GRBonus3 ("Race to the Finish")
 * stage AnimJoint data. Two DObjDesc joint trees; the first carries an
 * AObjEvent32 animation table + scripts, the second drives DObjDLLink ->
 * Gfx display lists. Intern chain recovered via walkRelocChains.
 * Referenced by 295_GRBonus3Map. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dGRBonus3File3_LUT_0x0218[];
extern u8 dGRBonus3File3_Tex_0x0240[];
extern u8 dGRBonus3File3_Tex_0x02C8[];
extern Vtx dGRBonus3File3_Vtx_0x0348[];
extern Vtx dGRBonus3File3_Vtx_0x0388[];
extern Vtx dGRBonus3File3_Vtx_0x0508[];
extern Vtx dGRBonus3File3_Vtx_0x0840[];

extern u32 dGRBonus3File3_AnimJoint_0x0124[11];
extern u32 dGRBonus3File3_AnimJoint_0x0150[15];
extern u32 dGRBonus3File3_AnimJoint_0x018C[15];
extern u32 dGRBonus3File3_AnimJoint_0x01C8[16];

/* @ 0x0000 — joint tree (6 entries) */
DObjDesc dGRBonus3File3_DObjDesc_0x0000[6] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 900.0f, -2550.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 7.000000096013537e-06f, -3705.7451171875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -1050.0f, -2550.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { -2550.0f, -3600.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0108 — per-joint AObjEvent32 animation table */
AObjEvent32 *dGRBonus3File3_AnimJoint_0x0108[7] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus3File3_AnimJoint_0x0124,
	(AObjEvent32 *)dGRBonus3File3_AnimJoint_0x0150,
	(AObjEvent32 *)dGRBonus3File3_AnimJoint_0x018C,
	(AObjEvent32 *)dGRBonus3File3_AnimJoint_0x01C8,
};

/* @ 0x0124 — AObjEvent32 animation script */
u32 dGRBonus3File3_AnimJoint_0x0124[11] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0x44610000,  /* 900.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 120),
	    0xC5322000,  /* -2850.0f */
	aobjEvent32SetVal0RateBlock(0x020, 120),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus3File3_AnimJoint_0x0124,
};

/* @ 0x0150 — AObjEvent32 animation script */
u32 dGRBonus3File3_AnimJoint_0x0150[15] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC5679BEC,  /* -3705.7451171875f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0x36F00000,  /* 7.152557373046875e-06f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC554DBEC,  /* -3405.7451171875f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC5679BEC,  /* -3705.7451171875f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC554DBEC,  /* -3405.7451171875f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC5679BEC,  /* -3705.7451171875f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus3File3_AnimJoint_0x0150,
};

/* @ 0x018C — AObjEvent32 animation script */
u32 dGRBonus3File3_AnimJoint_0x018C[15] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC4834000,  /* -1050.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC5322000,  /* -2850.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC5322000,  /* -2850.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus3File3_AnimJoint_0x018C,
};

/* @ 0x01C8 — AObjEvent32 animation script */
u32 dGRBonus3File3_AnimJoint_0x01C8[16] = {
	aobjEvent32SetVal0Rate(0x020, 0),
	    0xC5610000,  /* -3600.0f */
	aobjEvent32SetValAfterBlock(0x050, 0),
	    0xC51F6000,  /* -2550.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC5610000,  /* -3600.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC51F6000,  /* -2550.0f */
	aobjEvent32SetVal0RateBlock(0x020, 60),
	    0xC5610000,  /* -3600.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dGRBonus3File3_AnimJoint_0x01C8,
	aobjEvent32End(),
};

/* @ 0x0208, 16 bytes — 16-byte alignment padding after AObjEvent32 script. */
PAD(16);

/* @ 0x0218 — 16-colour TLUT */
u16 dGRBonus3File3_LUT_0x0218[16] = {
	#include <GRBonus3File3/LUT_0x0218.palette.inc.c>
};
PAD(8);

/* @ 0x0240 — texture */
/* @tex fmt=CI4 dim=16x16 lut=dGRBonus3File3_LUT_0x0218 */
u8 dGRBonus3File3_Tex_0x0240[136] = {
	#include <GRBonus3File3/Tex_0x0240.tex.inc.c>
};

/* @ 0x02C8 — texture */
/* @tex fmt=I4 dim=16x16 */
u8 dGRBonus3File3_Tex_0x02C8[128] = {
	#include <GRBonus3File3/Tex_0x02C8.tex.inc.c>
};

/* @ 0x0348 — quad geometry */
Vtx dGRBonus3File3_Vtx_0x0348[4] = {
	#include <GRBonus3File3/Vtx_0x0348.vtx.inc.c>
};

/* @ 0x0388 — geometry (24 verts) */
Vtx dGRBonus3File3_Vtx_0x0388[24] = {
	#include <GRBonus3File3/Vtx_0x0388.vtx.inc.c>
};

/* @ 0x0508 — quad geometry */
Vtx dGRBonus3File3_Vtx_0x0508[4] = {
	#include <GRBonus3File3/Vtx_0x0508.vtx.inc.c>
};

/* @ 0x0548 — display list */
Gfx dGRBonus3File3_DL_0x0548[48] = {
	#include <GRBonus3File3/DL_0x0548.dl.inc.c>
};

/* @ 0x06C8 — display list */
Gfx dGRBonus3File3_DL_0x06C8[20] = {
	#include <GRBonus3File3/DL_0x06C8.dl.inc.c>
};

/* @ 0x0768 — DL link */
DObjDLLink dGRBonus3File3_DLLink_0x0768[2] = {
	{ 0, dGRBonus3File3_DL_0x0548 },
	{ 4, NULL },
};

/* @ 0x0778 — DL link */
DObjDLLink dGRBonus3File3_DLLink_0x0778[2] = {
	{ 1, dGRBonus3File3_DL_0x06C8 },
	{ 4, NULL },
};

/* @ 0x0788 — joint tree (4 entries) */
DObjDesc dGRBonus3File3_DObjDesc_0x0788[4] = {
	{ 0, NULL, { 0.0f, 0.0f, -210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dGRBonus3File3_DLLink_0x0768, { 0.0f, 0.0f, 210.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 16386, (void *)dGRBonus3File3_DLLink_0x0778, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0838, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0840 — geometry (6 verts) */
Vtx dGRBonus3File3_Vtx_0x0840[6] = {
	#include <GRBonus3File3/Vtx_0x0840.vtx.inc.c>
};

/* @ 0x08A0 — display list */
Gfx dGRBonus3File3_DL_0x08A0[14] = {
	#include <GRBonus3File3/DL_0x08A0.dl.inc.c>
};
