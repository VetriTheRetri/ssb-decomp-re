/* relocData file 110: StageYosterImages — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Palette: 0x0008 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0008_palette[16] = {
	#include <StageYosterImages/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: 0x0030 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0030_palette[16] = {
	#include <StageYosterImages/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Texture: 0x0058 (64 bytes) */
u8 dStageYosterImages_Tex_0x0058[64] = {
	#include <StageYosterImages/Tex_0x0058.tex.inc.c>
};

PAD(8);

/* Texture: 0x00A0 (128 bytes) */
u8 dStageYosterImages_Tex_0x00A0[128] = {
	#include <StageYosterImages/Tex_0x00A0.tex.inc.c>
};

PAD(8);

/* Palette: 0x0128 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0128_palette[16] = {
	#include <StageYosterImages/Lut_0x0128.palette.inc.c>
};

PAD(8);

/* Palette: 0x0150 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0150_palette[16] = {
	#include <StageYosterImages/Lut_0x0150.palette.inc.c>
};

PAD(8);

/* Palette: 0x0178 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0178_palette[16] = {
	#include <StageYosterImages/Lut_0x0178.palette.inc.c>
};

PAD(8);

/* Palette: 0x01A0 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x01A0_palette[16] = {
	#include <StageYosterImages/Lut_0x01A0.palette.inc.c>
};

PAD(8);

/* Palette: 0x01C8 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x01C8_palette[16] = {
	#include <StageYosterImages/Lut_0x01C8.palette.inc.c>
};

PAD(8);

/* Palette: 0x01F0 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x01F0_palette[16] = {
	#include <StageYosterImages/Lut_0x01F0.palette.inc.c>
};

PAD(8);

/* Palette: 0x0218 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0218_palette[16] = {
	#include <StageYosterImages/Lut_0x0218.palette.inc.c>
};

PAD(8);

/* Texture: 0x0240 (128 bytes) */
u8 dStageYosterImages_Tex_0x0240[128] = {
	#include <StageYosterImages/Tex_0x0240.tex.inc.c>
};

PAD(8);

/* Texture: 0x02C8 (600 bytes) */
u8 dStageYosterImages_Tex_0x02C8[600] = {
	#include <StageYosterImages/Tex_0x02C8.tex.inc.c>
};

PAD(8);

/* Palette: 0x0528 (16 colors RGBA5551) */
u16 dStageYosterImages_Lut_0x0528_palette[16] = {
	#include <StageYosterImages/Lut_0x0528.palette.inc.c>
};

PAD(8);

/* Texture: 0x0550 (256 bytes) */
u8 dStageYosterImages_Tex_0x0550[256] = {
	#include <StageYosterImages/Tex_0x0550.tex.inc.c>
};

PAD(8);

/* Texture: 0x0658 (256 bytes) */
u8 dStageYosterImages_Tex_0x0658[256] = {
	#include <StageYosterImages/Tex_0x0658.tex.inc.c>
};

PAD(8);

/* Texture: 0x0760 (768 bytes) */
u8 dStageYosterImages_Tex_0x0760[768] = {
	#include <StageYosterImages/Tex_0x0760.tex.inc.c>
};

PAD(8);

/* Texture: 0x0A68 (352 bytes) */
u8 dStageYosterImages_Tex_0x0A68[352] = {
	#include <StageYosterImages/Tex_0x0A68.tex.inc.c>
};

PAD(8);

/* Texture: 0x0BD0 (64 bytes) */
u8 dStageYosterImages_Tex_0x0BD0[64] = {
	#include <StageYosterImages/Tex_0x0BD0.tex.inc.c>
};

PAD(8);

/* Texture: 0x0C18 (256 bytes) */
u8 dStageYosterImages_Tex_0x0C18[256] = {
	#include <StageYosterImages/Tex_0x0C18.tex.inc.c>
};

PAD(8);

/* Texture: 0x0D20 (384 bytes) */
u8 dStageYosterImages_Tex_0x0D20[384] = {
	#include <StageYosterImages/Tex_0x0D20.tex.inc.c>
};

PAD(8);

/* Texture: 0x0EA8 (384 bytes) */
u8 dStageYosterImages_Tex_0x0EA8[384] = {
	#include <StageYosterImages/Tex_0x0EA8.tex.inc.c>
};

PAD(8);

/* Texture: 0x1030 (16896 bytes) */
u8 dStageYosterImages_Tex_0x1030[16896] = {
	#include <StageYosterImages/Tex_0x1030.tex.inc.c>
};
