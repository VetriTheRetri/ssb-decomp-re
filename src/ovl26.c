#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <reloc_data.h>

extern intptr_t FILE_011_PICKER_STOCK_IMAGE_OFFSET;	  // file 0x011 image offset for Stock picker texture
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_PANEL_DOOR_L_IMAGE_OFFSET;
extern intptr_t FILE_011_PANEL_DOOR_R_IMAGE_OFFSET;
extern intptr_t FILE_011_PANEL_IMAGE_OFFSET;

extern void syRdpSetViewport(void*, f32, f32, f32, f32);
// Forward declarations
sb32 mnPlayersVSCheckCostumeUsed(s32 fkind, s32 player, s32 costume);
void mnPlayersVSUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status);
s32 mnPlayersVSUpdateCursorPlacementPriorities(s32 player, s32 held_puck_id); // doesn't actually return anything but required to match
s32 mnCheckCPUHandicapRightArrowPress(GObj* cursor_gobj, s32 player);
s32 mnCheckCPUHandicapLeftArrowPress(GObj* cursor_gobj, s32 player);
void mnPlayersVSUpdateCursorGrabPriorities(s32 player, s32 puck_id);
void mnPlayersVSUpdatePuck(GObj* puck_gobj, s32 puck_index);
void mnReplaceFighterNameWithHandicapCPULevel(s32 player);
void mnPlayersVSAnnounceFighter(s32 player, s32 panel_id);
void mnPlayersVSFuncLights(Gfx** display_list);
s32 mnPlayersVSGetNextTimerValue(s32 current_value);
s32 mnPlayersVSGetPrevTimerValue(s32 current_value);
void mnPlayersVSMakeHandicapLevel(s32 player);
void mnPlayersVSPauseSlotProcesses();
void mnMakeHandicapLevelValue(s32 player);
void mnPlayersVSMakePortraitFlash(s32 player);
s32 mnSelectRandomFighter(GObj* puck_gobj);
void mnPlayersVSUpdateNameAndEmblem(s32 player);
sb32 mnPlayersVSCheckReady();
void mnPlayersVSSetSceneData();
sb32 mnPlayersVSCheckHandicapAuto();
void mnPlayersVSFuncStart();
sb32 mnPlayersVSCheckHandicapOn();
sb32 mnPlayersVSCheckHandicap();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8013B3A0
u32 dMNPlayersVSFileIDs[/* */] =
{
	&lMNPlayersCommonFileID,
	&lMNCommonFileID,
	&lFTEmblemSpritesFileID,
	&lMNSelectCommonFileID,
	&lMNPlayersGameModesFileID,
	&lMNPlayersPortraitsFileID,
	&lMNPlayersSpotlightFileID
};

// 0x8013B3BC
Lights1 dMNPlayersVSLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x8013B3D8
Lights1 dMNPlayersVSLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0xEC, 0x00);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8013BA80 ? referenced from scene_manager
s32 sMNPlayersVSPad0x8013BA80;

// 0x8013BA88
MNPlayersSlotVS sMNPlayersVSSlots[GMCOMMON_PLAYERS_MAX];

// 0x8013BD78 - stock/time select
GObj *sMNPlayersVSGameRuleGObj;

// 0x8013BD7C
s32 sMNPlayersVSTimeValue;

// 0x8013BD80
s32 sMNPlayersVSStockValue;

// 0x8013BD84
s32 sMNPlayersVSPad0x8013BD84[2];

// 0x8013BD90 - -1 if no controller plugged in; due to a bug, random positive value if plugged in
s32 sMNPlayersVSControllerOrders[GMCOMMON_PLAYERS_MAX];

// 0x8013BDA0 when start is pressed when ready to fight, timer counts down to delay leaving CSS
s32 sMNPlayersVSStartProceedWait;

// 0x8013BDA4;
sb32 sMNPlayersVSIsStart;

// 0x8013BDA8
sb32 sMNPlayersVSIsTeamBattle;

// 0x8013BDAC
sb32 sMNPlayersVSGameRule;

// 0x8013BDB0 title gobj
GObj *sMNPlayersVSGameModeGObj;

// 0x8013BDB4
s32 sMNPlayersVSPuckGlowColor;

// 0x8013BDB8
sb32 sMNPlayersVSIsPuckGlowIncreasing;

// 0x8013BDBC
u16 sMNPlayersVSFighterMask;

// 0x8013BDC0
s32 sMNPlayersVSPad0x8013BDC0;

// 0x8013BDC4 looping timer that helps determine blink rate of Press Start (and Ready to Fight?)
s32 sMNPlayersVSReadyBlinkWait;

// 0x8013BDC8 - run mnPlayersVSInitPlayers if FALSE; otherwise run mnPlayersVSResetPlayers if TRUE
sb32 sMNPlayersVSIsResetPlayers;

// 0x8013BDCC frames elapsed on CSS
s32 sMNPlayersVSTotalTimeTics;

// 0x8013BDD0 frames to wait until exiting the CSS
s32 sMNPlayersVSReturnTic;

// 0x8013BDD4
s32 sMNPlayersVSPad0x8013BDD4[180];

// 0x8013C0A8
LBFileNode sMNPlayersVSForceStatusBuffer[7];

// 0x8013C0E0
LBFileNode sMNPlayersVSStatusBuffer[120];

// 0x8013C4A0
void *sMNPlayersVSFiles[ARRAY_COUNT(dMNPlayersVSFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B20
void mnPlayersVSFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B78
s32 mnPlayersVSGetShade(s32 player)
{
	sb32 is_shade_used[GMCOMMON_PLAYERS_MAX];
	s32 i;

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		return 0;
	}
	for (i = 0; i < ARRAY_COUNT(is_shade_used); i++)
	{
		is_shade_used[i] = FALSE;
	}
	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
		{
			if (player != i)
			{
				if ((sMNPlayersVSSlots[player].fkind == sMNPlayersVSSlots[i].fkind) && (sMNPlayersVSSlots[player].team == sMNPlayersVSSlots[i].team))
				{
					is_shade_used[sMNPlayersVSSlots[i].shade] = TRUE;
				}
			}
		}
		for (i = 0; i < ARRAY_COUNT(is_shade_used); i++)
		{
			if (is_shade_used[i] == FALSE)
			{
				return i;
			}
		}
	}
	// WARNING: Undefined behavior. If sMNPlayersVSIsTeamBattle is FALSE, returned value is indeterminate.
#ifdef AVOID_UB
	else return 0;
#endif
}

// 0x80131C74
void mnPlayersVSSelectFighterPuck(s32 player, s32 select_button)
{
	s32 held_player = sMNPlayersVSSlots[player].held_player, costume;

	if (select_button != nMNPlayersSelectButtonA)
	{
		costume = ftParamGetCostumeCommonID(sMNPlayersVSSlots[held_player].fkind, select_button);

		if (mnPlayersVSCheckCostumeUsed(sMNPlayersVSSlots[held_player].fkind, held_player, costume))
		{
			func_800269C0_275C0(nSYAudioFGMMenuDenied);
			return;
		}
		sMNPlayersVSSlots[held_player].shade = mnPlayersVSGetShade(held_player);
		sMNPlayersVSSlots[held_player].costume = costume;
		ftParamInitAllParts(sMNPlayersVSSlots[held_player].player, costume, sMNPlayersVSSlots[held_player].shade);
	}
	sMNPlayersVSSlots[held_player].is_selected = TRUE;

	mnPlayersVSUpdateCursorPlacementPriorities(player, held_player);

	sMNPlayersVSSlots[held_player].holder_player = GMCOMMON_PLAYERS_MAX;
	sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusHover;

	mnPlayersVSUpdateCursor(sMNPlayersVSSlots[player].cursor, player, sMNPlayersVSSlots[player].cursor_status);

	sMNPlayersVSSlots[player].held_player = -1;
	sMNPlayersVSSlots[held_player].is_fighter_selected = TRUE;

	mnPlayersVSAnnounceFighter(player, held_player);

	if ((mnPlayersVSCheckHandicap() != FALSE) || (sMNPlayersVSSlots[held_player].pkind == nFTPlayerKindCom))
	{
		mnReplaceFighterNameWithHandicapCPULevel(held_player);
	}
	mnPlayersVSMakePortraitFlash(held_player);
}

// 0x80131DC4
f32 mnPlayersVSGetNextPortraitX(s32 portrait, f32 current_pos_x)
{
	f32 portrait_pos_x[/* */] =
	{
		25.0F, 70.0F, 115.0F, 160.0F, 205.0F, 250.0F,
		25.0F, 70.0F, 115.0F, 160.0F, 205.0F, 250.0F
	};

	f32	portrait_vel[/* */] =
	{
		1.9F, 3.9F, 7.8F, -7.8F, -3.8F, -1.8F,
		1.8F, 3.8F, 7.8F, -7.8F, -3.8F, -1.8F
	};

	if (current_pos_x == portrait_pos_x[portrait])
	{
		return -1.0F;
	}
	else if (portrait_pos_x[portrait] < current_pos_x)
	{
		return ((current_pos_x + portrait_vel[portrait]) <= portrait_pos_x[portrait]) ?
		portrait_pos_x[portrait] :
		current_pos_x + portrait_vel[portrait];
	}
	else return ((current_pos_x + portrait_vel[portrait]) >= portrait_pos_x[portrait]) ?
	portrait_pos_x[portrait] :
	current_pos_x + portrait_vel[portrait];
}

// 0x80131ED8
sb32 mnPlayersVSCheckFighterCrossed(s32 fkind)
{
	return FALSE;
}

// 0x80131EE4
void mnPlayersVSPortraitProcUpdate(GObj *gobj)
{
	f32 new_pos_x;
	SObj *sobj = SObjGetStruct(gobj);

	new_pos_x =	mnPlayersVSGetNextPortraitX(gobj->user_data.s, sobj->pos.x);

	if (new_pos_x != -1.0F)
	{
		sobj->pos.x = new_pos_x;

		if (sobj->next != NULL)
		{
			sobj->next->pos.x = SObjGetStruct(gobj)->pos.x;
		}
	}
}

// 0x80131F54
void mnPlayersVSSetPortraitWallpaperPosition(SObj *sobj, s32 portrait)
{
	Vec2f pos[/* */] =
	{
		{ -35.0F, 36.0F }, { -35.0F, 36.0F },
		{ -35.0F, 36.0F }, { 310.0F, 36.0F },
		{ 310.0F, 36.0F }, { 310.0F, 36.0F },
		{ -35.0F, 79.0F }, { -35.0F, 79.0F },
		{ -35.0F, 79.0F }, { 310.0F, 79.0F },
		{ 310.0F, 79.0F }, { 310.0F, 79.0F }
	};

	sobj->pos.x = pos[portrait].x;
	sobj->pos.y = pos[portrait].y;
}

// 0x80131FB0
void mnPlayersVSPortraitAddCross(GObj *gobj, s32 portrait)
{
	SObj *sobj = SObjGetStruct(gobj);
	f32 x = sobj->pos.x;
	f32 y = sobj->pos.y;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], &lMNPlayersPortraitsCrossSprite));

	sobj->pos.x = x + 4.0F;
	sobj->pos.y = y + 12.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
}

// 0x80132044
sb32 mnPlayersVSCheckFighterLocked(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindNess:
		return (sMNPlayersVSFighterMask & (1 << nFTKindNess)) ? FALSE : TRUE;

	case nFTKindPurin:
		return (sMNPlayersVSFighterMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

	case nFTKindCaptain:
		return (sMNPlayersVSFighterMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

	case nFTKindLuigi:
		return (sMNPlayersVSFighterMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;

	default:
		return FALSE;
	}
}

// 0x8013B4B0
s32 dMNPlayersVSUnknown0x8013B4B0[/* */] =
{
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

// 0x80132110 - Unused?
void func_ovl26_80132110(void)
{
	return;
}

// 0x80132118
s32 mnPlayersVSGetFighterKind(s32 portrait)
{
	s32 fkinds[/* */] =
	{
		nFTKindLuigi, nFTKindMario, nFTKindDonkey, nFTKindLink, nFTKindSamus,   nFTKindCaptain,
		nFTKindNess,  nFTKindYoshi, nFTKindKirby,  nFTKindFox,  nFTKindPikachu, nFTKindPurin
	};

	return fkinds[portrait];
}

// 0x80132168
s32 mnPlayersVSGetPortrait(s32 fkind)
{
	s32 portraits[/* */] =
	{
		1, 9, 2, 4, 0, 3,
		7, 5, 8, 10, 11, 6
	};

	return portraits[fkind];
}

// 0x801321B8
void mnPlayersVSPortraitProcDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(gobj);
}

// 0x80132278
void mnPlayersVSMakePortraitShadow(s32 portrait)
{
	GObj *gobj;
	SObj *sobj;
	intptr_t offsets[/* */] =
	{
		0x0, 									0x0,
		0x0, 									0x0,
		&lMNPlayersPortraitsLuigiShadowSprite, 	0x0,
		0x0, 									&lMNPlayersPortraitsCaptainShadowSprite,
		0x0, 									0x0,
		&lMNPlayersPortraitsPurinShadowSprite, 	&lMNPlayersPortraitsNessShadowSprite
	};

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayersVSPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], &lMNPlayersPortraitsWallpaperSprite));
	sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
	sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;

	mnPlayersVSSetPortraitWallpaperPosition(sobj, portrait);
	gobj->user_data.s = portrait;

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnPlayersVSPortraitProcDisplay, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayersVSPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], offsets[mnPlayersVSGetFighterKind(portrait)]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	gobj->user_data.s = portrait;
	mnPlayersVSSetPortraitWallpaperPosition(sobj, portrait);

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayersVSPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], &lMNPlayersPortraitsQuestionSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x5B;
	sobj->envcolor.g = 0x41;
	sobj->envcolor.b = 0x33;
	sobj->sprite.red = 0xC4;
	sobj->sprite.green = 0xB9;
	sobj->sprite.blue = 0xA9;

	gobj->user_data.s = portrait;
	mnPlayersVSSetPortraitWallpaperPosition(sobj, portrait);
}

// 0x80132520
void mnPlayersVSMakePortrait(s32 portrait)
{
	GObj *portrait_gobj, *wallpaper_gobj;
	SObj *sobj;
	intptr_t offsets[/* */] =
	{
		&lMNPlayersPortraitsMarioSprite,	&lMNPlayersPortraitsFoxSprite,
		&lMNPlayersPortraitsDonkeySprite,	&lMNPlayersPortraitsSamusSprite,
		&lMNPlayersPortraitsLuigiSprite,	&lMNPlayersPortraitsLinkSprite,
		&lMNPlayersPortraitsYoshiSprite,	&lMNPlayersPortraitsCaptainSprite,
		&lMNPlayersPortraitsKirbySprite,	&lMNPlayersPortraitsPikachuSprite,
		&lMNPlayersPortraitsPurinSprite,	&lMNPlayersPortraitsNessSprite
	};

	if (mnPlayersVSCheckFighterLocked(mnPlayersVSGetFighterKind(portrait)) != FALSE)
	{
		mnPlayersVSMakePortraitShadow(portrait);
	}
	else
	{
		wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 29, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 36, GOBJ_PRIORITY_DEFAULT, ~0);
		wallpaper_gobj->user_data.s = portrait;
		gcAddGObjProcess(wallpaper_gobj, mnPlayersVSPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], &lMNPlayersPortraitsWallpaperSprite));

		mnPlayersVSSetPortraitWallpaperPosition(sobj, portrait);

		portrait_gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mnPlayersVSPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], offsets[mnPlayersVSGetFighterKind(portrait)]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		portrait_gobj->user_data.s = portrait;

		if (mnPlayersVSCheckFighterCrossed(mnPlayersVSGetFighterKind(portrait)) != FALSE)
		{
			mnPlayersVSPortraitAddCross(portrait_gobj, portrait);
		}
		mnPlayersVSSetPortraitWallpaperPosition(sobj, portrait);
	}
}

// 0x801326DC
void mnPlayersVSMakePortraitAll(void)
{
	s32 i;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		mnPlayersVSMakePortrait(i);
	}
}

// 0x8013271C
void mnPlayersVSMakeTeamSelect(s32 team, s32 player)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonTeamRedSprite,
		&lMNPlayersCommonTeamGreenSprite,
		&lMNPlayersCommonTeamBlueSprite
	};

	gobj = sMNPlayersVSSlots[player].team_color_button = gcMakeGObjSPAfter(0, NULL, 27, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 34, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], offsets[team]));
	sobj->pos.x = (player * 69) + 34;
	sobj->pos.y = 131.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80132824
void mnPlayersVSDestroyTeamSelect(s32 player)
{
	if (sMNPlayersVSSlots[player].team_color_button != NULL)
	{
		gcEjectGObj(sMNPlayersVSSlots[player].team_color_button);
		sMNPlayersVSSlots[player].team_color_button = NULL;
	}
}

// 0x80132878
void mnPlayersVSUpdateTeamSelect(s32 team, s32 player)
{
	mnPlayersVSDestroyTeamSelect(player);
	mnPlayersVSMakeTeamSelect(team, player);
}

// 0x801328AC
void mnPlayersVSDestroyTeamSelectAll(void)
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(sMNPlayersVSSlots); player++)
	{
		if (sMNPlayersVSSlots[player].team_color_button != NULL)
		{
			gcEjectGObj(sMNPlayersVSSlots[player].team_color_button);
			sMNPlayersVSSlots[player].team_color_button = NULL;
		}
	}
}

// 0x80132904
void mnPlayersVSMakeTeamSelectAll(void)
{
	s32 player;

	mnPlayersVSDestroyTeamSelectAll();

	for (player = 0; player < ARRAY_COUNT(sMNPlayersVSSlots); player++)
	{
		mnPlayersVSMakeTeamSelect(sMNPlayersVSSlots[player].team, player);
	}
}

// 0x8013295C
void mnPlayersVSUpdatePlayerKindSelect(GObj *gobj, s32 player, s32 pkind)
{
	SObj *sobj;
	f32 x = (player * 69) + 64, y = 131.0F;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonPlayerKindManSprite,
		&lMNPlayersCommonPlayerKindComSprite,
		&lMNPlayersCommonPlayerKindNotSprite
	};

	gcRemoveSObjAll(gobj);
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], offsets[pkind]));
	sobj->pos.x = x;
	sobj->pos.y = y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80132A14
void mnPlayersVSMakeNameAndEmblem(GObj *gobj, s32 player, s32 fkind)
{
	SObj *sobj;
	Vec2f pos[/* */] =
	{
		{ 21.0F, 21.0F }, {  7.0F, 25.0F },
		{  6.0F, 24.0F }, { 22.0F, 21.0F },
		{ 21.0F, 21.0F }, { 21.0F, 26.0F },
		{ 27.0F, 21.0F }, {  3.0F, 24.0F },
		{ 23.0F, 20.0F }, { 23.0F, 21.0F },
		{ 23.0F, 21.0F }, { 23.0F, 21.0F }
	};
	intptr_t emblem_offsets[/* */] =
	{
		&lFTEmblemSpritesMarioSprite,		&lFTEmblemSpritesFoxSprite,
		&lFTEmblemSpritesDonkeySprite, 		&lFTEmblemSpritesMetroidSprite,
		&lFTEmblemSpritesMarioSprite,		&lFTEmblemSpritesZeldaSprite,
		&lFTEmblemSpritesYoshiSprite,		&lFTEmblemSpritesFZeroSprite,
		&lFTEmblemSpritesKirbySprite, 		&lFTEmblemSpritesPMonstersSprite,
		&lFTEmblemSpritesPMonstersSprite,	&lFTEmblemSpritesMotherSprite
	};
	intptr_t name_offsets[/* */] =
	{
		&lMNPlayersCommonMarioNameSprite,	&lMNPlayersCommonFoxNameSprite,
		&lMNPlayersCommonDonkeyNameSprite,	&lMNPlayersCommonSamusNameSprite,
		&lMNPlayersCommonLuigiNameSprite,	&lMNPlayersCommonLinkNameSprite,
		&lMNPlayersCommonYoshiNameSprite,	&lMNPlayersCommonCaptainNameSprite,
		&lMNPlayersCommonKirbyNameSprite,	&lMNPlayersCommonPikachuNameSprite,
		&lMNPlayersCommonPurinNameSprite,	&lMNPlayersCommonNessNameSprite
	};

	if (fkind != nFTKindNull)
	{
		gcRemoveSObjAll(gobj);

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[2], emblem_offsets[fkind]));
		sobj->pos.x = (player * 69) + 24;
		sobj->pos.y = 143.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindMan)
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
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], name_offsets[fkind]));
		sobj->pos.x = (player * 69) + 22;
		sobj->pos.y = 201.0F;
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
	}
}

// 0x80132BF4
void mnPlayersVSUpdateShutters(s32 player)
{
	// Left door
	SObjGetStruct(sMNPlayersVSSlots[player].panel_doors)->pos.x = ((player * 69) - 19) + sMNPlayersVSSlots[player].door_offset;

	// Right door
	SObjGetStruct(sMNPlayersVSSlots[player].panel_doors)->next->pos.x = ((player * 69) + 88) - sMNPlayersVSSlots[player].door_offset;
}

// 0x80132C6C
void mnPlayersVSShuttersProcUpdate(GObj *gobj)
{
	s32 player = gobj->user_data.s;
	s32 delta = 2, max = 41, min = 0;

	if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindNot)
	{
		if (sMNPlayersVSSlots[player].door_offset == delta)
		{
			// left over check
		}
		if (sMNPlayersVSSlots[player].door_offset < max)
		{
			sMNPlayersVSSlots[player].door_offset += delta;

			if (sMNPlayersVSSlots[player].door_offset >= max)
			{
				sMNPlayersVSSlots[player].door_offset = max;
				func_800269C0_275C0(nSYAudioFGMPlayerSlotClose);
			}
			mnPlayersVSUpdateShutters(player);
		}
	}
	else
	{
		if (sMNPlayersVSSlots[player].door_offset == min)
		{
			// left over check
		}
		if (sMNPlayersVSSlots[player].door_offset > min)
		{
			sMNPlayersVSSlots[player].door_offset -= delta;

			if (sMNPlayersVSSlots[player].door_offset < min)
			{
				sMNPlayersVSSlots[player].door_offset = min;
			}
			mnPlayersVSUpdateShutters(player);
		}
	}
}

// 0x80132D1C
void mnPlayersVSMakePortraitCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			70,
			COBJ_MASK_DLLINK(27),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132DBC
void mnPlayersVSMakePortraitWallpaperCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			75,
			COBJ_MASK_DLLINK(36),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132E5C
void mnPlayersVSMakePortraitFlashCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			73,
			COBJ_MASK_DLLINK(37),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132EFC
void mnPlayersVSMakeGateCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			40,
			COBJ_MASK_DLLINK(29),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132F9C
void mnPlayersVSMakePlayerKindSelectCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			35,
			COBJ_MASK_DLLINK(30),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013303C
void mnPlayersVSMakePlayerKindCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			50,
			COBJ_MASK_DLLINK(28),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801330DC
void mnPlayersVSMakeTeamSelectCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			45,
			COBJ_MASK_DLLINK(34),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013317C
void mnPlayersVSShutter1PProcDisplay(GObj *gobj)
{
	lbCommonSetSpriteScissor(22, 88, 126, 217);
	lbCommonDrawSObjAttr(gobj);
	lbCommonSetSpriteScissor(10, 310, 10, 230);
}

// 0x801331C8
void mnPlayersVSShutter2PProcDisplay(GObj *gobj)
{
	lbCommonSetSpriteScissor(91, 157, 126, 217);
	lbCommonDrawSObjAttr(gobj);
	lbCommonSetSpriteScissor(10, 310, 10, 230);
}

// 0x80133214
void mnPlayersVSShutter3PProcDisplay(GObj *gobj)
{
	lbCommonSetSpriteScissor(160, 226, 126, 217);
	lbCommonDrawSObjAttr(gobj);
	lbCommonSetSpriteScissor(10, 310, 10, 230);
}

// 0x80133260
void mnPlayersVSShutter4PProcDisplay(GObj *gobj)
{
	lbCommonSetSpriteScissor(229, 295, 126, 217);
	lbCommonDrawSObjAttr(gobj);
	lbCommonSetSpriteScissor(10, 310, 10, 230);
}

// 0x801332AC
void mnPlayersVSSetGateLUT(GObj *gobj, s32 player, s32 pkind)
{
	SObj *sobj;
	intptr_t man_offsets[/* */] =
	{
		&lMNPlayersCommonGateMan1PLUT, &lMNPlayersCommonGateMan2PLUT,
		&lMNPlayersCommonGateMan3PLUT, &lMNPlayersCommonGateMan4PLUT
	};
	intptr_t com_offsets[/* */] =
	{
		&lMNPlayersCommonGateCom1PLUT, &lMNPlayersCommonGateCom2PLUT,
		&lMNPlayersCommonGateCom3PLUT, &lMNPlayersCommonGateCom4PLUT
	};
	SYColorRGB colors[/* */] =
	{
		{ 0xFF, 0x7E, 0x7E },
		{ 0xB3, 0xB3, 0xFF },
		{ 0xEB, 0xDB, 0x7A },
		{ 0x96, 0xCC, 0x96 }
	};

	sobj = SObjGetStruct(gobj);

	if (pkind == nFTPlayerKindMan)
	{
		SObjGetSprite(sobj)->LUT = lbRelocGetFileData(int*, sMNPlayersVSFiles[0], man_offsets[player]);
	}
	else SObjGetSprite(sobj)->LUT = lbRelocGetFileData(int*, sMNPlayersVSFiles[0], com_offsets[player]);
}

// 0x80133378
void mnPlayersVSMakePlayerKindSelect(s32 player)
{
	GObj *gobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonPlayerKindManSprite,
		&lMNPlayersCommonPlayerKindComSprite,
		&lMNPlayersCommonPlayerKindNotSprite
	};

	sMNPlayersVSSlots[player].type_button = gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		24,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		30,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[0],
			offsets[sMNPlayersVSSlots[player].pkind]
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = (player * 69) + 64;
	SObjGetStruct(gobj)->pos.y = 131.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801334A8
void mnPlayersVSMakePlayerKind(s32 player)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PSprite, &lMNPlayersCommonGate2PSprite,
		&lMNPlayersCommonGate3PSprite, &lMNPlayersCommonGate4PSprite
	};
	f32 pos_x[/* */] = { 8.0F, 5.0F, 5.0F, 5.0F };

	sMNPlayersVSSlots[player].type = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonGateCPSprite));
		sobj->pos.x = ((player * 69) + 26);
	}
	else
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], offsets[player]));
		sobj->pos.x = pos_x[player] + ((player * 69) + 22);
	}
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
	sobj->pos.y = 131.0F;
}

// 0x8013365C
void mnPlayersVSMakeGate(s32 player)
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
								   lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17RedCardSpriteOffset), 1, NULL, 1);
	sMNPlayersVSSlots[player].panel = temp_gobj;
	start_x = player * 0x45;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x + 0x16);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (sMNPlayersVSIsTeamBattle == FALSE)
		mnPlayersVSSetGateLUT(temp_gobj, palette_ids[player], sMNPlayersVSSlots[player].pkind);
	else
	{
		// TODO: team enum - 2 is GREEN here
		mnPlayersVSSetGateLUT(temp_gobj, ((sMNPlayersVSSlots[player].team == nSCBattleTeamIDGreen) ? 3 : sMNPlayersVSSlots[player].team),
					  sMNPlayersVSSlots[player].pkind);
	}

	mnPlayersVSMakePlayerKind(player);

	// create panel doors
	temp_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x17, 0x80000000, panelRenderRoutines[player], 0x1D, GOBJ_PRIORITY_DEFAULT, ~0,
								   lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17SmashLogoCardLeftSpriteOffset), 1,
								   mnPlayersVSShuttersProcUpdate, 1);
	temp_gobj->user_data.p = player;
	SObjGetStruct(temp_gobj)->pos.x = (f32)(start_x - 0x13);
	SObjGetStruct(temp_gobj)->pos.y = 126.0F;
	SObjGetStruct(temp_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(temp_gobj)->sprite.attr |= SP_TRANSPARENT;
	sMNPlayersVSSlots[player].panel_doors = temp_gobj;

	right_door_sobj
		= lbCommonMakeSObjForGObj(temp_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17SmashLogoCardRightSpriteOffset));
	right_door_sobj->pos.x = (f32)(start_x + 0x58);
	right_door_sobj->pos.y = 126.0F;
	right_door_sobj->sprite.attr &= ~SP_FASTCOPY;
	right_door_sobj->sprite.attr |= SP_TRANSPARENT;
	sMNPlayersVSSlots[player].door_offset = 0x29;

	mnPlayersVSUpdateShutters(player);
	mnPlayersVSMakePlayerKindSelect(player);

	// name/logo
	temp_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	sMNPlayersVSSlots[player].name_emblem_gobj = temp_gobj;
	gcAddGObjDisplay(temp_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	mnPlayersVSUpdateNameAndEmblem(player);

	if ((mnPlayersVSCheckHandicap()) || (sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom))
		mnReplaceFighterNameWithHandicapCPULevel(player);
	if (sMNPlayersVSIsTeamBattle == TRUE)
		mnPlayersVSMakeTeamSelect(sMNPlayersVSSlots[player].team, player);
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
void mnSetTextureColors(SObj* sobj, u32 *colors)
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
void mnCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, u32 *colors, s32 maxDigits, sb32 pad)
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

	number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], number_offsets[num % 10]));
	mnSetTextureColors(number_sobj, colors);
	left_x -= number_sobj->sprite.width;
	number_sobj->pos.x = left_x;
	number_sobj->pos.y = y;

	for (place = 1, numDigits = (pad) ? maxDigits : mnGetNumberOfDigits(num, maxDigits); place < numDigits;
		 place++, numDigits = (pad) ? maxDigits : mnGetNumberOfDigits(num, maxDigits))
	{
		digit = (mnPow(10, place) != 0) ? num / mnPow(10, place) : 0;

		number_sobj = lbCommonMakeSObjForGObj(number_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], number_offsets[digit % 10]));
		mnSetTextureColors(number_sobj, colors);
		left_x -= (f32)number_sobj->sprite.width;
		number_sobj->pos.x = left_x;
		number_sobj->pos.y = y;
	}
}

// 0x80133E28
void mnDrawTimerValue(s32 num)
{
	u32 colors[/* */] = { 0x32, 0x1C, 0x0E, 0xFF, 0xFF, 0xFF };
	SObj* infinity_sobj;

	while (SObjGetStruct(sMNPlayersVSGameRuleGObj)->next != NULL)
		gcEjectSObj(SObjGetStruct(sMNPlayersVSGameRuleGObj)->next);

	if (num == 100)
	{
		infinity_sobj = lbCommonMakeSObjForGObj(sMNPlayersVSGameRuleGObj,
											   lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &lMNPlayersCommonSymbolInfiniteSprite));
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
		mnCreateNumber(sMNPlayersVSGameRuleGObj, num, 208.0F, 23.0F, colors, 2, 0);
	else
		mnCreateNumber(sMNPlayersVSGameRuleGObj, num, 212.0F, 23.0F, colors, 2, 0);
}

// 0x80133FAC
void mnMakeTimeSelect(s32 num)
{
	GObj* picker_gobj;

	if (sMNPlayersVSGameRuleGObj != NULL)
		gcEjectGObj(sMNPlayersVSGameRuleGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
									 lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &lMNPlayersCommonGameRuleTimeSprite), 1, NULL, 1);
	sMNPlayersVSGameRuleGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawTimerValue(sMNPlayersVSTimeValue);
}

// 0x80134094
void mnDrawStockValue(s32 num)
{
	u32 colors[/* */] = { 0x32, 0x1C, 0x0E, 0xFF, 0xFF, 0xFF };

	while (SObjGetStruct(sMNPlayersVSGameRuleGObj)->next != NULL)
		gcEjectSObj(SObjGetStruct(sMNPlayersVSGameRuleGObj)->next);

	if (num < 10)
		mnCreateNumber(sMNPlayersVSGameRuleGObj, num, 210.0F, 23.0F, colors, 2, 0);
	else
		mnCreateNumber(sMNPlayersVSGameRuleGObj, num, 214.0F, 23.0F, colors, 2, 0);
}

// 0x80134198
void mnDrawStockPicker(s32 num)
{
	GObj* picker_gobj;

	if (sMNPlayersVSGameRuleGObj != NULL)
		gcEjectGObj(sMNPlayersVSGameRuleGObj);

	picker_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
									 lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17StockSelectorSpriteOffset), 1, NULL, 1);
	sMNPlayersVSGameRuleGObj = picker_gobj;

	SObjGetStruct(picker_gobj)->pos.x = 140.0F;
	SObjGetStruct(picker_gobj)->pos.y = 22.0F;
	SObjGetStruct(picker_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(picker_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnDrawStockValue(sMNPlayersVSStockValue + 1);
}

// 0x80134284
void mnPlayersVSMakeWallpaper()
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
		= lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[3], &relocFile21StoneBackgroundSpriteOffset));
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
void mnPlayersVSDrawTitleAndBack()
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
									lbRelocGetFileData(void*, sMNPlayersVSFiles[4], title_offsets[sMNPlayersVSIsTeamBattle]), 1, NULL, 1);
	SObjGetStruct(title_gobj)->pos.x = 27.0F;
	SObjGetStruct(title_gobj)->pos.y = 24.0F;
	SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(title_gobj)->sprite.red = title_colors[sMNPlayersVSIsTeamBattle].r;
	SObjGetStruct(title_gobj)->sprite.green = title_colors[sMNPlayersVSIsTeamBattle].g;
	SObjGetStruct(title_gobj)->sprite.blue = title_colors[sMNPlayersVSIsTeamBattle].b;
	sMNPlayersVSGameModeGObj = title_gobj;

	(sMNPlayersVSGameRule == SCBATTLE_GAMERULE_TIME) ? mnMakeTimeSelect(sMNPlayersVSTimeValue)
											 : mnDrawStockPicker(sMNPlayersVSStockValue);

	back_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0,
								   lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17BackButtonSpriteOffset), 1, NULL, 1);
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
s32 mnPlayersVSGetFighterKindCount(s32 fkind)
{
	s32 count = 0, i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if (fkind == sMNPlayersVSSlots[i].fkind)
			count += 1;
	}

	return (count != 0) ? count - 1 : count;
}

// 0x80134674
sb32 mnPlayersVSCheckCostumeUsed(s32 fkind, s32 player, s32 costume)
{
	s32 i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if ((player != i) && (fkind == sMNPlayersVSSlots[i].fkind) && (costume == sMNPlayersVSSlots[i].costume))
			return TRUE;
	}
	return FALSE;
}

// 0x8013473C
// Gets the first costume not in use by another port
s32 mnPlayersVSGetFreeCostumeRoyal(s32 fkind, s32 player)
{
	MNPlayersSlotVS* pslot;
	s32 i, j, k;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	for (i = 0; i < 4; i++)
	{
		if (i != player)
		{
			pslot = &sMNPlayersVSSlots[i];

			if (fkind == pslot->fkind)
			{
				for (j = 0; j < 4; j++)
				{
					if (ftParamGetCostumeCommonID(fkind, j) == pslot->costume)
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
s32 mnPlayersVSGetFreeCostume(s32 fkind, s32 player)
{
	if (sMNPlayersVSIsTeamBattle == FALSE)
		return ftParamGetCostumeCommonID(fkind, mnPlayersVSGetFreeCostumeRoyal(fkind, player));
	else if (sMNPlayersVSIsTeamBattle == TRUE)
		return ftParamGetCostumeTeamID(fkind, sMNPlayersVSSlots[player].team);
}

// 0x801348EC
s32 mnPlayersVSGetStatusSelected(s32 fkind)
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
void mnPlayersVSFighterProcUpdate(GObj* fighter_gobj)
{
	FTStruct* fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];

	if (pslot->is_fighter_selected == TRUE)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < (PI32 / 1800))
		{
			if (pslot->is_status_selected == FALSE)
			{
				scSubsysFighterSetStatus(pslot->player, mnPlayersVSGetStatusSelected(pslot->fkind));
				pslot->is_status_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += M_DTOR_F(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > M_DTOR_F(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;
				scSubsysFighterSetStatus(pslot->player, mnPlayersVSGetStatusSelected(pslot->fkind));
				pslot->is_status_selected = TRUE;
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
void mnPlayersVSMakeFighter(GObj* fighter_gobj, s32 player, s32 fkind, s32 costume)
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
		sMNPlayersVSSlots[player].costume = desc.costume = costume;
		desc.shade = sMNPlayersVSSlots[player].shade;
		desc.figatree_heap = sMNPlayersVSSlots[player].figatree_heap;
		desc.player = player;
		fighter_gobj = ftManagerMakeFighter(&desc);

		sMNPlayersVSSlots[player].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnPlayersVSFighterProcUpdate, 1, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = (player * 840) - 1250;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = initial_y_rotation;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];

		if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom)
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
	}
}

// 0x80134C64
void mnPlayersVSMakeFighterCamera()
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
void mnPlayersVSUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status)
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

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], cursor_offsets[cursor_status]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], type_offsets[player]));
	cursor_sobj->pos.x = SObjGetPrev(cursor_sobj)->pos.x + type_positions[cursor_status].x;
	cursor_sobj->pos.y = SObjGetPrev(cursor_sobj)->pos.y + type_positions[cursor_status].y;
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
sb32 mnCheckTimeArrowRightInRange(GObj* cursor_gobj)
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
s32 mnCheckTimeArrowLeftInRange(GObj* cursor_gobj)
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
void mnPlayersVSUpdatePanelsAndFighterCostumes()
{
	s32 i;
	s32 color_indexes[4] = {

		0, 1, 2, 3
	};

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		for (i = 0; i < 4; i++)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[i].panel, color_indexes[i], sMNPlayersVSSlots[i].pkind);
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[i].costume = ftParamGetCostumeCommonID(
					sMNPlayersVSSlots[i].fkind, mnPlayersVSGetFreeCostumeRoyal(sMNPlayersVSSlots[i].fkind, i));
				sMNPlayersVSSlots[i].shade = mnPlayersVSGetShade(i);
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, sMNPlayersVSSlots[i].costume, sMNPlayersVSSlots[i].shade);
			}
		}
	}
	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		for (i = 0; i < 4; i++)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[i].panel, sMNPlayersVSSlots[i].team == 2 ? 3 : sMNPlayersVSSlots[i].team,
						  sMNPlayersVSSlots[i].pkind);
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[i].costume
					= ftParamGetCostumeTeamID(sMNPlayersVSSlots[i].fkind, sMNPlayersVSSlots[i].team);
				sMNPlayersVSSlots[i].shade = mnPlayersVSGetShade(i);
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, sMNPlayersVSSlots[i].costume, sMNPlayersVSSlots[i].shade);
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

	title_gobj = sMNPlayersVSGameModeGObj;

	if (sMNPlayersVSIsTeamBattle == 1)
		sMNPlayersVSIsTeamBattle = 0;
	else
		sMNPlayersVSIsTeamBattle = 1;

	func_800266A0_272A0();
	func_800269C0_275C0(nSYAudioFGMMenuScroll2);

	if (sMNPlayersVSIsTeamBattle == FALSE)
		func_800269C0_275C0(nSYAudioVoiceAnnounceFreeForAll);
	else
		func_800269C0_275C0(nSYAudioVoiceAnnounceTeamBattle);

	gcRemoveSObjAll(title_gobj);

	title_sobj = lbCommonMakeSObjForGObj(title_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[4], offsets[sMNPlayersVSIsTeamBattle]));
	title_sobj->sprite.attr &= ~SP_FASTCOPY;
	title_sobj->sprite.attr |= SP_TRANSPARENT;
	title_sobj->pos.x = 27.0F;
	title_sobj->pos.y = 24.0F;
	title_sobj->sprite.red = colors[sMNPlayersVSIsTeamBattle].r;
	title_sobj->sprite.green = colors[sMNPlayersVSIsTeamBattle].g;
	title_sobj->sprite.blue = colors[sMNPlayersVSIsTeamBattle].b;

	if (sMNPlayersVSIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
				sMNPlayersVSSlots[i].shade = 4;
		}
	}

	mnPlayersVSUpdatePanelsAndFighterCostumes();

	if (sMNPlayersVSIsTeamBattle == 0)
		mnPlayersVSDestroyTeamSelectAll();
	else
		mnPlayersVSMakeTeamSelectAll();
}

// 0x80135554
s32 mnCheckTeamSelectPress(GObj* cursor_gobj, s32 player)
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
sb32 mnCheckAnyTeamSelectPress(GObj* cursor_gobj, s32 cursor_player)
{
	s32 player;
	s32 color_indexes[3] = {

		0, 1, 3
	};
	s32 unknown_unused[3] = {

		0x1FE, 0x1DB, 0x1EB
	};
	u32 shade;

	if (sMNPlayersVSIsTeamBattle != TRUE)
		return FALSE;

	for (player = 0; player < 4; player++)
	{
		if ((sMNPlayersVSSlots[player].pkind != 2) && (mnCheckTeamSelectPress(cursor_gobj, player) != 0))
		{
			sMNPlayersVSSlots[player].team = sMNPlayersVSSlots[player].team == 2 ? 0 : sMNPlayersVSSlots[player].team + 1;

			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel, color_indexes[sMNPlayersVSSlots[player].team],
						  sMNPlayersVSSlots[player].pkind);
			mnPlayersVSUpdateTeamSelect(sMNPlayersVSSlots[player].team, player);

			if (sMNPlayersVSSlots[player].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[player].costume
					= ftParamGetCostumeTeamID(sMNPlayersVSSlots[player].fkind, sMNPlayersVSSlots[player].team);

				sMNPlayersVSSlots[player].shade = shade = mnPlayersVSGetShade(player);
				ftParamInitAllParts(sMNPlayersVSSlots[player].player, sMNPlayersVSSlots[player].costume, shade);
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
		target = (sMNPlayersVSSlots[player].pkind == 0) ? &sMNPlayersVSSlots[player].handicap
															 : &sMNPlayersVSSlots[player].cpu_level;

		if (((sMNPlayersVSSlots[player].pkind == 1)
			 || ((mnPlayersVSCheckHandicapOn()) && (sMNPlayersVSSlots[player].pkind == 0)
				 && (player == cursor_player)))
			&& (sMNPlayersVSSlots[player].is_fighter_selected != 0))
		{
			if (mnCheckCPUHandicapRightArrowPress(cursor_gobj, player) != 0)
			{
				if ((s32)*target < 9)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*target += 1;
					mnMakeHandicapLevelValue(player);
				}
				return 1;
			}
			if (mnCheckCPUHandicapLeftArrowPress(cursor_gobj, player) != 0)
			{
				if ((s32)*target >= 2)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*target -= 1;
					mnMakeHandicapLevelValue(player);
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
sb32 mnPlayersVSCheckPuckInRange(GObj* cursor_gobj, s32 cursor_player, s32 player)
{
	f32 current_x, current_y, puck_x, puck_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* puck_sobj = SObjGetStruct(sMNPlayersVSSlots[player].puck);

	current_x = cursor_sobj->pos.x + 25.0F;
	puck_x = puck_sobj->pos.x;

	range_check = (puck_x <= current_x) && (current_x <= puck_x + 26.0F) ? TRUE : FALSE;

	if (range_check)
	{
		current_y = cursor_sobj->pos.y + 3.0F;
		puck_y = puck_sobj->pos.y;

		range_check = (puck_y <= current_y) && (current_y <= puck_y + 24.0F) ? TRUE : FALSE;
		if (range_check)
			return TRUE;
	}
	return FALSE;
}

// 0x80135C84
void mnHandlePlayerTypeButtonPress(s32 player)
{
	GObj* cursor_gobj;

	switch (sMNPlayersVSSlots[player].pkind)
	{
	case nFTPlayerKindMan:
		if (sMNPlayersVSSlots[player].held_player != -1)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].holder_player = 4;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_selected = TRUE;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_fighter_selected = TRUE;

			mnPlayersVSUpdateCursorPlacementPriorities(player, sMNPlayersVSSlots[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(sMNPlayersVSSlots[player].held_player);
			mnPlayersVSMakePortraitFlash(sMNPlayersVSSlots[player].held_player);
		}

		sMNPlayersVSSlots[player].is_selected = FALSE;
		sMNPlayersVSSlots[player].fkind = nFTKindNull;
		sMNPlayersVSSlots[player].is_fighter_selected = FALSE;
		sMNPlayersVSSlots[player].holder_player = player;
		sMNPlayersVSSlots[player].held_player = player;

		mnPlayersVSUpdateCursorGrabPriorities(player, player);

		sMNPlayersVSSlots[player].is_cursor_adjusting = FALSE;

		if (sMNPlayersVSSlots[player].type != NULL)
		{
			gcEjectGObj(sMNPlayersVSSlots[player].type);
			mnPlayersVSMakePlayerKind(player);
		}

		if (sMNPlayersVSIsTeamBattle == 0)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel, player, sMNPlayersVSSlots[player].pkind);
			return;
		}

		mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel,
					  sMNPlayersVSSlots[player].team == 2 ? 3 : sMNPlayersVSSlots[player].team,
					  sMNPlayersVSSlots[player].pkind);
		return;
	case nFTPlayerKindCom:
		if (sMNPlayersVSSlots[player].held_player != -1)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].holder_player = 4;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_selected = TRUE;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_fighter_selected = TRUE;

			mnPlayersVSUpdateCursorPlacementPriorities(player, sMNPlayersVSSlots[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(sMNPlayersVSSlots[player].held_player);
			mnPlayersVSMakePortraitFlash(sMNPlayersVSSlots[player].held_player);
		}

		sMNPlayersVSSlots[player].is_selected = TRUE;
		sMNPlayersVSSlots[player].holder_player = 4;
		sMNPlayersVSSlots[player].held_player = -1;

		mnPlayersVSUpdateCursorPlacementPriorities(4U, player);

		sMNPlayersVSSlots[player].is_fighter_selected = TRUE;

		if (sMNPlayersVSSlots[player].fkind == nFTKindNull)
			sMNPlayersVSSlots[player].fkind = mnSelectRandomFighter(sMNPlayersVSSlots[player].puck);

		sMNPlayersVSSlots[player].is_cursor_adjusting = FALSE;
		if (sMNPlayersVSSlots[player].type != NULL)
		{
			gcEjectGObj(sMNPlayersVSSlots[player].type);
			mnPlayersVSMakePlayerKind(player);
		}

		if (sMNPlayersVSIsTeamBattle == 0)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel, player, sMNPlayersVSSlots[player].pkind);
			return;
		}

		mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel,
					  sMNPlayersVSSlots[player].team == 2 ? 3 : sMNPlayersVSSlots[player].team,
					  sMNPlayersVSSlots[player].pkind);
		return;
	case nFTPlayerKindNot:
		if (sMNPlayersVSSlots[player].holder_player != 4)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].held_player = -1;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].is_selected = TRUE;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor_status = nMNPlayersCursorStatusHover;

			cursor_gobj = sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor;
			if (cursor_gobj != NULL)
			{
				mnPlayersVSUpdateCursor(cursor_gobj, sMNPlayersVSSlots[player].holder_player,
									 sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor_status);
			}
		}

		if (sMNPlayersVSSlots[player].held_player != -1)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].holder_player = 4;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_selected = TRUE;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_fighter_selected = TRUE;
			mnPlayersVSUpdateCursorPlacementPriorities(player, sMNPlayersVSSlots[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(sMNPlayersVSSlots[player].held_player);
			mnPlayersVSMakePortraitFlash(sMNPlayersVSSlots[player].held_player);
		}

		sMNPlayersVSSlots[player].is_selected = FALSE;
		sMNPlayersVSSlots[player].held_player = -1;
		sMNPlayersVSSlots[player].fkind = nFTKindNull;
		sMNPlayersVSSlots[player].is_fighter_selected = FALSE;
		sMNPlayersVSSlots[player].is_cursor_adjusting = FALSE;

		if (sMNPlayersVSControllerOrders[player] != -1)
			sMNPlayersVSSlots[player].holder_player = player;
		return;
	}
}

// 0x80136038
void mnSyncPuckDisplay(GObj* puck_gobj, s32 player)
{
	s32 puck_ids[4] = {

		0, 1, 2, 3
	};

	if ((sMNPlayersVSSlots[player].cursor_status == nMNPlayersCursorStatusPointer)
		&& (sMNPlayersVSSlots[player].is_selected == FALSE))
	{
		puck_gobj->flags = 1;
	}
	else
		puck_gobj->flags = 0;

	switch (sMNPlayersVSSlots[player].pkind)
	{
	case nFTPlayerKindMan:
		sMNPlayersVSSlots[player].is_selected = FALSE;
		mnPlayersVSUpdatePuck(puck_gobj, puck_ids[player]);
		break;
	case nFTPlayerKindCom:
		mnPlayersVSUpdatePuck(puck_gobj, 4);
		sMNPlayersVSSlots[player].is_selected = TRUE;
		break;
	case nFTPlayerKindNot:
		if (FALSE)
			; // grr!

		puck_gobj->flags = 1;
		break;
	}
	return;
}

// 0x80136128
void mnPlayersVSUpdateFighter(s32 player)
{
	GObj* player_gobj;
	s32 var_v0 = 0;

	player_gobj = sMNPlayersVSSlots[player].player;

	if (player_gobj != NULL)
	{
		if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindNot)
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
		else if ((sMNPlayersVSSlots[player].fkind == nFTKindNull) && (sMNPlayersVSSlots[player].is_selected == 0))
		{
			player_gobj->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		sMNPlayersVSSlots[player].shade = mnPlayersVSGetShade(player);
		mnPlayersVSMakeFighter(sMNPlayersVSSlots[player].player, player, sMNPlayersVSSlots[player].fkind,
							 mnPlayersVSGetFreeCostume(sMNPlayersVSSlots[player].fkind, player));
		sMNPlayersVSSlots[player].is_status_selected = FALSE;
	}
}

// 0x801361F8
void mnUpdateCursor(GObj* cursor_gobj, s32 player)
{
	if (cursor_gobj != NULL)
	{
		if ((SObjGetStruct(cursor_gobj)->pos.y > 122.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 36.0F))
		{
			if (sMNPlayersVSSlots[player].cursor_status != nMNPlayersCursorStatusPointer)
			{
				mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusPointer);
				sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusPointer;
			}
		}
		else
		{
			if ((sMNPlayersVSSlots[player].is_selected == 1) || (sMNPlayersVSSlots[player].pkind == 2))
			{
				mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusHover);
				sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusHover;
			}
			else if (sMNPlayersVSSlots[player].cursor_status != nMNPlayersCursorStatusGrab)
			{
				mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusGrab);
				sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusGrab;
			}
		}
	}
}

// 0x80136300
void mnPlayersVSUpdateNameAndEmblem(s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];

	if ((pslot->pkind == nFTPlayerKindNot)
		|| ((pslot->fkind == nFTKindNull) && (pslot->is_selected == FALSE)))
	{
		pslot->name_emblem_gobj->flags = 1;
	}
	else
	{
		pslot->name_emblem_gobj->flags = 0;
		mnPlayersVSMakeNameAndEmblem(pslot->name_emblem_gobj, player, pslot->fkind);
	}
}

// 0x80136388
void mnPlayersVSDestroyPortraitFlash(s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];

	if (pslot->flash != NULL)
	{
		gcEjectGObj(pslot->flash);
		pslot->flash = NULL;
	}
}

// 0x801363DC
void mnPlayersVSPortraitFlash(GObj* flash_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0)
			mnPlayersVSDestroyPortraitFlash(flash_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			flash_gobj->flags = (flash_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x8013647C
void mnPlayersVSMakePortraitFlash(s32 player)
{
	GObj* flash_gobj;
	SObj* flash_sobj;
	s32 portrait = mnPlayersVSGetPortrait(sMNPlayersVSSlots[player].fkind);

	mnPlayersVSDestroyPortraitFlash(player);

	flash_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1EU, 0x80000000U);
	sMNPlayersVSSlots[player].flash = flash_gobj;
	gcAddGObjDisplay(flash_gobj, lbCommonDrawSObjAttr, 0x25U, GOBJ_PRIORITY_DEFAULT, ~0);
	flash_gobj->user_data.p = player;
	gcAddGObjProcess(flash_gobj, mnPlayersVSPortraitFlash, 0, 1);

	flash_sobj
		= lbCommonMakeSObjForGObj(flash_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[5], &relocFile19WhiteSquareSpriteOffset));
	flash_sobj->pos.x = (f32)(((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26);
	flash_sobj->pos.y = (f32)(((portrait >= 6 ? 1 : 0) * 43) + 37);
}

// 0x801365D0
sb32 mnCheckAndHandlePlayerTypeButtonPress(GObj* cursor_gobj, s32 player, u32 panel_id)
{
	s32 pkind;

	if (mnCheckPlayerTypeButtonPress(cursor_gobj, panel_id))
	{
		if (sMNPlayersVSControllerOrders[panel_id] == -1)
		{
			pkind = sMNPlayersVSSlots[panel_id].pkind + 1;

			sMNPlayersVSSlots[panel_id].pkind = (pkind >= 3) ? nFTPlayerKindCom : pkind;
		}
		else
		{
			pkind = sMNPlayersVSSlots[panel_id].pkind + 1;

			sMNPlayersVSSlots[panel_id].pkind = (pkind >= 3) ? nFTPlayerKindMan : pkind;
		}

		mnHandlePlayerTypeButtonPress(panel_id);
		mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[panel_id].type_button, panel_id, sMNPlayersVSSlots[panel_id].pkind);
		mnSyncPuckDisplay(sMNPlayersVSSlots[panel_id].puck, panel_id);
		mnUpdateCursor(sMNPlayersVSSlots[panel_id].cursor, panel_id);
		mnPlayersVSUpdateFighter(panel_id);
		mnPlayersVSUpdateNameAndEmblem(panel_id);

		switch (sMNPlayersVSSlots[panel_id].pkind)
		{
		case nFTPlayerKindMan:
			sMNPlayersVSSlots[panel_id].holder_player = panel_id;
			func_800269C0_275C0(nSYAudioFGMPlayerSlotWhoosh);
			break;
		case nFTPlayerKindCom:
			sMNPlayersVSSlots[panel_id].holder_player = 4;
			mnPlayersVSAnnounceFighter(player, panel_id);
			mnReplaceFighterNameWithHandicapCPULevel(panel_id);
			mnPlayersVSMakePortraitFlash(panel_id);
			break;
		case nFTPlayerKindNot: func_800269C0_275C0(nSYAudioFGMPlayerSlotWhoosh); break;
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
void mnPlayersVSAnnounceFighter(s32 player, s32 panel_id)
{
	// announcer names
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6, 0x01E3, 0x0201, 0x01F2, 0x01F1,
		0x0217, 0x01E5, 0x01F0, 0x01FB, 0x01FC, 0x01F5
	};

	func_80026738_27338(sMNPlayersVSSlots[player].p_sfx);
	func_800269C0_275C0(nSYAudioFGMMarioDash);

	sMNPlayersVSSlots[player].p_sfx = func_800269C0_275C0(announcer_fgms[sMNPlayersVSSlots[panel_id].fkind]);

	if (sMNPlayersVSSlots[player].p_sfx != 0)
		sMNPlayersVSSlots[player].sfx_id = sMNPlayersVSSlots[player].p_sfx->sfx_id;
}

// 0x801368C4
void mnHideFighterName(s32 player)
{
	SObj* name_emblem_gobj_sobj;
	SObj* name_sobj;

	name_emblem_gobj_sobj = SObjGetStruct(sMNPlayersVSSlots[player].name_emblem_gobj);

	if (name_emblem_gobj_sobj != NULL)
	{
		name_sobj = SObjGetNext(name_emblem_gobj_sobj);

		if (name_sobj != NULL)
			name_sobj->sprite.attr |= SP_HIDDEN;
	}
}

// 0x80136910
void mnPlayersVSDestroyHandicapLevel(s32 player)
{
	if (sMNPlayersVSSlots[player].handicap_cpu_level != NULL)
		gcEjectGObj(sMNPlayersVSSlots[player].handicap_cpu_level);
	if (sMNPlayersVSSlots[player].arrows != NULL)
		gcEjectGObj(sMNPlayersVSSlots[player].arrows);
	if (sMNPlayersVSSlots[player].handicap_cpu_level_value != NULL)
		gcEjectGObj(sMNPlayersVSSlots[player].handicap_cpu_level_value);

	sMNPlayersVSSlots[player].handicap_cpu_level = NULL;
	sMNPlayersVSSlots[player].arrows = NULL;
	sMNPlayersVSSlots[player].handicap_cpu_level_value = NULL;
}

// 0x80136998
SObj* mnPlayersVSGetArrowSObj(GObj* arrow_gobj, s32 direction)
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
void mnPlayersVSArrowThreadUpdate(GObj* arrow_gobj)
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

		value = sMNPlayersVSSlots[player].pkind == 0 ?
			sMNPlayersVSSlots[player].handicap :
			sMNPlayersVSSlots[player].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mnPlayersVSGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayersVSGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj
				= lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17ArrowLeftSpriteOffset));
			arrow_sobj->pos.x = (player * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mnPlayersVSGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayersVSGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj
				= lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17ArrowRightSpriteOffset));
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
void mnPlayersVSHandicapLevelProcUpdate(GObj* handicap_cpu_level_gobj)
{
	s32 player = handicap_cpu_level_gobj->user_data.p;

	if (sMNPlayersVSSlots[player].is_fighter_selected == 0)
		mnPlayersVSDestroyHandicapLevel(player);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != sMNPlayersVSSlots[player].pkind)
		mnPlayersVSMakeHandicapLevel(player);
}

// 0x80136C8C
void mnPlayersVSMakeHandicapLevel(s32 player)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (sMNPlayersVSSlots[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(sMNPlayersVSSlots[player].handicap_cpu_level);
		sMNPlayersVSSlots[player].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	sMNPlayersVSSlots[player].handicap_cpu_level = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	handicap_cpu_level_gobj->user_data.p = player;
	gcAddGObjProcess(handicap_cpu_level_gobj, mnPlayersVSHandicapLevelProcUpdate, 1, 1);

	if (sMNPlayersVSSlots[player].pkind == 0)
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
			handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17HandicapTextSpriteOffset));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(
			handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17CPLevelTextSpriteOffset));
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
		handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[1], &relocFile0ColonSpriteOffset));
	handicap_cpu_level_sobj->sprite.red = 0xFF;
	handicap_cpu_level_sobj->sprite.green = 0xFF;
	handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x3D;
	handicap_cpu_level_sobj->sprite.blue = 0xFF;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 202.0F;
}

// 0x80136E90
void mnMakeHandicapLevelValue(s32 player)
{
	intptr_t offsets[10] = {

		0x0000D310, 0x0000D3E0, 0x0000D4B0, 0x0000D580, 0x0000D650,
		0x0000D720, 0x0000D7F0, 0x0000D8C0, 0x0000D990, 0x0000DA60
	};
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;
	u32 value = (sMNPlayersVSSlots[player].pkind == 0) ? sMNPlayersVSSlots[player].handicap
															: sMNPlayersVSSlots[player].cpu_level;

	if (sMNPlayersVSSlots[player].handicap_cpu_level_value != NULL)
	{
		gcEjectGObj(sMNPlayersVSSlots[player].handicap_cpu_level_value);
		sMNPlayersVSSlots[player].handicap_cpu_level_value = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	sMNPlayersVSSlots[player].handicap_cpu_level_value = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);

	handicap_cpu_level_sobj
		= lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[1], offsets[value]));
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
	mnPlayersVSDestroyHandicapLevel(player);
	mnPlayersVSMakeHandicapLevel(player);

	if ((mnPlayersVSCheckHandicapAuto() == FALSE) || (sMNPlayersVSSlots[player].pkind == 1))
	{
		arrow_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
		sMNPlayersVSSlots[player].arrows = arrow_gobj;
		gcAddGObjDisplay(arrow_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
		arrow_gobj->user_data.s = player;
		gcAddGObjProcess(arrow_gobj, mnPlayersVSArrowThreadUpdate, 0, 1);
	}
	mnMakeHandicapLevelValue(player);
}

// 0x801370F8
sb32 mnPlayersVSCheckHandicapOn()
{
	return (gSCManagerTransferBattleState.handicap == 1) ? TRUE : FALSE;
}

// 0x80137120
sb32 mnPlayersVSCheckHandicapAuto()
{
	return (gSCManagerTransferBattleState.handicap == 2) ? TRUE : FALSE;
}

// 0x80137148
sb32 mnPlayersVSCheckHandicap()
{
	if ((mnPlayersVSCheckHandicapOn()) || (mnPlayersVSCheckHandicapAuto()))
		return TRUE;
	else
		return FALSE;
}

// 0x8013718C
sb32 mnPlayersVSSelectChar(GObj* cursor_gobj, s32 player, s32 arg2, s32 select_button)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];

	if (pslot->cursor_status != nMNPlayersCursorStatusGrab)
		return FALSE;

	if (sMNPlayersVSSlots[pslot->held_player].fkind != nFTKindNull)
	{
		mnPlayersVSSelectFighterPuck(player, select_button);
		pslot->recall_end_tic = sMNPlayersVSTotalTimeTics + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(nSYAudioFGMMenuDenied);
	return FALSE;
}

// 0x80137234
void mnPlayersVSUpdateCursorGrabPriorities(s32 player, s32 puck_id)
{
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};
	s32 i, order_id;

	gcMoveGObjDL(sMNPlayersVSSlots[player].cursor, 0x20U, diplay_orders[3]);
	gcMoveGObjDL(sMNPlayersVSSlots[puck_id].puck, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != player)
		{
			if (sMNPlayersVSSlots[i].cursor != NULL)
				gcMoveGObjDL(sMNPlayersVSSlots[i].cursor, 0x20U, diplay_orders[order_id]);
			if (sMNPlayersVSSlots[i].held_player != -1U)
			{
				gcMoveGObjDL(sMNPlayersVSSlots[sMNPlayersVSSlots[i].held_player].puck, 0x20U,
							 diplay_orders[order_id] + 1);
			}
		}
	}
}

// 0x80137390
s32 mnPlayersVSUpdateCursorPlacementPriorities(s32 player, s32 held_puck_id)
{
	s32 held_orders[4] = {

		3, 2, 1, 0
	},
		unheld_orders[4] = {

		6, 4, 2, 0
	};
	s32* order;
	s32 unused;
	sb32 puck_held[4];
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (sMNPlayersVSSlots[i].held_player == -1)
			puck_held[i] = FALSE;
		else
			puck_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != player) && (puck_held[i]))
		{
			if (sMNPlayersVSSlots[i].cursor != NULL)
				gcMoveGObjDL(sMNPlayersVSSlots[i].cursor, 0x20, *order);
			gcMoveGObjDL(sMNPlayersVSSlots[sMNPlayersVSSlots[i].held_player].puck, 0x20, *order + 1);
			order--;
		}
	}

	if (player != 4)
		gcMoveGObjDL(sMNPlayersVSSlots[player].cursor, 0x20, *order);

	gcMoveGObjDL(sMNPlayersVSSlots[held_puck_id].puck, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if ((i != player) && (puck_held[i] == FALSE))
		{
			if (sMNPlayersVSSlots[i].cursor != NULL)
				gcMoveGObjDL(sMNPlayersVSSlots[i].cursor, 0x20, *order);
			order--;
		}
	}
}

// 0x801375A8
void mnPlayersVSSetCursorPuckOffset(s32 player)
{
	MNPlayersSlotVS* pslot;
	MNPlayersSlotVS* held_puck_pslot;

	pslot = &sMNPlayersVSSlots[player];
	held_puck_pslot = &sMNPlayersVSSlots[pslot->held_player];

	pslot->cursor_pickup_x = SObjGetStruct(held_puck_pslot->puck)->pos.x - 11.0F;
	pslot->cursor_pickup_y = SObjGetStruct(held_puck_pslot->puck)->pos.y - -14.0F;
}

// 0x8013760C
void mnPlayersVSSetCursorGrab(s32 player, s32 held_player)
{
	MNPlayersSlotVS* pslot;
	MNPlayersSlotVS* held_puck_pslot;

	held_puck_pslot = &sMNPlayersVSSlots[held_player];
	held_puck_pslot->holder_player = player;
	held_puck_pslot->is_selected = FALSE;

	pslot = &sMNPlayersVSSlots[player];
	pslot->cursor_status = nMNPlayersCursorStatusGrab;
	pslot->held_player = held_player;

	held_puck_pslot->is_fighter_selected = FALSE;

	mnPlayersVSUpdateFighter(held_player);
	mnPlayersVSUpdateCursorGrabPriorities(player, held_player);
	mnPlayersVSSetCursorPuckOffset(player);
	mnPlayersVSUpdateCursor(pslot->cursor, player, pslot->cursor_status);

	pslot->is_cursor_adjusting = TRUE;

	func_800269C0_275C0(nSYAudioFGMSamusDash);

	mnPlayersVSDestroyHandicapLevel(held_player);
	mnPlayersVSDestroyPortraitFlash(held_player);
	mnPlayersVSUpdateNameAndEmblem(held_player);
}

// 0x801376D0
sb32 mnPlayersVSCheckCursorPuckGrab(GObj* cursor_gobj, s32 player)
{
	s32 i;

	if ((sMNPlayersVSTotalTimeTics < sMNPlayersVSSlots[player].recall_end_tic)
		|| (sMNPlayersVSSlots[player].is_recalling))
	{
		return FALSE;
	}
	else if (sMNPlayersVSSlots[player].cursor_status != nMNPlayersCursorStatusHover)
		return FALSE;

	for (i = 3; i >= 0; i--)
	{
		if (player == i)
		{
			if ((sMNPlayersVSSlots[i].holder_player == 4) && (sMNPlayersVSSlots[i].pkind != 2)
				&& (mnPlayersVSCheckPuckInRange(cursor_gobj, player, i) != 0))
			{
				mnPlayersVSSetCursorGrab(player, i);

				return TRUE;
			}
		}
		else if ((sMNPlayersVSSlots[i].holder_player == 4) && (sMNPlayersVSSlots[i].pkind == 1)
				 && (mnPlayersVSCheckPuckInRange(cursor_gobj, player, i) != 0))
		{
			mnPlayersVSSetCursorGrab(player, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 0x8013782C
s32 mnPlayersVSGetPuckFighterKind(s32 player)
{
	SObj* puck_sobj = SObjGetStruct(sMNPlayersVSSlots[player].puck);
	s32 current_y = (s32)puck_sobj->pos.x + 13;
	s32 current_x = (s32)puck_sobj->pos.y + 12;
	s32 fkind;
	sb32 is_within_bounds;

	is_within_bounds = (current_x >= 36) && (current_x < 79) ? TRUE : FALSE;

	if (is_within_bounds)
	{
		is_within_bounds = (current_y >= 25) && (current_y < 295) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			fkind = mnPlayersVSGetFighterKind((s32)(current_y - 25) / 45);

			if ((mnPlayersVSCheckFighterCrossed(fkind)) || (mnPlayersVSCheckFighterLocked(fkind)))
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
			fkind = mnPlayersVSGetFighterKind(((s32)(current_y - 25) / 45) + 6);

			if ((mnPlayersVSCheckFighterCrossed(fkind)) || (mnPlayersVSCheckFighterLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}
	return nFTKindNull;
}

// 0x801379B8
void mnPlayersVSAdjustCursor(GObj* cursor_gobj, s32 player)
{
	SYController* controller;
	Vec2i coords[3] = {

		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (sMNPlayersVSSlots[player].is_cursor_adjusting)
	{
		delta
			= (sMNPlayersVSSlots[player].cursor_pickup_x - SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x = sMNPlayersVSSlots[player].cursor_pickup_x;
		else
			SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x += delta;

		delta
			= (sMNPlayersVSSlots[player].cursor_pickup_y - SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.y = sMNPlayersVSSlots[player].cursor_pickup_y;
		else
			SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.y += delta;

		if ((SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x == sMNPlayersVSSlots[player].cursor_pickup_x)
			&& (SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.y == sMNPlayersVSSlots[player].cursor_pickup_y))
		{
			sMNPlayersVSSlots[player].is_cursor_adjusting = FALSE;
		}

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
			= (f32)((f32)coords[sMNPlayersVSSlots[player].cursor_status].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
			= (f32)((f32)coords[sMNPlayersVSSlots[player].cursor_status].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (sMNPlayersVSSlots[player].is_recalling == FALSE)
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
					= SObjGetStruct(cursor_gobj)->pos.x + coords[sMNPlayersVSSlots[player].cursor_status].x;
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
					= SObjGetStruct(cursor_gobj)->pos.y + coords[sMNPlayersVSSlots[player].cursor_status].y;
			}
		}
	}
}

// 0x80137D4C
void mnPlayersVSUpdateCursorDisplay(GObj* cursor_gobj, s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (pslot->cursor_status != nMNPlayersCursorStatusPointer)
		{
			mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusPointer);
			pslot->cursor_status = nMNPlayersCursorStatusPointer;
		}
	}
	else
	{
		if (pslot->held_player == -1)
		{
			if (pslot->cursor_status != nMNPlayersCursorStatusHover)
			{
				mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusHover);
				pslot->cursor_status = nMNPlayersCursorStatusHover;
			}
		}
		else
		{
			if (pslot->cursor_status != nMNPlayersCursorStatusGrab)
			{
				mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusGrab);
				pslot->cursor_status = nMNPlayersCursorStatusGrab;
			}
		}
	}

	if ((pslot->cursor_status == nMNPlayersCursorStatusPointer) && (pslot->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((sMNPlayersVSSlots[i].is_selected == 1) && (mnPlayersVSCheckPuckInRange(cursor_gobj, player, i) != 0))
			{
				mnPlayersVSUpdateCursor(cursor_gobj, player, nMNPlayersCursorStatusHover);
				pslot->cursor_status = nMNPlayersCursorStatusHover;
				return;
			}
		}
	}
}

// 0x80137EFC
void mnUpdateCostume(s32 player, s32 select_button)
{
	u32 costume = ftParamGetCostumeCommonID(sMNPlayersVSSlots[player].fkind, select_button);

	if (mnPlayersVSCheckCostumeUsed(sMNPlayersVSSlots[player].fkind, player, costume))
	{
		func_800269C0_275C0(nSYAudioFGMMenuDenied);
		return;
	}

	sMNPlayersVSSlots[player].costume = costume;
	sMNPlayersVSSlots[player].shade = mnPlayersVSGetShade(player);

	ftParamInitAllParts(sMNPlayersVSSlots[player].player, costume, sMNPlayersVSSlots[player].shade);

	func_800269C0_275C0(nSYAudioFGMMenuScroll2);
}

// 0x80137F9C
sb32 mnCheckManFighterSelected(s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];

	if ((pslot->is_selected) && (pslot->held_player == -1)
		&& (pslot->pkind == nFTPlayerKindMan))
	{
		return TRUE;
	}
	else
		return FALSE;
}

// 0x80137FF8
void mnRecallPuck(s32 player)
{
	sMNPlayersVSSlots[player].is_fighter_selected = FALSE;
	sMNPlayersVSSlots[player].is_selected = FALSE;
	sMNPlayersVSSlots[player].is_recalling = TRUE;
	sMNPlayersVSSlots[player].recall_tics = 0;
	sMNPlayersVSSlots[player].recall_start_x = SObjGetStruct(sMNPlayersVSSlots[player].puck)->pos.x;
	sMNPlayersVSSlots[player].recall_start_y = SObjGetStruct(sMNPlayersVSSlots[player].puck)->pos.y;

	sMNPlayersVSSlots[player].recall_end_x = SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x + 20.0F;

	if (sMNPlayersVSSlots[player].recall_end_x > 280.0F)
		sMNPlayersVSSlots[player].recall_end_x = 280.0F;

	sMNPlayersVSSlots[player].recall_end_y = SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.y + -15.0F;

	if (sMNPlayersVSSlots[player].recall_end_y < 10.0F)
		sMNPlayersVSSlots[player].recall_end_y = 10.0F;

	if (sMNPlayersVSSlots[player].recall_end_y < sMNPlayersVSSlots[player].recall_start_y)
		sMNPlayersVSSlots[player].recall_mid_y = sMNPlayersVSSlots[player].recall_end_y - 20.0F;
	else
		sMNPlayersVSSlots[player].recall_mid_y = sMNPlayersVSSlots[player].recall_start_y - 20.0F;
}

// 0x801380F4
void mnGoBackToVSMenu()
{
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = 9;

	mnPlayersVSSetSceneData();
	mnPlayersVSPauseSlotProcesses();
	syAudioStopSongAll();
	syTaskmanSetLoadScene();
}

// 0x80138140
void mnExitIfBButtonHeld(s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];
	SYController* controller = &gSYControllerDevices[player];

	if (pslot->is_hold_b)
	{
		if ((pslot->hold_b_tics != 0))
		{
			pslot->hold_b_tics++;

			if ((pslot->hold_b_tics < 41))
			{
				if (controller->button_hold & B_BUTTON)
				{
					if (pslot->hold_b_tics == 40)
						mnGoBackToVSMenu();
				}
				else
				{
					pslot->is_hold_b = FALSE;
					pslot->hold_b_tics = 0;
				}
			}
		}
	}
	else
	{
		if (controller->button_tap & B_BUTTON)
			pslot->is_hold_b = TRUE;
		pslot->hold_b_tics = 1;
	}
}

// 0x80138218
s32 mnCheckBackInRange(GObj* cursor_gobj)
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
void mnPlayersVSCursorProcUpdate(GObj* cursor_gobj)
{
	SYController* controller;
	MNPlayersSlotVS* pslot;
	s32 foo, bar, baz;
	s32 player = cursor_gobj->user_data.s;

	mnPlayersVSAdjustCursor(cursor_gobj, player);
	controller = &gSYControllerDevices[player];

	if ((controller->button_tap & A_BUTTON) && (mnCheckAndHandleAnyPlayerTypeButtonPress(cursor_gobj, player) == FALSE)
		&& (mnPlayersVSSelectChar(cursor_gobj, player, sMNPlayersVSSlots[player].held_player, 4) == FALSE)
		&& (mnPlayersVSCheckCursorPuckGrab(cursor_gobj, player) == FALSE))
	{
		if (mnCheckTimeArrowRightInRange(cursor_gobj))
		{
			if (sMNPlayersVSGameRule == SCBATTLE_GAMERULE_TIME)
			{
				sMNPlayersVSTimeValue = mnPlayersVSGetNextTimerValue(sMNPlayersVSTimeValue);
				mnMakeTimeSelect(sMNPlayersVSTimeValue);
			}
			else
			{
				if (sMNPlayersVSStockValue + 1 >= 0x63)
					sMNPlayersVSStockValue = 0;
				else
					sMNPlayersVSStockValue = sMNPlayersVSStockValue + 1;
				mnDrawStockPicker(sMNPlayersVSStockValue);
			}
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckTimeArrowLeftInRange(cursor_gobj))
		{
			if (sMNPlayersVSGameRule == SCBATTLE_GAMERULE_TIME)
			{
				sMNPlayersVSTimeValue = mnPlayersVSGetPrevTimerValue(sMNPlayersVSTimeValue);
				mnMakeTimeSelect(sMNPlayersVSTimeValue);
			}
			else
			{
				if (sMNPlayersVSStockValue - 1 < 0)
					sMNPlayersVSStockValue = 0x62;
				else
					sMNPlayersVSStockValue = sMNPlayersVSStockValue - 1;
				mnDrawStockPicker(sMNPlayersVSStockValue);
			}
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckRoyalTeamBattleTogglePress(cursor_gobj))
			mnHandleRoyalTeamBattleTogglePress();
		else if (mnCheckBackInRange(cursor_gobj))
		{
			mnGoBackToVSMenu();
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnCheckAnyTeamSelectPress(cursor_gobj, player) == FALSE)
			mnCheckAnyCPUHandicapArrowPress(cursor_gobj, player);
	}

	pslot = &sMNPlayersVSSlots[player];

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		if ((controller->button_tap & U_CBUTTONS)
			&& (mnPlayersVSSelectChar(cursor_gobj, player, pslot->held_player, 0) == FALSE)
			&& (pslot->is_fighter_selected))
		{
			mnUpdateCostume(player, 0);
		}
		if ((controller->button_tap & R_CBUTTONS)
			&& (mnPlayersVSSelectChar(cursor_gobj, player, pslot->held_player, 1) == FALSE)
			&& (pslot->is_fighter_selected))
		{
			mnUpdateCostume(player, 1);
		}
		if ((controller->button_tap & D_CBUTTONS)
			&& (mnPlayersVSSelectChar(cursor_gobj, player, pslot->held_player, 2) == FALSE)
			&& (pslot->is_fighter_selected))
		{
			mnUpdateCostume(player, 2);
		}
		if ((controller->button_tap & L_CBUTTONS)
			&& (mnPlayersVSSelectChar(cursor_gobj, player, pslot->held_player, 3) == FALSE)
			&& (pslot->is_fighter_selected))
		{
			mnUpdateCostume(player, 3);
		}
	}
	else if (controller->button_tap & (U_CBUTTONS | R_CBUTTONS | D_CBUTTONS | L_CBUTTONS))
		mnPlayersVSSelectChar(cursor_gobj, player, pslot->held_player, 4);
	if ((controller->button_tap & B_BUTTON) && (mnCheckManFighterSelected(player)))
		mnRecallPuck(player);
	if (pslot->is_recalling == FALSE)
		mnExitIfBButtonHeld(player);
	if (pslot->is_recalling == FALSE)
		mnPlayersVSUpdateCursorDisplay(cursor_gobj, player);
}

// 0x801386E4
void mnPlayersVSUpdatePuck(GObj* puck_gobj, s32 puck_index)
{
	SObj* puck_sobj;
	f32 current_x, current_y;
	intptr_t puck_offsets[5] = {

		0x00009048, 0x00009B28, 0x0000A608, 0x0000B0E8, 0x0000BBC8
	};

	current_x = SObjGetStruct(puck_gobj)->pos.x;
	current_y = SObjGetStruct(puck_gobj)->pos.y;

	gcRemoveSObjAll(puck_gobj);

	puck_sobj = lbCommonMakeSObjForGObj(puck_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], puck_offsets[puck_index]));
	puck_sobj->pos.x = current_x;
	puck_sobj->pos.y = current_y;
	puck_sobj->sprite.attr &= ~SP_FASTCOPY;
	puck_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80138798
void mnPlayersVSCenterPuckInPortrait(GObj* puck_gobj, s32 fkind)
{
	s32 portrait = mnPlayersVSGetPortrait(fkind);

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

// 0x80138848
s32 mnSelectRandomFighter(GObj* puck_gobj)
{
	s32 fkind;

	do
	{
		do
			fkind = syUtilsGetRandomTimeUCharRange(12);
		while (mnPlayersVSCheckFighterCrossed(fkind) != 0);
	} while (mnPlayersVSCheckFighterLocked(fkind) != 0);

	mnPlayersVSCenterPuckInPortrait(puck_gobj, fkind);
	return fkind;
}

// 0x801388A4
void mnMovePuck(s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];

	SObjGetStruct(pslot->puck)->pos.x += pslot->puck_vel_x;
	SObjGetStruct(pslot->puck)->pos.y += pslot->puck_vel_y;
}

// 0x801388F8
void mnPlayersVSPuckProcUpdate(GObj* puck_gobj)
{
	s32 fkind;
	s32 player = puck_gobj->user_data.s;

	if (sMNPlayersVSTotalTimeTics < 0x1E)
		puck_gobj->flags = 1;
	else
	{
		if ((sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom)
			|| ((sMNPlayersVSSlots[player].pkind == nFTPlayerKindMan)
				&& ((sMNPlayersVSSlots[player].cursor_status != nMNPlayersCursorStatusPointer)
					|| (sMNPlayersVSSlots[player].is_selected == TRUE)
					|| (sMNPlayersVSSlots[player].is_recalling == TRUE))))
		{
			puck_gobj->flags = 0;
		}
		else
			puck_gobj->flags = 1;
	}

	if ((sMNPlayersVSSlots[player].is_selected == FALSE) && (sMNPlayersVSSlots[player].holder_player != 4))
	{
		if (sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].is_cursor_adjusting == FALSE)
		{
			if (sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor != NULL)
			{
				SObjGetStruct(puck_gobj)->pos.x
					= (f32)(SObjGetStruct(sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor)->pos.x
							+ 11.0F);
				SObjGetStruct(puck_gobj)->pos.y
					= (f32)(SObjGetStruct(sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor)->pos.y
							+ -14.0F);
			}
		}
	}
	else
		mnMovePuck(player);

	fkind = mnPlayersVSGetPuckFighterKind(player);

	switch (sMNPlayersVSSlots[player].pkind)
	{
	case nFTPlayerKindNot:
		if ((sMNPlayersVSControllerOrders[player] != -1) && (fkind != nFTKindNull))
		{
			sMNPlayersVSSlots[player].pkind = nFTPlayerKindMan;

			mnHandlePlayerTypeButtonPress(player);
			mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player, sMNPlayersVSSlots[player].pkind);
			mnSyncPuckDisplay(sMNPlayersVSSlots[player].puck, player);
		}
		else
			break;
	default:
		if ((sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom) && (fkind != sMNPlayersVSSlots[player].fkind)
			&& (fkind == nFTKindNull))
		{
			if (sMNPlayersVSSlots[player].holder_player != 4)
				mnPlayersVSSelectFighterPuck(sMNPlayersVSSlots[player].holder_player, 4);
		}
		if ((sMNPlayersVSSlots[player].is_selected == FALSE) && (fkind != sMNPlayersVSSlots[player].fkind))
		{
			sMNPlayersVSSlots[player].fkind = fkind;

			mnPlayersVSUpdateFighter(player);
			mnPlayersVSUpdateNameAndEmblem(player);
		}
	}
}

// 0x80138B6C
void mnPlayersVSMakeCursorCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138C0C
void mnPlayersVSMakePuckCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138CAC
void mnPlayersVSMakeHandicapLevelCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138D4C
void mnPlayersVSMakeReadyCamera()
{
	GObj* camera_gobj
		= gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	CObj* cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80138DEC
void mnPlayersVSMakeCursor(s32 player)
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
									 lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17CursorHandDragSpriteOffset), 1,
									 mnPlayersVSCursorProcUpdate, 2);

	sMNPlayersVSSlots[player].cursor = cursor_gobj;
	cursor_gobj->user_data.s = player;
	SObjGetStruct(cursor_gobj)->pos.x = (f32)cursor_starting_positions[player].x;
	SObjGetStruct(cursor_gobj)->pos.y = (f32)cursor_starting_positions[player].y;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayersVSUpdateCursor(cursor_gobj, player, 0);
}

// 0x80138FA0
void mnPlayersVSRenderPuck(GObj* puck_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor(gSYTaskmanDLHeads[0]++, sMNPlayersVSPuckGlowColor & 0xFF, sMNPlayersVSPuckGlowColor & 0xFF,
				   sMNPlayersVSPuckGlowColor & 0xFF, sMNPlayersVSPuckGlowColor & 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0, TEXEL0,
					  PRIMITIVE, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(puck_gobj);
}

// 0x80139098
void mnPlayersVSMakePuck(s32 player)
{
	GObj* puck_gobj;
	MNPlayersSlotVS* pslot;
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

	sMNPlayersVSSlots[player].puck = puck_gobj
		= lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, mnPlayersVSRenderPuck, 0x21, start_display_orders[player], -1,
							 lbRelocGetFileData(void*, sMNPlayersVSFiles[0], offsets_no_cpu[player]), 1, mnPlayersVSPuckProcUpdate, 1);

	pslot = &sMNPlayersVSSlots[player];

	puck_gobj->user_data.s = player;

	if (pslot->pkind == nFTPlayerKindCom)
		mnPlayersVSUpdatePuck(puck_gobj, 4);

	if ((pslot->pkind == nFTPlayerKindMan) && (pslot->held_player != -1))
		gcMoveGObjDL(pslot->puck, 0x20U, hold_display_orders[player] + 1);

	if (pslot->fkind == nFTKindNull)
	{
		SObjGetStruct(puck_gobj)->pos.x = 51.0F;
		SObjGetStruct(puck_gobj)->pos.y = 161.0F;
	}
	else
		mnPlayersVSCenterPuckInPortrait(puck_gobj, pslot->fkind);

	SObjGetStruct(puck_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(puck_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801392A8
f32 getBattlePuckDistance(s32 player_1, s32 player_2)
{
	f32 delta_x, delta_y;
	SObj* puck_sobj_2 = SObjGetStruct(sMNPlayersVSSlots[player_2].puck);
	SObj* puck_sobj_1 = SObjGetStruct(sMNPlayersVSSlots[player_1].puck);

	delta_y = puck_sobj_2->pos.y - puck_sobj_1->pos.y;
	delta_x = puck_sobj_2->pos.x - puck_sobj_1->pos.x;

	return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 0x80139320
void mnPlayersVSPuckAdjustOverlap(s32 player_1, s32 player_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(sMNPlayersVSSlots[player_1].puck)->pos.x
		== SObjGetStruct(sMNPlayersVSSlots[player_2].puck)->pos.x)
		sMNPlayersVSSlots[player_1].puck_vel_x += syUtilsGetRandomIntRange(2) - 1;
	else
	{
		sMNPlayersVSSlots[player_1].puck_vel_x += (-1.0F
														* (SObjGetStruct(sMNPlayersVSSlots[player_2].puck)->pos.x
														   - SObjGetStruct(sMNPlayersVSSlots[player_1].puck)->pos.x))
													   / 10.0F;
	}

	if (SObjGetStruct(sMNPlayersVSSlots[player_1].puck)->pos.y
		== SObjGetStruct(sMNPlayersVSSlots[player_2].puck)->pos.y)
		sMNPlayersVSSlots[player_1].puck_vel_y += syUtilsGetRandomIntRange(2) - 1;
	else
		sMNPlayersVSSlots[player_1].puck_vel_y += (-1.0F
														* (SObjGetStruct(sMNPlayersVSSlots[player_2].puck)->pos.y
														   - SObjGetStruct(sMNPlayersVSSlots[player_1].puck)->pos.y))
													   / 10.0F;
}

// 0x80139460
void mnPlayersVSPuckAdjustPortraitEdge(s32 player)
{
	s32 portrait = mnPlayersVSGetPortrait(sMNPlayersVSSlots[player].fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x
		= SObjGetStruct(sMNPlayersVSSlots[player].puck)->pos.x + sMNPlayersVSSlots[player].puck_vel_x + 13.0F;
	f32 new_pos_y
		= SObjGetStruct(sMNPlayersVSSlots[player].puck)->pos.y + sMNPlayersVSSlots[player].puck_vel_y + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		sMNPlayersVSSlots[player].puck_vel_x = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		sMNPlayersVSSlots[player].puck_vel_x = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	if (new_pos_y < (portrait_edge_y + 5.0F))
		sMNPlayersVSSlots[player].puck_vel_y = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		sMNPlayersVSSlots[player].puck_vel_y = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 0x8013961C
void mnPlayersVSPuckAdjustPlaced(s32 player)
{
	s32 i;
	f32 distances[4];
	sb32 is_within_bounds;

	for (i = 0; i < 4; i++)
	{
		if (player != i)
		{
			if (sMNPlayersVSSlots[player].is_selected)
				distances[i] = getBattlePuckDistance(player, i);
		}
		else
			distances[i] = -1.0F;
	}

	sMNPlayersVSSlots[player].puck_vel_x = 0.0F;
	sMNPlayersVSSlots[player].puck_vel_y = 0.0F;

	for (i = 0; i < 4; i++)
	{
		is_within_bounds = ((distances[i] >= 0.0F) && (distances[i] <= 15.0F)) ? TRUE : FALSE;

		if (is_within_bounds)
		{
			if ((sMNPlayersVSSlots[player].fkind == sMNPlayersVSSlots[i].fkind)
				&& (sMNPlayersVSSlots[player].fkind != nFTKindNull) && (sMNPlayersVSSlots[i].is_selected == 1))
			{
				mnPlayersVSPuckAdjustOverlap(player, i, (15.0F - distances[i]) / 15.0F);
			}
		}
	}

	mnPlayersVSPuckAdjustPortraitEdge(player);
}

// 0x801397CC
void mnPlayersVSPuckAdjustRecall(s32 player)
{
	f32 new_y_velocity, new_x_velocity;

	sMNPlayersVSSlots[player].recall_tics += 1;

	if (sMNPlayersVSSlots[player].recall_tics < 11)
	{
		new_x_velocity = (sMNPlayersVSSlots[player].recall_end_x - sMNPlayersVSSlots[player].recall_start_x) / 10.0F;

		if (sMNPlayersVSSlots[player].recall_tics < 6)
			new_y_velocity = (sMNPlayersVSSlots[player].recall_mid_y - sMNPlayersVSSlots[player].recall_start_y) / 5.0F;
		else
			new_y_velocity = (sMNPlayersVSSlots[player].recall_end_y - sMNPlayersVSSlots[player].recall_mid_y) / 5.0F;

		sMNPlayersVSSlots[player].puck_vel_x = new_x_velocity;
		sMNPlayersVSSlots[player].puck_vel_y = new_y_velocity;
	}
	else if (sMNPlayersVSSlots[player].recall_tics == 11)
	{
		mnPlayersVSSetCursorGrab(player, player);
		sMNPlayersVSSlots[player].puck_vel_x = 0.0F;
		sMNPlayersVSSlots[player].puck_vel_y = 0.0F;
	}
	if (sMNPlayersVSSlots[player].recall_tics == 30)
		sMNPlayersVSSlots[player].is_recalling = FALSE;
}

// 0x801398B8
void mnPlayersVSPuckAdjustProcUpdate(s32 player)
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (sMNPlayersVSSlots[i].is_recalling)
			mnPlayersVSPuckAdjustRecall(i);
		if (sMNPlayersVSSlots[i].is_selected)
			mnPlayersVSPuckAdjustPlaced(i);
	}
}

// 0x8013992C
void mnPlayersVSMakePuckAdjust()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnPlayersVSPuckAdjustProcUpdate, 1, 1);
}

// 0x80139970
void mnPlayersVSUpdatePuckGlowColor(GObj* unused)
{
	if (sMNPlayersVSIsPuckGlowIncreasing == FALSE)
	{
		sMNPlayersVSPuckGlowColor += 9;

		if (sMNPlayersVSPuckGlowColor >= 0x100)
		{
			sMNPlayersVSPuckGlowColor = 0xFF;
			sMNPlayersVSIsPuckGlowIncreasing = TRUE;
		}
	}
	if (sMNPlayersVSIsPuckGlowIncreasing == TRUE)
	{
		sMNPlayersVSPuckGlowColor -= 9;

		if (sMNPlayersVSPuckGlowColor < 0x80)
		{
			sMNPlayersVSPuckGlowColor = 0x80;
			sMNPlayersVSIsPuckGlowIncreasing = FALSE;
		}
	}
}

// 0x801399E8
void mnPlayersVSMakePuckGlow()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnPlayersVSUpdatePuckGlowColor, 1, 1);
}

// 0x80139A2C
void mnPlayersVSCostumeSync(s32 unused)
{
	s32 i;
	s32 shade;
	s32 costume;

	if (sMNPlayersVSIsTeamBattle == 1)
	{
		for (i = 0; i < 4; i++)
		{
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				shade = mnPlayersVSGetShade(i);
				sMNPlayersVSSlots[i].shade = shade;
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, sMNPlayersVSSlots[i].costume, shade);
			}
		}
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			if ((sMNPlayersVSSlots[i].fkind != nFTKindNull)
				&& (mnPlayersVSGetFighterKindCount(sMNPlayersVSSlots[i].fkind) == 0))
			{
				costume = ftParamGetCostumeCommonID(sMNPlayersVSSlots[i].fkind, 0);

				if ((costume != sMNPlayersVSSlots[i].costume) && (sMNPlayersVSSlots[i].is_fighter_selected == 0))
				{
					shade = mnPlayersVSGetShade(i);
					sMNPlayersVSSlots[i].shade = shade;
					ftParamInitAllParts(sMNPlayersVSSlots[i].player, costume, shade);
					sMNPlayersVSSlots[i].costume = costume;
				}
			}
		}
	}
}

// 0x80139B4C
void mnPlayersVSMakeCostumeSync()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1FU, 0x80000000U), mnPlayersVSCostumeSync, 1, 1);
}

// 0x80139B90
void mnPlayersVSSpotlightProcUpdate(GObj* white_circle_gobj)
{
	s32 portrait = white_circle_gobj->user_data.s;
	f32 sizes[12] = {

		1.5f, 1.5f, 2.0f, 1.5f, 1.5f, 1.5f,
		1.5f, 1.5f, 1.5f, 1.5f, 1.5f, 1.5f,
	};

	if ((sMNPlayersVSSlots[portrait].is_fighter_selected == 0) && (sMNPlayersVSSlots[portrait].fkind != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[sMNPlayersVSSlots[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMNPlayersVSSlots[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMNPlayersVSSlots[portrait].fkind];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x80139C84
void mnPlayersVSMakeSpotlight()
{
	GObj* white_circle_gobj;
	f32 y;
	s32 i, x;

	for (i = 0, x = -1250, y = -850.0F; i < 4; i++, x += 840)
	{
		white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

		gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[6], &relocFile21PlayersSpotlightDobjdescOffset),
					  0);

		gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

		white_circle_gobj->user_data.s = i;

		gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[6], &relocFile21PlayersSpotlightMobjsubOffset));

		gcAddGObjProcess(white_circle_gobj, mnPlayersVSSpotlightProcUpdate, 1, 1);

		gcPlayAnimAll(white_circle_gobj);

		DObjGetStruct(white_circle_gobj)->translate.vec.f.x = x;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.y = y;
		DObjGetStruct(white_circle_gobj)->translate.vec.f.z = 0.0f;
	}
}

// 0x80139DD8 - Unused?
void func_ovl26_80139DD8() {}

// 0x80139DE0
void mnPlayersVSReadyProcUpdate(GObj* gobj)
{
	if (mnPlayersVSCheckReady())
	{
		sMNPlayersVSReadyBlinkWait += 1;

		if (sMNPlayersVSReadyBlinkWait == 0x28)
			sMNPlayersVSReadyBlinkWait = 0;

		gobj->flags = (sMNPlayersVSReadyBlinkWait < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		sMNPlayersVSReadyBlinkWait = 0;
	}
}

// 0x80139E60
void mnPlayersVSMakeReady()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x20U, 0x80000000U);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0x26U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayersVSReadyProcUpdate, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17ReadyBannerSpriteOffset));
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17ReadyToFightTextSpriteOffset));
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
	gcAddGObjProcess(gobj, mnPlayersVSReadyProcUpdate, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17PressTextSpriteOffset));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17StartTextSpriteOffset));
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

	if (sMNPlayersVSControllerOrders[player] != -1)
	{
		if (sMNPlayersVSSlots[player].cursor == NULL)
		{
			mnPlayersVSMakeCursor(player);

			if (sMNPlayersVSSlots[player].pkind != nFTPlayerKindCom)
			{
				sMNPlayersVSSlots[player].pkind = nFTPlayerKindMan;
				mnHandlePlayerTypeButtonPress(player);
				mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player,
									 sMNPlayersVSSlots[player].pkind);
				mnSyncPuckDisplay(sMNPlayersVSSlots[player].puck, player);
				mnUpdateCursor(sMNPlayersVSSlots[player].cursor, player);
				mnPlayersVSUpdateFighter(player);
				mnPlayersVSUpdateNameAndEmblem(player);
			}
		}
	}
	else
	{
		if (sMNPlayersVSSlots[player].cursor != NULL)
		{
			if ((sMNPlayersVSSlots[player].held_player != -1)
				&& ((player != sMNPlayersVSSlots[player].held_player) || (sMNPlayersVSSlots[player].pkind == 1))
				&& (mnPlayersVSSelectChar(sMNPlayersVSSlots[player].cursor, player, sMNPlayersVSSlots[player].held_player,
									   4)
					== 0))
			{
				held_player = sMNPlayersVSSlots[player].held_player;
				sMNPlayersVSSlots[held_player].fkind = mnSelectRandomFighter(sMNPlayersVSSlots[held_player].puck);
			}

			gcEjectGObj(sMNPlayersVSSlots[player].cursor);
			sMNPlayersVSSlots[player].cursor = NULL;

			if (sMNPlayersVSSlots[player].pkind != 1)
			{
				sMNPlayersVSSlots[player].pkind = 2;
				mnHandlePlayerTypeButtonPress(player);
				mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player,
									 sMNPlayersVSSlots[player].pkind);
				mnSyncPuckDisplay(sMNPlayersVSSlots[player].puck, player);
				mnUpdateCursor(sMNPlayersVSSlots[player].cursor, player);
				mnPlayersVSUpdateFighter(player);
				mnPlayersVSUpdateNameAndEmblem(player);
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
		sMNPlayersVSControllerOrders[player] = -1;

		for (order = 0; gSYControllerDeviceStatuses[order] != -1; order++) // Array can go out of bounds!!! AND DOES!!!
		{
			if (player == gSYControllerDeviceStatuses[order])
				sMNPlayersVSControllerOrders[player] = order;
		}
	}
}

// 0x8013A30C
s32 mnGetNumSelectedChars()
{
	s32 i, select_char_count = 0;

	for (i = 0; i < 4; i++)
	{
		if ((sMNPlayersVSSlots[i].pkind != nFTPlayerKindNot) && (sMNPlayersVSSlots[i].is_fighter_selected == TRUE))
			select_char_count += 1;
	}

	return select_char_count;
}

// 0x8013A3AC
void mnSetTypeToNA(s32 player)
{
	sMNPlayersVSSlots[player].pkind = nFTPlayerKindNot;
	sMNPlayersVSSlots[player].fkind = nFTKindNull;
	sMNPlayersVSSlots[player].holder_player = 4;

	mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player, nFTPlayerKindNot);
}

// 0x8013A40C
void mnSetUnselectedPanelsToNA()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if (sMNPlayersVSSlots[i].is_fighter_selected == FALSE)
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
		if (sMNPlayersVSSlots[i].is_fighter_selected)
		{
			if (team == -1)
				team = sMNPlayersVSSlots[i].team;
			else if (team != sMNPlayersVSSlots[i].team)
				return FALSE;
		}
	}

	return TRUE;
}

// 0x8013A534
sb32 mnAreNoPucksHeldAbovePortraits()
{
	s32 i;

	for (i = 0; i < 4; i++)
	{
		if ((sMNPlayersVSSlots[i].cursor != NULL) && (sMNPlayersVSSlots[i].cursor_status == nMNPlayersCursorStatusGrab))
			return FALSE;
	}

	return TRUE;
}

// 0x8013A5E4
sb32 mnPlayersVSCheckReady()
{
	sb32 unused, is_ready_to_fight = TRUE;

	if (mnGetNumSelectedChars() < 2)
		is_ready_to_fight = FALSE;
	if ((is_ready_to_fight) && (sMNPlayersVSIsTeamBattle == TRUE))
	{
		if (mnIsOnlyOneTeamWithSelectedCharacters())
			is_ready_to_fight = FALSE;
	}
	if (is_ready_to_fight)
	{
		if (mnAreNoPucksHeldAbovePortraits() == FALSE)
			is_ready_to_fight = FALSE;
	}

	return is_ready_to_fight;
}

// 0x8013A664
void mnPlayersVSSetSceneData()
{
	s32 i;

	gSCManagerTransferBattleState.time_limit = sMNPlayersVSTimeValue;
	gSCManagerTransferBattleState.stocks = sMNPlayersVSStockValue;
	gSCManagerTransferBattleState.is_team_battle = sMNPlayersVSIsTeamBattle;
	gSCManagerTransferBattleState.game_rules = sMNPlayersVSGameRule;

	for (i = 0; i < 4; i++)
	{
		if (sMNPlayersVSIsTeamBattle == FALSE)
			gSCManagerTransferBattleState.players[i].player = i;
		else
		{
			gSCManagerTransferBattleState.players[i].player = sMNPlayersVSSlots[i].team;
			gSCManagerTransferBattleState.players[i].team = sMNPlayersVSSlots[i].team;
		}

		gSCManagerTransferBattleState.players[i].fkind = sMNPlayersVSSlots[i].fkind;
		gSCManagerTransferBattleState.players[i].pkind = sMNPlayersVSSlots[i].pkind;
		gSCManagerTransferBattleState.players[i].costume = sMNPlayersVSSlots[i].costume;
		gSCManagerTransferBattleState.players[i].shade = sMNPlayersVSSlots[i].shade;

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
			gSCManagerTransferBattleState.players[i].level = sMNPlayersVSSlots[i].cpu_level;
		else
			gSCManagerTransferBattleState.players[i].handicap = sMNPlayersVSSlots[i].handicap;
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
void mnPlayersVSPauseSlotProcesses()
{
	GObj *cursor_gobj, *puck_gobj;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		cursor_gobj = sMNPlayersVSSlots[i].cursor;

		if (cursor_gobj != NULL)
			gcPauseGObjProcess(cursor_gobj->gobjproc_head);

		puck_gobj = sMNPlayersVSSlots[i].puck;

		if (puck_gobj != NULL)
			gcPauseGObjProcess(puck_gobj->gobjproc_head);
	};
}

// 0x8013A920
void mnPlayersVSMain(GObj *gobj)
{
	s32 max_stage_id;
	s32 i;
	u32 stage_id;

	sMNPlayersVSTotalTimeTics += 1;
	mnSyncControllerOrderArray();

	if (sMNPlayersVSTotalTimeTics == sMNPlayersVSReturnTic)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 1;

		mnPlayersVSSetSceneData();
		syTaskmanSetLoadScene();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		sMNPlayersVSReturnTic = sMNPlayersVSTotalTimeTics + 0x4650;

	if (sMNPlayersVSIsStart)
	{
		sMNPlayersVSStartProceedWait--;

		if (sMNPlayersVSStartProceedWait == 0)
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

			mnPlayersVSSetSceneData();
			syTaskmanSetLoadScene();
		}
	}
	else
	{
		if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (sMNPlayersVSTotalTimeTics >= 0x3D))
		{
			if (mnPlayersVSCheckReady())
			{
				func_800269C0_275C0(nSYAudioVoicePublicCheer);
				mnSetUnselectedPanelsToNA();
				sMNPlayersVSStartProceedWait = 0x1E;
				sMNPlayersVSIsStart = TRUE;
				mnPlayersVSPauseSlotProcesses();
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
s32 mnPlayersVSGetNextTimerValue(s32 current_value)
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
s32 mnPlayersVSGetPrevTimerValue(s32 current_value)
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
void mnPlayersVSInitPlayer(s32 player)
{
	MNPlayersSlotVS* pslot = &sMNPlayersVSSlots[player];
	s32 controller_order;
	int unplugged = -1;

	pslot->team_color_button = NULL;
	pslot->handicap_cpu_level = NULL;
	pslot->arrows = NULL;
	pslot->handicap_cpu_level_value = NULL;
	pslot->flash = NULL;
	pslot->p_sfx = NULL;
	pslot->sfx_id = 0;
	pslot->player = NULL;
	pslot->fkind = gSCManagerTransferBattleState.players[player].fkind;

	if ((gSCManagerTransferBattleState.players[player].pkind == nFTPlayerKindMan)
		&& (controller_order = sMNPlayersVSControllerOrders[player], (controller_order == unplugged)))
	{
		pslot->pkind = nFTPlayerKindNot;
		pslot->fkind = nFTKindNull;
	}
	else
	{
		pslot->pkind = gSCManagerTransferBattleState.players[player].pkind;
		controller_order = sMNPlayersVSControllerOrders[player];
	}

	pslot->cpu_level = gSCManagerTransferBattleState.players[player].level;
	pslot->handicap = gSCManagerTransferBattleState.players[player].handicap;
	pslot->team = gSCManagerTransferBattleState.players[player].team;

	if ((pslot->pkind == nFTPlayerKindMan) && (pslot->fkind == nFTKindNull))
	{
		pslot->holder_player = player;
		pslot->held_player = player;
	}
	else
	{
		pslot->holder_player = 4;
		pslot->held_player = -1;
	}

	if (pslot->fkind == nFTKindNull)
	{
		pslot->is_fighter_selected = FALSE;
		pslot->is_selected = FALSE;
		pslot->is_recalling = FALSE;
		pslot->is_status_selected = FALSE;
	}
	else
	{
		pslot->is_fighter_selected = TRUE;
		pslot->is_selected = TRUE;
		pslot->is_recalling = FALSE;
		pslot->is_status_selected = FALSE;
	}

	pslot->costume = gSCManagerTransferBattleState.players[player].costume;
	pslot->shade = gSCManagerTransferBattleState.players[player].shade;

	if ((controller_order != unplugged) && (pslot->pkind == nFTPlayerKindNot))
		pslot->holder_player = player;
}

// 0x8013ADE0
void mnPlayersVSResetPlayer(s32 player)
{
	u8 default_team[4] = {

		0, 0, 1, 1
	};

	sMNPlayersVSSlots[player].team_color_button = NULL;
	sMNPlayersVSSlots[player].handicap_cpu_level = NULL;
	sMNPlayersVSSlots[player].arrows = NULL;
	sMNPlayersVSSlots[player].handicap_cpu_level_value = NULL;
	sMNPlayersVSSlots[player].flash = NULL;
	sMNPlayersVSSlots[player].player = NULL;
	sMNPlayersVSSlots[player].p_sfx = NULL;
	sMNPlayersVSSlots[player].sfx_id = 0;
	sMNPlayersVSSlots[player].is_selected = FALSE;
	sMNPlayersVSSlots[player].cpu_level = gSCManagerTransferBattleState.players[player].level;
	sMNPlayersVSSlots[player].handicap = gSCManagerTransferBattleState.players[player].handicap;
	sMNPlayersVSSlots[player].fkind = nFTKindNull;
	sMNPlayersVSSlots[player].is_recalling = FALSE;
	sMNPlayersVSSlots[player].team = default_team[player];

	if (sMNPlayersVSControllerOrders[player] == -1)
	{
		sMNPlayersVSSlots[player].pkind = nFTPlayerKindNot;
		sMNPlayersVSSlots[player].holder_player = 4;
		sMNPlayersVSSlots[player].held_player = -1;
	}
	else
	{
		sMNPlayersVSSlots[player].pkind = nFTPlayerKindMan;
		sMNPlayersVSSlots[player].holder_player = player;
		sMNPlayersVSSlots[player].held_player = player;
	}
}

// 0x8013AEC8
void mnPlayersVSLoadMatchInfo()
{
	s32 i;

	sMNPlayersVSTotalTimeTics = 0;
	sMNPlayersVSReturnTic = sMNPlayersVSTotalTimeTics + I_MIN_TO_TICS(5);
	sMNPlayersVSTimeValue = gSCManagerTransferBattleState.time_limit;
	sMNPlayersVSStockValue = gSCManagerTransferBattleState.stocks;
	sMNPlayersVSIsStart = FALSE;
	sMNPlayersVSIsTeamBattle = gSCManagerTransferBattleState.is_team_battle;
	sMNPlayersVSGameRule = gSCManagerTransferBattleState.game_rules;
	sMNPlayersVSIsResetPlayers = gSCManagerTransferBattleState.is_reset_players;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if (sMNPlayersVSIsResetPlayers != FALSE)
		{
			mnPlayersVSResetPlayer(i);
			gSCManagerTransferBattleState.is_reset_players = FALSE;
		}
		else mnPlayersVSInitPlayer(i);

		sMNPlayersVSSlots[i].recall_end_tic = 0;
	}
	sMNPlayersVSFighterMask = gSCManagerBackupData.fighter_mask;
}

// 0x8013AFC0
void mnPlayersVSInitSlot(s32 player)
{
	s32 fkind;

	if (sMNPlayersVSControllerOrders[player] != -1)
		mnPlayersVSMakeCursor(player);
	else
		sMNPlayersVSSlots[player].cursor = NULL;

	mnPlayersVSMakePuck(player);
	mnPlayersVSMakeGate(player);

	if (sMNPlayersVSSlots[player].is_selected)
	{
		fkind = sMNPlayersVSSlots[player].fkind;
		if (fkind != nFTKindNull)
			mnPlayersVSMakeFighter(sMNPlayersVSSlots[player].player, player, fkind,
								 sMNPlayersVSSlots[player].costume);
	}
}

// 0x8013B090
void mnPlayersVSInitSlotAll()
{
	mnPlayersVSInitSlot(0);
	mnPlayersVSInitSlot(1);
	mnPlayersVSInitSlot(2);
	mnPlayersVSInitSlot(3);
}

// 0x8013B0C8
void mnPlayersVSFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;
	s32 i, j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*)&sMNPlayersVSStatusBuffer;
	rl_setup.status_buffer_size = 0x78;
	rl_setup.force_status_buffer = (LBFileNode*)&sMNPlayersVSForceStatusBuffer;
	rl_setup.force_status_buffer_size = 7;

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesListed(dMNPlayersVSFileIDs, sMNPlayersVSFiles);

	gcMakeGObjSPAfter(0x400U, mnPlayersVSMain, 0xFU, 0x80000000U);

	gcMakeDefaultCameraGObj(0x10, 0x80000000U, 0x64, 1, 0);

	efParticleInitAll();
	efManagerInitEffects();
	mnSyncControllerOrderArray();
	mnPlayersVSLoadMatchInfo();
	ftManagerAllocFighter(1U, 4);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	for (i = 0; i < 4; i++)
		sMNPlayersVSSlots[i].figatree_heap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);

	mnPlayersVSMakePortraitCamera();
	mnPlayersVSMakeCursorCamera();
	mnPlayersVSMakePuckCamera();
	mnPlayersVSMakePlayerKindCamera();
	mnPlayersVSMakeGateCamera();
	mnPlayersVSMakePlayerKindSelectCamera();
	mnPlayersVSMakeFighterCamera();
	mnPlayersVSMakeTeamSelectCamera();
	mnPlayersVSMakeHandicapLevelCamera();
	mnPlayersVSMakePortraitWallpaperCamera();
	mnPlayersVSMakePortraitFlashCamera();
	mnPlayersVSMakeReadyCamera();

	mnPlayersVSMakeWallpaper();
	mnPlayersVSMakePortraitAll();
	mnPlayersVSInitSlotAll();
	mnPlayersVSDrawTitleAndBack();
	mnPlayersVSMakePuckAdjust();
	mnPlayersVSMakePuckGlow();
	mnPlayersVSMakeCostumeSync();
	mnPlayersVSMakeSpotlight();
	mnPlayersVSMakeReady();

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
SYVideoSetup dMNPlayersVSVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8013B99C
SYTaskmanSetup dMNPlayersVSTaskmanSetup =
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
        mnPlayersVSFuncLights,   	// Pre-render function
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
    
    mnPlayersVSFuncStart         	// Task start function
};

// 0x8013B33C
void mnPlayersVSStartScene(void)
{
	dMNPlayersVSVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNPlayersVSVideoSetup);

	dMNPlayersVSTaskmanSetup.scene_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl26_BSS_END);
	scManagerFuncUpdate(&dMNPlayersVSTaskmanSetup);
}
