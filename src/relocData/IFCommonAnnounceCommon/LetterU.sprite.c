/* Sprite: LetterU */

Gfx dIFCommonAnnounceCommon_LetterU_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterU (26(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterU_tex[] = {
    #include <IFCommonAnnounceCommon/LetterU.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterU_bitmaps[] = {
	{ 26, 32, 0, 0, dIFCommonAnnounceCommon_LetterU_tex, 37, 0 },
};

/* Sprite: LetterU (26x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterU = {
	0, 0,
	26, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterU_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
