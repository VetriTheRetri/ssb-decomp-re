#include <sys/develop.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <ssb_types.h>
#include <sys/objdraw.h>

#define F_DEG_TO_RAD(x) ((f32)(((x) * PI32) / 180.0F))

// EXTERN
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay30ArenaLo;  // 80134E30
extern intptr_t lOverlay30ArenaHi;  // 803903E0
// Offsets
extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET; // file 0x015 image offset for background tile
extern intptr_t FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET; // also file 0x1B and 0x1C
extern intptr_t FILE_01E_CURSOR_IMAGE_OFFSET; // file 0x1E image offset for cursor
extern intptr_t FILE_01E_SMASH_LOGO_IMAGE_OFFSET; // file 0x1E image offset for Smash logo
extern intptr_t FILE_01E_STAGE_SELECT_IMAGE_OFFSET; // file 0x1E image offset for wooden circle
extern intptr_t FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET; // file 0x1E image offset for wooden circle
extern intptr_t FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET; // file 0x1E image offset for yellow oval right edge
extern intptr_t FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET; // file 0x1E image offset for yellow oval center
extern intptr_t FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET; // file 0x1E image offset for yellow oval left edge
extern intptr_t FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET; // file 0x1E image offset for patterned stage preview bg texture
extern intptr_t FILE_01E_RANDOM_IMAGE_OFFSET; // file 0x1E image offset for Random stage image
extern intptr_t FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET; // file 0x1E image offset for Random stage image

extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);

// Stuff - where does it go?!?
typedef struct mnStageFileInfo
{
	/* 0x00 */ u32 id;
	/* 0x04 */ u32 header_size;

} mnStageFileInfo;

// DATA
// 801344D0
rdFileID D_ovl30_801344D0[5] = {
	0x14, 0x15, 0x1e, 0x21, 0x1a
};

// 801344E4
mnStageFileInfo dMNStageFileInfoArray[9] = {
	{ 0x00000103, 0x00000014 },
	{ 0x00000106, 0x00000014 },
	{ 0x00000105, 0x00000014 },
	{ 0x00000101, 0x00000014 },
	{ 0x00000109, 0x00000014 },
	{ 0x00000107, 0x00000014 },
	{ 0x000000ff, 0x00000014 },
	{ 0x00000108, 0x00000014 },
	{ 0x00000104, 0x00000014 }
};

// 8013452C
intptr_t dMNStageBackgroundFileOffsets[9] = {
	0x00026c88,
	0x00026c88, 0x00026c88, 0x00026c88, 0x00026c88,
	0x00026c88, 0x00026c88, 0x00026c88, 0x00026c88
};

// 80134550
rdFileNode dMNStageTrainingBackgroundFileNodes[3] = {
	{ 0x0000001a, 0x00000000 },
	{ 0x0000001b, 0xee9e0600 },
	{ 0x0000001c, 0xaff5ff00 }
};

// 80134568
s32 dMNStageTrainingBackgroundIDs[10] = {
	2, 0, 0, 0, 2, 1, 2, 2, 2, 0
};

// 80134590
Lights1 D_ovl30_80134590 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14); // 20202000 20202000 FFFFFF00 FFFFFF00 14141400 00000000

// 801345A8
Gfx D_ovl30_801345A8[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(D_ovl30_80134590),
	gsSPEndDisplayList()
};

// 801345D0
intptr_t dMNStageChrOffsets[29] = {
	0x00000040, 0x000000d0, 0x00000160, 0x000001f0,
	0x00000280, 0x00000310, 0x000003a0, 0x00000430,
	0x000004c0, 0x00000550, 0x000005e0, 0x00000670,
	0x00000700, 0x00000790, 0x00000820, 0x000008b0,
	0x00000940, 0x000009d0, 0x00000a60, 0x00000af0,
	0x00000b80, 0x00000c10, 0x00000ca0, 0x00000d30,
	0x00000dc0, 0x00000e50, 0x00000ed0, 0x00000f60,
	0x00000fd0
};

// 80134644
s32 dMNStageIDOrder[10] = {
	0x00000000, 0x00000002, 0x00000004,
	0x00000003, 0x00000008, 0x00000005, 0x00000006,
	0x00000001, 0x00000007, 0x000000de
};

// 8013466C
intptr_t dMNStageImageOffsets[10] = {
	// 0xdeadbeef, 0xdeadbeef, 0xdeadbeef, 0xdeadbeef, 0xdeadbeef
	0x00004d88,
	0x00005b68, 0x00006948, 0x00007728, 0x00008508,
	0x000092e8, 0x0000bc88, 0x0000a0c8, 0x0000aea8,
	0x0000cb10

};

// 80134694
Vec2f dMNStageNamePositions[9] = {
	{ 195.00f, 196.00f },
	{ 202.00f, 196.00f },
	{ 190.00f, 196.00f },
	{ 195.00f, 196.00f },
	{ 198.00f, 196.00f },
	{ 190.00f, 196.00f },
	{ 195.00f, 196.00f },
	{ 190.00f, 196.00f },
	{ 190.00f, 196.00f },
};

// 801346DC
intptr_t dMNStageNameImageOffsets[9] = {
	0x000001f8,
	0x00000438, 0x00000678, 0x000008b8, 0x00000b10,
	0x00000d58, 0x00001418, 0x00000f98, 0x000011d8
};

// 80134700
intptr_t D_ovl30_80134700[] = {
	0x801349C0, 0x801349D0, 0x801349DC, 0x801349EC,
	0x801349FC, 0x80134A10, 0x80134A20, 0x80134A2C,
	0x80134A3C, 0x80134A50, 0x80134A60, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x80134A74, 0x43400000, 0x43270000,
	0x43560000, 0x43270000, 0x434A0000, 0x43290000,
	0x434A0000, 0x43290000, 0x43410000, 0x43290000,
	0x43460000, 0x43290000, 0x434D0000, 0x43290000,
	0x43470000, 0x43290000, 0x433F0000, 0x43270000,
	0x43510000, 0x432E0000, 0x433C0000, 0x432E0000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x434B0000, 0x432E0000,
	0x43550000, 0x432E0000, 0x000000FF, 0x000000FF,0x000000FF
};

// 801347E4
Vec2f dMNStageLogoPositions[10] = {
	{ 3.00f ,19.00f },
	{ 3.00f, 19.00f },
	{ 3.00f, 20.00f },
	{ 2.00f, 20.00f },
	{ 3.00f, 17.00f },
	{ -1.00f, 19.00f },
	{ 1.00f, 20.00f },
	{ 1.00f, 20.00f },
	{ 3.00f, 19.00f },
	{ 34.00f, 20.00f }
};

// 80134834
intptr_t dMNStageLogoOffsets[9] = {
	0x0618, 0x1938,
	0x0C78, 0x12D8,
	0x25F8, 0x2C58,
	0x1F98, 0x3918,
	0x0618
};

// 80134858
f32 dMNStagePreviewScale[9] = {
	0.50f , 0.20f,
	0.60f , 0.50f, 0.30f, 0.60f,
	0.50f , 0.40f, 0.20f
};

// 8013487C
Vec3f dMNStagePreviewTranslations[9] = {
	{ 1700.00f, 1800.00f, 0.00f },
	{ 1600.00f, 1600.00f, 0.00f },
	{ 1600.00f, 1600.00f, 0.00f },
	{ 1600.00f, 1600.00f, 0.00f },
	{ 1600.00f, 1500.00f, 0.00f },
	{ 1600.00f, 1600.00f, 0.00f },
	{ 1600.00f, 1500.00f, 0.00f },
	{ 1600.00f, 1600.00f, 0.00f },
	{ 1200.00f, 1600.00f, 0.00f },
};

// 801348E8
s32 D_801348E8_150458[9] = {
 	6, 3, 0, 8, 2, 1, 5, 7, 4
};

// 8013490C
scUnkDataBounds D_ovl30_8013490C = {
	0x80392A00, 0x803B6900,
	0x803DA800, 0x00000000,
	0x00000140, 0x000000F0,
	0x00016A99,
};

// 80134928
scRuntimeInfo D_ovl30_80134928 = {
	0x00000000, 0x8000A5E4,
	0x800A26B8, 0x80134E30,
	0x00000000, 0x00000001,
	0x00000002, 0x00004268,
	0x00001000, 0x00000000,
	0x00000000, 0x00008000,
	0x00020000, 0x00008000,
	0x80131B88, 0x80004310,
	0x00000000, 0x00000200,
	0x00000000, 0x00000000,
	0x00000000,	0x00000000,
	0x00000088,	0x00000000,
	0x00000000,	0x00000000,
	0x00000000,	0x00000000,
	0x00000000,	0x00000088,
	0x00000000,	0x0000006C,
	0x00000000,	0x00000090,
	0x80134304
};

// 80

// BSS
// 80134BD0
s32 D_ovl30_80134BD0;

// 80134BD4
s32 D_ovl30_80134BD4;

// 80134BD8
s32 gMNStageCursorSlotId;

// 80134BDC
GObj* gMNStageCursorGobj;

// 80134BE0
GObj* gMNStageNameLogoGobj;

// 80134BE4
GObj* gMNStageHeap0BackgroundGobj;

// 80134BE8
GObj* gMNStageHeap1BackgroundGobj;

// 80134BF0
GObj* gMNStageHeap0StageInfoArray[4];

// 80134C00
GObj* gMNStageHeap1StageInfoArray[4];

// 80134C10
mpGroundData* gMNStageGroundInfo;

// 80134C14;
Camera* gMNStagePreviewCam;

// 80134C18
sb32 gMNStageIsTrainingMode;

// 80134C1C; // flag indicating which bonus features are available
u8 gMNStageUnlockedMask;

// 80134C20
s32 gMNStageCurrentHeap;

// 80134C24; // frames elapsed on SSS
s32 gMNStageFramesElapsed;

// 80134C28; // frames until can move cursor again
s32 gMNStageScrollBuffer;

// 80134C2C // frames to wait until exiting the SSS
s32 gMNStageMaxFramesElapsed;

// 80134C30
u32 D_ovl30_80134C30[60]; // 240 bytes

// 80134D20
rdFileNode D_ovl30_80134D20[30];

// 80134E10
s32 gMNStageFilesArray[5];

// 80134E24;
uintptr_t gMNStageModelHeap0Ptr;

// 80134E28;
uintptr_t gMNStageModelHeap1Ptr;


// Forward declarations
void mnStagePositionStagePreviewCamera(Camera* stage_preview_cam, s32 stage_id);


// 80131B00
void mnStageAllocateStageModelHeaps()
{
	u32 size;
	u32 max = 0;
	s32 i;
	char* text0 = "IN THE SKY OF";
	char* text1 = "SECTOR Z";
	char* text2 = "CONGO JUNGLE";
	char* text3 = "PLANET ZEBES";
	char* text4 = "CASTLE OF HYRULE";
	char* text5 = "YOSHI'S ISLAND";
	char* text6 = "PUPUPU LAND";
	char* text7 = "YAMABUKI CITY";
	char* text8 = "CLASSIC MUSHROOM";
	char* text9 = "CASTLE PEACH";
	char* text10 = "ABOARD A GREAT FOX";
	char* text11 = "KINGDOM";

	for (i = 0; i < ARRAY_COUNT(dMNStageFileInfoArray); i++)
	{
		size = rdManagerGetFileSize(dMNStageFileInfoArray[i].id);

		if (max < size)
			max = size;
	}

	gMNStageModelHeap0Ptr = gsMemoryAlloc(max, 0x10);
	gMNStageModelHeap1Ptr = gsMemoryAlloc(max, 0x10);
}

// 80131B88
void mnStageSetLighting(Gfx** display_list)
{
	gSPDisplayList(display_list[0]++, &D_ovl30_801345A8);
}

// 80131BAC
sb32 mnStageGetIsLocked(s32 stage_id)
{
	if (stage_id == nGRKindInishie)
	{
		if (gMNStageUnlockedMask & GMBACKUP_UNLOCK_MASK_INISHIE)
			return FALSE;

		return TRUE;
	}

	return FALSE;
}

// 80131BE4
s32 mnStageGetChrIndex(const char chr)
{
	switch (chr)
	{
		case '\'':
			return 0x1A;
		case '%':
			return 0x1B;
		case '.':
			return 0x1C;
		case ' ':
			return 0x1D;
		default:
			if ((chr < 'A') || (chr > 'Z'))
				return 0x1D;
			else
				return chr - 0x41;
	}
}

// 80131C5C
f32 mnStageGetChrSpacing(const char *s, s32 c)
{
	switch (s[c])
	{
	case 'A':
		switch (s[c + 1])
		{
		case 'F':
		case 'P':
		case 'T':
		case 'V':
		case 'Y':
			return 0.0F;

		default:
			return 1.0F;
		}
		break;

	case 'F':
	case 'P':
	case 'V':
	case 'Y':
		switch(s[c + 1])
		{
		case 'A':
		case 'T':
			return 0.0F;

		default:
			return 1.0F;
		}
		break;

	case 'Q':
	case 'T':
		switch(s[c + 1])
		{
		case '\'':
		case '.':
			return 1.0F;

		default:
			return 0.0F;
		}
		break;

	case '\'':
		return 1.0F;

	case '.':
		return 1.0F;

	default:
		switch(s[c + 1])
		{
		case 'T':
			return 0.0F;

		default:
			return 1.0F;
		}
		break;
	}
}

// 80131D80 - Unused?
void mnStageDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
	intptr_t chrOffsets[29] = dMNStageChrOffsets;
	SObj* chr_sobj;
	f32 start_x = x;
	s32 i;

	for (i = 0; str[i] != 0; i++)
	{
		if (((((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE) != FALSE) || (str[i] == ' '))
		{
			if (str[i] == ' ')
				start_x += 4.0f;
			else
				start_x += str[i] - '0';
		}
		else
		{
			chr_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNStageFilesArray[3], chrOffsets[mnStageGetChrIndex(str[i])]));
			chr_sobj->pos.x = start_x;

			start_x += chr_sobj->sprite.width + mnStageGetChrSpacing(str, i);

			switch (str[i])
			{
				case '\'':
					chr_sobj->pos.y = y - 1.0F;
					break;
				case '.':
					chr_sobj->pos.y = y + 4.0F;
					break;
				default:
					chr_sobj->pos.y = y;
					break;
			}

			chr_sobj->sprite.attr &= ~SP_FASTCOPY;
			chr_sobj->sprite.attr |= SP_TRANSPARENT;
			chr_sobj->sprite.red = color[0];
			chr_sobj->sprite.green = color[1];
			chr_sobj->sprite.blue = color[2];
		}
	}
}

// 80131FA4
void mnStageCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	background_gobj = omMakeGObjSPAfter(0U, NULL, 0x2U, 0x80000000U);
	omAddGObjRenderProc(background_gobj, func_ovl0_800CCF00, 0x0U, 0x80000000U, -1);
	background_sobj = gcAppendSObjWithSprite(background_gobj, GetAddressFromOffset(gMNStageFilesArray[1], &FILE_015_BACKGROUND_IMAGE_OFFSET));
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->cms = G_TX_WRAP;
	background_sobj->maskt = 6;
	background_sobj->masks = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 80132048
void mnStageCreateWoodenCircle()
{
	GObj* wooden_circle_gobj;
	SObj* wooden_circle_sobj;

	wooden_circle_gobj = omMakeGObjSPAfter(0U, NULL, 8U, 0x80000000U);
	omAddGObjRenderProc(wooden_circle_gobj, func_ovl0_800CCF00, 6U, 0x80000000U, -1);

	wooden_circle_sobj = gcAppendSObjWithSprite(wooden_circle_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET));
	wooden_circle_sobj->sprite.attr &= ~SP_FASTCOPY;
	wooden_circle_sobj->sprite.attr |= SP_TRANSPARENT;
	wooden_circle_sobj->pos.x = 189.0f;
	wooden_circle_sobj->pos.y = 124.0f;
}

// 801320E0
void mnStageRenderStageSelectGfx(GObj* stage_select_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
	gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
	gDPFillRectangle(gDisplayListHead[0]++, 160, 128, 320, 134);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, 0x33);
	gDPFillRectangle(gDisplayListHead[0]++, 194, 189, 268, 193);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	func_ovl0_800CCEAC();
	func_ovl0_800CCF00(stage_select_gobj);
}

// 80132288
void mnStageCreateStageSelectGfx()
{
	GObj* stage_select_gobj;
	SObj* stage_select_sobj;
	SObj* yellow_oval_left_sobj;
	SObj* yellow_oval_center_sobj;
	SObj* yellow_oval_right_sobj;
	s32 x;

	stage_select_gobj = omMakeGObjSPAfter(0U, NULL, 6U, 0x80000000U);
	omAddGObjRenderProc(stage_select_gobj, mnStageRenderStageSelectGfx, 4U, 0x80000000U, -1);

	// Stage Select texture
	stage_select_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_STAGE_SELECT_IMAGE_OFFSET));
	stage_select_sobj->sprite.attr &= ~SP_FASTCOPY;
	stage_select_sobj->sprite.attr |= SP_TRANSPARENT;
	stage_select_sobj->shadow_color.r = 0;
	stage_select_sobj->shadow_color.g = 0;
	stage_select_sobj->shadow_color.b = 0;
	stage_select_sobj->sprite.red = 0xAF;
	stage_select_sobj->sprite.green = 0xB1;
	stage_select_sobj->sprite.blue = 0xCC;
	stage_select_sobj->pos.x = 172.0f;
	stage_select_sobj->pos.y = 122.0f;

	// Yellow oval left edge
	yellow_oval_left_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET));
	yellow_oval_left_sobj->sprite.attr &= ~SP_FASTCOPY;
	yellow_oval_left_sobj->sprite.attr |= SP_TRANSPARENT;
	yellow_oval_left_sobj->pos.x = 174.0f;
	yellow_oval_left_sobj->pos.y = 191.0f;

	// Yellow oval middle section
	for (x = 0xBA; x < 0x106; x += 4)
	{
		yellow_oval_center_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET));
		yellow_oval_center_sobj->pos.x = x;
		yellow_oval_center_sobj->pos.y = 191.0f;
	}

	// Yellow oval right edge
	yellow_oval_right_sobj = gcAppendSObjWithSprite(stage_select_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET));
	yellow_oval_right_sobj->sprite.attr &= ~SP_FASTCOPY;
	yellow_oval_right_sobj->sprite.attr |= SP_TRANSPARENT;
	yellow_oval_right_sobj->pos.x = 262.0f;
	yellow_oval_right_sobj->pos.y = 191.0f;
}

// 80132430
s32 mnStageGetStageID(s32 slot_id)
{
	s32 stage_ids[10] = dMNStageIDOrder;

	if (slot_id == 9)
		return 0xDE;

	return stage_ids[slot_id];
}

// 80132498
s32 mnStageGetSlotID(s32 stage_id)
{
	switch (stage_id)
	{
		case 0x0:
			return 0;
		case 0x2:
			return 1;
		case 0x4:
			return 2;
		case 0x3:
			return 3;
		case 0x8:
			return 4;
		case 0x5:
			return 5;
		case 0x6:
			return 6;
		case 0x1:
			return 7;
		case 0x7:
			return 8;
		case 0xDE:
			return 9;
	}
}

// 80132528
void mnStageCreateStageImages()
{
	GObj* stage_image_gobj;
	SObj* stage_image_sobj;
	intptr_t offsets[10] = dMNStageImageOffsets;
	s32 x;
	s32 i;

	stage_image_gobj = omMakeGObjSPAfter(0U, NULL, 3U, 0x80000000U);
	omAddGObjRenderProc(stage_image_gobj, func_ovl0_800CCF00, 1U, 0x80000000U, -1);

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnStageGetIsLocked(mnStageGetStageID(i)) == FALSE)
		{
			x = i * 50;

			if (i == 9)
				stage_image_sobj = gcAppendSObjWithSprite(stage_image_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_RANDOM_IMAGE_OFFSET));
			else
				stage_image_sobj = gcAppendSObjWithSprite(stage_image_gobj, GetAddressFromOffset(gMNStageFilesArray[2], offsets[mnStageGetStageID(i)]));

			if (i < 5)
			{
				stage_image_sobj->pos.y = 30.0f;
				stage_image_sobj->pos.x = x + 30;
			}
			else
			{
				stage_image_sobj->pos.y = 68.0f;
				stage_image_sobj->pos.x = x - 220;
			}
		}
	}
}

// 801326DC
void mnStagePositionStageName(SObj* stage_name_sobj, s32 stage_id)
{
	Vec2f positions[9] = dMNStageNamePositions;

	stage_name_sobj->pos.x = 183.0f;
	stage_name_sobj->pos.y = 196.0f;
}

// 80132738
void mnStageCreateStageName(GObj* name_logo_gobj, s32 stage_id)
{
	SObj* stage_name_sobj;
	intptr_t offsets[9] = dMNStageNameImageOffsets;

	stage_name_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMNStageFilesArray[2], offsets[stage_id]));
	mnStagePositionStageName(stage_name_sobj, stage_id);

	stage_name_sobj->sprite.attr &= ~SP_FASTCOPY;
	stage_name_sobj->sprite.attr |= SP_TRANSPARENT;
	stage_name_sobj->sprite.red = 0;
	stage_name_sobj->sprite.green = 0;
	stage_name_sobj->sprite.blue = 0;
}

// 801327E0 - Unused?
void func_ovl30_801327E0()
{
	return;
}

// 801327E8 - Unused?
void func_ovl30_801327E8()
{
	return;
}

// 801327F0
void mnStagePositionLogo(GObj* name_logo_gobj, s32 stage_id)
{
	Vec2f positions[10] = dMNStageLogoPositions;

	if (stage_id == 0xDE)
	{
		SObjGetStruct(name_logo_gobj)->pos.x = 223.0f;
		SObjGetStruct(name_logo_gobj)->pos.y = 144.0f;
	}
	else
	{
		SObjGetStruct(name_logo_gobj)->pos.x = positions[stage_id].x + 189.0f;
		SObjGetStruct(name_logo_gobj)->pos.y = positions[stage_id].y + 124.0f;
	}
}

// 801328A8
void mnStageCreateLogo(GObj* name_logo_gobj, s32 stage_id)
{
	SObj* name_logo_sobj;
	intptr_t offsets[9] = dMNStageLogoOffsets;

	if (stage_id == 0xDE)
	{
		name_logo_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_SMASH_LOGO_IMAGE_OFFSET));
		name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
		name_logo_sobj->sprite.red = 0x5C;
		name_logo_sobj->sprite.green = 0x22;
		name_logo_sobj->sprite.blue = 0;
	}
	else
	{
		name_logo_sobj = gcAppendSObjWithSprite(name_logo_gobj, GetAddressFromOffset(gMNStageFilesArray[0], offsets[stage_id]));
		name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
		name_logo_sobj->sprite.red = 0x5C;
		name_logo_sobj->sprite.green = 0x22;
		name_logo_sobj->sprite.blue = 0;
	}

	mnStagePositionLogo(name_logo_gobj, stage_id);
}

// 801329AC
void mnStageCreateStageNameAndLogo(s32 slot_id)
{
	GObj* name_logo_gobj;

	if (gMNStageNameLogoGobj != NULL)
	{
		omEjectGObj(gMNStageNameLogoGobj);
	}

	name_logo_gobj = omMakeGObjSPAfter(0U, NULL, 4U, 0x80000000U);
	gMNStageNameLogoGobj = name_logo_gobj;
	omAddGObjRenderProc(name_logo_gobj, func_ovl0_800CCF00, 2U, 0x80000000U, -1);
	mnStageCreateLogo(gMNStageNameLogoGobj, mnStageGetStageID(slot_id));

	if (slot_id != 9)
	{
		mnStageCreateStageName(gMNStageNameLogoGobj, mnStageGetStageID(slot_id));
	}
}

// 80132A58
void mnStagePositionCursor(GObj* cursor_gobj, s32 slot_id)
{
	if (slot_id < 5)
	{
		SObjGetStruct(cursor_gobj)->pos.x = (slot_id * 50) + 23;
		SObjGetStruct(cursor_gobj)->pos.y = 23.0F;
	}
	else
	{
		SObjGetStruct(cursor_gobj)->pos.x = (slot_id * 50) - 250 + 23;
		SObjGetStruct(cursor_gobj)->pos.y = 61.0F;
	}
}

// 80132ADC
void mnStageCreateCursor()
{
	GObj* cursor_gobj;
	SObj* cursor_sobj;

	gMNStageCursorGobj = cursor_gobj = omMakeGObjSPAfter(0U, NULL, 7U, 0x80000000U);
	omAddGObjRenderProc(cursor_gobj, func_ovl0_800CCF00, 5U, 0x80000000U, -1);

	cursor_sobj = gcAppendSObjWithSprite(cursor_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_CURSOR_IMAGE_OFFSET));
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = 0xFF;
	cursor_sobj->sprite.green = 0;
	cursor_sobj->sprite.blue = 0;

	mnStagePositionCursor(cursor_gobj, gMNStageCursorSlotId);
}

// 80132B84
void mnStageLoadStageFile(s32 stage_id, u8* heapAddr)
{
	gMNStageGroundInfo = (s32)rldm_get_file_external_force_heap(dMNStageFileInfoArray[stage_id].id, heapAddr) + dMNStageFileInfoArray[stage_id].header_size;
}

// 80132BC8
void mnStageRenderStagePreviewBackground(s32 stage_preview_bg_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
	gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x00, 0x00, 0x00, 0x73);
	gDPFillRectangle(gDisplayListHead[0]++, 43, 130, 152, 211);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	func_ovl0_800CCEAC();
	func_ovl0_800CCF00(stage_preview_bg_gobj);
}

// 80132D2C
GObj* mnStageCreateStagePreviewBackground(s32 stage_id)
{
	GObj* stage_preview_bg_gobj;
	SObj* stage_preview_bg_sobj;
	s32 x;

	stage_preview_bg_gobj = omMakeGObjSPAfter(0U, NULL, 9U, 0x80000000U);
	omAddGObjRenderProc(stage_preview_bg_gobj, mnStageRenderStagePreviewBackground, 7U, 0x80000000U, -1);

	// draw patterned bg
	for (x = 0x2B; x < 0x9B; x += 0x10)
	{
		stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET));
		stage_preview_bg_sobj->pos.x = x;
		stage_preview_bg_sobj->pos.y = 130.0f;

		if (TRUE); // grrrrrr
	}

	// Check if Random
	if (stage_id == 0xDE)
	{
		// If Random, use Random image
		stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(gMNStageFilesArray[2], &FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET));
		stage_preview_bg_sobj->pos.x = 40.0f;
		stage_preview_bg_sobj->pos.y = 127.0f;
	}
	else
	{
		// If not Random, check if Training Mode
		if (gMNStageIsTrainingMode == TRUE)
		{
			// If Training Mode, use Smash logo bg
			stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, GetAddressFromOffset(rldm_get_file_external_force_heap(dMNStageTrainingBackgroundFileNodes[dMNStageTrainingBackgroundIDs[stage_id]].id, (uintptr_t)gMNStageGroundInfo->wallpaper - dMNStageBackgroundFileOffsets[stage_id]), &FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET));
		}
		else
		{
			// Use stage bg
			stage_preview_bg_sobj = gcAppendSObjWithSprite(stage_preview_bg_gobj, gMNStageGroundInfo->wallpaper);
		}

		stage_preview_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
		stage_preview_bg_sobj->sprite.scalex = 0.37F;
		stage_preview_bg_sobj->sprite.scaley = 0.37F;
		stage_preview_bg_sobj->pos.x = 40.0f;
		stage_preview_bg_sobj->pos.y = 127.0f;
	}

	return stage_preview_bg_gobj;
}

// 80132EF0
void mnStageRenderStagePreviewPrimary(GObj* stage_geo_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	odRenderDObjTreeForGObj(stage_geo_gobj);
}

// 80132F70
void mnStageRenderStagePreviewSecondary(GObj* stage_geo_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPPipeSync(gDisplayListHead[1]++);
	gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);
	gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
	odRenderDObjTreeDLLinksForGObj(stage_geo_gobj);
}

// 8013303C
GObj* mnStageCreateStageGeo(s32 stage_id, mpGroundData* stage_info, mpGroundDesc* stage_geo, s32 stage_geo_id)
{
	GObj* stage_geo_gobj;
	f32 scale[9] = dMNStagePreviewScale;

	if (stage_geo->dobj_desc == NULL)
	{
		return NULL;
	}

	stage_geo_gobj = omMakeGObjSPAfter(0U, NULL, 5U, 0x80000000U);
	omAddGObjRenderProc(stage_geo_gobj, (stage_info->layer_mask & (1 << stage_geo_id)) ? mnStageRenderStagePreviewSecondary : mnStageRenderStagePreviewPrimary, 3U, 0x80000000U, -1);
	func_8000F590(stage_geo_gobj, stage_geo->dobj_desc, NULL, 0x1CU, 0, 0);

	if (stage_geo->p_mobjsubs != NULL)
	{
		gcAddMObjSubAll(stage_geo_gobj, stage_geo->p_mobjsubs);
	}

	if ((stage_geo->anim_joints != NULL) || (stage_geo->p_matanim_joints != NULL))
	{
		gcAddAnimAll(stage_geo_gobj, stage_geo->anim_joints, stage_geo->p_matanim_joints, 0.0F);
		gcPlayAnimAll(stage_geo_gobj);
	}

	DObjGetStruct(stage_geo_gobj)->scale.vec.f.x = scale[stage_id];
	DObjGetStruct(stage_geo_gobj)->scale.vec.f.y = scale[stage_id];
	DObjGetStruct(stage_geo_gobj)->scale.vec.f.z = scale[stage_id];

	return stage_geo_gobj;
}

// 801331AC
void mnStageCreateStageGeos(s32 stage_id, mpGroundData* stage_info, s32 heap_id)
{
	DObj* stage_dobj;
	DObj* next_dobj;
	GObj** stage_info_array = (heap_id == 0) ? &gMNStageHeap1StageInfoArray : &gMNStageHeap0StageInfoArray;
	s32 i;

	stage_info_array[0] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[0], 0);
	stage_info_array[1] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[1], 1);
	stage_info_array[2] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[2], 2);
	stage_info_array[3] = mnStageCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[3], 3);

	if (stage_id == nGRKindYamabuki)
	{
		DObjGetChild(DObjGetChild(DObjGetStruct(stage_info_array[3])))->flags = DOBJ_FLAG_NORENDER;
	}

	if (stage_id == nGRKindYoster)
	{
		for (next_dobj = stage_dobj = DObjGetStruct(stage_info_array[0]), i = 1; next_dobj != NULL; next_dobj = func_ovl0_800C86E8(next_dobj, stage_dobj), i += 1)
		{
			if ((i == 0xF) || (i == 0x11))
				next_dobj->flags = DOBJ_FLAG_NORENDER;
		}
	}
}

// 801332DC
void mnStageDestroyStagePreview(s32 heap_id)
{
	s32 i;

	if (heap_id == 0)
	{
		if (gMNStageHeap0BackgroundGobj != NULL)
		{
			omEjectGObj(gMNStageHeap0BackgroundGobj);
			gMNStageHeap0BackgroundGobj = NULL;
		}

		for (i = 0; i < ARRAY_COUNT(gMNStageHeap0StageInfoArray); i++)
		{
			if (gMNStageHeap0StageInfoArray[i] != NULL)
			{
				omEjectGObj(gMNStageHeap0StageInfoArray[i]);
				gMNStageHeap0StageInfoArray[i] = NULL;
			}
		}
	}
	else
	{
		if (gMNStageHeap1BackgroundGobj != NULL)
		{
			omEjectGObj(gMNStageHeap1BackgroundGobj);
			gMNStageHeap1BackgroundGobj = NULL;
		}

		for (i = 0; i < ARRAY_COUNT(gMNStageHeap1StageInfoArray); i++)
		{
			if (gMNStageHeap1StageInfoArray[i] != NULL)
			{
				omEjectGObj(gMNStageHeap1StageInfoArray[i]);
				gMNStageHeap1StageInfoArray[i] = NULL;
			}
		}
	}
}

// 801333B4
void mnStageCreateStagePreview(s32 stage_id)
{
	if (stage_id != 0xDE)
	{
		if (gMNStageCurrentHeap == 0)
			mnStageLoadStageFile(stage_id, gMNStageModelHeap1Ptr);
		else
			mnStageLoadStageFile(stage_id, gMNStageModelHeap0Ptr);
	}

	if (gMNStageCurrentHeap == 0)
		gMNStageHeap1BackgroundGobj = mnStageCreateStagePreviewBackground(stage_id);
	else
		gMNStageHeap0BackgroundGobj = mnStageCreateStagePreviewBackground(stage_id);

	if (stage_id != 0xDE)
	{
		mnStageCreateStageGeos(stage_id, gMNStageGroundInfo, gMNStageCurrentHeap);
		mnStagePositionStagePreviewCamera(gMNStagePreviewCam, stage_id);
	}

	mnStageDestroyStagePreview(gMNStageCurrentHeap);

	gMNStageCurrentHeap = (gMNStageCurrentHeap == 0) ? 1 : 0;
}

// 801334AC
void mnStageCreateBackgroundViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x00000001, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013354C
void mnStageCreateWoodenCircleViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x28, 0x00000040, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801335EC
void mnStageCreateStagePreviewBackgroundViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x46, 0x00000080, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013368C
void mnStageCreateStageSelectGfxViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x1E, 0x00000010, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013372C
void mnStageCreateStageImagesViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x3C, 0x00000002, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801337CC
void mnStageCreateStageNameAndLogoViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x00000004, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013386C
void mnStageCreateCursorViewport()
{
	GObj *camera_gobj = func_8000B93C(0x1, NULL, 0x1, 0x80000000U, func_ovl0_800CD2CC, 0x32, 0x00000020, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013390C
void mnStagePositionStagePreviewCamera(Camera* stage_preview_cam, s32 stage_id)
{
	Vec3f positions[9] = dMNStagePreviewTranslations;

	if (stage_id == 0xDE)
		stage_id = 0;

	stage_preview_cam->vec.eye.x = -3000.0F;
	stage_preview_cam->vec.eye.y = 3000.0F;
	stage_preview_cam->vec.eye.z = 9000.0F;
	stage_preview_cam->vec.up.x = 0.0f;
	stage_preview_cam->vec.up.y = 1.0f;
	stage_preview_cam->vec.up.z = 0.0f;
	stage_preview_cam->vec.at.x = positions[stage_id].x;
	stage_preview_cam->vec.at.y = positions[stage_id].y;
	stage_preview_cam->vec.at.z = positions[stage_id].z;
}

// 801339C4
void mnStageAdjustStagePreviewY(GObj* stage_preview_cam_gobj)
{
	Camera* cam = CameraGetStruct(stage_preview_cam_gobj);
	f32 y = cam->vec.at.y;
	f32 deg = 0.0F;

	while (TRUE)
	{
		cam->vec.at.y = __sinf(F_DEG_TO_RAD(deg)) * 40.0F + y;

		deg = (deg + 2.0F > 360.0F) ? deg + 2.0F - 360.0F : deg + 2.0F;

		gsStopCurrentProcess(1);
	}
}

// 80133A88
void mnStageCreateStagePreviewViewport()
{
	int foo;
	GObj* stage_preview_cam_gobj = func_8000B93C(1U, NULL, 1, 0x80000000U, &func_80017DBC, 0x41, 0x00000008, -1, 1, 0, 0, 1, 0);
	Camera* cam = CameraGetStruct(stage_preview_cam_gobj);

	gMNStagePreviewCam = cam;

	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->projection.persp.far = 16384.0F;

	mnStagePositionStagePreviewCamera(cam, mnStageGetStageID(gMNStageCursorSlotId));

	omAddGObjCommonProc(stage_preview_cam_gobj, mnStageAdjustStagePreviewY, 0, 1);
}

// 80133B78
void mnStageSaveSceneData()
{
	s32 unused[9] = D_801348E8_150458;
	s32 stage_id;

	if (gMNStageCursorSlotId == 9)
	{
		do
		{
			stage_id = mtTrigGetRandomTimeUCharRange(9);
		} while (mnStageGetIsLocked(stage_id) != FALSE || stage_id == gSceneData.gr_kind);

		gSceneData.gr_kind = stage_id;
	}
	else
		gSceneData.gr_kind = mnStageGetStageID(gMNStageCursorSlotId);

	if (gMNStageIsTrainingMode == FALSE)
		gSceneData.sss_battle_gr_kind = mnStageGetStageID(gMNStageCursorSlotId);

	if (gMNStageIsTrainingMode == TRUE)
		gSceneData.sss_training_gr_kind = mnStageGetStageID(gMNStageCursorSlotId);
}

// 80133C6C
void mnStageLoadSceneData()
{
	s32 i;

	gMNStageNameLogoGobj = NULL;
	gMNStageHeap0BackgroundGobj = NULL;
	gMNStageHeap1BackgroundGobj = NULL;

	for (i = 0; i < ARRAY_COUNT(gMNStageHeap0StageInfoArray); i++)
	{
		gMNStageHeap0StageInfoArray[i] = NULL;
		gMNStageHeap1StageInfoArray[i] = NULL;
	}

	switch (gSceneData.scene_previous)
	{
		case 0x12:
			gMNStageIsTrainingMode = TRUE;
			gMNStageCursorSlotId = mnStageGetSlotID(gSceneData.sss_training_gr_kind);
			break;
		case scMajor_Kind_VSChrSel:
			gMNStageIsTrainingMode = FALSE;
			gMNStageCursorSlotId = mnStageGetSlotID(gSceneData.sss_battle_gr_kind);
			break;
	}

	gMNStageUnlockedMask = gSaveData.unlock_mask;
	gMNStageCurrentHeap = 1;
	gMNStageFramesElapsed = 0;
	gMNStageMaxFramesElapsed = gMNStageFramesElapsed + I_MIN_TO_FRAMES(5);
}

// 80133D60
void mnStageSaveSceneData2()
{
	mnStageSaveSceneData();
}

// 80133D80
void mnStageHandleButtonPresses(s32 arg0)
{
	s32 unused;
	s32 stick_input;
	s32 button_input;

	gMNStageFramesElapsed += 1;

	if (gMNStageFramesElapsed >= 10)
	{
		if (gMNStageFramesElapsed == gMNStageMaxFramesElapsed)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = scMajor_Kind_Title;

			mnStageSaveSceneData2();
			leoInitUnit_atten();
			return;
		}

		if (func_ovl1_80390B7C() == FALSE)
			gMNStageMaxFramesElapsed = gMNStageFramesElapsed + I_MIN_TO_FRAMES(5);

		if (gMNStageScrollBuffer != 0)
			gMNStageScrollBuffer -= 1;

		if (
			(func_ovl1_80390A04(-0x14, 0x14) != FALSE)
			&& (func_ovl1_80390AC0(-0x14, 0x14) != FALSE)
			&& (func_ovl1_80390804(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE)
			&& (func_ovl1_80390804(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
		)
		{
			gMNStageScrollBuffer = 0;
		}

		if (func_ovl1_8039076C(A_BUTTON | START_BUTTON) != FALSE)
		{
			mnStageSaveSceneData2();
			func_800269C0_275C0(0x9FU);

			if (gMNStageIsTrainingMode == TRUE)
			{
				gSceneData.scene_previous = gSceneData.scene_current;
				gSceneData.scene_current = scMajor_Kind_1PTrainingMode;
			}
			else
			{
				gSceneData.scene_previous = gSceneData.scene_current;
				gSceneData.scene_current = scMajor_Kind_VSBattle;
			}

			leoInitUnit_atten();
		}

		if (func_ovl1_8039076C(B_BUTTON) != FALSE)
		{
			mnStageSaveSceneData2();

			if (gMNStageIsTrainingMode == TRUE)
			{
				gSceneData.scene_previous = gSceneData.scene_current;
				gSceneData.scene_current = scMajor_Kind_TrainingChrSel;
			}
			else
			{
				gSceneData.scene_previous = gSceneData.scene_current;
				gSceneData.scene_current = scMajor_Kind_VSChrSel;
			}

			leoInitUnit_atten();
		}

		if (gMNStageScrollBuffer == 0)
		{
			button_input = func_ovl1_80390804(U_JPAD | U_CBUTTONS);

			if ((button_input != FALSE) || (stick_input = func_ovl1_80390950(0x14, 1), (stick_input != 0)))
			{
				if ((gMNStageCursorSlotId >= 5) && (mnStageGetIsLocked(mnStageGetStageID(gMNStageCursorSlotId - 5)) == FALSE))
				{
					func_800269C0_275C0(0xA4U);

					gMNStageCursorSlotId -= 5;

					mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
					mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
					mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));
				}

				if (button_input != FALSE)
					gMNStageScrollBuffer = 12;
				else
					gMNStageScrollBuffer = (0xA0 - stick_input) / 7;

				return;
			}

			button_input = func_ovl1_80390804(D_JPAD | D_CBUTTONS);

			if ((button_input != FALSE) || (stick_input = func_ovl1_80390950(-0x14, 0), (stick_input != 0)))
			{
				if ((gMNStageCursorSlotId < 5) && (mnStageGetIsLocked(mnStageGetStageID(gMNStageCursorSlotId + 5)) == FALSE))
				{
					func_800269C0_275C0(0xA4U);

					gMNStageCursorSlotId += 5;

					mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
					mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
					mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));
				}

				if (button_input != FALSE)
					gMNStageScrollBuffer = 12;
				else
					gMNStageScrollBuffer = (stick_input + 0xA0) / 7;
				return;
			}

			button_input = func_ovl1_80390804(L_JPAD | L_TRIG | L_CBUTTONS);

			if ((button_input != FALSE) || (stick_input = func_ovl1_8039089C(-0x14, 0), (stick_input != FALSE)))
			{
				switch (gMNStageCursorSlotId)
				{
					case 0:
						gMNStageCursorSlotId = (mnStageGetIsLocked(mnStageGetStageID(4)) != FALSE) ? 3 : 4;
						break;
					case 5:
						gMNStageCursorSlotId = 9;
						break;
					default:
						gMNStageCursorSlotId -= 1;
				}

				func_800269C0_275C0(0xA4U);
				mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
				mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
				mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));

				if (button_input != FALSE)
					gMNStageScrollBuffer = 12;
				else
					gMNStageScrollBuffer = (stick_input + 0xA0) / 7;

				return;
			}

			button_input = func_ovl1_80390804(R_JPAD | R_TRIG | R_CBUTTONS);

			if ((button_input != FALSE) || (stick_input = func_ovl1_8039089C(0x14, 1), (stick_input != FALSE)))
			{
				switch (gMNStageCursorSlotId)
				{
					case 3:
						gMNStageCursorSlotId = (mnStageGetIsLocked(mnStageGetStageID(4)) != FALSE) ? 0 : 4;
						break;
					case 4:
						gMNStageCursorSlotId = 0;
						break;
					case 9:
						gMNStageCursorSlotId = 5;
						break;
					default:
						gMNStageCursorSlotId += 1;
				}

				func_800269C0_275C0(0xA4U);
				mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
				mnStagePositionCursor(gMNStageCursorGobj, gMNStageCursorSlotId);
				mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));

				if (button_input != 0)
					gMNStageScrollBuffer = 12;
				else
					gMNStageScrollBuffer = (0xA0 - stick_input) / 7;
			}
		}
	}
}

// 80134304
void mnStageInitSSS()
{
	s32 foo;
	s32 bar;
	rdSetup rldmSetup;
	s32 baz;

	rldmSetup.table_addr = &lRDManagerTableAddr;
	rldmSetup.table_files_num = &lRDManagerTableFilesNum;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl30_80134C30;
	rldmSetup.status_buf_size = 0x1E;
	rldmSetup.force_buf = (rdFileNode*) &D_ovl30_80134D20;
	rldmSetup.force_buf_size = 0x1E;
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl30_801344D0, ARRAY_COUNT(D_ovl30_801344D0), gMNStageFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl30_801344D0, ARRAY_COUNT(D_ovl30_801344D0)), 0x10));

	mnStageAllocateStageModelHeaps();

	omMakeGObjSPAfter(0U, mnStageHandleButtonPresses, 0U, 0x80000000U);
	func_8000B9FC(1, 0x80000000U, 0x64, 1, 0);
	mnStageLoadSceneData();
	mnStageCreateBackgroundViewport();
	mnStageCreateStageSelectGfxViewport();
	mnStageCreateStageImagesViewport();
	mnStageCreateStageNameAndLogoViewport();
	mnStageCreateCursorViewport();
	mnStageCreateStagePreviewViewport();
	mnStageCreateWoodenCircleViewport();
	mnStageCreateStagePreviewBackgroundViewport();
	mnStageCreateBackground();
	mnStageCreateWoodenCircle();
	mnStageCreateStageSelectGfx();
	mnStageCreateStageImages();
	mnStageCreateStageNameAndLogo(gMNStageCursorSlotId);
	mnStageCreateCursor();
	mnStageCreateStagePreview(mnStageGetStageID(gMNStageCursorSlotId));
}

// 8013446C
void mnStageStartScene()
{
	D_ovl30_8013490C.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
	func_80007024(&D_ovl30_8013490C);
	D_ovl30_80134928.arena_size = (u32) ((uintptr_t)&lOverlay30ArenaHi - (uintptr_t)&lOverlay30ArenaLo);
	func_800A2698(&D_ovl30_80134928);
}
