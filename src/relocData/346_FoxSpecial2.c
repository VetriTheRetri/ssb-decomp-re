/* relocData file 346: FoxSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Raw data from file offset 0x0008 to 0x0018 (16 bytes) */
u16 dFoxSpecial2_Lut3_0x0008[8] = {
	#include <FoxSpecial2/Lut3_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0018 to 0x0098 (128 bytes) */
u8 dFoxSpecial2_Tex_0x0018[128] = {
	#include <FoxSpecial2/Tex_0x0018.tex.inc.c>
};

/* Vtx: Vtx_0x0098 @ 0x98 (18 vertices) */
Vtx dFoxSpecial2_Vtx_0x0098_Vtx[18] = {
	#include <FoxSpecial2/Vtx_0x0098.vtx.inc.c>
};

/* DisplayList: Joint_0x01B8 @ 0x1B8 (248 bytes) */
Gfx dFoxSpecial2_Joint_0x01B8_DisplayList[31] = {
	#include <FoxSpecial2/Joint_0x01B8.dl.inc.c>
};

/* DObjDesc: Reflector @ 0x2B0 (3 entries) */
DObjDesc dFoxSpecial2_Reflector[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dFoxSpecial2_Joint_0x01B8_DisplayList, { 0.0f, 240.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0340 to 0x03A0 (96 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFoxSpecial2_ReflectorStart_AnimJoint_0x348[];

AObjEvent32 *dFoxSpecial2_ReflectorStart_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFoxSpecial2_ReflectorStart_AnimJoint_0x348,
};

u32 dFoxSpecial2_ReflectorStart_AnimJoint_0x348[] = {
	aobjEvent32SetValBlock(0x3F0, 0),
	    0x00000000,
	    0x43700000,
	    0x00000000,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	aobjEvent32SetVal(0x070, 9),
	    0x00000000,
	    0x43700000,
	    0x00000000,
	aobjEvent32SetValBlock(0x380, 4),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal(0x380, 1),
	    0x3ECCCCCD,
	    0x3ECCCCCD,
	    0x3ECCCCCD,
	aobjEvent32Wait(0),
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x03A0 to 0x0430 (144 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFoxSpecial2_ReflectorHit_AnimJoint_0x3A8[];

AObjEvent32 *dFoxSpecial2_ReflectorHit_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFoxSpecial2_ReflectorHit_AnimJoint_0x3A8,
};

u32 dFoxSpecial2_ReflectorHit_AnimJoint_0x3A8[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,
	    0x43700000,
	    0x00000000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FC00000,
	    0x3FC00000,
	    0x3FC00000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FB33333,
	    0x3FB33333,
	    0x3FB33333,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FA66666,
	    0x3FA66666,
	    0x3FA66666,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x0430 to 0x04C0 (144 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFoxSpecial2_ReflectorEnd_AnimJoint_0x438[];

AObjEvent32 *dFoxSpecial2_ReflectorEnd_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFoxSpecial2_ReflectorEnd_AnimJoint_0x438,
};

u32 dFoxSpecial2_ReflectorEnd_AnimJoint_0x438[] = {
	aobjEvent32SetValAfterBlock(0x070, 0),
	    0x00000000,
	    0x43700000,
	    0x00000000,
	aobjEvent32SetValBlock(0x380, 0),
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F19999A,
	    0x3F19999A,
	    0x3F19999A,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F19999A,
	    0x3F19999A,
	    0x3F19999A,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x380, 5),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x04C0 to 0x0590 (208 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFoxSpecial2_ReflectorLoop_AnimJoint_0x4C8[];

AObjEvent32 *dFoxSpecial2_ReflectorLoop_AnimJoint[2] = {
	NULL,
	(AObjEvent32 *)dFoxSpecial2_ReflectorLoop_AnimJoint_0x4C8,
};

u32 dFoxSpecial2_ReflectorLoop_AnimJoint_0x4C8[] = {
	aobjEvent32SetVal(0x380, 0),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfter(0x070, 0),
	    0x00000000,
	    0x43700000,
	    0x00000000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3ECCCCC7,
	    0x3ECCCCC7,
	    0x3ECCCCC7,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3ECCCCC7,
	    0x3ECCCCC7,
	    0x3ECCCCC7,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	    0x3F4CCCCA,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	    0x3E4CCCCD,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F19999A,
	    0x3F19999A,
	    0x3F19999A,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F19999A,
	    0x3F19999A,
	    0x3F19999A,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetAnim(0x000, 0),
	aobjEvent32End(),
};

/* Raw data from file offset 0x0590 to 0x09E0 (1104 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x5C0[];
extern u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x6C8[];
extern u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x714[];
extern u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x748[];

AObjEvent32 *dFoxSpecial2_EntryArwingL_AnimJoint[12] = {
	(AObjEvent32 *)dFoxSpecial2_EntryArwingL_AnimJoint_0x5C0,
	(AObjEvent32 *)dFoxSpecial2_EntryArwingL_AnimJoint_0x6C8,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dFoxSpecial2_EntryArwingL_AnimJoint_0x714,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dFoxSpecial2_EntryArwingL_AnimJoint_0x748,
	NULL,
};

u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x5C0[] = {
	aobjEvent32SetValRate(0x073, 0),
	    0x3F181063,  /* 0.5940000414848328f */
	    0xBB3E3D8A,  /* -0.002902837935835123f */
	    0x3FA91D9C,  /* 1.321216106414795f */
	    0xBC9DD607,  /* -0.019267095252871513f */
	    0xC6829B73,  /* -16717.724609375f */
	    0x44503D09,  /* 832.9536743164062f */
	    0x4610A015,  /* 9256.0205078125f */
	    0xC2EAC4C5,  /* -117.38431549072266f */
	    0xC6F68232,  /* -31553.09765625f */
	    0x43772EB9,  /* 247.18251037597656f */
	aobjEvent32SetValAfterBlock(0x384, 0),
	    0x00000000,  /* 0.0f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetValRate(0x010, 30),
	    0xC2AC2872,  /* -86.07899475097656f */
	    0x439E63AC,  /* 316.7786865234375f */
	aobjEvent32SetValRate(0x002, 42),
	    0x3E1877AE,  /* 0.1488940417766571f */
	    0xBD006F03,  /* -0.03135586902499199f */
	aobjEvent32SetValRate(0x001, 57),
	    0x3CA32D14,  /* 0.019918955862522125f */
	    0xBC85A230,  /* -0.01631268858909607f */
	aobjEvent32SetValRate(0x040, 60),
	    0x41710B9B,  /* 15.065333366394043f */
	    0x43E6CBE5,  /* 461.5929260253906f */
	aobjEvent32SetValRateBlock(0x020, 26),
	    0x459201CE,  /* 4672.2255859375f */
	    0xC357C121,  /* -215.75440979003906f */
	aobjEvent32SetVal0Rate(0x020, 33),
	    0x43A50000,  /* 330.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 30),
	    0xC13DE354,  /* -11.868000030517578f */
	    0xC2DE6CBC,  /* -111.21237182617188f */
	aobjEvent32Wait(12),
	aobjEvent32SetValRate(0x002, 18),
	    0xBE9DEE1D,  /* -0.30845728516578674f */
	    0xBC03B3E7,  /* -0.008038497529923916f */
	aobjEvent32Wait(15),
	aobjEvent32SetValRate(0x001, 13),
	    0xBEA47906,  /* -0.3212358355522156f */
	    0xBCED9214,  /* -0.02900031954050064f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 5),
	    0x447528A1,  /* 980.6348266601562f */
	    0x4350A230,  /* 208.633544921875f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x052, 60),
	    0xBD1BB1FA,  /* -0.03801152855157852f */
	    0x3BED334E,  /* 0.0072387820109725f */
	    0xC581A525,  /* -4148.64306640625f */
	    0xC1924CB3,  /* -18.287450790405273f */
	    0x466A6000,  /* 15000.0f */
	    0xC25A533D,  /* -54.5812873840332f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x020, 56),
	    0x46EA6000,  /* 30000.0f */
	    0x443093BC,  /* 706.308349609375f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x001, 50),
	    0xBFA147AC,  /* -1.2599997520446777f */
	    0xBB310AD6,  /* -0.002701451536267996f */
	aobjEvent32End(),
};

u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x6C8[] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0x3C1B9409,  /* 0.009495743550360203f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 33),
	    0x3F33BD11,  /* 0.7021036744117737f */
	    0x3CDD96B3,  /* 0.02704939804971218f */
	aobjEvent32SetValRateBlock(0x004, 20),
	    0x3F2062B0,  /* 0.6265058517456055f */
	    0xBD80B714,  /* -0.06284919381141663f */
	aobjEvent32SetValRateBlock(0x004, 11),
	    0xBE043B5F,  /* -0.1291327327489853f */
	    0xBD01517F,  /* -0.03157186135649681f */
	aobjEvent32SetValRateBlock(0x004, 56),
	    0xBF33B646,  /* -0.7020000219345093f */
	    0xBA8E5B3B,  /* -0.001086092903278768f */
	aobjEvent32End(),
};

u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x714[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 55),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 5),
	    0xC0060A92,  /* -2.094395160675049f */
	aobjEvent32SetValBlock(0x001, 2),
	    0xC0060A92,  /* -2.094395160675049f */
	aobjEvent32SetValBlock(0x001, 9),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 49),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dFoxSpecial2_EntryArwingL_AnimJoint_0x748[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0x09E0 to 0x0E30 (1104 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xA10[];
extern u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xB18[];
extern u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xB64[];
extern u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xB98[];

AObjEvent32 *dFoxSpecial2_EntryArwingR_AnimJoint[12] = {
	(AObjEvent32 *)dFoxSpecial2_EntryArwingR_AnimJoint_0xA10,
	(AObjEvent32 *)dFoxSpecial2_EntryArwingR_AnimJoint_0xB18,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dFoxSpecial2_EntryArwingR_AnimJoint_0xB64,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dFoxSpecial2_EntryArwingR_AnimJoint_0xB98,
	NULL,
};

u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xA10[] = {
	aobjEvent32SetValRate(0x073, 0),
	    0x3F181063,  /* 0.5940000414848328f */
	    0xBB3E3D8A,  /* -0.002902837935835123f */
	    0xBFA91D9C,  /* -1.321216106414795f */
	    0x3C9DD607,  /* 0.019267095252871513f */
	    0x46829B73,  /* 16717.724609375f */
	    0xC4503D09,  /* -832.9536743164062f */
	    0x4610A015,  /* 9256.0205078125f */
	    0xC2EAC4C5,  /* -117.38431549072266f */
	    0xC6F68232,  /* -31553.09765625f */
	    0x43772EB9,  /* 247.18251037597656f */
	aobjEvent32SetValAfterBlock(0x384, 0),
	    0x00000000,  /* 0.0f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetValRate(0x010, 30),
	    0x42AC2872,  /* 86.07899475097656f */
	    0xC39E63AC,  /* -316.7786865234375f */
	aobjEvent32SetValRate(0x002, 42),
	    0xBE1877AE,  /* -0.1488940417766571f */
	    0x3D006F01,  /* 0.03135586157441139f */
	aobjEvent32SetValRate(0x001, 57),
	    0x3CA32D14,  /* 0.019918955862522125f */
	    0xBC85A230,  /* -0.01631268858909607f */
	aobjEvent32SetValRate(0x040, 60),
	    0x41710B9B,  /* 15.065333366394043f */
	    0x43E6CBE5,  /* 461.5929260253906f */
	aobjEvent32SetValRateBlock(0x020, 26),
	    0x459201CE,  /* 4672.2255859375f */
	    0xC357C121,  /* -215.75440979003906f */
	aobjEvent32SetVal0Rate(0x020, 33),
	    0x43A50000,  /* 330.0f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x010, 30),
	    0x413DE354,  /* 11.868000030517578f */
	    0x42DE6CB9,  /* 111.21234893798828f */
	aobjEvent32Wait(12),
	aobjEvent32SetValRate(0x002, 18),
	    0x3E9DEE1D,  /* 0.30845728516578674f */
	    0x3C03B3E1,  /* 0.008038491941988468f */
	aobjEvent32Wait(15),
	aobjEvent32SetValRate(0x001, 13),
	    0xBEA47906,  /* -0.3212358355522156f */
	    0xBCED9214,  /* -0.02900031954050064f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x020, 5),
	    0x447528A1,  /* 980.6348266601562f */
	    0x4350A230,  /* 208.633544921875f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x052, 60),
	    0x3D1BB1FA,  /* 0.03801152855157852f */
	    0xBBED334E,  /* -0.0072387820109725f */
	    0x4581A525,  /* 4148.64306640625f */
	    0x41924CB3,  /* 18.287450790405273f */
	    0x466A6000,  /* 15000.0f */
	    0xC25A533D,  /* -54.5812873840332f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x020, 56),
	    0x46EA6000,  /* 30000.0f */
	    0x443093BC,  /* 706.308349609375f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x001, 50),
	    0xBFA147AC,  /* -1.2599997520446777f */
	    0xBB310AD6,  /* -0.002701451536267996f */
	aobjEvent32End(),
};

u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xB18[] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0xBC1B9415,  /* -0.009495754726231098f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 33),
	    0xBF33BD18,  /* -0.7021040916442871f */
	    0xBCDD96B5,  /* -0.02704940177500248f */
	aobjEvent32SetValRateBlock(0x004, 20),
	    0xBF2062A4,  /* -0.6265051364898682f */
	    0x3D80B714,  /* 0.06284919381141663f */
	aobjEvent32SetValRateBlock(0x004, 11),
	    0x3E043B8D,  /* 0.1291334182024002f */
	    0x3D015182,  /* 0.031571872532367706f */
	aobjEvent32SetValRateBlock(0x004, 56),
	    0x3F33B63B,  /* 0.7019993662834167f */
	    0x3A8E5B1C,  /* 0.0010860892944037914f */
	aobjEvent32End(),
};

u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xB64[] = {
	aobjEvent32SetValBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 55),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 5),
	    0xC0060A92,  /* -2.094395160675049f */
	aobjEvent32SetValBlock(0x001, 2),
	    0xC0060A92,  /* -2.094395160675049f */
	aobjEvent32SetValBlock(0x001, 9),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x001, 49),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u32 dFoxSpecial2_EntryArwingR_AnimJoint_0xB98[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F570A40,  /* 0.8400001525878906f */
	    0x3F59999C,  /* 0.8500001430511475f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

PAD(4);
