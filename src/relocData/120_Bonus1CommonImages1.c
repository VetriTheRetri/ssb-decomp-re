/* relocData file 120: Bonus1CommonImages1 — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Palette: 0x0008 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x0008_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture: 0x0030 (64 bytes) */
u8 dBonus1CommonImages1_Tex_0x0030[64] = {
	#include <Bonus1CommonImages1/Tex_0x0030.tex.inc.c>
};

PAD(8);

/* Texture: 0x0078 (448 bytes) */
u8 dBonus1CommonImages1_Tex_0x0078[448] = {
	#include <Bonus1CommonImages1/Tex_0x0078.tex.inc.c>
};

PAD(8);

/* Texture: 0x0240 (64 bytes) */
u8 dBonus1CommonImages1_Tex_0x0240[64] = {
	#include <Bonus1CommonImages1/Tex_0x0240.tex.inc.c>
};

PAD(8);

/* Palette: 0x0288 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x0288_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x0288.palette.inc.c>
};

PAD(8);

/* Texture: 0x02B0 (64 bytes) */
u8 dBonus1CommonImages1_Tex_0x02B0[64] = {
	#include <Bonus1CommonImages1/Tex_0x02B0.tex.inc.c>
};

PAD(8);

/* Texture: 0x02F8 (128 bytes) */
u8 dBonus1CommonImages1_Tex_0x02F8[128] = {
	#include <Bonus1CommonImages1/Tex_0x02F8.tex.inc.c>
};

PAD(8);

/* Palette: 0x0380 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x0380_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x0380.palette.inc.c>
};

PAD(8);

/* Texture: 0x03A8 (64 bytes) */
u8 dBonus1CommonImages1_Tex_0x03A8[64] = {
	#include <Bonus1CommonImages1/Tex_0x03A8.tex.inc.c>
};

PAD(8);

/* Palette: 0x03F0 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x03F0_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x03F0.palette.inc.c>
};

PAD(8);

/* Texture: 0x0418 (64 bytes) */
u8 dBonus1CommonImages1_Tex_0x0418[64] = {
	#include <Bonus1CommonImages1/Tex_0x0418.tex.inc.c>
};

PAD(8);

/* Texture: 0x0460 (128 bytes) */
u8 dBonus1CommonImages1_Tex_0x0460[128] = {
	#include <Bonus1CommonImages1/Tex_0x0460.tex.inc.c>
};

PAD(8);

/* Palette: 0x04E8 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x04E8_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x04E8.palette.inc.c>
};

PAD(8);

/* Texture: 0x0510 (128 bytes) */
u8 dBonus1CommonImages1_Tex_0x0510[128] = {
	#include <Bonus1CommonImages1/Tex_0x0510.tex.inc.c>
};

PAD(8);

/* Texture: 0x0598 (8 bytes) */
u16 dBonus1CommonImages1_Tex_0x0598[4] = {
	#include <Bonus1CommonImages1/Tex_0x0598.palette.inc.c>
};

PAD(8);

/* Texture: 0x05A8 (256 bytes) */
u8 dBonus1CommonImages1_Tex_0x05A8[256] = {
	#include <Bonus1CommonImages1/Tex_0x05A8.tex.inc.c>
};

PAD(8);

/* Palette: 0x06B0 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x06B0_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x06B0.palette.inc.c>
};

PAD(8);

/* Texture: 0x06D8 (64 bytes) */
u8 dBonus1CommonImages1_Tex_0x06D8[64] = {
	#include <Bonus1CommonImages1/Tex_0x06D8.tex.inc.c>
};

PAD(8);

/* Palette: 0x0720 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x0720_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x0720.palette.inc.c>
};

PAD(8);

/* Texture: 0x0748 (128 bytes) */
u8 dBonus1CommonImages1_Tex_0x0748[128] = {
	#include <Bonus1CommonImages1/Tex_0x0748.tex.inc.c>
};

PAD(8);

/* Palette: 0x07D0 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x07D0_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x07D0.palette.inc.c>
};

PAD(8);

/* Texture: 0x07F8 (512 bytes) */
u8 dBonus1CommonImages1_Tex_0x07F8[512] = {
	#include <Bonus1CommonImages1/Tex_0x07F8.tex.inc.c>
};

PAD(8);

/* Palette: 0x0A00 (16 colors RGBA5551) */
u16 dBonus1CommonImages1_Lut_0x0A00_palette[16] = {
	#include <Bonus1CommonImages1/Lut_0x0A00.palette.inc.c>
};

PAD(8);

/* Texture: 0x0A28 (72 bytes) */
u8 dBonus1CommonImages1_Tex_0x0A28[72] = {
	#include <Bonus1CommonImages1/Tex_0x0A28.tex.inc.c>
};
