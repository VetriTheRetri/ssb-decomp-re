/* relocData file 44: LBTransitionStar */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Vtx: data_0x0000 @ 0x0 (307 vertices) */
Vtx dLBTransitionStar_data_0x0000[307] = {
	#include <LBTransitionStar/data_0x0000.vtx.inc.c>
};

/* @ 0x1330, 4384 bytes — Gfx[548] DL */
Gfx dLBTransitionStar_DL_0x1330[548] = {
	#include <LBTransitionStar/DL_0x1330.data.inc.c>
};

/* DObjDesc: - @ 0x2450 (3 entries) */
DObjDesc dLBTransitionStar_DObjDesc_0x2450[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionStar_DL_0x1330, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x24D4 to 0x2520 (76 bytes) */
u8 dLBTransitionStar_AnimJoint_0x24D4[76] = {
	#include <LBTransitionStar/AnimJoint_0x24D4.data.inc.c>
};

