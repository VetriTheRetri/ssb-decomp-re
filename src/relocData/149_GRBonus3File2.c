/* relocData file 149: GRBonus3File2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dGRBonus3File2_DL_0x2EF0[];
extern Gfx dGRBonus3File2_DL_0x5F80[];
extern Gfx dGRBonus3File2_DL_0x5430[];
extern u8 dGRBonus3File2_Tex_0x0030[];
extern u16 dGRBonus3File2_palette_0x00E0[];
extern u16 dGRBonus3File2_palette_0x0190[];
extern u16 dGRBonus3File2_palette_0x0240[];
extern u16 dGRBonus3File2_palette_0x02F0[];
extern u8 dGRBonus3File2_Tex_0x0398[];
extern u8 dGRBonus3File2_Tex_0x0430[];
extern u8 dGRBonus3File2_Tex_0x04B8[];
extern u16 dGRBonus3File2_palette_0x06E0[];
extern u8 dGRBonus3File2_Tex_0x0790[];
extern u8 dGRBonus3File2_Tex_0x07E0[];
extern u8 dGRBonus3File2_Tex_0x0A10[];
extern u8 dGRBonus3File2_Tex_0x0E38[];
extern u8 dGRBonus3File2_Tex_0x1640[];
extern u8 dGRBonus3File2_Tex_0x1E68[];
extern u8 dGRBonus3File2_Tex_0x2298[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x168[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x1E48[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x218[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x2270[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2A98[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2B58[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2B98[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2BB8[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2C18[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2C38[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2C78[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x2C8[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2C98[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2CF8[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2D78[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2DF8[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2E38[];
extern Vtx dGRBonus3File2_gap_0x0000_sub_0x2E78[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x378[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x420[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x6C0[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x768[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x7B8[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x8[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0x9E8[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0xB8[];
extern u16 dGRBonus3File2_gap_0x0000_sub_0xE18[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1078[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1278[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1338[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x138[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1438[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1478[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x14B8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x14F8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x16D8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x178[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x18D8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1AB8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1BB8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1BF8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1C38[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1C78[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x1F8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x358[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x458[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x4D8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x5D8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x618[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x658[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x6D8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x848[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x948[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0x988[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0xA48[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0xBC8[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0xC98[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0xE98[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0xF58[];
extern Vtx dGRBonus3File2_gap_0x3718_sub_0xFD8[];
extern u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6600[];
extern u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x67F0[];
extern u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6828[];
extern u32* dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6878[];
extern AObjEvent32 *dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x687C[];


/* Raw data from file offset 0x0000 to 0x3490 (13456 bytes) */
PAD(8);

/* gap sub-block @ 0x0008 (was gap+0x8, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x8[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0030 (was gap+0x30, 136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dGRBonus3File2_gap_0x0000_sub_0x8 */
u8 dGRBonus3File2_Tex_0x0030[136] = {
	#include <GRBonus3File2/Tex_0x0030.tex.inc.c>
};

/* gap sub-block @ 0x00B8 (was gap+0xB8, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0xB8[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0xB8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x00E0 (was gap+0xE0, 136 bytes) */
u16 dGRBonus3File2_palette_0x00E0[64] = {
	#include <GRBonus3File2/palette_0x00E0.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0168 (was gap+0x168, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x168[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x168.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0190 (was gap+0x190, 136 bytes) */
u16 dGRBonus3File2_palette_0x0190[64] = {
	#include <GRBonus3File2/palette_0x0190.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0218 (was gap+0x218, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x218[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x218.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0240 (was gap+0x240, 136 bytes) */
u16 dGRBonus3File2_palette_0x0240[64] = {
	#include <GRBonus3File2/palette_0x0240.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x02C8 (was gap+0x2C8, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x2C8[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2C8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x02F0 (was gap+0x2F0, 136 bytes) */
u16 dGRBonus3File2_palette_0x02F0[64] = {
	#include <GRBonus3File2/palette_0x02F0.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0378 (was gap+0x378, 32 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x378[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x378.palette.inc.c>
};

/* gap sub-block @ 0x0398 (was gap+0x398, 136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dGRBonus3File2_gap_0x0000_sub_0x378 */
u8 dGRBonus3File2_Tex_0x0398[136] = {
	#include <GRBonus3File2/Tex_0x0398.tex.inc.c>
};

/* gap sub-block @ 0x0420 (was gap+0x420, 16 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x420[8] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x420.palette.inc.c>
};

/* gap sub-block @ 0x0430 (was gap+0x430, 136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dGRBonus3File2_gap_0x0000_sub_0x420 */
u8 dGRBonus3File2_Tex_0x0430[136] = {
	#include <GRBonus3File2/Tex_0x0430.tex.inc.c>
};

/* gap sub-block @ 0x04B8 (was gap+0x4B8, 520 bytes) */
/* @tex fmt=I8 dim=16x32 */
u8 dGRBonus3File2_Tex_0x04B8[520] = {
	#include <GRBonus3File2/Tex_0x04B8.tex.inc.c>
};

/* gap sub-block @ 0x06C0 (was gap+0x6C0, 32 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x6C0[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x6C0.palette.inc.c>
};

/* gap sub-block @ 0x06E0 (was gap+0x6E0, 136 bytes) */
u16 dGRBonus3File2_palette_0x06E0[64] = {
	#include <GRBonus3File2/palette_0x06E0.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0768 (was gap+0x768, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x768[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x768.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0790 (was gap+0x790, 40 bytes) */
/* @tex fmt=CI4 dim=16x4 lut=dGRBonus3File2_gap_0x0000_sub_0x768 */
u8 dGRBonus3File2_Tex_0x0790[40] = {
	#include <GRBonus3File2/Tex_0x0790.tex.inc.c>
};

/* gap sub-block @ 0x07B8 (was gap+0x7B8, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x7B8[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x7B8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x07E0 (was gap+0x7E0, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dGRBonus3File2_gap_0x0000_sub_0x7B8 */
u8 dGRBonus3File2_Tex_0x07E0[520] = {
	#include <GRBonus3File2/Tex_0x07E0.tex.inc.c>
};

/* gap sub-block @ 0x09E8 (was gap+0x9E8, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x9E8[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x9E8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0A10 (was gap+0xA10, 1032 bytes) */
/* @tex fmt=CI4 dim=32x64 lut=dGRBonus3File2_gap_0x0000_sub_0x9E8 */
u8 dGRBonus3File2_Tex_0x0A10[1032] = {
	#include <GRBonus3File2/Tex_0x0A10.tex.inc.c>
};

/* gap sub-block @ 0x0E18 (was gap+0xE18, 32 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0xE18[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0xE18.palette.inc.c>
};

/* gap sub-block @ 0x0E38 (was gap+0xE38, 2056 bytes) */
/* @tex fmt=CI4 dim=64x64 lut=dGRBonus3File2_gap_0x0000_sub_0xE18 */
u8 dGRBonus3File2_Tex_0x0E38[2056] = {
	#include <GRBonus3File2/Tex_0x0E38.tex.inc.c>
};

/* gap sub-block @ 0x1640 (was gap+0x1640, 2056 bytes) */
/* @tex fmt=I4 dim=64x64 */
u8 dGRBonus3File2_Tex_0x1640[2056] = {
	#include <GRBonus3File2/Tex_0x1640.tex.inc.c>
};

/* gap sub-block @ 0x1E48 (was gap+0x1E48, 32 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x1E48[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x1E48.palette.inc.c>
};

/* gap sub-block @ 0x1E68 (was gap+0x1E68, 1032 bytes) */
/* @tex fmt=CI4 dim=32x64 lut=dGRBonus3File2_gap_0x0000_sub_0x1E48 */
u8 dGRBonus3File2_Tex_0x1E68[1032] = {
	#include <GRBonus3File2/Tex_0x1E68.tex.inc.c>
};

/* gap sub-block @ 0x2270 (was gap+0x2270, 40 bytes) */
u16 dGRBonus3File2_gap_0x0000_sub_0x2270[16] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2270.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x2298 (was gap+0x2298, 2048 bytes) */
/* @tex fmt=CI4 dim=64x64 lut=dGRBonus3File2_gap_0x0000_sub_0x2270 */
u8 dGRBonus3File2_Tex_0x2298[2048] = {
	#include <GRBonus3File2/Tex_0x2298.tex.inc.c>
};

/* Vtx @ 0x2A98 (12 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2A98[12] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2A98.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x2B58 @ 0x2B58 (4 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2B58[4] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2B58.vtx.inc.c>
};

/* Vtx @ 0x2B98 (2 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2B98[2] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2B98.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x2BB8 @ 0x2BB8 (6 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2BB8[6] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2BB8.vtx.inc.c>
};

/* Vtx @ 0x2C18 (2 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2C18[2] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2C18.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x2C38 @ 0x2C38 (4 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2C38[4] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2C38.vtx.inc.c>
};

/* Vtx @ 0x2C78 (2 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2C78[2] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2C78.vtx.inc.c>
};

/* Vtx: gap_0x0000_sub_0x2C98 @ 0x2C98 (6 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2C98[6] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2C98.vtx.inc.c>
};

/* Vtx @ 0x2CF8 (8 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2CF8[8] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2CF8.vtx.inc.c>
};

/* Vtx @ 0x2D78 (8 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2D78[8] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2D78.vtx.inc.c>
};

/* Vtx @ 0x2DF8 (4 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2DF8[4] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2DF8.vtx.inc.c>
};

/* Vtx @ 0x2E38 (4 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2E38[4] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2E38.vtx.inc.c>
};

/* Vtx @ 0x2E78 (4 vertices) */
Vtx dGRBonus3File2_gap_0x0000_sub_0x2E78[4] = {
	#include <GRBonus3File2/gap_0x0000_sub_0x2E78.vtx.inc.c>
};

/* gap sub-block @ 0x2EB8 (was gap+0x2EB8, 56 bytes) */
Gfx dGRBonus3File2_DL_0x2EB8[7] = {
	#include <GRBonus3File2/DL_0x2EB8.dl.inc.c>
};

/* gap sub-block @ 0x2EF0 (was gap+0x2EF0, 664 bytes) */
Gfx dGRBonus3File2_DL_0x2EF0[83] = {
	#include <GRBonus3File2/DL_0x2EF0.dl.inc.c>
};

/* gap sub-block @ 0x3188 (was gap+0x3188, 144 bytes) */
Gfx dGRBonus3File2_DL_0x3188[18] = {
	#include <GRBonus3File2/DL_0x3188.dl.inc.c>
};

/* gap sub-block @ 0x3218 (was gap+0x3218, 120 bytes) */
Gfx dGRBonus3File2_DL_0x3218[15] = {
	#include <GRBonus3File2/DL_0x3218.dl.inc.c>
};

/* gap sub-block @ 0x3290 (was gap+0x3290, 96 bytes) */
Gfx dGRBonus3File2_DL_0x3290[12] = {
	#include <GRBonus3File2/DL_0x3290.dl.inc.c>
};

/* gap sub-block @ 0x32F0 (was gap+0x32F0, 32 bytes) */
Gfx dGRBonus3File2_DL_0x32F0[4] = {
	#include <GRBonus3File2/DL_0x32F0.dl.inc.c>
};

/* gap sub-block @ 0x3310 (was gap+0x3310, 96 bytes) */
Gfx dGRBonus3File2_DL_0x3310[12] = {
	#include <GRBonus3File2/DL_0x3310.dl.inc.c>
};

/* gap sub-block @ 0x3370 (was gap+0x3370, 32 bytes) */
Gfx dGRBonus3File2_DL_0x3370[4] = {
	#include <GRBonus3File2/DL_0x3370.dl.inc.c>
};

/* gap sub-block @ 0x3390 (was gap+0x3390, 96 bytes) */
Gfx dGRBonus3File2_DL_0x3390[12] = {
	#include <GRBonus3File2/DL_0x3390.dl.inc.c>
};

/* gap sub-block @ 0x33F0 (was gap+0x33F0, 32 bytes) */
Gfx dGRBonus3File2_DL_0x33F0[4] = {
	#include <GRBonus3File2/DL_0x33F0.dl.inc.c>
};

/* gap sub-block @ 0x3410 (was gap+0x3410, 128 bytes) */
Gfx dGRBonus3File2_DL_0x3410[16] = {
	#include <GRBonus3File2/DL_0x3410.dl.inc.c>
};

/* DObjDesc: Layer0DObj @ 0x3490 (12 entries) */
DObjDesc dGRBonus3File2_Layer0DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, -450.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x2EB8, { 0.0f, 0.0f, 450.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3188, { 5850.0f, -6818.33203125f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3218, { -6000.0f, -5754.09130859375f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3290, { -6000.0f, -2841.043701171875f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x32F0, { 6000.0f, -2768.33251953125f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3310, { 6000.0f, 234.09756469726562f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3370, { -6000.0f, 68.69014739990234f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3390, { -6000.0f, 2767.172119140625f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x33F0, { 6000.0f, 3000.0f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DL_0x3410, { 6000.0f, 5700.0f, -300.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Layer1MObj head @ 0x36A0 — 48-byte `void *[12]` MObj-style
 * pointer head with chain-encoded entries at indices 6 (→ chain
 * marker that loops back to the MObjSub at 0x36D0) and 10 (→
 * MObjSub *[4] sub-list). Externs in 295_GRBonus3Map declare
 * this symbol as `MObjSub[]`; that's the legacy "MObjSub head"
 * convention (matches fid 138's `Layer1MObj_data`). */
extern MObjSub *dGRBonus3File2_Layer1MObj_chain[];
extern MObjSub *dGRBonus3File2_Layer1MObj_subs[];

void *dGRBonus3File2_Layer1MObj_MObjSub[12] = {
	NULL, NULL, NULL, NULL, NULL, NULL,
	dGRBonus3File2_Layer1MObj_chain,    /* +0x18 → chain marker → Layer1MObj_real */
	NULL, NULL, NULL,
	dGRBonus3File2_Layer1MObj_subs,     /* +0x28 → MObjSub *[4] sub-list */
	NULL,
};

/* MObjSub @ 0x36D0 — the actual material data (120 bytes); spans
 * what used to be Layer1MObj_MObjSub+0x30..0x77 + the old
 * gap_0x3718 (48-byte tail). */
MObjSub dGRBonus3File2_Layer1MObj_real[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_8b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0x69 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0xFF, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xB3, 0x33, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Raw data from file offset 0x3748 to 0x6120 (10712 bytes) */
/* MObjSub @ 0x3748 */
MObjSub dGRBonus3File2_gap_0x3718_sub_0x30[1] = {
	{
		0x0000,
		G_IM_FMT_I, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0200,
		G_IM_FMT_I, G_IM_SIZ_8b,
		0x0010,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xA3, 0x66 } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0xFF, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xA3, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x37C0 */
MObjSub dGRBonus3File2_gap_0x3718_sub_0xA8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0010, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x3000,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0010,
		0x0010, 0x0010, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00022205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* Chain marker @ 0x3838 — single-entry MObjSub* chain that loops
 * back to Layer1MObj_real (the MObjSub at 0x36D0). The Layer1MObj
 * head's slot at +0x18 chain-points to this marker. */
MObjSub *dGRBonus3File2_Layer1MObj_chain[2] = {
	dGRBonus3File2_Layer1MObj_real,
	NULL,
};

/* MObjSub *[4] sub-list @ 0x3840 — Layer1MObj head's slot at +0x28
 * chain-points here. */
MObjSub *dGRBonus3File2_Layer1MObj_subs[4] = {
	(MObjSub *)dGRBonus3File2_gap_0x3718_sub_0x30,
	(MObjSub *)dGRBonus3File2_gap_0x3718_sub_0xA8,
	NULL,
	NULL,
};

/* gap sub-block @ 0x3850 (was gap+0x138, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x138[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x138.vtx.inc.c>
};

/* gap sub-block @ 0x3890 (was gap+0x178, 128 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x178[8] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x178.vtx.inc.c>
};

/* gap sub-block @ 0x3910 (was gap+0x1F8, 352 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1F8[22] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1F8.vtx.inc.c>
};

/* gap sub-block @ 0x3A70 (was gap+0x358, 256 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x358[16] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x358.vtx.inc.c>
};

/* gap sub-block @ 0x3B70 (was gap+0x458, 128 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x458[8] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x458.vtx.inc.c>
};

/* gap sub-block @ 0x3BF0 (was gap+0x4D8, 256 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x4D8[16] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x4D8.vtx.inc.c>
};

/* gap sub-block @ 0x3CF0 (was gap+0x5D8, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x5D8[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x5D8.vtx.inc.c>
};

/* gap sub-block @ 0x3D30 (was gap+0x618, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x618[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x618.vtx.inc.c>
};

/* gap sub-block @ 0x3D70 (was gap+0x658, 128 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x658[8] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x658.vtx.inc.c>
};

/* gap sub-block @ 0x3DF0 (was gap+0x6D8, 368 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x6D8[23] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x6D8.vtx.inc.c>
};

/* gap sub-block @ 0x3F60 (was gap+0x848, 256 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x848[16] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x848.vtx.inc.c>
};

/* Vtx: gap_0x3718_sub_0x948 @ 0x4060 (4 vertices) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x948[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x948.vtx.inc.c>
};

/* gap sub-block @ 0x40A0 (was gap+0x988, 192 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x988[12] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x988.vtx.inc.c>
};

/* gap sub-block @ 0x4160 (was gap+0xA48, 384 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0xA48[24] = {
	#include <GRBonus3File2/gap_0x3718_sub_0xA48.vtx.inc.c>
};

/* gap sub-block @ 0x42E0 (was gap+0xBC8, 208 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0xBC8[13] = {
	#include <GRBonus3File2/gap_0x3718_sub_0xBC8.vtx.inc.c>
};

/* gap sub-block @ 0x43B0 (was gap+0xC98, 512 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0xC98[32] = {
	#include <GRBonus3File2/gap_0x3718_sub_0xC98.vtx.inc.c>
};

/* gap sub-block @ 0x45B0 (was gap+0xE98, 192 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0xE98[12] = {
	#include <GRBonus3File2/gap_0x3718_sub_0xE98.vtx.inc.c>
};

/* gap sub-block @ 0x4670 (was gap+0xF58, 128 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0xF58[8] = {
	#include <GRBonus3File2/gap_0x3718_sub_0xF58.vtx.inc.c>
};

/* gap sub-block @ 0x46F0 (was gap+0xFD8, 160 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0xFD8[10] = {
	#include <GRBonus3File2/gap_0x3718_sub_0xFD8.vtx.inc.c>
};

/* Vtx: gap_0x3718_sub_0x1078 @ 0x4790 (32 vertices) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1078[32] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1078.vtx.inc.c>
};

/* gap sub-block @ 0x4990 (was gap+0x1278, 192 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1278[12] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1278.vtx.inc.c>
};

/* gap sub-block @ 0x4A50 (was gap+0x1338, 256 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1338[16] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1338.vtx.inc.c>
};

/* gap sub-block @ 0x4B50 (was gap+0x1438, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1438[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1438.vtx.inc.c>
};

/* gap sub-block @ 0x4B90 (was gap+0x1478, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1478[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1478.vtx.inc.c>
};

/* gap sub-block @ 0x4BD0 (was gap+0x14B8, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x14B8[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x14B8.vtx.inc.c>
};

/* gap sub-block @ 0x4C10 (was gap+0x14F8, 480 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x14F8[30] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x14F8.vtx.inc.c>
};

/* Vtx: gap_0x3718_sub_0x16D8 @ 0x4DF0 (32 vertices) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x16D8[32] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x16D8.vtx.inc.c>
};

/* gap sub-block @ 0x4FF0 (was gap+0x18D8, 480 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x18D8[30] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x18D8.vtx.inc.c>
};

/* gap sub-block @ 0x51D0 (was gap+0x1AB8, 256 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1AB8[16] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1AB8.vtx.inc.c>
};

/* gap sub-block @ 0x52D0 (was gap+0x1BB8, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1BB8[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1BB8.vtx.inc.c>
};

/* gap sub-block @ 0x5310 (was gap+0x1BF8, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1BF8[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1BF8.vtx.inc.c>
};

/* gap sub-block @ 0x5350 (was gap+0x1C38, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1C38[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1C38.vtx.inc.c>
};

/* gap sub-block @ 0x5390 (was gap+0x1C78, 64 bytes) */
Vtx dGRBonus3File2_gap_0x3718_sub_0x1C78[4] = {
	#include <GRBonus3File2/gap_0x3718_sub_0x1C78.vtx.inc.c>
};

/* gap sub-block @ 0x53D0 (was gap+0x1CB8, 96 bytes) */
Gfx dGRBonus3File2_DL_0x53D0[12] = {
	#include <GRBonus3File2/DL_0x53D0.dl.inc.c>
};

/* gap sub-block @ 0x5430 (was gap+0x1D18, 384 bytes) */
Gfx dGRBonus3File2_DL_0x5430[48] = {
	#include <GRBonus3File2/DL_0x5430.dl.inc.c>
};

/* gap sub-block @ 0x55B0 (was gap+0x1E98, 272 bytes) */
Gfx dGRBonus3File2_DL_0x55B0[34] = {
	#include <GRBonus3File2/DL_0x55B0.dl.inc.c>
};

/* gap sub-block @ 0x56C0 (was gap+0x1FA8, 352 bytes) */
Gfx dGRBonus3File2_DL_0x56C0[44] = {
	#include <GRBonus3File2/DL_0x56C0.dl.inc.c>
};

/* gap sub-block @ 0x5820 (was gap+0x2108, 512 bytes) */
Gfx dGRBonus3File2_DL_0x5820[64] = {
	#include <GRBonus3File2/DL_0x5820.dl.inc.c>
};

/* gap sub-block @ 0x5A20 (was gap+0x2308, 152 bytes) */
Gfx dGRBonus3File2_DL_0x5A20[19] = {
	#include <GRBonus3File2/DL_0x5A20.dl.inc.c>
};

/* gap sub-block @ 0x5AB8 (was gap+0x23A0, 464 bytes) */
Gfx dGRBonus3File2_DL_0x5AB8[58] = {
	#include <GRBonus3File2/DL_0x5AB8.dl.inc.c>
};

/* gap sub-block @ 0x5C88 (was gap+0x2570, 120 bytes) */
Gfx dGRBonus3File2_DL_0x5C88[15] = {
	#include <GRBonus3File2/DL_0x5C88.dl.inc.c>
};

/* gap sub-block @ 0x5D00 (was gap+0x25E8, 32 bytes) */
Gfx dGRBonus3File2_DL_0x5D00[4] = {
	#include <GRBonus3File2/DL_0x5D00.dl.inc.c>
};

/* gap sub-block @ 0x5D20 (was gap+0x2608, 48 bytes) */
Gfx dGRBonus3File2_DL_0x5D20[6] = {
	#include <GRBonus3File2/DL_0x5D20.dl.inc.c>
};

/* gap sub-block @ 0x5D50 (was gap+0x2638, 448 bytes) */
Gfx dGRBonus3File2_DL_0x5D50[56] = {
	#include <GRBonus3File2/DL_0x5D50.dl.inc.c>
};

/* gap sub-block @ 0x5F10 (was gap+0x27F8, 112 bytes) */
Gfx dGRBonus3File2_DL_0x5F10[14] = {
	#include <GRBonus3File2/DL_0x5F10.dl.inc.c>
};

/* gap sub-block @ 0x5F80 (was gap+0x2868, 64 bytes) */
Gfx dGRBonus3File2_DL_0x5F80[8] = {
	#include <GRBonus3File2/DL_0x5F80.dl.inc.c>
};

/* gap sub-block @ 0x5FC0 (was gap+0x28A8, 64 bytes) */
Gfx dGRBonus3File2_DL_0x5FC0[8] = {
	#include <GRBonus3File2/DL_0x5FC0.dl.inc.c>
};

/* gap sub-block @ 0x6000 (was gap+0x28E8, 32 bytes) */
Gfx dGRBonus3File2_DL_0x6000[4] = {
	#include <GRBonus3File2/DL_0x6000.dl.inc.c>
};

/* gap sub-block @ 0x6020 (was gap+0x2908, 64 bytes) */
Gfx dGRBonus3File2_DL_0x6020[8] = {
	#include <GRBonus3File2/DL_0x6020.dl.inc.c>
};

/* DObjDLLink @ 0x2948 (2 entries) */
DObjDLLink dGRBonus3File2_DLLink_0x6060[] = {
	{ 0, dGRBonus3File2_DL_0x53D0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2958 (2 entries) */
DObjDLLink dGRBonus3File2_DLLink_0x6070[] = {
	{ 0, dGRBonus3File2_DL_0x55B0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2968 (2 entries) */
DObjDLLink dGRBonus3File2_DLLink_0x6080[] = {
	{ 0, dGRBonus3File2_DL_0x56C0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2978 (2 entries) */
DObjDLLink dGRBonus3File2_DLLink_0x6090[] = {
	{ 0, dGRBonus3File2_DL_0x5820 },
	{ 4, NULL },
};

/* DObjDLLink[3] @ 0x60A0 — { 0, DL_0x5A20 }, { 1, DL_0x5F10 }, { 4, NULL } */
DObjDLLink dGRBonus3File2_DLLink_0x60A0[3] = {
	{ 0, dGRBonus3File2_DL_0x5A20 },
	{ 1, dGRBonus3File2_DL_0x5F10 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x60B8 — { 0, DL_0x5AB8 }, { 4, NULL } */
DObjDLLink dGRBonus3File2_DLLink_0x60B8[2] = {
	{ 0, dGRBonus3File2_DL_0x5AB8 },
	{ 4, NULL },
};

/* DObjDLLink[3] @ 0x60C8 — { 0, DL_0x5C88 }, { 1, DL_0x5FC0 }, { 4, NULL } */
DObjDLLink dGRBonus3File2_DLLink_0x60C8[3] = {
	{ 0, dGRBonus3File2_DL_0x5C88 },
	{ 1, dGRBonus3File2_DL_0x5FC0 },
	{ 4, NULL },
};

/* DObjDLLink[3] @ 0x60E0 — { 0, DL_0x5D00 }, { 1, DL_0x6000 }, { 4, NULL } */
DObjDLLink dGRBonus3File2_DLLink_0x60E0[3] = {
	{ 0, dGRBonus3File2_DL_0x5D00 },
	{ 1, dGRBonus3File2_DL_0x6000 },
	{ 4, NULL },
};

/* DObjDLLink[3] @ 0x60F8 — { 0, DL_0x5D20 }, { 1, DL_0x6020 }, { 4, NULL } */
DObjDLLink dGRBonus3File2_DLLink_0x60F8[3] = {
	{ 0, dGRBonus3File2_DL_0x5D20 },
	{ 1, dGRBonus3File2_DL_0x6020 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x6110 — { 0, DL_0x5D50 }, { 4, NULL } */
DObjDLLink dGRBonus3File2_DLLink_0x6110[2] = {
	{ 0, dGRBonus3File2_DL_0x5D50 },
	{ 4, NULL },
};

/* DObjDesc: Layer1DObj @ 0x6120 (13 entries — merged with the 7 that
 * used to live in gap_0x6228; the last entry is the {18, NULL, ...}
 * sentinel). */
extern DObjDLLink dGRBonus3File2_DLLink_0x60A0[];
extern DObjDLLink dGRBonus3File2_DLLink_0x60B8[];
extern DObjDLLink dGRBonus3File2_DLLink_0x60C8[];
extern DObjDLLink dGRBonus3File2_DLLink_0x60E0[];
extern DObjDLLink dGRBonus3File2_DLLink_0x60F8[];
extern DObjDLLink dGRBonus3File2_DLLink_0x6110[];

DObjDesc dGRBonus3File2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DLLink_0x6060, { -450.0f, 4500.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DLLink_0x6070, { 1650.0f, 1650.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DLLink_0x6080, { 1500.0f, -4050.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dGRBonus3File2_DLLink_0x6090, { -150.0f, -1350.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x2001, (void*)dGRBonus3File2_DLLink_0x60A0, { -3150.0f, 4350.0f, 150.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,      (void*)dGRBonus3File2_DLLink_0x60B8, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x2001, (void*)dGRBonus3File2_DLLink_0x60C8, { -6000.0f, 7200.0f, 456.03729248046875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x2001, (void*)dGRBonus3File2_DLLink_0x60E0, { 5850.0f, -4050.0f, 349.1464538574219f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,      (void*)dGRBonus3File2_DLLink_0x60F8, { 0.0f, -1500.0f, 150.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1,      (void*)dGRBonus3File2_DLLink_0x6110, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* MPVertexData[39] @ 0x635C — MPGeometryData.vertex_data (2 bytes
 * pad; compiler 4-aligns the next u16 decl). */
MPVertexData dGRBonus3File2_gap_0x6228_sub_0x134[39] = {
	{ {   6900,   7200 }, 0x0000 },
	{ {  -7200,   7200 }, 0x0000 },
	{ {  -7200,  -7200 }, 0x0000 },
	{ {   5437,  -7200 }, 0x000E },
	{ {   6900,  -7200 }, 0x0000 },
	{ {  -7500,   4350 }, 0x0000 },
	{ {  -3750,   4350 }, 0x0000 },
	{ {  -3750,   3900 }, 0x0000 },
	{ {  -2550,   3900 }, 0x0000 },
	{ {  -2550,   4350 }, 0x0000 },
	{ {   4800,   4350 }, 0x0000 },
	{ {   4800,   5550 }, 0x0000 },
	{ {   4500,   5550 }, 0x0000 },
	{ {   4500,   4650 }, 0x0000 },
	{ {  -7500,   4650 }, 0x0000 },
	{ {   6900,   1814 }, 0x0000 },
	{ {  -4800,   2400 }, 0x0000 },
	{ {  -4800,   2100 }, 0x0000 },
	{ {   6900,   1507 }, 0x0000 },
	{ {  -7500,  -1500 }, 0x0000 },
	{ {  -3600,  -1500 }, 0x0000 },
	{ {  -3600,  -1800 }, 0x0000 },
	{ {  -1350,  -1800 }, 0x0000 },
	{ {  -1350,  -2100 }, 0x0000 },
	{ {   1500,  -2100 }, 0x0000 },
	{ {   1500,  -1800 }, 0x0000 },
	{ {   3000,  -1800 }, 0x0000 },
	{ {   3000,  -1500 }, 0x0000 },
	{ {   4800,  -1500 }, 0x0000 },
	{ {   4800,   -300 }, 0x0000 },
	{ {   4500,   -300 }, 0x0000 },
	{ {   4500,  -1200 }, 0x0000 },
	{ {  -7500,  -1200 }, 0x0000 },
	{ {   7200,  -3900 }, 0x0000 },
	{ {  -4800,  -3900 }, 0x0000 },
	{ {  -4800,  -3000 }, 0x0000 },
	{ {  -5100,  -3000 }, 0x0000 },
	{ {  -5100,  -4200 }, 0x0000 },
	{ {   7200,  -4200 }, 0x0000 },
};

/* MPVertexArray (70 IDs) @ 0x6448 — vertex_id table (MPGeometryData.vertex_id) */
u16 dGRBonus3File2_gap_0x6228_sub_0x220[70] = {
	 11,  12,  13,  14,  15,  16,  29,  30,  31,  32,  35,  36,  33,  34,   2,   3,
	  4,  37,  38,  23,  24,  21,  22,  25,  26,  19,  20,  27,  28,  17,  18,   7,
	  8,   5,   6,   9,  10,   0,   1,  10,  11,  28,  29,  26,  27,  24,  25,   8,
	  9,  34,  35,   1,   2,  36,  37,  16,  17,   6,   7,  20,  21,  22,  23,  30,
	 31,  12,  13,   4,   0,   0,
};

/* MPVertexLinks[34] @ 0x64D4 — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dGRBonus3File2_gap_0x6228_sub_0x2AC[34] = {
	{   0, 2 }, {   2, 2 }, {   4, 2 }, {   6, 2 }, {   8, 2 }, {  10, 2 },
	{  12, 2 }, {  14, 3 }, {  17, 2 }, {  19, 2 }, {  21, 2 }, {  23, 2 },
	{  25, 2 }, {  27, 2 }, {  29, 2 }, {  31, 2 }, {  33, 2 }, {  35, 2 },
	{  37, 2 }, {  39, 2 }, {  41, 2 }, {  43, 2 }, {  45, 2 }, {  47, 2 },
	{  49, 2 }, {  51, 2 }, {  53, 2 }, {  55, 2 }, {  57, 2 }, {  59, 2 },
	{  61, 2 }, {  63, 2 }, {  65, 2 }, {  67, 2 },
};

/* MPLineInfo[1] @ 0x655C — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dGRBonus3File2_gap_0x6228_sub_0x334[1] = {
	{ 1, { {  0,   8}, {  8,  11}, { 19,   7}, { 26,   8} } },
};

/* MPMapObjData[9] @ 0x6570 — map objects (MPGeometryData.mapobjs); 2 bytes pad to align next decl */
MPMapObjData dGRBonus3File2_gap_0x6228_sub_0x348[9] = {
	{  37, {  1350,  4653 } },
	{  38, {     0, -1196 } },
	{  39, { -1950, -7197 } },
	{  33, { -6000,  4653 } },
	{  41, { -3150,  4200 } },
	{   0, { -6000,  4653 } },
	{   1, { -5400,  4653 } },
	{   2, { -4800,  4653 } },
	{   3, { -4200,  4653 } },
};

/* MPGeometryData @ 0x65A8 (28 bytes + 12 bytes pad) */
MPGeometryData dGRBonus3File2_MPGeometryData_0x65A8 = {
	1,
	(MPVertexPosContainer*)dGRBonus3File2_gap_0x6228_sub_0x134,
	(MPVertexArray*)dGRBonus3File2_gap_0x6228_sub_0x220,
	dGRBonus3File2_gap_0x6228_sub_0x2AC,
	dGRBonus3File2_gap_0x6228_sub_0x334,
	9,
	(MPMapObjContainer*)dGRBonus3File2_gap_0x6228_sub_0x348,
};
PAD(12);

/* Raw data from file offset 0x65D0 to 0x6890 (704 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dGRBonus3File2_Layer1MatAnim_MatAnimJoint[12] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6878,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x687C,
	NULL,
};

u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6600[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF47,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 4),
	    0xFFFFFF69,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6600),
};

u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x67F0[] = {
	aobjEvent32SetExtValBlock(0x001, 0),
	    0xFFFFA366,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFA300,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFA366,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 1),
	    0xFFFFA364,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 59),
	    0xFFFFA300,  /* nanf */
	aobjEvent32SetExtValBlock(0x001, 60),
	    0xFFFFA366,  /* nanf */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x67F0),
};

u32 dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6828[] = {
	aobjEvent32SetExtValBlock(0x018, 0),
	    0xB3B3B300,  /* -8.367896953132004e-08f */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValBlock(0x018, 60),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValBlock(0x018, 60),
	    0xB3B3B300,  /* -8.367896953132004e-08f */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetExtValBlock(0x018, 1),
	    0xB0B0B000,  /* -1.285570760956034e-09f */
	    0x7D7D7D00,  /* 2.1058982502556286e+37f */
	aobjEvent32SetExtValBlock(0x018, 59),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetExtValBlock(0x018, 60),
	    0xB3B3B300,  /* -8.367896953132004e-08f */
	    0x80808000,  /* -1.180086125630187e-38f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6828),
};

u32 * dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6878[] = { dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6600 };

AObjEvent32 *dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x687C[] = {
	(AObjEvent32 *)(dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x67F0),
	(AObjEvent32 *)(dGRBonus3File2_Layer1MatAnim_MatAnimJoint_0x6828),
	NULL,
};
