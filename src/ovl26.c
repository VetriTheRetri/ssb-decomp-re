#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <reloc_data.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);
// Forward declarations
sb32 mnPlayersVSCheckCostumeUsed(s32 fkind, s32 player, s32 costume);
void mnPlayersVSUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status);
s32 mnPlayersVSUpdateCursorPlacementPriorities(s32 player, s32 held_puck_id); // doesn't actually return anything but required to match
s32 mnPlayersVSCheckHandicapArrowRInRange(GObj* cursor_gobj, s32 player);
s32 mnPlayersVSCheckHandicapArrowLInRange(GObj* cursor_gobj, s32 player);
void mnPlayersVSUpdateCursorGrabPriorities(s32 player, s32 puck_id);
void mnPlayersVSUpdatePuck(GObj* puck_gobj, s32 puck_index);
void mnReplaceFighterNameWithHandicapCPULevel(s32 player);
void mnPlayersVSAnnounceFighter(s32 player, s32 slot);
void mnPlayersVSFuncLights(Gfx** display_list);
s32 mnPlayersVSGetNextTimeValue(s32 current_value);
s32 mnPlayersVSGetPrevTimeValue(s32 current_value);
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

// 0x8013BA80
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
	f32 x = (player * 69) + 64;
	f32 y = 131.0F;

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
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PSprite, &lMNPlayersCommonGate2PSprite,
		&lMNPlayersCommonGate3PSprite, &lMNPlayersCommonGate4PSprite
	};
	f32 pos_x[/* */] = { 8.0F, 5.0F, 5.0F, 5.0F };
	
	void (*proc_displays[/* */])(GObj*) =
	{
		mnPlayersVSShutter1PProcDisplay,
		mnPlayersVSShutter2PProcDisplay,
		mnPlayersVSShutter3PProcDisplay,
		mnPlayersVSShutter4PProcDisplay
	};
	s32 color_ids[/* */] = { 0, 1, 2, 3 };
	s32 start_x;

	sMNPlayersVSSlots[player].panel = gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		22,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		28,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[0],
			&lMNPlayersCommonGateManWallpaperSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	start_x = player * 69;

	SObjGetStruct(gobj)->pos.x = start_x + 22;
	SObjGetStruct(gobj)->pos.y = 126.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		mnPlayersVSSetGateLUT
		(
			gobj,
			color_ids[player],
			sMNPlayersVSSlots[player].pkind
		);
	}
	else mnPlayersVSSetGateLUT
	(
		gobj,
		((sMNPlayersVSSlots[player].team == nSCBattleTeamIDGreen) ? 3 : sMNPlayersVSSlots[player].team),
		sMNPlayersVSSlots[player].pkind
	);

	mnPlayersVSMakePlayerKind(player);

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		23,
		GOBJ_PRIORITY_DEFAULT,
		proc_displays[player],
		29,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[0],
			&lMNPlayersCommonShutterLSprite
		),
		nGCProcessKindFunc,
		mnPlayersVSShuttersProcUpdate,
		1
	);
	gobj->user_data.s = player;

	SObjGetStruct(gobj)->pos.x = start_x - 19;
	SObjGetStruct(gobj)->pos.y = 126.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	sMNPlayersVSSlots[player].panel_doors = gobj;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonShutterRSprite));
	sobj->pos.x = start_x + 88;
	sobj->pos.y = 126.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sMNPlayersVSSlots[player].door_offset = 41;

	mnPlayersVSUpdateShutters(player);
	mnPlayersVSMakePlayerKindSelect(player);

	sMNPlayersVSSlots[player].name_emblem_gobj = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	mnPlayersVSUpdateNameAndEmblem(player);

	if ((mnPlayersVSCheckHandicap() != FALSE) || (sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom))
	{
		mnReplaceFighterNameWithHandicapCPULevel(player);
	}
	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		mnPlayersVSMakeTeamSelect(sMNPlayersVSSlots[player].team, player);
	}
}

// 0x80133A1C
s32 mnPlayersVSGetPowerOf(s32 base, s32 exp)
{
	s32 raised = base;
	s32 i;

	if (exp == 0)
	{
		return 1;
	}
	i = exp;

	while (i > 1)
	{
		i--;
		raised *= base;
	}
	return raised;
}

// 0x80133ABC
void mnPlayersVSSetDigitColors(SObj *sobj, u32 *colors)
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

// 0x80133B04
s32 mnPlayersVSGetNumberDigitCount(s32 number, s32 digit_count_max)
{
    s32 digit_count_curr = digit_count_max;

    while (digit_count_curr > 0)
    {
        s32 digit = (mnPlayersVSGetPowerOf(10, digit_count_curr - 1) != 0) ? number / mnPlayersVSGetPowerOf(10, digit_count_curr - 1) : 0;

        if (digit != 0)
        {
            return digit_count_curr;
        }
        else digit_count_curr--;
    }
    return 0;
}

// 0x80133BB0
void mnPlayersVSMakeGameRuleNumber(GObj *gobj, s32 number, f32 x, f32 y, u32 *colors, s32 digit_count_max, sb32 is_fixed_digit_count)
{
	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonDigit0Sprite,
		&lMNPlayersCommonDigit1Sprite,
		&lMNPlayersCommonDigit2Sprite,
		&lMNPlayersCommonDigit3Sprite,
		&lMNPlayersCommonDigit4Sprite,
		&lMNPlayersCommonDigit5Sprite,
		&lMNPlayersCommonDigit6Sprite,
		&lMNPlayersCommonDigit7Sprite,
		&lMNPlayersCommonDigit8Sprite,
		&lMNPlayersCommonDigit9Sprite
	};

	SObj *sobj;
	f32 left_x = x;
	s32 i;
	s32 digit;

	if (number < 0)
	{
		number = 0;
	}
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], offsets[number % 10]));
	mnPlayersVSSetDigitColors(sobj, colors);
	left_x -= sobj->sprite.width;
	sobj->pos.x = left_x;
	sobj->pos.y = y;

	for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count_max : mnPlayersVSGetNumberDigitCount(number, digit_count_max)); i++)
	{
		digit = (mnPlayersVSGetPowerOf(10, i) != 0) ? number / mnPlayersVSGetPowerOf(10, i) : 0;

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], offsets[digit % 10]));
		mnPlayersVSSetDigitColors(sobj, colors);
		left_x -= sobj->sprite.width;
		sobj->pos.x = left_x;
		sobj->pos.y = y;
	}
}

// 0x80133E28
void mnPlayersVSMakeTimeSetting(s32 number)
{
	u32 colors[/* */] = { 0x32, 0x1C, 0x0E, 0xFF, 0xFF, 0xFF };
	SObj *sobj;

	while (SObjGetStruct(sMNPlayersVSGameRuleGObj)->next != NULL)
	{
		gcEjectSObj(SObjGetStruct(sMNPlayersVSGameRuleGObj)->next);
	}
	if (number == 100)
	{
		sobj = lbCommonMakeSObjForGObj(sMNPlayersVSGameRuleGObj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonSymbolInfiniteSprite));
		sobj->pos.x = 194.0F;
		sobj->pos.y = 24.0F;
		sobj->envcolor.r = colors[0];
		sobj->envcolor.g = colors[1];
		sobj->envcolor.b = colors[2];
		sobj->sprite.red = colors[3];
		sobj->sprite.green = colors[4];
		sobj->sprite.blue = colors[5];
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
	}
	else if (number < 10)
	{
		mnPlayersVSMakeGameRuleNumber(sMNPlayersVSGameRuleGObj, number, 208.0F, 23.0F, colors, 2, FALSE);
	}
	else mnPlayersVSMakeGameRuleNumber(sMNPlayersVSGameRuleGObj, number, 212.0F, 23.0F, colors, 2, FALSE);
}

// 0x80133FAC
void mnPlayersVSMakeTimeSelect(s32 number)
{
	GObj *gobj;

	if (sMNPlayersVSGameRuleGObj != NULL)
	{
		gcEjectGObj(sMNPlayersVSGameRuleGObj);
	}
	sMNPlayersVSGameRuleGObj = gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		25,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		26,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[0],
			&lMNPlayersCommonGameRuleTimeSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 140.0F;
	SObjGetStruct(gobj)->pos.y = 22.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayersVSMakeTimeSetting(sMNPlayersVSTimeValue);
}

// 0x80134094
void mnPlayersVSMakeStockSetting(s32 number)
{
	u32 colors[/* */] = { 0x32, 0x1C, 0x0E, 0xFF, 0xFF, 0xFF };

	while (SObjGetStruct(sMNPlayersVSGameRuleGObj)->next != NULL)
	{
		gcEjectSObj(SObjGetStruct(sMNPlayersVSGameRuleGObj)->next);
	}
	if (number < 10)
	{
		mnPlayersVSMakeGameRuleNumber(sMNPlayersVSGameRuleGObj, number, 210.0F, 23.0F, colors, 2, FALSE);
	}
 	else mnPlayersVSMakeGameRuleNumber(sMNPlayersVSGameRuleGObj, number, 214.0F, 23.0F, colors, 2, FALSE);
}

// 0x80134198
void mnPlayersVSMakeStockSelect(s32 number)
{
	GObj *gobj;

	if (sMNPlayersVSGameRuleGObj != NULL)
	{
		gcEjectGObj(sMNPlayersVSGameRuleGObj);
	}
	sMNPlayersVSGameRuleGObj = gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		25,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		26,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[0],
			&lMNPlayersCommonGameRuleStockSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 140.0F;
	SObjGetStruct(gobj)->pos.y = 22.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayersVSMakeStockSetting(sMNPlayersVSStockValue + 1);
}

// 0x80134284
void mnPlayersVSMakeWallpaper(void)
{
	GObj *gobj;
	SObj *sobj;

	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			80,
			COBJ_MASK_DLLINK(26),
			~0,
			FALSE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 26, GOBJ_PRIORITY_DEFAULT, ~0);
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[3], &lMNSelectCommonWallpaperSprite));
	sobj->cms = G_TX_WRAP;
	sobj->cmt = G_TX_WRAP;
	sobj->masks = 6;
	sobj->maskt = 5;
	sobj->lrs = 300;
	sobj->lrt = 220;
	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 0x801343B0
void mnPlayersVSMakeLabels(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersGameModesRoyalSprite,
		&lMNPlayersGameModesTeamBattleSprite
	};
	SYColorRGB colors[/* */] =
	{
		{ 0xE3, 0xAC, 0x04 },
		{ 0x61, 0xAD, 0x49 }
	};

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		25,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		26,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[4],
			offsets[sMNPlayersVSIsTeamBattle]
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 27.0F;
	SObjGetStruct(gobj)->pos.y = 24.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = colors[sMNPlayersVSIsTeamBattle].r;
	SObjGetStruct(gobj)->sprite.green = colors[sMNPlayersVSIsTeamBattle].g;
	SObjGetStruct(gobj)->sprite.blue = colors[sMNPlayersVSIsTeamBattle].b;
	sMNPlayersVSGameModeGObj = gobj;

	(sMNPlayersVSGameRule == SCBATTLE_GAMERULE_TIME) ? mnPlayersVSMakeTimeSelect(sMNPlayersVSTimeValue) : mnPlayersVSMakeStockSelect(sMNPlayersVSStockValue);

	gobj = lbCommonMakeSpriteGObj
	(
		0,
		NULL,
		25,
		GOBJ_PRIORITY_DEFAULT,
		lbCommonDrawSObjAttr,
		26,
		GOBJ_PRIORITY_DEFAULT,
		~0,
		lbRelocGetFileData
		(
			Sprite*,
			sMNPlayersVSFiles[0],
			&lMNPlayersCommonBackSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 244.0F;
	SObjGetStruct(gobj)->pos.y = 23.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801345F0 - Unused?
void func_ovl26_801345F0(void)
{
	return;
}

// 0x801345F8 - Unused?
void func_ovl26_801345F8(void)
{
	return;
}

// 0x80134600 - Unused?
void func_ovl26_80134600(void)
{
	return;
}

// 0x80134608
s32 mnPlayersVSGetFighterKindCount(s32 fkind)
{
	s32 count = 0, i;

	for (i = 0; i < GMCOMMON_PLAYERS_MAX; i++)
	{
		if (fkind == sMNPlayersVSSlots[i].fkind)
		{
			count++;
		}
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
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x8013473C - Gets the first costume not in use by another port
s32 mnPlayersVSGetFreeCostumeRoyal(s32 fkind, s32 player)
{
	s32 i, j, k, l;
	sb32 is_costume_used[GMCOMMON_PLAYERS_MAX];

	for (i = 0; i < ARRAY_COUNT(is_costume_used); i++)
	{
		is_costume_used[i] = FALSE;
	}
	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if (i != player)
		{
			if (fkind == sMNPlayersVSSlots[i].fkind)
			{
				for (j = 0; j < ARRAY_COUNT(is_costume_used); j++)
				{
					if (ftParamGetCostumeCommonID(fkind, j) == sMNPlayersVSSlots[i].costume)
					{
						is_costume_used[j] = TRUE;
					}
				}
			}
		}
	}
	for (k = 0; k < ARRAY_COUNT(is_costume_used); k++)
	{
		if (is_costume_used[k] == FALSE)
		{
			return k;
		}
	}
}

// 0x8013487C
s32 mnPlayersVSGetFreeCostume(s32 fkind, s32 player)
{
	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		return ftParamGetCostumeCommonID(fkind, mnPlayersVSGetFreeCostumeRoyal(fkind, player));
	}
	else if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		return ftParamGetCostumeTeamID(fkind, sMNPlayersVSSlots[player].team);
	}
}

// 0x801348EC
s32 mnPlayersVSGetStatusSelected(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindFox:
	case nFTKindSamus:	
		return nFTDemoStatusWin4;

	case nFTKindDonkey:
	case nFTKindLuigi:
	case nFTKindLink:
	case nFTKindCaptain:
		return nFTDemoStatusWin1;

	case nFTKindYoshi:
	case nFTKindPurin:
	case nFTKindNess:
		return nFTDemoStatusWin2;
		
	case nFTKindMario:
	case nFTKindKirby:
		return nFTDemoStatusWin3;
		
	default:
		return nFTDemoStatusWin1;
	}
}

// 0x8013494C
void mnPlayersVSFighterProcUpdate(GObj* fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;

	if (sMNPlayersVSSlots[player].is_fighter_selected == TRUE)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (sMNPlayersVSSlots[player].is_status_selected == FALSE)
			{
				scSubsysFighterSetStatus(sMNPlayersVSSlots[player].player, mnPlayersVSGetStatusSelected(sMNPlayersVSSlots[player].fkind));

				sMNPlayersVSSlots[player].is_status_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(sMNPlayersVSSlots[player].player, mnPlayersVSGetStatusSelected(sMNPlayersVSSlots[player].fkind));

				sMNPlayersVSSlots[player].is_status_selected = TRUE;
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

// 0x80134A8C
void mnPlayersVSMakeFighter(GObj *fighter_gobj, s32 player, s32 fkind, s32 costume)
{
	f32 rot_y;
	FTDesc desc = dFTManagerDefaultFighterDesc;

	if (fkind != nFTKindNull)
	{
		if (fighter_gobj != NULL)
		{
			rot_y = DObjGetStruct(fighter_gobj)->rotate.vec.f.y;
			ftManagerDestroyFighter(fighter_gobj);
		}
		else rot_y = F_CST_DTOR32(0.0F);
		
		desc.fkind = fkind;
		sMNPlayersVSSlots[player].costume = desc.costume = costume;
		desc.shade = sMNPlayersVSSlots[player].shade;
		desc.figatree_heap = sMNPlayersVSSlots[player].figatree_heap;
		desc.player = player;
		fighter_gobj = ftManagerMakeFighter(&desc);

		sMNPlayersVSSlots[player].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnPlayersVSFighterProcUpdate, nGCProcessKindFunc, 1);

		DObjGetStruct(fighter_gobj)->translate.vec.f.x = (player * 840) - 1250;
		DObjGetStruct(fighter_gobj)->translate.vec.f.y = -850.0F;

		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = rot_y;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];

		if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom)
		{
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
		}
	}
}

// 0x80134C64
void mnPlayersVSMakeFighterCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			nGCCommonKindSceneCamera,
			NULL,
			16,
			GOBJ_PRIORITY_DEFAULT,
			func_80017EC0,
			30,
			COBJ_MASK_DLLINK(18) | COBJ_MASK_DLLINK(15) |
			COBJ_MASK_DLLINK(10) | COBJ_MASK_DLLINK(9),
			~0,
			TRUE,
			nGCProcessKindFunc,
			NULL,
			1,
			FALSE
		)
	);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.y = 0.0F;
	cobj->vec.eye.z = 5000.0F;

	cobj->flags = COBJ_FLAG_DLBUFFERS;

	cobj->vec.at.x = 0.0F;
	cobj->vec.at.y = 0.0F;
	cobj->vec.at.z = 0.0F;

	cobj->vec.up.x = 0.0F;
	cobj->vec.up.z = 0.0F;
	cobj->vec.up.y = 1.0F;
}

// 0x80134D54
void mnPlayersVSUpdateCursor(GObj *gobj, s32 player, s32 cursor_status)
{
	SObj *sobj;
	f32 start_pos_x, start_pos_y;
	SYColorRGBPair colors[/* */] =
	{
		{ { 0xE0, 0x15, 0x15 }, { 0x5B, 0x00, 0x00 } },
		{ { 0x00, 0x00, 0xFB }, { 0x00, 0x00, 0x52 } },
		{ { 0xCA, 0x94, 0x08 }, { 0x62, 0x3C, 0x00 } },
		{ { 0x00, 0x91, 0x00 }, { 0x00, 0x4F, 0x00 } }
	};
	intptr_t num_offsets[/* */] =
	{
		&lMNPlayersCommonCursorNum1PSprite,
		&lMNPlayersCommonCursorNum2PSprite,
		&lMNPlayersCommonCursorNum3PSprite,
		&lMNPlayersCommonCursorNum4PSprite
	};
	intptr_t cursor_offsets[/* */] =
	{
		&lMNPlayersCommonCursorPointSprite,
		&lMNPlayersCommonCursorGrabSprite,
		&lMNPlayersCommonCursorHoverSprite
	};
	Vec2i pos[/* */] =
	{
		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};

	start_pos_x = SObjGetStruct(gobj)->pos.x;
	start_pos_y = SObjGetStruct(gobj)->pos.y;

	gcRemoveSObjAll(gobj);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], cursor_offsets[cursor_status]));
	sobj->pos.x = start_pos_x;
	sobj->pos.y = start_pos_y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], num_offsets[player]));
	sobj->pos.x = sobj->prev->pos.x + pos[cursor_status].x;
	sobj->pos.y = sobj->prev->pos.y + pos[cursor_status].y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = colors[player].prim.r;
	sobj->sprite.green = colors[player].prim.g;
	sobj->sprite.blue = colors[player].prim.b;
	sobj->envcolor.r = colors[player].env.r;
	sobj->envcolor.g = colors[player].env.g;
	sobj->envcolor.b = colors[player].env.b;
}

// 0x80134F64
sb32 mnPlayersVSCheckTimeArrowRInRange(GObj *gobj)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_y = sobj->pos.y + 3.0F;

	is_in_range = ((pos_y < 12.0F) || (pos_y > 35.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return FALSE;
	}
	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= 210.0F) && (pos_x <= 230.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x8013502C
s32 mnPlayersVSCheckTimeArrowLInRange(GObj *gobj)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_y = sobj->pos.y + 3.0F;

	is_in_range = ((pos_y < 12.0F) || (pos_y > 35.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return FALSE;
	}
	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= 140.0F) && (pos_x <= 160.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x801350F4 - Unused?
void func_ovl26_801350F4(void)
{
	return;
}

// 0x801350FC
void mnPlayersVSUpdateGateAll(void)
{
	s32 i;
	s32 player_ids[/* */] = { 0, 1, 2, 3 };

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		for (i = 0; i < (ARRAY_COUNT(sMNPlayersVSSlots) + ARRAY_COUNT(player_ids)) / 2; i++)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[i].panel, player_ids[i], sMNPlayersVSSlots[i].pkind);

			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[i].costume = ftParamGetCostumeCommonID
				(
					sMNPlayersVSSlots[i].fkind,
					mnPlayersVSGetFreeCostumeRoyal(sMNPlayersVSSlots[i].fkind, i)
				);
				sMNPlayersVSSlots[i].shade = mnPlayersVSGetShade(i);
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, sMNPlayersVSSlots[i].costume, sMNPlayersVSSlots[i].shade);
			}
		}
	}
	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
		{
			mnPlayersVSSetGateLUT
			(
				sMNPlayersVSSlots[i].panel,
				(sMNPlayersVSSlots[i].team == nSCBattleTeamIDGreen) ? 3 : sMNPlayersVSSlots[i].team,
				sMNPlayersVSSlots[i].pkind
			);
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[i].costume = ftParamGetCostumeTeamID(sMNPlayersVSSlots[i].fkind, sMNPlayersVSSlots[i].team);
				sMNPlayersVSSlots[i].shade = mnPlayersVSGetShade(i);
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, sMNPlayersVSSlots[i].costume, sMNPlayersVSSlots[i].shade);
			}
		}
	}
}

// 0x80135270
sb32 mnPlayersVSCheckGameModeInRange(GObj *gobj)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_x = sobj->pos.x + 20.0F;
	is_in_range = ((pos_x >= 27.0F) && (pos_x <= 137.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = sobj->pos.y + 3.0F;
		is_in_range = ((pos_y >= 14.0F) && (pos_y <= 35.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x80135334
void mnPlayersVSUpdateGameMode(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 i;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersGameModesRoyalSprite,
		&lMNPlayersGameModesTeamBattleSprite
	};
	SYColorRGB colors[/* */] =
	{
		{ 0xE3, 0xAC, 0x04 },
		{ 0x61, 0xAD, 0x49 }
	};

	gobj = sMNPlayersVSGameModeGObj;

	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		sMNPlayersVSIsTeamBattle = FALSE;
	}
	else sMNPlayersVSIsTeamBattle = TRUE;

	func_800266A0_272A0();
	func_800269C0_275C0(nSYAudioFGMMenuScroll2);

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		func_800269C0_275C0(nSYAudioVoiceAnnounceFreeForAll);
	}
	else func_800269C0_275C0(nSYAudioVoiceAnnounceTeamBattle);

	gcRemoveSObjAll(gobj);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[4], offsets[sMNPlayersVSIsTeamBattle]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.x = 27.0F;
	sobj->pos.y = 24.0F;
	sobj->sprite.red = colors[sMNPlayersVSIsTeamBattle].r;
	sobj->sprite.green = colors[sMNPlayersVSIsTeamBattle].g;
	sobj->sprite.blue = colors[sMNPlayersVSIsTeamBattle].b;

	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
		{
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[i].shade = 4;
			}
		}
	}
	mnPlayersVSUpdateGateAll();

	if (sMNPlayersVSIsTeamBattle == FALSE)
	{
		mnPlayersVSDestroyTeamSelectAll();
	}
	else mnPlayersVSMakeTeamSelectAll();
}

// 0x80135554
s32 mnPlayersVSCheckTeamSelectInRange(GObj *gobj, s32 player)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_x = sobj->pos.x + 20.0F;

	is_in_range = (pos_x >= (player * 69) + 34) && (pos_x <= (player * 69) + 58) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = sobj->pos.y + 3.0F;

		is_in_range = (pos_y >= 131.0F) && (pos_y <= 141.0F) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x80135634
sb32 mnPlayersVSCheckTeamSelectInRangeAll(GObj *gobj, s32 cursor_player)
{
	s32 player;

	s32 color_ids[/* */] = { 0, 1, 3 };
	u32 announce_teams[/* */] =
	{
		nSYAudioVoiceAnnounceRedTeam,
		nSYAudioVoiceAnnounceBlueTeam,
		nSYAudioVoiceAnnounceGreenTeam
	};

	u32 shade;

	if (sMNPlayersVSIsTeamBattle != TRUE)
	{
		return FALSE;
	}
	for (player = 0; player < ARRAY_COUNT(sMNPlayersVSSlots); player++)
	{
		if ((sMNPlayersVSSlots[player].pkind != nFTPlayerKindNot) && (mnPlayersVSCheckTeamSelectInRange(gobj, player) != FALSE))
		{
			sMNPlayersVSSlots[player].team = (sMNPlayersVSSlots[player].team == nSCBattleTeamIDGreen) ? 0 : sMNPlayersVSSlots[player].team + 1;

			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel, color_ids[sMNPlayersVSSlots[player].team], sMNPlayersVSSlots[player].pkind);
			mnPlayersVSUpdateTeamSelect(sMNPlayersVSSlots[player].team, player);

			if (sMNPlayersVSSlots[player].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[player].costume = ftParamGetCostumeTeamID(sMNPlayersVSSlots[player].fkind, sMNPlayersVSSlots[player].team);
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
sb32 mnPlayersVSCheckHandicapArrowInRangeAll(GObj *gobj, s32 cursor_player)
{
	s32 player;
	s32 *value;

	for (player = 0; player < ARRAY_COUNT(sMNPlayersVSSlots); player++)
	{
		value = (sMNPlayersVSSlots[player].pkind == nFTPlayerKindMan) ? (s32*) &sMNPlayersVSSlots[player].handicap : (s32*) &sMNPlayersVSSlots[player].cpu_level;

		if
		(
			(
				(sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom) ||
				(
					(mnPlayersVSCheckHandicapOn() != FALSE) &&
					(sMNPlayersVSSlots[player].pkind == nFTPlayerKindMan) &&
					(player == cursor_player)
				)
			)
			&&
			(sMNPlayersVSSlots[player].is_fighter_selected != FALSE)
		)
		{
			if (mnPlayersVSCheckHandicapArrowRInRange(gobj, player) != FALSE)
			{
				if (*value < 9)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*value += 1;
					mnMakeHandicapLevelValue(player);
				}
				return TRUE;
			}
			if (mnPlayersVSCheckHandicapArrowLInRange(gobj, player) != FALSE)
			{
				if (*value > 1)
				{
					func_800269C0_275C0(nSYAudioFGMMenuScroll2);
					*value -= 1;
					mnMakeHandicapLevelValue(player);
				}
				return TRUE;
			}
		}
	}
	return FALSE;
}

// 0x801358F8
sb32 mnPlayersVSCheckHandicapArrowRInRange(GObj *gobj, s32 player)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= (player * 69) + 68) && (pos_x <= (player * 69) + 90)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = sobj->pos.y + 3.0F;

		is_in_range = ((pos_y >= 197.0F) && (pos_y <= 216.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x801359D8
sb32 mnPlayersVSCheckHandicapArrowLInRange(GObj *gobj, s32 player)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= (player * 69) + 21) && (pos_x <= (player * 69) + 43)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = sobj->pos.y + 3.0F;

		is_in_range = ((pos_y >= 197.0F) && (pos_y <= 216.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x80135AB8
s32 mnPlayersVSCheckPlayerKindSelectInRange(GObj *gobj, s32 player)
{
	f32 pos_x, pos_y;
	s32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= (player * 69) + 60) && (pos_x <= (player * 69) + 88)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = sobj->pos.y + 3.0F;

		is_in_range = ((pos_y >= 127.0F) && (pos_y <= 145.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x80135B98
sb32 mnPlayersVSCheckPuckInRange(GObj *gobj, s32 cursor_player, s32 player)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *cursor_sobj = SObjGetStruct(gobj);
	SObj *puck_sobj = SObjGetStruct(sMNPlayersVSSlots[player].puck);

	pos_x = cursor_sobj->pos.x + 25.0F;
	is_in_range = ((pos_x >= puck_sobj->pos.x) && (pos_x <= puck_sobj->pos.x + 26.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		pos_y = cursor_sobj->pos.y + 3.0F;
		is_in_range = ((pos_y >= puck_sobj->pos.y) && (pos_y <= puck_sobj->pos.y + 24.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			return TRUE;
		}
	}
	return FALSE;
}

// 0x80135C84
void mnPlayersVSUpdatePlayerKind(s32 player)
{
	switch (sMNPlayersVSSlots[player].pkind)
	{
	case nFTPlayerKindMan:
		if (sMNPlayersVSSlots[player].held_player != -1)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].holder_player = GMCOMMON_PLAYERS_MAX;
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
		if (sMNPlayersVSIsTeamBattle == FALSE)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel, player, sMNPlayersVSSlots[player].pkind);
		}
		else mnPlayersVSSetGateLUT
		(
			sMNPlayersVSSlots[player].panel,
			(sMNPlayersVSSlots[player].team == nSCBattleTeamIDGreen) ? 3 : sMNPlayersVSSlots[player].team,
			sMNPlayersVSSlots[player].pkind
		);
		break;

	case nFTPlayerKindCom:
		if (sMNPlayersVSSlots[player].held_player != -1)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].holder_player = GMCOMMON_PLAYERS_MAX;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_selected = TRUE;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].is_fighter_selected = TRUE;

			mnPlayersVSUpdateCursorPlacementPriorities(player, sMNPlayersVSSlots[player].held_player);
			mnReplaceFighterNameWithHandicapCPULevel(sMNPlayersVSSlots[player].held_player);
			mnPlayersVSMakePortraitFlash(sMNPlayersVSSlots[player].held_player);
		}
		sMNPlayersVSSlots[player].is_selected = TRUE;
		sMNPlayersVSSlots[player].holder_player = GMCOMMON_PLAYERS_MAX;
		sMNPlayersVSSlots[player].held_player = -1;

		mnPlayersVSUpdateCursorPlacementPriorities(sMNPlayersVSSlots[player].holder_player, player);

		sMNPlayersVSSlots[player].is_fighter_selected = TRUE;

		if (sMNPlayersVSSlots[player].fkind == nFTKindNull)
		{
			sMNPlayersVSSlots[player].fkind = mnSelectRandomFighter(sMNPlayersVSSlots[player].puck);
		}
		sMNPlayersVSSlots[player].is_cursor_adjusting = FALSE;

		if (sMNPlayersVSSlots[player].type != NULL)
		{
			gcEjectGObj(sMNPlayersVSSlots[player].type);
			mnPlayersVSMakePlayerKind(player);
		}
		if (sMNPlayersVSIsTeamBattle == FALSE)
		{
			mnPlayersVSSetGateLUT(sMNPlayersVSSlots[player].panel, player, sMNPlayersVSSlots[player].pkind);
		}
		else mnPlayersVSSetGateLUT
		(
			sMNPlayersVSSlots[player].panel,
			(sMNPlayersVSSlots[player].team == nSCBattleTeamIDGreen) ? 3 : sMNPlayersVSSlots[player].team,
			sMNPlayersVSSlots[player].pkind
		);
		break;

	case nFTPlayerKindNot:
		if (sMNPlayersVSSlots[player].holder_player != GMCOMMON_PLAYERS_MAX)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].held_player = -1;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].is_selected = TRUE;
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor_status = nMNPlayersCursorStatusHover;

			if (sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor != NULL)
			{
				mnPlayersVSUpdateCursor
				(
					sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor,
					sMNPlayersVSSlots[player].holder_player,
					sMNPlayersVSSlots[sMNPlayersVSSlots[player].holder_player].cursor_status
				);
			}
		}
		if (sMNPlayersVSSlots[player].held_player != -1)
		{
			sMNPlayersVSSlots[sMNPlayersVSSlots[player].held_player].holder_player = GMCOMMON_PLAYERS_MAX;
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
		{
			sMNPlayersVSSlots[player].holder_player = player;
		}
		break;
	}
}

// 0x80136038
void mnPlayersVSUpdatePuckDisplay(GObj *gobj, s32 player)
{
	s32 puck_ids[/* */] = { 0, 1, 2, 3 };

	if ((sMNPlayersVSSlots[player].cursor_status == nMNPlayersCursorStatusPointer) && (sMNPlayersVSSlots[player].is_selected == FALSE))
	{
		gobj->flags = GOBJ_FLAG_HIDDEN;
	}
	else gobj->flags = GOBJ_FLAG_NONE;

	switch (sMNPlayersVSSlots[player].pkind)
	{
	case nFTPlayerKindMan:
		sMNPlayersVSSlots[player].is_selected = FALSE;
		mnPlayersVSUpdatePuck(gobj, puck_ids[player]);
		break;

	case nFTPlayerKindCom:
		mnPlayersVSUpdatePuck(gobj, GMCOMMON_PLAYERS_MAX);
		sMNPlayersVSSlots[player].is_selected = TRUE;
		break;

	case nFTPlayerKindNot:
		gobj->flags = GOBJ_FLAG_HIDDEN;
		break;
	}
	return;
}

// 0x80136128
void mnPlayersVSUpdateFighter(s32 player)
{
	sb32 is_skip_fighter = FALSE;
	GObj *fighter_gobj = sMNPlayersVSSlots[player].player;

	if (fighter_gobj != NULL)
	{
		if (sMNPlayersVSSlots[player].pkind == nFTPlayerKindNot)
		{
			fighter_gobj->flags = GOBJ_FLAG_HIDDEN;
			is_skip_fighter = TRUE;
		}
		else if ((sMNPlayersVSSlots[player].fkind == nFTKindNull) && (sMNPlayersVSSlots[player].is_selected == FALSE))
		{
			fighter_gobj->flags = GOBJ_FLAG_HIDDEN;
			is_skip_fighter = TRUE;
		}
	}
	if (is_skip_fighter == FALSE)
	{
		sMNPlayersVSSlots[player].shade = mnPlayersVSGetShade(player);

		mnPlayersVSMakeFighter
		(
			sMNPlayersVSSlots[player].player,
			player,
			sMNPlayersVSSlots[player].fkind,
			mnPlayersVSGetFreeCostume(sMNPlayersVSSlots[player].fkind, player)
		);
		sMNPlayersVSSlots[player].is_status_selected = FALSE;
	}
}

// 0x801361F8
void mnPlayersVSUpdateCursorDisplay(GObj *gobj, s32 player)
{
	if (gobj != NULL)
	{
		if ((SObjGetStruct(gobj)->pos.y > 122.0F) || (SObjGetStruct(gobj)->pos.y < 36.0F))
		{
			if (sMNPlayersVSSlots[player].cursor_status != nMNPlayersCursorStatusPointer)
			{
				mnPlayersVSUpdateCursor(gobj, player, nMNPlayersCursorStatusPointer);
				sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusPointer;
			}
		}
		else if ((sMNPlayersVSSlots[player].is_selected == 1) || (sMNPlayersVSSlots[player].pkind == nFTPlayerKindNot))
		{
			mnPlayersVSUpdateCursor(gobj, player, nMNPlayersCursorStatusHover);
			sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusHover;
		}
		else if (sMNPlayersVSSlots[player].cursor_status != nMNPlayersCursorStatusGrab)
		{
			mnPlayersVSUpdateCursor(gobj, player, nMNPlayersCursorStatusGrab);
			sMNPlayersVSSlots[player].cursor_status = nMNPlayersCursorStatusGrab;
		}
	}
}

// 0x80136300
void mnPlayersVSUpdateNameAndEmblem(s32 player)
{
	if
	(
		(sMNPlayersVSSlots[player].pkind == nFTPlayerKindNot) ||
		(sMNPlayersVSSlots[player].fkind == nFTKindNull) &&
		(sMNPlayersVSSlots[player].is_selected == FALSE)
	)
	{
		sMNPlayersVSSlots[player].name_emblem_gobj->flags = GOBJ_FLAG_HIDDEN;
	}
	else
	{
		sMNPlayersVSSlots[player].name_emblem_gobj->flags = GOBJ_FLAG_NONE;
		mnPlayersVSMakeNameAndEmblem(sMNPlayersVSSlots[player].name_emblem_gobj, player, sMNPlayersVSSlots[player].fkind);
	}
}

// 0x80136388
void mnPlayersVSDestroyPortraitFlash(s32 player)
{
	GObj *gobj = sMNPlayersVSSlots[player].flash;

	if (gobj != NULL)
	{
		gcEjectGObj(gobj);
		sMNPlayersVSSlots[player].flash = NULL;
	}
}

// 0x801363DC
void mnPlayersVSPortraitFlashThreadUpdate(GObj *gobj)
{
	s32 length = 16;
	s32 wait_tics = 1;

	while (TRUE)
	{
		length--, wait_tics--;

		if (length == 0)
		{
			mnPlayersVSDestroyPortraitFlash(gobj->user_data.s);
		}
		if (wait_tics == 0)
		{
			wait_tics = 1;
			gobj->flags = (gobj->flags == GOBJ_FLAG_HIDDEN) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x8013647C
void mnPlayersVSMakePortraitFlash(s32 player)
{
	GObj *gobj;
	SObj *sobj;
	s32 portrait = mnPlayersVSGetPortrait(sMNPlayersVSSlots[player].fkind);

	mnPlayersVSDestroyPortraitFlash(player);
	
	sMNPlayersVSSlots[player].flash = gobj = gcMakeGObjSPAfter(0, NULL, 30, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 37, GOBJ_PRIORITY_DEFAULT, ~0);
	gobj->user_data.s = player;
	gcAddGObjProcess(gobj, mnPlayersVSPortraitFlashThreadUpdate, nGCProcessKindThread, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[5], &lMNPlayersPortraitsFlashSprite));
	sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 26;
	sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 37;
}

// 0x801365D0 - player = player who pressed the button, select_player = player whose button was pressed
sb32 mnPlayersVSCheckPlayerKindSelect(GObj *gobj, s32 player, s32 select_player)
{
	s32 pkind;

	if (mnPlayersVSCheckPlayerKindSelectInRange(gobj, select_player))
	{
		if (sMNPlayersVSControllerOrders[select_player] == -1)
		{
			pkind = (sMNPlayersVSSlots[select_player].pkind + 1);

			sMNPlayersVSSlots[select_player].pkind = (pkind > nFTPlayerKindNot) ? nFTPlayerKindCom : pkind;
		}
		else
		{
			pkind = sMNPlayersVSSlots[select_player].pkind + 1;

			sMNPlayersVSSlots[select_player].pkind = (pkind > nFTPlayerKindNot) ? nFTPlayerKindMan : pkind;
		}
		mnPlayersVSUpdatePlayerKind(select_player);
		mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[select_player].type_button, select_player, sMNPlayersVSSlots[select_player].pkind);
		mnPlayersVSUpdatePuckDisplay(sMNPlayersVSSlots[select_player].puck, select_player);
		mnPlayersVSUpdateCursorDisplay(sMNPlayersVSSlots[select_player].cursor, select_player);
		mnPlayersVSUpdateFighter(select_player);
		mnPlayersVSUpdateNameAndEmblem(select_player);

		switch (sMNPlayersVSSlots[select_player].pkind)
		{
		case nFTPlayerKindMan:
			sMNPlayersVSSlots[select_player].holder_player = select_player;
			func_800269C0_275C0(nSYAudioFGMPlayerSlotWhoosh);
			break;

		case nFTPlayerKindCom:
			sMNPlayersVSSlots[select_player].holder_player = GMCOMMON_PLAYERS_MAX;
			mnPlayersVSAnnounceFighter(player, select_player);
			mnReplaceFighterNameWithHandicapCPULevel(select_player);
			mnPlayersVSMakePortraitFlash(select_player);
			break;

		case nFTPlayerKindNot:
			func_800269C0_275C0(nSYAudioFGMPlayerSlotWhoosh);
			break;
		}
		func_800269C0_275C0(nSYAudioFGMTitlePressStart);

		return TRUE;
	}
	return FALSE;
}

// 0x8013676C - check if specific player has pressed any one of the player type buttons
sb32 mnPlayersVSCheckPlayerKindSelectAllPlayer(GObj *gobj, s32 player)
{
	sb32 is_pressed = FALSE;

	if (mnPlayersVSCheckPlayerKindSelect(gobj, player, 0) != FALSE)
	{
		is_pressed = TRUE;
	}
	if (mnPlayersVSCheckPlayerKindSelect(gobj, player, 1) != FALSE)
	{
		is_pressed = TRUE;
	}
	if (mnPlayersVSCheckPlayerKindSelect(gobj, player, 2) != FALSE)
	{
		is_pressed = TRUE;
	}
	if (mnPlayersVSCheckPlayerKindSelect(gobj, player, 3) != FALSE)
	{
		is_pressed = TRUE;
	}
	return is_pressed;
}

// 0x801367F0
void mnPlayersVSAnnounceFighter(s32 player, s32 slot)
{
	u16 announce_names[/* */] =
	{
		nSYAudioVoiceAnnounceMario,
		nSYAudioVoiceAnnounceFox,
		nSYAudioVoiceAnnounceDonkey,
		nSYAudioVoiceAnnounceSamus,
		nSYAudioVoiceAnnounceLuigi,
		nSYAudioVoiceAnnounceLink,
		nSYAudioVoiceAnnounceYoshi,
		nSYAudioVoiceAnnounceCaptain,
		nSYAudioVoiceAnnounceKirby,
		nSYAudioVoiceAnnouncePikachu,
		nSYAudioVoiceAnnouncePurin,
		nSYAudioVoiceAnnounceNess
	};

	func_80026738_27338(sMNPlayersVSSlots[player].p_sfx);
	func_800269C0_275C0(nSYAudioFGMMarioDash);

	sMNPlayersVSSlots[player].p_sfx = func_800269C0_275C0(announce_names[sMNPlayersVSSlots[slot].fkind]);

	if (sMNPlayersVSSlots[player].p_sfx != NULL)
	{
		sMNPlayersVSSlots[player].sfx_id = sMNPlayersVSSlots[player].p_sfx->sfx_id;
	}
}

// 0x801368C4
void mnPlayersVSHideFighterName(s32 player)
{
	SObj *sobj = SObjGetStruct(sMNPlayersVSSlots[player].name_emblem_gobj);

	if (sobj != NULL)
	{
		if (sobj->next != NULL)
		{
			sobj->next->sprite.attr |= SP_HIDDEN;
		}
	}
}

// 0x80136910
void mnPlayersVSDestroyHandicapLevel(s32 player)
{
	if (sMNPlayersVSSlots[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(sMNPlayersVSSlots[player].handicap_cpu_level);
	}
	if (sMNPlayersVSSlots[player].arrows != NULL)
	{
		gcEjectGObj(sMNPlayersVSSlots[player].arrows);
	}
	if (sMNPlayersVSSlots[player].handicap_cpu_level_value != NULL)
	{
		gcEjectGObj(sMNPlayersVSSlots[player].handicap_cpu_level_value);
	}
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
				= lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17ArrowLSpriteOffset));
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
				= lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], &relocFile17ArrowRSpriteOffset));
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

	mnPlayersVSHideFighterName(player);
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
	s32 pos_y = (s32)puck_sobj->pos.x + 13;
	s32 pos_x = (s32)puck_sobj->pos.y + 12;
	s32 fkind;
	sb32 is_in_range;

	is_in_range = (pos_x >= 36) && (pos_x < 79) ? TRUE : FALSE;

	if (is_in_range)
	{
		is_in_range = (pos_y >= 25) && (pos_y < 295) ? TRUE : FALSE;

		if (is_in_range)
		{
			fkind = mnPlayersVSGetFighterKind((s32)(pos_y - 25) / 45);

			if ((mnPlayersVSCheckFighterCrossed(fkind)) || (mnPlayersVSCheckFighterLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}

	is_in_range = (pos_x >= 79) && (pos_x < 122) ? TRUE : FALSE;

	if (is_in_range)
	{
		is_in_range = (pos_y >= 25) && (pos_y < 295) ? TRUE : FALSE;

		if (is_in_range)
		{
			fkind = mnPlayersVSGetFighterKind(((s32)(pos_y - 25) / 45) + 6);

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
	sb32 is_in_range;

	if (sMNPlayersVSSlots[player].is_cursor_adjusting)
	{
		delta
			= (sMNPlayersVSSlots[player].cursor_pickup_x - SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x) / 5.0F;

		is_in_range = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_in_range != 0)
			SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x = sMNPlayersVSSlots[player].cursor_pickup_x;
		else
			SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.x += delta;

		delta
			= (sMNPlayersVSSlots[player].cursor_pickup_y - SObjGetStruct(sMNPlayersVSSlots[player].cursor)->pos.y) / 5.0F;

		is_in_range = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_in_range != 0)
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

		is_in_range = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_in_range != 0)
		{
			delta = ((f32)controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_in_range = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_in_range != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x
					= SObjGetStruct(cursor_gobj)->pos.x + coords[sMNPlayersVSSlots[player].cursor_status].x;
			}
		}

		is_in_range = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_in_range != 0)
		{
			delta = ((f32)controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_in_range = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_in_range != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y
					= SObjGetStruct(cursor_gobj)->pos.y + coords[sMNPlayersVSSlots[player].cursor_status].y;
			}
		}
	}
}

// 0x80137D4C
void mnPlayersVSUpdateCursorNoRecall(GObj* cursor_gobj, s32 player)
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
	f32 pos_x, pos_y;
	s32 range_check;
	SObj* cursor_sobj;

	cursor_sobj = SObjGetStruct(cursor_gobj);

	pos_y = cursor_sobj->pos.y + 3.0F;

	range_check = (pos_y < 13.0F) || (pos_y > 34.0F) ? TRUE : FALSE;
	if (range_check)
		return FALSE;

	pos_x = cursor_sobj->pos.x + 20.0F;

	range_check = (pos_x >= 244.0F) && (pos_x <= 292.0F) ? TRUE : FALSE;
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

	if ((controller->button_tap & A_BUTTON) && (mnPlayersVSCheckPlayerKindSelectAllPlayer(cursor_gobj, player) == FALSE)
		&& (mnPlayersVSSelectChar(cursor_gobj, player, sMNPlayersVSSlots[player].held_player, 4) == FALSE)
		&& (mnPlayersVSCheckCursorPuckGrab(cursor_gobj, player) == FALSE))
	{
		if (mnPlayersVSCheckTimeArrowRInRange(cursor_gobj))
		{
			if (sMNPlayersVSGameRule == SCBATTLE_GAMERULE_TIME)
			{
				sMNPlayersVSTimeValue = mnPlayersVSGetNextTimeValue(sMNPlayersVSTimeValue);
				mnPlayersVSMakeTimeSelect(sMNPlayersVSTimeValue);
			}
			else
			{
				if (sMNPlayersVSStockValue + 1 >= 0x63)
					sMNPlayersVSStockValue = 0;
				else
					sMNPlayersVSStockValue = sMNPlayersVSStockValue + 1;
				mnPlayersVSMakeStockSelect(sMNPlayersVSStockValue);
			}
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnPlayersVSCheckTimeArrowLInRange(cursor_gobj))
		{
			if (sMNPlayersVSGameRule == SCBATTLE_GAMERULE_TIME)
			{
				sMNPlayersVSTimeValue = mnPlayersVSGetPrevTimeValue(sMNPlayersVSTimeValue);
				mnPlayersVSMakeTimeSelect(sMNPlayersVSTimeValue);
			}
			else
			{
				if (sMNPlayersVSStockValue - 1 < 0)
					sMNPlayersVSStockValue = 0x62;
				else
					sMNPlayersVSStockValue = sMNPlayersVSStockValue - 1;
				mnPlayersVSMakeStockSelect(sMNPlayersVSStockValue);
			}
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnPlayersVSCheckGameModeInRange(cursor_gobj))
			mnPlayersVSUpdateGameMode();
		else if (mnCheckBackInRange(cursor_gobj))
		{
			mnGoBackToVSMenu();
			func_800269C0_275C0(nSYAudioFGMMenuScroll2);
		}
		else if (mnPlayersVSCheckTeamSelectInRangeAll(cursor_gobj, player) == FALSE)
			mnPlayersVSCheckHandicapArrowInRangeAll(cursor_gobj, player);
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
		mnPlayersVSUpdateCursorNoRecall(cursor_gobj, player);
}

// 0x801386E4
void mnPlayersVSUpdatePuck(GObj* puck_gobj, s32 puck_index)
{
	SObj* puck_sobj;
	f32 pos_x, pos_y;
	intptr_t puck_offsets[5] = {

		0x00009048, 0x00009B28, 0x0000A608, 0x0000B0E8, 0x0000BBC8
	};

	pos_x = SObjGetStruct(puck_gobj)->pos.x;
	pos_y = SObjGetStruct(puck_gobj)->pos.y;

	gcRemoveSObjAll(puck_gobj);

	puck_sobj = lbCommonMakeSObjForGObj(puck_gobj, lbRelocGetFileData(void*, sMNPlayersVSFiles[0], puck_offsets[puck_index]));
	puck_sobj->pos.x = pos_x;
	puck_sobj->pos.y = pos_y;
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

			mnPlayersVSUpdatePlayerKind(player);
			mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player, sMNPlayersVSSlots[player].pkind);
			mnPlayersVSUpdatePuckDisplay(sMNPlayersVSSlots[player].puck, player);
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
f32 mnPlayersVSGetPuckDistance(s32 this_player, s32 other_player)
{
	return sqrtf
	(
		SQUARE(SObjGetStruct(sMNPlayersVSSlots[other_player].puck)->pos.x - SObjGetStruct(sMNPlayersVSSlots[this_player].puck)->pos.x) +
		SQUARE(SObjGetStruct(sMNPlayersVSSlots[other_player].puck)->pos.y - SObjGetStruct(sMNPlayersVSSlots[this_player].puck)->pos.y)
	);
}

// 0x80139320
void mnPlayersVSPuckAdjustOverlap(s32 this_player, s32 other_player, f32 unused)
{
	s32 unused2;

	if (SObjGetStruct(sMNPlayersVSSlots[this_player].puck)->pos.x == SObjGetStruct(sMNPlayersVSSlots[other_player].puck)->pos.x)
	{
		sMNPlayersVSSlots[this_player].puck_vel_x += syUtilsGetRandomIntRange(2) - 1;
	}
	else
	{
		sMNPlayersVSSlots[this_player].puck_vel_x +=
		(
			-1.0F * (SObjGetStruct(sMNPlayersVSSlots[other_player].puck)->pos.x - SObjGetStruct(sMNPlayersVSSlots[this_player].puck)->pos.x)
		) / 10.0F;
	}
	if (SObjGetStruct(sMNPlayersVSSlots[this_player].puck)->pos.y == SObjGetStruct(sMNPlayersVSSlots[other_player].puck)->pos.y)
	{
		sMNPlayersVSSlots[this_player].puck_vel_y += syUtilsGetRandomIntRange(2) - 1;
	}
	else
	{
		sMNPlayersVSSlots[this_player].puck_vel_y +=
		(
			-1.0F * (SObjGetStruct(sMNPlayersVSSlots[other_player].puck)->pos.y - SObjGetStruct(sMNPlayersVSSlots[this_player].puck)->pos.y)
		) / 10.0F;
	}
}

// 0x80139460
void mnPlayersVSPuckAdjustPortraitEdge(s32 player)
{
	s32 portrait = mnPlayersVSGetPortrait(sMNPlayersVSSlots[player].fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(sMNPlayersVSSlots[player].puck)->pos.x + sMNPlayersVSSlots[player].puck_vel_x + 13.0F;
	f32 new_pos_y = SObjGetStruct(sMNPlayersVSSlots[player].puck)->pos.y + sMNPlayersVSSlots[player].puck_vel_y + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
	{
		sMNPlayersVSSlots[player].puck_vel_x = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;
	}
	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
	{
		sMNPlayersVSSlots[player].puck_vel_x = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
	if (new_pos_y < (portrait_edge_y + 5.0F))
	{
		sMNPlayersVSSlots[player].puck_vel_y = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;
	}
	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
	{
		sMNPlayersVSSlots[player].puck_vel_y = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
	}
}

// 0x8013961C
void mnPlayersVSPuckAdjustPlaced(s32 player)
{
	s32 i;
	f32 dists[GMCOMMON_PLAYERS_MAX];
	sb32 is_in_range;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if (player != i)
		{
			if (sMNPlayersVSSlots[player].is_selected != FALSE)
			{
				dists[i] = mnPlayersVSGetPuckDistance(player, i);
			}
		}
		else dists[i] = -1.0F;
	}
	sMNPlayersVSSlots[player].puck_vel_x = 0.0F;
	sMNPlayersVSSlots[player].puck_vel_y = 0.0F;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		is_in_range = ((dists[i] >= 0.0F) && (dists[i] <= 15.0F)) ? TRUE : FALSE;

		if (is_in_range)
		{
			if
			(
				(sMNPlayersVSSlots[player].fkind == sMNPlayersVSSlots[i].fkind) &&
				(sMNPlayersVSSlots[player].fkind != nFTKindNull) &&
				(sMNPlayersVSSlots[i].is_selected == TRUE)
			)
			{
				mnPlayersVSPuckAdjustOverlap(player, i, (15.0F - dists[i]) / 15.0F);
			}
		}
	}
	mnPlayersVSPuckAdjustPortraitEdge(player);
}

// 0x801397CC
void mnPlayersVSPuckAdjustRecall(s32 player)
{
	f32 vel_y, vel_x;

	sMNPlayersVSSlots[player].recall_tics++;

	if (sMNPlayersVSSlots[player].recall_tics < 11)
	{
		vel_x = (sMNPlayersVSSlots[player].recall_end_x - sMNPlayersVSSlots[player].recall_start_x) / 10.0F;

		if (sMNPlayersVSSlots[player].recall_tics < 6)
		{
			vel_y = (sMNPlayersVSSlots[player].recall_mid_y - sMNPlayersVSSlots[player].recall_start_y) / 5.0F;
		}	
		else vel_y = (sMNPlayersVSSlots[player].recall_end_y - sMNPlayersVSSlots[player].recall_mid_y) / 5.0F;

		sMNPlayersVSSlots[player].puck_vel_x = vel_x;
		sMNPlayersVSSlots[player].puck_vel_y = vel_y;
	}
	else if (sMNPlayersVSSlots[player].recall_tics == 11)
	{
		mnPlayersVSSetCursorGrab(player, player);

		sMNPlayersVSSlots[player].puck_vel_x = 0.0F;
		sMNPlayersVSSlots[player].puck_vel_y = 0.0F;
	}
	if (sMNPlayersVSSlots[player].recall_tics == 30)
	{
		sMNPlayersVSSlots[player].is_recalling = FALSE;
	}
}


// 0x801398B8
void mnPlayersVSPuckAdjustProcUpdate(GObj *gobj)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if (sMNPlayersVSSlots[i].is_recalling != FALSE)
		{
			mnPlayersVSPuckAdjustRecall(i);
		}
		if (sMNPlayersVSSlots[i].is_selected)
		{
			mnPlayersVSPuckAdjustPlaced(i);
		}
	}
}

// 0x8013992C
void mnPlayersVSMakePuckAdjust(void)
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, NULL, 26, GOBJ_PRIORITY_DEFAULT), mnPlayersVSPuckAdjustProcUpdate, nGCProcessKindFunc, 1);
}

// 0x80139970
void mnPlayersVSUpdatePuckGlowColor(GObj *gobj)
{
	if (sMNPlayersVSIsPuckGlowIncreasing == FALSE)
	{
		sMNPlayersVSPuckGlowColor += 0x09;

		if (sMNPlayersVSPuckGlowColor > 0xFF)
		{
			sMNPlayersVSPuckGlowColor = 0xFF;
			sMNPlayersVSIsPuckGlowIncreasing = TRUE;
		}
	}
	if (sMNPlayersVSIsPuckGlowIncreasing == TRUE)
	{
		sMNPlayersVSPuckGlowColor -= 0x09;

		if (sMNPlayersVSPuckGlowColor < 0x80)
		{
			sMNPlayersVSPuckGlowColor = 0x80;
			sMNPlayersVSIsPuckGlowIncreasing = FALSE;
		}
	}
}

// 0x801399E8
void mnPlayersVSMakePuckGlow(void)
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, NULL, 26, GOBJ_PRIORITY_DEFAULT), mnPlayersVSUpdatePuckGlowColor, nGCProcessKindFunc, 1);
}

// 0x80139A2C
void mnPlayersVSCostumeSyncProcUpdate(GObj *gobj)
{
	s32 i;

	if (sMNPlayersVSIsTeamBattle == TRUE)
	{
		for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
		{
			if (sMNPlayersVSSlots[i].fkind != nFTKindNull)
			{
				sMNPlayersVSSlots[i].shade = mnPlayersVSGetShade(i);
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, sMNPlayersVSSlots[i].costume, sMNPlayersVSSlots[i].shade);
			}
		}
	}
	else for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if ((sMNPlayersVSSlots[i].fkind != nFTKindNull) && (mnPlayersVSGetFighterKindCount(sMNPlayersVSSlots[i].fkind) == FALSE))
		{
			s32 costume = ftParamGetCostumeCommonID(sMNPlayersVSSlots[i].fkind, 0);

			if ((costume != sMNPlayersVSSlots[i].costume) && (sMNPlayersVSSlots[i].is_fighter_selected == FALSE))
			{
				sMNPlayersVSSlots[i].shade = mnPlayersVSGetShade(i);
				ftParamInitAllParts(sMNPlayersVSSlots[i].player, costume, sMNPlayersVSSlots[i].shade);
				sMNPlayersVSSlots[i].costume = costume;
			}
		}
	}
}

// 0x80139B4C
void mnPlayersVSMakeCostumeSync(void)
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0, NULL, 31, GOBJ_PRIORITY_DEFAULT), mnPlayersVSCostumeSyncProcUpdate, nGCProcessKindFunc, 1);
}

// 0x80139B90
void mnPlayersVSSpotlightProcUpdate(GObj *gobj)
{
	s32 player = gobj->user_data.s;
	f32 sizes[/* */] =
	{
		1.5F, 1.5F, 2.0F, 1.5F, 1.5F, 1.5F,
		1.5F, 1.5F, 1.5F, 1.5F, 1.5F, 1.5F
	};

	if ((sMNPlayersVSSlots[player].is_fighter_selected == FALSE) && (sMNPlayersVSSlots[player].fkind != nFTKindNull))
	{
		gobj->flags = (gobj->flags == GOBJ_FLAG_HIDDEN) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;

		DObjGetStruct(gobj)->scale.vec.f.x = sizes[sMNPlayersVSSlots[player].fkind];
		DObjGetStruct(gobj)->scale.vec.f.y = sizes[sMNPlayersVSSlots[player].fkind];
		DObjGetStruct(gobj)->scale.vec.f.y = sizes[sMNPlayersVSSlots[player].fkind];
	}
	else gobj->flags = GOBJ_FLAG_HIDDEN;
}

// 0x80139C84
void mnPlayersVSMakeSpotlight(void)
{
	GObj *gobj;
	f32 y;
	s32 i, x;

	for (i = 0, x = -1250, y = -850.0F; i < 4; i++, x += 840)
	{
		gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_PRIORITY_DEFAULT);
		gcSetupCommonDObjs(gobj, lbRelocGetFileData(DObjDesc*, sMNPlayersVSFiles[6], &lMNPlayersSpotlightDObjDesc), NULL);
		gcAddGObjDisplay(gobj, gcDrawDObjTreeDLLinksForGObj, 9, GOBJ_PRIORITY_DEFAULT, ~0);

		gobj->user_data.s = i;

		gcAddMObjAll(gobj, lbRelocGetFileData(MObjSub***, sMNPlayersVSFiles[6], &lMNPlayersSpotlightMObjSub));
		gcAddGObjProcess(gobj, mnPlayersVSSpotlightProcUpdate, nGCProcessKindFunc, 1);
		gcPlayAnimAll(gobj);

		DObjGetStruct(gobj)->translate.vec.f.x = x;
		DObjGetStruct(gobj)->translate.vec.f.y = y;
		DObjGetStruct(gobj)->translate.vec.f.z = 0.0F;
	}
}

// 0x80139DD8 - Unused?
void func_ovl26_80139DD8(void)
{
	return;
}

// 0x80139DE0
void mnPlayersVSReadyProcUpdate(GObj *gobj)
{
	if (mnPlayersVSCheckReady() != FALSE)
	{
		sMNPlayersVSReadyBlinkWait++;

		if (sMNPlayersVSReadyBlinkWait == 40)
		{
			sMNPlayersVSReadyBlinkWait = 0;
		}
		gobj->flags = (sMNPlayersVSReadyBlinkWait < 30) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
	}
	else
	{
		gobj->flags = GOBJ_FLAG_HIDDEN;
		sMNPlayersVSReadyBlinkWait = 0;
	}
}

// 0x80139E60
void mnPlayersVSMakeReady(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 32, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 38, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayersVSReadyProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonReadyBannerSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x00;
	sobj->envcolor.g = 0x00;
	sobj->envcolor.b = 0x00;
	sobj->sprite.red = 0xF4;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x7F;
	sobj->cms = 0;
	sobj->cmt = 0;
	sobj->masks = 3;
	sobj->maskt = 0;
	sobj->lrs = 320;
	sobj->lrt = 17;
	sobj->pos.x = 0.0F;
	sobj->pos.y = 71.0F;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonReadySprite));
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

	gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayersVSReadyProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonPressSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0F;
	sobj->pos.y = 219.0F;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayersVSFiles[0], &lMNPlayersCommonStartSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x56;
	sobj->sprite.blue = 0x92;
	sobj->pos.x = 162.0F;
	sobj->pos.y = 219.0F;
}

// 0x8013A0DC
void mnPlayersVSUpdateGate(s32 player)
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
				mnPlayersVSUpdatePlayerKind(player);
				mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player, sMNPlayersVSSlots[player].pkind);
				mnPlayersVSUpdatePuckDisplay(sMNPlayersVSSlots[player].puck, player);
				mnPlayersVSUpdateCursorDisplay(sMNPlayersVSSlots[player].cursor, player);
				mnPlayersVSUpdateFighter(player);
				mnPlayersVSUpdateNameAndEmblem(player);
			}
		}
	}
	else if (sMNPlayersVSSlots[player].cursor != NULL)
	{
		if
		(
			(sMNPlayersVSSlots[player].held_player != -1) &&
			(
				(player != sMNPlayersVSSlots[player].held_player) ||
				(sMNPlayersVSSlots[player].pkind == nFTPlayerKindCom)
			)
			&&
			(mnPlayersVSSelectChar(sMNPlayersVSSlots[player].cursor, player, sMNPlayersVSSlots[player].held_player, nMNPlayersSelectButtonA) == FALSE)
		)
		{
			held_player = sMNPlayersVSSlots[player].held_player;
			sMNPlayersVSSlots[held_player].fkind = mnSelectRandomFighter(sMNPlayersVSSlots[held_player].puck);
		}
		gcEjectGObj(sMNPlayersVSSlots[player].cursor);
		sMNPlayersVSSlots[player].cursor = NULL;

		if (sMNPlayersVSSlots[player].pkind != nFTPlayerKindCom)
		{
			sMNPlayersVSSlots[player].pkind = nFTPlayerKindNot;

			mnPlayersVSUpdatePlayerKind(player);
			mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player, sMNPlayersVSSlots[player].pkind);
			mnPlayersVSUpdatePuckDisplay(sMNPlayersVSSlots[player].puck, player);
			mnPlayersVSUpdateCursorDisplay(sMNPlayersVSSlots[player].cursor, player);
			mnPlayersVSUpdateFighter(player);
			mnPlayersVSUpdateNameAndEmblem(player);
		}
	}
}

// 0x8013A2A4
void mnPlayersVSUpdateControllerOrders(void)
{
	s32 player, order;

	for (player = 0; player < ARRAY_COUNT(sMNPlayersVSControllerOrders); player++)
	{
		sMNPlayersVSControllerOrders[player] = -1;

		for (order = 0; gSYControllerDeviceStatuses[order] != -1; order++) // Array can go out of bounds!!! AND DOES!!!
		{
			if (player == gSYControllerDeviceStatuses[order])
			{
				sMNPlayersVSControllerOrders[player] = order;
			}
		}
	}
}

// 0x8013A30C
s32 mnPlayersVSGetReadyPlayerCount(void)
{
	s32 i;
	s32 selected = 0;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if ((sMNPlayersVSSlots[i].pkind != nFTPlayerKindNot) && (sMNPlayersVSSlots[i].is_fighter_selected == TRUE))
		{
			selected++;
		}
	}
	return selected;
}

// 0x8013A3AC
void mnPlayersVSSetPlayerNot(s32 player)
{
	sMNPlayersVSSlots[player].pkind = nFTPlayerKindNot;
	sMNPlayersVSSlots[player].fkind = nFTKindNull;
	sMNPlayersVSSlots[player].holder_player = GMCOMMON_PLAYERS_MAX;

	mnPlayersVSUpdatePlayerKindSelect(sMNPlayersVSSlots[player].type_button, player, nFTPlayerKindNot);
}

// 0x8013A40C
void mnPlayersVSSetIdlePlayerNotAll(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if (sMNPlayersVSSlots[i].is_fighter_selected == FALSE)
		{
			mnPlayersVSSetPlayerNot(i);
		}
	}
}

// 0x8013A468 - Unused?
void func_ovl26_8013A468(void)
{
	return;
}

// 0x8013A470
sb32 mnPlayersVSCheckSingleTeam(void)
{
	s32 i;
	s32 team = -1;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if (sMNPlayersVSSlots[i].is_fighter_selected != FALSE)
		{
			if (team == -1)
			{
				team = sMNPlayersVSSlots[i].team;
			}
			else if (team != sMNPlayersVSSlots[i].team)
			{
				return FALSE;
			}
		}
	}
	return TRUE;
}

// 0x8013A534
sb32 mnPlayersVSCheckNoPuckOnPortraitAll(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if ((sMNPlayersVSSlots[i].cursor != NULL) && (sMNPlayersVSSlots[i].cursor_status == nMNPlayersCursorStatusGrab))
		{
			return FALSE;
		}
	}
	return TRUE;
}

// 0x8013A5E4
sb32 mnPlayersVSCheckReady(void)
{
	sb32 unused;
	sb32 is_ready = TRUE;

	if (mnPlayersVSGetReadyPlayerCount() < 2)
	{
		is_ready = FALSE;
	}
	if ((is_ready != FALSE) && (sMNPlayersVSIsTeamBattle == TRUE))
	{
		if (mnPlayersVSCheckSingleTeam() != FALSE)
		{
			is_ready = FALSE;
		}
	}
	if (is_ready != FALSE)
	{
		if (mnPlayersVSCheckNoPuckOnPortraitAll() == FALSE)
		{
			is_ready = FALSE;
		}
	}
	return is_ready;
}

// 0x8013A664
void mnPlayersVSSetSceneData(void)
{
	s32 i;

	gSCManagerTransferBattleState.time_limit = sMNPlayersVSTimeValue;
	gSCManagerTransferBattleState.stocks = sMNPlayersVSStockValue;
	gSCManagerTransferBattleState.is_team_battle = sMNPlayersVSIsTeamBattle;
	gSCManagerTransferBattleState.game_rules = sMNPlayersVSGameRule;

	for (i = 0; i < ARRAY_COUNT(gSCManagerTransferBattleState.players); i++)
	{
		if (sMNPlayersVSIsTeamBattle == FALSE)
		{
			gSCManagerTransferBattleState.players[i].player = i;
		}
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
			gSCManagerTransferBattleState.players[i].color =
			(gSCManagerTransferBattleState.is_team_battle == FALSE) ? i : dIFCommonPlayerTeamColorIDs[gSCManagerTransferBattleState.players[i].team];
		}
		else if (gSCManagerTransferBattleState.is_team_battle == FALSE)
		{
			gSCManagerTransferBattleState.players[i].color = GMCOMMON_PLAYERS_MAX;
		}
		else gSCManagerTransferBattleState.players[i].color = dIFCommonPlayerTeamColorIDs[gSCManagerTransferBattleState.players[i].team];

		gSCManagerTransferBattleState.players[i].tag = (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindMan) ? i : GMCOMMON_PLAYERS_MAX;

		gSCManagerTransferBattleState.players[i].is_single_stockicon = (gSCManagerTransferBattleState.game_rules & SCBATTLE_GAMERULE_TIME) ? TRUE : FALSE;

		if (gSCManagerTransferBattleState.players[i].pkind == nFTPlayerKindCom)
		{
			gSCManagerTransferBattleState.players[i].level = sMNPlayersVSSlots[i].cpu_level;
		}
		else gSCManagerTransferBattleState.players[i].handicap = sMNPlayersVSSlots[i].handicap;
	}
	gSCManagerTransferBattleState.pl_count = gSCManagerTransferBattleState.cp_count = 0;

	for (i = 0; i < ARRAY_COUNT(gSCManagerTransferBattleState.players); i++)
	{
		switch (gSCManagerTransferBattleState.players[i].pkind)
		{
		case nFTPlayerKindMan:
			gSCManagerTransferBattleState.pl_count++;
			break;

		case nFTPlayerKindCom:
			gSCManagerTransferBattleState.cp_count++;
			break;
		}
	}
}

// 0x8013A8B8
void mnPlayersVSPauseSlotProcesses(void)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		if (sMNPlayersVSSlots[i].cursor != NULL)
		{
			gcPauseGObjProcess(sMNPlayersVSSlots[i].cursor->gobjproc_head);
		}
		if (sMNPlayersVSSlots[i].puck != NULL)
		{
			gcPauseGObjProcess(sMNPlayersVSSlots[i].puck->gobjproc_head);
		}
	}
}

// 0x8013A920
void mnPlayersVSProcRun(GObj *gobj)
{
	s32 gkinds_num;
	s32 i;
	s32 gkind;

	sMNPlayersVSTotalTimeTics++;

	mnPlayersVSUpdateControllerOrders();

	if (sMNPlayersVSTotalTimeTics == sMNPlayersVSReturnTic)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		mnPlayersVSSetSceneData();
		syTaskmanSetLoadScene();

		return;
	}
	if (scSubsysControllerCheckNoInputAll() == FALSE)
	{
		sMNPlayersVSReturnTic = sMNPlayersVSTotalTimeTics + I_MIN_TO_TICS(5);
	}
	if (sMNPlayersVSIsStart != FALSE)
	{
		sMNPlayersVSStartProceedWait--;

		if (sMNPlayersVSStartProceedWait == 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;

			if (gSCManagerTransferBattleState.is_stage_select != FALSE)
			{
				gSCManagerSceneData.scene_curr = nSCKindMaps;
			}
			else
			{
				gSCManagerSceneData.scene_curr = nSCKindVSBattle;
				gkinds_num = (gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE) ? nGRKindUnlockEnd + 1 : nGRKindStarterEnd + 1;

				do
				{
					gkind = syUtilsGetRandomTimeUCharRange(gkinds_num);
				}
				while (gkind == gSCManagerSceneData.gkind);

				gSCManagerSceneData.gkind = gkind;
			}
			mnPlayersVSSetSceneData();
			syTaskmanSetLoadScene();
		}
	}
	else
	{
		if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON) != FALSE) && (sMNPlayersVSTotalTimeTics > I_SEC_TO_TICS(1)))
		{
			if (mnPlayersVSCheckReady() != FALSE)
			{
				func_800269C0_275C0(nSYAudioVoicePublicCheer);
				mnPlayersVSSetIdlePlayerNotAll();

				sMNPlayersVSStartProceedWait = 30;
				sMNPlayersVSIsStart = TRUE;
				mnPlayersVSPauseSlotProcesses();
			}
			else func_800269C0_275C0(nSYAudioFGMMenuDenied);
		}
		for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
		{
			mnPlayersVSUpdateGate(i);

			continue;
		}
	}
}

// 0x8013AAF8
s32 mnPlayersVSGetNextTimeValue(s32 current_value)
{
	s32 i;
	s32 timer_values[/* */] = { 2, 3, 5, 10, 15, 30, 60, SCBATTLE_TIMELIMIT_INFINITE };

	if (current_value == timer_values[ARRAY_COUNT(timer_values) - 1])
	{
		return timer_values[0];
	}
	else for (i = 0; i < ARRAY_COUNT(timer_values); i++)
	{
		if (current_value < timer_values[i])
		{
			return timer_values[i];
		}
	}
	return timer_values[ARRAY_COUNT(timer_values) - 1];
}

// 0x8013ABDC
s32 mnPlayersVSGetPrevTimeValue(s32 current_value)
{
	s32 i;
	s32 timer_values[/* */] = { 2, 3, 5, 10, 15, 30, 60, SCBATTLE_TIMELIMIT_INFINITE };

	if (current_value == timer_values[0])
	{
		return timer_values[ARRAY_COUNT(timer_values) - 1];
	}
	else for (i = ARRAY_COUNT(timer_values) - 1; i >= 0; i--)
	{
		if (current_value > timer_values[i])
		{
			return timer_values[i];
		}
	}
	return timer_values[ARRAY_COUNT(timer_values) - 1];
}

// 0x8013AC7C
void mnPlayersVSInitPlayer(s32 player)
{
	sMNPlayersVSSlots[player].team_color_button = NULL;
	sMNPlayersVSSlots[player].handicap_cpu_level = NULL;
	sMNPlayersVSSlots[player].arrows = NULL;
	sMNPlayersVSSlots[player].handicap_cpu_level_value = NULL;
	sMNPlayersVSSlots[player].flash = NULL;
	sMNPlayersVSSlots[player].p_sfx = NULL;
	sMNPlayersVSSlots[player].sfx_id = 0;
	sMNPlayersVSSlots[player].player = NULL;
	sMNPlayersVSSlots[player].fkind = gSCManagerTransferBattleState.players[player].fkind;

	if ((gSCManagerTransferBattleState.players[player].pkind == nFTPlayerKindMan) && (sMNPlayersVSControllerOrders[player] == -1))
	{
		sMNPlayersVSSlots[player].pkind = nFTPlayerKindNot;
		sMNPlayersVSSlots[player].fkind = nFTKindNull;
	}
	else sMNPlayersVSSlots[player].pkind = gSCManagerTransferBattleState.players[player].pkind;

	sMNPlayersVSSlots[player].cpu_level = gSCManagerTransferBattleState.players[player].level;
	sMNPlayersVSSlots[player].handicap = gSCManagerTransferBattleState.players[player].handicap;
	sMNPlayersVSSlots[player].team = gSCManagerTransferBattleState.players[player].team;

	if ((sMNPlayersVSSlots[player].pkind == nFTPlayerKindMan) && (sMNPlayersVSSlots[player].fkind == nFTKindNull))
	{
		sMNPlayersVSSlots[player].holder_player = player;
		sMNPlayersVSSlots[player].held_player = player;
	}
	else
	{
		sMNPlayersVSSlots[player].holder_player = GMCOMMON_PLAYERS_MAX;
		sMNPlayersVSSlots[player].held_player = -1;
	}
	if (sMNPlayersVSSlots[player].fkind == nFTKindNull)
	{
		sMNPlayersVSSlots[player].is_fighter_selected = FALSE;
		sMNPlayersVSSlots[player].is_selected = FALSE;
		sMNPlayersVSSlots[player].is_recalling = FALSE;
		sMNPlayersVSSlots[player].is_status_selected = FALSE;
	}
	else
	{
		sMNPlayersVSSlots[player].is_fighter_selected = TRUE;
		sMNPlayersVSSlots[player].is_selected = TRUE;
		sMNPlayersVSSlots[player].is_recalling = FALSE;
		sMNPlayersVSSlots[player].is_status_selected = FALSE;
	}
	sMNPlayersVSSlots[player].costume = gSCManagerTransferBattleState.players[player].costume;
	sMNPlayersVSSlots[player].shade = gSCManagerTransferBattleState.players[player].shade;

	if ((sMNPlayersVSControllerOrders[player] != -1) && (sMNPlayersVSSlots[player].pkind == nFTPlayerKindNot))
	{
		sMNPlayersVSSlots[player].holder_player = player;
	}
}

// 0x8013ADE0
void mnPlayersVSResetPlayer(s32 player)
{
	u8 default_teams[/* */] = { nSCBattleTeamIDRed, nSCBattleTeamIDRed, nSCBattleTeamIDBlue, nSCBattleTeamIDBlue };

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
	sMNPlayersVSSlots[player].team = default_teams[player];

	if (sMNPlayersVSControllerOrders[player] == -1)
	{
		sMNPlayersVSSlots[player].pkind = nFTPlayerKindNot;
		sMNPlayersVSSlots[player].holder_player = GMCOMMON_PLAYERS_MAX;
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
void mnPlayersVSInitVars(void)
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
	s32 unused;

	if (sMNPlayersVSControllerOrders[player] != -1)
	{
		mnPlayersVSMakeCursor(player);
	}
	else sMNPlayersVSSlots[player].cursor = NULL;

	mnPlayersVSMakePuck(player);
	mnPlayersVSMakeGate(player);

	if (sMNPlayersVSSlots[player].is_selected)
	{
		if (sMNPlayersVSSlots[player].fkind != nFTKindNull)
		{
			mnPlayersVSMakeFighter(sMNPlayersVSSlots[player].player, player, sMNPlayersVSSlots[player].fkind, sMNPlayersVSSlots[player].costume);
		}
	}
}

// 0x8013B090
void mnPlayersVSInitSlotAll(void)
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
	rl_setup.status_buffer = sMNPlayersVSStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNPlayersVSStatusBuffer);
	rl_setup.force_status_buffer = sMNPlayersVSForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNPlayersVSForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesListed(dMNPlayersVSFileIDs, sMNPlayersVSFiles);

	gcMakeGObjSPAfter(nGCCommonKindPlayerSelect, mnPlayersVSProcRun, 15, GOBJ_PRIORITY_DEFAULT);

	gcMakeDefaultCameraGObj(16, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));

	efParticleInitAll();
	efManagerInitEffects();
	mnPlayersVSUpdateControllerOrders();
	mnPlayersVSInitVars();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 4);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		ftManagerSetupFilesAllKind(i);
	}
	for (i = 0; i < ARRAY_COUNT(sMNPlayersVSSlots); i++)
	{
		sMNPlayersVSSlots[i].figatree_heap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	}
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
	mnPlayersVSMakeLabels();
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
