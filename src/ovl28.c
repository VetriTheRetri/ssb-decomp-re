#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>

extern intptr_t FILE_000_COLON_IMAGE_OFFSET; // file 0x000 image offset for colon

extern intptr_t lMNPlayersCommonGateCPSprite; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET; // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET; // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET; // file 0x011 image offset for right arrow

extern intptr_t lMNPlayersGameModesTrainingModeSprite; // file 0x012 image offset for Training Mode title image
extern intptr_t FILE_017_CPU_PANEL_LUT_OFFSET; // D_NF_00003238; // CPU panel LUT

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
void mnPlayers1PTrainingMakePortraitFlash(s32 player);
void mnPlayers1PTrainingUpdateNameAndEmblem(s32 player);
sb32 mnPlayers1PTrainingCheckCostumeUsed(s32 fkind, s32 player, s32 costume);
void mnPlayers1PTrainingAnnounceFighter(s32 player, s32 panel_id);
void mnPlayers1PTrainingUpdateCursor(GObj* gobj, s32 player, s32 cursor_status);
void mnPlayers1PTrainingMakeHandicapLevel(s32 player);
void mnPlayers1PTrainingUpdateCursorPlacementDLLinks(s32 player, s32 held_puck_id);
void mnPlayers1PTrainingSaveMatchInfo();

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80137F60
u32 dMNPlayers1PTrainingFileIDs[/* */] =
{
	&lMNPlayersCommonFileID,
	&lMNPlayers1PModeFileID,
	&lMNCommonFileID,
	&lFTEmblemSpritesFileID,
	&lMNSelectCommonFileID,
	&lMNPlayersGameModesFileID,
	&lMNPlayersPortraitsFileID,
	&lMNPlayersSpotlightFileID
};

// 0x80137F80
Lights1 dMNPlayers1PTrainingLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);
Lights1 dMNPlayers1PTrainingLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0xEC, 0x00);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80138550
s32 sMNPlayers1PTrainingPad0x80138550[2];

// 0x80138558
MNPlayersSlotTraining sMNPlayers1PTrainingSlots[GMCOMMON_PLAYERS_MAX];

// 0x80138838
s32 sMNPlayers1PTrainingPad0x80138838[10];

// 0x80138860
s32 sMNPlayers1PTrainingStartDelayTics;

// 0x80138864
sb32 sMNPlayers1PTrainingIsStartTriggered;

// 0x80138868
sb32 sMNPlayers1PTrainingDefaultCostumeOnly;

// 0x8013886C
s32 sMNPlayers1PTrainingPad0x8013886C;

// 0x80138870
GObj *sMNPlayers1PTrainingGameModeGObj;

// 0x80138874
s32 sMNPlayers1PTrainingPuckGlowPulseColor;

// 0x80138878
sb32 sMNPlayers1PTrainingIsPuckGlowIncreasing;

// 0x8013887C
u16 sMNPlayers1PTrainingFighterMask;

// 0x80138880
s32 sMNPlayers1PTrainingPad0x80138880;

// 0x80138884
s32 sMNPlayers1PTrainingPressStartFlashTimer;

// 0x80138888
s32 sMNPlayers1PTrainingPad0x80138888;

// 0x8013888C frames elapsed on CSS
s32 sMNPlayers1PTrainingTotalTimeTics;

// 0x80138890
s32 sMNPlayers1PTrainingReturnTic;

// 0x80138894
s32 sMNPlayers1PTrainingManPlayer;

// 0x80138898
s32 sMNPlayers1PTrainingComPlayer;

// 0x801388A0
LBFileNode sMNPlayers1PTrainingForceStatusBuffer[7];

// 0x801388D8
LBFileNode sMNPlayers1PTrainingStatusBuffer[120];

// 0x80138C98
void *sMNPlayers1PTrainingFiles[ARRAY_COUNT(dMNPlayers1PTrainingFileIDs)];

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mnPlayers1PTrainingFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mnPlayers1PTrainingSelectFighterPuck(s32 player, s32 select_button)
{
	s32 held_player = sMNPlayers1PTrainingSlots[player].held_player, costume;

	if (select_button != nMNPlayersSelectButtonA)
	{
		costume = ftParamGetCostumeCommonID(sMNPlayers1PTrainingSlots[held_player].fkind, select_button);

		if (mnPlayers1PTrainingCheckCostumeUsed(sMNPlayers1PTrainingSlots[held_player].fkind, held_player, costume))
		{
			func_800269C0_275C0(nSYAudioFGMMenuDenied);
			return;
		}
		ftParamInitAllParts(sMNPlayers1PTrainingSlots[held_player].player, costume, 0);
		sMNPlayers1PTrainingSlots[held_player].costume = costume;
	}
	sMNPlayers1PTrainingSlots[held_player].is_selected = TRUE;

	mnPlayers1PTrainingUpdateCursorPlacementDLLinks(player, held_player);

	sMNPlayers1PTrainingSlots[held_player].holder_player = GMCOMMON_PLAYERS_MAX;
	sMNPlayers1PTrainingSlots[player].cursor_status = nMNPlayersCursorStatusHover;

	mnPlayers1PTrainingUpdateCursor(sMNPlayers1PTrainingSlots[player].cursor, player, sMNPlayers1PTrainingSlots[player].cursor_status);

	sMNPlayers1PTrainingSlots[player].held_player = -1;
	sMNPlayers1PTrainingSlots[held_player].is_fighter_selected = TRUE;

	mnPlayers1PTrainingAnnounceFighter(player, held_player);

	mnPlayers1PTrainingMakePortraitFlash(held_player);
}

// 0x80131C70
f32 mnPlayers1PTrainingGetNextPortraitX(s32 portrait, f32 current_pos_x)
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

// 0x80131D84
sb32 mnPlayers1PTrainingCheckFighterCrossed(s32 fkind)
{
	return FALSE;
}

// 0x80131D90
void mnPlayers1PTrainingPortraitProcUpdate(GObj *portrait_gobj)
{
	f32 new_pos_x = mnPlayers1PTrainingGetNextPortraitX(portrait_gobj->user_data.s, SObjGetStruct(portrait_gobj)->pos.x);

	if (new_pos_x != -1.0F)
	{
		SObjGetStruct(portrait_gobj)->pos.x = new_pos_x;

		if (SObjGetStruct(portrait_gobj)->next != NULL)
		{
			SObjGetStruct(portrait_gobj)->next->pos.x = SObjGetStruct(portrait_gobj)->pos.x + 4.0F;
		}
	}
}

// 0x80131E0C
void mnPlayers1PTrainingSetPortraitWallpaperPosition(SObj *sobj, s32 portrait)
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

// 0x80131E68
void mnPlayers1PTrainingPortraitAddCross(GObj *gobj, s32 portrait)
{
	SObj *sobj = SObjGetStruct(gobj);
	f32 x = sobj->pos.x;
	f32 y = sobj->pos.y;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsCrossSprite));

	sobj->pos.x = x + 4.0F;
	sobj->pos.y = y + 12.0F;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
}

// 0x80131EFC
sb32 mnPlayers1PTrainingCheckFighterLocked(s32 fkind)
{
	switch (fkind)
	{
	case nFTKindNess:
		return (sMNPlayers1PTrainingFighterMask & (1 << nFTKindNess)) ? FALSE : TRUE;

	case nFTKindPurin:
		return (sMNPlayers1PTrainingFighterMask & (1 << nFTKindPurin)) ? FALSE : TRUE;

	case nFTKindCaptain:
		return (sMNPlayers1PTrainingFighterMask & (1 << nFTKindCaptain)) ? FALSE : TRUE;

	case nFTKindLuigi:
		return (sMNPlayers1PTrainingFighterMask & (1 << nFTKindLuigi)) ? FALSE : TRUE;

	default:
		return FALSE;
	}
}

// 0x80138070
s32 dMNPlayers1PTrainingUnknown0x80138070[/* */] =
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

// 0x80131FC8 - Unused?
void func_ovl28_80131FC8(void)
{
	return;
}

// 0x80131FD0
s32 mnPlayers1PTrainingGetFighterKind(s32 portrait)
{
	s32 fkinds[/* */] =
	{
		nFTKindLuigi, nFTKindMario, nFTKindDonkey, nFTKindLink, nFTKindSamus,   nFTKindCaptain,
		nFTKindNess,  nFTKindYoshi, nFTKindKirby,  nFTKindFox,  nFTKindPikachu, nFTKindPurin
	};

	return fkinds[portrait];
}

// 0x80132020
s32 mnPlayers1PTrainingGetPortrait(s32 fkind)
{
	s32 portraits[/* */] =
	{
		1, 9, 2, 4, 0, 3,
		7, 5, 8, 10, 11, 6
	};

	return portraits[fkind];
}

// 0x80132070
void mnPlayers1PTrainingPortraitProcDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x30, 0x30, 0x30, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, NOISE, TEXEL0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, NOISE, TEXEL0, PRIMITIVE, TEXEL0,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	lbCommonDrawSObjNoAttr(gobj);
}

// 0x80132130
void mnPlayers1PTrainingMakePortraitShadow(s32 portrait)
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
	gcAddGObjProcess(gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsWallpaperSprite));
	sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
	sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;

	mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);
	gobj->user_data.s = portrait;

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnPlayers1PTrainingPortraitProcDisplay, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], offsets[mnPlayers1PTrainingGetFighterKind(portrait)]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	gobj->user_data.s = portrait;
	mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);

	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsQuestionSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->envcolor.r = 0x5B;
	sobj->envcolor.g = 0x41;
	sobj->envcolor.b = 0x33;
	sobj->sprite.red = 0xC4;
	sobj->sprite.green = 0xB9;
	sobj->sprite.blue = 0xA9;

	gobj->user_data.s = portrait;
	mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);
}

// 0x801323D8
void mnPlayers1PTrainingMakePortrait(s32 portrait)
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

	if (mnPlayers1PTrainingCheckFighterLocked(mnPlayers1PTrainingGetFighterKind(portrait)) != FALSE)
	{
		mnPlayers1PTrainingMakePortraitShadow(portrait);
	}
	else
	{
		wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 29, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 36, GOBJ_PRIORITY_DEFAULT, ~0);
		wallpaper_gobj->user_data.p = portrait;
		gcAddGObjProcess(wallpaper_gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsWallpaperSprite));
		mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);

		portrait_gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], offsets[mnPlayers1PTrainingGetFighterKind(portrait)]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		portrait_gobj->user_data.s = portrait;

		if (mnPlayers1PTrainingCheckFighterCrossed(mnPlayers1PTrainingGetFighterKind(portrait)) != FALSE)
		{
			mnPlayers1PTrainingPortraitAddCross(portrait_gobj, portrait);
		}
		mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);
	}
}

// 0x80132594
void mnPlayers1PTrainingMakePortraitAll(void)
{
	s32 i;

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		mnPlayers1PTrainingMakePortrait(i);
	}
}

// 0x801325D4
void mnPlayers1PTrainingMakeNameAndEmblem(GObj *gobj, s32 player, s32 fkind)
{
	SObj *sobj;
	Vec2f pos[/* */] =
	{
		{ 13.0F, 28.0F }, {  6.0F, 25.0F },
		{  5.0F, 25.0F }, { 13.0F, 25.0F },
		{ 13.0F, 28.0F }, { 13.0F, 28.0F },
		{ 16.0F, 25.0F }, {  4.0F, 25.0F },
		{ 13.0F, 25.0F }, { 13.0F, 25.0F },
		{ 13.0F, 25.0F }, { 13.0F, 25.0F }
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

		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[3], emblem_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		if (player == sMNPlayers1PTrainingManPlayer)
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
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], name_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;

		if (player == sMNPlayers1PTrainingManPlayer)
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
void mnPlayers1PTrainingMakePortraitCamera(void)
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

// 0x80132864
void mnPlayers1PTrainingMakePortraitWallpaperCamera(void)
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

// 0x80132904
void mnPlayers1PTrainingMakePortraitFlashCamera(void)
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

// 0x801329A4
void mnPlayers1PTrainingMakeGateCamera(void)
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

// 0x80132A44
void mnPlayers1PTrainingMakePlayerKindButtonCamera(void)
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

// 0x80132AE4
void mnPlayers1PTrainingMakePlayerKindCamera(void)
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

// 0x80132B84
void mnPlayers1PTrainingMakeTeamButtonCamera(void)
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

// 0x80132C24
void mnPlayers1PTrainingSetGateLUT(GObj *gobj, s32 player)
{
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PLUT, &lMNPlayersCommonGate2PLUT,
		&lMNPlayersCommonGate3PLUT, &lMNPlayersCommonGate4PLUT
	};

	sobj = SObjGetStruct(gobj);

	if (player == sMNPlayers1PTrainingManPlayer)
	{
		sobj->sprite.LUT = lbRelocGetFileData(int*, sMNPlayers1PTrainingFiles[0], offsets[sMNPlayers1PTrainingManPlayer]);
	}
	else sobj->sprite.LUT = lbRelocGetFileData(int*, sMNPlayers1PTrainingFiles[1], &lMNPlayers1PModeGateCPLUT);
}

// 0x80132CA4
void mnPlayers1PTrainingMakePlayerKindButton(s32 player)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PSprite, &lMNPlayersCommonGate2PSprite,
		&lMNPlayersCommonGate3PSprite, &lMNPlayersCommonGate4PSprite
	};
	f32 pos_x[/* */] = { 8.0F, 5.0F, 5.0F, 5.0F };

	sMNPlayers1PTrainingSlots[player].type = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	if (player == sMNPlayers1PTrainingManPlayer)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], offsets[sMNPlayers1PTrainingManPlayer]));
		sobj->pos.x = pos_x[player] + 53.0F;
		sobj->pos.y = 131.0F;
	}
	else
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], &lMNPlayersCommonGateCPSprite));
		sobj->pos.x = 192.0F;
		sobj->pos.y = 132.0F;
	}
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0x00;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue = 0x00;
}

// 0x80132E24
void mnPlayers1PTrainingMakeGate(s32 player)
{
	GObj *gobj;
	SObj *sobj;

	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommonGate1PSprite, &lMNPlayersCommonGate2PSprite,
		&lMNPlayersCommonGate3PSprite, &lMNPlayersCommonGate4PSprite
	};
	f32 pos_x[/* */] = { 8.0F, 5.0F, 5.0F, 5.0F };

	gobj = lbCommonMakeSpriteGObj
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
			sMNPlayers1PTrainingFiles[1],
			&lMNPlayers1PModeGateWallpaperSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	sMNPlayers1PTrainingSlots[player].panel = gobj;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	if (player == sMNPlayers1PTrainingManPlayer)
	{
		SObjGetStruct(gobj)->pos.x = 53.0F;
		SObjGetStruct(gobj)->pos.y = 127.0F;
	}
	else
	{
		SObjGetStruct(gobj)->pos.x = 185.0F;
		SObjGetStruct(gobj)->pos.y = 127.0F;
	}

	mnPlayers1PTrainingSetGateLUT(gobj, player);
	mnPlayers1PTrainingMakePlayerKindButton(player);

	gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_PRIORITY_DEFAULT);
	sMNPlayers1PTrainingSlots[player].name_logo_gobj = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_PRIORITY_DEFAULT, ~0);

	mnPlayers1PTrainingUpdateNameAndEmblem(player);
}

// 0x80132FF4 - Unused?
void func_ovl28_80132FF4(void)
{
	return;
}

// 0x80132FFC - Unused?
void func_ovl28_80132FFC(void)
{
	return;
}

// 0x80133004 - Unused?
void func_ovl28_80133004(void)
{
	return;
}

// 0x8013300C - Unused?
void func_ovl28_8013300C(void)
{
	return;
}

// 0x80133014
void mnPlayers1PTrainingMakeWallpaper(void)
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[4], &lMNSelectCommonWallpaperSprite));
	sobj->cms = G_TX_WRAP;
	sobj->cmt = G_TX_WRAP;
	sobj->masks = 6;
	sobj->maskt = 5;
	sobj->lrs = 300;
	sobj->lrt = 220;
	sobj->pos.x = 10.0F;
	sobj->pos.y = 10.0F;
}

// 0x80133140
void mnPlayers1PTrainingMakeButtons(void)
{
	GObj *gobj;
	SObj *sobj;
	s32 unused;

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
			sMNPlayers1PTrainingFiles[5],
			&lMNPlayersGameModesTrainingModeSprite
		),
		nGCProcessKindFunc,
		NULL,
		1
	);
	SObjGetStruct(gobj)->pos.x = 27.0F;
	SObjGetStruct(gobj)->pos.y = 24.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(gobj)->sprite.red = 0xE3;
	SObjGetStruct(gobj)->sprite.green = 0xAC;
	SObjGetStruct(gobj)->sprite.blue = 0x04;
	sMNPlayers1PTrainingGameModeGObj = gobj;

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
			sMNPlayers1PTrainingFiles[0],
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

// 0x80138264
intptr_t dMNPlayers1PTrainingDigitOffsets[/* */] =
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

// 0x8013828C
f32 dMNPlayers1PTrainingDigitWidths[/* */] =
{
	8.0F, 6.0F, 9.0F, 8.0F, 8.0F,
	9.0F, 8.0F, 8.0F, 8.0F, 9.0F
};

// 0x801332C4 - Unused?
void func_ovl28_801332C4(void)
{
	return;
}

// 0x801332CC - Unused?
void func_ovl28_801332CC(void)
{
	return;
}

// 0x801332D4 - Unused?
void func_ovl28_801332D4(void)
{
	return;
}

// 0x801332DC
s32 mnPlayers1PTrainingGetFighterKindCount(s32 fkind)
{
	s32 count = 0;

	if (fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].fkind)
	{
		count++;
	}
	if (fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].fkind)
	{
		count++;
	}
	return (count != 0) ? count - 1 : count;
}

// 0x80133350
sb32 mnPlayers1PTrainingCheckCostumeUsed(s32 fkind, s32 player, s32 costume)
{
	if (player == sMNPlayers1PTrainingManPlayer)
	{
		if
		(
			(fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].fkind) &&
			(costume == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].costume)
		)
		{
			return TRUE;
		}
		else return FALSE;
	}
	if (player == sMNPlayers1PTrainingComPlayer)
	{
		if
		(
			(fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].fkind) &&
			(costume == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].costume)
		)
		{
			return TRUE;
		}
		else return FALSE;
	}
}

// 0x80133408
s32 mnPlayers1PTrainingGetFreeCostumeRoyal(s32 fkind, s32 player)
{
	s32 i, j, k, l;
	sb32 is_costume_used[GMCOMMON_PLAYERS_MAX];

	for (i = 0; i < ARRAY_COUNT(is_costume_used); i++)
	{
		is_costume_used[i] = FALSE;
	}
	if (player == sMNPlayers1PTrainingManPlayer)
	{
		if (fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].fkind)
		{
			for (j = 0; j < ARRAY_COUNT(is_costume_used); j++)
			{
				if (ftParamGetCostumeCommonID(fkind, j) == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].costume)
				{
					is_costume_used[j] = TRUE;
				}
			}
		}
	}
	else if (fkind ==sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].fkind)
	{
		for (k = 0; k < ARRAY_COUNT(is_costume_used); k++)
		{
			if (ftParamGetCostumeCommonID(fkind, k) == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].costume)
			{
				is_costume_used[k] = TRUE;
			}
		}
	}
	for (l = 0; l < ARRAY_COUNT(is_costume_used); l++)
	{
		if (is_costume_used[l] == FALSE)
		{
			return l;
		}
	}
}

// 0x801335F0
s32 mnPlayers1PTrainingGetFreeCostume(s32 fkind, s32 player)
{
	return ftParamGetCostumeCommonID(fkind, mnPlayers1PTrainingGetFreeCostumeRoyal(fkind, player));
}

// 0x8013361C
s32 mnPlayers1PTrainingGetStatusSelected(s32 fkind)
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

// 0x8013367C
void mnPlayers1PTrainingFighterProcUpdate(GObj *fighter_gobj)
{
	FTStruct *fp = ftGetStruct(fighter_gobj);
	s32 player = fp->player;
	MNPlayersSlotTraining *pslot = &sMNPlayers1PTrainingSlots[player];

	if (pslot->is_fighter_selected == TRUE)
	{
		if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y < F_CLC_DTOR32(0.1F))
		{
			if (pslot->is_status_selected == FALSE)
			{
				scSubsysFighterSetStatus(pslot->player, mnPlayers1PTrainingGetStatusSelected(pslot->fkind));

				pslot->is_status_selected = TRUE;
			}
		}
		else
		{
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y += F_CST_DTOR32(20.0F);

			if (DObjGetStruct(fighter_gobj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(fighter_gobj)->rotate.vec.f.y = 0.0F;

				scSubsysFighterSetStatus(pslot->player, mnPlayers1PTrainingGetStatusSelected(pslot->fkind));

				pslot->is_status_selected = TRUE;
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
void mnPlayers1PTrainingMakeFighter(GObj *fighter_gobj, s32 player, s32 fkind, s32 costume)
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
		else rot_y = 0.0F;
		
		desc.fkind = fkind;
		sMNPlayers1PTrainingSlots[player].costume = desc.costume = costume;
		desc.shade = 0;
		desc.figatree_heap = sMNPlayers1PTrainingSlots[player].figatree_heap;
		desc.player = player;
		fighter_gobj = ftManagerMakeFighter(&desc);

		sMNPlayers1PTrainingSlots[player].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnPlayers1PTrainingFighterProcUpdate, nGCProcessKindFunc, 1);

		if (player == sMNPlayers1PTrainingManPlayer)
		{
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = -830.0F;
			DObjGetStruct(fighter_gobj)->translate.vec.f.y = -870.0F;
		}
		else
		{
			DObjGetStruct(fighter_gobj)->translate.vec.f.x = 830.0F;
			DObjGetStruct(fighter_gobj)->translate.vec.f.y = -870.0F;
		}
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y = rot_y;

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];

		if (player == sMNPlayers1PTrainingComPlayer)
		{
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
		}
	}
}

// 0x801339A0
void mnPlayers1PTrainingMakeFighterCamera(void)
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

// 0x80133A90
void mnPlayers1PTrainingUpdateCursor(GObj *gobj, s32 player, s32 cursor_status)
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
	Vec2i cursor_pos[/* */] =
	{
		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};

	start_pos_x = SObjGetStruct(gobj)->pos.x;
	start_pos_y = SObjGetStruct(gobj)->pos.y;

	gcRemoveSObjAll(gobj);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], cursor_offsets[cursor_status]));
	sobj->pos.x = start_pos_x;
	sobj->pos.y = start_pos_y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], num_offsets[player]));
	sobj->pos.x = sobj->prev->pos.x + cursor_pos[cursor_status].x;
	sobj->pos.y = sobj->prev->pos.y + cursor_pos[cursor_status].y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = colors[player].prim.r;
	sobj->sprite.green = colors[player].prim.g;
	sobj->sprite.blue = colors[player].prim.b;
	sobj->envcolor.r = colors[player].env.r;
	sobj->envcolor.g = colors[player].env.g;
	sobj->envcolor.b = colors[player].env.b;
}

// 0x80133CA0 - Unused?
void func_ovl28_80133CA0(void)
{
	return;
}

// 0x80133CA8
void mnPlayers1PTrainingSetGateLUTAll(void)
{
	s32 i;
	s32 ids[/* */] = { 0, 1, 2, 3 };

	mnPlayers1PTrainingSetGateLUT(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].panel, sMNPlayers1PTrainingManPlayer);
	mnPlayers1PTrainingSetGateLUT(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].panel, sMNPlayers1PTrainingComPlayer);
}

// 0x80133D44
sb32 mnPlayers1PTrainingCheckPuckInRange(GObj *gobj, s32 cursor_player, s32 player)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *cursor_sobj = SObjGetStruct(gobj);
	SObj *puck_sobj = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck);

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

// 0x80133E30
void mnPlayers1PTrainingUpdateFighter(s32 player)
{
	sb32 is_skip_fighter = FALSE;

	if (sMNPlayers1PTrainingSlots[player].player != NULL)
	{
		if ((sMNPlayers1PTrainingSlots[player].fkind == nFTKindNull) && (sMNPlayers1PTrainingSlots[player].is_selected == FALSE))
		{
			sMNPlayers1PTrainingSlots[player].player->flags = GOBJ_FLAG_HIDDEN;
			is_skip_fighter = TRUE;
		}
	}
	if (is_skip_fighter == FALSE)
	{
		mnPlayers1PTrainingMakeFighter
		(
			sMNPlayers1PTrainingSlots[player].player,
			player,
			sMNPlayers1PTrainingSlots[player].fkind,
			mnPlayers1PTrainingGetFreeCostume(sMNPlayers1PTrainingSlots[player].fkind, player)
		);
		sMNPlayers1PTrainingSlots[player].is_status_selected = FALSE;
	}
}

// 0x80133ED8 - Unused?
void func_ovl28_80133ED8(void)
{
	return;
}

// 0x80133EE0
void mnPlayers1PTrainingUpdateNameAndEmblem(s32 player)
{
	if
	(
		(sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindNot) ||
		(sMNPlayers1PTrainingSlots[player].fkind == nFTKindNull) &&
		(sMNPlayers1PTrainingSlots[player].is_selected == FALSE)
	)
	{
		sMNPlayers1PTrainingSlots[player].name_logo_gobj->flags = GOBJ_FLAG_HIDDEN;
	}
	else
	{
		sMNPlayers1PTrainingSlots[player].name_logo_gobj->flags = GOBJ_FLAG_NONE;
		mnPlayers1PTrainingMakeNameAndEmblem(sMNPlayers1PTrainingSlots[player].name_logo_gobj, player, sMNPlayers1PTrainingSlots[player].fkind);
	}
}

// 0x80133F68
void mnPlayers1PTrainingDestroyPortraitFlash(s32 player)
{
	GObj *gobj = sMNPlayers1PTrainingSlots[player].flash;

	if (gobj != NULL)
	{
		sMNPlayers1PTrainingSlots[player].flash = NULL;
		gcEjectGObj(gobj);
	}
}

// 0x80133FB4
void mnPlayers1PTrainingPortraitFlashThreadUpdate(GObj *gobj)
{
	s32 length = 16;
	s32 wait_tics = 1;

	while (TRUE)
	{
		length--, wait_tics--;

		if (length == 0)
		{
			mnPlayers1PTrainingDestroyPortraitFlash(gobj->user_data.s);
		}
		if (wait_tics == 0)
		{
			wait_tics = 1;
			gobj->flags = (gobj->flags == GOBJ_FLAG_HIDDEN) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x8013405C
void mnPlayers1PTrainingMakePortraitFlash(s32 player)
{
	GObj *gobj;
	SObj *sobj;
	s32 portrait = mnPlayers1PTrainingGetPortrait(sMNPlayers1PTrainingSlots[player].fkind);

	mnPlayers1PTrainingDestroyPortraitFlash(player);

	gobj = gcMakeGObjSPAfter(0, NULL, 30, GOBJ_PRIORITY_DEFAULT);
	sMNPlayers1PTrainingSlots[player].flash = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 37, GOBJ_PRIORITY_DEFAULT, ~0);
	gobj->user_data.s = player;
	gcAddGObjProcess(gobj, mnPlayers1PTrainingPortraitFlashThreadUpdate, nGCProcessKindThread, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsFlashSprite));
	sobj->pos.x = ((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26;
	sobj->pos.y = ((portrait >= 6 ? 1 : 0) * 43) + 37;
}

// 0x801341B0
void mnPlayers1PTrainingAnnounceFighter(s32 player, s32 slot)
{
	u16 announcer_names[/* */] =
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

	if (sMNPlayers1PTrainingSlots[player].p_sfx != NULL)
	{
		if ((sMNPlayers1PTrainingSlots[player].p_sfx->sfx_id != 0) && (sMNPlayers1PTrainingSlots[player].p_sfx->sfx_id == sMNPlayers1PTrainingSlots[player].sfx_id))
		{
			func_80026738_27338(sMNPlayers1PTrainingSlots[player].p_sfx);
		}
	}
	func_800269C0_275C0(nSYAudioFGMMarioDash);

	sMNPlayers1PTrainingSlots[player].p_sfx = func_800269C0_275C0(announcer_names[sMNPlayers1PTrainingSlots[slot].fkind]);

	if (sMNPlayers1PTrainingSlots[player].p_sfx != NULL)
	{
		sMNPlayers1PTrainingSlots[player].sfx_id = sMNPlayers1PTrainingSlots[player].p_sfx->sfx_id;
	}
}

// 0x801342B0 - Unused?
void func_ovl28_801342B0(void)
{
	return;
}

// 0x801342B8
void mnPlayers1PTrainingDestroyHandicapLevel(s32 player)
{
	if (sMNPlayers1PTrainingSlots[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].handicap_cpu_level);
	}
	if (sMNPlayers1PTrainingSlots[player].arrows != NULL)
	{
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].arrows);
	}
	if (sMNPlayers1PTrainingSlots[player].handicap_cpu_level_value != NULL)
	{
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].handicap_cpu_level_value);
	}
	sMNPlayers1PTrainingSlots[player].handicap_cpu_level = NULL;
	sMNPlayers1PTrainingSlots[player].arrows = NULL;
	sMNPlayers1PTrainingSlots[player].handicap_cpu_level_value = NULL;
}

// 0x80134340
SObj* mnPlayers1PTrainingGetArrowSObj(GObj *gobj, s32 direction)
{
	if (SObjGetStruct(gobj) != NULL)
	{
		if (direction == SObjGetStruct(gobj)->user_data.s)
		{
			return SObjGetStruct(gobj);
		}
		if ((SObjGetStruct(gobj)->next != NULL) && (direction == SObjGetStruct(gobj)->next->user_data.s))
		{
			return SObjGetStruct(gobj)->next;
		}
	}
	return NULL;
}

// 0x8013438C - Unused?
void mnPlayers1PTrainingArrowThreadUpdate(GObj *gobj)
{
	SObj *sobj;
	s32 player = gobj->user_data.s;
	s32 blink_wait = 10;
	s32 value;

	while (TRUE)
	{
		blink_wait--;

		if (blink_wait == 0)
		{
			blink_wait = 10;
			gobj->flags = (gobj->flags == GOBJ_FLAG_HIDDEN) ? GOBJ_FLAG_NONE : GOBJ_FLAG_HIDDEN;
		}
		value = (sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindMan) ? sMNPlayers1PTrainingSlots[player].handicap : sMNPlayers1PTrainingSlots[player].cpu_level;

		if (value == 1)
		{
			sobj = mnPlayers1PTrainingGetArrowSObj(gobj, 0);

			if (sobj != NULL)
			{
				gcEjectSObj(sobj);
			}
		}
		else if (mnPlayers1PTrainingGetArrowSObj(gobj, 0) == NULL)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
			sobj->pos.x = (player * 69) + 25;
			sobj->pos.y = 201.0F;
			sobj->sprite.attr &= ~SP_FASTCOPY;
			sobj->sprite.attr |= SP_TRANSPARENT;
			sobj->user_data.s = 0;
		}
		if (value == 9)
		{
			sobj = mnPlayers1PTrainingGetArrowSObj(gobj, 1);

			if (sobj != NULL)
			{
				gcEjectSObj(sobj);
			}
		}
		else if (mnPlayers1PTrainingGetArrowSObj(gobj, 1) == NULL)
		{
			sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
			sobj->pos.x = (player * 69) + 79;
			sobj->pos.y = 201.0F;
			sobj->sprite.attr &= ~SP_FASTCOPY;
			sobj->sprite.attr |= SP_TRANSPARENT;
			sobj->user_data.s = 1;
		}
		gcStopCurrentGObjThread(1);
	}
}

// 0x801345B8
void mnPlayers1PTrainingHandicapLevelProcUpdate(GObj *gobj)
{
	s32 player = gobj->user_data.s;

	if (sMNPlayers1PTrainingSlots[player].is_fighter_selected == FALSE)
	{
		mnPlayers1PTrainingDestroyHandicapLevel(player);
	}
	else if (SObjGetStruct(gobj)->user_data.s != sMNPlayers1PTrainingSlots[player].pkind)
	{
		mnPlayers1PTrainingMakeHandicapLevel(player);
	}
}

// 0x8013462C
void mnPlayers1PTrainingMakeHandicapLevel(s32 player)
{
	GObj *gobj;
	SObj *sobj;

	if (sMNPlayers1PTrainingSlots[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].handicap_cpu_level);
		sMNPlayers1PTrainingSlots[player].handicap_cpu_level = NULL;
	}
	gobj = gcMakeGObjSPAfter(0, NULL, 28, GOBJ_PRIORITY_DEFAULT);
	sMNPlayers1PTrainingSlots[player].handicap_cpu_level = gobj;
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 35, GOBJ_PRIORITY_DEFAULT, ~0);
	gobj->user_data.s = player;
	gcAddGObjProcess(gobj, mnPlayers1PTrainingHandicapLevelProcUpdate, nGCProcessKindFunc, 1);

	if (sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindMan)
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		sobj->pos.x = (player * 69) + 35;
		sobj->user_data.s = 0;
	}
	else
	{
		sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		sobj->pos.x = (player * 69) + 34;
		sobj->user_data.s = 1;
	}
	sobj->sprite.red = 0xC2;
	sobj->sprite.green = 0xBD;
	sobj->sprite.blue = 0xAD;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->pos.y = 201.0F;

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[2], &FILE_000_COLON_IMAGE_OFFSET));
	sobj->pos.x = (player * 69) + 61;
	sobj->pos.y = 202.0F;
	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0xFF;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
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
void func_ovl28_80134830(void)
{
	return;
}

// 0x80134838 - Unused?
void func_ovl28_80134838(void)
{
	return;
}

// 0x80134840 - Unused?
void func_ovl28_80134840(void)
{
	return;
}

// 0x80134848
sb32 mnPlayers1PTrainingSelectFighter(GObj *gobj, s32 player, s32 unused, s32 select_button)
{
	MNPlayersSlotTraining *pslot;

	if (sMNPlayers1PTrainingSlots[player].cursor_status != nMNPlayersCursorStatusGrab)
	{
		return FALSE;
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[player].held_player].fkind != nFTKindNull)
	{
		mnPlayers1PTrainingSelectFighterPuck(player, select_button);
		sMNPlayers1PTrainingSlots[player].recall_end_tic = sMNPlayers1PTrainingTotalTimeTics + 30;
		return TRUE;
	}
	else func_800269C0_275C0(nSYAudioFGMMenuDenied);

	return FALSE;
}

// 0x801348F0
void mnPlayers1PTrainingUpdateCursorGrabDLLinks(s32 player, s32 puck)
{
	s32 dl_links[/* */] = { 6, 4, 2, 0 };
	s32 i, order;

	gcMoveGObjDL(sMNPlayers1PTrainingSlots[player].cursor, 32, dl_links[ARRAY_COUNT(dl_links) - 1]);
	gcMoveGObjDL(sMNPlayers1PTrainingSlots[puck].puck, 32, dl_links[ARRAY_COUNT(dl_links) - 1] + 1);

	for (i = 0, order = ARRAY_COUNT(dl_links) - 1; i < ARRAY_COUNT(dl_links); i++, order--)
	{
		if (i != player)
		{
			if (sMNPlayers1PTrainingSlots[i].cursor != NULL)
			{
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[i].cursor, 32, dl_links[order]);
			}
			if (sMNPlayers1PTrainingSlots[i].held_player != -1)
			{
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[i].held_player].puck, 32, dl_links[order] + 1);
			}
		}
	}
}

// 0x80134A4C
void mnPlayers1PTrainingUpdateCursorPlacementDLLinks(s32 player, s32 puck)
{
	s32 held_orders[/* */] = { 3, 2, 1, 0 };
	s32	unheld_orders[/* */] = { 6, 4, 2, 0 };
	s32 unused;
	s32 unheld_id;
	sb32 puck_held[GMCOMMON_PLAYERS_MAX];
	s32 i;

	for (i = 0; i < (ARRAY_COUNT(sMNPlayers1PTrainingSlots) + ARRAY_COUNT(puck_held)) / 2; i++)
	{
		if (sMNPlayers1PTrainingSlots[i].held_player == -1)
		{
			puck_held[i] = FALSE;
		}
		else puck_held[i] = TRUE;
	}
	for (i = 0, unheld_id = ARRAY_COUNT(unheld_orders) - 1; i < (ARRAY_COUNT(puck_held) + ARRAY_COUNT(unheld_orders)) / 2; i++)
	{
		if ((i != player) && (puck_held[i] != FALSE))
		{
			if (sMNPlayers1PTrainingSlots[i].cursor != NULL)
			{
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[i].cursor, 32, unheld_orders[unheld_id]);
			}
			gcMoveGObjDL(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[i].held_player].puck, 32, unheld_orders[unheld_id] + 1);
			unheld_id--;
		}
	}
	if (player != GMCOMMON_PLAYERS_MAX)
	{
		gcMoveGObjDL(sMNPlayers1PTrainingSlots[player].cursor, 32, unheld_orders[unheld_id]);
	}
	gcMoveGObjDL(sMNPlayers1PTrainingSlots[puck].puck, 33, unheld_orders[unheld_id] + 1);

	unheld_id--;

	for (i = 0; i < (ARRAY_COUNT(puck_held) + ARRAY_COUNT(unheld_orders)) / 2; i++)
	{
		if ((i != player) && (puck_held[i] == FALSE))
		{
			if (sMNPlayers1PTrainingSlots[i].cursor != NULL)
			{
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[i].cursor, 32, unheld_orders[unheld_id]);
			}
			unheld_id--;
		}
	}
}

// 0x80134C64
void mnPlayers1PTrainingSetCursorPuckOffset(s32 player)
{
	sMNPlayers1PTrainingSlots[player].cursor_pickup_x =
	SObjGetStruct(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[player].held_player].puck)->pos.x - 11.0F;

	sMNPlayers1PTrainingSlots[player].cursor_pickup_y =
	SObjGetStruct(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[player].held_player].puck)->pos.y - -14.0F;
}

// 0x80134CC8
void mnPlayers1PTrainingSetCursorGrab(s32 player, s32 held_player)
{
	sMNPlayers1PTrainingSlots[held_player].holder_player = player;
	sMNPlayers1PTrainingSlots[held_player].is_selected = FALSE;

	sMNPlayers1PTrainingSlots[player].cursor_status = nMNPlayersCursorStatusGrab;
	sMNPlayers1PTrainingSlots[player].held_player = held_player;

	sMNPlayers1PTrainingSlots[held_player].is_fighter_selected = FALSE;

	mnPlayers1PTrainingUpdateFighter(held_player);
	mnPlayers1PTrainingUpdateCursorGrabDLLinks(player, held_player);
	mnPlayers1PTrainingSetCursorPuckOffset(player);
	mnPlayers1PTrainingUpdateCursor(sMNPlayers1PTrainingSlots[player].cursor, player, sMNPlayers1PTrainingSlots[player].cursor_status);

	sMNPlayers1PTrainingSlots[player].is_cursor_adjusting = TRUE;

	func_800269C0_275C0(nSYAudioFGMSamusDash);

	mnPlayers1PTrainingDestroyHandicapLevel(held_player);
	mnPlayers1PTrainingDestroyPortraitFlash(held_player);
	mnPlayers1PTrainingUpdateNameAndEmblem(held_player);
}

// 0x80134D8C
sb32 mnPlayers1PTrainingCheckCursorPuckGrab(GObj *gobj, s32 player)
{
	s32 i;

	if ((sMNPlayers1PTrainingTotalTimeTics < sMNPlayers1PTrainingSlots[player].recall_end_tic) || (sMNPlayers1PTrainingSlots[player].is_recalling != FALSE))
	{
		return FALSE;
	}
	else if (sMNPlayers1PTrainingSlots[player].cursor_status != nMNPlayersCursorStatusHover)
	{
		return FALSE;
	}
	else for (i = ARRAY_COUNT(sMNPlayers1PTrainingSlots) - 1; i >= 0; i--)
	{
		if (player == i)
		{
			if
			(
				(sMNPlayers1PTrainingSlots[i].holder_player == GMCOMMON_PLAYERS_MAX) &&
				(sMNPlayers1PTrainingSlots[i].pkind != nFTPlayerKindNot) &&
				(mnPlayers1PTrainingCheckPuckInRange(gobj, player, i) != FALSE)
			)
			{
				mnPlayers1PTrainingSetCursorGrab(player, i);

				return TRUE;
			}
		}
		else if
		(
			(sMNPlayers1PTrainingSlots[i].holder_player == GMCOMMON_PLAYERS_MAX) &&
			(sMNPlayers1PTrainingSlots[i].pkind == nFTPlayerKindCom) &&
			(mnPlayers1PTrainingCheckPuckInRange(gobj, player, i) != FALSE)
		)
		{
			mnPlayers1PTrainingSetCursorGrab(player, i);

			return TRUE;
		}
	}
	return FALSE;
}

// 0x80134EE8
s32 mnPlayers1PTrainingGetPuckFighterKind(s32 player)
{
	SObj *sobj = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck);
	s32 pos_x = (s32) sobj->pos.x + 13;
	s32 pos_y = (s32) sobj->pos.y + 12;
	s32 fkind;
	sb32 is_in_range = ((pos_y > 35) && (pos_y < 79)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		is_in_range = ((pos_x > 24) && (pos_x < 295)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			fkind = mnPlayers1PTrainingGetFighterKind((pos_x - 25) / 45);

			if ((mnPlayers1PTrainingCheckFighterCrossed(fkind) != FALSE) || (mnPlayers1PTrainingCheckFighterLocked(fkind) != FALSE))
			{
				return nFTKindNull;
			}
			else return fkind;
		}
	}
	is_in_range = ((pos_y > 78) && (pos_y < 122)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		is_in_range = ((pos_x > 24) && (pos_x < 295)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			fkind = mnPlayers1PTrainingGetFighterKind(((pos_x - 25) / 45) + 6);

			if ((mnPlayers1PTrainingCheckFighterCrossed(fkind) != FALSE) || (mnPlayers1PTrainingCheckFighterLocked(fkind) != FALSE))
			{
				return nFTKindNull;
			}
			else return fkind;
		}
	}
	return nFTKindNull;
}

// 0x80135074
void mnPlayers1PTrainingAdjustCursor(GObj *gobj, s32 player)
{
	s32 unused;
	Vec2i pos[/* */] =
	{
		{ 7, 15 },
		{ 9, 10 },
		{ 9, 15 }
	};
	f32 delta;
	sb32 is_in_range;

	if (sMNPlayers1PTrainingSlots[player].is_cursor_adjusting != FALSE)
	{
		delta = (sMNPlayers1PTrainingSlots[player].cursor_pickup_x - SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x) / 5.0F;
		is_in_range = ((delta >= -1.0F) && (delta <= 1.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x = sMNPlayers1PTrainingSlots[player].cursor_pickup_x;
		}
		else SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x += delta;

		delta = (sMNPlayers1PTrainingSlots[player].cursor_pickup_y - SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y) / 5.0F;
		is_in_range = ((delta >= -1.0F) && (delta <= 1.0F)) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y = sMNPlayers1PTrainingSlots[player].cursor_pickup_y;
		}
		else SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y += delta;

		if
		(
			(SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x == sMNPlayers1PTrainingSlots[player].cursor_pickup_x) &&
			(SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y == sMNPlayers1PTrainingSlots[player].cursor_pickup_y)
		)
		{
			sMNPlayers1PTrainingSlots[player].is_cursor_adjusting = FALSE;
		}
		SObjGetStruct(gobj)->next->pos.x = SObjGetStruct(gobj)->pos.x + pos[sMNPlayers1PTrainingSlots[player].cursor_status].x;
		SObjGetStruct(gobj)->next->pos.y = SObjGetStruct(gobj)->pos.y + pos[sMNPlayers1PTrainingSlots[player].cursor_status].y;
	}
	else if (sMNPlayers1PTrainingSlots[player].is_recalling == FALSE)
	{
		is_in_range =
		(
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].stick_range.x < -8) ||
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].stick_range.x > 8)
		) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			delta = (gSYControllerDevices[sMNPlayers1PTrainingManPlayer].stick_range.x / 20.0F) + SObjGetStruct(gobj)->pos.x;
			is_in_range = ((delta >= 0.0F) && (delta <= 280.0F)) ? TRUE : FALSE;

			if (is_in_range != FALSE)
			{
				SObjGetStruct(gobj)->pos.x = delta;
				SObjGetStruct(gobj)->next->pos.x = SObjGetStruct(gobj)->pos.x + pos[sMNPlayers1PTrainingSlots[player].cursor_status].x;
			}
		}
		is_in_range =
		(
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].stick_range.y < -8) ||
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].stick_range.y > 8)
		) ? TRUE : FALSE;

		if (is_in_range != FALSE)
		{
			delta = (gSYControllerDevices[sMNPlayers1PTrainingManPlayer].stick_range.y / -20.0F) + SObjGetStruct(gobj)->pos.y;
			is_in_range = ((delta >= 10.0F) && (delta <= 205.0F)) ? TRUE : FALSE;

			if (is_in_range != FALSE)
			{
				SObjGetStruct(gobj)->pos.y = delta;
				SObjGetStruct(gobj)->next->pos.y = SObjGetStruct(gobj)->pos.y + pos[sMNPlayers1PTrainingSlots[player].cursor_status].y;
			}
		}
	}
}

// 0x80135430
void mnPlayers1PTrainingSyncCursorDisplay(GObj *gobj, s32 player)
{
	s32 i;

	if ((SObjGetStruct(gobj)->pos.y > 124.0F) || (SObjGetStruct(gobj)->pos.y < 38.0F))
	{
		if (sMNPlayers1PTrainingSlots[player].cursor_status != nMNPlayersCursorStatusPointer)
		{
			mnPlayers1PTrainingUpdateCursor(gobj, player, nMNPlayersCursorStatusPointer);
			sMNPlayers1PTrainingSlots[player].cursor_status = nMNPlayersCursorStatusPointer;
		}
	}
	else if (sMNPlayers1PTrainingSlots[player].held_player == -1)
	{
		if (sMNPlayers1PTrainingSlots[player].cursor_status != nMNPlayersCursorStatusHover)
		{
			mnPlayers1PTrainingUpdateCursor(gobj, player, nMNPlayersCursorStatusHover);
			sMNPlayers1PTrainingSlots[player].cursor_status = nMNPlayersCursorStatusHover;
		}
	}
	else if (sMNPlayers1PTrainingSlots[player].cursor_status != nMNPlayersCursorStatusGrab)
	{
		mnPlayers1PTrainingUpdateCursor(gobj, player, nMNPlayersCursorStatusGrab);
		sMNPlayers1PTrainingSlots[player].cursor_status = nMNPlayersCursorStatusGrab;
	}
	if ((sMNPlayers1PTrainingSlots[player].cursor_status == nMNPlayersCursorStatusPointer) && (sMNPlayers1PTrainingSlots[player].is_selected != FALSE))
	{
		for (i = 0; i < ARRAY_COUNT(sMNPlayers1PTrainingSlots); i++)
		{
			if ((sMNPlayers1PTrainingSlots[i].is_selected == TRUE) && (mnPlayers1PTrainingCheckPuckInRange(gobj, player, i) != FALSE))
			{
				mnPlayers1PTrainingUpdateCursor(gobj, player, nMNPlayersCursorStatusHover);
				sMNPlayers1PTrainingSlots[player].cursor_status = nMNPlayersCursorStatusHover;
				break;
			}
		}
	}
}

// 0x801355E0
void mnPlayers1PTrainingUpdateCostume(s32 player, s32 select_button)
{
	u32 costume = ftParamGetCostumeCommonID(sMNPlayers1PTrainingSlots[player].fkind, select_button);

	if (mnPlayers1PTrainingCheckCostumeUsed(sMNPlayers1PTrainingSlots[player].fkind, player, costume) != FALSE)
	{
		func_800269C0_275C0(nSYAudioFGMMenuDenied);
	}
	else
	{
		ftParamInitAllParts(sMNPlayers1PTrainingSlots[player].player, costume, 0);
		sMNPlayers1PTrainingSlots[player].costume = costume;

		func_800269C0_275C0(nSYAudioFGMMenuScroll2);
	}
}

// 0x80135674
sb32 mnPlayers1PTrainingCheckManFighterSelected(s32 player)
{
	if
	(
		(sMNPlayers1PTrainingSlots[player].is_selected) &&
		(sMNPlayers1PTrainingSlots[player].held_player == -1) &&
		(sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindMan)
	)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x801356D0
void mnPlayers1PTrainingRecallPuck(s32 player)
{
	sMNPlayers1PTrainingSlots[player].is_fighter_selected = FALSE;
	sMNPlayers1PTrainingSlots[player].is_selected = FALSE;
	sMNPlayers1PTrainingSlots[player].is_recalling = TRUE;
	sMNPlayers1PTrainingSlots[player].recall_tics = 0;
	sMNPlayers1PTrainingSlots[player].recall_start_x = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck)->pos.x;
	sMNPlayers1PTrainingSlots[player].recall_start_y = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck)->pos.y;

	sMNPlayers1PTrainingSlots[player].recall_end_x = SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x + 20.0F;

	if (sMNPlayers1PTrainingSlots[player].recall_end_x > 280.0F)
	{
		sMNPlayers1PTrainingSlots[player].recall_end_x = 280.0F;
	}
	sMNPlayers1PTrainingSlots[player].recall_end_y = SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y + -15.0F;

	if (sMNPlayers1PTrainingSlots[player].recall_end_y < 10.0F)
	{
		sMNPlayers1PTrainingSlots[player].recall_end_y = 10.0F;
	}
	if (sMNPlayers1PTrainingSlots[player].recall_end_y < sMNPlayers1PTrainingSlots[player].recall_start_y)
	{
		sMNPlayers1PTrainingSlots[player].recall_mid_y = sMNPlayers1PTrainingSlots[player].recall_end_y - 20.0F;
	}
	else sMNPlayers1PTrainingSlots[player].recall_mid_y = sMNPlayers1PTrainingSlots[player].recall_start_y - 20.0F;
}

// 0x801357CC
void mnPlayers1PTrainingBackTo1PMode(void)
{
	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = nSCKind1PMode;

	mnPlayers1PTrainingSaveMatchInfo();
	syAudioStopSongAll();
	func_800266A0_272A0();
	syTaskmanSetLoadScene();
}

// 0x80135818
void mnPlayers1PTrainingDetectBack(s32 player)
{
	if ((sMNPlayers1PTrainingTotalTimeTics >= 10) && (gSYControllerDevices[player].button_tap & B_BUTTON))
	{
		mnPlayers1PTrainingBackTo1PMode();
	}
}

// 0x8013586C
sb32 mnPlayers1PTrainingCheckBackInRange(GObj* gobj)
{
	f32 pos_x, pos_y;
	sb32 is_in_range;
	SObj *sobj;

	sobj = SObjGetStruct(gobj);

	pos_y = sobj->pos.y + 3.0F;

	is_in_range = ((pos_y < 13.0F) || (pos_y > 34.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return FALSE;
	}
	pos_x = sobj->pos.x + 20.0F;

	is_in_range = ((pos_x >= 244.0F) && (pos_x <= 292.0F)) ? TRUE : FALSE;

	if (is_in_range != FALSE)
	{
		return TRUE;
	}
	else return FALSE;
}

// 0x80135934
void mnPlayers1PTrainingCursorProcUpdate(GObj* gobj)
{
	s32 unused[5];
	s32 player = gobj->user_data.s;

	mnPlayers1PTrainingAdjustCursor(gobj, player);

	if
	(
		(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].button_tap & A_BUTTON) &&
		(mnPlayers1PTrainingSelectFighter(gobj, player, sMNPlayers1PTrainingSlots[player].held_player, 4) == FALSE) &&
		(mnPlayers1PTrainingCheckCursorPuckGrab(gobj, player) == FALSE) &&
		(mnPlayers1PTrainingCheckBackInRange(gobj) != FALSE)
	)
	{
		mnPlayers1PTrainingBackTo1PMode();
		func_800269C0_275C0(nSYAudioFGMMenuScroll2);
	}
	if (sMNPlayers1PTrainingDefaultCostumeOnly == FALSE)
	{
		if
		(
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].button_tap & U_CBUTTONS) &&
			(mnPlayers1PTrainingSelectFighter(gobj, player, sMNPlayers1PTrainingSlots[player].held_player, 0) == FALSE) &&
			(sMNPlayers1PTrainingSlots[player].is_fighter_selected != FALSE)
		)
		{
			mnPlayers1PTrainingUpdateCostume(player, 0);
		}
		if
		(
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].button_tap & R_CBUTTONS) &&
			(mnPlayers1PTrainingSelectFighter(gobj, player, sMNPlayers1PTrainingSlots[player].held_player, 1) == FALSE) &&
			(sMNPlayers1PTrainingSlots[player].is_fighter_selected != FALSE)
		)
		{
			mnPlayers1PTrainingUpdateCostume(player, 1);
		}
		if
		(
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].button_tap & D_CBUTTONS) &&
			(mnPlayers1PTrainingSelectFighter(gobj, player, sMNPlayers1PTrainingSlots[player].held_player, 2) == FALSE) &&
			(sMNPlayers1PTrainingSlots[player].is_fighter_selected != FALSE)
		)
		{
			mnPlayers1PTrainingUpdateCostume(player, 2);
		}
		if
		(
			(gSYControllerDevices[sMNPlayers1PTrainingManPlayer].button_tap & L_CBUTTONS) &&
			(mnPlayers1PTrainingSelectFighter(gobj, player, sMNPlayers1PTrainingSlots[player].held_player, 3) == FALSE) &&
			(sMNPlayers1PTrainingSlots[player].is_fighter_selected != FALSE)
		)
		{
			mnPlayers1PTrainingUpdateCostume(player, 3);
		}
	}

	if ((gSYControllerDevices[sMNPlayers1PTrainingManPlayer].button_tap & B_BUTTON) && (mnPlayers1PTrainingCheckManFighterSelected(player) != FALSE))
	{
		mnPlayers1PTrainingRecallPuck(player);
	}
	if (sMNPlayers1PTrainingSlots[player].is_recalling == FALSE)
	{
		mnPlayers1PTrainingDetectBack(player);
	}
	if (sMNPlayers1PTrainingSlots[player].is_recalling == FALSE)
	{
		mnPlayers1PTrainingSyncCursorDisplay(gobj, player);
	}
}

// 0x80135C18
void mnPlayers1PTrainingRedrawPuck(GObj *gobj, s32 puck)
{
	SObj *sobj;
	f32 pos_x, pos_y;
	intptr_t offsets[/* */] =
	{
		&lMNPlayersCommon1PPuckSprite,
		&lMNPlayersCommon2PPuckSprite,
		&lMNPlayersCommon3PPuckSprite,
		&lMNPlayersCommon4PPuckSprite,
		&lMNPlayersCommonCPPuckSprite
	};

	pos_x = SObjGetStruct(gobj)->pos.x;
	pos_y = SObjGetStruct(gobj)->pos.y;

	gcRemoveSObjAll(gobj);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[0], offsets[puck]));
	sobj->pos.x = pos_x;
	sobj->pos.y = pos_y;
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80135CCC
void mnPlayers1PTrainingCenterPuckInPortrait(GObj *gobj, s32 fkind)
{
	s32 portrait = mnPlayers1PTrainingGetPortrait(fkind);

	if (portrait >= 6)
	{
		SObjGetStruct(gobj)->pos.x = (portrait * 45) - (6 * 45) + 36;
		SObjGetStruct(gobj)->pos.y = 89.0F;
	}
	else
	{
		SObjGetStruct(gobj)->pos.x = (portrait * 45) + 36;
		SObjGetStruct(gobj)->pos.y = 46.0F;
	}
}

// 0x80135D7C - Unused?
void func_ovl28_80135D7C(void)
{
	return;
}

// 0x80135D84
void mnPlayers1PTrainingMovePuck(s32 player)
{
	SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck)->pos.x += sMNPlayers1PTrainingSlots[player].puck_vel_x;
	SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck)->pos.y += sMNPlayers1PTrainingSlots[player].puck_vel_y;
}

// 0x80135DD8
void mnPlayers1PTrainingSyncPuckAndFighter(GObj* puck_gobj)
{
	s32 fkind;
	s32 player = puck_gobj->user_data.s;

	if (sMNPlayers1PTrainingTotalTimeTics < 30)
	{
		puck_gobj->flags = 1;
	}
	else
	{
		if ((sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindCom)
			|| ((sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindMan)
				&& ((sMNPlayers1PTrainingSlots[player].cursor_status != nMNPlayersCursorStatusPointer)
					|| (sMNPlayers1PTrainingSlots[player].is_selected == TRUE)
					|| (sMNPlayers1PTrainingSlots[player].is_recalling == TRUE))))
		{
			puck_gobj->flags = 0;
		}
		else
		{
			puck_gobj->flags = 1;
		}
	}

	if ((sMNPlayers1PTrainingSlots[player].pkind) != nFTPlayerKindNot)
	{
		if ((sMNPlayers1PTrainingSlots[player].is_selected == FALSE)
			&& (sMNPlayers1PTrainingSlots[player].holder_player != 4))
		{
			if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[player].holder_player].is_cursor_adjusting == FALSE)
			{
				SObjGetStruct(puck_gobj)->pos.x = (f32) (SObjGetStruct(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[player].holder_player].cursor)->pos.x + 11.0F);
				SObjGetStruct(puck_gobj)->pos.y = (f32) (SObjGetStruct(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[player].holder_player].cursor)->pos.y + -14.0F);
			}
		}
		else
			mnPlayers1PTrainingMovePuck(player);

		fkind = mnPlayers1PTrainingGetPuckFighterKind(player);

		if ((sMNPlayers1PTrainingSlots[player].pkind == nFTPlayerKindCom)
			&& (fkind != sMNPlayers1PTrainingSlots[player].fkind)
			&& (fkind == nFTKindNull))
		{
			if (sMNPlayers1PTrainingSlots[player].holder_player != 4)
				mnPlayers1PTrainingSelectFighterPuck(sMNPlayers1PTrainingSlots[player].holder_player, 4);
		}

		if ((sMNPlayers1PTrainingSlots[player].is_selected == FALSE)
			&& (fkind != sMNPlayers1PTrainingSlots[player].fkind))
		{
			sMNPlayers1PTrainingSlots[player].fkind = fkind;

			mnPlayers1PTrainingUpdateFighter(player);
			mnPlayers1PTrainingUpdateNameAndEmblem(player);
		}
	}
}

// 0x80135FE8
void mnPlayers1PTrainingMakeCursorViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x14, 0x100000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136088
void mnPlayers1PTrainingCreatePuckCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x19, 0x200000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136128
void mnPlayers1PTrainingCreateHandicapCPULevelViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2B, 0x800000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801361C8
void mnPlayers1PTrainingCreateReadyViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0xA, 0x4000000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80136268
void mnPlayers1PTrainingMakeCursor(s32 player)
{
	GObj* gobj;
	s32 unused;

	// unused
	intptr_t cursor_offsets[4] = {

		0x8268, 0x8368, 0x8468, 0x8568
	};
	s32 starting_display_orders[4] = {

		6, 4, 2, 0
	};

	gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x20, starting_display_orders[player], -1, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnPlayers1PTrainingCursorProcUpdate, 2);

	sMNPlayers1PTrainingSlots[player].cursor = gobj;
	gobj->user_data.s = player;
	SObjGetStruct(gobj)->pos.x = 70.0F;
	SObjGetStruct(gobj)->pos.y = 170.0F;
	SObjGetStruct(gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayers1PTrainingUpdateCursor(gobj, player, 0);
}

// 0x801363C8
void mnPlayers1PTrainingRenderPuck(GObj* puck_gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
	gDPSetEnvColor
	(
		gSYTaskmanDLHeads[0]++,
		sMNPlayers1PTrainingPuckGlowPulseColor,
		sMNPlayers1PTrainingPuckGlowPulseColor,
		sMNPlayers1PTrainingPuckGlowPulseColor,
		sMNPlayers1PTrainingPuckGlowPulseColor
	);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0,  TEXEL0, PRIMITIVE, ENVIRONMENT, PRIMITIVE,  0, 0, 0, TEXEL0);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

	lbCommonDrawSObjNoAttr(puck_gobj);
}

// 0x801364C0
void mnPlayers1PTrainingMakePuck(s32 player)
{
	GObj* puck_gobj;
	MNPlayersSlotTraining* pslot;
	intptr_t offsets_no_cpu[4] = {

		0x9048, 0x9B28, 0xA608, 0xB0E8
	};
	s32 starting_display_orders[4] = {

		3, 2, 1, 0
	};
	s32 holding_display_orders[4] = {

		6, 4, 2, 0
	};

	sMNPlayers1PTrainingSlots[player].puck = puck_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x14, 0x80000000, mnPlayers1PTrainingRenderPuck, 0x21, starting_display_orders[player], -1, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], offsets_no_cpu[player]), 1, mnPlayers1PTrainingSyncPuckAndFighter, 1);

	pslot = &sMNPlayers1PTrainingSlots[player];

	puck_gobj->user_data.s = player;

	if (pslot->pkind == nFTPlayerKindCom)
		mnPlayers1PTrainingRedrawPuck(puck_gobj, 4);

	if ((pslot->pkind == nFTPlayerKindMan) && (pslot->held_player != -1))
		gcMoveGObjDL(pslot->puck, 0x20U, holding_display_orders[player] + 1);

	if (pslot->fkind == nFTKindNull)
	{
		SObjGetStruct(puck_gobj)->pos.x = 51.0F;
		SObjGetStruct(puck_gobj)->pos.y = 161.0F;
	}
	else
		mnPlayers1PTrainingCenterPuckInPortrait(puck_gobj, pslot->fkind);

	SObjGetStruct(puck_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(puck_gobj)->sprite.attr |= SP_TRANSPARENT;
}

// 0x801366D0
f32 getTrainingPuckDistance(s32 player_1, s32 player_2)
{
	f32 delta_x, delta_y;
	SObj* puck_sobj_2 = SObjGetStruct(sMNPlayers1PTrainingSlots[player_2].puck);
	SObj* puck_sobj_1 = SObjGetStruct(sMNPlayers1PTrainingSlots[player_1].puck);

	delta_y = puck_sobj_2->pos.y - puck_sobj_1->pos.y;
	delta_x = puck_sobj_2->pos.x - puck_sobj_1->pos.x;

	return sqrtf((delta_y * delta_y) + (delta_x * delta_x));
}

// 0x80136748
void mnPlayers1PTrainingAutopositionOverlappedPucks(s32 player_1, s32 player_2, f32 unused)
{
	int unused_2;

	if (SObjGetStruct(sMNPlayers1PTrainingSlots[player_1].puck)->pos.x == SObjGetStruct(sMNPlayers1PTrainingSlots[player_2].puck)->pos.x)
		sMNPlayers1PTrainingSlots[player_1].puck_vel_x += syUtilsGetRandomIntRange(2) - 1;
	else
		sMNPlayers1PTrainingSlots[player_1].puck_vel_x += (-1.0F * (SObjGetStruct(sMNPlayers1PTrainingSlots[player_2].puck)->pos.x - SObjGetStruct(sMNPlayers1PTrainingSlots[player_1].puck)->pos.x)) / 10.0F;

	if (SObjGetStruct(sMNPlayers1PTrainingSlots[player_1].puck)->pos.y == SObjGetStruct(sMNPlayers1PTrainingSlots[player_2].puck)->pos.y)
		sMNPlayers1PTrainingSlots[player_1].puck_vel_y += syUtilsGetRandomIntRange(2) - 1;
	else
		sMNPlayers1PTrainingSlots[player_1].puck_vel_y += (-1.0F * (SObjGetStruct(sMNPlayers1PTrainingSlots[player_2].puck)->pos.y - SObjGetStruct(sMNPlayers1PTrainingSlots[player_1].puck)->pos.y)) / 10.0F;
}

// 0x80136888
void mnPlayers1PTrainingPuckActorAdjustPortraitEdge(s32 player)
{
	s32 portrait = mnPlayers1PTrainingGetPortrait(sMNPlayers1PTrainingSlots[player].fkind);
	f32 portrait_edge_x = ((portrait >= 6) ? portrait - 6 : portrait) * 45 + 25;
	f32 portrait_edge_y = ((portrait >= 6) ? 1 : 0) * 43 + 36;
	f32 new_pos_x = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck)->pos.x + sMNPlayers1PTrainingSlots[player].puck_vel_x + 13.0F;
	f32 new_pos_y = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck)->pos.y + sMNPlayers1PTrainingSlots[player].puck_vel_y + 12.0F;

	if (new_pos_x < (portrait_edge_x + 5.0F))
		sMNPlayers1PTrainingSlots[player].puck_vel_x = ((portrait_edge_x + 5.0F) - new_pos_x) / 10.0F;

	if (((portrait_edge_x + 45.0F) - 5.0F) < new_pos_x)
		sMNPlayers1PTrainingSlots[player].puck_vel_x = ((new_pos_x - ((portrait_edge_x + 45.0F) - 5.0F)) * -1.0F) / 10.0F;

	if (new_pos_y < (portrait_edge_y + 5.0F))
		sMNPlayers1PTrainingSlots[player].puck_vel_y = ((portrait_edge_y + 5.0F) - new_pos_y) / 10.0F;

	if (((portrait_edge_y + 43.0F) - 5.0F) < new_pos_y)
		sMNPlayers1PTrainingSlots[player].puck_vel_y = ((new_pos_y - ((portrait_edge_y + 43.0F) - 5.0F)) * -1.0F) / 10.0F;
}

// 0x80136A44
void mnPlayers1PTrainingPuckActorAdjustPlaced(s32 player)
{
	s32 other_player;
	f32 distances[4];

	other_player = (player == sMNPlayers1PTrainingManPlayer) ? sMNPlayers1PTrainingComPlayer : sMNPlayers1PTrainingManPlayer;

	if (player != other_player)
	{
		if (sMNPlayers1PTrainingSlots[player].is_selected)
			distances[other_player] = getTrainingPuckDistance(player, other_player);
	}
	else
		distances[other_player] = -1.0F;

	sMNPlayers1PTrainingSlots[player].puck_vel_x = 0.0F;
	sMNPlayers1PTrainingSlots[player].puck_vel_y = 0.0F;

	if (
		(IS_BETWEEN(distances[other_player], 0.0F, 15.0F))
		&& (sMNPlayers1PTrainingSlots[player].fkind == sMNPlayers1PTrainingSlots[other_player].fkind)
		&& (sMNPlayers1PTrainingSlots[player].fkind != nFTKindNull)
		&& (sMNPlayers1PTrainingSlots[other_player].is_selected == 1))
	{
		mnPlayers1PTrainingAutopositionOverlappedPucks(player, other_player, (15.0F -  distances[other_player]) / 15.0F);
	}

	mnPlayers1PTrainingPuckActorAdjustPortraitEdge(player);
}

// 0x80136BE0
void mnPlayers1PTrainingPuckActorAdjustRecall(s32 player)
{
	f32 new_y_velocity, new_x_velocity;

	sMNPlayers1PTrainingSlots[player].recall_tics += 1;

	if (sMNPlayers1PTrainingSlots[player].recall_tics < 11)
	{
		new_x_velocity = (sMNPlayers1PTrainingSlots[player].recall_end_x - sMNPlayers1PTrainingSlots[player].recall_start_x) / 10.0F;

		if (sMNPlayers1PTrainingSlots[player].recall_tics < 6)
			new_y_velocity = (sMNPlayers1PTrainingSlots[player].recall_mid_y - sMNPlayers1PTrainingSlots[player].recall_start_y) / 5.0F;
		else
			new_y_velocity = (sMNPlayers1PTrainingSlots[player].recall_end_y - sMNPlayers1PTrainingSlots[player].recall_mid_y) / 5.0F;

		sMNPlayers1PTrainingSlots[player].puck_vel_x = new_x_velocity;
		sMNPlayers1PTrainingSlots[player].puck_vel_y = new_y_velocity;
	}
	else if (sMNPlayers1PTrainingSlots[player].recall_tics == 11)
	{
		mnPlayers1PTrainingSetCursorGrab(player, player);

		sMNPlayers1PTrainingSlots[player].puck_vel_x = 0.0F;
		sMNPlayers1PTrainingSlots[player].puck_vel_y = 0.0F;
	}

	if (sMNPlayers1PTrainingSlots[player].recall_tics == 30)
		sMNPlayers1PTrainingSlots[player].is_recalling = FALSE;
}

// 0x80136CCC
void mnPlayers1PTrainingPuckActorProcUpdate(GObj *gobj)
{
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].is_recalling)
	{
		mnPlayers1PTrainingPuckActorAdjustRecall(sMNPlayers1PTrainingManPlayer);
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].is_selected)
	{
		mnPlayers1PTrainingPuckActorAdjustPlaced(sMNPlayers1PTrainingManPlayer);
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].is_recalling)
	{
		mnPlayers1PTrainingPuckActorAdjustRecall(sMNPlayers1PTrainingComPlayer);
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].is_selected)
	{
		mnPlayers1PTrainingPuckActorAdjustPlaced(sMNPlayers1PTrainingComPlayer);
	}
}

// 0x80136DD8
void mnPlayers1PTrainingMakePuckActor()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnPlayers1PTrainingPuckActorProcUpdate, 1, 1);
}

// 0x80136E1C
void mnPlayers1PTrainingUpdatePuckGlowPulseColor(GObj *unused)
{
	if (sMNPlayers1PTrainingIsPuckGlowIncreasing == FALSE)
	{
		sMNPlayers1PTrainingPuckGlowPulseColor += 0x09;

		if (sMNPlayers1PTrainingPuckGlowPulseColor > 0xFF)
		{
			sMNPlayers1PTrainingPuckGlowPulseColor = 0xFF;
			sMNPlayers1PTrainingIsPuckGlowIncreasing = TRUE;
		}
	}
	if (sMNPlayers1PTrainingIsPuckGlowIncreasing == TRUE)
	{
		sMNPlayers1PTrainingPuckGlowPulseColor -= 0x09;

		if (sMNPlayers1PTrainingPuckGlowPulseColor < 0x80)
		{
			sMNPlayers1PTrainingPuckGlowPulseColor = 0x80;
			sMNPlayers1PTrainingIsPuckGlowIncreasing = FALSE;
		}
	}
}

// 0x80136E94
void mnPlayers1PTrainingMakePuckGlowPulseRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1AU, 0x80000000U), mnPlayers1PTrainingUpdatePuckGlowPulseColor, 1, 1);
}

// 0x80136ED8
void mnPlayers1PTrainingSyncShadeAndCostume(GObj *gobj)
{
	s32 i;
	s32 costume;

	for (i = 0; i < 4; i++)
	{
		if ((sMNPlayers1PTrainingSlots[i].fkind != nFTKindNull) && (mnPlayers1PTrainingGetFighterKindCount(sMNPlayers1PTrainingSlots[i].fkind) == 0))
		{
			costume = ftParamGetCostumeCommonID(sMNPlayers1PTrainingSlots[i].fkind, 0);

			if ((costume != sMNPlayers1PTrainingSlots[i].costume) && (sMNPlayers1PTrainingSlots[i].is_fighter_selected == 0))
			{
				ftParamInitAllParts(sMNPlayers1PTrainingSlots[i].player, costume, 0);
				sMNPlayers1PTrainingSlots[i].costume = costume;
			}
		}
	}
}

// 0x80136F84
void mnPlayers1PTrainingCreateSyncShadeAndCostumeRoutine()
{
	gcAddGObjProcess(gcMakeGObjSPAfter(0U, NULL, 0x1FU, 0x80000000U), mnPlayers1PTrainingSyncShadeAndCostume, 1, 1);
}

// 0x80136FC8
void mnPlayers1PTrainingSpotlightProcUpdate(GObj* white_circle_gobj)
{
	s32 portrait = white_circle_gobj->user_data.s;
	f32 sizes[12] = {

		1.5, 1.5, 2.0, 1.5, 1.5, 1.5,
		1.5, 1.5, 1.5, 1.5, 1.5, 1.5
	};

	if ((sMNPlayers1PTrainingSlots[portrait].is_fighter_selected == 0) && (sMNPlayers1PTrainingSlots[portrait].fkind != nFTKindNull))
	{
		white_circle_gobj->flags = (white_circle_gobj->flags == 1) ? 0 : 1;

		DObjGetStruct(white_circle_gobj)->scale.vec.f.x = sizes[sMNPlayers1PTrainingSlots[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMNPlayers1PTrainingSlots[portrait].fkind];
		DObjGetStruct(white_circle_gobj)->scale.vec.f.y = sizes[sMNPlayers1PTrainingSlots[portrait].fkind];
	}
	else
		white_circle_gobj->flags = 1;
}

// 0x801370BC
void mnPlayers1PTrainingMakeSpotlight()
{
	GObj* white_circle_gobj;
	s32 i;

	for (i = 0; i < 4; i++)
	{
		white_circle_gobj = gcMakeGObjSPAfter(0U, NULL, 0x15U, 0x80000000U);

		gcSetupCommonDObjs(white_circle_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[7], &lMNPlayersSpotlightDObjDesc), 0);

		gcAddGObjDisplay(white_circle_gobj, gcDrawDObjTreeDLLinksForGObj, 9U, GOBJ_PRIORITY_DEFAULT, ~0);

		white_circle_gobj->user_data.s = i;

		gcAddMObjAll(white_circle_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[7], &lMNPlayersSpotlightMObjSub));

		gcAddGObjProcess(white_circle_gobj, mnPlayers1PTrainingSpotlightProcUpdate, 1, 1);

		gcPlayAnimAll(white_circle_gobj);

		if (i == sMNPlayers1PTrainingManPlayer)
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
void mnPlayers1PTrainingRenderReadyObject(GObj* arg)
{
	lbCommonDrawSObjAttr(arg);
}

// 0x80137274
sb32 mnPlayers1PTrainingIsReady()
{
	if ((sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].is_fighter_selected != 0) && (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].is_fighter_selected != 0))
		return TRUE;
	else
		return FALSE;
}

// 0x801372D4
void mnPlayers1PTrainingReadyProcUpdate(GObj* gobj)
{
	if (mnPlayers1PTrainingIsReady())
	{
		sMNPlayers1PTrainingPressStartFlashTimer += 1;

		if (sMNPlayers1PTrainingPressStartFlashTimer == 0x28)
			sMNPlayers1PTrainingPressStartFlashTimer = 0;

		gobj->flags = (sMNPlayers1PTrainingPressStartFlashTimer < 0x1E) ? 0 : 1;
	}
	else
	{
		gobj->flags = 1;
		sMNPlayers1PTrainingPressStartFlashTimer = 0;
	}
}

// 0x80137354
void mnPlayers1PTrainingMakeReady()
{
	GObj* gobj;
	SObj* sobj;

	// Ready to Fight banner
	gobj = gcMakeGObjSPAfter(0U, NULL, 0x20U, 0x80000000U);
	gcAddGObjDisplay(gobj, mnPlayers1PTrainingRenderReadyObject, 0x26U, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PTrainingReadyProcUpdate, 1, 1);

	// Ready to Fight banner bg
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &lMNPlayersCommonReadyBannerSprite));
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
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &lMNPlayersCommonReadySprite));
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
	gcAddGObjDisplay(gobj, mnPlayers1PTrainingRenderReadyObject, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PTrainingReadyProcUpdate, 1, 1);

	// "Press"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &lMNPlayersCommonPressSprite));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	sobj->sprite.red = 0xD6;
	sobj->sprite.green = 0xDD;
	sobj->sprite.blue = 0xC6;
	sobj->pos.x = 133.0f;
	sobj->pos.y = 219.0f;

	// "Start"
	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &lMNPlayersCommonStartSprite));
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
void mnPlayers1PTrainingSaveMatchInfo()
{
	gSCManagerSceneData.training_man_fkind = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].fkind;
	gSCManagerSceneData.training_man_costume = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].costume;

	gSCManagerSceneData.training_com_fkind = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].fkind;
	gSCManagerSceneData.training_com_costume = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].costume;
}

// 0x80137638
void mnPlayers1PTrainingDestroyCursorAndPuckProcesses()
{
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].cursor != NULL)
		gcPauseGObjProcess(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].cursor->gobjproc_head);

	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].puck != NULL)
		gcPauseGObjProcess(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].puck->gobjproc_head);

	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].puck != NULL)
		gcPauseGObjProcess(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].puck->gobjproc_head);
}

// 0x80137700
void mnPlayers1PTrainingMain(GObj *gobj)
{
	sMNPlayers1PTrainingTotalTimeTics += 1;

	if (sMNPlayers1PTrainingTotalTimeTics == sMNPlayers1PTrainingReturnTic)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = nSCKindTitle;

		mnPlayers1PTrainingSaveMatchInfo();
		syTaskmanSetLoadScene();

		return;
	}

	if (scSubsysControllerCheckNoInputAll() == 0)
		sMNPlayers1PTrainingReturnTic = sMNPlayers1PTrainingTotalTimeTics + I_MIN_TO_TICS(5);

	if (sMNPlayers1PTrainingIsStartTriggered)
	{
		sMNPlayers1PTrainingStartDelayTics -= 1;

		if (sMNPlayers1PTrainingStartDelayTics == 0)
		{
			gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
			gSCManagerSceneData.scene_curr = nSCKindMaps;

			mnPlayers1PTrainingSaveMatchInfo();
			syTaskmanSetLoadScene();
		}
	}
	else if ((scSubsysControllerGetPlayerTapButtons(START_BUTTON)) && (sMNPlayers1PTrainingTotalTimeTics >= 0x3D))
	{
		if (mnPlayers1PTrainingIsReady())
		{
			func_800269C0_275C0(0x26AU);

			sMNPlayers1PTrainingStartDelayTics = 0x1E;
			sMNPlayers1PTrainingIsStartTriggered = TRUE;

			mnPlayers1PTrainingDestroyCursorAndPuckProcesses();
			return;
		}

		func_800269C0_275C0(0xA5U);
	}
}

// 0x8013784C
void mnPlayers1PTrainingInitPort(s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	pslot->team_color_button = NULL;
	pslot->handicap_cpu_level = NULL;
	pslot->arrows = NULL;
	pslot->handicap_cpu_level_value = NULL;
	pslot->flash = NULL;
	pslot->p_sfx = NULL;
	pslot->sfx_id = 0;
	pslot->player = NULL;

	if (player == sMNPlayers1PTrainingManPlayer)
	{
		pslot->pkind = nFTPlayerKindMan;
		pslot->holder_player = 4;
		pslot->held_player = -1;
		pslot->fkind = gSCManagerSceneData.training_man_fkind;
		pslot->costume = gSCManagerSceneData.training_man_costume;
		pslot->is_fighter_selected = TRUE;
		pslot->is_selected = TRUE;
		pslot->is_recalling = FALSE;

	}
	else
	{
		pslot->holder_player = 4;
		pslot->held_player = -1;
		pslot->is_fighter_selected = TRUE;
		pslot->is_selected = TRUE;
		pslot->is_recalling = FALSE;
	}
}

// 0x80137900
void mnPlayers1PTrainingResetPort(s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	pslot->team_color_button = NULL;
	pslot->handicap_cpu_level = NULL;
	pslot->arrows = NULL;
	pslot->handicap_cpu_level_value = NULL;
	pslot->flash = NULL;
	pslot->player = NULL;
	pslot->p_sfx = NULL;
	pslot->sfx_id = 0;
	pslot->is_selected = FALSE;
	pslot->fkind = nFTKindNull;
	pslot->is_recalling = FALSE;
	pslot->pkind = nFTPlayerKindMan;
	pslot->holder_player = player;
	pslot->held_player = player;
}

// 0x80137960
void mnPlayers1PTrainingResetPortToNA(s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	pslot->team_color_button = NULL;
	pslot->handicap_cpu_level = NULL;
	pslot->arrows = NULL;
	pslot->handicap_cpu_level_value = NULL;
	pslot->flash = NULL;
	pslot->player = NULL;
	pslot->p_sfx = NULL;
	pslot->sfx_id = 0;
	pslot->is_selected = FALSE;
	pslot->fkind = nFTKindNull;
	pslot->is_recalling = FALSE;
	pslot->pkind = nFTPlayerKindNot;
	pslot->holder_player = 4;
	pslot->held_player = -1;
}

// 0x801379CC
void mnPlayers1PTrainingLoadMatchInfo()
{
	s32 i;
	s32 fkind, costume;

	sMNPlayers1PTrainingTotalTimeTics = 0;
	sMNPlayers1PTrainingIsStartTriggered = FALSE;
	sMNPlayers1PTrainingReturnTic = sMNPlayers1PTrainingTotalTimeTics + I_MIN_TO_TICS(5);
	sMNPlayers1PTrainingManPlayer = gSCManagerSceneData.player;
	sMNPlayers1PTrainingComPlayer = (sMNPlayers1PTrainingManPlayer == 0) ? 1 : 0;
	sMNPlayers1PTrainingFighterMask = gSCManagerBackupData.fighter_mask;

	if (gSCManagerSceneData.training_man_fkind == nFTKindNull)
		mnPlayers1PTrainingResetPort(sMNPlayers1PTrainingManPlayer);
	else
		mnPlayers1PTrainingInitPort(sMNPlayers1PTrainingManPlayer);

	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManPlayer].recall_end_tic = FALSE;

	fkind = gSCManagerSceneData.training_com_fkind;

	if (fkind == nFTKindNull)
	{
		do
		{
			do
			{
				fkind = syUtilsGetRandomTimeUCharRange(12);
			} while (mnPlayers1PTrainingCheckFighterCrossed(fkind));
		} while (mnPlayers1PTrainingCheckFighterLocked(fkind));

		if (mnPlayers1PTrainingCheckCostumeUsed(fkind, sMNPlayers1PTrainingComPlayer, ftParamGetCostumeCommonID(fkind, 0)))
			costume = ftParamGetCostumeCommonID(fkind, 1);
		else
			costume = ftParamGetCostumeCommonID(fkind, 0);
	}
	else
		costume = gSCManagerSceneData.training_com_costume;

	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].fkind = fkind;
	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].costume = costume;
	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComPlayer].pkind = 1;
	mnPlayers1PTrainingInitPort(sMNPlayers1PTrainingComPlayer);

	for (i = 0; i < 4; i++)
	{
		if ((i != sMNPlayers1PTrainingManPlayer) && (i != sMNPlayers1PTrainingComPlayer))
			mnPlayers1PTrainingResetPortToNA(i);
	}
}

// 0x80137BB0
void mnPlayers1PTrainingInitPanel(s32 player)
{
	s32 fkind;

	if (player == sMNPlayers1PTrainingManPlayer)
		mnPlayers1PTrainingMakeCursor(player);
	else
		sMNPlayers1PTrainingSlots[player].cursor = NULL;

	mnPlayers1PTrainingMakePuck(player);
	mnPlayers1PTrainingMakeGate(player);

	if (sMNPlayers1PTrainingSlots[player].is_selected)
	{
		fkind = sMNPlayers1PTrainingSlots[player].fkind;

		if (fkind != nFTKindNull)
			mnPlayers1PTrainingMakeFighter(sMNPlayers1PTrainingSlots[player].player, player, fkind, sMNPlayers1PTrainingSlots[player].costume);
	}
}

// 0x80137C74
void mnPlayers1PTrainingInitPanels()
{
	mnPlayers1PTrainingInitPanel(sMNPlayers1PTrainingManPlayer);
	mnPlayers1PTrainingInitPanel(sMNPlayers1PTrainingComPlayer);
	mnPlayers1PTrainingSetGateLUTAll();
}

// 0x80137CAC
void mnPlayers1PTrainingFuncStart(void)
{
	s32 unused1[2];
	LBRelocSetup rl_setup;
	s32 unused2;
	s32 i, j;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMNPlayers1PTrainingStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMNPlayers1PTrainingStatusBuffer);
	rl_setup.force_status_buffer = sMNPlayers1PTrainingForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMNPlayers1PTrainingForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMNPlayers1PTrainingFileIDs,
		ARRAY_COUNT(dMNPlayers1PTrainingFileIDs),
		sMNPlayers1PTrainingFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMNPlayers1PTrainingFileIDs,
				ARRAY_COUNT(dMNPlayers1PTrainingFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(nGCCommonKindPlayerSelect, mnPlayers1PTrainingMain, 15, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(16, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));
	efParticleInitAll();
	efManagerInitEffects();
	mnPlayers1PTrainingLoadMatchInfo();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 4);

	for (i = nFTKindPlayableStart; i <= nFTKindPlayableEnd; i++)
	{
		ftManagerSetupFilesAllKind(i);
	}
	for (i = 0; i < ARRAY_COUNT(sMNPlayers1PTrainingSlots); i++)
	{
		sMNPlayers1PTrainingSlots[i].figatree_heap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	}
	mnPlayers1PTrainingMakePortraitCamera();
	mnPlayers1PTrainingMakeCursorViewport();
	mnPlayers1PTrainingCreatePuckCamera();
	mnPlayers1PTrainingMakePlayerKindCamera();
	mnPlayers1PTrainingMakeGateCamera();
	mnPlayers1PTrainingMakePlayerKindButtonCamera();
	mnPlayers1PTrainingMakeFighterCamera();
	mnPlayers1PTrainingMakeTeamButtonCamera();
	mnPlayers1PTrainingCreateHandicapCPULevelViewport();
	mnPlayers1PTrainingMakePortraitWallpaperCamera();
	mnPlayers1PTrainingMakePortraitFlashCamera();
	mnPlayers1PTrainingCreateReadyViewport();
	mnPlayers1PTrainingMakeWallpaper();
	mnPlayers1PTrainingMakePortraitAll();
	mnPlayers1PTrainingInitPanels();
	mnPlayers1PTrainingMakeButtons();
	mnPlayers1PTrainingMakePuckActor();
	mnPlayers1PTrainingMakePuckGlowPulseRoutine();
	mnPlayers1PTrainingCreateSyncShadeAndCostumeRoutine();
	mnPlayers1PTrainingMakeSpotlight();
	mnPlayers1PTrainingMakeReady();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSCManagerSceneData.scene_prev != nSCKindMaps)
	{
		syAudioPlaySong(0, nSYAudioBGMBattleSelect);
	}
	func_800266A0_272A0();
	func_800269C0_275C0(nSYAudioVoiceAnnounceTrainingMode);
}

// 0x8013842C
SYVideoSetup dMNPlayers1PTrainingVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x80138448
SYTaskmanSetup dMNPlayers1PTrainingTaskmanSetup =
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
        mnPlayers1PTrainingFuncLights, 	// Pre-render function
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
    
    mnPlayers1PTrainingFuncStart      	// Task start function
};

// 0x80137F00
void mnPlayers1PTrainingStartScene(void)
{
	dMNPlayers1PTrainingVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMNPlayers1PTrainingVideoSetup);

	dMNPlayers1PTrainingTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl28_BSS_END);
	scManagerFuncUpdate(&dMNPlayers1PTrainingTaskmanSetup);
}
