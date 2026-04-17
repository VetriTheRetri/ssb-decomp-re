/* relocData file 356: MarioSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dMarioSpecial2_Lut_0x0008_palette[16] = {
	#include <MarioSpecial2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dMarioSpecial2_Lut_0x0030_palette[16] = {
	#include <MarioSpecial2/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0058 to 0x00A0 (72 bytes) */
u8 dMarioSpecial2_Tex_0x0058[72] = {
	#include <MarioSpecial2/Tex_0x0058.tex.inc.c>
};

/* Raw data from file offset 0x00A0 to 0x0120 (128 bytes) */
u8 dMarioSpecial2_Tex_0x00A0[128] = {
	#include <MarioSpecial2/Tex_0x00A0.tex.inc.c>
};

/* Vtx: Vtx_0x0120 @ 0x120 (12 vertices) */
Vtx dMarioSpecial2_Vtx_0x0120_Vtx[12] = {
	#include <MarioSpecial2/Vtx_0x0120.vtx.inc.c>
};

/* Vtx: Vtx_0x01E0 @ 0x1E0 (18 vertices) */
Vtx dMarioSpecial2_Vtx_0x01E0_Vtx[18] = {
	#include <MarioSpecial2/Vtx_0x01E0.vtx.inc.c>
};

/* Vtx: Vtx_0x0300 @ 0x300 (12 vertices) */
Vtx dMarioSpecial2_Vtx_0x0300_Vtx[12] = {
	#include <MarioSpecial2/Vtx_0x0300.vtx.inc.c>
};

/* DisplayList: Joint_0x03C0 @ 0x3C0 (96 bytes) */
Gfx dMarioSpecial2_Joint_0x03C0_DisplayList[12] = {
	#include <MarioSpecial2/Joint_0x03C0.dl.inc.c>
};

/* Raw data from file offset 0x0420 to 0x04C0 (160 bytes) */
u8 dMarioSpecial2_Joint_0x03C0_post[160] = {
	#include <MarioSpecial2/Joint_0x03C0_post.data.inc.c>
};

/* DisplayList: Joint_0x04C0 @ 0x4C0 (328 bytes) */
Gfx dMarioSpecial2_Joint_0x04C0_DisplayList[41] = {
	#include <MarioSpecial2/Joint_0x04C0.dl.inc.c>
};

/* DObjDesc: EntryDokanDObjDesc @ 0x608 (4 entries) */
DObjDesc dMarioSpecial2_EntryDokanDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dMarioSpecial2_Joint_0x03C0_DisplayList, { 0.0f, -21.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dMarioSpecial2_Joint_0x04C0_DisplayList, { 0.0f, -104.75826263427734f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(8);

/* Raw data from file offset 0x06C0 to 0x0740 (128 bytes) */
u32 dMarioSpecial2_EntryDokanAnimJoint_AnimJoint[32] = {
	#include <MarioSpecial2/EntryDokanAnimJoint_AnimJoint.data.inc.c>
};
