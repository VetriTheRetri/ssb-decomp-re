/* relocData file 61: MVOpeningNewcomers1 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Texture data @ 0x0008 (23328 bytes) */
u8 dMVOpeningNewcomers1_Tex_0x0008[23328] = {
	#include <MVOpeningNewcomers1/Tex_0x0008.tex.inc.c>
};

/* Vtx: Vtx_0x5B28_Vtx @ 0x5B28 (16 vertices) */
Vtx dMVOpeningNewcomers1_Vtx_0x5B28_Vtx[16] = {
	#include <MVOpeningNewcomers1/Vtx_0x5B28.vtx.inc.c>
};

/* DisplayList: PurinShow @ 0x5C28 (520 bytes, 65 cmds) */
Gfx dMVOpeningNewcomers1_PurinShow_DisplayList[65] = {
	#include <MVOpeningNewcomers1/PurinShow.dl.inc.c>
};

/* Raw data from file offset 0x5E30 to 0x5E44 (20 bytes) */
u8 dMVOpeningNewcomers1_PurinShow_post[20] = {
	#include <MVOpeningNewcomers1/PurinShow_post.data.inc.c>
};

/* Raw data from file offset 0x5E44 to 0x1C838 (92660 bytes) */
u32 dMVOpeningNewcomers1_Purin_AnimJoint[23165] = {
	#include <MVOpeningNewcomers1/Purin_AnimJoint.data.inc.c>
};

/* DisplayList: LuigiShow @ 0x1C838 (1600 bytes, 200 cmds) */
Gfx dMVOpeningNewcomers1_LuigiShow_DisplayList[200] = {
	#include <MVOpeningNewcomers1/LuigiShow.dl.inc.c>
};

/* Raw data from file offset 0x1CE78 to 0x1CE94 (28 bytes) */
u8 dMVOpeningNewcomers1_LuigiShow_post[28] = {
	#include <MVOpeningNewcomers1/LuigiShow_post.data.inc.c>
};

/* Raw data from file offset 0x1CE94 to 0x203A8 (13588 bytes) */
u32 dMVOpeningNewcomers1_Luigi_AnimJoint[3397] = {
	#include <MVOpeningNewcomers1/Luigi_AnimJoint.data.inc.c>
};

/* DisplayList: PurinHidden @ 0x203A8 (352 bytes, 44 cmds) */
Gfx dMVOpeningNewcomers1_PurinHidden_DisplayList[44] = {
	#include <MVOpeningNewcomers1/PurinHidden.dl.inc.c>
};

/* Raw data from file offset 0x20508 to 0x28C28 (34592 bytes) */
u8 dMVOpeningNewcomers1_PurinHidden_post[34592] = {
	#include <MVOpeningNewcomers1/PurinHidden_post.data.inc.c>
};

/* DisplayList: LuigiHidden @ 0x28C28 (632 bytes, 79 cmds) */
Gfx dMVOpeningNewcomers1_LuigiHidden_DisplayList[79] = {
	#include <MVOpeningNewcomers1/LuigiHidden.dl.inc.c>
};

/* Raw data from file offset 0x28EA0 to 0x28EB0 (16 bytes) */
u8 dMVOpeningNewcomers1_LuigiHidden_post[16] = {
	#include <MVOpeningNewcomers1/LuigiHidden_post.data.inc.c>
};

