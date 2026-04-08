/* Sprite: Instruction */

Gfx dMNScreenAdjust_Instruction_dl[] = { gsSPEndDisplayList() };

/* Texture: Instruction (288x16 i4) */
u8 dMNScreenAdjust_Instruction_tex[] = {
    #include <MNScreenAdjust/Instruction.i4.inc.c>
};

Bitmap dMNScreenAdjust_Instruction_bitmaps[] = {
	{ 288, 288, 0, 0, dMNScreenAdjust_Instruction_tex, 16, 0 },
};

/* Sprite: Instruction (288x16 i4) */
Sprite dMNScreenAdjust_Instruction = {
	0, 0,
	288, 16,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	16, 16,
	4, 0,
	(Bitmap*)dMNScreenAdjust_Instruction_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
