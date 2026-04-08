/* Sprite: Room */

Gfx dMN1PContinue_Room_dl[] = { gsSPEndDisplayList() };

/* Texture: Room (260x214 rgba16, 31 tiles) */
u8 dMN1PContinue_Room_tex[] = {
    #include <MN1PContinue/Room.rgba16.inc.c>
};

Bitmap dMN1PContinue_Room_bitmaps[] = {
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xE40, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x1C80, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x2AC0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x3900, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x4740, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x5580, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x63C0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x7200, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x8040, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x8E80, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x9CC0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xAB00, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xB940, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xC780, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xD5C0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xE400, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0xF240, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x10080, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x10EC0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x11D00, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x12B40, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x13980, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x147C0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x15600, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x16440, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x17280, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x180C0, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x18F00, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x19D40, 7, 0 },
	{ 260, 260, 0, 0, dMN1PContinue_Room_tex + 0x1AB80, 4, 0 },
};

/* Sprite: Room (260x184 rgba16) */
Sprite dMN1PContinue_Room = {
	0, 0,
	260, 184,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	31, 396,
	6, 7,
	0, 2,
	(Bitmap*)dMN1PContinue_Room_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
