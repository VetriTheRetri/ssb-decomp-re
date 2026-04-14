/* relocData file 85: EFCommonEffects3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0108 (264 bytes) */
u8 dEFCommonEffects3_gap_0x0000[264] = {
	#include <EFCommonEffects3/gap_0x0000.data.inc.c>
};

/* MObjSub: MBallRays @ 0x108 */
MObjSub dEFCommonEffects3_MBallRays_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0045, 0x00BE, 0x00BE, 0x00C1,
	770,
	0.0f, 6.79582671569135e-39f,
	1.4693903593032886e-39f, 0.0f,
	0.0f, 0.2849999964237213f,
	(void**)0x3F800000,
	0x3EDC,
	0x28, 0xF6,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.404816885393553e-38f,
	1.4693903593032886e-39f, 1.4693903593032886e-39f,
	0x00000000,
	{ { 0x3E, 0x91, 0xEB, 0x85 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	{ { 0xFF, 0xFF, 0xFF, 0x0C } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	16777215, 8,
	-256, 1717986816,
};

/* Raw data from file offset 0x0180 to 0x0628 (1192 bytes) */
u8 dEFCommonEffects3_gap_0x0180[1192] = {
	#include <EFCommonEffects3/gap_0x0180.data.inc.c>
};

/* DObjDesc: MBallRays @ 0x628 (5 entries) */
DObjDesc dEFCommonEffects3_MBallRays[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_gap_0x0180 + 0x488), { -9.0f, -4.5f, 0.0f }, { 0.0f, -31.38558006286621f, 0.0f }, { 36.41071701049805f, 2.9694700241088867f, 36.40849304199219f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_gap_0x0180 + 0x498), { -9.0f, -4.5f, 0.0f }, { 0.0f, 31.72962188720703f, 0.0f }, { 36.41071701049805f, 2.829946994781494f, 36.40849304199219f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0710 to 0x0860 (336 bytes) */
u8 dEFCommonEffects3_MBallRays_AnimJoint[336] = {
	#include <EFCommonEffects3/MBallRays_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0860 to 0x2AC0 (8800 bytes) */
u8 dEFCommonEffects3_MBallRays_MatAnimJoint[8800] = {
	#include <EFCommonEffects3/MBallRays_MatAnimJoint.data.inc.c>
};

/* DObjDesc: RebirthHalo @ 0x2AC0 (4 entries) */
DObjDesc dEFCommonEffects3_RebirthHalo[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2238), { 0.0f, -60.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_MBallRays_MatAnimJoint + 0x2250), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2B70 to 0x2CA8 (312 bytes) */
u8 dEFCommonEffects3_RebirthHalo_AnimJoint[312] = {
	#include <EFCommonEffects3/RebirthHalo_AnimJoint.data.inc.c>
};

/* MObjSub: ItemGetSwirl @ 0x2CA8 */
MObjSub dEFCommonEffects3_ItemGetSwirl_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x00000000,
	0x0B2D, 0x0BA8, 0x0B2E, 0x0BAA,
	187632556,
	6.472881977195592e-32f, 1.4377322243972623e-42f,
	0.0f, 2.938735877055719e-39f,
	2.938758297831148e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 9.405102750280275e-38f,
	0x00200010,
	{ { 0x00, 0x20, 0x00, 0x10 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	167743667, 0,
	255, 8,
};

/* Raw data from file offset 0x2D20 to 0x3170 (1104 bytes) */
u8 dEFCommonEffects3_gap_0x2D20[1104] = {
	#include <EFCommonEffects3/gap_0x2D20.data.inc.c>
};

/* DObjDesc: ItemGetSwirl @ 0x3170 (7 entries) */
DObjDesc dEFCommonEffects3_ItemGetSwirl[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { -0.8541679978370667f, 1.570796012878418f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_gap_0x2D20 + 0x410), { 0.24000099301338196f, -2.7028450965881348f, -233.6550750732422f }, { -0.27849701046943665f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_gap_0x2D20 + 0x420), { 0.24000099301338196f, 233.6550750732422f, -2.70284104347229f }, { 1.2919600009918213f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_gap_0x2D20 + 0x430), { 0.24000099301338196f, 2.702807903289795f, 233.65505981445312f }, { 2.8615520000457764f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 2, (void*)((u8*)dEFCommonEffects3_gap_0x2D20 + 0x440), { 0.24000099301338196f, -233.6550750732422f, 2.7028489112854004f }, { -1.8504990339279175f, 0.0f, 0.0f }, { 0.9855470061302185f, 0.5486469864845276f, 0.5575129985809326f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x32B0 to 0x3490 (480 bytes) */
u8 dEFCommonEffects3_ItemGetSwirl_AnimJoint[480] = {
	#include <EFCommonEffects3/ItemGetSwirl_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x3490 to 0x3530 (160 bytes) */
u8 dEFCommonEffects3_ItemGetSwirl_MatAnimJoint[160] = {
	#include <EFCommonEffects3/ItemGetSwirl_MatAnimJoint.data.inc.c>
};

