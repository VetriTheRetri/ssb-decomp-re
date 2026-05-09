/* relocData file 116: StageBattlefieldFile2 — Battlefield stage geometry.
 *
 * Fully typed: 10 CI4 LUT palettes, 10 textures, 17 Vtx arrays,
 * 1 Gfx[216] display list, a DObjDesc[3] block, and trailing data
 * blocks referenced by the stage loader.
 * 43 intern chain entries resolve LUT/Tex/Vtx/DL/DObjDesc/data pointers.
 */

#include "relocdata_types.h"

/* ═══════════════════ LUT PALETTES (10x CI4, 16 colors each) ═══════════════════ */

PAD(8);

/* @ 0x0008, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0008_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* @ 0x0030, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0030_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* @ 0x0058, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0058_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0058.palette.inc.c>
};

PAD(8);

/* @ 0x0080, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0080_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0080.palette.inc.c>
};

PAD(8);

/* @ 0x00A8, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x00A8_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x00A8.palette.inc.c>
};

PAD(8);

/* @ 0x00D0, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x00D0_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x00D0.palette.inc.c>
};

PAD(8);

/* @ 0x00F8, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x00F8_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x00F8.palette.inc.c>
};

PAD(8);

/* @ 0x0120, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0120_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0120.palette.inc.c>
};

PAD(8);

/* @ 0x0148, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0148_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0148.palette.inc.c>
};

PAD(8);

/* @ 0x0170, 32 bytes — LUT palette (16 RGBA5551) */
u16 dStageBattlefieldFile2_Lut_0x0170_palette[16] = {
	#include <StageBattlefieldFile2/Lut_0x0170.palette.inc.c>
};

PAD(8);

/* ═══════════════════ TEXTURES (10 CI4 texture blocks) ═══════════════════ */

/* @ 0x0198, 2048 bytes — CI4 texture */
/* @tex fmt=CI4 dim=64x64 lut=dStageBattlefieldFile2_Lut_0x0008_palette */
u8 dStageBattlefieldFile2_Tex_0x0198[2048] = {
	#include <StageBattlefieldFile2/Tex_0x0198.tex.inc.c>
};

PAD(8);

/* @ 0x09A0, 2048 bytes — CI4 texture */
/* @tex fmt=CI4 dim=64x64 lut=dStageBattlefieldFile2_Lut_0x0030_palette */
u8 dStageBattlefieldFile2_Tex_0x09A0[2048] = {
	#include <StageBattlefieldFile2/Tex_0x09A0.tex.inc.c>
};

PAD(8);

/* @ 0x11A8, 2048 bytes — CI4 texture */
/* @tex fmt=CI4 dim=64x64 lut=dStageBattlefieldFile2_Lut_0x0058_palette */
u8 dStageBattlefieldFile2_Tex_0x11A8[2048] = {
	#include <StageBattlefieldFile2/Tex_0x11A8.tex.inc.c>
};

PAD(8);

/* @ 0x19B0, 512 bytes — CI4 texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageBattlefieldFile2_Lut_0x0080_palette */
u8 dStageBattlefieldFile2_Tex_0x19B0[512] = {
	#include <StageBattlefieldFile2/Tex_0x19B0.tex.inc.c>
};

PAD(8);

/* @ 0x1BB8, 1024 bytes — CI4 texture */
/* @tex fmt=CI4 dim=64x32 lut=dStageBattlefieldFile2_Lut_0x00A8_palette */
u8 dStageBattlefieldFile2_Tex_0x1BB8[1024] = {
	#include <StageBattlefieldFile2/Tex_0x1BB8.tex.inc.c>
};

PAD(8);

/* @ 0x1FC0, 512 bytes — CI4 texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageBattlefieldFile2_Lut_0x00D0_palette */
u8 dStageBattlefieldFile2_Tex_0x1FC0[512] = {
	#include <StageBattlefieldFile2/Tex_0x1FC0.tex.inc.c>
};

PAD(8);

/* @ 0x21C8, 512 bytes — CI4 texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageBattlefieldFile2_Lut_0x00F8_palette */
u8 dStageBattlefieldFile2_Tex_0x21C8[512] = {
	#include <StageBattlefieldFile2/Tex_0x21C8.tex.inc.c>
};

PAD(8);

/* @ 0x23D0, 512 bytes — CI4 texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageBattlefieldFile2_Lut_0x0120_palette */
u8 dStageBattlefieldFile2_Tex_0x23D0[512] = {
	#include <StageBattlefieldFile2/Tex_0x23D0.tex.inc.c>
};

PAD(8);

/* @ 0x25D8, 512 bytes — CI4 texture */
/* @tex fmt=CI4 dim=32x32 lut=dStageBattlefieldFile2_Lut_0x0148_palette */
u8 dStageBattlefieldFile2_Tex_0x25D8[512] = {
	#include <StageBattlefieldFile2/Tex_0x25D8.tex.inc.c>
};

PAD(8);

/* @ 0x27E0, 1024 bytes — CI4 texture */
/* @tex fmt=CI4 dim=64x32 lut=dStageBattlefieldFile2_Lut_0x0170_palette */
u8 dStageBattlefieldFile2_Tex_0x27E0[1024] = {
	#include <StageBattlefieldFile2/Tex_0x27E0.tex.inc.c>
};

/* ═══════════════════ VERTEX ARRAYS (17 Vtx blocks) ═══════════════════ */

/* @ 0x2BE0, 384 bytes — Vtx[24] */
Vtx dStageBattlefieldFile2_Vtx_0x2BE0[24] = {
	#include <StageBattlefieldFile2/Vtx_0x2BE0.vtx.inc.c>
};

/* @ 0x2D60, 448 bytes — Vtx[28] */
Vtx dStageBattlefieldFile2_Vtx_0x2D60[28] = {
	#include <StageBattlefieldFile2/Vtx_0x2D60.vtx.inc.c>
};

/* @ 0x2F20, 384 bytes — Vtx[24] */
Vtx dStageBattlefieldFile2_Vtx_0x2F20[24] = {
	#include <StageBattlefieldFile2/Vtx_0x2F20.vtx.inc.c>
};

/* @ 0x30A0, 128 bytes — Vtx[8] */
Vtx dStageBattlefieldFile2_Vtx_0x30A0[8] = {
	#include <StageBattlefieldFile2/Vtx_0x30A0.vtx.inc.c>
};

/* @ 0x3120, 192 bytes — Vtx[12] */
Vtx dStageBattlefieldFile2_Vtx_0x3120[12] = {
	#include <StageBattlefieldFile2/Vtx_0x3120.vtx.inc.c>
};

/* @ 0x31E0, 208 bytes — Vtx[13] */
Vtx dStageBattlefieldFile2_Vtx_0x31E0[13] = {
	#include <StageBattlefieldFile2/Vtx_0x31E0.vtx.inc.c>
};

/* @ 0x32B0, 64 bytes — Vtx[4] */
Vtx dStageBattlefieldFile2_Vtx_0x32B0[4] = {
	#include <StageBattlefieldFile2/Vtx_0x32B0.vtx.inc.c>
};

/* @ 0x32F0, 128 bytes — Vtx[8] */
Vtx dStageBattlefieldFile2_Vtx_0x32F0[8] = {
	#include <StageBattlefieldFile2/Vtx_0x32F0.vtx.inc.c>
};

/* @ 0x3370, 64 bytes — Vtx[4] */
Vtx dStageBattlefieldFile2_Vtx_0x3370[4] = {
	#include <StageBattlefieldFile2/Vtx_0x3370.vtx.inc.c>
};

/* @ 0x33B0, 128 bytes — Vtx[8] */
Vtx dStageBattlefieldFile2_Vtx_0x33B0[8] = {
	#include <StageBattlefieldFile2/Vtx_0x33B0.vtx.inc.c>
};

/* @ 0x3430, 256 bytes — Vtx[16] */
Vtx dStageBattlefieldFile2_Vtx_0x3430[16] = {
	#include <StageBattlefieldFile2/Vtx_0x3430.vtx.inc.c>
};

/* @ 0x3530, 64 bytes — Vtx[4] */
Vtx dStageBattlefieldFile2_Vtx_0x3530[4] = {
	#include <StageBattlefieldFile2/Vtx_0x3530.vtx.inc.c>
};

/* @ 0x3570, 256 bytes — Vtx[16] */
Vtx dStageBattlefieldFile2_Vtx_0x3570[16] = {
	#include <StageBattlefieldFile2/Vtx_0x3570.vtx.inc.c>
};

/* @ 0x3670, 144 bytes — Vtx[9] */
Vtx dStageBattlefieldFile2_Vtx_0x3670[9] = {
	#include <StageBattlefieldFile2/Vtx_0x3670.vtx.inc.c>
};

/* @ 0x3700, 512 bytes — Vtx[32] */
Vtx dStageBattlefieldFile2_Vtx_0x3700[32] = {
	#include <StageBattlefieldFile2/Vtx_0x3700.vtx.inc.c>
};

/* @ 0x3900, 16 bytes — Vtx[1] */
Vtx dStageBattlefieldFile2_Vtx_0x3900[1] = {
	#include <StageBattlefieldFile2/Vtx_0x3900.vtx.inc.c>
};

/* @ 0x3910, 416 bytes — Vtx[26] */
Vtx dStageBattlefieldFile2_Vtx_0x3910[26] = {
	#include <StageBattlefieldFile2/Vtx_0x3910.vtx.inc.c>
};

/* ═══════════════════ DISPLAY LIST ═══════════════════ */

/* @ 0x3AB0, 1728 bytes — Gfx[216] DL */
Gfx dStageBattlefieldFile2_DL_0x3AB0[216] = {
	#include <StageBattlefieldFile2/DL_0x3AB0.dl.inc.c>
};

/* ═══════════════════ DObjDesc + TRAILING DATA ═══════════════════ */

/* @ 0x4170, 132 bytes — DObjDesc[3].
 * Entry 1's p_gobject is a chain-encoded pointer patched at load time
 * to point to the display list (DL_0x3AB0). */
DObjDesc dStageBattlefieldFile2_DObjDesc_0x4170[3] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageBattlefieldFile2_DL_0x3AB0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0x41F4, 144 bytes — stage geometry data block 0 */
u8 dStageBattlefieldFile2_data_0x41F4[144] = {
	#include <StageBattlefieldFile2/data_0x41F4.data.inc.c>
};

/* @ 0x4284, 72 bytes — stage geometry data block 1 */
u8 dStageBattlefieldFile2_data_0x4284[72] = {
	#include <StageBattlefieldFile2/data_0x4284.data.inc.c>
};

/* @ 0x42CC, 60 bytes — stage geometry data block 2 */
u8 dStageBattlefieldFile2_data_0x42CC[60] = {
	#include <StageBattlefieldFile2/data_0x42CC.data.inc.c>
};

/* @ 0x4308, 20 bytes — stage geometry data block 3 */
u8 dStageBattlefieldFile2_data_0x4308[20] = {
	#include <StageBattlefieldFile2/data_0x4308.data.inc.c>
};

/* @ 0x431C, 108 bytes — stage geometry data block 4 */
u8 dStageBattlefieldFile2_data_0x431C[108] = {
	#include <StageBattlefieldFile2/data_0x431C.data.inc.c>
};

/* @ 0x4388, 40 bytes — stage descriptor / pointer table */
u8 dStageBattlefieldFile2_data_0x4388[40] = {
	#include <StageBattlefieldFile2/data_0x4388.data.inc.c>
};
