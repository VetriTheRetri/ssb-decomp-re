/* relocData file 63: MVOpeningRoomTransition */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls for the orphan AObjEvent32 scripts (defined later) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Vtx dMVOpeningRoomTransition_Vtx_0x0740_Vtx[];
extern Vtx dMVOpeningRoomTransition_Vtx_0x0940_Vtx[];
extern Vtx dMVOpeningRoomTransition_Vtx_0x0960_Vtx[];
extern Vtx dMVOpeningRoomTransition_Vtx_0x0B20_Vtx[];
extern Vtx dMVOpeningRoomTransition_Vtx_0x0D00_Vtx[];
extern Vtx dMVOpeningRoomTransition_Vtx_0x0D20_Vtx[];
extern Vtx dMVOpeningRoomTransition_Vtx_0x0EE0_Vtx[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_Vtx[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x1A0[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x3A0[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x3B0[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x3C0[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x520[];
extern Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x550[];
extern Vtx dMVOpeningRoomTransition_gap_0x00B0_Vtx[];
extern u32 dMVOpeningRoomTransition_gap_0x0000_sub_0x84[];
extern u32 dMVOpeningRoomTransition_gap_0x0000_sub_0x174[];

/* Raw data from file offset 0x0000 to 0x05A0 (1440 bytes) */
/* Orphan model #1 at 0x0000: Vtx[3] + Gfx DL[10] + AObjEvent32* (4 B trailing slot).
 * The Vtx data, the gsSPVertex that targets it, and the gsSPEndDisplayList are
 * all self-contained inside the 132-byte block; the trailing pointer is then
 * picked up by .reloc as a chain reference to its associated AnimJoint script. */
Vtx dMVOpeningRoomTransition_gap_0x0000_Vtx[3] = {
	#include <MVOpeningRoomTransition/gap_0x0000_Vtx.vtx.inc.c>
};

Gfx dMVOpeningRoomTransition_gap_0x0030_DL[10] = {
	#include <MVOpeningRoomTransition/gap_0x0030_DL.dl.inc.c>
};

AObjEvent32 *dMVOpeningRoomTransition_gap_0x0080_AnimJointPtr[1] = {
	(AObjEvent32 *)dMVOpeningRoomTransition_gap_0x0000_sub_0x84,
};

/* Orphan AObjEvent32 script for model #1 @ 0x0084 (9 words + 8-byte trailing PAD).
 * Same opcode shape as Outline_AnimJoint: 2 × SetVal0RateBlock(ScaXYZ) + End. */
u32 dMVOpeningRoomTransition_gap_0x0000_sub_0x84[9] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 40),
	    0x42100000,  /* 36.0f */
	    0x42100000,  /* 36.0f */
	    0x42100000,  /* 36.0f */
	aobjEvent32End(),
};

PAD(8);

/* Orphan model #2 at 0x00B0: Vtx[6] + Gfx DL[12] + AObjEvent32* (4 B trailing slot). */
Vtx dMVOpeningRoomTransition_gap_0x00B0_Vtx[6] = {
	#include <MVOpeningRoomTransition/gap_0x00B0_Vtx.vtx.inc.c>
};

Gfx dMVOpeningRoomTransition_gap_0x0110_DL[12] = {
	#include <MVOpeningRoomTransition/gap_0x0110_DL.dl.inc.c>
};

AObjEvent32 *dMVOpeningRoomTransition_gap_0x0170_AnimJointPtr[1] = {
	(AObjEvent32 *)dMVOpeningRoomTransition_gap_0x0000_sub_0x174,
};

/* Orphan AObjEvent32 script for model #2 @ 0x0174 (identical content to sub_0x84). */
u32 dMVOpeningRoomTransition_gap_0x0000_sub_0x174[9] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 40),
	    0x42100000,  /* 36.0f */
	    0x42100000,  /* 36.0f */
	    0x42100000,  /* 36.0f */
	aobjEvent32End(),
};

PAD(8);

/* gap sub-block @ 0x01A0 (was gap+0x1A0, 512 bytes) */
Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x1A0[32] = {
	#include <MVOpeningRoomTransition/gap_0x0000_sub_0x1A0.vtx.inc.c>
};

/* gap sub-block @ 0x03A0 (was gap+0x3A0, 16 bytes) */
Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x3A0[1] = {
	#include <MVOpeningRoomTransition/gap_0x0000_sub_0x3A0.vtx.inc.c>
};

/* gap sub-block @ 0x03B0 (was gap+0x3B0, 16 bytes) */
Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x3B0[1] = {
	#include <MVOpeningRoomTransition/gap_0x0000_sub_0x3B0.vtx.inc.c>
};

/* gap sub-block @ 0x03C0 (was gap+0x3C0, 352 bytes) */
Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x3C0[22] = {
	#include <MVOpeningRoomTransition/gap_0x0000_sub_0x3C0.vtx.inc.c>
};

/* gap sub-block @ 0x0520 (was gap+0x520, 48 bytes) */
Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x520[3] = {
	#include <MVOpeningRoomTransition/gap_0x0000_sub_0x520.vtx.inc.c>
};

/* gap sub-block @ 0x0550 (was gap+0x550, 80 bytes) */
Vtx dMVOpeningRoomTransition_gap_0x0000_sub_0x550[5] = {
	#include <MVOpeningRoomTransition/gap_0x0000_sub_0x550.vtx.inc.c>
};

/* DisplayList: Overlay @ 0x5A0 (360 bytes) */
Gfx dMVOpeningRoomTransition_Overlay_DisplayList[45] = {
	#include <MVOpeningRoomTransition/Overlay.dl.inc.c>
};

extern u32 dMVOpeningRoomTransition_Overlay_AnimJoint[];

/* 8-byte alignment pad + chain-pointer slot to Overlay_AnimJoint
 * (`&llMVOpeningRoomTransitionOverlayAnimJoint` resolves to +0x8). */
PAD(8);
AObjEvent32 *dMVOpeningRoomTransition_Overlay_AnimJoint_ptr[1] = {
	(AObjEvent32 *)dMVOpeningRoomTransition_Overlay_AnimJoint,
};

/* AObjEvent32 script @ 0x0714 (9 words, 36 B). Was previously typed as
 * `u32 [523]` which lumped 7 trailing Vtx arrays into the same block; those
 * are now split out below. The Outline DL references them via .reloc. */
u32 dMVOpeningRoomTransition_Overlay_AnimJoint[9] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3D4CCCCD,  /* 0.05000000074505806f */
	    0x3D4CCCCD,  /* 0.05000000074505806f */
	    0x3D4CCCCD,  /* 0.05000000074505806f */
	aobjEvent32SetVal0RateBlock(0x380, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

PAD(8);

/* 7 Vtx arrays loaded by Outline_DisplayList (was inlined into Overlay_AnimJoint).
 * Span 0x0740..0xF40 (2048 B = 128 Vtx total). */
Vtx dMVOpeningRoomTransition_Vtx_0x0740_Vtx[32] = {
	#include <MVOpeningRoomTransition/Vtx_0x0740.vtx.inc.c>
};

Vtx dMVOpeningRoomTransition_Vtx_0x0940_Vtx[2] = {
	#include <MVOpeningRoomTransition/Vtx_0x0940.vtx.inc.c>
};

Vtx dMVOpeningRoomTransition_Vtx_0x0960_Vtx[28] = {
	#include <MVOpeningRoomTransition/Vtx_0x0960.vtx.inc.c>
};

Vtx dMVOpeningRoomTransition_Vtx_0x0B20_Vtx[30] = {
	#include <MVOpeningRoomTransition/Vtx_0x0B20.vtx.inc.c>
};

Vtx dMVOpeningRoomTransition_Vtx_0x0D00_Vtx[2] = {
	#include <MVOpeningRoomTransition/Vtx_0x0D00.vtx.inc.c>
};

Vtx dMVOpeningRoomTransition_Vtx_0x0D20_Vtx[28] = {
	#include <MVOpeningRoomTransition/Vtx_0x0D20.vtx.inc.c>
};

Vtx dMVOpeningRoomTransition_Vtx_0x0EE0_Vtx[6] = {
	#include <MVOpeningRoomTransition/Vtx_0x0EE0.vtx.inc.c>
};

/* placeholder so I can use sed to delete the leftover inline u32 data */

/* DisplayList: Outline @ 0xF40 (632 bytes) */
Gfx dMVOpeningRoomTransition_Outline_DisplayList[79] = {
	#include <MVOpeningRoomTransition/Outline.dl.inc.c>
};

extern u32 dMVOpeningRoomTransition_Outline_AnimJoint[];

/* 8-byte alignment pad + chain-pointer slot to Outline_AnimJoint
 * (`&llMVOpeningRoomTransitionOutlineAnimJoint` resolves to +0x8). */
PAD(8);
AObjEvent32 *dMVOpeningRoomTransition_Outline_AnimJoint_ptr[1] = {
	(AObjEvent32 *)dMVOpeningRoomTransition_Outline_AnimJoint,
};

/* Raw data from file offset 0x11C4 to 0x11F0 (44 bytes) */
u32 dMVOpeningRoomTransition_Outline_AnimJoint[9] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3D4CCCCD,  /* 0.05000000074505806f */
	    0x3D4CCCCD,  /* 0.05000000074505806f */
	    0x3D4CCCCD,  /* 0.05000000074505806f */
	aobjEvent32SetVal0RateBlock(0x380, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};
