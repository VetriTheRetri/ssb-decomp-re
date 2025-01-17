#include <mn/menu.h>
#include <gr/ground.h>
#include <gm/gmsound.h> // temporary, until this finds a proper place
#include <sc/scene.h>
#include <sys/video.h>
#include <sys/controller.h>

// Externs

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
void mnMapsSetPreviewCameraPosition(CObj* cobj, s32 gkind);


// Stuff - where does it go?!?
typedef struct mnMapsFileInfo
{
	/* 0x00 */ u32 id;
	/* 0x04 */ u32 header_size;

} mnMapsFileInfo;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801344D0
u32 dMNMapsFileIDs[/* */] =
{
	0x14, 0x15, 0x1E, 0x21, 0x1A
};

// 0x801344E4
mnMapsFileInfo dMNMapsFileInfoArray[/* */] =
{
	{ 0x00000103, 0x00000014 },
	{ 0x00000106, 0x00000014 },
	{ 0x00000105, 0x00000014 },
	{ 0x00000101, 0x00000014 },
	{ 0x00000109, 0x00000014 },
	{ 0x00000107, 0x00000014 },
	{ 0x000000FF, 0x00000014 },
	{ 0x00000108, 0x00000014 },
	{ 0x00000104, 0x00000014 }
};

// 0x8013452C
intptr_t dMNMapsWallpaperOffsets[/* */] =
{
	0x00026C88, 0x00026C88, 0x00026C88,
	0x00026C88, 0x00026C88, 0x00026C88,
	0x00026C88, 0x00026C88, 0x00026C88
};

// 0x80134550
LBFileNode dMNMapsTrainingModeFileNodes[/* */] =
{
	{ &lGRWallpaperTrainingBlackFileID, 0x00000000 },
	{ &lGRWallpaperTrainingYellowFileID,0xEE9E0600 },
	{ &lGRWallpaperTrainingBlueFileID, 	0xAFF5FF00 }
};

// 0x80134568
s32 dMNMapsTrainingModeWallpaperIDs[/* */] = { 2, 0, 0, 0, 2, 1, 2, 2, 2, 0 };

// 0x80134590
Lights1 dMNMapsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801345A8
Gfx dMNMapsDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dMNMapsLights1),
	gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80134BD0
s32 sMNMapsPad0x80134BD0[2];

// 0x80134BD8
s32 sMNMapsCursorSlotID;

// 0x80134BDC
GObj *sMNMapsCursorGObj;

// 0x80134BE0
GObj *sMNMapsNameLogoGObj;

// 0x80134BE4
GObj *sMNMapsHeap0WallpaperGObj;

// 0x80134BE8
GObj *sMNMapsHeap1WallpaperGObj;

// 0x80134BF0
GObj *sMNMapsHeap0StageInfoArray[4];

// 0x80134C00
GObj *sMNMapsHeap1StageInfoArray[4];

// 0x80134C10
MPGroundData* sMNMapsGroundInfo;

// 0x80134C14;
CObj *sMNMapsPreviewCObj;

// 0x80134C18
sb32 sMNMapsIsTrainingMode;

// 0x80134C1C - // flag indicating which bonus features are available
u8 sMNMapsUnlockedMask;

// 0x80134C20
s32 sMNMapsHeapID;

// 0x80134C24 - Frames elapsed on SSS
s32 sMNMapsTotalTimeTics;

// 0x80134C28 - Frames until cursor can be moved again
s32 sMNMapsScrollWait;

// 0x80134C2C - Frames to wait until exiting Stage Select
s32 sMNMapsMaxTotalTimeTics;

// 0x80134C30
LBFileNode sMNMapsStatusBuffer[30];

// 0x80134D20
LBFileNode sMNMapsForceStatusBuffer[30];

// 0x80134E10
void *sMNMapsFiles[5];

// 0x80134E24
void *sMNMapsModelHeap0;

// 0x80134E28
void *sMNMapsModelHeap1;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnMapsAllocModelHeaps(void)
{
	size_t size, max = 0;
	s32 i;

	for (i = 0; i < ARRAY_COUNT(dMNMapsFileInfoArray); i++)
	{
		size = lbRelocGetFileSize(dMNMapsFileInfoArray[i].id);

		if (max < size)
		{
			max = size;
		}
	}
	sMNMapsModelHeap0 = syTaskmanMalloc(max, 0x10);
	sMNMapsModelHeap1 = syTaskmanMalloc(max, 0x10);
}

// 0x80131B88
void mnMapsFuncLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dMNMapsDisplayList);
}

// 0x80131BAC
sb32 mnMapsCheckLocked(s32 gkind)
{
	if (gkind == nGRKindInishie)
	{
		if (sMNMapsUnlockedMask & LBBACKUP_UNLOCK_MASK_INISHIE)
		{
			return FALSE;
		}
		else return TRUE;
	}
	else return FALSE;
}

// 0x80131BE4
s32 mnMapsGetCharacterID(const char c)
{
	switch (c)
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
		if ((c < 'A') || (c > 'Z'))
		{
			return 0x1D;
		}
		else return c - 'A';
	}
}

// 0x80131C5C
f32 mnMapsGetCharacterSpacing(const char *s, s32 c)
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
void mnMapsDrawString(GObj *gobj, const char *str, f32 x, f32 y, u32 *color)
{
	intptr_t chars[/* */] =
	{
		&lMNCommonFontsLetterASprite, &lMNCommonFontsLetterBSprite,
		&lMNCommonFontsLetterCSprite, &lMNCommonFontsLetterDSprite,
		&lMNCommonFontsLetterESprite, &lMNCommonFontsLetterFSprite,
		&lMNCommonFontsLetterGSprite, &lMNCommonFontsLetterHSprite,
		&lMNCommonFontsLetterISprite, &lMNCommonFontsLetterJSprite,
		&lMNCommonFontsLetterKSprite, &lMNCommonFontsLetterLSprite,
		&lMNCommonFontsLetterMSprite, &lMNCommonFontsLetterNSprite,
		&lMNCommonFontsLetterOSprite, &lMNCommonFontsLetterPSprite,
		&lMNCommonFontsLetterQSprite, &lMNCommonFontsLetterRSprite,
		&lMNCommonFontsLetterSSprite, &lMNCommonFontsLetterTSprite,
		&lMNCommonFontsLetterUSprite, &lMNCommonFontsLetterVSprite,
		&lMNCommonFontsLetterWSprite, &lMNCommonFontsLetterXSprite,
		&lMNCommonFontsLetterYSprite, &lMNCommonFontsLetterZSprite,

		&lMNCommonFontsSymbolApostropheSprite,
		&lMNCommonFontsSymbolPercentSprite,
		&lMNCommonFontsSymbolPeriodSprite,
	};
	SObj *sobj;
	f32 start_x = x;
	s32 i;

	for (i = 0; str[i] != 0; i++)
	{
		if (((((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE)) || (str[i] == ' '))
		{
			if (str[i] == ' ')
			{
				start_x += 4.0F;
			}
			else start_x += str[i] - '0';
		}
		else
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[3], chars[mnMapsGetCharacterID(str[i])]));
			sobj->pos.x = start_x;

			start_x += sobj->sprite.width + mnMapsGetCharacterSpacing(str, i);

			switch (str[i])
			{
			case '\'':
				sobj->pos.y = y - 1.0F;
				break;
			
			case '.':
				sobj->pos.y = y + 4.0F;
				break;
				
			default:
				sobj->pos.y = y;
				break;
			}
			sobj->sprite.attr &= ~SP_FASTCOPY;
			sobj->sprite.attr |= SP_TRANSPARENT;

			sobj->sprite.red = color[0];
			sobj->sprite.green = color[1];
			sobj->sprite.blue = color[2];
		}
	}
}

// 0x80131FA4
void mnMapsMakeWallpaper(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 2, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_PRIORITY_DEFAULT, ~0);
	
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[1], &FILE_015_BACKGROUND_IMAGE_OFFSET));

	sobj->cms = G_TX_WRAP;
	sobj->cmt = G_TX_WRAP;

	sobj->masks = 6;
	sobj->maskt = 5;

	sobj->lrs = 300;
	sobj->lrt = 220;

	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 0x80132048
void mnMapsMakePlaque(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 8, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 6, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_WOODEN_CIRCLE_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->pos.x = 189.0F;
	sobj->pos.y = 124.0F;
}

// 0x801320E0
void mnMapsRenderStageSelectGfx(GObj* stage_select_gobj)
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
void mnMapsCreateStageSelectGfx(void)
{
	GObj *stage_select_gobj;
	SObj *stage_select_sobj;
	SObj *yellow_oval_left_sobj;
	SObj *yellow_oval_center_sobj;
	SObj *yellow_oval_right_sobj;
	s32 x;

	stage_select_gobj = gcMakeGObjSPAfter(0, NULL, 6, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(stage_select_gobj, mnMapsRenderStageSelectGfx, 4, GOBJ_PRIORITY_DEFAULT, ~0);

	// Stage Select texture
	stage_select_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_STAGE_SELECT_IMAGE_OFFSET));
	stage_select_sobj->sprite.attr &= ~SP_FASTCOPY;
	stage_select_sobj->sprite.attr |= SP_TRANSPARENT;

	stage_select_sobj->envcolor.r = 0x00;
	stage_select_sobj->envcolor.g = 0x00;
	stage_select_sobj->envcolor.b = 0x00;

	stage_select_sobj->sprite.red = 0xAF;
	stage_select_sobj->sprite.green = 0xB1;
	stage_select_sobj->sprite.blue = 0xCC;

	stage_select_sobj->pos.x = 172.0F;
	stage_select_sobj->pos.y = 122.0F;

	// Yellow oval left edge
	yellow_oval_left_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_YELLOW_OVAL_LEFT_IMAGE_OFFSET));
	yellow_oval_left_sobj->sprite.attr &= ~SP_FASTCOPY;
	yellow_oval_left_sobj->sprite.attr |= SP_TRANSPARENT;

	yellow_oval_left_sobj->pos.x = 174.0F;
	yellow_oval_left_sobj->pos.y = 191.0F;

	// Yellow oval middle section
	for (x = 0xBA; x < 0x106; x += 4)
	{
		yellow_oval_center_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_YELLOW_OVAL_CENTER_IMAGE_OFFSET));
		yellow_oval_center_sobj->pos.x = x;
		yellow_oval_center_sobj->pos.y = 191.0F;
	}

	// Yellow oval right edge
	yellow_oval_right_sobj = lbCommonMakeSObjForGObj(stage_select_gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_YELLOW_OVAL_RIGHT_IMAGE_OFFSET));
	yellow_oval_right_sobj->sprite.attr &= ~SP_FASTCOPY;
	yellow_oval_right_sobj->sprite.attr |= SP_TRANSPARENT;

	yellow_oval_right_sobj->pos.x = 262.0F;
	yellow_oval_right_sobj->pos.y = 191.0F;
}

// 0x80132430
s32 mnMapsGetGroundKind(s32 slot_id)
{
	s32 gkinds[/* */] =
	{
		nGRKindCastle, nGRKindJungle, nGRKindHyrule, nGRKindZebes, nGRKindInishie,
		nGRKindYoster, nGRKindPupupu, nGRKindSector, nGRKindYamabuki, 0xDE
	};

	if (slot_id == 9)
	{
		return 0xDE;
	}
	return gkinds[slot_id];
}

// 0x80132498
s32 mnMapsGetSlotID(s32 gkind)
{
	switch (gkind)
	{
	case nGRKindCastle:
		return 0;
		
	case nGRKindJungle:
		return 1;
		
	case nGRKindHyrule:
		return 2;
		
	case nGRKindZebes:
		return 3;
		
	case nGRKindInishie:
		return 4;
		
	case nGRKindYoster:
		return 5;
		
	case nGRKindPupupu:
		return 6;
		
	case nGRKindSector:
		return 7;
		
	case nGRKindYamabuki:
		return 8;
		
	case 0xDE:
		return 9;
	}
}

// 0x80132528
void mnMapsMakeIcons(void)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		0x00004d88, 0x00005b68, 0x00006948, 0x00007728, 0x00008508,
		0x000092e8, 0x0000bc88, 0x0000a0c8, 0x0000aea8, 0x0000cb10
	};
	s32 x;
	s32 i;

	gobj = gcMakeGObjSPAfter(0, NULL, 3, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 1, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; i < ARRAY_COUNT(offsets); i++)
	{
		if (mnMapsCheckLocked(mnMapsGetGroundKind(i)) == FALSE)
		{
			x = i * 50;

			if (i == 9)
			{
				sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_RANDOM_IMAGE_OFFSET));
			}
			else sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], offsets[mnMapsGetGroundKind(i)]));

			if (i < 5)
			{
				sobj->pos.y = 30.0F;
				sobj->pos.x = x + 30;
			}
			else
			{
				sobj->pos.y = 68.0F;
				sobj->pos.x = x - 220;
			}
		}
	}
}

// 0x801326DC
void mnMapsSetNamePosition(SObj *sobj, s32 gkind)
{
	Vec2f positions[/* */] =
	{
		{ 195.0F, 196.0F },
		{ 202.0F, 196.0F },
		{ 190.0F, 196.0F },
		{ 195.0F, 196.0F },
		{ 198.0F, 196.0F },
		{ 190.0F, 196.0F },
		{ 195.0F, 196.0F },
		{ 190.0F, 196.0F },
		{ 190.0F, 196.0F }
	};
	sobj->pos.x = 183.0F;
	sobj->pos.y = 196.0F;
}

// 0x80132738
void mnMapsCreateStageName(GObj* gobj, s32 gkind)
{
	SObj* sobj;
	intptr_t offsets[9] =
	{
		0x000001f8, 0x00000438, 0x00000678,
		0x000008b8, 0x00000b10, 0x00000d58,
		0x00001418, 0x00000f98, 0x000011d8
	};

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], offsets[gkind]));
	mnMapsSetNamePosition(sobj, gkind);

	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
}

// 0x80134700
char *dMNMapsSubtitles[/* */] =
{
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
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	"KINGDOM"
};

// 0x80134748
f32 dMNMapsSubtitlePositions[/* */] =
{
	192.0F, 167.0F, 214.0F, 167.0F, 202.0F, 169.0F, 202.0F, 169.0F, 193.0F, 169.0F, 198.0F,
	169.0F, 205.0F, 169.0F, 199.0F, 169.0F, 191.0F, 167.0F, 209.0F, 174.0F, 188.0F, 174.0F
};

// 0x801347A0
s32 dMNMapsUnknown0x801347A0[/* */] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

// 0x801347C8
f32 dMNMapsUnknown0x801347C8[/* */] = { 203.0F, 174.0F, 213.0F, 174.0 };

// 0x801347D8
u32 dMNMapsSubtitleColors[/* */] = { 255, 255, 255 };

// 0x801327E0 - Unused?
void func_ovl30_801327E0(void)
{
	return;
}

// 0x801327E8 - Unused?
void func_ovl30_801327E8(void)
{
	return;
}

// 0x801327F0
void mnMapsSetLogoPosition(GObj *gobj, s32 gkind)
{
	Vec2f positions[/* */] =
	{
		{ 3.0F, 19.0F },
		{ 3.0F, 19.0F },
		{ 3.0F, 20.0F },
		{ 2.0F, 20.0F },
		{ 3.0F, 17.0F },
		{-1.0F, 19.0F },
		{ 1.0F, 20.0F },
		{ 1.0F, 20.0F },
		{ 3.0F, 19.0F },
		{ 34.0F,20.0F }
	};

	if (gkind == 0xDE)
	{
		SObjGetStruct(gobj)->pos.x = 223.0F;
		SObjGetStruct(gobj)->pos.y = 144.0F;
	}
	else
	{
		SObjGetStruct(gobj)->pos.x = positions[gkind].x + 189.0F;
		SObjGetStruct(gobj)->pos.y = positions[gkind].y + 124.0F;
	}
}

// 0x801328A8
void mnMapsMakeEmblem(GObj *gobj, s32 gkind)
{
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		0x0618, 0x1938,
		0x0C78, 0x12D8,
		0x25F8, 0x2C58,
		0x1F98, 0x3918,
		0x0618
	};

	if (gkind == 0xDE)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_SMASH_LOGO_IMAGE_OFFSET));

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->sprite.red = 0x5C;
		sobj->sprite.green = 0x22;
		sobj->sprite.blue = 0x00;
	}
	else
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[0], offsets[gkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		sobj->sprite.red = 0x5C;
		sobj->sprite.green = 0x22;
		sobj->sprite.blue = 0x00;
	}
	mnMapsSetLogoPosition(gobj, gkind);
}

// 0x801329AC
void mnMapsMakeNameAndEmblem(s32 slot_id)
{
	GObj *gobj;

	if (sMNMapsNameLogoGObj != NULL)
	{
		gcEjectGObj(sMNMapsNameLogoGObj);
	}
	gobj = gcMakeGObjSPAfter(0, NULL, 4, GOBJ_PRIORITY_DEFAULT);
	sMNMapsNameLogoGObj = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 2, GOBJ_PRIORITY_DEFAULT, ~0);
	mnMapsMakeEmblem(sMNMapsNameLogoGObj, mnMapsGetGroundKind(slot_id));

	if (slot_id != 9)
	{
		mnMapsCreateStageName(sMNMapsNameLogoGObj, mnMapsGetGroundKind(slot_id));
	}
}

// 0x80132A58
void mnMapsSetCursorPosition(GObj *gobj, s32 slot_id)
{
	if (slot_id < 5)
	{
		SObjGetStruct(gobj)->pos.x = (slot_id * 50) + 23;
		SObjGetStruct(gobj)->pos.y = 23.0F;
	}
	else
	{
		SObjGetStruct(gobj)->pos.x = (slot_id * 50) - 250 + 23;
		SObjGetStruct(gobj)->pos.y = 61.0F;
	}
}

// 0x80132ADC
void mnMapsMakeCursor(void)
{
	GObj *gobj;
	SObj *sobj;

	sMNMapsCursorGObj = gobj = gcMakeGObjSPAfter(0, NULL, 7, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNMapsFiles[2], &FILE_01E_CURSOR_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;

	mnMapsSetCursorPosition(gobj, sMNMapsCursorSlotID);
}

// 0x80132B84
void mnMapsLoadMapFile(s32 gkind, void *heap)
{
	sMNMapsGroundInfo = lbRelocGetFileData
	(
		MPGroundData*,
		lbRelocGetForceExternHeapFile(dMNMapsFileInfoArray[gkind].id, heap),
		dMNMapsFileInfoArray[gkind].header_size
	);
}

// 0x80132BC8
void mnMapsRenderStagePreviewWallpaper(GObj *gobj)
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
	lbCommonDrawSObjAttr(gobj);
}

// 0x80132D2C
GObj* mnMapsMakePreviewWallpaper(s32 gkind)
{
	GObj *gobj;
	SObj *sobj;
	s32 x;

	gobj = gcMakeGObjSPAfter(0, NULL, 9, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnMapsRenderStagePreviewWallpaper, 7, GOBJ_PRIORITY_DEFAULT, ~0);

	// draw patterned bg
	for (x = 0x2B; x < 0x9B; x += 0x10)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNMapsFiles[2], &FILE_01E_STAGE_PREVIEW_PATTERNED_BG_IMAGE_OFFSET));
		sobj->pos.x = x;
		sobj->pos.y = 130.0F;

		if (TRUE); // grrrrrr
	}

	// Check if Random
	if (gkind == 0xDE)
	{
		// If Random, use Random image
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNMapsFiles[2], &FILE_01E_RANDOM_STAGE_PREVIEW_BG_IMAGE_OFFSET));
		sobj->pos.x = 40.0F;
		sobj->pos.y = 127.0F;
	}
	else
	{
		// If not Random, check if Training Mode
		if (sMNMapsIsTrainingMode == TRUE)
		{
			// If Training Mode, use Smash logo bg
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, lbRelocGetForceExternHeapFile(dMNMapsTrainingModeFileNodes[dMNMapsTrainingModeWallpaperIDs[gkind]].id, (uintptr_t)sMNMapsGroundInfo->wallpaper - dMNMapsWallpaperOffsets[gkind]), &FILE_01A_TRAINING_BACKGROUND_IMAGE_OFFSET));
		}
		else
		{
			// Use stage bg
			sobj = lbCommonMakeSObjForGObj(gobj, sMNMapsGroundInfo->wallpaper);
		}

		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.scalex = 0.37F;
		sobj->sprite.scaley = 0.37F;
		sobj->pos.x = 40.0F;
		sobj->pos.y = 127.0F;
	}

	return gobj;
}

// 0x80132EF0
void mnMapsRenderStagePreviewPrimary(GObj* stage_geo_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gSPSetGeometryMode(gSYTaskmanDLHeads[0]++, G_ZBUFFER);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gcDrawDObjTreeForGObj(stage_geo_gobj);
}

// 0x80132F70
void mnMapsRenderStagePreviewSecondary(GObj* stage_geo_gobj)
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
GObj* mnMapsCreateStageGeo(s32 gkind, MPGroundData* stage_info, MPGroundDesc* stage_geo, s32 stage_geo_id)
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
	gcAddGObjDisplay(stage_geo_gobj, (stage_info->layer_mask & (1 << stage_geo_id)) ? mnMapsRenderStagePreviewSecondary : mnMapsRenderStagePreviewPrimary, 3U, GOBJ_PRIORITY_DEFAULT, ~0);
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

	DObjGetStruct(stage_geo_gobj)->scale.vec.f.x = scale[gkind];
	DObjGetStruct(stage_geo_gobj)->scale.vec.f.y = scale[gkind];
	DObjGetStruct(stage_geo_gobj)->scale.vec.f.z = scale[gkind];

	return stage_geo_gobj;
}

// 0x801331AC
void mnMapsCreateStageGeos(s32 gkind, MPGroundData* stage_info, s32 heap_id)
{
	DObj* stage_dobj;
	DObj* next_dobj;
	GObj** stage_info_array = (heap_id == 0) ? &sMNMapsHeap1StageInfoArray : &sMNMapsHeap0StageInfoArray;
	s32 i;

	stage_info_array[0] = mnMapsCreateStageGeo(gkind, stage_info, &stage_info->gr_desc[0], 0);
	stage_info_array[1] = mnMapsCreateStageGeo(gkind, stage_info, &stage_info->gr_desc[1], 1);
	stage_info_array[2] = mnMapsCreateStageGeo(gkind, stage_info, &stage_info->gr_desc[2], 2);
	stage_info_array[3] = mnMapsCreateStageGeo(gkind, stage_info, &stage_info->gr_desc[3], 3);

	if (gkind == nGRKindYamabuki)
	{
		DObjGetChild(DObjGetChild(DObjGetStruct(stage_info_array[3])))->flags = DOBJ_FLAG_HIDDEN;
	}

	if (gkind == nGRKindYoster)
	{
		for (next_dobj = stage_dobj = DObjGetStruct(stage_info_array[0]), i = 1; next_dobj != NULL; next_dobj = lbCommonGetTreeDObjNextFromRoot(next_dobj, stage_dobj), i += 1)
		{
			if ((i == 0xF) || (i == 0x11))
			{
				next_dobj->flags = DOBJ_FLAG_HIDDEN;
			}
		}
	}
}

// 0x801332DC
void mnMapsDestroyPreview(s32 heap_id)
{
	s32 i;

	if (heap_id == 0)
	{
		if (sMNMapsHeap0WallpaperGObj != NULL)
		{
			gcEjectGObj(sMNMapsHeap0WallpaperGObj);
			sMNMapsHeap0WallpaperGObj = NULL;
		}
		for (i = 0; i < ARRAY_COUNT(sMNMapsHeap0StageInfoArray); i++)
		{
			if (sMNMapsHeap0StageInfoArray[i] != NULL)
			{
				gcEjectGObj(sMNMapsHeap0StageInfoArray[i]);
				sMNMapsHeap0StageInfoArray[i] = NULL;
			}
		}
	}
	else
	{
		if (sMNMapsHeap1WallpaperGObj != NULL)
		{
			gcEjectGObj(sMNMapsHeap1WallpaperGObj);
			sMNMapsHeap1WallpaperGObj = NULL;
		}
		for (i = 0; i < ARRAY_COUNT(sMNMapsHeap1StageInfoArray); i++)
		{
			if (sMNMapsHeap1StageInfoArray[i] != NULL)
			{
				gcEjectGObj(sMNMapsHeap1StageInfoArray[i]);
				sMNMapsHeap1StageInfoArray[i] = NULL;
			}
		}
	}
}

// 0x801333B4
void mnMapsMakePreview(s32 gkind)
{
	if (gkind != 0xDE)
	{
		if (sMNMapsHeapID == 0)
		{
			mnMapsLoadMapFile(gkind, sMNMapsModelHeap1);
		}
		else mnMapsLoadMapFile(gkind, sMNMapsModelHeap0);
	}
	if (sMNMapsHeapID == 0)
	{
		sMNMapsHeap1WallpaperGObj = mnMapsMakePreviewWallpaper(gkind);
	}
	else sMNMapsHeap0WallpaperGObj = mnMapsMakePreviewWallpaper(gkind);

	if (gkind != 0xDE)
	{
		mnMapsCreateStageGeos(gkind, sMNMapsGroundInfo, sMNMapsHeapID);
		mnMapsSetPreviewCameraPosition(sMNMapsPreviewCObj, gkind);
	}
	mnMapsDestroyPreview(sMNMapsHeapID);

	sMNMapsHeapID = (sMNMapsHeapID == 0) ? 1 : 0;
}

// 0x801334AC
void mnMapsMakeWallpaperCamera(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		80,
		COBJ_MASK_DLLINK(0),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013354C
void mnMapsMakePlaqueViewport(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		40,
		COBJ_MASK_DLLINK(6),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801335EC
void mnMapsMakePreviewWallpaperViewport(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		70,
		COBJ_MASK_DLLINK(7),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013368C
void mnMapsCreateStageSelectGfxViewport(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		30,
		COBJ_MASK_DLLINK(4),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013372C
void mnMapsMakeIconsCamera(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		60,
		COBJ_MASK_DLLINK(1),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801337CC
void mnMapsMakeNameAndEmblemCamera(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		20,
		COBJ_MASK_DLLINK(2),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013386C
void mnMapsMakeCursorCamera(void)
{
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSprite,
		50,
		COBJ_MASK_DLLINK(5),
		~0,
		FALSE,
		nGCProcessKindFunc,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013390C
void mnMapsSetPreviewCameraPosition(CObj *cobj, s32 gkind)
{
	Vec3f positions[/* */] =
	{
		{ 1700.0F, 1800.0F, 0.0F },
		{ 1600.0F, 1600.0F, 0.0F },
		{ 1600.0F, 1600.0F, 0.0F },
		{ 1600.0F, 1600.0F, 0.0F },
		{ 1600.0F, 1500.0F, 0.0F },
		{ 1600.0F, 1600.0F, 0.0F },
		{ 1600.0F, 1500.0F, 0.0F },
		{ 1600.0F, 1600.0F, 0.0F },
		{ 1200.0F, 1600.0F, 0.0F },
	};

	if (gkind == 0xDE)
	{
		gkind = 0;
	}
	cobj->vec.eye.x = -3000.0F;
	cobj->vec.eye.y = 3000.0F;
	cobj->vec.eye.z = 9000.0F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.y = 1.0F;
	cobj->vec.up.z = 0.0F;
	cobj->vec.at.x = positions[gkind].x;
	cobj->vec.at.y = positions[gkind].y;
	cobj->vec.at.z = positions[gkind].z;
}

// 0x801339C4
void mnMapsPreviewCameraThreadUpdate(GObj *gobj)
{
	CObj* cobj = CObjGetStruct(gobj);
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
void mnMapsMakePreviewCamera(void)
{
	s32 unused;
	GObj *gobj = gcMakeCameraGObj
	(
		1,
		NULL,
		1,
		GOBJ_PRIORITY_DEFAULT,
		func_80017DBC,
		65,
		COBJ_MASK_DLLINK(3),
		~0,
		TRUE,
		nGCProcessKindThread,
		NULL,
		1,
		FALSE
	);
	CObj *cobj = CObjGetStruct(gobj);

	sMNMapsPreviewCObj = cobj;

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->projection.persp.far = 16384.0F;

	mnMapsSetPreviewCameraPosition(cobj, mnMapsGetGroundKind(sMNMapsCursorSlotID));

	gcAddGObjProcess(gobj, mnMapsPreviewCameraThreadUpdate, nGCProcessKindThread, 1);
}

// 0x80133B78
void mnMapsSaveSceneData(void)
{
	s32 unused[/* */] =
	{
		nGRKindPupupu, 	nGRKindZebes,	nGRKindCastle,
		nGRKindInishie,	nGRKindJungle, 	nGRKindSector,
		nGRKindYoster, 	nGRKindYamabuki,nGRKindHyrule
	};
	s32 gkind;

	if (sMNMapsCursorSlotID == 9)
	{
		do
		{
			gkind = syUtilsGetRandomTimeUCharRange(9);
		}
		while ((mnMapsCheckLocked(gkind) != FALSE) || (gkind == gSCManagerSceneData.gkind));

		gSCManagerSceneData.gkind = gkind;
	}
	else gSCManagerSceneData.gkind = mnMapsGetGroundKind(sMNMapsCursorSlotID);

	if (sMNMapsIsTrainingMode == FALSE)
	{
		gSCManagerSceneData.maps_vsmode_gkind = mnMapsGetGroundKind(sMNMapsCursorSlotID);
	}
	if (sMNMapsIsTrainingMode == TRUE)
	{
		gSCManagerSceneData.maps_training_gkind = mnMapsGetGroundKind(sMNMapsCursorSlotID);
	}
}

// 0x80133C6C
void mnMapsInitVars(void)
{
	s32 i;

	sMNMapsNameLogoGObj = NULL;
	sMNMapsHeap0WallpaperGObj = NULL;
	sMNMapsHeap1WallpaperGObj = NULL;

	for (i = 0; i < ARRAY_COUNT(sMNMapsHeap0StageInfoArray); i++)
	{
		sMNMapsHeap0StageInfoArray[i] = NULL;
		sMNMapsHeap1StageInfoArray[i] = NULL;
	}
	switch (gSCManagerSceneData.scene_prev)
	{
	case nSCKind1PTrainingPlayers:
		sMNMapsIsTrainingMode = TRUE;
		sMNMapsCursorSlotID = mnMapsGetSlotID(gSCManagerSceneData.maps_training_gkind);
		break;
		
	case nSCKindVSPlayers:
		sMNMapsIsTrainingMode = FALSE;
		sMNMapsCursorSlotID = mnMapsGetSlotID(gSCManagerSceneData.maps_vsmode_gkind);
		break;
	}
	sMNMapsUnlockedMask = gSCManagerBackupData.unlock_mask;
	sMNMapsHeapID = 1;
	sMNMapsTotalTimeTics = 0;
	sMNMapsMaxTotalTimeTics = sMNMapsTotalTimeTics + I_MIN_TO_TICS(5);
}

// 0x80133D60
void mnMapsSaveSceneData2(void)
{
	mnMapsSaveSceneData();
}

// 0x80133D80
void mnMapsFuncRun(GObj *gobj)
{
	s32 unused;
	s32 stick_input;
	s32 button_input;

	sMNMapsTotalTimeTics++;

	if (sMNMapsTotalTimeTics >= 10)
	{
		if (sMNMapsTotalTimeTics == sMNMapsMaxTotalTimeTics)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindTitle;

			mnMapsSaveSceneData2();
			syTaskmanSetLoadScene();
			return;
		}
		if (scSubsysControllerCheckNoInputAll() == FALSE)
		{
			sMNMapsMaxTotalTimeTics = sMNMapsTotalTimeTics + I_MIN_TO_TICS(5);
		}
		if (sMNMapsScrollWait != 0)
		{
			sMNMapsScrollWait--;
		}
		if
		(
			(scSubsysControllerGetPlayerStickInRangeLR(-20, 20)) &&
			(scSubsysControllerGetPlayerStickInRangeUD(-20, 20)) &&
			(scSubsysControllerGetPlayerHoldButtons(U_JPAD | R_JPAD | R_TRIG | U_CBUTTONS | R_CBUTTONS) == FALSE) && 
			(scSubsysControllerGetPlayerHoldButtons(D_JPAD | L_JPAD | L_TRIG | D_CBUTTONS | L_CBUTTONS) == FALSE)
		)
		{
			sMNMapsScrollWait = 0;
		}

		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON))
		{
			mnMapsSaveSceneData2();
			func_800269C0_275C0(nSYAudioFGMStageSelect);

			if (sMNMapsIsTrainingMode == TRUE)
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
			mnMapsSaveSceneData2();

			if (sMNMapsIsTrainingMode == TRUE)
			{
				gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
				gSCManagerSceneData.scene_curr = nSCKind1PTrainingPlayers;
			}
			else
			{
				gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
				gSCManagerSceneData.scene_curr = nSCKindVSPlayers;
			}
			syTaskmanSetLoadScene();
		}
		if (sMNMapsScrollWait == 0)
		{
			button_input = scSubsysControllerGetPlayerHoldButtons(U_JPAD | U_CBUTTONS);

			if ((button_input != 0) || (stick_input = scSubsysControllerGetPlayerStickUD(20, 1), (stick_input != 0)))
			{
				if ((sMNMapsCursorSlotID >= 5) && (mnMapsCheckLocked(mnMapsGetGroundKind(sMNMapsCursorSlotID - 5)) == FALSE))
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);

					sMNMapsCursorSlotID -= 5;

					mnMapsMakeNameAndEmblem(sMNMapsCursorSlotID);
					mnMapsSetCursorPosition(sMNMapsCursorGObj, sMNMapsCursorSlotID);
					mnMapsMakePreview(mnMapsGetGroundKind(sMNMapsCursorSlotID));
				}

				if (button_input != 0)
				{
					sMNMapsScrollWait = 12;
				}
				else sMNMapsScrollWait = (160 - stick_input) / 7;

				return;
			}
			button_input = scSubsysControllerGetPlayerHoldButtons(D_JPAD | D_CBUTTONS);

			if ((button_input != 0) || (stick_input = scSubsysControllerGetPlayerStickUD(-20, 0), (stick_input != 0)))
			{
				if ((sMNMapsCursorSlotID < 5) && (mnMapsCheckLocked(mnMapsGetGroundKind(sMNMapsCursorSlotID + 5)) == FALSE))
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);

					sMNMapsCursorSlotID += 5;

					mnMapsMakeNameAndEmblem(sMNMapsCursorSlotID);
					mnMapsSetCursorPosition(sMNMapsCursorGObj, sMNMapsCursorSlotID);
					mnMapsMakePreview(mnMapsGetGroundKind(sMNMapsCursorSlotID));
				}

				if (button_input != 0)
				{
					sMNMapsScrollWait = 12;
				}
				else sMNMapsScrollWait = (stick_input + 160) / 7;

				return;
			}
			button_input = scSubsysControllerGetPlayerHoldButtons(L_JPAD | L_TRIG | L_CBUTTONS);

			if ((button_input != 0) || (stick_input = scSubsysControllerGetPlayerStickLR(-20, 0), (stick_input)))
			{
				switch (sMNMapsCursorSlotID)
				{
				case 0:
					sMNMapsCursorSlotID = (mnMapsCheckLocked(mnMapsGetGroundKind(4))) ? 3 : 4;
					break;

				case 5:
					sMNMapsCursorSlotID = 9;
					break;
					
				default:
					sMNMapsCursorSlotID--;
				}
				func_800269C0_275C0(nSYAudioFGMMenuScroll2);
				mnMapsMakeNameAndEmblem(sMNMapsCursorSlotID);
				mnMapsSetCursorPosition(sMNMapsCursorGObj, sMNMapsCursorSlotID);
				mnMapsMakePreview(mnMapsGetGroundKind(sMNMapsCursorSlotID));

				if (button_input != 0)
				{
					sMNMapsScrollWait = 12;
				}
				else sMNMapsScrollWait = (stick_input + 160) / 7;

				return;
			}
			button_input = scSubsysControllerGetPlayerHoldButtons(R_JPAD | R_TRIG | R_CBUTTONS);

			if ((button_input != 0) || (stick_input = scSubsysControllerGetPlayerStickLR(20, 1), (stick_input)))
			{
				switch (sMNMapsCursorSlotID)
				{
				case 3:
					sMNMapsCursorSlotID = (mnMapsCheckLocked(mnMapsGetGroundKind(4))) ? 0 : 4;
					break;
					
				case 4:
					sMNMapsCursorSlotID = 0;
					break;
					
				case 9:
					sMNMapsCursorSlotID = 5;
					break;
					
				default:
					sMNMapsCursorSlotID++;
				}
				func_800269C0_275C0(nSYAudioFGMMenuScroll2);
				mnMapsMakeNameAndEmblem(sMNMapsCursorSlotID);
				mnMapsSetCursorPosition(sMNMapsCursorGObj, sMNMapsCursorSlotID);
				mnMapsMakePreview(mnMapsGetGroundKind(sMNMapsCursorSlotID));

				if (button_input != 0)
				{
					sMNMapsScrollWait = 12;
				}
				else sMNMapsScrollWait = (160 - stick_input) / 7;
			}
		}
	}
}

// 0x80134304
void mnMapsFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNMapsStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNMapsStatusBuffer);
	rl_setup.force_status_buffer = sMNMapsForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNMapsForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNMapsFileIDs,
		ARRAY_COUNT(dMNMapsFileIDs),
		sMNMapsFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNMapsFileIDs,
				ARRAY_COUNT(dMNMapsFileIDs)
			),
			0x10
		)
	);
	mnMapsAllocModelHeaps();

	gcMakeGObjSPAfter(0, mnMapsFuncRun, 0, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(1, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
	mnMapsInitVars();
	mnMapsMakeWallpaperCamera();
	mnMapsCreateStageSelectGfxViewport();
	mnMapsMakeIconsCamera();
	mnMapsMakeNameAndEmblemCamera();
	mnMapsMakeCursorCamera();
	mnMapsMakePreviewCamera();
	mnMapsMakePlaqueViewport();
	mnMapsMakePreviewWallpaperViewport();
	mnMapsMakeWallpaper();
	mnMapsMakePlaque();
	mnMapsCreateStageSelectGfx();
	mnMapsMakeIcons();
	mnMapsMakeNameAndEmblem(sMNMapsCursorSlotID);
	mnMapsMakeCursor();
	mnMapsMakePreview(mnMapsGetGroundKind(sMNMapsCursorSlotID));
}

// 0x8013490C
SYVideoSetup dMNMapsVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x80134928
SYTaskmanSetup dMNMapsTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        scManagerFuncDraw,        	// Frame draw function
        &ovl30_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2125,         // Display List Buffer 0 Size
        sizeof(Gfx) * 512,          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0x8000,                     // RDP Output Buffer Size
        mnMapsFuncLights,   		// Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 64,              	// Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of XObjs
    NULL,        					// Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    mnMapsFuncStart         		// Task start function
};

// 0x8013446C
void mnMapsStartScene(void)
{
	dMNMapsVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNMapsVideoSetup);

	dMNMapsTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl30_BSS_END);
	scManagerFuncUpdate(&dMNMapsTaskmanSetup);
}
