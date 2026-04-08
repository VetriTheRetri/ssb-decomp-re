/* Sprite: LetterP */

Gfx dIFCommonAnnounceCommon_LetterP_dl[] = { gsSPEndDisplayList() };

/* Texture: LetterP (24x37 ia8) */
u8 dIFCommonAnnounceCommon_LetterP_tex[] = {
    #include <IFCommonAnnounceCommon/LetterP.ia8.inc.c>
};

Bitmap dIFCommonAnnounceCommon_LetterP_bitmaps[] = {
	{ 24, 24, 0, 0, dIFCommonAnnounceCommon_LetterP_tex, 37, 0 },
};

/* Sprite: LetterP (24x37 ia8) */
Sprite dIFCommonAnnounceCommon_LetterP = {
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
	(Bitmap*)dIFCommonAnnounceCommon_LetterP_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
