/* relocData file 84: EFCommonEffects2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward DObjDesc chain-target decls for fixRelocChain.py */
extern u8 dEFCommonEffects2_gap_0x4F34_sub_0x14C[];
extern u8 dEFCommonEffects2_gap_0x6B6C_sub_0x74[];

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dEFCommonEffects2_gap_0x1F18[];

/* Raw data from file offset 0x0000 to 0x1428 (5160 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dEFCommonEffects2_gap_0x0000[8] = {
	#include <EFCommonEffects2/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x8[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0410 (was gap+0x410, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x410[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x410.data.inc.c>
};

/* gap sub-block @ 0x0818 (was gap+0x818, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x818[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x818.data.inc.c>
};

/* gap sub-block @ 0x0C20 (was gap+0xC20, 1032 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0xC20[1032] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0xC20.data.inc.c>
};

/* gap sub-block @ 0x1028 (was gap+0x1028, 1024 bytes) */
u8 dEFCommonEffects2_gap_0x0000_sub_0x1028[1024] = {
	#include <EFCommonEffects2/gap_0x0000_sub_0x1028.data.inc.c>
};

/* MObjSub: ShockSmallMObjSub @ 0x1428 */
MObjSub dEFCommonEffects2_ShockSmallMObjSub_MObjSub = {
	0x050B,
	0x05, 0x2E,
	(void**)((u8*)dEFCommonEffects2_gap_0x0000 + 0x1028),
	0x050D, 0x0308, 0x050E, 0x0206,
	84869380,
	6.817868669698895e-36f, 1.4704469383453895e-39f,
	8.182366928797652e-36f, 2.938735877055719e-39f,
	2.938758297831148e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x14A0 to 0x1500 (96 bytes) */
/* gap sub-block @ 0x14A0 (was gap+0x0, 24 bytes) */
u8 dEFCommonEffects2_gap_0x14A0[24] = {
	#include <EFCommonEffects2/gap_0x14A0.data.inc.c>
};

/* gap sub-block @ 0x14B8 (was gap+0x18, 8 bytes) */
u8 dEFCommonEffects2_gap_0x14A0_sub_0x18[8] = {
	#include <EFCommonEffects2/gap_0x14A0_sub_0x18.data.inc.c>
};

/* gap sub-block @ 0x14C0 (was gap+0x20, 64 bytes) */
u8 dEFCommonEffects2_gap_0x14A0_sub_0x20[64] = {
	#include <EFCommonEffects2/gap_0x14A0_sub_0x20.data.inc.c>
};

/* Raw data from file offset 0x1500 to 0x1570 (112 bytes) */
u8 dEFCommonEffects2_gap_0x1500[112] = {
	#include <EFCommonEffects2/gap_0x1500.data.inc.c>
};

/* Raw data from file offset 0x1570 to 0x1EA0 (2352 bytes) */
u32 dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint[588] = {
	#include <EFCommonEffects2/ShockSmallMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* MObjSub: FireSparkMObjSub @ 0x1EA0 */
MObjSub dEFCommonEffects2_FireSparkMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dEFCommonEffects2_gap_0x1F18 + 0x18),
	0x07AB, 0x0728, 0x07AC, 0x06A6,
	128779812,
	2.6334384128055736e-34f, 7.20267410662956e-43f,
	3.069901301975812e-34f, 2.938735877055719e-39f,
	2.938780718606577e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 9.255296097172552e-41f,
	0x00200020,
	{ { 0x00, 0x20, 0x00, 0x20 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x1F18 to 0x1F38 (32 bytes) */
/* gap sub-block @ 0x1F18 (was gap+0x0, 24 bytes) */
u8 dEFCommonEffects2_gap_0x1F18[24] = {
	#include <EFCommonEffects2/gap_0x1F18.data.inc.c>
};

/* gap sub-block @ 0x1F30 (was gap+0x18, 8 bytes) */
u8 dEFCommonEffects2_gap_0x1F18_sub_0x18[8] = {
	#include <EFCommonEffects2/gap_0x1F18_sub_0x18.data.inc.c>
};

/* Vtx: FireSparkVtx @ 0x1F38 (4 vertices) */
Vtx dEFCommonEffects2_FireSparkVtx_Vtx[4] = {
	#include <EFCommonEffects2/FireSparkVtx.vtx.inc.c>
};

/* DisplayList: FireSparkDisplayList @ 0x1F78 (200 bytes) */
Gfx dEFCommonEffects2_FireSparkDisplayList_DisplayList[25] = {
	#include <EFCommonEffects2/FireSparkDisplayList.dl.inc.c>
};

/* DObjDesc: FireSparkDObjDesc @ 0x2040 (3 entries) */
DObjDesc dEFCommonEffects2_FireSparkDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dEFCommonEffects2_FireSparkDisplayList_DisplayList, { 0.0f, -90.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x20D0 to 0x2170 (160 bytes) */
u32 dEFCommonEffects2_FireSparkAnimJoint_AnimJoint[40] = {
	aobjEvent32End(),
	aobjEvent32SetVal(0x0BA, 2102),
	    0x15D00000,
	    0xC2B40000,
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x3A0, 4),
	    0x35700000,
	    0x3F333336,
	    0x3EAF9DBC,
	    0x3F333336,
	aobjEvent32SetValAfter(0x020, 6),
	    0x35700000,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3FF83120,
	    0x3F980487,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F5A68AE,
	    0x3FB7F0FE,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3FD2C3B1,
	    0x3F51B171,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F9E12C6,
	    0x3F80F616,
	    0x3FF83120,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3F1AE973,
	    0x3EFCC3A4,
	    0x3F733A69,
	aobjEvent32SetValAfterBlock(0x380, 1),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Raw data from file offset 0x2170 to 0x22B8 (328 bytes) */
u32 dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint[82] = {
	#include <EFCommonEffects2/FireSparkMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: CatchSwirlDObjDesc @ 0x22B8 (2 entries) */
DObjDesc dEFCommonEffects2_CatchSwirlDObjDesc[] = {
	{ 0, (void*)0x00000000, { 1.0654956302341688e-33f, 1.0715143449813712e-33f, 1.0775330597285737e-33f }, { 2.0708070517321904e-33f, 1.4377322243972623e-42f, 0.0f }, { 2.938735877055719e-39f, 2.938758297831148e-39f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.0f, 1.0f, 0.0f }, { 1.0f, 0.0f, 9.405102750280275e-38f }, { 2.938758297831148e-39f, 2.938758297831148e-39f, 0.0f } },
};

/* Raw data from file offset 0x2310 to 0x2760 (1104 bytes) */
/* gap sub-block @ 0x2310 (was gap+0x0, 56 bytes) */
u8 dEFCommonEffects2_gap_0x2310[56] = {
	#include <EFCommonEffects2/gap_0x2310.data.inc.c>
};

/* gap sub-block @ 0x2348 (was gap+0x38, 120 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x38[120] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x38.data.inc.c>
};

/* gap sub-block @ 0x23C0 (was gap+0xB0, 120 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0xB0[120] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0xB0.data.inc.c>
};

/* gap sub-block @ 0x2438 (was gap+0x128, 120 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x128[120] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x128.data.inc.c>
};

/* gap sub-block @ 0x24B0 (was gap+0x1A0, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1A0[8] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1A0.data.inc.c>
};

/* gap sub-block @ 0x24B8 (was gap+0x1A8, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1A8[8] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1A8.data.inc.c>
};

/* gap sub-block @ 0x24C0 (was gap+0x1B0, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1B0[8] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1B0.data.inc.c>
};

/* gap sub-block @ 0x24C8 (was gap+0x1B8, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1B8[8] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1B8.data.inc.c>
};

/* gap sub-block @ 0x24D0 (was gap+0x1C0, 48 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1C0[48] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1C0.data.inc.c>
};

/* gap sub-block @ 0x2500 (was gap+0x1F0, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x1F0[136] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x1F0.data.inc.c>
};

/* gap sub-block @ 0x2588 (was gap+0x278, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x278[136] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x278.data.inc.c>
};

/* gap sub-block @ 0x2610 (was gap+0x300, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x300[136] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x300.data.inc.c>
};

/* gap sub-block @ 0x2698 (was gap+0x388, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x388[136] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x388.data.inc.c>
};

/* gap sub-block @ 0x2720 (was gap+0x410, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x410[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x410.data.inc.c>
};

/* gap sub-block @ 0x2730 (was gap+0x420, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x420[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x420.data.inc.c>
};

/* gap sub-block @ 0x2740 (was gap+0x430, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x430[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x430.data.inc.c>
};

/* gap sub-block @ 0x2750 (was gap+0x440, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2310_sub_0x440[16] = {
	#include <EFCommonEffects2/gap_0x2310_sub_0x440.data.inc.c>
};

/* MObjSub: CatchSwirlMObjSub @ 0x2760 */
MObjSub dEFCommonEffects2_CatchSwirlMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 1.0f,
	1.0f, 1.0f,
	(void**)0x00000001,
	0x0000,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0000, 0x0000,
	0.0f, 0.0f,
	1.570796012878418f, 0.0f,
	0x3F800000,
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	0x3F, 0x80, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x02 } },
	{ { 0x09, 0xFA, 0x09, 0xC8 } },
	{ { 0x3E, 0x75, 0xC2, 0xD2 } },
	{ { 0x42, 0xE2, 0x2D, 0xCC } },
	-1035033030, 0,
	0, 0,
};

/* Raw data from file offset 0x27D8 to 0x28A0 (200 bytes) */
u8 dEFCommonEffects2_gap_0x27D8[200] = {
	#include <EFCommonEffects2/gap_0x27D8.data.inc.c>
};

/* Raw data from file offset 0x28A0 to 0x2AB0 (528 bytes) */
u32 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint[132] = {
	#include <EFCommonEffects2/CatchSwirlAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x2AB0 to 0x2F78 (1224 bytes) */
u32 dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint[306] = {
	#include <EFCommonEffects2/CatchSwirlMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: ReflectBreakDObjDesc @ 0x2F78 (2 entries) */
DObjDesc dEFCommonEffects2_ReflectBreakDObjDesc[] = {
	{ 0, (void*)0x00000000, { 8.6685267493903e-32f, 8.707046523772395e-32f, 1.4640756278615873e-31f }, { 0.0f, 1.0789998175301091e-42f, 0.0f }, { 2.938735877055719e-39f, 2.9388255601574356e-39f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.0f, 1.0f, 0.0f }, { 1.0f, 0.0f, 4.039338094763389e-28f }, { 2.938780718606577e-39f, 2.9388255601574356e-39f, 0.0f } },
};

/* Raw data from file offset 0x2FD0 to 0x3398 (968 bytes) */
/* gap sub-block @ 0x2FD0 (was gap+0x0, 56 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0[56] = {
	#include <EFCommonEffects2/gap_0x2FD0.data.inc.c>
};

/* gap sub-block @ 0x3008 (was gap+0x38, 120 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x38[120] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x38.data.inc.c>
};

/* gap sub-block @ 0x3080 (was gap+0xB0, 120 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0xB0[120] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0xB0.data.inc.c>
};

/* gap sub-block @ 0x30F8 (was gap+0x128, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x128[8] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x128.data.inc.c>
};

/* gap sub-block @ 0x3100 (was gap+0x130, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x130[8] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x130.data.inc.c>
};

/* gap sub-block @ 0x3108 (was gap+0x138, 8 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x138[8] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x138.data.inc.c>
};

/* gap sub-block @ 0x3110 (was gap+0x140, 64 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x140[64] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x140.data.inc.c>
};

/* gap sub-block @ 0x3150 (was gap+0x180, 64 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x180[64] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x180.data.inc.c>
};

/* gap sub-block @ 0x3190 (was gap+0x1C0, 64 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x1C0[64] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x1C0.data.inc.c>
};

/* gap sub-block @ 0x31D0 (was gap+0x200, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x200[136] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x200.data.inc.c>
};

/* gap sub-block @ 0x3258 (was gap+0x288, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x288[136] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x288.data.inc.c>
};

/* gap sub-block @ 0x32E0 (was gap+0x310, 136 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x310[136] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x310.data.inc.c>
};

/* gap sub-block @ 0x3368 (was gap+0x398, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x398[16] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x398.data.inc.c>
};

/* gap sub-block @ 0x3378 (was gap+0x3A8, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x3A8[16] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x3A8.data.inc.c>
};

/* gap sub-block @ 0x3388 (was gap+0x3B8, 16 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0_sub_0x3B8[16] = {
	#include <EFCommonEffects2/gap_0x2FD0_sub_0x3B8.data.inc.c>
};

/* MObjSub: ReflectBreakMObjSub @ 0x3398 */
MObjSub dEFCommonEffects2_ReflectBreakMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 1.0f,
	1.0f, 1.0f,
	(void**)0x00000001,
	0x0000,
	0x00, 0x00,
	0xC3D4,
	0xEB94, 0x0000, 0x0000,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x3F800000,
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	0x3F, 0x80, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x02 } },
	{ { 0x0D, 0x08, 0x0C, 0xDA } },
	{ { 0x42, 0xA3, 0x62, 0x49 } },
	{ { 0x42, 0xD9, 0xDE, 0x2A } },
	0, 0,
	0, -1094344245,
};

/* Raw data from file offset 0x3410 to 0x34A0 (144 bytes) */
u8 dEFCommonEffects2_gap_0x3410[144] = {
	#include <EFCommonEffects2/gap_0x3410.data.inc.c>
};

/* Raw data from file offset 0x34A0 to 0x35A0 (256 bytes) */
u32 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint[64] = {
	#include <EFCommonEffects2/ReflectBreakAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x35A0 to 0x3A68 (1224 bytes) */
u32 dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint[306] = {
	#include <EFCommonEffects2/ReflectBreakMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x3A68 to 0x4F08 (5280 bytes) */
u8 dEFCommonEffects2_Shadow_TextureImage[5280] = {
	#include <EFCommonEffects2/Shadow_TextureImage.data.inc.c>
};

/* DObjDesc: DeadExplodeDefaultDObjDesc @ 0x4F08 (1 entries) */
DObjDesc dEFCommonEffects2_DeadExplodeDefaultDObjDesc[] = {
	{ 0, (void *)dEFCommonEffects2_gap_0x4F34_sub_0x14C, { 4.974964395099933e-27f, 8.081907707380465e-27f, 1.0789998175301091e-42f }, { 0.0f, 2.938735877055719e-39f, 5.877561437213154e-39f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x4F34 to 0x53E8 (1204 bytes) */
/* gap sub-block @ 0x4F34 (was gap+0x0, 92 bytes) */
u8 dEFCommonEffects2_gap_0x4F34[92] = {
	#include <EFCommonEffects2/gap_0x4F34.data.inc.c>
};

/* gap sub-block @ 0x4F90 (was gap+0x5C, 120 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x5C[120] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x5C.data.inc.c>
};

/* gap sub-block @ 0x5008 (was gap+0xD4, 120 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0xD4[120] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0xD4.data.inc.c>
};

/* gap sub-block @ 0x5080 (was gap+0x14C, 8 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x14C[8] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x14C.data.inc.c>
};

/* gap sub-block @ 0x5088 (was gap+0x154, 8 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x154[8] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x154.data.inc.c>
};

/* gap sub-block @ 0x5090 (was gap+0x15C, 8 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x15C[8] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x15C.data.inc.c>
};

/* gap sub-block @ 0x5098 (was gap+0x164, 64 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x164[64] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x164.data.inc.c>
};

/* gap sub-block @ 0x50D8 (was gap+0x1A4, 64 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x1A4[64] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x1A4.data.inc.c>
};

/* gap sub-block @ 0x5118 (was gap+0x1E4, 256 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x1E4[256] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x1E4.data.inc.c>
};

/* gap sub-block @ 0x5218 (was gap+0x2E4, 40 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x2E4[40] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x2E4.data.inc.c>
};

/* gap sub-block @ 0x5240 (was gap+0x30C, 112 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x30C[112] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x30C.data.inc.c>
};

/* gap sub-block @ 0x52B0 (was gap+0x37C, 96 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x37C[96] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x37C.data.inc.c>
};

/* gap sub-block @ 0x5310 (was gap+0x3DC, 168 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x3DC[168] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x3DC.data.inc.c>
};

/* gap sub-block @ 0x53B8 (was gap+0x484, 16 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x484[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x484.data.inc.c>
};

/* gap sub-block @ 0x53C8 (was gap+0x494, 16 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x494[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x494.data.inc.c>
};

/* gap sub-block @ 0x53D8 (was gap+0x4A4, 16 bytes) */
u8 dEFCommonEffects2_gap_0x4F34_sub_0x4A4[16] = {
	#include <EFCommonEffects2/gap_0x4F34_sub_0x4A4.data.inc.c>
};

/* MObjSub: DeadExplodeDefaultMObjSub @ 0x53E8 */
MObjSub dEFCommonEffects2_DeadExplodeDefaultMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 1.0f,
	1.0f, 1.0f,
	(void**)0x00000001,
	0x1511,
	0x14, 0xEE,
	0x0000,
	0x0000, 0x0000, 0x0000,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x40CDB23C,
	{ { 0x41, 0x8B, 0xFF, 0xFE } },
	0x3F, 0x80, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x01 } },
	{ { 0x15, 0x1C, 0x14, 0xF2 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

/* Raw data from file offset 0x5460 to 0x54D0 (112 bytes) */
u8 dEFCommonEffects2_gap_0x5460[112] = {
	#include <EFCommonEffects2/gap_0x5460.data.inc.c>
};

/* Raw data from file offset 0x54D0 to 0x5800 (816 bytes) */
u32 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint[204] = {
	#include <EFCommonEffects2/DeadExplodeDefaultAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5800 to 0x5870 (112 bytes) */
u32 dEFCommonEffects2_DeadExplode2_MatAnimJoint[28] = {
	#include <EFCommonEffects2/DeadExplode2_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5870 to 0x58E0 (112 bytes) */
u32 dEFCommonEffects2_DeadExplode4_MatAnimJoint[28] = {
	#include <EFCommonEffects2/DeadExplode4_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x58E0 to 0x5950 (112 bytes) */
u32 dEFCommonEffects2_DeadExplode1_MatAnimJoint[28] = {
	#include <EFCommonEffects2/DeadExplode1_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5950 to 0x6B40 (4592 bytes) */
u32 dEFCommonEffects2_DeadExplode3_MatAnimJoint[1148] = {
	#include <EFCommonEffects2/DeadExplode3_MatAnimJoint.data.inc.c>
};

/* DObjDesc: NessPKFlashDObjDesc @ 0x6B40 (1 entries) */
DObjDesc dEFCommonEffects2_NessPKFlashDObjDesc[] = {
	{ 0, (void *)dEFCommonEffects2_gap_0x6B6C_sub_0x74, { 8.731006476080497e-23f, 8.772283465174005e-23f, 8.813560454267514e-23f }, { 8.854837443361022e-23f, 8.89611443245453e-23f, 8.937391421548039e-23f }, { 8.978668410641547e-23f, 9.061304430362707e-23f, 7.20267410662956e-43f } },
};

/* Raw data from file offset 0x6B6C to 0x6D00 (404 bytes) */
/* gap sub-block @ 0x6B6C (was gap+0x0, 116 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C[116] = {
	#include <EFCommonEffects2/gap_0x6B6C.data.inc.c>
};

/* gap sub-block @ 0x6BE0 (was gap+0x74, 8 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C_sub_0x74[8] = {
	#include <EFCommonEffects2/gap_0x6B6C_sub_0x74.data.inc.c>
};

/* gap sub-block @ 0x6BE8 (was gap+0x7C, 64 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C_sub_0x7C[64] = {
	#include <EFCommonEffects2/gap_0x6B6C_sub_0x7C.data.inc.c>
};

/* gap sub-block @ 0x6C28 (was gap+0xBC, 216 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C_sub_0xBC[216] = {
	#include <EFCommonEffects2/gap_0x6B6C_sub_0xBC.data.inc.c>
};

/* MObjSub: NessPKFlashMObjSub @ 0x6D00 */
MObjSub dEFCommonEffects2_NessPKFlashMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0000, 0x0000, 0x0000, 0x0000,
	0,
	0.0f, 0.0f,
	0.0f, 1.0f,
	1.0f, 1.0f,
	(void**)0x00000001,
	0x1B65,
	0x1B, 0x0A,
	0x0000,
	0x0000, 0x0000, 0x0000,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x3727C5AC,
	{ { 0x37, 0x27, 0xC5, 0xAC } },
	0x3F, 0x80, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x12 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 0,
	0, 0,
};

PAD(24);

/* Raw data from file offset 0x6D90 to 0x6E20 (144 bytes) */
u32 dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint[36] = {
	#include <EFCommonEffects2/NessPKFlashAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6E20 to 0x6EC0 (160 bytes) */
u32 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint[40] = {
	#include <EFCommonEffects2/NessPKFlashMatAnimJoint_MatAnimJoint.data.inc.c>
};

