/* relocData file 299: MarioSecondaryImage — image data pool.
 *
 * Typed via tools/typeImagesFile.py: block layout recovered by scanning
 * every other file's extern reloc chain + post-compression trailer file
 * IDs, then pairing (LUT, Tex) offsets whose difference is 0x28 (8 bytes
 * of leading pad + 32-byte RGBA5551 palette).
 */

#include "relocdata_types.h"

PAD(8);

/* Texture: 0x0008 (8 bytes) */
u16 dMarioSecondaryImage_Tex_0x0008[4] = {
	#include <MarioSecondaryImage/Tex_0x0008.palette.inc.c>
};

PAD(8);

/* Texture: 0x0018 (64 bytes) */
/* @tex fmt=CI4 dim=4x8 lut=dMarioSecondaryImage_Tex_0x0008 */
u8 dMarioSecondaryImage_Tex_0x0018[64] = {
	#include <MarioSecondaryImage/Tex_0x0018.tex.inc.c>
};

PAD(8);

/* Texture: 0x0060 (16 bytes) */
u16 dMarioSecondaryImage_Tex_0x0060[8] = {
	#include <MarioSecondaryImage/Tex_0x0060.palette.inc.c>
};

PAD(8);

/* Texture: 0x0078 (72 bytes) */
/* @tex fmt=CI4 dim=4x8 lut=dMarioSecondaryImage_Tex_0x0060 */
u8 dMarioSecondaryImage_Tex_0x0078[72] = {
	#include <MarioSecondaryImage/Tex_0x0078.tex.inc.c>
};
