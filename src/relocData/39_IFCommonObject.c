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

/* DL 0: 0x00DF0..0x00E38 (72 bytes). */
u8 dIFCommonObject_DL_0x0DF0[0x48] = {
	#include <IFCommonObject/DL_0x0DF0.data.inc.c>
};

/* DL 1: 0x00E38..0x010F8 (704 bytes). */
u8 dIFCommonObject_DL_0x0E38[0x2C0] = {
	#include <IFCommonObject/DL_0x0E38.data.inc.c>
};

/* DL 2: 0x010F8..0x01B60 (2664 bytes). */
u8 dIFCommonObject_DL_0x10F8[0xA68] = {
	#include <IFCommonObject/DL_0x10F8.data.inc.c>
};

/* DL 3: 0x01B60..0x025B8 (2648 bytes). */
u8 dIFCommonObject_DL_0x1B60[0xA58] = {
	#include <IFCommonObject/DL_0x1B60.data.inc.c>
};

/* DL 4: 0x025B8..0x02838 (640 bytes). */
u8 dIFCommonObject_DL_0x25B8[0x280] = {
	#include <IFCommonObject/DL_0x25B8.data.inc.c>
};

/* DL 5: 0x02838..0x02EC8 (1680 bytes). */
u8 dIFCommonObject_DL_0x2838[0x690] = {
	#include <IFCommonObject/DL_0x2838.data.inc.c>
};

/* DL 6: 0x02EC8..0x03560 (1688 bytes). */
u8 dIFCommonObject_DL_0x2EC8[0x698] = {
	#include <IFCommonObject/DL_0x2EC8.data.inc.c>
};

/* DL 7: 0x03560..0x03840 (736 bytes). */
u8 dIFCommonObject_DL_0x3560[0x2E0] = {
	#include <IFCommonObject/DL_0x3560.data.inc.c>
};

/* DL 8: 0x03840..0x03BC0 (896 bytes). */
u8 dIFCommonObject_DL_0x3840[0x380] = {
	#include <IFCommonObject/DL_0x3840.data.inc.c>
};

/* 10-entry DObjDesc joint tree @ 0x03BC0, ending with a DOBJ_ARRAY_MAX
 * (18) terminator so the lbCommon loop in gcSetupCustomDObjs stops. */
u8 dIFCommonObject_DObjDesc_joints[0x1B8] = {
	#include <IFCommonObject/DObjDesc_joints.data.inc.c>
};

/* Unidentified tail region @ 0x03D78..0x03FE0 (616 bytes). Looks like
 * a mix of F3DEX2-like words and AObjEvent records; without the
 * loader we can't say whether it's an AnimJoint / MatAnimJoint /
 * companion DL list. Kept as raw bytes for now. */
u8 dIFCommonObject_tail_0x3D78[0x268] = {
	#include <IFCommonObject/tail_0x3D78.data.inc.c>
};
