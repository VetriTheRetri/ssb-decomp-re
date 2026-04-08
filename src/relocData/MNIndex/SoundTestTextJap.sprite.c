/* Sprite: SoundTestTextJap */

Gfx dMNIndex_SoundTestTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundTestTextJap (96x15 ia8) */
u8 dMNIndex_SoundTestTextJap_tex[] = {
    #include <MNIndex/SoundTestTextJap.ia8.inc.c>
};

Bitmap dMNIndex_SoundTestTextJap_bitmaps[] = {
	{ 96, 96, 0, 0, dMNIndex_SoundTestTextJap_tex, 15, 0 },
};

/* Sprite: SoundTestTextJap (96x15 ia8) */
Sprite dMNIndex_SoundTestTextJap = {
	0, 0,
	96, 15,
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
	(Bitmap*)dMNIndex_SoundTestTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
