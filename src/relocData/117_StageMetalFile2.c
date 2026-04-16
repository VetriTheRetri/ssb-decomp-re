/* relocData file 117: StageMetalFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dStageMetalFile2_gap_0x1E48[];
extern u8 dStageMetalFile2_gap_0x3298[];

PAD(8);

/* Texture data @ 0x0008 (3112 bytes) */
u8 dStageMetalFile2_Tex_0x0008[3112] = {
	#include <StageMetalFile2/Tex_0x0008.tex.inc.c>
};

extern u32 dStageMetalFile2_Layer0MObj_MObjSubPtrArray[];

/* MObjSub array: Layer0MObj @ 0xC30 (5 entries) */
MObjSub dStageMetalFile2_Layer0MObj_MObjSub[5] = {
	/* [0] @ 0xC30 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dStageMetalFile2_Layer0MObj_MObjSubPtrArray + 0x8),
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.0008089999901130795f, 0.008562999777495861f,
		1.0f, 1.0f,
		(void**)0x3A541312,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [1] @ 0xCA8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.019998999312520027f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x3CA3D4F1,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [2] @ 0xD20 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.0032099999953061342f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x3B525EDD,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [3] @ 0xD98 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [4] @ 0xE10 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.0008089999901130795f, 0.008562999777495861f,
		1.0f, 1.0f,
		(void**)0x3A541312,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
};

/* MObjSub pointer array @ 0xE88 (32 bytes: leading pad + 7 pointers + NULL) */
u32 dStageMetalFile2_Layer0MObj_MObjSubPtrArray[] = {
	0x00000000, 0x00000000, 0x03A5030E, 0x03A6032C,
	0x03A7034A, 0x03A80368, 0x05D90386, 0x00000000,
};

/* Raw data from file offset 0x0EA8 to 0x1B10 (3176 bytes) */
u8 dStageMetalFile2_gap_0x0EA8[3176] = {
	#include <StageMetalFile2/gap_0x0EA8.data.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x1B10 (3 entries) */
DObjDesc dStageMetalFile2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x0EA8 + 0x860), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x1BA0 to 0x1DD0 (560 bytes) */
u32 dStageMetalFile2_Layer0MatAnim_MatAnimJoint[140] = {
	#include <StageMetalFile2/Layer0MatAnim_MatAnimJoint.data.inc.c>
};

/* MObjSub: Layer1MObj @ 0x1DD0 */
MObjSub dStageMetalFile2_Layer1MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dStageMetalFile2_gap_0x1E48 + 0x178),
	0x0777, 0x026C, 0x0778, 0x0278,
	125371006,
	1.8808648888900672e-34f, 1.888388741501551e-34f,
	1.8959125941130348e-34f, 1.9034364467245187e-34f,
	1.9109602993360025e-34f, 1.9184841519474863e-34f,
	(void**)((u8*)dStageMetalFile2_Tex_0x0008 + 0xA98),
	0x0781,
	0x02, 0xAE,
	0x0782,
	0x02B4, 0x0783, 0x02BA,
	1.986276885622575e-34f, 2.0013245908455427e-34f,
	2.1818819006642884e-34f, 7.20267410662956e-43f,
	0x00000000,
	{ { 0x00, 0x20, 0x00, 0x00 } },
	0x00, 0x0F, { 0x00, 0x01 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x3F, 0x80, 0x00, 0x00 } },
	1065353216, 0,
	1065353216, 128190326,
};

/* Raw data from file offset 0x1E48 to 0x2EE0 (4248 bytes) */
u8 dStageMetalFile2_gap_0x1E48[4248] = {
	#include <StageMetalFile2/gap_0x1E48.data.inc.c>
};

/* DObjDesc: Layer1DObj @ 0x2EE0 (3 entries) */
DObjDesc dStageMetalFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x1E48 + 0xB08), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x2F64 to 0x3068 (260 bytes) */
u8 dStageMetalFile2_gap_0x2F64[260] = {
	#include <StageMetalFile2/gap_0x2F64.data.inc.c>
};

/* Raw data from file offset 0x3068 to 0x3090 (40 bytes) */
u8 dStageMetalFile2_MPGeometryData_0x3068[40] = {
	#include <StageMetalFile2/MPGeometryData_0x3068.data.inc.c>
};

/* Raw data from file offset 0x3090 to 0x3220 (400 bytes) */
u32 dStageMetalFile2_Layer1MatAnim_MatAnimJoint[100] = {
	#include <StageMetalFile2/Layer1MatAnim_MatAnimJoint.data.inc.c>
};

/* MObjSub: Layer2MObj @ 0x3220 */
MObjSub dStageMetalFile2_Layer2MObj_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dStageMetalFile2_gap_0x3298 + 0x8),
	0x0000, 0x0202, 0x0000, 0x0000,
	2097152,
	1.4601954591699284e-38f, 2.802596928649634e-45f,
	9.999999747378752e-05f, 0.0013099999632686377f,
	1.0f, 1.0f,
	(void**)0x38D1B717,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0020, 0x0002,
	0.0f, 0.0f,
	0.0f, 0.0f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x06, { 0x22, 0x05 },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x08 } },
	-256, 1280068608,
	0, 0,
};

/* Raw data from file offset 0x3298 to 0x3468 (464 bytes) */
u8 dStageMetalFile2_gap_0x3298[464] = {
	#include <StageMetalFile2/gap_0x3298.data.inc.c>
};

/* DObjDesc: Layer2DObj @ 0x3468 (3 entries) */
DObjDesc dStageMetalFile2_Layer2DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x3298 + 0xD0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x34F0 to 0x3550 (96 bytes) */
u32 dStageMetalFile2_Layer2MatAnim_MatAnimJoint[24] = {
	#include <StageMetalFile2/Layer2MatAnim_MatAnimJoint.data.inc.c>
};

extern u32 dStageMetalFile2_Layer3MObj_MObjSubPtrArray[];

/* MObjSub array: Layer3MObj @ 0x3550 (4 entries) */
MObjSub dStageMetalFile2_Layer3MObj_MObjSub[4] = {
	/* [0] @ 0x3550 */
	{
		0x0000,
		0x00, 0x00,
		(void**)((u8*)dStageMetalFile2_Layer3MObj_MObjSubPtrArray + 0x8),
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		0.004556000232696533f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x3B954A80,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [1] @ 0x35C8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 0.0008239999879151583f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [2] @ 0x3640 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 9.999999747378752e-05f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
	/* [3] @ 0x36B8 */
	{
		0x0000,
		0x00, 0x00,
		(void**)0x00000000,
		0x0000, 0x0202, 0x0000, 0x0000,
		2097152,
		1.4601954591699284e-38f, 2.802596928649634e-45f,
		9.999999747378752e-05f, 0.009999999776482582f,
		1.0f, 1.0f,
		(void**)0x38D1B717,
		0x3F80,
		0x00, 0x00,
		0x0000,
		0x0000, 0x0020, 0x0002,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00000000,
		{ { 0x00, 0x00, 0x00, 0x00 } },
		0x00, 0x06, { 0x22, 0x05 },
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		-256, 1280068608,
		0, 0,
	},
};

/* MObjSub pointer array @ 0x3730 (28 bytes: leading pad + 6 pointers + NULL) */
u32 dStageMetalFile2_Layer3MObj_MObjSubPtrArray[] = {
	0x00000000, 0x00000000, 0x0DCF0D56, 0x0DD00D74,
	0x0DD10D92, 0x0EEB0DB0, 0x00000000,
};

/* Raw data from file offset 0x374C to 0x3DD8 (1676 bytes) */
u8 dStageMetalFile2_gap_0x374C[1676] = {
	#include <StageMetalFile2/gap_0x374C.data.inc.c>
};

/* DObjDesc: Layer3DObj @ 0x3DD8 (3 entries) */
DObjDesc dStageMetalFile2_Layer3DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dStageMetalFile2_gap_0x374C + 0x404), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x3E60 to 0x3FC0 (352 bytes) */
u32 dStageMetalFile2_Layer3MatAnim_MatAnimJoint[88] = {
	#include <StageMetalFile2/Layer3MatAnim_MatAnimJoint.data.inc.c>
};

