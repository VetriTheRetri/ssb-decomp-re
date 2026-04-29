/* relocData file 296: MarioModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Forward DObjDesc chain-target decls for fixRelocChain.py */
extern u8 dMarioModel_gap_0x26D0_sub_0x2F4[];
extern u8 dMarioModel_gap_0x4A60_sub_0x314[];

/* Raw data from file offset 0x0000 to 0x0020 (32 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 16 bytes) */
u16 dMarioModel_gap_0x0000_sub_0x8[8] = {
	#include <MarioModel/gap_0x0000_sub_0x8.palette.inc.c>
};

/* gap sub-block @ 0x0018 (was gap+0x18, 8 bytes) */
u8 dMarioModel_gap_0x0000_sub_0x18[8] = {
	#include <MarioModel/gap_0x0000_sub_0x18.data.inc.c>
};

/* Raw data from file offset 0x0020 to 0x0040 (32 bytes) */
u8 dMarioModel_Joint_0x0020_post[32] = {
	#include <MarioModel/Joint_0x0020_post.data.inc.c>
};

/* Raw data from file offset 0x0040 to 0x0798 (1880 bytes) */
u8 dMarioModel_Joint_0x0040_post[1880] = {
	#include <MarioModel/Joint_0x0040_post.data.inc.c>
};

/* Vtx: Vtx_0x0798 @ 0x798 (25 vertices) */
Vtx dMarioModel_Vtx_0x0798_Vtx[25] = {
	#include <MarioModel/Vtx_0x0798.vtx.inc.c>
};

/* Vtx: Vtx_0x0928 @ 0x928 (9 vertices) */
Vtx dMarioModel_Vtx_0x0928_Vtx[9] = {
	#include <MarioModel/Vtx_0x0928.vtx.inc.c>
};

/* Vtx: Vtx_0x09B8 @ 0x9B8 (4 vertices) */
Vtx dMarioModel_Vtx_0x09B8_Vtx[4] = {
	#include <MarioModel/Vtx_0x09B8.vtx.inc.c>
};

/* Vtx: Vtx_0x09F8 @ 0x9F8 (16 vertices) */
Vtx dMarioModel_Vtx_0x09F8_Vtx[16] = {
	#include <MarioModel/Vtx_0x09F8.vtx.inc.c>
};

/* Vtx: Vtx_0x0AF8 @ 0xAF8 (19 vertices) */
Vtx dMarioModel_Vtx_0x0AF8_Vtx[19] = {
	#include <MarioModel/Vtx_0x0AF8.vtx.inc.c>
};

/* Vtx: Vtx_0x0C28 @ 0xC28 (6 vertices) */
Vtx dMarioModel_Vtx_0x0C28_Vtx[6] = {
	#include <MarioModel/Vtx_0x0C28.vtx.inc.c>
};

/* Vtx: Vtx_0x0C88 @ 0xC88 (22 vertices) */
Vtx dMarioModel_Vtx_0x0C88_Vtx[22] = {
	#include <MarioModel/Vtx_0x0C88.vtx.inc.c>
};

/* Vtx: Vtx_0x0DE8 @ 0xDE8 (16 vertices) */
Vtx dMarioModel_Vtx_0x0DE8_Vtx[16] = {
	#include <MarioModel/Vtx_0x0DE8.vtx.inc.c>
};

/* Vtx: Vtx_0x0EE8 @ 0xEE8 (23 vertices) */
Vtx dMarioModel_Vtx_0x0EE8_Vtx[23] = {
	#include <MarioModel/Vtx_0x0EE8.vtx.inc.c>
};

/* Vtx: Vtx_0x1058 @ 0x1058 (9 vertices) */
Vtx dMarioModel_Vtx_0x1058_Vtx[9] = {
	#include <MarioModel/Vtx_0x1058.vtx.inc.c>
};

/* Vtx: Vtx_0x10E8 @ 0x10E8 (6 vertices) */
Vtx dMarioModel_Vtx_0x10E8_Vtx[6] = {
	#include <MarioModel/Vtx_0x10E8.vtx.inc.c>
};

/* Vtx: Vtx_0x1148 @ 0x1148 (16 vertices) */
Vtx dMarioModel_Vtx_0x1148_Vtx[16] = {
	#include <MarioModel/Vtx_0x1148.vtx.inc.c>
};

/* Vtx: Vtx_0x1248 @ 0x1248 (11 vertices) */
Vtx dMarioModel_Vtx_0x1248_Vtx[11] = {
	#include <MarioModel/Vtx_0x1248.vtx.inc.c>
};

/* Vtx: Vtx_0x12F8 @ 0x12F8 (6 vertices) */
Vtx dMarioModel_Vtx_0x12F8_Vtx[6] = {
	#include <MarioModel/Vtx_0x12F8.vtx.inc.c>
};

/* Vtx: Vtx_0x1358 @ 0x1358 (16 vertices) */
Vtx dMarioModel_Vtx_0x1358_Vtx[16] = {
	#include <MarioModel/Vtx_0x1358.vtx.inc.c>
};

/* Vtx: Vtx_0x1458 @ 0x1458 (11 vertices) */
Vtx dMarioModel_Vtx_0x1458_Vtx[11] = {
	#include <MarioModel/Vtx_0x1458.vtx.inc.c>
};

/* Vtx: Vtx_0x1508 @ 0x1508 (6 vertices) */
Vtx dMarioModel_Vtx_0x1508_Vtx[6] = {
	#include <MarioModel/Vtx_0x1508.vtx.inc.c>
};

/* Vtx: Vtx_0x1568 @ 0x1568 (16 vertices) */
Vtx dMarioModel_Vtx_0x1568_Vtx[16] = {
	#include <MarioModel/Vtx_0x1568.vtx.inc.c>
};

/* DisplayList: Joint_0x1668 @ 0x1668 (352 bytes, 44 cmds) */
Gfx dMarioModel_Joint_0x1668_DisplayList[44] = {
	#include <MarioModel/Joint_0x1668.dl.inc.c>
};

/* DisplayList: Joint_0x17C8 @ 0x17C8 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x17C8_DisplayList[16] = {
	#include <MarioModel/Joint_0x17C8.dl.inc.c>
};

/* DisplayList: Joint_0x1848 @ 0x1848 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x1848_DisplayList[18] = {
	#include <MarioModel/Joint_0x1848.dl.inc.c>
};

/* DisplayList: Joint_0x18D8 @ 0x18D8 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x18D8_DisplayList[23] = {
	#include <MarioModel/Joint_0x18D8.dl.inc.c>
};

/* DisplayList: Joint_0x1990 @ 0x1990 (US 808 bytes/101 cmds, JP 824 bytes/103 cmds) */
#if defined(REGION_JP)
Gfx dMarioModel_Joint_0x1990_DisplayList[103] = {
#else
Gfx dMarioModel_Joint_0x1990_DisplayList[101] = {
#endif
	#include <MarioModel/Joint_0x1990.dl.inc.c>
};

/* DisplayList: Joint_0x1CB8 @ 0x1CB8 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x1CB8_DisplayList[16] = {
	#include <MarioModel/Joint_0x1CB8.dl.inc.c>
};

/* DisplayList: Joint_0x1D38 @ 0x1D38 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x1D38_DisplayList[18] = {
	#include <MarioModel/Joint_0x1D38.dl.inc.c>
};

/* DisplayList: Joint_0x1DC8 @ 0x1DC8 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x1DC8_DisplayList[23] = {
	#include <MarioModel/Joint_0x1DC8.dl.inc.c>
};

/* DisplayList: Joint_0x1E80 @ 0x1E80 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x1E80_DisplayList[18] = {
	#include <MarioModel/Joint_0x1E80.dl.inc.c>
};

/* DisplayList: Joint_0x1F10 @ 0x1F10 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x1F10_DisplayList[23] = {
	#include <MarioModel/Joint_0x1F10.dl.inc.c>
};

/* DisplayList: Joint_0x1FC8 @ 0x1FC8 (120 bytes, 15 cmds) */
Gfx dMarioModel_Joint_0x1FC8_DisplayList[15] = {
	#include <MarioModel/Joint_0x1FC8.dl.inc.c>
};

/* DisplayList: Joint_0x2040 @ 0x2040 (144 bytes, 18 cmds) */
Gfx dMarioModel_Joint_0x2040_DisplayList[18] = {
	#include <MarioModel/Joint_0x2040.dl.inc.c>
};

/* DisplayList: Joint_0x20D0 @ 0x20D0 (184 bytes, 23 cmds) */
Gfx dMarioModel_Joint_0x20D0_DisplayList[23] = {
	#include <MarioModel/Joint_0x20D0.dl.inc.c>
};

/* DisplayList: Joint_0x2188 @ 0x2188 (120 bytes, 15 cmds) */
Gfx dMarioModel_Joint_0x2188_DisplayList[15] = {
	#include <MarioModel/Joint_0x2188.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2200 (28 entries) */
DObjDesc dMarioModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMarioModel_Joint_0x1668_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x17C8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10280100256204605f, -0.4999369978904724f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x1848_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x18D8_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 72.0720443725586f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x1990_DisplayList, { 0.0f, 13.513498306274414f, -4.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x1CB8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.10735200345516205f, 0.49905699491500854f, 0.00950200017541647f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x1D38_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017805000767111778f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x1DC8_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.0625114440918f, -17.551250457763672f, 3.520073890686035f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMarioModel_Joint_0x1E80_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.11142999678850174f, -0.08334500342607498f, -0.03497999906539917f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x1F10_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x1FC8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.07527299970388412f, -0.4641610085964203f, 0.21304699778556824f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMarioModel_Joint_0x2040_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.10911700129508972f, 0.08337900042533875f, -0.018825000151991844f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x20D0_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x2188_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.030578000470995903f, 0.4896720051765442f, 0.19668099284172058f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 120.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 3.949136087066847e-33f }, { 0.0f, 3.973210578713672e-33f, 4.045433318970178e-33f }, { 0.0f, 0.0f, 4.0935819349218435e-33f } },
	{ 0, (void *)dMarioModel_gap_0x26D0_sub_0x2F4, { 4.213954025813984e-33f, 0.0f, 0.0f }, { 0.0f, 4.2380285174608094e-33f, 4.286177133412475e-33f }, { 0.0f, 4.3343257493641404e-33f, 0.0f } },
};

/* Raw data from file offset 0x26D0 to 0x3188 (2744 bytes) */
/* gap sub-block @ 0x26D0 (was gap+0x0, 20 bytes) */
u8 dMarioModel_gap_0x26D0[20] = {
	#include <MarioModel/gap_0x26D0.data.inc.c>
};

/* gap sub-block @ 0x26E4 (was gap+0x14, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x14[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0x2714 (was gap+0x44, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x44[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x44.data.inc.c>
};

/* gap sub-block @ 0x2744 (was gap+0x74, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x74[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x74.data.inc.c>
};

/* gap sub-block @ 0x2774 (was gap+0xA4, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA4[48] = {
	#include <MarioModel/gap_0x26D0_sub_0xA4.data.inc.c>
};

/* gap sub-block @ 0x27A4 (was gap+0xD4, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xD4[48] = {
	#include <MarioModel/gap_0x26D0_sub_0xD4.data.inc.c>
};

/* gap sub-block @ 0x27D4 (was gap+0x104, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x104[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x104.data.inc.c>
};

/* gap sub-block @ 0x2804 (was gap+0x134, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x134[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x134.data.inc.c>
};

/* gap sub-block @ 0x2834 (was gap+0x164, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x164[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x164.data.inc.c>
};

/* gap sub-block @ 0x2864 (was gap+0x194, 68 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x194[68] = {
	#include <MarioModel/gap_0x26D0_sub_0x194.data.inc.c>
};

/* gap sub-block @ 0x28A8 (was gap+0x1D8, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x1D8[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x1D8.data.inc.c>
};

/* gap sub-block @ 0x28D8 (was gap+0x208, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x208[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x208.data.inc.c>
};

/* gap sub-block @ 0x2908 (was gap+0x238, 68 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x238[68] = {
	#include <MarioModel/gap_0x26D0_sub_0x238.data.inc.c>
};

/* gap sub-block @ 0x294C (was gap+0x27C, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x27C[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x27C.data.inc.c>
};

/* gap sub-block @ 0x297C (was gap+0x2AC, 48 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2AC[48] = {
	#include <MarioModel/gap_0x26D0_sub_0x2AC.data.inc.c>
};

/* gap sub-block @ 0x29AC (was gap+0x2DC, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2DC[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x2DC.data.inc.c>
};

/* gap sub-block @ 0x29B0 (was gap+0x2E0, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2E0[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x2E0.data.inc.c>
};

/* gap sub-block @ 0x29B4 (was gap+0x2E4, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2E4[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x2E4.data.inc.c>
};

/* gap sub-block @ 0x29B8 (was gap+0x2E8, 12 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2E8[12] = {
	#include <MarioModel/gap_0x26D0_sub_0x2E8.data.inc.c>
};

/* gap sub-block @ 0x29C4 (was gap+0x2F4, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2F4[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x2F4.data.inc.c>
};

/* gap sub-block @ 0x29C8 (was gap+0x2F8, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2F8[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x2F8.data.inc.c>
};

/* gap sub-block @ 0x29CC (was gap+0x2FC, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x2FC[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x2FC.data.inc.c>
};

/* gap sub-block @ 0x29D0 (was gap+0x300, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x300[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x300.data.inc.c>
};

/* gap sub-block @ 0x29D4 (was gap+0x304, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x304[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x304.data.inc.c>
};

/* gap sub-block @ 0x29D8 (was gap+0x308, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x308[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x308.data.inc.c>
};

/* gap sub-block @ 0x29DC (was gap+0x30C, 4 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x30C[4] = {
	#include <MarioModel/gap_0x26D0_sub_0x30C.data.inc.c>
};

/* gap sub-block @ 0x29E0 (was gap+0x310, 16 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x310[16] = {
	#include <MarioModel/gap_0x26D0_sub_0x310.data.inc.c>
};

/* gap sub-block @ 0x29F0 (was gap+0x320, 100 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x320[100] = {
	#include <MarioModel/gap_0x26D0_sub_0x320.data.inc.c>
};

/* gap sub-block @ 0x2A54 (was gap+0x384, 20 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x384[20] = {
	#include <MarioModel/gap_0x26D0_sub_0x384.data.inc.c>
};

/* gap sub-block @ 0x2A68 (was gap+0x398, 16 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x398[16] = {
	#include <MarioModel/gap_0x26D0_sub_0x398.data.inc.c>
};

/* gap sub-block @ 0x2A78 (was gap+0x3A8, 24 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x3A8[24] = {
	#include <MarioModel/gap_0x26D0_sub_0x3A8.data.inc.c>
};

/* gap sub-block @ 0x2A90 (was gap+0x3C0, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x3C0[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x3C0.data.inc.c>
};

/* gap sub-block @ 0x2B08 (was gap+0x438, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x438[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x438.data.inc.c>
};

/* gap sub-block @ 0x2B80 (was gap+0x4B0, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x4B0[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x4B0.data.inc.c>
};

/* gap sub-block @ 0x2BF8 (was gap+0x528, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x528[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x528.data.inc.c>
};

/* gap sub-block @ 0x2C70 (was gap+0x5A0, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x5A0[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x5A0.data.inc.c>
};

/* gap sub-block @ 0x2CE8 (was gap+0x618, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x618[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x618.data.inc.c>
};

/* gap sub-block @ 0x2D60 (was gap+0x690, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x690[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x690.data.inc.c>
};

/* gap sub-block @ 0x2DD8 (was gap+0x708, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x708[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x708.data.inc.c>
};

/* gap sub-block @ 0x2E50 (was gap+0x780, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x780[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x780.data.inc.c>
};

/* gap sub-block @ 0x2EC8 (was gap+0x7F8, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x7F8[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x7F8.data.inc.c>
};

/* gap sub-block @ 0x2F40 (was gap+0x870, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x870[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x870.data.inc.c>
};

/* gap sub-block @ 0x2FB8 (was gap+0x8E8, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x8E8[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x8E8.data.inc.c>
};

/* gap sub-block @ 0x3030 (was gap+0x960, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x960[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x960.data.inc.c>
};

/* gap sub-block @ 0x30A8 (was gap+0x9D8, 120 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0x9D8[120] = {
	#include <MarioModel/gap_0x26D0_sub_0x9D8.data.inc.c>
};

/* gap sub-block @ 0x3120 (was gap+0xA50, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA50[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA50.data.inc.c>
};

/* gap sub-block @ 0x3128 (was gap+0xA58, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA58[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA58.data.inc.c>
};

/* gap sub-block @ 0x3130 (was gap+0xA60, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA60[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA60.data.inc.c>
};

/* gap sub-block @ 0x3138 (was gap+0xA68, 16 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA68[16] = {
	#include <MarioModel/gap_0x26D0_sub_0xA68.data.inc.c>
};

/* gap sub-block @ 0x3148 (was gap+0xA78, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA78[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA78.data.inc.c>
};

/* gap sub-block @ 0x3150 (was gap+0xA80, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA80[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA80.data.inc.c>
};

/* gap sub-block @ 0x3158 (was gap+0xA88, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA88[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA88.data.inc.c>
};

/* gap sub-block @ 0x3160 (was gap+0xA90, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA90[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA90.data.inc.c>
};

/* gap sub-block @ 0x3168 (was gap+0xA98, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xA98[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xA98.data.inc.c>
};

/* gap sub-block @ 0x3170 (was gap+0xAA0, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xAA0[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xAA0.data.inc.c>
};

/* gap sub-block @ 0x3178 (was gap+0xAA8, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xAA8[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xAA8.data.inc.c>
};

/* gap sub-block @ 0x3180 (was gap+0xAB0, 8 bytes) */
u8 dMarioModel_gap_0x26D0_sub_0xAB0[8] = {
	#include <MarioModel/gap_0x26D0_sub_0xAB0.data.inc.c>
};

/* Vtx: Vtx_0x3188 @ 0x3188 (23 vertices) */
Vtx dMarioModel_Vtx_0x3188_Vtx[23] = {
	#include <MarioModel/Vtx_0x3188.vtx.inc.c>
};

/* Vtx: Vtx_0x32F8 @ 0x32F8 (7 vertices) */
Vtx dMarioModel_Vtx_0x32F8_Vtx[7] = {
	#include <MarioModel/Vtx_0x32F8.vtx.inc.c>
};

/* Vtx: Vtx_0x3368 @ 0x3368 (3 vertices) */
Vtx dMarioModel_Vtx_0x3368_Vtx[3] = {
	#include <MarioModel/Vtx_0x3368.vtx.inc.c>
};

/* Vtx: Vtx_0x3398 @ 0x3398 (16 vertices) */
Vtx dMarioModel_Vtx_0x3398_Vtx[16] = {
	#include <MarioModel/Vtx_0x3398.vtx.inc.c>
};

/* Vtx: Vtx_0x3498 @ 0x3498 (17 vertices) */
Vtx dMarioModel_Vtx_0x3498_Vtx[17] = {
	#include <MarioModel/Vtx_0x3498.vtx.inc.c>
};

/* Vtx: Vtx_0x35A8 @ 0x35A8 (6 vertices) */
Vtx dMarioModel_Vtx_0x35A8_Vtx[6] = {
	#include <MarioModel/Vtx_0x35A8.vtx.inc.c>
};

/* Vtx: Vtx_0x3608 @ 0x3608 (16 vertices) */
Vtx dMarioModel_Vtx_0x3608_Vtx[16] = {
	#include <MarioModel/Vtx_0x3608.vtx.inc.c>
};

/* Vtx: Vtx_0x3708 @ 0x3708 (11 vertices) */
Vtx dMarioModel_Vtx_0x3708_Vtx[11] = {
	#include <MarioModel/Vtx_0x3708.vtx.inc.c>
};

/* Vtx: Vtx_0x37B8 @ 0x37B8 (6 vertices) */
Vtx dMarioModel_Vtx_0x37B8_Vtx[6] = {
	#include <MarioModel/Vtx_0x37B8.vtx.inc.c>
};

/* Vtx: Vtx_0x3818 @ 0x3818 (6 vertices) */
Vtx dMarioModel_Vtx_0x3818_Vtx[6] = {
	#include <MarioModel/Vtx_0x3818.vtx.inc.c>
};

/* Vtx: Vtx_0x3878 @ 0x3878 (7 vertices) */
Vtx dMarioModel_Vtx_0x3878_Vtx[7] = {
	#include <MarioModel/Vtx_0x3878.vtx.inc.c>
};

/* Vtx: Vtx_0x38E8 @ 0x38E8 (3 vertices) */
Vtx dMarioModel_Vtx_0x38E8_Vtx[3] = {
	#include <MarioModel/Vtx_0x38E8.vtx.inc.c>
};

/* Vtx: Vtx_0x3918 @ 0x3918 (16 vertices) */
Vtx dMarioModel_Vtx_0x3918_Vtx[16] = {
	#include <MarioModel/Vtx_0x3918.vtx.inc.c>
};

/* Vtx: Vtx_0x3A18 @ 0x3A18 (6 vertices) */
Vtx dMarioModel_Vtx_0x3A18_Vtx[6] = {
	#include <MarioModel/Vtx_0x3A18.vtx.inc.c>
};

/* Vtx: Vtx_0x3A78 @ 0x3A78 (3 vertices) */
Vtx dMarioModel_Vtx_0x3A78_Vtx[3] = {
	#include <MarioModel/Vtx_0x3A78.vtx.inc.c>
};

/* Vtx: Vtx_0x3AA8 @ 0x3AA8 (10 vertices) */
Vtx dMarioModel_Vtx_0x3AA8_Vtx[10] = {
	#include <MarioModel/Vtx_0x3AA8.vtx.inc.c>
};

/* Vtx: Vtx_0x3B48 @ 0x3B48 (6 vertices) */
Vtx dMarioModel_Vtx_0x3B48_Vtx[6] = {
	#include <MarioModel/Vtx_0x3B48.vtx.inc.c>
};

/* Vtx: Vtx_0x3BA8 @ 0x3BA8 (3 vertices) */
Vtx dMarioModel_Vtx_0x3BA8_Vtx[3] = {
	#include <MarioModel/Vtx_0x3BA8.vtx.inc.c>
};

/* Vtx: Vtx_0x3BD8 @ 0x3BD8 (10 vertices) */
Vtx dMarioModel_Vtx_0x3BD8_Vtx[10] = {
	#include <MarioModel/Vtx_0x3BD8.vtx.inc.c>
};

/* DisplayList: Joint_0x3C78 @ 0x3C78 (304 bytes, 38 cmds) */
Gfx dMarioModel_Joint_0x3C78_DisplayList[38] = {
	#include <MarioModel/Joint_0x3C78.dl.inc.c>
};

/* DisplayList: Joint_0x3DA8 @ 0x3DA8 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x3DA8_DisplayList[11] = {
	#include <MarioModel/Joint_0x3DA8.dl.inc.c>
};

/* DisplayList: Joint_0x3E00 @ 0x3E00 (96 bytes, 12 cmds) */
Gfx dMarioModel_Joint_0x3E00_DisplayList[12] = {
	#include <MarioModel/Joint_0x3E00.dl.inc.c>
};

/* DisplayList: Joint_0x3E60 @ 0x3E60 (152 bytes, 19 cmds) */
Gfx dMarioModel_Joint_0x3E60_DisplayList[19] = {
	#include <MarioModel/Joint_0x3E60.dl.inc.c>
};

/* DisplayList: Joint_0x3EF8 @ 0x3EF8 (US 712 bytes/89 cmds, JP 728 bytes/91 cmds) */
#if defined(REGION_JP)
Gfx dMarioModel_Joint_0x3EF8_DisplayList[91] = {
#else
Gfx dMarioModel_Joint_0x3EF8_DisplayList[89] = {
#endif
	#include <MarioModel/Joint_0x3EF8.dl.inc.c>
};

/* DisplayList: Joint_0x41C0 @ 0x41C0 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x41C0_DisplayList[11] = {
	#include <MarioModel/Joint_0x41C0.dl.inc.c>
};

/* DisplayList: Joint_0x4218 @ 0x4218 (96 bytes, 12 cmds) */
Gfx dMarioModel_Joint_0x4218_DisplayList[12] = {
	#include <MarioModel/Joint_0x4218.dl.inc.c>
};

/* DisplayList: Joint_0x4278 @ 0x4278 (152 bytes, 19 cmds) */
Gfx dMarioModel_Joint_0x4278_DisplayList[19] = {
	#include <MarioModel/Joint_0x4278.dl.inc.c>
};

/* DisplayList: Joint_0x4310 @ 0x4310 (104 bytes, 13 cmds) */
Gfx dMarioModel_Joint_0x4310_DisplayList[13] = {
	#include <MarioModel/Joint_0x4310.dl.inc.c>
};

/* DisplayList: Joint_0x4378 @ 0x4378 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x4378_DisplayList[16] = {
	#include <MarioModel/Joint_0x4378.dl.inc.c>
};

/* DisplayList: Joint_0x43F8 @ 0x43F8 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x43F8_DisplayList[11] = {
	#include <MarioModel/Joint_0x43F8.dl.inc.c>
};

/* DisplayList: Joint_0x4450 @ 0x4450 (104 bytes, 13 cmds) */
Gfx dMarioModel_Joint_0x4450_DisplayList[13] = {
	#include <MarioModel/Joint_0x4450.dl.inc.c>
};

/* DisplayList: Joint_0x44B8 @ 0x44B8 (128 bytes, 16 cmds) */
Gfx dMarioModel_Joint_0x44B8_DisplayList[16] = {
	#include <MarioModel/Joint_0x44B8.dl.inc.c>
};

/* DisplayList: Joint_0x4538 @ 0x4538 (88 bytes, 11 cmds) */
Gfx dMarioModel_Joint_0x4538_DisplayList[11] = {
	#include <MarioModel/Joint_0x4538.dl.inc.c>
};

/* DObjDesc: JointTree_0x4590 @ 0x4590 (28 entries) */
DObjDesc dMarioModel_JointTree_0x4590[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, -9.999999974752427e-07f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMarioModel_Joint_0x3C78_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 4, (void*)dMarioModel_Joint_0x3DA8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10734699666500092f, -0.4990589916706085f, 0.00949000008404255f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x3E00_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, -0.017795000225305557f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 4, (void*)dMarioModel_Joint_0x3DA8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10734499990940094f, -0.4990589916706085f, 0.009487000294029713f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x3E00_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 6, (void*)dMarioModel_Joint_0x3E60_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 72.0720443725586f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x3EF8_DisplayList, { 0.0f, 13.513498306274414f, -4.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x41C0_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.1073480024933815f, 0.4990580081939697f, 0.009492999874055386f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x4218_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x4278_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.062339782714844f, -17.55162239074707f, 3.520087957382202f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 3, (void*)dMarioModel_Joint_0x4310_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.04165399819612503f, -0.08303400129079819f, -0.04252900183200836f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x4378_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.01440299954265356f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 3, (void*)dMarioModel_Joint_0x4310_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.04165500029921532f, -0.08303400129079819f, -0.042534999549388885f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x4378_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.014414999634027481f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 6, (void*)dMarioModel_Joint_0x43F8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.17834100127220154f, -0.39459899067878723f, 0.20836299657821655f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 6, (void*)dMarioModel_Joint_0x43F8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.1783429980278015f, -0.39459899067878723f, 0.20836299657821655f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 3, (void*)dMarioModel_Joint_0x4450_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.04041999951004982f, 0.0830719992518425f, -0.026506999507546425f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x44B8_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.014657000079751015f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 3, (void*)dMarioModel_Joint_0x4450_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.040421001613140106f, 0.0830719992518425f, -0.026528000831604004f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x44B8_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.014697999693453312f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
#if defined(REGION_JP)
	{ 6, (void*)dMarioModel_Joint_0x4538_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.12845900654792786f, 0.4220089912414551f, 0.19265300035476685f }, { 1.0f, 1.0f, 1.0f } },
#else
	{ 6, (void*)dMarioModel_Joint_0x4538_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.12846599519252777f, 0.4220089912414551f, 0.19265300035476685f }, { 1.0f, 1.0f, 1.0f } },
#endif
	{ 1, (void*)0x00000000, { -9.999999974752427e-07f, 0.0f, 119.99999237060547f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 8.587574288381939e-28f }, { 0.0f, 8.650684123764592e-28f, 8.840011703982607e-28f }, { 0.0f, 0.0f, 8.966230411782941e-28f } },
	{ 0, (void *)dMarioModel_gap_0x4A60_sub_0x314, { 9.281778625731235e-28f, 0.0f, 0.0f }, { 0.0f, 9.344888461113888e-28f, 9.471107168914222e-28f }, { 0.0f, 9.597325876714556e-28f, 0.0f } },
};

/* Raw data from file offset 0x4A60 to 0x65F0 (7056 bytes) */
/* gap sub-block @ 0x4A60 (was gap+0x0, 20 bytes) */
u8 dMarioModel_gap_0x4A60[20] = {
	#include <MarioModel/gap_0x4A60.data.inc.c>
};

/* gap sub-block @ 0x4A74 (was gap+0x14, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x14[48] = {
	#include <MarioModel/gap_0x4A60_sub_0x14.data.inc.c>
};

/* gap sub-block @ 0x4AA4 (was gap+0x44, 56 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x44[56] = {
	#include <MarioModel/gap_0x4A60_sub_0x44.data.inc.c>
};

/* gap sub-block @ 0x4ADC (was gap+0x7C, 56 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x7C[56] = {
	#include <MarioModel/gap_0x4A60_sub_0x7C.data.inc.c>
};

/* gap sub-block @ 0x4B14 (was gap+0xB4, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0xB4[48] = {
	#include <MarioModel/gap_0x4A60_sub_0xB4.data.inc.c>
};

/* gap sub-block @ 0x4B44 (was gap+0xE4, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0xE4[48] = {
	#include <MarioModel/gap_0x4A60_sub_0xE4.data.inc.c>
};

/* gap sub-block @ 0x4B74 (was gap+0x114, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x114[48] = {
	#include <MarioModel/gap_0x4A60_sub_0x114.data.inc.c>
};

/* gap sub-block @ 0x4BA4 (was gap+0x144, 56 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x144[56] = {
	#include <MarioModel/gap_0x4A60_sub_0x144.data.inc.c>
};

/* gap sub-block @ 0x4BDC (was gap+0x17C, 56 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x17C[56] = {
	#include <MarioModel/gap_0x4A60_sub_0x17C.data.inc.c>
};

/* gap sub-block @ 0x4C14 (was gap+0x1B4, 68 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1B4[68] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B4.data.inc.c>
};

/* gap sub-block @ 0x4C58 (was gap+0x1F8, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1F8[48] = {
	#include <MarioModel/gap_0x4A60_sub_0x1F8.data.inc.c>
};

/* gap sub-block @ 0x4C88 (was gap+0x228, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x228[48] = {
	#include <MarioModel/gap_0x4A60_sub_0x228.data.inc.c>
};

/* gap sub-block @ 0x4CB8 (was gap+0x258, 68 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x258[68] = {
	#include <MarioModel/gap_0x4A60_sub_0x258.data.inc.c>
};

/* gap sub-block @ 0x4CFC (was gap+0x29C, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x29C[48] = {
	#include <MarioModel/gap_0x4A60_sub_0x29C.data.inc.c>
};

/* gap sub-block @ 0x4D2C (was gap+0x2CC, 48 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x2CC[48] = {
	#include <MarioModel/gap_0x4A60_sub_0x2CC.data.inc.c>
};

/* gap sub-block @ 0x4D5C (was gap+0x2FC, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x2FC[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x2FC.data.inc.c>
};

/* gap sub-block @ 0x4D60 (was gap+0x300, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x300[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x300.data.inc.c>
};

/* gap sub-block @ 0x4D64 (was gap+0x304, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x304[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x304.data.inc.c>
};

/* gap sub-block @ 0x4D68 (was gap+0x308, 12 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x308[12] = {
	#include <MarioModel/gap_0x4A60_sub_0x308.data.inc.c>
};

/* gap sub-block @ 0x4D74 (was gap+0x314, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x314[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x314.data.inc.c>
};

/* gap sub-block @ 0x4D78 (was gap+0x318, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x318[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x318.data.inc.c>
};

/* gap sub-block @ 0x4D7C (was gap+0x31C, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x31C[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x31C.data.inc.c>
};

/* gap sub-block @ 0x4D80 (was gap+0x320, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x320[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x320.data.inc.c>
};

/* gap sub-block @ 0x4D84 (was gap+0x324, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x324[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x324.data.inc.c>
};

/* gap sub-block @ 0x4D88 (was gap+0x328, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x328[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x328.data.inc.c>
};

/* gap sub-block @ 0x4D8C (was gap+0x32C, 4 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x32C[4] = {
	#include <MarioModel/gap_0x4A60_sub_0x32C.data.inc.c>
};

/* gap sub-block @ 0x4D90 (was gap+0x330, 16 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x330[16] = {
	#include <MarioModel/gap_0x4A60_sub_0x330.data.inc.c>
};

/* gap sub-block @ 0x4DA0 (was gap+0x340, 368 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x340[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x340.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x4B0 @ 0x4F10 (23 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x4B0[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x4B0.dl.inc.c>
};

/* Raw tail after DL @ 0x4FC8 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x4B0_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x4B0_post.data.inc.c>
};

/* gap sub-block @ 0x4FD0 (was gap+0x570, 288 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x570[18] = {
	#include <MarioModel/gap_0x4A60_sub_0x570.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x690 @ 0x50F0 (19 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x690[19] = {
	#include <MarioModel/gap_0x4A60_sub_0x690.dl.inc.c>
};

/* Raw tail after DL @ 0x5188 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x690_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x690_post.data.inc.c>
};

/* gap sub-block @ 0x5190 (was gap+0x730, 368 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x730[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x730.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x8A0 @ 0x5300 (23 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x8A0[23] = {
	#include <MarioModel/gap_0x4A60_sub_0x8A0.dl.inc.c>
};

/* Raw tail after DL @ 0x53B8 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x8A0_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x8A0_post.data.inc.c>
};

/* gap sub-block @ 0x53C0 (was gap+0x960, 288 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x960[18] = {
	#include <MarioModel/gap_0x4A60_sub_0x960.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0xA80 @ 0x54E0 (19 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0xA80[19] = {
	#include <MarioModel/gap_0x4A60_sub_0xA80.dl.inc.c>
};

/* Raw tail after DL @ 0x5578 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0xA80_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0xA80_post.data.inc.c>
};

/* gap sub-block @ 0x5580 (was gap+0xB20, 128 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xB20[8] = {
	#include <MarioModel/gap_0x4A60_sub_0xB20.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0xBA0 @ 0x5600 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0xBA0[13] = {
	#include <MarioModel/gap_0x4A60_sub_0xBA0.dl.inc.c>
};

/* Raw tail after DL @ 0x5668 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0xBA0_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0xBA0_post.data.inc.c>
};

/* gap sub-block @ 0x5670 (was gap+0xC10, 112 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xC10[7] = {
	#include <MarioModel/gap_0x4A60_sub_0xC10.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0xC80 @ 0x56E0 (29 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0xC80[29] = {
	#include <MarioModel/gap_0x4A60_sub_0xC80.dl.inc.c>
};

/* Raw tail after DL @ 0x57C8 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0xC80_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0xC80_post.data.inc.c>
};

/* gap sub-block @ 0x57D0 (was gap+0xD70, 96 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xD70[6] = {
	#include <MarioModel/gap_0x4A60_sub_0xD70.vtx.inc.c>
};

/* gap sub-block @ 0x5830 (was gap+0xDD0, 512 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xDD0[32] = {
	#include <MarioModel/gap_0x4A60_sub_0xDD0.vtx.inc.c>
};

/* gap sub-block @ 0x5A30 (was gap+0xFD0, 112 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0xFD0[7] = {
	#include <MarioModel/gap_0x4A60_sub_0xFD0.vtx.inc.c>
};

/* gap sub-block @ 0x5AA0 (was gap+0x1040, 96 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x1040[6] = {
	#include <MarioModel/gap_0x4A60_sub_0x1040.vtx.inc.c>
};

/* gap sub-block @ 0x5B00 (was gap+0x10A0, 544 bytes) */
Gfx dMarioModel_DL_0x5B00[68] = {
	#include <MarioModel/DL_0x5B00.dl.inc.c>
};

/* gap sub-block @ 0x5D20 (was gap+0x12C0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x12C0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x12C0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1360 @ 0x5DC0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1360[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1360.dl.inc.c>
};

/* Raw tail after DL @ 0x5E28 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1360_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x1360_post.data.inc.c>
};

/* gap sub-block @ 0x5E30 (was gap+0x13D0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x13D0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x13D0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1470 @ 0x5ED0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1470[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1470.dl.inc.c>
};

/* Raw tail after DL @ 0x5F38 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1470_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x1470_post.data.inc.c>
};

/* gap sub-block @ 0x5F40 (was gap+0x14E0, 128 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x14E0[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x14E0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1560 @ 0x5FC0 (15 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1560[15] = {
	#include <MarioModel/gap_0x4A60_sub_0x1560.dl.inc.c>
};

/* Raw tail after DL @ 0x6038 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1560_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x1560_post.data.inc.c>
};

/* gap sub-block @ 0x6040 (was gap+0x15E0, 128 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x15E0[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x15E0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1660 @ 0x60C0 (15 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1660[15] = {
	#include <MarioModel/gap_0x4A60_sub_0x1660.dl.inc.c>
};

/* Raw tail after DL @ 0x6138 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1660_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x1660_post.data.inc.c>
};

/* gap sub-block @ 0x6140 (was gap+0x16E0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x16E0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x16E0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1780 @ 0x61E0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1780[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1780.dl.inc.c>
};

/* Raw tail after DL @ 0x6248 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1780_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x1780_post.data.inc.c>
};

/* gap sub-block @ 0x6250 (was gap+0x17F0, 160 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x17F0[10] = {
	#include <MarioModel/gap_0x4A60_sub_0x17F0.vtx.inc.c>
};

/* Gfx DL: gap_0x4A60_sub_0x1890 @ 0x62F0 (13 cmds) */
Gfx dMarioModel_gap_0x4A60_sub_0x1890[13] = {
	#include <MarioModel/gap_0x4A60_sub_0x1890.dl.inc.c>
};

/* Raw tail after DL @ 0x6358 (8 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1890_post[8] = {
	#include <MarioModel/gap_0x4A60_sub_0x1890_post.data.inc.c>
};

/* gap sub-block @ 0x6360 (was gap+0x1900, 112 bytes) */
Vtx dMarioModel_gap_0x4A60_sub_0x1900[7] = {
	#include <MarioModel/gap_0x4A60_sub_0x1900.vtx.inc.c>
};

/* gap sub-block @ 0x63D0 (was gap+0x1970, 112 bytes) */
Gfx dMarioModel_DL_0x63D0[14] = {
	#include <MarioModel/DL_0x63D0.dl.inc.c>
};

/* gap sub-block @ 0x6440 (was gap+0x19E0, 232 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x19E0[232] = {
	#include <MarioModel/gap_0x4A60_sub_0x19E0.data.inc.c>
};

/* gap sub-block @ 0x6528 (was gap+0x1AC8, 40 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1AC8[40] = {
	#include <MarioModel/gap_0x4A60_sub_0x1AC8.data.inc.c>
};

/* gap sub-block @ 0x6550 (was gap+0x1AF0, 40 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1AF0[40] = {
	#include <MarioModel/gap_0x4A60_sub_0x1AF0.data.inc.c>
};

/* gap sub-block @ 0x6578 (was gap+0x1B18, 40 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1B18[40] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B18.data.inc.c>
};

/* gap sub-block @ 0x65A0 (was gap+0x1B40, 40 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1B40[40] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B40.data.inc.c>
};

/* gap sub-block @ 0x65C8 (was gap+0x1B68, 40 bytes) */
u8 dMarioModel_gap_0x4A60_sub_0x1B68[40] = {
	#include <MarioModel/gap_0x4A60_sub_0x1B68.data.inc.c>
};

/* Texture data @ 0x65F0 (1672 bytes) */
/* @tex fmt=CI4 dim=96x32 */
u8 dMarioModel_Tex_0x65F0[1672] = {
	#include <MarioModel/Tex_0x65F0.tex.inc.c>
};

/* Texture data @ 0x6C78 (760 bytes) */
u8 dMarioModel_Tex_0x6C78[760] = {
	#include <MarioModel/Tex_0x6C78.tex.inc.c>
};

/* Palette: Lut_0x6F70 @ 0x6F70 (16 colors RGBA5551) */
u16 dMarioModel_Lut_0x6F70_palette[16] = {
	#include <MarioModel/Lut_0x6F70.palette.inc.c>
};

/* Raw data from file offset 0x6F90 to 0x71A8 (536 bytes) */
/* gap sub-block @ 0x6F90 (was gap+0x0, 8 bytes) */
u8 dMarioModel_gap_0x6F90[8] = {
	#include <MarioModel/gap_0x6F90.data.inc.c>
};

/* gap sub-block @ 0x6F98 (was gap+0x8, 528 bytes) */
u8 dMarioModel_gap_0x6F90_sub_0x8[528] = {
	#include <MarioModel/gap_0x6F90_sub_0x8.data.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dMarioModel_Stock_tex[88] = {
    #include <MarioModel/Stock.ci4.inc.c>
};

/* Palette: @ 0x7200 (16 colors RGBA5551) */
u16 dMarioModel_palette_0x7200[16] = {
	#include <MarioModel/palette_0x7200.palette.inc.c>
};

/* Raw data from file offset 0x7220 to 0x72C0 (160 bytes) */
/* gap sub-block @ 0x7220 (was gap+0x0, 8 bytes) */
u8 dMarioModel_gap_0x7220[8] = {
	#include <MarioModel/gap_0x7220.data.inc.c>
};

/* gap sub-block @ 0x7228 (was gap+0x8, 40 bytes) */
u8 dMarioModel_gap_0x7220_sub_0x8[40] = {
	#include <MarioModel/gap_0x7220_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x7250 (was gap+0x30, 40 bytes) */
u8 dMarioModel_gap_0x7220_sub_0x30[40] = {
	#include <MarioModel/gap_0x7220_sub_0x30.data.inc.c>
};

/* gap sub-block @ 0x7278 (was gap+0x58, 40 bytes) */
u8 dMarioModel_gap_0x7220_sub_0x58[40] = {
	#include <MarioModel/gap_0x7220_sub_0x58.data.inc.c>
};

/* gap sub-block @ 0x72A0 (was gap+0x80, 32 bytes) */
u8 dMarioModel_gap_0x7220_sub_0x80[32] = {
	#include <MarioModel/gap_0x7220_sub_0x80.data.inc.c>
};

/* Sprite: Stock */

/* Sprite: Stock (8x10 ci4) */

Bitmap dMarioModel_Stock_bitmaps[] = {
	{ 8, 16, 0, 0, dMarioModel_Stock_tex, 10, 0 },
};

Sprite dMarioModel_Stock = {
	0, 0,
	8, 10,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMarioModel_palette_0x7200,
	0, 1,
	1, 36,
	10, 10,
	2, 0,
	(Bitmap*)dMarioModel_Stock_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: FTEmblem */

Gfx dMarioModel_FTEmblem_dl[] = { gsSPEndDisplayList() };

/* Texture: FTEmblem (27(32)x25 i4) */
u8 dMarioModel_FTEmblem_tex[400] = {
    #include <MarioModel/FTEmblem.i4.inc.c>
};

Bitmap dMarioModel_FTEmblem_bitmaps[] = {
	{ 27, 32, 0, 0, dMarioModel_FTEmblem_tex, 25, 0 },
};

/* Sprite: FTEmblem (27x25 i4) */
Sprite dMarioModel_FTEmblem = {
	0, 0,
	27, 25,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	25, 25,
	4, 0,
	(Bitmap*)dMarioModel_FTEmblem_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);
