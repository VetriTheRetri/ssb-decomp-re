/* relocData file 341: PikachuModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern u8 dPikachuModel_gap_0x2B78_sub_0x714[];
extern u8 dPikachuModel_Joint_0x0040_post[];
extern u8 dPikachuModel_gap_0x2B78_sub_0x784[];
extern u8 dPikachuModel_gap_0x2B78_sub_0x7F4[];
extern u32 dPikachuModel_gap_0x59B8_sub_0x1778[];
extern u16 dPikachuModel_gap_0x59B8_sub_0xB4C[];
extern u16 dPikachuModel_gap_0x59B8_sub_0xB74[];
extern u8 dPikachuModel_gap_0x2B78_sub_0x864[];
extern u8 dPikachuModel_gap_0x59B8_sub_0x83C[];

extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13E8[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13D8[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13D0[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13F0[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x1398[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13A0[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13C0[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x1388[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x1390[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13F8[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x1380[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13B8[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x1400[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13E0[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13B0[];
extern MObjSub *dPikachuModel_gap_0x2B78_sub_0x13C8[];
/* MObjSub-dispatch table at file 0x0000 (64 bytes, 16 u32 slots).
 * Sparse pointer array — chain-encoded `MObjSub **` pointers to the
 * trailing-index cells inside dPikachuModel_Joint_0x0040_post. The original splitter
 * sliced this region into 4 fragments (see git history); the
 * .reloc relationships only make sense as one continuous table. */
MObjSub **dPikachuModel_gap_0x0000[16] = {
	NULL,  /* +0x00 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xA88),  /* +0x04 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xA90),  /* +0x08 */
	NULL,  /* +0x0C */
	NULL,  /* +0x10 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xA98),  /* +0x14 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xAA0),  /* +0x18 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xAA8),  /* +0x1C */
	NULL,  /* +0x20 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xAB8),  /* +0x24 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xAC0),  /* +0x28 */
	NULL,  /* +0x2C */
	NULL,  /* +0x30 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xAC8),  /* +0x34 */
	(MObjSub **)((u8 *)dPikachuModel_Joint_0x0040_post + 0xAD0),  /* +0x38 */
	NULL,  /* +0x3C */
};


/* Raw data from file offset 0x0040 to 0x0B58 (2840 bytes) */
u8 dPikachuModel_Joint_0x0040_post[2840] = {
	#include <PikachuModel/Joint_0x0040_post.data.inc.c>
};

/* Vtx: Vtx_0x0B58 @ 0xB58 (32 vertices) */
Vtx dPikachuModel_Vtx_0x0B58_Vtx[32] = {
	#include <PikachuModel/Vtx_0x0B58.vtx.inc.c>
};

/* Vtx: Vtx_0x0D58 @ 0xD58 (1 vertices) */
Vtx dPikachuModel_Vtx_0x0D58_Vtx[1] = {
	#include <PikachuModel/Vtx_0x0D58.vtx.inc.c>
};

/* Vtx: Vtx_0x0D68 @ 0xD68 (8 vertices) */
Vtx dPikachuModel_Vtx_0x0D68_Vtx[8] = {
	#include <PikachuModel/Vtx_0x0D68.vtx.inc.c>
};

/* Vtx: Vtx_0x0DE8 @ 0xDE8 (9 vertices) */
Vtx dPikachuModel_Vtx_0x0DE8_Vtx[9] = {
	#include <PikachuModel/Vtx_0x0DE8.vtx.inc.c>
};

/* Vtx: Vtx_0x0E78 @ 0xE78 (4 vertices) */
Vtx dPikachuModel_Vtx_0x0E78_Vtx[4] = {
	#include <PikachuModel/Vtx_0x0E78.vtx.inc.c>
};

/* Vtx: Vtx_0x0EB8 @ 0xEB8 (23 vertices) */
Vtx dPikachuModel_Vtx_0x0EB8_Vtx[23] = {
	#include <PikachuModel/Vtx_0x0EB8.vtx.inc.c>
};

/* Vtx: Vtx_0x1028 @ 0x1028 (14 vertices) */
Vtx dPikachuModel_Vtx_0x1028_Vtx[14] = {
	#include <PikachuModel/Vtx_0x1028.vtx.inc.c>
};

/* Vtx: Vtx_0x1108 @ 0x1108 (11 vertices) */
Vtx dPikachuModel_Vtx_0x1108_Vtx[11] = {
	#include <PikachuModel/Vtx_0x1108.vtx.inc.c>
};

/* Vtx: Vtx_0x11B8 @ 0x11B8 (15 vertices) */
Vtx dPikachuModel_Vtx_0x11B8_Vtx[15] = {
	#include <PikachuModel/Vtx_0x11B8.vtx.inc.c>
};

/* Vtx: Vtx_0x12A8 @ 0x12A8 (15 vertices) */
Vtx dPikachuModel_Vtx_0x12A8_Vtx[15] = {
	#include <PikachuModel/Vtx_0x12A8.vtx.inc.c>
};

/* Vtx: Vtx_0x1398 @ 0x1398 (9 vertices) */
Vtx dPikachuModel_Vtx_0x1398_Vtx[9] = {
	#include <PikachuModel/Vtx_0x1398.vtx.inc.c>
};

/* Vtx: Vtx_0x1428 @ 0x1428 (4 vertices) */
Vtx dPikachuModel_Vtx_0x1428_Vtx[4] = {
	#include <PikachuModel/Vtx_0x1428.vtx.inc.c>
};

/* Vtx: Vtx_0x1468 @ 0x1468 (15 vertices) */
Vtx dPikachuModel_Vtx_0x1468_Vtx[15] = {
	#include <PikachuModel/Vtx_0x1468.vtx.inc.c>
};

/* Vtx: Vtx_0x1558 @ 0x1558 (4 vertices) */
Vtx dPikachuModel_Vtx_0x1558_Vtx[4] = {
	#include <PikachuModel/Vtx_0x1558.vtx.inc.c>
};

/* Vtx: Vtx_0x1598 @ 0x1598 (6 vertices) */
Vtx dPikachuModel_Vtx_0x1598_Vtx[6] = {
	#include <PikachuModel/Vtx_0x1598.vtx.inc.c>
};

/* Vtx: Vtx_0x15F8 @ 0x15F8 (15 vertices) */
Vtx dPikachuModel_Vtx_0x15F8_Vtx[15] = {
	#include <PikachuModel/Vtx_0x15F8.vtx.inc.c>
};

/* Vtx: Vtx_0x16E8 @ 0x16E8 (4 vertices) */
Vtx dPikachuModel_Vtx_0x16E8_Vtx[4] = {
	#include <PikachuModel/Vtx_0x16E8.vtx.inc.c>
};

/* Vtx: Vtx_0x1728 @ 0x1728 (6 vertices) */
Vtx dPikachuModel_Vtx_0x1728_Vtx[6] = {
	#include <PikachuModel/Vtx_0x1728.vtx.inc.c>
};

/* Vtx: Vtx_0x1788 @ 0x1788 (5 vertices) */
Vtx dPikachuModel_Vtx_0x1788_Vtx[5] = {
	#include <PikachuModel/Vtx_0x1788.vtx.inc.c>
};

/* Vtx: Vtx_0x17D8 @ 0x17D8 (6 vertices) */
Vtx dPikachuModel_Vtx_0x17D8_Vtx[6] = {
	#include <PikachuModel/Vtx_0x17D8.vtx.inc.c>
};

/* Vtx: Vtx_0x1838 @ 0x1838 (8 vertices) */
Vtx dPikachuModel_Vtx_0x1838_Vtx[8] = {
	#include <PikachuModel/Vtx_0x1838.vtx.inc.c>
};

/* DisplayList: Joint_0x18B8 @ 0x18B8 (344 bytes, 43 cmds) */
Gfx dPikachuModel_Joint_0x18B8_DisplayList[43] = {
	#include <PikachuModel/Joint_0x18B8.dl.inc.c>
};

/* DisplayList: Joint_0x1A10 @ 0x1A10 (344 bytes, 43 cmds) */
Gfx dPikachuModel_Joint_0x1A10_DisplayList[43] = {
	#include <PikachuModel/Joint_0x1A10.dl.inc.c>
};

/* DisplayList: Joint_0x1B68 @ 0x1B68 (96 bytes, 12 cmds) */
Gfx dPikachuModel_Joint_0x1B68_DisplayList[12] = {
	#include <PikachuModel/Joint_0x1B68.dl.inc.c>
};

/* DisplayList: Joint_0x1BC8 @ 0x1BC8 (120 bytes, 15 cmds) */
Gfx dPikachuModel_Joint_0x1BC8_DisplayList[15] = {
	#include <PikachuModel/Joint_0x1BC8.dl.inc.c>
};

/* DisplayList: Joint_0x1C40 @ 0x1C40 (664 bytes, 83 cmds) */
Gfx dPikachuModel_Joint_0x1C40_DisplayList[83] = {
	#include <PikachuModel/Joint_0x1C40.dl.inc.c>
};

/* DisplayList: Joint_0x1ED8 @ 0x1ED8 (272 bytes, 34 cmds) */
Gfx dPikachuModel_Joint_0x1ED8_DisplayList[34] = {
	#include <PikachuModel/Joint_0x1ED8.dl.inc.c>
};

/* DisplayList: Joint_0x1FE8 @ 0x1FE8 (272 bytes, 34 cmds) */
Gfx dPikachuModel_Joint_0x1FE8_DisplayList[34] = {
	#include <PikachuModel/Joint_0x1FE8.dl.inc.c>
};

/* DisplayList: Joint_0x20F8 @ 0x20F8 (96 bytes, 12 cmds) */
Gfx dPikachuModel_Joint_0x20F8_DisplayList[12] = {
	#include <PikachuModel/Joint_0x20F8.dl.inc.c>
};

/* DisplayList: Joint_0x2158 @ 0x2158 (120 bytes, 15 cmds) */
Gfx dPikachuModel_Joint_0x2158_DisplayList[15] = {
	#include <PikachuModel/Joint_0x2158.dl.inc.c>
};

/* DisplayList: Joint_0x21D0 @ 0x21D0 (168 bytes, 21 cmds) */
Gfx dPikachuModel_Joint_0x21D0_DisplayList[21] = {
	#include <PikachuModel/Joint_0x21D0.dl.inc.c>
};

/* DisplayList: Joint_0x2278 @ 0x2278 (144 bytes, 18 cmds) */
Gfx dPikachuModel_Joint_0x2278_DisplayList[18] = {
	#include <PikachuModel/Joint_0x2278.dl.inc.c>
};

/* DisplayList: Joint_0x2308 @ 0x2308 (80 bytes, 10 cmds) */
Gfx dPikachuModel_Joint_0x2308_DisplayList[10] = {
	#include <PikachuModel/Joint_0x2308.dl.inc.c>
};

/* DisplayList: Joint_0x2358 @ 0x2358 (136 bytes, 17 cmds) */
Gfx dPikachuModel_Joint_0x2358_DisplayList[17] = {
	#include <PikachuModel/Joint_0x2358.dl.inc.c>
};

/* DisplayList: Joint_0x23E0 @ 0x23E0 (144 bytes, 18 cmds) */
Gfx dPikachuModel_Joint_0x23E0_DisplayList[18] = {
	#include <PikachuModel/Joint_0x23E0.dl.inc.c>
};

/* DisplayList: Joint_0x2470 @ 0x2470 (80 bytes, 10 cmds) */
Gfx dPikachuModel_Joint_0x2470_DisplayList[10] = {
	#include <PikachuModel/Joint_0x2470.dl.inc.c>
};

/* DisplayList: Joint_0x24C0 @ 0x24C0 (400 bytes, 50 cmds) */
Gfx dPikachuModel_Joint_0x24C0_DisplayList[50] = {
	#include <PikachuModel/Joint_0x24C0.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2650 (30 entries) */
DObjDesc dPikachuModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPikachuModel_Joint_0x18B8_DisplayList, { 0.0f, -53.765953063964844f, -29.27102279663086f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuModel_Joint_0x1A10_DisplayList, { 0.0f, 74.66741180419922f, 6.122064113616943f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 81.0f, -15.684199333190918f, 78.36808013916016f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -1.4000000192027073e-05f, 0.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPikachuModel_Joint_0x1B68_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.570796012878418f, 0.11376599967479706f, 5.330916881561279f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x1BC8_DisplayList, { 37.771175384521484f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.5982409715652466f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dPikachuModel_Joint_0x1C40_DisplayList, { 0.0f, 45.31428527832031f, 34.237003326416016f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 0.0f, -216.2157440185547f, -11.088044166564941f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x1ED8_DisplayList, { 63.755950927734375f, 88.70398712158203f, 10.843167304992676f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x1FE8_DisplayList, { -63.755950927734375f, 88.70398712158203f, 10.843167304992676f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -81.0f, -15.684199333190918f, 78.36808013916016f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -7.000000096013537e-06f, 0.0f, -4.3000000005122274e-05f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPikachuModel_Joint_0x20F8_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.570796012878418f, 3.255362033843994f, 2.1893250942230225f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x2158_DisplayList, { 37.771175384521484f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.5982339978218079f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 69.0f, -15.0f, 15.001185417175293f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dPikachuModel_Joint_0x21D0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 2.9279520511627197f, -3.0803680419921875f, 2.0813040733337402f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x2278_DisplayList, { 63.42793273925781f, 0.0f, 0.0f }, { 0.0f, 0.0f, 2.174038887023926f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 80.37613677978516f, -0.21921299397945404f, -1.9999999949504854e-06f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x2308_DisplayList, { 0.0f, 1.9999999949504854e-06f, 3.999999989900971e-06f }, { -3.0505619049072266f, -2.9360458850860596f, 2.3625431060791016f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -69.0f, -15.0f, 15.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dPikachuModel_Joint_0x2358_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.21364299952983856f, 0.061230000108480453f, -1.0603079795837402f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x23E0_DisplayList, { 63.42793273925781f, 0.0f, 0.0f }, { 0.0f, 0.0f, 2.1740429401397705f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 80.37613677978516f, -0.21921299397945404f, -1.9999999949504854e-06f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x2470_DisplayList, { 0.0f, 0.0f, 0.0f }, { 3.099905014038086f, -3.4694690704345703f, 2.366162061691284f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuModel_Joint_0x24C0_DisplayList, { 0.0f, -45.0f, -90.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void *)dPikachuModel_gap_0x2B78_sub_0x864, { 1.974566023152508e-32f, 0.0f, 0.0f }, { 1.984195819811238e-32f, 1.993825616469968e-32f, 2.0130850628506343e-32f }, { 0.0f, 2.022715153382952e-32f, 2.0516042494855544e-32f } },
	{ 0, (void*)0x00000000, { 2.0612340461442844e-32f, 2.0804934925249506e-32f, 0.0f }, { 2.0901232891836807e-32f, 2.109382735564347e-32f, 0.0f }, { 2.128642181945013e-32f, 0.0f, 2.138271978603743e-32f } },
};

/* Raw data from file offset 0x2B78 to 0x3F88 (5136 bytes) */
/* gap sub-block @ 0x2B78 (was gap+0x0, 20 bytes) */
u8 dPikachuModel_gap_0x2B78[20] = {
	#include <PikachuModel/gap_0x2B78.data.inc.c>
};

/* gap sub-block @ 0x2B8C (was gap+0x14, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x14[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0x2BFC (was gap+0x84, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x84[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x84.data.inc.c>
};

/* gap sub-block @ 0x2C58 (was gap+0xE0, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0xE0[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0xE0.data.inc.c>
};

/* gap sub-block @ 0x2CB4 (was gap+0x13C, 172 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x13C[172] = {
	#include <PikachuModel/gap_0x2B78_sub_0x13C.data.inc.c>
};

/* gap sub-block @ 0x2D60 (was gap+0x1E8, 200 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x1E8[200] = {
	#include <PikachuModel/gap_0x2B78_sub_0x1E8.data.inc.c>
};

/* gap sub-block @ 0x2E28 (was gap+0x2B0, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x2B0[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x2B0.data.inc.c>
};

/* gap sub-block @ 0x2E84 (was gap+0x30C, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x30C[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x30C.data.inc.c>
};

/* gap sub-block @ 0x2EF4 (was gap+0x37C, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x37C[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x37C.data.inc.c>
};

/* gap sub-block @ 0x2F64 (was gap+0x3EC, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x3EC[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x3EC.data.inc.c>
};

/* gap sub-block @ 0x2FC0 (was gap+0x448, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x448[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x448.data.inc.c>
};

/* gap sub-block @ 0x301C (was gap+0x4A4, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x4A4[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x4A4.data.inc.c>
};

/* gap sub-block @ 0x308C (was gap+0x514, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x514[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x514.data.inc.c>
};

/* gap sub-block @ 0x30E8 (was gap+0x570, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x570[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x570.data.inc.c>
};

/* gap sub-block @ 0x3144 (was gap+0x5CC, 52 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x5CC[52] = {
	#include <PikachuModel/gap_0x2B78_sub_0x5CC.data.inc.c>
};

/* gap sub-block @ 0x3178 (was gap+0x600, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x600[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x600.data.inc.c>
};

/* gap sub-block @ 0x31D4 (was gap+0x65C, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x65C[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x65C.data.inc.c>
};

/* gap sub-block @ 0x3230 (was gap+0x6B8, 92 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x6B8[92] = {
	#include <PikachuModel/gap_0x2B78_sub_0x6B8.data.inc.c>
};

/* gap sub-block @ 0x328C (was gap+0x714, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x714[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x714.data.inc.c>
};

/* gap sub-block @ 0x32FC (was gap+0x784, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x784[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x784.data.inc.c>
};

/* gap sub-block @ 0x336C (was gap+0x7F4, 112 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x7F4[112] = {
	#include <PikachuModel/gap_0x2B78_sub_0x7F4.data.inc.c>
};

/* gap sub-block @ 0x33DC (was gap+0x864, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x864[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x864.data.inc.c>
};

/* gap sub-block @ 0x33E0 (was gap+0x868, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x868[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x868.data.inc.c>
};

/* gap sub-block @ 0x33E4 (was gap+0x86C, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x86C[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x86C.data.inc.c>
};

/* gap sub-block @ 0x33E8 (was gap+0x870, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x870[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x870.data.inc.c>
};

/* gap sub-block @ 0x33EC (was gap+0x874, 12 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x874[12] = {
	#include <PikachuModel/gap_0x2B78_sub_0x874.data.inc.c>
};

/* gap sub-block @ 0x33F8 (was gap+0x880, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x880[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x880.data.inc.c>
};

/* gap sub-block @ 0x33FC (was gap+0x884, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x884[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x884.data.inc.c>
};

/* gap sub-block @ 0x3400 (was gap+0x888, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x888[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x888.data.inc.c>
};

/* gap sub-block @ 0x3404 (was gap+0x88C, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x88C[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x88C.data.inc.c>
};

/* gap sub-block @ 0x3408 (was gap+0x890, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x890[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x890.data.inc.c>
};

/* gap sub-block @ 0x340C (was gap+0x894, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x894[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x894.data.inc.c>
};

/* gap sub-block @ 0x3410 (was gap+0x898, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x898[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x898.data.inc.c>
};

/* gap sub-block @ 0x3414 (was gap+0x89C, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x89C[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x89C.data.inc.c>
};

/* gap sub-block @ 0x3418 (was gap+0x8A0, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x8A0[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x8A0.data.inc.c>
};

/* gap sub-block @ 0x341C (was gap+0x8A4, 4 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x8A4[4] = {
	#include <PikachuModel/gap_0x2B78_sub_0x8A4.data.inc.c>
};

/* gap sub-block @ 0x3420 (was gap+0x8A8, 16 bytes) */
u32 dPikachuModel_gap_0x2B78_sub_0x8A8[4] = {
	(u32)dPikachuModel_gap_0x2B78_sub_0x714,
	(u32)dPikachuModel_gap_0x2B78_sub_0x784,
	(u32)dPikachuModel_gap_0x2B78_sub_0x7F4,
	aobjEvent32End(),
};

/* gap sub-block @ 0x3430 (was gap+0x8B8, 108 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x8B8[27] = {
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1380,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1388,
	NULL,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1390,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1398,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13A0,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13B0,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13B8,
	NULL,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13C0,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13C8,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13D0,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13D8,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13E0,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13E8,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13F0,
	NULL,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x13F8,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1400,
	NULL,
};

/* u32 pointer array @ 0x349C (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x924[5] = {
	0x0D281CCA,
	0x0D291CE6,
	0x0D2A1CF0,
	0x0D2B1CFA,
	0x0D2C1D04,
};

/* u32 pointer array @ 0x34B0 (8 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x938[8] = {
	0x0D311D8E,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x0D321E9A,
	0x0D331E4E,
	0x0D341E02,
};

/* u32 pointer array @ 0x34D0 (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x958[5] = {
	0x0D351D84,
	0x0D361DD0,
	0x0D371DDA,
	0x0D381DE4,
	0x0D391DEE,
};

/* gap sub-block @ 0x34E4 (was gap+0x96C, 40 bytes) */
u8 dPikachuModel_gap_0x2B78_sub_0x96C[40] = {
	#include <PikachuModel/gap_0x2B78_sub_0x96C.data.inc.c>
};

/* u32 pointer array @ 0x350C (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x994[5] = {
	0x0D441EDC,
	0x0D451F28,
	0x0D461F32,
	0x0D471F3C,
	0x0D481F46,
};

/* u32 pointer array @ 0x3520 (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x9A8[5] = {
	0x0D491D4E,
	0x0D4A1D5C,
	0x0D4B1D66,
	0x0D4C1D70,
	0x0D4D1D7A,
};

/* u32 pointer array @ 0x3534 (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x9BC[5] = {
	0x0D4E1D4E,
	0x0D4F1D5C,
	0x0D501D66,
	0x0D511D70,
	0x0D521D7A,
};

/* u32 pointer array @ 0x3548 (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x9D0[5] = {
	0x0D531CCA,
	0x0D541CE6,
	0x0D551CF0,
	0x0D561CFA,
	0x0D571D04,
};

/* u32 pointer array @ 0x355C (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x9E4[5] = {
	0x0D582034,
	0x0D592042,
	0x0D5A204C,
	0x0D5B2056,
	0x0D5C2060,
};

/* u32 pointer array @ 0x3570 (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0x9F8[5] = {
	0x0D5D2034,
	0x0D5E2042,
	0x0D5F204C,
	0x0D602056,
	0x0D612060,
};

/* u32 pointer array @ 0x3584 (5 entries) */
u32 dPikachuModel_gap_0x2B78_sub_0xA0C[5] = {
	0x0D622034,
	0x0D632042,
	0x0D64204C,
	0x0D652056,
	0x0D712060,
};

/* MObjSub @ 0x3598 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xA20[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x009E, 0x000A, 0x0020, 0x0008,
		1,
		0.30025699734687805f, 0.49424299597740173f,
		0.4026859998703003f, 0.32351401448249817f,
		0.30025699734687805f, 0.4026859998703003f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x924,
		0x3004,
		0x02, 0x00,
		0x0010,
		0x0008, 0x0020, 0x0008,
		0.30025699734687805f, 0.49424299597740173f,
		0.30025699734687805f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3610 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xA98[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3688 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xB10[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3700 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xB88[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dPikachuModel_gap_0x2B78_sub_0x938,
		0x0076, 0x0007, 0x0040, 0x0010,
		0,
		0.10499999672174454f, 0.5049999952316284f,
		0.7900000214576721f, 0.27000001072883606f,
		0.10499999672174454f, 0.7900000214576721f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x958,
		0x3005,
		0x02, 0x00,
		0x0020,
		0x0010, 0x0040, 0x0010,
		0.10499999672174454f, 0.5049999952316284f,
		0.10499999672174454f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3778 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xC00[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)dPikachuModel_gap_0x2B78_sub_0x96C,
		0x00DC, 0x0027, 0x0040, 0x0010,
		1,
		0.6025999784469604f, 0.48750001192092896f,
		0.28999999165534973f, 0.25f,
		0.6025999784469604f, 0.28999999165534973f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x994,
		0x3005,
		0x02, 0x00,
		0x0020,
		0x0010, 0x0040, 0x0010,
		0.6025999784469604f, 0.48750001192092896f,
		0.6025999784469604f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x37F0 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xC78[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3868 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xCF0[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x003A, 0x0003, 0x000C, 0x0001,
		0,
		0.20160000026226044f, 0.0f,
		0.550000011920929f, 1.0f,
		0.20160000026226044f, 0.550000011920929f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x9A8,
		0x3004,
		0x02, 0x00,
		0x000C,
		0x0001, 0x000C, 0x0001,
		0.20160000026226044f, 0.0f,
		0.20160000026226044f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x38E0 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xD68[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x003A, 0x0003, 0x000C, 0x0001,
		0,
		0.20160000026226044f, 0.07999999821186066f,
		0.550000011920929f, 1.0f,
		0.20160000026226044f, 0.550000011920929f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x9BC,
		0x3004,
		0x02, 0x00,
		0x000C,
		0x0001, 0x000C, 0x0001,
		0.20160000026226044f, 0.07999999821186066f,
		0.20160000026226044f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3958 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xDE0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x39D0 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xE58[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3A48 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xED0[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x009E, 0x000A, 0x0020, 0x0008,
		1,
		0.30025699734687805f, 0.1920360028743744f,
		0.4026859998703003f, 0.2879270017147064f,
		0.30025699734687805f, 0.4026859998703003f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x9D0,
		0x3004,
		0x02, 0x00,
		0x0010,
		0x0008, 0x0020, 0x0008,
		0.30025699734687805f, 0.1920360028743744f,
		0.30025699734687805f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3AC0 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xF48[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3B38 */
MObjSub dPikachuModel_gap_0x2B78_sub_0xFC0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3BB0 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x1038[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3C28 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x10B0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3CA0 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x1128[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3D18 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x11A0[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x3200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3D90 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x1218[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0008, 0x0010, 0x0001,
		0,
		0.4400930106639862f, 0.0f,
		3.6990139484405518f, 1.0f,
		0.4400930106639862f, 3.6990139484405518f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x9E4,
		0x3204,
		0x02, 0x00,
		0x0010,
		0x0001, 0x0010, 0x0001,
		0.4400930106639862f, 0.0f,
		0.4400930106639862f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xD9, 0x33, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3E08 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x1290[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0003, 0x0010, 0x0001,
		0,
		-0.1762399971485138f, 0.0f,
		2.3716800212860107f, 1.0f,
		-0.1762399971485138f, 2.3716800212860107f,
		(void**)dPikachuModel_gap_0x2B78_sub_0x9F8,
		0x3004,
		0x02, 0x00,
		0x0010,
		0x0001, 0x0010, 0x0001,
		-0.1762399971485138f, 0.0f,
		-0.1762399971485138f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xCC, 0xCC, 0xCC, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3E80 */
MObjSub dPikachuModel_gap_0x2B78_sub_0x1308[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0020, 0x0009, 0x0010, 0x0001,
		0,
		-0.5264000296592712f, 0.0203000009059906f,
		1.559999942779541f, 1.0074000358581543f,
		-0.5264000296592712f, 1.559999942779541f,
		(void**)dPikachuModel_gap_0x2B78_sub_0xA0C,
		0x3004,
		0x02, 0x00,
		0x0010,
		0x0001, 0x0010, 0x0001,
		-0.5264000296592712f, 0.0203000009059906f,
		-0.5264000296592712f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0xCC, 0xCC, 0xCC, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x3EF8 (was gap+0x1380, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x1380[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xED0,
	NULL,
};

/* gap sub-block @ 0x3F00 (was gap+0x1388, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x1388[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xA20,
	NULL,
};

/* gap sub-block @ 0x3F08 (was gap+0x1390, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x1390[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xB10,
	NULL,
};

/* gap sub-block @ 0x3F10 (was gap+0x1398, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x1398[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xA98,
	NULL,
};

/* gap sub-block @ 0x3F18 (was gap+0x13A0, 16 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13A0[4] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xB88,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xC00,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xC78,
	NULL,
};

/* gap sub-block @ 0x3F28 (was gap+0x13B0, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13B0[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xCF0,
	NULL,
};

/* gap sub-block @ 0x3F30 (was gap+0x13B8, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13B8[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xD68,
	NULL,
};

/* gap sub-block @ 0x3F38 (was gap+0x13C0, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13C0[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xE58,
	NULL,
};

/* gap sub-block @ 0x3F40 (was gap+0x13C8, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13C8[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xDE0,
	NULL,
};

/* gap sub-block @ 0x3F48 (was gap+0x13D0, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13D0[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1038,
	NULL,
};

/* gap sub-block @ 0x3F50 (was gap+0x13D8, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13D8[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xFC0,
	NULL,
};

/* gap sub-block @ 0x3F58 (was gap+0x13E0, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13E0[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0xF48,
	NULL,
};

/* gap sub-block @ 0x3F60 (was gap+0x13E8, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13E8[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x11A0,
	NULL,
};

/* gap sub-block @ 0x3F68 (was gap+0x13F0, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13F0[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1128,
	NULL,
};

/* gap sub-block @ 0x3F70 (was gap+0x13F8, 8 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x13F8[2] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x10B0,
	NULL,
};

/* gap sub-block @ 0x3F78 (was gap+0x1400, 16 bytes) */
MObjSub *dPikachuModel_gap_0x2B78_sub_0x1400[4] = {
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1218,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1290,
	(MObjSub *)dPikachuModel_gap_0x2B78_sub_0x1308,
	NULL,
};

/* Vtx: Vtx_0x3F88 @ 0x3F88 (23 vertices) */
Vtx dPikachuModel_Vtx_0x3F88_Vtx[23] = {
	#include <PikachuModel/Vtx_0x3F88.vtx.inc.c>
};

/* Vtx: Vtx_0x40F8 @ 0x40F8 (1 vertices) */
Vtx dPikachuModel_Vtx_0x40F8_Vtx[1] = {
	#include <PikachuModel/Vtx_0x40F8.vtx.inc.c>
};

/* Vtx: Vtx_0x4108 @ 0x4108 (8 vertices) */
Vtx dPikachuModel_Vtx_0x4108_Vtx[8] = {
	#include <PikachuModel/Vtx_0x4108.vtx.inc.c>
};

/* Vtx: Vtx_0x4188 @ 0x4188 (6 vertices) */
Vtx dPikachuModel_Vtx_0x4188_Vtx[6] = {
	#include <PikachuModel/Vtx_0x4188.vtx.inc.c>
};

/* Vtx: Vtx_0x41E8 @ 0x41E8 (2 vertices) */
Vtx dPikachuModel_Vtx_0x41E8_Vtx[2] = {
	#include <PikachuModel/Vtx_0x41E8.vtx.inc.c>
};

/* Vtx: Vtx_0x4208 @ 0x4208 (13 vertices) */
Vtx dPikachuModel_Vtx_0x4208_Vtx[13] = {
	#include <PikachuModel/Vtx_0x4208.vtx.inc.c>
};

/* Vtx: Vtx_0x42D8 @ 0x42D8 (14 vertices) */
Vtx dPikachuModel_Vtx_0x42D8_Vtx[14] = {
	#include <PikachuModel/Vtx_0x42D8.vtx.inc.c>
};

/* Vtx: Vtx_0x43B8 @ 0x43B8 (13 vertices) */
Vtx dPikachuModel_Vtx_0x43B8_Vtx[13] = {
	#include <PikachuModel/Vtx_0x43B8.vtx.inc.c>
};

/* Vtx: Vtx_0x4488 @ 0x4488 (4 vertices) */
Vtx dPikachuModel_Vtx_0x4488_Vtx[4] = {
	#include <PikachuModel/Vtx_0x4488.vtx.inc.c>
};

/* Vtx: Vtx_0x44C8 @ 0x44C8 (4 vertices) */
Vtx dPikachuModel_Vtx_0x44C8_Vtx[4] = {
	#include <PikachuModel/Vtx_0x44C8.vtx.inc.c>
};

/* Vtx: Vtx_0x4508 @ 0x4508 (6 vertices) */
Vtx dPikachuModel_Vtx_0x4508_Vtx[6] = {
	#include <PikachuModel/Vtx_0x4508.vtx.inc.c>
};

/* Vtx: Vtx_0x4568 @ 0x4568 (2 vertices) */
Vtx dPikachuModel_Vtx_0x4568_Vtx[2] = {
	#include <PikachuModel/Vtx_0x4568.vtx.inc.c>
};

/* Vtx: Vtx_0x4588 @ 0x4588 (10 vertices) */
Vtx dPikachuModel_Vtx_0x4588_Vtx[10] = {
	#include <PikachuModel/Vtx_0x4588.vtx.inc.c>
};

/* Vtx: Vtx_0x4628 @ 0x4628 (3 vertices) */
Vtx dPikachuModel_Vtx_0x4628_Vtx[3] = {
	#include <PikachuModel/Vtx_0x4628.vtx.inc.c>
};

/* Vtx: Vtx_0x4658 @ 0x4658 (5 vertices) */
Vtx dPikachuModel_Vtx_0x4658_Vtx[5] = {
	#include <PikachuModel/Vtx_0x4658.vtx.inc.c>
};

/* Vtx: Vtx_0x46A8 @ 0x46A8 (10 vertices) */
Vtx dPikachuModel_Vtx_0x46A8_Vtx[10] = {
	#include <PikachuModel/Vtx_0x46A8.vtx.inc.c>
};

/* Vtx: Vtx_0x4748 @ 0x4748 (3 vertices) */
Vtx dPikachuModel_Vtx_0x4748_Vtx[3] = {
	#include <PikachuModel/Vtx_0x4748.vtx.inc.c>
};

/* Vtx: Vtx_0x4778 @ 0x4778 (5 vertices) */
Vtx dPikachuModel_Vtx_0x4778_Vtx[5] = {
	#include <PikachuModel/Vtx_0x4778.vtx.inc.c>
};

/* Vtx: Vtx_0x47C8 @ 0x47C8 (6 vertices) */
Vtx dPikachuModel_Vtx_0x47C8_Vtx[6] = {
	#include <PikachuModel/Vtx_0x47C8.vtx.inc.c>
};

/* Vtx: Vtx_0x4828 @ 0x4828 (8 vertices) */
Vtx dPikachuModel_Vtx_0x4828_Vtx[8] = {
	#include <PikachuModel/Vtx_0x4828.vtx.inc.c>
};

/* Vtx: Vtx_0x48A8 @ 0x48A8 (5 vertices) */
Vtx dPikachuModel_Vtx_0x48A8_Vtx[5] = {
	#include <PikachuModel/Vtx_0x48A8.vtx.inc.c>
};

/* DisplayList: Joint_0x48F8 @ 0x48F8 (296 bytes, 37 cmds) */
Gfx dPikachuModel_Joint_0x48F8_DisplayList[37] = {
	#include <PikachuModel/Joint_0x48F8.dl.inc.c>
};

/* DisplayList: Joint_0x4A20 @ 0x4A20 (320 bytes, 40 cmds) */
Gfx dPikachuModel_Joint_0x4A20_DisplayList[40] = {
	#include <PikachuModel/Joint_0x4A20.dl.inc.c>
};

/* DisplayList: Joint_0x4B60 @ 0x4B60 (80 bytes, 10 cmds) */
Gfx dPikachuModel_Joint_0x4B60_DisplayList[10] = {
	#include <PikachuModel/Joint_0x4B60.dl.inc.c>
};

/* DisplayList: Joint_0x4BB0 @ 0x4BB0 (96 bytes, 12 cmds) */
Gfx dPikachuModel_Joint_0x4BB0_DisplayList[12] = {
	#include <PikachuModel/Joint_0x4BB0.dl.inc.c>
};

/* DisplayList: Joint_0x4C10 @ 0x4C10 (608 bytes, 76 cmds) */
Gfx dPikachuModel_Joint_0x4C10_DisplayList[76] = {
	#include <PikachuModel/Joint_0x4C10.dl.inc.c>
};

/* DisplayList: Joint_0x4E70 @ 0x4E70 (192 bytes, 24 cmds) */
Gfx dPikachuModel_Joint_0x4E70_DisplayList[24] = {
	#include <PikachuModel/Joint_0x4E70.dl.inc.c>
};

/* DisplayList: Joint_0x4F30 @ 0x4F30 (192 bytes, 24 cmds) */
Gfx dPikachuModel_Joint_0x4F30_DisplayList[24] = {
	#include <PikachuModel/Joint_0x4F30.dl.inc.c>
};

/* DisplayList: Joint_0x4FF0 @ 0x4FF0 (80 bytes, 10 cmds) */
Gfx dPikachuModel_Joint_0x4FF0_DisplayList[10] = {
	#include <PikachuModel/Joint_0x4FF0.dl.inc.c>
};

/* DisplayList: Joint_0x5040 @ 0x5040 (96 bytes, 12 cmds) */
Gfx dPikachuModel_Joint_0x5040_DisplayList[12] = {
	#include <PikachuModel/Joint_0x5040.dl.inc.c>
};

/* DisplayList: Joint_0x50A0 @ 0x50A0 (104 bytes, 13 cmds) */
Gfx dPikachuModel_Joint_0x50A0_DisplayList[13] = {
	#include <PikachuModel/Joint_0x50A0.dl.inc.c>
};

/* DisplayList: Joint_0x5108 @ 0x5108 (112 bytes, 14 cmds) */
Gfx dPikachuModel_Joint_0x5108_DisplayList[14] = {
	#include <PikachuModel/Joint_0x5108.dl.inc.c>
};

/* DisplayList: Joint_0x5178 @ 0x5178 (72 bytes, 9 cmds) */
Gfx dPikachuModel_Joint_0x5178_DisplayList[9] = {
	#include <PikachuModel/Joint_0x5178.dl.inc.c>
};

/* DisplayList: Joint_0x51C0 @ 0x51C0 (104 bytes, 13 cmds) */
Gfx dPikachuModel_Joint_0x51C0_DisplayList[13] = {
	#include <PikachuModel/Joint_0x51C0.dl.inc.c>
};

/* DisplayList: Joint_0x5228 @ 0x5228 (112 bytes, 14 cmds) */
Gfx dPikachuModel_Joint_0x5228_DisplayList[14] = {
	#include <PikachuModel/Joint_0x5228.dl.inc.c>
};

/* DisplayList: Joint_0x5298 @ 0x5298 (72 bytes, 9 cmds) */
Gfx dPikachuModel_Joint_0x5298_DisplayList[9] = {
	#include <PikachuModel/Joint_0x5298.dl.inc.c>
};

/* DisplayList: Joint_0x52E0 @ 0x52E0 (432 bytes, 54 cmds) */
Gfx dPikachuModel_Joint_0x52E0_DisplayList[54] = {
	#include <PikachuModel/Joint_0x52E0.dl.inc.c>
};

/* DObjDesc: JointTree_0x5490 @ 0x5490 (30 entries) */
DObjDesc dPikachuModel_JointTree_0x5490[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPikachuModel_Joint_0x48F8_DisplayList, { 0.0f, -53.765953063964844f, -29.27102279663086f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuModel_Joint_0x4A20_DisplayList, { 0.0f, 74.66741180419922f, 6.122064113616943f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 81.0f, -15.684199333190918f, 78.36808013916016f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -1.4000000192027073e-05f, 0.0f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPikachuModel_Joint_0x4B60_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.570796012878418f, 0.11376599967479706f, 5.330916881561279f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x4BB0_DisplayList, { 37.771175384521484f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.5982409715652466f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dPikachuModel_Joint_0x4C10_DisplayList, { 0.0f, 45.31428527832031f, 34.237003326416016f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 0.0f, -216.2157440185547f, -11.088044166564941f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x4E70_DisplayList, { 63.755950927734375f, 88.70398712158203f, 10.843165397644043f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x4F30_DisplayList, { -63.755950927734375f, 88.70398712158203f, 10.843165397644043f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -81.0f, -15.684199333190918f, 78.36808013916016f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -7.000000096013537e-06f, 0.0f, -4.3000000005122274e-05f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dPikachuModel_Joint_0x4FF0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 1.570796012878418f, 3.255362033843994f, 2.1893250942230225f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x5040_DisplayList, { 37.771175384521484f, 0.0f, 0.0f }, { 0.0f, 0.0f, -0.5982339978218079f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 69.0f, -15.0f, 15.001185417175293f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dPikachuModel_Joint_0x50A0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 2.9279520511627197f, -3.0803680419921875f, 2.0813040733337402f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x5108_DisplayList, { 63.42793273925781f, 0.0f, 0.0f }, { 0.0f, 0.0f, 2.174038887023926f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 80.37613677978516f, -0.21921299397945404f, -1.9999999949504854e-06f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x5178_DisplayList, { 0.0f, 1.9999999949504854e-06f, 3.999999989900971e-06f }, { -3.0505619049072266f, -2.9360458850860596f, 2.3625431060791016f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -69.0f, -15.0f, 15.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dPikachuModel_Joint_0x51C0_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.21364299952983856f, 0.061230000108480453f, -1.0603079795837402f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dPikachuModel_Joint_0x5228_DisplayList, { 63.42793273925781f, 0.0f, 0.0f }, { 0.0f, 0.0f, 2.1740429401397705f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 80.37613677978516f, -0.21921299397945404f, -1.9999999949504854e-06f }, { 0.0f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dPikachuModel_Joint_0x5298_DisplayList, { 0.0f, 0.0f, 0.0f }, { 3.099905014038086f, -3.4694690704345703f, 2.366162061691284f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPikachuModel_Joint_0x52E0_DisplayList, { 0.0f, -45.0f, -90.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, -150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void *)dPikachuModel_gap_0x59B8_sub_0x83C, { 1.7859966201194423e-25f, 0.0f, 0.0f }, { 1.7940746790484219e-25f, 1.8021527379774015e-25f, 1.8183087325758442e-25f }, { 0.0f, 1.8263870380238567e-25f, 1.8506209682917626e-25f } },
	{ 0, (void*)0x00000000, { 1.8586990272207422e-25f, 1.874855021819185e-25f, 0.0f }, { 1.8829330807481646e-25f, 1.8990890753466074e-25f, 0.0f }, { 1.9152450699450501e-25f, 0.0f, 1.9233231288740297e-25f } },
};

/* Raw data from file offset 0x59B8 to 0x7350 (6552 bytes) */
/* gap sub-block @ 0x59B8 (was gap+0x0, 20 bytes) */
u8 dPikachuModel_gap_0x59B8[20] = {
	#include <PikachuModel/gap_0x59B8.data.inc.c>
};

/* gap sub-block @ 0x59CC (was gap+0x14, 108 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x14[27] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5A38 (was gap+0x80, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x80[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5A90 (was gap+0xD8, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0xD8[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5AE8 (was gap+0x130, 168 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x130[42] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(47),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32Wait(46),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5B90 (was gap+0x1D8, 176 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x1D8[44] = {
	aobjEvent32SetValAfter(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetVal(0x001, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(47),
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40A00000,  /* 5.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40C00000,  /* 6.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x40E00000,  /* 7.0f */
	aobjEvent32SetValAfterBlock(0x001, 1),
	    0x41000000,  /* 8.0f */
	aobjEvent32SetValAfter(0x001, 1),
	    0x41100000,  /* 9.0f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5C40 (was gap+0x288, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x288[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5C98 (was gap+0x2E0, 108 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x2E0[27] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5D04 (was gap+0x34C, 108 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x34C[27] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5D70 (was gap+0x3B8, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x3B8[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5DC8 (was gap+0x410, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x410[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5E20 (was gap+0x468, 108 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x468[27] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5E8C (was gap+0x4D4, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x4D4[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5EE4 (was gap+0x52C, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x52C[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5F3C (was gap+0x584, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x584[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5F94 (was gap+0x5DC, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x5DC[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x5FEC (was gap+0x634, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x634[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x6044 (was gap+0x68C, 88 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x68C[22] = {
	aobjEvent32SetExtValAfterBlock(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfterBlock(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x609C (was gap+0x6E4, 128 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x6E4[32] = {
	aobjEvent32SetExtValAfter(0x019, 0),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xC8C828FF,  /* -409927.96875f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xE8A828FF,  /* -6.352910508572228e+24f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xFFD933FF,  /* nanf */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x019, 1),
	    0xA5FF10FF,  /* -4.424696563851328e-16f */
	    0xFFFFFF00,  /* nanf */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x611C (was gap+0x764, 108 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x764[27] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x6188 (was gap+0x7D0, 108 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x7D0[27] = {
	aobjEvent32SetExtValAfter(0x018, 0),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32SetValAfterBlock(0x200, 1),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfter(0x200, 1),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetExtValAfter(0x018, 1),
	    0xFFFFFF00,  /* nanf */
	    0xCCCCCC00,  /* -107372544.0f */
	aobjEvent32Wait(97),
	aobjEvent32End(),
};

/* gap sub-block @ 0x61F4 (was gap+0x83C, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x83C[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x83C.data.inc.c>
};

/* gap sub-block @ 0x61F8 (was gap+0x840, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x840[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x840.data.inc.c>
};

/* gap sub-block @ 0x61FC (was gap+0x844, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x844[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x844.data.inc.c>
};

/* gap sub-block @ 0x6200 (was gap+0x848, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x848[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x848.data.inc.c>
};

/* gap sub-block @ 0x6204 (was gap+0x84C, 12 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x84C[12] = {
	#include <PikachuModel/gap_0x59B8_sub_0x84C.data.inc.c>
};

/* gap sub-block @ 0x6210 (was gap+0x858, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x858[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x858.data.inc.c>
};

/* gap sub-block @ 0x6214 (was gap+0x85C, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x85C[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x85C.data.inc.c>
};

/* gap sub-block @ 0x6218 (was gap+0x860, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x860[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x860.data.inc.c>
};

/* gap sub-block @ 0x621C (was gap+0x864, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x864[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x864.data.inc.c>
};

/* gap sub-block @ 0x6220 (was gap+0x868, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x868[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x868.data.inc.c>
};

/* gap sub-block @ 0x6224 (was gap+0x86C, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x86C[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x86C.data.inc.c>
};

/* gap sub-block @ 0x6228 (was gap+0x870, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x870[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x870.data.inc.c>
};

/* gap sub-block @ 0x622C (was gap+0x874, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x874[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x874.data.inc.c>
};

/* gap sub-block @ 0x6230 (was gap+0x878, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x878[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x878.data.inc.c>
};

/* gap sub-block @ 0x6234 (was gap+0x87C, 4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x87C[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x87C.data.inc.c>
};

/* gap sub-block @ 0x6238 (was gap+0x880, 28 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x880[28] = {
	#include <PikachuModel/gap_0x59B8_sub_0x880.data.inc.c>
};

/* u32 pointer array @ 0x6254 (3 entries) */
u32 dPikachuModel_gap_0x59B8_sub_0x89C[3] = {
	0x18961D0E,
	0x18971D3A,
	0x18A31D44,
};

/* MObjSub @ 0x6260 */
MObjSub dPikachuModel_gap_0x59B8_sub_0x8A8[1] = {
	{
		0x0000,
		0x02, 0x02,
		(void**)0x00000000,
		0x0040, 0x0002, 0x0020, 0x0020,
		1,
		-0.03759999945759773f, 0.0f,
		1.0f, 1.0f,
		-0.03759999945759773f, 1.0f,
		(void**)dPikachuModel_gap_0x59B8_sub_0x89C,
		0x0004,
		0x02, 0x00,
		0x0010,
		0x0010, 0x0020, 0x0020,
		-0.03759999945759773f, 0.0f,
		-0.03759999945759773f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x62D8 */
MObjSub dPikachuModel_gap_0x59B8_sub_0x920[1] = {
	{
		0x0000,
		0x00, 0x02,
		(void**)0x00000000,
		0x0000, 0x0000, 0x0000, 0x0000,
		0,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0.0f, 0.0f,
		(void**)0x00000000,
		0x0200,
		0x00, 0x02,
		0x0000,
		0x0000, 0x0000, 0x0000,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0x5B, 0x79, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* gap sub-block @ 0x6350 (was gap+0x998, 16 bytes) */
MObjSub *dPikachuModel_gap_0x59B8_sub_0x998[4] = {
	(MObjSub *)dPikachuModel_gap_0x59B8_sub_0x8A8,
	(MObjSub *)dPikachuModel_gap_0x59B8_sub_0x920,
	NULL,
	NULL,
};

/* gap sub-block @ 0x6360 (was gap+0x9A8, 64 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x9A8[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x9A8.vtx.inc.c>
};

/* gap sub-block @ 0x63A0 (was gap+0x9E8, 80 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x9E8[5] = {
	#include <PikachuModel/gap_0x59B8_sub_0x9E8.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0xA38 @ 0x63F0 (34 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0xA38[34] = {
	#include <PikachuModel/gap_0x59B8_sub_0xA38.dl.inc.c>
};

/* Raw tail after 1 DL(s) @ 0x6500 (4 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0xA38_post[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0xA38_post.data.inc.c>
};

/* gap sub-block @ 0x6504 (was gap+0xB4C, 40 bytes) */
u16 dPikachuModel_gap_0x59B8_sub_0xB4C[20] = {
	#include <PikachuModel/gap_0x59B8_sub_0xB4C.palette.inc.c>
};

/* gap sub-block @ 0x652C (was gap+0xB74, 32 bytes) */
u16 dPikachuModel_gap_0x59B8_sub_0xB74[16] = {
	#include <PikachuModel/gap_0x59B8_sub_0xB74.palette.inc.c>
};

/* gap sub-block @ 0x654C (was gap+0xB94, 20 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0xB94[5] = {
	(u32)dPikachuModel_gap_0x59B8_sub_0xB4C,
	(u32)dPikachuModel_gap_0x59B8_sub_0xB74,
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* gap sub-block @ 0x6560 (was gap+0xBA8, 144 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0xBA8[9] = {
	#include <PikachuModel/gap_0x59B8_sub_0xBA8.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0xC38 @ 0x65F0 (13 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0xC38[13] = {
	#include <PikachuModel/gap_0x59B8_sub_0xC38.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6660 (was gap+0xCA8, 224 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0xCA8[14] = {
	#include <PikachuModel/gap_0x59B8_sub_0xCA8.vtx.inc.c>
};

/* gap sub-block @ 0x6740 (was gap+0xD88, 288 bytes) */
Gfx dPikachuModel_DL_0x6740[36] = {
	#include <PikachuModel/DL_0x6740.dl.inc.c>
};

/* gap sub-block @ 0x6860 (was gap+0xEA8, 208 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0xEA8[13] = {
	#include <PikachuModel/gap_0x59B8_sub_0xEA8.vtx.inc.c>
};

/* gap sub-block @ 0x6930 (was gap+0xF78, 432 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0xF78[27] = {
	#include <PikachuModel/gap_0x59B8_sub_0xF78.vtx.inc.c>
};

/* gap sub-block @ 0x6AE0 (was gap+0x1128, 448 bytes) */
Gfx dPikachuModel_DL_0x6AE0[56] = {
	#include <PikachuModel/DL_0x6AE0.dl.inc.c>
};

/* gap sub-block @ 0x6CA0 (was gap+0x12E8, 80 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x12E8[5] = {
	#include <PikachuModel/gap_0x59B8_sub_0x12E8.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0x1338 @ 0x6CF0 (11 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0x1338[11] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1338.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6D50 (was gap+0x1398, 160 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x1398[10] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1398.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0x1438 @ 0x6DF0 (13 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0x1438[13] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1438.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6E60 (was gap+0x14A8, 160 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x14A8[10] = {
	#include <PikachuModel/gap_0x59B8_sub_0x14A8.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0x1548 @ 0x6F00 (13 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0x1548[13] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1548.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x6F70 (was gap+0x15B8, 160 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x15B8[10] = {
	#include <PikachuModel/gap_0x59B8_sub_0x15B8.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0x1658 @ 0x7010 (13 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0x1658[13] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1658.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x7080 (was gap+0x16C8, 80 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x16C8[5] = {
	#include <PikachuModel/gap_0x59B8_sub_0x16C8.vtx.inc.c>
};

/* gap sub-block @ 0x70D0 (was gap+0x1718, 96 bytes) */
Gfx dPikachuModel_DL_0x70D0[12] = {
	#include <PikachuModel/DL_0x70D0.dl.inc.c>
};

/* gap sub-block @ 0x7130 (was gap+0x1778, 176 bytes) */
u32 dPikachuModel_gap_0x59B8_sub_0x1778[44] = {
	aobjEvent32EndRaw(0x059, 32762),
	aobjEvent32EndRaw(0x01A, 0),
	aobjEvent32End(),
	    0xFFFFFF00,
	aobjEvent32EndRaw(0x05D, 32761),
	    0xFFFF0000,
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFFF5000E,
	    0xFFE70000,
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFFE90013,
	aobjEvent32EndRaw(0x00E, 0),
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xFFFAFFF7,
	    0xFFFF0000,
	aobjEvent32End(),
	    0xFFFFFF00,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xFCFFFE05,
	    0xFF167DFF,
	    0xD7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 20490),
	(u32)dPikachuModel_gap_0x59B8_sub_0x1778,
	aobjEvent32SetValBlock(0x010, 1540),
	    0x00080402,  /* 7.36121701488327e-40f */
	aobjEvent32SetValBlock(0x008, 1536),
	    0x00060800,  /* 5.538828362028845e-40f */
	aobjEvent32SetValBlock(0x000, 516),
	aobjEvent32EndRaw(0x010, 512),
	    0xE7000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 0),
	    0xDF000000,
	aobjEvent32End(),
};

/* gap sub-block @ 0x71E0 (was gap+0x1828, 64 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x1828[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1828.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0x1868 @ 0x7220 (11 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0x1868[11] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1868.dl.inc.c>
};

PAD(8);

/* gap sub-block @ 0x7280 (was gap+0x18C8, 64 bytes) */
Vtx dPikachuModel_gap_0x59B8_sub_0x18C8[4] = {
	#include <PikachuModel/gap_0x59B8_sub_0x18C8.vtx.inc.c>
};

/* Gfx DL: gap_0x59B8_sub_0x1908 @ 0x72C0 (11 cmds) */
Gfx dPikachuModel_gap_0x59B8_sub_0x1908[11] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1908.dl.inc.c>
};

/* Raw tail after DL @ 0x7318 (16 bytes) */
u8 dPikachuModel_gap_0x59B8_sub_0x1908_post[16] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1908_post.data.inc.c>
};

/* gap sub-block @ 0x7328 (was gap+0x1970, 40 bytes) */
u16 dPikachuModel_gap_0x59B8_sub_0x1970[20] = {
	#include <PikachuModel/gap_0x59B8_sub_0x1970.palette.inc.c>
};

/* Texture data @ 0x7350 (528 bytes) */
/* @tex fmt=CI4 dim=145x57 */
u8 dPikachuModel_Tex_0x7350[528] = {
	#include <PikachuModel/Tex_0x7350.tex.inc.c>
};

/* Texture data @ 0x7560 (2968 bytes) */
/* @tex fmt=CI4 dim=13x1 */
u8 dPikachuModel_Tex_0x7560[2968] = {
	#include <PikachuModel/Tex_0x7560.tex.inc.c>
};

/* Texture data @ 0x80F8 (4904 bytes) */
/* @tex fmt=CI4 dim=16x9 */
u8 dPikachuModel_Tex_0x80F8[4904] = {
	#include <PikachuModel/Tex_0x80F8.tex.inc.c>
};

/* MObjSub-list head @ 0x9420 — 6-entry MObjSub** array.
 * The real MObjSub data starts at +0x18 (dPikachuModel_ThunderTrailMObjSub_MObjSub_real below). */
MObjSub **dPikachuModel_ThunderTrailMObjSub_MObjSub[1] = {
	NULL,
};

/* Texture-pointer sprites array (was MObjSub**[] tail starting at +0x4). */
void *dPikachuModel_ThunderTrailMObjSub_MObjSub_sprites[5] = {
	(void *)((u8*)&dPikachuModel_Tex_0x80F8 + 0xF28),
	(void *)((u8*)&dPikachuModel_Tex_0x80F8 + 0xB20),
	(void *)((u8*)&dPikachuModel_Tex_0x80F8 + 0x718),
	(void *)((u8*)&dPikachuModel_Tex_0x80F8 + 0x310),
	NULL,
};

/* The real MObjSub @ +0x18 (was folded into the prior
 * MObjSub-typed declaration). */
MObjSub dPikachuModel_ThunderTrailMObjSub_MObjSub_real[1] = {
	{
		0x0000,
		G_IM_FMT_IA, G_IM_SIZ_16b,
		(void**)dPikachuModel_ThunderTrailMObjSub_MObjSub_sprites,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_IA, G_IM_SIZ_8b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002001,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0xFF, 0xFF, 0x66, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x9498 to 0x95B0 (280 bytes) */
/* gap sub-block @ 0x94B0 (was gap+0x18, 8 bytes) */
MObjSub *dPikachuModel_gap_0x9498_sub_0x18[2] = {
	&dPikachuModel_ThunderTrailMObjSub_MObjSub_real,
	NULL,
};

/* gap sub-block @ 0x94B8 (was gap+0x20, 64 bytes) */
Vtx dPikachuModel_gap_0x9498_sub_0x20[4] = {
	#include <PikachuModel/gap_0x9498_sub_0x20.vtx.inc.c>
};

/* gap sub-block @ 0x94F8 (was gap+0x60, 184 bytes) */
Gfx dPikachuModel_DL_0x94F8[23] = {
	#include <PikachuModel/DL_0x94F8.dl.inc.c>
};

/* DObjDesc: ThunderTrailDObjDesc @ 0x95B0 (3 entries) */
DObjDesc dPikachuModel_ThunderTrailDObjDesc[] = {
	{ 1, (void*)dPikachuModel_DL_0x94F8, { 5.605193857299268e-45f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 3.60133705331478e-43f, 3.879131357713549e-37f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 9.219703116178701e-41f, 1.2196040875706727e-37f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 1.401298464324817e-45f, 2.387866953589904e-38f, 5.348614539027114e-37f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 3.60133705331478e-43f } },
};

/* Raw data from file offset 0x9634 to 0x98D8 (676 bytes) */
/* gap sub-block @ 0x9634 (was gap+0x0, 404 bytes) */
u8 dPikachuModel_gap_0x9634[404] = {
	#include <PikachuModel/gap_0x9634.data.inc.c>
};

/* gap sub-block @ 0x97C8 (was gap+0x194, 64 bytes) */
Vtx dPikachuModel_gap_0x9634_sub_0x194[4] = {
	#include <PikachuModel/gap_0x9634_sub_0x194.vtx.inc.c>
};

/* Gfx DL: gap_0x9634_sub_0x1D4 @ 0x9808 (23 cmds) */
Gfx dPikachuModel_gap_0x9634_sub_0x1D4[23] = {
	#include <PikachuModel/gap_0x9634_sub_0x1D4.dl.inc.c>
};

/* Raw tail after DL @ 0x98C0 (24 bytes) */
u8 dPikachuModel_gap_0x9634_sub_0x1D4_post[24] = {
	#include <PikachuModel/gap_0x9634_sub_0x1D4_post.data.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dPikachuModel_Stock_tex[88] = {
	#include <PikachuModel/Stock.ci4.inc.c>
};

/* Palette: @ 0x9930 (16 colors RGBA5551) */
u16 dPikachuModel_palette_0x9930[16] = {
	#include <PikachuModel/palette_0x9930.palette.inc.c>
};

/* "Stock LUTs" — palette frames cycled by FTSprites.stock_luts (PikachuMain).
 * dPikachuMain_stock_luts[5] targets palette_0x9930, gap_0x9950_sub_0x{8,30,58,80}.
 * Each frame is 16 colors RGBA5551 (32 bytes); first 4 trail an 8-byte pad,
 * last has none. The standalone gap_0x9950[8] is the trailing pad of palette_0x9930. */
u16 dPikachuModel_gap_0x9950[4] = {
	#include <PikachuModel/gap_0x9950.palette.inc.c>
};

u16 dPikachuModel_gap_0x9950_sub_0x8[20] = {
	#include <PikachuModel/gap_0x9950_sub_0x8.palette.inc.c>
};

u16 dPikachuModel_gap_0x9950_sub_0x30[20] = {
	#include <PikachuModel/gap_0x9950_sub_0x30.palette.inc.c>
};

u16 dPikachuModel_gap_0x9950_sub_0x58[20] = {
	#include <PikachuModel/gap_0x9950_sub_0x58.palette.inc.c>
};

u16 dPikachuModel_gap_0x9950_sub_0x80[16] = {
	#include <PikachuModel/gap_0x9950_sub_0x80.palette.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dPikachuModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dPikachuModel_Stock_tex, 10, 0 },
};

Sprite dPikachuModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dPikachuModel_palette_0x9930,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dPikachuModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: FTEmblem */

Gfx dPikachuModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (24(32)x24 i4) */
u8 dPikachuModel_FTEmblem_tex[384] = {
	#include <PikachuModel/FTEmblem.i4.inc.c>
};

Bitmap dPikachuModel_FTEmblem_bitmaps[] = {
	{ 24, 32, 0, 0, dPikachuModel_FTEmblem_tex, 24, 0 },
};

/* Sprite: FTEmblem (24x24 i4) */
Sprite dPikachuModel_FTEmblem = {
	0, 0,
	24, 24,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	24, 24,
	4, 0,
	(Bitmap*)dPikachuModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

