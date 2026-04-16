/* relocData file 84: EFCommonEffects2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dEFCommonEffects2_gap_0x1F18[];

/* Raw data from file offset 0x0000 to 0x1428 (5160 bytes) */
u8 dEFCommonEffects2_gap_0x0000[5160] = {
	#include <EFCommonEffects2/gap_0x0000.data.inc.c>
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
u8 dEFCommonEffects2_gap_0x14A0[96] = {
	#include <EFCommonEffects2/gap_0x14A0.data.inc.c>
};

/* Raw data from file offset 0x1500 to 0x1570 (112 bytes) */
u8 dEFCommonEffects2_gap_0x1500[112] = {
	#include <EFCommonEffects2/gap_0x1500.data.inc.c>
};

/* Raw data from file offset 0x1570 to 0x1EA0 (2352 bytes) */
u8 dEFCommonEffects2_ShockSmallMatAnimJoint_MatAnimJoint[2352] = {
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
u8 dEFCommonEffects2_gap_0x1F18[32] = {
	#include <EFCommonEffects2/gap_0x1F18.data.inc.c>
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
u8 dEFCommonEffects2_FireSparkAnimJoint_AnimJoint[160] = {
	#include <EFCommonEffects2/FireSparkAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x2170 to 0x22B8 (328 bytes) */
u8 dEFCommonEffects2_FireSparkMatAnimJoint_MatAnimJoint[328] = {
	#include <EFCommonEffects2/FireSparkMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: CatchSwirlDObjDesc @ 0x22B8 (2 entries) */
DObjDesc dEFCommonEffects2_CatchSwirlDObjDesc[] = {
	{ 0, (void*)0x00000000, { 1.0654956302341688e-33f, 1.0715143449813712e-33f, 1.0775330597285737e-33f }, { 2.0708070517321904e-33f, 1.4377322243972623e-42f, 0.0f }, { 2.938735877055719e-39f, 2.938758297831148e-39f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.0f, 1.0f, 0.0f }, { 1.0f, 0.0f, 9.405102750280275e-38f }, { 2.938758297831148e-39f, 2.938758297831148e-39f, 0.0f } },
};

/* Raw data from file offset 0x2310 to 0x2760 (1104 bytes) */
u8 dEFCommonEffects2_gap_0x2310[1104] = {
	#include <EFCommonEffects2/gap_0x2310.data.inc.c>
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
u8 dEFCommonEffects2_CatchSwirlAnimJoint_AnimJoint[528] = {
	#include <EFCommonEffects2/CatchSwirlAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x2AB0 to 0x2F78 (1224 bytes) */
u8 dEFCommonEffects2_CatchSwirlMatAnimJoint_MatAnimJoint[1224] = {
	#include <EFCommonEffects2/CatchSwirlMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DObjDesc: ReflectBreakDObjDesc @ 0x2F78 (2 entries) */
DObjDesc dEFCommonEffects2_ReflectBreakDObjDesc[] = {
	{ 0, (void*)0x00000000, { 8.6685267493903e-32f, 8.707046523772395e-32f, 1.4640756278615873e-31f }, { 0.0f, 1.0789998175301091e-42f, 0.0f }, { 2.938735877055719e-39f, 2.9388255601574356e-39f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.0f, 1.0f, 0.0f }, { 1.0f, 0.0f, 4.039338094763389e-28f }, { 2.938780718606577e-39f, 2.9388255601574356e-39f, 0.0f } },
};

/* Raw data from file offset 0x2FD0 to 0x3398 (968 bytes) */
u8 dEFCommonEffects2_gap_0x2FD0[968] = {
	#include <EFCommonEffects2/gap_0x2FD0.data.inc.c>
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
u8 dEFCommonEffects2_ReflectBreakAnimJoint_AnimJoint[256] = {
	#include <EFCommonEffects2/ReflectBreakAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x35A0 to 0x3A68 (1224 bytes) */
u8 dEFCommonEffects2_ReflectBreakMatAnimJoint_MatAnimJoint[1224] = {
	#include <EFCommonEffects2/ReflectBreakMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x3A68 to 0x4F08 (5280 bytes) */
u8 dEFCommonEffects2_Shadow_TextureImage[5280] = {
	#include <EFCommonEffects2/Shadow_TextureImage.data.inc.c>
};

/* DObjDesc: DeadExplodeDefaultDObjDesc @ 0x4F08 (1 entries) */
DObjDesc dEFCommonEffects2_DeadExplodeDefaultDObjDesc[] = {
	{ 0, (void*)0x13C41420, { 4.974964395099933e-27f, 8.081907707380465e-27f, 1.0789998175301091e-42f }, { 0.0f, 2.938735877055719e-39f, 5.877561437213154e-39f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x4F34 to 0x53E8 (1204 bytes) */
u8 dEFCommonEffects2_gap_0x4F34[1204] = {
	#include <EFCommonEffects2/gap_0x4F34.data.inc.c>
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
u8 dEFCommonEffects2_DeadExplodeDefaultAnimJoint_AnimJoint[816] = {
	#include <EFCommonEffects2/DeadExplodeDefaultAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5800 to 0x5870 (112 bytes) */
u8 dEFCommonEffects2_DeadExplode2_MatAnimJoint[112] = {
	#include <EFCommonEffects2/DeadExplode2_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5870 to 0x58E0 (112 bytes) */
u8 dEFCommonEffects2_DeadExplode4_MatAnimJoint[112] = {
	#include <EFCommonEffects2/DeadExplode4_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x58E0 to 0x5950 (112 bytes) */
u8 dEFCommonEffects2_DeadExplode1_MatAnimJoint[112] = {
	#include <EFCommonEffects2/DeadExplode1_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5950 to 0x6B40 (4592 bytes) */
u8 dEFCommonEffects2_DeadExplode3_MatAnimJoint[4592] = {
	#include <EFCommonEffects2/DeadExplode3_MatAnimJoint.data.inc.c>
};

/* DObjDesc: NessPKFlashDObjDesc @ 0x6B40 (1 entries) */
DObjDesc dEFCommonEffects2_NessPKFlashDObjDesc[] = {
	{ 0, (void*)0x1AD21AF8, { 8.731006476080497e-23f, 8.772283465174005e-23f, 8.813560454267514e-23f }, { 8.854837443361022e-23f, 8.89611443245453e-23f, 8.937391421548039e-23f }, { 8.978668410641547e-23f, 9.061304430362707e-23f, 7.20267410662956e-43f } },
};

/* Raw data from file offset 0x6B6C to 0x6D00 (404 bytes) */
u8 dEFCommonEffects2_gap_0x6B6C[404] = {
	#include <EFCommonEffects2/gap_0x6B6C.data.inc.c>
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
u8 dEFCommonEffects2_NessPKFlashAnimJoint_AnimJoint[144] = {
	#include <EFCommonEffects2/NessPKFlashAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x6E20 to 0x6EC0 (160 bytes) */
u8 dEFCommonEffects2_NessPKFlashMatAnimJoint_MatAnimJoint[160] = {
	#include <EFCommonEffects2/NessPKFlashMatAnimJoint_MatAnimJoint.data.inc.c>
};

