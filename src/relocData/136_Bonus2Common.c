/* relocData file 136: Bonus2Common */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dBonus2Common_gap_0x3798[];
extern u8 dBonus2Common_gap_0x3FE8[];
extern u8 dBonus2Common_gap_0x4818[];

/* Raw data from file offset 0x0000 to 0x3720 (14112 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dBonus2Common_gap_0x0000[8] = {
	#include <Bonus2Common/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 4104 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x8[4104] = {
	#include <Bonus2Common/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x1010 (was gap+0x1010, 2056 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x1010[2056] = {
	#include <Bonus2Common/gap_0x0000_sub_0x1010.data.inc.c>
};

/* gap sub-block @ 0x1818 (was gap+0x1818, 2056 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x1818[2056] = {
	#include <Bonus2Common/gap_0x0000_sub_0x1818.data.inc.c>
};

/* gap sub-block @ 0x2020 (was gap+0x2020, 3088 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x2020[3088] = {
	#include <Bonus2Common/gap_0x0000_sub_0x2020.data.inc.c>
};

/* gap sub-block @ 0x2C30 (was gap+0x2C30, 2800 bytes) */
u8 dBonus2Common_gap_0x0000_sub_0x2C30[2800] = {
	#include <Bonus2Common/gap_0x0000_sub_0x2C30.data.inc.c>
};

/* MObjSub: PlatformSmall @ 0x3720 */
MObjSub dBonus2Common_PlatformSmall_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dBonus2Common_gap_0x3798 + 0x88),
	0x0E08, 0x0E0A, 0x0000, 0x0000,
	1026,
	0.0f, 2.938735877055719e-39f,
	5.0510293601050545e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.405103871319046e-38f,
	5.0510293601050545e-39f, 5.0510293601050545e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-16776961, 8,
	-16777216, -16777216,
};

/* Raw data from file offset 0x3798 to 0x3DA8 (1552 bytes) */
/* gap sub-block @ 0x3798 (was gap+0x0, 16 bytes) */
u8 dBonus2Common_gap_0x3798[16] = {
	#include <Bonus2Common/gap_0x3798.data.inc.c>
};

/* gap sub-block @ 0x37A8 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x3798_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x3820 (was gap+0x88, 8 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x88[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x3828 (was gap+0x90, 8 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x90[8] = {
	#include <Bonus2Common/gap_0x3798_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x3830 (was gap+0x98, 64 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x98[64] = {
	#include <Bonus2Common/gap_0x3798_sub_0x98.data.inc.c>
};

/* gap sub-block @ 0x3870 (was gap+0xD8, 128 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0xD8[128] = {
	#include <Bonus2Common/gap_0x3798_sub_0xD8.data.inc.c>
};

/* gap sub-block @ 0x38F0 (was gap+0x158, 128 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x158[128] = {
	#include <Bonus2Common/gap_0x3798_sub_0x158.data.inc.c>
};

/* gap sub-block @ 0x3970 (was gap+0x1D8, 128 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x1D8[128] = {
	#include <Bonus2Common/gap_0x3798_sub_0x1D8.data.inc.c>
};

/* gap sub-block @ 0x39F0 (was gap+0x258, 16 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x258[16] = {
	#include <Bonus2Common/gap_0x3798_sub_0x258.data.inc.c>
};

/* gap sub-block @ 0x3A00 (was gap+0x268, 48 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x268[48] = {
	#include <Bonus2Common/gap_0x3798_sub_0x268.data.inc.c>
};

/* gap sub-block @ 0x3A30 (was gap+0x298, 48 bytes) */
u8 dBonus2Common_gap_0x3798_sub_0x298[48] = {
	#include <Bonus2Common/gap_0x3798_sub_0x298.data.inc.c>
};

/* gap sub-block @ 0x3A60 (was gap+0x2C8, 432 bytes) */
Gfx dBonus2Common_DL_0x3A60[54] = {
	#include <Bonus2Common/DL_0x3A60.dl.inc.c>
};

/* gap sub-block @ 0x3C10 (was gap+0x478, 176 bytes) */
Gfx dBonus2Common_DL_0x3C10[22] = {
	#include <Bonus2Common/DL_0x3C10.dl.inc.c>
};

/* gap sub-block @ 0x3CC0 (was gap+0x528, 184 bytes) */
Gfx dBonus2Common_DL_0x3CC0[23] = {
	#include <Bonus2Common/DL_0x3CC0.dl.inc.c>
};

/* DObjDLLink @ 0x5E0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x3D78[] = {
	{ 0, dBonus2Common_DL_0x3A60 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5F0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x3D88[] = {
	{ 1, dBonus2Common_DL_0x3C10 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x600 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x3D98[] = {
	{ 1, dBonus2Common_DL_0x3CC0 },
	{ 4, NULL },
};

/* DObjDesc: PlatformSmall @ 0x3DA8 (4 entries) */
DObjDesc dBonus2Common_PlatformSmall[] = {
	{ 0, (void*)dBonus2Common_DLLink_0x3D78, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x3D88, { 0.0f, -150.0f, 355.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 1.7000000476837158f, 1.7000000476837158f, 1.7000000476837158f } },
	{ 1, (void*)dBonus2Common_DLLink_0x3D98, { 0.0f, -150.0f, 409.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x3E60 to 0x3F00 (160 bytes) */
u32 dBonus2Common_PlatformSmall_AnimJoint[40] = {
	#include <Bonus2Common/PlatformSmall_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x3F00 to 0x3F70 (112 bytes) */
u32 dBonus2Common_PlatformSmall_MatAnimJoint[28] = {
	#include <Bonus2Common/PlatformSmall_MatAnimJoint.data.inc.c>
};

/* MObjSub: PlatformMedium @ 0x3F70 */
MObjSub dBonus2Common_PlatformMedium_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dBonus2Common_gap_0x3FE8 + 0x88),
	0x101C, 0x101E, 0x0000, 0x0000,
	1026,
	0.0f, 2.938735877055719e-39f,
	5.0510293601050545e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.405103871319046e-38f,
	5.0510293601050545e-39f, 5.0510293601050545e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-16776961, 8,
	-16777216, -16777216,
};

/* Raw data from file offset 0x3FE8 to 0x45D8 (1520 bytes) */
/* gap sub-block @ 0x3FE8 (was gap+0x0, 16 bytes) */
u8 dBonus2Common_gap_0x3FE8[16] = {
	#include <Bonus2Common/gap_0x3FE8.data.inc.c>
};

/* gap sub-block @ 0x3FF8 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x4070 (was gap+0x88, 8 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x88[8] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x4078 (was gap+0x90, 8 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x90[8] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x4080 (was gap+0x98, 192 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x98[192] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x98.data.inc.c>
};

/* gap sub-block @ 0x4140 (was gap+0x158, 128 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x158[128] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x158.data.inc.c>
};

/* gap sub-block @ 0x41C0 (was gap+0x1D8, 128 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x1D8[128] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x1D8.data.inc.c>
};

/* gap sub-block @ 0x4240 (was gap+0x258, 16 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x258[16] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x258.data.inc.c>
};

/* gap sub-block @ 0x4250 (was gap+0x268, 48 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x268[48] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x268.data.inc.c>
};

/* gap sub-block @ 0x4280 (was gap+0x298, 48 bytes) */
u8 dBonus2Common_gap_0x3FE8_sub_0x298[48] = {
	#include <Bonus2Common/gap_0x3FE8_sub_0x298.data.inc.c>
};

/* gap sub-block @ 0x42B0 (was gap+0x2C8, 400 bytes) */
Gfx dBonus2Common_DL_0x42B0[50] = {
	#include <Bonus2Common/DL_0x42B0.dl.inc.c>
};

/* gap sub-block @ 0x4440 (was gap+0x458, 176 bytes) */
Gfx dBonus2Common_DL_0x4440[22] = {
	#include <Bonus2Common/DL_0x4440.dl.inc.c>
};

/* gap sub-block @ 0x44F0 (was gap+0x508, 184 bytes) */
Gfx dBonus2Common_DL_0x44F0[23] = {
	#include <Bonus2Common/DL_0x44F0.dl.inc.c>
};

/* DObjDLLink @ 0x5C0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x45A8[] = {
	{ 0, dBonus2Common_DL_0x42B0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5D0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x45B8[] = {
	{ 1, dBonus2Common_DL_0x4440 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5E0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x45C8[] = {
	{ 1, dBonus2Common_DL_0x44F0 },
	{ 4, NULL },
};

/* DObjDesc: PlatformMedium @ 0x45D8 (4 entries) */
DObjDesc dBonus2Common_PlatformMedium[] = {
	{ 0, (void*)dBonus2Common_DLLink_0x45A8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x45B8, { 0.0f, -150.0f, 505.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x45C8, { 0.0f, -150.0f, 559.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.399999976158142f, 1.399999976158142f, 1.399999976158142f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x4690 to 0x4730 (160 bytes) */
u32 dBonus2Common_PlatformMedium_AnimJoint[40] = {
	#include <Bonus2Common/PlatformMedium_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x4730 to 0x47A0 (112 bytes) */
u32 dBonus2Common_PlatformMedium_MatAnimJoint[28] = {
	#include <Bonus2Common/PlatformMedium_MatAnimJoint.data.inc.c>
};

/* MObjSub: PlatformLarge @ 0x47A0 */
MObjSub dBonus2Common_PlatformLarge_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dBonus2Common_gap_0x4818 + 0x88),
	0x1228, 0x122A, 0x0000, 0x0000,
	1026,
	0.0f, 2.938735877055719e-39f,
	5.0510293601050545e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.405103871319046e-38f,
	5.0510293601050545e-39f, 5.0510293601050545e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0x00, 0x00, 0x80 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-16776961, 8,
	-16777216, -16777216,
};

/* Raw data from file offset 0x4818 to 0x4E08 (1520 bytes) */
/* gap sub-block @ 0x4818 (was gap+0x0, 16 bytes) */
u8 dBonus2Common_gap_0x4818[16] = {
	#include <Bonus2Common/gap_0x4818.data.inc.c>
};

/* gap sub-block @ 0x4828 (was gap+0x10, 120 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x10[120] = {
	#include <Bonus2Common/gap_0x4818_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x48A0 (was gap+0x88, 8 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x88[8] = {
	#include <Bonus2Common/gap_0x4818_sub_0x88.data.inc.c>
};

/* gap sub-block @ 0x48A8 (was gap+0x90, 8 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x90[8] = {
	#include <Bonus2Common/gap_0x4818_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x48B0 (was gap+0x98, 192 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x98[192] = {
	#include <Bonus2Common/gap_0x4818_sub_0x98.data.inc.c>
};

/* gap sub-block @ 0x4970 (was gap+0x158, 128 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x158[128] = {
	#include <Bonus2Common/gap_0x4818_sub_0x158.data.inc.c>
};

/* gap sub-block @ 0x49F0 (was gap+0x1D8, 128 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x1D8[128] = {
	#include <Bonus2Common/gap_0x4818_sub_0x1D8.data.inc.c>
};

/* gap sub-block @ 0x4A70 (was gap+0x258, 16 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x258[16] = {
	#include <Bonus2Common/gap_0x4818_sub_0x258.data.inc.c>
};

/* gap sub-block @ 0x4A80 (was gap+0x268, 48 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x268[48] = {
	#include <Bonus2Common/gap_0x4818_sub_0x268.data.inc.c>
};

/* gap sub-block @ 0x4AB0 (was gap+0x298, 48 bytes) */
u8 dBonus2Common_gap_0x4818_sub_0x298[48] = {
	#include <Bonus2Common/gap_0x4818_sub_0x298.data.inc.c>
};

/* gap sub-block @ 0x4AE0 (was gap+0x2C8, 400 bytes) */
Gfx dBonus2Common_DL_0x4AE0[50] = {
	#include <Bonus2Common/DL_0x4AE0.dl.inc.c>
};

/* gap sub-block @ 0x4C70 (was gap+0x458, 176 bytes) */
Gfx dBonus2Common_DL_0x4C70[22] = {
	#include <Bonus2Common/DL_0x4C70.dl.inc.c>
};

/* gap sub-block @ 0x4D20 (was gap+0x508, 184 bytes) */
Gfx dBonus2Common_DL_0x4D20[23] = {
	#include <Bonus2Common/DL_0x4D20.dl.inc.c>
};

/* DObjDLLink @ 0x5C0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x4DD8[] = {
	{ 0, dBonus2Common_DL_0x4AE0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5D0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x4DE8[] = {
	{ 1, dBonus2Common_DL_0x4C70 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x5E0 (2 entries) */
DObjDLLink dBonus2Common_DLLink_0x4DF8[] = {
	{ 1, dBonus2Common_DL_0x4D20 },
	{ 4, NULL },
};

/* DObjDesc: PlatformLarge @ 0x4E08 (4 entries) */
DObjDesc dBonus2Common_PlatformLarge[] = {
	{ 0, (void*)dBonus2Common_DLLink_0x4DD8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x4DE8, { 0.0f, -150.0f, 805.0740966796875f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 1, (void*)dBonus2Common_DLLink_0x4DF8, { 0.0f, -150.0f, 859.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.399999976158142f, 1.399999976158142f, 1.399999976158142f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x4EC0 to 0x4F70 (176 bytes) */
u32 dBonus2Common_PlatformLarge_AnimJoint[44] = {
	#include <Bonus2Common/PlatformLarge_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x4F70 to 0x5520 (1456 bytes) */
u32 dBonus2Common_PlatformLarge_MatAnimJoint[364] = {
	#include <Bonus2Common/PlatformLarge_MatAnimJoint.data.inc.c>
};

/* DObjDesc: BoardedPlatformSmall @ 0x5520 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformSmall[] = {
	{ 0, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x590), { 0.0f, -150.0f, 355.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_PlatformLarge_MatAnimJoint + 0x5A0), { 0.0f, -150.0f, 409.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x55D0 to 0x5B80 (1456 bytes) */
u32 dBonus2Common_BoardedPlatformSmall_AnimJoint[364] = {
	#include <Bonus2Common/BoardedPlatformSmall_AnimJoint.data.inc.c>
};

/* DObjDesc: BoardedPlatformMedium @ 0x5B80 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformMedium[] = {
	{ 0, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x590), { 0.0f, -150.0f, 505.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformSmall_AnimJoint + 0x5A0), { 0.0f, -150.0f, 559.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x5C30 to 0x61E0 (1456 bytes) */
u32 dBonus2Common_BoardedPlatformMedium_AnimJoint[364] = {
	#include <Bonus2Common/BoardedPlatformMedium_AnimJoint.data.inc.c>
};

/* DObjDesc: BoardedPlatformLarge @ 0x61E0 (4 entries) */
DObjDesc dBonus2Common_BoardedPlatformLarge[] = {
	{ 0, (void*)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x580), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x590), { 0.0f, -150.0f, 805.0740966796875f }, { 0.0f, 0.0f, 0.0f }, { 4.0f, 4.0f, 4.0f } },
	{ 1, (void*)((u8*)dBonus2Common_BoardedPlatformMedium_AnimJoint + 0x5A0), { 0.0f, -150.0f, 859.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 2.5f, 2.5f, 2.5f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x6290 to 0x6330 (160 bytes) */
u32 dBonus2Common_BoardedPlatformLarge_AnimJoint[40] = {
	#include <Bonus2Common/BoardedPlatformLarge_AnimJoint.data.inc.c>
};

