/* relocData file 297: MarioSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0058 (88 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 40 bytes) */
u8 dMarioSpecial3_gap_0x0000_sub_0x8[40] = {
	#include <MarioSpecial3/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x0030 (was gap+0x30, 40 bytes) */
u8 dMarioSpecial3_gap_0x0000_sub_0x30[40] = {
	#include <MarioSpecial3/gap_0x0000_sub_0x30.data.inc.c>
};

/* Raw data from file offset 0x0058 to 0x0168 (272 bytes) */
/* @tex fmt=CI4 dim=16x16 */
u8 dMarioSpecial3_Tex_0x0058[272] = {
	#include <MarioSpecial3/Tex_0x0058.tex.inc.c>
};

/* Vtx: JointVerts @ 0x168 (7 vertices) */
Vtx dMarioSpecial3_JointVerts_Vtx[7] = {
	#include <MarioSpecial3/JointVerts.vtx.inc.c>
};

/* DisplayList: SuperJumpPunchDL @ 0x1D8 (184 bytes) */
Gfx dMarioSpecial3_SuperJumpPunchDL_DisplayList[23] = {
	#include <MarioSpecial3/SuperJumpPunchDL.dl.inc.c>
};
