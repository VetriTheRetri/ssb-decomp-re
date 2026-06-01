/* relocData file 61: MVOpeningNewcomers1 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward externs for AnimJointPtr blocks (defined later in this file) */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dMVOpeningNewcomers1_Tex_0x0008[];
extern u8 dMVOpeningNewcomers1_Tex_0x1CEF8[];
extern u8 dMVOpeningNewcomers1_Tex_0x20528[];
extern u8 dMVOpeningNewcomers1_Tex_0x5EB8[];
extern Vtx dMVOpeningNewcomers1_Vtx_0x1C4B8_Vtx[];
extern Vtx dMVOpeningNewcomers1_Vtx_0x20308_Vtx[];
extern Vtx dMVOpeningNewcomers1_Vtx_0x28AE8_Vtx[];
extern Vtx dMVOpeningNewcomers1_Vtx_0x5B28_Vtx[];
extern u32 dMVOpeningNewcomers1_Purin_AnimJoint[];
extern u32 dMVOpeningNewcomers1_Luigi_AnimJoint[];

PAD(8);

/* Texture data @ 0x0008 (23328 bytes) */
/* @tex fmt=RGBA32 dim=72x81 */
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

/* DObjDLLink for PurinShow @ 0x5E30 (2 entries) */
DObjDLLink dMVOpeningNewcomers1_PurinShow_DLLink[2] = {
	{ 1, dMVOpeningNewcomers1_PurinShow_DisplayList },
	{ 4, NULL },
};

/* AObjEvent32* for Purin animation @ 0x5E40 */
AObjEvent32 *dMVOpeningNewcomers1_PurinShow_AnimJointPtr[1] = { (AObjEvent32 *)dMVOpeningNewcomers1_Purin_AnimJoint };

/* AObjEvent32 script for Purin (referenced by PurinShow_post+0x10) @ 0x5E44 (29 words, 116 bytes) */
u32 dMVOpeningNewcomers1_Purin_AnimJoint[26] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44715B4F,  /* 965.4266967773438f */
	    0x43672100,  /* 231.12890625f */
	aobjEvent32SetValBlock(0x030, 6),
	    0x44715B4F,  /* 965.4266967773438f */
	    0x43672100,  /* 231.12890625f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0xC2D5AF7D,  /* -106.8427505493164f */
	    0x42622E9D,  /* 56.5455207824707f */
	aobjEvent32SetValRateBlock(0x030, 8),
	    0x4399ACBA,  /* 307.34942626953125f */
	    0xC0B8499B,  /* -5.7589850425720215f */
	    0x43D5B48C,  /* 427.4105224609375f */
	    0x40415BAB,  /* 3.0212199687957764f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0xC0A2EE77,  /* -5.091609477996826f */
	    0x3D4E8005,  /* 0.05041505768895149f */
	aobjEvent32SetValRateBlock(0x030, 24),
	    0x4370D0BF,  /* 240.81541442871094f */
	    0xC01480B1,  /* -2.320354700088501f */
	    0x43C7931A,  /* 399.14923095703125f */
	    0xBFD82BEA,  /* -1.6888401508331299f */
	aobjEvent32SetValBlock(0x030, 2),
	    0x4370D0BF,  /* 240.81541442871094f */
	    0x43C7931A,  /* 399.14923095703125f */
	aobjEvent32End(),
};

PAD(12);

/* Texture for LuigiShow (RGBA32 128x179) @ 0x5EB8 (91648 bytes) */
/* @tex fmt=RGBA32 dim=128x179 */
u8 dMVOpeningNewcomers1_Tex_0x5EB8[91648] = {
	#include <MVOpeningNewcomers1/Tex_0x5EB8.tex.inc.c>
};

/* Vtx for LuigiShow @ 0x1C4B8 (56 vertices) */
Vtx dMVOpeningNewcomers1_Vtx_0x1C4B8_Vtx[56] = {
	#include <MVOpeningNewcomers1/Vtx_0x1C4B8.vtx.inc.c>
};

/* DisplayList: LuigiShow @ 0x1C838 (1600 bytes, 200 cmds) */
Gfx dMVOpeningNewcomers1_LuigiShow_DisplayList[200] = {
	#include <MVOpeningNewcomers1/LuigiShow.dl.inc.c>
};

/* DObjDLLink for LuigiShow @ 0x1CE78 (2 entries) */
DObjDLLink dMVOpeningNewcomers1_LuigiShow_DLLink[2] = {
	{ 1, dMVOpeningNewcomers1_LuigiShow_DisplayList },
	{ 4, NULL },
};

PAD(8);

/* AObjEvent32* for Luigi animation @ 0x1CE90 */
AObjEvent32 *dMVOpeningNewcomers1_LuigiShow_AnimJointPtr[1] = { (AObjEvent32 *)dMVOpeningNewcomers1_Luigi_AnimJoint };

/* AObjEvent32 script for Luigi (referenced by LuigiShow_post+0x18) @ 0x1CE94 (22 words, 88 bytes) */
u32 dMVOpeningNewcomers1_Luigi_AnimJoint[22] = {
	aobjEvent32SetValRateBlock(0x030, 0),
	    0xC47250B4,  /* -969.260986328125f */
	    0x42D9C929,  /* 108.89289093017578f */
	    0xC3E97DB0,  /* -466.98193359375f */
	    0x42D72560,  /* 107.572998046875f */
	aobjEvent32SetValRateBlock(0x030, 8),
	    0xC3CA4AFD,  /* -404.5858459472656f */
	    0x408D1B3C,  /* 4.409574508666992f */
	    0x4240C85C,  /* 48.19566345214844f */
	    0x409B8D0F,  /* 4.860969066619873f */
	aobjEvent32SetTargetRate(0x030, 0),
	    0x40A4551B,  /* 5.1353888511657715f */
	    0x3FB65036,  /* 1.4243228435516357f */
	aobjEvent32SetValRateBlock(0x030, 25),
	    0xC3AA8894,  /* -341.0670166015625f */
	    0x3F5F5549,  /* 0.8723950982093811f */
	    0x42214550,  /* 40.31768798828125f */
	    0x3C844D52,  /* 0.016150150448083878f */
	aobjEvent32SetValBlock(0x030, 7),
	    0xC3AA8894,  /* -341.0670166015625f */
	    0x42214550,  /* 40.31768798828125f */
	aobjEvent32End(),
};

PAD(12);

/* Texture for PurinHidden (I8 112x119) @ 0x1CEF8 (13328 bytes) */
/* @tex fmt=I8 dim=112x119 */
u8 dMVOpeningNewcomers1_Tex_0x1CEF8[13328] = {
	#include <MVOpeningNewcomers1/Tex_0x1CEF8.tex.inc.c>
};

/* Vtx for PurinHidden @ 0x20308 (10 vertices) */
Vtx dMVOpeningNewcomers1_Vtx_0x20308_Vtx[10] = {
	#include <MVOpeningNewcomers1/Vtx_0x20308.vtx.inc.c>
};

/* DisplayList: PurinHidden @ 0x203A8 (352 bytes, 44 cmds) */
Gfx dMVOpeningNewcomers1_PurinHidden_DisplayList[44] = {
	#include <MVOpeningNewcomers1/PurinHidden.dl.inc.c>
};

/* DObjDLLink for PurinHidden @ 0x20508 (2 entries) */
DObjDLLink dMVOpeningNewcomers1_PurinHidden_DLLink[2] = {
	{ 1, dMVOpeningNewcomers1_PurinHidden_DisplayList },
	{ 4, NULL },
};

PAD(16);

/* Texture for LuigiHidden (I8 160x214) @ 0x20528 (34240 bytes) */
/* @tex fmt=I8 dim=160x214 */
u8 dMVOpeningNewcomers1_Tex_0x20528[34240] = {
	#include <MVOpeningNewcomers1/Tex_0x20528.tex.inc.c>
};

/* Vtx for LuigiHidden @ 0x28AE8 (20 vertices) */
Vtx dMVOpeningNewcomers1_Vtx_0x28AE8_Vtx[20] = {
	#include <MVOpeningNewcomers1/Vtx_0x28AE8.vtx.inc.c>
};

/* DisplayList: LuigiHidden @ 0x28C28 (632 bytes, 79 cmds) */
Gfx dMVOpeningNewcomers1_LuigiHidden_DisplayList[79] = {
	#include <MVOpeningNewcomers1/LuigiHidden.dl.inc.c>
};

/* DObjDLLink for LuigiHidden @ 0x28EA0 (2 entries) */
DObjDLLink dMVOpeningNewcomers1_LuigiHidden_DLLink[2] = {
	{ 1, dMVOpeningNewcomers1_LuigiHidden_DisplayList },
	{ 4, NULL },
};

