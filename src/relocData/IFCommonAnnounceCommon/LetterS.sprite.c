/* Sprite: LetterS */

Gfx dIFCommonAnnounceCommon_LetterS_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterS (24x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterS_tex[] = {
    #include <IFCommonAnnounceCommon/LetterS.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterS_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonAnnounceCommon_LetterS_tex, 37, 0 },
};

/* Sprite: LetterS (24x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterS = {
	0, 0,
	24, 37,
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterS_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
