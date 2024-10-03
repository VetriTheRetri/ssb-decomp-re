

#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/system_00.h>

#include "character_select.h"

// Externs
extern intptr_t lOverlay28ArenaLo;  // 0x80138CC0
extern intptr_t lOverlay28ArenaHi;  // 0x803903E0
// ovl1 stuff
extern f32 menu_zoom[12]; // dSCSubsysFighterScales

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

extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET; // file 0x015 image offset for background tile

extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle

extern intptr_t FILE_017_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_017_CPU_PANEL_LUT_OFFSET; // D_NF_00003238; // CPU panel LUT
extern void func_800A26B8();


extern void func_80007080(void*, f32, f32, f32, f32);
extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);



// Forward declarations
void mnTrainingCreateWhiteSquare(s32 port_id);
void mnTrainingSyncNameAndLogo(s32 port_id);
sb32 mnTrainingIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id);
void mnTrainingAnnounceFighter(s32 port_id, s32 panel_id);
void mnTrainingRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state);
void mnTrainingDrawHandicapCPULevel(s32 port_id);
void mnTrainingReorderCursorsOnPlacement(s32 port_id, s32 held_token_id);
void mnTrainingSaveMatchInfo();


// DATA
// 80137F60
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
// 80138CC0
s32 D_ovl28_80138CC0[2];

// 80138558
mnCharPanelTraining gMNTrainingPanels[2];

// 801386C8
s32 D_ovl28_801386C8[102];

// 80138860
s32 gMNTrainingStartDelayTimer;

// 80138864
sb32 gMNTrainingIsStartTriggered;

// 80138868
sb32 gMNTrainingDefaultCostumeOnly;

// 8013886C
s32 D_ovl28_8013886C;

// 80138870 title gobj
GObj* gMNTrainingTitleGObj;

// 80138874
s32 gMNTrainingTokenShinePulseColor;

// 80138878
sb32 gMNTrainingIsTokenShineIncreasing;

// 8013887C
u16 gMNTrainingCharacterUnlockedMask;

// 80138880
s32 D_ovl28_80138880;

// 80138884
s32 gMNTrainingPressStartFlashTimer;

// 80138888
s32 D_ovl28_80138888;

// 8013888C frames elapsed on CSS
s32 gMNTrainingFramesElapsed;

// 80138890
s32 gMNTrainingMaxFramesElapsed;

// 80138894
s32 gMNTrainingHumanPanelPort;

// 80138898
s32 gMNTrainingCPUPanelPort;

// 801388A0
lbFileNode D_ovl28_801388A0;

// 801388A8
s32 D_ovl28_801388A8[12];

// 801388D8
u32 D_ovl28_801388D8[240];

// 80138C98
s32 gMNTrainingFilesArray[8];


// 80131B00
void mnTrainingSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
void mnTrainingSelectCharWithToken(s32 port_id, s32 select_button)
{
	s32 held_port_id = gMNTrainingPanels[port_id].held_port_id, costume_id;

	if (select_button != mnSelect_A)
	{
		costume_id = ftParamGetCostumeCommonID(gMNTrainingPanels[held_port_id].char_id, select_button);

		if (mnTrainingIsCostumeInUse(gMNTrainingPanels[held_port_id].char_id, held_port_id, costume_id))
		{
			func_800269C0_275C0(0xA5U);
			return;
		}

		ftParamInitModelTexturePartsAll(gMNTrainingPanels[held_port_id].player, costume_id, 0);
		gMNTrainingPanels[held_port_id].costume_id = costume_id;
	}

	gMNTrainingPanels[held_port_id].is_selected = TRUE;

	mnTrainingReorderCursorsOnPlacement(port_id, held_port_id);

	gMNTrainingPanels[held_port_id].holder_port_id = 4;
	gMNTrainingPanels[port_id].cursor_state = mnCursorStateNotHoldingToken;

	mnTrainingRedrawCursor(gMNTrainingPanels[port_id].cursor, port_id, 2);

	gMNTrainingPanels[port_id].held_port_id = -1;
	gMNTrainingPanels[held_port_id].unk_0x88 = TRUE;

	mnTrainingAnnounceFighter(port_id, held_port_id);

	mnTrainingCreateWhiteSquare(held_port_id);
}

// 80131C70
f32 mnTrainingGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
	f32 portrait_x_position[12] = {

		25.0, 70.0, 115.0, 160.0, 205.0, 250.0,
		25.0, 70.0, 115.0, 160.0, 205.0, 250.0
	},
		portrait_velocity[12] = {

		1.9, 3.9, 7.8, -7.8, -3.8, -1.8,
		1.8, 3.8, 7.8, -7.8, -3.8, -1.8
	};

	if (current_x_position == portrait_x_position[portrait_id])
	{
		return -1.0F;
	}
	else if (portrait_x_position[portrait_id] < current_x_position)
	{
		return (current_x_position + portrait_velocity[portrait_id]) <= portrait_x_position[portrait_id]
			? portrait_x_position[portrait_id]
			: current_x_position + portrait_velocity[portrait_id];
	}
	else
	{
		return (current_x_position + portrait_velocity[portrait_id]) >= portrait_x_position[portrait_id]
			? portrait_x_position[portrait_id]
			: current_x_position + portrait_velocity[portrait_id];
	}
}

// 80131D84
sb32 mnTrainingCheckFighterIsXBoxed(s32 ft_kind)
{
	return FALSE;
}

// 80131D90
void mnTrainingSetPortraitX(GObj *portrait_gobj)
{
	f32 new_portrait_x = mnTrainingGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

	if (new_portrait_x != -1.0F)
	{
		SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

		if (SObjGetStruct(portrait_gobj)->next != NULL)
		{
			SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
		}
	}
}

// 80131E0C
void mnTrainingInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
	Vec2f coordinates[12] = {

		{ -35.0, 36.0 }, { -35.0, 36.0 }, { -35.0, 36.0 },
		{ 310.0, 36.0 }, { 310.0, 36.0 }, { 310.0, 36.0 },
		{ -35.0, 79.0 }, { -35.0, 79.0 }, { -35.0, 79.0 },
		{ 310.0, 79.0 }, { 310.0, 79.0 }, { 310.0, 79.0 }
	};

	portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
	portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 80131E68
void mnTrainingAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x,
		y = portrait_sobj->pos.y;
	s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, (gMNTrainingFilesArray[6] + xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 80131EFC
sb32 mnTrainingGetIsLocked(s32 char_id)
{
	switch (char_id)
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

// 80138070
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

// 80131FC8 - Unused?
void func_ovl28_80131FC8() {}

// 80131FD0
s32 mnTrainingGetFtKind(s32 portrait_id)
{
	s32 ftKind_order[12] = {

		4, 0, 2, 5, 3, 7, 11, 6, 8, 1, 9, 10
	};

	return ftKind_order[portrait_id];
}

// 80132020
s32 mnTrainingGetPortraitId(s32 ft_kind)
{
	s32 portrait_id_order[12] = {

		1, 9, 2, 4, 0, 3, 7, 5, 8, 10, 11, 6
	};

	return portrait_id_order[ft_kind];
}

// 80132070
void mnTrainingRenderPortraitWithNoise(GObj *portrait_gobj)
{
	gDPPipeSync(gSYTaskDLHeads[0]++);
	gDPSetCycleType(gSYTaskDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 80132130
void mnTrainingCreateLockedPortrait(s32 portrait_id)
{
	GObj* texture_gobj;
	SObj* texture_sobj;
	intptr_t locked_portrait_offsets[12] = {

		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020538, 0x00000000,
		0x00000000, 0x0001E2E8, 0x00000000, 0x00000000, 0x000249D8, 0x00022788
	};

	// portrait bg (fire)
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnTrainingSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMNTrainingFilesArray[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	texture_gobj->user_data.s = portrait_id;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mnTrainingRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnTrainingSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMNTrainingFilesArray[6], locked_portrait_offsets[mnTrainingGetFtKind(portrait_id)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

	texture_gobj->user_data.s = portrait_id;
	mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnTrainingSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMNTrainingFilesArray[6], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	texture_sobj->sprite.attr &= ~SP_FASTCOPY;
	texture_sobj->sprite.attr |= SP_TRANSPARENT;
	texture_sobj->envcolor.r = 0x5B;
	texture_sobj->envcolor.g = 0x41;
	texture_sobj->envcolor.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.s = portrait_id;
	mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 801323D8
void mnTrainingCreatePortrait(s32 portrait_id)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj *texture_sobj;
	intptr_t portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mnTrainingGetIsLocked(mnTrainingGetFtKind(portrait_id)))
	{
		mnTrainingCreateLockedPortrait(portrait_id);
	}
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1DU, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x24U, 0x80000000U, -1);
		portrait_bg_gobj->user_data.p = portrait_id;
		gcAddGObjProcess(portrait_bg_gobj, mnTrainingSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_bg_gobj, GetAddressFromOffset(gMNTrainingFilesArray[6], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
		gcAddGObjProcess(portrait_gobj, mnTrainingSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_gobj, GetAddressFromOffset(gMNTrainingFilesArray[6], portrait_offsets[mnTrainingGetFtKind(portrait_id)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
		portrait_gobj->user_data.p = portrait_id;

		// this conditionally draws a big red box with an X in it, but this check always fails
		if (mnTrainingCheckFighterIsXBoxed(mnTrainingGetFtKind(portrait_id)))
		{
			mnTrainingAddRedXBoxToPortrait(portrait_gobj, portrait_id);
		}
		mnTrainingInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	}
}

// 80132594
void mnTrainingCreatePortraits()
{
	s32 portrait_id;

	for (portrait_id = 0; portrait_id < 12; portrait_id++)
		mnTrainingCreatePortrait(portrait_id);
}

// 801325D4
void mnTrainingSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
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

	if (ft_kind != nFTKindNull)
	{
		gcRemoveSObjAll(name_logo_gobj);

		// logo
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, GetAddressFromOffset(gMNTrainingFilesArray[3], logo_offsets[ft_kind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (port_id == gMNTrainingHumanPanelPort)
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
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], name_offsets[ft_kind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (port_id == gMNTrainingHumanPanelPort)
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

// 801327C4
void mnTrainingCreatePortraitViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132864
void mnTrainingCreatePortraitBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132904
void mnTrainingCreatePortraitWhiteBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801329A4
void mnTrainingCreatePanelDoorsViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132A44
void mnTrainingCreateTypeButtonViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132AE4
void mnTrainingCreatePanelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132B84
void mnTrainingCreateTeamButtonViewPort()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132C24
void mnTrainingUpdatePanel(GObj* panel_gobj, s32 port_id)
{
	SObj* panel_sobj;
	intptr_t lut_offsets[4] = {

		0x103F8, 0x10420, 0x10470, 0x10448
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	if (port_id == gMNTrainingHumanPanelPort)
	{
		panel_sobj->sprite.LUT = GetAddressFromOffset(gMNTrainingFilesArray[0], lut_offsets[gMNTrainingHumanPanelPort]);
	}
	else
	{
		panel_sobj->sprite.LUT = GetAddressFromOffset(gMNTrainingFilesArray[1], &FILE_017_CPU_PANEL_LUT_OFFSET);
	}
}

// 80132CA4
void mnTrainingCreateTypeImage(s32 port_id)
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

	gMNTrainingPanels[port_id].type = type_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(type_gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);

	if (port_id == gMNTrainingHumanPanelPort)
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], offsets[gMNTrainingHumanPanelPort]));
		type_sobj->pos.x = floats[port_id] + 53.0F;
		type_sobj->pos.y = 131.0F;
	}
	else
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_TYPE_CP_IMAGE_OFFSET));
		type_sobj->pos.x = 192.0F;
		type_sobj->pos.y = 132.0F;
	}

	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;
}

// 80132E24
void mnTrainingCreatePanel(s32 port_id)
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
	panel_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, 0x80000000, -1, GetAddressFromOffset(gMNTrainingFilesArray[1], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	gMNTrainingPanels[port_id].panel = panel_gobj;
	SObjGetStruct(panel_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(panel_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (port_id == gMNTrainingHumanPanelPort)
	{
		SObjGetStruct(panel_gobj)->pos.x = 53.0f;
		SObjGetStruct(panel_gobj)->pos.y = 127.0f;
	}
	else
	{
		SObjGetStruct(panel_gobj)->pos.x = 185.0f;
		SObjGetStruct(panel_gobj)->pos.y = 127.0f;
	}

	mnTrainingUpdatePanel(panel_gobj, port_id);
	mnTrainingCreateTypeImage(port_id);

	// name/logo
	namelogo_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gMNTrainingPanels[port_id].name_logo = namelogo_gobj;
	gcAddGObjDisplay(namelogo_gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);

	mnTrainingSyncNameAndLogo(port_id);
}

// 80132FF4 - Unused?
void func_ovl28_80132FF4() {}

// 80132FFC - Unused?
void func_ovl28_80132FFC() {}

// 80133004 - Unused?
void func_ovl28_80133004() {}

// 8013300C - Unused?
void func_ovl28_8013300C() {}

// 80133014
void mnTrainingCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, GetAddressFromOffset(gMNTrainingFilesArray[4], &FILE_015_BACKGROUND_IMAGE_OFFSET));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 80133140
void mnTrainingDrawTitleAndBack()
{
	GObj* back_gobj;
	GObj* title_gobj;
	void* unused;

	title_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1, GetAddressFromOffset(gMNTrainingFilesArray[5], &FILE_012_TRAINING_MODE_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(title_gobj)->pos.x = 27.0F;
	SObjGetStruct(title_gobj)->pos.y = 24.0F;
	SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(title_gobj)->sprite.red = 0xE3;
	SObjGetStruct(title_gobj)->sprite.green = 0xAC;
	SObjGetStruct(title_gobj)->sprite.blue = 4;
	gMNTrainingTitleGObj = title_gobj;

	back_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(back_gobj)->pos.x = 244.0F;
	SObjGetStruct(back_gobj)->pos.y = 23.0F;
	SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 80138264
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

// 8013828C
f32 D_ovl28_8013828C[10] = {

	8.0, 6.0, 9.0, 8.0, 8.0, 9.0, 8.0, 8.0, 8.0, 9.0
};

// 801332C4 - Unused?
void func_ovl28_801332C4() {}

// 801332CC - Unused?
void func_ovl28_801332CC() {}

// 801332D4 - Unused?
void func_ovl28_801332D4() {}

// 801332DC
s32 mnTrainingGetAdditionalSelectedCount(s32 ft_kind)
{
	s32 count = 0;

	if (ft_kind == gMNTrainingPanels[gMNTrainingHumanPanelPort].char_id)
	{
		count += 1;
	}
	if (ft_kind == gMNTrainingPanels[gMNTrainingCPUPanelPort].char_id)
	{
		count += 1;
	}
	return (count != 0) ? count - 1 : count;
}

// 80133350
sb32 mnTrainingIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id)
{
	if (port_id == gMNTrainingHumanPanelPort)
	{
		if (
			(ft_kind == gMNTrainingPanels[gMNTrainingCPUPanelPort].char_id)
			&& (costume_id == gMNTrainingPanels[gMNTrainingCPUPanelPort].costume_id)
			)
		{
			return TRUE;
		}
		return FALSE;
	}
	if (port_id == gMNTrainingCPUPanelPort)
	{
		if (
			(ft_kind == gMNTrainingPanels[gMNTrainingHumanPanelPort].char_id)
			&& (costume_id == gMNTrainingPanels[gMNTrainingHumanPanelPort].costume_id)
			)
		{
			return TRUE;
		}
		return FALSE;
	}
}

// 80133408
s32 mnTrainingGetAvailableCostumeFFA(s32 ft_kind, s32 port_id)
{
	s32 i, j, k, l;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	if (port_id == gMNTrainingHumanPanelPort)
	{
		if (ft_kind == gMNTrainingPanels[gMNTrainingCPUPanelPort].char_id)
		{
			for (j = 0; j < 4; j++)
			{
				if (ftParamGetCostumeCommonID(ft_kind, j) == gMNTrainingPanels[gMNTrainingCPUPanelPort].costume_id)
					some_array[j] = TRUE;
			}
		}
	}
	else
	{
		if (ft_kind ==gMNTrainingPanels[gMNTrainingHumanPanelPort].char_id)
		{
			for (k = 0; k < 4; k++)
			{
				if (ftParamGetCostumeCommonID(ft_kind, k) == gMNTrainingPanels[gMNTrainingHumanPanelPort].costume_id)
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

// 801335F0
s32 mnTrainingGetAvailableCostume(s32 ft_kind, s32 port_id)
{
	return ftParamGetCostumeCommonID(ft_kind, mnTrainingGetAvailableCostumeFFA(ft_kind, port_id));
}

// 8013361C
s32 mnTrainingGetSelectedAnimation(s32 ft_kind)
{
	switch (ft_kind)
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

// 8013367C
void mnTrainingRotateFighter(GObj *fighter_gobj)
{
	ftStruct* fp = ftGetStruct(fighter_gobj);
	s32 port_id = fp->player;
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	if (panel_info->unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (!panel_info->selected_animation_started)
			{
				scSubsysFighterSetStatus(panel_info->player, mnTrainingGetSelectedAnimation(panel_info->char_id));

				panel_info->selected_animation_started = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(panel_info->player, mnTrainingGetSelectedAnimation(panel_info->char_id));

				panel_info->selected_animation_started = TRUE;
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

// 801337BC
void mnTrainingSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 costume_id)
{
	f32 initial_y_rotation;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	if (ft_kind != nFTKindNull)
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

		spawn_info.ft_kind = ft_kind;
		gMNTrainingPanels[port_id].costume_id = spawn_info.costume = costume_id;
		spawn_info.shade = 0;
		spawn_info.figatree_heap = gMNTrainingPanels[port_id].figatree_heap;
		spawn_info.player = port_id;
		fighter_gobj = ftManagerMakeFighter(&spawn_info);

		gMNTrainingPanels[port_id].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnTrainingRotateFighter, 1, 1);

		if (port_id == gMNTrainingHumanPanelPort)
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

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];

		if (port_id == gMNTrainingCPUPanelPort)
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
	}
}

// 801339A0
void mnTrainingCreateFighterViewport()
{
	Camera *cam = CameraGetStruct((GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 5000.0F;
	cam->flags = 4;
	cam->vec.at.x = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.z = 0.0F;
	cam->vec.up.y = 1.0F;
}

// 80133A90
void mnTrainingRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state)
{
	SObj* cursor_sobj;
	f32 current_x, current_y;
	syColorRGBPair type_colors[4] = {

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

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], type_offsets[port_id]));
	cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_state].x;
	cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_state].y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = type_colors[port_id].prim.r;
	cursor_sobj->sprite.green = type_colors[port_id].prim.g;
	cursor_sobj->sprite.blue = type_colors[port_id].prim.b;
	cursor_sobj->envcolor.r = type_colors[port_id].env.r;
	cursor_sobj->envcolor.g = type_colors[port_id].env.g;
	cursor_sobj->envcolor.b = type_colors[port_id].env.b;
}

// 80133CA0 - Unused?
void func_ovl28_80133CA0() {}

// 80133CA8
void mnTrainingUpdatePanels()
{
	s32 i;

	// unused
	s32 color_indexes[4] = {

		0, 1, 2, 3
	};

	mnTrainingUpdatePanel(gMNTrainingPanels[gMNTrainingHumanPanelPort].panel, gMNTrainingHumanPanelPort);
	mnTrainingUpdatePanel(gMNTrainingPanels[gMNTrainingCPUPanelPort].panel, gMNTrainingCPUPanelPort);
}

// 80133D44
sb32 mnTrainingCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(gMNTrainingPanels[port_id].token);

	current_x = cursor_sobj->pos.x + 25.0F;

	range_check = (current_x >= token_sobj->pos.x) && (current_x <= token_sobj->pos.x + 26.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= token_sobj->pos.y) && (current_y <= token_sobj->pos.y + 24.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80133E30
void mnTrainingSyncFighterDisplay(s32 port_id)
{
	s32 var_v0 = 0;

	if (gMNTrainingPanels[port_id].player != NULL)
	{
		if ((gMNTrainingPanels[port_id].char_id == nFTKindNull) && (gMNTrainingPanels[port_id].is_selected == 0))
		{
			gMNTrainingPanels[port_id].player->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		mnTrainingSpawnFighter(gMNTrainingPanels[port_id].player, port_id, gMNTrainingPanels[port_id].char_id, mnTrainingGetAvailableCostume(gMNTrainingPanels[port_id].char_id, port_id));
		gMNTrainingPanels[port_id].selected_animation_started = FALSE;
	}
}

// 80133ED8 - Unused?
void func_ovl28_80133ED8() {}

// 80133EE0
void mnTrainingSyncNameAndLogo(s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	if ((panel_info->player_type == mnPanelTypeNA) || ((panel_info->char_id == nFTKindNull) && (!panel_info->is_selected)))
	{
		panel_info->name_logo->flags = 1;
	}
	else
	{
		panel_info->name_logo->flags = 0;
		mnTrainingSetNameAndLogo(panel_info->name_logo, port_id, panel_info->char_id);
	}
}

// 80133F68
void mnTrainingRemoveWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	white_square_gobj = panel_info->white_square;
	if (white_square_gobj != NULL)
	{
		panel_info->white_square = NULL;
		gcEjectGObj(white_square_gobj);
	}
}

// 80133FB4
void mnTrainingFlashWhiteSquare(GObj* white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0) mnTrainingRemoveWhiteSquare(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 8013405C
void mnTrainingCreateWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait_id = mnTrainingGetPortraitId(gMNTrainingPanels[port_id].char_id);

	mnTrainingRemoveWhiteSquare(port_id);

	white_square_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1EU, 0x80000000U);
	gMNTrainingPanels[port_id].white_square = white_square_gobj;
	gcAddGObjDisplay(white_square_gobj, lbCommonDrawSObjAttr, 0x25U, 0x80000000U, -1);
	white_square_gobj->user_data.p = port_id;
	gcAddGObjProcess(white_square_gobj, mnTrainingFlashWhiteSquare, 0, 1);

	white_square_sobj = lbCommonMakeSObjForGObj(white_square_gobj, GetAddressFromOffset(gMNTrainingFilesArray[6], &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
	white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 801341B0
void mnTrainingAnnounceFighter(s32 port_id, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (gMNTrainingPanels[port_id].p_sfx != NULL)
	{
		if ((gMNTrainingPanels[port_id].p_sfx->sfx_id != 0) && (gMNTrainingPanels[port_id].p_sfx->sfx_id == gMNTrainingPanels[port_id].sfx_id))
			func_80026738_27338(gMNTrainingPanels[port_id].p_sfx);
	}

	func_800269C0_275C0(0x79U);

	gMNTrainingPanels[port_id].p_sfx = func_800269C0_275C0(announcer_fgms[gMNTrainingPanels[panel_id].char_id]);

	if (gMNTrainingPanels[port_id].p_sfx != NULL)
		gMNTrainingPanels[port_id].sfx_id = gMNTrainingPanels[port_id].p_sfx->sfx_id;
}

// 801342B0 - Unused?
void func_ovl28_801342B0() {}

// 801342B8
void mnTrainingRemoveHandicapCPULevel(s32 port_id)
{
	if (gMNTrainingPanels[port_id].handicap_cpu_level != NULL)
		gcEjectGObj(gMNTrainingPanels[port_id].handicap_cpu_level);

	if (gMNTrainingPanels[port_id].arrows != NULL)
		gcEjectGObj(gMNTrainingPanels[port_id].arrows);

	if (gMNTrainingPanels[port_id].handicap_cpu_level_value != NULL)
		gcEjectGObj(gMNTrainingPanels[port_id].handicap_cpu_level_value);

	gMNTrainingPanels[port_id].handicap_cpu_level = NULL;
	gMNTrainingPanels[port_id].arrows = NULL;
	gMNTrainingPanels[port_id].handicap_cpu_level_value = NULL;
}

// 80134340
SObj* mnTrainingGetArrowSObj(GObj* arrow_gobj, s32 direction)
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

// 8013438C - Unused?
void mnTrainingSyncAndBlinkArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 port_id = arrow_gobj->user_data.s;
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

		value = (gMNTrainingPanels[port_id].player_type == mnPanelTypeHuman) ? gMNTrainingPanels[port_id].handicap : gMNTrainingPanels[port_id].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mnTrainingGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnTrainingGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = (port_id * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mnTrainingGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnTrainingGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = (port_id * 0x45) + 0x4F;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 801345B8
void mnTrainingSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
	s32 port_id = handicap_cpu_level_gobj->user_data.p;

	if (gMNTrainingPanels[port_id].unk_0x88 == 0)
		mnTrainingRemoveHandicapCPULevel(port_id);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gMNTrainingPanels[port_id].player_type)
		mnTrainingDrawHandicapCPULevel(port_id);
}

// 8013462C
void mnTrainingDrawHandicapCPULevel(s32 port_id)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (gMNTrainingPanels[port_id].handicap_cpu_level != NULL)
	{
		gcEjectGObj(gMNTrainingPanels[port_id].handicap_cpu_level);
		gMNTrainingPanels[port_id].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gMNTrainingPanels[port_id].handicap_cpu_level = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, 0x80000000U, -1);
	handicap_cpu_level_gobj->user_data.p = port_id;
	gcAddGObjProcess(handicap_cpu_level_gobj, mnTrainingSyncHandicapCPULevelDisplay, 1, 1);

	if (gMNTrainingPanels[port_id].player_type == mnPanelTypeHuman)
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x22;
		handicap_cpu_level_sobj->user_data.p = 1;
	}

	handicap_cpu_level_sobj->sprite.red = 0xC2;
	handicap_cpu_level_sobj->sprite.green = 0xBD;
	handicap_cpu_level_sobj->sprite.blue = 0xAD;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 201.0F;

	handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, GetAddressFromOffset(gMNTrainingFilesArray[2], &FILE_000_COLON_IMAGE_OFFSET));
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x3D;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 80138328
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

// 80134830 - Unused?
void func_ovl28_80134830() {}

// 80134838 - Unused?
void func_ovl28_80134838() {}

// 80134840 - Unused?
void func_ovl28_80134840() {}

// 80134848
sb32 mnTrainingSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	if (panel_info->cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (gMNTrainingPanels[panel_info->held_port_id].char_id != nFTKindNull)
	{
		mnTrainingSelectCharWithToken(port_id, select_button);
		panel_info->min_frames_elapsed_until_recall = gMNTrainingFramesElapsed + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 801348F0
void mnTrainingReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};
	s32 i, order_id;

	gcMoveGObjDL(gMNTrainingPanels[port_id].cursor, 0x20U, diplay_orders[3]);
	gcMoveGObjDL(gMNTrainingPanels[token_id].token, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != port_id)
		{
			if (gMNTrainingPanels[i].cursor != NULL)
				gcMoveGObjDL(gMNTrainingPanels[i].cursor, 0x20U, diplay_orders[order_id]);

			if (gMNTrainingPanels[i].held_port_id != -1U)
				gcMoveGObjDL(gMNTrainingPanels[gMNTrainingPanels[i].held_port_id].token, 0x20U, diplay_orders[order_id] + 1);
		}
	}
}

// 80134A4C
void mnTrainingReorderCursorsOnPlacement(s32 port_id, s32 held_token_id)
{
	s32 held_orders[4] = {

		3, 2, 1, 0
	},
		unheld_orders[4] = {

		6, 4, 2, 0
	};

	s32 *order;
	s32 unused;
	sb32 token_held[4];
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMNTrainingPanels[i].held_port_id == -1)
			token_held[i] = FALSE;
		else
			token_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != port_id) && (token_held[i]))
		{
			if (gMNTrainingPanels[i].cursor != NULL)
				gcMoveGObjDL(gMNTrainingPanels[i].cursor, 0x20, *order);

			gcMoveGObjDL(gMNTrainingPanels[gMNTrainingPanels[i].held_port_id].token, 0x20, *order + 1);
			order--;
		}
	}

	if (port_id != 4)
		gcMoveGObjDL(gMNTrainingPanels[port_id].cursor, 0x20, *order);

	gcMoveGObjDL(gMNTrainingPanels[held_token_id].token, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if (i != port_id && !token_held[i])
		{
			if (gMNTrainingPanels[i].cursor != NULL)
				gcMoveGObjDL(gMNTrainingPanels[i].cursor, 0x20, *order);

			order--;
		}
	}
}

// 80134C64
void mnTrainingSetCursorCoordinatesFromToken(s32 port_id)
{
	mnCharPanelTraining* panel_info;
	mnCharPanelTraining* held_token_panel_info;

	panel_info = &gMNTrainingPanels[port_id];
	held_token_panel_info = &gMNTrainingPanels[panel_info->held_port_id];

	panel_info->cursor_pickup_x = SObjGetStruct(held_token_panel_info->token)->pos.x - 11.0F;
	panel_info->cursor_pickup_y = SObjGetStruct(held_token_panel_info->token)->pos.y - -14.0F;
}

// 80134CC8
void mnTrainingHandleCursorPickup(s32 port_id, s32 held_port_id)
{
	mnCharPanelTraining* panel_info;
	mnCharPanelTraining* held_token_panel_info;

	held_token_panel_info = &gMNTrainingPanels[held_port_id];
	held_token_panel_info->holder_port_id = port_id;
	held_token_panel_info->is_selected = FALSE;

	panel_info = &gMNTrainingPanels[port_id];
	panel_info->cursor_state = mnCursorStateHoldingToken;
	panel_info->held_port_id = held_port_id;

	held_token_panel_info->unk_0x88 = FALSE;

	mnTrainingSyncFighterDisplay(held_port_id);
	mnTrainingReorderCursorsOnPickup(port_id, held_port_id);
	mnTrainingSetCursorCoordinatesFromToken(port_id);
	mnTrainingRedrawCursor(panel_info->cursor, port_id, panel_info->cursor_state);

	panel_info->unk_0xA0 = TRUE;

	func_800269C0_275C0(0x7FU);

	mnTrainingRemoveHandicapCPULevel(held_port_id);
	mnTrainingRemoveWhiteSquare(held_port_id);
	mnTrainingSyncNameAndLogo(held_port_id);
}

// 80134D8C
sb32 mnTrainingCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
	s32 i;

	if ((gMNTrainingFramesElapsed < gMNTrainingPanels[port_id].min_frames_elapsed_until_recall) || (gMNTrainingPanels[port_id].is_recalling))
		return FALSE;
	else if (gMNTrainingPanels[port_id].cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	for (i = 3; i >=0; i--)
	{
		if (port_id == i)
		{
			if ((gMNTrainingPanels[i].holder_port_id == 4) && (gMNTrainingPanels[i].player_type != 2) && (mnTrainingCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnTrainingHandleCursorPickup(port_id, i);

				return TRUE;
			}
		}
		else if ((gMNTrainingPanels[i].holder_port_id == 4) && (gMNTrainingPanels[i].player_type == 1) && (mnTrainingCheckTokenPickup(cursor_gobj, port_id, i) != 0))
		{
			mnTrainingHandleCursorPickup(port_id, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 80134EE8
s32 mnTrainingGetFtKindFromTokenPosition(s32 port_id)
{
	SObj* token_sobj = SObjGetStruct(gMNTrainingPanels[port_id].token);
	s32 current_y = (s32) token_sobj->pos.x + 13;
	s32 current_x = (s32) token_sobj->pos.y + 12;
	s32 char_id;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			char_id = mnTrainingGetFtKind((s32) (current_y - 25) / 45);

			if ((mnTrainingCheckFighterIsXBoxed(char_id)) || (mnTrainingGetIsLocked(char_id)))
				return nFTKindNull;

			return char_id;
		}
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			char_id = mnTrainingGetFtKind(((s32) (current_y - 25) / 45) + 6);

			if ((mnTrainingCheckFighterIsXBoxed(char_id)) || (mnTrainingGetIsLocked(char_id)))
				return nFTKindNull;

			return char_id;
		}
	}
	return nFTKindNull;
}

// 80135074
void mnTrainingAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
	gsController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (gMNTrainingPanels[port_id].unk_0xA0)
	{
		delta = (gMNTrainingPanels[port_id].cursor_pickup_x - SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.x = gMNTrainingPanels[port_id].cursor_pickup_x;
		else
			SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.x += delta;

		delta = (gMNTrainingPanels[port_id].cursor_pickup_y - SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.y = gMNTrainingPanels[port_id].cursor_pickup_y;
		else
			SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.y += delta;

		if ((SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.x == gMNTrainingPanels[port_id].cursor_pickup_x) && (SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.y == gMNTrainingPanels[port_id].cursor_pickup_y))
			gMNTrainingPanels[port_id].unk_0xA0 = FALSE;

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMNTrainingPanels[port_id].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMNTrainingPanels[port_id].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (gMNTrainingPanels[port_id].is_recalling == FALSE)
	{
		controller = &gPlayerControllers[gMNTrainingHumanPanelPort];
		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMNTrainingPanels[port_id].cursor_state].x;
			}
		}

		controller = &gPlayerControllers[gMNTrainingHumanPanelPort];
		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMNTrainingPanels[port_id].cursor_state].y;
			}
		}
	}
}

// 80135430
void mnTrainingSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (panel_info->cursor_state != mnCursorStatePointer)
		{
			mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
			panel_info->cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (panel_info->held_port_id == -1)
		{
			if (panel_info->cursor_state != mnCursorStateNotHoldingToken)
			{
				mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (panel_info->cursor_state != mnCursorStateHoldingToken)
			{
				mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				panel_info->cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if ((panel_info->cursor_state == mnCursorStatePointer) && (panel_info->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMNTrainingPanels[i].is_selected == 1) && (mnTrainingCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnTrainingRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 801355E0
void mnTrainingTryCostumeChange(s32 port_id, s32 select_button)
{
	u32 costume_id = ftParamGetCostumeCommonID(gMNTrainingPanels[port_id].char_id, select_button);

	if (mnTrainingIsCostumeInUse(gMNTrainingPanels[port_id].char_id, port_id, costume_id))
	{
		func_800269C0_275C0(0xA5U);
		return;
	}

	ftParamInitModelTexturePartsAll(gMNTrainingPanels[port_id].player, costume_id, 0);
	gMNTrainingPanels[port_id].costume_id = costume_id;

	func_800269C0_275C0(0xA4U);
}

// 80135674
sb32 mnTrainingIsHumanWithCharacterSelected(s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	if ((panel_info->is_selected) && (panel_info->held_port_id == -1) && (panel_info->player_type == mnPanelTypeHuman))
		return TRUE;
	else
		return FALSE;
}

// 801356D0
void mnTrainingRecallToken(s32 port_id)
{
	gMNTrainingPanels[port_id].unk_0x88 = FALSE;
	gMNTrainingPanels[port_id].is_selected = FALSE;
	gMNTrainingPanels[port_id].is_recalling = TRUE;
	gMNTrainingPanels[port_id].recall_frame_counter = 0;
	gMNTrainingPanels[port_id].recall_start_x = SObjGetStruct(gMNTrainingPanels[port_id].token)->pos.x;
	gMNTrainingPanels[port_id].recall_start_y = SObjGetStruct(gMNTrainingPanels[port_id].token)->pos.y;

	gMNTrainingPanels[port_id].recall_end_x = SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.x + 20.0F;

	if (gMNTrainingPanels[port_id].recall_end_x > 280.0F)
		gMNTrainingPanels[port_id].recall_end_x = 280.0F;

	gMNTrainingPanels[port_id].recall_end_y = SObjGetStruct(gMNTrainingPanels[port_id].cursor)->pos.y + -15.0F;

	if (gMNTrainingPanels[port_id].recall_end_y < 10.0F)
		gMNTrainingPanels[port_id].recall_end_y = 10.0F;

	if (gMNTrainingPanels[port_id].recall_end_y < gMNTrainingPanels[port_id].recall_start_y)
		gMNTrainingPanels[port_id].recall_mid_y = gMNTrainingPanels[port_id].recall_end_y - 20.0F;
	else
		gMNTrainingPanels[port_id].recall_mid_y = gMNTrainingPanels[port_id].recall_start_y - 20.0F;
}

// 801357CC
void mnTrainingGoBackTo1PMenu()
{
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = nSCKind1PMode;

	mnTrainingSaveMatchInfo();
	auStopBGM();
	func_800266A0_272A0();
	syTaskSetLoadScene();
}

// 80135818
void mnTrainingExitIfBButtonPressed(s32 port_id)
{
	gsController* controller = &gPlayerControllers[port_id];

	if ((gMNTrainingFramesElapsed >= 10) && (controller->button_tap & B_BUTTON))
		mnTrainingGoBackTo1PMenu();
}

// 8013586C
sb32 mnTrainingCheckBackButtonPress(GObj* cursor_gobj)
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

// 80135934
void mnTrainingHandleButtonPresses(GObj* cursor_gobj)
{
	gsController* controller = &gPlayerControllers[gMNTrainingHumanPanelPort];
	mnCharPanelTraining* panel_info;
	s32 foo, bar, baz;
	s32 port_id = cursor_gobj->user_data.s;

	mnTrainingAutoPositionCursor(cursor_gobj, port_id);
	panel_info = &gMNTrainingPanels[port_id];

	if ((gPlayerControllers[gMNTrainingHumanPanelPort].button_tap & A_BUTTON)
		&& (!mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 4))
		&& (!mnTrainingCheckAndHandleTokenPickup(cursor_gobj, port_id))
		&& (mnTrainingCheckBackButtonPress(cursor_gobj)))
	{
			mnTrainingGoBackTo1PMenu();
			func_800269C0_275C0(0xA4U);
	}

	if (!gMNTrainingDefaultCostumeOnly)
	{
		if ((gPlayerControllers[gMNTrainingHumanPanelPort].button_tap & U_CBUTTONS)
			&& (!mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 0))
			&& (panel_info->unk_0x88))
		{
			mnTrainingTryCostumeChange(port_id, 0);
		}
		if ((gPlayerControllers[gMNTrainingHumanPanelPort].button_tap & R_CBUTTONS)
			&& (!mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 1))
			&& (panel_info->unk_0x88))
		{
			mnTrainingTryCostumeChange(port_id, 1);
		}
		if ((gPlayerControllers[gMNTrainingHumanPanelPort].button_tap & D_CBUTTONS)
			&& (!mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 2))
			&& (panel_info->unk_0x88))
		{
			mnTrainingTryCostumeChange(port_id, 2);
		}
		if ((gPlayerControllers[gMNTrainingHumanPanelPort].button_tap & L_CBUTTONS)
			&& (!mnTrainingSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 3))
			&& (panel_info->unk_0x88))
		{
			mnTrainingTryCostumeChange(port_id, 3);
		}
	}

	if ((gPlayerControllers[gMNTrainingHumanPanelPort].button_tap & B_BUTTON) && (mnTrainingIsHumanWithCharacterSelected(port_id)))
		mnTrainingRecallToken(port_id);

	if (!panel_info->is_recalling)
		mnTrainingExitIfBButtonPressed(port_id);

	if (!panel_info->is_recalling)
		mnTrainingSyncCursorDisplay(cursor_gobj, port_id);
}

// 80135C18
void mnTrainingRedrawToken(GObj* token_gobj, s32 token_index)
{
	SObj* token_sobj;
	f32 current_x, current_y;
	intptr_t token_offsets[5] = {

		0x9048,
		0x9B28,
		0xA608,
		0xB0E8,
		0xBBC8
	};

	current_x = SObjGetStruct(token_gobj)->pos.x;
	current_y = SObjGetStruct(token_gobj)->pos.y;

	gcRemoveSObjAll(token_gobj);

	token_sobj = lbCommonMakeSObjForGObj(token_gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], token_offsets[token_index]));
	token_sobj->pos.x = current_x;
	token_sobj->pos.y = current_y;
	token_sobj->sprite.attr &= ~SP_FASTCOPY;
	token_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 80135CCC
void mnTrainingCenterTokenInPortrait(GObj* token_gobj, s32 ft_kind)
{
	s32 portrait_id = mnTrainingGetPortraitId(ft_kind);

	if (portrait_id >= 6)
	{
		SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) - (6 * 45) + 36;
		SObjGetStruct(token_gobj)->pos.y = 89.0F;
	}
	else
	{
		SObjGetStruct(token_gobj)->pos.x = (portrait_id * 45) + 36;
		SObjGetStruct(token_gobj)->pos.y = 46.0F;
	}
}

// 80135D7C - Unused?
void func_ovl28_80135D7C() {}

// 80135D84
void mnTrainingMoveToken(s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	SObjGetStruct(panel_info->token)->pos.x += panel_info->token_x_velocity;
	SObjGetStruct(panel_info->token)->pos.y += panel_info->token_y_velocity;
}

// 80135DD8
void mnTrainingSyncTokenAndFighter(GObj* token_gobj)
{
	s32 ft_kind;
	s32 port_id = token_gobj->user_data.s;

	if (gMNTrainingFramesElapsed < 0x1E)
	{
		token_gobj->flags = 1;
	}
	else
	{
		if ((gMNTrainingPanels[port_id].player_type == mnPanelTypeCPU)
			|| ((gMNTrainingPanels[port_id].player_type == mnPanelTypeHuman)
				&& ((gMNTrainingPanels[port_id].cursor_state != mnCursorStatePointer)
					|| (gMNTrainingPanels[port_id].is_selected == TRUE)
					|| (gMNTrainingPanels[port_id].is_recalling == TRUE))))
		{
			token_gobj->flags = 0;
		}
		else
		{
			token_gobj->flags = 1;
		}
	}

	if ((gMNTrainingPanels[port_id].player_type) != mnPanelTypeNA)
	{
		if ((gMNTrainingPanels[port_id].is_selected == FALSE)
			&& (gMNTrainingPanels[port_id].holder_port_id != 4))
		{
			if (gMNTrainingPanels[gMNTrainingPanels[port_id].holder_port_id].unk_0xA0 == FALSE)
			{
				SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gMNTrainingPanels[gMNTrainingPanels[port_id].holder_port_id].cursor)->pos.x + 11.0F);
				SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gMNTrainingPanels[gMNTrainingPanels[port_id].holder_port_id].cursor)->pos.y + -14.0F);
			}
		}
		else
			mnTrainingMoveToken(port_id);

		ft_kind = mnTrainingGetFtKindFromTokenPosition(port_id);

		if ((gMNTrainingPanels[port_id].player_type == mnPanelTypeCPU)
			&& (ft_kind != gMNTrainingPanels[port_id].char_id)
			&& (ft_kind == nFTKindNull))
		{
			if (gMNTrainingPanels[port_id].holder_port_id != 4)
				mnTrainingSelectCharWithToken(gMNTrainingPanels[port_id].holder_port_id, 4);
		}

		if ((gMNTrainingPanels[port_id].is_selected == FALSE)
			&& (ft_kind != gMNTrainingPanels[port_id].char_id))
		{
			gMNTrainingPanels[port_id].char_id = ft_kind;

			mnTrainingSyncFighterDisplay(port_id);
			mnTrainingSyncNameAndLogo(port_id);
		}
	}
}

// 80135FE8
void mnTrainingCreateCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80136088
void mnTrainingCreateDroppedTokenViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80136128
void mnTrainingCreateHandicapCPULevelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801361C8
void mnTrainingCreateReadyToFightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80136268
void mnTrainingCreateCursor(s32 port_id)
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

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x20, starting_display_orders[port_id], -1, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnTrainingHandleButtonPresses, 2);

	gMNTrainingPanels[port_id].cursor = cursor_gobj;
	cursor_gobj->user_data.s = port_id;
	SObjGetStruct(cursor_gobj)->pos.x = 70.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnTrainingRedrawCursor(cursor_gobj, port_id, 0);
}

// 801363C8
void mnTrainingRenderToken(GObj* token_gobj)
{
	gDPPipeSync(gSYTaskDLHeads[0]++);
	gDPSetCycleType(gSYTaskDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor(gSYTaskDLHeads[0]++, gMNTrainingTokenShinePulseColor & 0xFF, gMNTrainingTokenShinePulseColor & 0xFF, gMNTrainingTokenShinePulseColor & 0xFF, gMNTrainingTokenShinePulseColor & 0xFF);
	gDPSetCombineLERP(gSYTaskDLHeads[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0,  TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(token_gobj);
}

// 801364C0
void mnTrainingCreateToken(s32 port_id)
{
	GObj* token_gobj;
	mnCharPanelTraining* panel_info;
	intptr_t offsets_no_cpu[4] = {

		0x9048, 0x9B28, 0xA608, 0xB0E8
	};
	s32 starting_display_orders[4] = {

		3, 2, 1, 0
	};
	s32 holding_display_orders[4] = {

		6, 4, 2, 0
	};

	gMNTrainingPanels[port_id].token = token_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, mnTrainingRenderToken, 0x21, starting_display_orders[port_id], -1, GetAddressFromOffset(gMNTrainingFilesArray[0], offsets_no_cpu[port_id]), 1, mnTrainingSyncTokenAndFighter, 1);

	panel_info = &gMNTrainingPanels[port_id];

	token_gobj->user_data.s = port_id;

	if (panel_info->player_type == mnPanelTypeCPU)
		mnTrainingRedrawToken(token_gobj, 4);

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->held_port_id != -1))
		gcMoveGObjDL(panel_info->token, 0x20U, holding_display_orders[port_id] + 1);

	if (panel_info->char_id == nFTKindNull)
	{
		SObjGetStruct(token_gobj)->pos.x = 51.0F;
		SObjGetStruct(token_gobj)->pos.y = 161.0F;
	}
	else
		mnTrainingCenterTokenInPortrait(token_gobj, panel_info->char_id);

	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801366D0
f32 getTrainingTokenDistance(s32 port_id_1, s32 port_id_2)
{
	f32 delta_x, delta_y;
	SObj* token_sobj_2 = SObjGetStruct(gMNTrainingPanels[port_id_2].token);
	SObj* token_sobj_1 = SObjGetStruct(gMNTrainingPanels[port_id_1].token);

	delta_y = token_sobj_2->pos.y - token_sobj_1->pos.y;
	delta_x = token_sobj_2->pos.x - token_sobj_1->pos.x;

	return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 80136748
void mnTrainingAutopositionOverlappedTokens(s32 port_id_1, s32 port_id_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(gMNTrainingPanels[port_id_1].token)->pos.x == SObjGetStruct(gMNTrainingPanels[port_id_2].token)->pos.x)
		gMNTrainingPanels[port_id_1].token_x_velocity += mtTrigGetRandomIntRange(2) - 1;
	else
		gMNTrainingPanels[port_id_1].token_x_velocity += (-1.0F * (SObjGetStruct(gMNTrainingPanels[port_id_2].token)->pos.x - SObjGetStruct(gMNTrainingPanels[port_id_1].token)->pos.x)) / 10.0F;

	if (SObjGetStruct(gMNTrainingPanels[port_id_1].token)->pos.y == SObjGetStruct(gMNTrainingPanels[port_id_2].token)->pos.y)
		gMNTrainingPanels[port_id_1].token_y_velocity += mtTrigGetRandomIntRange(2) - 1;
	else
		gMNTrainingPanels[port_id_1].token_y_velocity += (-1.0F * (SObjGetStruct(gMNTrainingPanels[port_id_2].token)->pos.y - SObjGetStruct(gMNTrainingPanels[port_id_1].token)->pos.y)) / 10.0F;
}

// 80136888
void mnTrainingAutopositionTokenFromPortraitEdges(s32 port_id)
{
	s32 portrait_id = mnTrainingGetPortraitId(gMNTrainingPanels[port_id].char_id);
	f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
	f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(gMNTrainingPanels[port_id].token)->pos.x + gMNTrainingPanels[port_id].token_x_velocity + 13.0F;
	f32 new_pos_y = SObjGetStruct(gMNTrainingPanels[port_id].token)->pos.y + gMNTrainingPanels[port_id].token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		gMNTrainingPanels[port_id].token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;

	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		gMNTrainingPanels[port_id].token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;

	if (new_pos_y < (portrait_edge_y + 5.0F))
		gMNTrainingPanels[port_id].token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;

	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		gMNTrainingPanels[port_id].token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 80136A44
void mnTrainingAutopositionPlacedToken(s32 port_id)
{
	s32 other_port_id;
	f32 distances[4];

	other_port_id = (port_id == gMNTrainingHumanPanelPort) ? gMNTrainingCPUPanelPort : gMNTrainingHumanPanelPort;

	if (port_id != other_port_id)
	{
		if (gMNTrainingPanels[port_id].is_selected)
			distances[other_port_id] = getTrainingTokenDistance(port_id, other_port_id);
	}
	else
		distances[other_port_id] = -1.0F;

	gMNTrainingPanels[port_id].token_x_velocity = 0.0F;
	gMNTrainingPanels[port_id].token_y_velocity = 0.0F;

	if (
		(IS_BETWEEN(distances[other_port_id], 0.0F, 15.0F))
		&& (gMNTrainingPanels[port_id].char_id == gMNTrainingPanels[other_port_id].char_id)
		&& (gMNTrainingPanels[port_id].char_id != nFTKindNull)
		&& (gMNTrainingPanels[other_port_id].is_selected == 1))
	{
		mnTrainingAutopositionOverlappedTokens(port_id, other_port_id, (15.0F -  distances[other_port_id]) / 15.0F);
	}

	mnTrainingAutopositionTokenFromPortraitEdges(port_id);
}

// 80136BE0
void mnTrainingAutopositionRecalledToken(s32 port_id)
{
	f32 new_y_velocity, new_x_velocity;

	gMNTrainingPanels[port_id].recall_frame_counter += 1;

	if (gMNTrainingPanels[port_id].recall_frame_counter < 11)
	{
		new_x_velocity = (gMNTrainingPanels[port_id].recall_end_x - gMNTrainingPanels[port_id].recall_start_x) / 10.0F;

		if (gMNTrainingPanels[port_id].recall_frame_counter < 6)
			new_y_velocity = (gMNTrainingPanels[port_id].recall_mid_y - gMNTrainingPanels[port_id].recall_start_y) / 5.0F;
		else
			new_y_velocity = (gMNTrainingPanels[port_id].recall_end_y - gMNTrainingPanels[port_id].recall_mid_y) / 5.0F;

		gMNTrainingPanels[port_id].token_x_velocity = new_x_velocity;
		gMNTrainingPanels[port_id].token_y_velocity = new_y_velocity;
	}
	else if (gMNTrainingPanels[port_id].recall_frame_counter == 11)
	{
		mnTrainingHandleCursorPickup(port_id, port_id);

		gMNTrainingPanels[port_id].token_x_velocity = 0.0F;
		gMNTrainingPanels[port_id].token_y_velocity = 0.0F;
	}

	if (gMNTrainingPanels[port_id].recall_frame_counter == 30)
		gMNTrainingPanels[port_id].is_recalling = FALSE;
}

// 80136CCC
void mnTrainingAutopositionToken(s32 port_id)
{
	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].is_recalling)
		mnTrainingAutopositionRecalledToken(gMNTrainingHumanPanelPort);

	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].is_selected)
		mnTrainingAutopositionPlacedToken(gMNTrainingHumanPanelPort);

	if (gMNTrainingPanels[gMNTrainingCPUPanelPort].is_recalling)
		mnTrainingAutopositionRecalledToken(gMNTrainingCPUPanelPort);

	if (gMNTrainingPanels[gMNTrainingCPUPanelPort].is_selected)
		mnTrainingAutopositionPlacedToken(gMNTrainingCPUPanelPort);
}

// 80136DD8
void mnTrainingCreateTokenAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnTrainingAutopositionToken, 1, 1);
}

// 80136E1C
void mnTrainingUpdateTokenShinePulseColor(GObj* unused)
{
	if (gMNTrainingIsTokenShineIncreasing == FALSE)
	{
		gMNTrainingTokenShinePulseColor += 9;

		if (gMNTrainingTokenShinePulseColor >= 0x100)
		{
			gMNTrainingTokenShinePulseColor = 0xFF;
			gMNTrainingIsTokenShineIncreasing = TRUE;
		}
	}
	if (gMNTrainingIsTokenShineIncreasing == TRUE)
	{
		gMNTrainingTokenShinePulseColor -= 9;

		if (gMNTrainingTokenShinePulseColor < 0x80)
		{
			gMNTrainingTokenShinePulseColor = 0x80;
			gMNTrainingIsTokenShineIncreasing = FALSE;
		}
	}
}

// 80136E94
void mnTrainingCreateTokenShinePulseRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnTrainingUpdateTokenShinePulseColor, 1, 1);
}

// 80136ED8
void mnTrainingSyncShadeAndCostume(s32 unused)
{
	s32 i;
	s32 costume_id;

	for (i = 0; i < 4; i++)
	{
		if ((gMNTrainingPanels[i].char_id != nFTKindNull) && (mnTrainingGetAdditionalSelectedCount(gMNTrainingPanels[i].char_id) == 0))
		{
			costume_id = ftParamGetCostumeCommonID(gMNTrainingPanels[i].char_id, 0);

			if ((costume_id != gMNTrainingPanels[i].costume_id) && (gMNTrainingPanels[i].unk_0x88 == 0))
			{
				ftParamInitModelTexturePartsAll(gMNTrainingPanels[i].player, costume_id, 0);
				gMNTrainingPanels[i].costume_id = costume_id;
			}
		}
	}
}

// 80136F84
void mnTrainingCreateSyncShadeAndCostumeRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1FU, 0x80000000U), mnTrainingSyncShadeAndCostume, 1, 1);
}

// 80136FC8
void mnTrainingSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	s32 portrait_id = white_circle_gobj->user_data.s;
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((gMNTrainingPanels[portrait_id].unk_0x88 == 0) && (gMNTrainingPanels[portrait_id].char_id != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMNTrainingPanels[portrait_id].char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMNTrainingPanels[portrait_id].char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMNTrainingPanels[portrait_id].char_id];
	}
	else
		white_circle_gobj->flags = 1;
}

// 801370BC
void mnTrainingCreateWhiteCircles()
{
	GObj* white_circle_gobj;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

		gcSetupCommonDObjs(white_circle_gobj, GetAddressFromOffset(gMNTrainingFilesArray[7], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

		gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, 0x80000000U, -1);

		white_circle_gobj->user_data.s = i;

		gcAddMObjAll(white_circle_gobj, GetAddressFromOffset(gMNTrainingFilesArray[7], &FILE_016_WHITE_CIRCLE_OFFSET_1));

		gcAddGObjProcess(white_circle_gobj, mnTrainingSyncWhiteCircleSizeAndDisplay, 1, 1);

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

// 80137254 - Unused?
void mnTrainingRenderReadyToFightObject(GObj* arg)
{
	lbCommonDrawSObjAttr(arg);
}

// 80137274
sb32 mnTrainingIsReadyToFight()
{
	if ((gMNTrainingPanels[gMNTrainingHumanPanelPort].unk_0x88 != 0) && (gMNTrainingPanels[gMNTrainingCPUPanelPort].unk_0x88 != 0))
		return TRUE;
	else
		return FALSE;
}

// 801372D4
void mnTrainingBlinkIfReadyToFight(GObj* gobj)
{
	if (mnTrainingIsReadyToFight())
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

// 80137354
void mnTrainingCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x20U, 0x80000000U);
	gcAddGObjDisplay(gobj, mnTrainingRenderReadyToFightObject, 0x26U, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mnTrainingBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
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
	gcAddGObjDisplay(gobj, mnTrainingRenderReadyToFightObject, 0x1CU, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mnTrainingBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNTrainingFilesArray[0], &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 801375D0 - Unused?
void func_ovl28_801375D0() {}

// 801375D8
void mnTrainingSaveMatchInfo()
{
	gSceneData.training_man_ft_kind = gMNTrainingPanels[gMNTrainingHumanPanelPort].char_id;
	gSceneData.training_man_costume = gMNTrainingPanels[gMNTrainingHumanPanelPort].costume_id;

	gSceneData.training_com_ft_kind = gMNTrainingPanels[gMNTrainingCPUPanelPort].char_id;
	gSceneData.training_com_costume = gMNTrainingPanels[gMNTrainingCPUPanelPort].costume_id;
}

// 80137638
void mnTrainingDestroyCursorAndTokenProcesses()
{
	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].cursor != NULL)
		gcPauseGObjProcess(gMNTrainingPanels[gMNTrainingHumanPanelPort].cursor->gobjproc_head);

	if (gMNTrainingPanels[gMNTrainingHumanPanelPort].token != NULL)
		gcPauseGObjProcess(gMNTrainingPanels[gMNTrainingHumanPanelPort].token->gobjproc_head);

	if (gMNTrainingPanels[gMNTrainingCPUPanelPort].token != NULL)
		gcPauseGObjProcess(gMNTrainingPanels[gMNTrainingCPUPanelPort].token->gobjproc_head);
}

// 80137700
void mnTrainingMain(s32 arg0)
{
	gMNTrainingFramesElapsed += 1;

	if (gMNTrainingFramesElapsed == gMNTrainingMaxFramesElapsed)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindTitle;

		mnTrainingSaveMatchInfo();
		syTaskSetLoadScene();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		gMNTrainingMaxFramesElapsed = gMNTrainingFramesElapsed + I_MIN_TO_TICS(5);

	if (gMNTrainingIsStartTriggered)
	{
		gMNTrainingStartDelayTimer -= 1;

		if (gMNTrainingStartDelayTimer == 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = nSCKindVSMaps;

			mnTrainingSaveMatchInfo();
			syTaskSetLoadScene();
		}
	}
	else if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (gMNTrainingFramesElapsed >= 0x3D))
	{
		if (mnTrainingIsReadyToFight())
		{
			func_800269C0_275C0(0x26AU);

			gMNTrainingStartDelayTimer = 0x1E;
			gMNTrainingIsStartTriggered = TRUE;

			mnTrainingDestroyCursorAndTokenProcesses();
			return;
		}

		func_800269C0_275C0(0xA5U);
	}
}

// 8013784C
void mnTrainingInitPort(s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->white_square = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->player = NULL;

	if (port_id == gMNTrainingHumanPanelPort)
	{
		panel_info->player_type = mnPanelTypeHuman;
		panel_info->holder_port_id = 4;
		panel_info->held_port_id = -1;
		panel_info->char_id = gSceneData.training_man_ft_kind;
		panel_info->costume_id = gSceneData.training_man_costume;
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;

	}
	else
	{
		panel_info->holder_port_id = 4;
		panel_info->held_port_id = -1;
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;
	}
}

// 80137900
void mnTrainingResetPort(s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->white_square = NULL;
	panel_info->player = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->is_selected = FALSE;
	panel_info->char_id = nFTKindNull;
	panel_info->is_recalling = FALSE;
	panel_info->player_type = mnPanelTypeHuman;
	panel_info->holder_port_id = port_id;
	panel_info->held_port_id = port_id;
}

// 80137960
void mnTrainingResetPortToNA(s32 port_id)
{
	mnCharPanelTraining* panel_info = &gMNTrainingPanels[port_id];

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->white_square = NULL;
	panel_info->player = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->is_selected = FALSE;
	panel_info->char_id = nFTKindNull;
	panel_info->is_recalling = FALSE;
	panel_info->player_type = mnPanelTypeNA;
	panel_info->holder_port_id = 4;
	panel_info->held_port_id = -1;
}

// 801379CC
void mnTrainingLoadMatchInfo()
{
	s32 i;
	s32 ft_kind, costume_id;

	gMNTrainingFramesElapsed = 0;
	gMNTrainingIsStartTriggered = FALSE;
	gMNTrainingMaxFramesElapsed = gMNTrainingFramesElapsed + I_MIN_TO_TICS(5);
	gMNTrainingHumanPanelPort = gSceneData.spgame_player;
	gMNTrainingCPUPanelPort = (gMNTrainingHumanPanelPort == 0) ? 1 : 0;
	gMNTrainingCharacterUnlockedMask = gSaveData.fighter_mask;

	if (gSceneData.training_man_ft_kind == nFTKindNull)
		mnTrainingResetPort(gMNTrainingHumanPanelPort);
	else
		mnTrainingInitPort(gMNTrainingHumanPanelPort);

	gMNTrainingPanels[gMNTrainingHumanPanelPort].min_frames_elapsed_until_recall = FALSE;

	ft_kind = gSceneData.training_com_ft_kind;

	if (ft_kind == nFTKindNull)
	{
		do
		{
			do
			{
				ft_kind = mtTrigGetRandomTimeUCharRange(12);
			} while (mnTrainingCheckFighterIsXBoxed(ft_kind));
		} while (mnTrainingGetIsLocked(ft_kind));

		if (mnTrainingIsCostumeInUse(ft_kind, gMNTrainingCPUPanelPort, ftParamGetCostumeCommonID(ft_kind, 0)))
			costume_id = ftParamGetCostumeCommonID(ft_kind, 1);
		else
			costume_id = ftParamGetCostumeCommonID(ft_kind, 0);
	}
	else
		costume_id = gSceneData.training_com_costume;

	gMNTrainingPanels[gMNTrainingCPUPanelPort].char_id = ft_kind;
	gMNTrainingPanels[gMNTrainingCPUPanelPort].costume_id = costume_id;
	gMNTrainingPanels[gMNTrainingCPUPanelPort].player_type = 1;
	mnTrainingInitPort(gMNTrainingCPUPanelPort);

	for (i = 0; i < 4; i++)
	{
		if ((i != gMNTrainingHumanPanelPort) && (i != gMNTrainingCPUPanelPort))
			mnTrainingResetPortToNA(i);
	}
}

// 80137BB0
void mnTrainingInitPanel(s32 port_id)
{
	s32 char_id;

	if (port_id == gMNTrainingHumanPanelPort)
		mnTrainingCreateCursor(port_id);
	else
		gMNTrainingPanels[port_id].cursor = NULL;

	mnTrainingCreateToken(port_id);
	mnTrainingCreatePanel(port_id);

	if (gMNTrainingPanels[port_id].is_selected)
	{
		char_id = gMNTrainingPanels[port_id].char_id;

		if (char_id != nFTKindNull)
			mnTrainingSpawnFighter(gMNTrainingPanels[port_id].player, port_id, char_id, gMNTrainingPanels[port_id].costume_id);
	}
}

// 80137C74
void mnTrainingInitPanels()
{
	mnTrainingInitPanel(gMNTrainingHumanPanelPort);
	mnTrainingInitPanel(gMNTrainingCPUPanelPort);
	mnTrainingUpdatePanels();
}

// 80137CAC
void mnTrainingInitCSS()
{
	s32 bar, baz;
	lbRelocSetup rldmSetup;
	f32 foo;
	s32 i;
	s32 j;

	rldmSetup.table_addr = &lLBRelocTableAddr;
	rldmSetup.table_files_num = &lLBRelocTableFilesNum;
	rldmSetup.file_heap = NULL;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buffer = (lbFileNode*) &D_ovl28_801388D8;
	rldmSetup.status_buffer_size = 0x78;
	rldmSetup.force_status_buffer = (lbFileNode*) &D_ovl28_801388A0;
	rldmSetup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl28_80137F60, 8U, gMNTrainingFilesArray, syTaskMalloc(lbRelocGetAllocSize(D_ovl28_80137F60, 8U), 0x10U));

	gcMakeGObjSPAfter(0x400U, &mnTrainingMain, 0xFU, 0x80000000U);
	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);
	efAllocInitParticleBank();
	efManagerInitEffects();
	mnTrainingLoadMatchInfo();
	ftManagerAllocFighter(1U, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < 4; i++)
		gMNTrainingPanels[i].figatree_heap = syTaskMalloc(gFTManagerFigatreeHeapSize, 0x10U);

	mnTrainingCreatePortraitViewport();
	mnTrainingCreateCursorViewport();
	mnTrainingCreateDroppedTokenViewport();
	mnTrainingCreatePanelViewport();
	mnTrainingCreatePanelDoorsViewport();
	mnTrainingCreateTypeButtonViewport();
	mnTrainingCreateFighterViewport();
	mnTrainingCreateTeamButtonViewPort();
	mnTrainingCreateHandicapCPULevelViewport();
	mnTrainingCreatePortraitBackgroundViewport();
	mnTrainingCreatePortraitWhiteBackgroundViewport();
	mnTrainingCreateReadyToFightViewport();
	mnTrainingCreateBackground();
	mnTrainingCreatePortraits();
	mnTrainingInitPanels();
	mnTrainingDrawTitleAndBack();
	mnTrainingCreateTokenAutopositionRoutine();
	mnTrainingCreateTokenShinePulseRoutine();
	mnTrainingCreateSyncShadeAndCostumeRoutine();
	mnTrainingCreateWhiteCircles();
	mnTrainingCreateReadyToFightObjects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSceneData.scene_previous != nSCKindVSMaps)
		auPlaySong(0, 0xA);

	func_800266A0_272A0();
	func_800269C0_275C0(0x212U);
}

// 8013842C
syDisplaySetup D_ovl28_8013842C = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 80138448
scRuntimeInfo D_ovl28_80138448 = {

	0x00000000, 0x8000A5E4,
	func_800A26B8, &lOverlay28ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x000055F0, 0x00000200,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x00008000,
	mnTrainingSetupDisplayList, update_contdata,
	0x00000000, 0x00000200, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnTrainingInitCSS
};

// 80137F00
void training_css_entry()
{
	D_ovl28_8013842C.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl28_8013842C);
	D_ovl28_80138448.arena_size = (u32) ((uintptr_t)&lOverlay28ArenaHi - (uintptr_t)&lOverlay28ArenaLo);
	func_800A2698(&D_ovl28_80138448);
}