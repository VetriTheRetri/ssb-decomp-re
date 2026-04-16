/* relocData file 346: FoxSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Raw data from file offset 0x0008 to 0x0018 (16 bytes) */
u8 dFoxSpecial2_Lut3_0x0008[16] = {
	#include <FoxSpecial2/Lut3_0x0008.data.inc.c>
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
u32 dFoxSpecial2_ReflectorStart_AnimJoint[24] = {
	aobjEvent32End(),
	aobjEvent32End(),
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
	aobjEvent32End(),
};

/* Raw data from file offset 0x03A0 to 0x0430 (144 bytes) */
u32 dFoxSpecial2_ReflectorHit_AnimJoint[36] = {
	aobjEvent32End(),
	aobjEvent32End(),
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
	aobjEvent32End(),
};

/* Raw data from file offset 0x0430 to 0x04C0 (144 bytes) */
u32 dFoxSpecial2_ReflectorEnd_AnimJoint[36] = {
	aobjEvent32End(),
	aobjEvent32End(),
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
	aobjEvent32End(),
};

/* Raw data from file offset 0x04C0 to 0x0590 (208 bytes) */
u32 dFoxSpecial2_ReflectorLoop_AnimJoint[52] = {
	aobjEvent32End(),
	aobjEvent32End(),
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
u32 dFoxSpecial2_EntryArwingL_AnimJoint[276] = {
	#include <FoxSpecial2/EntryArwingL_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x09E0 to 0x0E30 (1104 bytes) */
u32 dFoxSpecial2_EntryArwingR_AnimJoint[276] = {
	#include <FoxSpecial2/EntryArwingR_AnimJoint.data.inc.c>
};

