/* relocData file 321: SamusSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dSamusSpecial3_Lut_0x0008_palette[16] = {
	#include <SamusSpecial3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x0230 (512 bytes) */
u8 dSamusSpecial3_Tex_0x0030[512] = {
	#include <SamusSpecial3/Tex_0x0030.tex.inc.c>
};

/* Vtx: JointVerts @ 0x230 (7 vertices) */
Vtx dSamusSpecial3_JointVerts_Vtx[7] = {
	#include <SamusSpecial3/JointVerts.vtx.inc.c>
};

/* DisplayList: BombDL @ 0x2A0 (176 bytes) */
Gfx dSamusSpecial3_BombDL_DisplayList[22] = {
	#include <SamusSpecial3/BombDL.dl.inc.c>
};

