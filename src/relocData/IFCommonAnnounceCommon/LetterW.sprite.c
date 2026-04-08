/* Sprite: LetterW */

Gfx dIFCommonAnnounceCommon_LetterW_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterW (39(40)x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterW_tex[] = {
    #include <IFCommonAnnounceCommon/LetterW.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterW_bitmaps[] = {
	{ 39, 40, 0, 0, dIFCommonAnnounceCommon_LetterW_tex, 37, 0 },
};

/* Sprite: LetterW (39x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterW = {
	0, 0,
	39, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterW_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
