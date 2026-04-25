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
	(void**)((u8*)dPurinSpecial2_gap_0x1C98 + 0x180),
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

u32 dPurinSpecial2_SingAnimJoint_AnimJoint[6] = {
	aobjEvent32End(),
	(u32)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2288,
	(u32)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2854,
	(u32)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2B94,
	(u32)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2C3C,
	(u32)dPurinSpecial2_SingAnimJoint_AnimJoint_0x2CCC,
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2288[] = {
	aobjEvent32SetValRate(0x070, 0),
	    0x00000000,
	    0xBCEA6681,
	    0x43160000,
	    0xBD548C32,
	    0x00000000,
	    0x3DBE807A,
	aobjEvent32SetValBlock(0x384, 0),
	    0x00000000,
	    0x3C23D732,
	    0x3C23D732,
	    0x3C23D732,
	aobjEvent32SetVal(0x380, 20),
	    0x3C23D732,
	    0x3C23D732,
	    0x3C23D732,
	aobjEvent32SetValRate(0x010, 24),
	    0x409388C9,
	    0x3F4D3DBA,
	aobjEvent32SetVal(0x004, 180),
	    0x41FB53D1,
	aobjEvent32SetValRateBlock(0x060, 17),
	    0x43077464,
	    0xBFEDDF3C,
	    0x406D27DD,
	    0xBF51B316,
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBF51B312,
	aobjEvent32SetValRate(0x040, 7),
	    0xC184C3BD,
	    0xC0BA6765,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF829B9B,
	aobjEvent32SetValRate(0x020, 12),
	    0x43110B1D,
	    0x400D9576,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x380, 0),
	    0x3DEB642D,
	    0x3DEB642D,
	    0x3DEB642D,
	aobjEvent32SetVal0RateBlock(0x380, 4),
	    0x3ED1F5FB,
	    0x3ED1F5FB,
	    0x3ED1F5FB,
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC0BA6750,
	aobjEvent32SetValRate(0x040, 8),
	    0xC25E6F32,
	    0xC02A5743,
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F4D3DAB,
	aobjEvent32SetValRate(0x010, 22),
	    0x4144BF51,
	    0xBF825590,
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3ECE2A55,
	    0x3E1E030D,
	    0x3ECE2A55,
	    0x3E1E030D,
	    0x3ECE2A55,
	    0x3E1E030D,
	aobjEvent32SetVal0Rate(0x380, 4),
	    0x3F5F96FC,
	    0x3F5F96FC,
	    0x3F5F96FC,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x403545EF,
	aobjEvent32SetValRate(0x020, 11),
	    0x43514068,
	    0x4021F5EC,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBFE5F02A,
	aobjEvent32SetValRate(0x040, 22),
	    0xC2186059,
	    0x40B7E9B0,
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F5EA413,
	    0x3DC66839,
	    0x3F5EA413,
	    0x3DC66839,
	    0x3F5EA413,
	    0x3DC66839,
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F800000,
	    0xBA43EF27,
	    0x3F800000,
	    0xBA43EF27,
	    0x3F800000,
	    0xBA43EF27,
	aobjEvent32SetTargetRate(0x020, 0),
	    0x4021F67E,
	aobjEvent32SetVal0Rate(0x380, 10),
	    0x3FA7532B,
	    0x3FA7532B,
	    0x3FA7532B,
	aobjEvent32SetValRate(0x020, 10),
	    0x43461136,
	    0xC075D42C,
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBFEBE0EE,
	aobjEvent32SetValRate(0x010, 38),
	    0x4127F62B,
	    0xBF1B6C1C,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC075D46F,
	aobjEvent32SetValRate(0x020, 8),
	    0x431020B7,
	    0xC0BD2016,
	aobjEvent32SetValRate(0x380, 14),
	    0x3ECCCCCD,
	    0x397A9F19,
	    0x3ECCCCCD,
	    0x397A9F19,
	    0x3ECCCCCD,
	    0x397A9F19,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40B56D14,
	aobjEvent32SetValRate(0x040, 8),
	    0x41637963,
	    0x40F62A41,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0BD203E,
	aobjEvent32SetValRate(0x020, 11),
	    0x430450EC,
	    0x401DBEB7,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40F62A25,
	aobjEvent32SetValRate(0x040, 8),
	    0x42901192,
	    0x4092F08E,
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3ECB15B0,
	    0x3E8E831A,
	    0x3ECB15B0,
	    0x3E8E831A,
	    0x3ECB15B0,
	    0x3E8E831A,
	aobjEvent32SetValRate(0x380, 4),
	    0x3F60E2CA,
	    0x3A47E3B5,
	    0x3F60E2CA,
	    0x3A47E3B5,
	    0x3F60E2CA,
	    0x3A47E3B5,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401DBE27,
	aobjEvent32SetValRate(0x020, 3),
	    0x431100DE,
	    0x40CDB262,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x4092F0B3,
	aobjEvent32SetValRate(0x040, 16),
	    0x42A6CD8C,
	    0xBF99A66A,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40CDB26B,
	aobjEvent32SetValRate(0x020, 9),
	    0x434D8682,
	    0x401D33D6,
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F636DD7,
	    0x3D9CF0D3,
	    0x3F636DD7,
	    0x3D9CF0D3,
	    0x3F636DD7,
	    0x3D9CF0D3,
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F800000,
	    0xB812DAE9,
	    0x3F800000,
	    0xB812DAE9,
	    0x3F800000,
	    0xB812DAE9,
	aobjEvent32SetVal0Rate(0x380, 10),
	    0x3FA88A57,
	    0x3FA88A57,
	    0x3FA88A57,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401D3432,
	aobjEvent32SetValRate(0x020, 7),
	    0x434D8530,
	    0xC00AF8A7,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBF1B6C3A,
	aobjEvent32SetValRate(0x010, 13),
	    0x408264A0,
	    0x3F37D33E,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01DA36B,
	aobjEvent32SetValRate(0x040, 24),
	    0x40019C45,
	    0xC01C08A0,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC00AF8FD,
	aobjEvent32SetValRate(0x020, 4),
	    0x433DCE58,
	    0xC0D39F93,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x380, 14),
	    0x3EC437C6,
	    0x38515A20,
	    0x3EC437C6,
	    0x38515A20,
	    0x3EC437C6,
	    0x38515A20,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0D39FA7,
	aobjEvent32SetValRate(0x020, 7),
	    0x430AC800,
	    0xC0890A33,
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F37D2DE,
	aobjEvent32SetValRate(0x010, 21),
	    0x414796BD,
	    0x3F2D1937,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03517EC,
	aobjEvent32SetValRate(0x020, 16),
	    0x43105984,
	    0x40A0DF57,
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3EC1546B,
	    0x3E53EA29,
	    0x3EC1546B,
	    0x3E53EA29,
	    0x3EC1546B,
	    0x3E53EA29,
	aobjEvent32SetValRate(0x380, 4),
	    0x3F75B56F,
	    0x3A3BC5F9,
	    0x3F75B56F,
	    0x3A3BC5F9,
	    0x3F75B56F,
	    0x3A3BC5F9,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01C08AC,
	aobjEvent32SetValRate(0x040, 32),
	    0xC1756550,
	    0x3EE8FAAE,
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x380, 4),
	    0x3F52EDF1,
	    0x3E9079DF,
	    0x3F52EDF1,
	    0x3E9079DF,
	    0x3F52EDF1,
	    0x3E9079DF,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40A0DF0E,
	aobjEvent32SetValRate(0x020, 10),
	    0x434966F4,
	    0x40217C02,
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x380, 4),
	    0x3FA83CB0,
	    0xBA8919A4,
	    0x3FA83CB0,
	    0xBA8919A4,
	    0x3FA83CB0,
	    0xBA8919A4,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F839514,
	aobjEvent32SetValRate(0x010, 23),
	    0x414CA946,
	    0xBF679EC4,
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F96D8F1,
	    0x3E3F1C86,
	    0x3F96D8F1,
	    0x3E3F1C86,
	    0x3F96D8F1,
	    0x3E3F1C86,
	aobjEvent32SetValRate(0x380, 4),
	    0x3FBD0AB8,
	    0x388ED3EE,
	    0x3FBD0AB8,
	    0x388ED3EE,
	    0x3FBD0AB8,
	    0x388ED3EE,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40217BF5,
	aobjEvent32SetValRate(0x020, 14),
	    0x43467E80,
	    0xC03A4757,
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3FC00000,
	    0x396889BB,
	    0x3FC00000,
	    0x396889BB,
	    0x3FC00000,
	    0x396889BB,
	aobjEvent32SetValRate(0x380, 7),
	    0x3FE99225,
	    0x3A5BC071,
	    0x3FE99225,
	    0x3A5BC071,
	    0x3FE99225,
	    0x3A5BC071,
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03A477F,
	aobjEvent32SetValRate(0x020, 10),
	    0x43104450,
	    0xC052FF6F,
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x380, 10),
	    0x3B5DF7AE,
	    0x3B5DF7AE,
	    0x3B5DF7AE,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBEAE53D0,
	aobjEvent32SetValRate(0x010, 11),
	    0x41636891,
	    0xBE6E7D17,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x3EE8FA90,
	aobjEvent32SetValRate(0x040, 38),
	    0x00000000,
	    0x3CD694F3,
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0054AAC,
	aobjEvent32SetValRate(0x020, 12),
	    0x43042094,
	    0xBDF022C1,
	aobjEvent32Wait(1),
	aobjEvent32SetVal(0x380, 30),
	    0x3B5DF7AE,
	    0x3B5DF7AE,
	    0x3B5DF7AE,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBE6E7D44,
	aobjEvent32SetValRate(0x010, 28),
	    0x00000000,
	    0xBCD7D253,
	aobjEvent32Wait(9),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBDF020D3,
	aobjEvent32SetValRateBlock(0x020, 19),
	    0x43160000,
	    0x3FA4AB44,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2854[] = {
	aobjEvent32SetValAfter(0x006, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValRate(0x070, 0),
	    0x00000000,
	    0xBCEA6681,
	    0x43160000,
	    0xBD548C32,
	    0x00000000,
	    0x3DBE807A,
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,
	aobjEvent32SetValRate(0x010, 24),
	    0x409388C9,
	    0x3F4D3DBA,
	aobjEvent32SetVal(0x001, 180),
	    0x417B53D1,
	aobjEvent32SetValRateBlock(0x060, 17),
	    0x43077464,
	    0xBFEDDF3C,
	    0x406D27DD,
	    0xBF51B316,
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBF51B312,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF829B9B,
	aobjEvent32SetValRate(0x020, 12),
	    0x43110B1D,
	    0x400D9576,
	aobjEvent32SetValRateBlock(0x040, 7),
	    0xC184C3BD,
	    0xC0BA6765,
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC0BA6750,
	aobjEvent32SetValRate(0x040, 8),
	    0xC25E6F32,
	    0xC02A5743,
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F4D3DAB,
	aobjEvent32SetValRate(0x010, 22),
	    0x4144BF51,
	    0xBF825590,
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x403545EF,
	aobjEvent32SetValRate(0x020, 11),
	    0x43514068,
	    0x4021F5EC,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBFE5F02A,
	aobjEvent32SetValRate(0x040, 22),
	    0xC2186059,
	    0x40B7E9B0,
	aobjEvent32Wait(8),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x4021F67E,
	aobjEvent32SetValRate(0x020, 10),
	    0x43461136,
	    0xC075D42C,
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBFEBE0EE,
	aobjEvent32SetValRate(0x010, 38),
	    0x4127F62B,
	    0xBF1B6C1C,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC075D46F,
	aobjEvent32SetValRate(0x020, 8),
	    0x431020B7,
	    0xC0BD2016,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40B56D14,
	aobjEvent32SetValRate(0x040, 8),
	    0x41637963,
	    0x40F62A41,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0BD203E,
	aobjEvent32SetValRate(0x020, 11),
	    0x430450EC,
	    0x401DBEB7,
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x40F62A25,
	aobjEvent32SetValRate(0x040, 8),
	    0x42901192,
	    0x4092F08E,
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401DBE27,
	aobjEvent32SetValRate(0x020, 3),
	    0x431100DE,
	    0x40CDB262,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x4092F0B3,
	aobjEvent32SetValRate(0x040, 16),
	    0x42A6CD8C,
	    0xBF99A66A,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40CDB26B,
	aobjEvent32SetValRateBlock(0x020, 9),
	    0x434D8682,
	    0x401D33D6,
	aobjEvent32SetTargetRate(0x020, 0),
	    0x401D3432,
	aobjEvent32SetValRate(0x020, 7),
	    0x434D8530,
	    0xC00AF8A7,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBF1B6C3A,
	aobjEvent32SetValRate(0x010, 13),
	    0x408264A0,
	    0x3F37D33E,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01DA36B,
	aobjEvent32SetValRate(0x040, 24),
	    0x40019C45,
	    0xC01C08A0,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC00AF8FD,
	aobjEvent32SetValRateBlock(0x020, 4),
	    0x433DCE58,
	    0xC0D39F93,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0D39FA7,
	aobjEvent32SetValRate(0x020, 7),
	    0x430AC800,
	    0xC0890A33,
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F37D2DE,
	aobjEvent32SetValRate(0x010, 21),
	    0x414796BD,
	    0x3F2D1937,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03517EC,
	aobjEvent32SetValRate(0x020, 16),
	    0x43105984,
	    0x40A0DF57,
	aobjEvent32Wait(11),
	aobjEvent32SetTargetRate(0x040, 0),
	    0xC01C08AC,
	aobjEvent32SetValRate(0x040, 32),
	    0xC1756550,
	    0x3EE8FAAE,
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40A0DF0E,
	aobjEvent32SetValRate(0x020, 10),
	    0x434966F4,
	    0x40217C02,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F839514,
	aobjEvent32SetValRate(0x010, 23),
	    0x414CA946,
	    0xBF679EC4,
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x40217BF5,
	aobjEvent32SetValRateBlock(0x020, 14),
	    0x43467E80,
	    0xC03A4757,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC03A477F,
	aobjEvent32SetValRate(0x020, 10),
	    0x43104450,
	    0xC052FF6F,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBEAE53D0,
	aobjEvent32SetValRate(0x010, 11),
	    0x41636891,
	    0xBE6E7D17,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x3EE8FA90,
	aobjEvent32SetValRate(0x040, 38),
	    0x00000000,
	    0x3CD694F3,
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC0054AAC,
	aobjEvent32SetValRate(0x020, 12),
	    0x43042094,
	    0xBDF022C1,
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBE6E7D44,
	aobjEvent32SetValRate(0x010, 28),
	    0x00000000,
	    0xBCD7D253,
	aobjEvent32Wait(9),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBDF020D3,
	aobjEvent32SetValRateBlock(0x020, 19),
	    0x43160000,
	    0x3FA4AB44,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2B94[] = {
	aobjEvent32SetVal(0x060, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValAfter(0x010, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x060, 20),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0x41C55731,
	    0x41467C96,
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0x43292058,
	    0x42B3DF25,
	aobjEvent32SetValAfterBlock(0x060, 20),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0xBF685C64,
	    0xC23316C2,
	aobjEvent32SetValRate(0x040, 20),
	    0xC38C8B85,
	    0x3E5D3709,
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0xC09CF6C6,
	aobjEvent32SetTargetRate(0x040, 0),
	    0xBE0AEFFC,
	aobjEvent32SetValAfterBlock(0x060, 30),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0x401D0629,
	    0x4242E9E2,
	aobjEvent32SetValRate(0x020, 23),
	    0x419BFDFC,
	    0x3D90F36A,
	aobjEvent32SetVal0RateBlock(0x040, 23),
	    0x43CAA6EA,
	aobjEvent32SetValAfterBlock(0x060, 47),
	    0x429CC7CE,
	    0x00000000,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2C3C[] = {
	aobjEvent32SetVal(0x060, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValAfter(0x010, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x060, 20),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0x41A418C4,
	    0xC1E5E646,
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0x42F8214F,
	    0xC342DB27,
	aobjEvent32SetValAfterBlock(0x060, 20),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0xC1720437,
	    0x421FEB10,
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0xC2BB2CAF,
	    0x4378514C,
	aobjEvent32SetValAfterBlock(0x060, 30),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0x4218335D,
	    0x41C44BF6,
	aobjEvent32SetVal0RateBlock(0x060, 23),
	    0x43A31E94,
	    0x432B2355,
	aobjEvent32SetValAfterBlock(0x060, 47),
	    0x00000000,
	    0x00000000,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingAnimJoint_AnimJoint_0x2CCC[] = {
	aobjEvent32SetVal(0x060, 0),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetValAfter(0x010, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x060, 20),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0xC1A4158B,
	    0x41CF8B9D,
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0xC30641FD,
	    0x4324EE01,
	aobjEvent32SetValAfterBlock(0x060, 20),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0x42290316,
	    0x40E49ED5,
	aobjEvent32SetVal0RateBlock(0x060, 20),
	    0x4380C968,
	    0x42389F8B,
	aobjEvent32SetValAfterBlock(0x060, 30),
	    0x00000000,
	    0x00000000,
	aobjEvent32SetTargetRate(0x060, 0),
	    0xC17111F1,
	    0xC249EB01,
	aobjEvent32SetValRate(0x020, 23),
	    0xC2CE6F99,
	    0x3DD15CFF,
	aobjEvent32SetVal0RateBlock(0x040, 23),
	    0xC3C42DC9,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF221BF6,
	aobjEvent32SetValAfterBlock(0x060, 47),
	    0xC2314E94,
	    0x00000000,
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

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint[6] = {
	aobjEvent32End(),
	(u32)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F38,
	aobjEvent32End(),
	(u32)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F3C,
	(u32)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F40,
	(u32)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F44,
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2D88[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFF5500,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFF55FF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFF55FF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFF5500,
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFF5500,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFF55FF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFF55FF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFF5500,
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFF5500,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFF55FF,
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFF55FF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFF5500,
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFF5500,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2DF4[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFFFF00,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2E60[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFFFF00,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2ECC[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 9),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 20),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 19),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 23),
	    0xFFFFFFFF,
	aobjEvent32SetExtValBlock(0x001, 10),
	    0xFFFFFF00,
	aobjEvent32SetExtValBlock(0x001, 37),
	    0xFFFFFF00,
	aobjEvent32End(),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F38[] = {
	(u32)((u8*)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint + 0x18),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F3C[] = {
	(u32)((u8*)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint + 0x84),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F40[] = {
	(u32)((u8*)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint + 0xF0),
};

u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint_0x2F44[] = {
	(u32)((u8*)dPurinSpecial2_SingMatAnimJoint_MatAnimJoint + 0x15C),
	aobjEvent32End(),
};

PAD(4);
