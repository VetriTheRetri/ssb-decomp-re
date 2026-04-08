/* Sprite: LetterI */

Gfx dIFCommonAnnounceCommon_LetterI_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterI (9(16)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterI_tex[] = {
    #include <IFCommonAnnounceCommon/LetterI.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterI_bitmaps[] = {
	{ 9, 16, 0, 0, dIFCommonAnnounceCommon_LetterI_tex, 37, 0 },
};

/* Sprite: LetterI (9x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterI = {
	0, 0,
	9, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterI_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
