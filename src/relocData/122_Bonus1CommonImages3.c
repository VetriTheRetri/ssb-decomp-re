/* relocData file 122: Bonus1CommonImages3 — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Palette: 0x0008 (16 colors RGBA5551) */
u16 dBonus1CommonImages3_Lut_0x0008_palette[16] = {
	#include <Bonus1CommonImages3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture: 0x0030 (64 bytes) */
/* @tex fmt=CI4 dim=4x8 */
u8 dBonus1CommonImages3_Tex_0x0030[64] = {
	#include <Bonus1CommonImages3/Tex_0x0030.tex.inc.c>
};

PAD(8);

/* Texture: 0x0078 (128 bytes) */
/* @tex fmt=CI4 dim=4x8 */
u8 dBonus1CommonImages3_Tex_0x0078[128] = {
	#include <Bonus1CommonImages3/Tex_0x0078.tex.inc.c>
};

PAD(8);

/* Texture: 0x0100 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 lut=dBonus1CommonImages3_Lut_0x0298_palette */
u8 dBonus1CommonImages3_Tex_0x0100[128] = {
	#include <Bonus1CommonImages3/Tex_0x0100.tex.inc.c>
};

PAD(8);

/* Texture: 0x0188 (128 bytes) */
/* @tex fmt=CI4 dim=4x8 */
u8 dBonus1CommonImages3_Tex_0x0188[128] = {
	#include <Bonus1CommonImages3/Tex_0x0188.tex.inc.c>
};

PAD(8);

/* Texture: 0x0210 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 lut=dBonus1CommonImages3_Lut_0x0298_palette */
u8 dBonus1CommonImages3_Tex_0x0210[128] = {
	#include <Bonus1CommonImages3/Tex_0x0210.tex.inc.c>
};

PAD(8);

/* Palette: 0x0298 (16 colors RGBA5551) */
u16 dBonus1CommonImages3_Lut_0x0298_palette[16] = {
	#include <Bonus1CommonImages3/Lut_0x0298.palette.inc.c>
};

PAD(8);

/* Texture: 0x02C0 (8 bytes) */
u16 dBonus1CommonImages3_Tex_0x02C0[4] = {
	#include <Bonus1CommonImages3/Tex_0x02C0.palette.inc.c>
};

PAD(8);

/* Texture: 0x02D0 (256 bytes) */
/* @tex fmt=CI4 dim=8x16 lut=dBonus1CommonImages3_Tex_0x02C0 */
u8 dBonus1CommonImages3_Tex_0x02D0[256] = {
	#include <Bonus1CommonImages3/Tex_0x02D0.tex.inc.c>
};
