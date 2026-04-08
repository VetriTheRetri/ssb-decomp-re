/* Sprite: LetterD */

Gfx dIFCommonAnnounceCommon_LetterD_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterD (28(32)x36 ia8) */
u8 dIFCommonAnnounceCommon_LetterD_tex[] = {
    #include <IFCommonAnnounceCommon/LetterD.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterD_bitmaps[] = {
	{ 28, 32, 0, 0, dIFCommonAnnounceCommon_LetterD_tex, 36, 0 },
};

/* Sprite: LetterD (28x36 ia8) */
Sprite dIFCommonAnnounceCommon_LetterD = {
	0, 0,
	28, 36,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterD_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
