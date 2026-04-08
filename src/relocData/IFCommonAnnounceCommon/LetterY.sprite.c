/* Sprite: LetterY */

Gfx dIFCommonAnnounceCommon_LetterY_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterY (29(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterY_tex[] = {
    #include <IFCommonAnnounceCommon/LetterY.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterY_bitmaps[] = {
	{ 29, 32, 0, 0, dIFCommonAnnounceCommon_LetterY_tex, 37, 0 },
};

/* Sprite: LetterY (29x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterY = {
	0, 0,
	29, 37,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	37, 37,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_LetterY_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
