/* Sprite: LetterR */

Gfx dIFCommonAnnounceCommon_LetterR_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterR (27(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterR_tex[] = {
    #include <IFCommonAnnounceCommon/LetterR.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterR_bitmaps[] = {
	{ 27, 32, 0, 0, dIFCommonAnnounceCommon_LetterR_tex, 37, 0 },
};

/* Sprite: LetterR (27x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterR = {
	0, 0,
	27, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterR_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
