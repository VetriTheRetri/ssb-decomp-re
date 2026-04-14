/* relocData file 325: LinkSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dLinkSpecial3_Lut_0x0008_palette[16] = {
	#include <LinkSpecial3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0150 (288 bytes) */
u8 dLinkSpecial3_Tex_0x0030[288] = {
	#include <LinkSpecial3/Tex_0x0030.tex.inc.c>
};

/* Vtx: Vtx_0x0150 @ 0x150 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0150_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0150.vtx.inc.c>
};

/* Vtx: Vtx_0x0180 @ 0x180 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0180_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0180.vtx.inc.c>
};

/* Vtx: Vtx_0x01B0 @ 0x1B0 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x01B0_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x01B0.vtx.inc.c>
};

/* Vtx: Vtx_0x01E0 @ 0x1E0 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x01E0_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x01E0.vtx.inc.c>
};

/* Vtx: Vtx_0x0210 @ 0x210 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0210_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0210.vtx.inc.c>
};

/* Vtx: Vtx_0x0240 @ 0x240 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0240_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0240.vtx.inc.c>
};

/* Vtx: Vtx_0x0270 @ 0x270 (3 vertices) */
Vtx dLinkSpecial3_Vtx_0x0270_Vtx[3] = {
	#include <LinkSpecial3/Vtx_0x0270.vtx.inc.c>
};

/* Vtx: Vtx_0x02A0 @ 0x2A0 (14 vertices) */
Vtx dLinkSpecial3_Vtx_0x02A0_Vtx[14] = {
	#include <LinkSpecial3/Vtx_0x02A0.vtx.inc.c>
};

/* DisplayList: BoomerangDL @ 0x380 (216 bytes) */
Gfx dLinkSpecial3_BoomerangDL_DisplayList[27] = {
	#include <LinkSpecial3/BoomerangDL.dl.inc.c>
};

/* Raw data from file offset 0x0458 to 0x06F0 (664 bytes) */
u8 dLinkSpecial3_BoomerangDL_post[664] = {
	#include <LinkSpecial3/BoomerangDL_post.data.inc.c>
};

