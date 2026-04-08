/* Sprite: SpeedColonText */

Gfx dRelocFile29_SpeedColonText_dl[] = { gsSPEndDisplayList() };

/* Texture: SpeedColonText (40x16 ia8) */
u8 dRelocFile29_SpeedColonText_tex[] = {
    #include <file_29/SpeedColonText.ia8.inc.c>
};

Bitmap dRelocFile29_SpeedColonText_bitmaps[] = {
	{ 40, 40, 0, 0, dRelocFile29_SpeedColonText_tex, 16, 0 },
};

/* Sprite: SpeedColonText (40x16 ia8) */
Sprite dRelocFile29_SpeedColonText = {
	0, 0,
	40, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	3, 1,
	(Bitmap*)dRelocFile29_SpeedColonText_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
