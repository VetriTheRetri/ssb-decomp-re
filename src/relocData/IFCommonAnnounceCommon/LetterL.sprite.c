/* Sprite: LetterL */

Gfx dIFCommonAnnounceCommon_LetterL_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterL (20(24)x36 ia8) */
u8 dIFCommonAnnounceCommon_LetterL_tex[] = {
    #include <IFCommonAnnounceCommon/LetterL.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterL_bitmaps[] = {
	{ 20, 24, 0, 0, dIFCommonAnnounceCommon_LetterL_tex, 36, 0 },
};

/* Sprite: LetterL (20x36 ia8) */
Sprite dIFCommonAnnounceCommon_LetterL = {
	0, 0,
	20, 36,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterL_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
