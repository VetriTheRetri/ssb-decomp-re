/* Sprite: LetterG */

Gfx dIFCommonAnnounceCommon_LetterG_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterG (31(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterG_tex[] = {
    #include <IFCommonAnnounceCommon/LetterG.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterG_bitmaps[] = {
	{ 31, 32, 0, 0, dIFCommonAnnounceCommon_LetterG_tex, 37, 0 },
};

/* Sprite: LetterG (31x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterG = {
	0, 0,
	31, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterG_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
