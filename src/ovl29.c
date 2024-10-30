
#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>

#include "character_select.h"

// Externs
extern SCBattleState D_800A4B18;
extern f32 menu_zoom[12]; // dSCSubsysFighterScales
extern uintptr_t D_NF_800A5240;
extern intptr_t lOverlay29ArenaLo;  // 0x80137E30
extern intptr_t lOverlay29ArenaHi;  // 0x803903E0
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
extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET; // file 0x015 image offset for background tile
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

extern void scSubsysFighterSetLightParams(f32 light_angle_x, f32 light_angle_y, u8 r, u8 g, u8 b, u8 a);


extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);



// Forward declarations
void mnBonusSaveMatchInfo();
sb32 mnBonusAreAllCompleted();
void mnBonusCreateWhiteSquare(s32 port_id);
void mnBonusReorderCursorsOnPlacement(s32 port_id);
s32 mnBonusGetFtKindFromTokenPositionEvenIfLocked();
void mnBonusAnnounceFighter(s32 port_id, s32 panel_id);
void mnBonusReorderCursorsOnPickup(s32 port_id, s32 token_id);
void mnBonusRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state);


// Data
// 0x80136F50
u32 D_ovl29_80136F50[11] = {

	0x11, 0x14, 0x15, 0x12, 0x13, 0x17, 0x18, 0x19, 0x21, 0x24, 0x16
};

// 0x80136F7C
s32 D_ovl29_80136F7C[] = {

	0x00000000,
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
// 0x80137640
s32 D_ovl29_80137640[2];

// 0x80137648
mnCharPanelBonus gMnBonusPanel;

// 0x801376D0
s32 D_ovl29_801376D0;

// 0x801376D4
s32 D_ovl29_801376D4;

// 0x801376D8
s32 D_ovl29_801376D8[4];

// 0x801376E8 timer after selecting char before auto-starting
s32 gMnBonusAutostartTimer;

// 0x801376EC
sb32 gMnBonusCharSelected;

// 0x801376F0
sb32 gMnBonusIsTeamBattle;

// 0x801376F4
s32 gMnBonusRule;

// 0x801376F8
s32 gMnBonusHumanPanelPort;

// 0x801376FC
GObj* gMnBonusHighscoreGobj;

// 0x80137700
s32 D_ovl29_80137700[4];

// 0x80137710
void* gMnBonusFigatreeHeap;

// 0x80137714 0 = BTT; 1 = BTP
s32 gMnBonusType;

// 0x80137718 title and back button
GObj* gMnBonusTitleGObj;

// 0x8013771C total time highscore
GObj* gMnBonusTotalTimeGobj;

// 0x80137720 flag indicating which bonus chars are available
u16 gMnBonusCharacterUnlockedMask;

// 0x80137724 frames elapsed on CSS
s32 gMnBonusFramesElapsed;

// 0x80137728 frames to wait until exiting the CSS
s32 gMnBonusMaxFramesElapsed;

// 0x8013772C looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 gMnBonusPressStartFlashTimer;

// 0x80137730
s32 D_ovl29_80137730[180];

// 0x80137A00
LBFileNode D_ovl29_80137A00[7];

// 0x80137A38
u32 D_ovl29_80137A38[240];

// 0x80137DF8
s32 gMnBonusFiles[11];


// 0x80131B00
void mnBonusFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 mnBonusPow(s32 num, s32 pow)
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
void mnBonusSetTextureColors(SObj* sobj, u32 colors[])
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
s32 mnBonusGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mnBonusPow(10, numDigits - 1) != 0 ? num / mnBonusPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 0x80131CEC
void mnBonusCreateSmallerNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
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

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMnBonusFiles[9], number_offsets[num % 10]));
	mnBonusSetTextureColors(number_sobj, colors);
	left_x -= 8;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mnBonusGetNumberOfDigits(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mnBonusGetNumberOfDigits(num, maxDigits)
	)
	{
		digit = (mnBonusPow(10, place) != 0) ? num / mnBonusPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMnBonusFiles[9], number_offsets[digit % 10]));
		mnBonusSetTextureColors(number_sobj, colors);
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
void mnBonusSelectCharWithToken(s32 port_id, s32 select_button)
{
	s32 held_port_id = gMnBonusPanel.held_port_id,
		costume_id = ftParamGetCostumeCommonID(gMnBonusPanel.char_id, select_button);

	ftParamInitModelTexturePartsAll(gMnBonusPanel.player, costume_id, 0);

	gMnBonusPanel.costume_id = costume_id;
	gMnBonusPanel.is_selected = TRUE;
	gMnBonusPanel.holder_port_id = 4;
	gMnBonusPanel.cursor_state = mnCursorStateNotHoldingToken;

	mnBonusRedrawCursor(gMnBonusPanel.cursor, port_id, gMnBonusPanel.cursor_state);

	gMnBonusPanel.held_port_id = -1;
	gMnBonusPanel.unk_0x88 = TRUE;

	mnBonusReorderCursorsOnPlacement(held_port_id);
	mnBonusAnnounceFighter(port_id, held_port_id);
	mnBonusCreateWhiteSquare(held_port_id);
	gMnBonusAutostartTimer = 0x8C;
	gMnBonusCharSelected = 1;
}

// 0x80132030
f32 mnBonusGetNextPortraitX(s32 portrait_id, f32 current_x_position)
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
sb32 mnBonusCheckFighterIsXBoxed(s32 fkind)
{
	return FALSE;
}

// 0x80132150
void mnBonusSetPortraitX(GObj *portrait_gobj)
{
	f32 new_portrait_x = mnBonusGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

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
void mnBonusInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
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
void mnBonusAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x,
		y = portrait_sobj->pos.y;
	intptr_t xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, GetAddressFromOffset(gMnBonusFiles[4], xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 0x801322BC
sb32 mnBonusGetIsLocked(s32 char_id)
{
	switch (char_id)
	{
		case nFTKindNess:
			return (gMnBonusCharacterUnlockedMask & (1 << nFTKindNess)) ? FALSE : TRUE;

		case nFTKindPurin:
			return (gMnBonusCharacterUnlockedMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

		case nFTKindCaptain:
			return (gMnBonusCharacterUnlockedMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

		case nFTKindLuigi:
			return (gMnBonusCharacterUnlockedMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;
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
s32 mnBonusGetFtKind(s32 portrait_id)
{
	s32 FTKind_order[12] = {

		4, 0, 2, 5, 3, 7, 11, 6, 8, 1, 9, 10
	};

	return FTKind_order[portrait_id];
}

// 0x801323E0
s32 mnBonusGetPortraitId(s32 fkind)
{
	s32 portrait_id_order[12] = {

		1, 9, 2, 4, 0, 3, 7, 5, 8, 10, 11, 6
	};

	return portrait_id_order[fkind];
}

// 0x80132430
void mnBonusRenderPortraitWithNoise(GObj *portrait_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 0x801324F0
void mnBonusCreateLockedPortrait(s32 portrait_id)
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
	gcAddGObjProcess(texture_gobj, mnBonusSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMnBonusFiles[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	texture_gobj->user_data.s = portrait_id;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mnBonusRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnBonusSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMnBonusFiles[4], locked_portrait_offsets[mnBonusGetFtKind(portrait_id)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

	texture_gobj->user_data.s = portrait_id;
	mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnBonusSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMnBonusFiles[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	texture_sobj->sprite.attr &= ~SP_FASTCOPY;
	texture_sobj->sprite.attr |= SP_TRANSPARENT;
	texture_sobj->envcolor.r = 0x5B;
	texture_sobj->envcolor.g = 0x41;
	texture_sobj->envcolor.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.s = portrait_id;
	mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 0x80132798
void mnBonusCreatePortrait(s32 portrait_id)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj *texture_sobj;
	intptr_t portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mnBonusGetIsLocked(mnBonusGetFtKind(portrait_id)))
	{
		mnBonusCreateLockedPortrait(portrait_id);
	}
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x19U, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x20U, 0x80000000U, -1);
		portrait_bg_gobj->user_data.p = portrait_id;
		gcAddGObjProcess(portrait_bg_gobj, mnBonusSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_bg_gobj, GetAddressFromOffset(gMnBonusFiles[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		texture_sobj->pos.x = ((((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
		texture_sobj->pos.y = (((portrait_id >= 6) ? 1 : 0) * 0x2B) + 0x24;

		mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
		gcAddGObjProcess(portrait_gobj, mnBonusSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_gobj, GetAddressFromOffset(gMnBonusFiles[4], portrait_offsets[mnBonusGetFtKind(portrait_id)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
		texture_sobj->pos.x = ((((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
		texture_sobj->pos.y = (((portrait_id >= 6) ? 1 : 0) * 0x2B) + 0x24;
		portrait_gobj->user_data.p = portrait_id;

		// this conditionally draws a big red box with an X in it, but this check always fails
		if (mnBonusCheckFighterIsXBoxed(mnBonusGetFtKind(portrait_id)))
		{
			mnBonusAddRedXBoxToPortrait(portrait_gobj, portrait_id);
		}
		mnBonusInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	}
}

// 0x80132A58
void mnBonusCreatePortraits()
{
	s32 portrait_id;

	for (portrait_id = 0; portrait_id < 12; portrait_id++)
		mnBonusCreatePortrait(portrait_id);
}

// 0x80132A98
void mnBonusSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 fkind)
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
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, GetAddressFromOffset(gMnBonusFiles[1], logo_offsets[fkind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
		sobj->sprite.red = 0;
		sobj->sprite.green = 0;
		sobj->sprite.blue = 0;
		sobj->pos.x = 68.0F;
		sobj->pos.y = 144.0F;

		// name
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, GetAddressFromOffset(gMnBonusFiles[0], name_offsets[fkind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
		sobj->pos.x = 66.0F;
		sobj->pos.y = 202.0F;
	}
}

// 0x80132C14
void mnBonusCreatePortraitViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x28, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132CB4
void mnBonusCreatePortraitBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x3C, 0x100000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132D54
void mnBonusCreatePortraitWhiteBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x32, 0x200000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DF4
void mnBonusCreatePanelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x1E, 0x10000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132E94
void mnBonusUpdatePanel(GObj* panel_gobj, s32 port_id)
{
	SObj* panel_sobj;
	intptr_t offsets[4] = {

		0x103F8, 0x10420, 0x10470, 0x10448
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	panel_sobj->sprite.LUT = GetAddressFromOffset(gMnBonusFiles[0], offsets[port_id]);
}

// 0x80132EEC
void mnBonusCreatePanel(s32 port_id)
{
	GObj* gobj;
	SObj* type_sobj;
	intptr_t type_offsets[4] = {

		0x878, 0xA58, 0xC38, 0xE18
	};
	f32 type_x_offsets[4] = {

		8.0, 5.0, 5.0, 5.0
	};

	// create panel
	gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, 0x80000000, -1, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(gobj)->pos.x = 58.0f;
	SObjGetStruct(gobj)->pos.y = 127.0f;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	gMnBonusPanel.panel = gobj;

	type_sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMnBonusFiles[0], type_offsets[port_id]));
	type_sobj->pos.x = type_x_offsets[port_id] + 58.0F;
	type_sobj->pos.y = 132.0F;
	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;

	mnBonusUpdatePanel(gobj, port_id);

	// name/logo
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gMnBonusPanel.name_logo = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);
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
void mnBonusCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, GetAddressFromOffset(gMnBonusFiles[2], &FILE_015_BACKGROUND_IMAGE_OFFSET));
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
void mnBonusCreateBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x4000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133210 - Unused?
void func_ovl29_80133210() {}

// 0x80133218
void mnBonusDrawTitleAndBack()
{
	GObj* title_gobj;
	SObj* title_sobj;
	SObj* back_sobj;
	void* unused;

	gMnBonusTitleGObj = title_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(title_gobj, lbCommonDrawSObjAttr, 0x22U, 0x80000000U, -1);

	if (gMnBonusType == mnBonusTypeBTT)
	{
		title_sobj = lbCommonMakeSObjForGObj(title_gobj, GetAddressFromOffset(gMnBonusFiles[3], &FILE_012_BREAK_THE_TARGETS_TITLE_IMAGE_OFFSET));
	}
	else
	{
		title_sobj = lbCommonMakeSObjForGObj(title_gobj, GetAddressFromOffset(gMnBonusFiles[3], &FILE_012_BOARD_THE_PLATFORMS_TITLE_IMAGE_OFFSET));
	}

	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->pos.x = 27.0F;
	title_sobj->pos.y = 24.0F;
	title_sobj->sprite.red = 0xE3;
	title_sobj->sprite.green = 0xAC;
	title_sobj->sprite.blue = 0x04;

	if (gMnBonusType == mnBonusTypeBTT)
		func_800269C0_275C0(0x1DEU);
	else
		func_800269C0_275C0(0x1DCU);

	back_sobj = lbCommonMakeSObjForGObj(title_gobj, GetAddressFromOffset(gMnBonusFiles[0], &FILE_011_BACK_IMAGE_OFFSET));
	back_sobj->pos.x = 244.0F;
	back_sobj->pos.y = 23.0F;
	back_sobj->sprite.attr &= ~SP_FASTCOPY;
	back_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80133370
void mnBonusCreateTitleOptionsAndBackViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80133410
u32 mnBonusGetBestTime(s32 fkind)
{
	u32 time;

	if (gMnBonusType == 0)
	{
		time = gSaveData.spgame_records[fkind].bonus1_time;

		if (time >= 0x34BC0U)
			return 0x34BBFU;
		else
			return time;
	}
	else
	{
		time = gSaveData.spgame_records[fkind].bonus2_time;

		if (time >= 0x34BC0U)
			return 0x34BBFU;
		else
			return time;
	}
}

// 0x80133488
s32 mnBonusGetMinutes(s32 frames)
{
	return frames / 3600;
}

// 0x8013349C
s32 mnBonusGetSeconds(s32 frames)
{
	return (frames % 3600) / 60;
}

// 0x801334C0
s32 mnBonusGetCentiseconds(s32 frames)
{
	s32 seconds = frames % 3600;
	s32 tenths = (seconds % 60) / 6 * 10;
	s32 hundredths = (seconds % 6) / 0.554F;

	return tenths + hundredths;
}

// 0x80133570
s32 mnBonusGetTotalMinutes()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
	{
		if (!mnBonusGetIsLocked(i))
			sum += mnBonusGetMinutes(mnBonusGetBestTime(i));
	}

	return sum;
}

// 0x801335DC
s32 mnBonusGetTotalSeconds()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnBonusGetIsLocked(i) == 0)
			sum += mnBonusGetSeconds(mnBonusGetBestTime(i));
	}

	return sum;
}

// 0x80133648
s32 mnBonusGetTotalCentiseconds()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
	{
		if (mnBonusGetIsLocked(i) == 0)
			sum += mnBonusGetCentiseconds(mnBonusGetBestTime(i));
	}

	return sum;
}

// 0x801336B4
void mnBonusDrawBestTime()
{
	GObj* best_time_gobj;
	SObj* temp_v0_2;
	SObj* temp_v0_3;
	SObj* temp_v0_4;
	s32 colors1[3] = {

		0xC5, 0xB6, 0xA7
	};
	s32 colors2[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	s32 best_time;
	s32 fkind = mnBonusGetFtKindFromTokenPositionEvenIfLocked();

	if (gMnBonusHighscoreGobj != NULL)
	{
		gcEjectGObj(gMnBonusHighscoreGobj);
		gMnBonusHighscoreGobj = NULL;
	}

	if (fkind != nFTKindNull)
	{
		best_time = mnBonusGetBestTime(fkind);

		gMnBonusHighscoreGobj = best_time_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(best_time_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);

		temp_v0_2 = lbCommonMakeSObjForGObj(best_time_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_BEST_TIME_LABEL_IMAGE_OFFSET));
		temp_v0_2->pos.x = 177.0f;
		temp_v0_2->pos.y = 198.0f;
		temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
		temp_v0_2->sprite.attr |= SP_TRANSPARENT;
		temp_v0_2->sprite.red = 0x7E;
		temp_v0_2->sprite.green = 0x7C;
		temp_v0_2->sprite.blue = 0x77;

		mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetMinutes(best_time), 237.0F, 195.0F, colors2, 2, 1);

		temp_v0_3 = lbCommonMakeSObjForGObj(best_time_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
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

		mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetSeconds(best_time), 259.0F, 195.0F, colors2, 2, 1);

		temp_v0_4 = lbCommonMakeSObjForGObj(best_time_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
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

		mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetCentiseconds(best_time), 283.0F, 195.0F, colors2, 2, 1);
	}
}

// 0x80133990
u8 mnBonusGetBestCount(s32 fkind)
{
	if (gMnBonusType == 0)
		return gSaveData.spgame_records[fkind].bonus1_task_count;
	else
		return gSaveData.spgame_records[fkind].bonus2_task_count;
}

// 0x801339C8
void mnBonusDrawBestCount()
{
	GObj* count_gobj;
	SObj* label_sobj;
	SObj *foo, *bar;
	s32 colors1[3] = {

		0xC5, 0xB6, 0xA7
	};
	s32 colors2[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	s32 fkind = mnBonusGetFtKindFromTokenPositionEvenIfLocked();

	if (gMnBonusHighscoreGobj != NULL)
	{
		gcEjectGObj(gMnBonusHighscoreGobj);
		gMnBonusHighscoreGobj = NULL;
	}

	if (fkind != nFTKindNull)
	{
		gMnBonusHighscoreGobj = count_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(count_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);

		if (gMnBonusType == 0)
		{
			label_sobj = lbCommonMakeSObjForGObj(count_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_TARGETS_LABEL_IMAGE_OFFSET));
		}
		else
		{
			label_sobj = lbCommonMakeSObjForGObj(count_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_PLATFORMS_LABEL_IMAGE_OFFSET));
		}

		label_sobj->pos.x = 235.0f;
		label_sobj->pos.y = 195.0f;
		label_sobj->sprite.attr &= ~SP_FASTCOPY;
		label_sobj->sprite.attr |= SP_TRANSPARENT;
		label_sobj->sprite.red = 0x7E;
		label_sobj->sprite.green = 0x7C;
		label_sobj->sprite.blue = 0x77;

		mnBonusCreateSmallerNumber(count_gobj, mnBonusGetBestCount(fkind), 225.0F, 194.0F, colors2, 2, 1);
	}
}

// 0x80133B7C
sb32 mnBonusIsCompleted(s32 fkind)
{
	u8 count;

	if (gMnBonusType == 0)
		count = gSaveData.spgame_records[fkind].bonus1_task_count;
	else
		count = gSaveData.spgame_records[fkind].bonus2_task_count;

	if (count == 10)
		return TRUE;
	else
		return FALSE;
}

// 0x80133BCC
void mnBonusDrawHighscore()
{
	if (mnBonusIsCompleted(mnBonusGetFtKindFromTokenPositionEvenIfLocked()))
		mnBonusDrawBestTime();
	else
		mnBonusDrawBestCount();
}

// 0x80133C14 - Unused?
void func_ovl29_80133C14() {}

// 0x80133C1C
void mnDrawBonusTotalTime()
{
	GObj* best_time_gobj;
	SObj* temp_v0_2;
	SObj* temp_v0_4;
	SObj* temp_v0_3;
	s32 colors1[3] = {

		0xC5, 0xB6, 0xA7
	};
	s32 colors2[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	s32 centiseconds;
	s32 remainder;
	s32 seconds;

	gMnBonusTotalTimeGobj = best_time_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(best_time_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);

	temp_v0_2 = lbCommonMakeSObjForGObj(best_time_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_TOTAL_BEST_TIME_LABEL_IMAGE_OFFSET));
	temp_v0_2->pos.x = 142.0f;
	temp_v0_2->pos.y = 209.0f;
	temp_v0_2->sprite.attr &= ~SP_FASTCOPY;
	temp_v0_2->sprite.attr |= SP_TRANSPARENT;
	temp_v0_2->sprite.red = 0x7E;
	temp_v0_2->sprite.green = 0x7C;
	temp_v0_2->sprite.blue = 0x77;

	centiseconds = mnBonusGetTotalCentiseconds();
	remainder = centiseconds / 100;
	mnBonusCreateSmallerNumber(best_time_gobj, centiseconds % 100, 283.0F, 206.0F, colors2, 2, 1);

	temp_v0_4 = lbCommonMakeSObjForGObj(best_time_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_DOUBLE_QUOTE_IMAGE_OFFSET));
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

	seconds = mnBonusGetTotalSeconds() + remainder;
	remainder = seconds / 60;
	seconds = seconds % 60;
	mnBonusCreateSmallerNumber(best_time_gobj, seconds, 259.0F, 206.0F, colors2, 2, 1);

	temp_v0_3 = lbCommonMakeSObjForGObj(best_time_gobj, GetAddressFromOffset(gMnBonusFiles[5], &FILE_017_APOSTROPHE_IMAGE_OFFSET));
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

	mnBonusCreateSmallerNumber(best_time_gobj, mnBonusGetTotalMinutes() + remainder, 237.0F, 206.0F, colors2, 3, 1);
}

// 0x80133F4C - Unused?
void func_ovl29_80133F4C() {}

// 0x80133F54 - Unused?
void func_ovl29_80133F54() {}

// 0x80133F5C
s32 mnBonusGetAvailableCostume(s32 fkind, s32 select_button)
{
	ftParamGetCostumeCommonID(fkind, ftParamGetCostumeCommonID(fkind, select_button));
}

// 0x80133F88
s32 mnBonusGetSelectedAnimation(s32 fkind)
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
void mnBonusRotateFighter(GObj *fighter_gobj)
{
	FTStruct* fp = ftGetStruct(fighter_gobj);
	s32 port_id = fp->player;

	if (gMnBonusPanel.unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (!gMnBonusPanel.selected_animation_started)
			{
				scSubsysFighterSetStatus(gMnBonusPanel.player, mnBonusGetSelectedAnimation(gMnBonusPanel.char_id));

				gMnBonusPanel.selected_animation_started = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(gMnBonusPanel.player, mnBonusGetSelectedAnimation(gMnBonusPanel.char_id));

				gMnBonusPanel.selected_animation_started = TRUE;
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
void mnBonusSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 fkind)
{
	f32 initial_y_rotation;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	if (fkind != nFTKindNull)
	{
		if (fighter_gobj != NULL)
		{
			initial_y_rotation = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
			ftManagerDestroyFighter(fighter_gobj);
		}
		else
			initial_y_rotation = 0.0F;

		spawn_info.fkind = fkind;
		gMnBonusPanel.costume_id = spawn_info.costume = mnBonusGetAvailableCostume(fkind, 0);
		// spawn_info.shade = 0;
		spawn_info.figatree_heap = gMnBonusFigatreeHeap;
		spawn_info.player = port_id;
		gMnBonusPanel.player = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		gcAddGObjProcess(fighter_gobj, mnBonusRotateFighter, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = -700.0F;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[fkind];
	}
}

// 0x80134274
void mnBonusCreateFighterViewport()
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
void mnBonusRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state)
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

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gMnBonusFiles[0], cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gMnBonusFiles[0], type_offsets[port_id]));
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
void mnBonusCheckPickerRightArrowPress() {}

// 0x8013457C - Unused?
void mnBonusCheckPickerLeftArrowPress() {}

// 0x80134584
s32 mnBonusCheckBackButtonPress(GObj* cursor_gobj)
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
s32 mnBonusCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(gMnBonusPanel.token);

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
void mnBonusResetPort(s32 port_id)
{
	gMnBonusPanel.is_selected = FALSE;
	gMnBonusPanel.char_id = nFTKindNull;
	gMnBonusPanel.holder_port_id = port_id;
	gMnBonusPanel.held_port_id = port_id;
	gMnBonusPanel.unk_0x88 = FALSE;

	mnBonusReorderCursorsOnPickup(port_id, port_id);

	gMnBonusPanel.unk_0xA0 = FALSE;
}

// 0x8013476C
void mnBonusSyncFighterDisplay(s32 port_id)
{
	s32 var_v0 = 0;

	if (gMnBonusPanel.char_id == nFTKindNull && !gMnBonusPanel.is_selected)
	{
		gMnBonusPanel.player->flags = 1;
		mnBonusDrawHighscore();
		var_v0 = 1;
	}
	if (var_v0 == 0)
	{
		mnBonusSpawnFighter(gMnBonusPanel.player, port_id, gMnBonusPanel.char_id);
		mnBonusDrawHighscore();
		gMnBonusPanel.player->flags = 0;
		gMnBonusPanel.selected_animation_started = 0;
	}
}

// 0x801347F0 - Unused?
void func_ovl29_801347F0() {}

// 0x801347F8
void mnBonusSyncNameAndLogo(s32 port_id)
{
	if (gMnBonusPanel.char_id == nFTKindNull && !gMnBonusPanel.is_selected)
	{
		gMnBonusPanel.name_logo->flags = 1;
	}
	else
	{
		gMnBonusPanel.name_logo->flags = 0;
		mnBonusSetNameAndLogo(gMnBonusPanel.name_logo, port_id, gMnBonusPanel.char_id);
	}
}

// 0x80134858
void mnBonusRemoveWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;

	white_square_gobj = gMnBonusPanel.white_square;
	if (white_square_gobj != NULL)
	{
		gMnBonusPanel.white_square = NULL;
		gcEjectGObj(white_square_gobj);
	}
}

// 0x80134890
void mnBonusFlashWhiteSquare(GObj* white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0) mnBonusRemoveWhiteSquare(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x8013491C
void mnBonusCreateWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait_id = mnBonusGetPortraitId(gMnBonusPanel.char_id);

	mnBonusRemoveWhiteSquare(port_id);

	gMnBonusPanel.white_square = white_square_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U);
	gcAddGObjDisplay(white_square_gobj, lbCommonDrawSObjAttr, 0x21U, 0x80000000U, -1);
	white_square_gobj->user_data.p = port_id;
	gcAddGObjProcess(white_square_gobj, mnBonusFlashWhiteSquare, 0, 1);

	white_square_sobj = lbCommonMakeSObjForGObj(white_square_gobj, GetAddressFromOffset(gMnBonusFiles[4], &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
	white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 0x80134A50
void mnBonusAnnounceFighter(s32 port_id, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (gMnBonusPanel.p_sfx != NULL)
	{
		if ((gMnBonusPanel.p_sfx->sfx_id != 0) && (gMnBonusPanel.p_sfx->sfx_id == gMnBonusPanel.sfx_id))
		{
			func_80026738_27338(gMnBonusPanel.p_sfx);
		}
	}

	func_800269C0_275C0(0x79U);

	gMnBonusPanel.p_sfx = func_800269C0_275C0(announcer_fgms[gMnBonusPanel.char_id]);

	if (gMnBonusPanel.p_sfx != NULL)
	{
		gMnBonusPanel.sfx_id = gMnBonusPanel.p_sfx->sfx_id;
	}
}

// 0x80134B1C - Unused?
void func_ovl29_80134B1C() {}

// 0x80134B24
sb32 mnBonusSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
	if (gMnBonusPanel.cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (gMnBonusPanel.char_id != nFTKindNull)
	{
		mnBonusSelectCharWithToken(port_id, select_button);
		gMnBonusPanel.min_frames_elapsed_until_recall = gMnBonusFramesElapsed + 0x1E;
		func_800269C0_275C0(0x9FU);
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 0x80134BB0
void mnBonusReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
	// display orders for cursors on token pickup
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};

	gcMoveGObjDL(gMnBonusPanel.token, 0x1EU, diplay_orders[port_id] + 1);
}

// 0x80134C1C
void mnBonusReorderCursorsOnPlacement(s32 port_id)
{
	// display orders for cursors not holding tokens on token placement
	s32 unheld_orders[4] = {

		3, 2, 1, 0
	};

	gcMoveGObjDL(gMnBonusPanel.token, 0x1F, unheld_orders[port_id]);
}

// 0x80134C80
void mnBonusSetCursorCoordinatesFromToken(s32 port_id)
{
	gMnBonusPanel.cursor_pickup_x = SObjGetStruct(gMnBonusPanel.token)->pos.x - 11.0f;
	gMnBonusPanel.cursor_pickup_y = SObjGetStruct(gMnBonusPanel.token)->pos.y - -14.0f;
}

// 0x80134CC4
void mnBonusHandleCursorPickup(s32 port_id)
{
	gMnBonusPanel.holder_port_id = port_id;
	gMnBonusPanel.is_selected = FALSE;
	gMnBonusPanel.cursor_state = mnCursorStateHoldingToken;
	gMnBonusPanel.held_port_id = port_id;
	gMnBonusPanel.unk_0x88 = FALSE;

	mnBonusSyncFighterDisplay(port_id);
	mnBonusReorderCursorsOnPickup(port_id, port_id);
	mnBonusSetCursorCoordinatesFromToken(port_id);
	mnBonusRedrawCursor(gMnBonusPanel.cursor, port_id, gMnBonusPanel.cursor_state);

	gMnBonusPanel.unk_0xA0 = TRUE;

	func_800269C0_275C0(0x7FU);

	mnBonusRemoveWhiteSquare(port_id);
	mnBonusSyncNameAndLogo(port_id);
}

// 0x80134D54
sb32 mnBonusCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
	mnCharPanelBonus* panel_info = &gMnBonusPanel;

	if ((gMnBonusFramesElapsed < gMnBonusPanel.min_frames_elapsed_until_recall))
		return FALSE;
	else if (gMnBonusPanel.cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	if ((gMnBonusPanel.holder_port_id == 4) && (mnBonusCheckTokenPickup(cursor_gobj, port_id, port_id)))
	{
		gMnBonusPanel.holder_port_id = port_id;
		gMnBonusPanel.is_selected = FALSE;
		gMnBonusPanel.cursor_state = mnCursorStateHoldingToken;
		panel_info->held_port_id = port_id;
		gMnBonusPanel.unk_0x88 = FALSE;

		mnBonusSyncFighterDisplay(port_id);
		mnBonusReorderCursorsOnPickup(port_id, port_id);
		mnBonusSetCursorCoordinatesFromToken(port_id);
		mnBonusRedrawCursor(cursor_gobj, port_id, gMnBonusPanel.cursor_state);

		gMnBonusPanel.unk_0xA0 = TRUE;

		func_800269C0_275C0(0x7FU);
		mnBonusRemoveWhiteSquare(port_id);
		mnBonusSyncNameAndLogo(port_id);

		return TRUE;
	}

	return FALSE;
}

// 0x80134E50
s32 mnBonusGetFtKindFromTokenPositionEvenIfLocked()
{
	SObj* token_sobj = SObjGetStruct(gMnBonusPanel.token);
	s32 current_y = (s32) token_sobj->pos.x + 13;
	s32 current_x = (s32) token_sobj->pos.y + 12;
	s32 char_id;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mnBonusGetFtKind((s32) (current_y - 25) / 45);
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mnBonusGetFtKind(((s32) (current_y - 25) / 45) + 6);
	}
	return nFTKindNull;
}

// 0x80134F6C
s32 mnBonusGetFtKindFromTokenPosition(s32 port_id)
{
	SObj* token_sobj = SObjGetStruct(gMnBonusPanel.token);
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
			char_id = mnBonusGetFtKind((s32) (current_y - 25) / 45);

			if ((mnBonusCheckFighterIsXBoxed(char_id)) || (mnBonusGetIsLocked(char_id)))
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
			char_id = mnBonusGetFtKind(((s32) (current_y - 25) / 45) + 6);

			if ((mnBonusCheckFighterIsXBoxed(char_id)) || (mnBonusGetIsLocked(char_id)))
				return nFTKindNull;

			return char_id;
		}
	}
	return nFTKindNull;
}

// 0x801350E4
void mnBonusAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
	gsController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (gMnBonusPanel.unk_0xA0)
	{
		delta = (gMnBonusPanel.cursor_pickup_x - SObjGetStruct(gMnBonusPanel.cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBonusPanel.cursor)->pos.x = gMnBonusPanel.cursor_pickup_x;
		else
			SObjGetStruct(gMnBonusPanel.cursor)->pos.x += delta;

		delta = (gMnBonusPanel.cursor_pickup_y - SObjGetStruct(gMnBonusPanel.cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBonusPanel.cursor)->pos.y = gMnBonusPanel.cursor_pickup_y;
		else
			SObjGetStruct(gMnBonusPanel.cursor)->pos.y += delta;

		if ((SObjGetStruct(gMnBonusPanel.cursor)->pos.x == gMnBonusPanel.cursor_pickup_x) && (SObjGetStruct(gMnBonusPanel.cursor)->pos.y == gMnBonusPanel.cursor_pickup_y))
		{
			gMnBonusPanel.unk_0xA0 = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMnBonusPanel.cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMnBonusPanel.cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (!gMnBonusPanel.is_recalling)
	{
		controller = &gPlayerControllers[port_id];
		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMnBonusPanel.cursor_state].x;
			}
		}

		controller = &gPlayerControllers[port_id];
		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMnBonusPanel.cursor_state].y;
			}
		}
	}
}

// 0x8013545C
void mnBonusSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (gMnBonusPanel.cursor_state != mnCursorStatePointer)
		{
			mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
			gMnBonusPanel.cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (gMnBonusPanel.held_port_id == -1)
		{
			if (gMnBonusPanel.cursor_state != mnCursorStateNotHoldingToken)
			{
				mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				gMnBonusPanel.cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (gMnBonusPanel.cursor_state != mnCursorStateHoldingToken)
			{
				mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				gMnBonusPanel.cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if ((gMnBonusPanel.cursor_state == mnCursorStatePointer) && (gMnBonusPanel.is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBonusPanel.is_selected == 1) && (mnBonusCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnBonusRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				gMnBonusPanel.cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 0x801355E0
void mnBonusSyncShadeAndCostume(s32 arg0, s32 select_button)
{
	s32 costume_id = ftParamGetCostumeCommonID(gMnBonusPanel.char_id, select_button);

	ftParamInitModelTexturePartsAll(gMnBonusPanel.player, costume_id, 0);

	gMnBonusPanel.costume_id = costume_id;

	func_800269C0_275C0(0xA4U);
}

// 0x80135634
sb32 mnBonusIsHumanWithCharacterSelected(s32 arg0)
{
	if (gMnBonusPanel.is_selected)
		return TRUE;
	else
		return FALSE;
}

// 0x8013565C
void mnBonusRecallToken(s32 port_id)
{
	gMnBonusPanel.unk_0x88 = FALSE;
	gMnBonusPanel.is_selected = FALSE;
	gMnBonusPanel.is_recalling = TRUE;
	gMnBonusPanel.recall_frame_counter = 0;
	gMnBonusPanel.recall_start_x = SObjGetStruct(gMnBonusPanel.token)->pos.x;
	gMnBonusPanel.recall_start_y = SObjGetStruct(gMnBonusPanel.token)->pos.y;

	gMnBonusPanel.recall_end_x = SObjGetStruct(gMnBonusPanel.cursor)->pos.x + 20.0F;

	if (gMnBonusPanel.recall_end_x > 280.0F)
		gMnBonusPanel.recall_end_x = 280.0F;

	gMnBonusPanel.recall_end_y = SObjGetStruct(gMnBonusPanel.cursor)->pos.y + -15.0F;

	if (gMnBonusPanel.recall_end_y < 10.0F)
		gMnBonusPanel.recall_end_y = 10.0F;

	if (gMnBonusPanel.recall_end_y < gMnBonusPanel.recall_start_y)
		gMnBonusPanel.recall_mid_y = gMnBonusPanel.recall_end_y - 20.0F;
	else
		gMnBonusPanel.recall_mid_y = gMnBonusPanel.recall_start_y - 20.0F;
}

// 0x80135740
void mnBonusGoBackTo1PMenu()
{
	if (gMnBonusType == 0)
		gSceneData.scene_prev = nSCKind1PBonus1Fighters;
	else
		gSceneData.scene_prev = nSCKind1PBonus2Fighters;

	gSceneData.scene_curr = nSCKind1PMode;

	mnBonusSaveMatchInfo();
	auStopBGM();
	func_800266A0_272A0();
	syTaskmanSetLoadScene();
}

// 0x801357AC
void mnBonusExitIfBButtonPressed(s32 port_id)
{
	gsController* controller = &gPlayerControllers[port_id];

	if ((gMnBonusFramesElapsed >= 10) && (controller->button_tap & B_BUTTON))
		mnBonusGoBackTo1PMenu();
}

// 0x80135800
sb32 mnBonusCheckTitlePress(GObj* cursor_gobj)
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
void mnBonusHandleTitlePress()
{
	if (gMnBonusType == 0)
		gMnBonusType = 1;
	else
		gMnBonusType = 0;

	gcEjectGObj(gMnBonusTitleGObj);
	mnBonusDrawTitleAndBack();
	mnBonusDrawHighscore();

	if (gMnBonusTotalTimeGobj != NULL)
	{
		gcEjectGObj(gMnBonusTotalTimeGobj);
		gMnBonusTotalTimeGobj = NULL;
	}

	if (mnBonusAreAllCompleted())
		mnDrawBonusTotalTime();
}

// 0x80135950
void mnBonusHandleButtonPresses(GObj* cursor_gobj)
{
	s32 port_id = cursor_gobj->user_data.s;
	gsController* controller = &gPlayerControllers[port_id];
	mnCharPanelBonus* panel_info;
	s32 foo, bar, baz;

	mnBonusAutoPositionCursor(cursor_gobj, port_id);

	if ((controller->button_tap & A_BUTTON)
		&& (!mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 0))
		&& (!mnBonusCheckAndHandleTokenPickup(cursor_gobj, port_id)))
	{
		if (mnBonusCheckTitlePress(cursor_gobj))
			mnBonusHandleTitlePress();
		else if (mnBonusCheckBackButtonPress(cursor_gobj))
		{
			mnBonusGoBackTo1PMenu();
			func_800269C0_275C0(0xA4U);
		}
	}

	if ((controller->button_tap & U_CBUTTONS)
		&& (!mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 0))
		&& (gMnBonusPanel.unk_0x88))
	{
		mnBonusSyncShadeAndCostume(port_id, 0);
	}
	if ((controller->button_tap & R_CBUTTONS)
		&& (!mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 1))
		&& (gMnBonusPanel.unk_0x88))
	{
		mnBonusSyncShadeAndCostume(port_id, 1);
	}
	if ((controller->button_tap & D_CBUTTONS)
		&& (!mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 2))
		&& (gMnBonusPanel.unk_0x88))
	{
		mnBonusSyncShadeAndCostume(port_id, 2);
	}
	if ((controller->button_tap & L_CBUTTONS)
		&& (!mnBonusSelectChar(cursor_gobj, port_id, gMnBonusPanel.held_port_id, 3))
		&& (gMnBonusPanel.unk_0x88))
	{
		mnBonusSyncShadeAndCostume(port_id, 3);
	}

	if ((controller->button_tap & B_BUTTON) && (mnBonusIsHumanWithCharacterSelected(port_id)))
	{
		mnBonusRecallToken(port_id);
	}

	if (!gMnBonusPanel.is_recalling)
		mnBonusExitIfBButtonPressed(port_id);
	if (!gMnBonusPanel.is_recalling)
		mnBonusSyncCursorDisplay(cursor_gobj, port_id);
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
void mnBonusMoveToken(s32 port_id)
{
	SObjGetStruct(gMnBonusPanel.token)->pos.x += gMnBonusPanel.token_x_velocity;
	SObjGetStruct(gMnBonusPanel.token)->pos.y += gMnBonusPanel.token_y_velocity;
}

// 0x80135BF4
void mnBonusSyncTokenAndFighter(GObj* token_gobj)
{
	s32 fkind;
	s32 port_id = token_gobj->user_data.s;

	if ((gMnBonusPanel.cursor_state != mnCursorStatePointer)
		|| (gMnBonusPanel.is_selected == TRUE)
		|| (gMnBonusPanel.is_recalling == TRUE))
	{
		token_gobj->flags = 0;
	}
	else
		token_gobj->flags = 1;

	if ((!gMnBonusPanel.is_selected)
		&& (gMnBonusPanel.holder_port_id != 4))
	{
		if (!gMnBonusPanel.unk_0xA0)
		{
			SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gMnBonusPanel.cursor)->pos.x + 11.0F);
			SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gMnBonusPanel.cursor)->pos.y + -14.0F);
		}
	}
	else {
		mnBonusMoveToken(port_id);
	}

	fkind = mnBonusGetFtKindFromTokenPosition(port_id);

	if ((!gMnBonusPanel.is_selected)
		&& (fkind != gMnBonusPanel.char_id))
	{
		gMnBonusPanel.char_id = fkind;

		mnBonusSyncFighterDisplay(port_id);
		mnBonusSyncNameAndLogo(port_id);
	}
	mnBonusDrawHighscore();
}

// 0x80135D08
void mnBonusCreateReadyToFightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135DA8
void mnBonusCreateCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135E48
void mnBonusCreateDroppedTokenViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xF, 0x80000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80135EE8
void mnBonusCreateCursor(s32 port_id)
{
	GObj* cursor_gobj;
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

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x1E, cursor_starting_display_orders[port_id], -1, GetAddressFromOffset(gMnBonusFiles[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnBonusHandleButtonPresses, 2);

	cursor_gobj->user_data.s = port_id;
	gMnBonusPanel.cursor = cursor_gobj;
	SObjGetStruct(cursor_gobj)->pos.x = 80.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnBonusRedrawCursor(cursor_gobj, port_id, 0);
	gMnBonusPanel.is_selected = FALSE;
}

// 0x80136034
void mnBonusCreateToken(s32 port_id)
{
	GObj* token_gobj;
	mnCharPanelBonus* panel_info;
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

	token_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, lbCommonDrawSObjAttr, 0x1F, orders1[port_id], -1, GetAddressFromOffset(gMnBonusFiles[0], offsets_no_cpu[port_id]), 1, mnBonusSyncTokenAndFighter, 1);

	token_gobj->user_data.s = port_id;
	gMnBonusPanel.token = token_gobj;

	SObjGetStruct(token_gobj)->pos.x = 51.0F;
	SObjGetStruct(token_gobj)->pos.y = 161.0F;
	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (D_ovl29_801376D8[port_id] != -1)
		gMnBonusPanel.holder_port_id = port_id;
	else
		gMnBonusPanel.holder_port_id = 4;
}

// 0x801361A4 - Unused?
void func_ovl29_801361A4() {}

// 0x801361AC
void mnBonusAutopositionTokenFromPortraitEdges(s32 port_id)
{
	s32 portrait_id = mnBonusGetPortraitId(gMnBonusPanel.char_id);
	f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
	f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(gMnBonusPanel.token)->pos.x + gMnBonusPanel.token_x_velocity + 13.0F;
	f32 new_pos_y = SObjGetStruct(gMnBonusPanel.token)->pos.y + gMnBonusPanel.token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
	{
		gMnBonusPanel.token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	}
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
	{
		gMnBonusPanel.token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
	if (new_pos_y < (portrait_edge_y + 5.0F))
	{
		gMnBonusPanel.token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	}
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
	{
		gMnBonusPanel.token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
}

// 0x8013635C
void mnBonusAutopositionPlacedToken(s32 port_id)
{
	mnBonusAutopositionTokenFromPortraitEdges(port_id);
}

// 0x8013637C
void mnBonusAutopositionRecalledToken(s32 port_id)
{
	f32 new_y_velocity, new_x_velocity;

	gMnBonusPanel.recall_frame_counter += 1;

	if (gMnBonusPanel.recall_frame_counter < 11)
	{
		new_x_velocity = (gMnBonusPanel.recall_end_x - gMnBonusPanel.recall_start_x) / 10.0F;

		if (gMnBonusPanel.recall_frame_counter < 6)
		{
			new_y_velocity = (gMnBonusPanel.recall_mid_y - gMnBonusPanel.recall_start_y) / 5.0F;
		}
		else
		{
			new_y_velocity = (gMnBonusPanel.recall_end_y - gMnBonusPanel.recall_mid_y) / 5.0F;
		}

		gMnBonusPanel.token_x_velocity = new_x_velocity;
		gMnBonusPanel.token_y_velocity = new_y_velocity;
	}
	else if (gMnBonusPanel.recall_frame_counter == 11)
	{
		mnBonusHandleCursorPickup(port_id);

		gMnBonusPanel.token_x_velocity = 0.0F;
		gMnBonusPanel.token_y_velocity = 0.0F;
	}

	if (gMnBonusPanel.recall_frame_counter == 30)
		gMnBonusPanel.is_recalling = FALSE;
}

// 0x80136450
void mnBonusAutopositionToken(s32 port_id)
{
	if (gMnBonusPanel.is_recalling)
		mnBonusAutopositionRecalledToken(gMnBonusHumanPanelPort);

	if (gMnBonusPanel.is_selected)
		mnBonusAutopositionPlacedToken(0);
}

// 0x8013649C
void mnBonusCreateTokenAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x18U, 0x80000000U), mnBonusAutopositionToken, 1, 1);
}

// 0x801364E0
void mnBonusSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((gMnBonusPanel.unk_0x88 == 0) && (gMnBonusPanel.char_id != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMnBonusPanel.char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBonusPanel.char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBonusPanel.char_id];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x801365B8
void mnBonusCreateWhiteCircles()
{
	GObj* white_circle_gobj;

	white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

	gcSetupCommonDObjs(white_circle_gobj, GetAddressFromOffset(gMnBonusFiles[10], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

	gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, 0x80000000U, -1);

	gcAddMObjAll(white_circle_gobj, GetAddressFromOffset(gMnBonusFiles[10], &FILE_016_WHITE_CIRCLE_OFFSET_1));

	gcAddGObjProcess(white_circle_gobj, mnBonusSyncWhiteCircleSizeAndDisplay, 1, 1);

	gcPlayAnimAll(white_circle_gobj);

	DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -700.0f;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -850.0f;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
}

// 0x80136698
void mnBonusBlinkIfReadyToFight(GObj* gobj)
{
	if (gMnBonusCharSelected)
	{
		gMnBonusPressStartFlashTimer += 1;

		if (gMnBonusPressStartFlashTimer == 0x28)
			gMnBonusPressStartFlashTimer = 0;

		gobj->flags = (gMnBonusPressStartFlashTimer < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		gMnBonusPressStartFlashTimer = 0;
	}
}

// 0x80136704
void mnBonusCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x23U, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mnBonusBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMnBonusFiles[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMnBonusFiles[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
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
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mnBonusBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMnBonusFiles[0], &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMnBonusFiles[0], &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 0x80136980 - Unused?
void func_ovl29_80136980() {}

// 0x80136988 - Unused?
void func_ovl29_80136988() {}

// 0x80136990 - Unused?
void func_ovl29_80136990() {}

// 0x80136998
void mnBonusSaveMatchInfo()
{
	gSceneData.spgame_player = gMnBonusHumanPanelPort;
	gSceneData.bonus_fkind = gMnBonusPanel.char_id;
	gSceneData.bonus_costume = gMnBonusPanel.costume_id;
}

// 0x801369C8 - Unused?
void func_ovl29_801369C8() {}

// 0x801369D0
void mnBonusMain(s32 arg0)
{
	gMnBonusFramesElapsed += 1;

	if (gMnBonusFramesElapsed == gMnBonusMaxFramesElapsed)
	{
		gSceneData.scene_prev = gSceneData.scene_curr;
		gSceneData.scene_curr = nSCKindTitle;

		mnBonusSaveMatchInfo();
		syTaskmanSetLoadScene();

		return;
	}

	if (!scSubsysControllerCheckNoInputAll())
		gMnBonusMaxFramesElapsed = gMnBonusFramesElapsed + I_MIN_TO_TICS(5);

	if (gMnBonusCharSelected && !gMnBonusPanel.unk_0x88)
		gMnBonusCharSelected = 0;

	if (gMnBonusCharSelected && (--gMnBonusAutostartTimer == 0 || gPlayerControllers[gMnBonusHumanPanelPort].button_tap & START_BUTTON))
	{

		if (gMnBonusType == 0)
			gSceneData.scene_prev = nSCKind1PBonus1Fighters;
		else
			gSceneData.scene_prev = nSCKind1PBonus2Fighters;

		gSceneData.scene_curr = nSCKind1PBonusGame;

		mnBonusSaveMatchInfo();
		syTaskmanSetLoadScene();
	}
}

// 0x80136B14 - Unused?
void func_ovl29_80136B14() {}

// 0x80136B1C - Unused?
void func_ovl29_80136B1C() {}

// 0x80136B24
void mnBonusInitPort()
{
	gMnBonusPanel.held_port_id = -1;
	gMnBonusPanel.white_square = NULL;
	gMnBonusPanel.p_sfx = NULL;
	gMnBonusPanel.sfx_id = 0;
	gMnBonusPanel.is_selected = FALSE;
	gMnBonusPanel.is_recalling = FALSE;
	gMnBonusPanel.char_id = nFTKindNull;
}

// 0x80136B54
void mnBonusLoadMatchInfo()
{
	gMnBonusFramesElapsed = 0;
	gMnBonusMaxFramesElapsed = gMnBonusFramesElapsed + I_MIN_TO_TICS(5);
	D_ovl29_801376D4 = 5;
	gMnBonusCharSelected = FALSE;
	gMnBonusHumanPanelPort = gSceneData.spgame_player;
	gMnBonusTotalTimeGobj = NULL;
	gMnBonusIsTeamBattle = D_800A4B18.is_team_battle;
	gMnBonusRule = D_800A4B18.game_rules;

	mnBonusInitPort();

	gMnBonusPanel.min_frames_elapsed_until_recall = 0;
	gMnBonusCharacterUnlockedMask = gSaveData.fighter_mask;

	if (gSceneData.scene_curr == 0x13)
		gMnBonusType = 0;
	else
		gMnBonusType = 1;
}

// 0x80136C14
void mnBonusInitPanel(s32 port_id)
{
	if (D_ovl29_801376D8[port_id] != -1)
		mnBonusCreateCursor(port_id);
	else
		gMnBonusPanel.cursor = NULL;

	mnBonusCreateToken(port_id);
	mnBonusCreatePanel(port_id);
	mnBonusResetPort(port_id);
}

// 0x80136C80 - Unused?
void func_ovl29_80136C80() {}

// 0x80136C88
sb32 mnBonusAreAllCompleted()
{
	s32 i;

	for (i = 0; i < 12; i++)
	{
		if (!mnBonusIsCompleted(i))
			return FALSE;
	}

	return TRUE;
}

// 0x80136CD8
void mnBonusInitCSS()
{
	s32 bar, baz;
	LBRelocSetup rl_setup;
	f32 foo;
	s32 i;
	s32 j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl29_80137A38;
	rl_setup.status_buffer_size = 0x78;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl29_80137A00;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl29_80136F50, 11U, gMnBonusFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl29_80136F50, 11U), 0x10U));

	gcMakeGObjSPAfter(0x400U, mnBonusMain, 0xFU, 0x80000000U);
	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);
	efParticleInitAll();
	efManagerInitEffects();
	ftManagerAllocFighter(1U, 1);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	gMnBonusFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10U);

	mnBonusLoadMatchInfo();
	mnBonusCreatePortraitViewport();
	mnBonusCreateCursorViewport();
	mnBonusCreateDroppedTokenViewport();
	mnBonusCreatePanelViewport();
	mnBonusCreateFighterViewport();
	mnBonusCreatePortraitBackgroundViewport();
	mnBonusCreatePortraitWhiteBackgroundViewport();
	mnBonusCreateBackgroundViewport();
	mnBonusCreateTitleOptionsAndBackViewport();
	mnBonusCreateReadyToFightViewport();
	mnBonusCreateBackground();
	mnBonusCreatePortraits();
	mnBonusInitPanel(gMnBonusHumanPanelPort);
	mnBonusDrawTitleAndBack();

	if (mnBonusAreAllCompleted())
		mnDrawBonusTotalTime();

	mnBonusCreateTokenAutopositionRoutine();
	mnBonusCreateWhiteCircles();
	mnBonusCreateReadyToFightObjects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSceneData.scene_prev != nSCKindVSMaps)
		auPlaySong(0, 0xA);
}

// 0x80137530
syVideoSetup D_ovl29_80137530 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x8013754C
scRuntimeInfo D_ovl29_8013754C = {

	0x00000000, 0x8000A5E4,
	func_8000A340, &lOverlay29ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004A38, 0x00000200,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x00008000,
	mnBonusFuncLights, update_contdata,
	0x00000000, 0x00000100, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnBonusInitCSS
};

// 0x80136EF4
void bonus_css_entry()
{
	D_ovl29_80137530.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl29_80137530);
	D_ovl29_8013754C.arena_size = (u32) ((uintptr_t)&lOverlay29ArenaHi - (uintptr_t)&lOverlay29ArenaLo);
	syTaskmanInit(&D_ovl29_8013754C);
}