/* relocData file 355: DonkeySpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dDonkeySpecial2[2352] = {
	#include <DonkeySpecial2/jp_raw.data.inc.c>
};

#else  /* REGION_US */

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dDonkeySpecial2_Lut_0x0008_palette[16] = {
	#include <DonkeySpecial2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dDonkeySpecial2_Lut_0x0030_palette[16] = {
	#include <DonkeySpecial2/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0058 to 0x0260 (520 bytes) */
u8 dDonkeySpecial2_Tex_0x0058[520] = {
	#include <DonkeySpecial2/Tex_0x0058.tex.inc.c>
};

/* Raw data from file offset 0x0260 to 0x0460 (512 bytes) */
u8 dDonkeySpecial2_Tex_0x0260[512] = {
	#include <DonkeySpecial2/Tex_0x0260.tex.inc.c>
};

/* Vtx: Vtx_0x0460 @ 0x460 (10 vertices) */
Vtx dDonkeySpecial2_Vtx_0x0460_Vtx[10] = {
	#include <DonkeySpecial2/Vtx_0x0460.vtx.inc.c>
};

/* Vtx: Vtx_0x0500 @ 0x500 (18 vertices) */
Vtx dDonkeySpecial2_Vtx_0x0500_Vtx[18] = {
	#include <DonkeySpecial2/Vtx_0x0500.vtx.inc.c>
};

/* DisplayList: Joint_0x0620 @ 0x620 (424 bytes) */
Gfx dDonkeySpecial2_Joint_0x0620_DisplayList[53] = {
	#include <DonkeySpecial2/Joint_0x0620.dl.inc.c>
};

/* DObjDesc: EntryTaruDObjDesc @ 0x7C8 (3 entries) */
DObjDesc dDonkeySpecial2_EntryTaruDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dDonkeySpecial2_Joint_0x0620_DisplayList, { 0.0f, 237.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(4);

/* Raw data from file offset 0x0850 to 0x0930 (224 bytes) */
u32 dDonkeySpecial2_EntryTaruAnimJoint_AnimJoint[56] = {
	#include <DonkeySpecial2/EntryTaruAnimJoint_AnimJoint.data.inc.c>
};

#endif  /* REGION_US */
