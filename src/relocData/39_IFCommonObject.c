/* relocData file 39: IFCommonObject — orphaned interface geometry
 * file. No code path in src/ references ll*IFCommonObject beyond its
 * FileID extern, but the binary still decodes cleanly into typed
 * blocks: 223 shared vertices, 9 F3DEX2 display lists, a 10-entry
 * DObjDesc joint hierarchy, and an AnimJoint companion of 9 chain
 * pointers + 8 per-joint AObjEvent32 idle scripts.
 *
 * Block boundaries came from walking the F3DEX2 stream: Vtx pool ends
 * where the last SPVertex target lands (0x0DF0, 223 × 16 bytes), DL
 * region runs from there until the last `gsSPEndDisplayList()` at
 * 0x3BB8, and the DObjDesc array follows up to its DOBJ_ARRAY_MAX (18)
 * terminator at 0x3D68. The AnimJoint runs from 0x3D78 to the end of
 * the file at 0x3FE0. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Shared Vtx pool referenced by every DL below. 223 vertices @ 16 B. */
Vtx dIFCommonObject_Vtx_pool[223] = {
	#include <IFCommonObject/Vtx_pool.vtx.inc.c>
};

/* Gfx DL: DL_0x0DF0 @ 0xDF0 (9 cmds) */
Gfx dIFCommonObject_DL_0x0DF0[9] = {
	#include <IFCommonObject/DL_0x0DF0.dl.inc.c>
};

/* Gfx DL: DL_0x0E38 @ 0xE38 (88 cmds) */
Gfx dIFCommonObject_DL_0x0E38[88] = {
	#include <IFCommonObject/DL_0x0E38.dl.inc.c>
};

/* Gfx DL: DL_0x10F8 @ 0x10F8 (333 cmds) */
Gfx dIFCommonObject_DL_0x10F8[333] = {
	#include <IFCommonObject/DL_0x10F8.dl.inc.c>
};

/* Gfx DL: DL_0x1B60 @ 0x1B60 (331 cmds) */
Gfx dIFCommonObject_DL_0x1B60[331] = {
	#include <IFCommonObject/DL_0x1B60.dl.inc.c>
};

/* Gfx DL: DL_0x25B8 @ 0x25B8 (80 cmds) */
Gfx dIFCommonObject_DL_0x25B8[80] = {
	#include <IFCommonObject/DL_0x25B8.dl.inc.c>
};

/* Gfx DL: DL_0x2838 @ 0x2838 (210 cmds) */
Gfx dIFCommonObject_DL_0x2838[210] = {
	#include <IFCommonObject/DL_0x2838.dl.inc.c>
};

/* Gfx DL: DL_0x2EC8 @ 0x2EC8 (211 cmds) */
Gfx dIFCommonObject_DL_0x2EC8[211] = {
	#include <IFCommonObject/DL_0x2EC8.dl.inc.c>
};

/* Gfx DL: DL_0x3560 @ 0x3560 (92 cmds) */
Gfx dIFCommonObject_DL_0x3560[92] = {
	#include <IFCommonObject/DL_0x3560.dl.inc.c>
};

/* Gfx DL: DL_0x3840 @ 0x3840 (112 cmds) */
Gfx dIFCommonObject_DL_0x3840[112] = {
	#include <IFCommonObject/DL_0x3840.dl.inc.c>
};

/* 10-entry DObjDesc joint tree @ 0x03BC0, ending with a DOBJ_ARRAY_MAX
 * (18) terminator so the lbCommon loop in gcSetupCustomDObjs stops. */
DObjDesc dIFCommonObject_DObjDesc_joints[10] = {
	{ 0,  (void*)0x00000000,             { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x0DF0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x10F8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x1B60, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x25B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x2838, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x2EC8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x3560, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,  (void*)dIFCommonObject_DL_0x3840, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000,             { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

extern u32 dIFCommonObject_AnimJoint_0x3D9C[];
extern u32 dIFCommonObject_AnimJoint_0x3DD0[];
extern u32 dIFCommonObject_AnimJoint_0x3E1C[];
extern u32 dIFCommonObject_AnimJoint_0x3E8C[];
extern u32 dIFCommonObject_AnimJoint_0x3EC8[];
extern u32 dIFCommonObject_AnimJoint_0x3F20[];
extern u32 dIFCommonObject_AnimJoint_0x3F5C[];
extern u32 dIFCommonObject_AnimJoint_0x3F98[];

AObjEvent32 *dIFCommonObject_AnimJoint[9] = {
	NULL,  /* root joint: no animation */
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3D9C,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3DD0,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3E1C,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3E8C,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3EC8,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3F20,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3F5C,
	(AObjEvent32 *)dIFCommonObject_AnimJoint_0x3F98,
};

/* Script 1 (joint with DL_0x0DF0): idle Y-drop bob. */
u32 dIFCommonObject_AnimJoint_0x3D9C[] = {
	aobjEvent32SetVal(0x020, 0),  /* TraY */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x050, 0),  /* TraX|TraZ */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 31),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x020, 16),
	    0xC3960000,  /* -300.0f */
	aobjEvent32SetValBlock(0x020, 80),
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3D9C),
};

/* Script 2 (joint with DL_0x10F8): idle bob + RotZ pi/2. */
u32 dIFCommonObject_AnimJoint_0x3DD0[] = {
	aobjEvent32SetVal(0x024, 0),  /* RotZ|TraY */
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValAfter(0x053, 0),  /* RotX|RotY|TraX|TraZ */
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x024, 39),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x024, 16),
	    0x3FC90FDB,  /* 1.5707963705062866f (pi/2) */
	    0xC3960000,  /* -300.0f */
	aobjEvent32SetValBlock(0x024, 72),
	    0x3FC90FDB,
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3DD0),
};

/* Script 3 (joint with DL_0x1B60): idle bob + uniform scale-down to
 * 0.5x while dropping. */
u32 dIFCommonObject_AnimJoint_0x3E1C[] = {
	aobjEvent32SetVal(0x3A0, 0),  /* TraY|ScaX|ScaY|ScaZ */
	    0x00000000,
	    0x3F800000,  /* 1.0f */
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfter(0x050, 0),  /* TraX|TraZ */
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal(0x380, 47),  /* ScaX|ScaY|ScaZ */
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x020, 31),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 16),
	    0x00000000,
	aobjEvent32SetValBlock(0x3A0, 16),
	    0xC3960000,
	    0x3F000000,  /* 0.5f */
	    0x3F000000,
	    0x3F000000,
	aobjEvent32SetValBlock(0x3A0, 64),
	    0xC3960000,
	    0x3F000000,
	    0x3F000000,
	    0x3F000000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3E1C),
};

/* Script 4 (joint with DL_0x25B8): idle bob. */
u32 dIFCommonObject_AnimJoint_0x3E8C[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x00000000,
	aobjEvent32SetValAfter(0x050, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 31),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 24),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 16),
	    0xC3960000,
	aobjEvent32SetValBlock(0x020, 56),
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3E8C),
};

/* Script 5 (joint with DL_0x2838): idle bob + RotY pi. */
u32 dIFCommonObject_AnimJoint_0x3EC8[] = {
	aobjEvent32SetVal(0x022, 0),  /* RotY|TraY */
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValAfter(0x055, 0),  /* RotX|RotZ|TraX|TraZ */
	    0x00000000,
	    0x00000000,
	    0x00000000,
	    0x00000000,
	aobjEvent32SetVal(0x002, 63),  /* RotY */
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 31),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 32),
	    0x00000000,
	aobjEvent32SetValBlock(0x022, 16),
	    0x40490FDB,  /* 3.1415927410125732f (pi) */
	    0xC3960000,
	aobjEvent32SetValBlock(0x022, 48),
	    0x40490FDB,
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3EC8),
};

/* Script 6 (joint with DL_0x2EC8): idle bob. */
u32 dIFCommonObject_AnimJoint_0x3F20[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x00000000,
	aobjEvent32SetValAfter(0x050, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 63),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 8),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 16),
	    0xC3960000,
	aobjEvent32SetValBlock(0x020, 40),
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3F20),
};

/* Script 7 (joint with DL_0x3560): idle bob. */
u32 dIFCommonObject_AnimJoint_0x3F5C[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x00000000,
	aobjEvent32SetValAfter(0x050, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 31),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 48),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 16),
	    0xC3960000,
	aobjEvent32SetValBlock(0x020, 32),
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3F5C),
};

/* Script 8 (joint with DL_0x3840): idle bob. */
u32 dIFCommonObject_AnimJoint_0x3F98[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x00000000,
	aobjEvent32SetValAfter(0x050, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 39),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 48),
	    0x00000000,
	aobjEvent32SetValBlock(0x020, 16),
	    0xC3960000,
	aobjEvent32SetValBlock(0x020, 24),
	    0xC3960000,
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dIFCommonObject_AnimJoint_0x3F98),
};
