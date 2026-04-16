/* relocData file 103: StagePupupuImages — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Palette: 0x0008 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x0008_palette[16] = {
	#include <StagePupupuImages/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Texture: 0x0030 (512 bytes) */
u8 dStagePupupuImages_Tex_0x0030[512] = {
	#include <StagePupupuImages/Tex_0x0030.tex.inc.c>
};

PAD(8);

/* Palette: 0x0238 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x0238_palette[16] = {
	#include <StagePupupuImages/Lut_0x0238.palette.inc.c>
};

PAD(8);

/* Texture: 0x0260 (512 bytes) */
u8 dStagePupupuImages_Tex_0x0260[512] = {
	#include <StagePupupuImages/Tex_0x0260.tex.inc.c>
};

PAD(8);

/* Palette: 0x0468 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x0468_palette[16] = {
	#include <StagePupupuImages/Lut_0x0468.palette.inc.c>
};

PAD(8);

/* Texture: 0x0490 (128 bytes) */
u8 dStagePupupuImages_Tex_0x0490[128] = {
	#include <StagePupupuImages/Tex_0x0490.tex.inc.c>
};

PAD(8);

/* Palette: 0x0518 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x0518_palette[16] = {
	#include <StagePupupuImages/Lut_0x0518.palette.inc.c>
};

PAD(8);

/* Texture: 0x0540 (128 bytes) */
u8 dStagePupupuImages_Tex_0x0540[128] = {
	#include <StagePupupuImages/Tex_0x0540.tex.inc.c>
};

PAD(8);

/* Palette: 0x05C8 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x05C8_palette[16] = {
	#include <StagePupupuImages/Lut_0x05C8.palette.inc.c>
};

PAD(8);

/* Texture: 0x05F0 (2048 bytes) */
u8 dStagePupupuImages_Tex_0x05F0[2048] = {
	#include <StagePupupuImages/Tex_0x05F0.tex.inc.c>
};

PAD(8);

/* Palette: 0x0DF8 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x0DF8_palette[16] = {
	#include <StagePupupuImages/Lut_0x0DF8.palette.inc.c>
};

PAD(8);

/* Texture: 0x0E20 (2048 bytes) */
u8 dStagePupupuImages_Tex_0x0E20[2048] = {
	#include <StagePupupuImages/Tex_0x0E20.tex.inc.c>
};

PAD(8);

/* Palette: 0x1628 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x1628_palette[16] = {
	#include <StagePupupuImages/Lut_0x1628.palette.inc.c>
};

PAD(8);

/* Texture: 0x1650 (512 bytes) */
u8 dStagePupupuImages_Tex_0x1650[512] = {
	#include <StagePupupuImages/Tex_0x1650.tex.inc.c>
};

PAD(8);

/* Palette: 0x1858 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x1858_palette[16] = {
	#include <StagePupupuImages/Lut_0x1858.palette.inc.c>
};

PAD(8);

/* Texture: 0x1880 (512 bytes) */
u8 dStagePupupuImages_Tex_0x1880[512] = {
	#include <StagePupupuImages/Tex_0x1880.tex.inc.c>
};

PAD(8);

/* Palette: 0x1A88 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x1A88_palette[16] = {
	#include <StagePupupuImages/Lut_0x1A88.palette.inc.c>
};

PAD(8);

/* Texture: 0x1AB0 (256 bytes) */
u8 dStagePupupuImages_Tex_0x1AB0[256] = {
	#include <StagePupupuImages/Tex_0x1AB0.tex.inc.c>
};

PAD(8);

/* Palette: 0x1BB8 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x1BB8_palette[16] = {
	#include <StagePupupuImages/Lut_0x1BB8.palette.inc.c>
};

PAD(8);

/* Texture: 0x1BE0 (552 bytes) */
u8 dStagePupupuImages_Tex_0x1BE0[552] = {
	#include <StagePupupuImages/Tex_0x1BE0.tex.inc.c>
};

PAD(8);

/* Texture: 0x1E10 (552 bytes) */
u8 dStagePupupuImages_Tex_0x1E10[552] = {
	#include <StagePupupuImages/Tex_0x1E10.tex.inc.c>
};

PAD(8);

/* Texture: 0x2040 (512 bytes) */
u8 dStagePupupuImages_Tex_0x2040[512] = {
	#include <StagePupupuImages/Tex_0x2040.tex.inc.c>
};

PAD(8);

/* Palette: 0x2248 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2248_palette[16] = {
	#include <StagePupupuImages/Lut_0x2248.palette.inc.c>
};

PAD(8);

/* Texture: 0x2270 (1024 bytes) */
u8 dStagePupupuImages_Tex_0x2270[1024] = {
	#include <StagePupupuImages/Tex_0x2270.tex.inc.c>
};

PAD(8);

/* Palette: 0x2678 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2678_palette[16] = {
	#include <StagePupupuImages/Lut_0x2678.palette.inc.c>
};

PAD(8);

/* Texture: 0x26A0 (512 bytes) */
u8 dStagePupupuImages_Tex_0x26A0[512] = {
	#include <StagePupupuImages/Tex_0x26A0.tex.inc.c>
};

PAD(8);

/* Palette: 0x28A8 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x28A8_palette[16] = {
	#include <StagePupupuImages/Lut_0x28A8.palette.inc.c>
};

PAD(8);

/* Texture: 0x28D0 (512 bytes) */
u8 dStagePupupuImages_Tex_0x28D0[512] = {
	#include <StagePupupuImages/Tex_0x28D0.tex.inc.c>
};

PAD(8);

/* Palette: 0x2AD8 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2AD8_palette[16] = {
	#include <StagePupupuImages/Lut_0x2AD8.palette.inc.c>
};

PAD(8);

/* Texture: 0x2B00 (128 bytes) */
u8 dStagePupupuImages_Tex_0x2B00[128] = {
	#include <StagePupupuImages/Tex_0x2B00.tex.inc.c>
};

PAD(8);

/* Palette: 0x2B88 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2B88_palette[16] = {
	#include <StagePupupuImages/Lut_0x2B88.palette.inc.c>
};

PAD(8);

/* Texture: 0x2BB0 (512 bytes) */
u8 dStagePupupuImages_Tex_0x2BB0[512] = {
	#include <StagePupupuImages/Tex_0x2BB0.tex.inc.c>
};

PAD(8);

/* Palette: 0x2DB8 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2DB8_palette[16] = {
	#include <StagePupupuImages/Lut_0x2DB8.palette.inc.c>
};

PAD(8);

/* Texture: 0x2DE0 (128 bytes) */
u8 dStagePupupuImages_Tex_0x2DE0[128] = {
	#include <StagePupupuImages/Tex_0x2DE0.tex.inc.c>
};

PAD(8);

/* Palette: 0x2E68 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2E68_palette[16] = {
	#include <StagePupupuImages/Lut_0x2E68.palette.inc.c>
};

PAD(8);

/* Texture: 0x2E90 (128 bytes) */
u8 dStagePupupuImages_Tex_0x2E90[128] = {
	#include <StagePupupuImages/Tex_0x2E90.tex.inc.c>
};

PAD(8);

/* Palette: 0x2F18 (16 colors RGBA5551) */
u16 dStagePupupuImages_Lut_0x2F18_palette[16] = {
	#include <StagePupupuImages/Lut_0x2F18.palette.inc.c>
};

PAD(8);

/* Texture: 0x2F40 (128 bytes) */
u8 dStagePupupuImages_Tex_0x2F40[128] = {
	#include <StagePupupuImages/Tex_0x2F40.tex.inc.c>
};
