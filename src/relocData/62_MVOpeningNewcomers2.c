/* relocData file 62: MVOpeningNewcomers2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

PAD(8);

/* Texture data @ 0x0008 (114176 bytes) */
u8 dMVOpeningNewcomers2_Tex_0x0008[114176] = {
	#include <MVOpeningNewcomers2/Tex_0x0008.tex.inc.c>
};

/* Vtx: Vtx_0x1BE08_Vtx @ 0x1BE08 (67 vertices) */
Vtx dMVOpeningNewcomers2_Vtx_0x1BE08_Vtx[67] = {
	#include <MVOpeningNewcomers2/Vtx_0x1BE08.vtx.inc.c>
};

/* DisplayList: CaptainShow @ 0x1C238 (1920 bytes, 240 cmds) */
Gfx dMVOpeningNewcomers2_CaptainShow_DisplayList[240] = {
	#include <MVOpeningNewcomers2/CaptainShow.dl.inc.c>
};

/* Raw data from file offset 0x1C9B8 to 0x1C9D4 (28 bytes) */
u8 dMVOpeningNewcomers2_CaptainShow_post[28] = {
	#include <MVOpeningNewcomers2/CaptainShow_post.data.inc.c>
};

/* Raw data from file offset 0x1C9D4 to 0x2A448 (55924 bytes) */
u32 dMVOpeningNewcomers2_Captain_AnimJoint[13981] = {
	#include <MVOpeningNewcomers2/Captain_AnimJoint.data.inc.c>
};

/* DisplayList: NessShow @ 0x2A448 (1024 bytes, 128 cmds) */
Gfx dMVOpeningNewcomers2_NessShow_DisplayList[128] = {
	#include <MVOpeningNewcomers2/NessShow.dl.inc.c>
};

/* Raw data from file offset 0x2A848 to 0x2A864 (28 bytes) */
u8 dMVOpeningNewcomers2_NessShow_post[28] = {
	#include <MVOpeningNewcomers2/NessShow_post.data.inc.c>
};

/* Raw data from file offset 0x2A864 to 0x355C0 (44380 bytes) */
u32 dMVOpeningNewcomers2_Ness_AnimJoint[11095] = {
	#include <MVOpeningNewcomers2/Ness_AnimJoint.data.inc.c>
};

/* DisplayList: CaptainHidden @ 0x355C0 (800 bytes, 100 cmds) */
Gfx dMVOpeningNewcomers2_CaptainHidden_DisplayList[100] = {
	#include <MVOpeningNewcomers2/CaptainHidden.dl.inc.c>
};

/* Raw data from file offset 0x358E0 to 0x3BAF8 (25112 bytes) */
u8 dMVOpeningNewcomers2_CaptainHidden_post[25112] = {
	#include <MVOpeningNewcomers2/CaptainHidden_post.data.inc.c>
};

/* DisplayList: NessHidden @ 0x3BAF8 (520 bytes, 65 cmds) */
Gfx dMVOpeningNewcomers2_NessHidden_DisplayList[65] = {
	#include <MVOpeningNewcomers2/NessHidden.dl.inc.c>
};

/* Raw data from file offset 0x3BD00 to 0x3BD10 (16 bytes) */
u8 dMVOpeningNewcomers2_NessHidden_post[16] = {
	#include <MVOpeningNewcomers2/NessHidden_post.data.inc.c>
};

