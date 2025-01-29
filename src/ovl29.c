#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>

#include "character_select.h"

// Externs

extern f32 dSCSubsysDemoFighterScales[12]; // dSCSubsysDemoFighterScales

// Offsets
extern intptr_t FILE_011_START_IMAGE_OFFSET; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET; // Press Start's "Press" texture
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET; // file 0x011 image offset for
extern intptr_t FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET; // file 0x012 image offset for Break The Targets title
extern intptr_t FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET; // file 0x012 image offset for Board the Platforms title
extern intptr_t FILE_013_XBOX_IMAGE_OFFSET; // file 0x013 image offset
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET; // file 0x013 image offset for portrait bg (fire) image
extern intptr_t lMNSelectCommonWallpaperSprite; // file 0x015 image offset for background tile
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle
extern intptr_t FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_TARGETS_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET;
extern intptr_t FILE_017_APOSTROPHE_IMAGE_OFFSET;
extern intptr_t FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET;
extern intptr_t FILE_017_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_013_WHITE_SQUARE;
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET;

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
void mn1PBonusPlayersSetSceneData();
sb32 mn1PBonusPlayersCheckBonusCompleteAll();
void mn1PBonusPlayersCreateWhiteSquare(s32 port_id);
void mn1PBonusPlayersReorderCursorsOnPlacement(s32 port_id);
s32 mn1PBonusPlayersGetFighterKindFromTokenPositionEvenIfLocked();
void mn1PBonusPlayersAnnounceFighter(s32 port_id, s32 panel_id);
void mn1PBonusPlayersReorderCursorsOnPickup(s32 port_id, s32 token_id);
void mn1PBonusPlayersRedrawCursor(GObj *cursor_gobj, s32 port_id, s32 cursor_state);

// Data
// 0x80136F50
u32 dMN1PBonusPlayersFileIDs[/* */] =
{
	0x11,
	&lFTEmblemSpritesFileID,
	&lMNSelectCommonFileID,
	&lMNPlayersGameModesFileID,
	&lMNPlayersPortraitsFileID,
	0x17,
	0x18,
	&lFTStocksZakoFileID,
	0x21,
	&lIFCommonDigitsFileID,
	0x16
};

// 0x80136F7C
Lights1 dMN1PBonusPlayersLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80136F94
Lights1 dMN1PBonusPlayersLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0xEC, 0x00);

// BSS
// 0x80137640
s32 sMN1PBonusPlayersPad0x80137640[2];

// 0x80137648
MNBonusPlayerGate sMN1PBonusPlayersGate;

// 0x801376D0
s32 sMN1PBonusPlayersPad0x801376D0;

// 0x801376D4 - set but never used
s32 sMN1PBonusPlayersUnknown0x801376D4;

// 0x801376D8
s32 sMN1PBonusPlayersDevicesConnected[GMCOMMON_PLAYERS_MAX];

// 0x801376E8 - timer after selecting character before auto-starting
s32 sMN1PBonusPlayersStartWait;

// 0x801376EC
sb32 sMN1PBonusPlayersIsSelected;

// 0x801376F0
sb32 sMN1PBonusPlayersIsTeamBattle;

// 0x801376F4
s32 sMN1PBonusPlayersGameRules;

// 0x801376F8
s32 sMN1PBonusPlayersManPlayer;

// 0x801376FC
GObj *sMN1PBonusPlayersHiScoreGObj;

// 0x80137700
s32 sMN1PBonusPlayersPad0x80137700[4];

// 0x80137710
void *sMN1PBonusPlayersFigatreeHeap;

// 0x80137714 0 = BTT; 1 = BTP
s32 sMN1PBonusPlayersBonusKind;

// 0x80137718 - title and back button
GObj *sMN1PBonusPlayersTitleGObj;

// 0x8013771C - total time highscore
GObj *sMN1PBonusPlayersTotalTimeGObj;

// 0x80137720 flag indicating which bonus chars are available
u16 sMN1PBonusPlayersFighterMask;

// 0x80137724 frames elapsed on CSS
s32 sMN1PBonusPlayersTotalTimeTics;

// 0x80137728 frames to wait until exiting the CSS
s32 sMN1PBonusPlayersReturnTic;

// 0x8013772C looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 sMN1PBonusPlayersReadyBlinkWait;

// 0x80137730
s32 D_ovl29_80137730[180];

// 0x80137A00
LBFileNode sMN1PBonusPlayersForceStatusBuffer[7];

// 0x80137A38
LBFileNode sMN1PBonusPlayersStatusBuffer[120];

// 0x80137DF8
void *sMN1PBonusPlayersFiles[11];

// 0x80131B00
void mn1PBonusPlayersFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 mn1PBonusPlayersPow(s32 num, s32 pow)
{
	if (pow == 0)
		return 1;
	else
	{
		s32 result = num, i = pow;

		if (pow >= 2)
		{
			do result *= num;
			while (--i != 1);
		}

		return result;
	}
}

// 0x80131BF8
void mn1PBonusPlayersSetTextureColors(SObj* sobj, u32 *colors)
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = colors[0];
	sobj->envcolor.g = colors[1];
	sobj->envcolor.b = colors[2];
	sobj->sprite.red = colors[3];
	sobj->sprite.green = colors[4];
	sobj->sprite.blue = colors[5];
}

// 0x80131C40
s32 mn1PBonusPlayersGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mn1PBonusPlayersPow(10, numDigits - 1) != 0 ? num / mn1PBonusPlayersPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 0x80131CEC
void mn1PBonusPlayersCreateSmallerNumber(GObj *number_gobj, s32 num, f32 x, f32 y, u32 *colors, s32 maxDigits, sb32 pad)
{
	intptr_t number_offsets[10] = {

		0x068, 0x118, 0x1C8, 0x278, 0x328,
		0x3D8, 0x488, 0x538, 0x5E8, 0x698
	};
	SObj* number_sobj;
	f32 left_x = x;
	s32 place;
	s32 numDigits;
	s32 digit;

	if (num < 0) num = 0;

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[9], number_offsets[num % 10]));
	mn1PBonusPlayersSetTextureColors(number_sobj, colors);
	left_x -= 8;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mn1PBonusPlayersGetNumberOfDigits(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mn1PBonusPlayersGetNumberOfDigits(num, maxDigits)
	)
	{
		digit = (mn1PBonusPlayersPow(10, place) != 0) ? num / mn1PBonusPlayersPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[9], number_offsets[digit % 10]));
		mn1PBonusPlayersSetTextureColors(number_sobj, colors);
		left_x -= 8;
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 0x80136FD8
intptr_t dMnBonusChrOffsets[29] = {

	0x040, 0x0D0, 0x160, 0x1F0, 0x280, 0x310, 0x3A0, 0x430, 0x4C0, 0x550,
	0x5E0, 0x670, 0x700, 0x790, 0x820, 0x8B0, 0x940, 0x9D0, 0xA60, 0xAF0,
	0xB80, 0xC10, 0xCA0, 0xD30, 0xDC0, 0xE50, 0xED0, 0xF60, 0xFD0
};

// 0x8013704C
f32 dMnBonusChrWidths[29] = {

	5.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 4.0,
	4.0, 5.0, 4.0, 4.0, 5.0, 4.0, 5.0, 5.0, 5.0, 5.0, 4.0, 2.0, 7.0, 3.0
};

// 0x80131F5C - Unused?
void func_ovl29_80131F5C() {}

// 0x80131F64 - Unused?
void func_ovl29_80131F64() {}

// 0x80131F6C - Unused?
void func_ovl29_80131F6C() {}

// 0x80131F74
void mn1PBonusPlayersSelectCharWithToken(s32 port_id, s32 select_button)
{
	s32 held_port_id = sMN1PBonusPlayersGate.held_port_id,
		costume_id = ftParamGetCostumeCommonID(sMN1PBonusPlayersGate.char_id, select_button);

	ftParamInitAllParts(sMN1PBonusPlayersGate.player, costume_id, 0);

	sMN1PBonusPlayersGate.costume_id = costume_id;
	sMN1PBonusPlayersGate.is_selected = TRUE;
	sMN1PBonusPlayersGate.holder_port_id = 4;
	sMN1PBonusPlayersGate.cursor_state = mnCursorStateNotHoldingToken;

	mn1PBonusPlayersRedrawCursor(sMN1PBonusPlayersGate.cursor, port_id, sMN1PBonusPlayersGate.cursor_state);

	sMN1PBonusPlayersGate.held_port_id = -1;
	sMN1PBonusPlayersGate.unk_0x88 = TRUE;

	mn1PBonusPlayersReorderCursorsOnPlacement(held_port_id);
	mn1PBonusPlayersAnnounceFighter(port_id, held_port_id);
	mn1PBonusPlayersCreateWhiteSquare(held_port_id);
	sMN1PBonusPlayersStartWait = 0x8C;
	sMN1PBonusPlayersIsSelected = 1;
}

// 0x80132030
f32 mn1PBonusPlayersGetNextPortraitX(s32 portrait_id, f32 current_x_position)
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

// 0x80132144
sb32 mn1PBonusPlayersCheckFighterIsXBoxed(s32 fkind)
{
	return FALSE;
}

// 0x80132150
void mn1PBonusPlayersSetPortraitX(GObj *portrait_gobj)
{
	f32 new_portrait_x = mn1PBonusPlayersGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

	if (new_portrait_x != -1.0F)
	{
		SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

		if (SObjGetStruct(portrait_gobj)->next != NULL)
		{
			SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
		}
	}
}

// 0x801321CC
void mn1PBonusPlayersInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
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

// 0x80132228
void mn1PBonusPlayersAddRedXBoxToPortrait(GObj *portrait_gobj, s32 portrait_id)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x,
		y = portrait_sobj->pos.y;
	intptr_t xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 0x801322BC
sb32 mn1PBonusPlayersGetIsLocked(s32 char_id)
{
	switch (char_id)
	{
		case nFTKindNess:
			return (sMN1PBonusPlayersFighterMask & (1 << nFTKindNess)) ? FALSE : TRUE;

		case nFTKindPurin:
			return (sMN1PBonusPlayersFighterMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

		case nFTKindCaptain:
			return (sMN1PBonusPlayersFighterMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

		case nFTKindLuigi:
			return (sMN1PBonusPlayersFighterMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;
	}
	return FALSE;
}

// 0x80137180
s32 D_ovl29_80137180[] = {

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

// 0x80132388 - Unused?
void func_ovl29_80132388() {}

// 0x80132390
s32 mn1PBonusPlayersGetFighterKind(s32 portrait_id)
{
	s32 FTKind_order[12] = {

		4, 0, 2, 5, 3, 7, 11, 6, 8, 1, 9, 10
	};

	return FTKind_order[portrait_id];
}

// 0x801323E0
s32 mn1PBonusPlayersGetPortraitId(s32 fkind)
{
	s32 portrait_id_order[12] = {

		1, 9, 2, 4, 0, 3, 7, 5, 8, 10, 11, 6
	};

	return portrait_id_order[fkind];
}

// 0x80132430
void mn1PBonusPlayersRenderPortraitWithNoise(GObj *portrait_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 0x801324F0
void mn1PBonusPlayersCreateLockedPortrait(s32 portrait_id)
{
	GObj *texture_gobj;
	SObj* texture_sobj;
	intptr_t locked_portrait_offsets[12] = {

		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020538, 0x00000000,
		0x00000000, 0x0001E2E8, 0x00000000, 0x00000000, 0x000249D8, 0x00022788
	};

	// portrait bg (fire)
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mn1PBonusPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mn1PBonusPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	texture_gobj->user_data.s = portrait_id;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mn1PBonusPlayersRenderPortraitWithNoise, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mn1PBonusPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], locked_portrait_offsets[mn1PBonusPlayersGetFighterKind(portrait_id)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

	texture_gobj->user_data.s = portrait_id;
	mn1PBonusPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mn1PBonusPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	texture_sobj->sprite.attr &= ~SP_FASTCOPY;
	texture_sobj->sprite.attr |= SP_TRANSPARENT;
	texture_sobj->envcolor.r = 0x5B;
	texture_sobj->envcolor.g = 0x41;
	texture_sobj->envcolor.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.s = portrait_id;
	mn1PBonusPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x80132798
void mn1PBonusPlayersCreatePortrait(s32 portrait_id)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj *texture_sobj;
	intptr_t portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mn1PBonusPlayersGetIsLocked(mn1PBonusPlayersGetFighterKind(portrait_id)))
	{
		mn1PBonusPlayersCreateLockedPortrait(portrait_id);
	}
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x19U, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x20U, GOBJ_PRIORITY_DEFAULT, ~0);
		portrait_bg_gobj->user_data.p = portrait_id;
		gcAddGObjProcess(portrait_bg_gobj, mn1PBonusPlayersSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_bg_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		texture_sobj->pos.x = ((((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
		texture_sobj->pos.y = (((portrait_id >= 6) ? 1 : 0) * 0x2B) + 0x24;

		mn1PBonusPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mn1PBonusPlayersSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], portrait_offsets[mn1PBonusPlayersGetFighterKind(portrait_id)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
		texture_sobj->pos.x = ((((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
		texture_sobj->pos.y = (((portrait_id >= 6) ? 1 : 0) * 0x2B) + 0x24;
		portrait_gobj->user_data.p = portrait_id;

		// this conditionally draws a big red box with an X in it, but this check always fails
		if (mn1PBonusPlayersCheckFighterIsXBoxed(mn1PBonusPlayersGetFighterKind(portrait_id)))
		{
			mn1PBonusPlayersAddRedXBoxToPortrait(portrait_gobj, portrait_id);
		}
		mn1PBonusPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	}
}

// 0x80132A58
void mn1PBonusPlayersCreatePortraits()
{
	s32 portrait_id;

	for (portrait_id = 0; portrait_id < 12; portrait_id++)
		mn1PBonusPlayersCreatePortrait(portrait_id);
}

// 0x80132A98
void mn1PBonusPlayersSetNameAndLogo(GObj *name_logo_gobj, s32 port_id, s32 fkind)
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
		gcRemoveSObjAll(name_logo_gobj);

		// logo
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[1], logo_offsets[fkind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
		sobj->sprite.red = 0;
		sobj->sprite.green = 0;
		sobj->sprite.blue = 0;
		sobj->pos.x = 68.0F;
		sobj->pos.y = 144.0F;

		// name
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], name_offsets[fkind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
		sobj->pos.x = 66.0F;
		sobj->pos.y = 202.0F;
	}
}

// 0x80132C14
void mn1PBonusPlayersCreatePortraitViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x28, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132CB4
void mn1PBonusPlayersCreatePortraitBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x3C, 0x100000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132D54
void mn1PBonusPlayersCreatePortraitWhiteBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x32, 0x200000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DF4
void mn1PBonusPlayersCreatePanelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x1E, 0x10000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132E94
void mn1PBonusPlayersUpdatePanel(GObj *panel_gobj, s32 port_id)
{
	SObj* panel_sobj;
	intptr_t offsets[4] = {

		0x103F8, 0x10420, 0x10470, 0x10448
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	panel_sobj->sprite.LUT = lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], offsets[port_id]);
}

// 0x80132EEC
void mn1PBonusPlayersCreatePanel(s32 port_id)
{
	GObj *gobj;
	SObj* type_sobj;
	intptr_t type_offsets[4] = {

		0x878, 0xA58, 0xC38, 0xE18
	};
	f32 type_x_offsets[4] = {

		8.0, 5.0, 5.0, 5.0
	};

	// create panel
	gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(gobj)->pos.x = 58.0f;
	SObjGetStruct(gobj)->pos.y = 127.0f;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	sMN1PBonusPlayersGate.panel = gobj;

	type_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], type_offsets[port_id]));
	type_sobj->pos.x = type_x_offsets[port_id] + 58.0F;
	type_sobj->pos.y = 132.0F;
	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;

	mn1PBonusPlayersUpdatePanel(gobj, port_id);

	// name/logo
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	sMN1PBonusPlayersGate.name_logo = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x80137354
intptr_t dMnBonusNumberOffsets[10] = {

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

// 0x80138A5C
f32 dMnBonusNumberWidths[10] = {

	8.0, 6.0, 9.0, 8.0, 8.0,
	9.0, 8.0, 8.0, 8.0, 9.0
};

// 0x801330C4 - Unused?
void func_ovl29_801330C4() {}

// 0x801330CC
void mn1PBonusPlayersCreateBackground()
{
	GObj *background_gobj;
	SObj* background_sobj;

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[2], &lMNSelectCommonWallpaperSprite));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 0x80133170
void mn1PBonusPlayersCreateBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x4000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133210 - Unused?
void func_ovl29_80133210() {}

// 0x80133218
void mn1PBonusPlayersDrawTitleAndBack()
{
	GObj *title_gobj;
	SObj* title_sobj;
	SObj* back_sobj;
	void* unused;

	sMN1PBonusPlayersTitleGObj = title_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(title_gobj, lbCommonDrawSObjAttr, 0x22U, GOBJ_PRIORITY_DEFAULT, ~0);

	if (sMN1PBonusPlayersBonusKind == mn1PBonusPlayersTypeBTT)
	{
		title_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[3], &FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET));
	}
	else
	{
		title_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[3], &FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET));
	}

	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->pos.x = 27.0F;
	title_sobj->pos.y = 24.0F;
	title_sobj->sprite.red = 0xE3;
	title_sobj->sprite.green = 0xAC;
	title_sobj->sprite.blue = 0x04;

	if (sMN1PBonusPlayersBonusKind == mn1PBonusPlayersTypeBTT)
		func_800269C0_275C0(0x1DEU);
	else
		func_800269C0_275C0(0x1DCU);

	back_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_BACK_IMAGE_OFFSET));
	back_sobj->pos.x = 244.0F;
	back_sobj->pos.y = 23.0F;
	back_sobj->sprite.attr &= ~SP_FASTCOPY;
	back_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80133370
void mn1PBonusPlayersCreateTitleOptionsAndBackViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133410
u32 mn1PBonusPlayersGetBestTime(s32 fkind)
{
	u32 time;

	if (sMN1PBonusPlayersBonusKind == 0)
	{
		time = gSCManagerBackupData.spgame_records[fkind].bonus1_time;

		if (time >= 0x34BC0U)
			return 0x34BBFU;
		else
			return time;
	}
	else
	{
		time = gSCManagerBackupData.spgame_records[fkind].bonus2_time;

		if (time >= 0x34BC0U)
			return 0x34BBFU;
		else
			return time;
	}
}

// 0x80133488
s32 mn1PBonusPlayersGetMinutes(s32 frames)
{
	return frames / 3600;
}

// 0x8013349C
s32 mn1PBonusPlayersGetSeconds(s32 frames)
{
	return (frames % 3600) / 60;
}

// 0x801334C0
s32 mn1PBonusPlayersGetCentiseconds(s32 frames)
{
	s32 seconds = frames % 3600;
	s32 tenths = (seconds % 60) / 6 * 10;
	s32 hundredths = (seconds % 6) / 0.554F;

	return tenths + hundredths;
}

// 0x80133570
s32 mn1PBonusPlayersGetTotalMinutes()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
	{
		if (!mn1PBonusPlayersGetIsLocked(i))
			sum += mn1PBonusPlayersGetMinutes(mn1PBonusPlayersGetBestTime(i));
	}

	return sum;
}

// 0x801335DC
s32 mn1PBonusPlayersGetTotalSeconds()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
	{
		if (mn1PBonusPlayersGetIsLocked(i) == 0)
			sum += mn1PBonusPlayersGetSeconds(mn1PBonusPlayersGetBestTime(i));
	}

	return sum;
}

// 0x80133648
s32 mn1PBonusPlayersGetTotalCentiseconds()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
	{
		if (mn1PBonusPlayersGetIsLocked(i) == 0)
			sum += mn1PBonusPlayersGetCentiseconds(mn1PBonusPlayersGetBestTime(i));
	}

	return sum;
}

// 0x801336B4
void mn1PBonusPlayersDrawBestTime()
{
	GObj *best_time_gobj;
	SObj* temp_v0_2;
	SObj* temp_v0_3;
	SObj* temp_v0_4;
	u32 colors1[3] = {

		0xC5, 0xB6, 0xA7
	};
	u32 colors2[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	s32 best_time;
	s32 fkind = mn1PBonusPlayersGetFighterKindFromTokenPositionEvenIfLocked();

	if (sMN1PBonusPlayersHiScoreGObj != NULL)
	{
		gcEjectGObj(sMN1PBonusPlayersHiScoreGObj);
		sMN1PBonusPlayersHiScoreGObj = NULL;
	}

	if (fkind != nFTKindNull)
	{
		best_time = mn1PBonusPlayersGetBestTime(fkind);

		sMN1PBonusPlayersHiScoreGObj = best_time_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(best_time_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);

		temp_v0_2 = lbCommonMakeSObjForGObj(best_time_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET));
		temp_v0_2->pos.x = 177.0f;
		temp_v0_2->pos.y = 198.0f;
		temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
		temp_v0_2->sprite.attr |= SP_TRANSPARENT;
		temp_v0_2->sprite.red = 0x7E;
		temp_v0_2->sprite.green = 0x7C;
		temp_v0_2->sprite.blue = 0x77;

		mn1PBonusPlayersCreateSmallerNumber(best_time_gobj, mn1PBonusPlayersGetMinutes(best_time), 237.0F, 195.0F, colors2, 2, 1);

		temp_v0_3 = lbCommonMakeSObjForGObj(best_time_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
		temp_v0_3->pos.x = 239.0f;
		temp_v0_3->pos.y = 195.0f;
		temp_v0_3->sprite.attr &= ~SP_FASTCOPY;
		temp_v0_3->sprite.attr |= SP_TRANSPARENT;
		temp_v0_3->envcolor.r = 0;
		temp_v0_3->envcolor.g = 0;
		temp_v0_3->envcolor.b = 0;
		temp_v0_3->sprite.red = 0x7E;
		temp_v0_3->sprite.green = 0x7C;
		temp_v0_3->sprite.blue = 0x77;

		mn1PBonusPlayersCreateSmallerNumber(best_time_gobj, mn1PBonusPlayersGetSeconds(best_time), 259.0F, 195.0F, colors2, 2, 1);

		temp_v0_4 = lbCommonMakeSObjForGObj(best_time_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
		temp_v0_4->pos.x = 261.0F;
		temp_v0_4->pos.y = 195.0f;
		temp_v0_4->sprite.attr &= ~SP_FASTCOPY;
		temp_v0_4->sprite.attr |= SP_TRANSPARENT;
		temp_v0_4->envcolor.r = 0;
		temp_v0_4->envcolor.g = 0;
		temp_v0_4->envcolor.b = 0;
		temp_v0_4->sprite.red = 0x7E;
		temp_v0_4->sprite.green = 0x7C;
		temp_v0_4->sprite.blue = 0x77;

		mn1PBonusPlayersCreateSmallerNumber(best_time_gobj, mn1PBonusPlayersGetCentiseconds(best_time), 283.0F, 195.0F, colors2, 2, 1);
	}
}

// 0x80133990
u8 mn1PBonusPlayersGetBestCount(s32 fkind)
{
	if (sMN1PBonusPlayersBonusKind == 0)
		return gSCManagerBackupData.spgame_records[fkind].bonus1_task_count;
	else
		return gSCManagerBackupData.spgame_records[fkind].bonus2_task_count;
}

// 0x801339C8
void mn1PBonusPlayersDrawBestCount()
{
	GObj *count_gobj;
	SObj* label_sobj;
	SObj *foo, *bar;
	u32 colors1[3] = {

		0xC5, 0xB6, 0xA7
	};
	u32 colors2[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	s32 fkind = mn1PBonusPlayersGetFighterKindFromTokenPositionEvenIfLocked();

	if (sMN1PBonusPlayersHiScoreGObj != NULL)
	{
		gcEjectGObj(sMN1PBonusPlayersHiScoreGObj);
		sMN1PBonusPlayersHiScoreGObj = NULL;
	}

	if (fkind != nFTKindNull)
	{
		sMN1PBonusPlayersHiScoreGObj = count_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(count_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);

		if (sMN1PBonusPlayersBonusKind == 0)
		{
			label_sobj = lbCommonMakeSObjForGObj(count_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_TARGETS_LABEL_IMAGE_OFFSET));
		}
		else
		{
			label_sobj = lbCommonMakeSObjForGObj(count_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET));
		}

		label_sobj->pos.x = 235.0f;
		label_sobj->pos.y = 195.0f;
		label_sobj->sprite.attr &= ~SP_FASTCOPY;
		label_sobj->sprite.attr |= SP_TRANSPARENT;
		label_sobj->sprite.red = 0x7E;
		label_sobj->sprite.green = 0x7C;
		label_sobj->sprite.blue = 0x77;

		mn1PBonusPlayersCreateSmallerNumber(count_gobj, mn1PBonusPlayersGetBestCount(fkind), 225.0F, 194.0F, colors2, 2, 1);
	}
}

// 0x80133B7C
sb32 mn1PBonusPlayersCheckBonusComplete(s32 fkind)
{
	u8 count;

	if (sMN1PBonusPlayersBonusKind == 0)
		count = gSCManagerBackupData.spgame_records[fkind].bonus1_task_count;
	else
		count = gSCManagerBackupData.spgame_records[fkind].bonus2_task_count;

	if (count == 10)
		return TRUE;
	else
		return FALSE;
}

// 0x80133BCC
void mn1PBonusPlayersDrawHighscore()
{
	if (mn1PBonusPlayersCheckBonusComplete(mn1PBonusPlayersGetFighterKindFromTokenPositionEvenIfLocked()))
		mn1PBonusPlayersDrawBestTime();
	else
		mn1PBonusPlayersDrawBestCount();
}

// 0x80133C14 - Unused?
void func_ovl29_80133C14() {}

// 0x80133C1C
void mnDrawBonusTotalTime()
{
	GObj *best_time_gobj;
	SObj* temp_v0_2;
	SObj* temp_v0_4;
	SObj* temp_v0_3;
	u32 colors1[3] = {

		0xC5, 0xB6, 0xA7
	};
	u32 colors2[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	s32 centiseconds;
	s32 remainder;
	s32 seconds;

	sMN1PBonusPlayersTotalTimeGObj = best_time_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(best_time_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);

	temp_v0_2 = lbCommonMakeSObjForGObj(best_time_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET));
	temp_v0_2->pos.x = 142.0f;
	temp_v0_2->pos.y = 209.0f;
	temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
	temp_v0_2->sprite.attr |= SP_TRANSPARENT;
	temp_v0_2->sprite.red = 0x7E;
	temp_v0_2->sprite.green = 0x7C;
	temp_v0_2->sprite.blue = 0x77;

	centiseconds = mn1PBonusPlayersGetTotalCentiseconds();
	remainder = centiseconds / 100;
	mn1PBonusPlayersCreateSmallerNumber(best_time_gobj, centiseconds % 100, 283.0F, 206.0F, colors2, 2, 1);

	temp_v0_4 = lbCommonMakeSObjForGObj(best_time_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
	temp_v0_4->pos.x = 261.0F;
	temp_v0_4->pos.y = 206.0f;
	temp_v0_4->sprite.attr &= ~SP_FASTCOPY;
	temp_v0_4->sprite.attr |= SP_TRANSPARENT;
	temp_v0_4->envcolor.r = 0;
	temp_v0_4->envcolor.g = 0;
	temp_v0_4->envcolor.b = 0;
	temp_v0_4->sprite.red = 0x7E;
	temp_v0_4->sprite.green = 0x7C;
	temp_v0_4->sprite.blue = 0x77;

	seconds = mn1PBonusPlayersGetTotalSeconds() + remainder;
	remainder = seconds / 60;
	seconds = seconds % 60;
	mn1PBonusPlayersCreateSmallerNumber(best_time_gobj, seconds, 259.0F, 206.0F, colors2, 2, 1);

	temp_v0_3 = lbCommonMakeSObjForGObj(best_time_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
	temp_v0_3->pos.x = 239.0f;
	temp_v0_3->pos.y = 206.0f;
	temp_v0_3->sprite.attr &= ~SP_FASTCOPY;
	temp_v0_3->sprite.attr |= SP_TRANSPARENT;
	temp_v0_3->envcolor.r = 0;
	temp_v0_3->envcolor.g = 0;
	temp_v0_3->envcolor.b = 0;
	temp_v0_3->sprite.red = 0x7E;
	temp_v0_3->sprite.green = 0x7C;
	temp_v0_3->sprite.blue = 0x77;

	mn1PBonusPlayersCreateSmallerNumber(best_time_gobj, mn1PBonusPlayersGetTotalMinutes() + remainder, 237.0F, 206.0F, colors2, 3, 1);
}

// 0x80133F4C - Unused?
void func_ovl29_80133F4C() {}

// 0x80133F54 - Unused?
void func_ovl29_80133F54() {}

// 0x80133F5C
s32 mn1PBonusPlayersGetAvailableCostume(s32 fkind, s32 select_button)
{
	ftParamGetCostumeCommonID(fkind, ftParamGetCostumeCommonID(fkind, select_button));
}

// 0x80133F88
s32 mn1PBonusPlayersGetSelectedAnimation(s32 fkind)
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

// 0x80133FE8
void mn1PBonusPlayersRotateFighter(GObj *fighter_gobj)
{
	FTStruct* fp = ftGetStruct(fighter_gobj);
	s32 port_id = fp->player;

	if (sMN1PBonusPlayersGate.unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (!sMN1PBonusPlayersGate.selected_animation_started)
			{
				scSubsysFighterSetStatus(sMN1PBonusPlayersGate.player, mn1PBonusPlayersGetSelectedAnimation(sMN1PBonusPlayersGate.char_id));

				sMN1PBonusPlayersGate.selected_animation_started = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(sMN1PBonusPlayersGate.player, mn1PBonusPlayersGetSelectedAnimation(sMN1PBonusPlayersGate.char_id));

				sMN1PBonusPlayersGate.selected_animation_started = TRUE;
			}
		}
	}
	else
	{
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(2.0F);

		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CST_DTOR32(360.0F))
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= F_CST_DTOR32(360.0F);
	}
}

// 0x80134108
void mn1PBonusPlayersSpawnFighter(GObj *fighter_gobj, s32 port_id, s32 fkind)
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
			initial_y_rotation = 0.0F;

		desc.fkind = fkind;
		sMN1PBonusPlayersGate.costume_id = desc.costume = mn1PBonusPlayersGetAvailableCostume(fkind, 0);
		// desc.shade = 0;
		desc.figatree_heap = sMN1PBonusPlayersFigatreeHeap;
		desc.player = port_id;
		sMN1PBonusPlayersGate.player = fighter_gobj = ftManagerMakeFighter(&desc);

		gcAddGObjProcess(fighter_gobj, mn1PBonusPlayersRotateFighter, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = -700.0F;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysDemoFighterScales[fkind];
	}
}

// 0x80134274
void mn1PBonusPlayersCreateFighterViewport()
{
	CObj *cobj = CObjGetStruct((GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x48600, -1, 1, 1, 0, 1, 0));
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

// 0x80134364
void mn1PBonusPlayersRedrawCursor(GObj *cursor_gobj, s32 port_id, s32 cursor_state)
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

		0x6F88,
		0x76E8,
		0x8168
	};
	Vec2i type_positions[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};

	current_x = SObjGetStruct(cursor_gobj)->pos.x;
	current_y = SObjGetStruct(cursor_gobj)->pos.y;

	gcRemoveSObjAll(cursor_gobj);

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], type_offsets[port_id]));
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

// 0x80134574 - Unused?
void mn1PBonusPlayersCheckPickerRightArrowPress() {}

// 0x8013457C - Unused?
void mn1PBonusPlayersCheckPickerLeftArrowPress() {}

// 0x80134584
s32 mn1PBonusPlayersCheckBackButtonPress(GObj *cursor_gobj)
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

// 0x8013464C
s32 mn1PBonusPlayersCheckTokenPickup(GObj *cursor_gobj, s32 cursor_port_id, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(sMN1PBonusPlayersGate.token);

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

// 0x80134724
void mn1PBonusPlayersResetPort(s32 port_id)
{
	sMN1PBonusPlayersGate.is_selected = FALSE;
	sMN1PBonusPlayersGate.char_id = nFTKindNull;
	sMN1PBonusPlayersGate.holder_port_id = port_id;
	sMN1PBonusPlayersGate.held_port_id = port_id;
	sMN1PBonusPlayersGate.unk_0x88 = FALSE;

	mn1PBonusPlayersReorderCursorsOnPickup(port_id, port_id);

	sMN1PBonusPlayersGate.unk_0xA0 = FALSE;
}

// 0x8013476C
void mn1PBonusPlayersSyncFighterDisplay(s32 port_id)
{
	s32 var_v0 = 0;

	if (sMN1PBonusPlayersGate.char_id == nFTKindNull && !sMN1PBonusPlayersGate.is_selected)
	{
		sMN1PBonusPlayersGate.player->flags = 1;
		mn1PBonusPlayersDrawHighscore();
		var_v0 = 1;
	}
	if (var_v0 == 0)
	{
		mn1PBonusPlayersSpawnFighter(sMN1PBonusPlayersGate.player, port_id, sMN1PBonusPlayersGate.char_id);
		mn1PBonusPlayersDrawHighscore();
		sMN1PBonusPlayersGate.player->flags = 0;
		sMN1PBonusPlayersGate.selected_animation_started = 0;
	}
}

// 0x801347F0 - Unused?
void func_ovl29_801347F0() {}

// 0x801347F8
void mn1PBonusPlayersSyncNameAndLogo(s32 port_id)
{
	if (sMN1PBonusPlayersGate.char_id == nFTKindNull && !sMN1PBonusPlayersGate.is_selected)
	{
		sMN1PBonusPlayersGate.name_logo->flags = 1;
	}
	else
	{
		sMN1PBonusPlayersGate.name_logo->flags = 0;
		mn1PBonusPlayersSetNameAndLogo(sMN1PBonusPlayersGate.name_logo, port_id, sMN1PBonusPlayersGate.char_id);
	}
}

// 0x80134858
void mn1PBonusPlayersRemoveWhiteSquare(s32 port_id)
{
	GObj *white_square_gobj;

	white_square_gobj = sMN1PBonusPlayersGate.white_square;
	if (white_square_gobj != NULL)
	{
		sMN1PBonusPlayersGate.white_square = NULL;
		gcEjectGObj(white_square_gobj);
	}
}

// 0x80134890
void mn1PBonusPlayersFlashWhiteSquare(GObj *white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0) mn1PBonusPlayersRemoveWhiteSquare(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x8013491C
void mn1PBonusPlayersCreateWhiteSquare(s32 port_id)
{
	GObj *white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait_id = mn1PBonusPlayersGetPortraitId(sMN1PBonusPlayersGate.char_id);

	mn1PBonusPlayersRemoveWhiteSquare(port_id);

	sMN1PBonusPlayersGate.white_square = white_square_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U);
	gcAddGObjDisplay(white_square_gobj, lbCommonDrawSObjAttr, 0x21U, GOBJ_PRIORITY_DEFAULT, ~0);
	white_square_gobj->user_data.p = port_id;
	gcAddGObjProcess(white_square_gobj, mn1PBonusPlayersFlashWhiteSquare, 0, 1);

	white_square_sobj = lbCommonMakeSObjForGObj(white_square_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[4], &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
	white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 0x80134A50
void mn1PBonusPlayersAnnounceFighter(s32 port_id, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (sMN1PBonusPlayersGate.p_sfx != NULL)
	{
		if ((sMN1PBonusPlayersGate.p_sfx->sfx_id != 0) && (sMN1PBonusPlayersGate.p_sfx->sfx_id == sMN1PBonusPlayersGate.sfx_id))
		{
			func_80026738_27338(sMN1PBonusPlayersGate.p_sfx);
		}
	}

	func_800269C0_275C0(0x79U);

	sMN1PBonusPlayersGate.p_sfx = func_800269C0_275C0(announcer_fgms[sMN1PBonusPlayersGate.char_id]);

	if (sMN1PBonusPlayersGate.p_sfx != NULL)
	{
		sMN1PBonusPlayersGate.sfx_id = sMN1PBonusPlayersGate.p_sfx->sfx_id;
	}
}

// 0x80134B1C - Unused?
void func_ovl29_80134B1C() {}

// 0x80134B24
sb32 mn1PBonusPlayersSelectChar(GObj *cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
	if (sMN1PBonusPlayersGate.cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (sMN1PBonusPlayersGate.char_id != nFTKindNull)
	{
		mn1PBonusPlayersSelectCharWithToken(port_id, select_button);
		sMN1PBonusPlayersGate.min_frames_elapsed_until_recall = sMN1PBonusPlayersTotalTimeTics + 0x1E;
		func_800269C0_275C0(0x9FU);
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 0x80134BB0
void mn1PBonusPlayersReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
	// display orders for cursors on token pickup
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};

	gcMoveGObjDL(sMN1PBonusPlayersGate.token, 0x1EU, diplay_orders[port_id] + 1);
}

// 0x80134C1C
void mn1PBonusPlayersReorderCursorsOnPlacement(s32 port_id)
{
	// display orders for cursors not holding tokens on token placement
	s32 unheld_orders[4] = {

		3, 2, 1, 0
	};

	gcMoveGObjDL(sMN1PBonusPlayersGate.token, 0x1F, unheld_orders[port_id]);
}

// 0x80134C80
void mn1PBonusPlayersSetCursorCoordinatesFromToken(s32 port_id)
{
	sMN1PBonusPlayersGate.cursor_pickup_x = SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.x - 11.0f;
	sMN1PBonusPlayersGate.cursor_pickup_y = SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.y - -14.0f;
}

// 0x80134CC4
void mn1PBonusPlayersHandleCursorPickup(s32 port_id)
{
	sMN1PBonusPlayersGate.holder_port_id = port_id;
	sMN1PBonusPlayersGate.is_selected = FALSE;
	sMN1PBonusPlayersGate.cursor_state = mnCursorStateHoldingToken;
	sMN1PBonusPlayersGate.held_port_id = port_id;
	sMN1PBonusPlayersGate.unk_0x88 = FALSE;

	mn1PBonusPlayersSyncFighterDisplay(port_id);
	mn1PBonusPlayersReorderCursorsOnPickup(port_id, port_id);
	mn1PBonusPlayersSetCursorCoordinatesFromToken(port_id);
	mn1PBonusPlayersRedrawCursor(sMN1PBonusPlayersGate.cursor, port_id, sMN1PBonusPlayersGate.cursor_state);

	sMN1PBonusPlayersGate.unk_0xA0 = TRUE;

	func_800269C0_275C0(0x7FU);

	mn1PBonusPlayersRemoveWhiteSquare(port_id);
	mn1PBonusPlayersSyncNameAndLogo(port_id);
}

// 0x80134D54
sb32 mn1PBonusPlayersCheckAndHandleTokenPickup(GObj *cursor_gobj, s32 port_id)
{
	MNBonusPlayerGate* panel_info = &sMN1PBonusPlayersGate;

	if ((sMN1PBonusPlayersTotalTimeTics < sMN1PBonusPlayersGate.min_frames_elapsed_until_recall))
		return FALSE;
	else if (sMN1PBonusPlayersGate.cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	if ((sMN1PBonusPlayersGate.holder_port_id == 4) && (mn1PBonusPlayersCheckTokenPickup(cursor_gobj, port_id, port_id)))
	{
		sMN1PBonusPlayersGate.holder_port_id = port_id;
		sMN1PBonusPlayersGate.is_selected = FALSE;
		sMN1PBonusPlayersGate.cursor_state = mnCursorStateHoldingToken;
		panel_info->held_port_id = port_id;
		sMN1PBonusPlayersGate.unk_0x88 = FALSE;

		mn1PBonusPlayersSyncFighterDisplay(port_id);
		mn1PBonusPlayersReorderCursorsOnPickup(port_id, port_id);
		mn1PBonusPlayersSetCursorCoordinatesFromToken(port_id);
		mn1PBonusPlayersRedrawCursor(cursor_gobj, port_id, sMN1PBonusPlayersGate.cursor_state);

		sMN1PBonusPlayersGate.unk_0xA0 = TRUE;

		func_800269C0_275C0(0x7FU);
		mn1PBonusPlayersRemoveWhiteSquare(port_id);
		mn1PBonusPlayersSyncNameAndLogo(port_id);

		return TRUE;
	}

	return FALSE;
}

// 0x80134E50
s32 mn1PBonusPlayersGetFighterKindFromTokenPositionEvenIfLocked()
{
	SObj* token_sobj = SObjGetStruct(sMN1PBonusPlayersGate.token);
	s32 current_y = (s32) token_sobj->pos.x + 13;
	s32 current_x = (s32) token_sobj->pos.y + 12;
	s32 char_id;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mn1PBonusPlayersGetFighterKind((s32) (current_y - 25) / 45);
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mn1PBonusPlayersGetFighterKind(((s32) (current_y - 25) / 45) + 6);
	}
	return nFTKindNull;
}

// 0x80134F6C
s32 mn1PBonusPlayersGetFighterKindFromTokenPosition(s32 port_id)
{
	SObj* token_sobj = SObjGetStruct(sMN1PBonusPlayersGate.token);
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
			char_id = mn1PBonusPlayersGetFighterKind((s32) (current_y - 25) / 45);

			if ((mn1PBonusPlayersCheckFighterIsXBoxed(char_id)) || (mn1PBonusPlayersGetIsLocked(char_id)))
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
			char_id = mn1PBonusPlayersGetFighterKind(((s32) (current_y - 25) / 45) + 6);

			if ((mn1PBonusPlayersCheckFighterIsXBoxed(char_id)) || (mn1PBonusPlayersGetIsLocked(char_id)))
				return nFTKindNull;

			return char_id;
		}
	}
	return nFTKindNull;
}

// 0x801350E4
void mn1PBonusPlayersAutoPositionCursor(GObj *cursor_gobj, s32 port_id)
{
	SYController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (sMN1PBonusPlayersGate.unk_0xA0)
	{
		delta = (sMN1PBonusPlayersGate.cursor_pickup_x - SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.x = sMN1PBonusPlayersGate.cursor_pickup_x;
		else
			SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.x += delta;

		delta = (sMN1PBonusPlayersGate.cursor_pickup_y - SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.y = sMN1PBonusPlayersGate.cursor_pickup_y;
		else
			SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.y += delta;

		if ((SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.x == sMN1PBonusPlayersGate.cursor_pickup_x) && (SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.y == sMN1PBonusPlayersGate.cursor_pickup_y))
		{
			sMN1PBonusPlayersGate.unk_0xA0 = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[sMN1PBonusPlayersGate.cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[sMN1PBonusPlayersGate.cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (!sMN1PBonusPlayersGate.is_recalling)
	{
		controller = &gSYControllerDevices[port_id];
		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[sMN1PBonusPlayersGate.cursor_state].x;
			}
		}

		controller = &gSYControllerDevices[port_id];
		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[sMN1PBonusPlayersGate.cursor_state].y;
			}
		}
	}
}

// 0x8013545C
void mn1PBonusPlayersSyncCursorDisplay(GObj *cursor_gobj, s32 port_id)
{
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (sMN1PBonusPlayersGate.cursor_state != mnCursorStatePointer)
		{
			mn1PBonusPlayersRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
			sMN1PBonusPlayersGate.cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (sMN1PBonusPlayersGate.held_port_id == -1)
		{
			if (sMN1PBonusPlayersGate.cursor_state != mnCursorStateNotHoldingToken)
			{
				mn1PBonusPlayersRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				sMN1PBonusPlayersGate.cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (sMN1PBonusPlayersGate.cursor_state != mnCursorStateHoldingToken)
			{
				mn1PBonusPlayersRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				sMN1PBonusPlayersGate.cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if ((sMN1PBonusPlayersGate.cursor_state == mnCursorStatePointer) && (sMN1PBonusPlayersGate.is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((sMN1PBonusPlayersGate.is_selected == 1) && (mn1PBonusPlayersCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mn1PBonusPlayersRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				sMN1PBonusPlayersGate.cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 0x801355E0
void mn1PBonusPlayersSyncShadeAndCostume(s32 arg0, s32 select_button)
{
	s32 costume_id = ftParamGetCostumeCommonID(sMN1PBonusPlayersGate.char_id, select_button);

	ftParamInitAllParts(sMN1PBonusPlayersGate.player, costume_id, 0);

	sMN1PBonusPlayersGate.costume_id = costume_id;

	func_800269C0_275C0(0xA4U);
}

// 0x80135634
sb32 mn1PBonusPlayersIsHumanWithCharacterSelected(s32 arg0)
{
	if (sMN1PBonusPlayersGate.is_selected)
		return TRUE;
	else
		return FALSE;
}

// 0x8013565C
void mn1PBonusPlayersRecallToken(s32 port_id)
{
	sMN1PBonusPlayersGate.unk_0x88 = FALSE;
	sMN1PBonusPlayersGate.is_selected = FALSE;
	sMN1PBonusPlayersGate.is_recalling = TRUE;
	sMN1PBonusPlayersGate.recall_frame_counter = 0;
	sMN1PBonusPlayersGate.recall_start_x = SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.x;
	sMN1PBonusPlayersGate.recall_start_y = SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.y;

	sMN1PBonusPlayersGate.recall_end_x = SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.x + 20.0F;

	if (sMN1PBonusPlayersGate.recall_end_x > 280.0F)
		sMN1PBonusPlayersGate.recall_end_x = 280.0F;

	sMN1PBonusPlayersGate.recall_end_y = SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.y + -15.0F;

	if (sMN1PBonusPlayersGate.recall_end_y < 10.0F)
		sMN1PBonusPlayersGate.recall_end_y = 10.0F;

	if (sMN1PBonusPlayersGate.recall_end_y < sMN1PBonusPlayersGate.recall_start_y)
		sMN1PBonusPlayersGate.recall_mid_y = sMN1PBonusPlayersGate.recall_end_y - 20.0F;
	else
		sMN1PBonusPlayersGate.recall_mid_y = sMN1PBonusPlayersGate.recall_start_y - 20.0F;
}

// 0x80135740
void mn1PBonusPlayersGoBackTo1PMenu()
{
	if (sMN1PBonusPlayersBonusKind == 0)
		gSCManagerSceneData.scene_prev = nSCKind1PBonus1Players;
	else
		gSCManagerSceneData.scene_prev = nSCKind1PBonus2Players;

	gSCManagerSceneData.scene_curr = nSCKind1PMode;

	mn1PBonusPlayersSetSceneData();
	syAudioStopSongAll();
	func_800266A0_272A0();
	syTaskmanSetLoadScene();
}

// 0x801357AC
void mn1PBonusPlayersExitIfBButtonPressed(s32 port_id)
{
	SYController* controller = &gSYControllerDevices[port_id];

	if ((sMN1PBonusPlayersTotalTimeTics >= 10) && (controller->button_tap & B_BUTTON))
		mn1PBonusPlayersGoBackTo1PMenu();
}

// 0x80135800
sb32 mn1PBonusPlayersCheckTitlePress(GObj *cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 27.0F) && (current_x <= 207.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 14.0F) && (current_y <= 35.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x801358C4
void mn1PBonusPlayersHandleTitlePress()
{
	if (sMN1PBonusPlayersBonusKind == 0)
		sMN1PBonusPlayersBonusKind = 1;
	else
		sMN1PBonusPlayersBonusKind = 0;

	gcEjectGObj(sMN1PBonusPlayersTitleGObj);
	mn1PBonusPlayersDrawTitleAndBack();
	mn1PBonusPlayersDrawHighscore();

	if (sMN1PBonusPlayersTotalTimeGObj != NULL)
	{
		gcEjectGObj(sMN1PBonusPlayersTotalTimeGObj);
		sMN1PBonusPlayersTotalTimeGObj = NULL;
	}

	if (mn1PBonusPlayersCheckBonusCompleteAll())
		mnDrawBonusTotalTime();
}

// 0x80135950
void mn1PBonusPlayersHandleButtonPresses(GObj *cursor_gobj)
{
	s32 port_id = cursor_gobj->user_data.s;
	SYController* controller = &gSYControllerDevices[port_id];
	MNBonusPlayerGate* panel_info;
	s32 foo, bar, baz;

	mn1PBonusPlayersAutoPositionCursor(cursor_gobj, port_id);

	if ((controller->button_tap & A_BUTTON)
		&& (!mn1PBonusPlayersSelectChar(cursor_gobj, port_id, sMN1PBonusPlayersGate.held_port_id, 0))
		&& (!mn1PBonusPlayersCheckAndHandleTokenPickup(cursor_gobj, port_id)))
	{
		if (mn1PBonusPlayersCheckTitlePress(cursor_gobj))
			mn1PBonusPlayersHandleTitlePress();
		else if (mn1PBonusPlayersCheckBackButtonPress(cursor_gobj))
		{
			mn1PBonusPlayersGoBackTo1PMenu();
			func_800269C0_275C0(0xA4U);
		}
	}

	if ((controller->button_tap & U_CBUTTONS)
		&& (!mn1PBonusPlayersSelectChar(cursor_gobj, port_id, sMN1PBonusPlayersGate.held_port_id, 0))
		&& (sMN1PBonusPlayersGate.unk_0x88))
	{
		mn1PBonusPlayersSyncShadeAndCostume(port_id, 0);
	}
	if ((controller->button_tap & R_CBUTTONS)
		&& (!mn1PBonusPlayersSelectChar(cursor_gobj, port_id, sMN1PBonusPlayersGate.held_port_id, 1))
		&& (sMN1PBonusPlayersGate.unk_0x88))
	{
		mn1PBonusPlayersSyncShadeAndCostume(port_id, 1);
	}
	if ((controller->button_tap & D_CBUTTONS)
		&& (!mn1PBonusPlayersSelectChar(cursor_gobj, port_id, sMN1PBonusPlayersGate.held_port_id, 2))
		&& (sMN1PBonusPlayersGate.unk_0x88))
	{
		mn1PBonusPlayersSyncShadeAndCostume(port_id, 2);
	}
	if ((controller->button_tap & L_CBUTTONS)
		&& (!mn1PBonusPlayersSelectChar(cursor_gobj, port_id, sMN1PBonusPlayersGate.held_port_id, 3))
		&& (sMN1PBonusPlayersGate.unk_0x88))
	{
		mn1PBonusPlayersSyncShadeAndCostume(port_id, 3);
	}

	if ((controller->button_tap & B_BUTTON) && (mn1PBonusPlayersIsHumanWithCharacterSelected(port_id)))
	{
		mn1PBonusPlayersRecallToken(port_id);
	}

	if (!sMN1PBonusPlayersGate.is_recalling)
		mn1PBonusPlayersExitIfBButtonPressed(port_id);
	if (!sMN1PBonusPlayersGate.is_recalling)
		mn1PBonusPlayersSyncCursorDisplay(cursor_gobj, port_id);
}

// 0x801374AC
s32 D_ovl29_801374AC[] = {

	0x00009048,
	0x00009B28,
	0x0000A608,
	0x0000B0E8,
	0x0000BBC8
};

// 0x80135BA4 - Unused?
void func_ovl29_80135BA4() {}

// 0x80135BAC - Unused?
void func_ovl29_80135BAC() {}

// 0x80135BB4
void mn1PBonusPlayersMoveToken(s32 port_id)
{
	SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.x += sMN1PBonusPlayersGate.token_x_velocity;
	SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.y += sMN1PBonusPlayersGate.token_y_velocity;
}

// 0x80135BF4
void mn1PBonusPlayersSyncTokenAndFighter(GObj *token_gobj)
{
	s32 fkind;
	s32 port_id = token_gobj->user_data.s;

	if ((sMN1PBonusPlayersGate.cursor_state != mnCursorStatePointer)
		|| (sMN1PBonusPlayersGate.is_selected == TRUE)
		|| (sMN1PBonusPlayersGate.is_recalling == TRUE))
	{
		token_gobj->flags = 0;
	}
	else
		token_gobj->flags = 1;

	if ((!sMN1PBonusPlayersGate.is_selected)
		&& (sMN1PBonusPlayersGate.holder_port_id != 4))
	{
		if (!sMN1PBonusPlayersGate.unk_0xA0)
		{
			SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.x + 11.0F);
			SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(sMN1PBonusPlayersGate.cursor)->pos.y + -14.0F);
		}
	}
	else {
		mn1PBonusPlayersMoveToken(port_id);
	}

	fkind = mn1PBonusPlayersGetFighterKindFromTokenPosition(port_id);

	if ((!sMN1PBonusPlayersGate.is_selected)
		&& (fkind != sMN1PBonusPlayersGate.char_id))
	{
		sMN1PBonusPlayersGate.char_id = fkind;

		mn1PBonusPlayersSyncFighterDisplay(port_id);
		mn1PBonusPlayersSyncNameAndLogo(port_id);
	}
	mn1PBonusPlayersDrawHighscore();
}

// 0x80135D08
void mn1PBonusPlayersCreateReadyToFightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135DA8
void mn1PBonusPlayersCreateCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135E48
void mn1PBonusPlayersCreateDroppedTokenViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xF, GOBJ_PRIORITY_DEFAULT, ~0, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135EE8
void mn1PBonusPlayersCreateCursor(s32 port_id)
{
	GObj *cursor_gobj;
	s32 unused;
	intptr_t cursor_type_offsets[4] = {

		0x8268,
		0x8368,
		0x8468,
		0x8568
	};
	s32 cursor_starting_display_orders[4] = {

		6, 4, 2, 0
	};

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x1E, cursor_starting_display_orders[port_id], -1, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mn1PBonusPlayersHandleButtonPresses, 2);

	cursor_gobj->user_data.s = port_id;
	sMN1PBonusPlayersGate.cursor = cursor_gobj;
	SObjGetStruct(cursor_gobj)->pos.x = 80.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mn1PBonusPlayersRedrawCursor(cursor_gobj, port_id, 0);
	sMN1PBonusPlayersGate.is_selected = FALSE;
}

// 0x80136034
void mn1PBonusPlayersCreateToken(s32 port_id)
{
	GObj *token_gobj;
	MNBonusPlayerGate* panel_info;
	intptr_t offsets_no_cpu[4] = {

		0x9048,
		0x9B28,
		0xA608,
		0xB0E8
	};
	// display orders for tokens on initial load
	s32 orders1[4] = {

		3, 2, 1, 0
	};

	token_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, lbCommonDrawSObjAttr, 0x1F, orders1[port_id], -1, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], offsets_no_cpu[port_id]), 1, mn1PBonusPlayersSyncTokenAndFighter, 1);

	token_gobj->user_data.s = port_id;
	sMN1PBonusPlayersGate.token = token_gobj;

	SObjGetStruct(token_gobj)->pos.x = 51.0F;
	SObjGetStruct(token_gobj)->pos.y = 161.0F;
	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (sMN1PBonusPlayersDevicesConnected[port_id] != -1)
		sMN1PBonusPlayersGate.holder_port_id = port_id;
	else
		sMN1PBonusPlayersGate.holder_port_id = 4;
}

// 0x801361A4 - Unused?
void func_ovl29_801361A4() {}

// 0x801361AC
void mn1PBonusPlayersAutopositionTokenFromPortraitEdges(GObj *gobj)
{
	s32 portrait_id = mn1PBonusPlayersGetPortraitId(sMN1PBonusPlayersGate.char_id);
	f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
	f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.x + sMN1PBonusPlayersGate.token_x_velocity + 13.0F;
	f32 new_pos_y = SObjGetStruct(sMN1PBonusPlayersGate.token)->pos.y + sMN1PBonusPlayersGate.token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
	{
		sMN1PBonusPlayersGate.token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	}
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
	{
		sMN1PBonusPlayersGate.token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
	if (new_pos_y < (portrait_edge_y + 5.0F))
	{
		sMN1PBonusPlayersGate.token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	}
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
	{
		sMN1PBonusPlayersGate.token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
}

// 0x8013635C
void mn1PBonusPlayersAutopositionPlacedToken(s32 port_id)
{
	mn1PBonusPlayersAutopositionTokenFromPortraitEdges(port_id);
}

// 0x8013637C
void mn1PBonusPlayersAutopositionRecalledToken(s32 port_id)
{
	f32 new_y_velocity, new_x_velocity;

	sMN1PBonusPlayersGate.recall_frame_counter += 1;

	if (sMN1PBonusPlayersGate.recall_frame_counter < 11)
	{
		new_x_velocity = (sMN1PBonusPlayersGate.recall_end_x - sMN1PBonusPlayersGate.recall_start_x) / 10.0F;

		if (sMN1PBonusPlayersGate.recall_frame_counter < 6)
		{
			new_y_velocity = (sMN1PBonusPlayersGate.recall_mid_y - sMN1PBonusPlayersGate.recall_start_y) / 5.0F;
		}
		else
		{
			new_y_velocity = (sMN1PBonusPlayersGate.recall_end_y - sMN1PBonusPlayersGate.recall_mid_y) / 5.0F;
		}

		sMN1PBonusPlayersGate.token_x_velocity = new_x_velocity;
		sMN1PBonusPlayersGate.token_y_velocity = new_y_velocity;
	}
	else if (sMN1PBonusPlayersGate.recall_frame_counter == 11)
	{
		mn1PBonusPlayersHandleCursorPickup(port_id);

		sMN1PBonusPlayersGate.token_x_velocity = 0.0F;
		sMN1PBonusPlayersGate.token_y_velocity = 0.0F;
	}

	if (sMN1PBonusPlayersGate.recall_frame_counter == 30)
		sMN1PBonusPlayersGate.is_recalling = FALSE;
}

// 0x80136450
void mn1PBonusPlayersAutopositionToken(GObj *gobj)
{
	if (sMN1PBonusPlayersGate.is_recalling != FALSE)
	{
		mn1PBonusPlayersAutopositionRecalledToken(sMN1PBonusPlayersManPlayer);
	}
	if (sMN1PBonusPlayersGate.is_selected != FALSE)
	{
		mn1PBonusPlayersAutopositionPlacedToken(0);
	}
}

// 0x8013649C
void mn1PBonusPlayersCreateTokenAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x18U, 0x80000000U), mn1PBonusPlayersAutopositionToken, 1, 1);
}

// 0x801364E0
void mn1PBonusPlayersSyncWhiteCircleSizeAndDisplay(GObj *white_circle_gobj)
{
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((sMN1PBonusPlayersGate.unk_0x88 == 0) && (sMN1PBonusPlayersGate.char_id != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[sMN1PBonusPlayersGate.char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMN1PBonusPlayersGate.char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMN1PBonusPlayersGate.char_id];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x801365B8
void mn1PBonusPlayersCreateWhiteCircles()
{
	GObj *white_circle_gobj;

	white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

	gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[10], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

	gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

	gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[10], &FILE_016_WHITE_CIRCLE_OFFSET_1));

	gcAddGObjProcess(white_circle_gobj, mn1PBonusPlayersSyncWhiteCircleSizeAndDisplay, 1, 1);

	gcPlayAnimAll(white_circle_gobj);

	DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -700.0f;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -850.0f;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
}

// 0x80136698
void mn1PBonusPlayersBlinkIfReadyToFight(GObj *gobj)
{
	if (sMN1PBonusPlayersIsSelected)
	{
		sMN1PBonusPlayersReadyBlinkWait += 1;

		if (sMN1PBonusPlayersReadyBlinkWait == 0x28)
			sMN1PBonusPlayersReadyBlinkWait = 0;

		gobj->flags = (sMN1PBonusPlayersReadyBlinkWait < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		sMN1PBonusPlayersReadyBlinkWait = 0;
	}
}

// 0x80136704
void mn1PBonusPlayersCreateReadyToFightObjects()
{
	GObj *gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PBonusPlayersBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
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
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mn1PBonusPlayersBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMN1PBonusPlayersFiles[0], &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 0x80136980 - Unused?
void func_ovl29_80136980(void)
{
	return;
}

// 0x80136988 - Unused?
void func_ovl29_80136988(void)
{
	return;
}

// 0x80136990 - Unused?
void func_ovl29_80136990(void)
{
	return;
}

// 0x80136998
void mn1PBonusPlayersSetSceneData(void)
{
	gSCManagerSceneData.player = sMN1PBonusPlayersManPlayer;
	gSCManagerSceneData.bonus_fkind = sMN1PBonusPlayersGate.char_id;
	gSCManagerSceneData.bonus_costume = sMN1PBonusPlayersGate.costume_id;
}

// 0x801369C8 - Unused?
void func_ovl29_801369C8(void)
{
	return;
}

// 0x801369D0
void mn1PBonusPlayersProcRun(GObj *gobj)
{
	sMN1PBonusPlayersTotalTimeTics++;

	if (sMN1PBonusPlayersTotalTimeTics == sMN1PBonusPlayersReturnTic)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		mn1PBonusPlayersSetSceneData();
		syTaskmanSetLoadScene();

		return;
	}
	if (scSubsysControllerCheckNoInputAll() == FALSE)
	{
		sMN1PBonusPlayersReturnTic = sMN1PBonusPlayersTotalTimeTics + I_MIN_TO_TICS(5);
	}
	if ((sMN1PBonusPlayersIsSelected != FALSE) && (sMN1PBonusPlayersGate.unk_0x88 == FALSE))
	{
		sMN1PBonusPlayersIsSelected = FALSE;
	}
	if ((sMN1PBonusPlayersIsSelected != FALSE) && ((--sMN1PBonusPlayersStartWait == 0) || (gSYControllerDevices[sMN1PBonusPlayersManPlayer].button_tap & START_BUTTON)))
	{
		if (sMN1PBonusPlayersBonusKind == 0)
		{
			gSCManagerSceneData.scene_prev = nSCKind1PBonus1Players;
		}
		else gSCManagerSceneData.scene_prev = nSCKind1PBonus2Players;

		gSCManagerSceneData.scene_curr = nSCKind1PBonusStage;

		mn1PBonusPlayersSetSceneData();
		syTaskmanSetLoadScene();
	}
}

// 0x80136B14 - Unused?
void func_ovl29_80136B14(void)
{
	return;
}

// 0x80136B1C - Unused?
void func_ovl29_80136B1C(void)
{
	return;
}

// 0x80136B24
void mn1PBonusPlayersInitPlayer(void)
{
	sMN1PBonusPlayersGate.held_port_id = -1;
	sMN1PBonusPlayersGate.white_square = NULL;
	sMN1PBonusPlayersGate.p_sfx = NULL;
	sMN1PBonusPlayersGate.sfx_id = 0;
	sMN1PBonusPlayersGate.is_selected = FALSE;
	sMN1PBonusPlayersGate.is_recalling = FALSE;
	sMN1PBonusPlayersGate.char_id = nFTKindNull;
}

// 0x80136B54
void mn1PBonusPlayersInitVars(void)
{
	sMN1PBonusPlayersTotalTimeTics = 0;
	sMN1PBonusPlayersReturnTic = sMN1PBonusPlayersTotalTimeTics + I_MIN_TO_TICS(5);
	sMN1PBonusPlayersUnknown0x801376D4 = 5;
	sMN1PBonusPlayersIsSelected = FALSE;
	sMN1PBonusPlayersManPlayer = gSCManagerSceneData.player;
	sMN1PBonusPlayersTotalTimeGObj = NULL;
	sMN1PBonusPlayersIsTeamBattle = gSCManager1PGameBattleState.is_team_battle;
	sMN1PBonusPlayersGameRules = gSCManager1PGameBattleState.game_rules;

	mn1PBonusPlayersInitPlayer();

	sMN1PBonusPlayersGate.min_frames_elapsed_until_recall = 0;
	sMN1PBonusPlayersFighterMask = gSCManagerBackupData.fighter_mask;

	if (gSCManagerSceneData.scene_curr == nSCKind1PBonus1Players)
	{
		sMN1PBonusPlayersBonusKind = 0;
	}
	else sMN1PBonusPlayersBonusKind = 1;
}

// 0x80136C14
void mn1PBonusPlayersInitPanel(s32 player)
{
	if (sMN1PBonusPlayersDevicesConnected[player] != -1)
	{
		mn1PBonusPlayersCreateCursor(player);
	}
	else sMN1PBonusPlayersGate.cursor = NULL;

	mn1PBonusPlayersCreateToken(player);
	mn1PBonusPlayersCreatePanel(player);
	mn1PBonusPlayersResetPort(player);
}

// 0x80136C80 - Unused?
void func_ovl29_80136C80(void)
{
	return;
}

// 0x80136C88
sb32 mn1PBonusPlayersCheckBonusCompleteAll(void)
{
	s32 i;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		if (mn1PBonusPlayersCheckBonusComplete(i) == FALSE)
		{
			return FALSE;
		}
	}
	return TRUE;
}

// 0x80136CD8
void mn1PBonusPlayersFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;
	s32 i, j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMN1PBonusPlayersStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMN1PBonusPlayersStatusBuffer);
	rl_setup.force_status_buffer = sMN1PBonusPlayersForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMN1PBonusPlayersForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMN1PBonusPlayersFileIDs,
		ARRAY_COUNT(dMN1PBonusPlayersFileIDs),
		sMN1PBonusPlayersFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMN1PBonusPlayersFileIDs,
				ARRAY_COUNT(dMN1PBonusPlayersFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(nGCCommonKindPlayerSelect, mn1PBonusPlayersProcRun, nGCCommonLinkIDPlayerSelect, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(16, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
	efParticleInitAll();
	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		ftManagerSetupFilesAllKind(i);
	}
	sMN1PBonusPlayersFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mn1PBonusPlayersInitVars();
	mn1PBonusPlayersCreatePortraitViewport();
	mn1PBonusPlayersCreateCursorViewport();
	mn1PBonusPlayersCreateDroppedTokenViewport();
	mn1PBonusPlayersCreatePanelViewport();
	mn1PBonusPlayersCreateFighterViewport();
	mn1PBonusPlayersCreatePortraitBackgroundViewport();
	mn1PBonusPlayersCreatePortraitWhiteBackgroundViewport();
	mn1PBonusPlayersCreateBackgroundViewport();
	mn1PBonusPlayersCreateTitleOptionsAndBackViewport();
	mn1PBonusPlayersCreateReadyToFightViewport();
	mn1PBonusPlayersCreateBackground();
	mn1PBonusPlayersCreatePortraits();
	mn1PBonusPlayersInitPanel(sMN1PBonusPlayersManPlayer);
	mn1PBonusPlayersDrawTitleAndBack();

	if (mn1PBonusPlayersCheckBonusCompleteAll())
	{
		mnDrawBonusTotalTime();
	}
	mn1PBonusPlayersCreateTokenAutopositionRoutine();
	mn1PBonusPlayersCreateWhiteCircles();
	mn1PBonusPlayersCreateReadyToFightObjects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSCManagerSceneData.scene_prev != nSCKindMaps)
	{
		syAudioPlaySong(0, nSYAudioBGMBattleSelect);
	}
}

// 0x80137530
SYVideoSetup dMN1PBonusPlayersVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8013754C
SYTaskmanSetup dMN1PBonusPlayersTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gcDrawAll,        			// Frame draw function
        &ovl29_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2375,         // Display List Buffer 0 Size
        sizeof(Gfx) * 64,          	// Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0x8000,                     // RDP Output Buffer Size
        mn1PBonusPlayersFuncLights, // Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 32,              	// Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of XObjs
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    mn1PBonusPlayersFuncStart      	// Task start function
};

// 0x80136EF4
void mn1PBonusPlayersStartScene(void)
{
	dMN1PBonusPlayersVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMN1PBonusPlayersVideoSetup);

	dMN1PBonusPlayersTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl29_BSS_END);
	syTaskmanRun(&dMN1PBonusPlayersTaskmanSetup);
}
