/* relocData file 83: EFCommonEffects1 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dEFCommonEffects1_gap_0x7458[];

/* Raw data from file offset 0x0000 to 0x73E0 (29664 bytes) */
u8 dEFCommonEffects1_gap_0x0000[29664] = {
	#include <EFCommonEffects1/gap_0x0000.data.inc.c>
};

/* MObjSub: DamageSlash @ 0x73E0 */
MObjSub dEFCommonEffects1_DamageSlash_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dEFCommonEffects1_gap_0x7458 + 0xB8),
	0x1CFB, 0x1D46, 0x1CFC, 0x1C98,
	486349878,
	1.681550344879118e-21f, 1.688157894308347e-21f,
	1.6954649929665517e-21f, 1.70868009182501e-21f,
	1.7218951906834682e-21f, 1.7351102895419265e-21f,
	(void**)((u8*)dEFCommonEffects1_gap_0x0000 + 0x65A0),
	0x1D05,
	0x18, 0xE6,
	0x1D06,
	0x1864, 0x1D07, 0x17E2,
	1.8143883618923884e-21f, 7.20267410662956e-43f,
	2.2117248518599836e-21f, 2.938735877055719e-39f,
	0x00200030,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	1065353216, 0,
	838926848, 1048624,
};

/* Raw data from file offset 0x7458 to 0x7750 (760 bytes) */
u8 dEFCommonEffects1_gap_0x7458[760] = {
	#include <EFCommonEffects1/gap_0x7458.data.inc.c>
};

/* DObjDesc: DamageSlash @ 0x7750 (4 entries) */
DObjDesc dEFCommonEffects1_DamageSlash[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dEFCommonEffects1_gap_0x7458 + 0x2D8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dEFCommonEffects1_gap_0x7458 + 0x2E8), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x7800 to 0x7860 (96 bytes) */
u8 dEFCommonEffects1_DamageSlash_AnimJoint[96] = {
	#include <EFCommonEffects1/DamageSlash_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7860 to 0x7A80 (544 bytes) */
u8 dEFCommonEffects1_DamageSlash_MatAnimJoint[544] = {
	#include <EFCommonEffects1/DamageSlash_MatAnimJoint.data.inc.c>
};

/* MObjSub: ImpactWave @ 0x7A80 */
MObjSub dEFCommonEffects1_ImpactWave_MObjSub = {
	0x1EC0,
	0x1E, 0xC0,
	(void**)0x00000000,
	0x0000, 0x0202, 0x0000, 0x0000,
	2097152,
	1.4105968083108137e-37f, 0.0f,
	0.0f, 0.0f,
	1.0f, 1.0f,
	(void**)0x00000000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x00A0, 0x0200,
	1.4694127800787178e-39f, 1.4105968083108137e-37f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x20, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-256, 2139127808,
	0, 0,
};

/* Raw data from file offset 0x7AF8 to 0x7C28 (304 bytes) */
u8 dEFCommonEffects1_gap_0x7AF8[304] = {
	#include <EFCommonEffects1/gap_0x7AF8.data.inc.c>
};

/* Raw data from file offset 0x7C28 to 0x7D40 (280 bytes) */
u8 dEFCommonEffects1_gap_0x7C28[280] = {
	#include <EFCommonEffects1/gap_0x7C28.data.inc.c>
};

/* Raw data from file offset 0x7D40 to 0x7DA0 (96 bytes) */
u8 dEFCommonEffects1_ImpactWave_AnimJoint[96] = {
	#include <EFCommonEffects1/ImpactWave_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7DA0 to 0x7E80 (224 bytes) */
u8 dEFCommonEffects1_ImpactWave_MatAnimJoint[224] = {
	#include <EFCommonEffects1/ImpactWave_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x7E80 to 0x7F40 (192 bytes) */
u8 dEFCommonEffects1_gap_0x7E80[192] = {
	#include <EFCommonEffects1/gap_0x7E80.data.inc.c>
};

/* Raw data from file offset 0x7F40 to 0x8EC0 (3968 bytes) */
u8 dEFCommonEffects1_FlyOrbs_AnimJoint[3968] = {
	#include <EFCommonEffects1/FlyOrbs_AnimJoint.data.inc.c>
};

/* MObjSub: CommonSpark @ 0x8EC0 */
MObjSub dEFCommonEffects1_CommonSpark_MObjSub = {
	0x23B1,
	0x23, 0xD6,
	(void**)((u8*)dEFCommonEffects1_FlyOrbs_AnimJoint + 0xD80),
	0x23B3, 0x22AE, 0x23B4, 0x222C,
	599073194,
	1.974652175731488e-17f, 1.9854726907604168e-17f,
	2.0071352275142005e-17f, 3.680622520426278e-40f,
	2.321704238970359e-17f, 2.938735877055719e-39f,
	(void**)0x00200020,
	0x0000,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0000, 0x0000,
	1.0f, 1.0f,
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

/* Raw data from file offset 0x8F38 to 0x8FA0 (104 bytes) */
u8 dEFCommonEffects1_gap_0x8F38[104] = {
	#include <EFCommonEffects1/gap_0x8F38.data.inc.c>
};

/* Raw data from file offset 0x8FA0 to 0x9050 (176 bytes) */
u8 dEFCommonEffects1_gap_0x8FA0[176] = {
	#include <EFCommonEffects1/gap_0x8FA0.data.inc.c>
};

/* Raw data from file offset 0x9050 to 0x90C0 (112 bytes) */
u8 dEFCommonEffects1_CommonSpark_AnimJoint[112] = {
	#include <EFCommonEffects1/CommonSpark_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x90C0 to 0xC978 (14520 bytes) */
u8 dEFCommonEffects1_CommonSpark_MatAnimJoint[14520] = {
	#include <EFCommonEffects1/CommonSpark_MatAnimJoint.data.inc.c>
};

/* MObjSub: DamageFlyMDust @ 0xC978 */
MObjSub dEFCommonEffects1_DamageFlyMDust_MObjSub = {
	0x325F,
	0x32, 0x84,
	(void**)((u8*)dEFCommonEffects1_CommonSpark_MatAnimJoint + 0x30B8),
	0x3261, 0x2E5C, 0x3262, 0x2C5A,
	845359704,
	1.3280518018632392e-08f, 1.3338269155838134e-08f,
	1.3454227953957343e-08f, 1.4704469383453895e-39f,
	1.5389728602599462e-08f, 2.938735877055719e-39f,
	(void**)0x00200020,
	0x0000,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0000, 0x0000,
	1.0f, 1.0f,
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

/* Raw data from file offset 0xC9F0 to 0xCA18 (40 bytes) */
u8 dEFCommonEffects1_gap_0xC9F0[40] = {
	#include <EFCommonEffects1/gap_0xC9F0.data.inc.c>
};

/* Vtx: DamageFlyMDust @ 0xCA18 (4 vertices) */
Vtx dEFCommonEffects1_DamageFlyMDust_Vtx[4] = {
	#include <EFCommonEffects1/DamageFlyMDust.vtx.inc.c>
};

/* DisplayList: DamageFlyMDust @ 0xCA58 (112 bytes) */
Gfx dEFCommonEffects1_DamageFlyMDust_DisplayList[14] = {
	#include <EFCommonEffects1/DamageFlyMDust.dl.inc.c>
};

/* Raw data from file offset 0xCAC8 to 0xCAE0 (24 bytes) */
u8 dEFCommonEffects1_gap_0xCAC8[24] = {
	#include <EFCommonEffects1/gap_0xCAC8.data.inc.c>
};

/* Raw data from file offset 0xCAE0 to 0xCB40 (96 bytes) */
u8 dEFCommonEffects1_DamageFlyMDust_AnimJoint[96] = {
	#include <EFCommonEffects1/DamageFlyMDust_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0xCB40 to 0xCBC0 (128 bytes) */
u8 dEFCommonEffects1_DamageFlyMDust_MatAnimJoint[128] = {
	#include <EFCommonEffects1/DamageFlyMDust_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0xCBC0 to 0xCC20 (96 bytes) */
u8 dEFCommonEffects1_QuakeMag0_AnimJoint[96] = {
	#include <EFCommonEffects1/QuakeMag0_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0xCC20 to 0xCCF0 (208 bytes) */
u8 dEFCommonEffects1_QuakeMag1_AnimJoint[208] = {
	#include <EFCommonEffects1/QuakeMag1_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0xCCF0 to 0xCDC0 (208 bytes) */
u8 dEFCommonEffects1_QuakeMag2_AnimJoint[208] = {
	#include <EFCommonEffects1/QuakeMag2_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0xCDC0 to 0xCE00 (64 bytes) */
u8 dEFCommonEffects1_QuakeMag3_AnimJoint[64] = {
	#include <EFCommonEffects1/QuakeMag3_AnimJoint.data.inc.c>
};

