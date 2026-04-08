/* Sprite: LetterN */

Gfx dIFCommonAnnounceCommon_LetterN_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterN (29(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterN_tex[] = {
    #include <IFCommonAnnounceCommon/LetterN.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterN_bitmaps[] = {
	{ 29, 32, 0, 0, dIFCommonAnnounceCommon_LetterN_tex, 37, 0 },
};

/* Sprite: LetterN (29x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterN = {
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterN_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
