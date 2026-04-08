/* Sprite: SoundTextJap */

Gfx dMNOption_SoundTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundTextJap (64x15 ia8) */
u8 dMNOption_SoundTextJap_tex[] = {
    #include <MNOption/SoundTextJap.ia8.inc.c>
};

Bitmap dMNOption_SoundTextJap_bitmaps[] = {
	{ 64, 64, 0, 0, dMNOption_SoundTextJap_tex, 15, 0 },
};

/* Sprite: SoundTextJap (64x15 ia8) */
Sprite dMNOption_SoundTextJap = {
	0, 0,
	64, 15,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	15, 15,
	3, 1,
	(Bitmap*)dMNOption_SoundTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
