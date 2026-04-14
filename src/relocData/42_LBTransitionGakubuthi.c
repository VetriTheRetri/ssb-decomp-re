/* relocData file 42: LBTransitionGakubuthi */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0F98 (3992 bytes) */
u8 dLBTransitionGakubuthi_gap_0x0000[3992] = {
	#include <LBTransitionGakubuthi/gap_0x0000.data.inc.c>
};

/* DObjDesc: - @ 0xF98 (3 entries) */
DObjDesc dLBTransitionGakubuthi_DObjDesc_0x0F98[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dLBTransitionGakubuthi_gap_0x0000 + 0x5A0), { 1500.0f, -1500.0f, 0.0f }, { 0.0f, 0.0f, 0.8744099736213684f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x101C to 0x10E0 (196 bytes) */
u8 dLBTransitionGakubuthi_AnimJoint_0x101C[196] = {
	#include <LBTransitionGakubuthi/AnimJoint_0x101C.data.inc.c>
};

