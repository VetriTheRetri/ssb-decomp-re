/* relocData file 156: StageCastleFile3 — Castle stage AnimJoint root.
 *
 * Tiny 64-byte file: a single-pointer joint-root table at +0x00 (chain head)
 * whose entry points to the 48-byte AObjEvent32 script at +0x04. The script
 * loops back to itself via the SetAnim opcode's chain-encoded payload at
 * +0x30. Both chain slots are intern; the chain start/encoding is described
 * in 156_StageCastleFile3.reloc.
 *
 * Externally, file 259 (GRCastleMap)'s `header.item_weights` proxy at
 * +0x80 references this file's `AnimJointRoot` symbol (target offset 0).
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

extern u32 dStageCastleFile3_AnimJoint_0x0004[12];

/* Anim-joint root @ 0x0000 — single AObjEvent32* table pointing at the
 * script body. fixRelocChain rewrites this slot to the chain encoding
 * `(next<<16)|target` at link time. */
AObjEvent32 *dStageCastleFile3_AnimJointRoot[1] = {
	(AObjEvent32 *)dStageCastleFile3_AnimJoint_0x0004,
};

/* AObjEvent32 script @ 0x0004 — Castle stage anim joint, 12 words.
 * SetValBlock×5 ramp on track 4 (TraX) animating the platform sweep,
 * then SetAnim loopback to script start. */
u32 dStageCastleFile3_AnimJoint_0x0004[12] = {
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 599),
	    0xC4834000,  /* -1050.0f */
	aobjEvent32SetValBlock(0x010, 1200),
	    0x44834000,  /* 1050.0f */
	aobjEvent32SetValBlock(0x010, 600),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 2400),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageCastleFile3_AnimJoint_0x0004,
};

/* Trailing 12 bytes of zero padding — section-aligned tail in the
 * baserom binary; not part of any reachable structure. */
PAD(12);
