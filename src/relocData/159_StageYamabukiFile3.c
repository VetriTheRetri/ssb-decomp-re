/* relocData file 159: StageYamabukiFile3 — Yamabuki (Saffron City) stage AnimJoint data.
 * AObjEvent32 scripts each terminate in one aobjEvent32End() or a
 * SetAnim loop; trailing joint-table words are typed as AObjEvent32*
 * arrays. Intern chain walked from the relocData.csv head. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

extern u32 dStageYamabukiFile3_AnimJoint_0x03F8[];
extern u32 dStageYamabukiFile3_AnimJoint_0x0828[];
extern u32 dStageYamabukiFile3_AnimJoint_0x0F38[];
extern MObjSub *dStageYamabukiFile3_mobjsub_0x1858[];
extern u32 dStageYamabukiFile3_AnimJoint_0x1A28[];
extern AObjEvent32 *dStageYamabukiFile3_mobjlink_0x1B18[];
extern MObjSub *dStageYamabukiFile3_mobjsub_0x2208[];
extern u32 dStageYamabukiFile3_AnimJoint_0x23D8[];

PAD(8);
/* @ 0x0008 */
u16 dStageYamabukiFile3_LUT_0x0008[16] = {
	#include <StageYamabukiFile3/LUT_0x0008.palette.inc.c>
};
PAD(8);

/* @ 0x0030 */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile3_LUT_0x0008 */
u8 dStageYamabukiFile3_Tex_0x0030[512] = {
	#include <StageYamabukiFile3/Tex_0x0030.tex.inc.c>
};

/* @ 0x0230 */
Vtx dStageYamabukiFile3_Vtx_0x0230[4] = {
	#include <StageYamabukiFile3/Vtx_0x0230.vtx.inc.c>
};

/* @ 0x0270 */
Gfx dStageYamabukiFile3_DL_0x0270[30] = {
	#include <StageYamabukiFile3/DL_0x0270.dl.inc.c>
};

/* @ 0x0360 */
DObjDesc dStageYamabukiFile3_DObjDesc_0x0360[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile3_DL_0x0270, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x03E4 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x03E4[3] = {
	NULL,
	NULL,
	NULL,
};

/* @ 0x03F0 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x03F0[2] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile3_AnimJoint_0x03F8,
};

/* @ 0x03F8 */
u32 dStageYamabukiFile3_AnimJoint_0x03F8[12] = {
	aobjEvent32SetVal(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 18),
	    0xC3E10C79,  /* -450.0974426269531f */
	aobjEvent32SetValBlock(0x010, 53),
	    0xC3E5F502,  /* -459.91412353515625f */
	aobjEvent32SetValBlock(0x010, 89),
	    0x3FBC46A1,  /* 1.4709054231643677f */
	aobjEvent32End(),
};

PAD(16);
/* @ 0x0438 */
u16 dStageYamabukiFile3_LUT_0x0438[16] = {
	#include <StageYamabukiFile3/LUT_0x0438.palette.inc.c>
};
PAD(8);

/* @ 0x0460 */
/* @tex fmt=CI4 dim=32x32 lut=dStageYamabukiFile3_LUT_0x0438 */
u8 dStageYamabukiFile3_Tex_0x0460[512] = {
	#include <StageYamabukiFile3/Tex_0x0460.tex.inc.c>
};

/* @ 0x0660 */
Vtx dStageYamabukiFile3_Vtx_0x0660[4] = {
	#include <StageYamabukiFile3/Vtx_0x0660.vtx.inc.c>
};

/* @ 0x06A0 */
Gfx dStageYamabukiFile3_DL_0x06A0[30] = {
	#include <StageYamabukiFile3/DL_0x06A0.dl.inc.c>
};

/* @ 0x0790 */
DObjDesc dStageYamabukiFile3_DObjDesc_0x0790[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile3_DL_0x06A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0814 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x0814[3] = {
	NULL,
	NULL,
	NULL,
};

/* @ 0x0820 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x0820[2] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile3_AnimJoint_0x0828,
};

/* @ 0x0828 */
u32 dStageYamabukiFile3_AnimJoint_0x0828[134] = {
	aobjEvent32SetValRate(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0xC1A2FA9A,  /* -20.372364044189453f */
	    0x00000000,  /* 0.0f */
	    0x429FDED9,  /* 79.93524932861328f */
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x004, 29),
	    0x4183F267,  /* 16.49336051940918f */
	aobjEvent32SetValRate(0x010, 70),
	    0xC41675C4,  /* -601.840087890625f */
	    0xBF66646C,  /* -0.8999698162078857f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x43A1694C,  /* 322.8226318359375f */
	aobjEvent32SetValRateBlock(0x020, 19),
	    0x00000000,  /* 0.0f */
	    0xC25109EF,  /* -52.259700775146484f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x4215A692,  /* 37.41266632080078f */
	aobjEvent32SetVal(0x004, 31),
	    0x4196CBE4,  /* 18.84955596923828f */
	aobjEvent32SetVal0RateBlock(0x020, 11),
	    0x43263782,  /* 166.21682739257812f */
	aobjEvent32SetValRateBlock(0x020, 20),
	    0x00000000,  /* 0.0f */
	    0xC1B0DDE3,  /* -22.10834312438965f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x416F2089,  /* 14.945443153381348f */
	aobjEvent32SetVal0Rate(0x020, 11),
	    0x42AB5A77,  /* 85.67668914794922f */
	aobjEvent32SetValBlock(0x004, 10),
	    0x4196CBE4,  /* 18.84955596923828f */
	aobjEvent32SetVal(0x010, 2),
	    0xC413AAD7,  /* -590.6693725585938f */
	aobjEvent32SetVal(0x004, 50),
	    0x4196CBE4,  /* 18.84955596923828f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 19),
	    0x00000000,  /* 0.0f */
	    0xC12ABCE1,  /* -10.671113014221191f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 2),
	    0xC4172B10,  /* -604.6728515625f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC41365E6,  /* -589.5921630859375f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC417C867,  /* -607.1312866210938f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC4125223,  /* -585.2833862304688f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC4172B10,  /* -604.6728515625f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC411C842,  /* -583.1290283203125f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC4183ED3,  /* -608.9816284179688f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC4106F8E,  /* -577.7430419921875f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC41883C3,  /* -610.0587768554688f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40C64CDB,  /* 6.1968817710876465f */
	aobjEvent32SetValRate(0x020, 7),
	    0x41F0BB6F,  /* 30.091520309448242f */
	    0x3EA2B337,  /* 0.3177735507488251f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC40FA0BC,  /* -574.511474609375f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC418C8B4,  /* -611.135986328125f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC40EFE04,  /* -571.968994140625f */
	aobjEvent32SetVal(0x010, 2),
	    0xC41883C3,  /* -610.0587768554688f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 6),
	    0x4115AF96,  /* 9.355367660522461f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x010, 2),
	    0xC40CFCBC,  /* -563.948974609375f */
	aobjEvent32SetValBlock(0x010, 2),
	    0xC418C8B4,  /* -611.135986328125f */
	aobjEvent32SetVal(0x010, 2),
	    0xC40BBBEE,  /* -558.9364013671875f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0x41C155D2,  /* 24.16690444946289f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC41A8562,  /* -618.0841064453125f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0xC0AE98F1,  /* -5.456169605255127f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC40B3B9C,  /* -556.931396484375f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0x41F0BB6F,  /* 30.091520309448242f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC41BC62F,  /* -623.0966186523438f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0xC13617B2,  /* -11.38078498840332f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC40BBBEE,  /* -558.9364013671875f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0x4221D6A0,  /* 40.4595947265625f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC41BC62F,  /* -623.0966186523438f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0xC14DCA7F,  /* -12.861937522888184f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC40BBBEE,  /* -558.9364013671875f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0x4239896F,  /* 46.384212493896484f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC41BC62F,  /* -623.0966186523438f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x020, 2),
	    0xC0428A0C,  /* -3.039675712585449f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 2),
	    0xC411FBFE,  /* -583.9373779296875f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x020, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(8);
/* @ 0x0A48 */
u16 dStageYamabukiFile3_LUT_0x0A48[16] = {
	#include <StageYamabukiFile3/LUT_0x0A48.palette.inc.c>
};
PAD(8);

/* @ 0x0A70 */
/* @tex fmt=CI4 dim=32x48 lut=dStageYamabukiFile3_LUT_0x0A48 */
u8 dStageYamabukiFile3_Tex_0x0A70[768] = {
	#include <StageYamabukiFile3/Tex_0x0A70.tex.inc.c>
};

/* @ 0x0D70 */
Vtx dStageYamabukiFile3_Vtx_0x0D70[4] = {
	#include <StageYamabukiFile3/Vtx_0x0D70.vtx.inc.c>
};

/* @ 0x0DB0 */
Gfx dStageYamabukiFile3_DL_0x0DB0[30] = {
	#include <StageYamabukiFile3/DL_0x0DB0.dl.inc.c>
};

/* @ 0x0EA0 */
DObjDesc dStageYamabukiFile3_DObjDesc_0x0EA0[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile3_DL_0x0DB0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x0F24 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x0F24[3] = {
	NULL,
	NULL,
	NULL,
};

/* @ 0x0F30 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x0F30[2] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile3_AnimJoint_0x0F38,
};

/* @ 0x0F38 */
u32 dStageYamabukiFile3_AnimJoint_0x0F38[43] = {
	aobjEvent32SetVal(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 8),
	    0xC424DDAA,  /* -659.4635009765625f */
	aobjEvent32SetValBlock(0x020, 7),
	    0x3F566BD9,  /* 0.8375831246376038f */
	aobjEvent32SetVal(0x020, 2),
	    0x421EB6FF,  /* 39.678707122802734f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x010, 53),
	    0xC4250000,  /* -660.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetValBlock(0x020, 2),
	    0xC1D3DDEA,  /* -26.483356475830078f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x42087467,  /* 34.11367416381836f */
	aobjEvent32SetValBlock(0x020, 2),
	    0xC1C506DA,  /* -24.628345489501953f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x41D58C8F,  /* 26.693632125854492f */
	aobjEvent32SetValBlock(0x020, 2),
	    0xC1B62FC9,  /* -22.773332595825195f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x41A9075E,  /* 21.128597259521484f */
	aobjEvent32SetValBlock(0x020, 2),
	    0xC19D7404,  /* -19.68164825439453f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x41ADF9BA,  /* 21.746936798095703f */
	aobjEvent32SetValBlock(0x020, 2),
	    0xC19881A9,  /* -19.063310623168945f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x419F22A9,  /* 19.891923904418945f */
	aobjEvent32SetValBlock(0x020, 2),
	    0x3DD7526E,  /* 0.10513769090175629f */
	aobjEvent32SetVal(0x020, 88),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(30),
	aobjEvent32SetValBlock(0x010, 58),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(20);
/* @ 0x0FF8 */
u16 dStageYamabukiFile3_LUT_0x0FF8[16] = {
	#include <StageYamabukiFile3/LUT_0x0FF8.palette.inc.c>
};
PAD(8);

/* @ 0x1020 */
u16 dStageYamabukiFile3_LUT_0x1020[16] = {
	#include <StageYamabukiFile3/LUT_0x1020.palette.inc.c>
};
PAD(8);

/* @ 0x1048 */
/* @tex fmt=CI4 dim=16x121 */
u8 dStageYamabukiFile3_Tex_0x1048[968] = {
	#include <StageYamabukiFile3/Tex_0x1048.tex.inc.c>
};

/* @ 0x1410 */
/* @tex fmt=CI4 dim=48x40 */
u8 dStageYamabukiFile3_Tex_0x1410[960] = {
	#include <StageYamabukiFile3/Tex_0x1410.tex.inc.c>
};

/* @ 0x17D0 */
MObjSub **dStageYamabukiFile3_mobjlink_0x17D0[2] = {
	NULL,
	(MObjSub **)dStageYamabukiFile3_mobjsub_0x1858,
};

/* @ 0x17D8 */
u8 *dStageYamabukiFile3_sprites_0x17D8[2] = {
	(u8 *)dStageYamabukiFile3_Tex_0x1410,
	(u8 *)dStageYamabukiFile3_Tex_0x1048,
};

/* @ 0x17E0 */
MObjSub dStageYamabukiFile3_MObjSub_0x17E0[1] = {
	{
		0x0000, 2, 2,
		(void **)dStageYamabukiFile3_sprites_0x17D8,
		0x0020, 0x0000, 0x0028, 0x0028,
		0,
		0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f,
		(void **)NULL,
		0x0001, 2, 0, 0x0028, 0x0028, 0x0028, 0x0028,
		0.0f, 0.0f, 0.0f, 0.0f,
		0x00002005,
		{ { 255, 255, 255, 255 } },
		0, 0, { 0, 0 },
		{ { 0, 0, 0, 255 } },
		{ { 0, 0, 0, 0 } },
		{ { 255, 255, 255, 0 } },
		{ { 38, 38, 38, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x1858 */
MObjSub *dStageYamabukiFile3_mobjsub_0x1858[2] = {
	(MObjSub *)dStageYamabukiFile3_MObjSub_0x17E0,
	NULL,
};

/* @ 0x1860 */
Vtx dStageYamabukiFile3_Vtx_0x1860[4] = {
	#include <StageYamabukiFile3/Vtx_0x1860.vtx.inc.c>
};

/* @ 0x18A0 */
Gfx dStageYamabukiFile3_DL_0x18A0[30] = {
	#include <StageYamabukiFile3/DL_0x18A0.dl.inc.c>
};

/* @ 0x1990 */
DObjDesc dStageYamabukiFile3_DObjDesc_0x1990[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile3_DL_0x18A0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x1A14 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x1A14[3] = {
	NULL,
	NULL,
	NULL,
};

/* @ 0x1A20 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x1A20[2] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile3_AnimJoint_0x1A28,
};

/* @ 0x1A28 */
u32 dStageYamabukiFile3_AnimJoint_0x1A28[50] = {
	aobjEvent32SetValRate(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0xC2B0AF56,  /* -88.34245300292969f */
	    0x00000000,  /* 0.0f */
	    0x403C2BE9,  /* 2.9401800632476807f */
	aobjEvent32SetValAfterBlock(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 15),
	    0x4209FAA7,  /* 34.49477767944336f */
	    0xBE6A7767,  /* -0.22897110879421234f */
	aobjEvent32SetValRateBlock(0x010, 14),
	    0xC414C192,  /* -595.0245361328125f */
	    0xBF83A453,  /* -1.0284522771835327f */
	aobjEvent32SetValRate(0x010, 86),
	    0xC4127730,  /* -585.8623046875f */
	    0x3F8A4E54,  /* 1.0805153846740723f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x020, 15),
	    0xC0DBCFF1,  /* -6.869133472442627f */
	    0xC0820542,  /* -4.063141822814941f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40995677,  /* 4.791804790496826f */
	aobjEvent32SetValRateBlock(0x020, 15),
	    0x42064E5A,  /* 33.576515197753906f */
	    0x3E6A7767,  /* 0.22897110879421234f */
	aobjEvent32SetValRateBlock(0x020, 15),
	    0x00000000,  /* 0.0f */
	    0xC0873109,  /* -4.224735736846924f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x4033481A,  /* 2.8012757301330566f */
	aobjEvent32SetVal0RateBlock(0x020, 15),
	    0x42064E5A,  /* 33.576515197753906f */
	aobjEvent32SetValRateBlock(0x020, 15),
	    0x00000000,  /* 0.0f */
	    0xC064EE44,  /* -3.577042579650879f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x406E1671,  /* 3.7201197147369385f */
	aobjEvent32SetValRate(0x020, 15),
	    0x42064E5A,  /* 33.576515197753906f */
	    0x3C6B817A,  /* 0.014374131336808205f */
	aobjEvent32Wait(10),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x42676C2C,  /* 57.85563659667969f */
	aobjEvent32SetVal0Rate(0x010, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x020, 15),
	    0x3EDCC962,  /* 0.43122392892837524f */
	    0xC06D2A6E,  /* -3.705714702606201f */
	aobjEvent32End(),
};

/* @ 0x1AF0 */
AObjEvent32 **dStageYamabukiFile3_mobjlink_0x1AF0[2] = {
	NULL,
	(AObjEvent32 **)dStageYamabukiFile3_mobjlink_0x1B18,
};

/* @ 0x1AF8 */
u32 dStageYamabukiFile3_AnimJoint_0x1AF8[8] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 16),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfter(0x001, 16),
	    0x3F800000,  /* 1.0f */
	aobjEvent32Wait(104),
	aobjEvent32End(),
};

/* @ 0x1B18 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x1B18[1] = {
	(AObjEvent32 *)dStageYamabukiFile3_AnimJoint_0x1AF8,
};

PAD(12);
/* @ 0x1B28 */
u16 dStageYamabukiFile3_LUT_0x1B28[16] = {
	#include <StageYamabukiFile3/LUT_0x1B28.palette.inc.c>
};
PAD(8);

/* @ 0x1B50 */
u16 dStageYamabukiFile3_LUT_0x1B50[16] = {
	#include <StageYamabukiFile3/LUT_0x1B50.palette.inc.c>
};
PAD(8);

/* @ 0x1B78 */
/* @tex fmt=CI4 dim=48x32 */
u8 dStageYamabukiFile3_Tex_0x1B78[776] = {
	#include <StageYamabukiFile3/Tex_0x1B78.tex.inc.c>
};

/* @ 0x1E80 */
/* @tex fmt=CI4 dim=48x32 */
u8 dStageYamabukiFile3_Tex_0x1E80[768] = {
	#include <StageYamabukiFile3/Tex_0x1E80.tex.inc.c>
};

/* @ 0x2180 */
MObjSub **dStageYamabukiFile3_mobjlink_0x2180[2] = {
	NULL,
	(MObjSub **)dStageYamabukiFile3_mobjsub_0x2208,
};

/* @ 0x2188 */
u8 *dStageYamabukiFile3_sprites_0x2188[2] = {
	(u8 *)dStageYamabukiFile3_Tex_0x1E80,
	(u8 *)dStageYamabukiFile3_Tex_0x1B78,
};

/* @ 0x2190 */
MObjSub dStageYamabukiFile3_MObjSub_0x2190[1] = {
	{
		0x0000, 2, 2,
		(void **)dStageYamabukiFile3_sprites_0x2188,
		0x0020, 0x0000, 0x0030, 0x0020,
		0,
		0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f,
		(void **)NULL,
		0x0001, 2, 0, 0x0030, 0x0020, 0x0030, 0x0020,
		0.0f, 0.0f, 0.0f, 0.0f,
		0x00002005,
		{ { 255, 255, 255, 255 } },
		0, 0, { 0, 0 },
		{ { 0, 0, 0, 255 } },
		{ { 0, 0, 0, 0 } },
		{ { 255, 255, 255, 0 } },
		{ { 38, 38, 38, 0 } },
		0, 0, 0, 0,
	}
};

/* @ 0x2208 */
MObjSub *dStageYamabukiFile3_mobjsub_0x2208[2] = {
	(MObjSub *)dStageYamabukiFile3_MObjSub_0x2190,
	NULL,
};

/* @ 0x2210 */
Vtx dStageYamabukiFile3_Vtx_0x2210[4] = {
	#include <StageYamabukiFile3/Vtx_0x2210.vtx.inc.c>
};

/* @ 0x2250 */
Gfx dStageYamabukiFile3_DL_0x2250[30] = {
	#include <StageYamabukiFile3/DL_0x2250.dl.inc.c>
};

/* @ 0x2340 */
DObjDesc dStageYamabukiFile3_DObjDesc_0x2340[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile3_DL_0x2250, { 0.0f, 90.87904357910156f, 0.0022899999748915434f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x23C4 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x23C4[3] = {
	NULL,
	NULL,
	NULL,
};

/* @ 0x23D0 */
AObjEvent32 *dStageYamabukiFile3_mobjlink_0x23D0[2] = {
	NULL,
	(AObjEvent32 *)dStageYamabukiFile3_AnimJoint_0x23D8,
};

/* @ 0x23D8 */
u32 dStageYamabukiFile3_AnimJoint_0x23D8[37] = {
	aobjEvent32SetValRate(0x020, 0),
	    0x42B5C212,  /* 90.87904357910156f */
	    0x40D7AEEC,  /* 6.740102767944336f */
	aobjEvent32SetValBlock(0x050, 0),
	    0x00000000,  /* 0.0f */
	    0x3B160D4E,  /* 0.002289611380547285f */
	aobjEvent32SetValRate(0x020, 19),
	    0x00000000,  /* 0.0f */
	    0xC1A78CBB,  /* -20.943716049194336f */
	aobjEvent32SetVal(0x040, 120),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 5),
	    0xC414FB4A,  /* -595.9263916015625f */
	aobjEvent32SetVal(0x010, 15),
	    0xC42F3983,  /* -700.8986206054688f */
	aobjEvent32Wait(14),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 101),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBEBBE830,  /* -0.3670058250427246f */
	aobjEvent32SetValRateBlock(0x010, 22),
	    0xC418335F,  /* -608.8026733398438f */
	    0x3F6E632C,  /* 0.9312007427215576f */
	aobjEvent32SetVal0RateBlock(0x010, 27),
	    0xC42E034B,  /* -696.0514526367188f */
	aobjEvent32SetValRateBlock(0x010, 51),
	    0x3FB4AFE9,  /* 1.4116183519363403f */
	    0x41D3968F,  /* 26.448514938354492f */
	aobjEvent32SetVal0Rate(0x020, 8),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x050, 8),
	    0x3FB4AFE9,  /* 1.4116183519363403f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(12);
/* @ 0x2478 */
u16 dStageYamabukiFile3_LUT_0x2478[16] = {
	#include <StageYamabukiFile3/LUT_0x2478.palette.inc.c>
};
PAD(8);

/* @ 0x24A0 */
/* @tex fmt=IA8 dim=48x16 */
u8 dStageYamabukiFile3_Tex_0x24A0[776] = {
	#include <StageYamabukiFile3/Tex_0x24A0.tex.inc.c>
};

/* @ 0x27A8 */
/* @tex fmt=CI4 dim=16x16 lut=dStageYamabukiFile3_LUT_0x2478 */
u8 dStageYamabukiFile3_Tex_0x27A8[128] = {
	#include <StageYamabukiFile3/Tex_0x27A8.tex.inc.c>
};

/* @ 0x2828 */
Vtx dStageYamabukiFile3_Vtx_0x2828[4] = {
	#include <StageYamabukiFile3/Vtx_0x2828.vtx.inc.c>
};

/* @ 0x2868 */
Vtx dStageYamabukiFile3_Vtx_0x2868[4] = {
	#include <StageYamabukiFile3/Vtx_0x2868.vtx.inc.c>
};

/* @ 0x28A8 */
Gfx dStageYamabukiFile3_DL_0x28A8[30] = {
	#include <StageYamabukiFile3/DL_0x28A8.dl.inc.c>
};

/* @ 0x2998 */
Gfx dStageYamabukiFile3_DL_0x2998[20] = {
	#include <StageYamabukiFile3/DL_0x2998.dl.inc.c>
};

/* @ 0x2A38 */
DObjDLLink dStageYamabukiFile3_DLLink_0x2A38[3] = {
	{ 0, dStageYamabukiFile3_DL_0x28A8 },
	{ 1, dStageYamabukiFile3_DL_0x2998 },
	{ 4, NULL },
};

/* @ 0x2A50 */
DObjDesc dStageYamabukiFile3_DObjDesc_0x2A50[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void *)dStageYamabukiFile3_DLLink_0x2A38, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};
