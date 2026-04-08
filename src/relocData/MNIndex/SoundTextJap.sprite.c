/* Sprite: SoundTextJap */

Gfx dMNIndex_SoundTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundTextJap (58(64)x15 ia8) */
u8 dMNIndex_SoundTextJap_tex[] = {
    #include <MNIndex/SoundTextJap.ia8.inc.c>
};

Bitmap dMNIndex_SoundTextJap_bitmaps[] = {
	{ 58, 64, 0, 0, dMNIndex_SoundTextJap_tex, 15, 0 },
};

/* Sprite: SoundTextJap (58x15 ia8) */
Sprite dMNIndex_SoundTextJap = {
	0, 0,
	58, 15,
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
	(Bitmap*)dMNIndex_SoundTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
