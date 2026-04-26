/* relocData file 351: PurinSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dPurinSpecial2_gap_0x1C98[];

PAD(8);

extern u8 dPurinSpecial2_gap_0x1C98_sub_0x180[];

/* Raw data from file offset 0x0008 to 0x0810 (2056 bytes) */
u8 dPurinSpecial2_Tex_0x0008[2056] = {
	#include <PurinSpecial2/Tex_0x0008.tex.inc.c>
};

/* Raw data from file offset 0x0810 to 0x1018 (2056 bytes) */
u8 dPurinSpecial2_Tex_0x0810[2056] = {
	#include <PurinSpecial2/Tex_0x0810.tex.inc.c>
};

/* Raw data from file offset 0x1018 to 0x1820 (2056 bytes) */
u8 dPurinSpecial2_Tex_0x1018[2056] = {
	#include <PurinSpecial2/Tex_0x1018.tex.inc.c>
};

/* Raw data from file offset 0x1820 to 0x1C20 (1024 bytes) */
u8 dPurinSpecial2_Tex_0x1820[1024] = {
	#include <PurinSpecial2/Tex_0x1820.tex.inc.c>
};

/* MObjSub: SingMObjSub @ 0x1C20 */
MObjSub dPurinSpecial2_SingMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)(dPurinSpecial2_gap_0x1C98_sub_0x180),
	0x0000, 0x0000, 0x070C, 0x0788,
	118294410,
	2.0166514759768306e-34f, 1.0789998175301091e-42f,
	0.0f, 2.938735877055719e-39f,
	5.877561437213154e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 9.404816885393553e-38f,
	0x00200020,
	{ { 0x00, 0x40, 0x00, 0x40 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	-43776, 0,
	-16744193, 8,
};

/* Raw data from file offset 0x1C98 to 0x1E38 (416 bytes) */
/* gap sub-block @ 0x1C98 (was gap+0x0, 24 bytes) */
u8 dPurinSpecial2_gap_0x1C98[24] = {
	#include <PurinSpecial2/gap_0x1C98.data.inc.c>
};

/* gap sub-block @ 0x1CB0 (was gap+0x18, 120 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x18[120] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x18.data.inc.c>
};

/* gap sub-block @ 0x1D28 (was gap+0x90, 120 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x90[120] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x90.data.inc.c>
};

/* gap sub-block @ 0x1DA0 (was gap+0x108, 120 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x108[120] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x108.data.inc.c>
};

/* gap sub-block @ 0x1E18 (was gap+0x180, 8 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x180[8] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x180.data.inc.c>
};

/* gap sub-block @ 0x1E20 (was gap+0x188, 8 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x188[8] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x188.data.inc.c>
};

/* gap sub-block @ 0x1E28 (was gap+0x190, 8 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x190[8] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x190.data.inc.c>
};

/* gap sub-block @ 0x1E30 (was gap+0x198, 8 bytes) */
u8 dPurinSpecial2_gap_0x1C98_sub_0x198[8] = {
	#include <PurinSpecial2/gap_0x1C98_sub_0x198.data.inc.c>
};

/* Vtx: Vtx_0x1E38 @ 0x1E38 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1E38_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1E38.vtx.inc.c>
};

/* Vtx: Vtx_0x1E78 @ 0x1E78 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1E78_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1E78.vtx.inc.c>
};

/* Vtx: Vtx_0x1EB8 @ 0x1EB8 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1EB8_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1EB8.vtx.inc.c>
};

/* Vtx: Vtx_0x1EF8 @ 0x1EF8 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1EF8_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1EF8.vtx.inc.c>
};

/* DisplayList: Joint_0x1F38 @ 0x1F38 (48 bytes) */
Gfx dPurinSpecial2_Joint_0x1F38_DisplayList[6] = {
	#include <PurinSpecial2/Joint_0x1F38.dl.inc.c>
};

/* Gfx DL: Joint_0x1F38_post @ 0x1F68 (13 cmds) */
Gfx dPurinSpecial2_Joint_0x1F38_post[13] = {
	#include <PurinSpecial2/Joint_0x1F38_post.dl.inc.c>
};

/* DisplayList: Joint_0x1FD0 @ 0x1FD0 (120 bytes) */
Gfx dPurinSpecial2_Joint_0x1FD0_DisplayList[15] = {
	#include <PurinSpecial2/Joint_0x1FD0.dl.inc.c>
};

/* DisplayList: Joint_0x2048 @ 0x2048 (72 bytes) */
Gfx dPurinSpecial2_Joint_0x2048_DisplayList[9] = {
	#include <PurinSpecial2/Joint_0x2048.dl.inc.c>
};

/* DisplayList: Joint_0x2090 @ 0x2090 (96 bytes) */
Gfx dPurinSpecial2_Joint_0x2090_DisplayList[12] = {
	#include <PurinSpecial2/Joint_0x2090.dl.inc.c>
};

/* Raw data from file offset 0x20F0 to 0x2100 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x20F0[16] = {
	#include <PurinSpecial2/JointCmd_0x20F0.data.inc.c>
};

/* Raw data from file offset 0x2100 to 0x2110 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x2100[16] = {
	#include <PurinSpecial2/JointCmd_0x2100.data.inc.c>
};

/* Raw data from file offset 0x2110 to 0x2120 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x2110[16] = {
	#include <PurinSpecial2/JointCmd_0x2110.data.inc.c>
};

/* Raw data from file offset 0x2120 to 0x2130 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x2120[16] = {
	#include <PurinSpecial2/JointCmd_0x2120.data.inc.c>
};

/* DObjDesc: SingDObjDesc @ 0x2130 (7 entries) */
DObjDesc dPurinSpecial2_SingDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPurinSpecial2_JointCmd_0x20F0, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.009999999776482582f, 0.009999999776482582f, 0.009999999776482582f } },
	{ 1, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinSpecial2_JointCmd_0x2100, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinSpecial2_JointCmd_0x2110, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinSpecial2_JointCmd_0x2120, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x2270 to 0x2D70 (2816 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2288[];
extern u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2854[];
extern u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2B94[];
extern u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2C3C[];
extern u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2CCC[];

AObjEvent32 *dPurinSpecial2_SingAnimJoint_AnimJoint[6] = {
	NULL,
	(AObjEvent32 *)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2288,
	(AObjEvent32 *)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2854,
	(AObjEvent32 *)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2B94,
	(AObjEvent32 *)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2C3C,
	(AObjEvent32 *)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2CCC,
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2288[] = {
	aobjEvent32SetValRate(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0xBCEA6681,  /* -0.02861333079636097f */
	    0x43160000,  /* 150.0f */
	    0xBD548C32,  /* -0.0518915131688118f */
	    0x00000000,  /* 0.0f */
	    0x3DBE807A,  /* 0.09301848709583282f */
	aobjEvent32SetValBlock(0x384, 0),
	    0x00000000,  /* 0.0f */
	    0x3C23D732,  /* 0.010000037029385567f */
	    0x3C23D732,  /* 0.010000037029385567f */
	    0x3C23D732,  /* 0.010000037029385567f */
	aobjEvent32SetVal(0x380, 20),
	    0x3C23D732,  /* 0.010000037029385567f */
	    0x3C23D732,  /* 0.010000037029385567f */
	    0x3C23D732,  /* 0.010000037029385567f */
	aobjEvent32SetValRate(0x010, 24),
	    0x409388C9,  /* 4.610447406768799f */
	    0x3F4D3DBA,  /* 0.8017231225967407f */
	aobjEvent32SetVal(0x004, 180),
	    0x41FB53D1,  /* 31.415925979614258f */
	aobjEvent32SetValRateBlock(0x060, 17),
	    0x43077464,  /* 135.45465087890625f */
	    0xBFEDDF3C,  /* -1.858375072479248f */
	    0x406D27DD,  /* 3.7055580615997314f */
	    0xBF51B316,  /* -0.8191388845443726f */
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBF51B312,  /* -0.8191386461257935f */
	aobjEvent32SetValRate(0x040, 7),
	    0xC184C3BD,  /* -16.5955753326416f */
	    0xC0BA6765,  /* -5.8251214027404785f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF829B9B,  /* -1.0203737020492554f */
	aobjEvent32SetValRate(0x020, 12),
	    0x43110B1D,  /* 145.0434112548828f */
	    0x400D9576,  /* 2.212247371673584f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x380, 0),
	    0x3DEB642D,  /* 0.11493716388940811f */
	    0x3DEB642D,  /* 0.11493716388940811f */
	    0x3DEB642D,  /* 0.11493716388940811f */
	aobjEvent32SetVal0RateBlock(0x380, 4),
	    0x3ED1F5FB,  /* 0.41007980704307556f */
	    0x3ED1F5FB,  /* 0.41007980704307556f */
	    0x3ED1F5FB,  /* 0.41007980704307556f */
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC0BA6750,  /* -5.825111389160156f */
	aobjEvent32SetValRate(0x040, 8),
	    0xC25E6F32,  /* -55.60858917236328f */
	    0xC02A5743,  /* -2.66157603263855f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F4D3DAB,  /* 0.8017222285270691f */
	aobjEvent32SetValRate(0x010, 22),
	    0x4144BF51,  /* 12.296708106994629f */
	    0xBF825590,  /* -1.0182361602783203f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3ECE2A55,  /* 0.40266671776771545f */
	    0x3E1E030D,  /* 0.1543085128068924f */
	    0x3ECE2A55,  /* 0.40266671776771545f */
	    0x3E1E030D,  /* 0.1543085128068924f */
	    0x3ECE2A55,  /* 0.40266671776771545f */
	    0x3E1E030D,  /* 0.1543085128068924f */
	aobjEvent32SetVal0Rate(0x380, 4),
	    0x3F5F96FC,  /* 0.8733975887298584f */
	    0x3F5F96FC,  /* 0.8733975887298584f */
	    0x3F5F96FC,  /* 0.8733975887298584f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x403545EF,  /* 2.8323934078216553f */
	aobjEvent32SetValRate(0x020, 11),
	    0x43514068,  /* 209.2515869140625f */
	    0x4021F5EC,  /* 2.530634880065918f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBFE5F02A,  /* -1.7963917255401611f */
	aobjEvent32SetValRate(0x040, 22),
	    0xC2186059,  /* -38.09408950805664f */
	    0x40B7E9B0,  /* 5.747276306152344f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F5EA413,  /* 0.8696910738945007f */
	    0x3DC66839,  /* 0.09687847644090652f */
	    0x3F5EA413,  /* 0.8696910738945007f */
	    0x3DC66839,  /* 0.09687847644090652f */
	    0x3F5EA413,  /* 0.8696910738945007f */
	    0x3DC66839,  /* 0.09687847644090652f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F800000,  /* 1.0f */
	    0xBA43EF27,  /* -0.0007474296144209802f */
	    0x3F800000,  /* 1.0f */
	    0xBA43EF27,  /* -0.0007474296144209802f */
	    0x3F800000,  /* 1.0f */
	    0xBA43EF27,  /* -0.0007474296144209802f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x4021F67E,  /* 2.530669689178467f */
	aobjEvent32SetVal0Rate(0x380, 10),
	    0x3FA7532B,  /* 1.3072255849838257f */
	    0x3FA7532B,  /* 1.3072255849838257f */
	    0x3FA7532B,  /* 1.3072255849838257f */
	aobjEvent32SetValRate(0x020, 10),
	    0x43461136,  /* 198.06723022460938f */
	    0xC075D42C,  /* -3.8410749435424805f */
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBFEBE0EE,  /* -1.842801809310913f */
	aobjEvent32SetValRate(0x010, 38),
	    0x4127F62B,  /* 10.497599601745605f */
	    0xBF1B6C1C,  /* -0.6071183681488037f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC075D46F,  /* -3.8410909175872803f */
	aobjEvent32SetValRate(0x020, 8),
	    0x431020B7,  /* 144.12779235839844f */
	    0xC0BD2016,  /* -5.9101667404174805f */
	aobjEvent32SetValRate(0x380, 14),
	    0x3ECCCCCD,  /* 0.4000000059604645f */
	    0x397A9F19,  /* 0.00023901126405689865f */
	    0x3ECCCCCD,  /* 0.4000000059604645f */
	    0x397A9F19,  /* 0.00023901126405689865f */
	    0x3ECCCCCD,  /* 0.4000000059604645f */
	    0x397A9F19,  /* 0.00023901126405689865f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40B56D14,  /* 5.669565200805664f */
	aobjEvent32SetValRate(0x040, 8),
	    0x41637963,  /* 14.217135429382324f */
	    0x40F62A41,  /* 7.692657947540283f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0BD203E,  /* -5.910185813903809f */
	aobjEvent32SetValRate(0x020, 11),
	    0x430450EC,  /* 132.31610107421875f */
	    0x401DBEB7,  /* 2.4647653102874756f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40F62A25,  /* 7.6926445960998535f */
	aobjEvent32SetValRate(0x040, 8),
	    0x42901192,  /* 72.03431701660156f */
	    0x4092F08E,  /* 4.591864585876465f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3ECB15B0,  /* 0.3966498374938965f */
	    0x3E8E831A,  /* 0.27834397554397583f */
	    0x3ECB15B0,  /* 0.3966498374938965f */
	    0x3E8E831A,  /* 0.27834397554397583f */
	    0x3ECB15B0,  /* 0.3966498374938965f */
	    0x3E8E831A,  /* 0.27834397554397583f */
	aobjEvent32SetValRate(0x380, 4),
	    0x3F60E2CA,  /* 0.8784605264663696f */
	    0x3A47E3B5,  /* 0.0007625178550370038f */
	    0x3F60E2CA,  /* 0.8784605264663696f */
	    0x3A47E3B5,  /* 0.0007625178550370038f */
	    0x3F60E2CA,  /* 0.8784605264663696f */
	    0x3A47E3B5,  /* 0.0007625178550370038f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401DBE27,  /* 2.464730978012085f */
	aobjEvent32SetValRate(0x020, 3),
	    0x431100DE,  /* 145.00338745117188f */
	    0x40CDB262,  /* 6.428025245666504f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x4092F0B3,  /* 4.591882228851318f */
	aobjEvent32SetValRate(0x040, 16),
	    0x42A6CD8C,  /* 83.40145874023438f */
	    0xBF99A66A,  /* -1.2003910541534424f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40CDB26B,  /* 6.428029537200928f */
	aobjEvent32SetValRate(0x020, 9),
	    0x434D8682,  /* 205.52542114257812f */
	    0x401D33D6,  /* 2.4562888145446777f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F636DD7,  /* 0.8883947730064392f */
	    0x3D9CF0D3,  /* 0.07663121074438095f */
	    0x3F636DD7,  /* 0.8883947730064392f */
	    0x3D9CF0D3,  /* 0.07663121074438095f */
	    0x3F636DD7,  /* 0.8883947730064392f */
	    0x3D9CF0D3,  /* 0.07663121074438095f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F800000,  /* 1.0f */
	    0xB812DAE9,  /* -3.501298851915635e-05f */
	    0x3F800000,  /* 1.0f */
	    0xB812DAE9,  /* -3.501298851915635e-05f */
	    0x3F800000,  /* 1.0f */
	    0xB812DAE9,  /* -3.501298851915635e-05f */
	aobjEvent32SetVal0Rate(0x380, 10),
	    0x3FA88A57,  /* 1.316721796989441f */
	    0x3FA88A57,  /* 1.316721796989441f */
	    0x3FA88A57,  /* 1.316721796989441f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401D3432,  /* 2.456310749053955f */
	aobjEvent32SetValRate(0x020, 7),
	    0x434D8530,  /* 205.520263671875f */
	    0xC00AF8A7,  /* -2.17142653465271f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBF1B6C3A,  /* -0.607120156288147f */
	aobjEvent32SetValRate(0x010, 13),
	    0x408264A0,  /* 4.0747833251953125f */
	    0x3F37D33E,  /* 0.7180670499801636f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01DA36B,  /* -2.463099241256714f */
	aobjEvent32SetValRate(0x040, 24),
	    0x40019C45,  /* 2.025162935256958f */
	    0xC01C08A0,  /* -2.4380264282226562f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC00AF8FD,  /* -2.1714470386505127f */
	aobjEvent32SetValRate(0x020, 4),
	    0x433DCE58,  /* 189.8060302734375f */
	    0xC0D39F93,  /* -6.613229274749756f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x380, 14),
	    0x3EC437C6,  /* 0.3832380175590515f */
	    0x38515A20,  /* 4.991341847926378e-05f */
	    0x3EC437C6,  /* 0.3832380175590515f */
	    0x38515A20,  /* 4.991341847926378e-05f */
	    0x3EC437C6,  /* 0.3832380175590515f */
	    0x38515A20,  /* 4.991341847926378e-05f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0D39FA7,  /* -6.61323881149292f */
	aobjEvent32SetValRate(0x020, 7),
	    0x430AC800,  /* 138.78125f */
	    0xC0890A33,  /* -4.282495021820068f */
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F37D2DE,  /* 0.7180613279342651f */
	aobjEvent32SetValRate(0x010, 21),
	    0x414796BD,  /* 12.4743013381958f */
	    0x3F2D1937,  /* 0.6761659979820251f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03517EC,  /* -2.829585075378418f */
	aobjEvent32SetValRate(0x020, 16),
	    0x43105984,  /* 144.34967041015625f */
	    0x40A0DF57,  /* 5.027263164520264f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3EC1546B,  /* 0.3775971829891205f */
	    0x3E53EA29,  /* 0.2069479376077652f */
	    0x3EC1546B,  /* 0.3775971829891205f */
	    0x3E53EA29,  /* 0.2069479376077652f */
	    0x3EC1546B,  /* 0.3775971829891205f */
	    0x3E53EA29,  /* 0.2069479376077652f */
	aobjEvent32SetValRate(0x380, 4),
	    0x3F75B56F,  /* 0.9597997069358826f */
	    0x3A3BC5F9,  /* 0.0007162984111346304f */
	    0x3F75B56F,  /* 0.9597997069358826f */
	    0x3A3BC5F9,  /* 0.0007162984111346304f */
	    0x3F75B56F,  /* 0.9597997069358826f */
	    0x3A3BC5F9,  /* 0.0007162984111346304f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01C08AC,  /* -2.4380292892456055f */
	aobjEvent32SetValRate(0x040, 32),
	    0xC1756550,  /* -15.337234497070312f */
	    0x3EE8FAAE,  /* 0.45503753423690796f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x380, 4),
	    0x3F52EDF1,  /* 0.8239431977272034f */
	    0x3E9079DF,  /* 0.2821798026561737f */
	    0x3F52EDF1,  /* 0.8239431977272034f */
	    0x3E9079DF,  /* 0.2821798026561737f */
	    0x3F52EDF1,  /* 0.8239431977272034f */
	    0x3E9079DF,  /* 0.2821798026561737f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40A0DF0E,  /* 5.027228355407715f */
	aobjEvent32SetValRate(0x020, 10),
	    0x434966F4,  /* 201.40216064453125f */
	    0x40217C02,  /* 2.523193836212158f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x380, 4),
	    0x3FA83CB0,  /* 1.314352035522461f */
	    0xBA8919A4,  /* -0.001045991200953722f */
	    0x3FA83CB0,  /* 1.314352035522461f */
	    0xBA8919A4,  /* -0.001045991200953722f */
	    0x3FA83CB0,  /* 1.314352035522461f */
	    0xBA8919A4,  /* -0.001045991200953722f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F839514,  /* 1.027987003326416f */
	aobjEvent32SetValRate(0x010, 23),
	    0x414CA946,  /* 12.791326522827148f */
	    0xBF679EC4,  /* -0.904766321182251f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F96D8F1,  /* 1.1784955263137817f */
	    0x3E3F1C86,  /* 0.18663224577903748f */
	    0x3F96D8F1,  /* 1.1784955263137817f */
	    0x3E3F1C86,  /* 0.18663224577903748f */
	    0x3F96D8F1,  /* 1.1784955263137817f */
	    0x3E3F1C86,  /* 0.18663224577903748f */
	aobjEvent32SetValRate(0x380, 4),
	    0x3FBD0AB8,  /* 1.4768896102905273f */
	    0x388ED3EE,  /* 6.810562626924366e-05f */
	    0x3FBD0AB8,  /* 1.4768896102905273f */
	    0x388ED3EE,  /* 6.810562626924366e-05f */
	    0x3FBD0AB8,  /* 1.4768896102905273f */
	    0x388ED3EE,  /* 6.810562626924366e-05f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40217BF5,  /* 2.52319073677063f */
	aobjEvent32SetValRate(0x020, 14),
	    0x43467E80,  /* 198.494140625f */
	    0xC03A4757,  /* -2.910604238510132f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3FC00000,  /* 1.5f */
	    0x396889BB,  /* 0.000221765527385287f */
	    0x3FC00000,  /* 1.5f */
	    0x396889BB,  /* 0.000221765527385287f */
	    0x3FC00000,  /* 1.5f */
	    0x396889BB,  /* 0.000221765527385287f */
	aobjEvent32SetValRate(0x380, 7),
	    0x3FE99225,  /* 1.8247724771499634f */
	    0x3A5BC071,  /* 0.000838286301586777f */
	    0x3FE99225,  /* 1.8247724771499634f */
	    0x3A5BC071,  /* 0.000838286301586777f */
	    0x3FE99225,  /* 1.8247724771499634f */
	    0x3A5BC071,  /* 0.000838286301586777f */
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03A477F,  /* -2.910613775253296f */
	aobjEvent32SetValRate(0x020, 10),
	    0x43104450,  /* 144.266845703125f */
	    0xC052FF6F,  /* -3.2968404293060303f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x380, 10),
	    0x3B5DF7AE,  /* 0.0033869552426040173f */
	    0x3B5DF7AE,  /* 0.0033869552426040173f */
	    0x3B5DF7AE,  /* 0.0033869552426040173f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBEAE53D0,  /* -0.3404831886291504f */
	aobjEvent32SetValRate(0x010, 11),
	    0x41636891,  /* 14.213028907775879f */
	    0xBE6E7D17,  /* -0.23289905488491058f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x3EE8FA90,  /* 0.45503664016723633f */
	aobjEvent32SetValRate(0x040, 38),
	    0x00000000,  /* 0.0f */
	    0x3CD694F3,  /* 0.026194071397185326f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0054AAC,  /* -2.0826826095581055f */
	aobjEvent32SetValRate(0x020, 12),
	    0x43042094,  /* 132.12725830078125f */
	    0xBDF022C1,  /* -0.11725378781557083f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x380, 30),
	    0x3B5DF7AE,  /* 0.0033869552426040173f */
	    0x3B5DF7AE,  /* 0.0033869552426040173f */
	    0x3B5DF7AE,  /* 0.0033869552426040173f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBE6E7D44,  /* -0.2328997254371643f */
	aobjEvent32SetValRate(0x010, 28),
	    0x00000000,  /* 0.0f */
	    0xBCD7D253,  /* -0.026345407590270042f */
	aobjEvent32Wait(9),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBDF020D3,  /* -0.11725010722875595f */
	aobjEvent32SetValRateBlock(0x020, 19),
	    0x43160000,  /* 150.0f */
	    0x3FA4AB44,  /* 1.2864766120910645f */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2854[] = {
	aobjEvent32SetValAfter(0x006, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0xBCEA6681,  /* -0.02861333079636097f */
	    0x43160000,  /* 150.0f */
	    0xBD548C32,  /* -0.0518915131688118f */
	    0x00000000,  /* 0.0f */
	    0x3DBE807A,  /* 0.09301848709583282f */
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 24),
	    0x409388C9,  /* 4.610447406768799f */
	    0x3F4D3DBA,  /* 0.8017231225967407f */
	aobjEvent32SetVal(0x001, 180),
	    0x417B53D1,  /* 15.707962989807129f */
	aobjEvent32SetValRateBlock(0x060, 17),
	    0x43077464,  /* 135.45465087890625f */
	    0xBFEDDF3C,  /* -1.858375072479248f */
	    0x406D27DD,  /* 3.7055580615997314f */
	    0xBF51B316,  /* -0.8191388845443726f */
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBF51B312,  /* -0.8191386461257935f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF829B9B,  /* -1.0203737020492554f */
	aobjEvent32SetValRate(0x020, 12),
	    0x43110B1D,  /* 145.0434112548828f */
	    0x400D9576,  /* 2.212247371673584f */
	aobjEvent32SetValRateBlock(0x040, 7),
	    0xC184C3BD,  /* -16.5955753326416f */
	    0xC0BA6765,  /* -5.8251214027404785f */
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC0BA6750,  /* -5.825111389160156f */
	aobjEvent32SetValRate(0x040, 8),
	    0xC25E6F32,  /* -55.60858917236328f */
	    0xC02A5743,  /* -2.66157603263855f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F4D3DAB,  /* 0.8017222285270691f */
	aobjEvent32SetValRate(0x010, 22),
	    0x4144BF51,  /* 12.296708106994629f */
	    0xBF825590,  /* -1.0182361602783203f */
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x403545EF,  /* 2.8323934078216553f */
	aobjEvent32SetValRate(0x020, 11),
	    0x43514068,  /* 209.2515869140625f */
	    0x4021F5EC,  /* 2.530634880065918f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBFE5F02A,  /* -1.7963917255401611f */
	aobjEvent32SetValRate(0x040, 22),
	    0xC2186059,  /* -38.09408950805664f */
	    0x40B7E9B0,  /* 5.747276306152344f */
	aobjEvent32Wait(8),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x4021F67E,  /* 2.530669689178467f */
	aobjEvent32SetValRate(0x020, 10),
	    0x43461136,  /* 198.06723022460938f */
	    0xC075D42C,  /* -3.8410749435424805f */
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBFEBE0EE,  /* -1.842801809310913f */
	aobjEvent32SetValRate(0x010, 38),
	    0x4127F62B,  /* 10.497599601745605f */
	    0xBF1B6C1C,  /* -0.6071183681488037f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC075D46F,  /* -3.8410909175872803f */
	aobjEvent32SetValRate(0x020, 8),
	    0x431020B7,  /* 144.12779235839844f */
	    0xC0BD2016,  /* -5.9101667404174805f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40B56D14,  /* 5.669565200805664f */
	aobjEvent32SetValRate(0x040, 8),
	    0x41637963,  /* 14.217135429382324f */
	    0x40F62A41,  /* 7.692657947540283f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0BD203E,  /* -5.910185813903809f */
	aobjEvent32SetValRate(0x020, 11),
	    0x430450EC,  /* 132.31610107421875f */
	    0x401DBEB7,  /* 2.4647653102874756f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40F62A25,  /* 7.6926445960998535f */
	aobjEvent32SetValRate(0x040, 8),
	    0x42901192,  /* 72.03431701660156f */
	    0x4092F08E,  /* 4.591864585876465f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401DBE27,  /* 2.464730978012085f */
	aobjEvent32SetValRate(0x020, 3),
	    0x431100DE,  /* 145.00338745117188f */
	    0x40CDB262,  /* 6.428025245666504f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x4092F0B3,  /* 4.591882228851318f */
	aobjEvent32SetValRate(0x040, 16),
	    0x42A6CD8C,  /* 83.40145874023438f */
	    0xBF99A66A,  /* -1.2003910541534424f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40CDB26B,  /* 6.428029537200928f */
	aobjEvent32SetValRateBlock(0x020, 9),
	    0x434D8682,  /* 205.52542114257812f */
	    0x401D33D6,  /* 2.4562888145446777f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401D3432,  /* 2.456310749053955f */
	aobjEvent32SetValRate(0x020, 7),
	    0x434D8530,  /* 205.520263671875f */
	    0xC00AF8A7,  /* -2.17142653465271f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBF1B6C3A,  /* -0.607120156288147f */
	aobjEvent32SetValRate(0x010, 13),
	    0x408264A0,  /* 4.0747833251953125f */
	    0x3F37D33E,  /* 0.7180670499801636f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01DA36B,  /* -2.463099241256714f */
	aobjEvent32SetValRate(0x040, 24),
	    0x40019C45,  /* 2.025162935256958f */
	    0xC01C08A0,  /* -2.4380264282226562f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC00AF8FD,  /* -2.1714470386505127f */
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x433DCE58,  /* 189.8060302734375f */
	    0xC0D39F93,  /* -6.613229274749756f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0D39FA7,  /* -6.61323881149292f */
	aobjEvent32SetValRate(0x020, 7),
	    0x430AC800,  /* 138.78125f */
	    0xC0890A33,  /* -4.282495021820068f */
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F37D2DE,  /* 0.7180613279342651f */
	aobjEvent32SetValRate(0x010, 21),
	    0x414796BD,  /* 12.4743013381958f */
	    0x3F2D1937,  /* 0.6761659979820251f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03517EC,  /* -2.829585075378418f */
	aobjEvent32SetValRate(0x020, 16),
	    0x43105984,  /* 144.34967041015625f */
	    0x40A0DF57,  /* 5.027263164520264f */
	aobjEvent32Wait(11),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01C08AC,  /* -2.4380292892456055f */
	aobjEvent32SetValRate(0x040, 32),
	    0xC1756550,  /* -15.337234497070312f */
	    0x3EE8FAAE,  /* 0.45503753423690796f */
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40A0DF0E,  /* 5.027228355407715f */
	aobjEvent32SetValRate(0x020, 10),
	    0x434966F4,  /* 201.40216064453125f */
	    0x40217C02,  /* 2.523193836212158f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F839514,  /* 1.027987003326416f */
	aobjEvent32SetValRate(0x010, 23),
	    0x414CA946,  /* 12.791326522827148f */
	    0xBF679EC4,  /* -0.904766321182251f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40217BF5,  /* 2.52319073677063f */
	aobjEvent32SetValRateBlock(0x020, 14),
	    0x43467E80,  /* 198.494140625f */
	    0xC03A4757,  /* -2.910604238510132f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03A477F,  /* -2.910613775253296f */
	aobjEvent32SetValRate(0x020, 10),
	    0x43104450,  /* 144.266845703125f */
	    0xC052FF6F,  /* -3.2968404293060303f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBEAE53D0,  /* -0.3404831886291504f */
	aobjEvent32SetValRate(0x010, 11),
	    0x41636891,  /* 14.213028907775879f */
	    0xBE6E7D17,  /* -0.23289905488491058f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x3EE8FA90,  /* 0.45503664016723633f */
	aobjEvent32SetValRate(0x040, 38),
	    0x00000000,  /* 0.0f */
	    0x3CD694F3,  /* 0.026194071397185326f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0054AAC,  /* -2.0826826095581055f */
	aobjEvent32SetValRate(0x020, 12),
	    0x43042094,  /* 132.12725830078125f */
	    0xBDF022C1,  /* -0.11725378781557083f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBE6E7D44,  /* -0.2328997254371643f */
	aobjEvent32SetValRate(0x010, 28),
	    0x00000000,  /* 0.0f */
	    0xBCD7D253,  /* -0.026345407590270042f */
	aobjEvent32Wait(9),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBDF020D3,  /* -0.11725010722875595f */
	aobjEvent32SetValRateBlock(0x020, 19),
	    0x43160000,  /* 150.0f */
	    0x3FA4AB44,  /* 1.2864766120910645f */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2B94[] = {
	aobjEvent32SetVal(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x060, 20),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0x41C55731,  /* 24.667573928833008f */
	    0x41467C96,  /* 12.405416488647461f */
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0x43292058,  /* 169.1263427734375f */
	    0x42B3DF25,  /* 89.93582916259766f */
	aobjEvent32SetValAfterBlock(0x060, 20),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0xBF685C64,  /* -0.9076597690582275f */
	    0xC23316C2,  /* -44.77222442626953f */
	aobjEvent32SetValRate(0x040, 20),
	    0xC38C8B85,  /* -281.0899963378906f */
	    0x3E5D3709,  /* 0.21603025496006012f */
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0xC09CF6C6,  /* -4.905123710632324f */
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBE0AEFFC,  /* -0.13568109273910522f */
	aobjEvent32SetValAfterBlock(0x060, 30),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0x401D0629,  /* 2.453500986099243f */
	    0x4242E9E2,  /* 48.72840118408203f */
	aobjEvent32SetValRate(0x020, 23),
	    0x419BFDFC,  /* 19.49901580810547f */
	    0x3D90F36A,  /* 0.07077677547931671f */
	aobjEvent32SetVal0RateBlock(0x040, 23),
	    0x43CAA6EA,  /* 405.30401611328125f */
	aobjEvent32SetValAfterBlock(0x060, 47),
	    0x429CC7CE,  /* 78.39024353027344f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2C3C[] = {
	aobjEvent32SetVal(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x060, 20),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0x41A418C4,  /* 20.51209259033203f */
	    0xC1E5E646,  /* -28.737438201904297f */
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0x42F8214F,  /* 124.06505584716797f */
	    0xC342DB27,  /* -194.85606384277344f */
	aobjEvent32SetValAfterBlock(0x060, 20),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0xC1720437,  /* -15.126029014587402f */
	    0x421FEB10,  /* 39.97955322265625f */
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0xC2BB2CAF,  /* -93.58727264404297f */
	    0x4378514C,  /* 248.31756591796875f */
	aobjEvent32SetValAfterBlock(0x060, 30),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0x4218335D,  /* 38.0501594543457f */
	    0x41C44BF6,  /* 24.537090301513672f */
	aobjEvent32SetVal0RateBlock(0x060, 23),
	    0x43A31E94,  /* 326.2388916015625f */
	    0x432B2355,  /* 171.1380157470703f */
	aobjEvent32SetValAfterBlock(0x060, 47),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2CCC[] = {
	aobjEvent32SetVal(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x060, 20),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0xC1A4158B,  /* -20.51051902770996f */
	    0x41CF8B9D,  /* 25.94317054748535f */
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0xC30641FD,  /* -134.2577667236328f */
	    0x4324EE01,  /* 164.92970275878906f */
	aobjEvent32SetValAfterBlock(0x060, 20),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0x42290316,  /* 42.253013610839844f */
	    0x40E49ED5,  /* 7.144388675689697f */
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0x4380C968,  /* 257.573486328125f */
	    0x42389F8B,  /* 46.15580368041992f */
	aobjEvent32SetValAfterBlock(0x060, 30),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0xC17111F1,  /* -15.066880226135254f */
	    0xC249EB01,  /* -50.479496002197266f */
	aobjEvent32SetValRate(0x020, 23),
	    0xC2CE6F99,  /* -103.21796417236328f */
	    0x3DD15CFF,  /* 0.10222815722227097f */
	aobjEvent32SetVal0RateBlock(0x040, 23),
	    0xC3C42DC9,  /* -392.3576965332031f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF221BF6,  /* -0.6332391500473022f */
	aobjEvent32SetValAfterBlock(0x060, 47),
	    0xC2314E94,  /* -44.32673645019531f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x2D70 to 0x2F50 (480 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2D88[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2DF4[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2E60[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2ECC[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F38[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F3C[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F40[];
extern u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F44[];

AObjEvent32 *dPurinSpecial2_SingMatAnimJoint_MatAnimJoint[6] = {
	NULL,
	(AObjEvent32 *)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F38,
	NULL,
	(AObjEvent32 *)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F3C,
	(AObjEvent32 *)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F40,
	(AObjEvent32 *)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F44,
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2D88[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF5500,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFF55FF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFF55FF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFF5500,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFF5500,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFF55FF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFF55FF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFF5500,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFF5500,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFF55FF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFF55FF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFF5500,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFF5500,  /* nanf */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2DF4[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2E60[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2ECC[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFFFFFF,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFFFF00,  /* nanf */
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F38[] = {
	(u32)(dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2D88),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F3C[] = {
	(u32)(dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2DF4),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F40[] = {
	(u32)(dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2E60),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F44[] = {
	(u32)(dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2ECC),
	aobjEvent32End(),
};

PAD(4);
