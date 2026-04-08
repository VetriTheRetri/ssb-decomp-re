/* Sprite: SymbolSec */

Gfx dIFCommonTimer_SymbolSec_dl[] = { gsSPEndDisplayList() };

/* Texture: SymbolSec (5(8)x9 ia8) */
u8 dIFCommonTimer_SymbolSec_tex[] = {
    #include <IFCommonTimer/SymbolSec.ia8.inc.c>
};

Bitmap dIFCommonTimer_SymbolSec_bitmaps[] = {
	{ 5, 8, 0, 0, dIFCommonTimer_SymbolSec_tex, 9, 0 },
};

/* Sprite: SymbolSec (5x9 ia8) */
Sprite dIFCommonTimer_SymbolSec = {
	0, 0,
	5, 9,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	9, 9,
	3, 1,
	(Bitmap*)dIFCommonTimer_SymbolSec_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
