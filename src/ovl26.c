#include <ft/fighter.h>
#include <if/interface.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/video.h>

#include "character_select.h"

// Externs
extern f32 dSCSubsysDemoFighterScales[12]; // dSCSubsysDemoFighterScales

// Offsets
extern intptr_t FILE_000_COLON_IMAGE_OFFSET; // file 0x000 image offset for colon
extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET;		  // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET;		  // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET;	  // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_START_IMAGE_OFFSET;		  // Press Start's "Start" texture
extern intptr_t FILE_011_PRESS_IMAGE_OFFSET;		  // Press Start's "Press" texture
extern intptr_t FILE_011_INFINITY_IMAGE_OFFSET;		  // file 0x011 image offset for infinity symbol
extern intptr_t FILE_011_PICKER_TIME_IMAGE_OFFSET;	  // file 0x011 image offset for Time picker texture
extern intptr_t FILE_011_PICKER_STOCK_IMAGE_OFFSET;	  // file 0x011 image offset for Stock picker texture
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET;
extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET;
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET;			 // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET;			 // file 0x011 image offset for right arrow
extern intptr_t FILE_011_READY_TO_FIGHT_IMAGE_OFFSET;	 // Ready to Fight banner text
extern intptr_t FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET; // Ready to Fight banner bg
extern intptr_t FILE_011_PANEL_IMAGE_OFFSET;
extern intptr_t FILE_011_BACK_IMAGE_OFFSET; // file 0x011 image offset for
extern intptr_t FILE_013_XBOX_IMAGE_OFFSET;					 // file 0x013 image offset
extern intptr_t FILE_013_WHITE_SQUARE;					 // white square
extern intptr_t FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET; // file 0x013 image offset for portrait question mark image
extern intptr_t FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET;		 // file 0x013 image offset for portrait bg (fire) image
extern intptr_t lMNSelectCommonWallpaperSprite; // file 0x015 image offset for background tile
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
sb32 mnVSPlayersIsCostumeInUse(s32 fkind, s32 player, s32 costume);
void mnVSPlayersRedrawCursor(GObj* cursor_gobj, s32 player, s32 cursor_state);
s32 mnVSPlayersReorderCursorsOnPlacement(s32 player, s32 held_token_id); // doesn't actually return anything but required to match
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 player);
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 player);
void mnVSPlayersReorderCursorsOnPickup(s32 player, s32 token_id);
void mnVSPlayersRedrawToken(GObj* token_gobj, s32 token_index);
void mnReplaceFighterNameWithHandicapCPULevel(s32 player);
void mnVSPlayersAnnounceFighter(s32 player, s32 panel_id);
void mnVSPlayersFuncLights(Gfx** display_list);
s32 mnVSPlayersGetNextTimerValue(s32 current_value);
s32 mnVSPlayersGetPrevTimerValue(s32 current_value);
void mnVSPlayersDrawHandicapCPULevel(s32 player);
void mnVSPlayersDestroyCursorAndTokenProcesses();
void mnDrawHandicapCPULevelValue(s32 player);
void mnVSPlayersCreateFlash(s32 player);
s32 mnSelectRandomFighter(GObj* token_gobj);
void mnVSPlayersSyncNameAndLogo(s32 player);
sb32 mnVSPlayersIsReadyToFight();
void mnVSPlayersSaveMatchInfo();
sb32 mnIsHandicapAuto();
void mnVSPlayersFuncStart();
sb32 mnIsHandicapOn();
sb32 mnIsHandicap();


// Data
// 0x8013B3A0
u32 D_ovl26_8013B3A0[20] = {

	0x00000011, 0x00000000, 0x00000014, 0x00000015,
	0x00000012, 0x00000013, 0x00000016, 0x00000000,
	0x20202000, 0x20202000, 0xFFFFFF00, 0xFFFFFF00,
	0x14141400, 0x00000000, 0x20202000, 0x20202000,
	0xFFFFFF00, 0xFFFFFF00, 0x00EC0000, 0x00000000
};


// BSS
// 0x8013BA80 ? referenced from scene_manager
s32 D_ovl26_8013BA80;

// 0x8013BA88
mnCharPanelBattle gMnBattlePanels[GMCOMMON_PLAYERS_MAX];

// 0x8013BD78 stock/time picker
GObj* gMnBattlePickerGObj;

// 0x8013BD7C
s32 gMnBattleTimerValue;

// 0x8013BD80
s32 gMnBattleStockValue;

// 0x8013BD84
u8 D_ovl26_8013BD84[8];

// 0x8013BD90 -1 if no controller plugged in; due to a bug, random positive value if plugged in
s32 gMnBattleControllerOrderArray[4];

// 0x8013BDA0 when start is pressed when ready to fight, timer counts down to delay leaving CSS
s32 gMnBattleStartDelayTimer;

// 0x8013BDA4;
sb32 gMnBattleIsStartTriggered;

// 0x8013BDA8
sb32 gMnBattleIsTeamBattle;

// 0x8013BDAC
sb32 gMnBattleRule;

// 0x8013BDB0 title gobj
GObj* gMnBattleTitleGObj;

// 0x8013BDB4
s32 gMnBattleTokenShinePulseColor;

// 0x8013BDB8
sb32 gMnBattleIsTokenShineIncreasing;

// 0x8013BDBC flag indicating which bonus chars are available
u16 gMnBattleCharacterUnlockedMask;

// 0x8013BDC0
u8 D_ovl26_8013BDC0[4];

// 0x8013BDC4 looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 gMnBattlePressStartFlashTimer;

// 0x8013BDC8
s32 D_ovl26_8013BDC8;

// 0x8013BDCC frames elapsed on CSS
s32 gMnBattleTotalTimeTics;

// 0x8013BDD0 frames to wait until exiting the CSS
s32 gMnBattleMaxTotalTimeTics;

// 0x8013BDD4
u8 D_ovl26_8013BDD4[0x2d0];

// 0x8013C0A8
LBFileNode D_ovl26_8013C0A8;

// 0x8013C0B0
u8 D_ovl26_8013C0B0[0x30];

// 0x8013C0E0
u32 D_ovl26_8013C0E0[240];

// 0x8013C4A0
void *gMnBattleFiles[7];

#define gFile011 gMnBattleFiles[0] // 0x8013C4A0; // file 0x011 pointer
#define gFile000 gMnBattleFiles[1] // 0x8013C4A4; // file 0x000 pointer
#define gFile014 gMnBattleFiles[2] // 0x8013C4A8; // file 0x014 pointer
#define gFile015 gMnBattleFiles[3] // 0x8013C4AC; // file 0x015 pointer
#define gFile012 gMnBattleFiles[4] // 0x8013C4B0; // file 0x012 pointer
#define gFile013 gMnBattleFiles[5] // 0x8013C4B4; // file 0x013 pointer
#define gFile016 gMnBattleFiles[6] // 0x8013C4B8; // file 0x016 pointer

// 0x80131B20
void mnVSPlayersFuncLights(Gfx** display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
	return;
}

// 0x80131B78
s32 mnVSPlayersGetShade(s32 player)
{
	sb32 used_shade[GMCOMMON_PLAYERS_MAX];
	s32 i;

	if (gMnBattleIsTeamBattle == FALSE)
		return 0;

	for (i = 0; i < ARRAY_COUNT(used_shade); i++)
		used_shade[i] = 0;

	if (gMnBattleIsTeamBattle == TRUE)
	{
		for (i = 0; i < ARRAY_COUNT(gMnBattlePanels); i++)
		{
			if (player != i)
			{
				if (gMnBattlePanels[player].fkind == gMnBattlePanels[i].fkind
					&& gMnBattlePanels[player].team == gMnBattlePanels[i].team)
				{
					used_shade[gMnBattlePanels[i].shade] = TRUE;
				}
			}
		}
		for (i = 0; i < ARRAY_COUNT(used_shade); i++)
		{
			if (used_shade[i] == FALSE)
				return i;
		}
	}
	// WARNING: Undefined behavior. If gMnBattleIsTeamBattle is FALSE, returned
	// value is indeterminate.
}

// 0x80131C74
void mnVSPlayersSelectFighterToken(s32 player, s32 select_button)
{
	s32 held_player = gMnBattlePanels[player].held_player, costume;

	if (select_button != mnSelect_A)
	{
		costume = ftParamGetCostumeCommonID(gMnBattlePanels[held_player].fkind, select_button);

		if (mnVSPlayersIsCostumeInUse(gMnBattlePanels[held_player].fkind, held_player, costume))
		{
			func_800269C0_275C0(nSYAudioFGMMenuDenied);
			return;
		}

		gMnBattlePanels[held_player].shade = mnVSPlayersGetShade(held_player);
		gMnBattlePanels[held_player].costume = costume;
		ftParamInitAllParts(gMnBattlePanels[held_player].player, costume, gMnBattlePanels[held_player].shade);
	}

	gMnBattlePanels[held_player].is_selected = TRUE;

	mnVSPlayersReorderCursorsOnPlacement(player, held_player);

	gMnBattlePanels[held_player].holder_player = 4;
	gMnBattlePanels[player].cursor_state = mnCursorStateNotHoldingToken;

	mnVSPlayersRedrawCursor(gMnBattlePanels[player].cursor, player, 2);

	gMnBattlePanels[player].held_player = -1;
	gMnBattlePanels[held_player].unk_0x88 = TRUE;

	mnVSPlayersAnnounceFighter(player, held_player);

	if ((mnIsHandicap()) || (gMnBattlePanels[held_player].player_type == 1))
		mnReplaceFighterNameWithHandicapCPULevel(held_player);

	mnVSPlayersCreateFlash(held_player);
}

// 0x80131DC4
f32 mnVSPlayersGetNextPortraitX(s32 portrait, f32 current_x_position)
{
	f32 portrait_pos_x[12] = {

		25, 70, 115, 160, 205, 250, 25, 70, 115, 160, 205, 250
	};
	f32 portrait_vel[12] = {

		1.9, 3.9, 7.8, -7.8, -3.8, -1.8,
		1.8, 3.8, 7.8, -7.8, -3.8, -1.8
	};

	if (current_x_position == portrait_pos_x[portrait])
		return -1.0F;
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

// 0x80131ED8
sb32 mnVSPlayersCheckFighterIsXBoxed(s32 fkind) { return FALSE; }

// 0x80131EE4
void mnVSPlayersSetPortraitX(GObj* portrait_gobj)
{
	SObj* next_sobj;
	SObj* main_sobj = SObjGetStruct(portrait_gobj);
	f32 new_portrait_x = mnVSPlayersGetNextPortraitX(portrait_gobj->user_data.s, main_sobj->pos.x);

	if (new_portrait_x != -1.0F)
	{
		main_sobj->pos.x = new_portrait_x;
		next_sobj = main_sobj->next;

		if (next_sobj != NULL)
			next_sobj->pos.x = SObjGetStruct(portrait_gobj)->pos.x;
	}
}

// 0x80131F54
void mnVSPlayersInitializePortraitBackgroundPosition(SObj* portrait_bg_sobj, s32 portrait)
{
	Vec2f coordinates[12] = {

		{ -35, 36 },
		{ -35, 36 },
		{ -35, 36 },
		{ 310, 36 },
		{ 310, 36 },
		{ 310, 36 },
		{ -35, 79 },
		{ -35, 79 },
		{ -35, 79 },
		{ 310, 79 },
		{ 310, 79 },
		{ 310, 79 }
	};

	portrait_bg_sobj->pos.x = coordinates[portrait].x;
	portrait_bg_sobj->pos.y = coordinates[portrait].y;
}

// 0x80131FB0
void mnVSPlayersAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x, y = portrait_sobj->pos.y;
	s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(void*, gFile013, xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr | SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 0x80132044
sb32 mnVSPlayersGetIsLocked(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindNess: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindNess)) ? FALSE : TRUE;
	case nFTKindPurin: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindPurin)) ? FALSE : TRUE;
	case nFTKindCaptain: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;
	case nFTKindLuigi: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;
	}
	return FALSE;
}

// 0x8013B4B0
s32 dMnBattleUnused[9] = {

	0xC55252C5, 0xA6524294, 0x595252C5, 0, 0, 0, 0, 0, 0
};

// 0x80132110 - Unused?
void func_ovl26_80132110() {}

// 0x80132118
s32 mnVSPlayersGetFighterKind(s32 portrait)
{
	s32 FTKind_order[12] = {

		0x00000004, 0x00000000, 0x00000002, 0x00000005, 0x00000003, 0x00000007,
		0x0000000B, 0x00000006, 0x00000008, 0x00000001, 0x00000009, 0x0000000A
	};
	return FTKind_order[portrait];
}

// 0x80132168
s32 mnVSPlayersGetPortraitId(s32 fkind)
{
	s32 portrait_order[GMCOMMON_FIGHTERS_PLAYABLE_NUM] = {

		0x00000001, 0x00000009, 0x00000002, 0x00000004, 0x00000000, 0x00000003,
		0x00000007, 0x00000005, 0x00000008, 0x0000000A, 0x0000000B, 0x00000006
	};
	return portrait_order[fkind];
}

// 0x801321B8
void mnVSPlayersRenderPortraitWithNoise(GObj* portrait_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0,
					  PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 0x80132278
void mnVSPlayersCreateLockedPortrait(s32 portrait)
{
	GObj* texture_gobj;
	SObj* texture_sobj;
	s32 locked_portrait_offsets[12] = {

		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020538, 0x00000000,
		0x00000000, 0x0001E2E8, 0x00000000, 0x00000000, 0x000249D8, 0x00022788
	};

	// portrait bg (fire)
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mnVSPlayersSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, gFile013, &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
	texture_sobj->pos.x = (f32)(((portrait >= 6 ? portrait - 6 : portrait) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32)(((portrait >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mnVSPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);
	texture_gobj->user_data.p = portrait;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mnVSPlayersRenderPortraitWithNoise, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mnVSPlayersSetPortraitX, 1, 1);

	texture_sobj
		= lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, gFile013, locked_portrait_offsets[mnVSPlayersGetFighterKind(portrait)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;

	texture_gobj->user_data.p = portrait;
	mnVSPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(texture_gobj, mnVSPlayersSetPortraitX, 1, 1);

	texture_sobj
		= lbCommonMakeSObjForGObj(texture_gobj, lbRelocGetFileData(void*, gFile013, &FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;
	texture_sobj->envcolor.r = 0x5B;
	texture_sobj->envcolor.g = 0x41;
	texture_sobj->envcolor.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.p = portrait;
	mnVSPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);
}

// 0x80132520
void mnVSPlayersCreatePortrait(s32 portrait)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj* texture_sobj;
	s32 portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mnVSPlayersGetIsLocked(mnVSPlayersGetFighterKind(portrait)))
		mnVSPlayersCreateLockedPortrait(portrait);
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1DU, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x24U, GOBJ_PRIORITY_DEFAULT, ~0);
		portrait_bg_gobj->user_data.p = portrait;
		gcAddGObjProcess(portrait_bg_gobj, mnVSPlayersSetPortraitX, 1, 1);

		texture_sobj
			= lbCommonMakeSObjForGObj(portrait_bg_gobj, lbRelocGetFileData(void*, gFile013, &FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET));
		mnVSPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mnVSPlayersSetPortraitX, 1, 1);

		texture_sobj
			= lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(void*, gFile013, portrait_offsets[mnVSPlayersGetFighterKind(portrait)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;
		portrait_gobj->user_data.p = portrait;

		// this conditionally draws a big red box with an X in it, but this
		// check always fails
		if (mnVSPlayersCheckFighterIsXBoxed(mnVSPlayersGetFighterKind(portrait)))
			mnVSPlayersAddRedXBoxToPortrait(portrait_gobj, portrait);
		mnVSPlayersInitializePortraitBackgroundPosition(texture_sobj, portrait);
	}
}

// 0x801326DC
void mnVSPlayersCreatePortraits()
{
	s32 portrait;

	for (portrait = 0; portrait < 12; portrait++)
		mnVSPlayersCreatePortrait(portrait);
}

// 0x8013271C
void mnCreateTeamButton(s32 team_id, s32 player)
{
	GObj* team_button_gobj;
	SObj* team_button_sobj;
	s32 team_color_button_offsets[3] = {

		0x0000E3C8, 0x0000EC08, 0x0000E7E8
	};

	team_button_gobj = gMnBattlePanels[player].team_color_button = gcMakeGObjSPAfter(0U, NULL, 0x1BU, 0x80000000U);
	gcAddGObjDisplay(team_button_gobj, lbCommonDrawSObjAttr, 0x22U, GOBJ_PRIORITY_DEFAULT, ~0);

	team_button_sobj = lbCommonMakeSObjForGObj(team_button_gobj, lbRelocGetFileData(void*, gFile011, team_color_button_offsets[team_id]));
	team_button_sobj->pos.x = (f32)((player * 0x45) + 0x22);
	team_button_sobj->pos.y = 131.0F;
	team_button_sobj->sprite.attr = team_button_sobj->sprite.attr & ~SP_FASTCOPY;
	team_button_sobj->sprite.attr = team_button_sobj->sprite.attr | SP_TRANSPARENT;
}

// 0x80132824
void mnDestroyTeamButton(s32 player)
{
	if (gMnBattlePanels[player].team_color_button != NULL)
	{
		gcEjectGObj(gMnBattlePanels[player].team_color_button);
		gMnBattlePanels[player].team_color_button = NULL;
	}
}

// 0x80132878
void mnCreateOrReplaceTeamButton(s32 team_id, s32 player)
{
	mnDestroyTeamButton(player);
	mnCreateTeamButton(team_id, player);
}

// 0x801328AC
void mnDestroyTeamButtons()
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gMnBattlePanels); player++)
	{
		if (gMnBattlePanels[player].team_color_button != NULL)
		{
			gcEjectGObj(gMnBattlePanels[player].team_color_button);
			gMnBattlePanels[player].team_color_button = NULL;
		}
	}
}

// 0x80132904
void mnCreateTeamButtons()
{
	s32 panel_id;

	mnDestroyTeamButtons();

	for (panel_id = 0; panel_id < ARRAY_COUNT(gMnBattlePanels); panel_id++)
		mnCreateTeamButton(gMnBattlePanels[panel_id].team, panel_id);
}

// 0x8013295C
void mnRecreateTypeButton(GObj* type_gobj, s32 player, s32 type_id)
{
	SObj* type_sobj;
	f32 x = (f32)((player * 0x45) + 0x40), y = 131.0F;
	s32 type_button_offsets[3] = {

		0x00006048, 0x000063C8, 0x00006748
	};

	gcRemoveSObjAll(type_gobj);
	type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, gFile011, type_button_offsets[type_id]));
	type_sobj->pos.x = x;
	type_sobj->pos.y = y;
	type_sobj->sprite.attr = type_sobj->sprite.attr & ~SP_FASTCOPY;
	type_sobj->sprite.attr = type_sobj->sprite.attr | SP_TRANSPARENT;
}

// 0x80132A14
void mnVSPlayersMakeNameAndEmblem(GObj* name_logo_gobj_gobj, s32 player, s32 fkind)
{
	SObj* sobj;
	Vec2f coords[12] = {

		{ 21, 21 },
		{ 07, 25 },
		{ 06, 24 },
		{ 22, 21 },
		{ 21, 21 },
		{ 21, 26 },
		{ 27, 21 },
		{ 03, 24 },
		{ 23, 20 },
		{ 23, 21 },
		{ 23, 21 },
		{ 23, 21 }
	};
	s32 logo_offsets[12] = {

		0x00000618, 0x00001938, 0x00000C78, 0x000012D8, 0x00000618, 0x000025F8,
		0x00002C58, 0x000032B8, 0x00001F98, 0x00003918, 0x00003918, 0x00003F78
	};
	s32 name_offsets[12] = {

		0x00001838, 0x000025B8, 0x00001FF8, 0x00002358, 0x00001B18, 0x00002BA0,
		0x00002ED8, 0x00003998, 0x000028E8, 0x000032F8, 0x00003DB8, 0x000035B0
	};

	if (fkind != nFTKindNull)
	{
		gcRemoveSObjAll(name_logo_gobj_gobj);

		// logo
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj_gobj, lbRelocGetFileData(void*, gFile014, logo_offsets[fkind]));
		sobj->pos.x = (player * 0x45) + 0x18;
		sobj->pos.y = 143.0F;
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (gMnBattlePanels[player].player_type == mnPanelTypeHuman)
		{
			sobj->sprite.red = 0x1E;
			sobj->sprite.green = 0x1E;
			sobj->sprite.blue = 0x1E;
		}
		else
		{
			sobj->sprite.red = 0x44;
			sobj->sprite.green = 0x44;
			sobj->sprite.blue = 0x44;
		}

		// name
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj_gobj, lbRelocGetFileData(void*, gFile011, name_offsets[fkind]));
		sobj->pos.x = (player * 0x45) + 0x16;
		sobj->pos.y = 201.0F;
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
	}
}

// 0x80132BF4
void mnAnimatePanelDoors(s32 player)
{
	// left door
	SObjGetStruct(gMnBattlePanels[player].panel_doors)->pos.x
		= (f32)((s32)gMnBattlePanels[player].door_offset + player * 0x45 - 0x13);

	// right door
	SObjGetStruct(gMnBattlePanels[player].panel_doors)->next->pos.x
		= (f32)(player * 0x45 + 0x58 - (s32)gMnBattlePanels[player].door_offset);
}

// 0x80132C6C
void mnUpdatePanelDoors(GObj* panel_doors)
{
	s32 player = panel_doors->user_data.p;
	s32 delta = 2, max = 0x29, min = 0;

	if (gMnBattlePanels[player].player_type == mnPanelTypeNA)
	{
		if (gMnBattlePanels[player].door_offset == delta)
		{
			// left over check
		}

		if (gMnBattlePanels[player].door_offset < max)
		{
			gMnBattlePanels[player].door_offset += delta;

			if (gMnBattlePanels[player].door_offset >= max)
			{
				gMnBattlePanels[player].door_offset = max;
				func_800269C0_275C0(nSYAudioFGMPlayerSlotClose);
			}
			mnAnimatePanelDoors(player);
		}
	}
	else
	{
		if (gMnBattlePanels[player].door_offset == min)
		{
			// left over check
		}

		if (gMnBattlePanels[player].door_offset > min)
		{
			gMnBattlePanels[player].door_offset -= delta;

			if (gMnBattlePanels[player].door_offset < min)
				gMnBattlePanels[player].door_offset = min;
			mnAnimatePanelDoors(player);
		}
	}
}

// 0x80132D1C
void mnVSPlayersCreatePortraitCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DBC
void mnVSPlayersCreatePortraitWallpaperCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132E5C
void mnVSPlayersCreatePortraitFlashCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132EFC
void mnVSPlayersMakeGateDoorsSYRdpViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132F9C
void mnVSPlayersCreateTypeButtonViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013303C
void mnVSPlayersMakeGateViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801330DC
void mnVSPlayersCreateTeamButtonViewPort()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013317C
void mnRenderPanelDoorsP1(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0x16, 0x58, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 0x801331C8
void mnRenderPanelDoorsP2(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0x5B, 0x9D, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 0x80133214
void mnRenderPanelDoorsP3(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0xA0, 0xE2, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 0x80133260
void mnRenderPanelDoorsP4(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0xE5, 0x127, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 0x801332AC
void mnUpdatePanel(GObj* panel_gobj, s32 color_id, s32 player_type)
{
	SObj* panel_sobj;
	intptr_t panel_offsets[4] = {

		0x000103F8, 0x00010420, 0x00010470, 0x00010448
	};
	intptr_t panel_offsets_cpu[4] = {

		0x00011378, 0x000113A0, 0x000113F0, 0x000113C8
	};
	SYColorRGB colors[4] = {

		{ 0xFF, 0x7E, 0x7E },
		{ 0xB3, 0xB3, 0xFF },
		{ 0xEB, 0xDB, 0x7A },
		{ 0x96, 0xCC, 0x96 }
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	if (player_type == mnPanelTypeHuman)
		SObjGetSprite(panel_sobj)->LUT = lbRelocGetFileData(void*, gFile011, panel_offsets[color_id]);
	else
		SObjGetSprite(panel_sobj)->LUT = lbRelocGetFileData(void*, gFile011, panel_offsets_cpu[color_id]);
}

// 0x80133378
void mnCreateTypeButton(s32 player)
{
	GObj* type_button_gobj;
	intptr_t offsets[3] = {

		0x00006048, 0x000063C8, 0x00006748
	};

	type_button_gobj
		= lbCommonMakeSpriteGObj(0, NULL, 0x18, 0x80000000, lbCommonDrawSObjAttr, 0x1E, GOBJ_PRIORITY_DEFAULT, ~0,
							 lbRelocGetFileData(void*, gFile011, offsets[gMnBattlePanels[player].player_type]), 1, NULL, 1);

	gMnBattlePanels[player].type_button = type_button_gobj;
	SObjGetStruct(type_button_gobj)->pos.x = (f32)((player * 0x45) + 0x40);
	SObjGetStruct(type_button_gobj)->pos.y = 131.0F;
	SObjGetStruct(type_button_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(type_button_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801334A8
void mnVSPlayersCreateTypeImage(s32 player)
{
	GObj* type_gobj;
	SObj* type_sobj;
	intptr_t offsets[4] = {

		0x00000878, 0x00000A58, 0x00000C38, 0x00000E18
	};
	f32 floats[4] = {

		8, 5, 5, 5
	};

	gMnBattlePanels[player].type = type_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(type_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	if (gMnBattlePanels[player].player_type == mnPanelTypeCPU)
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_TYPE_CP_IMAGE_OFFSET));
		type_sobj->pos.x = (f32)((player * 0x45) + 0x1A);
	}
	else
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, gFile011, offsets[player]));
		type_sobj->pos.x = floats[player] + (f32)((player * 0x45) + 0x16);
	}
	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;
	type_sobj->pos.y = 131.0F;
}

// 0x8013365C
void mnVSPlayersMakeGate(s32 player)
{
	GObj* temp_gobj;
	SObj* right_door_sobj;

	// unused
	intptr_t type_offsets[4] = {

		0x00000878, 0x00000A58, 0x00000C38, 0x00000E18
	};
	// unused
	f32 type_x_offsets[4] = {

		8, 5, 5, 5
	};
	intptr_t panelRenderRoutines[4] = {

		0x8013317C, 0x801331C8, 0x80133214, 0x80133260
	};
	s32 palette_ids[4] = {

		0, 1, 2, 3
	};

	s32 start_x;

	// create panel
	temp_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, GOBJ_PRIORITY_DEFAULT, ~0,
								   lbRelocGetFileData(void*, gFile011, &FILE_011_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePanels[player].panel = temp_gobj;
	start_x = player * 0x45;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x + 0x16);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (gMnBattleIsTeamBattle == FALSE)
		mnUpdatePanel(temp_gobj, palette_ids[player], gMnBattlePanels[player].player_type);
	else
	{
		// TODO: team enum - 2 is GREEN here
		mnUpdatePanel(temp_gobj, ((gMnBattlePanels[player].team == 2) ? 3 : gMnBattlePanels[player].team),
					  gMnBattlePanels[player].player_type);
	}

	mnVSPlayersCreateTypeImage(player);

	// create panel doors
	temp_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, panelRenderRoutines[player], 0x1D, GOBJ_PRIORITY_DEFAULT, ~0,
								   lbRelocGetFileData(void*, gFile011, &FILE_011_PANEL_DOOR_L_IMAGE_OFFSET), 1,
								   mnUpdatePanelDoors, 1);
	temp_gobj->user_data.p = player;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x - 0x13);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;
	gMnBattlePanels[player].panel_doors = temp_gobj;

	right_door_sobj
		= lbCommonMakeSObjForGObj(temp_gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_PANEL_DOOR_R_IMAGE_OFFSET));
	right_door_sobj->pos.x = (f32)(start_x + 0x58);
	right_door_sobj->pos.y = 126.0F;
	right_door_sobj->sprite.attr &= ~SP_FASTCOPY;
	right_door_sobj->sprite.attr |= SP_TRANSPARENT;
	gMnBattlePanels[player].door_offset = 0x29;

	mnAnimatePanelDoors(player);
	mnCreateTypeButton(player);

	// name/logo
	temp_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gMnBattlePanels[player].name_logo_gobj = temp_gobj;
	gcAddGObjDisplay(temp_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	mnVSPlayersSyncNameAndLogo(player);

	if ((mnIsHandicap()) || (gMnBattlePanels[player].player_type == mnPanelTypeCPU))
		mnReplaceFighterNameWithHandicapCPULevel(player);
	if (gMnBattleIsTeamBattle == TRUE)
		mnCreateTeamButton(gMnBattlePanels[player].team, player);
}

// 0x80133A1C
s32 mnPow(s32 num, s32 pow)
{
	if (pow == 0)
		return 1;
	else
	{
		s32 result = num, i = pow;

		if (pow >= 2)
		{
			do
				result *= num;
			while (--i != 1);
		}

		return result;
	}
}

// 0x80133ABC
void mnSetTextureColors(SObj* sobj, u32 colors[])
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = (u8)colors[0];
	sobj->envcolor.g = (u8)colors[1];
	sobj->envcolor.b = (u8)colors[2];
	sobj->sprite.red = (u8)colors[3];
	sobj->sprite.green = (u8)colors[4];
	sobj->sprite.blue = (u8)colors[5];
}

// 0x80133B04
s32 mnGetNumberOfDigits(s32 num, s32 maxDigits)
{
	s32 numDigits;

	for (numDigits = maxDigits; numDigits > 0; numDigits--)
	{
		if (mnPow(10, numDigits - 1) != 0 ? num / mnPow(10, numDigits - 1) : 0 != 0)
			return numDigits;
	}

	return 0;
}

// 0x80133BB0
void mnCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad)
{
	intptr_t number_offsets[10] = {

		0x00005388, 0x00005440, 0x00005558, 0x00005668, 0x00005778,
		0x00005888, 0x00005998, 0x00005AA8, 0x00005BB8, 0x00005CC8
	};
	SObj* number_sobj;
	f32 left_x = x;
	s32 place;
	s32 numDigits;
	s32 digit;

	if (num < 0)
		num = 0;

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gFile011, number_offsets[num % 10]));
	mnSetTextureColors(number_sobj, colors);
	left_x -= number_sobj->sprite.width;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for (place = 1, numDigits = (pad) ? maxDigits : mnGetNumberOfDigits(num, maxDigits); place < numDigits;
		 place++, numDigits = (pad) ? maxDigits : mnGetNumberOfDigits(num, maxDigits))
	{
		digit = (mnPow(10, place) != 0) ? num / mnPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, gFile011, number_offsets[digit % 10]));
		mnSetTextureColors(number_sobj, colors);
		left_x -= (f32)number_sobj->sprite.width;
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 0x80133E28
void mnDrawTimerValue(s32 num)
{
	s32 colors[6] = {

		0x00000032, 0x0000001C, 0x0000000E,
		0x000000FF, 0x000000FF, 0x000000FF
	};
	SObj* infinity_sobj;

	while (SObjGetStruct(gMnBattlePickerGObj)->next != NULL)
		gcEjectSObj(SObjGetStruct(gMnBattlePickerGObj)->next);

	if (num == 100)
	{
		infinity_sobj = lbCommonMakeSObjForGObj(gMnBattlePickerGObj,
											   lbRelocGetFileData(void*, gFile011, &FILE_011_INFINITY_IMAGE_OFFSET));
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
		mnCreateNumber(gMnBattlePickerGObj, num, 208.0F, 23.0F, colors, 2, 0);
	else
		mnCreateNumber(gMnBattlePickerGObj, num, 212.0F, 23.0F, colors, 2, 0);
}

// 0x80133FAC
void mnDrawTimerPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMnBattlePickerGObj != NULL)
		gcEjectGObj(gMnBattlePickerGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
									 lbRelocGetFileData(void*, gFile011, &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawTimerValue(gMnBattleTimerValue);
}

// 0x80134094
void mnDrawStockValue(s32 num)
{
	s32 colors[6] = {

		0x00000032, 0x0000001C, 0x0000000E,
		0x000000FF, 0x000000FF, 0x000000FF
	};

	while (SObjGetStruct(gMnBattlePickerGObj)->next != NULL)
		gcEjectSObj(SObjGetStruct(gMnBattlePickerGObj)->next);

	if (num < 10)
		mnCreateNumber(gMnBattlePickerGObj, num, 210.0F, 23.0F, colors, 2, 0);
	else
		mnCreateNumber(gMnBattlePickerGObj, num, 214.0F, 23.0F, colors, 2, 0);
}

// 0x80134198
void mnDrawStockPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMnBattlePickerGObj != NULL)
		gcEjectGObj(gMnBattlePickerGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
									 lbRelocGetFileData(void*, gFile011, &FILE_011_PICKER_STOCK_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawStockValue(gMnBattleStockValue + 1);
}

// 0x80134284
void mnVSPlayersMakeWallpaper()
{
	GObj* background_gobj;
	SObj* background_sobj;

	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);
	background_sobj
		= lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, gFile015, &lMNSelectCommonWallpaperSprite));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 0x801343B0
void mnVSPlayersDrawTitleAndBack()
{
	GObj* back_gobj;
	GObj* title_gobj;
	void* unused;
	intptr_t title_offsets[2] = {

		0x00000280, 0x000004E0
	};
	SYColorRGB title_colors[2] = {

		{ 0xE3, 0xAC, 0x04 },
		{ 0x61, 0xAD, 0x49 }
	};

	title_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
									lbRelocGetFileData(void*, gFile012, title_offsets[gMnBattleIsTeamBattle]), 1, NULL, 1);
	SObjGetStruct(title_gobj)->pos.x = 27.0F;
	SObjGetStruct(title_gobj)->pos.y = 24.0F;
	SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(title_gobj)->sprite.red = title_colors[gMnBattleIsTeamBattle].r;
	SObjGetStruct(title_gobj)->sprite.green = title_colors[gMnBattleIsTeamBattle].g;
	SObjGetStruct(title_gobj)->sprite.blue = title_colors[gMnBattleIsTeamBattle].b;
	gMnBattleTitleGObj = title_gobj;

	(gMnBattleRule == SCBATTLE_GAMERULE_TIME) ? mnDrawTimerPicker(gMnBattleTimerValue)
											 : mnDrawStockPicker(gMnBattleStockValue);

	back_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
								   lbRelocGetFileData(void*, gFile011, &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(back_gobj)->pos.x = 244.0F;
	SObjGetStruct(back_gobj)->pos.y = 23.0F;
	SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801345F0 - Unused?
void func_ovl26_801345F0() {}

// 0x801345F8 - Unused?
void func_ovl26_801345F8() {}

// 0x80134600 - Unused?
void func_ovl26_80134600() {}

// 0x80134608
s32 mnVSPlayersGetAdditionalSelectedCount(s32 fkind)
{
	s32 count = 0, i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if (fkind == gMnBattlePanels[i].fkind)
			count += 1;
	}

	return (count != 0) ? count - 1 : count;
}

// 0x80134674
sb32 mnVSPlayersIsCostumeInUse(s32 fkind, s32 player, s32 costume)
{
	s32 i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if ((player != i) && (fkind == gMnBattlePanels[i].fkind) && (costume == gMnBattlePanels[i].costume))
			return TRUE;
	}
	return FALSE;
}

// 0x8013473C
// Gets the first costume not in use by another port
s32 mnVSPlayersGetAvailableCostumeRoyal(s32 fkind, s32 player)
{
	mnCharPanelBattle* panel_info;
	s32 i, j, k;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	for (i = 0; i < 4; i++)
	{
		if (i != player)
		{
			panel_info = &gMnBattlePanels[i];

			if (fkind == panel_info->fkind)
			{
				for (j = 0; j < 4; j++)
				{
					if (ftParamGetCostumeCommonID(fkind, j) == panel_info->costume)
						some_array[j] = TRUE;
				}
			}
		}
	}

	for (k = 0; k < 4; k++)
	{
		if (some_array[k] == FALSE)
			return k;
	}
}

// 0x8013487C
s32 mnVSPlayersGetAvailableCostume(s32 fkind, s32 player)
{
	if (gMnBattleIsTeamBattle == FALSE)
		return ftParamGetCostumeCommonID(fkind, mnVSPlayersGetAvailableCostumeRoyal(fkind, player));
	else if (gMnBattleIsTeamBattle == TRUE)
		return ftParamGetCostumeTeamID(fkind, gMnBattlePanels[player].team);
}

// 0x801348EC
s32 mnVSPlayersGetStatusSelected(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindFox:
	case nFTKindSamus: return 0x10004;
	case nFTKindDonkey:
	case nFTKindLuigi:
	case nFTKindLink:
	case nFTKindCaptain: return 0x10001;
	case nFTKindYoshi:
	case nFTKindPurin:
	case nFTKindNess: return 0x10002;
	case nFTKindMario:
	case nFTKindKirby: return 0x10003;
	default: return 0x10001;
	}
}

// 0x8013494C
void mnVSPlayersRotateFighter(GObj* fighter_gobj)
{
	FTStruct* fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];

	if (panel_info->unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < (PI32 / 1800))
		{
			if (panel_info->is_fighter_selected == FALSE)
			{
				scSubsysFighterSetStatus(panel_info->player, mnVSPlayersGetStatusSelected(panel_info->fkind));
				panel_info->is_fighter_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += M_DTOR_F(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > M_DTOR_F(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;
				scSubsysFighterSetStatus(panel_info->player, mnVSPlayersGetStatusSelected(panel_info->fkind));
				panel_info->is_fighter_selected = TRUE;
			}
		}
	}
	else
	{
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y += M_DTOR_F(2.0F);
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > M_DTOR_F(360.0F))
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= M_DTOR_F(360.0F);
	}
}

// 0x80134A8C
void mnVSPlayersSpawnFighter(GObj* fighter_gobj, s32 player, s32 fkind, s32 costume)
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
		gMnBattlePanels[player].costume = desc.costume = costume;
		desc.shade = gMnBattlePanels[player].shade;
		desc.figatree_heap = gMnBattlePanels[player].figatree_heap;
		desc.player = player;
		fighter_gobj = ftManagerMakeFighter(&desc);

		gMnBattlePanels[player].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnVSPlayersRotateFighter, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = (player * 840) - 1250;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysDemoFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysDemoFighterScales[fkind];

		if (gMnBattlePanels[player].player_type == mnPanelTypeCPU)
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
	}
}

// 0x80134C64
void mnVSPlayersMakeFighterCamera()
{
	CObj* cobj = CObjGetStruct(
		(GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
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

// 0x80134D54
void mnVSPlayersRedrawCursor(GObj* cursor_gobj, s32 player, s32 cursor_state)
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

		0x00008268, 0x00008368,
		0x00008468, 0x00008568
	};
	intptr_t cursor_offsets[3] = {

		0x00006F88, 0x000076E8, 0x00008168
	};
	Vec2i type_positions[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};

	current_x = SObjGetStruct(cursor_gobj)->pos.x;
	current_y = SObjGetStruct(cursor_gobj)->pos.y;

	gcRemoveSObjAll(cursor_gobj);

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, gFile011, cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, gFile011, type_offsets[player]));
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

// 0x80134F64
sb32 mnCheckPickerRightArrowPress(GObj* cursor_gobj)
{
	f32 current_y;
	f32 current_x;
	s32 var_v1;
	SObj* temp_v0;

	temp_v0 = SObjGetStruct(cursor_gobj);
	current_y = temp_v0->pos.y + 3.0f;

	if ((current_y < 12.0f) || ((current_y > 35.0f)))
		var_v1 = 1;
	else
		var_v1 = 0;

	if (var_v1 != 0)
		return 0;
	current_x = temp_v0->pos.x + 20.0f;
	if ((current_x >= 210.0f) && (current_x <= 230.0f))
		var_v1 = 1;
	else
		var_v1 = 0;
	if (var_v1 != 0)
		return 1;
	return 0;
}

// 0x8013502C
s32 mnCheckPickerLeftArrowPress(GObj* cursor_gobj)
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

// 0x801350F4 - Unused?
void func_ovl26_801350F4() {}

// 0x801350FC
void mnVSPlayersUpdatePanelsAndFighterCostumes()
{
	s32 i;
	s32 color_indexes[4] = {

		0, 1, 2, 3
	};

	if (gMnBattleIsTeamBattle == FALSE)
	{
		for (i = 0; i < 4; i++)
		{
			mnUpdatePanel(gMnBattlePanels[i].panel, color_indexes[i], gMnBattlePanels[i].player_type);
			if (gMnBattlePanels[i].fkind != nFTKindNull)
			{
				gMnBattlePanels[i].costume = ftParamGetCostumeCommonID(
					gMnBattlePanels[i].fkind, mnVSPlayersGetAvailableCostumeRoyal(gMnBattlePanels[i].fkind, i));
				gMnBattlePanels[i].shade = mnVSPlayersGetShade(i);
				ftParamInitAllParts(gMnBattlePanels[i].player, gMnBattlePanels[i].costume, gMnBattlePanels[i].shade);
			}
		}
	}
	if (gMnBattleIsTeamBattle == TRUE)
	{
		for (i = 0; i < 4; i++)
		{
			mnUpdatePanel(gMnBattlePanels[i].panel, gMnBattlePanels[i].team == 2 ? 3 : gMnBattlePanels[i].team,
						  gMnBattlePanels[i].player_type);
			if (gMnBattlePanels[i].fkind != nFTKindNull)
			{
				gMnBattlePanels[i].costume
					= ftParamGetCostumeTeamID(gMnBattlePanels[i].fkind, gMnBattlePanels[i].team);
				gMnBattlePanels[i].shade = mnVSPlayersGetShade(i);
				ftParamInitAllParts(gMnBattlePanels[i].player, gMnBattlePanels[i].costume, gMnBattlePanels[i].shade);
			}
		}
	}
}

// 0x80135270
s32 mnCheckRoyalTeamBattleTogglePress(GObj* cursor_gobj)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= 27.0F) && (current_x <= 137.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 14.0F) && (current_y <= 35.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80135334
void mnHandleRoyalTeamBattleTogglePress()
{
	GObj* title_gobj;
	SObj* title_sobj;
	int i;
	intptr_t offsets[2] = {

		0x280, 0x4e0
	};
	SYColorRGB colors[2] = {

		{ 0xe3, 0xac, 0x04 },
		{ 0x61, 0xad, 0x49 }
	};

	title_gobj = gMnBattleTitleGObj;

	if (gMnBattleIsTeamBattle == 1)
		gMnBattleIsTeamBattle = 0;
	else
		gMnBattleIsTeamBattle = 1;

	func_800266A0_272A0();
	func_800269C0_275C0(nSYAudioFGMMenuScroll2);

	if (gMnBattleIsTeamBattle == FALSE)
		func_800269C0_275C0(nSYAudioVoiceAnnounceFreeForAll);
	else
		func_800269C0_275C0(nSYAudioVoiceAnnounceTeamBattle);

	gcRemoveSObjAll(title_gobj);

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, gFile012, offsets[gMnBattleIsTeamBattle]));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->pos.x = 27.0F;
	title_sobj->pos.y = 24.0F;
	title_sobj->sprite.red = colors[gMnBattleIsTeamBattle].r;
	title_sobj->sprite.green = colors[gMnBattleIsTeamBattle].g;
	title_sobj->sprite.blue = colors[gMnBattleIsTeamBattle].b;

	if (gMnBattleIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (gMnBattlePanels[i].fkind != nFTKindNull)
				gMnBattlePanels[i].shade = 4;
		}
	}

	mnVSPlayersUpdatePanelsAndFighterCostumes();

	if (gMnBattleIsTeamBattle == 0)
		mnDestroyTeamButtons();
	else
		mnCreateTeamButtons();
}

// 0x80135554
s32 mnCheckTeamButtonPress(GObj* cursor_gobj, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= player * 69 + 34) && (current_x <= player * 69 + 58) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 131.0F) && (current_y <= 141.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80135634
sb32 mnCheckAnyTeamButtonPress(GObj* cursor_gobj, s32 cursor_player)
{
	s32 player;
	s32 color_indexes[3] = {

		0, 1, 3
	};
	s32 unknown_unused[3] = {

		0x1FE, 0x1DB, 0x1EB
	};
	u32 shade;

	if (gMnBattleIsTeamBattle != TRUE)
		return FALSE;

	for (player = 0; player < 4; player++)
	{
		if ((gMnBattlePanels[player].player_type != 2) && (mnCheckTeamButtonPress(cursor_gobj, player) != 0))
		{
			gMnBattlePanels[player].team = gMnBattlePanels[player].team == 2 ? 0 : gMnBattlePanels[player].team + 1;

			mnUpdatePanel(gMnBattlePanels[player].panel, color_indexes[gMnBattlePanels[player].team],
						  gMnBattlePanels[player].player_type);
			mnCreateOrReplaceTeamButton(gMnBattlePanels[player].team, player);

			if (gMnBattlePanels[player].fkind != nFTKindNull)
			{
				gMnBattlePanels[player].costume
					= ftParamGetCostumeTeamID(gMnBattlePanels[player].fkind, gMnBattlePanels[player].team);

				gMnBattlePanels[player].shade = shade = mnVSPlayersGetShade(player);
				ftParamInitAllParts(gMnBattlePanels[player].player, gMnBattlePanels[player].costume, shade);
			}

			func_800269C0_275C0(nSYAudioFGMTitlePressStart);

			return TRUE;
		}
	}
	return FALSE;
}

// 0x801357A4
sb32 mnCheckAnyCPUHandicapArrowPress(GObj* cursor_gobj, s32 cursor_player)
{
	s32 player;
	u32* target;

	for (player = 0; player < 4; player++)
	{
		target = (gMnBattlePanels[player].player_type == 0) ? &gMnBattlePanels[player].handicap
															 : &gMnBattlePanels[player].cpu_level;

		if (((gMnBattlePanels[player].player_type == 1)
			 || ((mnIsHandicapOn()) && (gMnBattlePanels[player].player_type == 0)
				 && (player == cursor_player)))
			&& (gMnBattlePanels[player].unk_0x88 != 0))
		{
			if (mnCheckCPUHandicapRightArrowPress(cursor_gobj, player) != 0)
			{
				if ((s32)*target < 9)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*target += 1;
					mnDrawHandicapCPULevelValue(player);
				}
				return 1;
			}
			if (mnCheckCPUHandicapLeftArrowPress(cursor_gobj, player) != 0)
			{
				if ((s32)*target >= 2)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*target -= 1;
					mnDrawHandicapCPULevelValue(player);
				}
				return 1;
			}
		}
	}
	return 0;
}

// 0x801358F8
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= player * 69 + 68) && (current_x <= player * 69 + 90) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x801359D8
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= player * 69 + 21) && (current_x <= player * 69 + 43) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80135AB8
s32 mnCheckPlayerTypeButtonPress(GObj* cursor_gobj, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= player * 69 + 60) && (current_x <= player * 69 + 88) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 127.0F) && (current_y <= 145.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80135B98
sb32 mnVSPlayersCheckTokenPickup(GObj* cursor_gobj, s32 cursor_player, s32 player)
{
	f32 current_x, current_y, token_x, token_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(gMnBattlePanels[player].token);

	current_x = cursor_sobj->pos.x + 25.0F;
	token_x = token_sobj->pos.x;

	range_check = (token_x <= current_x) && (current_x <= token_x + 26.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;
		token_y = token_sobj->pos.y;

		range_check = (token_y <= current_y) && (current_y <= token_y + 24.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80135C84
void mnHandlePlayerTypeButtonPress(s32 player)
{
	GObj* cursor_gobj;

	switch (gMnBattlePanels[player].player_type)
	{
	case mnPanelTypeHuman:
		if (gMnBattlePanels[player].held_player != -1)
		{
			gMnBattlePanels[gMnBattlePanels[player].held_player].holder_player = 4;
			gMnBattlePanels[gMnBattlePanels[player].held_player].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[player].held_player].unk_0x88 = TRUE;

			mnVSPlayersReorderCursorsOnPlacement(player, gMnBattlePanels[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[player].held_player);
			mnVSPlayersCreateFlash(gMnBattlePanels[player].held_player);
		}

		gMnBattlePanels[player].is_selected = FALSE;
		gMnBattlePanels[player].fkind = nFTKindNull;
		gMnBattlePanels[player].unk_0x88 = FALSE;
		gMnBattlePanels[player].holder_player = player;
		gMnBattlePanels[player].held_player = player;

		mnVSPlayersReorderCursorsOnPickup(player, player);

		gMnBattlePanels[player].unk_0xA0 = FALSE;

		if (gMnBattlePanels[player].type != NULL)
		{
			gcEjectGObj(gMnBattlePanels[player].type);
			mnVSPlayersCreateTypeImage(player);
		}

		if (gMnBattleIsTeamBattle == 0)
		{
			mnUpdatePanel(gMnBattlePanels[player].panel, player, gMnBattlePanels[player].player_type);
			return;
		}

		mnUpdatePanel(gMnBattlePanels[player].panel,
					  gMnBattlePanels[player].team == 2 ? 3 : gMnBattlePanels[player].team,
					  gMnBattlePanels[player].player_type);
		return;
	case mnPanelTypeCPU:
		if (gMnBattlePanels[player].held_player != -1)
		{
			gMnBattlePanels[gMnBattlePanels[player].held_player].holder_player = 4;
			gMnBattlePanels[gMnBattlePanels[player].held_player].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[player].held_player].unk_0x88 = TRUE;

			mnVSPlayersReorderCursorsOnPlacement(player, gMnBattlePanels[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[player].held_player);
			mnVSPlayersCreateFlash(gMnBattlePanels[player].held_player);
		}

		gMnBattlePanels[player].is_selected = TRUE;
		gMnBattlePanels[player].holder_player = 4;
		gMnBattlePanels[player].held_player = -1;

		mnVSPlayersReorderCursorsOnPlacement(4U, player);

		gMnBattlePanels[player].unk_0x88 = TRUE;

		if (gMnBattlePanels[player].fkind == nFTKindNull)
			gMnBattlePanels[player].fkind = mnSelectRandomFighter(gMnBattlePanels[player].token);

		gMnBattlePanels[player].unk_0xA0 = FALSE;
		if (gMnBattlePanels[player].type != NULL)
		{
			gcEjectGObj(gMnBattlePanels[player].type);
			mnVSPlayersCreateTypeImage(player);
		}

		if (gMnBattleIsTeamBattle == 0)
		{
			mnUpdatePanel(gMnBattlePanels[player].panel, player, gMnBattlePanels[player].player_type);
			return;
		}

		mnUpdatePanel(gMnBattlePanels[player].panel,
					  gMnBattlePanels[player].team == 2 ? 3 : gMnBattlePanels[player].team,
					  gMnBattlePanels[player].player_type);
		return;
	case mnPanelTypeNA:
		if (gMnBattlePanels[player].holder_player != 4)
		{
			gMnBattlePanels[gMnBattlePanels[player].holder_player].held_player = -1;
			gMnBattlePanels[gMnBattlePanels[player].holder_player].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[player].holder_player].cursor_state = mnCursorStateNotHoldingToken;

			cursor_gobj = gMnBattlePanels[gMnBattlePanels[player].holder_player].cursor;
			if (cursor_gobj != NULL)
			{
				mnVSPlayersRedrawCursor(cursor_gobj, gMnBattlePanels[player].holder_player,
									 gMnBattlePanels[gMnBattlePanels[player].holder_player].cursor_state);
			}
		}

		if (gMnBattlePanels[player].held_player != -1)
		{
			gMnBattlePanels[gMnBattlePanels[player].held_player].holder_player = 4;
			gMnBattlePanels[gMnBattlePanels[player].held_player].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[player].held_player].unk_0x88 = TRUE;
			mnVSPlayersReorderCursorsOnPlacement(player, gMnBattlePanels[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[player].held_player);
			mnVSPlayersCreateFlash(gMnBattlePanels[player].held_player);
		}

		gMnBattlePanels[player].is_selected = FALSE;
		gMnBattlePanels[player].held_player = -1;
		gMnBattlePanels[player].fkind = nFTKindNull;
		gMnBattlePanels[player].unk_0x88 = FALSE;
		gMnBattlePanels[player].unk_0xA0 = FALSE;

		if (gMnBattleControllerOrderArray[player] != -1)
			gMnBattlePanels[player].holder_player = player;
		return;
	}
}

// 0x80136038
void mnSyncTokenDisplay(GObj* token_gobj, s32 player)
{
	s32 token_ids[4] = {

		0, 1, 2, 3
	};

	if ((gMnBattlePanels[player].cursor_state == mnCursorStatePointer)
		&& (gMnBattlePanels[player].is_selected == FALSE))
	{
		token_gobj->flags = 1;
	}
	else
		token_gobj->flags = 0;

	switch (gMnBattlePanels[player].player_type)
	{
	case mnPanelTypeHuman:
		gMnBattlePanels[player].is_selected = FALSE;
		mnVSPlayersRedrawToken(token_gobj, token_ids[player]);
		break;
	case mnPanelTypeCPU:
		mnVSPlayersRedrawToken(token_gobj, 4);
		gMnBattlePanels[player].is_selected = TRUE;
		break;
	case mnPanelTypeNA:
		if (FALSE)
			; // grr!

		token_gobj->flags = 1;
		break;
	}
	return;
}

// 0x80136128
void mnVSPlayersSyncFighterDisplay(s32 player)
{
	GObj* player_gobj;
	s32 var_v0 = 0;

	player_gobj = gMnBattlePanels[player].player;

	if (player_gobj != NULL)
	{
		if (gMnBattlePanels[player].player_type == mnPanelTypeNA)
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
		else if ((gMnBattlePanels[player].fkind == nFTKindNull) && (gMnBattlePanels[player].is_selected == 0))
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		gMnBattlePanels[player].shade = mnVSPlayersGetShade(player);
		mnVSPlayersSpawnFighter(gMnBattlePanels[player].player, player, gMnBattlePanels[player].fkind,
							 mnVSPlayersGetAvailableCostume(gMnBattlePanels[player].fkind, player));
		gMnBattlePanels[player].is_fighter_selected = FALSE;
	}
}

// 0x801361F8
void mnUpdateCursor(GObj* cursor_gobj, s32 player)
{
	if (cursor_gobj != NULL)
	{
		if ((SObjGetStruct(cursor_gobj)->pos.y > 122.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 36.0F))
		{
			if (gMnBattlePanels[player].cursor_state != mnCursorStatePointer)
			{
				mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStatePointer);
				gMnBattlePanels[player].cursor_state = mnCursorStatePointer;
			}
		}
		else
		{
			if ((gMnBattlePanels[player].is_selected == 1) || (gMnBattlePanels[player].player_type == 2))
			{
				mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStateNotHoldingToken);
				gMnBattlePanels[player].cursor_state = mnCursorStateNotHoldingToken;
			}
			else if (gMnBattlePanels[player].cursor_state != mnCursorStateHoldingToken)
			{
				mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStateHoldingToken);
				gMnBattlePanels[player].cursor_state = mnCursorStateHoldingToken;
			}
		}
	}
}

// 0x80136300
void mnVSPlayersSyncNameAndLogo(s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];

	if ((panel_info->player_type == mnPanelTypeNA)
		|| ((panel_info->fkind == nFTKindNull) && (panel_info->is_selected == FALSE)))
	{
		panel_info->name_logo_gobj->flags = 1;
	}
	else
	{
		panel_info->name_logo_gobj->flags = 0;
		mnVSPlayersMakeNameAndEmblem(panel_info->name_logo_gobj, player, panel_info->fkind);
	}
}

// 0x80136388
void mnVSPlayersRemoveFlash(s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];

	if (panel_info->white_square != NULL)
	{
		gcEjectGObj(panel_info->white_square);
		panel_info->white_square = NULL;
	}
}

// 0x801363DC
void mnVSPlayersPortraitFlash(GObj* white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0)
			mnVSPlayersRemoveFlash(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x8013647C
void mnVSPlayersCreateFlash(s32 player)
{
	GObj* white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait = mnVSPlayersGetPortraitId(gMnBattlePanels[player].fkind);

	mnVSPlayersRemoveFlash(player);

	white_square_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1EU, 0x80000000U);
	gMnBattlePanels[player].white_square = white_square_gobj;
	gcAddGObjDisplay(white_square_gobj, lbCommonDrawSObjAttr, 0x25U, GOBJ_PRIORITY_DEFAULT, ~0);
	white_square_gobj->user_data.p = player;
	gcAddGObjProcess(white_square_gobj, mnVSPlayersPortraitFlash, 0, 1);

	white_square_sobj
		= lbCommonMakeSObjForGObj(white_square_gobj, lbRelocGetFileData(void*, gFile013, &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32)(((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26);
	white_square_sobj->pos.y = (f32)(((portrait >= 6 ? 1 : 0) * 43) + 37);
}

// 0x801365D0
sb32 mnCheckAndHandlePlayerTypeButtonPress(GObj* cursor_gobj, s32 player, u32 panel_id)
{
	s32 player_type;

	if (mnCheckPlayerTypeButtonPress(cursor_gobj, panel_id))
	{
		if (gMnBattleControllerOrderArray[panel_id] == -1)
		{
			player_type = gMnBattlePanels[panel_id].player_type + 1;

			gMnBattlePanels[panel_id].player_type = (player_type >= 3) ? mnPanelTypeCPU : player_type;
		}
		else
		{
			player_type = gMnBattlePanels[panel_id].player_type + 1;

			gMnBattlePanels[panel_id].player_type = (player_type >= 3) ? mnPanelTypeHuman : player_type;
		}

		mnHandlePlayerTypeButtonPress(panel_id);
		mnRecreateTypeButton(gMnBattlePanels[panel_id].type_button, panel_id, gMnBattlePanels[panel_id].player_type);
		mnSyncTokenDisplay(gMnBattlePanels[panel_id].token, panel_id);
		mnUpdateCursor(gMnBattlePanels[panel_id].cursor, panel_id);
		mnVSPlayersSyncFighterDisplay(panel_id);
		mnVSPlayersSyncNameAndLogo(panel_id);

		switch (gMnBattlePanels[panel_id].player_type)
		{
		case mnPanelTypeHuman:
			gMnBattlePanels[panel_id].holder_player = panel_id;
			func_800269C0_275C0(nSYAudioFGMPlayerSlotWhoosh);
			break;
		case mnPanelTypeCPU:
			gMnBattlePanels[panel_id].holder_player = 4;
			mnVSPlayersAnnounceFighter(player, panel_id);
			mnReplaceFighterNameWithHandicapCPULevel(panel_id);
			mnVSPlayersCreateFlash(panel_id);
			break;
		case mnPanelTypeNA: func_800269C0_275C0(nSYAudioFGMPlayerSlotWhoosh); break;
		}

		func_800269C0_275C0(nSYAudioFGMTitlePressStart);
		return TRUE;
	}
	return FALSE;
}

// 0x8013676C
sb32 mnCheckAndHandleAnyPlayerTypeButtonPress(GObj* cursor_gobj, s32 player)
{
	sb32 was_pressed = FALSE;

	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, player, 0))
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, player, 1))
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, player, 2))
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, player, 3))
		was_pressed = TRUE;

	return was_pressed;
}

// 0x801367F0
void mnVSPlayersAnnounceFighter(s32 player, s32 panel_id)
{
	// announcer names
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6, 0x01E3, 0x0201, 0x01F2, 0x01F1,
		0x0217, 0x01E5, 0x01F0, 0x01FB, 0x01FC, 0x01F5
	};

	func_80026738_27338(gMnBattlePanels[player].p_sfx);
	func_800269C0_275C0(nSYAudioFGMMarioDash);

	gMnBattlePanels[player].p_sfx = func_800269C0_275C0(announcer_fgms[gMnBattlePanels[panel_id].fkind]);

	if (gMnBattlePanels[player].p_sfx != 0)
		gMnBattlePanels[player].sfx_id = gMnBattlePanels[player].p_sfx->sfx_id;
}

// 0x801368C4
void mnHideFighterName(s32 player)
{
	SObj* name_logo_gobj_sobj;
	SObj* name_sobj;

	name_logo_gobj_sobj = SObjGetStruct(gMnBattlePanels[player].name_logo_gobj);

	if (name_logo_gobj_sobj != NULL)
	{
		name_sobj = SObjGetNext(name_logo_gobj_sobj);

		if (name_sobj != NULL)
			name_sobj->sprite.attr |= SP_HIDDEN;
	}
}

// 0x80136910
void mnVSPlayersRemoveHandicapCPULevel(s32 player)
{
	if (gMnBattlePanels[player].handicap_cpu_level != NULL)
		gcEjectGObj(gMnBattlePanels[player].handicap_cpu_level);
	if (gMnBattlePanels[player].arrows != NULL)
		gcEjectGObj(gMnBattlePanels[player].arrows);
	if (gMnBattlePanels[player].handicap_cpu_level_value != NULL)
		gcEjectGObj(gMnBattlePanels[player].handicap_cpu_level_value);

	gMnBattlePanels[player].handicap_cpu_level = NULL;
	gMnBattlePanels[player].arrows = NULL;
	gMnBattlePanels[player].handicap_cpu_level_value = NULL;
}

// 0x80136998
SObj* mnVSPlayersGetArrowSObj(GObj* arrow_gobj, s32 direction)
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

// 0x801369E4
void mnVSPlayersSyncAndBlinkArrows(GObj* arrow_gobj)
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
			arrow_gobj->flags = arrow_gobj->flags == GOBJ_FLAG_HIDDEN ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
		}

		value = (gMnBattlePanels[player].player_type == 0) ? gMnBattlePanels[player].handicap
															: gMnBattlePanels[player].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mnVSPlayersGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnVSPlayersGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj
				= lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = (player * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mnVSPlayersGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnVSPlayersGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj
				= lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = (player * 0x45) + 0x4F;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x80136C18
void mnVSPlayersSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
	s32 player = handicap_cpu_level_gobj->user_data.p;

	if (gMnBattlePanels[player].unk_0x88 == 0)
		mnVSPlayersRemoveHandicapCPULevel(player);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gMnBattlePanels[player].player_type)
		mnVSPlayersDrawHandicapCPULevel(player);
}

// 0x80136C8C
void mnVSPlayersDrawHandicapCPULevel(s32 player)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (gMnBattlePanels[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(gMnBattlePanels[player].handicap_cpu_level);
		gMnBattlePanels[player].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gMnBattlePanels[player].handicap_cpu_level = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	handicap_cpu_level_gobj->user_data.p = player;
	gcAddGObjProcess(handicap_cpu_level_gobj, mnVSPlayersSyncHandicapCPULevelDisplay, 1, 1);

	if (gMnBattlePanels[player].player_type == 0)
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
			handicap_cpu_level_gobj, lbRelocGetFileData(void*, gMnBattleFiles[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
			handicap_cpu_level_gobj, lbRelocGetFileData(void*, gMnBattleFiles[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x22;
		handicap_cpu_level_sobj->user_data.p = 1;
	}

	handicap_cpu_level_sobj->sprite.red = 0xC2;
	handicap_cpu_level_sobj->sprite.green = 0xBD;
	handicap_cpu_level_sobj->sprite.blue = 0xAD;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 201.0F;

	handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
		handicap_cpu_level_gobj, lbRelocGetFileData(void*, gMnBattleFiles[1], &FILE_000_COLON_IMAGE_OFFSET));
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x3D;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 0x80136E90
void mnDrawHandicapCPULevelValue(s32 player)
{
	intptr_t offsets[10] = {

		0x0000D310, 0x0000D3E0, 0x0000D4B0, 0x0000D580, 0x0000D650,
		0x0000D720, 0x0000D7F0, 0x0000D8C0, 0x0000D990, 0x0000DA60
	};
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;
	u32 value = (gMnBattlePanels[player].player_type == 0) ? gMnBattlePanels[player].handicap
															: gMnBattlePanels[player].cpu_level;

	if (gMnBattlePanels[player].handicap_cpu_level_value != NULL)
	{
		gcEjectGObj(gMnBattlePanels[player].handicap_cpu_level_value);
		gMnBattlePanels[player].handicap_cpu_level_value = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gMnBattlePanels[player].handicap_cpu_level_value = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);

	handicap_cpu_level_sobj
		= lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, gFile000, offsets[value]));
	handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x43;
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 200.0F;
}

// 0x80137004
void mnReplaceFighterNameWithHandicapCPULevel(s32 player)
{
	GObj* arrow_gobj;

	mnHideFighterName(player);
	mnVSPlayersRemoveHandicapCPULevel(player);
	mnVSPlayersDrawHandicapCPULevel(player);

	if ((mnIsHandicapAuto() == FALSE) || (gMnBattlePanels[player].player_type == 1))
	{
		arrow_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
		gMnBattlePanels[player].arrows = arrow_gobj;
		gcAddGObjDisplay(arrow_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
		arrow_gobj->user_data.s = player;
		gcAddGObjProcess(arrow_gobj, mnVSPlayersSyncAndBlinkArrows, 0, 1);
	}
	mnDrawHandicapCPULevelValue(player);
}

// 0x801370F8
sb32 mnIsHandicapOn()
{
	return (gSCManagerTransferBattleState.handicap == 1) ? TRUE : FALSE;
}

// 0x80137120
sb32 mnIsHandicapAuto()
{
	return (gSCManagerTransferBattleState.handicap == 2) ? TRUE : FALSE;
}

// 0x80137148
sb32 mnIsHandicap()
{
	if ((mnIsHandicapOn()) || (mnIsHandicapAuto()))
		return TRUE;
	else
		return FALSE;
}

// 0x8013718C
sb32 mnVSPlayersSelectChar(GObj* cursor_gobj, s32 player, s32 arg2, s32 select_button)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];

	if (panel_info->cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (gMnBattlePanels[panel_info->held_player].fkind != nFTKindNull)
	{
		mnVSPlayersSelectFighterToken(player, select_button);
		panel_info->min_frames_elapsed_until_recall = gMnBattleTotalTimeTics + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(nSYAudioFGMMenuDenied);
	return FALSE;
}

// 0x80137234
void mnVSPlayersReorderCursorsOnPickup(s32 player, s32 token_id)
{
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};
	s32 i, order_id;

	gcMoveGObjDL(gMnBattlePanels[player].cursor, 0x20U, diplay_orders[3]);
	gcMoveGObjDL(gMnBattlePanels[token_id].token, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != player)
		{
			if (gMnBattlePanels[i].cursor != NULL)
				gcMoveGObjDL(gMnBattlePanels[i].cursor, 0x20U, diplay_orders[order_id]);
			if (gMnBattlePanels[i].held_player != -1U)
			{
				gcMoveGObjDL(gMnBattlePanels[gMnBattlePanels[i].held_player].token, 0x20U,
							 diplay_orders[order_id] + 1);
			}
		}
	}
}

// 0x80137390
s32 mnVSPlayersReorderCursorsOnPlacement(s32 player, s32 held_token_id)
{
	s32 held_orders[4] = {

		3, 2, 1, 0
	},
		unheld_orders[4] = {

		6, 4, 2, 0
	};
	s32* order;
	s32 unused;
	sb32 token_held[4];
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].held_player == -1)
			token_held[i] = FALSE;
		else
			token_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != player) && (token_held[i]))
		{
			if (gMnBattlePanels[i].cursor != NULL)
				gcMoveGObjDL(gMnBattlePanels[i].cursor, 0x20, *order);
			gcMoveGObjDL(gMnBattlePanels[gMnBattlePanels[i].held_player].token, 0x20, *order + 1);
			order--;
		}
	}

	if (player != 4)
		gcMoveGObjDL(gMnBattlePanels[player].cursor, 0x20, *order);

	gcMoveGObjDL(gMnBattlePanels[held_token_id].token, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if ((i != player) && (token_held[i] == FALSE))
		{
			if (gMnBattlePanels[i].cursor != NULL)
				gcMoveGObjDL(gMnBattlePanels[i].cursor, 0x20, *order);
			order--;
		}
	}
}

// 0x801375A8
void mnVSPlayersSetCursorCoordinatesFromToken(s32 player)
{
	mnCharPanelBattle* panel_info;
	mnCharPanelBattle* held_token_panel_info;

	panel_info = &gMnBattlePanels[player];
	held_token_panel_info = &gMnBattlePanels[panel_info->held_player];

	panel_info->cursor_pickup_x = SObjGetStruct(held_token_panel_info->token)->pos.x - 11.0F;
	panel_info->cursor_pickup_y = SObjGetStruct(held_token_panel_info->token)->pos.y - -14.0F;
}

// 0x8013760C
void mnVSPlayersHandleCursorPickup(s32 player, s32 held_player)
{
	mnCharPanelBattle* panel_info;
	mnCharPanelBattle* held_token_panel_info;

	held_token_panel_info = &gMnBattlePanels[held_player];
	held_token_panel_info->holder_player = player;
	held_token_panel_info->is_selected = FALSE;

	panel_info = &gMnBattlePanels[player];
	panel_info->cursor_state = mnCursorStateHoldingToken;
	panel_info->held_player = held_player;

	held_token_panel_info->unk_0x88 = FALSE;

	mnVSPlayersSyncFighterDisplay(held_player);
	mnVSPlayersReorderCursorsOnPickup(player, held_player);
	mnVSPlayersSetCursorCoordinatesFromToken(player);
	mnVSPlayersRedrawCursor(panel_info->cursor, player, panel_info->cursor_state);

	panel_info->unk_0xA0 = TRUE;

	func_800269C0_275C0(nSYAudioFGMSamusDash);

	mnVSPlayersRemoveHandicapCPULevel(held_player);
	mnVSPlayersRemoveFlash(held_player);
	mnVSPlayersSyncNameAndLogo(held_player);
}

// 0x801376D0
sb32 mnVSPlayersCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 player)
{
	s32 i;

	if ((gMnBattleTotalTimeTics < gMnBattlePanels[player].min_frames_elapsed_until_recall)
		|| (gMnBattlePanels[player].is_recalling))
	{
		return FALSE;
	}
	else if (gMnBattlePanels[player].cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	for (i = 3; i >= 0; i--)
	{
		if (player == i)
		{
			if ((gMnBattlePanels[i].holder_player == 4) && (gMnBattlePanels[i].player_type != 2)
				&& (mnVSPlayersCheckTokenPickup(cursor_gobj, player, i) != 0))
			{
				mnVSPlayersHandleCursorPickup(player, i);

				return TRUE;
			}
		}
		else if ((gMnBattlePanels[i].holder_player == 4) && (gMnBattlePanels[i].player_type == 1)
				 && (mnVSPlayersCheckTokenPickup(cursor_gobj, player, i) != 0))
		{
			mnVSPlayersHandleCursorPickup(player, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 0x8013782C
s32 mnVSPlayersGetFighterKindFromTokenPosition(s32 player)
{
	SObj* token_sobj = SObjGetStruct(gMnBattlePanels[player].token);
	s32 current_y = (s32)token_sobj->pos.x + 13;
	s32 current_x = (s32)token_sobj->pos.y + 12;
	s32 fkind;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			fkind = mnVSPlayersGetFighterKind((s32)(current_y - 25) / 45);

			if ((mnVSPlayersCheckFighterIsXBoxed(fkind)) || (mnVSPlayersGetIsLocked(fkind)))
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
			fkind = mnVSPlayersGetFighterKind(((s32)(current_y - 25) / 45) + 6);

			if ((mnVSPlayersCheckFighterIsXBoxed(fkind)) || (mnVSPlayersGetIsLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}
	return nFTKindNull;
}

// 0x801379B8
void mnVSPlayersAutoPositionCursor(GObj* cursor_gobj, s32 player)
{
	SYController* controller;
	Vec2i coords[3] = {

		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (gMnBattlePanels[player].unk_0xA0)
	{
		delta
			= (gMnBattlePanels[player].cursor_pickup_x - SObjGetStruct(gMnBattlePanels[player].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBattlePanels[player].cursor)->pos.x = gMnBattlePanels[player].cursor_pickup_x;
		else
			SObjGetStruct(gMnBattlePanels[player].cursor)->pos.x += delta;

		delta
			= (gMnBattlePanels[player].cursor_pickup_y - SObjGetStruct(gMnBattlePanels[player].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBattlePanels[player].cursor)->pos.y = gMnBattlePanels[player].cursor_pickup_y;
		else
			SObjGetStruct(gMnBattlePanels[player].cursor)->pos.y += delta;

		if ((SObjGetStruct(gMnBattlePanels[player].cursor)->pos.x == gMnBattlePanels[player].cursor_pickup_x)
			&& (SObjGetStruct(gMnBattlePanels[player].cursor)->pos.y == gMnBattlePanels[player].cursor_pickup_y))
		{
			gMnBattlePanels[player].unk_0xA0 = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
			= (f32)((f32)coords[gMnBattlePanels[player].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
			= (f32)((f32)coords[gMnBattlePanels[player].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (gMnBattlePanels[player].is_recalling == FALSE)
	{
		controller = &gSYControllerDevices[player];

		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32)controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
					= SObjGetStruct(cursor_gobj)->pos.x + coords[gMnBattlePanels[player].cursor_state].x;
			}
		}

		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32)controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
					= SObjGetStruct(cursor_gobj)->pos.y + coords[gMnBattlePanels[player].cursor_state].y;
			}
		}
	}
}

// 0x80137D4C
void mnVSPlayersSyncCursorDisplay(GObj* cursor_gobj, s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (panel_info->cursor_state != mnCursorStatePointer)
		{
			mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStatePointer);
			panel_info->cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (panel_info->held_player == -1)
		{
			if (panel_info->cursor_state != mnCursorStateNotHoldingToken)
			{
				mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (panel_info->cursor_state != mnCursorStateHoldingToken)
			{
				mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStateHoldingToken);
				panel_info->cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if ((panel_info->cursor_state == mnCursorStatePointer) && (panel_info->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBattlePanels[i].is_selected == 1) && (mnVSPlayersCheckTokenPickup(cursor_gobj, player, i) != 0))
			{
				mnVSPlayersRedrawCursor(cursor_gobj, player, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 0x80137EFC
void mnTryCostumeChange(s32 player, s32 select_button)
{
	u32 costume = ftParamGetCostumeCommonID(gMnBattlePanels[player].fkind, select_button);

	if (mnVSPlayersIsCostumeInUse(gMnBattlePanels[player].fkind, player, costume))
	{
		func_800269C0_275C0(nSYAudioFGMMenuDenied);
		return;
	}

	gMnBattlePanels[player].costume = costume;
	gMnBattlePanels[player].shade = mnVSPlayersGetShade(player);

	ftParamInitAllParts(gMnBattlePanels[player].player, costume, gMnBattlePanels[player].shade);

	func_800269C0_275C0(nSYAudioFGMMenuScroll2);
}

// 0x80137F9C
sb32 mnIsHumanWithCharacterSelected(s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];

	if ((panel_info->is_selected) && (panel_info->held_player == -1)
		&& (panel_info->player_type == mnPanelTypeHuman))
	{
		return TRUE;
	}
	else
		return FALSE;
}

// 0x80137FF8
void mnRecallToken(s32 player)
{
	gMnBattlePanels[player].unk_0x88 = FALSE;
	gMnBattlePanels[player].is_selected = FALSE;
	gMnBattlePanels[player].is_recalling = TRUE;
	gMnBattlePanels[player].recall_frame_counter = 0;
	gMnBattlePanels[player].recall_start_x = SObjGetStruct(gMnBattlePanels[player].token)->pos.x;
	gMnBattlePanels[player].recall_start_y = SObjGetStruct(gMnBattlePanels[player].token)->pos.y;

	gMnBattlePanels[player].recall_end_x = SObjGetStruct(gMnBattlePanels[player].cursor)->pos.x + 20.0F;

	if (gMnBattlePanels[player].recall_end_x > 280.0F)
		gMnBattlePanels[player].recall_end_x = 280.0F;

	gMnBattlePanels[player].recall_end_y = SObjGetStruct(gMnBattlePanels[player].cursor)->pos.y + -15.0F;

	if (gMnBattlePanels[player].recall_end_y < 10.0F)
		gMnBattlePanels[player].recall_end_y = 10.0F;

	if (gMnBattlePanels[player].recall_end_y < gMnBattlePanels[player].recall_start_y)
		gMnBattlePanels[player].recall_mid_y = gMnBattlePanels[player].recall_end_y - 20.0F;
	else
		gMnBattlePanels[player].recall_mid_y = gMnBattlePanels[player].recall_start_y - 20.0F;
}

// 0x801380F4
void mnGoBackToVSMenu()
{
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = 9;

	mnVSPlayersSaveMatchInfo();
	mnVSPlayersDestroyCursorAndTokenProcesses();
	syAudioStopSongAll();
	syTaskmanSetLoadScene();
}

// 0x80138140
void mnExitIfBButtonHeld(s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];
	SYController* controller = &gSYControllerDevices[player];

	if (panel_info->is_hold_b)
	{
		if ((panel_info->hold_b_tics != 0))
		{
			panel_info->hold_b_tics++;

			if ((panel_info->hold_b_tics < 41))
			{
				if (controller->button_hold & B_BUTTON)
				{
					if (panel_info->hold_b_tics == 40)
						mnGoBackToVSMenu();
				}
				else
				{
					panel_info->is_hold_b = FALSE;
					panel_info->hold_b_tics = 0;
				}
			}
		}
	}
	else
	{
		if (controller->button_tap & B_BUTTON)
			panel_info->is_hold_b = TRUE;
		panel_info->hold_b_tics = 1;
	}
}

// 0x80138218
s32 mnCheckBackButtonPress(GObj* cursor_gobj)
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

// 0x801382E0
void mnVSPlayersHandleButtonPresses(GObj* cursor_gobj)
{
	SYController* controller;
	mnCharPanelBattle* panel_info;
	s32 foo, bar, baz;
	s32 player = cursor_gobj->user_data.s;

	mnVSPlayersAutoPositionCursor(cursor_gobj, player);
	controller = &gSYControllerDevices[player];

	if ((controller->button_tap & A_BUTTON) && (mnCheckAndHandleAnyPlayerTypeButtonPress(cursor_gobj, player) == FALSE)
		&& (mnVSPlayersSelectChar(cursor_gobj, player, gMnBattlePanels[player].held_player, 4) == FALSE)
		&& (mnVSPlayersCheckAndHandleTokenPickup(cursor_gobj, player) == FALSE))
	{
		if (mnCheckPickerRightArrowPress(cursor_gobj))
		{
			if (gMnBattleRule == SCBATTLE_GAMERULE_TIME)
			{
				gMnBattleTimerValue = mnVSPlayersGetNextTimerValue(gMnBattleTimerValue);
				mnDrawTimerPicker(gMnBattleTimerValue);
			}
			else
			{
				if (gMnBattleStockValue + 1 >= 0x63)
					gMnBattleStockValue = 0;
				else
					gMnBattleStockValue = gMnBattleStockValue + 1;
				mnDrawStockPicker(gMnBattleStockValue);
			}
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckPickerLeftArrowPress(cursor_gobj))
		{
			if (gMnBattleRule == SCBATTLE_GAMERULE_TIME)
			{
				gMnBattleTimerValue = mnVSPlayersGetPrevTimerValue(gMnBattleTimerValue);
				mnDrawTimerPicker(gMnBattleTimerValue);
			}
			else
			{
				if (gMnBattleStockValue - 1 < 0)
					gMnBattleStockValue = 0x62;
				else
					gMnBattleStockValue = gMnBattleStockValue - 1;
				mnDrawStockPicker(gMnBattleStockValue);
			}
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckRoyalTeamBattleTogglePress(cursor_gobj))
			mnHandleRoyalTeamBattleTogglePress();
		else if (mnCheckBackButtonPress(cursor_gobj))
		{
			mnGoBackToVSMenu();
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckAnyTeamButtonPress(cursor_gobj, player) == FALSE)
			mnCheckAnyCPUHandicapArrowPress(cursor_gobj, player);
	}

	panel_info = &gMnBattlePanels[player];

	if (gMnBattleIsTeamBattle == FALSE)
	{
		if ((controller->button_tap & U_CBUTTONS)
			&& (mnVSPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 0) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(player, 0);
		}
		if ((controller->button_tap & R_CBUTTONS)
			&& (mnVSPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 1) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(player, 1);
		}
		if ((controller->button_tap & D_CBUTTONS)
			&& (mnVSPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 2) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(player, 2);
		}
		if ((controller->button_tap & L_CBUTTONS)
			&& (mnVSPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 3) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(player, 3);
		}
	}
	else if (controller->button_tap & (U_CBUTTONS | R_CBUTTONS | D_CBUTTONS | L_CBUTTONS))
		mnVSPlayersSelectChar(cursor_gobj, player, panel_info->held_player, 4);
	if ((controller->button_tap & B_BUTTON) && (mnIsHumanWithCharacterSelected(player)))
		mnRecallToken(player);
	if (panel_info->is_recalling == FALSE)
		mnExitIfBButtonHeld(player);
	if (panel_info->is_recalling == FALSE)
		mnVSPlayersSyncCursorDisplay(cursor_gobj, player);
}

// 0x801386E4
void mnVSPlayersRedrawToken(GObj* token_gobj, s32 token_index)
{
	SObj* token_sobj;
	f32 current_x, current_y;
	intptr_t token_offsets[5] = {

		0x00009048, 0x00009B28, 0x0000A608, 0x0000B0E8, 0x0000BBC8
	};

	current_x = SObjGetStruct(token_gobj)->pos.x;
	current_y = SObjGetStruct(token_gobj)->pos.y;

	gcRemoveSObjAll(token_gobj);

	token_sobj = lbCommonMakeSObjForGObj(token_gobj, lbRelocGetFileData(void*, gFile011, token_offsets[token_index]));
	token_sobj->pos.x = current_x;
	token_sobj->pos.y = current_y;
	token_sobj->sprite.attr &= ~SP_FASTCOPY;
	token_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80138798
void mnVSPlayersCenterTokenInPortrait(GObj* token_gobj, s32 fkind)
{
	s32 portrait = mnVSPlayersGetPortraitId(fkind);

	if (portrait >= 6)
	{
		SObjGetStruct(token_gobj)->pos.x = (portrait * 45) - (6 * 45) + 36;
		SObjGetStruct(token_gobj)->pos.y = 89.0F;
	}
	else
	{
		SObjGetStruct(token_gobj)->pos.x = (portrait * 45) + 36;
		SObjGetStruct(token_gobj)->pos.y = 46.0F;
	}
}

// 0x80138848
s32 mnSelectRandomFighter(GObj* token_gobj)
{
	s32 fkind;

	do
	{
		do
			fkind = syUtilsGetRandomTimeUCharRange(12);
		while (mnVSPlayersCheckFighterIsXBoxed(fkind) != 0);
	} while (mnVSPlayersGetIsLocked(fkind) != 0);

	mnVSPlayersCenterTokenInPortrait(token_gobj, fkind);
	return fkind;
}

// 0x801388A4
void mnMoveToken(s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];

	SObjGetStruct(panel_info->token)->pos.x += panel_info->token_x_velocity;
	SObjGetStruct(panel_info->token)->pos.y += panel_info->token_y_velocity;
}

// 0x801388F8
void mnVSPlayersSyncTokenAndFighter(GObj* token_gobj)
{
	s32 fkind;
	s32 player = token_gobj->user_data.s;

	if (gMnBattleTotalTimeTics < 0x1E)
		token_gobj->flags = 1;
	else
	{
		if ((gMnBattlePanels[player].player_type == mnPanelTypeCPU)
			|| ((gMnBattlePanels[player].player_type == mnPanelTypeHuman)
				&& ((gMnBattlePanels[player].cursor_state != mnCursorStatePointer)
					|| (gMnBattlePanels[player].is_selected == TRUE)
					|| (gMnBattlePanels[player].is_recalling == TRUE))))
		{
			token_gobj->flags = 0;
		}
		else
			token_gobj->flags = 1;
	}

	if ((gMnBattlePanels[player].is_selected == FALSE) && (gMnBattlePanels[player].holder_player != 4))
	{
		if (gMnBattlePanels[gMnBattlePanels[player].holder_player].unk_0xA0 == FALSE)
		{
			if (gMnBattlePanels[gMnBattlePanels[player].holder_player].cursor != NULL)
			{
				SObjGetStruct(token_gobj)->pos.x
					= (f32)(SObjGetStruct(gMnBattlePanels[gMnBattlePanels[player].holder_player].cursor)->pos.x
							+ 11.0F);
				SObjGetStruct(token_gobj)->pos.y
					= (f32)(SObjGetStruct(gMnBattlePanels[gMnBattlePanels[player].holder_player].cursor)->pos.y
							+ -14.0F);
			}
		}
	}
	else
		mnMoveToken(player);

	fkind = mnVSPlayersGetFighterKindFromTokenPosition(player);

	switch (gMnBattlePanels[player].player_type)
	{
	case mnPanelTypeNA:
		if ((gMnBattleControllerOrderArray[player] != -1) && (fkind != nFTKindNull))
		{
			gMnBattlePanels[player].player_type = mnPanelTypeHuman;

			mnHandlePlayerTypeButtonPress(player);
			mnRecreateTypeButton(gMnBattlePanels[player].type_button, player, gMnBattlePanels[player].player_type);
			mnSyncTokenDisplay(gMnBattlePanels[player].token, player);
		}
		else
			break;
	default:
		if ((gMnBattlePanels[player].player_type == mnPanelTypeCPU) && (fkind != gMnBattlePanels[player].fkind)
			&& (fkind == nFTKindNull))
		{
			if (gMnBattlePanels[player].holder_player != 4)
				mnVSPlayersSelectFighterToken(gMnBattlePanels[player].holder_player, 4);
		}
		if ((gMnBattlePanels[player].is_selected == FALSE) && (fkind != gMnBattlePanels[player].fkind))
		{
			gMnBattlePanels[player].fkind = fkind;

			mnVSPlayersSyncFighterDisplay(player);
			mnVSPlayersSyncNameAndLogo(player);
		}
	}
}

// 0x80138B6C
void mnVSPlayersCreateCursorViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138C0C
void mnVSPlayersCreateDroppedTokenViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138CAC
void mnVSPlayersCreateHandicapCPULevelViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138D4C
void mnVSPlayersCreateReadyToFightViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138DEC
void mnVSPlayersCreateCursor(s32 player)
{
	GObj* cursor_gobj;
	s32 unused;
	s32 cursortype_offsets_unused[4] = {

		0x00008268, 0x00008368,
		0x00008468, 0x00008568
	};
	Vec2f cursor_starting_positions[4] = {

		{ 40, 170 },
		{ 108, 170 },
		{ 176, 170 },
		{ 244, 170 }
	};
	s32 starting_display_orders[4] = {

		6, 4, 2, 0
	};

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x20, starting_display_orders[player], -1,
									 lbRelocGetFileData(void*, gFile011, &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1,
									 mnVSPlayersHandleButtonPresses, 2);

	gMnBattlePanels[player].cursor = cursor_gobj;
	cursor_gobj->user_data.s = player;
	SObjGetStruct(cursor_gobj)->pos.x = (f32)cursor_starting_positions[player].x;
	SObjGetStruct(cursor_gobj)->pos.y = (f32)cursor_starting_positions[player].y;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnVSPlayersRedrawCursor(cursor_gobj, player, 0);
}

// 0x80138FA0
void mnVSPlayersRenderToken(GObj* token_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor(gSYTaskmanDLHeads[0]++, gMnBattleTokenShinePulseColor & 0xFF, gMnBattleTokenShinePulseColor & 0xFF,
				   gMnBattleTokenShinePulseColor & 0xFF, gMnBattleTokenShinePulseColor & 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0, TEXEL0,
					  PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(token_gobj);
}

// 0x80139098
void mnVSPlayersCreateToken(s32 player)
{
	GObj* token_gobj;
	mnCharPanelBattle* panel_info;
	intptr_t offsets_no_cpu[4] = {
	
		0x9048, 0x9B28,
		0xA608, 0xB0E8,
	};
	s32 start_display_orders[4] = {

		3, 2, 1, 0
	};
	s32 hold_display_orders[4] = {

		6, 4, 2, 0
	};

	gMnBattlePanels[player].token = token_gobj
		= lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, mnVSPlayersRenderToken, 0x21, start_display_orders[player], -1,
							 lbRelocGetFileData(void*, gFile011, offsets_no_cpu[player]), 1, mnVSPlayersSyncTokenAndFighter, 1);

	panel_info = &gMnBattlePanels[player];

	token_gobj->user_data.s = player;

	if (panel_info->player_type == mnPanelTypeCPU)
		mnVSPlayersRedrawToken(token_gobj, 4);

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->held_player != -1))
		gcMoveGObjDL(panel_info->token, 0x20U, hold_display_orders[player] + 1);

	if (panel_info->fkind == nFTKindNull)
	{
		SObjGetStruct(token_gobj)->pos.x = 51.0F;
		SObjGetStruct(token_gobj)->pos.y = 161.0F;
	}
	else
		mnVSPlayersCenterTokenInPortrait(token_gobj, panel_info->fkind);

	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801392A8
f32 getBattleTokenDistance(s32 player_1, s32 player_2)
{
	f32 delta_x, delta_y;
	SObj* token_sobj_2 = SObjGetStruct(gMnBattlePanels[player_2].token);
	SObj* token_sobj_1 = SObjGetStruct(gMnBattlePanels[player_1].token);

	delta_y = token_sobj_2->pos.y - token_sobj_1->pos.y;
	delta_x = token_sobj_2->pos.x - token_sobj_1->pos.x;

	return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 0x80139320
void mnVSPlayersAutopositionOverlappedTokens(s32 player_1, s32 player_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(gMnBattlePanels[player_1].token)->pos.x
		== SObjGetStruct(gMnBattlePanels[player_2].token)->pos.x)
		gMnBattlePanels[player_1].token_x_velocity += syUtilsGetRandomIntRange(2) - 1;
	else
	{
		gMnBattlePanels[player_1].token_x_velocity += (-1.0F
														* (SObjGetStruct(gMnBattlePanels[player_2].token)->pos.x
														   - SObjGetStruct(gMnBattlePanels[player_1].token)->pos.x))
													   / 10.0F;
	}

	if (SObjGetStruct(gMnBattlePanels[player_1].token)->pos.y
		== SObjGetStruct(gMnBattlePanels[player_2].token)->pos.y)
		gMnBattlePanels[player_1].token_y_velocity += syUtilsGetRandomIntRange(2) - 1;
	else
		gMnBattlePanels[player_1].token_y_velocity += (-1.0F
														* (SObjGetStruct(gMnBattlePanels[player_2].token)->pos.y
														   - SObjGetStruct(gMnBattlePanels[player_1].token)->pos.y))
													   / 10.0F;
}

// 0x80139460
void mnVSPlayersAutopositionTokenFromPortraitEdges(s32 player)
{
	s32 portrait = mnVSPlayersGetPortraitId(gMnBattlePanels[player].fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x
		= SObjGetStruct(gMnBattlePanels[player].token)->pos.x + gMnBattlePanels[player].token_x_velocity + 13.0F;
	f32 new_pos_y
		= SObjGetStruct(gMnBattlePanels[player].token)->pos.y + gMnBattlePanels[player].token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		gMnBattlePanels[player].token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		gMnBattlePanels[player].token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	if (new_pos_y < (portrait_edge_y + 5.0F))
		gMnBattlePanels[player].token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		gMnBattlePanels[player].token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 0x8013961C
void mnVSPlayersAutopositionPlacedToken(s32 player)
{
	s32 i;
	f32 distances[4];
	sb32 is_within_bounds;

	for (i = 0; i < 4; i++)
	{
		if (player != i)
		{
			if (gMnBattlePanels[player].is_selected)
				distances[i] = getBattleTokenDistance(player, i);
		}
		else
			distances[i] = -1.0F;
	}

	gMnBattlePanels[player].token_x_velocity = 0.0F;
	gMnBattlePanels[player].token_y_velocity = 0.0F;

	for (i = 0; i < 4; i++)
	{
		is_within_bounds = ((distances[i] >= 0.0F) && (distances[i] <= 15.0F)) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			if ((gMnBattlePanels[player].fkind == gMnBattlePanels[i].fkind)
				&& (gMnBattlePanels[player].fkind != nFTKindNull) && (gMnBattlePanels[i].is_selected == 1))
			{
				mnVSPlayersAutopositionOverlappedTokens(player, i, (15.0F - distances[i]) / 15.0F);
			}
		}
	}

	mnVSPlayersAutopositionTokenFromPortraitEdges(player);
}

// 0x801397CC
void mnVSPlayersAutopositionRecalledToken(s32 player)
{
	f32 new_y_velocity, new_x_velocity;

	gMnBattlePanels[player].recall_frame_counter += 1;

	if (gMnBattlePanels[player].recall_frame_counter < 11)
	{
		new_x_velocity = (gMnBattlePanels[player].recall_end_x - gMnBattlePanels[player].recall_start_x) / 10.0F;

		if (gMnBattlePanels[player].recall_frame_counter < 6)
			new_y_velocity = (gMnBattlePanels[player].recall_mid_y - gMnBattlePanels[player].recall_start_y) / 5.0F;
		else
			new_y_velocity = (gMnBattlePanels[player].recall_end_y - gMnBattlePanels[player].recall_mid_y) / 5.0F;

		gMnBattlePanels[player].token_x_velocity = new_x_velocity;
		gMnBattlePanels[player].token_y_velocity = new_y_velocity;
	}
	else if (gMnBattlePanels[player].recall_frame_counter == 11)
	{
		mnVSPlayersHandleCursorPickup(player, player);
		gMnBattlePanels[player].token_x_velocity = 0.0F;
		gMnBattlePanels[player].token_y_velocity = 0.0F;
	}
	if (gMnBattlePanels[player].recall_frame_counter == 30)
		gMnBattlePanels[player].is_recalling = FALSE;
}

// 0x801398B8
void mnVSPlayersAutopositionToken(s32 player)
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].is_recalling)
			mnVSPlayersAutopositionRecalledToken(i);
		if (gMnBattlePanels[i].is_selected)
			mnVSPlayersAutopositionPlacedToken(i);
	}
}

// 0x8013992C
void mnVSPlayersCreateTokenAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnVSPlayersAutopositionToken, 1, 1);
}

// 0x80139970
void mnVSPlayersUpdateTokenShinePulseColor(GObj* unused)
{
	if (gMnBattleIsTokenShineIncreasing == FALSE)
	{
		gMnBattleTokenShinePulseColor += 9;

		if (gMnBattleTokenShinePulseColor >= 0x100)
		{
			gMnBattleTokenShinePulseColor = 0xFF;
			gMnBattleIsTokenShineIncreasing = TRUE;
		}
	}
	if (gMnBattleIsTokenShineIncreasing == TRUE)
	{
		gMnBattleTokenShinePulseColor -= 9;

		if (gMnBattleTokenShinePulseColor < 0x80)
		{
			gMnBattleTokenShinePulseColor = 0x80;
			gMnBattleIsTokenShineIncreasing = FALSE;
		}
	}
}

// 0x801399E8
void mnVSPlayersCreateTokenShinePulseRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnVSPlayersUpdateTokenShinePulseColor, 1, 1);
}

// 0x80139A2C
void mnVSPlayersSyncShadeAndCostume(s32 unused)
{
	s32 i;
	s32 shade;
	s32 costume;

	if (gMnBattleIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (gMnBattlePanels[i].fkind != nFTKindNull)
			{
				shade = mnVSPlayersGetShade(i);
				gMnBattlePanels[i].shade = shade;
				ftParamInitAllParts(gMnBattlePanels[i].player, gMnBattlePanels[i].costume, shade);
			}
		}
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBattlePanels[i].fkind != nFTKindNull)
				&& (mnVSPlayersGetAdditionalSelectedCount(gMnBattlePanels[i].fkind) == 0))
			{
				costume = ftParamGetCostumeCommonID(gMnBattlePanels[i].fkind, 0);

				if ((costume != gMnBattlePanels[i].costume) && (gMnBattlePanels[i].unk_0x88 == 0))
				{
					shade = mnVSPlayersGetShade(i);
					gMnBattlePanels[i].shade = shade;
					ftParamInitAllParts(gMnBattlePanels[i].player, costume, shade);
					gMnBattlePanels[i].costume = costume;
				}
			}
		}
	}
}

// 0x80139B4C
void mnVSPlayersCreateSyncShadeAndCostumeRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1FU, 0x80000000U), mnVSPlayersSyncShadeAndCostume, 1, 1);
}

// 0x80139B90
void mnVSPlayersSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	s32 portrait = white_circle_gobj->user_data.s;
	f32 sizes[12] = {

		1.5f, 1.5f, 2.0f, 1.5f, 1.5f, 1.5f,
		1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f,
	};

	if ((gMnBattlePanels[portrait].unk_0x88 == 0) && (gMnBattlePanels[portrait].fkind != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMnBattlePanels[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBattlePanels[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBattlePanels[portrait].fkind];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x80139C84
void mnVSPlayersCreateWhiteCircles()
{
	GObj* white_circle_gobj;
	f32 y;
	s32 i, x;

	for (i = 0, x = -1250, y = -850.0F; i < 4; i++, x += 840)
	{
		white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

		gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, gMnBattleFiles[6], &FILE_016_WHITE_CIRCLE_OFFSET_2),
					  0);

		gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

		white_circle_gobj->user_data.s = i;

		gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, gMnBattleFiles[6], &FILE_016_WHITE_CIRCLE_OFFSET_1));

		gcAddGObjProcess(white_circle_gobj, mnVSPlayersSyncWhiteCircleSizeAndDisplay, 1, 1);

		gcPlayAnimAll(white_circle_gobj);

		DObjGetStruct(white_circle_gobj)->translate.vec.f.x = x;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.y = y;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
	}
}

// 0x80139DD8 - Unused?
void func_ovl26_80139DD8() {}

// 0x80139DE0
void mnVSPlayersBlinkIfReadyToFight(GObj* gobj)
{
	if (mnVSPlayersIsReadyToFight())
	{
		gMnBattlePressStartFlashTimer += 1;

		if (gMnBattlePressStartFlashTimer == 0x28)
			gMnBattlePressStartFlashTimer = 0;

		gobj->flags = (gMnBattlePressStartFlashTimer < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		gMnBattlePressStartFlashTimer = 0;
	}
}

// 0x80139E60
void mnVSPlayersCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x20U, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x26U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnVSPlayersBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
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
	gcAddGObjProcess(gobj, mnVSPlayersBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, gFile011, &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 0x8013A0DC
void mnSyncPanelDisplay(s32 player)
{
	s32 held_player;

	if (gMnBattleControllerOrderArray[player] != -1)
	{
		if (gMnBattlePanels[player].cursor == NULL)
		{
			mnVSPlayersCreateCursor(player);

			if (gMnBattlePanels[player].player_type != mnPanelTypeCPU)
			{
				gMnBattlePanels[player].player_type = mnPanelTypeHuman;
				mnHandlePlayerTypeButtonPress(player);
				mnRecreateTypeButton(gMnBattlePanels[player].type_button, player,
									 gMnBattlePanels[player].player_type);
				mnSyncTokenDisplay(gMnBattlePanels[player].token, player);
				mnUpdateCursor(gMnBattlePanels[player].cursor, player);
				mnVSPlayersSyncFighterDisplay(player);
				mnVSPlayersSyncNameAndLogo(player);
			}
		}
	}
	else
	{
		if (gMnBattlePanels[player].cursor != NULL)
		{
			if ((gMnBattlePanels[player].held_player != -1)
				&& ((player != gMnBattlePanels[player].held_player) || (gMnBattlePanels[player].player_type == 1))
				&& (mnVSPlayersSelectChar(gMnBattlePanels[player].cursor, player, gMnBattlePanels[player].held_player,
									   4)
					== 0))
			{
				held_player = gMnBattlePanels[player].held_player;
				gMnBattlePanels[held_player].fkind = mnSelectRandomFighter(gMnBattlePanels[held_player].token);
			}

			gcEjectGObj(gMnBattlePanels[player].cursor);
			gMnBattlePanels[player].cursor = NULL;

			if (gMnBattlePanels[player].player_type != 1)
			{
				gMnBattlePanels[player].player_type = 2;
				mnHandlePlayerTypeButtonPress(player);
				mnRecreateTypeButton(gMnBattlePanels[player].type_button, player,
									 gMnBattlePanels[player].player_type);
				mnSyncTokenDisplay(gMnBattlePanels[player].token, player);
				mnUpdateCursor(gMnBattlePanels[player].cursor, player);
				mnVSPlayersSyncFighterDisplay(player);
				mnVSPlayersSyncNameAndLogo(player);
			}
		}
	}
}

// 0x8013A2A4
void mnSyncControllerOrderArray()
{
	s32 player, order;

	for (player = 0; player < 4; player++)
	{
		gMnBattleControllerOrderArray[player] = -1;

		for (order = 0; gSYControllerDeviceStatuses[order] != -1; order++) // Array can go out of bounds!!! AND DOES!!!
		{
			if (player == gSYControllerDeviceStatuses[order])
				gMnBattleControllerOrderArray[player] = order;
		}
	}
}

// 0x8013A30C
s32 mnGetNumSelectedChars()
{
	s32 i, select_char_count = 0;

	for (i = 0; i < 4; i++)
	{
		if ((gMnBattlePanels[i].player_type != mnPanelTypeNA) && (gMnBattlePanels[i].unk_0x88 == TRUE))
			select_char_count += 1;
	}

	return select_char_count;
}

// 0x8013A3AC
void mnSetTypeToNA(s32 player)
{
	gMnBattlePanels[player].player_type = mnPanelTypeNA;
	gMnBattlePanels[player].fkind = nFTKindNull;
	gMnBattlePanels[player].holder_player = 4;

	mnRecreateTypeButton(gMnBattlePanels[player].type_button, player, mnPanelTypeNA);
}

// 0x8013A40C
void mnSetUnselectedPanelsToNA()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].unk_0x88 == FALSE)
			mnSetTypeToNA(i);
	}
}

// 0x8013A468 - Unused?
void func_ovl26_8013A468() { }

// 0x8013A470
sb32 mnIsOnlyOneTeamWithSelectedCharacters()
{
	s32 i, team = -1;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].unk_0x88)
		{
			if (team == -1)
				team = gMnBattlePanels[i].team;
			else if (team != gMnBattlePanels[i].team)
				return FALSE;
		}
	}

	return TRUE;
}

// 0x8013A534
sb32 mnAreNoTokensHeldAbovePortraits()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((gMnBattlePanels[i].cursor != NULL) && (gMnBattlePanels[i].cursor_state == mnCursorStateHoldingToken))
			return FALSE;
	}

	return TRUE;
}

// 0x8013A5E4
sb32 mnVSPlayersIsReadyToFight()
{
	sb32 unused, is_ready_to_fight = TRUE;

	if (mnGetNumSelectedChars() < 2)
		is_ready_to_fight = FALSE;
	if ((is_ready_to_fight) && (gMnBattleIsTeamBattle == TRUE))
	{
		if (mnIsOnlyOneTeamWithSelectedCharacters())
			is_ready_to_fight = FALSE;
	}
	if (is_ready_to_fight)
	{
		if (mnAreNoTokensHeldAbovePortraits() == FALSE)
			is_ready_to_fight = FALSE;
	}

	return is_ready_to_fight;
}

// 0x8013A664
void mnVSPlayersSaveMatchInfo()
{
	s32 i;

	gSCManagerTransferBattleState.time_limit = gMnBattleTimerValue;
	gSCManagerTransferBattleState.stocks = gMnBattleStockValue;
	gSCManagerTransferBattleState.is_team_battle = gMnBattleIsTeamBattle;
	gSCManagerTransferBattleState.game_rules = gMnBattleRule;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattleIsTeamBattle == FALSE)
			gSCManagerTransferBattleState.players[i].player = i;
		else
		{
			gSCManagerTransferBattleState.players[i].player = gMnBattlePanels[i].team;
			gSCManagerTransferBattleState.players[i].team = gMnBattlePanels[i].team;
		}

		gSCManagerTransferBattleState.players[i].fkind = gMnBattlePanels[i].fkind;
		gSCManagerTransferBattleState.players[i].pkind = gMnBattlePanels[i].player_type;
		gSCManagerTransferBattleState.players[i].costume = gMnBattlePanels[i].costume;
		gSCManagerTransferBattleState.players[i].shade = gMnBattlePanels[i].shade;

		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan)
		{
			gSCManagerTransferBattleState.players[i].color
				= (gSCManagerTransferBattleState.is_team_battle == FALSE) ? i : dIFCommonPlayerTeamColorIDs[gSCManagerTransferBattleState.players[i].team];
		}
		else if (gSCManagerTransferBattleState.is_team_battle == FALSE)
			gSCManagerTransferBattleState.players[i].color = 4;
		else
			gSCManagerTransferBattleState.players[i].color = dIFCommonPlayerTeamColorIDs[gSCManagerTransferBattleState.players[i].team];

		gSCManagerTransferBattleState.players[i].tag = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? i : 4;

		gSCManagerTransferBattleState.players[i].is_single_stockicon = (gSCManagerTransferBattleState.game_rules & SCBATTLE_GAMERULE_TIME) ? TRUE : FALSE;

		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindCom)
			gSCManagerTransferBattleState.players[i].level = gMnBattlePanels[i].cpu_level;
		else
			gSCManagerTransferBattleState.players[i].handicap = gMnBattlePanels[i].handicap;
	}

	gSCManagerTransferBattleState.pl_count = gSCManagerTransferBattleState.cp_count = 0;

	for (i = 0; i < 4; i++)
	{
		switch (gSCManagerTransferBattleState.players[i].pkind)
		{
		case nFTPlayerKindMan: gSCManagerTransferBattleState.pl_count++; break;
		case nFTPlayerKindCom: gSCManagerTransferBattleState.cp_count++; break;
		}
	}
}

// 0x8013A8B8
void mnVSPlayersDestroyCursorAndTokenProcesses()
{
	GObj *cursor_gobj, *token_gobj;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		cursor_gobj = gMnBattlePanels[i].cursor;

		if (cursor_gobj != NULL)
			gcPauseGObjProcess(cursor_gobj->gobjproc_head);

		token_gobj = gMnBattlePanels[i].token;

		if (token_gobj != NULL)
			gcPauseGObjProcess(token_gobj->gobjproc_head);
	};
}

// 0x8013A920
void mnVSPlayersMain(s32 arg0)
{
	s32 max_stage_id;
	s32 i;
	u32 stage_id;

	gMnBattleTotalTimeTics += 1;
	mnSyncControllerOrderArray();

	if (gMnBattleTotalTimeTics == gMnBattleMaxTotalTimeTics)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 1;

		mnVSPlayersSaveMatchInfo();
		syTaskmanSetLoadScene();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		gMnBattleMaxTotalTimeTics = gMnBattleTotalTimeTics + 0x4650;

	if (gMnBattleIsStartTriggered)
	{
		gMnBattleStartDelayTimer--;

		if (gMnBattleStartDelayTimer == 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;

			if (gSCManagerTransferBattleState.is_stage_select != 0)
				gSCManagerSceneData.scene_curr = 0x15;
			else
			{
				gSCManagerSceneData.scene_curr = 0x16;
				max_stage_id = (gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE) ? nGRKindInishie + 1 : nGRKindStarterEnd + 1;

				do
					stage_id = syUtilsGetRandomTimeUCharRange(max_stage_id);
				while (stage_id == gSCManagerSceneData.gkind);

				gSCManagerSceneData.gkind = stage_id;
			}

			mnVSPlayersSaveMatchInfo();
			syTaskmanSetLoadScene();
		}
	}
	else
	{
		if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (gMnBattleTotalTimeTics >= 0x3D))
		{
			if (mnVSPlayersIsReadyToFight())
			{
				func_800269C0_275C0(nSYAudioVoicePublicCheer);
				mnSetUnselectedPanelsToNA();
				gMnBattleStartDelayTimer = 0x1E;
				gMnBattleIsStartTriggered = TRUE;
				mnVSPlayersDestroyCursorAndTokenProcesses();
			}
			else
				func_800269C0_275C0(nSYAudioFGMMenuDenied);
		}

		for (i = 0; i < 4; i++)
		{
			mnSyncPanelDisplay(i);
		}; // needs semicolon to match
	}
}

// 0x8013AAF8
s32 mnVSPlayersGetNextTimerValue(s32 current_value)
{
	s32 i;
	s32 timer_values[8] = {

		0x00000002, 0x00000003, 0x00000005, 0x0000000A,
		0x0000000F, 0x0000001E, 0x0000003C, 0x00000064
	};

	if (current_value == timer_values[7])
		return timer_values[0];

	for (i = 0; i < 8; i++)
	{
		if (current_value < timer_values[i])
			return timer_values[i];
	}

	return timer_values[7];
}

// 0x8013ABDC
s32 mnVSPlayersGetPrevTimerValue(s32 current_value)
{
	s32 i;
	s32 timer_values[8] = {

		0x00000002, 0x00000003, 0x00000005, 0x0000000A,
		0x0000000F, 0x0000001E, 0x0000003C, 0x00000064
	};

	if (current_value == timer_values[0])
		return timer_values[7];

	for (i = 7; i >= 0; i--)
	{
		if (timer_values[i] < current_value)
			return timer_values[i];
	}

	return timer_values[7];
}

// 0x8013AC7C
void mnVSPlayersInitPort(s32 player)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[player];
	s32 controller_order;
	int unplugged = -1;

	panel_info->team_color_button = NULL;
	panel_info->handicap_cpu_level = NULL;
	panel_info->arrows = NULL;
	panel_info->handicap_cpu_level_value = NULL;
	panel_info->white_square = NULL;
	panel_info->p_sfx = NULL;
	panel_info->sfx_id = 0;
	panel_info->player = NULL;
	panel_info->fkind = gSCManagerTransferBattleState.players[player].fkind;

	if ((gSCManagerTransferBattleState.players[player].pkind == nFTPlayerKindMan)
		&& (controller_order = gMnBattleControllerOrderArray[player], (controller_order == unplugged)))
	{
		panel_info->player_type = mnPanelTypeNA;
		panel_info->fkind = nFTKindNull;
	}
	else
	{
		panel_info->player_type = gSCManagerTransferBattleState.players[player].pkind;
		controller_order = gMnBattleControllerOrderArray[player];
	}

	panel_info->cpu_level = gSCManagerTransferBattleState.players[player].level;
	panel_info->handicap = gSCManagerTransferBattleState.players[player].handicap;
	panel_info->team = gSCManagerTransferBattleState.players[player].team;

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->fkind == nFTKindNull))
	{
		panel_info->holder_player = player;
		panel_info->held_player = player;
	}
	else
	{
		panel_info->holder_player = 4;
		panel_info->held_player = -1;
	}

	if (panel_info->fkind == nFTKindNull)
	{
		panel_info->unk_0x88 = FALSE;
		panel_info->is_selected = FALSE;
		panel_info->is_recalling = FALSE;
		panel_info->is_fighter_selected = FALSE;
	}
	else
	{
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;
		panel_info->is_fighter_selected = FALSE;
	}

	panel_info->costume = gSCManagerTransferBattleState.players[player].costume;
	panel_info->shade = gSCManagerTransferBattleState.players[player].shade;

	if ((controller_order != unplugged) && (panel_info->player_type == mnPanelTypeNA))
		panel_info->holder_player = player;
}

// 0x8013ADE0
void mnVSPlayersResetPort(s32 player)
{
	u8 default_team[4] = {

		0, 0, 1, 1
	};

	gMnBattlePanels[player].team_color_button = NULL;
	gMnBattlePanels[player].handicap_cpu_level = NULL;
	gMnBattlePanels[player].arrows = NULL;
	gMnBattlePanels[player].handicap_cpu_level_value = NULL;
	gMnBattlePanels[player].white_square = NULL;
	gMnBattlePanels[player].player = NULL;
	gMnBattlePanels[player].p_sfx = NULL;
	gMnBattlePanels[player].sfx_id = 0;
	gMnBattlePanels[player].is_selected = FALSE;
	gMnBattlePanels[player].cpu_level = gSCManagerTransferBattleState.players[player].level;
	gMnBattlePanels[player].handicap = gSCManagerTransferBattleState.players[player].handicap;
	gMnBattlePanels[player].fkind = nFTKindNull;
	gMnBattlePanels[player].is_recalling = FALSE;
	gMnBattlePanels[player].team = default_team[player];

	if (gMnBattleControllerOrderArray[player] == -1)
	{
		gMnBattlePanels[player].player_type = mnPanelTypeNA;
		gMnBattlePanels[player].holder_player = 4;
		gMnBattlePanels[player].held_player = -1;
	}
	else
	{
		gMnBattlePanels[player].player_type = mnPanelTypeHuman;
		gMnBattlePanels[player].holder_player = player;
		gMnBattlePanels[player].held_player = player;
	}
}

// 0x8013AEC8
void mnVSPlayersLoadMatchInfo()
{
	s32 i;

	gMnBattleTotalTimeTics = 0;
	gMnBattleMaxTotalTimeTics = gMnBattleTotalTimeTics + 0x4650;
	gMnBattleTimerValue = gSCManagerTransferBattleState.time_limit;
	gMnBattleStockValue = gSCManagerTransferBattleState.stocks;
	gMnBattleIsStartTriggered = FALSE;
	gMnBattleIsTeamBattle = gSCManagerTransferBattleState.is_team_battle;
	gMnBattleRule = gSCManagerTransferBattleState.game_rules;
	D_ovl26_8013BDC8 = gSCManagerTransferBattleState.unk_0x10;

	for (i = 0; i < 4; i++)
	{
		if (D_ovl26_8013BDC8 != 0)
		{
			mnVSPlayersResetPort(i);
			gSCManagerTransferBattleState.unk_0x10 = 0;
		}
		else
			mnVSPlayersInitPort(i);

		gMnBattlePanels[i].min_frames_elapsed_until_recall = 0;
	};

	gMnBattleCharacterUnlockedMask = gSCManagerBackupData.fighter_mask;
}

// 0x8013AFC0
void mnVSPlayersInitPanel(s32 player)
{
	s32 fkind;

	if (gMnBattleControllerOrderArray[player] != -1)
		mnVSPlayersCreateCursor(player);
	else
		gMnBattlePanels[player].cursor = NULL;

	mnVSPlayersCreateToken(player);
	mnVSPlayersMakeGate(player);

	if (gMnBattlePanels[player].is_selected)
	{
		fkind = gMnBattlePanels[player].fkind;
		if (fkind != nFTKindNull)
			mnVSPlayersSpawnFighter(gMnBattlePanels[player].player, player, fkind,
								 gMnBattlePanels[player].costume);
	}
}

// 0x8013B090
void mnVSPlayersInitPanels()
{
	mnVSPlayersInitPanel(0);
	mnVSPlayersInitPanel(1);
	mnVSPlayersInitPanel(2);
	mnVSPlayersInitPanel(3);
}

// 0x8013B0C8
void mnVSPlayersFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;
	s32 i, j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*)&D_ovl26_8013C0E0;
	rl_setup.status_buffer_size = 0x78;
	rl_setup.force_status_buffer = (LBFileNode*)&D_ovl26_8013C0A8;
	rl_setup.force_status_buffer_size = 7;

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl26_8013B3A0, 7U, gMnBattleFiles,
						 syTaskmanMalloc(lbRelocGetAllocSize(D_ovl26_8013B3A0, 7U), 0x10U));

	gcMakeGObjSPAfter(0x400U, mnVSPlayersMain, 0xFU, 0x80000000U);

	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);

	efParticleInitAll();
	efManagerInitEffects();
	mnSyncControllerOrderArray();
	mnVSPlayersLoadMatchInfo();
	ftManagerAllocFighter(1U, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < 4; i++)
		gMnBattlePanels[i].figatree_heap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mnVSPlayersCreatePortraitCamera();
	mnVSPlayersCreateCursorViewport();
	mnVSPlayersCreateDroppedTokenViewport();
	mnVSPlayersMakeGateViewport();
	mnVSPlayersMakeGateDoorsSYRdpViewport();
	mnVSPlayersCreateTypeButtonViewport();
	mnVSPlayersMakeFighterCamera();
	mnVSPlayersCreateTeamButtonViewPort();
	mnVSPlayersCreateHandicapCPULevelViewport();
	mnVSPlayersCreatePortraitWallpaperCamera();
	mnVSPlayersCreatePortraitFlashCamera();
	mnVSPlayersCreateReadyToFightViewport();

	mnVSPlayersMakeWallpaper();
	mnVSPlayersCreatePortraits();
	mnVSPlayersInitPanels();
	mnVSPlayersDrawTitleAndBack();
	mnVSPlayersCreateTokenAutopositionRoutine();
	mnVSPlayersCreateTokenShinePulseRoutine();
	mnVSPlayersCreateSyncShadeAndCostumeRoutine();
	mnVSPlayersCreateWhiteCircles();
	mnVSPlayersCreateReadyToFightObjects();

	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSCManagerSceneData.scene_prev != nSCKindMaps)
	{
		syAudioPlaySong(0, nSYAudioBGMBattleSelect);
	}
	if (gSCManagerTransferBattleState.is_team_battle == FALSE)
	{
		func_800269C0_275C0(nSYAudioVoiceAnnounceFreeForAll);
	}
	else func_800269C0_275C0(nSYAudioVoiceAnnounceTeamBattle);
}

// 0x8013B980
SYVideoSetup dMNVSPlayersVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8013B99C
SYTaskmanSetup dMNVSPlayersTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        scManagerFuncDraw,          // Frame draw function
        &ovl26_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2750,         // Display List Buffer 0 Size
        sizeof(Gfx) * 64,          	// Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x3A98,                     // Graphics Heap Size
        2,                          // ???
        0x8000,                     // RDP Output Buffer Size
        mnVSPlayersFuncLights,   	// Pre-render function
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
    dLBCommonFuncMatrixList,        // Matrix function list
    NULL,                           // DObjVec eject function
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of CObjs
    sizeof(CObj),                 	// CObj size
    
    mnVSPlayersFuncStart         	// Task start function
};

// 0x8013B33C
void mnVSPlayersStartScene(void)
{
	dMNVSPlayersVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNVSPlayersVideoSetup);

	dMNVSPlayersTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl26_BSS_END);
	scManagerFuncUpdate(&dMNVSPlayersTaskmanSetup);
}
