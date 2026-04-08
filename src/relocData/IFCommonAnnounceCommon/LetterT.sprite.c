/* Sprite: LetterT */

Gfx dIFCommonAnnounceCommon_LetterT_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterT (24x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterT_tex[] = {
    #include <IFCommonAnnounceCommon/LetterT.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterT_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonAnnounceCommon_LetterT_tex, 37, 0 },
};

/* Sprite: LetterT (24x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterT = {
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterT_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
