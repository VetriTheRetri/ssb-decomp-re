/* relocData file 351: PurinSpecial2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
extern u8 dPurinSpecial2_gap_0x1C98[];

PAD(8);

/* Raw data from file offset 0x0008 to 0x0810 (2056 bytes) */
u8 dPurinSpecial2_Tex_0x0008[2056] = {
	#include <PurinSpecial2/Tex_0x0008.tex.inc.c>
};

/* Raw data from file offset 0x0810 to 0x1018 (2056 bytes) */
u8 dPurinSpecial2_Tex_0x0810[2056] = {
	#include <PurinSpecial2/Tex_0x0810.tex.inc.c>
};

/* Raw data from file offset 0x1018 to 0x1820 (2056 bytes) */
u8 dPurinSpecial2_Tex_0x1018[2056] = {
	#include <PurinSpecial2/Tex_0x1018.tex.inc.c>
};

/* Raw data from file offset 0x1820 to 0x1C20 (1024 bytes) */
u8 dPurinSpecial2_Tex_0x1820[1024] = {
	#include <PurinSpecial2/Tex_0x1820.tex.inc.c>
};

/* MObjSub: SingMObjSub @ 0x1C20 */
MObjSub dPurinSpecial2_SingMObjSub_MObjSub = {
	0x0000,
	0x00, 0x00,
	(void**)((u8*)dPurinSpecial2_gap_0x1C98 + 0x180),
	0x0000, 0x0000, 0x070C, 0x0788,
	118294410,
	2.0166514759768306e-34f, 1.0789998175301091e-42f,
	0.0f, 2.938735877055719e-39f,
	5.877561437213154e-39f, 0.0f,
	(void**)0x00000000,
	0x0000,
	0x00, 0x00,
	0x3F80,
	0x0000, 0x3F80, 0x0000,
	0.0f, 1.0f,
	0.0f, 9.404816885393553e-38f,
	0x00200020,
	{ { 0x00, 0x40, 0x00, 0x40 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x20, 0x01 } },
	-43776, 0,
	-16744193, 8,
};

/* Raw data from file offset 0x1C98 to 0x1E38 (416 bytes) */
u8 dPurinSpecial2_gap_0x1C98[416] = {
	#include <PurinSpecial2/gap_0x1C98.data.inc.c>
};

/* Vtx: Vtx_0x1E38 @ 0x1E38 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1E38_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1E38.vtx.inc.c>
};

/* Vtx: Vtx_0x1E78 @ 0x1E78 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1E78_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1E78.vtx.inc.c>
};

/* Vtx: Vtx_0x1EB8 @ 0x1EB8 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1EB8_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1EB8.vtx.inc.c>
};

/* Vtx: Vtx_0x1EF8 @ 0x1EF8 (4 vertices) */
Vtx dPurinSpecial2_Vtx_0x1EF8_Vtx[4] = {
	#include <PurinSpecial2/Vtx_0x1EF8.vtx.inc.c>
};

/* DisplayList: Joint_0x1F38 @ 0x1F38 (48 bytes) */
Gfx dPurinSpecial2_Joint_0x1F38_DisplayList[6] = {
	#include <PurinSpecial2/Joint_0x1F38.dl.inc.c>
};

/* Raw data from file offset 0x1F68 to 0x1FD0 (104 bytes) */
u8 dPurinSpecial2_Joint_0x1F38_post[104] = {
	#include <PurinSpecial2/Joint_0x1F38_post.data.inc.c>
};

/* DisplayList: Joint_0x1FD0 @ 0x1FD0 (120 bytes) */
Gfx dPurinSpecial2_Joint_0x1FD0_DisplayList[15] = {
	#include <PurinSpecial2/Joint_0x1FD0.dl.inc.c>
};

/* DisplayList: Joint_0x2048 @ 0x2048 (72 bytes) */
Gfx dPurinSpecial2_Joint_0x2048_DisplayList[9] = {
	#include <PurinSpecial2/Joint_0x2048.dl.inc.c>
};

/* DisplayList: Joint_0x2090 @ 0x2090 (96 bytes) */
Gfx dPurinSpecial2_Joint_0x2090_DisplayList[12] = {
	#include <PurinSpecial2/Joint_0x2090.dl.inc.c>
};

/* Raw data from file offset 0x20F0 to 0x2100 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x20F0[16] = {
	#include <PurinSpecial2/JointCmd_0x20F0.data.inc.c>
};

/* Raw data from file offset 0x2100 to 0x2110 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x2100[16] = {
	#include <PurinSpecial2/JointCmd_0x2100.data.inc.c>
};

/* Raw data from file offset 0x2110 to 0x2120 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x2110[16] = {
	#include <PurinSpecial2/JointCmd_0x2110.data.inc.c>
};

/* Raw data from file offset 0x2120 to 0x2130 (16 bytes) */
u8 dPurinSpecial2_JointCmd_0x2120[16] = {
	#include <PurinSpecial2/JointCmd_0x2120.data.inc.c>
};

/* DObjDesc: SingDObjDesc @ 0x2130 (7 entries) */
DObjDesc dPurinSpecial2_SingDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dPurinSpecial2_JointCmd_0x20F0, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.009999999776482582f, 0.009999999776482582f, 0.009999999776482582f } },
	{ 1, (void*)0x00000000, { 0.0f, 150.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinSpecial2_JointCmd_0x2100, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinSpecial2_JointCmd_0x2110, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dPurinSpecial2_JointCmd_0x2120, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x2270 to 0x2D70 (2816 bytes) */
u32 dPurinSpecial2_SingAnimJoint_AnimJoint[704] = {
	#include <PurinSpecial2/SingAnimJoint_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x2D70 to 0x2F50 (480 bytes) */
u32 dPurinSpecial2_SingMatAnimJoint_MatAnimJoint[120] = {
	#include <PurinSpecial2/SingMatAnimJoint_MatAnimJoint.data.inc.c>
};

