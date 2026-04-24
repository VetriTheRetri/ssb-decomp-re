/* relocData file 47: LBTransitionPaperAirplane */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Vtx: Vtx_0x0000_Vtx @ 0x0 (90 vertices) */
Vtx dLBTransitionPaperAirplane_Vtx_0x0000_Vtx[90] = {
	#include <LBTransitionPaperAirplane/Vtx_0x0000.vtx.inc.c>
};

/* @ 0x05A0, 2552 bytes — Gfx[319] DL */
Gfx dLBTransitionPaperAirplane_DL_0x05A0[319] = {
	#include <LBTransitionPaperAirplane/DL_0x05A0.data.inc.c>
};

/* DObjDesc: - @ 0xF98 (3 entries) */
DObjDesc dLBTransitionPaperAirplane_DObjDesc_0x0F98[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dLBTransitionPaperAirplane_DL_0x05A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x101C to 0x1050 (52 bytes) */
u8 dLBTransitionPaperAirplane_AnimJoint_0x101C[52] = {
	#include <LBTransitionPaperAirplane/AnimJoint_0x101C.data.inc.c>
};

