/* relocData file 42: LBTransitionGakubuthi */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Raw data from file offset 0x0000 to 0x0F98 (3992 bytes) */
/* Vtx: Vtx_0x0000_Vtx @ 0x0 (90 vertices) */
Vtx dLBTransitionGakubuthi_Vtx_0x0000_Vtx[90] = {
	#include <LBTransitionGakubuthi/Vtx_0x0000.vtx.inc.c>
};

/* gap sub-block @ 0x05A0 (was gap+0x5A0, 2552 bytes) */
Gfx dLBTransitionGakubuthi_DL_0x05A0[319] = {
	#include <LBTransitionGakubuthi/DL_0x05A0.dl.inc.c>
};

/* DObjDesc: - @ 0xF98 (3 entries) */
DObjDesc dLBTransitionGakubuthi_DObjDesc_0x0F98[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dLBTransitionGakubuthi_Vtx_0x0000_Vtx + 0x5A0), { 1500.0f, -1500.0f, 0.0f }, { 0.0f, 0.0f, 0.8744099736213684f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x101C to 0x10E0 (196 bytes) */
u32 dLBTransitionGakubuthi_AnimJoint_0x101C[49] = {
	aobjEvent32End(),
	(u32)((u8*)dLBTransitionGakubuthi_AnimJoint_0x101C + 0x8),
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,
	    0xB8A56F24,
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x44898000,
	aobjEvent32SetVal0Rate(0x020, 27),
	    0x44898000,
	aobjEvent32SetValRateBlock(0x004, 12),
	    0x3F5BCEF3,
	    0x3DEFAE30,
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3FC89D79,
	    0xB8AF1E8A,
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3F5FD954,
	    0xBDC61550,
	aobjEvent32SetValRate(0x004, 7),
	    0x3EEF7CB3,
	    0xB8E2EE5E,
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 19),
	    0x44898000,
	    0xBC7CDC17,
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3F43B345,
	    0x3D5820EA,
	aobjEvent32SetValRate(0x004, 8),
	    0x3F45EF2E,
	    0xBD8688A3,
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 14),
	    0xC4BB8000,
	    0xC3F12E45,
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x004, 6),
	    0x3F47B8B6,
	    0x3D6596C2,
	aobjEvent32SetValRateBlock(0x004, 4),
	    0x3F5FD954,
	    0xB8EE34EB,
	aobjEvent32SetVal(0x004, 6),
	    0x3F5FD954,
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x020, 4),
	    0xC4BB8000,
	aobjEvent32End(),
};

