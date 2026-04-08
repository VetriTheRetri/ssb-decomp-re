/* Sprite: LetterB */

Gfx dIFCommonAnnounceCommon_LetterB_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterB (24x36 ia8) */
u8 dIFCommonAnnounceCommon_LetterB_tex[] = {
    #include <IFCommonAnnounceCommon/LetterB.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterB_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonAnnounceCommon_LetterB_tex, 36, 0 },
};

/* Sprite: LetterB (24x36 ia8) */
Sprite dIFCommonAnnounceCommon_LetterB = {
	0, 0,
	24, 36,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	36, 36,
	3, 1,
	(Bitmap*)dIFCommonAnnounceCommon_LetterB_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
