/* Sprite: SoundTestTextJap */

Gfx dMNData_SoundTestTextJap_dl[] = { gsSPEndDisplayList() };

/* Texture: SoundTestTextJap (96x15 ia8) */
u8 dMNData_SoundTestTextJap_tex[] = {
    #include <MNData/SoundTestTextJap.ia8.inc.c>
};

Bitmap dMNData_SoundTestTextJap_bitmaps[] = {
	{ 96, 96, 0, 0, dMNData_SoundTestTextJap_tex, 15, 0 },
};

/* Sprite: SoundTestTextJap (96x15 ia8) */
Sprite dMNData_SoundTestTextJap = {
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
	(Bitmap*)dMNData_SoundTestTextJap_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
