/* Sprite: MonoText */

Gfx dMNOption_MonoText_dl[] = { gsSPEndDisplayList() };

/* Texture: MonoText (41(48)x14 i4) */
u8 dMNOption_MonoText_tex[] = {
    #include <MNOption/MonoText.i4.inc.c>
};

Bitmap dMNOption_MonoText_bitmaps[] = {
	{ 41, 48, 0, 0, dMNOption_MonoText_tex, 14, 0 },
};

/* Sprite: MonoText (41x14 i4) */
Sprite dMNOption_MonoText = {
	0, 0,
	41, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 0,
	(Bitmap*)dMNOption_MonoText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
