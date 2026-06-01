/* relocData file 339: YoshiSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u16 dYoshiSpecial3_Lut_0x0008_palette[];
extern u8 dYoshiSpecial3_Tex_0x0030[];
extern Vtx dYoshiSpecial3_Vtx_0x0830_Vtx[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dYoshiSpecial3_Lut_0x0008_palette[16] = {
	#include <YoshiSpecial3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0830 (2048 bytes) */
/* @tex fmt=CI4 dim=64x64 lut=dYoshiSpecial3_Lut_0x0008_palette */
u8 dYoshiSpecial3_Tex_0x0030[2048] = {
	#include <YoshiSpecial3/Tex_0x0030.tex.inc.c>
};

/* Vtx: Vtx_0x0830 @ 0x830 (4 vertices) */
Vtx dYoshiSpecial3_Vtx_0x0830_Vtx[4] = {
	#include <YoshiSpecial3/Vtx_0x0830.vtx.inc.c>
};

/* DisplayList: Joint_0x0870 @ 0x870 (240 bytes) */
Gfx dYoshiSpecial3_Joint_0x0870_DisplayList[30] = {
	#include <YoshiSpecial3/Joint_0x0870.dl.inc.c>
};

/* DObjDesc: EggLay @ 0x960 (3 entries) */
DObjDesc dYoshiSpecial3_EggLay[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dYoshiSpecial3_Joint_0x0870_DisplayList, { 2.499999936844688e-05f, 90.0f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 0.019999999552965164f, 0.019999999552965164f, 0.019999999552965164f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x09F0 to 0x0B90 (416 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial3_EggLayBreak_AnimJoint_0x9F8[];
extern u32 dYoshiSpecial3_EggLayBreak_AnimJoint_0xA08[];

AObjEvent32 *dYoshiSpecial3_EggLayBreak_AnimJoint[2] = {
	(AObjEvent32 *)dYoshiSpecial3_EggLayBreak_AnimJoint_0x9F8,
	(AObjEvent32 *)dYoshiSpecial3_EggLayBreak_AnimJoint_0xA08,
};

u32 dYoshiSpecial3_EggLayBreak_AnimJoint_0x9F8[] = {
	aobjEvent32SetValAfter(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(10),
	aobjEvent32End(),
};

u32 dYoshiSpecial3_EggLayBreak_AnimJoint_0xA08[] = {
	aobjEvent32SetVal0RateBlock(0x050, 0),
	    0x37D1FFFF,  /* 2.503394898667466e-05f */
	    0xB7700000,  /* -1.430511474609375e-05f */
	aobjEvent32SetValRate(0x050, 86),
	    0x37D1FFFF,  /* 2.503394898667466e-05f */
	    0x363A26F4,  /* 2.773883352347184e-06f */
	    0xB7700000,  /* -1.430511474609375e-05f */
	    0xB5D9187D,  /* -1.6174886923181475e-06f */
	aobjEvent32Cmd12(0x050, 70),
	aobjEvent32SetValRate(0x3A0, 0),
	    0x42B40000,  /* 90.0f */
	    0xBEDCFCA4,  /* -0.4316149950027466f */
	    0x3F400000,  /* 0.75f */
	    0x3BF30BB4,  /* 0.007417166605591774f */
	    0x3F400000,  /* 0.75f */
	    0xBBCC1872,  /* -0.006228500045835972f */
	    0x3F400000,  /* 0.75f */
	    0x3BF35F97,  /* 0.007427166681736708f */
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x3A0, 1),
	    0x426D6BEA,  /* 59.355384826660156f */
	    0xC1C1F915,  /* -24.24662208557129f */
	    0x3F86ECEC,  /* 1.054105281829834f */
	    0x3E6F96B3,  /* 0.23397330939769745f */
	    0x3EFD3FE8,  /* 0.4946281909942627f */
	    0xBE4EE7BF,  /* -0.2020559161901474f */
	    0x3F86FA36,  /* 1.0545108318328857f */
	    0x3E6FDA69,  /* 0.2342316061258316f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC1C1F90D,  /* -24.246606826782227f */
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3E6F963E,  /* 0.23397156596183777f */
	aobjEvent32SetValRate(0x080, 4),
	    0x3FC00000,  /* 1.5f */
	    0xBC849881,  /* -0.016186000779271126f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3E6FD960,  /* 0.23422765731811523f */
	aobjEvent32SetValRate(0x200, 5),
	    0x3FA3AECC,  /* 1.2787718772888184f */
	    0xBCC65C42,  /* -0.024213913828134537f */
	aobjEvent32SetTargetRate(0x100, 0),
	    0xBE4EE85D,  /* -0.20205827057361603f */
	aobjEvent32SetValRate(0x100, 6),
	    0x3EAF80A4,  /* 0.3427783250808716f */
	    0x3DF2E95F,  /* 0.11860918253660202f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x421CC18A,  /* 39.189002990722656f */
	    0xC1826ACD,  /* -16.302148818969727f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41D6020D,  /* 26.751001358032227f */
	    0xC10E70AD,  /* -8.902508735656738f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41AB126F,  /* 21.384000778198242f */
	    0xC00A560D,  /* -2.1615021228790283f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41B36C8C,  /* 22.428001403808594f */
	    0x407B22DE,  /* 3.9240031242370605f */
	aobjEvent32SetValRate(0x080, 4),
	    0x3F56F983,  /* 0.8397447466850281f */
	    0xBE6F1870,  /* -0.2334916591644287f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41E9DB23,  /* 29.23200035095215f */
	    0x4115A3DF,  /* 9.352507591247559f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0xBCC65B1E,  /* -0.02421336993575096f */
	aobjEvent32SetValRate(0x200, 2),
	    0x3F905186,  /* 1.1274878978729248f */
	    0xBE23C13A,  /* -0.15991678833961487f */
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x42248831,  /* 41.132999420166016f */
	    0x417E8596,  /* 15.907613754272461f */
	aobjEvent32SetTargetRate(0x100, 0),
	    0x3DF2E983,  /* 0.11860945075750351f */
	aobjEvent32SetValRateBlock(0x120, 1),
	    0x42743055,  /* 61.04719924926758f */
	    0x41DFC4E9,  /* 27.971147537231445f */
	    0x3F023BE9,  /* 0.5087266564369202f */
	    0x3E6EB175,  /* 0.2330988198518753f */
	aobjEvent32SetTargetRate(0x320, 0),
	    0x41DFC597,  /* 27.971479415893555f */
	    0x3E6EB0A6,  /* 0.23309573531150818f */
	    0xBE23C1CB,  /* -0.15991894900798798f */
	aobjEvent32SetValRate(0x320, 2),
	    0x4319F985,  /* 153.9746856689453f */
	    0x41E40B8B,  /* 28.50563621520996f */
	    0x3FA43D5B,  /* 1.2831224203109741f */
	    0x3E733F84,  /* 0.23754698038101196f */
	    0x3F12CA5A,  /* 0.5734001398086548f */
	    0xBE30BDD5,  /* -0.17259915173053741f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBE6F18EA,  /* -0.23349347710609436f */
	aobjEvent32SetValRateBlock(0x080, 1),
	    0x3F12CA5A,  /* 0.5734001398086548f */
	    0xBE08E3A9,  /* -0.13368095457553864f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0B90 to 0x0DB0 (544 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xB98[];
extern u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xBA8[];

AObjEvent32 *dYoshiSpecial3_EggLayThrow_AnimJoint[2] = {
	(AObjEvent32 *)dYoshiSpecial3_EggLayThrow_AnimJoint_0xB98,
	(AObjEvent32 *)dYoshiSpecial3_EggLayThrow_AnimJoint_0xBA8,
};

u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xB98[] = {
	aobjEvent32SetValAfter(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(16),
	aobjEvent32End(),
};

u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xBA8[] = {
	aobjEvent32SetVal0RateBlock(0x050, 0),
	    0x37D1FFFF,  /* 2.503394898667466e-05f */
	    0xB7700000,  /* -1.430511474609375e-05f */
	aobjEvent32SetValRate(0x050, 86),
	    0x37D1FFFF,  /* 2.503394898667466e-05f */
	    0x363A26F4,  /* 2.773883352347184e-06f */
	    0xB7700000,  /* -1.430511474609375e-05f */
	    0xB5D9187D,  /* -1.6174886923181475e-06f */
	aobjEvent32Cmd12(0x050, 70),
	aobjEvent32SetValRate(0x3A0, 0),
	    0x42B40000,  /* 90.0f */
	    0xBEDCFCA4,  /* -0.4316149950027466f */
	    0x3F400000,  /* 0.75f */
	    0x3BF30BB4,  /* 0.007417166605591774f */
	    0x3F400000,  /* 0.75f */
	    0xBBCC1872,  /* -0.006228500045835972f */
	    0x3F400000,  /* 0.75f */
	    0x3BF35F97,  /* 0.007427166681736708f */
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x3A0, 1),
	    0x426D6BEA,  /* 59.355384826660156f */
	    0xC1C1F915,  /* -24.24662208557129f */
	    0x3F86ECEC,  /* 1.054105281829834f */
	    0x3E6F96B3,  /* 0.23397330939769745f */
	    0x3EFD3FE8,  /* 0.4946281909942627f */
	    0xBE4EE7BF,  /* -0.2020559161901474f */
	    0x3F86FA36,  /* 1.0545108318328857f */
	    0x3E6FDA69,  /* 0.2342316061258316f */
	aobjEvent32SetTargetRate(0x0A0, 0),
	    0xC1C1F90D,  /* -24.246606826782227f */
	    0x3E6F963E,  /* 0.23397156596183777f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3E6FD960,  /* 0.23422765731811523f */
	aobjEvent32SetValRate(0x200, 5),
	    0x3FA3AECC,  /* 1.2787718772888184f */
	    0xBCC65C42,  /* -0.024213913828134537f */
	aobjEvent32SetTargetRate(0x100, 0),
	    0xBE4EE85D,  /* -0.20205827057361603f */
	aobjEvent32SetValRate(0x100, 6),
	    0x3EAF80A4,  /* 0.3427783250808716f */
	    0x3DF2E95F,  /* 0.11860918253660202f */
	aobjEvent32SetValRateBlock(0x0A0, 4),
	    0x41F5168E,  /* 30.63601303100586f */
	    0x3F818D78,  /* 1.012129783630371f */
	    0x3FA48AB4,  /* 1.2854828834533691f */
	    0xBC84985A,  /* -0.016185928136110306f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x3F818D70,  /* 1.0121288299560547f */
	aobjEvent32SetValRate(0x020, 3),
	    0x42743055,  /* 61.04719924926758f */
	    0x41DFC4E9,  /* 27.971147537231445f */
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBC849875,  /* -0.016185978427529335f */
	aobjEvent32SetValRate(0x080, 4),
	    0x3F56F983,  /* 0.8397447466850281f */
	    0xBE6F1870,  /* -0.2334916591644287f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x200, 0),
	    0xBCC65B1E,  /* -0.02421336993575096f */
	aobjEvent32SetValRate(0x200, 2),
	    0x3F905186,  /* 1.1274878978729248f */
	    0xBE23C13A,  /* -0.15991678833961487f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x100, 0),
	    0x3DF2E983,  /* 0.11860945075750351f */
	aobjEvent32SetValRateBlock(0x100, 1),
	    0x3F023BE9,  /* 0.5087266564369202f */
	    0x3E6EB175,  /* 0.2330988198518753f */
	aobjEvent32SetTargetRate(0x320, 0),
	    0x41DFC597,  /* 27.971479415893555f */
	    0x3E6EB0A6,  /* 0.23309573531150818f */
	    0xBE23C1CB,  /* -0.15991894900798798f */
	aobjEvent32SetValRate(0x320, 2),
	    0x4319F985,  /* 153.9746856689453f */
	    0x41E40B8B,  /* 28.50563621520996f */
	    0x3FA43D5B,  /* 1.2831224203109741f */
	    0x3E733F84,  /* 0.23754698038101196f */
	    0x3F12CA5A,  /* 0.5734001398086548f */
	    0xBE30BDD5,  /* -0.17259915173053741f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBE6F18EA,  /* -0.23349347710609436f */
	aobjEvent32SetValRateBlock(0x080, 1),
	    0x3F12CA5A,  /* 0.5734001398086548f */
	    0xBE08E3A9,  /* -0.13368095457553864f */
	aobjEvent32SetTargetRate(0x320, 0),
	    0x41E40755,  /* 28.50358009338379f */
	    0x3E733E3C,  /* 0.23754209280014038f */
	    0xBE30BA70,  /* -0.17258620262145996f */
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBE08E5F3,  /* -0.13368968665599823f */
	aobjEvent32SetValRate(0x080, 2),
	    0x3F130287,  /* 0.5742573142051697f */
	    0x3BDEF76D,  /* 0.0068043977953493595f */
	aobjEvent32SetValRateBlock(0x320, 1),
	    0x431A1675,  /* 154.0877227783203f */
	    0xBF1154DC,  /* -0.5677011013031006f */
	    0x3FA45C39,  /* 1.2840644121170044f */
	    0xBB9B051B,  /* -0.004730833228677511f */
	    0x3F126FE1,  /* 0.572019636631012f */
	    0xB9071A47,  /* -0.00012884392344858497f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF115426,  /* -0.5676902532577515f */
	aobjEvent32SetValRate(0x020, 3),
	    0x43096970,  /* 137.411865234375f */
	    0xC169A9D5,  /* -14.603962898254395f */
	aobjEvent32SetTargetRate(0x300, 0),
	    0xBB9B03DC,  /* -0.00473068468272686f */
	    0xB90726DB,  /* -0.00012889078061562032f */
	aobjEvent32SetValRate(0x300, 5),
	    0x3F400000,  /* 0.75f */
	    0xBE75D862,  /* -0.240083247423172f */
	    0x3F400000,  /* 0.75f */
	    0x3DADAD7C,  /* 0.08480355143547058f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3BDEF66F,  /* 0.006804279517382383f */
	aobjEvent32SetValRate(0x080, 4),
	    0x3F400000,  /* 0.75f */
	    0x3DAA3289,  /* 0.0831042006611824f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC169AA35,  /* -14.60405445098877f */
	aobjEvent32SetValRateBlock(0x020, 2),
	    0x42B40000,  /* 90.0f */
	    0xC1E67A3B,  /* -28.809682846069336f */
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x0DB0 to 0x0E70 (192 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8[];
extern u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4[];

AObjEvent32 *dYoshiSpecial3_EggLayWait_AnimJoint[2] = {
	(AObjEvent32 *)dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8,
	(AObjEvent32 *)dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4,
};

u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8[] = {
	aobjEvent32SetValRateBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,  /* 0.0f */
	    0x3DD2E441,  /* 0.10297442227602005f */
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,  /* 0.0f */
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8),
};

u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4[] = {
	aobjEvent32SetValAfterBlock(0x020, 0),
	    0x42B40000,  /* 90.0f */
	aobjEvent32SetVal0RateBlock(0x050, 0),
	    0x37D1FFFF,  /* 2.503394898667466e-05f */
	    0xB7700000,  /* -1.430511474609375e-05f */
	aobjEvent32SetValRate(0x050, 86),
	    0x37D1FFFF,  /* 2.503394898667466e-05f */
	    0x363A26F4,  /* 2.773883352347184e-06f */
	    0xB7700000,  /* -1.430511474609375e-05f */
	    0xB5D9187D,  /* -1.6174886923181475e-06f */
	aobjEvent32Cmd12(0x050, 30),
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3F400000,  /* 0.75f */
	    0x3F400000,  /* 0.75f */
	    0x3F400000,  /* 0.75f */
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0xBEB2B8C2,  /* -0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,  /* 0.0f */
	    0x3DD2E441,  /* 0.10297442227602005f */
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0x3EB2B8C2,  /* 0.3490658402442932f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,  /* 0.0f */
	    0xBDD2E441,  /* -0.10297442227602005f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4),
	aobjEvent32End(),
};
