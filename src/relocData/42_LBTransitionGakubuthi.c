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
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dLBTransitionGakubuthi_AnimJoint_0x1024[];

AObjEvent32 *dLBTransitionGakubuthi_AnimJoint_0x101C[2] = {
	NULL,
	(AObjEvent32 *)dLBTransitionGakubuthi_AnimJoint_0x1024,
};

u32 dLBTransitionGakubuthi_AnimJoint_0x1024[] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0xB8A56F24,  /* -7.888514664955437e-05f */
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x44898000,  /* 1100.0f */
	aobjEvent32SetVal0Rate(0x020, 27),
	    0x44898000,  /* 1100.0f */
	aobjEvent32SetValRateBlock(0x004, 12),
	    0x3F5BCEF3,  /* 0.8586265444755554f */
	    0x3DEFAE30,  /* 0.11703145503997803f */
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3FC89D79,  /* 1.5673056840896606f */
	    0xB8AF1E8A,  /* -8.350338612217456e-05f */
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3F5FD954,  /* 0.8744099140167236f */
	    0xBDC61550,  /* -0.09672033786773682f */
	aobjEvent32SetValRate(0x004, 7),
	    0x3EEF7CB3,  /* 0.4677482545375824f */
	    0xB8E2EE5E,  /* -0.00010820919123943895f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 19),
	    0x44898000,  /* 1100.0f */
	    0xBC7CDC17,  /* -0.01543333288282156f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3F43B345,  /* 0.764454185962677f */
	    0x3D5820EA,  /* 0.05276576429605484f */
	aobjEvent32SetValRate(0x004, 8),
	    0x3F45EF2E,  /* 0.7731808423995972f */
	    0xBD8688A3,  /* -0.0656903013586998f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRate(0x020, 14),
	    0xC4BB8000,  /* -1500.0f */
	    0xC3F12E45,  /* -482.3614807128906f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x004, 6),
	    0x3F47B8B6,  /* 0.7801622152328491f */
	    0x3D6596C2,  /* 0.05605197697877884f */
	aobjEvent32SetValRateBlock(0x004, 4),
	    0x3F5FD954,  /* 0.8744099140167236f */
	    0xB8EE34EB,  /* -0.00011358581105014309f */
	aobjEvent32SetVal(0x004, 6),
	    0x3F5FD954,  /* 0.8744099140167236f */
	aobjEvent32Wait(2),
	aobjEvent32SetValBlock(0x020, 4),
	    0xC4BB8000,  /* -1500.0f */
	aobjEvent32End(),
};

