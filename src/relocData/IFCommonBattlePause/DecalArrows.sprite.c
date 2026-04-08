/* Sprite: DecalArrows */

Gfx dIFCommonBattlePause_DecalArrows_dl[] = { gsSPEndDisplayList() };

/* Texture: DecalArrows (43(48)x42 ia8) */
u8 dIFCommonBattlePause_DecalArrows_tex[] = {
    #include <IFCommonBattlePause/DecalArrows.ia8.inc.c>
};

Bitmap dIFCommonBattlePause_DecalArrows_bitmaps[] = {
	{ 43, 48, 0, 0, dIFCommonBattlePause_DecalArrows_tex, 42, 0 },
};

/* Sprite: DecalArrows (43x42 ia8) */
Sprite dIFCommonBattlePause_DecalArrows = {
	0, 0,
	43, 42,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	42, 42,
	3, 1,
	(Bitmap*)dIFCommonBattlePause_DecalArrows_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
