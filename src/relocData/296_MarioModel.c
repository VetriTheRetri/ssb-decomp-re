/* relocData file 296: MarioModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"


#if defined(REGION_JP)

/* JP binary has a different layout; fold in its chain-encoded
 * bytes as a single raw u8 block. extractRelocInc regenerates
 * the inc.c below from the JP binary whenever JP assets are
 * extracted, and the companion .jp.reloc is empty so
 * fixRelocChain leaves the pre-baked chain bytes alone. */
u8 dMarioModel[30000] = {
	#include <MarioModel/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Raw data from file offset 0x0000 to 0x0020 (32 bytes) */
u8 dMarioModel_gap_0x0000[32] = {
	#include <MarioModel/gap_0x0000.data.inc.c>
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

/* DisplayList: Joint_0x1990 @ 0x1990 (808 bytes, 101 cmds) */
Gfx dMarioModel_Joint_0x1990_DisplayList[101] = {
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
	{ 0, (void*)0x09AB0A71, { 4.213954025813984e-33f, 0.0f, 0.0f }, { 0.0f, 4.2380285174608094e-33f, 4.286177133412475e-33f }, { 0.0f, 4.3343257493641404e-33f, 0.0f } },
};

/* Raw data from file offset 0x26D0 to 0x3188 (2744 bytes) */
u8 dMarioModel_gap_0x26D0[2744] = {
	#include <MarioModel/gap_0x26D0.data.inc.c>
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

/* DisplayList: Joint_0x3EF8 @ 0x3EF8 (712 bytes, 89 cmds) */
Gfx dMarioModel_Joint_0x3EF8_DisplayList[89] = {
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
	{ 4, (void*)dMarioModel_Joint_0x3DA8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10734499990940094f, -0.4990589916706085f, 0.009487000294029713f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x3E00_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x3E60_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 72.0720443725586f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x3EF8_DisplayList, { 0.0f, 13.513498306274414f, -4.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x41C0_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.1073480024933815f, 0.4990580081939697f, 0.009492999874055386f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMarioModel_Joint_0x4218_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x4278_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.062339782714844f, -17.55162239074707f, 3.520087957382202f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMarioModel_Joint_0x4310_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.04165500029921532f, -0.08303400129079819f, -0.042534999549388885f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x4378_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.014414999634027481f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x43F8_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.1783429980278015f, -0.39459899067878723f, 0.20836299657821655f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dMarioModel_Joint_0x4450_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.040421001613140106f, 0.0830719992518425f, -0.026528000831604004f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMarioModel_Joint_0x44B8_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.014697999693453312f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dMarioModel_Joint_0x4538_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.12846599519252777f, 0.4220089912414551f, 0.19265300035476685f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -9.999999974752427e-07f, 0.0f, 119.99999237060547f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 8.587574288381939e-28f }, { 0.0f, 8.650684123764592e-28f, 8.840011703982607e-28f }, { 0.0f, 0.0f, 8.966230411782941e-28f } },
	{ 0, (void*)0x128F135D, { 9.281778625731235e-28f, 0.0f, 0.0f }, { 0.0f, 9.344888461113888e-28f, 9.471107168914222e-28f }, { 0.0f, 9.597325876714556e-28f, 0.0f } },
};

/* Raw data from file offset 0x4A60 to 0x65F0 (7056 bytes) */
u8 dMarioModel_gap_0x4A60[7056] = {
	#include <MarioModel/gap_0x4A60.data.inc.c>
};

/* Texture data @ 0x65F0 (1672 bytes) */
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
u8 dMarioModel_gap_0x6F90[536] = {
	#include <MarioModel/gap_0x6F90.data.inc.c>
};

/* Texture data for sprite Stock */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Stock (8(16)x10 ci4) */
u8 dMarioModel_Stock_tex[] = {
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
u8 dMarioModel_FTEmblem_tex[] = {
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

#endif
