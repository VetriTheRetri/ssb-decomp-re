/* relocData file 21: MNSelectCommon */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0008 (8 bytes) */
u8 dMNSelectCommon_gap_0x0000[8] = {
	#include <MNSelectCommon/gap_0x0000.data.inc.c>
};

/* Texture data for sprite StoneBackground */
/* Split out from .sprite.c so the palette blocks can sit at
   their original physical position between the texture and
   the bitmap array. */
/* Texture: StoneBackground (64x32 ci4) */
u8 dMNSelectCommon_StoneBackground_tex[] = {
    #include <MNSelectCommon/StoneBackground.ci4.inc.c>
};

/* Palette: @ 0x410 (16 colors RGBA5551) */
u16 dMNSelectCommon_palette_0x0410[16] = {
	#include <MNSelectCommon/palette_0x0410.palette.inc.c>
};

/* Sprite: StoneBackground */

/* Sprite: StoneBackground (64x32 ci4) */

Bitmap dMNSelectCommon_StoneBackground_bitmaps[] = {
	{ 64, 64, 0, 0, dMNSelectCommon_StoneBackground_tex, 32, 0 },
};

Sprite dMNSelectCommon_StoneBackground = {
	0, 0,
	64, 32,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMNSelectCommon_palette_0x0410,
	0, 1,
	1, 36,
	32, 32,
	2, 0,
	(Bitmap*)dMNSelectCommon_StoneBackground_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

