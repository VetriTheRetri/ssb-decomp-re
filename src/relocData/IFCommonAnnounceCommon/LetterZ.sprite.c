/* Sprite: LetterZ */

Gfx dIFCommonAnnounceCommon_LetterZ_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterZ (30(32)x36 ia8) */
u8 dIFCommonAnnounceCommon_LetterZ_tex[] = {
    #include <IFCommonAnnounceCommon/LetterZ.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterZ_bitmaps[] = {
	{ 30, 32, 0, 0, dIFCommonAnnounceCommon_LetterZ_tex, 36, 0 },
};

/* Sprite: LetterZ (30x36 ia8) */
Sprite dIFCommonAnnounceCommon_LetterZ = {
	0, 0,
	30, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_LetterZ_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
