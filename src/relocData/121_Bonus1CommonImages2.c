/* relocData file 121: Bonus1CommonImages2 — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Palette: 0x0008 (16 colors RGBA5551) */
u16 dBonus1CommonImages2_Lut_0x0008_palette[16] = {
	#include <Bonus1CommonImages2/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture: 0x0030 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 */
u8 dBonus1CommonImages2_Tex_0x0030[128] = {
	#include <Bonus1CommonImages2/Tex_0x0030.tex.inc.c>
};

PAD(8);

/* Palette: 0x00B8 (16 colors RGBA5551) */
u16 dBonus1CommonImages2_Lut_0x00B8_palette[16] = {
	#include <Bonus1CommonImages2/Lut_0x00B8.palette.inc.c>
};

PAD(8);

/* Texture: 0x00E0 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 */
u8 dBonus1CommonImages2_Tex_0x00E0[128] = {
	#include <Bonus1CommonImages2/Tex_0x00E0.tex.inc.c>
};

PAD(8);

/* Palette: 0x0168 (16 colors RGBA5551) */
u16 dBonus1CommonImages2_Lut_0x0168_palette[16] = {
	#include <Bonus1CommonImages2/Lut_0x0168.palette.inc.c>
};

PAD(8);

/* Texture: 0x0190 (168 bytes) */
u8 dBonus1CommonImages2_Tex_0x0190[168] = {
	#include <Bonus1CommonImages2/Tex_0x0190.tex.inc.c>
};

PAD(8);

/* Texture: 0x0240 (168 bytes) */
u8 dBonus1CommonImages2_Tex_0x0240[168] = {
	#include <Bonus1CommonImages2/Tex_0x0240.tex.inc.c>
};

PAD(8);

/* Texture: 0x02F0 (168 bytes) */
u8 dBonus1CommonImages2_Tex_0x02F0[168] = {
	#include <Bonus1CommonImages2/Tex_0x02F0.tex.inc.c>
};

PAD(8);

/* Texture: 0x03A0 (168 bytes) */
u8 dBonus1CommonImages2_Tex_0x03A0[168] = {
	#include <Bonus1CommonImages2/Tex_0x03A0.tex.inc.c>
};

PAD(8);

/* Texture: 0x0450 (168 bytes) */
u8 dBonus1CommonImages2_Tex_0x0450[168] = {
	#include <Bonus1CommonImages2/Tex_0x0450.tex.inc.c>
};

PAD(8);

/* Texture: 0x0500 (128 bytes) */
u8 dBonus1CommonImages2_Tex_0x0500[128] = {
	#include <Bonus1CommonImages2/Tex_0x0500.tex.inc.c>
};

PAD(8);

/* Texture: 0x0588 (24 bytes) */
u16 dBonus1CommonImages2_Tex_0x0588[12] = {
	#include <Bonus1CommonImages2/Tex_0x0588.palette.inc.c>
};

PAD(8);

/* Texture: 0x05A8 (128 bytes) */
u8 dBonus1CommonImages2_Tex_0x05A8[128] = {
	#include <Bonus1CommonImages2/Tex_0x05A8.tex.inc.c>
};

PAD(8);

/* Palette: 0x0630 (16 colors RGBA5551) */
u16 dBonus1CommonImages2_Lut_0x0630_palette[16] = {
	#include <Bonus1CommonImages2/Lut_0x0630.palette.inc.c>
};

PAD(8);

/* Texture: 0x0658 (128 bytes) */
u8 dBonus1CommonImages2_Tex_0x0658[128] = {
	#include <Bonus1CommonImages2/Tex_0x0658.tex.inc.c>
};

PAD(8);

/* Texture: 0x06E0 (8 bytes) */
u16 dBonus1CommonImages2_Tex_0x06E0[4] = {
	#include <Bonus1CommonImages2/Tex_0x06E0.palette.inc.c>
};

PAD(8);

/* Texture: 0x06F0 (256 bytes) */
/* @tex fmt=CI4 dim=8x16 */
u8 dBonus1CommonImages2_Tex_0x06F0[256] = {
	#include <Bonus1CommonImages2/Tex_0x06F0.tex.inc.c>
};
