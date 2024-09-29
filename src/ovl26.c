#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

#include "character_select.h"

// Externs
extern intptr_t lOverlay26ArenaLo; // 0x8013C4C0
extern intptr_t lOverlay26ArenaHi; // 0x803903E0
extern f32 sqrtf(f32);
extern void gcStopCurrentGObjThread(s32);
extern void leoInitUnit_atten();

extern f32 menu_zoom[12]; // dSCSubsysFighterScales
extern u8 D_ovl2_8012EF40[4];
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
extern intptr_t FILE_015_BACKGROUND_IMAGE_OFFSET; // file 0x015 image offset for background tile
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_1; // AObj? for white circle
extern intptr_t FILE_016_WHITE_CIRCLE_OFFSET_2; // DObjDesc for white circle

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);



extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* gOMObjCommonLinks[OM_COMMON_MAX_LINKS];


// Forward declarations
sb32 mnBattleIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id);
void mnBattleRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state);
s32 mnBattleReorderCursorsOnPlacement(s32 port_id, s32 held_token_id); // doesn't actually return anything but required to match
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 port_id);
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 port_id);
void mnBattleReorderCursorsOnPickup(s32 port_id, s32 token_id);
void mnBattleRedrawToken(GObj* token_gobj, s32 token_index);
void mnReplaceFighterNameWithHandicapCPULevel(s32 port_id);
void mnBattleAnnounceFighter(s32 port_id, s32 panel_id);
void mnBattleSetupDisplayList(Gfx** display_list);
s32 mnBattleGetNextTimerValue(s32 current_value);
s32 mnBattleGetPrevTimerValue(s32 current_value);
void mnBattleDrawHandicapCPULevel(s32 port_id);
void mnBattleDestroyCursorAndTokenProcesses();
void mnDrawHandicapCPULevelValue(s32 port_id);
void mnBattleCreateWhiteSquare(s32 port_id);
s32 mnSelectRandomFighter(GObj* token_gobj);
void mnBattleSyncNameAndLogo(s32 port_id);
sb32 mnBattleIsReadyToFight();
void mnBattleSaveMatchInfo();
sb32 mnIsHandicapAuto();
void mnBattleInitCSS();
sb32 mnIsHandicapOn();
sb32 mnIsHandicap();


// Data
// 8013B3A0
u32 D_ovl26_8013B3A0[20] = {

	0x00000011, 0x00000000, 0x00000014, 0x00000015,
	0x00000012, 0x00000013, 0x00000016, 0x00000000,
	0x20202000, 0x20202000, 0xFFFFFF00, 0xFFFFFF00,
	0x14141400, 0x00000000, 0x20202000, 0x20202000,
	0xFFFFFF00, 0xFFFFFF00, 0x00EC0000, 0x00000000
};


// BSS
// 8013BA80 ? referenced from scene_manager
s32 D_ovl26_8013BA80;

// 8013BA88
mnCharPanelBattle gMnBattlePanels[GMCOMMON_PLAYERS_MAX];

// 8013BD78 stock/time picker
GObj* gMnBattlePickerGObj;

// 8013BD7C
s32 gMnBattleTimerValue;

// 8013BD80
s32 gMnBattleStockValue;

// 8013BD84
u8 D_ovl26_8013BD84[8];

// 8013BD90 -1 if no controller plugged in; due to a bug, random positive value if plugged in
s32 gMnBattleControllerOrderArray[4];

// 8013BDA0 when start is pressed when ready to fight, timer counts down to delay leaving CSS
s32 gMnBattleStartDelayTimer;

// 8013BDA4;
sb32 gMnBattleIsStartTriggered;

// 8013BDA8
sb32 gMnBattleIsTeamBattle;

// 8013BDAC
sb32 gMnBattleRule;

// 8013BDB0 title gobj
GObj* gMnBattleTitleGObj;

// 8013BDB4
s32 gMnBattleTokenShinePulseColor;

// 8013BDB8
sb32 gMnBattleIsTokenShineIncreasing;

// 8013BDBC flag indicating which bonus chars are available
u16 gMnBattleCharacterUnlockedMask;

// 8013BDC0
u8 D_ovl26_8013BDC0[4];

// 8013BDC4 looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 gMnBattlePressStartFlashTimer;

// 8013BDC8
s32 D_ovl26_8013BDC8;

// 8013BDCC frames elapsed on CSS
s32 gMnBattleFramesElapsed;

// 8013BDD0 frames to wait until exiting the CSS
s32 gMnBattleMaxFramesElapsed;

// 8013BDD4
u8 D_ovl26_8013BDD4[0x2d0];

// 8013C0A8
lbFileNode D_ovl26_8013C0A8;

// 8013C0B0
u8 D_ovl26_8013C0B0[0x30];

// 8013C0E0
u32 D_ovl26_8013C0E0[240];

// 8013C4A0
s32 gMnBattleFilesArray[7];
#define gFile011 gMnBattleFilesArray[0] // 8013C4A0; // file 0x011 pointer
#define gFile000 gMnBattleFilesArray[1] // 8013C4A4; // file 0x000 pointer
#define gFile014 gMnBattleFilesArray[2] // 8013C4A8; // file 0x014 pointer
#define gFile015 gMnBattleFilesArray[3] // 8013C4AC; // file 0x015 pointer
#define gFile012 gMnBattleFilesArray[4] // 8013C4B0; // file 0x012 pointer
#define gFile013 gMnBattleFilesArray[5] // 8013C4B4; // file 0x013 pointer
#define gFile016 gMnBattleFilesArray[6] // 8013C4B8; // file 0x016 pointer


// 80131B20
void mnBattleSetupDisplayList(Gfx** display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
	return;
}

// 80131B78
s32 mnBattleGetShade(s32 port_id)
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
			if (port_id != i)
			{
				if (gMnBattlePanels[port_id].char_id == gMnBattlePanels[i].char_id
					&& gMnBattlePanels[port_id].team == gMnBattlePanels[i].team)
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

// 80131C74
void mnBattleSelectCharWithToken(s32 port_id, s32 select_button)
{
	s32 held_port_id = gMnBattlePanels[port_id].held_port_id, costume_id;

	if (select_button != mnSelect_A)
	{
		costume_id = ftParamGetCostumeCommonID(gMnBattlePanels[held_port_id].char_id, select_button);

		if (mnBattleIsCostumeInUse(gMnBattlePanels[held_port_id].char_id, held_port_id, costume_id))
		{
			func_800269C0_275C0(nSYAudioFGMMenuDenied);
			return;
		}

		gMnBattlePanels[held_port_id].shade = mnBattleGetShade(held_port_id);
		gMnBattlePanels[held_port_id].costume_id = costume_id;
		ftParamInitModelTexturePartsAll(gMnBattlePanels[held_port_id].player, costume_id, gMnBattlePanels[held_port_id].shade);
	}

	gMnBattlePanels[held_port_id].is_selected = TRUE;

	mnBattleReorderCursorsOnPlacement(port_id, held_port_id);

	gMnBattlePanels[held_port_id].holder_port_id = 4;
	gMnBattlePanels[port_id].cursor_state = mnCursorStateNotHoldingToken;

	mnBattleRedrawCursor(gMnBattlePanels[port_id].cursor, port_id, 2);

	gMnBattlePanels[port_id].held_port_id = -1;
	gMnBattlePanels[held_port_id].unk_0x88 = TRUE;

	mnBattleAnnounceFighter(port_id, held_port_id);

	if ((mnIsHandicap()) || (gMnBattlePanels[held_port_id].player_type == 1))
		mnReplaceFighterNameWithHandicapCPULevel(held_port_id);

	mnBattleCreateWhiteSquare(held_port_id);
}

// 80131DC4
f32 mnBattleGetNextPortraitX(s32 portrait_id, f32 current_x_position)
{
	f32 portrait_x_position[12] = {

		25, 70, 115, 160, 205, 250, 25, 70, 115, 160, 205, 250
	};
	f32 portrait_velocity[12] = {

		1.9, 3.9, 7.8, -7.8, -3.8, -1.8,
		1.8, 3.8, 7.8, -7.8, -3.8, -1.8
	};

	if (current_x_position == portrait_x_position[portrait_id])
		return -1.0F;
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

// 80131ED8
sb32 mnBattleCheckFighterIsXBoxed(s32 ft_kind) { return FALSE; }

// 80131EE4
void mnBattleSetPortraitX(GObj* portrait_gobj)
{
	SObj* next_sobj;
	SObj* main_sobj = SObjGetStruct(portrait_gobj);
	f32 new_portrait_x = mnBattleGetNextPortraitX(portrait_gobj->user_data.s, main_sobj->pos.x);

	if (new_portrait_x != -1.0F)
	{
		main_sobj->pos.x = new_portrait_x;
		next_sobj = main_sobj->next;

		if (next_sobj != NULL)
			next_sobj->pos.x = SObjGetStruct(portrait_gobj)->pos.x;
	}
}

// 80131F54
void mnBattleInitializePortraitBackgroundPosition(SObj* portrait_bg_sobj, s32 portrait_id)
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

	portrait_bg_sobj->pos.x = coordinates[portrait_id].x;
	portrait_bg_sobj->pos.y = coordinates[portrait_id].y;
}

// 80131FB0
void mnBattleAddRedXBoxToPortrait(GObj* portrait_gobj, s32 portrait_id)
{
	SObj* portrait_sobj = SObjGetStruct(portrait_gobj);
	f32 x = portrait_sobj->pos.x, y = portrait_sobj->pos.y;
	s32 xbox_image_offset = &(FILE_013_XBOX_IMAGE_OFFSET);

	portrait_sobj = lbCommonMakeSObjForGObj(portrait_gobj, (gFile013 + xbox_image_offset)); // AppendTexture

	portrait_sobj->pos.x = x + 4.0F;
	portrait_sobj->pos.y = y + 12.0F;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr & ~SP_FASTCOPY;
	portrait_sobj->sprite.attr = portrait_sobj->sprite.attr | SP_TRANSPARENT;
	portrait_sobj->sprite.red = 0xFF;
	portrait_sobj->sprite.green = 0;
	portrait_sobj->sprite.blue = 0;
}

// 80132044
sb32 mnBattleGetIsLocked(s32 char_id)
{
	switch (char_id)
	{
	case nFTKindNess: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindNess)) ? FALSE : TRUE;
	case nFTKindPurin: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindPurin)) ? FALSE : TRUE;
	case nFTKindCaptain: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;
	case nFTKindLuigi: return (gMnBattleCharacterUnlockedMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;
	}
	return FALSE;
}

// 8013B4B0
s32 dMnBattleUnused[9] = {

	0xC55252C5, 0xA6524294, 0x595252C5, 0, 0, 0, 0, 0, 0
};

// 80132110 - Unused?
void func_ovl26_80132110() {}

// 80132118
s32 mnBattleGetFtKind(s32 portrait_id)
{
	s32 ftKind_order[12] = {

		0x00000004, 0x00000000, 0x00000002, 0x00000005, 0x00000003, 0x00000007,
		0x0000000B, 0x00000006, 0x00000008, 0x00000001, 0x00000009, 0x0000000A
	};
	return ftKind_order[portrait_id];
}

// 80132168
s32 mnBattleGetPortraitId(s32 ft_kind)
{
	s32 portrait_id_order[GMCOMMON_FIGHTERS_PLAYABLE_NUM] = {

		0x00000001, 0x00000009, 0x00000002, 0x00000004, 0x00000000, 0x00000003,
		0x00000007, 0x00000005, 0x00000008, 0x0000000A, 0x0000000B, 0x00000006
	};
	return portrait_id_order[ft_kind];
}

// 801321B8
void mnBattleRenderPortraitWithNoise(GObj* portrait_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gDisplayListHead[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0,
					  PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(portrait_gobj);
}

// 80132278
void mnBattleCreateLockedPortrait(s32 portrait_id)
{
	GObj* texture_gobj;
	SObj* texture_sobj;
	s32 locked_portrait_offsets[12] = {

		0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00020538, 0x00000000,
		0x00000000, 0x0001E2E8, 0x00000000, 0x00000000, 0x000249D8, 0x00022788
	};

	// portrait bg (fire)
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnBattleSetPortraitX, 1, 1);

	texture_sobj = lbCommonMakeSObjForGObj(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
	texture_sobj->pos.x = (f32)(((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 0x2D) + 0x19);
	texture_sobj->pos.y = (f32)(((portrait_id >= 6 ? 1 : 0) * 0x2B) + 0x24);

	mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	texture_gobj->user_data.p = portrait_id;

	// portrait
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, mnBattleRenderPortraitWithNoise, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnBattleSetPortraitX, 1, 1);

	texture_sobj
		= lbCommonMakeSObjForGObj(texture_gobj, (gFile013 + locked_portrait_offsets[mnBattleGetFtKind(portrait_id)]));
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;

	texture_gobj->user_data.p = portrait_id;
	mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

	// question mark
	texture_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
	gcAddGObjDisplay(texture_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
	gcAddGObjProcess(texture_gobj, mnBattleSetPortraitX, 1, 1);

	texture_sobj
		= lbCommonMakeSObjForGObj(texture_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_QUESTION_MARK_IMAGE_OFFSET);
	texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
	texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;
	texture_sobj->env_color.r = 0x5B;
	texture_sobj->env_color.g = 0x41;
	texture_sobj->env_color.b = 0x33;
	texture_sobj->sprite.red = 0xC4;
	texture_sobj->sprite.green = 0xB9;
	texture_sobj->sprite.blue = 0xA9;

	texture_gobj->user_data.p = portrait_id;
	mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
}

// 80132520
void mnBattleCreatePortrait(s32 portrait_id)
{
	GObj *portrait_gobj, *portrait_bg_gobj;
	SObj* texture_sobj;
	s32 portrait_offsets[12] = {

		0x00004728, 0x0000D068, 0x00008BC8, 0x0000AE18, 0x00006978, 0x00011508,
		0x00013758, 0x00019E48, 0x0000F2B8, 0x000159A8, 0x0001C098, 0x00017BF8
	};

	// if locked, render locked portrait instead
	if (mnBattleGetIsLocked(mnBattleGetFtKind(portrait_id)))
		mnBattleCreateLockedPortrait(portrait_id);
	else
	{
		// portrait bg (fire)
		portrait_bg_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1DU, 0x80000000U);
		gcAddGObjDisplay(portrait_bg_gobj, lbCommonDrawSObjAttr, 0x24U, 0x80000000U, -1);
		portrait_bg_gobj->user_data.p = portrait_id;
		gcAddGObjProcess(portrait_bg_gobj, mnBattleSetPortraitX, 1, 1);

		texture_sobj
			= lbCommonMakeSObjForGObj(portrait_bg_gobj, gFile013 + (intptr_t)&FILE_013_PORTRAIT_FIRE_BG_IMAGE_OFFSET);
		mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0U, NULL, 0x12U, 0x80000000U);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 0x1BU, 0x80000000U, -1);
		gcAddGObjProcess(portrait_gobj, mnBattleSetPortraitX, 1, 1);

		texture_sobj
			= lbCommonMakeSObjForGObj(portrait_gobj, (gFile013 + portrait_offsets[mnBattleGetFtKind(portrait_id)]));
		texture_sobj->sprite.attr = texture_sobj->sprite.attr & ~SP_FASTCOPY;
		texture_sobj->sprite.attr = texture_sobj->sprite.attr | SP_TRANSPARENT;
		portrait_gobj->user_data.p = portrait_id;

		// this conditionally draws a big red box with an X in it, but this
		// check always fails
		if (mnBattleCheckFighterIsXBoxed(mnBattleGetFtKind(portrait_id)))
			mnBattleAddRedXBoxToPortrait(portrait_gobj, portrait_id);
		mnBattleInitializePortraitBackgroundPosition(texture_sobj, portrait_id);
	}
}

// 801326DC
void mnBattleCreatePortraits()
{
	s32 portrait_id;

	for (portrait_id = 0; portrait_id < 12; portrait_id++)
		mnBattleCreatePortrait(portrait_id);
}

// 8013271C
void mnCreateTeamButton(s32 team_id, s32 port_id)
{
	GObj* team_button_gobj;
	SObj* team_button_sobj;
	s32 team_color_button_offsets[3] = {

		0x0000E3C8, 0x0000EC08, 0x0000E7E8
	};

	team_button_gobj = gMnBattlePanels[port_id].team_color_button = gcMakeGObjSPAfter(0U, NULL, 0x1BU, 0x80000000U);
	gcAddGObjDisplay(team_button_gobj, lbCommonDrawSObjAttr, 0x22U, 0x80000000U, -1);

	team_button_sobj = lbCommonMakeSObjForGObj(team_button_gobj, gFile011 + team_color_button_offsets[team_id]);
	team_button_sobj->pos.x = (f32)((port_id * 0x45) + 0x22);
	team_button_sobj->pos.y = 131.0F;
	team_button_sobj->sprite.attr = team_button_sobj->sprite.attr & ~SP_FASTCOPY;
	team_button_sobj->sprite.attr = team_button_sobj->sprite.attr | SP_TRANSPARENT;
}

// 80132824
void mnDestroyTeamButton(s32 port_id)
{
	if (gMnBattlePanels[port_id].team_color_button != NULL)
	{
		gcEjectGObj(gMnBattlePanels[port_id].team_color_button);
		gMnBattlePanels[port_id].team_color_button = NULL;
	}
}

// 80132878
void mnCreateOrReplaceTeamButton(s32 team_id, s32 port_id)
{
	mnDestroyTeamButton(port_id);
	mnCreateTeamButton(team_id, port_id);
}

// 801328AC
void mnDestroyTeamButtons()
{
	s32 port_id;

	for (port_id = 0; port_id < ARRAY_COUNT(gMnBattlePanels); port_id++)
	{
		if (gMnBattlePanels[port_id].team_color_button != NULL)
		{
			gcEjectGObj(gMnBattlePanels[port_id].team_color_button);
			gMnBattlePanels[port_id].team_color_button = NULL;
		}
	}
}

// 80132904
void mnCreateTeamButtons()
{
	s32 panel_id;

	mnDestroyTeamButtons();

	for (panel_id = 0; panel_id < ARRAY_COUNT(gMnBattlePanels); panel_id++)
		mnCreateTeamButton(gMnBattlePanels[panel_id].team, panel_id);
}

// 8013295C
void mnRecreateTypeButton(GObj* type_gobj, s32 port_id, s32 type_id)
{
	SObj* type_sobj;
	f32 x = (f32)((port_id * 0x45) + 0x40), y = 131.0F;
	s32 type_button_offsets[3] = {

		0x00006048, 0x000063C8, 0x00006748
	};

	gcRemoveSObjAll(type_gobj);
	type_sobj = lbCommonMakeSObjForGObj(type_gobj, gFile011 + type_button_offsets[type_id]);
	type_sobj->pos.x = x;
	type_sobj->pos.y = y;
	type_sobj->sprite.attr = type_sobj->sprite.attr & ~SP_FASTCOPY;
	type_sobj->sprite.attr = type_sobj->sprite.attr | SP_TRANSPARENT;
}

// 80132A14
void mnBattleSetNameAndLogo(GObj* name_logo_gobj, s32 port_id, s32 ft_kind)
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

	if (ft_kind != nFTKindNull)
	{
		gcRemoveSObjAll(name_logo_gobj);

		// logo
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, gFile014 + logo_offsets[ft_kind]);
		sobj->pos.x = (port_id * 0x45) + 0x18;
		sobj->pos.y = 143.0F;
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (gMnBattlePanels[port_id].player_type == mnPanelTypeHuman)
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
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj, gFile011 + name_offsets[ft_kind]);
		sobj->pos.x = (port_id * 0x45) + 0x16;
		sobj->pos.y = 201.0F;
		sobj->sprite.attr = sobj->sprite.attr & ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;
	}
}

// 80132BF4
void mnAnimatePanelDoors(s32 port_id)
{
	// left door
	SObjGetStruct(gMnBattlePanels[port_id].panel_doors)->pos.x
		= (f32)((s32)gMnBattlePanels[port_id].door_offset + port_id * 0x45 - 0x13);

	// right door
	SObjGetStruct(gMnBattlePanels[port_id].panel_doors)->next->pos.x
		= (f32)(port_id * 0x45 + 0x58 - (s32)gMnBattlePanels[port_id].door_offset);
}

// 80132C6C
void mnUpdatePanelDoors(GObj* panel_doors)
{
	s32 port_id = panel_doors->user_data.p;
	s32 delta = 2, max = 0x29, min = 0;

	if (gMnBattlePanels[port_id].player_type == mnPanelTypeNA)
	{
		if (gMnBattlePanels[port_id].door_offset == delta)
		{
			// left over check
		}

		if (gMnBattlePanels[port_id].door_offset < max)
		{
			gMnBattlePanels[port_id].door_offset += delta;

			if (gMnBattlePanels[port_id].door_offset >= max)
			{
				gMnBattlePanels[port_id].door_offset = max;
				func_800269C0_275C0(nSYAudioFGMPlayerGateClose);
			}
			mnAnimatePanelDoors(port_id);
		}
	}
	else
	{
		if (gMnBattlePanels[port_id].door_offset == min)
		{
			// left over check
		}

		if (gMnBattlePanels[port_id].door_offset > min)
		{
			gMnBattlePanels[port_id].door_offset -= delta;

			if (gMnBattlePanels[port_id].door_offset < min)
				gMnBattlePanels[port_id].door_offset = min;
			mnAnimatePanelDoors(port_id);
		}
	}
}

// 80132D1C
void mnBattleCreatePortraitViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132DBC
void mnBattleCreatePortraitBackgroundViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132E5C
void mnBattleCreatePortraitWhiteBackgroundViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132EFC
void mnBattleCreatePanelDoorsViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80132F9C
void mnBattleCreateTypeButtonViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013303C
void mnBattleCreatePanelViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801330DC
void mnBattleCreateTeamButtonViewPort()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8013317C
void mnRenderPanelDoorsP1(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0x16, 0x58, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 801331C8
void mnRenderPanelDoorsP2(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0x5B, 0x9D, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 80133214
void mnRenderPanelDoorsP3(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0xA0, 0xE2, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 80133260
void mnRenderPanelDoorsP4(GObj* panel_doors_gobj)
{
	lbCommonSetSpriteScissor(0xE5, 0x127, 0x7E, 0xD9);
	lbCommonDrawSObjAttr(panel_doors_gobj);
	lbCommonSetSpriteScissor(0xA, 0x136, 0xA, 0xE6);
}

// 801332AC
void mnUpdatePanel(GObj* panel_gobj, s32 color_id, s32 player_type)
{
	SObj* panel_sobj;
	intptr_t panel_offsets[4] = {

		0x000103F8, 0x00010420, 0x00010470, 0x00010448
	};
	intptr_t panel_offsets_cpu[4] = {

		0x00011378, 0x000113A0, 0x000113F0, 0x000113C8
	};
	syColorRGB colors[4] = {

		{ 0xFF, 0x7E, 0x7E },
		{ 0xB3, 0xB3, 0xFF },
		{ 0xEB, 0xDB, 0x7A },
		{ 0x96, 0xCC, 0x96 }
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	if (player_type == mnPanelTypeHuman)
		SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets[color_id]);
	else
		SObjGetSprite(panel_sobj)->LUT = GetAddressFromOffset(gFile011, panel_offsets_cpu[color_id]);
}

// 80133378
void mnCreateTypeButton(s32 port_id)
{
	GObj* type_button_gobj;
	intptr_t offsets[3] = {

		0x00006048, 0x000063C8, 0x00006748
	};

	type_button_gobj
		= lbCommonMakeSpriteGObj(0, NULL, 0x18, 0x80000000, lbCommonDrawSObjAttr, 0x1E, 0x80000000, -1,
							 GetAddressFromOffset(gFile011, offsets[gMnBattlePanels[port_id].player_type]), 1, NULL, 1);

	gMnBattlePanels[port_id].type_button = type_button_gobj;
	SObjGetStruct(type_button_gobj)->pos.x = (f32)((port_id * 0x45) + 0x40);
	SObjGetStruct(type_button_gobj)->pos.y = 131.0F;
	SObjGetStruct(type_button_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(type_button_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801334A8
void mnBattleCreateTypeImage(s32 port_id)
{
	GObj* type_gobj;
	SObj* type_sobj;
	intptr_t offsets[4] = {

		0x00000878, 0x00000A58, 0x00000C38, 0x00000E18
	};
	f32 floats[4] = {

		8, 5, 5, 5
	};

	gMnBattlePanels[port_id].type = type_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(type_gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);

	if (gMnBattlePanels[port_id].player_type == mnPanelTypeCPU)
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, GetAddressFromOffset(gFile011, &FILE_011_TYPE_CP_IMAGE_OFFSET));
		type_sobj->pos.x = (f32)((port_id * 0x45) + 0x1A);
	}
	else
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, GetAddressFromOffset(gFile011, offsets[port_id]));
		type_sobj->pos.x = floats[port_id] + (f32)((port_id * 0x45) + 0x16);
	}
	type_sobj->sprite.attr &= ~SP_FASTCOPY;
	type_sobj->sprite.attr |= SP_TRANSPARENT;
	type_sobj->sprite.red = 0;
	type_sobj->sprite.green = 0;
	type_sobj->sprite.blue = 0;
	type_sobj->pos.y = 131.0F;
}

// 8013365C
void mnBattleCreatePanel(s32 port_id)
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
	temp_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, 0x80000000, -1,
								   GetAddressFromOffset(gFile011, &FILE_011_PANEL_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePanels[port_id].panel = temp_gobj;
	start_x = port_id * 0x45;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x + 0x16);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (gMnBattleIsTeamBattle == FALSE)
		mnUpdatePanel(temp_gobj, palette_ids[port_id], gMnBattlePanels[port_id].player_type);
	else
	{
		// TODO: team enum - 2 is GREEN here
		mnUpdatePanel(temp_gobj, ((gMnBattlePanels[port_id].team == 2) ? 3 : gMnBattlePanels[port_id].team),
					  gMnBattlePanels[port_id].player_type);
	}

	mnBattleCreateTypeImage(port_id);

	// create panel doors
	temp_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, panelRenderRoutines[port_id], 0x1D, 0x80000000, -1,
								   GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_L_IMAGE_OFFSET), 1,
								   mnUpdatePanelDoors, 1);
	temp_gobj->user_data.p = port_id;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x - 0x13);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;
	gMnBattlePanels[port_id].panel_doors = temp_gobj;

	right_door_sobj
		= lbCommonMakeSObjForGObj(temp_gobj, GetAddressFromOffset(gFile011, &FILE_011_PANEL_DOOR_R_IMAGE_OFFSET));
	right_door_sobj->pos.x = (f32)(start_x + 0x58);
	right_door_sobj->pos.y = 126.0F;
	right_door_sobj->sprite.attr &= ~SP_FASTCOPY;
	right_door_sobj->sprite.attr |= SP_TRANSPARENT;
	gMnBattlePanels[port_id].door_offset = 0x29;

	mnAnimatePanelDoors(port_id);
	mnCreateTypeButton(port_id);

	// name/logo
	temp_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gMnBattlePanels[port_id].name_logo = temp_gobj;
	gcAddGObjDisplay(temp_gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);

	mnBattleSyncNameAndLogo(port_id);

	if ((mnIsHandicap()) || (gMnBattlePanels[port_id].player_type == mnPanelTypeCPU))
		mnReplaceFighterNameWithHandicapCPULevel(port_id);
	if (gMnBattleIsTeamBattle == TRUE)
		mnCreateTeamButton(gMnBattlePanels[port_id].team, port_id);
}

// 80133A1C
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

// 80133ABC
void mnSetTextureColors(SObj* sobj, u32 colors[])
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->env_color.r = (u8)colors[0];
	sobj->env_color.g = (u8)colors[1];
	sobj->env_color.b = (u8)colors[2];
	sobj->sprite.red = (u8)colors[3];
	sobj->sprite.green = (u8)colors[4];
	sobj->sprite.blue = (u8)colors[5];
}

// 80133B04
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

// 80133BB0
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

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gFile011, number_offsets[num % 10]));
	mnSetTextureColors(number_sobj, colors);
	left_x -= number_sobj->sprite.width;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for (place = 1, numDigits = (pad) ? maxDigits : mnGetNumberOfDigits(num, maxDigits); place < numDigits;
		 place++, numDigits = (pad) ? maxDigits : mnGetNumberOfDigits(num, maxDigits))
	{
		digit = (mnPow(10, place) != 0) ? num / mnPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, GetAddressFromOffset(gFile011, number_offsets[digit % 10]));
		mnSetTextureColors(number_sobj, colors);
		left_x -= (f32)number_sobj->sprite.width;
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 80133E28
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
											   GetAddressFromOffset(gFile011, &FILE_011_INFINITY_IMAGE_OFFSET));
		infinity_sobj->pos.x = 194.0F;
		infinity_sobj->pos.y = 24.0F;
		infinity_sobj->env_color.r = colors[0];
		infinity_sobj->env_color.g = colors[1];
		infinity_sobj->env_color.b = colors[2];
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

// 80133FAC
void mnDrawTimerPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMnBattlePickerGObj != NULL)
		gcEjectGObj(gMnBattlePickerGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1,
									 GetAddressFromOffset(gFile011, &FILE_011_PICKER_TIME_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawTimerValue(gMnBattleTimerValue);
}

// 80134094
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

// 80134198
void mnDrawStockPicker(s32 num)
{
	GObj* picker_gobj;

	if (gMnBattlePickerGObj != NULL)
		gcEjectGObj(gMnBattlePickerGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1,
									 GetAddressFromOffset(gFile011, &FILE_011_PICKER_STOCK_IMAGE_OFFSET), 1, NULL, 1);
	gMnBattlePickerGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawStockValue(gMnBattleStockValue + 1);
}

// 80134284
void mnBattleCreateBackground()
{
	GObj* background_gobj;
	SObj* background_sobj;

	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, 0x80000000U, -1);
	background_sobj
		= lbCommonMakeSObjForGObj(background_gobj, GetAddressFromOffset(gFile015, &FILE_015_BACKGROUND_IMAGE_OFFSET));
	background_sobj->cms = G_TX_WRAP;
	background_sobj->cmt = G_TX_WRAP;
	background_sobj->masks = 6;
	background_sobj->maskt = 5;
	background_sobj->lrs = 300;
	background_sobj->lrt = 220;
	background_sobj->pos.x = 10.0F;
	background_sobj->pos.y = 10.0F;
}

// 801343B0
void mnBattleDrawTitleAndBack()
{
	GObj* back_gobj;
	GObj* title_gobj;
	void* unused;
	intptr_t title_offsets[2] = {

		0x00000280, 0x000004E0
	};
	syColorRGB title_colors[2] = {

		{ 0xE3, 0xAC, 0x04 },
		{ 0x61, 0xAD, 0x49 }
	};

	title_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1,
									GetAddressFromOffset(gFile012, title_offsets[gMnBattleIsTeamBattle]), 1, NULL, 1);
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

	back_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1,
								   GetAddressFromOffset(gFile011, &FILE_011_BACK_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(back_gobj)->pos.x = 244.0F;
	SObjGetStruct(back_gobj)->pos.y = 23.0F;
	SObjGetStruct(back_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(back_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801345F0 - Unused?
void func_ovl26_801345F0() {}

// 801345F8 - Unused?
void func_ovl26_801345F8() {}

// 80134600 - Unused?
void func_ovl26_80134600() {}

// 80134608
s32 mnBattleGetAdditionalSelectedCount(s32 ft_kind)
{
	s32 count = 0, i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if (ft_kind == gMnBattlePanels[i].char_id)
			count += 1;
	}

	return (count != 0) ? count - 1 : count;
}

// 80134674
sb32 mnBattleIsCostumeInUse(s32 ft_kind, s32 port_id, s32 costume_id)
{
	s32 i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if ((port_id != i) && (ft_kind == gMnBattlePanels[i].char_id) && (costume_id == gMnBattlePanels[i].costume_id))
			return TRUE;
	}
	return FALSE;
}

// 8013473C
// Gets the first costume not in use by another port
s32 mnBattleGetAvailableCostumeFFA(s32 ft_kind, s32 port_id)
{
	mnCharPanelBattle* panel_info;
	s32 i, j, k;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	for (i = 0; i < 4; i++)
	{
		if (i != port_id)
		{
			panel_info = &gMnBattlePanels[i];

			if (ft_kind == panel_info->char_id)
			{
				for (j = 0; j < 4; j++)
				{
					if (ftParamGetCostumeCommonID(ft_kind, j) == panel_info->costume_id)
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

// 8013487C
s32 mnBattleGetAvailableCostume(s32 ft_kind, s32 port_id)
{
	if (gMnBattleIsTeamBattle == FALSE)
		return ftParamGetCostumeCommonID(ft_kind, mnBattleGetAvailableCostumeFFA(ft_kind, port_id));
	else if (gMnBattleIsTeamBattle == TRUE)
		return ftParamGetCostumeTeamID(ft_kind, gMnBattlePanels[port_id].team);
}

// 801348EC
s32 mnBattleGetSelectedAnimation(s32 ft_kind)
{
	switch (ft_kind)
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

// 8013494C
void mnBattleRotateFighter(GObj* fighter_gobj)
{
	ftStruct* fp = ftGetStruct(fighter_gobj);
	s32 port_id = fp->player;
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if (panel_info->unk_0x88 == 1)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < (PI32 / 1800))
		{
			if (panel_info->selected_animation_started == FALSE)
			{
				scSubsysFighterSetStatus(panel_info->player, mnBattleGetSelectedAnimation(panel_info->char_id));
				panel_info->selected_animation_started = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += M_DTOR_F(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > M_DTOR_F(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;
				scSubsysFighterSetStatus(panel_info->player, mnBattleGetSelectedAnimation(panel_info->char_id));
				panel_info->selected_animation_started = TRUE;
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

// 80134A8C
void mnBattleSpawnFighter(GObj* fighter_gobj, s32 port_id, s32 ft_kind, s32 costume_id)
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
		gMnBattlePanels[port_id].costume_id = spawn_info.costume = costume_id;
		spawn_info.shade = gMnBattlePanels[port_id].shade;
		spawn_info.figatree_heap = gMnBattlePanels[port_id].figatree_heap;
		spawn_info.player = port_id;
		fighter_gobj = ftManagerMakeFighter(&spawn_info);

		gMnBattlePanels[port_id].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnBattleRotateFighter, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = (port_id * 840) - 1250;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];

		if (gMnBattlePanels[port_id].player_type == mnPanelTypeCPU)
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
	}
}

// 80134C64
void mnBattleCreateFighterViewport()
{
	Camera* cam = CameraGetStruct(
		(GObj*)gcMakeCameraGObj(0x401U, NULL, 0x10, 0x80000000U, func_80017EC0, 0x1E, 0x48600, -1, 1, 1, 0, 1, 0));
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

// 80134D54
void mnBattleRedrawCursor(GObj* cursor_gobj, s32 port_id, s32 cursor_state)
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

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gFile011, cursor_offsets[cursor_state]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, GetAddressFromOffset(gFile011, type_offsets[port_id]));
	cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_state].x;
	cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_state].y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;
	cursor_sobj->sprite.red = type_colors[port_id].prim.r;
	cursor_sobj->sprite.green = type_colors[port_id].prim.g;
	cursor_sobj->sprite.blue = type_colors[port_id].prim.b;
	cursor_sobj->env_color.r = type_colors[port_id].env.r;
	cursor_sobj->env_color.g = type_colors[port_id].env.g;
	cursor_sobj->env_color.b = type_colors[port_id].env.b;
}

// 80134F64
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

// 8013502C
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

// 801350F4 - Unused?
void func_ovl26_801350F4() {}

// 801350FC
void mnBattleUpdatePanelsAndFighterCostumes()
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
			if (gMnBattlePanels[i].char_id != nFTKindNull)
			{
				gMnBattlePanels[i].costume_id = ftParamGetCostumeCommonID(
					gMnBattlePanels[i].char_id, mnBattleGetAvailableCostumeFFA(gMnBattlePanels[i].char_id, i));
				gMnBattlePanels[i].shade = mnBattleGetShade(i);
				ftParamInitModelTexturePartsAll(gMnBattlePanels[i].player, gMnBattlePanels[i].costume_id, gMnBattlePanels[i].shade);
			}
		}
	}
	if (gMnBattleIsTeamBattle == TRUE)
	{
		for (i = 0; i < 4; i++)
		{
			mnUpdatePanel(gMnBattlePanels[i].panel, gMnBattlePanels[i].team == 2 ? 3 : gMnBattlePanels[i].team,
						  gMnBattlePanels[i].player_type);
			if (gMnBattlePanels[i].char_id != nFTKindNull)
			{
				gMnBattlePanels[i].costume_id
					= ftParamGetCostumeTeamID(gMnBattlePanels[i].char_id, gMnBattlePanels[i].team);
				gMnBattlePanels[i].shade = mnBattleGetShade(i);
				ftParamInitModelTexturePartsAll(gMnBattlePanels[i].player, gMnBattlePanels[i].costume_id, gMnBattlePanels[i].shade);
			}
		}
	}
}

// 80135270
s32 mnCheckFFATeamBattleTogglePress(GObj* cursor_gobj)
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

// 80135334
void mnHandleFFATeamBattleTogglePress()
{
	GObj* title_gobj;
	SObj* title_sobj;
	int i;
	intptr_t offsets[2] = {

		0x280, 0x4e0
	};
	syColorRGB colors[2] = {

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

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, GetAddressFromOffset(gFile012, offsets[gMnBattleIsTeamBattle]));
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
			if (gMnBattlePanels[i].char_id != nFTKindNull)
				gMnBattlePanels[i].shade = 4;
		}
	}

	mnBattleUpdatePanelsAndFighterCostumes();

	if (gMnBattleIsTeamBattle == 0)
		mnDestroyTeamButtons();
	else
		mnCreateTeamButtons();
}

// 80135554
s32 mnCheckTeamButtonPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 34) && (current_x <= port_id * 69 + 58) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 131.0F) && (current_y <= 141.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135634
sb32 mnCheckAnyTeamButtonPress(GObj* cursor_gobj, s32 cursor_port_id)
{
	s32 port_id;
	s32 color_indexes[3] = {

		0, 1, 3
	};
	s32 unknown_unused[3] = {

		0x1FE, 0x1DB, 0x1EB
	};
	u32 shade;

	if (gMnBattleIsTeamBattle != TRUE)
		return FALSE;

	for (port_id = 0; port_id < 4; port_id++)
	{
		if ((gMnBattlePanels[port_id].player_type != 2) && (mnCheckTeamButtonPress(cursor_gobj, port_id) != 0))
		{
			gMnBattlePanels[port_id].team = gMnBattlePanels[port_id].team == 2 ? 0 : gMnBattlePanels[port_id].team + 1;

			mnUpdatePanel(gMnBattlePanels[port_id].panel, color_indexes[gMnBattlePanels[port_id].team],
						  gMnBattlePanels[port_id].player_type);
			mnCreateOrReplaceTeamButton(gMnBattlePanels[port_id].team, port_id);

			if (gMnBattlePanels[port_id].char_id != nFTKindNull)
			{
				gMnBattlePanels[port_id].costume_id
					= ftParamGetCostumeTeamID(gMnBattlePanels[port_id].char_id, gMnBattlePanels[port_id].team);

				gMnBattlePanels[port_id].shade = shade = mnBattleGetShade(port_id);
				ftParamInitModelTexturePartsAll(gMnBattlePanels[port_id].player, gMnBattlePanels[port_id].costume_id, shade);
			}

			func_800269C0_275C0(nSYAudioFGMTitlePressStart);

			return TRUE;
		}
	}
	return FALSE;
}

// 801357A4
sb32 mnCheckAnyCPUHandicapArrowPress(GObj* cursor_gobj, s32 cursor_port_id)
{
	s32 port_id;
	u32* target;

	for (port_id = 0; port_id < 4; port_id++)
	{
		target = (gMnBattlePanels[port_id].player_type == 0) ? &gMnBattlePanels[port_id].handicap
															 : &gMnBattlePanels[port_id].cpu_level;

		if (((gMnBattlePanels[port_id].player_type == 1)
			 || ((mnIsHandicapOn()) && (gMnBattlePanels[port_id].player_type == 0)
				 && (port_id == cursor_port_id)))
			&& (gMnBattlePanels[port_id].unk_0x88 != 0))
		{
			if (mnCheckCPUHandicapRightArrowPress(cursor_gobj, port_id) != 0)
			{
				if ((s32)*target < 9)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*target += 1;
					mnDrawHandicapCPULevelValue(port_id);
				}
				return 1;
			}
			if (mnCheckCPUHandicapLeftArrowPress(cursor_gobj, port_id) != 0)
			{
				if ((s32)*target >= 2)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*target -= 1;
					mnDrawHandicapCPULevelValue(port_id);
				}
				return 1;
			}
		}
	}
	return 0;
}

// 801358F8
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 68) && (current_x <= port_id * 69 + 90) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 801359D8
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 21) && (current_x <= port_id * 69 + 43) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 197.0F) && (current_y <= 216.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135AB8
s32 mnCheckPlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	current_x = cursor_sobj->pos.x + 20.0F;

	range_check = (current_x >= port_id * 69 + 60) && (current_x <= port_id * 69 + 88) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;

		range_check = (current_y >= 127.0F) && (current_y <= 145.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 80135B98
sb32 mnBattleCheckTokenPickup(GObj* cursor_gobj, s32 cursor_port_id, s32 port_id)
{
	f32 current_x, current_y, token_x, token_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* token_sobj = SObjGetStruct(gMnBattlePanels[port_id].token);

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

// 80135C84
void mnHandlePlayerTypeButtonPress(s32 port_id)
{
	GObj* cursor_gobj;

	switch (gMnBattlePanels[port_id].player_type)
	{
	case mnPanelTypeHuman:
		if (gMnBattlePanels[port_id].held_port_id != -1)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].holder_port_id = 4;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].unk_0x88 = TRUE;

			mnBattleReorderCursorsOnPlacement(port_id, gMnBattlePanels[port_id].held_port_id);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[port_id].held_port_id);
			mnBattleCreateWhiteSquare(gMnBattlePanels[port_id].held_port_id);
		}

		gMnBattlePanels[port_id].is_selected = FALSE;
		gMnBattlePanels[port_id].char_id = nFTKindNull;
		gMnBattlePanels[port_id].unk_0x88 = FALSE;
		gMnBattlePanels[port_id].holder_port_id = port_id;
		gMnBattlePanels[port_id].held_port_id = port_id;

		mnBattleReorderCursorsOnPickup(port_id, port_id);

		gMnBattlePanels[port_id].unk_0xA0 = FALSE;

		if (gMnBattlePanels[port_id].type != NULL)
		{
			gcEjectGObj(gMnBattlePanels[port_id].type);
			mnBattleCreateTypeImage(port_id);
		}

		if (gMnBattleIsTeamBattle == 0)
		{
			mnUpdatePanel(gMnBattlePanels[port_id].panel, port_id, gMnBattlePanels[port_id].player_type);
			return;
		}

		mnUpdatePanel(gMnBattlePanels[port_id].panel,
					  gMnBattlePanels[port_id].team == 2 ? 3 : gMnBattlePanels[port_id].team,
					  gMnBattlePanels[port_id].player_type);
		return;
	case mnPanelTypeCPU:
		if (gMnBattlePanels[port_id].held_port_id != -1)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].holder_port_id = 4;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].unk_0x88 = TRUE;

			mnBattleReorderCursorsOnPlacement(port_id, gMnBattlePanels[port_id].held_port_id);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[port_id].held_port_id);
			mnBattleCreateWhiteSquare(gMnBattlePanels[port_id].held_port_id);
		}

		gMnBattlePanels[port_id].is_selected = TRUE;
		gMnBattlePanels[port_id].holder_port_id = 4;
		gMnBattlePanels[port_id].held_port_id = -1;

		mnBattleReorderCursorsOnPlacement(4U, port_id);

		gMnBattlePanels[port_id].unk_0x88 = TRUE;

		if (gMnBattlePanels[port_id].char_id == nFTKindNull)
			gMnBattlePanels[port_id].char_id = mnSelectRandomFighter(gMnBattlePanels[port_id].token);

		gMnBattlePanels[port_id].unk_0xA0 = FALSE;
		if (gMnBattlePanels[port_id].type != NULL)
		{
			gcEjectGObj(gMnBattlePanels[port_id].type);
			mnBattleCreateTypeImage(port_id);
		}

		if (gMnBattleIsTeamBattle == 0)
		{
			mnUpdatePanel(gMnBattlePanels[port_id].panel, port_id, gMnBattlePanels[port_id].player_type);
			return;
		}

		mnUpdatePanel(gMnBattlePanels[port_id].panel,
					  gMnBattlePanels[port_id].team == 2 ? 3 : gMnBattlePanels[port_id].team,
					  gMnBattlePanels[port_id].player_type);
		return;
	case mnPanelTypeNA:
		if (gMnBattlePanels[port_id].holder_port_id != 4)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].held_port_id = -1;
			gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor_state = mnCursorStateNotHoldingToken;

			cursor_gobj = gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor;
			if (cursor_gobj != NULL)
			{
				mnBattleRedrawCursor(cursor_gobj, gMnBattlePanels[port_id].holder_port_id,
									 gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor_state);
			}
		}

		if (gMnBattlePanels[port_id].held_port_id != -1)
		{
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].holder_port_id = 4;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].is_selected = TRUE;
			gMnBattlePanels[gMnBattlePanels[port_id].held_port_id].unk_0x88 = TRUE;
			mnBattleReorderCursorsOnPlacement(port_id, gMnBattlePanels[port_id].held_port_id);
			mnReplaceFighterNameWithHandicapCPULevel(gMnBattlePanels[port_id].held_port_id);
			mnBattleCreateWhiteSquare(gMnBattlePanels[port_id].held_port_id);
		}

		gMnBattlePanels[port_id].is_selected = FALSE;
		gMnBattlePanels[port_id].held_port_id = -1;
		gMnBattlePanels[port_id].char_id = nFTKindNull;
		gMnBattlePanels[port_id].unk_0x88 = FALSE;
		gMnBattlePanels[port_id].unk_0xA0 = FALSE;

		if (gMnBattleControllerOrderArray[port_id] != -1)
			gMnBattlePanels[port_id].holder_port_id = port_id;
		return;
	}
}

// 80136038
void mnSyncTokenDisplay(GObj* token_gobj, s32 port_id)
{
	s32 token_ids[4] = {

		0, 1, 2, 3
	};

	if ((gMnBattlePanels[port_id].cursor_state == mnCursorStatePointer)
		&& (gMnBattlePanels[port_id].is_selected == FALSE))
	{
		token_gobj->flags = 1;
	}
	else
		token_gobj->flags = 0;

	switch (gMnBattlePanels[port_id].player_type)
	{
	case mnPanelTypeHuman:
		gMnBattlePanels[port_id].is_selected = FALSE;
		mnBattleRedrawToken(token_gobj, token_ids[port_id]);
		break;
	case mnPanelTypeCPU:
		mnBattleRedrawToken(token_gobj, 4);
		gMnBattlePanels[port_id].is_selected = TRUE;
		break;
	case mnPanelTypeNA:
		if (FALSE)
			; // grr!

		token_gobj->flags = 1;
		break;
	}
	return;
}

// 80136128
void mnBattleSyncFighterDisplay(s32 port_id)
{
	GObj* player_gobj;
	s32 var_v0 = 0;

	player_gobj = gMnBattlePanels[port_id].player;

	if (player_gobj != NULL)
	{
		if (gMnBattlePanels[port_id].player_type == mnPanelTypeNA)
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
		else if ((gMnBattlePanels[port_id].char_id == nFTKindNull) && (gMnBattlePanels[port_id].is_selected == 0))
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		gMnBattlePanels[port_id].shade = mnBattleGetShade(port_id);
		mnBattleSpawnFighter(gMnBattlePanels[port_id].player, port_id, gMnBattlePanels[port_id].char_id,
							 mnBattleGetAvailableCostume(gMnBattlePanels[port_id].char_id, port_id));
		gMnBattlePanels[port_id].selected_animation_started = FALSE;
	}
}

// 801361F8
void mnUpdateCursor(GObj* cursor_gobj, s32 port_id)
{
	if (cursor_gobj != NULL)
	{
		if ((SObjGetStruct(cursor_gobj)->pos.y > 122.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 36.0F))
		{
			if (gMnBattlePanels[port_id].cursor_state != mnCursorStatePointer)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
				gMnBattlePanels[port_id].cursor_state = mnCursorStatePointer;
			}
		}
		else
		{
			if ((gMnBattlePanels[port_id].is_selected == 1) || (gMnBattlePanels[port_id].player_type == 2))
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				gMnBattlePanels[port_id].cursor_state = mnCursorStateNotHoldingToken;
			}
			else if (gMnBattlePanels[port_id].cursor_state != mnCursorStateHoldingToken)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				gMnBattlePanels[port_id].cursor_state = mnCursorStateHoldingToken;
			}
		}
	}
}

// 80136300
void mnBattleSyncNameAndLogo(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if ((panel_info->player_type == mnPanelTypeNA)
		|| ((panel_info->char_id == nFTKindNull) && (panel_info->is_selected == FALSE)))
	{
		panel_info->name_logo->flags = 1;
	}
	else
	{
		panel_info->name_logo->flags = 0;
		mnBattleSetNameAndLogo(panel_info->name_logo, port_id, panel_info->char_id);
	}
}

// 80136388
void mnBattleRemoveWhiteSquare(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if (panel_info->white_square != NULL)
	{
		gcEjectGObj(panel_info->white_square);
		panel_info->white_square = NULL;
	}
}

// 801363DC
void mnBattleFlashWhiteSquare(GObj* white_square_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0)
			mnBattleRemoveWhiteSquare(white_square_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			white_square_gobj->flags = (white_square_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 8013647C
void mnBattleCreateWhiteSquare(s32 port_id)
{
	GObj* white_square_gobj;
	SObj* white_square_sobj;
	s32 portrait_id = mnBattleGetPortraitId(gMnBattlePanels[port_id].char_id);

	mnBattleRemoveWhiteSquare(port_id);

	white_square_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1EU, 0x80000000U);
	gMnBattlePanels[port_id].white_square = white_square_gobj;
	gcAddGObjDisplay(white_square_gobj, lbCommonDrawSObjAttr, 0x25U, 0x80000000U, -1);
	white_square_gobj->user_data.p = port_id;
	gcAddGObjProcess(white_square_gobj, mnBattleFlashWhiteSquare, 0, 1);

	white_square_sobj
		= lbCommonMakeSObjForGObj(white_square_gobj, GetAddressFromOffset(gFile013, &FILE_013_WHITE_SQUARE));
	white_square_sobj->pos.x = (f32)(((portrait_id >= 6 ? portrait_id - 6 : portrait_id) * 45) + 26);
	white_square_sobj->pos.y = (f32)(((portrait_id >= 6 ? 1 : 0) * 43) + 37);
}

// 801365D0
sb32 mnCheckAndHandlePlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id, u32 panel_id)
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
		mnBattleSyncFighterDisplay(panel_id);
		mnBattleSyncNameAndLogo(panel_id);

		switch (gMnBattlePanels[panel_id].player_type)
		{
		case mnPanelTypeHuman:
			gMnBattlePanels[panel_id].holder_port_id = panel_id;
			func_800269C0_275C0(nSYAudioFGMPlayerGateWhoosh);
			break;
		case mnPanelTypeCPU:
			gMnBattlePanels[panel_id].holder_port_id = 4;
			mnBattleAnnounceFighter(port_id, panel_id);
			mnReplaceFighterNameWithHandicapCPULevel(panel_id);
			mnBattleCreateWhiteSquare(panel_id);
			break;
		case mnPanelTypeNA: func_800269C0_275C0(nSYAudioFGMPlayerGateWhoosh); break;
		}

		func_800269C0_275C0(nSYAudioFGMTitlePressStart);
		return TRUE;
	}
	return FALSE;
}

// 8013676C
sb32 mnCheckAndHandleAnyPlayerTypeButtonPress(GObj* cursor_gobj, s32 port_id)
{
	sb32 was_pressed = FALSE;

	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 0))
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 1))
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 2))
		was_pressed = TRUE;
	if (mnCheckAndHandlePlayerTypeButtonPress(cursor_gobj, port_id, 3))
		was_pressed = TRUE;

	return was_pressed;
}

// 801367F0
void mnBattleAnnounceFighter(s32 port_id, s32 panel_id)
{
	// announcer names
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6, 0x01E3, 0x0201, 0x01F2, 0x01F1,
		0x0217, 0x01E5, 0x01F0, 0x01FB, 0x01FC, 0x01F5
	};

	func_80026738_27338(gMnBattlePanels[port_id].p_sfx);
	func_800269C0_275C0(nSYAudioFGMMarioDash);

	gMnBattlePanels[port_id].p_sfx = func_800269C0_275C0(announcer_fgms[gMnBattlePanels[panel_id].char_id]);

	if (gMnBattlePanels[port_id].p_sfx != 0)
		gMnBattlePanels[port_id].sfx_id = gMnBattlePanels[port_id].p_sfx->sfx_id;
}

// 801368C4
void mnHideFighterName(s32 port_id)
{
	SObj* name_logo_sobj;
	SObj* name_sobj;

	name_logo_sobj = SObjGetStruct(gMnBattlePanels[port_id].name_logo);

	if (name_logo_sobj != NULL)
	{
		name_sobj = SObjGetNext(name_logo_sobj);

		if (name_sobj != NULL)
			name_sobj->sprite.attr |= SP_HIDDEN;
	}
}

// 80136910
void mnBattleRemoveHandicapCPULevel(s32 port_id)
{
	if (gMnBattlePanels[port_id].handicap_cpu_level != NULL)
		gcEjectGObj(gMnBattlePanels[port_id].handicap_cpu_level);
	if (gMnBattlePanels[port_id].arrows != NULL)
		gcEjectGObj(gMnBattlePanels[port_id].arrows);
	if (gMnBattlePanels[port_id].handicap_cpu_level_value != NULL)
		gcEjectGObj(gMnBattlePanels[port_id].handicap_cpu_level_value);

	gMnBattlePanels[port_id].handicap_cpu_level = NULL;
	gMnBattlePanels[port_id].arrows = NULL;
	gMnBattlePanels[port_id].handicap_cpu_level_value = NULL;
}

// 80136998
SObj* mnBattleGetArrowSObj(GObj* arrow_gobj, s32 direction)
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

// 801369E4
void mnBattleSyncAndBlinkArrows(GObj* arrow_gobj)
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
			arrow_gobj->flags = arrow_gobj->flags == GOBJ_FLAG_NORENDER ? GOBJ_FLAG_NONE : GOBJ_FLAG_NORENDER;
		}

		value = (gMnBattlePanels[port_id].player_type == 0) ? gMnBattlePanels[port_id].handicap
															: gMnBattlePanels[port_id].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mnBattleGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnBattleGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj
				= lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gFile011, &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = (port_id * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mnBattleGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnBattleGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj
				= lbCommonMakeSObjForGObj(arrow_gobj, GetAddressFromOffset(gFile011, &FILE_011_ARROW_R_IMAGE_OFFSET));
			arrow_sobj->pos.x = (port_id * 0x45) + 0x4F;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 80136C18
void mnBattleSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
	s32 port_id = handicap_cpu_level_gobj->user_data.p;

	if (gMnBattlePanels[port_id].unk_0x88 == 0)
		mnBattleRemoveHandicapCPULevel(port_id);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != gMnBattlePanels[port_id].player_type)
		mnBattleDrawHandicapCPULevel(port_id);
}

// 80136C8C
void mnBattleDrawHandicapCPULevel(s32 port_id)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (gMnBattlePanels[port_id].handicap_cpu_level != NULL)
	{
		gcEjectGObj(gMnBattlePanels[port_id].handicap_cpu_level);
		gMnBattlePanels[port_id].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gMnBattlePanels[port_id].handicap_cpu_level = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, 0x80000000U, -1);
	handicap_cpu_level_gobj->user_data.p = port_id;
	gcAddGObjProcess(handicap_cpu_level_gobj, mnBattleSyncHandicapCPULevelDisplay, 1, 1);

	if (gMnBattlePanels[port_id].player_type == 0)
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
			handicap_cpu_level_gobj, GetAddressFromOffset(gMnBattleFilesArray[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
			handicap_cpu_level_gobj, GetAddressFromOffset(gMnBattleFilesArray[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x22;
		handicap_cpu_level_sobj->user_data.p = 1;
	}

	handicap_cpu_level_sobj->sprite.red = 0xC2;
	handicap_cpu_level_sobj->sprite.green = 0xBD;
	handicap_cpu_level_sobj->sprite.blue = 0xAD;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 201.0F;

	handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
		handicap_cpu_level_gobj, GetAddressFromOffset(gMnBattleFilesArray[1], &FILE_000_COLON_IMAGE_OFFSET));
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x3D;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 80136E90
void mnDrawHandicapCPULevelValue(s32 port_id)
{
	intptr_t offsets[10] = {

		0x0000D310, 0x0000D3E0, 0x0000D4B0, 0x0000D580, 0x0000D650,
		0x0000D720, 0x0000D7F0, 0x0000D8C0, 0x0000D990, 0x0000DA60
	};
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;
	u32 value = (gMnBattlePanels[port_id].player_type == 0) ? gMnBattlePanels[port_id].handicap
															: gMnBattlePanels[port_id].cpu_level;

	if (gMnBattlePanels[port_id].handicap_cpu_level_value != NULL)
	{
		gcEjectGObj(gMnBattlePanels[port_id].handicap_cpu_level_value);
		gMnBattlePanels[port_id].handicap_cpu_level_value = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	gMnBattlePanels[port_id].handicap_cpu_level_value = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, 0x80000000U, -1);

	handicap_cpu_level_sobj
		= lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, GetAddressFromOffset(gFile000, offsets[value]));
	handicap_cpu_level_sobj->pos.x = (port_id * 0x45) + 0x43;
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 200.0F;
}

// 80137004
void mnReplaceFighterNameWithHandicapCPULevel(s32 port_id)
{
	GObj* arrow_gobj;

	mnHideFighterName(port_id);
	mnBattleRemoveHandicapCPULevel(port_id);
	mnBattleDrawHandicapCPULevel(port_id);

	if ((mnIsHandicapAuto() == FALSE) || (gMnBattlePanels[port_id].player_type == 1))
	{
		arrow_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
		gMnBattlePanels[port_id].arrows = arrow_gobj;
		gcAddGObjDisplay(arrow_gobj, lbCommonDrawSObjAttr, 0x23U, 0x80000000U, -1);
		arrow_gobj->user_data.s = port_id;
		gcAddGObjProcess(arrow_gobj, mnBattleSyncAndBlinkArrows, 0, 1);
	}
	mnDrawHandicapCPULevelValue(port_id);
}

// 801370F8
sb32 mnIsHandicapOn()
{
	return (gTransferBattleState.handicap_setting == 1) ? TRUE : FALSE;
}

// 80137120
sb32 mnIsHandicapAuto()
{
	return (gTransferBattleState.handicap_setting == 2) ? TRUE : FALSE;
}

// 80137148
sb32 mnIsHandicap()
{
	if ((mnIsHandicapOn()) || (mnIsHandicapAuto()))
		return TRUE;
	else
		return FALSE;
}

// 8013718C
sb32 mnBattleSelectChar(GObj* cursor_gobj, s32 port_id, s32 arg2, s32 select_button)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if (panel_info->cursor_state != mnCursorStateHoldingToken)
		return FALSE;

	if (gMnBattlePanels[panel_info->held_port_id].char_id != nFTKindNull)
	{
		mnBattleSelectCharWithToken(port_id, select_button);
		panel_info->min_frames_elapsed_until_recall = gMnBattleFramesElapsed + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(nSYAudioFGMMenuDenied);
	return FALSE;
}

// 80137234
void mnBattleReorderCursorsOnPickup(s32 port_id, s32 token_id)
{
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};
	s32 i, order_id;

	gcMoveGObjDL(gMnBattlePanels[port_id].cursor, 0x20U, diplay_orders[3]);
	gcMoveGObjDL(gMnBattlePanels[token_id].token, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != port_id)
		{
			if (gMnBattlePanels[i].cursor != NULL)
				gcMoveGObjDL(gMnBattlePanels[i].cursor, 0x20U, diplay_orders[order_id]);
			if (gMnBattlePanels[i].held_port_id != -1U)
			{
				gcMoveGObjDL(gMnBattlePanels[gMnBattlePanels[i].held_port_id].token, 0x20U,
							 diplay_orders[order_id] + 1);
			}
		}
	}
}

// 80137390
s32 mnBattleReorderCursorsOnPlacement(s32 port_id, s32 held_token_id)
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
		if (gMnBattlePanels[i].held_port_id == -1)
			token_held[i] = FALSE;
		else
			token_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != port_id) && (token_held[i]))
		{
			if (gMnBattlePanels[i].cursor != NULL)
				gcMoveGObjDL(gMnBattlePanels[i].cursor, 0x20, *order);
			gcMoveGObjDL(gMnBattlePanels[gMnBattlePanels[i].held_port_id].token, 0x20, *order + 1);
			order--;
		}
	}

	if (port_id != 4)
		gcMoveGObjDL(gMnBattlePanels[port_id].cursor, 0x20, *order);

	gcMoveGObjDL(gMnBattlePanels[held_token_id].token, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if ((i != port_id) && (token_held[i] == FALSE))
		{
			if (gMnBattlePanels[i].cursor != NULL)
				gcMoveGObjDL(gMnBattlePanels[i].cursor, 0x20, *order);
			order--;
		}
	}
}

// 801375A8
void mnBattleSetCursorCoordinatesFromToken(s32 port_id)
{
	mnCharPanelBattle* panel_info;
	mnCharPanelBattle* held_token_panel_info;

	panel_info = &gMnBattlePanels[port_id];
	held_token_panel_info = &gMnBattlePanels[panel_info->held_port_id];

	panel_info->cursor_pickup_x = SObjGetStruct(held_token_panel_info->token)->pos.x - 11.0F;
	panel_info->cursor_pickup_y = SObjGetStruct(held_token_panel_info->token)->pos.y - -14.0F;
}

// 8013760C
void mnBattleHandleCursorPickup(s32 port_id, s32 held_port_id)
{
	mnCharPanelBattle* panel_info;
	mnCharPanelBattle* held_token_panel_info;

	held_token_panel_info = &gMnBattlePanels[held_port_id];
	held_token_panel_info->holder_port_id = port_id;
	held_token_panel_info->is_selected = FALSE;

	panel_info = &gMnBattlePanels[port_id];
	panel_info->cursor_state = mnCursorStateHoldingToken;
	panel_info->held_port_id = held_port_id;

	held_token_panel_info->unk_0x88 = FALSE;

	mnBattleSyncFighterDisplay(held_port_id);
	mnBattleReorderCursorsOnPickup(port_id, held_port_id);
	mnBattleSetCursorCoordinatesFromToken(port_id);
	mnBattleRedrawCursor(panel_info->cursor, port_id, panel_info->cursor_state);

	panel_info->unk_0xA0 = TRUE;

	func_800269C0_275C0(nSYAudioFGMSamusDash);

	mnBattleRemoveHandicapCPULevel(held_port_id);
	mnBattleRemoveWhiteSquare(held_port_id);
	mnBattleSyncNameAndLogo(held_port_id);
}

// 801376D0
sb32 mnBattleCheckAndHandleTokenPickup(GObj* cursor_gobj, s32 port_id)
{
	s32 i;

	if ((gMnBattleFramesElapsed < gMnBattlePanels[port_id].min_frames_elapsed_until_recall)
		|| (gMnBattlePanels[port_id].is_recalling))
	{
		return FALSE;
	}
	else if (gMnBattlePanels[port_id].cursor_state != mnCursorStateNotHoldingToken)
		return FALSE;

	for (i = 3; i >= 0; i--)
	{
		if (port_id == i)
		{
			if ((gMnBattlePanels[i].holder_port_id == 4) && (gMnBattlePanels[i].player_type != 2)
				&& (mnBattleCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnBattleHandleCursorPickup(port_id, i);

				return TRUE;
			}
		}
		else if ((gMnBattlePanels[i].holder_port_id == 4) && (gMnBattlePanels[i].player_type == 1)
				 && (mnBattleCheckTokenPickup(cursor_gobj, port_id, i) != 0))
		{
			mnBattleHandleCursorPickup(port_id, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 8013782C
s32 mnBattleGetFtKindFromTokenPosition(s32 port_id)
{
	SObj* token_sobj = SObjGetStruct(gMnBattlePanels[port_id].token);
	s32 current_y = (s32)token_sobj->pos.x + 13;
	s32 current_x = (s32)token_sobj->pos.y + 12;
	s32 char_id;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			char_id = mnBattleGetFtKind((s32)(current_y - 25) / 45);

			if ((mnBattleCheckFighterIsXBoxed(char_id)) || (mnBattleGetIsLocked(char_id)))
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
			char_id = mnBattleGetFtKind(((s32)(current_y - 25) / 45) + 6);

			if ((mnBattleCheckFighterIsXBoxed(char_id)) || (mnBattleGetIsLocked(char_id)))
				return nFTKindNull;

			return char_id;
		}
	}
	return nFTKindNull;
}

// 801379B8
void mnBattleAutoPositionCursor(GObj* cursor_gobj, s32 port_id)
{
	gsController* controller;
	Vec2i coords[3] = {

		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (gMnBattlePanels[port_id].unk_0xA0)
	{
		delta
			= (gMnBattlePanels[port_id].cursor_pickup_x - SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x = gMnBattlePanels[port_id].cursor_pickup_x;
		else
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x += delta;

		delta
			= (gMnBattlePanels[port_id].cursor_pickup_y - SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y = gMnBattlePanels[port_id].cursor_pickup_y;
		else
			SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y += delta;

		if ((SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x == gMnBattlePanels[port_id].cursor_pickup_x)
			&& (SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y == gMnBattlePanels[port_id].cursor_pickup_y))
		{
			gMnBattlePanels[port_id].unk_0xA0 = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
			= (f32)((f32)coords[gMnBattlePanels[port_id].cursor_state].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
			= (f32)((f32)coords[gMnBattlePanels[port_id].cursor_state].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (gMnBattlePanels[port_id].is_recalling == FALSE)
	{
		controller = &gPlayerControllers[port_id];

		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32)controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
					= SObjGetStruct(cursor_gobj)->pos.x + coords[gMnBattlePanels[port_id].cursor_state].x;
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
					= SObjGetStruct(cursor_gobj)->pos.y + coords[gMnBattlePanels[port_id].cursor_state].y;
			}
		}
	}
}

// 80137D4C
void mnBattleSyncCursorDisplay(GObj* cursor_gobj, s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (panel_info->cursor_state != mnCursorStatePointer)
		{
			mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStatePointer);
			panel_info->cursor_state = mnCursorStatePointer;
		}
	}
	else
	{
		if (panel_info->held_port_id == -1)
		{
			if (panel_info->cursor_state != mnCursorStateNotHoldingToken)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
			}
		}
		else
		{
			if (panel_info->cursor_state != mnCursorStateHoldingToken)
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateHoldingToken);
				panel_info->cursor_state = mnCursorStateHoldingToken;
			}
		}
	}

	if ((panel_info->cursor_state == mnCursorStatePointer) && (panel_info->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBattlePanels[i].is_selected == 1) && (mnBattleCheckTokenPickup(cursor_gobj, port_id, i) != 0))
			{
				mnBattleRedrawCursor(cursor_gobj, port_id, mnCursorStateNotHoldingToken);
				panel_info->cursor_state = mnCursorStateNotHoldingToken;
				return;
			}
		}
	}
}

// 80137EFC
void mnTryCostumeChange(s32 port_id, s32 select_button)
{
	u32 costume_id = ftParamGetCostumeCommonID(gMnBattlePanels[port_id].char_id, select_button);

	if (mnBattleIsCostumeInUse(gMnBattlePanels[port_id].char_id, port_id, costume_id))
	{
		func_800269C0_275C0(nSYAudioFGMMenuDenied);
		return;
	}

	gMnBattlePanels[port_id].costume_id = costume_id;
	gMnBattlePanels[port_id].shade = mnBattleGetShade(port_id);

	ftParamInitModelTexturePartsAll(gMnBattlePanels[port_id].player, costume_id, gMnBattlePanels[port_id].shade);

	func_800269C0_275C0(nSYAudioFGMMenuScroll2);
}

// 80137F9C
sb32 mnIsHumanWithCharacterSelected(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	if ((panel_info->is_selected) && (panel_info->held_port_id == -1)
		&& (panel_info->player_type == mnPanelTypeHuman))
	{
		return TRUE;
	}
	else
		return FALSE;
}

// 80137FF8
void mnRecallToken(s32 port_id)
{
	gMnBattlePanels[port_id].unk_0x88 = FALSE;
	gMnBattlePanels[port_id].is_selected = FALSE;
	gMnBattlePanels[port_id].is_recalling = TRUE;
	gMnBattlePanels[port_id].recall_frame_counter = 0;
	gMnBattlePanels[port_id].recall_start_x = SObjGetStruct(gMnBattlePanels[port_id].token)->pos.x;
	gMnBattlePanels[port_id].recall_start_y = SObjGetStruct(gMnBattlePanels[port_id].token)->pos.y;

	gMnBattlePanels[port_id].recall_end_x = SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.x + 20.0F;

	if (gMnBattlePanels[port_id].recall_end_x > 280.0F)
		gMnBattlePanels[port_id].recall_end_x = 280.0F;

	gMnBattlePanels[port_id].recall_end_y = SObjGetStruct(gMnBattlePanels[port_id].cursor)->pos.y + -15.0F;

	if (gMnBattlePanels[port_id].recall_end_y < 10.0F)
		gMnBattlePanels[port_id].recall_end_y = 10.0F;

	if (gMnBattlePanels[port_id].recall_end_y < gMnBattlePanels[port_id].recall_start_y)
		gMnBattlePanels[port_id].recall_mid_y = gMnBattlePanels[port_id].recall_end_y - 20.0F;
	else
		gMnBattlePanels[port_id].recall_mid_y = gMnBattlePanels[port_id].recall_start_y - 20.0F;
}

// 801380F4
void mnGoBackToVSMenu()
{
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = 9;

	mnBattleSaveMatchInfo();
	mnBattleDestroyCursorAndTokenProcesses();
	auStopBGM();
	leoInitUnit_atten();
}

// 80138140
void mnExitIfBButtonHeld(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];
	gsController* controller = &gPlayerControllers[port_id];

	if (panel_info->is_b_held)
	{
		if ((panel_info->b_held_frame_count != 0))
		{
			panel_info->b_held_frame_count++;

			if ((panel_info->b_held_frame_count < 41))
			{
				if (controller->button_hold & B_BUTTON)
				{
					if (panel_info->b_held_frame_count == 40)
						mnGoBackToVSMenu();
				}
				else
				{
					panel_info->is_b_held = FALSE;
					panel_info->b_held_frame_count = 0;
				}
			}
		}
	}
	else
	{
		if (controller->button_tap & B_BUTTON)
			panel_info->is_b_held = TRUE;
		panel_info->b_held_frame_count = 1;
	}
}

// 80138218
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

// 801382E0
void mnBattleHandleButtonPresses(GObj* cursor_gobj)
{
	gsController* controller;
	mnCharPanelBattle* panel_info;
	s32 foo, bar, baz;
	s32 port_id = cursor_gobj->user_data.s;

	mnBattleAutoPositionCursor(cursor_gobj, port_id);
	controller = &gPlayerControllers[port_id];

	if ((controller->button_tap & A_BUTTON) && (mnCheckAndHandleAnyPlayerTypeButtonPress(cursor_gobj, port_id) == FALSE)
		&& (mnBattleSelectChar(cursor_gobj, port_id, gMnBattlePanels[port_id].held_port_id, 4) == FALSE)
		&& (mnBattleCheckAndHandleTokenPickup(cursor_gobj, port_id) == FALSE))
	{
		if (mnCheckPickerRightArrowPress(cursor_gobj))
		{
			if (gMnBattleRule == SCBATTLE_GAMERULE_TIME)
			{
				gMnBattleTimerValue = mnBattleGetNextTimerValue(gMnBattleTimerValue);
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
				gMnBattleTimerValue = mnBattleGetPrevTimerValue(gMnBattleTimerValue);
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
		else if (mnCheckFFATeamBattleTogglePress(cursor_gobj))
			mnHandleFFATeamBattleTogglePress();
		else if (mnCheckBackButtonPress(cursor_gobj))
		{
			mnGoBackToVSMenu();
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckAnyTeamButtonPress(cursor_gobj, port_id) == FALSE)
			mnCheckAnyCPUHandicapArrowPress(cursor_gobj, port_id);
	}

	panel_info = &gMnBattlePanels[port_id];

	if (gMnBattleIsTeamBattle == FALSE)
	{
		if ((controller->button_tap & U_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 0) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(port_id, 0);
		}
		if ((controller->button_tap & R_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 1) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(port_id, 1);
		}
		if ((controller->button_tap & D_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 2) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(port_id, 2);
		}
		if ((controller->button_tap & L_CBUTTONS)
			&& (mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 3) == FALSE)
			&& (panel_info->unk_0x88))
		{
			mnTryCostumeChange(port_id, 3);
		}
	}
	else if (controller->button_tap & (U_CBUTTONS | R_CBUTTONS | D_CBUTTONS | L_CBUTTONS))
		mnBattleSelectChar(cursor_gobj, port_id, panel_info->held_port_id, 4);
	if ((controller->button_tap & B_BUTTON) && (mnIsHumanWithCharacterSelected(port_id)))
		mnRecallToken(port_id);
	if (panel_info->is_recalling == FALSE)
		mnExitIfBButtonHeld(port_id);
	if (panel_info->is_recalling == FALSE)
		mnBattleSyncCursorDisplay(cursor_gobj, port_id);
}

// 801386E4
void mnBattleRedrawToken(GObj* token_gobj, s32 token_index)
{
	SObj* token_sobj;
	f32 current_x, current_y;
	intptr_t token_offsets[5] = {

		0x00009048, 0x00009B28, 0x0000A608, 0x0000B0E8, 0x0000BBC8
	};

	current_x = SObjGetStruct(token_gobj)->pos.x;
	current_y = SObjGetStruct(token_gobj)->pos.y;

	gcRemoveSObjAll(token_gobj);

	token_sobj = lbCommonMakeSObjForGObj(token_gobj, GetAddressFromOffset(gFile011, token_offsets[token_index]));
	token_sobj->pos.x = current_x;
	token_sobj->pos.y = current_y;
	token_sobj->sprite.attr &= ~SP_FASTCOPY;
	token_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 80138798
void mnBattleCenterTokenInPortrait(GObj* token_gobj, s32 ft_kind)
{
	s32 portrait_id = mnBattleGetPortraitId(ft_kind);

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

// 80138848
s32 mnSelectRandomFighter(GObj* token_gobj)
{
	s32 ft_kind;

	do
	{
		do
			ft_kind = mtTrigGetRandomTimeUCharRange(12);
		while (mnBattleCheckFighterIsXBoxed(ft_kind) != 0);
	} while (mnBattleGetIsLocked(ft_kind) != 0);

	mnBattleCenterTokenInPortrait(token_gobj, ft_kind);
	return ft_kind;
}

// 801388A4
void mnMoveToken(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];

	SObjGetStruct(panel_info->token)->pos.x += panel_info->token_x_velocity;
	SObjGetStruct(panel_info->token)->pos.y += panel_info->token_y_velocity;
}

// 801388F8
void mnBattleSyncTokenAndFighter(GObj* token_gobj)
{
	s32 ft_kind;
	s32 port_id = token_gobj->user_data.s;

	if (gMnBattleFramesElapsed < 0x1E)
		token_gobj->flags = 1;
	else
	{
		if ((gMnBattlePanels[port_id].player_type == mnPanelTypeCPU)
			|| ((gMnBattlePanels[port_id].player_type == mnPanelTypeHuman)
				&& ((gMnBattlePanels[port_id].cursor_state != mnCursorStatePointer)
					|| (gMnBattlePanels[port_id].is_selected == TRUE)
					|| (gMnBattlePanels[port_id].is_recalling == TRUE))))
		{
			token_gobj->flags = 0;
		}
		else
			token_gobj->flags = 1;
	}

	if ((gMnBattlePanels[port_id].is_selected == FALSE) && (gMnBattlePanels[port_id].holder_port_id != 4))
	{
		if (gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].unk_0xA0 == FALSE)
		{
			if (gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor != NULL)
			{
				SObjGetStruct(token_gobj)->pos.x
					= (f32)(SObjGetStruct(gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor)->pos.x
							+ 11.0F);
				SObjGetStruct(token_gobj)->pos.y
					= (f32)(SObjGetStruct(gMnBattlePanels[gMnBattlePanels[port_id].holder_port_id].cursor)->pos.y
							+ -14.0F);
			}
		}
	}
	else
		mnMoveToken(port_id);

	ft_kind = mnBattleGetFtKindFromTokenPosition(port_id);

	switch (gMnBattlePanels[port_id].player_type)
	{
	case mnPanelTypeNA:
		if ((gMnBattleControllerOrderArray[port_id] != -1) && (ft_kind != nFTKindNull))
		{
			gMnBattlePanels[port_id].player_type = mnPanelTypeHuman;

			mnHandlePlayerTypeButtonPress(port_id);
			mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id, gMnBattlePanels[port_id].player_type);
			mnSyncTokenDisplay(gMnBattlePanels[port_id].token, port_id);
		}
		else
			break;
	default:
		if ((gMnBattlePanels[port_id].player_type == mnPanelTypeCPU) && (ft_kind != gMnBattlePanels[port_id].char_id)
			&& (ft_kind == nFTKindNull))
		{
			if (gMnBattlePanels[port_id].holder_port_id != 4)
				mnBattleSelectCharWithToken(gMnBattlePanels[port_id].holder_port_id, 4);
		}
		if ((gMnBattlePanels[port_id].is_selected == FALSE) && (ft_kind != gMnBattlePanels[port_id].char_id))
		{
			gMnBattlePanels[port_id].char_id = ft_kind;

			mnBattleSyncFighterDisplay(port_id);
			mnBattleSyncNameAndLogo(port_id);
		}
	}
}

// 80138B6C
void mnBattleCreateCursorViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138C0C
void mnBattleCreateDroppedTokenViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138CAC
void mnBattleCreateHandicapCPULevelViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138D4C
void mnBattleCreateReadyToFightViewport()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	Camera* cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80138DEC
void mnBattleCreateCursor(s32 port_id)
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

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x20, starting_display_orders[port_id], -1,
									 GetAddressFromOffset(gFile011, &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1,
									 mnBattleHandleButtonPresses, 2);

	gMnBattlePanels[port_id].cursor = cursor_gobj;
	cursor_gobj->user_data.s = port_id;
	SObjGetStruct(cursor_gobj)->pos.x = (f32)cursor_starting_positions[port_id].x;
	SObjGetStruct(cursor_gobj)->pos.y = (f32)cursor_starting_positions[port_id].y;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnBattleRedrawCursor(cursor_gobj, port_id, 0);
}

// 80138FA0
void mnBattleRenderToken(GObj* token_gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor(gDisplayListHead[0]++, gMnBattleTokenShinePulseColor & 0xFF, gMnBattleTokenShinePulseColor & 0xFF,
				   gMnBattleTokenShinePulseColor & 0xFF, gMnBattleTokenShinePulseColor & 0xFF);
	gDPSetCombineLERP(gDisplayListHead[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0, TEXEL0,
					  PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(token_gobj);
}

// 80139098
void mnBattleCreateToken(s32 port_id)
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

	gMnBattlePanels[port_id].token = token_gobj
		= lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, mnBattleRenderToken, 0x21, start_display_orders[port_id], -1,
							 GetAddressFromOffset(gFile011, offsets_no_cpu[port_id]), 1, mnBattleSyncTokenAndFighter, 1);

	panel_info = &gMnBattlePanels[port_id];

	token_gobj->user_data.s = port_id;

	if (panel_info->player_type == mnPanelTypeCPU)
		mnBattleRedrawToken(token_gobj, 4);

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->held_port_id != -1))
		gcMoveGObjDL(panel_info->token, 0x20U, hold_display_orders[port_id] + 1);

	if (panel_info->char_id == nFTKindNull)
	{
		SObjGetStruct(token_gobj)->pos.x = 51.0F;
		SObjGetStruct(token_gobj)->pos.y = 161.0F;
	}
	else
		mnBattleCenterTokenInPortrait(token_gobj, panel_info->char_id);

	SObjGetStruct(token_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(token_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 801392A8
f32 getBattleTokenDistance(s32 port_id_1, s32 port_id_2)
{
	f32 delta_x, delta_y;
	SObj* token_sobj_2 = SObjGetStruct(gMnBattlePanels[port_id_2].token);
	SObj* token_sobj_1 = SObjGetStruct(gMnBattlePanels[port_id_1].token);

	delta_y = token_sobj_2->pos.y - token_sobj_1->pos.y;
	delta_x = token_sobj_2->pos.x - token_sobj_1->pos.x;

	return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 80139320
void mnBattleAutopositionOverlappedTokens(s32 port_id_1, s32 port_id_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.x
		== SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.x)
		gMnBattlePanels[port_id_1].token_x_velocity += mtTrigGetRandomIntRange(2) - 1;
	else
	{
		gMnBattlePanels[port_id_1].token_x_velocity += (-1.0F
														* (SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.x
														   - SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.x))
													   / 10.0F;
	}

	if (SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.y
		== SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.y)
		gMnBattlePanels[port_id_1].token_y_velocity += mtTrigGetRandomIntRange(2) - 1;
	else
		gMnBattlePanels[port_id_1].token_y_velocity += (-1.0F
														* (SObjGetStruct(gMnBattlePanels[port_id_2].token)->pos.y
														   - SObjGetStruct(gMnBattlePanels[port_id_1].token)->pos.y))
													   / 10.0F;
}

// 80139460
void mnBattleAutopositionTokenFromPortraitEdges(s32 port_id)
{
	s32 portrait_id = mnBattleGetPortraitId(gMnBattlePanels[port_id].char_id);
	f32 portrait_edge_x = ((portrait_id >= 6) ? portrait_id - 6 : portrait_id) * 45 + 25;
	f32 portrait_edge_y = ((portrait_id >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x
		= SObjGetStruct(gMnBattlePanels[port_id].token)->pos.x + gMnBattlePanels[port_id].token_x_velocity + 13.0F;
	f32 new_pos_y
		= SObjGetStruct(gMnBattlePanels[port_id].token)->pos.y + gMnBattlePanels[port_id].token_y_velocity + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		gMnBattlePanels[port_id].token_x_velocity = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		gMnBattlePanels[port_id].token_x_velocity = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	if (new_pos_y < (portrait_edge_y + 5.0F))
		gMnBattlePanels[port_id].token_y_velocity = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		gMnBattlePanels[port_id].token_y_velocity = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 8013961C
void mnBattleAutopositionPlacedToken(s32 port_id)
{
	s32 i;
	f32 distances[4];
	sb32 is_within_bounds;

	for (i = 0; i < 4; i++)
	{
		if (port_id != i)
		{
			if (gMnBattlePanels[port_id].is_selected)
				distances[i] = getBattleTokenDistance(port_id, i);
		}
		else
			distances[i] = -1.0F;
	}

	gMnBattlePanels[port_id].token_x_velocity = 0.0F;
	gMnBattlePanels[port_id].token_y_velocity = 0.0F;

	for (i = 0; i < 4; i++)
	{
		is_within_bounds = ((distances[i] >= 0.0F) && (distances[i] <= 15.0F)) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			if ((gMnBattlePanels[port_id].char_id == gMnBattlePanels[i].char_id)
				&& (gMnBattlePanels[port_id].char_id != nFTKindNull) && (gMnBattlePanels[i].is_selected == 1))
			{
				mnBattleAutopositionOverlappedTokens(port_id, i, (15.0F - distances[i]) / 15.0F);
			}
		}
	}

	mnBattleAutopositionTokenFromPortraitEdges(port_id);
}

// 801397CC
void mnBattleAutopositionRecalledToken(s32 port_id)
{
	f32 new_y_velocity, new_x_velocity;

	gMnBattlePanels[port_id].recall_frame_counter += 1;

	if (gMnBattlePanels[port_id].recall_frame_counter < 11)
	{
		new_x_velocity = (gMnBattlePanels[port_id].recall_end_x - gMnBattlePanels[port_id].recall_start_x) / 10.0F;

		if (gMnBattlePanels[port_id].recall_frame_counter < 6)
			new_y_velocity = (gMnBattlePanels[port_id].recall_mid_y - gMnBattlePanels[port_id].recall_start_y) / 5.0F;
		else
			new_y_velocity = (gMnBattlePanels[port_id].recall_end_y - gMnBattlePanels[port_id].recall_mid_y) / 5.0F;

		gMnBattlePanels[port_id].token_x_velocity = new_x_velocity;
		gMnBattlePanels[port_id].token_y_velocity = new_y_velocity;
	}
	else if (gMnBattlePanels[port_id].recall_frame_counter == 11)
	{
		mnBattleHandleCursorPickup(port_id, port_id);
		gMnBattlePanels[port_id].token_x_velocity = 0.0F;
		gMnBattlePanels[port_id].token_y_velocity = 0.0F;
	}
	if (gMnBattlePanels[port_id].recall_frame_counter == 30)
		gMnBattlePanels[port_id].is_recalling = FALSE;
}

// 801398B8
void mnBattleAutopositionToken(s32 port_id)
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].is_recalling)
			mnBattleAutopositionRecalledToken(i);
		if (gMnBattlePanels[i].is_selected)
			mnBattleAutopositionPlacedToken(i);
	}
}

// 8013992C
void mnBattleCreateTokenAutopositionRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnBattleAutopositionToken, 1, 1);
}

// 80139970
void mnBattleUpdateTokenShinePulseColor(GObj* unused)
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

// 801399E8
void mnBattleCreateTokenShinePulseRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnBattleUpdateTokenShinePulseColor, 1, 1);
}

// 80139A2C
void mnBattleSyncShadeAndCostume(s32 unused)
{
	s32 i;
	s32 shade;
	s32 costume_id;

	if (gMnBattleIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (gMnBattlePanels[i].char_id != nFTKindNull)
			{
				shade = mnBattleGetShade(i);
				gMnBattlePanels[i].shade = shade;
				ftParamInitModelTexturePartsAll(gMnBattlePanels[i].player, gMnBattlePanels[i].costume_id, shade);
			}
		}
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			if ((gMnBattlePanels[i].char_id != nFTKindNull)
				&& (mnBattleGetAdditionalSelectedCount(gMnBattlePanels[i].char_id) == 0))
			{
				costume_id = ftParamGetCostumeCommonID(gMnBattlePanels[i].char_id, 0);

				if ((costume_id != gMnBattlePanels[i].costume_id) && (gMnBattlePanels[i].unk_0x88 == 0))
				{
					shade = mnBattleGetShade(i);
					gMnBattlePanels[i].shade = shade;
					ftParamInitModelTexturePartsAll(gMnBattlePanels[i].player, costume_id, shade);
					gMnBattlePanels[i].costume_id = costume_id;
				}
			}
		}
	}
}

// 80139B4C
void mnBattleCreateSyncShadeAndCostumeRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1FU, 0x80000000U), mnBattleSyncShadeAndCostume, 1, 1);
}

// 80139B90
void mnBattleSyncWhiteCircleSizeAndDisplay(GObj* white_circle_gobj)
{
	s32 portrait_id = white_circle_gobj->user_data.s;
	f32 sizes[12] = {

		1.5f, 1.5f, 2.0f, 1.5f, 1.5f, 1.5f,
		1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f,
	};

	if ((gMnBattlePanels[portrait_id].unk_0x88 == 0) && (gMnBattlePanels[portrait_id].char_id != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[gMnBattlePanels[portrait_id].char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBattlePanels[portrait_id].char_id];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[gMnBattlePanels[portrait_id].char_id];
	}
	else
		white_circle_gobj->flags = 1;
}

// 80139C84
void mnBattleCreateWhiteCircles()
{
	GObj* white_circle_gobj;
	f32 y;
	s32 i, x;

	for (i = 0, x = -1250, y = -850.0F; i < 4; i++, x += 840)
	{
		white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

		gcSetupCommonDObjs(white_circle_gobj, GetAddressFromOffset(gMnBattleFilesArray[6], &FILE_016_WHITE_CIRCLE_OFFSET_2),
					  0);

		gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, 0x80000000U, -1);

		white_circle_gobj->user_data.s = i;

		gcAddMObjAll(white_circle_gobj, GetAddressFromOffset(gMnBattleFilesArray[6], &FILE_016_WHITE_CIRCLE_OFFSET_1));

		gcAddGObjProcess(white_circle_gobj, mnBattleSyncWhiteCircleSizeAndDisplay, 1, 1);

		gcPlayAnimAll(white_circle_gobj);

		DObjGetStruct(white_circle_gobj)->translate.vec.f.x = x;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.y = y;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
	}
}

// 80139DD8 - Unused?
void func_ovl26_80139DD8() {}

// 80139DE0
void mnBattleBlinkIfReadyToFight(GObj* gobj)
{
	if (mnBattleIsReadyToFight())
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

// 80139E60
void mnBattleCreateReadyToFightObjects()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x20U, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x26U, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mnBattleBlinkIfReadyToFight, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gFile011, &FILE_011_READY_TO_FIGHT_BG_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->env_color.r = 0;
	sobj->env_color.g = 0;
	sobj->env_color.b = 0;
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
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gFile011, &FILE_011_READY_TO_FIGHT_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->env_color.r = 0xFF;
	sobj->env_color.g = 0xCA;
	sobj->env_color.b = 0x13;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0x9D;
	sobj->pos.x = 50.0f;
	sobj->pos.y = 76.0f;

	// Press Start indicator
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x1CU, 0x80000000U, -1);
	gcAddGObjProcess(gobj, mnBattleBlinkIfReadyToFight, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gFile011, &FILE_011_PRESS_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gFile011, &FILE_011_START_IMAGE_OFFSET));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0f;
	sobj->pos.y = 219.0f;
}

// 8013A0DC
void mnSyncPanelDisplay(s32 port_id)
{
	s32 held_port_id;

	if (gMnBattleControllerOrderArray[port_id] != -1)
	{
		if (gMnBattlePanels[port_id].cursor == NULL)
		{
			mnBattleCreateCursor(port_id);

			if (gMnBattlePanels[port_id].player_type != mnPanelTypeCPU)
			{
				gMnBattlePanels[port_id].player_type = mnPanelTypeHuman;
				mnHandlePlayerTypeButtonPress(port_id);
				mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id,
									 gMnBattlePanels[port_id].player_type);
				mnSyncTokenDisplay(gMnBattlePanels[port_id].token, port_id);
				mnUpdateCursor(gMnBattlePanels[port_id].cursor, port_id);
				mnBattleSyncFighterDisplay(port_id);
				mnBattleSyncNameAndLogo(port_id);
			}
		}
	}
	else
	{
		if (gMnBattlePanels[port_id].cursor != NULL)
		{
			if ((gMnBattlePanels[port_id].held_port_id != -1)
				&& ((port_id != gMnBattlePanels[port_id].held_port_id) || (gMnBattlePanels[port_id].player_type == 1))
				&& (mnBattleSelectChar(gMnBattlePanels[port_id].cursor, port_id, gMnBattlePanels[port_id].held_port_id,
									   4)
					== 0))
			{
				held_port_id = gMnBattlePanels[port_id].held_port_id;
				gMnBattlePanels[held_port_id].char_id = mnSelectRandomFighter(gMnBattlePanels[held_port_id].token);
			}

			gcEjectGObj(gMnBattlePanels[port_id].cursor);
			gMnBattlePanels[port_id].cursor = NULL;

			if (gMnBattlePanels[port_id].player_type != 1)
			{
				gMnBattlePanels[port_id].player_type = 2;
				mnHandlePlayerTypeButtonPress(port_id);
				mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id,
									 gMnBattlePanels[port_id].player_type);
				mnSyncTokenDisplay(gMnBattlePanels[port_id].token, port_id);
				mnUpdateCursor(gMnBattlePanels[port_id].cursor, port_id);
				mnBattleSyncFighterDisplay(port_id);
				mnBattleSyncNameAndLogo(port_id);
			}
		}
	}
}

// 8013A2A4
void mnSyncControllerOrderArray()
{
	s32 port_id, order;

	for (port_id = 0; port_id < 4; port_id++)
	{
		gMnBattleControllerOrderArray[port_id] = -1;

		for (order = 0; gPlayerControllerPortStatuses[order] != -1; order++) // Array can go out of bounds!!! AND DOES!!!
		{
			if (port_id == gPlayerControllerPortStatuses[order])
				gMnBattleControllerOrderArray[port_id] = order;
		}
	}
}

// 8013A30C
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

// 8013A3AC
void mnSetTypeToNA(s32 port_id)
{
	gMnBattlePanels[port_id].player_type = mnPanelTypeNA;
	gMnBattlePanels[port_id].char_id = nFTKindNull;
	gMnBattlePanels[port_id].holder_port_id = 4;

	mnRecreateTypeButton(gMnBattlePanels[port_id].type_button, port_id, mnPanelTypeNA);
}

// 8013A40C
void mnSetUnselectedPanelsToNA()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattlePanels[i].unk_0x88 == FALSE)
			mnSetTypeToNA(i);
	}
}

// 8013A468 - Unused?
void func_ovl26_8013A468() { }

// 8013A470
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

// 8013A534
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

// 8013A5E4
sb32 mnBattleIsReadyToFight()
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

// 8013A664
void mnBattleSaveMatchInfo()
{
	s32 i;

	gTransferBattleState.time_limit = gMnBattleTimerValue;
	gTransferBattleState.stock_setting = gMnBattleStockValue;
	gTransferBattleState.is_team_battle = gMnBattleIsTeamBattle;
	gTransferBattleState.game_rules = gMnBattleRule;

	for (i = 0; i < 4; i++)
	{
		if (gMnBattleIsTeamBattle == FALSE)
			gTransferBattleState.players[i].player = i;
		else
		{
			gTransferBattleState.players[i].player = gMnBattlePanels[i].team;
			gTransferBattleState.players[i].team = gMnBattlePanels[i].team;
		}

		gTransferBattleState.players[i].ft_kind = gMnBattlePanels[i].char_id;
		gTransferBattleState.players[i].pl_kind = gMnBattlePanels[i].player_type;
		gTransferBattleState.players[i].costume = gMnBattlePanels[i].costume_id;
		gTransferBattleState.players[i].shade = gMnBattlePanels[i].shade;

		if (gTransferBattleState.players[i].pl_kind == nFTPlayerKindMan)
		{
			gTransferBattleState.players[i].player_color
				= (gTransferBattleState.is_team_battle == FALSE) ? i : D_ovl2_8012EF40[gTransferBattleState.players[i].team];
		}
		else if (gTransferBattleState.is_team_battle == FALSE)
			gTransferBattleState.players[i].player_color = 4;
		else
			gTransferBattleState.players[i].player_color = D_ovl2_8012EF40[gTransferBattleState.players[i].team];

		gTransferBattleState.players[i].tag_kind = (gTransferBattleState.players[i].pl_kind == nFTPlayerKindMan) ? i : 4;

		gTransferBattleState.players[i].is_single_stockicon = (gTransferBattleState.game_rules & 1) ? TRUE : FALSE;

		if (gTransferBattleState.players[i].pl_kind == nFTPlayerKindCom)
			gTransferBattleState.players[i].level = gMnBattlePanels[i].cpu_level;
		else
			gTransferBattleState.players[i].handicap = gMnBattlePanels[i].handicap;
	}

	gTransferBattleState.pl_count = gTransferBattleState.cp_count = 0;

	for (i = 0; i < 4; i++)
	{
		switch (gTransferBattleState.players[i].pl_kind)
		{
		case nFTPlayerKindMan: gTransferBattleState.pl_count++; break;
		case nFTPlayerKindCom: gTransferBattleState.cp_count++; break;
		}
	}
}

// 8013A8B8
void mnBattleDestroyCursorAndTokenProcesses()
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

// 8013A920
void mnBattleMain(s32 arg0)
{
	s32 max_stage_id;
	s32 i;
	u32 stage_id;

	gMnBattleFramesElapsed += 1;
	mnSyncControllerOrderArray();

	if (gMnBattleFramesElapsed == gMnBattleMaxFramesElapsed)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1;

		mnBattleSaveMatchInfo();
		leoInitUnit_atten();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		gMnBattleMaxFramesElapsed = gMnBattleFramesElapsed + 0x4650;

	if (gMnBattleIsStartTriggered)
	{
		gMnBattleStartDelayTimer--;

		if (gMnBattleStartDelayTimer == 0)
		{
			gSceneData.scene_previous = gSceneData.scene_current;

			if (gTransferBattleState.is_stage_select != 0)
				gSceneData.scene_current = 0x15;
			else
			{
				gSceneData.scene_current = 0x16;
				max_stage_id = (gSaveData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE) ? nGRKindInishie + 1 : nGRKindStarterEnd + 1;

				do
					stage_id = mtTrigGetRandomTimeUCharRange(max_stage_id);
				while (stage_id == gSceneData.gr_kind);

				gSceneData.gr_kind = stage_id;
			}

			mnBattleSaveMatchInfo();
			leoInitUnit_atten();
		}
	}
	else
	{
		if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (gMnBattleFramesElapsed >= 0x3D))
		{
			if (mnBattleIsReadyToFight())
			{
				func_800269C0_275C0(nSYAudioVoicePublicityCheer);
				mnSetUnselectedPanelsToNA();
				gMnBattleStartDelayTimer = 0x1E;
				gMnBattleIsStartTriggered = TRUE;
				mnBattleDestroyCursorAndTokenProcesses();
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

// 8013AAF8
s32 mnBattleGetNextTimerValue(s32 current_value)
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

// 8013ABDC
s32 mnBattleGetPrevTimerValue(s32 current_value)
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

// 8013AC7C
void mnBattleInitPort(s32 port_id)
{
	mnCharPanelBattle* panel_info = &gMnBattlePanels[port_id];
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
	panel_info->char_id = gTransferBattleState.players[port_id].ft_kind;

	if ((gTransferBattleState.players[port_id].pl_kind == nFTPlayerKindMan)
		&& (controller_order = gMnBattleControllerOrderArray[port_id], (controller_order == unplugged)))
	{
		panel_info->player_type = mnPanelTypeNA;
		panel_info->char_id = nFTKindNull;
	}
	else
	{
		panel_info->player_type = gTransferBattleState.players[port_id].pl_kind;
		controller_order = gMnBattleControllerOrderArray[port_id];
	}

	panel_info->cpu_level = gTransferBattleState.players[port_id].level;
	panel_info->handicap = gTransferBattleState.players[port_id].handicap;
	panel_info->team = gTransferBattleState.players[port_id].team;

	if ((panel_info->player_type == mnPanelTypeHuman) && (panel_info->char_id == nFTKindNull))
	{
		panel_info->holder_port_id = port_id;
		panel_info->held_port_id = port_id;
	}
	else
	{
		panel_info->holder_port_id = 4;
		panel_info->held_port_id = -1;
	}

	if (panel_info->char_id == nFTKindNull)
	{
		panel_info->unk_0x88 = FALSE;
		panel_info->is_selected = FALSE;
		panel_info->is_recalling = FALSE;
		panel_info->selected_animation_started = FALSE;
	}
	else
	{
		panel_info->unk_0x88 = TRUE;
		panel_info->is_selected = TRUE;
		panel_info->is_recalling = FALSE;
		panel_info->selected_animation_started = FALSE;
	}

	panel_info->costume_id = gTransferBattleState.players[port_id].costume;
	panel_info->shade = gTransferBattleState.players[port_id].shade;

	if ((controller_order != unplugged) && (panel_info->player_type == mnPanelTypeNA))
		panel_info->holder_port_id = port_id;
}

// 8013ADE0
void mnBattleResetPort(s32 port_id)
{
	u8 default_team[4] = {

		0, 0, 1, 1
	};

	gMnBattlePanels[port_id].team_color_button = NULL;
	gMnBattlePanels[port_id].handicap_cpu_level = NULL;
	gMnBattlePanels[port_id].arrows = NULL;
	gMnBattlePanels[port_id].handicap_cpu_level_value = NULL;
	gMnBattlePanels[port_id].white_square = NULL;
	gMnBattlePanels[port_id].player = NULL;
	gMnBattlePanels[port_id].p_sfx = NULL;
	gMnBattlePanels[port_id].sfx_id = 0;
	gMnBattlePanels[port_id].is_selected = FALSE;
	gMnBattlePanels[port_id].cpu_level = gTransferBattleState.players[port_id].level;
	gMnBattlePanels[port_id].handicap = gTransferBattleState.players[port_id].handicap;
	gMnBattlePanels[port_id].char_id = nFTKindNull;
	gMnBattlePanels[port_id].is_recalling = FALSE;
	gMnBattlePanels[port_id].team = default_team[port_id];

	if (gMnBattleControllerOrderArray[port_id] == -1)
	{
		gMnBattlePanels[port_id].player_type = mnPanelTypeNA;
		gMnBattlePanels[port_id].holder_port_id = 4;
		gMnBattlePanels[port_id].held_port_id = -1;
	}
	else
	{
		gMnBattlePanels[port_id].player_type = mnPanelTypeHuman;
		gMnBattlePanels[port_id].holder_port_id = port_id;
		gMnBattlePanels[port_id].held_port_id = port_id;
	}
}

// 8013AEC8
void mnBattleLoadMatchInfo()
{
	s32 i;

	gMnBattleFramesElapsed = 0;
	gMnBattleMaxFramesElapsed = gMnBattleFramesElapsed + 0x4650;
	gMnBattleTimerValue = gTransferBattleState.time_limit;
	gMnBattleStockValue = gTransferBattleState.stock_setting;
	gMnBattleIsStartTriggered = FALSE;
	gMnBattleIsTeamBattle = gTransferBattleState.is_team_battle;
	gMnBattleRule = gTransferBattleState.game_rules;
	D_ovl26_8013BDC8 = gTransferBattleState.unk_0x10;

	for (i = 0; i < 4; i++)
	{
		if (D_ovl26_8013BDC8 != 0)
		{
			mnBattleResetPort(i);
			gTransferBattleState.unk_0x10 = 0;
		}
		else
			mnBattleInitPort(i);

		gMnBattlePanels[i].min_frames_elapsed_until_recall = 0;
	};

	gMnBattleCharacterUnlockedMask = gSaveData.character_mask;
}

// 8013AFC0
void mnBattleInitPanel(s32 port_id)
{
	s32 char_id;

	if (gMnBattleControllerOrderArray[port_id] != -1)
		mnBattleCreateCursor(port_id);
	else
		gMnBattlePanels[port_id].cursor = NULL;

	mnBattleCreateToken(port_id);
	mnBattleCreatePanel(port_id);

	if (gMnBattlePanels[port_id].is_selected)
	{
		char_id = gMnBattlePanels[port_id].char_id;
		if (char_id != nFTKindNull)
			mnBattleSpawnFighter(gMnBattlePanels[port_id].player, port_id, char_id,
								 gMnBattlePanels[port_id].costume_id);
	}
}

// 8013B090
void mnBattleInitPanels()
{
	mnBattleInitPanel(0);
	mnBattleInitPanel(1);
	mnBattleInitPanel(2);
	mnBattleInitPanel(3);
}

// 8013B0C8
void mnBattleInitCSS()
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
	rldmSetup.status_buf = (lbFileNode*)&D_ovl26_8013C0E0;
	rldmSetup.status_buf_size = 0x78;
	rldmSetup.force_buf = (lbFileNode*)&D_ovl26_8013C0A8;
	rldmSetup.force_buf_size = 7;
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl26_8013B3A0, 7U, gMnBattleFilesArray,
						 gsMemoryAlloc(lbRelocGetAllocSize(D_ovl26_8013B3A0, 7U), 0x10U));

	gcMakeGObjSPAfter(0x400U, mnBattleMain, 0xFU, 0x80000000U);

	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);

	efAllocInitParticleBank();
	efManagerInitEffects();
	mnSyncControllerOrderArray();
	mnBattleLoadMatchInfo();
	ftManagerAllocFighter(1U, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < 4; i++)
		gMnBattlePanels[i].figatree_heap = gsMemoryAlloc(gFTManagerFigatreeHeapSize, 0x10U);

	mnBattleCreatePortraitViewport();
	mnBattleCreateCursorViewport();
	mnBattleCreateDroppedTokenViewport();
	mnBattleCreatePanelViewport();
	mnBattleCreatePanelDoorsViewport();
	mnBattleCreateTypeButtonViewport();
	mnBattleCreateFighterViewport();
	mnBattleCreateTeamButtonViewPort();
	mnBattleCreateHandicapCPULevelViewport();
	mnBattleCreatePortraitBackgroundViewport();
	mnBattleCreatePortraitWhiteBackgroundViewport();
	mnBattleCreateReadyToFightViewport();

	mnBattleCreateBackground();
	mnBattleCreatePortraits();
	mnBattleInitPanels();
	mnBattleDrawTitleAndBack();
	mnBattleCreateTokenAutopositionRoutine();
	mnBattleCreateTokenShinePulseRoutine();
	mnBattleCreateSyncShadeAndCostumeRoutine();
	mnBattleCreateWhiteCircles();
	mnBattleCreateReadyToFightObjects();

	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSceneData.scene_previous != 0x15)
		auPlaySong(0, nSYAudioBGMBattleSelect);

	if (gTransferBattleState.is_team_battle == FALSE)
		func_800269C0_275C0(nSYAudioVoiceAnnounceFreeForAll);
	else
		func_800269C0_275C0(nSYAudioVoiceAnnounceTeamBattle);
}

// 8013B980
syDisplaySetup D_ovl26_8013B980 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 8013B99C
scRuntimeInfo D_ovl26_8013B99C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay26ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x000055F0, 0x00000200,
	0x00000000, 0x00000000, 0x00003A98, 0x00020000, 0x00008000,
	mnBattleSetupDisplayList, update_contdata,
	0x00000000, 0x00000200, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnBattleInitCSS
};

// 8013B33C
void vs_css_entry()
{
	D_ovl26_8013B980.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl26_8013B980);
	D_ovl26_8013B99C.arena_size = (size_t) ((uintptr_t)&lOverlay26ArenaHi - (uintptr_t)&lOverlay26ArenaLo);
	func_800A2698(&D_ovl26_8013B99C);
}
