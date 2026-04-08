/* Sprite: LetterV */

Gfx dIFCommonAnnounceCommon_LetterV_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterV (28(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterV_tex[] = {
    #include <IFCommonAnnounceCommon/LetterV.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterV_bitmaps[] = {
	{ 28, 32, 0, 0, dIFCommonAnnounceCommon_LetterV_tex, 37, 0 },
};

/* Sprite: LetterV (28x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterV = {
	0, 0,
	28, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterV_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
