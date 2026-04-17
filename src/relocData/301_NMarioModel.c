/* relocData file 301: NMarioModel */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dNMarioModel[11952] = {
	#include <NMarioModel/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Vtx: JointVerts @ 0x0 (0 vertices — elided) */

/* Placeholder wrapper: the description slot collapsed to
 * zero vertices because an extras block starts at the
 * same offset. No C declaration is emitted so IDO CFE
 * does not choke on `Vtx X[0] = {}`.
 */

/* Raw data from file offset 0x0000 to 0x0008 (8 bytes) */
u8 dNMarioModel_gap_0x0000[8] = {
	#include <NMarioModel/gap_0x0000.data.inc.c>
};

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dNMarioModel_Lut_0x0008_palette[16] = {
	#include <NMarioModel/Lut_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0028 to 0x0030 (8 bytes) */
u8 dNMarioModel_gap_0x0028[8] = {
	#include <NMarioModel/gap_0x0028.data.inc.c>
};

/* Texture data @ 0x0030 (448 bytes) */
u8 dNMarioModel_Tex_0x0030[448] = {
	#include <NMarioModel/Tex_0x0030.tex.inc.c>
};

/* Vtx: Vtx_0x01F0 @ 0x1F0 (27 vertices) */
Vtx dNMarioModel_Vtx_0x01F0_Vtx[27] = {
	#include <NMarioModel/Vtx_0x01F0.vtx.inc.c>
};

/* Vtx: Vtx_0x03A0 @ 0x3A0 (21 vertices) */
Vtx dNMarioModel_Vtx_0x03A0_Vtx[21] = {
	#include <NMarioModel/Vtx_0x03A0.vtx.inc.c>
};

/* Vtx: Vtx_0x04F0 @ 0x4F0 (9 vertices) */
Vtx dNMarioModel_Vtx_0x04F0_Vtx[9] = {
	#include <NMarioModel/Vtx_0x04F0.vtx.inc.c>
};

/* Vtx: Vtx_0x0580 @ 0x580 (31 vertices) */
Vtx dNMarioModel_Vtx_0x0580_Vtx[31] = {
	#include <NMarioModel/Vtx_0x0580.vtx.inc.c>
};

/* Vtx: Vtx_0x0770 @ 0x770 (7 vertices) */
Vtx dNMarioModel_Vtx_0x0770_Vtx[7] = {
	#include <NMarioModel/Vtx_0x0770.vtx.inc.c>
};

/* Vtx: Vtx_0x07E0 @ 0x7E0 (30 vertices) */
Vtx dNMarioModel_Vtx_0x07E0_Vtx[30] = {
	#include <NMarioModel/Vtx_0x07E0.vtx.inc.c>
};

/* Vtx: Vtx_0x09C0 @ 0x9C0 (32 vertices) */
Vtx dNMarioModel_Vtx_0x09C0_Vtx[32] = {
	#include <NMarioModel/Vtx_0x09C0.vtx.inc.c>
};

/* Vtx: Vtx_0x0BC0 @ 0xBC0 (30 vertices) */
Vtx dNMarioModel_Vtx_0x0BC0_Vtx[30] = {
	#include <NMarioModel/Vtx_0x0BC0.vtx.inc.c>
};

/* Vtx: Vtx_0x0DA0 @ 0xDA0 (32 vertices) */
Vtx dNMarioModel_Vtx_0x0DA0_Vtx[32] = {
	#include <NMarioModel/Vtx_0x0DA0.vtx.inc.c>
};

/* Vtx: Vtx_0x0FA0 @ 0xFA0 (6 vertices) */
Vtx dNMarioModel_Vtx_0x0FA0_Vtx[6] = {
	#include <NMarioModel/Vtx_0x0FA0.vtx.inc.c>
};

/* Vtx: Vtx_0x1000 @ 0x1000 (6 vertices) */
Vtx dNMarioModel_Vtx_0x1000_Vtx[6] = {
	#include <NMarioModel/Vtx_0x1000.vtx.inc.c>
};

/* Vtx: Vtx_0x1060 @ 0x1060 (15 vertices) */
Vtx dNMarioModel_Vtx_0x1060_Vtx[15] = {
	#include <NMarioModel/Vtx_0x1060.vtx.inc.c>
};

/* Vtx: Vtx_0x1150 @ 0x1150 (9 vertices) */
Vtx dNMarioModel_Vtx_0x1150_Vtx[9] = {
	#include <NMarioModel/Vtx_0x1150.vtx.inc.c>
};

/* Vtx: Vtx_0x11E0 @ 0x11E0 (31 vertices) */
Vtx dNMarioModel_Vtx_0x11E0_Vtx[31] = {
	#include <NMarioModel/Vtx_0x11E0.vtx.inc.c>
};

/* Vtx: Vtx_0x13D0 @ 0x13D0 (7 vertices) */
Vtx dNMarioModel_Vtx_0x13D0_Vtx[7] = {
	#include <NMarioModel/Vtx_0x13D0.vtx.inc.c>
};

/* Vtx: Vtx_0x1440 @ 0x1440 (12 vertices) */
Vtx dNMarioModel_Vtx_0x1440_Vtx[12] = {
	#include <NMarioModel/Vtx_0x1440.vtx.inc.c>
};

/* Vtx: Vtx_0x1500 @ 0x1500 (6 vertices) */
Vtx dNMarioModel_Vtx_0x1500_Vtx[6] = {
	#include <NMarioModel/Vtx_0x1500.vtx.inc.c>
};

/* Vtx: Vtx_0x1560 @ 0x1560 (32 vertices) */
Vtx dNMarioModel_Vtx_0x1560_Vtx[32] = {
	#include <NMarioModel/Vtx_0x1560.vtx.inc.c>
};

/* Vtx: Vtx_0x1760 @ 0x1760 (12 vertices) */
Vtx dNMarioModel_Vtx_0x1760_Vtx[12] = {
	#include <NMarioModel/Vtx_0x1760.vtx.inc.c>
};

/* Vtx: Vtx_0x1820 @ 0x1820 (6 vertices) */
Vtx dNMarioModel_Vtx_0x1820_Vtx[6] = {
	#include <NMarioModel/Vtx_0x1820.vtx.inc.c>
};

/* Vtx: Vtx_0x1880 @ 0x1880 (32 vertices) */
Vtx dNMarioModel_Vtx_0x1880_Vtx[32] = {
	#include <NMarioModel/Vtx_0x1880.vtx.inc.c>
};

/* DisplayList: Joint_0x1A80 @ 0x1A80 (336 bytes, 42 cmds) */
Gfx dNMarioModel_Joint_0x1A80_DisplayList[42] = {
	#include <NMarioModel/Joint_0x1A80.dl.inc.c>
};

/* DisplayList: Joint_0x1BD0 @ 0x1BD0 (264 bytes, 33 cmds) */
Gfx dNMarioModel_Joint_0x1BD0_DisplayList[33] = {
	#include <NMarioModel/Joint_0x1BD0.dl.inc.c>
};

/* DisplayList: Joint_0x1CD8 @ 0x1CD8 (256 bytes, 32 cmds) */
Gfx dNMarioModel_Joint_0x1CD8_DisplayList[32] = {
	#include <NMarioModel/Joint_0x1CD8.dl.inc.c>
};

/* DisplayList: Joint_0x1DD8 @ 0x1DD8 (304 bytes, 38 cmds) */
Gfx dNMarioModel_Joint_0x1DD8_DisplayList[38] = {
	#include <NMarioModel/Joint_0x1DD8.dl.inc.c>
};

/* DisplayList: Joint_0x1F08 @ 0x1F08 (496 bytes, 62 cmds) */
Gfx dNMarioModel_Joint_0x1F08_DisplayList[62] = {
	#include <NMarioModel/Joint_0x1F08.dl.inc.c>
};

/* DisplayList: Joint_0x20F8 @ 0x20F8 (264 bytes, 33 cmds) */
Gfx dNMarioModel_Joint_0x20F8_DisplayList[33] = {
	#include <NMarioModel/Joint_0x20F8.dl.inc.c>
};

/* DisplayList: Joint_0x2200 @ 0x2200 (256 bytes, 32 cmds) */
Gfx dNMarioModel_Joint_0x2200_DisplayList[32] = {
	#include <NMarioModel/Joint_0x2200.dl.inc.c>
};

/* DisplayList: Joint_0x2300 @ 0x2300 (304 bytes, 38 cmds) */
Gfx dNMarioModel_Joint_0x2300_DisplayList[38] = {
	#include <NMarioModel/Joint_0x2300.dl.inc.c>
};

/* DisplayList: Joint_0x2430 @ 0x2430 (248 bytes, 31 cmds) */
Gfx dNMarioModel_Joint_0x2430_DisplayList[31] = {
	#include <NMarioModel/Joint_0x2430.dl.inc.c>
};

/* DisplayList: Joint_0x2528 @ 0x2528 (248 bytes, 31 cmds) */
Gfx dNMarioModel_Joint_0x2528_DisplayList[31] = {
	#include <NMarioModel/Joint_0x2528.dl.inc.c>
};

/* DisplayList: Joint_0x2620 @ 0x2620 (272 bytes, 34 cmds) */
Gfx dNMarioModel_Joint_0x2620_DisplayList[34] = {
	#include <NMarioModel/Joint_0x2620.dl.inc.c>
};

/* DisplayList: Joint_0x2730 @ 0x2730 (248 bytes, 31 cmds) */
Gfx dNMarioModel_Joint_0x2730_DisplayList[31] = {
	#include <NMarioModel/Joint_0x2730.dl.inc.c>
};

/* DisplayList: Joint_0x2828 @ 0x2828 (248 bytes, 31 cmds) */
Gfx dNMarioModel_Joint_0x2828_DisplayList[31] = {
	#include <NMarioModel/Joint_0x2828.dl.inc.c>
};

/* DisplayList: Joint_0x2920 @ 0x2920 (272 bytes, 34 cmds) */
Gfx dNMarioModel_Joint_0x2920_DisplayList[34] = {
	#include <NMarioModel/Joint_0x2920.dl.inc.c>
};

/* DObjDesc: JointTree @ 0x2A30 (26 entries) */
DObjDesc dNMarioModel_JointTree[] = {
	{ 0, (void*)0x00000000, { 0.0f, 150.0f, -9.999999974752427e-07f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dNMarioModel_Joint_0x1A80_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 51.06291961669922f, 53.745887756347656f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNMarioModel_Joint_0x1BD0_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { -0.10735300183296204f, -0.49905699491500854f, 0.009503000415861607f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNMarioModel_Joint_0x1CD8_DisplayList, { 40.34217071533203f, 3.999999989900971e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, -0.01781800016760826f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNMarioModel_Joint_0x1DD8_DisplayList, { 35.965396881103516f, 0.00101500004529953f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 0.0f, 72.0720443725586f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNMarioModel_Joint_0x1F08_DisplayList, { 0.0f, 13.513498306274414f, -4.5f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -51.06291961669922f, 53.74599075317383f, 0.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNMarioModel_Joint_0x20F8_DisplayList, { 0.0f, 0.0f, 3.999999989900971e-06f }, { 0.1073480024933815f, 0.4990580081939697f, 0.009492999874055386f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dNMarioModel_Joint_0x2200_DisplayList, { 40.325016021728516f, -9.999999974752427e-07f, -2.300000051036477e-05f }, { 0.0f, 0.0f, -0.017788000404834747f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNMarioModel_Joint_0x2300_DisplayList, { 35.993019104003906f, 0.001016999944113195f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)0x00000000, { 35.062339782714844f, -17.55162239074707f, 3.520087957382202f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 31.6803035736084f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dNMarioModel_Joint_0x2430_DisplayList, { 0.0f, 0.0f, 0.0f }, { 0.041026998311281204f, -0.08334600180387497f, -0.03497900068759918f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNMarioModel_Joint_0x2528_DisplayList, { 55.57932662963867f, 3.999999989900971e-06f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 66.10771179199219f, 1.3644230365753174f, 2.316188097000122f }, { 0.0f, -9.000000318337698e-06f, -1.6418110132217407f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNMarioModel_Joint_0x2620_DisplayList, { 0.0f, -1.2999999853491317e-05f, -7.000000096013537e-06f }, { -0.1762239933013916f, -0.39459899067878723f, 0.20836299657821655f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { -31.680540084838867f, -20.653295516967773f, -3.0f }, { -1.570796012878418f, 0.0f, -1.570796012878418f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)dNMarioModel_Joint_0x2730_DisplayList, { 0.0f, 0.0f, 0.0f }, { -0.040421001613140106f, 0.0830719992518425f, -0.02651900053024292f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dNMarioModel_Joint_0x2828_DisplayList, { 55.579776763916016f, 3.999999989900971e-06f, -7.000000096013537e-06f }, { 0.0f, 0.0f, 0.014681000262498856f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 65.8060302734375f, 1.3083360195159912f, 2.316215991973877f }, { 0.0f, 9.000000318337698e-06f, -1.6418240070343018f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)dNMarioModel_Joint_0x2920_DisplayList, { 0.0f, 0.0f, -3.999999989900971e-06f }, { 0.1284639984369278f, 0.4220089912414551f, 0.19265300035476685f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { -9.999999974752427e-07f, 0.0f, 119.99999237060547f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

#endif  /* REGION_US */
