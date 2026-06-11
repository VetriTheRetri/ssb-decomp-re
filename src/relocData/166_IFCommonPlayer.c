/* relocData file 166: IFCommonPlayer */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0030 (48 bytes) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Vtx dIFCommonPlayer_Magnify_Vtx[];
extern Vtx dIFCommonPlayer_gap_0x0000[];
Vtx dIFCommonPlayer_gap_0x0000[3] = {
	#include <IFCommonPlayer/gap_0x0000.vtx.inc.c>
};

/* DisplayList: Magnify @ 0x30 (72 bytes) */
Gfx dIFCommonPlayer_Magnify_DisplayList[9] = {
	#include <IFCommonPlayer/Magnify.dl.inc.c>
};

/* @ 0x0078, 8 bytes (raw gap) */
PAD(8);

/* @ 0x0080, 48 bytes - Vtx[3] shared by the three arrow DLs */
Vtx dIFCommonPlayer_Magnify_Vtx[3] = {
	#include <IFCommonPlayer/dIFCommonPlayer_Magnify_Vtx.vtx.inc.c>
};

/* @ 0x00B0, 72 bytes - Gfx[9] arrow DL 0 */
Gfx dIFCommonPlayer_Magnify_DL0[9] = {
	#include <IFCommonPlayer/dIFCommonPlayer_Magnify_DL0.dl.inc.c>
};

/* @ 0x00F8, 72 bytes - Gfx[9] arrow DL 1 */
Gfx dIFCommonPlayer_Magnify_DL1[9] = {
	#include <IFCommonPlayer/dIFCommonPlayer_Magnify_DL1.dl.inc.c>
};

/* @ 0x0140, 72 bytes - Gfx[9] arrow DL 2 */
Gfx dIFCommonPlayer_Magnify_DL2[9] = {
	#include <IFCommonPlayer/dIFCommonPlayer_Magnify_DL2.dl.inc.c>
};

/* DObjDesc: Arrows @ 0x188 (5 entries) */
DObjDesc dIFCommonPlayer_Arrows[] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dIFCommonPlayer_Magnify_DL0, { 5.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dIFCommonPlayer_Magnify_DL1, { 16.000001907348633f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dIFCommonPlayer_Magnify_DL2, { 27.000003814697266f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

extern u32 dIFCommonPlayer_Arrows_AnimJoint_0x0280[5];
extern u32 dIFCommonPlayer_Arrows_AnimJoint_0x0294[5];
extern u32 dIFCommonPlayer_Arrows_AnimJoint_0x02A8[4];

/* @ 0x0270 — joint anim table (4 entries: one per DObj in dIFCommonPlayer_Arrows).
 * Consumed by gcAddAnimJointAll() as AObjEvent32** -- one script ptr per DObj
 * walked by gcGetTreeDObjNext(). Root joint has no anim. */
AObjEvent32 *dIFCommonPlayer_Arrows_AnimJoint[4] = {
	NULL,
	(AObjEvent32 *)dIFCommonPlayer_Arrows_AnimJoint_0x0280,
	(AObjEvent32 *)dIFCommonPlayer_Arrows_AnimJoint_0x0294,
	(AObjEvent32 *)dIFCommonPlayer_Arrows_AnimJoint_0x02A8,
};

/* @ 0x0280 — AObjEvent32 script for joint 1 (DL0) */
u32 dIFCommonPlayer_Arrows_AnimJoint_0x0280[5] = {
	aobjEvent32SetFlags(0x000, 3),
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetFlags(0x000, 1),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dIFCommonPlayer_Arrows_AnimJoint_0x0280,
};

/* @ 0x0294 — AObjEvent32 script for joint 2 (DL1) */
u32 dIFCommonPlayer_Arrows_AnimJoint_0x0294[5] = {
	aobjEvent32SetFlags(0x002, 2),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetFlags(0x002, 3),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dIFCommonPlayer_Arrows_AnimJoint_0x0294,
};

/* @ 0x02A8 — AObjEvent32 script for joint 3 (DL2) */
u32 dIFCommonPlayer_Arrows_AnimJoint_0x02A8[4] = {
	aobjEvent32SetFlags(0x002, 5),
	aobjEvent32SetFlags(0x000, 4),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dIFCommonPlayer_Arrows_AnimJoint_0x02A8,
};

PAD(8);

Gfx dIFCommonPlayer_Arrows_EmptyDL[1] = {
	gsSPEndDisplayList(),
};

/* Raw data from file offset 0x02C8 to 0x03D0 (264 bytes) */
/* @tex fmt=IA8 dim=16x16 */
u8 dIFCommonPlayer_MagnifyFrame_Image[264] = {
	#include <IFCommonPlayer/MagnifyFrame_Image.tex.inc.c>
};

