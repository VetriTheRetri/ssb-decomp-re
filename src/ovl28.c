

#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>

#include "character_select.h"

// Externs

// ovl1 stuff
extern f32 dSCSubsysDemoFighterScales[12]; // dSCSubsysDemoFighterScales

extern intptr_t FILE_000_COLON_IMAGE_OFFSET; // file 0x000 image offset for colon

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET; // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET; // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_START_IMAGE_OFFSET; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET; // Press Start's "Press" texture
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET; // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET; // file 0x011 image offset for Back button

extern intptr_t FILE_012_TRAINING_MODE_IMAGE_OFFSET; // file 0x012 image offset for Training Mode title image

extern intptr_t FILE_013_XBOX_IMAGE_OFFSET;
extern intptr_t FILE_013_WHITE_SQUARE;
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET; // file 0x013 image offset for portrait bg (fire) image

extern intptr_t lMNSelectCommonWallpaperSprite; // file 0x015 image offset for background tile

extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle

extern intptr_t FILE_017_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_017_CPU_PANEL_LUT_OFFSET; // D_NF_00003238; // CPU panel LUT

extern void syRdpSetViewport(void*, f32, f32, f32, f32);
extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);



// Forward declarations
void mn1PTrainingPlayersMakePortraitFlash(s32 player);
void mn1PTrainingPlayersSyncNameAndLogo(s32 player);
sb32 mn1PTrainingPlayersIsCostumeInUse(s32 fkind, s32 player, s32 costume);
void mn1PTrainingPlayersAnnounceFighter(s32 player, s32 panel_id);
void mn1PTrainingPlayersUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_state);
void mn1PTrainingPlayersDrawHandicapCPULevel(s32 player);
void mn1PTrainingPlayersReorderCursorsOnPlacement(s32 player, s32 held_puck_id);
void mn1PTrainingPlayersSaveMatchInfo();


// DATA
// 0x80137F60
u32 D_ovl28_80137F60[20] = {

	0x00000011,
	0x00000017,
	0x00000000,
	0x00000014,
	0x00000015,
	0x00000012,
	0x00000013,
	0x00000016,
	0x20202000,
	0x20202000,
	0xFFFFFF00,
	0xFFFFFF00,
	0x14141400,
	0x00000000,
	0x20202000,
	0x20202000,
	0xFFFFFF00,
	0xFFFFFF00,
	0x00EC0000,
	0x00000000
};


// BSS
// 0x80138CC0
s32 D_ovl28_80138CC0[2];

// 0x80138558
MNPlayersSlotTraining gMNTrainingPanels[2];

// 0x801386C8
s32 D_ovl28_801386C8[102];

// 0x80138860
s32 gMNTrainingStartDelayTimer;

// 0x80138864
sb32 gMNTrainingIsStartTriggered;

// 0x80138868
sb32 gMNTrainingDefaultCostumeOnly;

// 0x8013886C
s32 D_ovl28_8013886C;

// 0x80138870 title gobj
GObj* gMNTrainingTitleGObj;

// 0x80138874
s32 gMNTrainingPuckShinePulseColor;

// 0x80138878
sb32 gMNTrainingIsPuckShineIncreasing;

// 0x8013887C
u16 gMNTrainingCharacterUnlockedMask;

// 0x80138880
s32 D_ovl28_80138880;

// 0x80138884
s32 gMNTrainingPressStartFlashTimer;

// 0x80138888
s32 D_ovl28_80138888;

// 0x8013888C frames elapsed on CSS
s32 gMNTrainingTotalTimeTics;

// 0x80138890
s32 gMNTrainingMaxTotalTimeTics;

// 0x80138894
s32 gMNTrainingHumanPanelPort;

// 0x80138898
s32 gMNTrainingCPUPanelPort;

// 0x801388A0
LBFileNode D_ovl28_801388A0;

// 0x801388A8
s32 D_ovl28_801388A8[12];

// 0x801388D8
u32 D_ovl28_801388D8[240];

// 0x80138C98
void *gMNTrainingFiles[8];

// 0x80131B00
void mn1PTrainingPlayersFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mn1PTrainingPlayersSelectFighterPuck(s32 player, s32 select_button)
{
	s32 held_player = gMNTrainingPanels[player].held_player, costume;

	if (select_button != mnSelect_A)
	{
		costume = ftParamGetCostumeCommonID(gMNTrainingPanels[held_player].fkind, select_button);

		if (mn1PTrainingPlayersIsCostumeInUse(gMNTrainingPanels[held_player].fkind, held_player, costume))
		{
			func_800269C0_275C0(0xA5U);
			return;
		}

		ftParamInitAllParts(gMNTrainingPanels[held_player].player, costume, 0);
		gMNTrainingPanels[held_player].costume = costume;
	}

	gMNTrainingPanels[held_player].is_selected = TRUE;

	mn1PTrainingPlayersReorderCursorsOnPlacement(player, held_player);

	gMNTrainingPanels[held_player].holder_player = 4;
	gMNTrainingPanels[player].cursor_state = mnCursorStateNotHoldingPuck;

	mn1PTrainingPlayersUpdateCursor(gMNTrainingPanels[player].cursor, player, 2);

	gMNTrainingPanels[player].held_player = -1;
	gMNTrainingPanels[held_player].unk_0x88 = TRUE;

	mn1PTrainingPlayersAnnounceFighter(player, held_player);

	mn1PTrainingPlayersMakePortraitFlash(held_player);
}

// 0x80131C70
f32 mn1PTrainingPlayersGetNextPortraitX(s32 portrait, f32 current_x_position)
{
	f32 portrait_pos_x[12] = {

		25.0, 70.0, 115.0, 160.0, 205.0, 250.0,
		25.0, 70.0, 115.0, 160.0, 205.0, 250.0
	},
		portrait_vel[12] = {

		1.9, 3.9, 7.8, -7.8, -3.8, -1.8,
		1.8, 3.8, 7.8, -7.8, -3.8, -1.8
	};

	if (current_x_position == portrait_pos_x[portrait])
	{
		return -1.0F;
	}
	else if (portrait_pos_x[portrait] < current_x_position)
	{
		return (current_x_position + portrait_vel[portrait]) <= portrait_pos_x[portrait]
			? portrait_pos_x[portrait]
			: current_x_position + portrait_vel[portrait];
	}
	else
	{
		return (current_x_position + portrait_vel[portrait]) >= portrait_pos_x[portrait]
			? portrait_pos_x[portrait]
			: current_x_position + portrait_vel[portrait];
	}
}

// 0x80131D84
sb32 mn1PTrainingPlayersCheckFighterIsXBoxed(s32 fkind)
{
	return FALSE;
}

// 0x80131D90
void mn1PTrainingPlayersSetPortraitX(GObj *portrait_gobj)
{
	f32 new_portrait_x = mn1PTrainingPlayersGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

	if (new_portrait_x != -1.0F)
	{
		SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

		if (SObjGetStruct(portrait_gobj)->next != NULL)
		{
			SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
		}
	}
}

// 0x80131E0C
void mn1PTrainingPlayersInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait)
{
	Vec2f coordinates[12] = {

		{ -35.0, 36.0 }, { -35.0, 36.0 }, { -35.0, 36.0 },
		{ 310.0, 36.0 }, { 310.0, 36.0 }, { 310.0, 36.0 },
		{ -35.0, 79.0 }, { -35.0, 79.0 }, { -35.0, 79.0 },
		{ 310.0, 79.0 }, { 310.0, 79.0 }, { 310.0, 79.0 }
	};

	portrait_bg_sobj->pos.x = coordinates[portrait].x;
	portrait_bg_sobj->pos.y = coordinates[portrait].y;
}

// 0x80131E68
void mn1PTrainingPlayersAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x,
		y = portrait_sobj->pos.y;
	s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 0x80131EFC
sb32 mn1PTrainingPlayersGetIsLocked(s32 fkind)
{
	switch (fkind)
	{
		case nFTKindNess:
			return (gMNTrainingCharacterUnlockedMask & (1 << nFTKindNess)) ? FALSE : TRUE;

		case nFTKindPurin:
			return (gMNTrainingCharacterUnlockedMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

		case nFTKindCaptain:
			return (gMNTrainingCharacterUnlockedMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

		case nFTKindLuigi:
			return (gMNTrainingCharacterUnlockedMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;
	}
	return FALSE;
}

// 0x80138070
s32 D_ovl28_80138070[] = {

	0xC55252C5,
	0xA6524294,
	0x595252C5,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000
};

// 0x80131FC8 - Unused?
void func_ovl28_80131FC8() {}

// 0x80131FD0
s32 mn1PTrainingPlayersGetFighterKind(s32 portrait)
{
	s32 FTKind_order[12] = {

		4, 0, 2, 5, 3, 7, 11, 6, 8, 1, 9, 10
	};

	return FTKind_order[portrait];
}

// 0x80132020
s32 mn1PTrainingPlayersGetPortraitId(s32 fkind)
{
	s32 portrait_order[12] = {

		1, 9, 2, 4, 0, 3, 7, 5, 8, 10, 11, 6
	};

	return portrait_order[fkind];
}

// 0x80132070
void mn1PTrainingPlayersRenderPortraitWithNoise(GObj *portrait_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 0x80132130
void mn1PTrainingPlayersCreateLockedPortrait(s32 portrait)
{
	GObj* texture_gobj;
	SObj* texture_sobj;
	intptr_t locked_portrait_offsets[12] = {

		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020538, 0x00000000,
		0x00000000, 0x0001E2E8, 0x00000000, 0x00000000, 0x000249D8, 0x00022788
	};

	// portrait bg (fire)
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mn1PTrainingPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	texture_sobj->pos.x = (f32) (((portrait >= 6 ? portrait - 6 : portrait) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32) (((portrait >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mn1PTrainingPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);
	texture_gobj->user_data.s = portrait;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mn1PTrainingPlayersRenderPortraitWithNoise, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mn1PTrainingPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], locked_portrait_offsets[mn1PTrainingPlayersGetFighterKind(portrait)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

	texture_gobj->user_data.s = portrait;
	mn1PTrainingPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mn1PTrainingPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	texture_sobj->sprite.attr &= ~SP_FASTCOPY;
	texture_sobj->sprite.attr |= SP_TRANSPARENT;
	texture_sobj->envcolor.r = 0x5B;
	texture_sobj->envcolor.g = 0x41;
	texture_sobj->envcolor.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.s = portrait;
	mn1PTrainingPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);
}

// 0x801323D8
void mn1PTrainingPlayersCreatePortrait(s32 portrait)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj *texture_sobj;
	intptr_t portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mn1PTrainingPlayersGetIsLocked(mn1PTrainingPlayersGetFighterKind(portrait)))
	{
		mn1PTrainingPlayersCreateLockedPortrait(portrait);
	}
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1DU, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x24U, GOBJ_PRIORITY_DEFAULT, ~0);
		portrait_bg_gobj->user_data.p = portrait;
		gcAddGObjProcess(portrait_bg_gobj, mn1PTrainingPlayersSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_bg_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		mn1PTrainingPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mn1PTrainingPlayersSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], portrait_offsets[mn1PTrainingPlayersGetFighterKind(portrait)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
		portrait_gobj->user_data.p = portrait;

		// this conditionally draws a big red box with an X in it, but this check always fails
		if (mn1PTrainingPlayersCheckFighterIsXBoxed(mn1PTrainingPlayersGetFighterKind(portrait)))
		{
			mn1PTrainingPlayersAddRedXBoxToPortrait(portrait_gobj, portrait);
		}
		mn1PTrainingPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);
	}
}

// 0x80132594
void mn1PTrainingPlayersCreatePortraits()
{
	s32 portrait;

	for (portrait = 0; portrait < 12; portrait++)
		mn1PTrainingPlayersCreatePortrait(portrait);
}

// 0x801325D4
void mn1PTrainingPlayersMakeNameAndEmblem(GObj* name_logo_gobj_gobj, s32 player, s32 fkind)
{
	SObj* sobj;
	Vec2f coords[12] = {

		{ 13.0, 28.0 }, { 6.0 , 25.0 }, { 5.0 , 25.0 },
		{ 13.0, 25.0 }, { 13.0, 28.0 }, { 13.0, 28.0 },
		{ 16.0, 25.0 }, { 4.0 , 25.0 }, { 13.0, 25.0 },
		{ 13.0, 25.0 }, { 13.0, 25.0 }, { 13.0, 25.0 }
	};
	intptr_t logo_offsets[12] = {

		0x0618, 0x1938, 0x0C78, 0x12D8, 0x0618, 0x25F8,
		0x2C58, 0x32B8, 0x1F98, 0x3918, 0x3918, 0x3F78
	};
	intptr_t name_offsets[12] = {

		0x1838, 0x25B8, 0x1FF8, 0x2358, 0x1B18, 0x2BA0,
		0x2ED8, 0x3998, 0x28E8, 0x32F8, 0x3DB8, 0x35B0
	};

	if (fkind != nFTKindNull)
	{
		gcRemoveSObjAll(name_logo_gobj_gobj);

		// logo
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[3], logo_offsets[fkind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (player == gMNTrainingHumanPanelPort)
		{
			sobj->sprite.red = 0x1E;
			sobj->sprite.green = 0x1E;
			sobj->sprite.blue = 0x1E;
			sobj->pos.x = 63.0F;
			sobj->pos.y = 144.0F;
		}
		else
		{
			sobj->sprite.red = 0x44;
			sobj->sprite.green = 0x44;
			sobj->sprite.blue = 0x44;
			sobj->pos.x = 195.0F;
			sobj->pos.y = 144.0F;
		}

		// name
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], name_offsets[fkind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (player == gMNTrainingHumanPanelPort)
		{
			sobj->pos.x = 61.0F;
			sobj->pos.y = 202.0F;
		}
		else
		{
			sobj->pos.x = 193.0F;
			sobj->pos.y = 202.0F;
		}
	}
}

// 0x801327C4
void mn1PTrainingPlayersCreatePortraitCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132864
void mn1PTrainingPlayersCreatePortraitWallpaperCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132904
void mn1PTrainingPlayersCreatePortraitFlashCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801329A4
void mn1PTrainingPlayersMakeGateDoorsSYRdpViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132A44
void mn1PTrainingPlayersCreateTypeButtonViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132AE4
void mn1PTrainingPlayersMakeGateViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132B84
void mn1PTrainingPlayersCreateTeamButtonViewPort()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132C24
void mn1PTrainingPlayersUpdatePanel(GObj* panel_gobj, s32 player)
{
	SObj* panel_sobj;
	intptr_t lut_offsets[4] = {

		0x103F8, 0x10420, 0x10470, 0x10448
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	if (player == gMNTrainingHumanPanelPort)
	{
		panel_sobj->sprite.LUT = lbRelocGetFileData(void*, gMNTrainingFiles[0], lut_offsets[gMNTrainingHumanPanelPort]);
	}
	else
	{
		panel_sobj->sprite.LUT = lbRelocGetFileData(void*, gMNTrainingFiles[1], &FILE_017_CPU_PANEL_LUT_OFFSET);
	}
}

// 0x80132CA4
void mn1PTrainingPlayersCreateTypeImage(s32 player)
{
	GObj* type_gobj;
	SObj* type_sobj;

	intptr_t offsets[4] = {

		0x878,
		0xA58,
		0xC38,
		0xE18
	};
	f32 floats[4] = {

		8.0, 5.0, 5.0, 5.0
	};

	gMNTrainingPanels[player].type = type_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(type_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	if (player == gMNTrainingHumanPanelPort)
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], offsets[gMNTrainingHumanPanelPort]));
		type_sobj->pos.x = floats[player] + 53.0F;
		type_sobj->pos.y = 131.0F;
	}
	else
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_TYPE_CP_IMAGE_OFFSET));
		type_sobj->pos.x = 192.0F;
		type_sobj->pos.y = 132.0F;
	}

	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;
}

// 0x80132E24
void mn1PTrainingPlayersMakeGate(s32 player)
{
	GObj* panel_gobj;
	GObj* namelogo_gobj;

	// unused
	intptr_t type_offsets[4] = {

		0x878, 0xA58, 0xC38, 0xE18
	};

	// unused
	f32 type_x_offsets[4] = {

		8.0, 5.0, 5.0, 5.0
	};

	// create panel
	panel_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNTrainingFiles[1], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	gMNTrainingPanels[player].panel = panel_gobj;
	SObjGetStruct(panel_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(panel_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (player == gMNTrainingHumanPanelPort)
	{
		SObjGetStruct(panel_gobj)->pos.x = 53.0f;
		SObjGetStruct(panel_gobj)->pos.y = 127.0f;
	}
	else
	{
		SObjGetStruct(panel_gobj)->pos.x = 185.0f;
		SObjGetStruct(panel_gobj)->pos.y = 127.0f;
	}

	mn1PTrainingPlayersUpdatePanel(panel_gobj, player);
	mn1PTrainingPlayersCreateTypeImage(player);

	// name/logo
	namelogo_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gMNTrainingPanels[player].name_logo_gobj = namelogo_gobj;
	gcAddGObjDisplay(namelogo_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	mn1PTrainingPlayersSyncNameAndLogo(player);
}

// 0x80132FF4 - Unused?
void func_ovl28_80132FF4() {}

// 0x80132FFC - Unused?
void func_ovl28_80132FFC() {}

// 0x80133004 - Unused?
void func_ovl28_80133004() {}

// 0x8013300C - Unused?
void func_ovl28_8013300C() {}

// 0x80133014
void mn1PTrainingPlayersMakeWallpaper()
{
	GObj* background_gobj;
	SObj* background_sobj;

	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[4], &lMNSelectCommonWallpaperSprite));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 0x80133140
void mn1PTrainingPlayersDrawTitleAndBack()
{
	GObj* back_gobj;
	GObj* title_gobj;
	void* unused;

	title_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNTrainingFiles[5], &FILE_012_TRAINING_MODE_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(title_gobj)->pos.x = 27.0F;
	SObjGetStruct(title_gobj)->pos.y = 24.0F;
	SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(title_gobj)->sprite.red = 0xE3;
	SObjGetStruct(title_gobj)->sprite.green = 0xAC;
	SObjGetStruct(title_gobj)->sprite.blue = 4;
	gMNTrainingTitleGObj = title_gobj;

	back_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(back_gobj)->pos.x = 244.0F;
	SObjGetStruct(back_gobj)->pos.y = 23.0F;
	SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x80138264
s32 D_ovl28_80138264[10] = {

	0x5388,
	0x5440,
	0x5558,
	0x5668,
	0x5778,
	0x5888,
	0x5998,
	0x5AA8,
	0x5BB8,
	0x5CC8
};

// 0x8013828C
f32 D_ovl28_8013828C[10] = {

	8.0, 6.0, 9.0, 8.0, 8.0, 9.0, 8.0, 8.0, 8.0, 9.0
};

// 0x801332C4 - Unused?
void func_ovl28_801332C4() {}

// 0x801332CC - Unused?
void func_ovl28_801332CC() {}

// 0x801332D4 - Unused?
void func_ovl28_801332D4() {}

// 0x801332DC
s32 mn1PTrainingPlayersGetAdditionalSelectedCount(s32 fkind)
{
	s32 count = 0;

	if (fkind == gMNTrainingPanels[gMNTrainingHumanPanelPort].fkind)
	{
		count += 1;
	}
	if (fkind == gMNTrainingPanels[gMNTrainingCPUPanelPort].fkind)
	{
		count += 1;
	}
	return (count != 0) ? count - 1 : count;
}

// 0x80133350
sb32 mn1PTrainingPlayersIsCostumeInUse(s32 fkind, s32 player, s32 costume)
{
	if (player == gMNTrainingHumanPanelPort)
	{
		if (
			(fkind == gMNTrainingPanels[gMNTrainingCPUPanelPort].fkind)
			&& (costume == gMNTrainingPanels[gMNTrainingCPUPanelPort].costume)
			)
		{
			return TRUE;
		}
		return FALSE;
	}
	if (player == gMNTrainingCPUPanelPort)
	{
		if (
			(fkind == gMNTrainingPanels[gMNTrainingHumanPanelPort].fkind)
			&& (costume == gMNTrainingPanels[gMNTrainingHumanPanelPort].costume)
			)
		{
			return TRUE;
		}
		return FALSE;
	}
}

// 0x80133408
s32 mn1PTrainingPlayersGetAvailableCostumeRoyal(s32 fkind, s32 player)
{
	s32 i, j, k, l;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	if (player == gMNTrainingHumanPanelPort)
	{
		if (fkind == gMNTrainingPanels[gMNTrainingCPUPanelPort].fkind)
		{
			for (j = 0; j < 4; j++)
			{
				if (ftParamGetCostumeCommonID(fkind, j) == gMNTrainingPanels[gMNTrainingCPUPanelPort].costume)
					some_array[j] = TRUE;
			}
		}
	}
	else
	{
		if (fkind ==gMNTrainingPanels[gMNTrainingHumanPanelPort].fkind)
		{
			for (k = 0; k < 4; k++)
			{
				if (ftParamGetCostumeCommonID(fkind, k) == gMNTrainingPanels[gMNTrainingHumanPanelPort].costume)
					some_array[k] = TRUE;
			}
		}
	}

	for (l = 0; l < 4; l++)
	{
		if (!some_array[l])
			return l;
	}
}

// 0x801335F0
s32 mn1PTrainingPlayersGetAvailableCostume(s32 fkind, s32 player)
{
	return ftParamGetCostumeCommonID(fkind, mn1PTrainingPlayersGetAvailableCostumeRoyal(fkind, player));
}

// 0x8013361C
s32 mn1PTrainingPlayersGetStatusSelected(s32 fkind)
{
	switch (fkind)
	{
		case nFTKindFox:
		case nFTKindSamus:
			return 0x10004;
		case nFTKindDonkey:
		case nFTKindLuigi:
		case nFTKindLink:
		case nFTKindCaptain:
			return 0x10001;
		case nFTKindYoshi:
		case nFTKindPurin:
		case nFTKindNess:
			return 0x10002;
		case nFTKindMario:
		case nFTKindKirby:
			return 0x10003;
		default:
			return 0x10001;
	}
}

// 0x8013367C
void mn1PTrainingPlayersRotateFighter(GObj *fighter_gobj)
{
	FTStruct* fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	if (panel_info->unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (!panel_info->is_fighter_selected)
			{
				scSubsysFighterSetStatus(panel_info->player, mn1PTrainingPlayersGetStatusSelected(panel_info->fkind));

				panel_info->is_fighter_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(panel_info->player, mn1PTrainingPlayersGetStatusSelected(panel_info->fkind));

				panel_info->is_fighter_selected = TRUE;
			}
		}
	}
	else
	{
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(2.0F);

		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CST_DTOR32(360.0F))
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= F_CST_DTOR32(360.0F);
		}
	}
}

// 0x801337BC
void mn1PTrainingPlayersSpawnFighter(GObj* fighter_gobj, s32 player, s32 fkind, s32 costume)
{
	f32 initial_y_rotation;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	if (fkind != nFTKindNull)
	{
		if (fighter_gobj != NULL)
		{
			initial_y_rotation = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
			ftManagerDestroyFighter(fighter_gobj);
		}
		else
		{
			initial_y_rotation = 0.0F;
		}

		desc.fkind = fkind;
		gMNTrainingPanels[player].costume = desc.costume = costume;
		desc.shade = 0;
		desc.figatree_heap = gMNTrainingPanels[player].figatree_heap;
		desc.player = player;
		fighter_gobj = ftManagerMakeFighter(&desc);

		gMNTrainingPanels[player].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mn1PTrainingPlayersRotateFighter, 1, 1);

		if (player == gMNTrainingHumanPanelPort)
		{
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = -830.0F;
			DObjGetStruct(fighter_gobj)->translate.vec.f.y = -870.0F;
		}
		else
		{
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = 830.0F;
			DObjGetStruct(fighter_gobj)->translate.vec.f.y = -870.0F;
		}
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysDemoFighterScales[fkind];

		if (player == gMNTrainingCPUPanelPort)
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
	}
}

// 0x801339A0
void mn1PTrainingPlayersMakeFighterCamera()
{
	CObj *cobj = CObjGetStruct((GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 5000.0F;
	cobj->flags = 4;
	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;
	cobj->vec.up.x = 0.0F;
	cobj->vec.up.z = 0.0F;
	cobj->vec.up.y = 1.0F;
}

// 0x80133A90
void mn1PTrainingPlayersUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_state)
{
	SObj* cursor_sobj;
	f32 current_x, current_y;
	SYColorRGBPair type_colors[4] = {

		{ { 0xE0, 0x15, 0x15 }, { 0x5B, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0xFB }, { 0x00, 0x00, 0x52 } },
		{ { 0xCA, 0x94, 0x08 }, { 0x62, 0x3C, 0x00 } },
		{ { 0x00, 0x91, 0x00 }, { 0x00, 0x4F, 0x00 } }
	};
	intptr_t type_offsets[4] = {

		0x8268, 0x8368, 0x8468, 0x8568
	};
	intptr_t cursor_offsets[3] = {

		0x6F88, 0x76E8, 0x8168
	};
	Vec2i type_positions[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};

	current_x = SObjGetStruct(cursor_gobj)->pos.x;
	current_y = SObjGetStruct(cursor_gobj)->pos.y;

	gcRemoveSObjAll(cursor_gobj);

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], type_offsets[player]));
	cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_state].x;
	cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_state].y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = type_colors[player].prim.r;
	cursor_sobj->sprite.green = type_colors[player].prim.g;
	cursor_sobj->sprite.blue = type_colors[player].prim.b;
	cursor_sobj->envcolor.r = type_colors[player].env.r;
	cursor_sobj->envcolor.g = type_colors[player].env.g;
	cursor_sobj->envcolor.b = type_colors[player].env.b;
}

// 0x80133CA0 - Unused?
void func_ovl28_80133CA0() {}

// 0x80133CA8
void mn1PTrainingPlayersUpdatePanels()
{
	s32 i;

	// unused
	s32 color_indexes[4] = {

		0, 1, 2, 3
	};

	mn1PTrainingPlayersUpdatePanel(gMNTrainingPanels[gMNTrainingHumanPanelPort].panel, gMNTrainingHumanPanelPort);
	mn1PTrainingPlayersUpdatePanel(gMNTrainingPanels[gMNTrainingCPUPanelPort].panel, gMNTrainingCPUPanelPort);
}

// 0x80133D44
sb32 mn1PTrainingPlayersCheckPuckGrab(GObj* cursor_gobj, s32 cursor_player, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* puck_sobj = SObjGetStruct(gMNTrainingPanels[player].puck);

	current_x = cursor_sobj->pos.x + 25.0F;

	range_check = (current_x >= puck_sobj->pos.x) && (current_x <= puck_sobj->pos.x + 26.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= puck_sobj->pos.y) && (current_y <= puck_sobj->pos.y + 24.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80133E30
void mn1PTrainingPlayersSyncFighterDisplay(s32 player)
{
	s32 var_v0 = 0;

	if (gMNTrainingPanels[player].player != NULL)
	{
		if ((gMNTrainingPanels[player].fkind == nFTKindNull) && (gMNTrainingPanels[player].is_selected == 0))
		{
			gMNTrainingPanels[player].player->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		mn1PTrainingPlayersSpawnFighter(gMNTrainingPanels[player].player, player, gMNTrainingPanels[player].fkind, mn1PTrainingPlayersGetAvailableCostume(gMNTrainingPanels[player].fkind, player));
		gMNTrainingPanels[player].is_fighter_selected = FALSE;
	}
}

// 0x80133ED8 - Unused?
void func_ovl28_80133ED8() {}

// 0x80133EE0
void mn1PTrainingPlayersSyncNameAndLogo(s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	if ((panel_info->player_type == nFTPlayerKindNot) || ((panel_info->fkind == nFTKindNull) && (!panel_info->is_selected)))
	{
		panel_info->name_logo_gobj->flags = 1;
	}
	else
	{
		panel_info->name_logo_gobj->flags = 0;
		mn1PTrainingPlayersMakeNameAndEmblem(panel_info->name_logo_gobj, player, panel_info->fkind);
	}
}

// 0x80133F68
void mn1PTrainingPlayersDestroyFlash(s32 player)
{
	GObj* flash_gobj;
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	flash_gobj = panel_info->flash;
	if (flash_gobj != NULL)
	{
		panel_info->flash = NULL;
		gcEjectGObj(flash_gobj);
	}
}

// 0x80133FB4
void mn1PTrainingPlayersPortraitFlash(GObj* flash_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0) mn1PTrainingPlayersDestroyFlash(flash_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			flash_gobj->flags = (flash_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x8013405C
void mn1PTrainingPlayersMakePortraitFlash(s32 player)
{
	GObj* flash_gobj;
	SObj* flash_sobj;
	s32 portrait = mn1PTrainingPlayersGetPortraitId(gMNTrainingPanels[player].fkind);

	mn1PTrainingPlayersDestroyFlash(player);

	flash_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1EU, 0x80000000U);
	gMNTrainingPanels[player].flash = flash_gobj;
	gcAddGObjDisplay(flash_gobj, lbCommonDrawSObjAttr, 0x25U, GOBJ_PRIORITY_DEFAULT, ~0);
	flash_gobj->user_data.p = player;
	gcAddGObjProcess(flash_gobj, mn1PTrainingPlayersPortraitFlash, 0, 1);

	flash_sobj = lbCommonMakeSObjForGObj(flash_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[6], &FILE_013_WHITE_SQUARE));
	flash_sobj->pos.x = (f32) (((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26);
	flash_sobj->pos.y = (f32) (((portrait >= 6 ? 1 : 0) * 43) + 37);
}

// 0x801341B0
void mn1PTrainingPlayersAnnounceFighter(s32 player, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (gMNTrainingPanels[player].p_sfx != NULL)
	{
		if ((gMNTrainingPanels[player].p_sfx->sfx_id != 0) && (gMNTrainingPanels[player].p_sfx->sfx_id == gMNTrainingPanels[player].sfx_id))
			func_80026738_27338(gMNTrainingPanels[player].p_sfx);
	}

	func_800269C0_275C0(0x79U);

	gMNTrainingPanels[player].p_sfx = func_800269C0_275C0(announcer_fgms[gMNTrainingPanels[panel_id].fkind]);

	if (gMNTrainingPanels[player].p_sfx != NULL)
		gMNTrainingPanels[player].sfx_id = gMNTrainingPanels[player].p_sfx->sfx_id;
}

// 0x801342B0 - Unused?
void func_ovl28_801342B0() {}

// 0x801342B8
void mn1PTrainingPlayersRemoveHandicapCPULevel(s32 player)
{
	if (gMNTrainingPanels[player].handicap_cpu_level != NULL)
		gcEjectGObj(gMNTrainingPanels[player].handicap_cpu_level);

	if (gMNTrainingPanels[player].arrows != NULL)
		gcEjectGObj(gMNTrainingPanels[player].arrows);

	if (gMNTrainingPanels[player].handicap_cpu_level_value != NULL)
		gcEjectGObj(gMNTrainingPanels[player].handicap_cpu_level_value);

	gMNTrainingPanels[player].handicap_cpu_level = NULL;
	gMNTrainingPanels[player].arrows = NULL;
	gMNTrainingPanels[player].handicap_cpu_level_value = NULL;
}

// 0x80134340
SObj* mn1PTrainingPlayersGetArrowSObj(GObj* arrow_gobj, s32 direction)
{
	SObj* second_arrow_sobj;
	SObj* first_arrow_sobj;

	first_arrow_sobj = SObjGetStruct(arrow_gobj);
	if (first_arrow_sobj != NULL)
	{
		if (direction == first_arrow_sobj->user_data.s)
			return first_arrow_sobj;

		second_arrow_sobj = SObjGetNext(first_arrow_sobj);
		if ((second_arrow_sobj != NULL) && (direction == second_arrow_sobj->user_data.s))
			return second_arrow_sobj;
	}
	return NULL;
}

// 0x8013438C - Unused?
void mn1PTrainingPlayersSyncAndBlinkArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 player = arrow_gobj->user_data.s;
	s32 blink_duration = 10;
	s32 value;

	while (TRUE)
	{
		blink_duration--;

		if (blink_duration == 0)
		{
			blink_duration = 10;
			arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
		}

		value = (gMNTrainingPanels[player].player_type == nFTPlayerKindMan) ? gMNTrainingPanels[player].handicap : gMNTrainingPanels[player].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mn1PTrainingPlayersGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mn1PTrainingPlayersGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = (player * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mn1PTrainingPlayersGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mn1PTrainingPlayersGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = (player * 0x45) + 0x4F;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x801345B8
void mn1PTrainingPlayersSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
	s32 player = handicap_cpu_level_gobj->user_data.p;

	if (gMNTrainingPanels[player].unk_0x88 == 0)
		mn1PTrainingPlayersRemoveHandicapCPULevel(player);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gMNTrainingPanels[player].player_type)
		mn1PTrainingPlayersDrawHandicapCPULevel(player);
}

// 0x8013462C
void mn1PTrainingPlayersDrawHandicapCPULevel(s32 player)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (gMNTrainingPanels[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(gMNTrainingPanels[player].handicap_cpu_level);
		gMNTrainingPanels[player].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gMNTrainingPanels[player].handicap_cpu_level = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	handicap_cpu_level_gobj->user_data.p = player;
	gcAddGObjProcess(handicap_cpu_level_gobj, mn1PTrainingPlayersSyncHandicapCPULevelDisplay, 1, 1);

	if (gMNTrainingPanels[player].player_type == nFTPlayerKindMan)
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x22;
		handicap_cpu_level_sobj->user_data.p = 1;
	}

	handicap_cpu_level_sobj->sprite.red = 0xC2;
	handicap_cpu_level_sobj->sprite.green = 0xBD;
	handicap_cpu_level_sobj->sprite.blue = 0xAD;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 201.0F;

	handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[2], &FILE_000_COLON_IMAGE_OFFSET));
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x3D;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 0x80138328
s32 D_ovl28_80138328[10] = {

	0xD310,
	0xD3E0,
	0xD4B0,
	0xD580,
	0xD650,
	0xD720,
	0xD7F0,
	0xD8C0,
	0xD990,
	0xDA60
};

// 0x80134830 - Unused?
void func_ovl28_80134830() {}

// 0x80134838 - Unused?
void func_ovl28_80134838() {}

// 0x80134840 - Unused?
void func_ovl28_80134840() {}

// 0x80134848
sb32 mn1PTrainingPlayersSelectChar(GObj* cursor_gobj, s32 player, s32 arg2, s32 select_button)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	if (panel_info->cursor_state != mnCursorStateHoldingPuck)
		return FALSE;

	if (gMNTrainingPanels[panel_info->held_player].fkind != nFTKindNull)
	{
		mn1PTrainingPlayersSelectFighterPuck(player, select_button);
		panel_info->recall_wait = gMNTrainingTotalTimeTics + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 0x801348F0
void mn1PTrainingPlayersReorderCursorsOnPickup(s32 player, s32 puck_id)
{
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};
	s32 i, order_id;

	gcMoveGObjDL(gMNTrainingPanels[player].cursor, 0x20U, diplay_orders[3]);
	gcMoveGObjDL(gMNTrainingPanels[puck_id].puck, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != player)
		{
			if (gMNTrainingPanels[i].cursor != NULL)
				gcMoveGObjDL(gMNTrainingPanels[i].cursor, 0x20U, diplay_orders[order_id]);

			if (gMNTrainingPanels[i].held_player != -1U)
				gcMoveGObjDL(gMNTrainingPanels[gMNTrainingPanels[i].held_player].puck, 0x20U, diplay_orders[order_id] + 1);
		}
	}
}

// 0x80134A4C
void mn1PTrainingPlayersReorderCursorsOnPlacement(s32 player, s32 held_puck_id)
{
	s32 held_orders[4] = {

		3, 2, 1, 0
	},
		unheld_orders[4] = {

		6, 4, 2, 0
	};

	s32 *order;
	s32 unused;
	sb32 puck_held[4];
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMNTrainingPanels[i].held_player == -1)
			puck_held[i] = FALSE;
		else
			puck_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != player) && (puck_held[i]))
		{
			if (gMNTrainingPanels[i].cursor != NULL)
				gcMoveGObjDL(gMNTrainingPanels[i].cursor, 0x20, *order);

			gcMoveGObjDL(gMNTrainingPanels[gMNTrainingPanels[i].held_player].puck, 0x20, *order + 1);
			order--;
		}
	}

	if (player != 4)
		gcMoveGObjDL(gMNTrainingPanels[player].cursor, 0x20, *order);

	gcMoveGObjDL(gMNTrainingPanels[held_puck_id].puck, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if (i != player && !puck_held[i])
		{
			if (gMNTrainingPanels[i].cursor != NULL)
				gcMoveGObjDL(gMNTrainingPanels[i].cursor, 0x20, *order);

			order--;
		}
	}
}

// 0x80134C64
void mn1PTrainingPlayersSetCursorCoordinatesFromPuck(s32 player)
{
	MNPlayersSlotTraining* panel_info;
	MNPlayersSlotTraining* held_puck_panel_info;

	panel_info = &gMNTrainingPanels[player];
	held_puck_panel_info = &gMNTrainingPanels[panel_info->held_player];

	panel_info->cursor_pickup_x = SObjGetStruct(held_puck_panel_info->puck)->pos.x - 11.0F;
	panel_info->cursor_pickup_y = SObjGetStruct(held_puck_panel_info->puck)->pos.y - -14.0F;
}

// 0x80134CC8
void mn1PTrainingPlayersHandleCursorPickup(s32 player, s32 held_player)
{
	MNPlayersSlotTraining* panel_info;
	MNPlayersSlotTraining* held_puck_panel_info;

	held_puck_panel_info = &gMNTrainingPanels[held_player];
	held_puck_panel_info->holder_player = player;
	held_puck_panel_info->is_selected = FALSE;

	panel_info = &gMNTrainingPanels[player];
	panel_info->cursor_state = mnCursorStateHoldingPuck;
	panel_info->held_player = held_player;

	held_puck_panel_info->unk_0x88 = FALSE;

	mn1PTrainingPlayersSyncFighterDisplay(held_player);
	mn1PTrainingPlayersReorderCursorsOnPickup(player, held_player);
	mn1PTrainingPlayersSetCursorCoordinatesFromPuck(player);
	mn1PTrainingPlayersUpdateCursor(panel_info->cursor, player, panel_info->cursor_state);

	panel_info->is_cursor_adjusting = TRUE;

	func_800269C0_275C0(0x7FU);

	mn1PTrainingPlayersRemoveHandicapCPULevel(held_player);
	mn1PTrainingPlayersDestroyFlash(held_player);
	mn1PTrainingPlayersSyncNameAndLogo(held_player);
}

// 0x80134D8C
sb32 mn1PTrainingPlayersCheckAndHandlePuckGrab(GObj* cursor_gobj, s32 player)
{
	s32 i;

	if ((gMNTrainingTotalTimeTics < gMNTrainingPanels[player].recall_wait) || (gMNTrainingPanels[player].is_recalling))
		return FALSE;
	else if (gMNTrainingPanels[player].cursor_state != mnCursorStateNotHoldingPuck)
		return FALSE;

	for (i = 3; i >=0; i--)
	{
		if (player == i)
		{
			if ((gMNTrainingPanels[i].holder_player == 4) && (gMNTrainingPanels[i].player_type != 2) && (mn1PTrainingPlayersCheckPuckGrab(cursor_gobj, player, i) != 0))
			{
				mn1PTrainingPlayersHandleCursorPickup(player, i);

				return TRUE;
			}
		}
		else if ((gMNTrainingPanels[i].holder_player == 4) && (gMNTrainingPanels[i].player_type == 1) && (mn1PTrainingPlayersCheckPuckGrab(cursor_gobj, player, i) != 0))
		{
			mn1PTrainingPlayersHandleCursorPickup(player, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 0x80134EE8
s32 mn1PTrainingPlayersGetFighterKindFromPuckPosition(s32 player)
{
	SObj* puck_sobj = SObjGetStruct(gMNTrainingPanels[player].puck);
	s32 current_y = (s32) puck_sobj->pos.x + 13;
	s32 current_x = (s32) puck_sobj->pos.y + 12;
	s32 fkind;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			fkind = mn1PTrainingPlayersGetFighterKind((s32) (current_y - 25) / 45);

			if ((mn1PTrainingPlayersCheckFighterIsXBoxed(fkind)) || (mn1PTrainingPlayersGetIsLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			fkind = mn1PTrainingPlayersGetFighterKind(((s32) (current_y - 25) / 45) + 6);

			if ((mn1PTrainingPlayersCheckFighterIsXBoxed(fkind)) || (mn1PTrainingPlayersGetIsLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}
	return nFTKindNull;
}

// 0x80135074
void mn1PTrainingPlayersAutoPositionCursor(GObj* cursor_gobj, s32 player)
{
	SYController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (gMNTrainingPanels[player].is_cursor_adjusting)
	{
		delta = (gMNTrainingPanels[player].cursor_pickup_x - SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.x = gMNTrainingPanels[player].cursor_pickup_x;
		else
			SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.x += delta;

		delta = (gMNTrainingPanels[player].cursor_pickup_y - SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.y = gMNTrainingPanels[player].cursor_pickup_y;
		else
			SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.y += delta;

		if ((SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.x == gMNTrainingPanels[player].cursor_pickup_x) && (SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.y == gMNTrainingPanels[player].cursor_pickup_y))
			gMNTrainingPanels[player].is_cursor_adjusting = FALSE;

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMNTrainingPanels[player].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMNTrainingPanels[player].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (gMNTrainingPanels[player].is_recalling == FALSE)
	{
		controller = &gSYControllerDevices[gMNTrainingHumanPanelPort];
		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMNTrainingPanels[player].cursor_state].x;
			}
		}

		controller = &gSYControllerDevices[gMNTrainingHumanPanelPort];
		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMNTrainingPanels[player].cursor_state].y;
			}
		}
	}
}

// 0x80135430
void mn1PTrainingPlayersSyncCursorDisplay(GObj* cursor_gobj, s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (panel_info->cursor_state != mnCursorStatePointer)
		{
			mn1PTrainingPlayersUpdateCursor(cursor_gobj, player, mnCursorStatePointer);
			panel_info->cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (panel_info->held_player == -1)
		{
			if (panel_info->cursor_state != mnCursorStateNotHoldingPuck)
			{
				mn1PTrainingPlayersUpdateCursor(cursor_gobj, player, mnCursorStateNotHoldingPuck);
				panel_info->cursor_state = mnCursorStateNotHoldingPuck;
			}
		}
		else
		{
			if (panel_info->cursor_state != mnCursorStateHoldingPuck)
			{
				mn1PTrainingPlayersUpdateCursor(cursor_gobj, player, mnCursorStateHoldingPuck);
				panel_info->cursor_state = mnCursorStateHoldingPuck;
			}
		}
	}

	if ((panel_info->cursor_state == mnCursorStatePointer) && (panel_info->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMNTrainingPanels[i].is_selected == 1) && (mn1PTrainingPlayersCheckPuckGrab(cursor_gobj, player, i) != 0))
			{
				mn1PTrainingPlayersUpdateCursor(cursor_gobj, player, mnCursorStateNotHoldingPuck);
				panel_info->cursor_state = mnCursorStateNotHoldingPuck;
				return;
			}
		}
	}
}

// 0x801355E0
void mn1PTrainingPlayersTryCostumeChange(s32 player, s32 select_button)
{
	u32 costume = ftParamGetCostumeCommonID(gMNTrainingPanels[player].fkind, select_button);

	if (mn1PTrainingPlayersIsCostumeInUse(gMNTrainingPanels[player].fkind, player, costume))
	{
		func_800269C0_275C0(0xA5U);
		return;
	}

	ftParamInitAllParts(gMNTrainingPanels[player].player, costume, 0);
	gMNTrainingPanels[player].costume = costume;

	func_800269C0_275C0(0xA4U);
}

// 0x80135674
sb32 mn1PTrainingPlayersIsHumanWithCharacterSelected(s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	if ((panel_info->is_selected) && (panel_info->held_player == -1) && (panel_info->player_type == nFTPlayerKindMan))
		return TRUE;
	else
		return FALSE;
}

// 0x801356D0
void mn1PTrainingPlayersRecallPuck(s32 player)
{
	gMNTrainingPanels[player].unk_0x88 = FALSE;
	gMNTrainingPanels[player].is_selected = FALSE;
	gMNTrainingPanels[player].is_recalling = TRUE;
	gMNTrainingPanels[player].recall_tics = 0;
	gMNTrainingPanels[player].recall_start_x = SObjGetStruct(gMNTrainingPanels[player].puck)->pos.x;
	gMNTrainingPanels[player].recall_start_y = SObjGetStruct(gMNTrainingPanels[player].puck)->pos.y;

	gMNTrainingPanels[player].recall_end_x = SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.x + 20.0F;

	if (gMNTrainingPanels[player].recall_end_x > 280.0F)
		gMNTrainingPanels[player].recall_end_x = 280.0F;

	gMNTrainingPanels[player].recall_end_y = SObjGetStruct(gMNTrainingPanels[player].cursor)->pos.y + -15.0F;

	if (gMNTrainingPanels[player].recall_end_y < 10.0F)
		gMNTrainingPanels[player].recall_end_y = 10.0F;

	if (gMNTrainingPanels[player].recall_end_y < gMNTrainingPanels[player].recall_start_y)
		gMNTrainingPanels[player].recall_mid_y = gMNTrainingPanels[player].recall_end_y - 20.0F;
	else
		gMNTrainingPanels[player].recall_mid_y = gMNTrainingPanels[player].recall_start_y - 20.0F;
}

// 0x801357CC
void mn1PTrainingPlayersGoBackTo1PMenu()
{
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = nSCKind1PMode;

	mn1PTrainingPlayersSaveMatchInfo();
	syAudioStopSongAll();
	func_800266A0_272A0();
	syTaskmanSetLoadScene();
}

// 0x80135818
void mn1PTrainingPlayersExitIfBButtonPressed(s32 player)
{
	SYController* controller = &gSYControllerDevices[player];

	if ((gMNTrainingTotalTimeTics >= 10) && (controller->button_tap & B_BUTTON))
		mn1PTrainingPlayersGoBackTo1PMenu();
}

// 0x8013586C
sb32 mn1PTrainingPlayersCheckBackButtonPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 13.0F) || (current_y > 34.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 244.0F) && (current_x <= 292.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 0x80135934
void mn1PTrainingPlayersHandleButtonPresses(GObj* cursor_gobj)
{
	SYController* controller = &gSYControllerDevices[gMNTrainingHumanPanelPort];
	MNPlayersSlotTraining* panel_info;
	s32 foo, bar, baz;
	s32 player = cursor_gobj->user_data.s;

	mn1PTrainingPlayersAutoPositionCursor(cursor_gobj, player);
	panel_info = &gMNTrainingPanels[player];

	if ((gSYControllerDevices[gMNTrainingHumanPanelPort].button_tap & A_BUTTON)
		&& (!mn1PTrainingPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 4))
		&& (!mn1PTrainingPlayersCheckAndHandlePuckGrab(cursor_gobj, player))
		&& (mn1PTrainingPlayersCheckBackButtonPress(cursor_gobj)))
	{
			mn1PTrainingPlayersGoBackTo1PMenu();
			func_800269C0_275C0(0xA4U);
	}

	if (!gMNTrainingDefaultCostumeOnly)
	{
		if ((gSYControllerDevices[gMNTrainingHumanPanelPort].button_tap & U_CBUTTONS)
			&& (!mn1PTrainingPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 0))
			&& (panel_info->unk_0x88))
		{
			mn1PTrainingPlayersTryCostumeChange(player, 0);
		}
		if ((gSYControllerDevices[gMNTrainingHumanPanelPort].button_tap & R_CBUTTONS)
			&& (!mn1PTrainingPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 1))
			&& (panel_info->unk_0x88))
		{
			mn1PTrainingPlayersTryCostumeChange(player, 1);
		}
		if ((gSYControllerDevices[gMNTrainingHumanPanelPort].button_tap & D_CBUTTONS)
			&& (!mn1PTrainingPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 2))
			&& (panel_info->unk_0x88))
		{
			mn1PTrainingPlayersTryCostumeChange(player, 2);
		}
		if ((gSYControllerDevices[gMNTrainingHumanPanelPort].button_tap & L_CBUTTONS)
			&& (!mn1PTrainingPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 3))
			&& (panel_info->unk_0x88))
		{
			mn1PTrainingPlayersTryCostumeChange(player, 3);
		}
	}

	if ((gSYControllerDevices[gMNTrainingHumanPanelPort].button_tap & B_BUTTON) && (mn1PTrainingPlayersIsHumanWithCharacterSelected(player)))
		mn1PTrainingPlayersRecallPuck(player);

	if (!panel_info->is_recalling)
		mn1PTrainingPlayersExitIfBButtonPressed(player);

	if (!panel_info->is_recalling)
		mn1PTrainingPlayersSyncCursorDisplay(cursor_gobj, player);
}

// 0x80135C18
void mn1PTrainingPlayersRedrawPuck(GObj* puck_gobj, s32 puck_index)
{
	SObj* puck_sobj;
	f32 current_x, current_y;
	intptr_t puck_offsets[5] = {

		0x9048,
		0x9B28,
		0xA608,
		0xB0E8,
		0xBBC8
	};

	current_x = SObjGetStruct(puck_gobj)->pos.x;
	current_y = SObjGetStruct(puck_gobj)->pos.y;

	gcRemoveSObjAll(puck_gobj);

	puck_sobj = lbCommonMakeSObjForGObj(puck_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], puck_offsets[puck_index]));
	puck_sobj->pos.x = current_x;
	puck_sobj->pos.y = current_y;
	puck_sobj->sprite.attr &= ~SP_FASTCOPY;
	puck_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80135CCC
void mn1PTrainingPlayersCenterPuckInPortrait(GObj* puck_gobj, s32 fkind)
{
	s32 portrait = mn1PTrainingPlayersGetPortraitId(fkind);

	if (portrait >= 6)
	{
		SObjGetStruct(puck_gobj)->pos.x = (portrait * 45) - (6 * 45) + 36;
		SObjGetStruct(puck_gobj)->pos.y = 89.0F;
	}
	else
	{
		SObjGetStruct(puck_gobj)->pos.x = (portrait * 45) + 36;
		SObjGetStruct(puck_gobj)->pos.y = 46.0F;
	}
}

// 0x80135D7C - Unused?
void func_ovl28_80135D7C() {}

// 0x80135D84
void mn1PTrainingPlayersMovePuck(s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	SObjGetStruct(panel_info->puck)->pos.x += panel_info->puck_x_velocity;
	SObjGetStruct(panel_info->puck)->pos.y += panel_info->puck_y_velocity;
}

// 0x80135DD8
void mn1PTrainingPlayersSyncPuckAndFighter(GObj* puck_gobj)
{
	s32 fkind;
	s32 player = puck_gobj->user_data.s;

	if (gMNTrainingTotalTimeTics < 0x1E)
	{
		puck_gobj->flags = 1;
	}
	else
	{
		if ((gMNTrainingPanels[player].player_type == nFTPlayerKindCom)
			|| ((gMNTrainingPanels[player].player_type == nFTPlayerKindMan)
				&& ((gMNTrainingPanels[player].cursor_state != mnCursorStatePointer)
					|| (gMNTrainingPanels[player].is_selected == TRUE)
					|| (gMNTrainingPanels[player].is_recalling == TRUE))))
		{
			puck_gobj->flags = 0;
		}
		else
		{
			puck_gobj->flags = 1;
		}
	}

	if ((gMNTrainingPanels[player].player_type) != nFTPlayerKindNot)
	{
		if ((gMNTrainingPanels[player].is_selected == FALSE)
			&& (gMNTrainingPanels[player].holder_player != 4))
		{
			if (gMNTrainingPanels[gMNTrainingPanels[player].holder_player].is_cursor_adjusting == FALSE)
			{
				SObjGetStruct(puck_gobj)->pos.x = (f32) (SObjGetStruct(gMNTrainingPanels[gMNTrainingPanels[player].holder_player].cursor)->pos.x + 11.0F);
				SObjGetStruct(puck_gobj)->pos.y = (f32) (SObjGetStruct(gMNTrainingPanels[gMNTrainingPanels[player].holder_player].cursor)->pos.y + -14.0F);
			}
		}
		else
			mn1PTrainingPlayersMovePuck(player);

		fkind = mn1PTrainingPlayersGetFighterKindFromPuckPosition(player);

		if ((gMNTrainingPanels[player].player_type == nFTPlayerKindCom)
			&& (fkind != gMNTrainingPanels[player].fkind)
			&& (fkind == nFTKindNull))
		{
			if (gMNTrainingPanels[player].holder_player != 4)
				mn1PTrainingPlayersSelectFighterPuck(gMNTrainingPanels[player].holder_player, 4);
		}

		if ((gMNTrainingPanels[player].is_selected == FALSE)
			&& (fkind != gMNTrainingPanels[player].fkind))
		{
			gMNTrainingPanels[player].fkind = fkind;

			mn1PTrainingPlayersSyncFighterDisplay(player);
			mn1PTrainingPlayersSyncNameAndLogo(player);
		}
	}
}

// 0x80135FE8
void mn1PTrainingPlayersMakeCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136088
void mn1PTrainingPlayersCreateDroppedPuckViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136128
void mn1PTrainingPlayersCreateHandicapCPULevelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801361C8
void mn1PTrainingPlayersCreateReadyToFightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136268
void mn1PTrainingPlayersMakeCursor(s32 player)
{
	GObj* cursor_gobj;
	s32 unused;

	// unused
	intptr_t cursor_type_offsets[4] = {

		0x8268, 0x8368, 0x8468, 0x8568
	};
	s32 starting_display_orders[4] = {

		6, 4, 2, 0
	};

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x20, starting_display_orders[player], -1, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mn1PTrainingPlayersHandleButtonPresses, 2);

	gMNTrainingPanels[player].cursor = cursor_gobj;
	cursor_gobj->user_data.s = player;
	SObjGetStruct(cursor_gobj)->pos.x = 70.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mn1PTrainingPlayersUpdateCursor(cursor_gobj, player, 0);
}

// 0x801363C8
void mn1PTrainingPlayersRenderPuck(GObj* puck_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor(gSYTaskmanDLHeads[0]++, gMNTrainingPuckShinePulseColor & 0xFF, gMNTrainingPuckShinePulseColor & 0xFF, gMNTrainingPuckShinePulseColor & 0xFF, gMNTrainingPuckShinePulseColor & 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0,  TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(puck_gobj);
}

// 0x801364C0
void mn1PTrainingPlayersMakePuck(s32 player)
{
	GObj* puck_gobj;
	MNPlayersSlotTraining* panel_info;
	intptr_t offsets_no_cpu[4] = {

		0x9048, 0x9B28, 0xA608, 0xB0E8
	};
	s32 starting_display_orders[4] = {

		3, 2, 1, 0
	};
	s32 holding_display_orders[4] = {

		6, 4, 2, 0
	};

	gMNTrainingPanels[player].puck = puck_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, mn1PTrainingPlayersRenderPuck, 0x21, starting_display_orders[player], -1, lbRelocGetFileData(void*, gMNTrainingFiles[0], offsets_no_cpu[player]), 1, mn1PTrainingPlayersSyncPuckAndFighter, 1);

	panel_info = &gMNTrainingPanels[player];

	puck_gobj->user_data.s = player;

	if (panel_info->player_type == nFTPlayerKindCom)
		mn1PTrainingPlayersRedrawPuck(puck_gobj, 4);

	if ((panel_info->player_type == nFTPlayerKindMan) && (panel_info->held_player != -1))
		gcMoveGObjDL(panel_info->puck, 0x20U, holding_display_orders[player] + 1);

	if (panel_info->fkind == nFTKindNull)
	{
		SObjGetStruct(puck_gobj)->pos.x = 51.0F;
		SObjGetStruct(puck_gobj)->pos.y = 161.0F;
	}
	else
		mn1PTrainingPlayersCenterPuckInPortrait(puck_gobj, panel_info->fkind);

	SObjGetStruct(puck_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(puck_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801366D0
f32 getTrainingPuckDistance(s32 player_1, s32 player_2)
{
	f32 delta_x, delta_y;
	SObj* puck_sobj_2 = SObjGetStruct(gMNTrainingPanels[player_2].puck);
	SObj* puck_sobj_1 = SObjGetStruct(gMNTrainingPanels[player_1].puck);

	delta_y = puck_sobj_2->pos.y - puck_sobj_1->pos.y;
	delta_x = puck_sobj_2->pos.x - puck_sobj_1->pos.x;

	return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 0x80136748
void mn1PTrainingPlayersAutopositionOverlappedPucks(s32 player_1, s32 player_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(gMNTrainingPanels[player_1].puck)->pos.x == SObjGetStruct(gMNTrainingPanels[player_2].puck)->pos.x)
		gMNTrainingPanels[player_1].puck_x_velocity += syUtilsGetRandomIntRange(2) - 1;
	else
		gMNTrainingPanels[player_1].puck_x_velocity += (-1.0F * (SObjGetStruct(gMNTrainingPanels[player_2].puck)->pos.x - SObjGetStruct(gMNTrainingPanels[player_1].puck)->pos.x)) / 10.0F;

	if (SObjGetStruct(gMNTrainingPanels[player_1].puck)->pos.y == SObjGetStruct(gMNTrainingPanels[player_2].puck)->pos.y)
		gMNTrainingPanels[player_1].puck_y_velocity += syUtilsGetRandomIntRange(2) - 1;
	else
		gMNTrainingPanels[player_1].puck_y_velocity += (-1.0F * (SObjGetStruct(gMNTrainingPanels[player_2].puck)->pos.y - SObjGetStruct(gMNTrainingPanels[player_1].puck)->pos.y)) / 10.0F;
}

// 0x80136888
void mn1PTrainingPlayersAutopositionPuckFromPortraitEdges(s32 player)
{
	s32 portrait = mn1PTrainingPlayersGetPortraitId(gMNTrainingPanels[player].fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(gMNTrainingPanels[player].puck)->pos.x + gMNTrainingPanels[player].puck_x_velocity + 13.0F;
	f32 new_pos_y = SObjGetStruct(gMNTrainingPanels[player].puck)->pos.y + gMNTrainingPanels[player].puck_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		gMNTrainingPanels[player].puck_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;

	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		gMNTrainingPanels[player].puck_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;

	if (new_pos_y < (portrait_edge_y + 5.0F))
		gMNTrainingPanels[player].puck_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;

	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		gMNTrainingPanels[player].puck_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 0x80136A44
void mn1PTrainingPlayersAutopositionPlacedPuck(s32 player)
{
	s32 other_player;
	f32 distances[4];

	other_player = (player == gMNTrainingHumanPanelPort) ? gMNTrainingCPUPanelPort : gMNTrainingHumanPanelPort;

	if (player != other_player)
	{
		if (gMNTrainingPanels[player].is_selected)
			distances[other_player] = getTrainingPuckDistance(player, other_player);
	}
	else
		distances[other_player] = -1.0F;

	gMNTrainingPanels[player].puck_x_velocity = 0.0F;
	gMNTrainingPanels[player].puck_y_velocity = 0.0F;

	if (
		(IS_BETWEEN(distances[other_player], 0.0F, 15.0F))
		&& (gMNTrainingPanels[player].fkind == gMNTrainingPanels[other_player].fkind)
		&& (gMNTrainingPanels[player].fkind != nFTKindNull)
		&& (gMNTrainingPanels[other_player].is_selected == 1))
	{
		mn1PTrainingPlayersAutopositionOverlappedPucks(player, other_player, (15.0F -  distances[other_player]) / 15.0F);
	}

	mn1PTrainingPlayersAutopositionPuckFromPortraitEdges(player);
}

// 0x80136BE0
void mn1PTrainingPlayersAutopositionRecalledPuck(s32 player)
{
	f32 new_y_velocity, new_x_velocity;

	gMNTrainingPanels[player].recall_tics += 1;

	if (gMNTrainingPanels[player].recall_tics < 11)
	{
		new_x_velocity = (gMNTrainingPanels[player].recall_end_x - gMNTrainingPanels[player].recall_start_x) / 10.0F;

		if (gMNTrainingPanels[player].recall_tics < 6)
			new_y_velocity = (gMNTrainingPanels[player].recall_mid_y - gMNTrainingPanels[player].recall_start_y) / 5.0F;
		else
			new_y_velocity = (gMNTrainingPanels[player].recall_end_y - gMNTrainingPanels[player].recall_mid_y) / 5.0F;

		gMNTrainingPanels[player].puck_x_velocity = new_x_velocity;
		gMNTrainingPanels[player].puck_y_velocity = new_y_velocity;
	}
	else if (gMNTrainingPanels[player].recall_tics == 11)
	{
		mn1PTrainingPlayersHandleCursorPickup(player, player);

		gMNTrainingPanels[player].puck_x_velocity = 0.0F;
		gMNTrainingPanels[player].puck_y_velocity = 0.0F;
	}

	if (gMNTrainingPanels[player].recall_tics == 30)
		gMNTrainingPanels[player].is_recalling = FALSE;
}

// 0x80136CCC
void mn1PTrainingPlayersAutopositionPuck(GObj *gobj)
{
	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].is_recalling)
	{
		mn1PTrainingPlayersAutopositionRecalledPuck(gMNTrainingHumanPanelPort);
	}
	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].is_selected)
	{
		mn1PTrainingPlayersAutopositionPlacedPuck(gMNTrainingHumanPanelPort);
	}
	if (gMNTrainingPanels[gMNTrainingCPUPanelPort].is_recalling)
	{
		mn1PTrainingPlayersAutopositionRecalledPuck(gMNTrainingCPUPanelPort);
	}
	if (gMNTrainingPanels[gMNTrainingCPUPanelPort].is_selected)
	{
		mn1PTrainingPlayersAutopositionPlacedPuck(gMNTrainingCPUPanelPort);
	}
}

// 0x80136DD8
void mn1PTrainingPlayersMakePuckAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mn1PTrainingPlayersAutopositionPuck, 1, 1);
}

// 0x80136E1C
void mn1PTrainingPlayersUpdatePuckShinePulseColor(GObj* unused)
{
	if (gMNTrainingIsPuckShineIncreasing == FALSE)
	{
		gMNTrainingPuckShinePulseColor += 9;

		if (gMNTrainingPuckShinePulseColor >= 0x100)
		{
			gMNTrainingPuckShinePulseColor = 0xFF;
			gMNTrainingIsPuckShineIncreasing = TRUE;
		}
	}
	if (gMNTrainingIsPuckShineIncreasing == TRUE)
	{
		gMNTrainingPuckShinePulseColor -= 9;

		if (gMNTrainingPuckShinePulseColor < 0x80)
		{
			gMNTrainingPuckShinePulseColor = 0x80;
			gMNTrainingIsPuckShineIncreasing = FALSE;
		}
	}
}

// 0x80136E94
void mn1PTrainingPlayersMakePuckShinePulseRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mn1PTrainingPlayersUpdatePuckShinePulseColor, 1, 1);
}

// 0x80136ED8
void mn1PTrainingPlayersSyncShadeAndCostume(GObj *gobj)
{
	s32 i;
	s32 costume;

	for (i = 0; i < 4; i++)
	{
		if ((gMNTrainingPanels[i].fkind != nFTKindNull) && (mn1PTrainingPlayersGetAdditionalSelectedCount(gMNTrainingPanels[i].fkind) == 0))
		{
			costume = ftParamGetCostumeCommonID(gMNTrainingPanels[i].fkind, 0);

			if ((costume != gMNTrainingPanels[i].costume) && (gMNTrainingPanels[i].unk_0x88 == 0))
			{
				ftParamInitAllParts(gMNTrainingPanels[i].player, costume, 0);
				gMNTrainingPanels[i].costume = costume;
			}
		}
	}
}

// 0x80136F84
void mn1PTrainingPlayersCreateSyncShadeAndCostumeRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1FU, 0x80000000U), mn1PTrainingPlayersSyncShadeAndCostume, 1, 1);
}

// 0x80136FC8
void mn1PTrainingPlayersSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	s32 portrait = white_circle_gobj->user_data.s;
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((gMNTrainingPanels[portrait].unk_0x88 == 0) && (gMNTrainingPanels[portrait].fkind != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMNTrainingPanels[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMNTrainingPanels[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMNTrainingPanels[portrait].fkind];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x801370BC
void mn1PTrainingPlayersCreateWhiteCircles()
{
	GObj* white_circle_gobj;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

		gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[7], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

		gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

		white_circle_gobj->user_data.s = i;

		gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, gMNTrainingFiles[7], &FILE_016_WHITE_CIRCLE_OFFSET_1));

		gcAddGObjProcess(white_circle_gobj, mn1PTrainingPlayersSyncWhiteCircleSizeAndDisplay, 1, 1);

		gcPlayAnimAll(white_circle_gobj);

		if (i == gMNTrainingHumanPanelPort)
		{
			DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -830.0f;
			DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -870.0f;
			DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
		}
		else
		{
			DObjGetStruct(white_circle_gobj)->translate.vec.f.x = 830.0f;
			DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -870.0f;
			DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
		}
	}
}

// 0x80137254 - Unused?
void mn1PTrainingPlayersRenderReadyToFightObject(GObj* arg)
{
	lbCommonDrawSObjAttr(arg);
}

// 0x80137274
sb32 mn1PTrainingPlayersIsReadyToFight()
{
	if ((gMNTrainingPanels[gMNTrainingHumanPanelPort].unk_0x88 != 0) && (gMNTrainingPanels[gMNTrainingCPUPanelPort].unk_0x88 != 0))
		return TRUE;
	else
		return FALSE;
}

// 0x801372D4
void mn1PTrainingPlayersBlinkIfReadyToFight(GObj* gobj)
{
	if (mn1PTrainingPlayersIsReadyToFight())
	{
		gMNTrainingPressStartFlashTimer += 1;

		if (gMNTrainingPressStartFlashTimer == 0x28)
			gMNTrainingPressStartFlashTimer = 0;

		gobj->flags = (gMNTrainingPressStartFlashTimer < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		gMNTrainingPressStartFlashTimer = 0;
	}
}

// 0x80137354
void mn1PTrainingPlayersCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x20U, 0x80000000U);
	gcAddGObjDisplay(gobj, mn1PTrainingPlayersRenderReadyToFightObject, 0x26U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PTrainingPlayersBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0;
	sobj->envcolor.g = 0;
	sobj->envcolor.b = 0;
	sobj->sprite.red = 0xF4;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x7F;
	sobj->cms = 0;
	sobj->cmt = 0;
	sobj->masks = 3;
	sobj->maskt = 0;
	sobj->lrs = 0x140;
	sobj->lrt = 0x11;
	sobj->pos.x = 0.0f;
	sobj->pos.y = 71.0f;

	// Ready to Fight banner text
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0xFF;
	sobj->envcolor.g = 0xCA;
	sobj->envcolor.b = 0x13;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x9D;
	sobj->pos.x = 50.0f;
	sobj->pos.y = 76.0f;

	// Press Start indicator
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(gobj, mn1PTrainingPlayersRenderReadyToFightObject, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PTrainingPlayersBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gMNTrainingFiles[0], &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 0x801375D0 - Unused?
void func_ovl28_801375D0() {}

// 0x801375D8
void mn1PTrainingPlayersSaveMatchInfo()
{
	gSCManagerSceneData.training_man_fkind = gMNTrainingPanels[gMNTrainingHumanPanelPort].fkind;
	gSCManagerSceneData.training_man_costume = gMNTrainingPanels[gMNTrainingHumanPanelPort].costume;

	gSCManagerSceneData.training_com_fkind = gMNTrainingPanels[gMNTrainingCPUPanelPort].fkind;
	gSCManagerSceneData.training_com_costume = gMNTrainingPanels[gMNTrainingCPUPanelPort].costume;
}

// 0x80137638
void mn1PTrainingPlayersDestroyCursorAndPuckProcesses()
{
	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].cursor != NULL)
		gcPauseGObjProcess(gMNTrainingPanels[gMNTrainingHumanPanelPort].cursor->gobjproc_head);

	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].puck != NULL)
		gcPauseGObjProcess(gMNTrainingPanels[gMNTrainingHumanPanelPort].puck->gobjproc_head);

	if (gMNTrainingPanels[gMNTrainingCPUPanelPort].puck != NULL)
		gcPauseGObjProcess(gMNTrainingPanels[gMNTrainingCPUPanelPort].puck->gobjproc_head);
}

// 0x80137700
void mn1PTrainingPlayersMain(GObj *gobj)
{
	gMNTrainingTotalTimeTics += 1;

	if (gMNTrainingTotalTimeTics == gMNTrainingMaxTotalTimeTics)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		mn1PTrainingPlayersSaveMatchInfo();
		syTaskmanSetLoadScene();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		gMNTrainingMaxTotalTimeTics = gMNTrainingTotalTimeTics + I_MIN_TO_TICS(5);

	if (gMNTrainingIsStartTriggered)
	{
		gMNTrainingStartDelayTimer -= 1;

		if (gMNTrainingStartDelayTimer == 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindMaps;

			mn1PTrainingPlayersSaveMatchInfo();
			syTaskmanSetLoadScene();
		}
	}
	else if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (gMNTrainingTotalTimeTics >= 0x3D))
	{
		if (mn1PTrainingPlayersIsReadyToFight())
		{
			func_800269C0_275C0(0x26AU);

			gMNTrainingStartDelayTimer = 0x1E;
			gMNTrainingIsStartTriggered = TRUE;

			mn1PTrainingPlayersDestroyCursorAndPuckProcesses();
			return;
		}

		func_800269C0_275C0(0xA5U);
	}
}

// 0x8013784C
void mn1PTrainingPlayersInitPort(s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->flash = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->player = NULL;

	if (player == gMNTrainingHumanPanelPort)
	{
		panel_info->player_type = nFTPlayerKindMan;
		panel_info->holder_player = 4;
		panel_info->held_player = -1;
		panel_info->fkind = gSCManagerSceneData.training_man_fkind;
		panel_info->costume = gSCManagerSceneData.training_man_costume;
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;

	}
	else
	{
		panel_info->holder_player = 4;
		panel_info->held_player = -1;
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;
	}
}

// 0x80137900
void mn1PTrainingPlayersResetPort(s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->flash = NULL;
	panel_info->player = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->is_selected = FALSE;
	panel_info->fkind = nFTKindNull;
	panel_info->is_recalling = FALSE;
	panel_info->player_type = nFTPlayerKindMan;
	panel_info->holder_player = player;
	panel_info->held_player = player;
}

// 0x80137960
void mn1PTrainingPlayersResetPortToNA(s32 player)
{
	MNPlayersSlotTraining* panel_info = &gMNTrainingPanels[player];

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->flash = NULL;
	panel_info->player = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->is_selected = FALSE;
	panel_info->fkind = nFTKindNull;
	panel_info->is_recalling = FALSE;
	panel_info->player_type = nFTPlayerKindNot;
	panel_info->holder_player = 4;
	panel_info->held_player = -1;
}

// 0x801379CC
void mn1PTrainingPlayersLoadMatchInfo()
{
	s32 i;
	s32 fkind, costume;

	gMNTrainingTotalTimeTics = 0;
	gMNTrainingIsStartTriggered = FALSE;
	gMNTrainingMaxTotalTimeTics = gMNTrainingTotalTimeTics + I_MIN_TO_TICS(5);
	gMNTrainingHumanPanelPort = gSCManagerSceneData.player;
	gMNTrainingCPUPanelPort = (gMNTrainingHumanPanelPort == 0) ? 1 : 0;
	gMNTrainingCharacterUnlockedMask = gSCManagerBackupData.fighter_mask;

	if (gSCManagerSceneData.training_man_fkind == nFTKindNull)
		mn1PTrainingPlayersResetPort(gMNTrainingHumanPanelPort);
	else
		mn1PTrainingPlayersInitPort(gMNTrainingHumanPanelPort);

	gMNTrainingPanels[gMNTrainingHumanPanelPort].recall_wait = FALSE;

	fkind = gSCManagerSceneData.training_com_fkind;

	if (fkind == nFTKindNull)
	{
		do
		{
			do
			{
				fkind = syUtilsGetRandomTimeUCharRange(12);
			} while (mn1PTrainingPlayersCheckFighterIsXBoxed(fkind));
		} while (mn1PTrainingPlayersGetIsLocked(fkind));

		if (mn1PTrainingPlayersIsCostumeInUse(fkind, gMNTrainingCPUPanelPort, ftParamGetCostumeCommonID(fkind, 0)))
			costume = ftParamGetCostumeCommonID(fkind, 1);
		else
			costume = ftParamGetCostumeCommonID(fkind, 0);
	}
	else
		costume = gSCManagerSceneData.training_com_costume;

	gMNTrainingPanels[gMNTrainingCPUPanelPort].fkind = fkind;
	gMNTrainingPanels[gMNTrainingCPUPanelPort].costume = costume;
	gMNTrainingPanels[gMNTrainingCPUPanelPort].player_type = 1;
	mn1PTrainingPlayersInitPort(gMNTrainingCPUPanelPort);

	for (i = 0; i < 4; i++)
	{
		if ((i != gMNTrainingHumanPanelPort) && (i != gMNTrainingCPUPanelPort))
			mn1PTrainingPlayersResetPortToNA(i);
	}
}

// 0x80137BB0
void mn1PTrainingPlayersInitPanel(s32 player)
{
	s32 fkind;

	if (player == gMNTrainingHumanPanelPort)
		mn1PTrainingPlayersMakeCursor(player);
	else
		gMNTrainingPanels[player].cursor = NULL;

	mn1PTrainingPlayersMakePuck(player);
	mn1PTrainingPlayersMakeGate(player);

	if (gMNTrainingPanels[player].is_selected)
	{
		fkind = gMNTrainingPanels[player].fkind;

		if (fkind != nFTKindNull)
			mn1PTrainingPlayersSpawnFighter(gMNTrainingPanels[player].player, player, fkind, gMNTrainingPanels[player].costume);
	}
}

// 0x80137C74
void mn1PTrainingPlayersInitPanels()
{
	mn1PTrainingPlayersInitPanel(gMNTrainingHumanPanelPort);
	mn1PTrainingPlayersInitPanel(gMNTrainingCPUPanelPort);
	mn1PTrainingPlayersUpdatePanels();
}

// 0x80137CAC
void mn1PTrainingPlayersFuncStart(void)
{
	s32 bar, baz;
	LBRelocSetup rl_setup;
	f32 foo;
	s32 i;
	s32 j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl28_801388D8;
	rl_setup.status_buffer_size = 0x78;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl28_801388A0;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl28_80137F60, 8U, gMNTrainingFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl28_80137F60, 8U), 0x10U));

	gcMakeGObjSPAfter(0x400U, &mn1PTrainingPlayersMain, 0xFU, 0x80000000U);
	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);
	efParticleInitAll();
	efManagerInitEffects();
	mn1PTrainingPlayersLoadMatchInfo();
	ftManagerAllocFighter(1U, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < 4; i++)
		gMNTrainingPanels[i].figatree_heap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10U);

	mn1PTrainingPlayersCreatePortraitCamera();
	mn1PTrainingPlayersMakeCursorViewport();
	mn1PTrainingPlayersCreateDroppedPuckViewport();
	mn1PTrainingPlayersMakeGateViewport();
	mn1PTrainingPlayersMakeGateDoorsSYRdpViewport();
	mn1PTrainingPlayersCreateTypeButtonViewport();
	mn1PTrainingPlayersMakeFighterCamera();
	mn1PTrainingPlayersCreateTeamButtonViewPort();
	mn1PTrainingPlayersCreateHandicapCPULevelViewport();
	mn1PTrainingPlayersCreatePortraitWallpaperCamera();
	mn1PTrainingPlayersCreatePortraitFlashCamera();
	mn1PTrainingPlayersCreateReadyToFightViewport();
	mn1PTrainingPlayersMakeWallpaper();
	mn1PTrainingPlayersCreatePortraits();
	mn1PTrainingPlayersInitPanels();
	mn1PTrainingPlayersDrawTitleAndBack();
	mn1PTrainingPlayersMakePuckAutopositionRoutine();
	mn1PTrainingPlayersMakePuckShinePulseRoutine();
	mn1PTrainingPlayersCreateSyncShadeAndCostumeRoutine();
	mn1PTrainingPlayersCreateWhiteCircles();
	mn1PTrainingPlayersCreateReadyToFightObjects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSCManagerSceneData.scene_prev != nSCKindMaps)
		syAudioPlaySong(0, 0xA);

	func_800266A0_272A0();
	func_800269C0_275C0(0x212U);
}

// 0x8013842C
SYVideoSetup D_ovl28_8013842C = SYVIDEO_SETUP_DEFAULT();

// 0x80138448
SYTaskmanSetup D_ovl28_80138448 =
{
    // Task Manager Buffer Setup
    {
        0,                          	// ???
        gcRunAll,              			// Update function
        scManagerFuncDraw,        		// Frame draw function
        &ovl28_BSS_END,             	// Allocatable memory pool start
        0,                          	// Allocatable memory pool size
        1,                          	// ???
        2,                          	// Number of contexts?
        sizeof(Gfx) * 2750,         	// Display List Buffer 0 Size
        sizeof(Gfx) * 64,          		// Display List Buffer 1 Size
        0,                          	// Display List Buffer 2 Size
        0,                          	// Display List Buffer 3 Size
        0x8000,                     	// Graphics Heap Size
        2,                          	// ???
        0x8000,                     	// RDP Output Buffer Size
        mn1PTrainingPlayersFuncLights, 	// Pre-render function
        syControllerFuncRead,       	// Controller I/O function
    },

    0,                              	// Number of GObjThreads
    sizeof(u64) * 64,              		// Thread stack size
    0,                              	// Number of thread stacks
    0,                              	// ???
    0,                              	// Number of GObjProcesses
    0,                              	// Number of GObjs
    sizeof(GObj),                   	// GObj size
    0,                              	// Number of XObjs
    dLBCommonFuncMatrixList,        	// Matrix function list
    NULL,                           	// DObjVec eject function
    0,                              	// Number of AObjs
    0,                              	// Number of MObjs
    0,                              	// Number of DObjs
    sizeof(DObj),                   	// DObj size
    0,                              	// Number of SObjs
    sizeof(SObj),                   	// SObj size
    0,                              	// Number of CObjs
    sizeof(CObj),                 		// CObj size
    
    mn1PTrainingPlayersFuncStart      	// Task start function
};

// 0x80137F00
void mn1PTrainingPlayersStartScene(void)
{
	D_ovl28_8013842C.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl28_8013842C);

	D_ovl28_80138448.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl28_BSS_END);
	scManagerFuncUpdate(&D_ovl28_80138448);
}
