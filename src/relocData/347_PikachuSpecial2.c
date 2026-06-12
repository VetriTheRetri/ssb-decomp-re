/* relocData file 347: PikachuSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dPikachuSpecial2_Lut_0x0008_palette[];
extern u16 dPikachuSpecial2_Lut_0x0968_palette[];
extern u8 dPikachuSpecial2_Tex_0x11A0[];
extern Vtx dPikachuSpecial2_Vtx_0x06D8_Vtx[];
extern Vtx dPikachuSpecial2_Vtx_0x1438_Vtx[];
extern Vtx dPikachuSpecial2_Vtx_0x1478_Vtx[];
extern u8 dPikachuSpecial2_gap_0x06B8[];

PAD(8);

extern MObjSub *dPikachuSpecial2_gap_0x06B8_sub_0x18[];

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dPikachuSpecial2_Lut_0x0008_palette[16] = {
	#include <PikachuSpecial2/Lut_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0028 to 0x0640 (1560 bytes) */
PAD(8);

/* gap sub-block @ 0x0030 (was gap+0x8, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dPikachuSpecial2_Tex_0x30[512] = {
	#include <PikachuSpecial2/Tex_0x30.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0238 (was gap+0x210, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dPikachuSpecial2_Tex_0x238[512] = {
	#include <PikachuSpecial2/Tex_0x238.tex.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0440 (was gap+0x418, 512 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dPikachuSpecial2_Tex_0x440[512] = {
	#include <PikachuSpecial2/Tex_0x440.tex.inc.c>
};

/* MObjSub-list head @ 0x640 — 6-entry MObjSub** array.
 * The real MObjSub data starts at +0x18 (dPikachuSpecial2_UnkMObjSub_MObjSub_real below). */
MObjSub **dPikachuSpecial2_UnkMObjSub_MObjSub[2] = {
	NULL,
	(MObjSub **)dPikachuSpecial2_gap_0x06B8_sub_0x18,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dPikachuSpecial2_UnkMObjSub_MObjSub_sprites[4] = {
	(void *)dPikachuSpecial2_Tex_0x440,
	(void *)dPikachuSpecial2_Tex_0x238,
	(void *)dPikachuSpecial2_Tex_0x30,
	NULL,
};

/* The real MObjSub @ +0x18 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dPikachuSpecial2_UnkMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dPikachuSpecial2_UnkMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x06B8 to 0x06D8 (32 bytes) */
/* gap sub-block @ 0x06D0 (was gap+0x18, 8 bytes) */
/* MObjSub.sprites pointer table @ +0x6D0 (2 ptrs) — each entry is a void* texture-data pointer fed to gDPSetTextureImage. */
MObjSub *dPikachuSpecial2_gap_0x06B8_sub_0x18[2] = {
	&dPikachuSpecial2_UnkMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x06D8 @ 0x6D8 (4 vertices) */
Vtx dPikachuSpecial2_Vtx_0x06D8_Vtx[4] = {
	#include <PikachuSpecial2/Vtx_0x06D8.vtx.inc.c>
};

/* DisplayList: Joint_0x0718 @ 0x718 (232 bytes) */
Gfx dPikachuSpecial2_Joint_0x0718_DisplayList[29] = {
	#include <PikachuSpecial2/Joint_0x0718.dl.inc.c>
};

/* DObjDesc: UnkDObjDesc @ 0x800 (3 entries) */
DObjDesc dPikachuSpecial2_UnkDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPikachuSpecial2_Joint_0x0718_DisplayList, { 0.0f, 180.0f, 0.0f }, { 0.0f, -1.570796012878418f, 0.0f }, { 1.0f, 1.498731017112732f, 1.498731017112732f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0890 to 0x0900 (112 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898[];

AObjEvent32 *dPikachuSpecial2_UnkAnimJoint_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898,
};

u32 dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898[] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ, 0),
	    0x00000000,  /* 0.0f */
	    0xBFC90FDB,  /* -1.5707963705062866f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 5),
	    0x3F490FDB,  /* 0.7853981852531433f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTX, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 1),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dPikachuSpecial2_UnkAnimJoint_AnimJoint_0x898),
};

PAD(8);

/* UnkMatAnimJoint @ 0x900 — material-anim-joints table for the
 * ThunderShock effect. Same shape as NessModel's PKThunderWave:
 *   - head AObjEvent32 *[2] (8B) — entry [1] → inner table
 *   - script body (72B) with SetValAfterBlock... + SetAnim loop
 *   - inner AObjEvent32 *[1] (4B) — entry [0] → script
 *   - PAD(20)
 * Was originally one opaque `u32[26]` block which decoded as 7
 * spurious aobjEvent32End() calls (the chain-pointer slots at
 * +0x4 / +0x4C / +0x50 plus the trailing PAD(20) words). */
extern u32 dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_0x8[];
extern AObjEvent32 *dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_inner_0x50[];

AObjEvent32 **dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint[2] = {
	NULL,
	dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_inner_0x50,
};

/* The MAT anim script @ 0x908. Sets value tracks (likely material
 * scroll U/V) over a sequence of frames, then loops back to start. */
u32 dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_0x8[18] = {
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_0x8,
};

/* Inner per-mobj AObjEvent32 *[1] for joint [1] (single mobj). */
AObjEvent32 *dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_inner_0x50[1] = {
	(AObjEvent32 *)dPikachuSpecial2_UnkMatAnimJoint_MatAnimJoint_0x8,
};

PAD(20);

/* Palette: Lut_0x0968 @ 0x968 (16 colors RGBA5551) */
u16 dPikachuSpecial2_Lut_0x0968_palette[16] = {
	#include <PikachuSpecial2/Lut_0x0968.palette.inc.c>
};

PAD(8);

/* Sprite textures @ 0x990 / 0xD98 — referenced by
 * ThunderShockMObjSub_MObjSub_real.sprites. Each is a 32×32 IA8
 * texture (1024B) with 8B trailing pad (1032B total). The DL at
 * Joint_0x1598 loads them via gsDPLoadBlock(siz=16b, lrs=511) =
 * 512 16-bit reads = 1024 bytes. Same shape as the per-frame sprite
 * textures in fid 341 (Tex_0x8408 / Tex_0x8810 / etc.). */
/* @tex fmt=IA8 dim=32x32 */
u8 dPikachuSpecial2_Tex_0x0990[1032] = {
	#include <PikachuSpecial2/Tex_0x0990.tex.inc.c>
};

/* @tex fmt=IA8 dim=32x32 */
u8 dPikachuSpecial2_Tex_0x0D98[1032] = {
	#include <PikachuSpecial2/Tex_0x0D98.tex.inc.c>
};

/* Raw data from file offset 0x11A0 to 0x13A0 (512 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dPikachuSpecial2_Lut_0x0968_palette */
u8 dPikachuSpecial2_Tex_0x11A0[512] = {
	#include <PikachuSpecial2/Tex_0x11A0.tex.inc.c>
};

/* ThunderShockMObjSub @ 0x13A0 — was decoded as a single MObjSub[1]
 * but actually a 3-part composite: 16B head pointer table + 8B
 * sprite-pointer array + the real 120B MObjSub. The original split
 * missed that the MObjSub starts at +0x18 of the umbrella name and
 * extends 120 bytes past it (into what was called gap_0x1418). Same
 * shape as dPikachuModel_ThunderTrailMObjSub_MObjSub in fid 341. */
extern MObjSub *dPikachuSpecial2_gap_0x1418_sub_0x18[];
void *dPikachuSpecial2_ThunderShockMObjSub_MObjSub[4] = {
	NULL,
	NULL,
	NULL,
	(void *)dPikachuSpecial2_gap_0x1418_sub_0x18,    /* post ptr → MObjSub*-list */
};

/* @ 0x13B0 — 2-entry sprite-pointer array referenced by MObjSub_real.sprites */
u8 *dPikachuSpecial2_ThunderShockMObjSub_MObjSub_sprites[2] = {
	dPikachuSpecial2_Tex_0x0D98,
	dPikachuSpecial2_Tex_0x0990,
};

/* @ 0x13B8 — the real MObjSub (120 bytes, formerly split across the
 * tail of `ThunderShockMObjSub_MObjSub` and `gap_0x1418`). */
MObjSub dPikachuSpecial2_ThunderShockMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dPikachuSpecial2_ThunderShockMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x00A1,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* @ 0x1430 — 2-slot trailing MObjSub*-list (NULL-terminated). */
MObjSub *dPikachuSpecial2_gap_0x1418_sub_0x18[2] = {
	dPikachuSpecial2_ThunderShockMObjSub_MObjSub_real,
	NULL,
};

/* Vtx: Vtx_0x1438 @ 0x1438 (4 vertices) */
Vtx dPikachuSpecial2_Vtx_0x1438_Vtx[4] = {
	#include <PikachuSpecial2/Vtx_0x1438.vtx.inc.c>
};

/* Vtx: Vtx_0x1478 @ 0x1478 (4 vertices) */
Vtx dPikachuSpecial2_Vtx_0x1478_Vtx[4] = {
	#include <PikachuSpecial2/Vtx_0x1478.vtx.inc.c>
};

/* DisplayList: Joint_0x14B8 @ 0x14B8 (224 bytes) */
Gfx dPikachuSpecial2_Joint_0x14B8_DisplayList[28] = {
	#include <PikachuSpecial2/Joint_0x14B8.dl.inc.c>
};

/* DisplayList: Joint_0x1598 @ 0x1598 (136 bytes) */
Gfx dPikachuSpecial2_Joint_0x1598_DisplayList[17] = {
	#include <PikachuSpecial2/Joint_0x1598.dl.inc.c>
};

/* DObjDLLink @ 0x1620 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dPikachuSpecial2_JointCmd_0x1620[] = {
	{ 0, dPikachuSpecial2_Joint_0x14B8_DisplayList },
	{ 4, NULL },
};

/* DObjDLLink @ 0x1630 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dPikachuSpecial2_JointCmd_0x1630[] = {
	{ 1, dPikachuSpecial2_Joint_0x1598_DisplayList },
	{ 4, NULL },
};

/* DObjDesc: ThunderShockDObjDesc @ 0x1640 (5 entries) */
DObjDesc dPikachuSpecial2_ThunderShockDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuSpecial2_JointCmd_0x1620, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuSpecial2_JointCmd_0x1630, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x1720 to 0x1850 (304 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730[];
extern u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC[];

AObjEvent32 *dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC,
};

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x1730[] = {
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 0),
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	    0x3F933332,  /* 1.1499998569488525f */
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAXYZ, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x431ACCCC,  /* 154.79998779296875f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 2),
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	    0x3F2B1785,  /* 0.6683276295661926f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x430A999A,  /* 138.60000610351562f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x438F665C,  /* 286.7996826171875f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 2),
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	    0x3FAB990D,  /* 1.3406082391738892f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x439B1995,  /* 310.1998596191406f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43E28001,  /* 453.0000305175781f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 2),
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43E36669,  /* 454.8000793457031f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43E36666,  /* 454.79998779296875f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock0AnimJoint_AnimJoint_0x17BC[] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x42960000,  /* 75.0f */
	    0x3F800000,  /* 1.0f */
	    0x3E800000,  /* 0.25f */
	    0x3E800000,  /* 0.25f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAX, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTZ | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3EB33333,  /* 0.3499999940395355f */
	    0x3F4CCCCD,  /* 0.800000011920929f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTZ | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTZ | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x1850 to 0x1970 (288 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860[];
extern u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC[];

AObjEvent32 *dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC,
};

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x1860[] = {
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAXYZ, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x43203333,  /* 160.1999969482422f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 5),
	    0x3FAF5C25,  /* 1.3699995279312134f */
	    0x3FAF5C25,  /* 1.3699995279312134f */
	    0x3FAF5C25,  /* 1.3699995279312134f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x4324FFFF,  /* 164.99998474121094f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x438559A0,  /* 266.7001953125f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43880CD4,  /* 272.1002197265625f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43E14CD5,  /* 450.6002502441406f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43E40000,  /* 456.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAZ, 1),
	    0x43E40000,  /* 456.0f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAXYZ, 1),
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	    0x3FAF5C29,  /* 1.3700000047683716f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock1AnimJoint_AnimJoint_0x18DC[] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x42B40000,  /* 90.0f */
	    0x3F800000,  /* 1.0f */
	    0x3E800000,  /* 0.25f */
	    0x3E99999B,  /* 0.30000004172325134f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfter(AOBJ_FLAG_SCAX, 4),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTZ | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0x00000000,  /* 0.0f */
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x00000000,  /* 0.0f */
	    0x3EB33333,  /* 0.3499999940395355f */
	    0x3F1F1B4B,  /* 0.6215102076530457f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTZ, 4),
	    0xC0490FDB,  /* -3.1415927410125732f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAXYZ, 2),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0x43B40000,  /* 360.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F19999A,  /* 0.6000000238418579f */
	    0x3F99BE52,  /* 1.2011206150054932f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(12);

/* Raw data from file offset 0x1970 to 0x1A80 (272 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980[];
extern u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C[];

AObjEvent32 *dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint[4] = {
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C,
};

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1980[] = {
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAXYZ, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x43203334,  /* 160.20001220703125f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 2),
	    0x3F52A069,  /* 0.8227601647377014f */
	    0x3F52A069,  /* 0.8227601647377014f */
	    0x3F52A069,  /* 0.8227601647377014f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x4319999A,  /* 153.60000610351562f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x438D4CCE,  /* 282.60003662109375f */
	aobjEvent32SetVal(AOBJ_FLAG_SCAXYZ, 3),
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x4395FFFD,  /* 299.9999084472656f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43E23333,  /* 452.3999938964844f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAZ, 1),
	    0x43EAE66B,  /* 469.8001403808594f */
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAZ, 1),
	    0x43EAE666,  /* 469.79998779296875f */
	aobjEvent32SetValBlock(AOBJ_FLAG_SCAXYZ, 1),
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	    0x3FC8F5C0,  /* 1.5699996948242188f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

u32 dPikachuSpecial2_ThunderShock2AnimJoint_AnimJoint_0x1A0C[] = {
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_TRAXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3E800000,  /* 0.25f */
	    0x3E99999B,  /* 0.30000004172325134f */
	aobjEvent32SetFlags(0x000, 0),
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0xC0490FDB,  /* -3.1415927410125732f */
	    0x43610000,  /* 225.0f */
	    0x3EB33333,  /* 0.3499999940395355f */
	    0x3F400000,  /* 0.75f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F000000,  /* 0.5f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_ROTX | AOBJ_FLAG_TRAZ | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ, 2),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F000000,  /* 0.5f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetFlags(0x002, 0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x1A80 to 0x1AC0 (64 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90[];
extern AObjEvent32 *dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC[];

AObjEvent32 **dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint[4] = {
	NULL,
	NULL,
	NULL,
	dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC,
};

u32 dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90[] = {
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID | AOBJ_MATFLAG_TRAU | AOBJ_MATFLAG_TRAV | AOBJ_MATFLAG_SCAU | AOBJ_MATFLAG_SCAV, 0),
	    0x3F800000,  /* 1.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 4),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

AObjEvent32 *dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1ABC[] = {
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock0MatAnimJoint_MatAnimJoint_0x1A90,
};

/* Raw data from file offset 0x1AC0 to 0x1B10 (80 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0[];
extern AObjEvent32 *dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04[];
extern AObjEvent32 *dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54[];

AObjEvent32 **dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint[4] = {
	NULL,
	NULL,
	NULL,
	dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04,
};

u32 dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0[] = {
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID | AOBJ_MATFLAG_TRAU | AOBJ_MATFLAG_TRAV | AOBJ_MATFLAG_SCAU | AOBJ_MATFLAG_SCAV, 0),
	    0x3F800000,  /* 1.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* Combined inner-table @ 0x1B04 — was split into ThunderShock1's
 * 8-byte inner (ptr + End), PAD(4), and the ThunderShock2MatAnimJoint
 * head [4]. Treating the whole 28B region as one AObjEvent32 *[7]
 * eliminates the dead PAD and the 3-NULL-leading ThunderShock2 head:
 *   [0] @ 0x1B04 → ThunderShock1 script (_0x1AD0)
 *   [1..5]       → NULL (was End + PAD + 3 leading NULLs of TS2 head)
 *   [6] @ 0x1B1C → ThunderShock2 inner (_0x1B54), formerly TS2 head[3]
 * The ThunderShock2MatAnimJoint_MatAnimJoint head symbol is gone; the
 * TS2 script/_inner blocks keep their original names. */
AObjEvent32 *dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1B04[7] = {
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock1MatAnimJoint_MatAnimJoint_0x1AD0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54,
};

/* Raw data from file offset 0x1B20 to 0x1B60 (64 bytes) — TS2 script + inner */
u32 dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20[] = {
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID | AOBJ_MATFLAG_TRAU | AOBJ_MATFLAG_TRAV | AOBJ_MATFLAG_SCAU | AOBJ_MATFLAG_SCAV, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(AOBJ_MATFLAG_TEXID, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

AObjEvent32 *dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B54[] = {
	(AObjEvent32 *)dPikachuSpecial2_ThunderShock2MatAnimJoint_MatAnimJoint_0x1B20,
	NULL,
};
