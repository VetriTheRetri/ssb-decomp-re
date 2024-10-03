#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/system_00.h>

#include "character_select.h"

// Externs
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay27ArenaLo;  // 801396D0
extern intptr_t lOverlay27ArenaHi;  // 803903E0

extern f32 menu_zoom[12]; // dSCSubsysFighterScales
extern scBattleState D_800A4B18;

// Offsets
extern intptr_t FILE_011_START_IMAGE_OFFSET; // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET; // Press Start's "Press" texture
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET; // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET; // file 0x011 image offset for Time picker texture
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET; // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET; // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET; // Ready to Fight banner bg
extern intptr_t FILE_011_BACK_IMAGE_OFFSET; // file 0x011 image offset for
extern intptr_t FILE_013_XBOX_IMAGE_OFFSET; // file 0x013 image offset
extern intptr_t FILE_013_WHITE_SQUARE; // white square
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET; // file 0x013 image offset for portrait bg (fire) image
extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET; // file 0x015 image offset for background tile
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle
extern intptr_t FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET;
extern intptr_t FILE_017_PARENTHESIS_R_IMAGE_OFFSET;
extern intptr_t FILE_017_PARENTHESIS_L_IMAGE_OFFSET;
extern intptr_t FILE_017_LEVEL_IMAGE_OFFSET;
extern intptr_t FILE_017_STOCK_IMAGE_OFFSET;
extern intptr_t FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET;
extern intptr_t FILE_017_SMASH_LOGO_IMAGE_OFFSET;
extern intptr_t FILE_017_OPTION_IMAGE_OFFSET;
extern intptr_t FILE_017_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_019_POLYGON_STOCK_ICON_IMAGE_OFFSET;
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET;


extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();
extern void gcDrawDObjTreeDLLinksForGObj(GObj *gobj);
extern void func_80007080(void*, f32, f32, f32, f32);



// Forward declarations
void mn1PRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state);
void mn1PAnnounceFighter(s32 port_id, s32 panel_id);
s32 mn1PGetFtKindFromTokenPositionEvenIfLocked();
void mn1PReorderCursorsOnPlacement(s32 port_id);
void mn1PDrawStock(s32 stock, s32 ft_kind);
void mn1PCreateWhiteSquare(s32 port_id);
void mn1PSyncNameAndLogo(s32 port_id);
s32 mn1PGetPrevTimerValue(s32 arg0);
s32 mn1PGetNextTimerValue(s32 arg0);
sb32 mn1PIsReadyToFight();
void mn1PSaveMatchInfo();


// DATA
// 801385B0
s32 D_ovl27_801385B0[] = {

	0x000080C7, 0x914B4001, 0x30017085, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x000031A1, 0x39E52119, 0x2113211D, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00008BC1, 0x9C0341C1, 0x31417B41, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00001AC7, 0x230901C1, 0x09431245, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// 80138630
u32 D_ovl27_80138630[11] = {

	0x11, 0x14, 0x15, 0x12, 0x13, 0x17, 0x18, 0x19, 0x21, 0x24, 0x16
};

// 80138660
s32 D_ovl27_80138660[] = {

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
// 80138EE0
s32 D_ovl27_80138EE0[2];

// 80138EE8
mnCharPanel1P gMN1PPanel;

// 80138F70
GObj* gMN1PPickerGObj; // 80138F70; // stock/time picker

// 80138F74
s32 gMN1PFramesElapsed; // 80138F74; // frames elapsed on CSS

// 80138F78 frames to wait until exiting the CSS
s32 gMN1PMaxFramesElapsed;

// 80138F7C looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 gMN1PPressStartFlashTimer;

// 80138F80
s32 gMN1PTimerValue;

// 80138F80
s32 D_ovl27_80138F80[4];

// 80138F98
s32 gMN1PStartDelayTimer;

// 80138F9C
sb32 gMN1PIsStartTriggered;

// 80138FA0
s32 gMN1PIsTeamBattle;

// 80138FA4
s32 gMN1PRule;

// 80138FA8
s32 gMN1PHumanPanelPort;

// 80138FAC
GObj* gMN1PHighscoreGObj;

// 80138FB0
GObj* gMN1PBonusesGObj;

// 80138FB4 level
s32 gMN1PLevelValue;

// 80138FB8 stocks
s32 gMN1PStockValue;

// 80138FBC
GObj* gMN1PLevelGObj;

// 80138FC0
GObj* gMN1PStockGObj;

// 80138FC4
void* gMN1PAnimHeap;

// 80138FC8 flag indicating which bonus chars are available
u16 gMN1PCharacterUnlockedMask;

// 80138FCA
u16 D_ovl27_80138FCA;

// 80138FCC
s32 gMN1PFtKind;

// 80138FD0
s32 gMN1PCostumeId[182];

// 801392A8
lbFileNode D_ovl27_801392A8[7];

// 801392E0
u32 D_ovl27_801392E0[240];

// 801396A0
s32 gMN1PFilesArray[11];

// 80131B00
void mn1PSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
s32 mn1PPow(s32 num, s32 pow)
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

// 80131BF8
void mn1PSetTextureColors(SObj* sobj, u32 colors[])
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

// 80131C40
s32 mn1PGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mn1PPow(10, numDigits - 1) != 0 ? num / mn1PPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 80131CEC
void mn1PCreateSmallerNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
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

	if (num < 0)
		num = 0;

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMN1PFilesArray[9], number_offsets[num % 10]));
	mn1PSetTextureColors(number_sobj, colors);
	left_x -= 8;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits)
	)
	{
		digit = (mn1PPow(10, place) != 0) ? num / mn1PPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMN1PFilesArray[9], number_offsets[digit % 10]));
		mn1PSetTextureColors(number_sobj, colors);
		left_x -= 8;
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 80131F5C
s32 mn1PGetChrIndex(const char chr)
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
				return chr - 'A';
	}
}

// 80131FD4
f32 mn1PGetChrSpacing(const char *s, s32 c)
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

// 801320F8
void mn1PDrawString(GObj* gobj, const char *str, f32 x, f32 y, s32 color[3])
{
	intptr_t chrOffsets[29] = {

		0x040, 0x0D0, 0x160, 0x1F0, 0x280, 0x310, 0x3A0, 0x430, 0x4C0, 0x550,
		0x5E0, 0x670, 0x700, 0x790, 0x820, 0x8B0, 0x940, 0x9D0, 0xA60, 0xAF0,
		0xB80, 0xC10, 0xCA0, 0xD30, 0xDC0, 0xE50, 0xED0, 0xF60, 0xFD0
	};
	f32 chrWidths[29] = {

		5.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 4.0,
		4.0, 5.0, 4.0, 4.0, 5.0, 4.0, 5.0, 5.0, 5.0, 5.0, 4.0, 2.0, 7.0, 3.0
	};
	SObj* chr_sobj;
	f32 start_x = x;
	s32 i;
	sb32 is_number;

	for (i = 0; str[i] != 0; i++)
	{
		is_number = ((str[i] >= '0') && (str[i] <= '9')) ? TRUE : FALSE;

		if ((is_number) || (str[i] == ' '))
		{
			if (str[i] == ' ')
				start_x += 3.0F;
			else
				start_x += str[i] - '0';
		}
		else
		{
			chr_sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMN1PFilesArray[8], chrOffsets[mn1PGetChrIndex(str[i])]));
			chr_sobj->pos.x = start_x;

			start_x += chrWidths[mn1PGetChrIndex(str[i])] + mn1PGetChrSpacing(str, i);

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

// 80132384
void mn1PSelectCharWithToken(s32 port_id, s32 select_button)
{
	s32 held_port_id = gMN1PPanel.held_port_id,
		costume_id = ftParamGetCostumeCommonID(gMN1PPanel.char_id, select_button);

	ftParamInitModelTexturePartsAll(gMN1PPanel.player, costume_id, 0);

	gMN1PPanel.costume_id = costume_id;
	gMN1PPanel.is_selected = TRUE;
	gMN1PPanel.holder_port_id = 4;
	gMN1PPanel.cursor_state = mnCursorStateNotHoldingToken;

	mn1PRedrawCursor(gMN1PPanel.cursor, port_id, gMN1PPanel.cursor_state);

	gMN1PPanel.held_port_id = -1;
	gMN1PPanel.unk_0x88 = TRUE;

	mn1PReorderCursorsOnPlacement(held_port_id);
	mn1PAnnounceFighter(port_id, held_port_id);
	mn1PCreateWhiteSquare(held_port_id);
	mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
}

// 8013243C
f32 mn1PGetNextPortraitX(s32 portrait_id, f32 current_x_position)
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

// 80132550
sb32 mn1PCheckFighterIsXBoxed(s32 ft_kind)
{
	return FALSE;
}

// 8013255C
void mn1PSetPortraitX(GObj *portrait_gobj)
{
	f32 new_portrait_x = mn1PGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

	if (new_portrait_x != -1.0F)
	{
		SObjGetStruct(portrait_gobj)->pos.x = new_portrait_x;

		if (SObjGetStruct(portrait_gobj)->next != NULL)
			SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
	}
}

// 801325D8
void mn1PInitializePortraitBackgroundPosition(SObj *portrait_bg_sobj, s32 portrait_id)
{
	Vec2f coordinates[12] = {

		{ -35.0, 36.0 }, { -35.0, 36.0 }, { -35.0, 36.0 }, { 310.0, 36.0 }, { 310.0, 36.0 }, { 310.0, 36.0 },
		{ -35.0, 79.0 }, { -35.0, 79.0 }, { -35.0, 79.0 }, { 310.0, 79.0 }, { 310.0, 79.0 }, { 310.0, 79.0 }
	};

	portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
	portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 80132634
void mn1PAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x,
		y = portrait_sobj->pos.y;
	s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, GetAddressFromOffset(gMN1PFilesArray[4], xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr| SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 801326C8
sb32 mn1PGetIsLocked(s32 char_id)
{
	switch (char_id)
	{
		case nFTKindNess:
			return (gMN1PCharacterUnlockedMask & (1 << nFTKindNess)) ? FALSE : TRUE;

		case nFTKindPurin:
			return (gMN1PCharacterUnlockedMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

		case nFTKindCaptain:
			return (gMN1PCharacterUnlockedMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

		case nFTKindLuigi:
			return (gMN1PCharacterUnlockedMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;
	}
	return FALSE;
}

// 80138860
s32 D_ovl27_80138860[] = {

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

// 80132794 - Unused?
void func_ovl27_80132794() {}

// 8013279C
s32 mn1PGetFtKind(s32 portrait_id)
{
	s32 ftKind_order[12] = {

		4, 0, 2, 5, 3, 7, 11, 6, 8, 1, 9, 10
	};

	return ftKind_order[portrait_id];
}

// 801327EC
s32 mn1PGetPortraitId(s32 ft_kind)
{
	s32 portrait_id_order[12] = {

		1, 9, 2, 4, 0, 3, 7, 5, 8, 10, 11, 6
	};

	return portrait_id_order[ft_kind];
}

// 8013283C
void mn1PRenderPortraitWithNoise(GObj *portrait_gobj)
{
	gDPPipeSync(gSYProgDLHeads[0]++);
	gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYProgDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 801328FC
void mn1PCreateLockedPortrait(s32 portrait_id)
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
	gcAddGObjProcess(texture_gobj, mn1PSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	texture_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	texture_gobj->user_data.s = portrait_id;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mn1PRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mn1PSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMN1PFilesArray[4], locked_portrait_offsets[mn1PGetFtKind(portrait_id)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;

	texture_gobj->user_data.s = portrait_id;
	mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mn1PSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	texture_sobj->sprite.attr &= ~SP_FASTCOPY;
	texture_sobj->sprite.attr |= SP_TRANSPARENT;
	texture_sobj->envcolor.r = 0x5B;
	texture_sobj->envcolor.g = 0x41;
	texture_sobj->envcolor.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.s = portrait_id;
	mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 80132BA4
void mn1PCreatePortrait(s32 portrait_id)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj *texture_sobj;
	intptr_t portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mn1PGetIsLocked(mn1PGetFtKind(portrait_id)))
		mn1PCreateLockedPortrait(portrait_id);
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x19U, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x20U, 0x80000000U, -1);
		portrait_bg_gobj->user_data.p = portrait_id;
		gcAddGObjProcess(portrait_bg_gobj, mn1PSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_bg_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
		gcAddGObjProcess(portrait_gobj, mn1PSetPortraitX, 1, 1);

		texture_sobj = lbCommonMakeSObjForGObj(portrait_gobj, GetAddressFromOffset(gMN1PFilesArray[4], portrait_offsets[mn1PGetFtKind(portrait_id)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr| SP_TRANSPARENT;
		portrait_gobj->user_data.p = portrait_id;

		// this conditionally draws a big red box with an X in it, but this check always fails
		if (mn1PCheckFighterIsXBoxed(mn1PGetFtKind(portrait_id)))
			mn1PAddRedXBoxToPortrait(portrait_gobj, portrait_id);

		mn1PInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	}
}

// 80132D60
void mn1PCreatePortraits()
{
	s32 portrait_id;

	for (portrait_id = 0; portrait_id < 12; portrait_id++)
		mn1PCreatePortrait(portrait_id);
}

// 80132DA0
void mn1PSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
{
	SObj* sobj;
	Vec2f coords[12] = {

		{ 13.0, 28.0 }, { 6.0 , 25.0 }, { 5.0 , 25.0 }, { 13.0, 25.0 }, { 13.0, 28.0 }, { 13.0, 28.0 },
		{ 16.0, 25.0 }, { 4.0 , 25.0 }, { 13.0, 25.0 }, { 13.0, 25.0 }, { 13.0, 25.0 }, { 13.0, 25.0 }
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
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, GetAddressFromOffset(gMN1PFilesArray[1], logo_offsets[ft_kind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
		sobj->sprite.red = 0;
		sobj->sprite.green = 0;
		sobj->sprite.blue = 0;
		sobj->pos.x = 35.0F;
		sobj->pos.y = 144.0F;

		// name
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, GetAddressFromOffset(gMN1PFilesArray[0], name_offsets[ft_kind]));
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
		sobj->pos.x = 33.0F;
		sobj->pos.y = 202.0F;
	}
}

// 80132F1C
void mn1PCreatePortraitViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x28, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132FBC
void mn1PCreatePortraitBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x3C, 0x100000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013305C
void mn1PCreatePortraitWhiteBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x32, 0x200000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801330FC
void mn1PCreatePanelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x1E, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013319C
void mn1PUpdatePanel(GObj* panel_gobj, s32 port_id)
{
	SObj* panel_sobj;
	intptr_t offsets[4] = {

		0x103F8, 0x10420, 0x10470, 0x10448
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	panel_sobj->sprite.LUT = GetAddressFromOffset(gMN1PFilesArray[0], offsets[port_id]);
}

// 801331F4
void mn1PCreatePanel(s32 port_id)
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
	gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, 0x80000000, -1, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(gobj)->pos.x = 25.0F;
	SObjGetStruct(gobj)->pos.y = 127.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	gMN1PPanel.panel = gobj;

	type_sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMN1PFilesArray[0], type_offsets[port_id]));
	type_sobj->pos.x = type_x_offsets[port_id] + 25.0F;
	type_sobj->pos.y = 132.0F;
	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;

	mn1PUpdatePanel(gobj, port_id);

	// name/logo
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gMN1PPanel.name_logo = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);

	mn1PSyncNameAndLogo(port_id);
}

// 801333D4
void mn1PCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
	intptr_t number_offsets[10] = {

		0x5388, 0x5440, 0x5558, 0x5668, 0x5778,
		0x5888, 0x5998, 0x5AA8, 0x5BB8, 0x5CC8
	};
	f32 widths[10] = {

		8.0, 6.0, 9.0, 8.0, 8.0,
		9.0, 8.0, 8.0, 8.0, 9.0
	};
	SObj* number_sobj;
	f32 left_x = x;
	s32 place;
	s32 numDigits;
	s32 digit;

	if (num < 0)
		num = 0;

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMN1PFilesArray[0], number_offsets[num % 10]));
	mn1PSetTextureColors(number_sobj, colors);
	left_x -= widths[num % 10];
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for
	(
		place = 1, numDigits = (pad) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits);
		place < numDigits;
		place++, numDigits = (pad) ? maxDigits : mn1PGetNumberOfDigits(num, maxDigits)
	)
	{
		digit = (mn1PPow(10, place) != 0) ? num / mn1PPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gMN1PFilesArray[0], number_offsets[digit % 10]));
		mn1PSetTextureColors(number_sobj, colors);
		left_x -= widths[digit % 10];
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 80133680
void mn1PDrawTimerValue(s32 num)
{
	s32 colors[6] = {

		0x32, 0x1C, 0x0E,
		0xFF, 0xFF, 0xFF
	};
	SObj* infinity_sobj;

	while (SObjGetStruct(gMN1PPickerGObj)->next != NULL)
		gcEjectSObj(SObjGetStruct(gMN1PPickerGObj)->next);

	if (num == 100)
	{
		infinity_sobj = lbCommonMakeSObjForGObj(gMN1PPickerGObj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_INFINITY_IMAGE_OFFSET));
		infinity_sobj->pos.x = 194.0F;
		infinity_sobj->pos.y = 24.0F;
		infinity_sobj->envcolor.r = colors[0];
		infinity_sobj->envcolor.g = colors[1];
		infinity_sobj->envcolor.b = colors[2];
		infinity_sobj->sprite.red = colors[3];
		infinity_sobj->sprite.green = colors[4];
		infinity_sobj->sprite.blue = colors[5];
		infinity_sobj->sprite.attr &= ~SP_FASTCOPY;
		infinity_sobj->sprite.attr |= SP_TRANSPARENT;
		return;
	}

	if (num < 10)
		mn1PCreateNumber(gMN1PPickerGObj, num, 205.0F, 23.0F, colors, 2, 0);
	else
		mn1PCreateNumber(gMN1PPickerGObj, num, 209.0F, 23.0F, colors, 2, 0);
}

// 80133804
void mn1PDrawTimerPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMN1PPickerGObj != NULL)
		gcEjectGObj(gMN1PPickerGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
	gMN1PPickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mn1PDrawTimerValue(gMN1PTimerValue);
}

// 801338EC
void mn1PCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, GetAddressFromOffset(gMN1PFilesArray[2], &FILE_015_BACKGROUND_IMAGE_OFFSET));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 80133990
void mn1PCreateBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x4000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133A30
void mn1PRenderOptionsSection(GObj* options_gobj)
{
	// Draw the rectangle behind the Option image
	gDPPipeSync(gSYProgDLHeads[0]++);
	gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetCombineLERP(gSYProgDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPSetPrimColor(gSYProgDLHeads[0]++, 0, 0, 87, 96, 136, 255);
	gDPFillRectangle(gSYProgDLHeads[0]++, 157, 136, 320, 141);
	gDPPipeSync(gSYProgDLHeads[0]++);
	gDPSetRenderMode(gSYProgDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
	gDPSetCycleType(gSYProgDLHeads[0]++, G_CYC_1CYCLE);

	lbCommonClearExternSpriteParams();
	lbCommonDrawSObjAttr(options_gobj);
}

// 80133B74
SObj* mn1PGetArrowSObj(GObj* arrow_gobj, s32 direction)
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

// 80133BC0
void mn1PSyncAndBlinkLevelArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 port_id = arrow_gobj->user_data.s;
	s32 blink_duration = 10;

	while (TRUE)
	{
		blink_duration--;

		if (blink_duration == 0)
		{
			blink_duration = 10;
			arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
		}

		if (gMN1PLevelValue == 0)
		{
			arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mn1PGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = 194.0F;
			arrow_sobj->pos.y = 158.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (gMN1PLevelValue == 4)
		{
			arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mn1PGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = 269.0F;
			arrow_sobj->pos.y = 158.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 80133D9C
void gMN1PDrawLevel(s32 level)
{
	GObj* level_gobj;
	SObj* level_sobj;
	intptr_t offsets[5] = {

		0x438, 0x098, 0x2D8, 0x178, 0x598
	};
	Vec2f positions[5] = {

		{ 204.0, 159.0 },
		{ 219.0, 159.0 },
		{ 209.0, 159.0 },
		{ 219.0, 159.0 },
		{ 205.0, 159.0 }
	};
	syColorRGB colors[5] = {

		{ 0x41, 0x6F, 0xE4 },
		{ 0x8D, 0xBB, 0x5A },
		{ 0xE4, 0xBE, 0x41 },
		{ 0xE4, 0x78, 0x41 },
		{ 0xE4, 0x41, 0x41 }
	};

	if (gMN1PLevelGObj != NULL)
		gcEjectGObj(gMN1PLevelGObj);

	gMN1PLevelGObj = level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(level_gobj, lbCommonDrawSObjAttr, 0x22U, 0x80000000U, -1);

	level_sobj = lbCommonMakeSObjForGObj(level_gobj, GetAddressFromOffset(gMN1PFilesArray[6], offsets[level]));
	level_sobj->sprite.attr &= ~SP_FASTCOPY;
	level_sobj->sprite.attr |= SP_TRANSPARENT;
	level_sobj->pos.x = positions[level].x;
	level_sobj->pos.y = positions[level].y;
	level_sobj->sprite.red = colors[level].r;
	level_sobj->sprite.green = colors[level].g;
	level_sobj->sprite.blue = colors[level].b;
}

// 80133F30
void mn1PCreateLevelAndArrows()
{
	GObj* arrows_gobj;

	arrows_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(arrows_gobj, lbCommonDrawSObjAttr, 0x22U, 0x80000000U, -1);
	gcAddGObjProcess(arrows_gobj, mn1PSyncAndBlinkLevelArrows, 0, 1);
	gMN1PDrawLevel(gMN1PLevelValue);
}

// 80133FA4
void mn1PSyncAndBlinkStockArrows(GObj* arrow_gobj)
{
	SObj* arrow_sobj;
	s32 port_id = arrow_gobj->user_data.s;
	s32 blink_duration = 10;

	while (TRUE)
	{
		blink_duration--;

		if (blink_duration == 0)
		{
			blink_duration = 10;
			arrow_gobj->flags = arrow_gobj->flags == 1 ? 0 : 1;
		}

		if (gMN1PStockValue == 0)
		{
			arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mn1PGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = 194.0F;
			arrow_sobj->pos.y = 178.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (gMN1PStockValue == 4)
		{
			arrow_sobj = mn1PGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mn1PGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = 269.0F;
			arrow_sobj->pos.y = 178.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 8013419C
void mn1PDrawStock(s32 stock, s32 ft_kind)
{
	GObj* stock_gobj;
	SObj* icon_sobj;
	ftStruct* ft_struct;

	if (gMN1PStockGObj != NULL)
		gcEjectGObj(gMN1PStockGObj);

	gMN1PStockGObj = stock_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(stock_gobj, lbCommonDrawSObjAttr, 0x22U, 0x80000000U, -1);

	for (stock = stock + 1; stock > 0; stock--)
	{
		if (ft_kind == nFTKindNull)
		{
			icon_sobj = lbCommonMakeSObjForGObj(stock_gobj, GetAddressFromOffset(gMN1PFilesArray[7], &FILE_019_POLYGON_STOCK_ICON_IMAGE_OFFSET));
			icon_sobj->pos.y = 179.0F;
		}
		else
		{
			ft_struct = gMN1PPanel.player->user_data.p;
			icon_sobj = lbCommonMakeSObjForGObj(stock_gobj, ft_struct->attributes->sprites->stock_spr);
			icon_sobj->sprite.LUT = ft_struct->attributes->sprites->stock_lut[ft_struct->costume];
			icon_sobj->pos.y = 178.0F;
		}

		icon_sobj->pos.x = (stock - 1) * 12 + 207.0F;
		icon_sobj->sprite.attr &= ~SP_FASTCOPY;
		icon_sobj->sprite.attr |= SP_TRANSPARENT;
	}
}

// 8013434C
void mn1PCreateStockAndArrows()
{
	GObj* arrows_gobj;

	arrows_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(arrows_gobj, lbCommonDrawSObjAttr, 0x22U, 0x80000000U, -1);
	gcAddGObjProcess(arrows_gobj, mn1PSyncAndBlinkStockArrows, 0, 1);
	mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
}

// 801343C8
void mn1PDrawPickerOptionsTitleAndBack()
{
	GObj* picker_gobj;
	SObj* picker_sobj;

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, mn1PRenderOptionsSection, 0x22, 0x80000000, -1, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_1_PLAYER_GAME_TITLE_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(picker_gobj)->pos.x = 27.0F;
	SObjGetStruct(picker_gobj)->pos.y = 24.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(picker_gobj)->sprite.red = 0xE3;
	SObjGetStruct(picker_gobj)->sprite.green = 0xAC;
	SObjGetStruct(picker_gobj)->sprite.blue = 4;

	mn1PDrawTimerPicker(gMN1PTimerValue);

	// Back image
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_BACK_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->pos.x = 244.0F;
	picker_sobj->pos.y = 23.0F;

	// Option texture
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_OPTION_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->envcolor.r = 0;
	picker_sobj->envcolor.g = 0;
	picker_sobj->envcolor.b = 0;
	picker_sobj->sprite.red = 0xAF;
	picker_sobj->sprite.green = 0xB1;
	picker_sobj->sprite.blue = 0xCC;
	picker_sobj->pos.x = 180.0F;
	picker_sobj->pos.y = 129.0F;

	// Level/Stock outline texture (mirrored vertically)
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_STOCK_LEVEL_OUTLINE_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->sprite.red = 0x57;
	picker_sobj->sprite.green = 0x60;
	picker_sobj->sprite.blue = 0x88;
	picker_sobj->cms = G_TX_WRAP;
	picker_sobj->cmt = G_TX_MIRROR;
	picker_sobj->masks = 0;
	picker_sobj->maskt = 5;
	picker_sobj->lrs = 0xB8;
	picker_sobj->lrt = 0x40;
	picker_sobj->pos.x = 128.0F;
	picker_sobj->pos.y = 141.0F;

	// Level label
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_LEVEL_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->sprite.red = 0xC5;
	picker_sobj->sprite.green = 0xB6;
	picker_sobj->sprite.blue = 0xA7;
	picker_sobj->pos.x = 145.0F;
	picker_sobj->pos.y = 159.0F;

	// Stock label
	picker_sobj = lbCommonMakeSObjForGObj(picker_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_STOCK_IMAGE_OFFSET));
	picker_sobj->sprite.attr &= ~SP_FASTCOPY;
	picker_sobj->sprite.attr |= SP_TRANSPARENT;
	picker_sobj->sprite.red = 0xC5;
	picker_sobj->sprite.green = 0xB6;
	picker_sobj->sprite.blue = 0xA7;
	picker_sobj->pos.x = 144.0F;
	picker_sobj->pos.y = 179.0F;
}

// 801346B8
void mn1PCreateTitleOptionsAndBackViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x46, 0x400000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80134758
u32 mn1PGetHighscore(s32 ft_kind)
{
	return gSaveData.spgame_records[ft_kind].spgame_hiscore;
}

// 8013476C
void mn1PDrawHighscore()
{
	GObj* highscore_gobj;
	s32 foo, bar;
	SObj* difficulty_sobj;
	s32 text_color[3] = {

		0x7E, 0x7C, 0x77
	};
	s32 number_color[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};
	syColorRGB colors[5] = {

		{ 0x41, 0x6F, 0xE4 },
		{ 0x8D, 0xBB, 0x5A },
		{ 0xE4, 0xBE, 0x41 },
		{ 0xE4, 0x78, 0x41 },
		{ 0xE4, 0x41, 0x41 }
	};
	s32 best_difficulty;
	s32 ft_kind = mn1PGetFtKindFromTokenPositionEvenIfLocked();

	if (gMN1PHighscoreGObj != NULL)
	{
		gcEjectGObj(gMN1PHighscoreGObj);
		gMN1PHighscoreGObj = NULL;
	}

	if (ft_kind != nFTKindNull)
	{
		gMN1PHighscoreGObj = highscore_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(highscore_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);

		mn1PDrawString(highscore_gobj, "HIGH SCORE", 142.0F, 201.0F, text_color);
		mn1PCreateSmallerNumber(highscore_gobj, mn1PGetHighscore(ft_kind), 256.0F, 198.0F, number_color, 8, 1);

		best_difficulty = gSaveData.spgame_records[ft_kind].spgame_best_difficulty;

		if (best_difficulty != 0)
		{
			difficulty_sobj = lbCommonMakeSObjForGObj(highscore_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_SMASH_LOGO_IMAGE_OFFSET));
			difficulty_sobj->sprite.attr &= ~SP_FASTCOPY;
			difficulty_sobj->sprite.attr |= SP_TRANSPARENT;
			difficulty_sobj->pos.x = 126.0F;
			difficulty_sobj->pos.y = 198.0F;
			difficulty_sobj->sprite.red = colors[best_difficulty - 1].r;
			difficulty_sobj->sprite.green = colors[best_difficulty - 1].g;
			difficulty_sobj->sprite.blue = colors[best_difficulty - 1].b;
		}
	}
}

// 80134968
s32 mn1PGetBonuses(s32 ft_kind)
{
	return gSaveData.spgame_records[ft_kind].spgame_bonuses;
}

// 8013497C
void mn1PDrawBonuses()
{
	GObj* bonuses_gobj;
	s32 foo, bar;
	SObj* parenthesis_sobj;
	s32 number_color[6] = {

		0x00, 0x00, 0x00, 0x40, 0x6F, 0xCD
	};
	s32 ft_kind = mn1PGetFtKindFromTokenPositionEvenIfLocked();

	if (gMN1PBonusesGObj != NULL)
	{
		gcEjectGObj(gMN1PBonusesGObj);
		gMN1PBonusesGObj = NULL;
	}

	if (ft_kind != nFTKindNull)
	{
		gMN1PBonusesGObj = bonuses_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
		gcAddGObjDisplay(bonuses_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);

		parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_L_IMAGE_OFFSET));
		parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
		parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
		parenthesis_sobj->pos.x = 258.0F;
		parenthesis_sobj->pos.y = 199.0F;
		parenthesis_sobj->sprite.red = 0x40;
		parenthesis_sobj->sprite.green = 0x6F;
		parenthesis_sobj->sprite.blue = 0xCD;

		parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_R_IMAGE_OFFSET));
		parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
		parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
		parenthesis_sobj->pos.x = 286.0F;
		parenthesis_sobj->pos.y = 199.0F;
		parenthesis_sobj->sprite.red = 0x40;
		parenthesis_sobj->sprite.green = 0x6F;
		parenthesis_sobj->sprite.blue = 0xCD;

		mn1PCreateSmallerNumber(bonuses_gobj, mn1PGetBonuses(ft_kind), 285.0F, 198.0F, number_color, 3, 1);
	}
}

// 80134B3C
void mn1PDrawHighscoreAndBonuses()
{
	mn1PDrawHighscore();
	mn1PDrawBonuses();
}

// 80134B64
s32 mn1PGetTotalHighscore()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
		sum += mn1PGetHighscore(i);

	return sum;
}

// 80134BB4
void mn1PDrawTotalHighscore()
{
	GObj* total_gobj;
	s32 foo, bar, baz;
	s32 text_color[3] = {

		0x7E, 0x7C, 0x77
	};
	s32 number_color[6] = {

		0x00, 0x00, 0x00, 0x7E, 0x7C, 0x77
	};

	total_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(total_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);
	mn1PDrawString(total_gobj, "TOTAL HIGH SCORE", 109.0F, 211.0F, text_color);
	mn1PCreateSmallerNumber(total_gobj, mn1PGetTotalHighscore(), 256.0F, 208.0F, number_color, 9, 1);
}

// 80134CB8
s32 mn1PGetTotalBonuses()
{
	s32 i;
	s32 sum = 0;

	for (i = 0; i < 12; i++)
		sum += mn1PGetBonuses(i);

	return sum;
}

// 80134D08
void mn1PDrawTotalBonuses()
{
	GObj* bonuses_gobj;
	s32 foo, bar;
	SObj* parenthesis_sobj;
	s32 number_color[6] = {

		0x00, 0x00, 0x00, 0x40, 0x6F, 0xCD
	};

	bonuses_gobj = gcMakeGObjSPAfter(0U, NULL, 0x17U, 0x80000000U);
	gcAddGObjDisplay(bonuses_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);

	parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_L_IMAGE_OFFSET));
	parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
	parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
	parenthesis_sobj->pos.x = 258.0F;
	parenthesis_sobj->pos.y = 209.0F;
	parenthesis_sobj->sprite.red = 0x40;
	parenthesis_sobj->sprite.green = 0x6F;
	parenthesis_sobj->sprite.blue = 0xCD;

	parenthesis_sobj = lbCommonMakeSObjForGObj(bonuses_gobj, GetAddressFromOffset(gMN1PFilesArray[5], &FILE_017_PARENTHESIS_R_IMAGE_OFFSET));
	parenthesis_sobj->sprite.attr &= ~SP_FASTCOPY;
	parenthesis_sobj->sprite.attr |= SP_TRANSPARENT;
	parenthesis_sobj->pos.x = 286.0F;
	parenthesis_sobj->pos.y = 209.0F;
	parenthesis_sobj->sprite.red = 0x40;
	parenthesis_sobj->sprite.green = 0x6F;
	parenthesis_sobj->sprite.blue = 0xCD;

	mn1PCreateSmallerNumber(bonuses_gobj, mn1PGetTotalBonuses(), 285.0F, 208.0F, number_color, 3, 1);
}

// 80134E88
void mn1PDrawTotalHighscoreAndBonuses()
{
	mn1PDrawTotalHighscore();
	mn1PDrawTotalBonuses();
}

// 80134EB0 - Unused?
void func_ovl27_80134EB0() {}

// 80134EB8 - Unused?
void func_ovl27_80134EB8() {}

// 80134EC0
s32 mn1PGetAvailableCostume(s32 ft_kind, s32 select_button)
{
	return ftParamGetCostumeCommonID(ft_kind, select_button);
}

// 80134EE0
s32 mn1PGetSelectedAnimation(s32 ft_kind)
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

// 80134F40
void mn1PRotateFighter(GObj *fighter_gobj)
{
	ftStruct* fp = ftGetStruct(fighter_gobj);
	s32 port_id = fp->player;

	if (gMN1PPanel.unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (!gMN1PPanel.selected_animation_started)
			{
				scSubsysFighterSetStatus(gMN1PPanel.player, mn1PGetSelectedAnimation(gMN1PPanel.char_id));

				gMN1PPanel.selected_animation_started = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(gMN1PPanel.player, mn1PGetSelectedAnimation(gMN1PPanel.char_id));

				gMN1PPanel.selected_animation_started = TRUE;
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

// 80135060
void mn1PSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 costume_id)
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
			initial_y_rotation = 0.0F;

		spawn_info.ft_kind = ft_kind;
		gMN1PPanel.costume_id = spawn_info.costume = costume_id;
		spawn_info.shade = 0;
		spawn_info.figatree_heap = gMN1PAnimHeap;
		spawn_info.player = port_id;
		gMN1PPanel.player = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		gcAddGObjProcess(fighter_gobj, mn1PRotateFighter, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = -1100.0F;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
	}
}

// 801351CC
void mn1PCreateFighterViewport()
{
	Camera *cam = CameraGetStruct((GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x48600, -1, 1, 1, 0, 1, 0));
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

// 801352BC
void mn1PRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state)
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

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gMN1PFilesArray[0], cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gMN1PFilesArray[0], type_offsets[port_id]));
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

// 801354CC
sb32 mn1PCheckPickerRightArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 210.0F) && (current_x <= 230.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 80135594
sb32 mn1PCheckPickerLeftArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_y = cursor_sobj->pos.y + 3.0F;

	range_check = (current_y < 12.0F) || (current_y > 35.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 140.0F) && (current_x <= 160.0F) ? TRUE : FALSE;
	if (range_check)
		return TRUE;

	return FALSE;
}

// 8013565C
sb32 mn1PCheckBackButtonPress(GObj* cursor_gobj)
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

// 80135724
sb32 mn1PCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(gMN1PPanel.token);

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

// 801357FC - Unused?
void func_ovl27_801357FC() {}

// 80135804
void mn1PSyncFighterDisplay(s32 port_id)
{
	s32 var_v0 = 0;

	if ((gMN1PPanel.char_id == nFTKindNull) && !gMN1PPanel.is_selected)
	{
		gMN1PPanel.player->flags = 1;
		mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
		mn1PDrawHighscoreAndBonuses();
		var_v0 = 1;
	}

	if (var_v0 == 0)
	{
		mn1PSpawnFighter(gMN1PPanel.player, port_id, gMN1PPanel.char_id, mn1PGetAvailableCostume(gMN1PPanel.char_id, 0));
		mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);
		mn1PDrawHighscoreAndBonuses();
		gMN1PPanel.player->flags = 0;
		gMN1PPanel.selected_animation_started = FALSE;
	}
}

// 801358BC - Unused?
void func_ovl27_801358BC() {}

// 801358C4
void mn1PSyncNameAndLogo(s32 port_id)
{
	if ((gMN1PPanel.char_id == nFTKindNull) && !gMN1PPanel.is_selected)
	{
		gMN1PPanel.name_logo->flags = 1;
	}
	else
	{
		gMN1PPanel.name_logo->flags = 0;
		mn1PSetNameAndLogo(gMN1PPanel.name_logo, port_id, gMN1PPanel.char_id);
	}
}

// 80135924
void mn1PRemoveWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;

	white_square_gobj = gMN1PPanel.white_square;
	if (white_square_gobj != NULL)
	{
		gMN1PPanel.white_square = NULL;
		gcEjectGObj(white_square_gobj);
	}
}

// 8013595C
void mn1PFlashWhiteSquare(GObj* white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0)
			mn1PRemoveWhiteSquare(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 801359FC
void mn1PCreateWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait_id = mn1PGetPortraitId(gMN1PPanel.char_id);

	mn1PRemoveWhiteSquare(port_id);

	gMN1PPanel.white_square = white_square_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U);
	gcAddGObjDisplay(white_square_gobj, lbCommonDrawSObjAttr, 0x21U, 0x80000000U, -1);
	white_square_gobj->user_data.p = port_id;
	gcAddGObjProcess(white_square_gobj, mn1PFlashWhiteSquare, 0, 1);

	white_square_sobj = lbCommonMakeSObjForGObj(white_square_gobj, GetAddressFromOffset(gMN1PFilesArray[4], &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32) (((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
	white_square_sobj->pos.y = (f32) (((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 80135B30
void mn1PAnnounceFighter(s32 port_id, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (gMN1PPanel.p_sfx != NULL)
	{
		if ((gMN1PPanel.p_sfx->sfx_id != 0) && (gMN1PPanel.p_sfx->sfx_id == gMN1PPanel.sfx_id))
			func_80026738_27338(gMN1PPanel.p_sfx);
	}

	func_800269C0_275C0(0x79U);

	gMN1PPanel.p_sfx = func_800269C0_275C0(announcer_fgms[gMN1PPanel.char_id]);

	if (gMN1PPanel.p_sfx != NULL)
		gMN1PPanel.sfx_id = gMN1PPanel.p_sfx->sfx_id;
}

// 80135BFC - Unused?
void func_ovl27_80135BFC() {}

// 80135C04
sb32 mn1PSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
	if (gMN1PPanel.cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (gMN1PPanel.char_id != nFTKindNull)
	{
		mn1PSelectCharWithToken(port_id, select_button);
		gMN1PPanel.min_frames_elapsed_until_recall = gMN1PFramesElapsed + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 80135C88
void mn1PReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
	s32 display_orders[4] = {

		6, 4, 2, 0
	};
	gcMoveGObjDL(gMN1PPanel.token, 0x1E, display_orders[port_id] + 1);
}

// 80135CF4
void mn1PReorderCursorsOnPlacement(s32 port_id)
{
	s32 unheld_orders[4] = {

		3, 2, 1, 0
	};
	gcMoveGObjDL(gMN1PPanel.token, 0x1F, unheld_orders[port_id]);
}

// 80135D58
void mn1PSetCursorCoordinatesFromToken(s32 port_id)
{
	gMN1PPanel.cursor_pickup_x = SObjGetStruct(gMN1PPanel.token)->pos.x - 11.0F;
	gMN1PPanel.cursor_pickup_y = SObjGetStruct(gMN1PPanel.token)->pos.y - -14.0F;
}

// 80135D9C
void mn1PHandleCursorPickup(s32 port_id)
{
	gMN1PPanel.holder_port_id = port_id;
	gMN1PPanel.is_selected = FALSE;
	gMN1PPanel.cursor_state = mnCursorStateHoldingToken;
	gMN1PPanel.held_port_id = port_id;
	gMN1PPanel.unk_0x88 = FALSE;

	mn1PSyncFighterDisplay(port_id);
	mn1PReorderCursorsOnPickup(port_id, port_id);
	mn1PSetCursorCoordinatesFromToken(port_id);
	mn1PRedrawCursor(gMN1PPanel.cursor, port_id, gMN1PPanel.cursor_state);

	gMN1PPanel.unk_0xA0 = TRUE;

	func_800269C0_275C0(0x7FU);

	mn1PRemoveWhiteSquare(port_id);
	mn1PSyncNameAndLogo(port_id);
}

// 80135E2C
sb32 mn1PCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
	mnCharPanel1P* panel_info = &gMN1PPanel;

	if ((gMN1PFramesElapsed < gMN1PPanel.min_frames_elapsed_until_recall) || (gMN1PPanel.is_recalling))
		return FALSE;

	else if (gMN1PPanel.cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	if ((gMN1PPanel.holder_port_id == 4) && (mn1PCheckTokenPickup(cursor_gobj, port_id, port_id)))
	{
		gMN1PPanel.holder_port_id = port_id;
		gMN1PPanel.is_selected = FALSE;
		gMN1PPanel.cursor_state = mnCursorStateHoldingToken;
		panel_info->held_port_id = port_id;
		gMN1PPanel.unk_0x88 = FALSE;

		mn1PSyncFighterDisplay(port_id);
		mn1PReorderCursorsOnPickup(port_id, port_id);
		mn1PSetCursorCoordinatesFromToken(port_id);
		mn1PRedrawCursor(cursor_gobj, port_id, gMN1PPanel.cursor_state);

		gMN1PPanel.unk_0xA0 = TRUE;

		func_800269C0_275C0(0x7FU);
		mn1PRemoveWhiteSquare(port_id);
		mn1PSyncNameAndLogo(port_id);

		return TRUE;
	}

	return FALSE;
}

// 80135F34
s32 mn1PGetFtKindFromTokenPositionEvenIfLocked()
{
	SObj* token_sobj = SObjGetStruct(gMN1PPanel.token);
	s32 current_y = (s32) token_sobj->pos.x + 13;
	s32 current_x = (s32) token_sobj->pos.y + 12;
	s32 char_id;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mn1PGetFtKind((s32) (current_y - 25) / 45);
	}

	is_within_bounds = (current_x >= 79) && (current_x < 122) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
			return mn1PGetFtKind(((s32) (current_y - 25) / 45) + 6);
	}
	return nFTKindNull;
}

// 80136050
s32 mn1PGetFtKindFromTokenPosition(s32 port_id)
{
	SObj* token_sobj = SObjGetStruct(gMN1PPanel.token);
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
			char_id = mn1PGetFtKind((s32) (current_y - 25) / 45);

			if ((mn1PCheckFighterIsXBoxed(char_id)) || (mn1PGetIsLocked(char_id)))
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
			char_id = mn1PGetFtKind(((s32) (current_y - 25) / 45) + 6);

			if ((mn1PCheckFighterIsXBoxed(char_id)) || (mn1PGetIsLocked(char_id)))
				return nFTKindNull;

			return char_id;
		}
	}
	return nFTKindNull;
}

// 801361C8
void mn1PAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
	gsController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (gMN1PPanel.unk_0xA0)
	{
		delta = (gMN1PPanel.cursor_pickup_x - SObjGetStruct(gMN1PPanel.cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMN1PPanel.cursor)->pos.x = gMN1PPanel.cursor_pickup_x;
		else
			SObjGetStruct(gMN1PPanel.cursor)->pos.x += delta;

		delta = (gMN1PPanel.cursor_pickup_y - SObjGetStruct(gMN1PPanel.cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMN1PPanel.cursor)->pos.y = gMN1PPanel.cursor_pickup_y;
		else
			SObjGetStruct(gMN1PPanel.cursor)->pos.y += delta;

		if ((SObjGetStruct(gMN1PPanel.cursor)->pos.x == gMN1PPanel.cursor_pickup_x) && (SObjGetStruct(gMN1PPanel.cursor)->pos.y == gMN1PPanel.cursor_pickup_y))
		{
			gMN1PPanel.unk_0xA0 = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[gMN1PPanel.cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[gMN1PPanel.cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (!gMN1PPanel.is_recalling)
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
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[gMN1PPanel.cursor_state].x;
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
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[gMN1PPanel.cursor_state].y;
			}
		}
	}
}

// 80136540
void mn1PSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
	s32 i;

	if (SObjGetStruct(cursor_gobj)->pos.y > 124.0F || SObjGetStruct(cursor_gobj)->pos.y < 38.0F)
	{
		if (gMN1PPanel.cursor_state != mnCursorStatePointer)
		{
			mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
			gMN1PPanel.cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (gMN1PPanel.held_port_id == -1)
		{
			if (gMN1PPanel.cursor_state != mnCursorStateNotHoldingToken)
			{
				mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				gMN1PPanel.cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (gMN1PPanel.cursor_state != mnCursorStateHoldingToken)
			{
				mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				gMN1PPanel.cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if (gMN1PPanel.cursor_state == mnCursorStatePointer && gMN1PPanel.is_selected)
	{
		for (i = 0; i < 4; i++)
		{
			if (gMN1PPanel.is_selected == 1 && mn1PCheckTokenPickup(cursor_gobj, port_id, i))
			{
				mn1PRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				gMN1PPanel.cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 801366C4
sb32 mn1PCheckLevelRightArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 258.0F) && (current_x <= 280.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 155.0F) && (current_y <= 174.0F) ? TRUE : FALSE;
		if (range_check) return TRUE;
	}
	return FALSE;
}

// 80136788
sb32 mn1PCheckLevelLeftArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 190.0F) && (current_x <= 212.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 155.0F) && (current_y <= 174.0F) ? TRUE : FALSE;
		if (range_check) return TRUE;
	}
	return FALSE;
}

// 8013684C
sb32 mn1PCheckAnyLevelArrowPress(GObj* cursor_gobj)
{
	if (mn1PCheckLevelRightArrowPress(cursor_gobj))
	{
		if (gMN1PLevelValue < 4)
		{
			func_800269C0_275C0(0xA4U);

			gMN1PDrawLevel(++gMN1PLevelValue);
		}
		return TRUE;
	}
	if (mn1PCheckLevelLeftArrowPress(cursor_gobj))
	{
		if (gMN1PLevelValue > 0)
		{
			func_800269C0_275C0(0xA4U);

			gMN1PDrawLevel(--gMN1PLevelValue);
		}
		return TRUE;
	}
	return FALSE;
}

// 801368FC
sb32 mn1PCheckStockRightArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 258.0F) && (current_x <= 280.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 175.0F) && (current_y <= 194.0F) ? TRUE : FALSE;
		if (range_check) return TRUE;
	}
	return FALSE;
}

// 801369C0
sb32 mn1PCheckStockLeftArrowPress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 190.0F) && (current_x <= 212.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 175.0F) && (current_y <= 194.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80136A84
sb32 mn1PCheckAnyStockArrowPress(GObj* cursor_gobj)
{
	if (mn1PCheckStockRightArrowPress(cursor_gobj))
	{
		if (gMN1PStockValue < 4)
		{
			func_800269C0_275C0(0xA4U);

			mn1PDrawStock(++gMN1PStockValue, gMN1PPanel.char_id);
		}
		return TRUE;
	}
	if (mn1PCheckStockLeftArrowPress(cursor_gobj))
	{
		if (gMN1PStockValue > 0)
		{
			func_800269C0_275C0(0xA4U);

			mn1PDrawStock(--gMN1PStockValue, gMN1PPanel.char_id);
		}
		return TRUE;
	}
	return FALSE;
}

// 80136B44
void mn1PSyncShadeAndCostume(s32 arg0, s32 select_button)
{
	s32 costume_id = ftParamGetCostumeCommonID(gMN1PPanel.char_id, select_button);

	ftParamInitModelTexturePartsAll(gMN1PPanel.player, costume_id, 0);

	gMN1PPanel.costume_id = costume_id;

	mn1PDrawStock(gMN1PStockValue, gMN1PPanel.char_id);

	func_800269C0_275C0(0xA4U);
}

// 80136BAC
sb32 mn1PIsHumanWithCharacterSelected(s32 arg0)
{
	if (gMN1PPanel.is_selected)
	{
		return TRUE;
	}
	return FALSE;
}

// 80136BD4
void mn1PRecallToken(s32 port_id)
{
	gMN1PPanel.unk_0x88 = FALSE;
	gMN1PPanel.is_selected = FALSE;
	gMN1PPanel.is_recalling = TRUE;
	gMN1PPanel.recall_frame_counter = 0;
	gMN1PPanel.recall_start_x = SObjGetStruct(gMN1PPanel.token)->pos.x;
	gMN1PPanel.recall_start_y = SObjGetStruct(gMN1PPanel.token)->pos.y;

	gMN1PPanel.recall_end_x = SObjGetStruct(gMN1PPanel.cursor)->pos.x + 20.0F;

	if (gMN1PPanel.recall_end_x > 280.0F)
	{
		gMN1PPanel.recall_end_x = 280.0F;
	}

	gMN1PPanel.recall_end_y = SObjGetStruct(gMN1PPanel.cursor)->pos.y + -15.0F;

	if (gMN1PPanel.recall_end_y < 10.0F)
	{
		gMN1PPanel.recall_end_y = 10.0F;
	}

	if (gMN1PPanel.recall_end_y < gMN1PPanel.recall_start_y)
	{
		gMN1PPanel.recall_mid_y = gMN1PPanel.recall_end_y - 20.0F;
	}
	else
	{
		gMN1PPanel.recall_mid_y = gMN1PPanel.recall_start_y - 20.0F;
	}
}

// 80136CB8
void mn1PGoBackTo1PMenu()
{
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = nSCKind1PMode;

	mn1PSaveMatchInfo();
	auStopBGM();
	func_800266A0_272A0();
	syProgSetLoadScene();
}

// 80136D04
void mn1PExitIfBButtonPressed(s32 port_id)
{
	gsController* controller = &gPlayerControllers[port_id];

	if ((gMN1PFramesElapsed >= 10) && (controller->button_tap & B_BUTTON))
	{
		mn1PGoBackTo1PMenu();
	}
}


// 80136D58
void mn1PHandleButtonPresses(GObj* cursor_gobj)
{
	gsController* controller = &gPlayerControllers[cursor_gobj->user_data.s];
	mnCharPanel1P* panel_info;
	s32 foo, bar, baz;
	s32 port_id = cursor_gobj->user_data.s;

	mn1PAutoPositionCursor(cursor_gobj, port_id);

	if ((gPlayerControllers[port_id].button_tap & A_BUTTON)
		&& (!mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 0))
		&& (!mn1PCheckAndHandleTokenPickup(cursor_gobj, port_id)))
	{
		if (mn1PCheckPickerRightArrowPress(cursor_gobj))
		{
			gMN1PTimerValue = mn1PGetNextTimerValue(gMN1PTimerValue);
			mn1PDrawTimerPicker(gMN1PTimerValue);
			func_800269C0_275C0(0xA4U);
		}
		else if (mn1PCheckPickerLeftArrowPress(cursor_gobj))
		{
			gMN1PTimerValue = mn1PGetPrevTimerValue(gMN1PTimerValue);
			mn1PDrawTimerPicker(gMN1PTimerValue);
			func_800269C0_275C0(0xA4U);
		}
		else if (mn1PCheckBackButtonPress(cursor_gobj))
		{
				mn1PGoBackTo1PMenu();
				func_800269C0_275C0(0xA4U);
		}
		else if (!mn1PCheckAnyLevelArrowPress(cursor_gobj))
		{
			mn1PCheckAnyStockArrowPress(cursor_gobj);
		}
	}

	if ((gPlayerControllers[port_id].button_tap & U_CBUTTONS)
		&& (!mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 0))
		&& (gMN1PPanel.unk_0x88))
	{
		mn1PSyncShadeAndCostume(port_id, 0);
	}
	if ((gPlayerControllers[port_id].button_tap & R_CBUTTONS)
		&& (!mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 1))
		&& (gMN1PPanel.unk_0x88))
	{
		mn1PSyncShadeAndCostume(port_id, 1);
	}
	if ((gPlayerControllers[port_id].button_tap & D_CBUTTONS)
		&& (!mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 2))
		&& (gMN1PPanel.unk_0x88))
	{
		mn1PSyncShadeAndCostume(port_id, 2);
	}
	if ((gPlayerControllers[port_id].button_tap & L_CBUTTONS)
		&& (!mn1PSelectChar(cursor_gobj, port_id, gMN1PPanel.held_port_id, 3))
		&& (gMN1PPanel.unk_0x88))
	{
		mn1PSyncShadeAndCostume(port_id, 3);
	}

	if ((gPlayerControllers[port_id].button_tap & B_BUTTON) && (mn1PIsHumanWithCharacterSelected(port_id)))
	{
		mn1PRecallToken(port_id);
	}
	if (!gMN1PPanel.is_recalling)
	{
		mn1PExitIfBButtonPressed(port_id);
	}
	if (!gMN1PPanel.is_recalling)
	{
		mn1PSyncCursorDisplay(cursor_gobj, port_id);
	}
}

// 80138C0C
s32 D_ovl27_80138C0C[] = {

	0x00009048,
	0x00009B28,
	0x0000A608,
	0x0000B0E8,
	0x0000BBC8
};

// 8013702C - Unused?
void func_ovl27_8013702C() {}

// 80137034
void mn1PCenterTokenInPortrait(GObj* token_gobj, s32 ft_kind)
{
	s32 portrait_id = mn1PGetPortraitId(ft_kind);

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

// 801370E4 - Unused?
void func_ovl27_801370E4() {}

// 801370EC
void mn1PMoveToken(s32 port_id)
{
	SObjGetStruct(gMN1PPanel.token)->pos.x += gMN1PPanel.token_x_velocity;
	SObjGetStruct(gMN1PPanel.token)->pos.y += gMN1PPanel.token_y_velocity;
}

// 8013712C
void mn1PSyncTokenAndFighter(GObj* token_gobj)
{
	s32 ft_kind;
	s32 port_id = token_gobj->user_data.s;

	if (gMN1PFramesElapsed < 0x1E)
	{
		token_gobj->flags = 1;
	}
	else
	{
		if ((gMN1PPanel.cursor_state != mnCursorStatePointer)
			|| (gMN1PPanel.is_selected == TRUE)
			|| (gMN1PPanel.is_recalling == TRUE))
		{
			token_gobj->flags = 0;
		}
		else
		{
			token_gobj->flags = 1;
		}
	}

	if ((!gMN1PPanel.is_selected)
		&& (gMN1PPanel.holder_port_id != 4)) {
		if (!gMN1PPanel.unk_0xA0) {
			SObjGetStruct(token_gobj)->pos.x = (f32) (SObjGetStruct(gMN1PPanel.cursor)->pos.x + 11.0F);
			SObjGetStruct(token_gobj)->pos.y = (f32) (SObjGetStruct(gMN1PPanel.cursor)->pos.y + -14.0F);
		}
	}
	else
		mn1PMoveToken(port_id);

	ft_kind = mn1PGetFtKindFromTokenPosition(port_id);

	if ((!gMN1PPanel.is_selected)
		&& (ft_kind != gMN1PPanel.char_id))
	{
		gMN1PPanel.char_id = ft_kind;

		mn1PSyncFighterDisplay(port_id);
		mn1PSyncNameAndLogo(port_id);
	}
	mn1PDrawHighscoreAndBonuses();
}

// 80137268
void mn1PCreateCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xD, 0x40000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80137308
void mn1PCreateDroppedTokenViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xF, 0x80000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801373A8
void mn1PCreateReadyToFightViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xA, 0x800000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80137448
void mn1PCreateCursor(s32 port_id)
{
	GObj* cursor_gobj;
	s32 unused;
	intptr_t cursor_type_offsets_unused[4] = {

		0x8268,
		0x8368,
		0x8468,
		0x8568
	};
	s32 cursor_starting_display_orders[4] = {

		6, 4, 2, 0
	};

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x1E, cursor_starting_display_orders[port_id], -1, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mn1PHandleButtonPresses, 2);

	cursor_gobj->user_data.s = port_id;
	gMN1PPanel.cursor = cursor_gobj;
	SObjGetStruct(cursor_gobj)->pos.x = 60.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mn1PRedrawCursor(cursor_gobj, port_id, 0);
}

// 80137590
void mn1PCreateToken(s32 port_id)
{
	GObj* token_gobj;
	mnCharPanel1P* panel_info;

	// token offsets not including cpu
	intptr_t offsets[4] = {

		0x9048,
		0x9B28,
		0xA608,
		0xB0E8
	};
	// display orders for tokens on initial load
	s32 orders1[4] = {

		3, 2, 1, 0
	};
	s32 foo;

	token_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, lbCommonDrawSObjAttr, 0x1F, orders1[port_id], -1, GetAddressFromOffset(gMN1PFilesArray[0], offsets[port_id]), 1, mn1PSyncTokenAndFighter, 1);

	token_gobj->user_data.s = port_id;
	gMN1PPanel.token = token_gobj;

	if (gMN1PPanel.char_id == nFTKindNull)
	{
		SObjGetStruct(token_gobj)->pos.x = 51.0F;
		SObjGetStruct(token_gobj)->pos.y = 161.0F;
	}
	else
		mn1PCenterTokenInPortrait(token_gobj, gMN1PPanel.char_id);

	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801376F0 - Unused?
void func_ovl27_801376F0() {}

// 801376F8
void mn1PAutopositionTokenFromPortraitEdges(s32 port_id)
{
	s32 portrait_id = mn1PGetPortraitId(gMN1PPanel.char_id);
	f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
	f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(gMN1PPanel.token)->pos.x + gMN1PPanel.token_x_velocity + 13.0F;
	f32 new_pos_y = SObjGetStruct(gMN1PPanel.token)->pos.y + gMN1PPanel.token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
	{
		gMN1PPanel.token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	}
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
	{
		gMN1PPanel.token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
	if (new_pos_y < (portrait_edge_y + 5.0F))
	{
		gMN1PPanel.token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	}
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
	{
		gMN1PPanel.token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
}

// 801378A8
void mn1PAutopositionPlacedToken(s32 port_id)
{
	mn1PAutopositionTokenFromPortraitEdges(port_id);
}

// 801378C8
void mn1PAutopositionRecalledToken(s32 port_id)
{
	f32 new_y_velocity, new_x_velocity;

	gMN1PPanel.recall_frame_counter += 1;

	if (gMN1PPanel.recall_frame_counter < 11)
	{
		new_x_velocity = (gMN1PPanel.recall_end_x - gMN1PPanel.recall_start_x) / 10.0F;

		if (gMN1PPanel.recall_frame_counter < 6)
		{
			new_y_velocity = (gMN1PPanel.recall_mid_y - gMN1PPanel.recall_start_y) / 5.0F;
		}
		else
		{
			new_y_velocity = (gMN1PPanel.recall_end_y - gMN1PPanel.recall_mid_y) / 5.0F;
		}

		gMN1PPanel.token_x_velocity = new_x_velocity;
		gMN1PPanel.token_y_velocity = new_y_velocity;
	}
	else if (gMN1PPanel.recall_frame_counter == 11)
	{
		mn1PHandleCursorPickup(port_id);

		gMN1PPanel.token_x_velocity = 0.0F;
		gMN1PPanel.token_y_velocity = 0.0F;
	}

	if (gMN1PPanel.recall_frame_counter == 30)
		gMN1PPanel.is_recalling = FALSE;
}

// 8013799C
void mn1PAutopositionToken(s32 port_id)
{
	if (gMN1PPanel.is_recalling)
		mn1PAutopositionRecalledToken(gMN1PHumanPanelPort);

	if (gMN1PPanel.is_selected)
		mn1PAutopositionPlacedToken(0);
}

// 801379E8
void mn1PCreateTokenAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x18U, 0x80000000U), mn1PAutopositionToken, 1, 1);
}

// 80137A2C
void mn1PSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((gMN1PPanel.unk_0x88 == 0) && (gMN1PPanel.char_id != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMN1PPanel.char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMN1PPanel.char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMN1PPanel.char_id];
	}
	else
		white_circle_gobj->flags = 1;
}

// 80137B04
void mn1PCreateWhiteCircles()
{
	GObj* white_circle_gobj;

	white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

	gcSetupCommonDObjs(white_circle_gobj, GetAddressFromOffset(gMN1PFilesArray[10], &FILE_016_WHITE_CIRCLE_OFFSET_2), 0);

	gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, 0x80000000U, -1);

	gcAddMObjAll(white_circle_gobj, GetAddressFromOffset(gMN1PFilesArray[10], &FILE_016_WHITE_CIRCLE_OFFSET_1));

	gcAddGObjProcess(white_circle_gobj, mn1PSyncWhiteCircleSizeAndDisplay, 1, 1);

	gcPlayAnimAll(white_circle_gobj);

	DObjGetStruct(white_circle_gobj)->translate.vec.f.x = -1100.0F;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.y = -850.0F;
	DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0F;
}

// 80137BE4
void mn1PBlinkIfReadyToFight(GObj* gobj)
{
	if (mn1PIsReadyToFight())
	{
		gMN1PPressStartFlashTimer++;

		if (gMN1PPressStartFlashTimer == 40)
		{
			gMN1PPressStartFlashTimer = 0;
		}

		gobj->flags = (gMN1PPressStartFlashTimer < 30) ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
	}
	else
	{
		gobj->flags = GOBJ_FLAG_NORENDER;
		gMN1PPressStartFlashTimer = 0;
	}
}

// 80137C64
void mn1PCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x23U, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mn1PBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
	sobj->pos.x = 0.0F;
	sobj->pos.y = 71.0F;

	// Ready to Fight banner text
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0xFF;
	sobj->envcolor.g = 0xCA;
	sobj->envcolor.b = 0x13;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x9D;
	sobj->pos.x = 50.0F;
	sobj->pos.y = 76.0F;

	// Press Start indicator
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mn1PBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0F;
	sobj->pos.y = 219.0F;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMN1PFilesArray[0], &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0F;
	sobj->pos.y = 219.0F;
}

// 80137EE0 - Unused?
void func_ovl27_80137EE0() {}

// 80137EE8 - Unused?
void func_ovl27_80137EE8() {}

// 80137EF0
sb32 mn1PIsReadyToFight()
{
	sb32 is_ready = TRUE;

	if (!gMN1PPanel.unk_0x88)
		is_ready = FALSE;

	return is_ready;
}

// 80137F10
void mn1PSaveMatchInfo()
{
	gSceneData.spgame_time_limit = gMN1PTimerValue;
	gSceneData.spgame_player = gMN1PHumanPanelPort;
	gSaveData.spgame_difficulty = gMN1PLevelValue;
	gSceneData.spgame_stage = 0;
	gSaveData.spgame_stock_count = gMN1PStockValue;

	if (gMN1PPanel.unk_0x88 != 0)
		gSceneData.ft_kind = gMN1PPanel.char_id;
	else
		gSceneData.ft_kind = nFTKindNull;

	gSceneData.costume = gMN1PPanel.costume_id;

	lbBackupWrite();
}

// 80137F9C
void mn1PDestroyCursorAndTokenProcesses()
{
	if (gMN1PPanel.cursor != NULL)
		gcPauseGObjProcess(gMN1PPanel.cursor->gobjproc_head);
}

// 80137FCC
void mn1PMain(s32 arg0)
{
	gMN1PFramesElapsed += 1;

	if (gMN1PFramesElapsed == gMN1PMaxFramesElapsed)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindTitle;

		mn1PSaveMatchInfo();
		syProgSetLoadScene();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		gMN1PMaxFramesElapsed = gMN1PFramesElapsed + I_MIN_TO_TICS(5);

	if (gMN1PIsStartTriggered) // gMN1PIsStartTriggered
	{
		gMN1PStartDelayTimer -= 1; // gMN1PStartDelayTimer

		if (gMN1PStartDelayTimer == 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = nSCKind1PGame;

			mn1PSaveMatchInfo();
			syProgSetLoadScene();
		}
	}
	else if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (gMN1PFramesElapsed > 60))
	{
		if (mn1PIsReadyToFight())
		{
			func_800269C0_275C0(0x26AU);

			gMN1PStartDelayTimer = 30;
			gMN1PIsStartTriggered = TRUE;

			mn1PDestroyCursorAndTokenProcesses();
			return;
		}

		func_800269C0_275C0(0xA5U);
	}
}

// 80138118
s32 mn1PGetNextTimerValue(s32 arg0)
{
	return (arg0 == 5) ? 0x64 : 5;
}

// 80138134
s32 mn1PGetPrevTimerValue(s32 arg0)
{
	return (arg0 == 5) ? 0x64 : 5;
}

// 80138150
void mn1PInitPort(s32 port_id)
{
	gMN1PPanel.white_square = NULL;
	gMN1PPanel.p_sfx = NULL;
	gMN1PPanel.sfx_id = 0;
	gMN1PPanel.player = NULL;
	gMN1PPanel.char_id = gSceneData.ft_kind;
	gMN1PPanel.costume_id = gSceneData.costume;

	if (gMN1PPanel.char_id == nFTKindNull)
	{
		gMN1PPanel.holder_port_id = port_id;
		gMN1PPanel.held_port_id = port_id;
		gMN1PPanel.unk_0x88 = FALSE;
		gMN1PPanel.is_selected = FALSE;
		gMN1PPanel.is_recalling = FALSE;
		gMN1PPanel.unk_0xA0 = FALSE;
	}
	else
	{
		gMN1PPanel.holder_port_id = 4;
		gMN1PPanel.held_port_id = -1;
		gMN1PPanel.unk_0x88 = TRUE;
		gMN1PPanel.is_selected = TRUE;
		gMN1PPanel.is_recalling = FALSE;
		gMN1PPanel.unk_0xA0 = FALSE;
	}
}

// 801381D0 - Unused?
void func_ovl27_801381D0() {}

// 801381D8
void mn1PLoadMatchInfo()
{
	gMN1PFramesElapsed = 0;
	gMN1PMaxFramesElapsed = gMN1PFramesElapsed + I_MIN_TO_TICS(5);
	gMN1PIsStartTriggered = 0;
	gMN1PTimerValue = gSceneData.spgame_time_limit;
	gMN1PHumanPanelPort = gSceneData.spgame_player;
	gMN1PLevelValue = gSaveData.spgame_difficulty;
	gMN1PStockValue = gSaveData.spgame_stock_count;
	gMN1PFtKind = gSceneData.ft_kind;
	gMN1PCostumeId[0] = gSceneData.costume;
	gMN1PHighscoreGObj = NULL;
	gMN1PBonusesGObj = NULL;
	gMN1PLevelGObj = NULL;
	gMN1PStockGObj = NULL;
	gMN1PIsTeamBattle = D_800A4B18.is_team_battle;
	gMN1PRule = D_800A4B18.game_rules;

	mn1PInitPort(gMN1PHumanPanelPort);

	gMN1PPanel.min_frames_elapsed_until_recall = 0;
	gMN1PCharacterUnlockedMask = gSaveData.fighter_mask;
}

// 801382C8
void mn1PInitPanel(s32 port_id)
{
	mn1PCreateCursor(port_id);
	mn1PCreateToken(port_id);
	mn1PCreatePanel(port_id);

	if ((gMN1PPanel.is_selected) && (gMN1PPanel.char_id != nFTKindNull))
	{
		mn1PSpawnFighter(gMN1PPanel.player, port_id, gMN1PPanel.char_id, gMN1PPanel.costume_id);
		mn1PDrawHighscoreAndBonuses();
	}
}

// 80138334
void mn1PInitCSS()
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
	rldmSetup.status_buffer = (lbFileNode*) &D_ovl27_801392E0;
	rldmSetup.status_buffer_size = 0x78;
	rldmSetup.force_status_buffer = (lbFileNode*) &D_ovl27_801392A8;
	rldmSetup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl27_80138630, 11U, gMN1PFilesArray, syProgMalloc(lbRelocGetAllocSize(D_ovl27_80138630, 11U), 0x10U));

	gcMakeGObjSPAfter(0x400U, &mn1PMain, 0xFU, 0x80000000U);
	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);
	efAllocInitParticleBank();
	efManagerInitEffects();
	ftManagerAllocFighter(1U, 1);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	gMN1PAnimHeap = syProgMalloc(gFTManagerFigatreeHeapSize, 0x10U);

	mn1PLoadMatchInfo();
	mn1PCreatePortraitViewport();
	mn1PCreateCursorViewport();
	mn1PCreateDroppedTokenViewport();
	mn1PCreatePanelViewport();
	mn1PCreateFighterViewport();
	mn1PCreatePortraitBackgroundViewport();
	mn1PCreatePortraitWhiteBackgroundViewport();
	mn1PCreateBackgroundViewport();
	mn1PCreateTitleOptionsAndBackViewport();
	mn1PCreateReadyToFightViewport();
	mn1PCreateBackground();
	mn1PCreatePortraits();
	mn1PInitPanel(gMN1PHumanPanelPort);
	mn1PDrawPickerOptionsTitleAndBack();
	mn1PDrawTotalHighscoreAndBonuses();
	mn1PCreateLevelAndArrows();
	mn1PCreateStockAndArrows();
	mn1PCreateTokenAutopositionRoutine();
	mn1PCreateWhiteCircles();
	mn1PCreateReadyToFightObjects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSceneData.scene_previous != nSCKindVSMaps)
		auPlaySong(0, 0xA);

	func_800269C0_275C0(0x1DFU);
}

// 80138C90
syDisplaySetup D_ovl27_80138C90 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 80138CAC
scRuntimeInfo D_ovl27_80138CAC = {

	0x00000000, 0x8000A5E4,
	func_8000A340, &lOverlay27ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004A38, 0x00000200,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x00008000,
	mn1PSetupDisplayList, update_contdata,
	0x00000000, 0x00000100, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mn1PInitCSS
};

// 80138558
void classic_css_entry()
{
	D_ovl27_80138C90.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl27_80138C90);
	D_ovl27_80138CAC.arena_size = (u32) ((uintptr_t)&lOverlay27ArenaHi - (uintptr_t)&lOverlay27ArenaLo);
	syProgInit(&D_ovl27_80138CAC);
}