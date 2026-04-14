/* relocData file 346: FoxSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

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
u8 dFoxSpecial2_ReflectorStart_AnimJoint[96] = {
	#include <FoxSpecial2/ReflectorStart_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x03A0 to 0x0430 (144 bytes) */
u8 dFoxSpecial2_ReflectorHit_AnimJoint[144] = {
	#include <FoxSpecial2/ReflectorHit_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0430 to 0x04C0 (144 bytes) */
u8 dFoxSpecial2_ReflectorEnd_AnimJoint[144] = {
	#include <FoxSpecial2/ReflectorEnd_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x04C0 to 0x0590 (208 bytes) */
u8 dFoxSpecial2_ReflectorLoop_AnimJoint[208] = {
	#include <FoxSpecial2/ReflectorLoop_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0590 to 0x09E0 (1104 bytes) */
u8 dFoxSpecial2_EntryArwingL_AnimJoint[1104] = {
	#include <FoxSpecial2/EntryArwingL_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x09E0 to 0x0E30 (1104 bytes) */
u8 dFoxSpecial2_EntryArwingR_AnimJoint[1104] = {
	#include <FoxSpecial2/EntryArwingR_AnimJoint.data.inc.c>
};

