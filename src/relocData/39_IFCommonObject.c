/* relocData file 39: IFCommonObject — orphaned interface geometry
 * file. No code path in src/ references ll*IFCommonObject beyond its
 * FileID extern, but the binary still decodes cleanly into typed
 * blocks: 223 shared vertices, 9 F3DEX2 display lists, a 10-entry
 * DObjDesc joint hierarchy, and a 616-byte tail blob that's probably
 * an AnimJoint / MatAnimJoint companion used by the missing loader.
 *
 * Block boundaries came from walking the F3DEX2 stream: Vtx pool ends
 * where the last SPVertex target lands (0x0DF0, 223 × 16 bytes), DL
 * region runs from there until the last `gsSPEndDisplayList()` at
 * 0x3BB8, and the DObjDesc array follows up to its DOBJ_ARRAY_MAX (18)
 * terminator at 0x3D68. */

#include "relocdata_types.h"

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

/* Unidentified tail region @ 0x03D78..0x03FE0 (616 bytes). Looks like
 * a mix of F3DEX2-like words and AObjEvent records; without the
 * loader we can't say whether it's an AnimJoint / MatAnimJoint /
 * companion DL list. Kept as raw bytes for now. */
u8 dIFCommonObject_tail_0x3D78[0x268] = {
	#include <IFCommonObject/tail_0x3D78.data.inc.c>
};
