/* relocData file 198: SCExplainGraphics */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x5028 (20520 bytes) */
/* gap sub-block @ 0x0000 (was gap+0x0, 8 bytes) */
u8 dSCExplainGraphics_gap_0x0000[8] = {
	#include <SCExplainGraphics/gap_0x0000.data.inc.c>
};

/* gap sub-block @ 0x0008 (was gap+0x8, 4104 bytes) */
u8 dSCExplainGraphics_gap_0x0000_sub_0x8[4104] = {
	#include <SCExplainGraphics/gap_0x0000_sub_0x8.data.inc.c>
};

/* gap sub-block @ 0x1010 (was gap+0x1010, 4104 bytes) */
u8 dSCExplainGraphics_gap_0x0000_sub_0x1010[4104] = {
	#include <SCExplainGraphics/gap_0x0000_sub_0x1010.data.inc.c>
};

/* gap sub-block @ 0x2018 (was gap+0x2018, 4104 bytes) */
u8 dSCExplainGraphics_gap_0x0000_sub_0x2018[4104] = {
	#include <SCExplainGraphics/gap_0x0000_sub_0x2018.data.inc.c>
};

/* gap sub-block @ 0x3020 (was gap+0x3020, 4104 bytes) */
u8 dSCExplainGraphics_gap_0x0000_sub_0x3020[4104] = {
	#include <SCExplainGraphics/gap_0x0000_sub_0x3020.data.inc.c>
};

/* gap sub-block @ 0x4028 (was gap+0x4028, 4096 bytes) */
u8 dSCExplainGraphics_gap_0x0000_sub_0x4028[4096] = {
	#include <SCExplainGraphics/gap_0x0000_sub_0x4028.data.inc.c>
};

/* MObjSub: StickMObjSub @ 0x5028 */
MObjSub dSCExplainGraphics_StickMObjSub_MObjSub = {
	0x140C,
	0x14, 0x30,
	(void**)0x00000000,
	0x140D, 0x100A, 0x140E, 0x0C08,
	336529414,
	7.270934044909977e-27f, 7.421604937063235e-27f,
	0.0f, 1.0789998175301091e-42f,
	8.889682785399315e-27f, 2.938735877055719e-39f,
	(void**)0x00400040,
	0x0000,
	0x00, 0x00,
	0x0000,
	0x0000, 0x0000, 0x0000,
	1.0f, 1.0f,
	0.0f, 1.0f,
	0x00000000,
	{ { 0x00, 0x01, 0x03, 0x01 } },
	0x00, 0x40, { 0x00, 0x40 },
	{ { 0x00, 0x40, 0x00, 0x40 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0, 8197,
	-1, 0,
};

/* Raw data from file offset 0x50A0 to 0x5300 (608 bytes) */
/* gap sub-block @ 0x50A0 (was gap+0x0, 32 bytes) */
u8 dSCExplainGraphics_gap_0x50A0[32] = {
	#include <SCExplainGraphics/gap_0x50A0.data.inc.c>
};

/* gap sub-block @ 0x50C0 (was gap+0x20, 8 bytes) */
u8 dSCExplainGraphics_gap_0x50A0_sub_0x20[8] = {
	#include <SCExplainGraphics/gap_0x50A0_sub_0x20.data.inc.c>
};

/* gap sub-block @ 0x50C8 (was gap+0x28, 64 bytes) */
Vtx dSCExplainGraphics_gap_0x50A0_sub_0x28[4] = {
	#include <SCExplainGraphics/gap_0x50A0_sub_0x28.vtx.inc.c>
};

/* gap sub-block @ 0x5108 (was gap+0x68, 192 bytes) */
Vtx dSCExplainGraphics_gap_0x50A0_sub_0x68[12] = {
	#include <SCExplainGraphics/gap_0x50A0_sub_0x68.vtx.inc.c>
};

/* gap sub-block @ 0x51C8 (was gap+0x128, 160 bytes) */
Gfx dSCExplainGraphics_DL_0x51C8[20] = {
	#include <SCExplainGraphics/DL_0x51C8.dl.inc.c>
};

/* gap sub-block @ 0x5268 (was gap+0x1C8, 120 bytes) */
Gfx dSCExplainGraphics_DL_0x5268[15] = {
	#include <SCExplainGraphics/DL_0x5268.dl.inc.c>
};

/* DObjDLLink @ 0x240 (2 entries) */
DObjDLLink dSCExplainGraphics_DLLink_0x52E0[] = {
	{ 1, dSCExplainGraphics_DL_0x51C8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x250 (2 entries) */
DObjDLLink dSCExplainGraphics_DLLink_0x52F0[] = {
	{ 1, dSCExplainGraphics_DL_0x5268 },
	{ 4, NULL },
};

/* DObjDesc: StickDObjDesc @ 0x5300 (3 entries) */
DObjDesc dSCExplainGraphics_StickDObjDesc[] = {
	{ 0, (void*)dSCExplainGraphics_DLLink_0x52E0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dSCExplainGraphics_DLLink_0x52F0, { 0.0f, 0.0f, 0.30000001192092896f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x5390 to 0x53C0 (48 bytes) */
u32 dSCExplainGraphics_StickNeutral_MatAnimJoint[12] = {
	#include <SCExplainGraphics/StickNeutral_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x53C0 to 0x53F0 (48 bytes) */
u32 dSCExplainGraphics_StickHoldUp_MatAnimJoint[12] = {
	#include <SCExplainGraphics/StickHoldUp_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x53F0 to 0x5430 (64 bytes) */
u32 dSCExplainGraphics_StickTapUp_MatAnimJoint[16] = {
	#include <SCExplainGraphics/StickTapUp_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5430 to 0x5450 (32 bytes) */
u32 dSCExplainGraphics_StickHoldForward_MatAnimJoint[8] = {
	#include <SCExplainGraphics/StickHoldForward_MatAnimJoint.data.inc.c>
};

/* Raw data from file offset 0x5450 to 0x5A98 (1608 bytes) */
u32 dSCExplainGraphics_StickTapForward_MatAnimJoint[402] = {
	#include <SCExplainGraphics/StickTapForward_MatAnimJoint.data.inc.c>
};

/* MObjSub: TapSparkMObjSub @ 0x5A98 */
MObjSub dSCExplainGraphics_TapSparkMObjSub_MObjSub = {
	0x16A7,
	0x16, 0xC8,
	(void**)((u8*)dSCExplainGraphics_StickTapForward_MatAnimJoint + 0x448),
	0x16A9, 0x15A4, 0x16AB, 0x1522,
	1026,
	3.2326038316569446e-25f, 2.938735877055719e-39f,
	5.877561437213154e-39f, 0.0f,
	0.0f, 0.0f,
	(void**)0x3F800000,
	0x3F80,
	0x00, 0x00,
	0x0000,
	0x0000, 0x3F80, 0x0000,
	0.0f, 9.327042578545982e-41f,
	2.938780718606577e-39f, 5.877561437213154e-39f,
	0x00000000,
	{ { 0x00, 0x00, 0x00, 0x00 } },
	0x00, 0x00, { 0x00, 0x00 },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	{ { 0x00, 0x00, 0x22, 0x05 } },
	{ { 0xFF, 0xFF, 0xFF, 0xFF } },
	{ { 0x00, 0x00, 0x00, 0x00 } },
	-65281, 8,
	-65536, 640034304,
};

/* Raw data from file offset 0x5B10 to 0x5B68 (88 bytes) */
/* gap sub-block @ 0x5B10 (was gap+0x0, 16 bytes) */
u8 dSCExplainGraphics_gap_0x5B10[16] = {
	#include <SCExplainGraphics/gap_0x5B10.data.inc.c>
};

/* gap sub-block @ 0x5B20 (was gap+0x10, 8 bytes) */
u8 dSCExplainGraphics_gap_0x5B10_sub_0x10[8] = {
	#include <SCExplainGraphics/gap_0x5B10_sub_0x10.data.inc.c>
};

/* gap sub-block @ 0x5B28 (was gap+0x18, 64 bytes) */
Vtx dSCExplainGraphics_gap_0x5B10_sub_0x18[4] = {
	#include <SCExplainGraphics/gap_0x5B10_sub_0x18.vtx.inc.c>
};

/* DisplayList: TapSparkDisplayList @ 0x5B68 (160 bytes) */
Gfx dSCExplainGraphics_TapSparkDisplayList_DisplayList[20] = {
	#include <SCExplainGraphics/TapSparkDisplayList.dl.inc.c>
};

/* Raw data from file offset 0x5C08 to 0x5C20 (24 bytes) */
u8 dSCExplainGraphics_TapSparkDisplayList_post[24] = {
	#include <SCExplainGraphics/TapSparkDisplayList_post.data.inc.c>
};

/* Raw data from file offset 0x5C20 to 0x5E40 (544 bytes) */
u32 dSCExplainGraphics_TapSparkMatAnimJoint_MatAnimJoint[136] = {
	#include <SCExplainGraphics/TapSparkMatAnimJoint_MatAnimJoint.data.inc.c>
};

/* DisplayList: SpecialMoveRGB @ 0x5E40 (232 bytes) */
Gfx dSCExplainGraphics_SpecialMoveRGB_DisplayList[29] = {
	#include <SCExplainGraphics/SpecialMoveRGB.dl.inc.c>
};

/* Raw data from file offset 0x5F28 to 0x5F40 (24 bytes) */
u8 dSCExplainGraphics_SpecialMoveRGB_post[24] = {
	#include <SCExplainGraphics/SpecialMoveRGB_post.data.inc.c>
};

#if defined(REGION_JP)

/* JP text sprites — different dimensions and textures from US */

/* Sprite: JPText1 */

Gfx dSCExplainGraphics_JPText1_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText1 (167(176)x49 i4, 2 tiles) */
u8 dSCExplainGraphics_JPText1_tex[4320] = {
    #include <SCExplainGraphics/JPText1.i4.inc.c>
};

/* Sprite: JPText1 (167x48 i4) */

Bitmap dSCExplainGraphics_JPText1_bitmaps[] = {
	{ 167, 176, 0, 0, dSCExplainGraphics_JPText1_tex, 46, 0 },
	{ 167, 176, 0, 0, dSCExplainGraphics_JPText1_tex + 0xFD8, 3, 0 },
};

Sprite dSCExplainGraphics_JPText1 = {
	0, 0,
	167, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	2, 48,
	45, 46,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText2 */

Gfx dSCExplainGraphics_JPText2_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText2 (136(144)x32 i4) */
u8 dSCExplainGraphics_JPText2_tex[2304] = {
    #include <SCExplainGraphics/JPText2.i4.inc.c>
};

/* Sprite: JPText2 (136x32 i4) */

Bitmap dSCExplainGraphics_JPText2_bitmaps[] = {
	{ 136, 144, 0, 0, dSCExplainGraphics_JPText2_tex, 32, 0 },
};

Sprite dSCExplainGraphics_JPText2 = {
	0, 0,
	136, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText3 */

Gfx dSCExplainGraphics_JPText3_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText3 (168(176)x32 i4) */
u8 dSCExplainGraphics_JPText3_tex[2816] = {
    #include <SCExplainGraphics/JPText3.i4.inc.c>
};

/* Sprite: JPText3 (168x32 i4) */

Bitmap dSCExplainGraphics_JPText3_bitmaps[] = {
	{ 168, 176, 0, 0, dSCExplainGraphics_JPText3_tex, 32, 0 },
};

Sprite dSCExplainGraphics_JPText3 = {
	0, 0,
	168, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText4 */

Gfx dSCExplainGraphics_JPText4_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText4 (189(192)x13 i4) */
u8 dSCExplainGraphics_JPText4_tex[1248] = {
    #include <SCExplainGraphics/JPText4.i4.inc.c>
};

/* Sprite: JPText4 (189x13 i4) */

Bitmap dSCExplainGraphics_JPText4_bitmaps[] = {
	{ 189, 192, 0, 0, dSCExplainGraphics_JPText4_tex, 13, 0 },
};

Sprite dSCExplainGraphics_JPText4 = {
	0, 0,
	189, 13,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText5 */

Gfx dSCExplainGraphics_JPText5_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText5 (118(128)x31 i4) */
u8 dSCExplainGraphics_JPText5_tex[1984] = {
    #include <SCExplainGraphics/JPText5.i4.inc.c>
};

/* Sprite: JPText5 (118x31 i4) */

Bitmap dSCExplainGraphics_JPText5_bitmaps[] = {
	{ 118, 128, 0, 0, dSCExplainGraphics_JPText5_tex, 31, 0 },
};

Sprite dSCExplainGraphics_JPText5 = {
	0, 0,
	118, 31,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	31, 31,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText6 */

Gfx dSCExplainGraphics_JPText6_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText6 (185(192)x14 i4) */
u8 dSCExplainGraphics_JPText6_tex[1344] = {
    #include <SCExplainGraphics/JPText6.i4.inc.c>
};

/* Sprite: JPText6 (185x14 i4) */

Bitmap dSCExplainGraphics_JPText6_bitmaps[] = {
	{ 185, 192, 0, 0, dSCExplainGraphics_JPText6_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText6 = {
	0, 0,
	185, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dSCExplainGraphics_JPText6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: JPText7 */

Gfx dSCExplainGraphics_JPText7_dl[] = { gsSPEndDisplayList() };

/* Texture: JPText7 (30(32)x12 rgba16) */
u8 dSCExplainGraphics_JPText7_tex[768] = {
    #include <SCExplainGraphics/JPText7.rgba16.inc.c>
};

/* Sprite: JPText7 (30x12 rgba16) */

Bitmap dSCExplainGraphics_JPText7_bitmaps[] = {
	{ 30, 32, 0, 0, dSCExplainGraphics_JPText7_tex, 12, 0 },
};

Sprite dSCExplainGraphics_JPText7 = {
	0, 0,
	30, 12,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	0, 2,
	(Bitmap*)dSCExplainGraphics_JPText7_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite JPText8 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText8 (300(304)x87 ci8, 15 tiles) */
u8 dSCExplainGraphics_JPText8_tex[26568] = {
    #include <SCExplainGraphics/JPText8.ci8.inc.c>
};

/* Palette: @ 0x10380 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText8_palette[16] = {
	#include <SCExplainGraphics/JPText8.palette.inc.c>
};

/* Raw data from file offset 0x103A0 to 0x10580 (480 bytes) */
u8 dSCExplainGraphics_JPText8_gap[480] = {
	#include <SCExplainGraphics/JPText8_gap.data.inc.c>
};

/* Sprite: JPText8 */

/* Sprite: JPText8 (300x73 ci8) */

Bitmap dSCExplainGraphics_JPText8_bitmaps[] = {
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x728, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0xE50, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x1578, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x1CA0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x23C8, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x2AF0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x3218, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x3940, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x4068, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x4790, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x4EB8, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x55E0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x5D08, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_JPText8_tex + 0x6430, 3, 0 },
};

Sprite dSCExplainGraphics_JPText8 = {
	0, 0,
	300, 73,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText8_palette,
	0, 1,
	15, 204,
	5, 6,
	2, 1,
	(Bitmap*)dSCExplainGraphics_JPText8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText9 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText9 (260(272)x51 ci4, 4 tiles) */
u8 dSCExplainGraphics_JPText9_tex[6968] = {
    #include <SCExplainGraphics/JPText9.ci4.inc.c>
};

/* Palette: @ 0x12200 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText9_palette[16] = {
	#include <SCExplainGraphics/JPText9.palette.inc.c>
};

/* Sprite: JPText9 */

/* Sprite: JPText9 (260x48 ci4) */

Bitmap dSCExplainGraphics_JPText9_bitmaps[] = {
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex, 15, 0 },
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex + 0x800, 15, 0 },
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex + 0x1000, 15, 0 },
	{ 260, 272, 0, 0, dSCExplainGraphics_JPText9_tex + 0x1800, 6, 0 },
};

Sprite dSCExplainGraphics_JPText9 = {
	0, 0,
	260, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText9_palette,
	0, 1,
	4, 72,
	14, 15,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText10 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText10 (204(208)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText10_tex[3448] = {
    #include <SCExplainGraphics/JPText10.ci4.inc.c>
};

/* Palette: @ 0x13030 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText10_palette[16] = {
	#include <SCExplainGraphics/JPText10.palette.inc.c>
};

/* Sprite: JPText10 */

/* Sprite: JPText10 (204x32 ci4) */

Bitmap dSCExplainGraphics_JPText10_bitmaps[] = {
	{ 204, 208, 0, 0, dSCExplainGraphics_JPText10_tex, 19, 0 },
	{ 204, 208, 0, 0, dSCExplainGraphics_JPText10_tex + 0x7C0, 14, 0 },
};

Sprite dSCExplainGraphics_JPText10 = {
	0, 0,
	204, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText10_palette,
	0, 1,
	2, 48,
	18, 19,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText10_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText11 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText11 (160x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText11_tex[2656] = {
    #include <SCExplainGraphics/JPText11.ci4.inc.c>
};

/* Palette: @ 0x13B28 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText11_palette[16] = {
	#include <SCExplainGraphics/JPText11.palette.inc.c>
};

/* Sprite: JPText11 */

/* Sprite: JPText11 (160x32 ci4) */

Bitmap dSCExplainGraphics_JPText11_bitmaps[] = {
	{ 160, 160, 0, 0, dSCExplainGraphics_JPText11_tex, 25, 0 },
	{ 160, 160, 0, 0, dSCExplainGraphics_JPText11_tex + 0x7D8, 8, 0 },
};

Sprite dSCExplainGraphics_JPText11 = {
	0, 0,
	160, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText11_palette,
	0, 1,
	2, 48,
	24, 25,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText11_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite JPText12 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText12 (162(176)x14 ci4) */
u8 dSCExplainGraphics_JPText12_tex[1240] = {
    #include <SCExplainGraphics/JPText12.ci4.inc.c>
};

/* Palette: @ 0x14090 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText12_palette[16] = {
	#include <SCExplainGraphics/JPText12.palette.inc.c>
};

/* Sprite: JPText12 */

/* Sprite: JPText12 (162x14 ci4) */

Bitmap dSCExplainGraphics_JPText12_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_JPText12_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText12 = {
	0, 0,
	162, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText12_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText12_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText13 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText13 (134(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText13_tex[3544] = {
    #include <SCExplainGraphics/JPText13.ci4.inc.c>
};

/* Palette: @ 0x14EF0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText13_palette[16] = {
	#include <SCExplainGraphics/JPText13.palette.inc.c>
};

/* Sprite: JPText13 */

/* Sprite: JPText13 (134x48 ci4) */

Bitmap dSCExplainGraphics_JPText13_bitmaps[] = {
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText13_tex, 28, 0 },
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText13_tex + 0x7E8, 21, 0 },
};

Sprite dSCExplainGraphics_JPText13 = {
	0, 0,
	134, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText13_palette,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText13_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText14 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText14 (140(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText14_tex[3544] = {
    #include <SCExplainGraphics/JPText14.ci4.inc.c>
};

/* Palette: @ 0x15D60 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText14_palette[16] = {
	#include <SCExplainGraphics/JPText14.palette.inc.c>
};

/* Sprite: JPText14 */

/* Sprite: JPText14 (140x48 ci4) */

Bitmap dSCExplainGraphics_JPText14_bitmaps[] = {
	{ 140, 144, 0, 0, dSCExplainGraphics_JPText14_tex, 28, 0 },
	{ 140, 144, 0, 0, dSCExplainGraphics_JPText14_tex + 0x7E8, 21, 0 },
};

Sprite dSCExplainGraphics_JPText14 = {
	0, 0,
	140, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText14_palette,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText14_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText15 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText15 (176x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText15_tex[2744] = {
    #include <SCExplainGraphics/JPText15.ci4.inc.c>
};

/* Palette: @ 0x168B0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText15_palette[16] = {
	#include <SCExplainGraphics/JPText15.palette.inc.c>
};

/* Sprite: JPText15 */

/* Sprite: JPText15 (176x30 ci4) */

Bitmap dSCExplainGraphics_JPText15_bitmaps[] = {
	{ 176, 176, 0, 0, dSCExplainGraphics_JPText15_tex, 23, 0 },
	{ 176, 176, 0, 0, dSCExplainGraphics_JPText15_tex + 0x7F0, 8, 0 },
};

Sprite dSCExplainGraphics_JPText15 = {
	0, 0,
	176, 30,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText15_palette,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText15_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText16 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText16 (162(168)x52 ci8, 5 tiles) */
u8 dSCExplainGraphics_JPText16_tex[8776] = {
    #include <SCExplainGraphics/JPText16.ci8.inc.c>
};

/* Palette: @ 0x18B90 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText16_palette[16] = {
	#include <SCExplainGraphics/JPText16.palette.inc.c>
};

/* Raw data from file offset 0x18BB0 to 0x18D90 (480 bytes) */
u8 dSCExplainGraphics_JPText16_gap[480] = {
	#include <SCExplainGraphics/JPText16_gap.data.inc.c>
};

/* Sprite: JPText16 */

/* Sprite: JPText16 (162x48 ci8) */

Bitmap dSCExplainGraphics_JPText16_bitmaps[] = {
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex + 0x7E8, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex + 0xFD0, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex + 0x17B8, 12, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_JPText16_tex + 0x1FA0, 4, 0 },
};

Sprite dSCExplainGraphics_JPText16 = {
	0, 0,
	162, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText16_palette,
	0, 1,
	5, 84,
	11, 12,
	2, 1,
	(Bitmap*)dSCExplainGraphics_JPText16_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText17 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText17 (174(176)x52 ci8, 5 tiles) */
u8 dSCExplainGraphics_JPText17_tex[9192] = {
    #include <SCExplainGraphics/JPText17.ci8.inc.c>
};

/* Palette: @ 0x1B220 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText17_palette[16] = {
	#include <SCExplainGraphics/JPText17.palette.inc.c>
};

/* Raw data from file offset 0x1B240 to 0x1B420 (480 bytes) */
u8 dSCExplainGraphics_JPText17_gap[480] = {
	#include <SCExplainGraphics/JPText17_gap.data.inc.c>
};

/* Sprite: JPText17 */

/* Sprite: JPText17 (174x48 ci8) */

Bitmap dSCExplainGraphics_JPText17_bitmaps[] = {
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex + 0x798, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex + 0xF30, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex + 0x16C8, 11, 0 },
	{ 174, 176, 0, 0, dSCExplainGraphics_JPText17_tex + 0x1E60, 8, 0 },
};

Sprite dSCExplainGraphics_JPText17 = {
	0, 0,
	174, 48,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText17_palette,
	0, 1,
	5, 84,
	10, 11,
	2, 1,
	(Bitmap*)dSCExplainGraphics_JPText17_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText18 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText18 (198(208)x14 ci4) */
u8 dSCExplainGraphics_JPText18_tex[1464] = {
    #include <SCExplainGraphics/JPText18.ci4.inc.c>
};

/* Palette: @ 0x1BA80 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText18_palette[16] = {
	#include <SCExplainGraphics/JPText18.palette.inc.c>
};

/* Sprite: JPText18 */

/* Sprite: JPText18 (198x14 ci4) */

Bitmap dSCExplainGraphics_JPText18_bitmaps[] = {
	{ 198, 208, 0, 0, dSCExplainGraphics_JPText18_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText18 = {
	0, 0,
	198, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText18_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText18_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText19 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText19 (134(144)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText19_tex[2392] = {
    #include <SCExplainGraphics/JPText19.ci4.inc.c>
};

/* Palette: @ 0x1C460 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText19_palette[16] = {
	#include <SCExplainGraphics/JPText19.palette.inc.c>
};

/* Sprite: JPText19 */

/* Sprite: JPText19 (134x32 ci4) */

Bitmap dSCExplainGraphics_JPText19_bitmaps[] = {
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText19_tex, 28, 0 },
	{ 134, 144, 0, 0, dSCExplainGraphics_JPText19_tex + 0x7E8, 5, 0 },
};

Sprite dSCExplainGraphics_JPText19 = {
	0, 0,
	134, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText19_palette,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText19_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText20 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText20 (148(160)x14 ci4) */
u8 dSCExplainGraphics_JPText20_tex[1128] = {
    #include <SCExplainGraphics/JPText20.ci4.inc.c>
};

/* Palette: @ 0x1C960 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText20_palette[16] = {
	#include <SCExplainGraphics/JPText20.palette.inc.c>
};

/* Sprite: JPText20 */

/* Sprite: JPText20 (148x14 ci4) */

Bitmap dSCExplainGraphics_JPText20_bitmaps[] = {
	{ 148, 160, 0, 0, dSCExplainGraphics_JPText20_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText20 = {
	0, 0,
	148, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText20_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText20_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText21 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText21 (122(128)x14 ci4) */
u8 dSCExplainGraphics_JPText21_tex[904] = {
    #include <SCExplainGraphics/JPText21.ci4.inc.c>
};

/* Palette: @ 0x1CD70 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText21_palette[16] = {
	#include <SCExplainGraphics/JPText21.palette.inc.c>
};

/* Sprite: JPText21 */

/* Sprite: JPText21 (122x14 ci4) */

Bitmap dSCExplainGraphics_JPText21_bitmaps[] = {
	{ 122, 128, 0, 0, dSCExplainGraphics_JPText21_tex, 14, 0 },
};

Sprite dSCExplainGraphics_JPText21 = {
	0, 0,
	122, 14,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText21_palette,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText21_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite JPText22 */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: JPText22 (162(176)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_JPText22_tex[2920] = {
    #include <SCExplainGraphics/JPText22.ci4.inc.c>
};

/* Palette: @ 0x1D960 (16 colors RGBA5551) */
u16 dSCExplainGraphics_JPText22_palette[16] = {
	#include <SCExplainGraphics/JPText22.palette.inc.c>
};

/* Sprite: JPText22 */

/* Sprite: JPText22 (162x32 ci4) */

Bitmap dSCExplainGraphics_JPText22_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_JPText22_tex, 23, 0 },
	{ 162, 176, 0, 0, dSCExplainGraphics_JPText22_tex + 0x7F0, 10, 0 },
};

Sprite dSCExplainGraphics_JPText22 = {
	0, 0,
	162, 32,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_OVERLAP,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_JPText22_palette,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_JPText22_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite AButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: AButton (24x39 ci8) */
u8 dSCExplainGraphics_AButton_tex[944] = {
    #include <SCExplainGraphics/AButton.ci8.inc.c>
};

/* Palette: @ 0x1DDA8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_AButton_palette[16] = {
	#include <SCExplainGraphics/AButton.palette.inc.c>
};

/* Raw data from file offset 0x1DDC8 to 0x1DFA8 (480 bytes) */
u8 dSCExplainGraphics_AButton_gap[480] = {
	#include <SCExplainGraphics/AButton_gap.data.inc.c>
};

/* Sprite: AButton */

/* Sprite: AButton (24x39 ci8) */

Bitmap dSCExplainGraphics_AButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_AButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_AButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_AButton_palette,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_AButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite BButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BButton (24x39 ci8) */
u8 dSCExplainGraphics_BButton_tex[944] = {
    #include <SCExplainGraphics/BButton.ci8.inc.c>
};

/* Palette: @ 0x1E3B8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_BButton_palette[16] = {
	#include <SCExplainGraphics/BButton.palette.inc.c>
};

/* Raw data from file offset 0x1E3D8 to 0x1E5B8 (480 bytes) */
u8 dSCExplainGraphics_BButton_gap[480] = {
	#include <SCExplainGraphics/BButton_gap.data.inc.c>
};

/* Sprite: BButton */

/* Sprite: BButton (24x39 ci8) */

Bitmap dSCExplainGraphics_BButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_BButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_BButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_BButton_palette,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite ZButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ZButton (24x39 ci8) */
u8 dSCExplainGraphics_ZButton_tex[944] = {
    #include <SCExplainGraphics/ZButton.ci8.inc.c>
};

/* Palette: @ 0x1E9C8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_ZButton_palette[16] = {
	#include <SCExplainGraphics/ZButton.palette.inc.c>
};

/* Raw data from file offset 0x1E9E8 to 0x1EBC8 (480 bytes) */
u8 dSCExplainGraphics_ZButton_gap[480] = {
	#include <SCExplainGraphics/ZButton_gap.data.inc.c>
};

/* Sprite: ZButton */

/* Sprite: ZButton (24x39 ci8) */

Bitmap dSCExplainGraphics_ZButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_ZButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_ZButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_ZButton_palette,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_ZButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite PlusSymbol */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PlusSymbol (8(16)x7 ci4) */
u8 dSCExplainGraphics_PlusSymbol_tex[64] = {
    #include <SCExplainGraphics/PlusSymbol.ci4.inc.c>
};

/* Palette: @ 0x1EC68 (16 colors RGBA5551) */
u16 dSCExplainGraphics_PlusSymbol_palette[16] = {
	#include <SCExplainGraphics/PlusSymbol.palette.inc.c>
};

/* Sprite: PlusSymbol */

/* Sprite: PlusSymbol (8x7 ci4) */

Bitmap dSCExplainGraphics_PlusSymbol_bitmaps[] = {
	{ 8, 16, 0, 0, dSCExplainGraphics_PlusSymbol_tex, 7, 0 },
};

Sprite dSCExplainGraphics_PlusSymbol = {
	0, 0,
	8, 7,
	1.0f, 1.0f,
	0, 0,
	SP_TEXSHUF | SP_FASTCOPY,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_PlusSymbol_palette,
	0, 1,
	1, 36,
	7, 7,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PlusSymbol_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#else /* US */

/* Sprite: Damage1 */

Gfx dSCExplainGraphics_Damage1_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage1 (200(208)x32 i4) */
u8 dSCExplainGraphics_Damage1_tex[3328] = {
    #include <SCExplainGraphics/Damage1.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage1_bitmaps[] = {
	{ 200, 208, 0, 0, dSCExplainGraphics_Damage1_tex, 32, 0 },
};

/* Sprite: Damage1 (200x32 i4) */
Sprite dSCExplainGraphics_Damage1 = {
	0, 0,
	200, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Damage2 */

Gfx dSCExplainGraphics_Damage2_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage2 (102(112)x28 i4) */
u8 dSCExplainGraphics_Damage2_tex[1568] = {
    #include <SCExplainGraphics/Damage2.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage2_bitmaps[] = {
	{ 102, 112, 0, 0, dSCExplainGraphics_Damage2_tex, 28, 0 },
};

/* Sprite: Damage2 (102x28 i4) */
Sprite dSCExplainGraphics_Damage2 = {
	0, 0,
	102, 28,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	28, 28,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Damage3 */

Gfx dSCExplainGraphics_Damage3_dl[] = { gsSPEndDisplayList() };

/* Texture: Damage3 (144x32 i4) */
u8 dSCExplainGraphics_Damage3_tex[2304] = {
    #include <SCExplainGraphics/Damage3.i4.inc.c>
};

Bitmap dSCExplainGraphics_Damage3_bitmaps[] = {
	{ 144, 144, 0, 0, dSCExplainGraphics_Damage3_tex, 32, 0 },
};

/* Sprite: Damage3 (144x32 i4) */
Sprite dSCExplainGraphics_Damage3 = {
	0, 0,
	144, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Damage3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: Shield */

Gfx dSCExplainGraphics_Shield_dl[] = { gsSPEndDisplayList() };

/* Texture: Shield (164(176)x16 i4) */
u8 dSCExplainGraphics_Shield_tex[1408] = {
    #include <SCExplainGraphics/Shield.i4.inc.c>
};

Bitmap dSCExplainGraphics_Shield_bitmaps[] = {
	{ 164, 176, 0, 0, dSCExplainGraphics_Shield_tex, 16, 0 },
};

/* Sprite: Shield (164x16 i4) */
Sprite dSCExplainGraphics_Shield = {
	0, 0,
	164, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	4, 0,
	(Bitmap*)dSCExplainGraphics_Shield_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: StartFighting */

Gfx dSCExplainGraphics_StartFighting_dl[] = { gsSPEndDisplayList() };

/* Texture: StartFighting (154(160)x32 i4) */
u8 dSCExplainGraphics_StartFighting_tex[2560] = {
    #include <SCExplainGraphics/StartFighting.i4.inc.c>
};

Bitmap dSCExplainGraphics_StartFighting_bitmaps[] = {
	{ 154, 160, 0, 0, dSCExplainGraphics_StartFighting_tex, 32, 0 },
};

/* Sprite: StartFighting (154x32 i4) */
Sprite dSCExplainGraphics_StartFighting = {
	0, 0,
	154, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	32, 32,
	4, 0,
	(Bitmap*)dSCExplainGraphics_StartFighting_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: PlayerCount */

Gfx dSCExplainGraphics_PlayerCount_dl[] = { gsSPEndDisplayList() };

/* Texture: PlayerCount (170(176)x14 i4) */
u8 dSCExplainGraphics_PlayerCount_tex[1232] = {
    #include <SCExplainGraphics/PlayerCount.i4.inc.c>
};

Bitmap dSCExplainGraphics_PlayerCount_bitmaps[] = {
	{ 170, 176, 0, 0, dSCExplainGraphics_PlayerCount_tex, 14, 0 },
};

/* Sprite: PlayerCount (170x14 i4) */
Sprite dSCExplainGraphics_PlayerCount = {
	0, 0,
	170, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dSCExplainGraphics_PlayerCount_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: HereText */

Gfx dSCExplainGraphics_HereText_dl[] = { gsSPEndDisplayList() };

/* Texture: HereText (42(44)x12 rgba16) */
u8 dSCExplainGraphics_HereText_tex[1056] = {
    #include <SCExplainGraphics/HereText.rgba16.inc.c>
};

Bitmap dSCExplainGraphics_HereText_bitmaps[] = {
	{ 42, 44, 0, 0, dSCExplainGraphics_HereText_tex, 12, 0 },
};

/* Sprite: HereText (42x12 rgba16) */
Sprite dSCExplainGraphics_HereText = {
	0, 0,
	42, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	0, 2,
	(Bitmap*)dSCExplainGraphics_HereText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite Banner */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Banner (300(304)x88 ci8, 15 tiles) */
u8 dSCExplainGraphics_Banner_tex[26872] = {
    #include <SCExplainGraphics/Banner.ci8.inc.c>
};

/* Palette: @ 0xFF70 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0xFF70[16] = {
	#include <SCExplainGraphics/palette_0xFF70.palette.inc.c>
};

/* Raw data from file offset 0xFF90 to 0x10170 (480 bytes) */
u8 dSCExplainGraphics_gap_0xFF90[480] = {
	#include <SCExplainGraphics/gap_0xFF90.data.inc.c>
};

/* Sprite: Banner */

/* Sprite: Banner (300x74 ci8) */

Bitmap dSCExplainGraphics_Banner_bitmaps[] = {
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x728, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0xE50, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x1578, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x1CA0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x23C8, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x2AF0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x3218, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x3940, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x4068, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x4790, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x4EB8, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x55E0, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x5D08, 6, 0 },
	{ 300, 304, 0, 0, dSCExplainGraphics_Banner_tex + 0x6430, 4, 0 },
};

Sprite dSCExplainGraphics_Banner = {
	0, 0,
	300, 74,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0xFF70,
	0, 1,
	15, 204,
	5, 6,
	2, 1,
	(Bitmap*)dSCExplainGraphics_Banner_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite TapTheStick */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: TapTheStick (264(272)x53 ci4, 4 tiles) */
u8 dSCExplainGraphics_TapTheStick_tex[7240] = {
    #include <SCExplainGraphics/TapTheStick.ci4.inc.c>
};

/* Palette: @ 0x11F00 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x11F00[16] = {
	#include <SCExplainGraphics/palette_0x11F00.palette.inc.c>
};

/* Sprite: TapTheStick */

/* Sprite: TapTheStick (264x50 ci4) */

Bitmap dSCExplainGraphics_TapTheStick_bitmaps[] = {
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex + 0x778, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex + 0xEF0, 14, 0 },
	{ 264, 272, 0, 0, dSCExplainGraphics_TapTheStick_tex + 0x1668, 11, 0 },
};

Sprite dSCExplainGraphics_TapTheStick = {
	0, 0,
	264, 50,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x11F00,
	0, 1,
	4, 72,
	13, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_TapTheStick_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite Jump */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Jump (170(176)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_Jump_tex[2920] = {
    #include <SCExplainGraphics/Jump.ci4.inc.c>
};

/* Palette: @ 0x12B20 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x12B20[16] = {
	#include <SCExplainGraphics/palette_0x12B20.palette.inc.c>
};

/* Sprite: Jump */

/* Sprite: Jump (170x32 ci4) */

Bitmap dSCExplainGraphics_Jump_bitmaps[] = {
	{ 170, 176, 0, 0, dSCExplainGraphics_Jump_tex, 23, 0 },
	{ 170, 176, 0, 0, dSCExplainGraphics_Jump_tex + 0x7F0, 10, 0 },
};

Sprite dSCExplainGraphics_Jump = {
	0, 0,
	170, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x12B20,
	0, 1,
	2, 48,
	22, 23,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Jump_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite MidairJump */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: MidairJump (156(160)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_MidairJump_tex[2656] = {
    #include <SCExplainGraphics/MidairJump.ci4.inc.c>
};

/* Palette: @ 0x13618 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x13618[16] = {
	#include <SCExplainGraphics/palette_0x13618.palette.inc.c>
};

/* Sprite: MidairJump */

/* Sprite: MidairJump (156x32 ci4) */

Bitmap dSCExplainGraphics_MidairJump_bitmaps[] = {
	{ 156, 160, 0, 0, dSCExplainGraphics_MidairJump_tex, 25, 0 },
	{ 156, 160, 0, 0, dSCExplainGraphics_MidairJump_tex + 0x7D8, 8, 0 },
};

Sprite dSCExplainGraphics_MidairJump = {
	0, 0,
	156, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x13618,
	0, 1,
	2, 48,
	24, 25,
	2, 0,
	(Bitmap*)dSCExplainGraphics_MidairJump_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite Attack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Attack (100(112)x14 ci4) */
u8 dSCExplainGraphics_Attack_tex[792] = {
    #include <SCExplainGraphics/Attack.ci4.inc.c>
};

/* Palette: @ 0x139C0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x139C0[16] = {
	#include <SCExplainGraphics/palette_0x139C0.palette.inc.c>
};

/* Sprite: Attack */

/* Sprite: Attack (100x14 ci4) */

Bitmap dSCExplainGraphics_Attack_bitmaps[] = {
	{ 100, 112, 0, 0, dSCExplainGraphics_Attack_tex, 14, 0 },
};

Sprite dSCExplainGraphics_Attack = {
	0, 0,
	100, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x139C0,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Attack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite PowerAttack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PowerAttack (160x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_PowerAttack_tex[2496] = {
    #include <SCExplainGraphics/PowerAttack.ci4.inc.c>
};

/* Palette: @ 0x14408 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x14408[16] = {
	#include <SCExplainGraphics/palette_0x14408.palette.inc.c>
};

/* Sprite: PowerAttack */

/* Sprite: PowerAttack (160x30 ci4) */

Bitmap dSCExplainGraphics_PowerAttack_bitmaps[] = {
	{ 160, 160, 0, 0, dSCExplainGraphics_PowerAttack_tex, 24, 0 },
	{ 160, 160, 0, 0, dSCExplainGraphics_PowerAttack_tex + 0x788, 7, 0 },
};

Sprite dSCExplainGraphics_PowerAttack = {
	0, 0,
	160, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x14408,
	0, 1,
	2, 48,
	23, 24,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PowerAttack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite SmashAttack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: SmashAttack (132(144)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_SmashAttack_tex[2392] = {
    #include <SCExplainGraphics/SmashAttack.ci4.inc.c>
};

/* Palette: @ 0x14DF0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x14DF0[16] = {
	#include <SCExplainGraphics/palette_0x14DF0.palette.inc.c>
};

/* Sprite: SmashAttack */

/* Sprite: SmashAttack (132x32 ci4) */

Bitmap dSCExplainGraphics_SmashAttack_bitmaps[] = {
	{ 132, 144, 0, 0, dSCExplainGraphics_SmashAttack_tex, 28, 0 },
	{ 132, 144, 0, 0, dSCExplainGraphics_SmashAttack_tex + 0x7E8, 5, 0 },
};

Sprite dSCExplainGraphics_SmashAttack = {
	0, 0,
	132, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x14DF0,
	0, 1,
	2, 48,
	27, 28,
	2, 0,
	(Bitmap*)dSCExplainGraphics_SmashAttack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite KnockThemOff */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: KnockThemOff (200(208)x33 ci4, 2 tiles) */
u8 dSCExplainGraphics_KnockThemOff_tex[3448] = {
    #include <SCExplainGraphics/KnockThemOff.ci4.inc.c>
};

/* Palette: @ 0x15C00 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x15C00[16] = {
	#include <SCExplainGraphics/palette_0x15C00.palette.inc.c>
};

/* Sprite: KnockThemOff */

/* Sprite: KnockThemOff (200x32 ci4) */

Bitmap dSCExplainGraphics_KnockThemOff_bitmaps[] = {
	{ 200, 208, 0, 0, dSCExplainGraphics_KnockThemOff_tex, 19, 0 },
	{ 200, 208, 0, 0, dSCExplainGraphics_KnockThemOff_tex + 0x7C0, 14, 0 },
};

Sprite dSCExplainGraphics_KnockThemOff = {
	0, 0,
	200, 32,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x15C00,
	0, 1,
	2, 48,
	18, 19,
	2, 0,
	(Bitmap*)dSCExplainGraphics_KnockThemOff_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite BUpGetBack */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BUpGetBack (162(168)x50 ci8, 5 tiles) */
u8 dSCExplainGraphics_BUpGetBack_tex[8440] = {
    #include <SCExplainGraphics/BUpGetBack.ci8.inc.c>
};

/* Palette: @ 0x17D90 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x17D90[16] = {
	#include <SCExplainGraphics/palette_0x17D90.palette.inc.c>
};

/* Raw data from file offset 0x17DB0 to 0x17F90 (480 bytes) */
u8 dSCExplainGraphics_gap_0x17DB0[480] = {
	#include <SCExplainGraphics/gap_0x17DB0.data.inc.c>
};

/* Sprite: BUpGetBack */

/* Sprite: BUpGetBack (162x46 ci8) */

Bitmap dSCExplainGraphics_BUpGetBack_bitmaps[] = {
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0x740, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0xE80, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0x15C0, 11, 0 },
	{ 162, 168, 0, 0, dSCExplainGraphics_BUpGetBack_tex + 0x1D00, 6, 0 },
};

Sprite dSCExplainGraphics_BUpGetBack = {
	0, 0,
	162, 46,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x17D90,
	0, 1,
	5, 84,
	10, 11,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BUpGetBack_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite SpecialMoves */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: SpecialMoves (168x51 ci8, 6 tiles) */
u8 dSCExplainGraphics_SpecialMoves_tex[8616] = {
    #include <SCExplainGraphics/SpecialMoves.ci8.inc.c>
};

/* Palette: @ 0x1A1E0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1A1E0[16] = {
	#include <SCExplainGraphics/palette_0x1A1E0.palette.inc.c>
};

/* Raw data from file offset 0x1A200 to 0x1A3E0 (480 bytes) */
u8 dSCExplainGraphics_gap_0x1A200[480] = {
	#include <SCExplainGraphics/gap_0x1A200.data.inc.c>
};

/* Sprite: SpecialMoves */

/* Sprite: SpecialMoves (168x46 ci8) */

Bitmap dSCExplainGraphics_SpecialMoves_bitmaps[] = {
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x5F0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0xBE0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x11D0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x17C0, 9, 0 },
	{ 168, 168, 0, 0, dSCExplainGraphics_SpecialMoves_tex + 0x1DB0, 6, 0 },
};

Sprite dSCExplainGraphics_SpecialMoves = {
	0, 0,
	168, 46,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1A1E0,
	0, 1,
	6, 96,
	8, 9,
	2, 1,
	(Bitmap*)dSCExplainGraphics_SpecialMoves_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite Dodge */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: Dodge (182(192)x14 ci4) */
u8 dSCExplainGraphics_Dodge_tex[1352] = {
    #include <SCExplainGraphics/Dodge.ci4.inc.c>
};

/* Palette: @ 0x1A9E0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1A9E0[16] = {
	#include <SCExplainGraphics/palette_0x1A9E0.palette.inc.c>
};

/* Sprite: Dodge */

/* Sprite: Dodge (182x14 ci4) */

Bitmap dSCExplainGraphics_Dodge_bitmaps[] = {
	{ 182, 192, 0, 0, dSCExplainGraphics_Dodge_tex, 14, 0 },
};

Sprite dSCExplainGraphics_Dodge = {
	0, 0,
	182, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1A9E0,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_Dodge_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite ThrowEnemy */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ThrowEnemy (146(160)x31 ci4, 2 tiles) */
u8 dSCExplainGraphics_ThrowEnemy_tex[2496] = {
    #include <SCExplainGraphics/ThrowEnemy.ci4.inc.c>
};

/* Palette: @ 0x1B428 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1B428[16] = {
	#include <SCExplainGraphics/palette_0x1B428.palette.inc.c>
};

/* Sprite: ThrowEnemy */

/* Sprite: ThrowEnemy (146x30 ci4) */

Bitmap dSCExplainGraphics_ThrowEnemy_bitmaps[] = {
	{ 146, 160, 0, 0, dSCExplainGraphics_ThrowEnemy_tex, 24, 0 },
	{ 146, 160, 0, 0, dSCExplainGraphics_ThrowEnemy_tex + 0x788, 7, 0 },
};

Sprite dSCExplainGraphics_ThrowEnemy = {
	0, 0,
	146, 30,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1B428,
	0, 1,
	2, 48,
	23, 24,
	2, 0,
	(Bitmap*)dSCExplainGraphics_ThrowEnemy_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite GrabItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: GrabItems (148(160)x14 ci4) */
u8 dSCExplainGraphics_GrabItems_tex[1128] = {
    #include <SCExplainGraphics/GrabItems.ci4.inc.c>
};

/* Palette: @ 0x1B920 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1B920[16] = {
	#include <SCExplainGraphics/palette_0x1B920.palette.inc.c>
};

/* Sprite: GrabItems */

/* Sprite: GrabItems (148x14 ci4) */

Bitmap dSCExplainGraphics_GrabItems_bitmaps[] = {
	{ 148, 160, 0, 0, dSCExplainGraphics_GrabItems_tex, 14, 0 },
};

Sprite dSCExplainGraphics_GrabItems = {
	0, 0,
	148, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1B920,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_GrabItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite UseItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: UseItems (162(176)x14 ci4) */
u8 dSCExplainGraphics_UseItems_tex[1240] = {
    #include <SCExplainGraphics/UseItems.ci4.inc.c>
};

/* Palette: @ 0x1BE80 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1BE80[16] = {
	#include <SCExplainGraphics/palette_0x1BE80.palette.inc.c>
};

/* Sprite: UseItems */

/* Sprite: UseItems (162x14 ci4) */

Bitmap dSCExplainGraphics_UseItems_bitmaps[] = {
	{ 162, 176, 0, 0, dSCExplainGraphics_UseItems_tex, 14, 0 },
};

Sprite dSCExplainGraphics_UseItems = {
	0, 0,
	162, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1BE80,
	0, 1,
	1, 36,
	14, 14,
	2, 0,
	(Bitmap*)dSCExplainGraphics_UseItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite ThrowItems */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ThrowItems (130(144)x49 ci4, 2 tiles) */
u8 dSCExplainGraphics_ThrowItems_tex[3544] = {
    #include <SCExplainGraphics/ThrowItems.ci4.inc.c>
};

/* Palette: @ 0x1CCE0 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1CCE0[16] = {
	#include <SCExplainGraphics/palette_0x1CCE0.palette.inc.c>
};

/* Sprite: ThrowItems */

/* Sprite: ThrowItems (130x48 ci4) */

Bitmap dSCExplainGraphics_ThrowItems_bitmaps[] = {
	{ 130, 144, 0, 0, dSCExplainGraphics_ThrowItems_tex, 27, 0 },
	{ 130, 144, 0, 0, dSCExplainGraphics_ThrowItems_tex + 0x7A0, 22, 0 },
};

Sprite dSCExplainGraphics_ThrowItems = {
	0, 0,
	130, 48,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1CCE0,
	0, 1,
	2, 48,
	26, 27,
	2, 0,
	(Bitmap*)dSCExplainGraphics_ThrowItems_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(20);

/* Texture data for sprite AButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: AButton (24x39 ci8) */
u8 dSCExplainGraphics_AButton_tex[944] = {
    #include <SCExplainGraphics/AButton.ci8.inc.c>
};

/* Palette: @ 0x1D128 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1D128[16] = {
	#include <SCExplainGraphics/palette_0x1D128.palette.inc.c>
};

/* Raw data from file offset 0x1D148 to 0x1D328 (480 bytes) */
u8 dSCExplainGraphics_gap_0x1D148[480] = {
	#include <SCExplainGraphics/gap_0x1D148.data.inc.c>
};

/* Sprite: AButton */

/* Sprite: AButton (24x39 ci8) */

Bitmap dSCExplainGraphics_AButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_AButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_AButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1D128,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_AButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite BButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: BButton (24x39 ci8) */
u8 dSCExplainGraphics_BButton_tex[944] = {
    #include <SCExplainGraphics/BButton.ci8.inc.c>
};

/* Palette: @ 0x1D738 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1D738[16] = {
	#include <SCExplainGraphics/palette_0x1D738.palette.inc.c>
};

/* Raw data from file offset 0x1D758 to 0x1D938 (480 bytes) */
u8 dSCExplainGraphics_gap_0x1D758[480] = {
	#include <SCExplainGraphics/gap_0x1D758.data.inc.c>
};

/* Sprite: BButton */

/* Sprite: BButton (24x39 ci8) */

Bitmap dSCExplainGraphics_BButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_BButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_BButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1D738,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_BButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite ZButton */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: ZButton (24x39 ci8) */
u8 dSCExplainGraphics_ZButton_tex[944] = {
    #include <SCExplainGraphics/ZButton.ci8.inc.c>
};

/* Palette: @ 0x1DD48 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1DD48[16] = {
	#include <SCExplainGraphics/palette_0x1DD48.palette.inc.c>
};

/* Raw data from file offset 0x1DD68 to 0x1DF48 (480 bytes) */
u8 dSCExplainGraphics_gap_0x1DD68[480] = {
	#include <SCExplainGraphics/gap_0x1DD68.data.inc.c>
};

/* Sprite: ZButton */

/* Sprite: ZButton (24x39 ci8) */

Bitmap dSCExplainGraphics_ZButton_bitmaps[] = {
	{ 24, 24, 0, 0, dSCExplainGraphics_ZButton_tex, 39, 0 },
};

Sprite dSCExplainGraphics_ZButton = {
	0, 0,
	24, 39,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1DD48,
	0, 1,
	1, 36,
	39, 39,
	2, 1,
	(Bitmap*)dSCExplainGraphics_ZButton_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Texture data for sprite PlusSymbol */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: PlusSymbol (8(16)x7 ci4) */
u8 dSCExplainGraphics_PlusSymbol_tex[64] = {
    #include <SCExplainGraphics/PlusSymbol.ci4.inc.c>
};

/* Palette: @ 0x1DFE8 (16 colors RGBA5551) */
u16 dSCExplainGraphics_palette_0x1DFE8[16] = {
	#include <SCExplainGraphics/palette_0x1DFE8.palette.inc.c>
};

/* Sprite: PlusSymbol */

/* Sprite: PlusSymbol (8x7 ci4) */

Bitmap dSCExplainGraphics_PlusSymbol_bitmaps[] = {
	{ 8, 16, 0, 0, dSCExplainGraphics_PlusSymbol_tex, 7, 0 },
};

Sprite dSCExplainGraphics_PlusSymbol = {
	0, 0,
	8, 7,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dSCExplainGraphics_palette_0x1DFE8,
	0, 1,
	1, 36,
	7, 7,
	2, 0,
	(Bitmap*)dSCExplainGraphics_PlusSymbol_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

#endif
