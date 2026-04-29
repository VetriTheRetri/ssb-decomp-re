/* relocData file 356: MarioSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dMarioSpecial2_Lut_0x0008_palette[16] = {
	#include <MarioSpecial2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dMarioSpecial2_Lut_0x0030_palette[16] = {
	#include <MarioSpecial2/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0058 to 0x00A0 (72 bytes) */
u8 dMarioSpecial2_Tex_0x0058[64] = {
	#include <MarioSpecial2/Tex_0x0058.tex.inc.c>
};

PAD(8);

/* Raw data from file offset 0x00A0 to 0x0120 (128 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dMarioSpecial2_Lut_0x0030_palette */
u8 dMarioSpecial2_Tex_0x00A0[128] = {
	#include <MarioSpecial2/Tex_0x00A0.tex.inc.c>
};

/* Vtx: Vtx_0x0120 @ 0x120 (12 vertices) */
Vtx dMarioSpecial2_Vtx_0x0120_Vtx[12] = {
	#include <MarioSpecial2/Vtx_0x0120.vtx.inc.c>
};

/* Vtx: Vtx_0x01E0 @ 0x1E0 (18 vertices) */
Vtx dMarioSpecial2_Vtx_0x01E0_Vtx[18] = {
	#include <MarioSpecial2/Vtx_0x01E0.vtx.inc.c>
};

/* Vtx: Vtx_0x0300 @ 0x300 (12 vertices) */
Vtx dMarioSpecial2_Vtx_0x0300_Vtx[12] = {
	#include <MarioSpecial2/Vtx_0x0300.vtx.inc.c>
};

/* Merged Gfx DL @ DisplayList — 2 blocks merged because
 * the head wasn't terminated with gsSPEndDisplayList; runtime
 * walks straight through. */
Gfx dMarioSpecial2_Joint_0x03C0_DisplayList[32] = {
	#include <MarioSpecial2/Joint_0x03C0_DisplayList.dl.inc.c>
};

/* DisplayList: Joint_0x04C0 @ 0x4C0 (328 bytes) */
Gfx dMarioSpecial2_Joint_0x04C0_DisplayList[41] = {
	#include <MarioSpecial2/Joint_0x04C0.dl.inc.c>
};

/* DObjDesc: EntryDokanDObjDesc @ 0x608 (4 entries) */
DObjDesc dMarioSpecial2_EntryDokanDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMarioSpecial2_Joint_0x03C0_DisplayList, { 0.0f, -21.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMarioSpecial2_Joint_0x04C0_DisplayList, { 0.0f, -104.75826263427734f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x06C0 to 0x0740 (128 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMarioSpecial2_EntryDokanAnimJoint_AnimJoint_0x6CC[];
extern u32 dMarioSpecial2_EntryDokanAnimJoint_AnimJoint_0x6D8[];

AObjEvent32 *dMarioSpecial2_EntryDokanAnimJoint_AnimJoint[3] = {
	NULL,
	(AObjEvent32 *)dMarioSpecial2_EntryDokanAnimJoint_AnimJoint_0x6CC,
	(AObjEvent32 *)dMarioSpecial2_EntryDokanAnimJoint_AnimJoint_0x6D8,
};

u32 dMarioSpecial2_EntryDokanAnimJoint_AnimJoint_0x6CC[] = {
	aobjEvent32SetFlags(0x000, 100),
	aobjEvent32SetFlags(0x002, 20),
	aobjEvent32End(),
};

u32 dMarioSpecial2_EntryDokanAnimJoint_AnimJoint_0x6D8[] = {
	aobjEvent32SetVal(0x120, 0),
	    0x41674408,  /* 14.454109191894531f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfter(0x2D0, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x120, 7),
	    0x41674408,  /* 14.454109191894531f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal(0x100, 86),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x020, 18),
	    0x43A08006,  /* 321.00018310546875f */
	aobjEvent32SetValBlock(0x020, 50),
	    0x43A08006,  /* 321.00018310546875f */
	aobjEvent32SetValBlock(0x020, 18),
	    0x41674410,  /* 14.454116821289062f */
	aobjEvent32SetVal(0x020, 27),
	    0x41674410,  /* 14.454116821289062f */
	aobjEvent32SetValBlock(0x100, 7),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x100, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
