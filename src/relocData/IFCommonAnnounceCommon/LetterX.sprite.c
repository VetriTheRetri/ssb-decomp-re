/* Sprite: LetterX */

Gfx dIFCommonAnnounceCommon_LetterX_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterX (31(32)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterX_tex[] = {
    #include <IFCommonAnnounceCommon/LetterX.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterX_bitmaps[] = {
	{ 31, 32, 0, 0, dIFCommonAnnounceCommon_LetterX_tex, 37, 0 },
};

/* Sprite: LetterX (31x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterX = {
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterX_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
