/* relocData file 123: Bonus1CommonImages4 — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Texture: 0x0008 (448 bytes) */
u8 dBonus1CommonImages4_Tex_0x0008[448] = {
	#include <Bonus1CommonImages4/Tex_0x0008.tex.inc.c>
};

PAD(8);

/* Palette: 0x01D0 (16 colors RGBA5551) */
u16 dBonus1CommonImages4_Lut_0x01D0_palette[16] = {
	#include <Bonus1CommonImages4/Lut_0x01D0.palette.inc.c>
};

PAD(8);

/* Palette: 0x01F8 (16 colors RGBA5551) */
u16 dBonus1CommonImages4_Lut_0x01F8_palette[16] = {
	#include <Bonus1CommonImages4/Lut_0x01F8.palette.inc.c>
};

PAD(8);

/* Texture: 0x0220 (256 bytes) */
u8 dBonus1CommonImages4_Tex_0x0220[256] = {
	#include <Bonus1CommonImages4/Tex_0x0220.tex.inc.c>
};

PAD(8);

/* Palette: 0x0328 (16 colors RGBA5551) */
u16 dBonus1CommonImages4_Lut_0x0328_palette[16] = {
	#include <Bonus1CommonImages4/Lut_0x0328.palette.inc.c>
};

PAD(8);

/* Texture: 0x0350 (256 bytes) */
u8 dBonus1CommonImages4_Tex_0x0350[256] = {
	#include <Bonus1CommonImages4/Tex_0x0350.tex.inc.c>
};

PAD(8);

/* Palette: 0x0458 (16 colors RGBA5551) */
u16 dBonus1CommonImages4_Lut_0x0458_palette[16] = {
	#include <Bonus1CommonImages4/Lut_0x0458.palette.inc.c>
};

PAD(8);

/* Texture: 0x0480 (256 bytes) */
u8 dBonus1CommonImages4_Tex_0x0480[256] = {
	#include <Bonus1CommonImages4/Tex_0x0480.tex.inc.c>
};

PAD(8);

/* Palette: 0x0588 (16 colors RGBA5551) */
u16 dBonus1CommonImages4_Lut_0x0588_palette[16] = {
	#include <Bonus1CommonImages4/Lut_0x0588.palette.inc.c>
};

PAD(8);

/* Texture: 0x05B0 (512 bytes) */
u8 dBonus1CommonImages4_Tex_0x05B0[512] = {
	#include <Bonus1CommonImages4/Tex_0x05B0.tex.inc.c>
};

PAD(8);

/* Palette: 0x07B8 (16 colors RGBA5551) */
u16 dBonus1CommonImages4_Lut_0x07B8_palette[16] = {
	#include <Bonus1CommonImages4/Lut_0x07B8.palette.inc.c>
};

PAD(8);

/* Texture: 0x07E0 (512 bytes) */
u8 dBonus1CommonImages4_Tex_0x07E0[512] = {
	#include <Bonus1CommonImages4/Tex_0x07E0.tex.inc.c>
};

PAD(8);

/* Texture: 0x09E8 (128 bytes) */
u8 dBonus1CommonImages4_Tex_0x09E8[128] = {
	#include <Bonus1CommonImages4/Tex_0x09E8.tex.inc.c>
};

PAD(8);

/* Texture: 0x0A70 (64 bytes) */
u8 dBonus1CommonImages4_Tex_0x0A70[64] = {
	#include <Bonus1CommonImages4/Tex_0x0A70.tex.inc.c>
};

PAD(8);

/* Texture: 0x0AB8 (8 bytes) */
u16 dBonus1CommonImages4_Tex_0x0AB8[4] = {
	#include <Bonus1CommonImages4/Tex_0x0AB8.palette.inc.c>
};

PAD(8);

/* Texture: 0x0AC8 (264 bytes) */
u8 dBonus1CommonImages4_Tex_0x0AC8[264] = {
	#include <Bonus1CommonImages4/Tex_0x0AC8.tex.inc.c>
};
