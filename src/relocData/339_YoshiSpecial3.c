/* relocData file 339: YoshiSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dYoshiSpecial3_Lut_0x0008_palette[16] = {
	#include <YoshiSpecial3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0830 (2048 bytes) */
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

u32 dYoshiSpecial3_EggLayBreak_AnimJoint[2] = {
	(u32)dYoshiSpecial3_EggLayBreak_AnimJoint_0x9F8,
	(u32)dYoshiSpecial3_EggLayBreak_AnimJoint_0xA08,
};

u32 dYoshiSpecial3_EggLayBreak_AnimJoint_0x9F8[] = {
	aobjEvent32SetValAfter(0x004, 0),
	    0x00000000,
	aobjEvent32Wait(10),
	aobjEvent32End(),
};

u32 dYoshiSpecial3_EggLayBreak_AnimJoint_0xA08[] = {
	aobjEvent32SetVal0RateBlock(0x050, 0),
	    0x37D1FFFF,
	    0xB7700000,
	aobjEvent32SetValRate(0x050, 86),
	    0x37D1FFFF,
	    0x363A26F4,
	    0xB7700000,
	    0xB5D9187D,
	aobjEvent32Cmd12(0x050, 70),
	aobjEvent32SetValRate(0x3A0, 0),
	    0x42B40000,
	    0xBEDCFCA4,
	    0x3F400000,
	    0x3BF30BB4,
	    0x3F400000,
	    0xBBCC1872,
	    0x3F400000,
	    0x3BF35F97,
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0x00000000,
	aobjEvent32SetValRateBlock(0x3A0, 1),
	    0x426D6BEA,
	    0xC1C1F915,
	    0x3F86ECEC,
	    0x3E6F96B3,
	    0x3EFD3FE8,
	    0xBE4EE7BF,
	    0x3F86FA36,
	    0x3E6FDA69,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC1C1F90D,
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3E6F963E,
	aobjEvent32SetValRate(0x080, 4),
	    0x3FC00000,
	    0xBC849881,
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3E6FD960,
	aobjEvent32SetValRate(0x200, 5),
	    0x3FA3AECC,
	    0xBCC65C42,
	aobjEvent32SetTargetRate(0x100, 0),
	    0xBE4EE85D,
	aobjEvent32SetValRate(0x100, 6),
	    0x3EAF80A4,
	    0x3DF2E95F,
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x421CC18A,
	    0xC1826ACD,
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41D6020D,
	    0xC10E70AD,
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41AB126F,
	    0xC00A560D,
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41B36C8C,
	    0x407B22DE,
	aobjEvent32SetValRate(0x080, 4),
	    0x3F56F983,
	    0xBE6F1870,
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x41E9DB23,
	    0x4115A3DF,
	aobjEvent32SetTargetRate(0x200, 0),
	    0xBCC65B1E,
	aobjEvent32SetValRate(0x200, 2),
	    0x3F905186,
	    0xBE23C13A,
	aobjEvent32SetValRateBlock(0x020, 1),
	    0x42248831,
	    0x417E8596,
	aobjEvent32SetTargetRate(0x100, 0),
	    0x3DF2E983,
	aobjEvent32SetValRateBlock(0x120, 1),
	    0x42743055,
	    0x41DFC4E9,
	    0x3F023BE9,
	    0x3E6EB175,
	aobjEvent32SetTargetRate(0x320, 0),
	    0x41DFC597,
	    0x3E6EB0A6,
	    0xBE23C1CB,
	aobjEvent32SetValRate(0x320, 2),
	    0x4319F985,
	    0x41E40B8B,
	    0x3FA43D5B,
	    0x3E733F84,
	    0x3F12CA5A,
	    0xBE30BDD5,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBE6F18EA,
	aobjEvent32SetValRateBlock(0x080, 1),
	    0x3F12CA5A,
	    0xBE08E3A9,
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0B90 to 0x0DB0 (544 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xB98[];
extern u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xBA8[];

u32 dYoshiSpecial3_EggLayThrow_AnimJoint[2] = {
	(u32)dYoshiSpecial3_EggLayThrow_AnimJoint_0xB98,
	(u32)dYoshiSpecial3_EggLayThrow_AnimJoint_0xBA8,
};

u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xB98[] = {
	aobjEvent32SetValAfter(0x004, 0),
	    0x00000000,
	aobjEvent32Wait(16),
	aobjEvent32End(),
};

u32 dYoshiSpecial3_EggLayThrow_AnimJoint_0xBA8[] = {
	aobjEvent32SetVal0RateBlock(0x050, 0),
	    0x37D1FFFF,
	    0xB7700000,
	aobjEvent32SetValRate(0x050, 86),
	    0x37D1FFFF,
	    0x363A26F4,
	    0xB7700000,
	    0xB5D9187D,
	aobjEvent32Cmd12(0x050, 70),
	aobjEvent32SetValRate(0x3A0, 0),
	    0x42B40000,
	    0xBEDCFCA4,
	    0x3F400000,
	    0x3BF30BB4,
	    0x3F400000,
	    0xBBCC1872,
	    0x3F400000,
	    0x3BF35F97,
	aobjEvent32SetValAfterBlock(0x004, 0),
	    0x00000000,
	aobjEvent32SetValRateBlock(0x3A0, 1),
	    0x426D6BEA,
	    0xC1C1F915,
	    0x3F86ECEC,
	    0x3E6F96B3,
	    0x3EFD3FE8,
	    0xBE4EE7BF,
	    0x3F86FA36,
	    0x3E6FDA69,
	aobjEvent32SetTargetRate(0x0A0, 0),
	    0xC1C1F90D,
	    0x3E6F963E,
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3E6FD960,
	aobjEvent32SetValRate(0x200, 5),
	    0x3FA3AECC,
	    0xBCC65C42,
	aobjEvent32SetTargetRate(0x100, 0),
	    0xBE4EE85D,
	aobjEvent32SetValRate(0x100, 6),
	    0x3EAF80A4,
	    0x3DF2E95F,
	aobjEvent32SetValRateBlock(0x0A0, 4),
	    0x41F5168E,
	    0x3F818D78,
	    0x3FA48AB4,
	    0xBC84985A,
	aobjEvent32SetTargetRate(0x020, 0),
	    0x3F818D70,
	aobjEvent32SetValRate(0x020, 3),
	    0x42743055,
	    0x41DFC4E9,
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBC849875,
	aobjEvent32SetValRate(0x080, 4),
	    0x3F56F983,
	    0xBE6F1870,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x200, 0),
	    0xBCC65B1E,
	aobjEvent32SetValRate(0x200, 2),
	    0x3F905186,
	    0xBE23C13A,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x100, 0),
	    0x3DF2E983,
	aobjEvent32SetValRateBlock(0x100, 1),
	    0x3F023BE9,
	    0x3E6EB175,
	aobjEvent32SetTargetRate(0x320, 0),
	    0x41DFC597,
	    0x3E6EB0A6,
	    0xBE23C1CB,
	aobjEvent32SetValRate(0x320, 2),
	    0x4319F985,
	    0x41E40B8B,
	    0x3FA43D5B,
	    0x3E733F84,
	    0x3F12CA5A,
	    0xBE30BDD5,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBE6F18EA,
	aobjEvent32SetValRateBlock(0x080, 1),
	    0x3F12CA5A,
	    0xBE08E3A9,
	aobjEvent32SetTargetRate(0x320, 0),
	    0x41E40755,
	    0x3E733E3C,
	    0xBE30BA70,
	aobjEvent32SetTargetRate(0x080, 0),
	    0xBE08E5F3,
	aobjEvent32SetValRate(0x080, 2),
	    0x3F130287,
	    0x3BDEF76D,
	aobjEvent32SetValRateBlock(0x320, 1),
	    0x431A1675,
	    0xBF1154DC,
	    0x3FA45C39,
	    0xBB9B051B,
	    0x3F126FE1,
	    0xB9071A47,
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBF115426,
	aobjEvent32SetValRate(0x020, 3),
	    0x43096970,
	    0xC169A9D5,
	aobjEvent32SetTargetRate(0x300, 0),
	    0xBB9B03DC,
	    0xB90726DB,
	aobjEvent32SetValRate(0x300, 5),
	    0x3F400000,
	    0xBE75D862,
	    0x3F400000,
	    0x3DADAD7C,
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x3BDEF66F,
	aobjEvent32SetValRate(0x080, 4),
	    0x3F400000,
	    0x3DAA3289,
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC169AA35,
	aobjEvent32SetValRateBlock(0x020, 2),
	    0x42B40000,
	    0xC1E67A3B,
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x0DB0 to 0x0E70 (192 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8[];
extern u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4[];

u32 dYoshiSpecial3_EggLayWait_AnimJoint[2] = {
	(u32)dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8,
	(u32)dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4,
};

u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDB8[] = {
	aobjEvent32SetValRateBlock(0x004, 0),
	    0x00000000,
	    0xBDD2E441,
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0xBEB2B8C2,
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,
	    0x3DD2E441,
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0x3EB2B8C2,
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,
	    0xBDD2E441,
	    0x1C000000,
	(u32)((u8*)dYoshiSpecial3_EggLayWait_AnimJoint + 0x8),
};

u32 dYoshiSpecial3_EggLayWait_AnimJoint_0xDF4[] = {
	aobjEvent32SetValAfterBlock(0x020, 0),
	    0x42B40000,
	aobjEvent32SetVal0RateBlock(0x050, 0),
	    0x37D1FFFF,
	    0xB7700000,
	aobjEvent32SetValRate(0x050, 86),
	    0x37D1FFFF,
	    0x363A26F4,
	    0xB7700000,
	    0xB5D9187D,
	aobjEvent32Cmd12(0x050, 30),
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,
	    0xBDD2E441,
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3F400000,
	    0x3F400000,
	    0x3F400000,
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0xBEB2B8C2,
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,
	    0x3DD2E441,
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0x3EB2B8C2,
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x00000000,
	    0xBDD2E441,
	    0x1C000000,
	(u32)((u8*)dYoshiSpecial3_EggLayWait_AnimJoint + 0x44),
	aobjEvent32End(),
};
