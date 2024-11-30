#include <gr/ground.h>
#include <gm/gmsound.h> // temporary, until this finds a proper place
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>
#include <sys/thread6.h>

// Externs
extern intptr_t lOverlay30ArenaLo;  // 0x80134E30
extern intptr_t lOverlay30ArenaHi;  // 0x803903E0
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

extern void scManagerFuncDraw();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);



// Forward declarations
void mnStagesPositionStagePreviewCamera(CObj* stage_preview_cobj, s32 stage_id);


// Stuff - where does it go?!?
typedef struct mnStagesFileInfo
{
	/* 0x00 */ u32 id;
	/* 0x04 */ u32 header_size;

} mnStagesFileInfo;


// DATA
// 0x801344D0
u32 D_ovl30_801344D0[5] = {

	0x14, 0x15, 0x1e, 0x21, 0x1a
};

// 0x801344E4
mnStagesFileInfo dMNStagesFileInfoArray[9] = {

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

// 0x8013452C
intptr_t dMNStagesBackgroundFileOffsets[9] = {

	0x00026c88, 0x00026c88, 0x00026c88,
	0x00026c88, 0x00026c88, 0x00026c88,
	0x00026c88, 0x00026c88, 0x00026c88
};

// 0x80134550
LBFileNode dMNStagesTrainingBackgroundFileNodes[3] = {

	{ 0x0000001a, 0x00000000 },
	{ 0x0000001b, 0xee9e0600 },
	{ 0x0000001c, 0xaff5ff00 }
};

// 0x80134568
s32 dMNStagesTrainingBackgroundIDs[10] = {

	2, 0, 0, 0, 2, 1, 2, 2, 2, 0
};

// 0x80134590
Lights1 D_ovl30_80134590 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14); // 20202000 20202000 FFFFFF00 FFFFFF00 14141400 00000000

// 0x801345A8
Gfx D_ovl30_801345A8[] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(D_ovl30_80134590),
	gsSPEndDisplayList()
};


// BSS
// 0x80134BD0
s32 D_ovl30_80134BD0;

// 0x80134BD4
s32 D_ovl30_80134BD4;

// 0x80134BD8
s32 gMNStagesCursorSlotId;

// 0x80134BDC
GObj* gMNStagesCursorGobj;

// 0x80134BE0
GObj* gMNStagesNameLogoGobj;

// 0x80134BE4
GObj* gMNStagesHeap0BackgroundGobj;

// 0x80134BE8
GObj* gMNStagesHeap1BackgroundGobj;

// 0x80134BF0
GObj* gMNStagesHeap0StageInfoArray[4];

// 0x80134C00
GObj* gMNStagesHeap1StageInfoArray[4];

// 0x80134C10
MPGroundData* gMNStagesGroundInfo;

// 0x80134C14;
CObj* gMNStagesPreviewCam;

// 0x80134C18
sb32 gMNStagesIsTrainingMode;

// 0x80134C1C; // flag indicating which bonus features are available
u8 gMNStagesUnlockedMask;

// 0x80134C20
s32 gMNStagesCurrentHeap;

// 0x80134C24; // frames elapsed on SSS
s32 gMNStagesTotalTimeTics;

// 0x80134C28; // frames until can move cursor again
s32 gMNStagesScrollBuffer;

// 0x80134C2C // frames to wait until exiting the SSS
s32 gMNStagesMaxTotalTimeTics;

// 0x80134C30
u32 D_ovl30_80134C30[60]; // 240 bytes

// 0x80134D20
LBFileNode D_ovl30_80134D20[30];

// 0x80134E10
void *gMNStagesFiles[5];

// 0x80134E24;
void *gMNStagesModelHeap0Ptr;

// 0x80134E28;
void *gMNStagesModelHeap1Ptr;

// 0x80131B00
void mnStagesAllocateStageModelHeaps()
{
	u32 size;
	u32 max = 0;
	s32 i;

	for (i = 0; i < ARRAY_COUNT(dMNStagesFileInfoArray); i++)
	{
		size = lbRelocGetFileSize(dMNStagesFileInfoArray[i].id);

		if (max < size)
			max = size;
	}

	gMNStagesModelHeap0Ptr = syTaskmanMalloc(max, 0x10);
	gMNStagesModelHeap1Ptr = syTaskmanMalloc(max, 0x10);
}

// 0x80131B88
void mnStagesSetLighting(Gfx** display_list)
{
	gSPDisplayList(display_list[0]++, &D_ovl30_801345A8);
}

// 0x80131BAC
sb32 mnStagesGetIsLocked(s32 stage_id)
{
	if (stage_id == nGRKindInishie)
	{
		if (gMNStagesUnlockedMask & LBBACKUP_UNLOCK_MASK_INISHIE)
			return FALSE;

		return TRUE;
	}

	return FALSE;
}

// 0x80131BE4
s32 mnStagesGetChrIndex(const char chr)
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

// 0x80131C5C
f32 mnStagesGetChrSpacing(const char *s, s32 c)
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

// 0x80131D80 - Unused?
void mnStagesDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
	intptr_t chrOffsets[29] = {

		0x00000040, 0x000000d0, 0x00000160, 0x000001f0,
		0x00000280, 0x00000310, 0x000003a0, 0x00000430,
		0x000004c0, 0x00000550, 0x000005e0, 0x00000670,
		0x00000700, 0x00000790, 0x00000820, 0x000008b0,
		0x00000940, 0x000009d0, 0x00000a60, 0x00000af0,
		0x00000b80, 0x00000c10, 0x00000ca0, 0x00000d30,
		0x00000dc0, 0x00000e50, 0x00000ed0, 0x00000f60,
		0x00000fd0
	};
	SObj* chr_sobj;
	f32 start_x = x;
	s32 i;

	for (i = 0; str[i] != 0; i++)
	{
		if (((((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE)) || (str[i] == ' '))
		{
			if (str[i] == ' ')
				start_x += 4.0f;
			else
				start_x += str[i] - '0';
		}
		else
		{
			chr_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gMNStagesFiles[3], chrOffsets[mnStagesGetChrIndex(str[i])]));
			chr_sobj->pos.x = start_x;

			start_x += chr_sobj->sprite.width + mnStagesGetChrSpacing(str, i);

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

// 0x80131FA4
void mnStagesCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x2U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x0U, GOBJ_PRIORITY_DEFAULT, ~0);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, gMNStagesFiles[1], &FILE_015_BACKGROUND_IMAGE_OFFSET));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 0x80132048
void mnStagesCreateWoodenCircle()
{
	GObj* wooden_circle_gobj;
	SObj* wooden_circle_sobj;

	wooden_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 8U, 0x80000000U);
	gcAddGObjDisplay(wooden_circle_gobj, lbCommonDrawSObjAttr, 6U, GOBJ_PRIORITY_DEFAULT, ~0);

	wooden_circle_sobj = lbCommonMakeSObjForGObj(wooden_circle_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET));
	wooden_circle_sobj->sprite.attr &= ~SP_FASTCOPY;
	wooden_circle_sobj->sprite.attr |= SP_TRANSPARENT;
	wooden_circle_sobj->pos.x = 189.0f;
	wooden_circle_sobj->pos.y = 124.0f;
}

// 0x801320E0
void mnStagesRenderStageSelectGfx(GObj* stage_select_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
	gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 160, 128, 320, 134);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, 0x33);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 194, 189, 268, 193);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(stage_select_gobj);
}

// 0x80132288
void mnStagesCreateStageSelectGfx()
{
	GObj* stage_select_gobj;
	SObj* stage_select_sobj;
	SObj* yellow_oval_left_sobj;
	SObj* yellow_oval_center_sobj;
	SObj* yellow_oval_right_sobj;
	s32 x;

	stage_select_gobj = gcMakeGObjSPAfter(0U, NULL, 6U, 0x80000000U);
	gcAddGObjDisplay(stage_select_gobj, mnStagesRenderStageSelectGfx, 4U, GOBJ_PRIORITY_DEFAULT, ~0);

	// Stage Select texture
	stage_select_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_STAGE_SELECT_IMAGE_OFFSET));
	stage_select_sobj->sprite.attr &= ~SP_FASTCOPY;
	stage_select_sobj->sprite.attr |= SP_TRANSPARENT;
	stage_select_sobj->envcolor.r = 0;
	stage_select_sobj->envcolor.g = 0;
	stage_select_sobj->envcolor.b = 0;
	stage_select_sobj->sprite.red = 0xAF;
	stage_select_sobj->sprite.green = 0xB1;
	stage_select_sobj->sprite.blue = 0xCC;
	stage_select_sobj->pos.x = 172.0f;
	stage_select_sobj->pos.y = 122.0f;

	// Yellow oval left edge
	yellow_oval_left_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET));
	yellow_oval_left_sobj->sprite.attr &= ~SP_FASTCOPY;
	yellow_oval_left_sobj->sprite.attr |= SP_TRANSPARENT;
	yellow_oval_left_sobj->pos.x = 174.0f;
	yellow_oval_left_sobj->pos.y = 191.0f;

	// Yellow oval middle section
	for (x = 0xBA; x < 0x106; x += 4)
	{
		yellow_oval_center_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET));
		yellow_oval_center_sobj->pos.x = x;
		yellow_oval_center_sobj->pos.y = 191.0f;
	}

	// Yellow oval right edge
	yellow_oval_right_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET));
	yellow_oval_right_sobj->sprite.attr &= ~SP_FASTCOPY;
	yellow_oval_right_sobj->sprite.attr |= SP_TRANSPARENT;
	yellow_oval_right_sobj->pos.x = 262.0f;
	yellow_oval_right_sobj->pos.y = 191.0f;
}

// 0x80132430
s32 mnStagesGetStageID(s32 slot_id)
{
	s32 stage_ids[10] = {

		0x00, 0x02, 0x04, 0x03, 0x08,
		0x05, 0x06, 0x01, 0x07, 0xde
	};

	if (slot_id == 9)
		return 0xDE;

	return stage_ids[slot_id];
}

// 0x80132498
s32 mnStagesGetSlotID(s32 stage_id)
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

// 0x80132528
void mnStagesCreateStageImages()
{
	GObj* stage_image_gobj;
	SObj* stage_image_sobj;
	intptr_t offsets[10] = {

		0x00004d88, 0x00005b68, 0x00006948, 0x00007728, 0x00008508,
		0x000092e8, 0x0000bc88, 0x0000a0c8, 0x0000aea8, 0x0000cb10
	};
	s32 x;
	s32 i;

	stage_image_gobj = gcMakeGObjSPAfter(0U, NULL, 3U, 0x80000000U);
	gcAddGObjDisplay(stage_image_gobj, lbCommonDrawSObjAttr, 1U, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnStagesGetIsLocked(mnStagesGetStageID(i)) == FALSE)
		{
			x = i * 50;

			if (i == 9)
				stage_image_sobj = lbCommonMakeSObjForGObj(stage_image_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_RANDOM_IMAGE_OFFSET));
			else
				stage_image_sobj = lbCommonMakeSObjForGObj(stage_image_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], offsets[mnStagesGetStageID(i)]));

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

// 0x801326DC
void mnStagesPositionStageName(SObj* stage_name_sobj, s32 stage_id)
{
	Vec2f positions[9] = {

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

	stage_name_sobj->pos.x = 183.0f;
	stage_name_sobj->pos.y = 196.0f;
}

// 0x80132738
void mnStagesCreateStageName(GObj* name_logo_gobj, s32 stage_id)
{
	SObj* stage_name_sobj;
	intptr_t offsets[9] = {

		0x000001f8, 0x00000438, 0x00000678,
		0x000008b8, 0x00000b10, 0x00000d58,
		0x00001418, 0x00000f98, 0x000011d8
	};

	stage_name_sobj = lbCommonMakeSObjForGObj(name_logo_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], offsets[stage_id]));
	mnStagesPositionStageName(stage_name_sobj, stage_id);

	stage_name_sobj->sprite.attr &= ~SP_FASTCOPY;
	stage_name_sobj->sprite.attr |= SP_TRANSPARENT;
	stage_name_sobj->sprite.red = 0;
	stage_name_sobj->sprite.green = 0;
	stage_name_sobj->sprite.blue = 0;
}

// 0x80134700
char* D_ovl30_80134700[] = {

	"IN THE SKY OF",
	"SECTOR Z",
	"CONGO JUNGLE",
	"PLANET ZEBES",
	"CASTLE OF HYRULE",
	"YOSHI'S ISLAND",
	"PUPUPU LAND",
	"YAMABUKI CITY",
	"CLASSIC MUSHROOM",
	"CASTLE PEACH",
	"ABOARD A GREAT FOX",
};

// 0x8013472C
uintptr_t D_ovl30_8013472C[6] = { NULL };

// 0x80134744
char* D_ovl30_80134744 = "KINGDOM";

// 0x80134748
f32 D_ovl30_80134748[] = {

	192.0, 167.0, 214.0, 167.0, 202.0, 169.0, 202.0, 169.0, 193.0, 169.0, 198.0,
	169.0, 205.0, 169.0, 199.0, 169.0, 191.0, 167.0, 209.0, 174.0, 188.0, 174.0
};

// 0x801347A0
s32 D_ovl30_801347A0[10] = { 0 };

// 0x801347C8
f32 D_ovl30_801347C8[4] = {

	203.0, 174.0, 213.0, 174.0
};

// 0x801347D8
s32 D_ovl30_801347D8[3] = {

	255, 255, 255
};

// 0x801327E0 - Unused?
void func_ovl30_801327E0() {}

// 0x801327E8 - Unused?
void func_ovl30_801327E8() {}

// 0x801327F0
void mnStagesPositionLogo(GObj* name_logo_gobj, s32 stage_id)
{
	Vec2f positions[10] = {

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

// 0x801328A8
void mnStagesCreateLogo(GObj* name_logo_gobj, s32 stage_id)
{
	SObj* name_logo_sobj;
	intptr_t offsets[9] = {

		0x0618, 0x1938,
		0x0C78, 0x12D8,
		0x25F8, 0x2C58,
		0x1F98, 0x3918,
		0x0618
	};

	if (stage_id == 0xDE)
	{
		name_logo_sobj = lbCommonMakeSObjForGObj(name_logo_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_SMASH_LOGO_IMAGE_OFFSET));
		name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
		name_logo_sobj->sprite.red = 0x5C;
		name_logo_sobj->sprite.green = 0x22;
		name_logo_sobj->sprite.blue = 0;
	}
	else
	{
		name_logo_sobj = lbCommonMakeSObjForGObj(name_logo_gobj, lbRelocGetFileData(void*, gMNStagesFiles[0], offsets[stage_id]));
		name_logo_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_logo_sobj->sprite.attr |= SP_TRANSPARENT;
		name_logo_sobj->sprite.red = 0x5C;
		name_logo_sobj->sprite.green = 0x22;
		name_logo_sobj->sprite.blue = 0;
	}

	mnStagesPositionLogo(name_logo_gobj, stage_id);
}

// 0x801329AC
void mnStagesCreateStageNameAndLogo(s32 slot_id)
{
	GObj* name_logo_gobj;

	if (gMNStagesNameLogoGobj != NULL)
		gcEjectGObj(gMNStagesNameLogoGobj);

	name_logo_gobj = gcMakeGObjSPAfter(0U, NULL, 4U, 0x80000000U);
	gMNStagesNameLogoGobj = name_logo_gobj;
	gcAddGObjDisplay(name_logo_gobj, lbCommonDrawSObjAttr, 2U, GOBJ_PRIORITY_DEFAULT, ~0);
	mnStagesCreateLogo(gMNStagesNameLogoGobj, mnStagesGetStageID(slot_id));

	if (slot_id != 9)
		mnStagesCreateStageName(gMNStagesNameLogoGobj, mnStagesGetStageID(slot_id));
}

// 0x80132A58
void mnStagesPositionCursor(GObj* cursor_gobj, s32 slot_id)
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

// 0x80132ADC
void mnStagesCreateCursor()
{
	GObj* cursor_gobj;
	SObj* cursor_sobj;

	gMNStagesCursorGobj = cursor_gobj = gcMakeGObjSPAfter(0U, NULL, 7U, 0x80000000U);
	gcAddGObjDisplay(cursor_gobj, lbCommonDrawSObjAttr, 5U, GOBJ_PRIORITY_DEFAULT, ~0);

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_CURSOR_IMAGE_OFFSET));
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = 0xFF;
	cursor_sobj->sprite.green = 0;
	cursor_sobj->sprite.blue = 0;

	mnStagesPositionCursor(cursor_gobj, gMNStagesCursorSlotId);
}

// 0x80132B84
void mnStagesLoadStageFile(s32 stage_id, u8* heapAddr)
{
	gMNStagesGroundInfo = (s32)lbRelocGetForceExternHeapFile(dMNStagesFileInfoArray[stage_id].id, heapAddr) + dMNStagesFileInfoArray[stage_id].header_size;
}

// 0x80132BC8
void mnStagesRenderStagePreviewBackground(s32 stage_preview_bg_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x57, 0x60, 0x88, 0xFF);
	gDPSetCombineMode(gSYTaskmanDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, 0x73);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 43, 130, 152, 211);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(stage_preview_bg_gobj);
}

// 0x80132D2C
GObj* mnStagesCreateStagePreviewBackground(s32 stage_id)
{
	GObj* stage_preview_bg_gobj;
	SObj* stage_preview_bg_sobj;
	s32 x;

	stage_preview_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 9U, 0x80000000U);
	gcAddGObjDisplay(stage_preview_bg_gobj, mnStagesRenderStagePreviewBackground, 7U, GOBJ_PRIORITY_DEFAULT, ~0);

	// draw patterned bg
	for (x = 0x2B; x < 0x9B; x += 0x10)
	{
		stage_preview_bg_sobj = lbCommonMakeSObjForGObj(stage_preview_bg_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET));
		stage_preview_bg_sobj->pos.x = x;
		stage_preview_bg_sobj->pos.y = 130.0f;

		if (TRUE); // grrrrrr
	}

	// Check if Random
	if (stage_id == 0xDE)
	{
		// If Random, use Random image
		stage_preview_bg_sobj = lbCommonMakeSObjForGObj(stage_preview_bg_gobj, lbRelocGetFileData(void*, gMNStagesFiles[2], &FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET));
		stage_preview_bg_sobj->pos.x = 40.0f;
		stage_preview_bg_sobj->pos.y = 127.0f;
	}
	else
	{
		// If not Random, check if Training Mode
		if (gMNStagesIsTrainingMode == TRUE)
		{
			// If Training Mode, use Smash logo bg
			stage_preview_bg_sobj = lbCommonMakeSObjForGObj(stage_preview_bg_gobj, lbRelocGetFileData(void*, lbRelocGetForceExternHeapFile(dMNStagesTrainingBackgroundFileNodes[dMNStagesTrainingBackgroundIDs[stage_id]].id, (uintptr_t)gMNStagesGroundInfo->wallpaper - dMNStagesBackgroundFileOffsets[stage_id]), &FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET));
		}
		else
		{
			// Use stage bg
			stage_preview_bg_sobj = lbCommonMakeSObjForGObj(stage_preview_bg_gobj, gMNStagesGroundInfo->wallpaper);
		}

		stage_preview_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
		stage_preview_bg_sobj->sprite.scalex = 0.37F;
		stage_preview_bg_sobj->sprite.scaley = 0.37F;
		stage_preview_bg_sobj->pos.x = 40.0f;
		stage_preview_bg_sobj->pos.y = 127.0f;
	}

	return stage_preview_bg_gobj;
}

// 0x80132EF0
void mnStagesRenderStagePreviewPrimary(GObj* stage_geo_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gSPSetGeometryMode(gSYTaskmanDLHeads[0]++, G_ZBUFFER);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gcDrawDObjTreeForGObj(stage_geo_gobj);
}

// 0x80132F70
void mnStagesRenderStagePreviewSecondary(GObj* stage_geo_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gSPSetGeometryMode(gSYTaskmanDLHeads[0]++, G_ZBUFFER);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPPipeSync(gSYTaskmanDLHeads[1]++);
	gSPSetGeometryMode(gSYTaskmanDLHeads[1]++, G_ZBUFFER);
	gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
	gcDrawDObjTreeDLLinksForGObj(stage_geo_gobj);
}

// 0x8013303C
GObj* mnStagesCreateStageGeo(s32 stage_id, MPGroundData* stage_info, MPGroundDesc* stage_geo, s32 stage_geo_id)
{
	GObj* stage_geo_gobj;
	f32 scale[9] = {

		0.50f, 0.20f, 0.60f,
		0.50f, 0.30f, 0.60f,
		0.50f, 0.40f, 0.20f
	};

	if (stage_geo->dobjdesc == NULL)
	{
		return NULL;
	}

	stage_geo_gobj = gcMakeGObjSPAfter(0U, NULL, 5U, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(stage_geo_gobj, (stage_info->layer_mask & (1 << stage_geo_id)) ? mnStagesRenderStagePreviewSecondary : mnStagesRenderStagePreviewPrimary, 3U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcSetupCustomDObjs(stage_geo_gobj, stage_geo->dobjdesc, NULL, nGCMatrixKindTraRotRpyRSca, nGCMatrixKindNull, nGCMatrixKindNull);

	if (stage_geo->p_mobjsubs != NULL)
	{
		gcAddMObjAll(stage_geo_gobj, stage_geo->p_mobjsubs);
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

// 0x801331AC
void mnStagesCreateStageGeos(s32 stage_id, MPGroundData* stage_info, s32 heap_id)
{
	DObj* stage_dobj;
	DObj* next_dobj;
	GObj** stage_info_array = (heap_id == 0) ? &gMNStagesHeap1StageInfoArray : &gMNStagesHeap0StageInfoArray;
	s32 i;

	stage_info_array[0] = mnStagesCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[0], 0);
	stage_info_array[1] = mnStagesCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[1], 1);
	stage_info_array[2] = mnStagesCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[2], 2);
	stage_info_array[3] = mnStagesCreateStageGeo(stage_id, stage_info, &stage_info->gr_desc[3], 3);

	if (stage_id == nGRKindYamabuki)
	{
		DObjGetChild(DObjGetChild(DObjGetStruct(stage_info_array[3])))->flags = DOBJ_FLAG_HIDDEN;
	}

	if (stage_id == nGRKindYoster)
	{
		for (next_dobj = stage_dobj = DObjGetStruct(stage_info_array[0]), i = 1; next_dobj != NULL; next_dobj = lbCommonGetTreeDObjNextFromRoot(next_dobj, stage_dobj), i += 1)
		{
			if ((i == 0xF) || (i == 0x11))
				next_dobj->flags = DOBJ_FLAG_HIDDEN;
		}
	}
}

// 0x801332DC
void mnStagesDestroyStagePreview(s32 heap_id)
{
	s32 i;

	if (heap_id == 0)
	{
		if (gMNStagesHeap0BackgroundGobj != NULL)
		{
			gcEjectGObj(gMNStagesHeap0BackgroundGobj);
			gMNStagesHeap0BackgroundGobj = NULL;
		}

		for (i = 0; i < ARRAY_COUNT(gMNStagesHeap0StageInfoArray); i++)
		{
			if (gMNStagesHeap0StageInfoArray[i] != NULL)
			{
				gcEjectGObj(gMNStagesHeap0StageInfoArray[i]);
				gMNStagesHeap0StageInfoArray[i] = NULL;
			}
		}
	}
	else
	{
		if (gMNStagesHeap1BackgroundGobj != NULL)
		{
			gcEjectGObj(gMNStagesHeap1BackgroundGobj);
			gMNStagesHeap1BackgroundGobj = NULL;
		}

		for (i = 0; i < ARRAY_COUNT(gMNStagesHeap1StageInfoArray); i++)
		{
			if (gMNStagesHeap1StageInfoArray[i] != NULL)
			{
				gcEjectGObj(gMNStagesHeap1StageInfoArray[i]);
				gMNStagesHeap1StageInfoArray[i] = NULL;
			}
		}
	}
}

// 0x801333B4
void mnStagesCreateStagePreview(s32 stage_id)
{
	if (stage_id != 0xDE)
	{
		if (gMNStagesCurrentHeap == 0)
			mnStagesLoadStageFile(stage_id, gMNStagesModelHeap1Ptr);
		else
			mnStagesLoadStageFile(stage_id, gMNStagesModelHeap0Ptr);
	}

	if (gMNStagesCurrentHeap == 0)
		gMNStagesHeap1BackgroundGobj = mnStagesCreateStagePreviewBackground(stage_id);
	else
		gMNStagesHeap0BackgroundGobj = mnStagesCreateStagePreviewBackground(stage_id);

	if (stage_id != 0xDE)
	{
		mnStagesCreateStageGeos(stage_id, gMNStagesGroundInfo, gMNStagesCurrentHeap);
		mnStagesPositionStagePreviewCamera(gMNStagesPreviewCam, stage_id);
	}

	mnStagesDestroyStagePreview(gMNStagesCurrentHeap);

	gMNStagesCurrentHeap = (gMNStagesCurrentHeap == 0) ? 1 : 0;
}

// 0x801334AC
void mnStagesCreateBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x50, 0x00000001, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013354C
void mnStagesCreateWoodenCircleViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x28, 0x00000040, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801335EC
void mnStagesCreateStagePreviewBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x46, 0x00000080, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013368C
void mnStagesCreateStageSelectGfxViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x1E, 0x00000010, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013372C
void mnStagesCreateStageImagesSYRdpViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x3C, 0x00000002, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801337CC
void mnStagesCreateStageNameAndLogoViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x14, 0x00000004, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013386C
void mnStagesCreateCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x1, NULL, 0x1, 0x80000000U, lbCommonDrawSprite, 0x32, 0x00000020, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013390C
void mnStagesPositionStagePreviewCamera(CObj* stage_preview_cobj, s32 stage_id)
{
	Vec3f positions[9] = {

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

	if (stage_id == 0xDE)
		stage_id = 0;

	stage_preview_cobj->vec.eye.x = -3000.0F;
	stage_preview_cobj->vec.eye.y = 3000.0F;
	stage_preview_cobj->vec.eye.z = 9000.0F;
	stage_preview_cobj->vec.up.x = 0.0f;
	stage_preview_cobj->vec.up.y = 1.0f;
	stage_preview_cobj->vec.up.z = 0.0f;
	stage_preview_cobj->vec.at.x = positions[stage_id].x;
	stage_preview_cobj->vec.at.y = positions[stage_id].y;
	stage_preview_cobj->vec.at.z = positions[stage_id].z;
}

// 0x801339C4
void mnStagesAdjustStagePreviewY(GObj* stage_preview_cobj_gobj)
{
	CObj* cobj = CObjGetStruct(stage_preview_cobj_gobj);
	f32 y = cobj->vec.at.y;
	f32 deg = 0.0F;

	while (TRUE)
	{
		cobj->vec.at.y = __sinf(F_CLC_DTOR32(deg)) * 40.0F + y;

		deg = (deg + 2.0F > 360.0F) ? deg + 2.0F - 360.0F : deg + 2.0F;

		gcStopCurrentGObjThread(1);
	}
}

// 0x80133A88
void mnStagesCreateStagePreviewViewport()
{
	int foo;
	GObj* stage_preview_cobj_gobj = gcMakeCameraGObj(1U, NULL, 1, 0x80000000U, &func_80017DBC, 0x41, 0x00000008, -1, 1, 0, 0, 1, 0);
	CObj* cobj = CObjGetStruct(stage_preview_cobj_gobj);

	gMNStagesPreviewCam = cobj;

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->projection.persp.far = 16384.0F;

	mnStagesPositionStagePreviewCamera(cobj, mnStagesGetStageID(gMNStagesCursorSlotId));

	gcAddGObjProcess(stage_preview_cobj_gobj, mnStagesAdjustStagePreviewY, 0, 1);
}

// 0x80133B78
void mnStagesSaveSceneData()
{
	s32 unused[9] = {

	 	6, 3, 0, 8, 2, 1, 5, 7, 4
	};
	s32 stage_id;

	if (gMNStagesCursorSlotId == 9)
	{
		do
		{
			stage_id = mtTrigGetRandomTimeUCharRange(9);
		} while (mnStagesGetIsLocked(stage_id) || stage_id == gSCManagerSceneData.gkind);

		gSCManagerSceneData.gkind = stage_id;
	}
	else
		gSCManagerSceneData.gkind = mnStagesGetStageID(gMNStagesCursorSlotId);

	if (gMNStagesIsTrainingMode == FALSE)
		gSCManagerSceneData.stages_vsmode_gkind = mnStagesGetStageID(gMNStagesCursorSlotId);

	if (gMNStagesIsTrainingMode == TRUE)
		gSCManagerSceneData.stages_training_gkind = mnStagesGetStageID(gMNStagesCursorSlotId);
}

// 0x80133C6C
void mnStagesLoadSceneData()
{
	s32 i;

	gMNStagesNameLogoGobj = NULL;
	gMNStagesHeap0BackgroundGobj = NULL;
	gMNStagesHeap1BackgroundGobj = NULL;

	for (i = 0; i < ARRAY_COUNT(gMNStagesHeap0StageInfoArray); i++)
	{
		gMNStagesHeap0StageInfoArray[i] = NULL;
		gMNStagesHeap1StageInfoArray[i] = NULL;
	}

	switch (gSCManagerSceneData.scene_prev)
	{
		case 0x12:
			gMNStagesIsTrainingMode = TRUE;
			gMNStagesCursorSlotId = mnStagesGetSlotID(gSCManagerSceneData.stages_training_gkind);
			break;
		case nSCKindVSPlayers:
			gMNStagesIsTrainingMode = FALSE;
			gMNStagesCursorSlotId = mnStagesGetSlotID(gSCManagerSceneData.stages_vsmode_gkind);
			break;
	}

	gMNStagesUnlockedMask = gSCManagerBackupData.unlock_mask;
	gMNStagesCurrentHeap = 1;
	gMNStagesTotalTimeTics = 0;
	gMNStagesMaxTotalTimeTics = gMNStagesTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x80133D60
void mnStagesSaveSceneData2()
{
	mnStagesSaveSceneData();
}

// 0x80133D80
void mnStagesHandleButtonPresses(s32 arg0)
{
	s32 unused;
	s32 stick_input;
	s32 button_input;

	gMNStagesTotalTimeTics += 1;

	if (gMNStagesTotalTimeTics >= 10)
	{
		if (gMNStagesTotalTimeTics == gMNStagesMaxTotalTimeTics)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindTitle;

			mnStagesSaveSceneData2();
			syTaskmanSetLoadScene();
			return;
		}

		if (scSubsysControllerCheckNoInputAll() == FALSE)
			gMNStagesMaxTotalTimeTics = gMNStagesTotalTimeTics + I_MIN_TO_TICS(5);

		if (gMNStagesScrollBuffer != 0)
			gMNStagesScrollBuffer -= 1;

		if (
			(scSubsysControllerGetPlayerStickInRangeLR(-0x14, 0x14))
			&& (scSubsysControllerGetPlayerStickInRangeUD(-0x14, 0x14))
			&& (scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE)
			&& (scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
		)
		{
			gMNStagesScrollBuffer = 0;
		}

		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON))
		{
			mnStagesSaveSceneData2();
			func_800269C0_275C0(nSYAudioFGMStageSelect);

			if (gMNStagesIsTrainingMode == TRUE)
			{
				gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
				gSCManagerSceneData.scene_curr = nSCKind1PTrainingMode;
			}
			else
			{
				gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
				gSCManagerSceneData.scene_curr = nSCKindVSBattle;
			}

			syTaskmanSetLoadScene();
		}

		if (scSubsysControllerGetPlayerTapButtons(B_BUTTON))
		{
			mnStagesSaveSceneData2();

			if (gMNStagesIsTrainingMode == TRUE)
			{
				gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
				gSCManagerSceneData.scene_curr = nSCKind1PTrainingModePlayers;
			}
			else
			{
				gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
				gSCManagerSceneData.scene_curr = nSCKindVSPlayers;
			}

			syTaskmanSetLoadScene();
		}

		if (gMNStagesScrollBuffer == 0)
		{
			button_input = scSubsysControllerGetPlayerHoldButtons(U_JPAD | U_CBUTTONS);

			if ((button_input) || (stick_input = scSubsysControllerGetPlayerStickUD(0x14, 1), (stick_input != 0)))
			{
				if ((gMNStagesCursorSlotId >= 5) && (mnStagesGetIsLocked(mnStagesGetStageID(gMNStagesCursorSlotId - 5)) == FALSE))
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);

					gMNStagesCursorSlotId -= 5;

					mnStagesCreateStageNameAndLogo(gMNStagesCursorSlotId);
					mnStagesPositionCursor(gMNStagesCursorGobj, gMNStagesCursorSlotId);
					mnStagesCreateStagePreview(mnStagesGetStageID(gMNStagesCursorSlotId));
				}

				if (button_input)
					gMNStagesScrollBuffer = 12;
				else
					gMNStagesScrollBuffer = (0xA0 - stick_input) / 7;

				return;
			}

			button_input = scSubsysControllerGetPlayerHoldButtons(D_JPAD | D_CBUTTONS);

			if ((button_input) || (stick_input = scSubsysControllerGetPlayerStickUD(-0x14, 0), (stick_input != 0)))
			{
				if ((gMNStagesCursorSlotId < 5) && (mnStagesGetIsLocked(mnStagesGetStageID(gMNStagesCursorSlotId + 5)) == FALSE))
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);

					gMNStagesCursorSlotId += 5;

					mnStagesCreateStageNameAndLogo(gMNStagesCursorSlotId);
					mnStagesPositionCursor(gMNStagesCursorGobj, gMNStagesCursorSlotId);
					mnStagesCreateStagePreview(mnStagesGetStageID(gMNStagesCursorSlotId));
				}

				if (button_input)
					gMNStagesScrollBuffer = 12;
				else
					gMNStagesScrollBuffer = (stick_input + 0xA0) / 7;
				return;
			}

			button_input = scSubsysControllerGetPlayerHoldButtons(L_JPAD | L_TRIG | L_CBUTTONS);

			if ((button_input) || (stick_input = scSubsysControllerGetPlayerStickLR(-0x14, 0), (stick_input)))
			{
				switch (gMNStagesCursorSlotId)
				{
					case 0:
						gMNStagesCursorSlotId = (mnStagesGetIsLocked(mnStagesGetStageID(4))) ? 3 : 4;
						break;
					case 5:
						gMNStagesCursorSlotId = 9;
						break;
					default:
						gMNStagesCursorSlotId -= 1;
				}

				func_800269C0_275C0(nSYAudioFGMMenuScroll2);
				mnStagesCreateStageNameAndLogo(gMNStagesCursorSlotId);
				mnStagesPositionCursor(gMNStagesCursorGobj, gMNStagesCursorSlotId);
				mnStagesCreateStagePreview(mnStagesGetStageID(gMNStagesCursorSlotId));

				if (button_input)
					gMNStagesScrollBuffer = 12;
				else
					gMNStagesScrollBuffer = (stick_input + 0xA0) / 7;

				return;
			}

			button_input = scSubsysControllerGetPlayerHoldButtons(R_JPAD | R_TRIG | R_CBUTTONS);

			if ((button_input) || (stick_input = scSubsysControllerGetPlayerStickLR(0x14, 1), (stick_input)))
			{
				switch (gMNStagesCursorSlotId)
				{
					case 3:
						gMNStagesCursorSlotId = (mnStagesGetIsLocked(mnStagesGetStageID(4))) ? 0 : 4;
						break;
					case 4:
						gMNStagesCursorSlotId = 0;
						break;
					case 9:
						gMNStagesCursorSlotId = 5;
						break;
					default:
						gMNStagesCursorSlotId += 1;
				}

				func_800269C0_275C0(nSYAudioFGMMenuScroll2);
				mnStagesCreateStageNameAndLogo(gMNStagesCursorSlotId);
				mnStagesPositionCursor(gMNStagesCursorGobj, gMNStagesCursorSlotId);
				mnStagesCreateStagePreview(mnStagesGetStageID(gMNStagesCursorSlotId));

				if (button_input != 0)
					gMNStagesScrollBuffer = 12;
				else
					gMNStagesScrollBuffer = (0xA0 - stick_input) / 7;
			}
		}
	}
}

// 0x80134304
void mnStagesInitSSS()
{
	s32 foo;
	s32 bar;
	LBRelocSetup rl_setup;
	s32 baz;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl30_80134C30;
	rl_setup.status_buffer_size = 0x1E;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl30_80134D20;
	rl_setup.force_status_buffer_size = 0x1E;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl30_801344D0, ARRAY_COUNT(D_ovl30_801344D0), gMNStagesFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl30_801344D0, ARRAY_COUNT(D_ovl30_801344D0)), 0x10));

	mnStagesAllocateStageModelHeaps();

	gcMakeGObjSPAfter(0U, mnStagesHandleButtonPresses, 0U, 0x80000000U);
	gcMakeDefaultCameraGObj(1, 0x80000000U, 0x64, 1, 0);
	mnStagesLoadSceneData();
	mnStagesCreateBackgroundViewport();
	mnStagesCreateStageSelectGfxViewport();
	mnStagesCreateStageImagesSYRdpViewport();
	mnStagesCreateStageNameAndLogoViewport();
	mnStagesCreateCursorViewport();
	mnStagesCreateStagePreviewViewport();
	mnStagesCreateWoodenCircleViewport();
	mnStagesCreateStagePreviewBackgroundViewport();
	mnStagesCreateBackground();
	mnStagesCreateWoodenCircle();
	mnStagesCreateStageSelectGfx();
	mnStagesCreateStageImages();
	mnStagesCreateStageNameAndLogo(gMNStagesCursorSlotId);
	mnStagesCreateCursor();
	mnStagesCreateStagePreview(mnStagesGetStageID(gMNStagesCursorSlotId));
}

// 0x8013490C
SYVideoSetup D_ovl30_8013490C = {

	&gSYFramebufferSets[0],
	&gSYFramebufferSets[1],
	&gSYFramebufferSets[2],
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 0x80134928
scRuntimeInfo D_ovl30_80134928 = {
	0x00000000, 0x8000A5E4,
	scManagerFuncDraw, &lOverlay30ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004268, 0x00001000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x00008000,
	mnStagesSetLighting, syControllerFuncRead,
	0x00000000, 0x00000200, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnStagesInitSSS
};

// 0x8013446C
void mnStagesStartScene()
{
	D_ovl30_8013490C.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl30_8013490C);
	D_ovl30_80134928.arena_size = (u32) ((uintptr_t)&lOverlay30ArenaHi - (uintptr_t)&lOverlay30ArenaLo);
	scManagerFuncUpdate(&D_ovl30_80134928);
}
