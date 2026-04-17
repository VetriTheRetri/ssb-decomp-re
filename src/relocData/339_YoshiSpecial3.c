/* relocData file 339: YoshiSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dYoshiSpecial3[3696] = {
	#include <YoshiSpecial3/jp_raw.data.inc.c>
};

#else  /* REGION_US */

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
u32 dYoshiSpecial3_EggLayBreak_AnimJoint[104] = {
	#include <YoshiSpecial3/EggLayBreak_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0B90 to 0x0DB0 (544 bytes) */
u32 dYoshiSpecial3_EggLayThrow_AnimJoint[136] = {
	#include <YoshiSpecial3/EggLayThrow_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x0DB0 to 0x0E70 (192 bytes) */
u32 dYoshiSpecial3_EggLayWait_AnimJoint[48] = {
	#include <YoshiSpecial3/EggLayWait_AnimJoint.data.inc.c>
};

#endif  /* REGION_US */
