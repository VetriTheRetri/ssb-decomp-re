/* relocData file 198: SCExplainGraphics */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x5028 (20520 bytes) */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dSCExplainGraphics_SpecialMoveRGB_palette[];
extern u8 dSCExplainGraphics_SpecialMoveRGB_tex[];
extern Vtx dSCExplainGraphics_SpecialMoveRGB_vtx[];
extern Vtx dSCExplainGraphics_gap_0x50A0_sub_0x28[];
extern Vtx dSCExplainGraphics_gap_0x50A0_sub_0x68[];
extern Vtx dSCExplainGraphics_gap_0x5B10_sub_0x18[];
extern MObjSub *dSCExplainGraphics_gap_0x50A0_sub_0x20[];
extern MObjSub *dSCExplainGraphics_gap_0x5B10_sub_0x10[];
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 4104 bytes) */
/* @tex fmt=IA8 dim=64x64 */
u8 dSCExplainGraphics_Tex_0x8[4104] = {
	#include <SCExplainGraphics/Tex_0x8.tex.inc.c>
};

/* gap sub-block @ 0x1010 (was gap+0x1010, 4104 bytes) */
/* @tex fmt=IA8 dim=64x64 */
u8 dSCExplainGraphics_Tex_0x1010[4104] = {
	#include <SCExplainGraphics/Tex_0x1010.tex.inc.c>
};

/* gap sub-block @ 0x2018 (was gap+0x2018, 4104 bytes) */
/* @tex fmt=IA8 dim=64x64 */
u8 dSCExplainGraphics_Tex_0x2018[4104] = {
	#include <SCExplainGraphics/Tex_0x2018.tex.inc.c>
};

/* gap sub-block @ 0x3020 (was gap+0x3020, 4104 bytes) */
/* @tex fmt=IA8 dim=64x64 */
u8 dSCExplainGraphics_Tex_0x3020[4104] = {
	#include <SCExplainGraphics/Tex_0x3020.tex.inc.c>
};

/* gap sub-block @ 0x4028 (was gap+0x4028, 4096 bytes) */
/* @tex fmt=IA8 dim=64x64 */
u8 dSCExplainGraphics_Tex_0x4028[4096] = {
	#include <SCExplainGraphics/Tex_0x4028.tex.inc.c>
};

/* MObjSub-list head @ 0x5028 — 8-entry MObjSub** array.
 * The real MObjSub data starts at +0x20 (dSCExplainGraphics_StickMObjSub_MObjSub_real below). */
MObjSub **dSCExplainGraphics_StickMObjSub_MObjSub[2] = {  dSCExplainGraphics_gap_0x50A0_sub_0x20, NULL };


/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x8). */
void *dSCExplainGraphics_StickMObjSub_MObjSub_sprites[6] = {
	(void *)dSCExplainGraphics_Tex_0x4028,
	(void *)dSCExplainGraphics_Tex_0x3020,
	(void *)dSCExplainGraphics_Tex_0x2018,
	(void *)dSCExplainGraphics_Tex_0x1010,
	(void *)dSCExplainGraphics_Tex_0x8,
	NULL,
};

/* The real MObjSub @ +0x20 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dSCExplainGraphics_StickMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dSCExplainGraphics_StickMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0040,
		0x0040, 0x0040, 0x0040,
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

/* Raw data from file offset 0x50A0 to 0x5300 (608 bytes) */
/* gap sub-block @ 0x50C0 (was gap+0x20, 8 bytes) */
MObjSub *dSCExplainGraphics_gap_0x50A0_sub_0x20[2] = {
	&dSCExplainGraphics_StickMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x50C8 (was gap+0x28, 64 bytes) */
Vtx dSCExplainGraphics_gap_0x50A0_sub_0x28[4] = {
	#include <SCExplainGraphics/gap_0x50A0_sub_0x28.vtx.inc.c>
};

/* gap sub-block @ 0x5108 (was gap+0x68, 192 bytes) */
Vtx dSCExplainGraphics_gap_0x50A0_sub_0x68[12] = {
	#include <SCExplainGraphics/gap_0x50A0_sub_0x68.vtx.inc.c>
};

/* gap sub-block @ 0x51C8 (was gap+0x128, 160 bytes) */
Gfx dSCExplainGraphics_DL_0x51C8[20] = {
	#include <SCExplainGraphics/DL_0x51C8.dl.inc.c>
};

/* gap sub-block @ 0x5268 (was gap+0x1C8, 120 bytes) */
Gfx dSCExplainGraphics_DL_0x5268[15] = {
	#include <SCExplainGraphics/DL_0x5268.dl.inc.c>
};

/* DObjDLLink @ 0x240 (2 entries) */
DObjDLLink dSCExplainGraphics_DLLink_0x52E0[] = {
	{ 1, dSCExplainGraphics_DL_0x51C8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x250 (2 entries) */
DObjDLLink dSCExplainGraphics_DLLink_0x52F0[] = {
	{ 1, dSCExplainGraphics_DL_0x5268 },
	{ 4, NULL },
};

/* DObjDesc: StickDObjDesc @ 0x5300 (3 entries) */
DObjDesc dSCExplainGraphics_StickDObjDesc[] = {
	{ 0, (void*)dSCExplainGraphics_DLLink_0x52E0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dSCExplainGraphics_DLLink_0x52F0, { 0.0f, 0.0f, 0.30000001192092896f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x5390 to 0x53C0 (48 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSCExplainGraphics_StickNeutral_MatAnimJoint_0x5398[];
extern u8 dSCExplainGraphics_Tex_0x5488[];
extern u8 dSCExplainGraphics_Tex_0x5690[];
extern u8 dSCExplainGraphics_Tex_0x5898[];
extern u32* dSCExplainGraphics_StickNeutral_MatAnimJoint_0x53B0[];

AObjEvent32 *dSCExplainGraphics_StickNeutral_MatAnimJoint[2] = {
	(AObjEvent32 *)dSCExplainGraphics_StickNeutral_MatAnimJoint_0x53B0,
	NULL,
};

u32 dSCExplainGraphics_StickNeutral_MatAnimJoint_0x5398[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x001, 20),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

u32 * dSCExplainGraphics_StickNeutral_MatAnimJoint_0x53B0[] = { dSCExplainGraphics_StickNeutral_MatAnimJoint_0x5398, NULL };

PAD(8);

/* Raw data from file offset 0x53C0 to 0x53F0 (48 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSCExplainGraphics_StickHoldUp_MatAnimJoint_0x53C8[];
extern u32* dSCExplainGraphics_StickHoldUp_MatAnimJoint_0x53E0[];

AObjEvent32 *dSCExplainGraphics_StickHoldUp_MatAnimJoint[2] = {
	(AObjEvent32 *)dSCExplainGraphics_StickHoldUp_MatAnimJoint_0x53E0,
	NULL,
};

u32 dSCExplainGraphics_StickHoldUp_MatAnimJoint_0x53C8[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x001, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

u32 * dSCExplainGraphics_StickHoldUp_MatAnimJoint_0x53E0[] = { dSCExplainGraphics_StickHoldUp_MatAnimJoint_0x53C8, NULL };

PAD(8);

/* Raw data from file offset 0x53F0 to 0x5430 (64 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSCExplainGraphics_StickTapUp_MatAnimJoint_0x53F8[];
extern u32* dSCExplainGraphics_StickTapUp_MatAnimJoint_0x542C[];

AObjEvent32 *dSCExplainGraphics_StickTapUp_MatAnimJoint[2] = {
	(AObjEvent32 *)dSCExplainGraphics_StickTapUp_MatAnimJoint_0x542C,
	NULL,
};

u32 dSCExplainGraphics_StickTapUp_MatAnimJoint_0x53F8[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x001, 20),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(0x001, 10),
	aobjEvent32Wait(10),
	aobjEvent32SetValAfterBlock(0x001, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfter(0x001, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(9),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dSCExplainGraphics_StickTapUp_MatAnimJoint_0x53F8),
};

u32 * dSCExplainGraphics_StickTapUp_MatAnimJoint_0x542C[] = { dSCExplainGraphics_StickTapUp_MatAnimJoint_0x53F8 };

/* Raw data from file offset 0x5430 to 0x5450 (32 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSCExplainGraphics_StickHoldForward_MatAnimJoint_0x5438[];
extern u32* dSCExplainGraphics_StickHoldForward_MatAnimJoint_0x5448[];

AObjEvent32 *dSCExplainGraphics_StickHoldForward_MatAnimJoint[2] = {
	(AObjEvent32 *)dSCExplainGraphics_StickHoldForward_MatAnimJoint_0x5448,
	NULL,
};

u32 dSCExplainGraphics_StickHoldForward_MatAnimJoint_0x5438[] = {
	aobjEvent32SetValAfter(0x001, 0),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(1),
	aobjEvent32End(),
};

u32 * dSCExplainGraphics_StickHoldForward_MatAnimJoint_0x5448[] = { dSCExplainGraphics_StickHoldForward_MatAnimJoint_0x5438, NULL };

/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dSCExplainGraphics_StickTapForward_MatAnimJoint_0x5458[];
extern u32* dSCExplainGraphics_StickTapForward_MatAnimJoint_0x547C[];

AObjEvent32 *dSCExplainGraphics_StickTapForward_MatAnimJoint[2] = {
	(AObjEvent32 *)dSCExplainGraphics_StickTapForward_MatAnimJoint_0x547C,
	NULL,
};

u32 dSCExplainGraphics_StickTapForward_MatAnimJoint_0x5458[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x001, 5),
	    0x40800000,  /* 4.0f */
	aobjEvent32Wait(15),
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dSCExplainGraphics_StickTapForward_MatAnimJoint_0x5458),
};

u32 * dSCExplainGraphics_StickTapForward_MatAnimJoint_0x547C[] = { dSCExplainGraphics_StickTapForward_MatAnimJoint_0x5458 };

PAD(8);
/* @tex fmt=I4 dim=32x32 */
u8 dSCExplainGraphics_Tex_0x5488[520] = {
	#include <SCExplainGraphics/Tex_0x5488.tex.inc.c>
};
/* @tex fmt=I4 dim=32x32 */
u8 dSCExplainGraphics_Tex_0x5690[520] = {
	#include <SCExplainGraphics/Tex_0x5690.tex.inc.c>
};
/* @tex fmt=I4 dim=32x32 */
u8 dSCExplainGraphics_Tex_0x5898[512] = {
	#include <SCExplainGraphics/Tex_0x5898.tex.inc.c>
};

/* MObjSub-list head @ 0x5a98 — 4-entry MObjSub** array.
 * The real MObjSub data starts at +0x10 (dSCExplainGraphics_TapSparkMObjSub_MObjSub_real below). */
MObjSub ** dSCExplainGraphics_TapSparkMObjSub_MObjSub[1] = { dSCExplainGraphics_gap_0x5B10_sub_0x10 };


/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x4). */
void *dSCExplainGraphics_TapSparkMObjSub_MObjSub_sprites[3] = {
	(void *)&dSCExplainGraphics_Tex_0x5898,
	(void *)&dSCExplainGraphics_Tex_0x5690,
	(void *)&dSCExplainGraphics_Tex_0x5488,
};

/* The real MObjSub @ +0x10 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dSCExplainGraphics_TapSparkMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)dSCExplainGraphics_TapSparkMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_I, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0xFF, 0xFF, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x5B10 to 0x5B68 (88 bytes) */
/* gap sub-block @ 0x5B20 (was gap+0x10, 8 bytes) */
MObjSub *dSCExplainGraphics_gap_0x5B10_sub_0x10[2] = {
	&dSCExplainGraphics_TapSparkMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x5B28 (was gap+0x18, 64 bytes) */
Vtx dSCExplainGraphics_gap_0x5B10_sub_0x18[4] = {
	#include <SCExplainGraphics/gap_0x5B10_sub_0x18.vtx.inc.c>
};

/* DisplayList: TapSparkDisplayList @ 0x5B68 (160 bytes) */
Gfx dSCExplainGraphics_TapSparkDisplayList_DisplayList[20] = {
	#include <SCExplainGraphics/TapSparkDisplayList.dl.inc.c>
};

/* DObjDLLink trailer for TapSparkDisplayList — 2-entry array with the
 * standard {4, NULL} sentinel, followed by 8 bytes of alignment pad. */
DObjDLLink dSCExplainGraphics_TapSparkDisplayList_DLLink[2] = {
	{ 1, dSCExplainGraphics_TapSparkDisplayList_DisplayList },
	{ 4, NULL },
};
PAD(8);

/* Raw data from file offset 0x5C20 to 0x5E40 (544 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, then the script body, then the
 * resources referenced by SpecialMoveRGB's display list
 * (palette/texture order differs between US and JP). */
extern u32 dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint_0x5C24[];
extern u32* dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint_0x5C44[];

AObjEvent32 *dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint[1] = {
	(AObjEvent32 *)dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint_0x5C44,
};

u32 dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint_0x5C24[] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x001, 3),
	    0x40000000,  /* 2.0f */
	aobjEvent32Wait(6),
	aobjEvent32End(),
};

u32 * dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint_0x5C44[] = { dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint_0x5C24 };

PAD(16);

#if defined(REGION_JP)
/* JP: palette (32B) → PAD(8) → texture (384B) */
u16 dSCExplainGraphics_SpecialMoveRGB_palette[16] = {
	#include <SCExplainGraphics/SpecialMoveRGB_palette.palette.inc.c>
};
PAD(8);
/* @tex fmt=CI4 dim=16x48 lut=dSCExplainGraphics_SpecialMoveRGB_palette */
u8 dSCExplainGraphics_SpecialMoveRGB_tex[384] = {
	#include <SCExplainGraphics/SpecialMoveRGB_tex.tex.inc.c>
};
#else
/* US: texture (392B) → palette (32B) */
/* @tex fmt=CI4 dim=16x48 lut=dSCExplainGraphics_SpecialMoveRGB_palette */
u8 dSCExplainGraphics_SpecialMoveRGB_tex[392] = {
	#include <SCExplainGraphics/SpecialMoveRGB_tex.tex.inc.c>
};
u16 dSCExplainGraphics_SpecialMoveRGB_palette[16] = {
	#include <SCExplainGraphics/SpecialMoveRGB_palette.palette.inc.c>
};
#endif

Vtx dSCExplainGraphics_SpecialMoveRGB_vtx[4] = {
	#include <SCExplainGraphics/SpecialMoveRGB_vtx.vtx.inc.c>
};

/* DisplayList: SpecialMoveRGB @ 0x5E40 (232 bytes) */
Gfx dSCExplainGraphics_SpecialMoveRGB_DisplayList[29] = {
	#include <SCExplainGraphics/SpecialMoveRGB.dl.inc.c>
};

/* Raw data from file offset 0x5F28 to 0x5F40 (24 bytes) */
/* DObjDLLink trailer for SpecialMoveRGB — 2-entry array with the
 * standard {4, NULL} sentinel, followed by 8 bytes of alignment pad. */
DObjDLLink dSCExplainGraphics_SpecialMoveRGB_DLLink[2] = {
	{ 1, dSCExplainGraphics_SpecialMoveRGB_DisplayList },
	{ 4, NULL },
};
PAD(8);

#if defined(REGION_JP)

/* JP text sprites — different dimensions and textures from US */

/* Sprite: JPText1 */

Gfx dSCExplainGraphics_JPText1_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText1 (167(176)x49 i4, 2 tiles) */
u8 dSCExplainGraphics_JPText1_tex[4320] = {
    #include <SCExplainGraphics/JPText1.i4.inc.c>
};

/* Sprite: JPText1 (167x48 i4) */

Bitmap dSCExplainGraphics_JPText1_bitmaps[] = {
	{ 167, 176, 0, 0, dSCExplainGraphics_JPText1_tex, 46, 0 },
	{ 167, 176, 0, 0, dSCExplainGraphics_JPText1_tex + 0xFD8, 3, 0 },
};

Sprite dSCExplainGraphics_JPText1 = {
	0, 0,
	167, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	45, 46,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText2 */

Gfx dSCExplainGraphics_JPText2_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText2 (136(144)x32 i4) */
u8 dSCExplainGraphics_JPText2_tex[2304] = {
    #include <SCExplainGraphics/JPText2.i4.inc.c>
};

/* Sprite: JPText2 (136x32 i4) */

Bitmap dSCExplainGraphics_JPText2_bitmaps[] = {
	{ 136, 144, 0, 0, dSCExplainGraphics_JPText2_tex, 32, 0 },
};

Sprite dSCExplainGraphics_JPText2 = {
	0, 0,
	136, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText3 */

Gfx dSCExplainGraphics_JPText3_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText3 (168(176)x32 i4) */
u8 dSCExplainGraphics_JPText3_tex[2816] = {
    #include <SCExplainGraphics/JPText3.i4.inc.c>
};

/* Sprite: JPText3 (168x32 i4) */

Bitmap dSCExplainGraphics_JPText3_bitmaps[] = {
	{ 168, 176, 0, 0, dSCExplainGraphics_JPText3_tex, 32, 0 },
};

Sprite dSCExplainGraphics_JPText3 = {
	0, 0,
	168, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText4 */

Gfx dSCExplainGraphics_JPText4_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText4 (189(192)x13 i4) */
u8 dSCExplainGraphics_JPText4_tex[1248] = {
    #include <SCExplainGraphics/JPText4.i4.inc.c>
};

/* Sprite: JPText4 (189x13 i4) */

Bitmap dSCExplainGraphics_JPText4_bitmaps[] = {
	{ 189, 192, 0, 0, dSCExplainGraphics_JPText4_tex, 13, 0 },
};

Sprite dSCExplainGraphics_JPText4 = {
	0, 0,
	189, 13,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText5 */

Gfx dSCExplainGraphics_JPText5_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText5 (118(128)x31 i4) */
u8 dSCExplainGraphics_JPText5_tex[1984] = {
    #include <SCExplainGraphics/JPText5.i4.inc.c>
};

/* Sprite: JPText5 (118x31 i4) */

Bitmap dSCExplainGraphics_JPText5_bitmaps[] = {
	{ 118, 128, 0, 0, dSCExplainGraphics_JPText5_tex, 31, 0 },
};

Sprite dSCExplainGraphics_JPText5 = {
	0, 0,
	118, 31,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	31, 31,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText6 */

Gfx dSCExplainGraphics_JPText6_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText6 (185(192)x14 i4) */
u8 dSCExplainGraphics_JPText6_tex[1344] = {
    #include <SCExplainGraphics/JPText6.i4.inc.c>
};

/* Sprite: JPText6 (185x14 i4) */

Bitmap dSCExplainGraphics_JPText6_bitmaps[] = {
	{ 185, 192, 0, 0, dSCExplainGraphics_JPText6_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText6 = {
	0, 0,
	185, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText7 */

Gfx dSCExplainGraphics_JPText7_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText7 (30(32)x12 rgba16) */
u8 dSCExplainGraphics_JPText7_tex[768] = {
    #include <SCExplainGraphics/JPText7.rgba16.inc.c>
};

/* Sprite: JPText7 (30x12 rgba16) */

Bitmap dSCExplainGraphics_JPText7_bitmaps[] = {
	{ 30, 32, 0, 0, dSCExplainGraphics_JPText7_tex, 12, 0 },
};

Sprite dSCExplainGraphics_JPText7 = {
	0, 0,
	30, 12,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	0, 2,
	(Bitmap*)dSCExplainGraphics_JPText7_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite JPText8 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText8 (300(304)x87 ci8, 15 tiles) */
u8 dSCExplainGraphics_JPText8_tex_00[1832] = {
	#include <SCExplainGraphics/JPText8_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_01[1832] = {
	#include <SCExplainGraphics/JPText8_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_02[1832] = {
	#include <SCExplainGraphics/JPText8_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_03[1832] = {
	#include <SCExplainGraphics/JPText8_tex_03.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_04[1832] = {
	#include <SCExplainGraphics/JPText8_tex_04.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_05[1832] = {
	#include <SCExplainGraphics/JPText8_tex_05.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_06[1832] = {
	#include <SCExplainGraphics/JPText8_tex_06.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_07[1832] = {
	#include <SCExplainGraphics/JPText8_tex_07.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_08[1832] = {
	#include <SCExplainGraphics/JPText8_tex_08.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_09[1832] = {
	#include <SCExplainGraphics/JPText8_tex_09.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_10[1832] = {
	#include <SCExplainGraphics/JPText8_tex_10.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_11[1832] = {
	#include <SCExplainGraphics/JPText8_tex_11.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_12[1832] = {
	#include <SCExplainGraphics/JPText8_tex_12.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_13[1832] = {
	#include <SCExplainGraphics/JPText8_tex_13.tex.inc.c>
};
u8 dSCExplainGraphics_JPText8_tex_14[920] = {
	#include <SCExplainGraphics/JPText8_tex_14.tex.inc.c>
};

/* Palette: @ 0x10380 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText8_palette[16] = {
	#include <SCExplainGraphics/JPText8.palette.inc.c>
};

/* Raw data from file offset 0x103A0 to 0x10580 (480 bytes) */
u16 dSCExplainGraphics_JPText8_palframes[240] = {
	#include <SCExplainGraphics/JPText8_palframes.palette.inc.c>
};

/* Sprite: JPText8 */

/* Sprite: JPText8 (300x73 ci8) */

Bitmap dSCExplainGraphics_JPText8_bitmaps[] = {
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_00, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_01, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_02, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_03, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_04, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_05, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_06, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_07, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_08, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_09, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_10, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_11, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_12, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_13, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex_14, 3, 0 },
};

Sprite dSCExplainGraphics_JPText8 = {
	0, 0,
	300, 73,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText8_palette,
	0, 1,
	15, 204,
	5, 6,
	2, 1,
	(Bitmap*)dSCExplainGraphics_JPText8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText9 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText9 (260(272)x51 ci4, 4 tiles) */
u8 dSCExplainGraphics_JPText9_tex_00[2048] = {
	#include <SCExplainGraphics/JPText9_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText9_tex_01[2048] = {
	#include <SCExplainGraphics/JPText9_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_JPText9_tex_02[2048] = {
	#include <SCExplainGraphics/JPText9_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_JPText9_tex_03[824] = {
	#include <SCExplainGraphics/JPText9_tex_03.tex.inc.c>
};

/* Palette: @ 0x12200 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText9_palette[16] = {
	#include <SCExplainGraphics/JPText9.palette.inc.c>
};

/* Sprite: JPText9 */

/* Sprite: JPText9 (260x48 ci4) */

Bitmap dSCExplainGraphics_JPText9_bitmaps[] = {
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex_00, 15, 0 },
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex_01, 15, 0 },
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex_02, 15, 0 },
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex_03, 6, 0 },
};

Sprite dSCExplainGraphics_JPText9 = {
	0, 0,
	260, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText9_palette,
	0, 1,
	4, 72,
	14, 15,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText10 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText10 (204(208)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText10_tex_00[1984] = {
	#include <SCExplainGraphics/JPText10_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText10_tex_01[1464] = {
	#include <SCExplainGraphics/JPText10_tex_01.tex.inc.c>
};

/* Palette: @ 0x13030 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText10_palette[16] = {
	#include <SCExplainGraphics/JPText10.palette.inc.c>
};

/* Sprite: JPText10 */

/* Sprite: JPText10 (204x32 ci4) */

Bitmap dSCExplainGraphics_JPText10_bitmaps[] = {
	{ 204, 208, 0, 0, dSCExplainGraphics_JPText10_tex_00, 19, 0 },
	{ 204, 208, 0, 0, dSCExplainGraphics_JPText10_tex_01, 14, 0 },
};

Sprite dSCExplainGraphics_JPText10 = {
	0, 0,
	204, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText10_palette,
	0, 1,
	2, 48,
	18, 19,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText10_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText11 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText11 (160x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText11_tex_00[2008] = {
	#include <SCExplainGraphics/JPText11_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText11_tex_01[648] = {
	#include <SCExplainGraphics/JPText11_tex_01.tex.inc.c>
};

/* Palette: @ 0x13B28 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText11_palette[16] = {
	#include <SCExplainGraphics/JPText11.palette.inc.c>
};

/* Sprite: JPText11 */

/* Sprite: JPText11 (160x32 ci4) */

Bitmap dSCExplainGraphics_JPText11_bitmaps[] = {
	{ 160, 160, 0, 0, dSCExplainGraphics_JPText11_tex_00, 25, 0 },
	{ 160, 160, 0, 0, dSCExplainGraphics_JPText11_tex_01, 8, 0 },
};

Sprite dSCExplainGraphics_JPText11 = {
	0, 0,
	160, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText11_palette,
	0, 1,
	2, 48,
	24, 25,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText11_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite JPText12 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText12 (162(176)x14 ci4) */
u8 dSCExplainGraphics_JPText12_tex[1240] = {
    #include <SCExplainGraphics/JPText12.ci4.inc.c>
};

/* Palette: @ 0x14090 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText12_palette[16] = {
	#include <SCExplainGraphics/JPText12.palette.inc.c>
};

/* Sprite: JPText12 */

/* Sprite: JPText12 (162x14 ci4) */

Bitmap dSCExplainGraphics_JPText12_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_JPText12_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText12 = {
	0, 0,
	162, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText12_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText12_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText13 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText13 (134(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText13_tex_00[2024] = {
	#include <SCExplainGraphics/JPText13_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText13_tex_01[1520] = {
	#include <SCExplainGraphics/JPText13_tex_01.tex.inc.c>
};

/* Palette: @ 0x14EF0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText13_palette[16] = {
	#include <SCExplainGraphics/JPText13.palette.inc.c>
};

/* Sprite: JPText13 */

/* Sprite: JPText13 (134x48 ci4) */

Bitmap dSCExplainGraphics_JPText13_bitmaps[] = {
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText13_tex_00, 28, 0 },
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText13_tex_01, 21, 0 },
};

Sprite dSCExplainGraphics_JPText13 = {
	0, 0,
	134, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText13_palette,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText13_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText14 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText14 (140(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText14_tex_00[2024] = {
	#include <SCExplainGraphics/JPText14_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText14_tex_01[1520] = {
	#include <SCExplainGraphics/JPText14_tex_01.tex.inc.c>
};

/* Palette: @ 0x15D60 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText14_palette[16] = {
	#include <SCExplainGraphics/JPText14.palette.inc.c>
};

/* Sprite: JPText14 */

/* Sprite: JPText14 (140x48 ci4) */

Bitmap dSCExplainGraphics_JPText14_bitmaps[] = {
	{ 140, 144, 0, 0, dSCExplainGraphics_JPText14_tex_00, 28, 0 },
	{ 140, 144, 0, 0, dSCExplainGraphics_JPText14_tex_01, 21, 0 },
};

Sprite dSCExplainGraphics_JPText14 = {
	0, 0,
	140, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText14_palette,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText14_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText15 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText15 (176x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText15_tex_00[2032] = {
	#include <SCExplainGraphics/JPText15_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText15_tex_01[712] = {
	#include <SCExplainGraphics/JPText15_tex_01.tex.inc.c>
};

/* Palette: @ 0x168B0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText15_palette[16] = {
	#include <SCExplainGraphics/JPText15.palette.inc.c>
};

/* Sprite: JPText15 */

/* Sprite: JPText15 (176x30 ci4) */

Bitmap dSCExplainGraphics_JPText15_bitmaps[] = {
	{ 176, 176, 0, 0, dSCExplainGraphics_JPText15_tex_00, 23, 0 },
	{ 176, 176, 0, 0, dSCExplainGraphics_JPText15_tex_01, 8, 0 },
};

Sprite dSCExplainGraphics_JPText15 = {
	0, 0,
	176, 30,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText15_palette,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText15_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText16 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText16 (162(168)x52 ci8, 5 tiles) */
u8 dSCExplainGraphics_JPText16_tex_00[2024] = {
	#include <SCExplainGraphics/JPText16_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText16_tex_01[2024] = {
	#include <SCExplainGraphics/JPText16_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_JPText16_tex_02[2024] = {
	#include <SCExplainGraphics/JPText16_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_JPText16_tex_03[2024] = {
	#include <SCExplainGraphics/JPText16_tex_03.tex.inc.c>
};
u8 dSCExplainGraphics_JPText16_tex_04[680] = {
	#include <SCExplainGraphics/JPText16_tex_04.tex.inc.c>
};

/* Palette: @ 0x18B90 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText16_palette[16] = {
	#include <SCExplainGraphics/JPText16.palette.inc.c>
};

/* Raw data from file offset 0x18BB0 to 0x18D90 (480 bytes) */
u16 dSCExplainGraphics_JPText16_palframes[240] = {
	#include <SCExplainGraphics/JPText16_palframes.palette.inc.c>
};

/* Sprite: JPText16 */

/* Sprite: JPText16 (162x48 ci8) */

Bitmap dSCExplainGraphics_JPText16_bitmaps[] = {
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex_00, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex_01, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex_02, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex_03, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex_04, 4, 0 },
};

Sprite dSCExplainGraphics_JPText16 = {
	0, 0,
	162, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText16_palette,
	0, 1,
	5, 84,
	11, 12,
	2, 1,
	(Bitmap*)dSCExplainGraphics_JPText16_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText17 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText17 (174(176)x52 ci8, 5 tiles) */
u8 dSCExplainGraphics_JPText17_tex_00[1944] = {
	#include <SCExplainGraphics/JPText17_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText17_tex_01[1944] = {
	#include <SCExplainGraphics/JPText17_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_JPText17_tex_02[1944] = {
	#include <SCExplainGraphics/JPText17_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_JPText17_tex_03[1944] = {
	#include <SCExplainGraphics/JPText17_tex_03.tex.inc.c>
};
u8 dSCExplainGraphics_JPText17_tex_04[1416] = {
	#include <SCExplainGraphics/JPText17_tex_04.tex.inc.c>
};

/* Palette: @ 0x1B220 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText17_palette[16] = {
	#include <SCExplainGraphics/JPText17.palette.inc.c>
};

/* Raw data from file offset 0x1B240 to 0x1B420 (480 bytes) */
u16 dSCExplainGraphics_JPText17_palframes[240] = {
	#include <SCExplainGraphics/JPText17_palframes.palette.inc.c>
};

/* Sprite: JPText17 */

/* Sprite: JPText17 (174x48 ci8) */

Bitmap dSCExplainGraphics_JPText17_bitmaps[] = {
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex_00, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex_01, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex_02, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex_03, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex_04, 8, 0 },
};

Sprite dSCExplainGraphics_JPText17 = {
	0, 0,
	174, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText17_palette,
	0, 1,
	5, 84,
	10, 11,
	2, 1,
	(Bitmap*)dSCExplainGraphics_JPText17_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText18 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText18 (198(208)x14 ci4) */
u8 dSCExplainGraphics_JPText18_tex[1464] = {
    #include <SCExplainGraphics/JPText18.ci4.inc.c>
};

/* Palette: @ 0x1BA80 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText18_palette[16] = {
	#include <SCExplainGraphics/JPText18.palette.inc.c>
};

/* Sprite: JPText18 */

/* Sprite: JPText18 (198x14 ci4) */

Bitmap dSCExplainGraphics_JPText18_bitmaps[] = {
	{ 198, 208, 0, 0, dSCExplainGraphics_JPText18_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText18 = {
	0, 0,
	198, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText18_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText18_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText19 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText19 (134(144)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText19_tex_00[2024] = {
	#include <SCExplainGraphics/JPText19_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText19_tex_01[368] = {
	#include <SCExplainGraphics/JPText19_tex_01.tex.inc.c>
};

/* Palette: @ 0x1C460 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText19_palette[16] = {
	#include <SCExplainGraphics/JPText19.palette.inc.c>
};

/* Sprite: JPText19 */

/* Sprite: JPText19 (134x32 ci4) */

Bitmap dSCExplainGraphics_JPText19_bitmaps[] = {
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText19_tex_00, 28, 0 },
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText19_tex_01, 5, 0 },
};

Sprite dSCExplainGraphics_JPText19 = {
	0, 0,
	134, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText19_palette,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText19_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText20 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText20 (148(160)x14 ci4) */
u8 dSCExplainGraphics_JPText20_tex[1128] = {
    #include <SCExplainGraphics/JPText20.ci4.inc.c>
};

/* Palette: @ 0x1C960 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText20_palette[16] = {
	#include <SCExplainGraphics/JPText20.palette.inc.c>
};

/* Sprite: JPText20 */

/* Sprite: JPText20 (148x14 ci4) */

Bitmap dSCExplainGraphics_JPText20_bitmaps[] = {
	{ 148, 160, 0, 0, dSCExplainGraphics_JPText20_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText20 = {
	0, 0,
	148, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText20_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText20_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText21 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText21 (122(128)x14 ci4) */
u8 dSCExplainGraphics_JPText21_tex[904] = {
    #include <SCExplainGraphics/JPText21.ci4.inc.c>
};

/* Palette: @ 0x1CD70 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText21_palette[16] = {
	#include <SCExplainGraphics/JPText21.palette.inc.c>
};

/* Sprite: JPText21 */

/* Sprite: JPText21 (122x14 ci4) */

Bitmap dSCExplainGraphics_JPText21_bitmaps[] = {
	{ 122, 128, 0, 0, dSCExplainGraphics_JPText21_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText21 = {
	0, 0,
	122, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText21_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText21_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText22 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText22 (162(176)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText22_tex_00[2032] = {
	#include <SCExplainGraphics/JPText22_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_JPText22_tex_01[888] = {
	#include <SCExplainGraphics/JPText22_tex_01.tex.inc.c>
};

/* Palette: @ 0x1D960 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText22_palette[16] = {
	#include <SCExplainGraphics/JPText22.palette.inc.c>
};

/* Sprite: JPText22 */

/* Sprite: JPText22 (162x32 ci4) */

Bitmap dSCExplainGraphics_JPText22_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_JPText22_tex_00, 23, 0 },
	{ 162, 176, 0, 0, dSCExplainGraphics_JPText22_tex_01, 10, 0 },
};

Sprite dSCExplainGraphics_JPText22 = {
	0, 0,
	162, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText22_palette,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText22_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite AButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: AButton (24x39 ci8) */
u8 dSCExplainGraphics_AButton_tex[944] = {
    #include <SCExplainGraphics/AButton.ci8.inc.c>
};

/* Palette: @ 0x1DDA8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_AButton_palette[16] = {
	#include <SCExplainGraphics/AButton.palette.inc.c>
};

/* Raw data from file offset 0x1DDC8 to 0x1DFA8 (480 bytes) */
u16 dSCExplainGraphics_AButton_palframes[240] = {
	#include <SCExplainGraphics/AButton_palframes.palette.inc.c>
};

/* Sprite: AButton */

/* Sprite: AButton (24x39 ci8) */

Bitmap dSCExplainGraphics_AButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_AButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_AButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_AButton_palette,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_AButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite BButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BButton (24x39 ci8) */
u8 dSCExplainGraphics_BButton_tex[944] = {
    #include <SCExplainGraphics/BButton.ci8.inc.c>
};

/* Palette: @ 0x1E3B8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_BButton_palette[16] = {
	#include <SCExplainGraphics/BButton.palette.inc.c>
};

/* Raw data from file offset 0x1E3D8 to 0x1E5B8 (480 bytes) */
u16 dSCExplainGraphics_BButton_palframes[240] = {
	#include <SCExplainGraphics/BButton_palframes.palette.inc.c>
};

/* Sprite: BButton */

/* Sprite: BButton (24x39 ci8) */

Bitmap dSCExplainGraphics_BButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_BButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_BButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_BButton_palette,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite ZButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ZButton (24x39 ci8) */
u8 dSCExplainGraphics_ZButton_tex[944] = {
    #include <SCExplainGraphics/ZButton.ci8.inc.c>
};

/* Palette: @ 0x1E9C8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_ZButton_palette[16] = {
	#include <SCExplainGraphics/ZButton.palette.inc.c>
};

/* Raw data from file offset 0x1E9E8 to 0x1EBC8 (480 bytes) */
u16 dSCExplainGraphics_ZButton_palframes[240] = {
	#include <SCExplainGraphics/ZButton_palframes.palette.inc.c>
};

/* Sprite: ZButton */

/* Sprite: ZButton (24x39 ci8) */

Bitmap dSCExplainGraphics_ZButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_ZButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_ZButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_ZButton_palette,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_ZButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite PlusSymbol */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PlusSymbol (8(16)x7 ci4) */
u8 dSCExplainGraphics_PlusSymbol_tex[64] = {
    #include <SCExplainGraphics/PlusSymbol.ci4.inc.c>
};

/* Palette: @ 0x1EC68 (16 colors RGBA5551) */
u16 dSCExplainGraphics_PlusSymbol_palette[16] = {
	#include <SCExplainGraphics/PlusSymbol.palette.inc.c>
};

/* Sprite: PlusSymbol */

/* Sprite: PlusSymbol (8x7 ci4) */

Bitmap dSCExplainGraphics_PlusSymbol_bitmaps[] = {
	{ 8, 16, 0, 0, dSCExplainGraphics_PlusSymbol_tex, 7, 0 },
};

Sprite dSCExplainGraphics_PlusSymbol = {
	0, 0,
	8, 7,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_PlusSymbol_palette,
	0, 1,
	1, 36,
	7, 7,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PlusSymbol_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#else /* US */

/* Sprite: Damage1 */

Gfx dSCExplainGraphics_Damage1_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage1 (200(208)x32 i4) */
u8 dSCExplainGraphics_Damage1_tex[3328] = {
    #include <SCExplainGraphics/Damage1.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage1_bitmaps[] = {
	{ 200, 208, 0, 0, dSCExplainGraphics_Damage1_tex, 32, 0 },
};

/* Sprite: Damage1 (200x32 i4) */
Sprite dSCExplainGraphics_Damage1 = {
	0, 0,
	200, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Damage2 */

Gfx dSCExplainGraphics_Damage2_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage2 (102(112)x28 i4) */
u8 dSCExplainGraphics_Damage2_tex[1568] = {
    #include <SCExplainGraphics/Damage2.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage2_bitmaps[] = {
	{ 102, 112, 0, 0, dSCExplainGraphics_Damage2_tex, 28, 0 },
};

/* Sprite: Damage2 (102x28 i4) */
Sprite dSCExplainGraphics_Damage2 = {
	0, 0,
	102, 28,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	28, 28,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Damage3 */

Gfx dSCExplainGraphics_Damage3_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage3 (144x32 i4) */
u8 dSCExplainGraphics_Damage3_tex[2304] = {
    #include <SCExplainGraphics/Damage3.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage3_bitmaps[] = {
	{ 144, 144, 0, 0, dSCExplainGraphics_Damage3_tex, 32, 0 },
};

/* Sprite: Damage3 (144x32 i4) */
Sprite dSCExplainGraphics_Damage3 = {
	0, 0,
	144, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Shield */

Gfx dSCExplainGraphics_Shield_dl[] = { gsSPEndDisplayList() };

/* Texture: Shield (164(176)x16 i4) */
u8 dSCExplainGraphics_Shield_tex[1408] = {
    #include <SCExplainGraphics/Shield.i4.inc.c>
};

Bitmap dSCExplainGraphics_Shield_bitmaps[] = {
	{ 164, 176, 0, 0, dSCExplainGraphics_Shield_tex, 16, 0 },
};

/* Sprite: Shield (164x16 i4) */
Sprite dSCExplainGraphics_Shield = {
	0, 0,
	164, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Shield_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: StartFighting */

Gfx dSCExplainGraphics_StartFighting_dl[] = { gsSPEndDisplayList() };

/* Texture: StartFighting (154(160)x32 i4) */
u8 dSCExplainGraphics_StartFighting_tex[2560] = {
    #include <SCExplainGraphics/StartFighting.i4.inc.c>
};

Bitmap dSCExplainGraphics_StartFighting_bitmaps[] = {
	{ 154, 160, 0, 0, dSCExplainGraphics_StartFighting_tex, 32, 0 },
};

/* Sprite: StartFighting (154x32 i4) */
Sprite dSCExplainGraphics_StartFighting = {
	0, 0,
	154, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_StartFighting_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: PlayerCount */

Gfx dSCExplainGraphics_PlayerCount_dl[] = { gsSPEndDisplayList() };

/* Texture: PlayerCount (170(176)x14 i4) */
u8 dSCExplainGraphics_PlayerCount_tex[1232] = {
    #include <SCExplainGraphics/PlayerCount.i4.inc.c>
};

Bitmap dSCExplainGraphics_PlayerCount_bitmaps[] = {
	{ 170, 176, 0, 0, dSCExplainGraphics_PlayerCount_tex, 14, 0 },
};

/* Sprite: PlayerCount (170x14 i4) */
Sprite dSCExplainGraphics_PlayerCount = {
	0, 0,
	170, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dSCExplainGraphics_PlayerCount_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: HereText */

Gfx dSCExplainGraphics_HereText_dl[] = { gsSPEndDisplayList() };

/* Texture: HereText (42(44)x12 rgba16) */
u8 dSCExplainGraphics_HereText_tex[1056] = {
    #include <SCExplainGraphics/HereText.rgba16.inc.c>
};

Bitmap dSCExplainGraphics_HereText_bitmaps[] = {
	{ 42, 44, 0, 0, dSCExplainGraphics_HereText_tex, 12, 0 },
};

/* Sprite: HereText (42x12 rgba16) */
Sprite dSCExplainGraphics_HereText = {
	0, 0,
	42, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	0, 2,
	(Bitmap*)dSCExplainGraphics_HereText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite Banner */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Banner (300(304)x88 ci8, 15 tiles) */
u8 dSCExplainGraphics_Banner_tex_00[1832] = {
	#include <SCExplainGraphics/Banner_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_01[1832] = {
	#include <SCExplainGraphics/Banner_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_02[1832] = {
	#include <SCExplainGraphics/Banner_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_03[1832] = {
	#include <SCExplainGraphics/Banner_tex_03.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_04[1832] = {
	#include <SCExplainGraphics/Banner_tex_04.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_05[1832] = {
	#include <SCExplainGraphics/Banner_tex_05.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_06[1832] = {
	#include <SCExplainGraphics/Banner_tex_06.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_07[1832] = {
	#include <SCExplainGraphics/Banner_tex_07.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_08[1832] = {
	#include <SCExplainGraphics/Banner_tex_08.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_09[1832] = {
	#include <SCExplainGraphics/Banner_tex_09.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_10[1832] = {
	#include <SCExplainGraphics/Banner_tex_10.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_11[1832] = {
	#include <SCExplainGraphics/Banner_tex_11.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_12[1832] = {
	#include <SCExplainGraphics/Banner_tex_12.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_13[1832] = {
	#include <SCExplainGraphics/Banner_tex_13.tex.inc.c>
};
u8 dSCExplainGraphics_Banner_tex_14[1224] = {
	#include <SCExplainGraphics/Banner_tex_14.tex.inc.c>
};

/* Palette: @ 0xFF70 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0xFF70[256] = {
	#include <SCExplainGraphics/palette_0xFF70.palette.inc.c>
};

/* Sprite: Banner */

/* Sprite: Banner (300x74 ci8) */

Bitmap dSCExplainGraphics_Banner_bitmaps[] = {
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_00, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_01, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_02, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_03, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_04, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_05, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_06, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_07, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_08, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_09, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_10, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_11, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_12, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_13, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex_14, 4, 0 },
};

Sprite dSCExplainGraphics_Banner = {
	0, 0,
	300, 74,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0xFF70,
	0, 1,
	15, 204,
	5, 6,
	2, 1,
	(Bitmap*)dSCExplainGraphics_Banner_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite TapTheStick */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: TapTheStick (264(272)x53 ci4, 4 tiles) */
u8 dSCExplainGraphics_TapTheStick_tex_00[1912] = {
	#include <SCExplainGraphics/TapTheStick_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_TapTheStick_tex_01[1912] = {
	#include <SCExplainGraphics/TapTheStick_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_TapTheStick_tex_02[1912] = {
	#include <SCExplainGraphics/TapTheStick_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_TapTheStick_tex_03[1504] = {
	#include <SCExplainGraphics/TapTheStick_tex_03.tex.inc.c>
};

/* Palette: @ 0x11F00 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x11F00[16] = {
	#include <SCExplainGraphics/palette_0x11F00.palette.inc.c>
};

/* Sprite: TapTheStick */

/* Sprite: TapTheStick (264x50 ci4) */

Bitmap dSCExplainGraphics_TapTheStick_bitmaps[] = {
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex_00, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex_01, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex_02, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex_03, 11, 0 },
};

Sprite dSCExplainGraphics_TapTheStick = {
	0, 0,
	264, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x11F00,
	0, 1,
	4, 72,
	13, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_TapTheStick_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite Jump */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Jump (170(176)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_Jump_tex_00[2032] = {
	#include <SCExplainGraphics/Jump_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_Jump_tex_01[888] = {
	#include <SCExplainGraphics/Jump_tex_01.tex.inc.c>
};

/* Palette: @ 0x12B20 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x12B20[16] = {
	#include <SCExplainGraphics/palette_0x12B20.palette.inc.c>
};

/* Sprite: Jump */

/* Sprite: Jump (170x32 ci4) */

Bitmap dSCExplainGraphics_Jump_bitmaps[] = {
	{ 170, 176, 0, 0, dSCExplainGraphics_Jump_tex_00, 23, 0 },
	{ 170, 176, 0, 0, dSCExplainGraphics_Jump_tex_01, 10, 0 },
};

Sprite dSCExplainGraphics_Jump = {
	0, 0,
	170, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x12B20,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Jump_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite MidairJump */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: MidairJump (156(160)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_MidairJump_tex_00[2008] = {
	#include <SCExplainGraphics/MidairJump_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_MidairJump_tex_01[648] = {
	#include <SCExplainGraphics/MidairJump_tex_01.tex.inc.c>
};

/* Palette: @ 0x13618 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x13618[16] = {
	#include <SCExplainGraphics/palette_0x13618.palette.inc.c>
};

/* Sprite: MidairJump */

/* Sprite: MidairJump (156x32 ci4) */

Bitmap dSCExplainGraphics_MidairJump_bitmaps[] = {
	{ 156, 160, 0, 0, dSCExplainGraphics_MidairJump_tex_00, 25, 0 },
	{ 156, 160, 0, 0, dSCExplainGraphics_MidairJump_tex_01, 8, 0 },
};

Sprite dSCExplainGraphics_MidairJump = {
	0, 0,
	156, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x13618,
	0, 1,
	2, 48,
	24, 25,
	2, 0,
	(Bitmap*)dSCExplainGraphics_MidairJump_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite Attack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Attack (100(112)x14 ci4) */
u8 dSCExplainGraphics_Attack_tex[792] = {
    #include <SCExplainGraphics/Attack.ci4.inc.c>
};

/* Palette: @ 0x139C0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x139C0[16] = {
	#include <SCExplainGraphics/palette_0x139C0.palette.inc.c>
};

/* Sprite: Attack */

/* Sprite: Attack (100x14 ci4) */

Bitmap dSCExplainGraphics_Attack_bitmaps[] = {
	{ 100, 112, 0, 0, dSCExplainGraphics_Attack_tex, 14, 0 },
};

Sprite dSCExplainGraphics_Attack = {
	0, 0,
	100, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x139C0,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Attack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite PowerAttack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PowerAttack (160x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_PowerAttack_tex_00[1928] = {
	#include <SCExplainGraphics/PowerAttack_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_PowerAttack_tex_01[568] = {
	#include <SCExplainGraphics/PowerAttack_tex_01.tex.inc.c>
};

/* Palette: @ 0x14408 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x14408[16] = {
	#include <SCExplainGraphics/palette_0x14408.palette.inc.c>
};

/* Sprite: PowerAttack */

/* Sprite: PowerAttack (160x30 ci4) */

Bitmap dSCExplainGraphics_PowerAttack_bitmaps[] = {
	{ 160, 160, 0, 0, dSCExplainGraphics_PowerAttack_tex_00, 24, 0 },
	{ 160, 160, 0, 0, dSCExplainGraphics_PowerAttack_tex_01, 7, 0 },
};

Sprite dSCExplainGraphics_PowerAttack = {
	0, 0,
	160, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x14408,
	0, 1,
	2, 48,
	23, 24,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PowerAttack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite SmashAttack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: SmashAttack (132(144)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_SmashAttack_tex_00[2024] = {
	#include <SCExplainGraphics/SmashAttack_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_SmashAttack_tex_01[368] = {
	#include <SCExplainGraphics/SmashAttack_tex_01.tex.inc.c>
};

/* Palette: @ 0x14DF0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x14DF0[16] = {
	#include <SCExplainGraphics/palette_0x14DF0.palette.inc.c>
};

/* Sprite: SmashAttack */

/* Sprite: SmashAttack (132x32 ci4) */

Bitmap dSCExplainGraphics_SmashAttack_bitmaps[] = {
	{ 132, 144, 0, 0, dSCExplainGraphics_SmashAttack_tex_00, 28, 0 },
	{ 132, 144, 0, 0, dSCExplainGraphics_SmashAttack_tex_01, 5, 0 },
};

Sprite dSCExplainGraphics_SmashAttack = {
	0, 0,
	132, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x14DF0,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_SmashAttack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite KnockThemOff */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: KnockThemOff (200(208)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_KnockThemOff_tex_00[1984] = {
	#include <SCExplainGraphics/KnockThemOff_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_KnockThemOff_tex_01[1464] = {
	#include <SCExplainGraphics/KnockThemOff_tex_01.tex.inc.c>
};

/* Palette: @ 0x15C00 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x15C00[16] = {
	#include <SCExplainGraphics/palette_0x15C00.palette.inc.c>
};

/* Sprite: KnockThemOff */

/* Sprite: KnockThemOff (200x32 ci4) */

Bitmap dSCExplainGraphics_KnockThemOff_bitmaps[] = {
	{ 200, 208, 0, 0, dSCExplainGraphics_KnockThemOff_tex_00, 19, 0 },
	{ 200, 208, 0, 0, dSCExplainGraphics_KnockThemOff_tex_01, 14, 0 },
};

Sprite dSCExplainGraphics_KnockThemOff = {
	0, 0,
	200, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x15C00,
	0, 1,
	2, 48,
	18, 19,
	2, 0,
	(Bitmap*)dSCExplainGraphics_KnockThemOff_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite BUpGetBack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BUpGetBack (162(168)x50 ci8, 5 tiles) */
u8 dSCExplainGraphics_BUpGetBack_tex_00[1856] = {
	#include <SCExplainGraphics/BUpGetBack_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_BUpGetBack_tex_01[1856] = {
	#include <SCExplainGraphics/BUpGetBack_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_BUpGetBack_tex_02[1856] = {
	#include <SCExplainGraphics/BUpGetBack_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_BUpGetBack_tex_03[1856] = {
	#include <SCExplainGraphics/BUpGetBack_tex_03.tex.inc.c>
};
u8 dSCExplainGraphics_BUpGetBack_tex_04[1016] = {
	#include <SCExplainGraphics/BUpGetBack_tex_04.tex.inc.c>
};

/* Palette: @ 0x17D90 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x17D90[256] = {
	#include <SCExplainGraphics/palette_0x17D90.palette.inc.c>
};

/* Sprite: BUpGetBack */

/* Sprite: BUpGetBack (162x46 ci8) */

Bitmap dSCExplainGraphics_BUpGetBack_bitmaps[] = {
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex_00, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex_01, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex_02, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex_03, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex_04, 6, 0 },
};

Sprite dSCExplainGraphics_BUpGetBack = {
	0, 0,
	162, 46,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x17D90,
	0, 1,
	5, 84,
	10, 11,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BUpGetBack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite SpecialMoves */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: SpecialMoves (168x51 ci8, 6 tiles) */
u8 dSCExplainGraphics_SpecialMoves_tex_00[1520] = {
	#include <SCExplainGraphics/SpecialMoves_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_SpecialMoves_tex_01[1520] = {
	#include <SCExplainGraphics/SpecialMoves_tex_01.tex.inc.c>
};
u8 dSCExplainGraphics_SpecialMoves_tex_02[1520] = {
	#include <SCExplainGraphics/SpecialMoves_tex_02.tex.inc.c>
};
u8 dSCExplainGraphics_SpecialMoves_tex_03[1520] = {
	#include <SCExplainGraphics/SpecialMoves_tex_03.tex.inc.c>
};
u8 dSCExplainGraphics_SpecialMoves_tex_04[1520] = {
	#include <SCExplainGraphics/SpecialMoves_tex_04.tex.inc.c>
};
u8 dSCExplainGraphics_SpecialMoves_tex_05[1016] = {
	#include <SCExplainGraphics/SpecialMoves_tex_05.tex.inc.c>
};

/* Palette: @ 0x1A1E0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1A1E0[256] = {
	#include <SCExplainGraphics/palette_0x1A1E0.palette.inc.c>
};

/* Sprite: SpecialMoves */

/* Sprite: SpecialMoves (168x46 ci8) */

Bitmap dSCExplainGraphics_SpecialMoves_bitmaps[] = {
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex_00, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex_01, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex_02, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex_03, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex_04, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex_05, 6, 0 },
};

Sprite dSCExplainGraphics_SpecialMoves = {
	0, 0,
	168, 46,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1A1E0,
	0, 1,
	6, 96,
	8, 9,
	2, 1,
	(Bitmap*)dSCExplainGraphics_SpecialMoves_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite Dodge */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Dodge (182(192)x14 ci4) */
u8 dSCExplainGraphics_Dodge_tex[1352] = {
    #include <SCExplainGraphics/Dodge.ci4.inc.c>
};

/* Palette: @ 0x1A9E0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1A9E0[16] = {
	#include <SCExplainGraphics/palette_0x1A9E0.palette.inc.c>
};

/* Sprite: Dodge */

/* Sprite: Dodge (182x14 ci4) */

Bitmap dSCExplainGraphics_Dodge_bitmaps[] = {
	{ 182, 192, 0, 0, dSCExplainGraphics_Dodge_tex, 14, 0 },
};

Sprite dSCExplainGraphics_Dodge = {
	0, 0,
	182, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1A9E0,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Dodge_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite ThrowEnemy */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ThrowEnemy (146(160)x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_ThrowEnemy_tex_00[1928] = {
	#include <SCExplainGraphics/ThrowEnemy_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_ThrowEnemy_tex_01[568] = {
	#include <SCExplainGraphics/ThrowEnemy_tex_01.tex.inc.c>
};

/* Palette: @ 0x1B428 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1B428[16] = {
	#include <SCExplainGraphics/palette_0x1B428.palette.inc.c>
};

/* Sprite: ThrowEnemy */

/* Sprite: ThrowEnemy (146x30 ci4) */

Bitmap dSCExplainGraphics_ThrowEnemy_bitmaps[] = {
	{ 146, 160, 0, 0, dSCExplainGraphics_ThrowEnemy_tex_00, 24, 0 },
	{ 146, 160, 0, 0, dSCExplainGraphics_ThrowEnemy_tex_01, 7, 0 },
};

Sprite dSCExplainGraphics_ThrowEnemy = {
	0, 0,
	146, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1B428,
	0, 1,
	2, 48,
	23, 24,
	2, 0,
	(Bitmap*)dSCExplainGraphics_ThrowEnemy_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite GrabItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: GrabItems (148(160)x14 ci4) */
u8 dSCExplainGraphics_GrabItems_tex[1128] = {
    #include <SCExplainGraphics/GrabItems.ci4.inc.c>
};

/* Palette: @ 0x1B920 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1B920[16] = {
	#include <SCExplainGraphics/palette_0x1B920.palette.inc.c>
};

/* Sprite: GrabItems */

/* Sprite: GrabItems (148x14 ci4) */

Bitmap dSCExplainGraphics_GrabItems_bitmaps[] = {
	{ 148, 160, 0, 0, dSCExplainGraphics_GrabItems_tex, 14, 0 },
};

Sprite dSCExplainGraphics_GrabItems = {
	0, 0,
	148, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1B920,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_GrabItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite UseItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: UseItems (162(176)x14 ci4) */
u8 dSCExplainGraphics_UseItems_tex[1240] = {
    #include <SCExplainGraphics/UseItems.ci4.inc.c>
};

/* Palette: @ 0x1BE80 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1BE80[16] = {
	#include <SCExplainGraphics/palette_0x1BE80.palette.inc.c>
};

/* Sprite: UseItems */

/* Sprite: UseItems (162x14 ci4) */

Bitmap dSCExplainGraphics_UseItems_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_UseItems_tex, 14, 0 },
};

Sprite dSCExplainGraphics_UseItems = {
	0, 0,
	162, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1BE80,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_UseItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite ThrowItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ThrowItems (130(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_ThrowItems_tex_00[1952] = {
	#include <SCExplainGraphics/ThrowItems_tex_00.tex.inc.c>
};
u8 dSCExplainGraphics_ThrowItems_tex_01[1592] = {
	#include <SCExplainGraphics/ThrowItems_tex_01.tex.inc.c>
};

/* Palette: @ 0x1CCE0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1CCE0[16] = {
	#include <SCExplainGraphics/palette_0x1CCE0.palette.inc.c>
};

/* Sprite: ThrowItems */

/* Sprite: ThrowItems (130x48 ci4) */

Bitmap dSCExplainGraphics_ThrowItems_bitmaps[] = {
	{ 130, 144, 0, 0, dSCExplainGraphics_ThrowItems_tex_00, 27, 0 },
	{ 130, 144, 0, 0, dSCExplainGraphics_ThrowItems_tex_01, 22, 0 },
};

Sprite dSCExplainGraphics_ThrowItems = {
	0, 0,
	130, 48,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1CCE0,
	0, 1,
	2, 48,
	26, 27,
	2, 0,
	(Bitmap*)dSCExplainGraphics_ThrowItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite AButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: AButton (24x39 ci8) */
u8 dSCExplainGraphics_AButton_tex[944] = {
    #include <SCExplainGraphics/AButton.ci8.inc.c>
};

/* Palette: @ 0x1D128 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1D128[256] = {
	#include <SCExplainGraphics/palette_0x1D128.palette.inc.c>
};

/* Sprite: AButton */

/* Sprite: AButton (24x39 ci8) */

Bitmap dSCExplainGraphics_AButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_AButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_AButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1D128,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_AButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite BButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BButton (24x39 ci8) */
u8 dSCExplainGraphics_BButton_tex[944] = {
    #include <SCExplainGraphics/BButton.ci8.inc.c>
};

/* Palette: @ 0x1D738 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1D738[256] = {
	#include <SCExplainGraphics/palette_0x1D738.palette.inc.c>
};

/* Sprite: BButton */

/* Sprite: BButton (24x39 ci8) */

Bitmap dSCExplainGraphics_BButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_BButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_BButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1D738,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite ZButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ZButton (24x39 ci8) */
u8 dSCExplainGraphics_ZButton_tex[944] = {
    #include <SCExplainGraphics/ZButton.ci8.inc.c>
};

/* Palette: @ 0x1DD48 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1DD48[256] = {
	#include <SCExplainGraphics/palette_0x1DD48.palette.inc.c>
};

/* Sprite: ZButton */

/* Sprite: ZButton (24x39 ci8) */

Bitmap dSCExplainGraphics_ZButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_ZButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_ZButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1DD48,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_ZButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite PlusSymbol */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PlusSymbol (8(16)x7 ci4) */
u8 dSCExplainGraphics_PlusSymbol_tex[64] = {
    #include <SCExplainGraphics/PlusSymbol.ci4.inc.c>
};

/* Palette: @ 0x1DFE8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1DFE8[16] = {
	#include <SCExplainGraphics/palette_0x1DFE8.palette.inc.c>
};

/* Sprite: PlusSymbol */

/* Sprite: PlusSymbol (8x7 ci4) */

Bitmap dSCExplainGraphics_PlusSymbol_bitmaps[] = {
	{ 8, 16, 0, 0, dSCExplainGraphics_PlusSymbol_tex, 7, 0 },
};

Sprite dSCExplainGraphics_PlusSymbol = {
	0, 0,
	8, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1DFE8,
	0, 1,
	1, 36,
	7, 7,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PlusSymbol_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#endif
