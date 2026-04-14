/* relocData file 136: Bonus2Common */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x3720 (14112 bytes) */
u8 dBonus2Common_gap_0x0000[14112] = {
	#include <Bonus2Common/gap_0x0000.data.inc.c>
};

/* MObjSub: PlatformSmall @ 0x3720 */
MObjSub dBonus2Common_PlatformSmall_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x0DCA0E08,
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
u8 dBonus2Common_gap_0x3798[1552] = {
	#include <Bonus2Common/gap_0x3798.data.inc.c>
};

/* DObjDesc: PlatformSmall @ 0x3DA8 (4 entries) */
DObjDesc dBonus2Common_PlatformSmall[] = {
	{ 0, (void*)((u8*)dBonus2Common_gap_0x3798 + 0x5E0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_gap_0x3798 + 0x5F0), { 0.0f, -150.0f, 355.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 1.7000000476837158f, 1.7000000476837158f, 1.7000000476837158f } },
	{ 1, (void*)((u8*)dBonus2Common_gap_0x3798 + 0x600), { 0.0f, -150.0f, 409.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x3E60 to 0x3F00 (160 bytes) */
u8 dBonus2Common_PlatformSmall_AnimJoint[160] = {
	#include <Bonus2Common/PlatformSmall_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x3F00 to 0x3F70 (112 bytes) */
u8 dBonus2Common_PlatformSmall_MatAnimJoint[112] = {
	#include <Bonus2Common/PlatformSmall_MatAnimJoint.data.inc.c>
};

/* MObjSub: PlatformMedium @ 0x3F70 */
MObjSub dBonus2Common_PlatformMedium_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x0FDE101C,
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
u8 dBonus2Common_gap_0x3FE8[1520] = {
	#include <Bonus2Common/gap_0x3FE8.data.inc.c>
};

/* DObjDesc: PlatformMedium @ 0x45D8 (4 entries) */
DObjDesc dBonus2Common_PlatformMedium[] = {
	{ 0, (void*)((u8*)dBonus2Common_gap_0x3FE8 + 0x5C0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_gap_0x3FE8 + 0x5D0), { 0.0f, -150.0f, 505.0741271972656f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 1, (void*)((u8*)dBonus2Common_gap_0x3FE8 + 0x5E0), { 0.0f, -150.0f, 559.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.399999976158142f, 1.399999976158142f, 1.399999976158142f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x4690 to 0x4730 (160 bytes) */
u8 dBonus2Common_PlatformMedium_AnimJoint[160] = {
	#include <Bonus2Common/PlatformMedium_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x4730 to 0x47A0 (112 bytes) */
u8 dBonus2Common_PlatformMedium_MatAnimJoint[112] = {
	#include <Bonus2Common/PlatformMedium_MatAnimJoint.data.inc.c>
};

/* MObjSub: PlatformLarge @ 0x47A0 */
MObjSub dBonus2Common_PlatformLarge_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)0x11EA1228,
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
u8 dBonus2Common_gap_0x4818[1520] = {
	#include <Bonus2Common/gap_0x4818.data.inc.c>
};

/* DObjDesc: PlatformLarge @ 0x4E08 (4 entries) */
DObjDesc dBonus2Common_PlatformLarge[] = {
	{ 0, (void*)((u8*)dBonus2Common_gap_0x4818 + 0x5C0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dBonus2Common_gap_0x4818 + 0x5D0), { 0.0f, -150.0f, 805.0740966796875f }, { 0.0f, 0.0f, 0.0f }, { 3.0f, 3.0f, 3.0f } },
	{ 1, (void*)((u8*)dBonus2Common_gap_0x4818 + 0x5E0), { 0.0f, -150.0f, 859.0042724609375f }, { 0.0f, 0.0f, 0.0f }, { 1.399999976158142f, 1.399999976158142f, 1.399999976158142f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x4EC0 to 0x4F70 (176 bytes) */
u8 dBonus2Common_PlatformLarge_AnimJoint[176] = {
	#include <Bonus2Common/PlatformLarge_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x4F70 to 0x5520 (1456 bytes) */
u8 dBonus2Common_PlatformLarge_MatAnimJoint[1456] = {
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
u8 dBonus2Common_BoardedPlatformSmall_AnimJoint[1456] = {
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
u8 dBonus2Common_BoardedPlatformMedium_AnimJoint[1456] = {
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
u8 dBonus2Common_BoardedPlatformLarge_AnimJoint[160] = {
	#include <Bonus2Common/BoardedPlatformLarge_AnimJoint.data.inc.c>
};

