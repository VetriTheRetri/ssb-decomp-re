#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/video.h>

extern intptr_t FILE_000_COLON_IMAGE_OFFSET; // file 0x000 image offset for colon

extern intptr_t FILE_011_TYPE_CP_IMAGE_OFFSET; // file 0x011 image offset for CP type image
extern intptr_t FILE_011_HANDICAP_IMAGE_OFFSET; // file 0x011 image offset for Handicap image
extern intptr_t FILE_011_CPU_LEVEL_IMAGE_OFFSET; // file 0x011 image offset for CPU Level image
extern intptr_t FILE_011_CURSOR_POINTER_IMAGE_OFFSET; // file 0x011 image offset for pointer cursor
extern intptr_t FILE_011_ARROW_L_IMAGE_OFFSET; // file 0x011 image offset for left arrow
extern intptr_t FILE_011_ARROW_R_IMAGE_OFFSET; // file 0x011 image offset for right arrow

extern intptr_t FILE_012_TRAINING_MODE_IMAGE_OFFSET; // file 0x012 image offset for Training Mode title image
extern intptr_t FILE_017_CPU_PANEL_LUT_OFFSET; // D_NF_00003238; // CPU panel LUT

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Forward declarations
void mnPlayers1PTrainingMakePortraitFlash(s32 player);
void mnPlayers1PTrainingSyncNameAndLogo(s32 player);
sb32 mnPlayers1PTrainingIsCostumeInUse(s32 fkind, s32 player, s32 costume);
void mnPlayers1PTrainingAnnounceFighter(s32 player, s32 panel_id);
void mnPlayers1PTrainingUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status);
void mnPlayers1PTrainingDrawHandicapCPULevel(s32 player);
void mnPlayers1PTrainingReorderCursorsOnPlacement(s32 player, s32 held_puck_id);
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

// 0x80137F84
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
s32 sMNPlayers1PTrainingManSlotPlayer;

// 0x80138898
s32 sMNPlayers1PTrainingComSlotPlayer;

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

		if (mnPlayers1PTrainingIsCostumeInUse(sMNPlayers1PTrainingSlots[held_player].fkind, held_player, costume))
		{
			func_800269C0_275C0(nSYAudioFGMMenuDenied);
			return;
		}
		ftParamInitAllParts(sMNPlayers1PTrainingSlots[held_player].player, costume, 0);
		sMNPlayers1PTrainingSlots[held_player].costume = costume;
	}
	sMNPlayers1PTrainingSlots[held_player].is_selected = TRUE;

	mnPlayers1PTrainingReorderCursorsOnPlacement(player, held_player);

	sMNPlayers1PTrainingSlots[held_player].holder_player = GMCOMMON_PLAYERS_MAX;
	sMNPlayers1PTrainingSlots[player].cursor_status = mnCursorStateNotHoldingPuck;

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

	// portrait bg (fire)
	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsWallpaperSprite));
	sobj->pos.x = (((portrait >= 6) ? portrait - 6 : portrait) * 45) + 25;
	sobj->pos.y = (((portrait >= 6) ? 1 : 0) * 43) + 36;

	mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);
	gobj->user_data.s = portrait;

	// portrait
	gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, mnPlayers1PTrainingPortraitProcDisplay, 27, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], offsets[mnPlayers1PTrainingGetFighterKind(portrait)]));
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;

	gobj->user_data.s = portrait;
	mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);

	// question mark
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

	// if locked, render locked portrait instead
	if (mnPlayers1PTrainingCheckFighterLocked(mnPlayers1PTrainingGetFighterKind(portrait)) != FALSE)
	{
		mnPlayers1PTrainingMakePortraitShadow(portrait);
	}
	else
	{
		// portrait bg (fire)
		wallpaper_gobj = gcMakeGObjSPAfter(0, NULL, 29, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(wallpaper_gobj, lbCommonDrawSObjAttr, 36, GOBJ_PRIORITY_DEFAULT, ~0);
		wallpaper_gobj->user_data.p = portrait;
		gcAddGObjProcess(wallpaper_gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(wallpaper_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsWallpaperSprite));
		mnPlayers1PTrainingSetPortraitWallpaperPosition(sobj, portrait);

		// portrait
		portrait_gobj = gcMakeGObjSPAfter(0, NULL, 18, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(portrait_gobj, lbCommonDrawSObjAttr, 27, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(portrait_gobj, mnPlayers1PTrainingPortraitProcUpdate, nGCProcessKindFunc, 1);

		sobj = lbCommonMakeSObjForGObj(portrait_gobj, lbRelocGetFileData(Sprite*, sMNPlayers1PTrainingFiles[6], offsets[mnPlayers1PTrainingGetFighterKind(portrait)]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr |= SP_TRANSPARENT;
		portrait_gobj->user_data.s = portrait;

		// this conditionally draws a big red box with an X in it, but this check always fails
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
		mnPlayers1PBonusMakePortrait(i);
	}
}

// 0x801325D4
void mnPlayers1PTrainingMakeNameAndEmblem(GObj* name_logo_gobj_gobj, s32 player, s32 fkind)
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
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[3], logo_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (player == sMNPlayers1PTrainingManSlotPlayer)
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
		sobj = lbCommonMakeSObjForGObj(name_logo_gobj_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], name_offsets[fkind]));
		sobj->sprite.attr &= ~SP_FASTCOPY;
		sobj->sprite.attr = sobj->sprite.attr | SP_TRANSPARENT;

		if (player == sMNPlayers1PTrainingManSlotPlayer)
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
void mnPlayers1PTrainingMakePortraitCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x46, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132864
void mnPlayers1PTrainingMakePortraitWallpaperCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x4B, 0x1000000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132904
void mnPlayers1PTrainingMakePortraitFlashCamera()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x49, 0x2000000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801329A4
void mnPlayers1PTrainingMakeGateDoorsSYRdpViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x28, 0x20000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132A44
void mnPlayers1PTrainingCreateTypeButtonViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x23, 0x40000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132AE4
void mnPlayers1PTrainingMakeGateViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x32, 0x10000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132B84
void mnPlayers1PTrainingCreateTeamButtonViewPort()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x2D, 0x400000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x80132C24
void mnPlayers1PTrainingUpdatePanel(GObj* panel_gobj, s32 player)
{
	SObj* panel_sobj;
	intptr_t lut_offsets[4] = {

		0x103F8, 0x10420, 0x10470, 0x10448
	};

	panel_sobj = SObjGetStruct(panel_gobj);

	if (player == sMNPlayers1PTrainingManSlotPlayer)
	{
		panel_sobj->sprite.LUT = lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], lut_offsets[sMNPlayers1PTrainingManSlotPlayer]);
	}
	else
	{
		panel_sobj->sprite.LUT = lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[1], &FILE_017_CPU_PANEL_LUT_OFFSET);
	}
}

// 0x80132CA4
void mnPlayers1PTrainingCreateTypeImage(s32 player)
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

	sMNPlayers1PTrainingSlots[player].type = type_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	gcAddGObjDisplay(type_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	if (player == sMNPlayers1PTrainingManSlotPlayer)
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], offsets[sMNPlayers1PTrainingManSlotPlayer]));
		type_sobj->pos.x = floats[player] + 53.0F;
		type_sobj->pos.y = 131.0F;
	}
	else
	{
		type_sobj = lbCommonMakeSObjForGObj(type_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_TYPE_CP_IMAGE_OFFSET));
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
void mnPlayers1PTrainingMakeGate(s32 player)
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
	panel_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x16, 0x80000000, lbCommonDrawSObjAttr, 0x1C, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[1], &lMNPlayers1PModeGateWallpaperSprite), 1, NULL, 1);
	sMNPlayers1PTrainingSlots[player].panel = panel_gobj;
	SObjGetStruct(panel_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(panel_gobj)->sprite.attr |= SP_TRANSPARENT;

	if (player == sMNPlayers1PTrainingManSlotPlayer)
	{
		SObjGetStruct(panel_gobj)->pos.x = 53.0f;
		SObjGetStruct(panel_gobj)->pos.y = 127.0f;
	}
	else
	{
		SObjGetStruct(panel_gobj)->pos.x = 185.0f;
		SObjGetStruct(panel_gobj)->pos.y = 127.0f;
	}

	mnPlayers1PTrainingUpdatePanel(panel_gobj, player);
	mnPlayers1PTrainingCreateTypeImage(player);

	// name/logo
	namelogo_gobj = gcMakeGObjSPAfter(0U, NULL, 0x16U, 0x80000000U);
	sMNPlayers1PTrainingSlots[player].name_logo_gobj = namelogo_gobj;
	gcAddGObjDisplay(namelogo_gobj, lbCommonDrawSObjAttr, 0x1CU, GOBJ_PRIORITY_DEFAULT, ~0);

	mnPlayers1PTrainingSyncNameAndLogo(player);
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
void mnPlayers1PTrainingMakeWallpaper()
{
	GObj* background_gobj;
	SObj* background_sobj;

	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x04000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	background_gobj = gcMakeGObjSPAfter(0U, NULL, 0x11U, 0x80000000U);
	gcAddGObjDisplay(background_gobj, lbCommonDrawSObjAttr, 0x1AU, GOBJ_PRIORITY_DEFAULT, ~0);
	background_sobj = lbCommonMakeSObjForGObj(background_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[4], &lMNSelectCommonWallpaperSprite));
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
void mnPlayers1PTrainingDrawTitleAndBack()
{
	GObj* back_gobj;
	GObj* title_gobj;
	void* unused;

	title_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[5], &FILE_012_TRAINING_MODE_IMAGE_OFFSET), 1, NULL, 1);
	SObjGetStruct(title_gobj)->pos.x = 27.0F;
	SObjGetStruct(title_gobj)->pos.y = 24.0F;
	SObjGetStruct(title_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(title_gobj)->sprite.attr |= SP_TRANSPARENT;
	SObjGetStruct(title_gobj)->sprite.red = 0xE3;
	SObjGetStruct(title_gobj)->sprite.green = 0xAC;
	SObjGetStruct(title_gobj)->sprite.blue = 4;
	sMNPlayers1PTrainingGameModeGObj = title_gobj;

	back_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x19, 0x80000000, lbCommonDrawSObjAttr, 0x1A, GOBJ_PRIORITY_DEFAULT, ~0, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &lMNPlayersCommonBackSprite), 1, NULL, 1);
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
s32 mnPlayers1PTrainingGetAdditionalSelectedCount(s32 fkind)
{
	s32 count = 0;

	if (fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].fkind)
	{
		count += 1;
	}
	if (fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].fkind)
	{
		count += 1;
	}
	return (count != 0) ? count - 1 : count;
}

// 0x80133350
sb32 mnPlayers1PTrainingIsCostumeInUse(s32 fkind, s32 player, s32 costume)
{
	if (player == sMNPlayers1PTrainingManSlotPlayer)
	{
		if (
			(fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].fkind)
			&& (costume == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].costume)
			)
		{
			return TRUE;
		}
		return FALSE;
	}
	if (player == sMNPlayers1PTrainingComSlotPlayer)
	{
		if (
			(fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].fkind)
			&& (costume == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].costume)
			)
		{
			return TRUE;
		}
		return FALSE;
	}
}

// 0x80133408
s32 mnPlayers1PTrainingGetAvailableCostumeRoyal(s32 fkind, s32 player)
{
	s32 i, j, k, l;
	sb32 some_array[4];

	for (i = 0; i < 4; i++)
		some_array[i] = FALSE;

	if (player == sMNPlayers1PTrainingManSlotPlayer)
	{
		if (fkind == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].fkind)
		{
			for (j = 0; j < 4; j++)
			{
				if (ftParamGetCostumeCommonID(fkind, j) == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].costume)
					some_array[j] = TRUE;
			}
		}
	}
	else
	{
		if (fkind ==sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].fkind)
		{
			for (k = 0; k < 4; k++)
			{
				if (ftParamGetCostumeCommonID(fkind, k) == sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].costume)
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
s32 mnPlayers1PTrainingGetAvailableCostume(s32 fkind, s32 player)
{
	return ftParamGetCostumeCommonID(fkind, mnPlayers1PTrainingGetAvailableCostumeRoyal(fkind, player));
}

// 0x8013361C
s32 mnPlayers1PTrainingGetStatusSelected(s32 fkind)
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
void mnPlayers1PTrainingRotateFighter(GObj *fighter_gobj)
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
void mnPlayers1PTrainingSpawnFighter(GObj* fighter_gobj, s32 player, s32 fkind, s32 costume)
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
		sMNPlayers1PTrainingSlots[player].costume = desc.costume = costume;
		desc.shade = 0;
		desc.figatree_heap = sMNPlayers1PTrainingSlots[player].figatree_heap;
		desc.player = player;
		fighter_gobj = ftManagerMakeFighter(&desc);

		sMNPlayers1PTrainingSlots[player].player = fighter_gobj;

		gcAddGObjProcess(fighter_gobj, mnPlayers1PTrainingRotateFighter, 1, 1);

		if (player == sMNPlayers1PTrainingManSlotPlayer)
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

		DObjGetStruct(fighter_gobj)->scale.vec.f.x = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.y = dSCSubsysFighterScales[fkind];
		DObjGetStruct(fighter_gobj)->scale.vec.f.z = dSCSubsysFighterScales[fkind];

		if (player == sMNPlayers1PTrainingComSlotPlayer)
			ftParamCheckSetFighterColAnimID(fighter_gobj, 1, 0);
	}
}

// 0x801339A0
void mnPlayers1PTrainingMakeFighterCamera()
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
void mnPlayers1PTrainingUpdateCursor(GObj* cursor_gobj, s32 player, s32 cursor_status)
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

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], cursor_offsets[cursor_status]));
	cursor_sobj->pos.x = current_x;
	cursor_sobj->pos.y = current_y;
	cursor_sobj->sprite.attr &= ~SP_FASTCOPY;
	cursor_sobj->sprite.attr |= SP_TRANSPARENT;

	cursor_sobj = lbCommonMakeSObjForGObj(cursor_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], type_offsets[player]));
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

// 0x80133CA0 - Unused?
void func_ovl28_80133CA0() {}

// 0x80133CA8
void mnPlayers1PTrainingUpdatePanels()
{
	s32 i;

	// unused
	s32 color_indexes[4] = {

		0, 1, 2, 3
	};

	mnPlayers1PTrainingUpdatePanel(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].panel, sMNPlayers1PTrainingManSlotPlayer);
	mnPlayers1PTrainingUpdatePanel(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].panel, sMNPlayers1PTrainingComSlotPlayer);
}

// 0x80133D44
sb32 mnPlayers1PTrainingCheckPuckGrab(GObj* cursor_gobj, s32 cursor_player, s32 player)
{
	f32 current_x, current_y;
	s32 range_check;
	SObj* cursor_sobj = SObjGetStruct(cursor_gobj);
	SObj* puck_sobj = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck);

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
void mnPlayers1PTrainingSyncFighterDisplay(s32 player)
{
	s32 var_v0 = 0;

	if (sMNPlayers1PTrainingSlots[player].player != NULL)
	{
		if ((sMNPlayers1PTrainingSlots[player].fkind == nFTKindNull) && (sMNPlayers1PTrainingSlots[player].is_selected == 0))
		{
			sMNPlayers1PTrainingSlots[player].player->flags = 1;
			var_v0 = 1;
		}
	}
	if (var_v0 == 0)
	{
		mnPlayers1PTrainingSpawnFighter(sMNPlayers1PTrainingSlots[player].player, player, sMNPlayers1PTrainingSlots[player].fkind, mnPlayers1PTrainingGetAvailableCostume(sMNPlayers1PTrainingSlots[player].fkind, player));
		sMNPlayers1PTrainingSlots[player].is_status_selected = FALSE;
	}
}

// 0x80133ED8 - Unused?
void func_ovl28_80133ED8() {}

// 0x80133EE0
void mnPlayers1PTrainingSyncNameAndLogo(s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	if ((pslot->player_type == nFTPlayerKindNot) || ((pslot->fkind == nFTKindNull) && (!pslot->is_selected)))
	{
		pslot->name_logo_gobj->flags = 1;
	}
	else
	{
		pslot->name_logo_gobj->flags = 0;
		mnPlayers1PTrainingMakeNameAndEmblem(pslot->name_logo_gobj, player, pslot->fkind);
	}
}

// 0x80133F68
void mnPlayers1PTrainingDestroyFlash(s32 player)
{
	GObj* flash_gobj;
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	flash_gobj = pslot->flash;
	if (flash_gobj != NULL)
	{
		pslot->flash = NULL;
		gcEjectGObj(flash_gobj);
	}
}

// 0x80133FB4
void mnPlayers1PTrainingPortraitFlash(GObj* flash_gobj)
{
	s32 duration = 16;
	s32 frames_to_wait = 1;

	while (TRUE)
	{
		duration--, frames_to_wait--;

		if (duration == 0) mnPlayers1PTrainingDestroyFlash(flash_gobj->user_data.p);

		if (frames_to_wait == 0)
		{
			frames_to_wait = 1;
			flash_gobj->flags = (flash_gobj->flags == 1) ? 0 : 1;
		}

		gcStopCurrentGObjThread(1);
	}
}

// 0x8013405C
void mnPlayers1PTrainingMakePortraitFlash(s32 player)
{
	GObj* flash_gobj;
	SObj* flash_sobj;
	s32 portrait = mnPlayers1PTrainingGetPortrait(sMNPlayers1PTrainingSlots[player].fkind);

	mnPlayers1PTrainingDestroyFlash(player);

	flash_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1EU, 0x80000000U);
	sMNPlayers1PTrainingSlots[player].flash = flash_gobj;
	gcAddGObjDisplay(flash_gobj, lbCommonDrawSObjAttr, 0x25U, GOBJ_PRIORITY_DEFAULT, ~0);
	flash_gobj->user_data.p = player;
	gcAddGObjProcess(flash_gobj, mnPlayers1PTrainingPortraitFlash, 0, 1);

	flash_sobj = lbCommonMakeSObjForGObj(flash_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[6], &lMNPlayersPortraitsFlashSprite));
	flash_sobj->pos.x = (f32) (((portrait >= 6 ? portrait - 6 : portrait) * 45) + 26);
	flash_sobj->pos.y = (f32) (((portrait >= 6 ? 1 : 0) * 43) + 37);
}

// 0x801341B0
void mnPlayers1PTrainingAnnounceFighter(s32 player, s32 panel_id)
{
	u16 announcer_fgms[12] = {

		0x01F3, 0x01E6,
		0x01E3, 0x0201,
		0x01F2, 0x01F1,
		0x0217, 0x01E5,
		0x01F0, 0x01FB,
		0x01FC, 0x01F5
	};

	if (sMNPlayers1PTrainingSlots[player].p_sfx != NULL)
	{
		if ((sMNPlayers1PTrainingSlots[player].p_sfx->sfx_id != 0) && (sMNPlayers1PTrainingSlots[player].p_sfx->sfx_id == sMNPlayers1PTrainingSlots[player].sfx_id))
			func_80026738_27338(sMNPlayers1PTrainingSlots[player].p_sfx);
	}

	func_800269C0_275C0(0x79U);

	sMNPlayers1PTrainingSlots[player].p_sfx = func_800269C0_275C0(announcer_fgms[sMNPlayers1PTrainingSlots[panel_id].fkind]);

	if (sMNPlayers1PTrainingSlots[player].p_sfx != NULL)
		sMNPlayers1PTrainingSlots[player].sfx_id = sMNPlayers1PTrainingSlots[player].p_sfx->sfx_id;
}

// 0x801342B0 - Unused?
void func_ovl28_801342B0() {}

// 0x801342B8
void mnPlayers1PTrainingRemoveHandicapCPULevel(s32 player)
{
	if (sMNPlayers1PTrainingSlots[player].handicap_cpu_level != NULL)
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].handicap_cpu_level);

	if (sMNPlayers1PTrainingSlots[player].arrows != NULL)
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].arrows);

	if (sMNPlayers1PTrainingSlots[player].handicap_cpu_level_value != NULL)
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].handicap_cpu_level_value);

	sMNPlayers1PTrainingSlots[player].handicap_cpu_level = NULL;
	sMNPlayers1PTrainingSlots[player].arrows = NULL;
	sMNPlayers1PTrainingSlots[player].handicap_cpu_level_value = NULL;
}

// 0x80134340
SObj* mnPlayers1PTrainingGetArrowSObj(GObj* arrow_gobj, s32 direction)
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
void mnPlayers1PTrainingSyncAndBlinkArrows(GObj* arrow_gobj)
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

		value = (sMNPlayers1PTrainingSlots[player].player_type == nFTPlayerKindMan) ? sMNPlayers1PTrainingSlots[player].handicap : sMNPlayers1PTrainingSlots[player].cpu_level;

		if (value == 1)
		{
			arrow_sobj = mnPlayers1PTrainingGetArrowSObj(arrow_gobj, 0);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayers1PTrainingGetArrowSObj(arrow_gobj, 0) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_ARROW_L_IMAGE_OFFSET));
			arrow_sobj->pos.x = (player * 0x45) + 0x19;
			arrow_sobj->pos.y = 201.0F;
			arrow_sobj->sprite.attr &= ~SP_FASTCOPY;
			arrow_sobj->sprite.attr |= SP_TRANSPARENT;
			arrow_sobj->user_data.s = 0;
		}

		if (value == 9)
		{
			arrow_sobj = mnPlayers1PTrainingGetArrowSObj(arrow_gobj, 1);

			if (arrow_sobj != NULL)
				gcEjectSObj(arrow_sobj);
		}
		else if (mnPlayers1PTrainingGetArrowSObj(arrow_gobj, 1) == NULL)
		{
			arrow_sobj = lbCommonMakeSObjForGObj(arrow_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_ARROW_R_IMAGE_OFFSET));
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
void mnPlayers1PTrainingSyncHandicapCPULevelDisplay(GObj* handicap_cpu_level_gobj)
{
	s32 player = handicap_cpu_level_gobj->user_data.p;

	if (sMNPlayers1PTrainingSlots[player].is_fighter_selected == 0)
		mnPlayers1PTrainingRemoveHandicapCPULevel(player);
	else if (SObjGetStruct(handicap_cpu_level_gobj)->user_data.s != sMNPlayers1PTrainingSlots[player].player_type)
		mnPlayers1PTrainingDrawHandicapCPULevel(player);
}

// 0x8013462C
void mnPlayers1PTrainingDrawHandicapCPULevel(s32 player)
{
	GObj* handicap_cpu_level_gobj;
	SObj* handicap_cpu_level_sobj;

	if (sMNPlayers1PTrainingSlots[player].handicap_cpu_level != NULL)
	{
		gcEjectGObj(sMNPlayers1PTrainingSlots[player].handicap_cpu_level);
		sMNPlayers1PTrainingSlots[player].handicap_cpu_level = NULL;
	}

	handicap_cpu_level_gobj = gcMakeGObjSPAfter(0U, NULL, 0x1CU, 0x80000000U);
	sMNPlayers1PTrainingSlots[player].handicap_cpu_level = handicap_cpu_level_gobj;
	gcAddGObjDisplay(handicap_cpu_level_gobj, lbCommonDrawSObjAttr, 0x23U, GOBJ_PRIORITY_DEFAULT, ~0);
	handicap_cpu_level_gobj->user_data.p = player;
	gcAddGObjProcess(handicap_cpu_level_gobj, mnPlayers1PTrainingSyncHandicapCPULevelDisplay, 1, 1);

	if (sMNPlayers1PTrainingSlots[player].player_type == nFTPlayerKindMan)
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_HANDICAP_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x23;
		handicap_cpu_level_sobj->user_data.p = NULL;
	}
	else
	{
		handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_CPU_LEVEL_IMAGE_OFFSET));
		handicap_cpu_level_sobj->pos.x = (player * 0x45) + 0x22;
		handicap_cpu_level_sobj->user_data.p = 1;
	}

	handicap_cpu_level_sobj->sprite.red = 0xC2;
	handicap_cpu_level_sobj->sprite.green = 0xBD;
	handicap_cpu_level_sobj->sprite.blue = 0xAD;
	handicap_cpu_level_sobj->sprite.attr &= ~SP_FASTCOPY;
	handicap_cpu_level_sobj->sprite.attr |= SP_TRANSPARENT;
	handicap_cpu_level_sobj->pos.y = 201.0F;

	handicap_cpu_level_sobj = lbCommonMakeSObjForGObj(handicap_cpu_level_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[2], &FILE_000_COLON_IMAGE_OFFSET));
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
sb32 mnPlayers1PTrainingSelectChar(GObj* cursor_gobj, s32 player, s32 arg2, s32 select_button)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	if (pslot->cursor_status != mnCursorStateHoldingPuck)
		return FALSE;

	if (sMNPlayers1PTrainingSlots[pslot->held_player].fkind != nFTKindNull)
	{
		mnPlayers1PTrainingSelectFighterPuck(player, select_button);
		pslot->recall_end_tic = sMNPlayers1PTrainingTotalTimeTics + 0x1E;
		return TRUE;
	}

	func_800269C0_275C0(0xA5U);
	return FALSE;
}

// 0x801348F0
void mnPlayers1PTrainingReorderCursorsOnPickup(s32 player, s32 puck_id)
{
	s32 diplay_orders[4] = {

		6, 4, 2, 0
	};
	s32 i, order_id;

	gcMoveGObjDL(sMNPlayers1PTrainingSlots[player].cursor, 0x20U, diplay_orders[3]);
	gcMoveGObjDL(sMNPlayers1PTrainingSlots[puck_id].puck, 0x20U, diplay_orders[3] + 1);

	for (i = 0, order_id = 3; i < 4; i++, order_id--)
	{
		if (i != player)
		{
			if (sMNPlayers1PTrainingSlots[i].cursor != NULL)
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[i].cursor, 0x20U, diplay_orders[order_id]);

			if (sMNPlayers1PTrainingSlots[i].held_player != -1U)
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[i].held_player].puck, 0x20U, diplay_orders[order_id] + 1);
		}
	}
}

// 0x80134A4C
void mnPlayers1PTrainingReorderCursorsOnPlacement(s32 player, s32 held_puck_id)
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
		if (sMNPlayers1PTrainingSlots[i].held_player == -1)
			puck_held[i] = FALSE;
		else
			puck_held[i] = TRUE;
	}

	for (i = 0, order = &unheld_orders[3]; (s32)i < 4; i++)
	{
		if ((i != player) && (puck_held[i]))
		{
			if (sMNPlayers1PTrainingSlots[i].cursor != NULL)
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[i].cursor, 0x20, *order);

			gcMoveGObjDL(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingSlots[i].held_player].puck, 0x20, *order + 1);
			order--;
		}
	}

	if (player != 4)
		gcMoveGObjDL(sMNPlayers1PTrainingSlots[player].cursor, 0x20, *order);

	gcMoveGObjDL(sMNPlayers1PTrainingSlots[held_puck_id].puck, 0x21, *order + 1);

	order--;
	for (i = 0; i < 4; i++)
	{
		if (i != player && !puck_held[i])
		{
			if (sMNPlayers1PTrainingSlots[i].cursor != NULL)
				gcMoveGObjDL(sMNPlayers1PTrainingSlots[i].cursor, 0x20, *order);

			order--;
		}
	}
}

// 0x80134C64
void mnPlayers1PTrainingSetCursorCoordinatesFromPuck(s32 player)
{
	MNPlayersSlotTraining* pslot;
	MNPlayersSlotTraining* held_puck_pslot;

	pslot = &sMNPlayers1PTrainingSlots[player];
	held_puck_pslot = &sMNPlayers1PTrainingSlots[pslot->held_player];

	pslot->cursor_pickup_x = SObjGetStruct(held_puck_pslot->puck)->pos.x - 11.0F;
	pslot->cursor_pickup_y = SObjGetStruct(held_puck_pslot->puck)->pos.y - -14.0F;
}

// 0x80134CC8
void mnPlayers1PTrainingHandleCursorPickup(s32 player, s32 held_player)
{
	MNPlayersSlotTraining* pslot;
	MNPlayersSlotTraining* held_puck_pslot;

	held_puck_pslot = &sMNPlayers1PTrainingSlots[held_player];
	held_puck_pslot->holder_player = player;
	held_puck_pslot->is_selected = FALSE;

	pslot = &sMNPlayers1PTrainingSlots[player];
	pslot->cursor_status = mnCursorStateHoldingPuck;
	pslot->held_player = held_player;

	held_puck_pslot->is_fighter_selected = FALSE;

	mnPlayers1PTrainingSyncFighterDisplay(held_player);
	mnPlayers1PTrainingReorderCursorsOnPickup(player, held_player);
	mnPlayers1PTrainingSetCursorCoordinatesFromPuck(player);
	mnPlayers1PTrainingUpdateCursor(pslot->cursor, player, pslot->cursor_status);

	pslot->is_cursor_adjusting = TRUE;

	func_800269C0_275C0(0x7FU);

	mnPlayers1PTrainingRemoveHandicapCPULevel(held_player);
	mnPlayers1PTrainingDestroyFlash(held_player);
	mnPlayers1PTrainingSyncNameAndLogo(held_player);
}

// 0x80134D8C
sb32 mnPlayers1PTrainingCheckAndHandlePuckGrab(GObj* cursor_gobj, s32 player)
{
	s32 i;

	if ((sMNPlayers1PTrainingTotalTimeTics < sMNPlayers1PTrainingSlots[player].recall_end_tic) || (sMNPlayers1PTrainingSlots[player].is_recalling))
		return FALSE;
	else if (sMNPlayers1PTrainingSlots[player].cursor_status != mnCursorStateNotHoldingPuck)
		return FALSE;

	for (i = 3; i >=0; i--)
	{
		if (player == i)
		{
			if ((sMNPlayers1PTrainingSlots[i].holder_player == 4) && (sMNPlayers1PTrainingSlots[i].player_type != 2) && (mnPlayers1PTrainingCheckPuckGrab(cursor_gobj, player, i) != 0))
			{
				mnPlayers1PTrainingHandleCursorPickup(player, i);

				return TRUE;
			}
		}
		else if ((sMNPlayers1PTrainingSlots[i].holder_player == 4) && (sMNPlayers1PTrainingSlots[i].player_type == 1) && (mnPlayers1PTrainingCheckPuckGrab(cursor_gobj, player, i) != 0))
		{
			mnPlayers1PTrainingHandleCursorPickup(player, i);

			return TRUE;
		}
	}

	return FALSE;
}

// 0x80134EE8
s32 mnPlayers1PTrainingGetPuckFighterKind(s32 player)
{
	SObj* puck_sobj = SObjGetStruct(sMNPlayers1PTrainingSlots[player].puck);
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
			fkind = mnPlayers1PTrainingGetFighterKind((s32) (current_y - 25) / 45);

			if ((mnPlayers1PTrainingCheckFighterCrossed(fkind)) || (mnPlayers1PTrainingCheckFighterLocked(fkind)))
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
			fkind = mnPlayers1PTrainingGetFighterKind(((s32) (current_y - 25) / 45) + 6);

			if ((mnPlayers1PTrainingCheckFighterCrossed(fkind)) || (mnPlayers1PTrainingCheckFighterLocked(fkind)))
				return nFTKindNull;

			return fkind;
		}
	}
	return nFTKindNull;
}

// 0x80135074
void mnPlayers1PTrainingAdjustCursor(GObj* cursor_gobj, s32 player)
{
	SYController* controller;
	Vec2i coords[3] = {

		{ 0x7, 0xF },
		{ 0x9, 0xA },
		{ 0x9, 0xF }
	};
	f32 delta;
	sb32 is_within_bounds;

	if (sMNPlayers1PTrainingSlots[player].is_cursor_adjusting)
	{
		delta = (sMNPlayers1PTrainingSlots[player].cursor_pickup_x - SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x = sMNPlayers1PTrainingSlots[player].cursor_pickup_x;
		else
			SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x += delta;

		delta = (sMNPlayers1PTrainingSlots[player].cursor_pickup_y - SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y) / 5.0F;

		is_within_bounds = (delta >= -1.0F) && (delta <= 1.0F) ? TRUE : FALSE;

		if (is_within_bounds != 0)
			SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y = sMNPlayers1PTrainingSlots[player].cursor_pickup_y;
		else
			SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y += delta;

		if ((SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.x == sMNPlayers1PTrainingSlots[player].cursor_pickup_x) && (SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y == sMNPlayers1PTrainingSlots[player].cursor_pickup_y))
			sMNPlayers1PTrainingSlots[player].is_cursor_adjusting = FALSE;

		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = (f32) ((f32) coords[sMNPlayers1PTrainingSlots[player].cursor_status].x + SObjGetStruct(cursor_gobj)->pos.x);
		SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = (f32) ((f32) coords[sMNPlayers1PTrainingSlots[player].cursor_status].y + SObjGetStruct(cursor_gobj)->pos.y);
	}
	else if (sMNPlayers1PTrainingSlots[player].is_recalling == FALSE)
	{
		controller = &gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer];
		is_within_bounds = (controller->stick_range.x < -8) || (controller->stick_range.x >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.x / 20.0F) + SObjGetStruct(cursor_gobj)->pos.x;

			is_within_bounds = (delta >= 0.0F) && (delta <= 280.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.x = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.x = SObjGetStruct(cursor_gobj)->pos.x + coords[sMNPlayers1PTrainingSlots[player].cursor_status].x;
			}
		}

		controller = &gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer];
		is_within_bounds = (controller->stick_range.y < -8) || (controller->stick_range.y >= 9) ? TRUE : FALSE;

		if (is_within_bounds != 0)
		{
			delta = ((f32) controller->stick_range.y / -20.0F) + SObjGetStruct(cursor_gobj)->pos.y;

			is_within_bounds = (delta >= 10.0F) && (delta <= 205.0F) ? TRUE : FALSE;

			if (is_within_bounds != 0)
			{
				SObjGetStruct(cursor_gobj)->pos.y = delta;
				SObjGetNext(SObjGetStruct(cursor_gobj))->pos.y = SObjGetStruct(cursor_gobj)->pos.y + coords[sMNPlayers1PTrainingSlots[player].cursor_status].y;
			}
		}
	}
}

// 0x80135430
void mnPlayers1PTrainingSyncCursorDisplay(GObj* cursor_gobj, s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];
	s32 i;

	if ((SObjGetStruct(cursor_gobj)->pos.y > 124.0F) || (SObjGetStruct(cursor_gobj)->pos.y < 38.0F))
	{
		if (pslot->cursor_status != mnCursorStatePointer)
		{
			mnPlayers1PTrainingUpdateCursor(cursor_gobj, player, mnCursorStatePointer);
			pslot->cursor_status = mnCursorStatePointer;
		}
	}
	else
	{
		if (pslot->held_player == -1)
		{
			if (pslot->cursor_status != mnCursorStateNotHoldingPuck)
			{
				mnPlayers1PTrainingUpdateCursor(cursor_gobj, player, mnCursorStateNotHoldingPuck);
				pslot->cursor_status = mnCursorStateNotHoldingPuck;
			}
		}
		else
		{
			if (pslot->cursor_status != mnCursorStateHoldingPuck)
			{
				mnPlayers1PTrainingUpdateCursor(cursor_gobj, player, mnCursorStateHoldingPuck);
				pslot->cursor_status = mnCursorStateHoldingPuck;
			}
		}
	}

	if ((pslot->cursor_status == mnCursorStatePointer) && (pslot->is_selected != 0))
	{
		for (i = 0; i < 4; i++)
		{
			if ((sMNPlayers1PTrainingSlots[i].is_selected == 1) && (mnPlayers1PTrainingCheckPuckGrab(cursor_gobj, player, i) != 0))
			{
				mnPlayers1PTrainingUpdateCursor(cursor_gobj, player, mnCursorStateNotHoldingPuck);
				pslot->cursor_status = mnCursorStateNotHoldingPuck;
				return;
			}
		}
	}
}

// 0x801355E0
void mnPlayers1PTrainingTryCostumeChange(s32 player, s32 select_button)
{
	u32 costume = ftParamGetCostumeCommonID(sMNPlayers1PTrainingSlots[player].fkind, select_button);

	if (mnPlayers1PTrainingIsCostumeInUse(sMNPlayers1PTrainingSlots[player].fkind, player, costume))
	{
		func_800269C0_275C0(0xA5U);
		return;
	}

	ftParamInitAllParts(sMNPlayers1PTrainingSlots[player].player, costume, 0);
	sMNPlayers1PTrainingSlots[player].costume = costume;

	func_800269C0_275C0(0xA4U);
}

// 0x80135674
sb32 mnPlayers1PTrainingCheckManFighterSelected(s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	if ((pslot->is_selected) && (pslot->held_player == -1) && (pslot->player_type == nFTPlayerKindMan))
		return TRUE;
	else
		return FALSE;
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
		sMNPlayers1PTrainingSlots[player].recall_end_x = 280.0F;

	sMNPlayers1PTrainingSlots[player].recall_end_y = SObjGetStruct(sMNPlayers1PTrainingSlots[player].cursor)->pos.y + -15.0F;

	if (sMNPlayers1PTrainingSlots[player].recall_end_y < 10.0F)
		sMNPlayers1PTrainingSlots[player].recall_end_y = 10.0F;

	if (sMNPlayers1PTrainingSlots[player].recall_end_y < sMNPlayers1PTrainingSlots[player].recall_start_y)
		sMNPlayers1PTrainingSlots[player].recall_mid_y = sMNPlayers1PTrainingSlots[player].recall_end_y - 20.0F;
	else
		sMNPlayers1PTrainingSlots[player].recall_mid_y = sMNPlayers1PTrainingSlots[player].recall_start_y - 20.0F;
}

// 0x801357CC
void mnPlayers1PTrainingGoBackTo1PMenu()
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
	SYController* controller = &gSYControllerDevices[player];

	if ((sMNPlayers1PTrainingTotalTimeTics >= 10) && (controller->button_tap & B_BUTTON))
		mnPlayers1PTrainingGoBackTo1PMenu();
}

// 0x8013586C
sb32 mnPlayers1PTrainingCheckBackInRange(GObj* cursor_gobj)
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
void mnPlayers1PTrainingCursorProcUpdate(GObj* cursor_gobj)
{
	SYController* controller = &gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer];
	MNPlayersSlotTraining* pslot;
	s32 foo, bar, baz;
	s32 player = cursor_gobj->user_data.s;

	mnPlayers1PTrainingAdjustCursor(cursor_gobj, player);
	pslot = &sMNPlayers1PTrainingSlots[player];

	if ((gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer].button_tap & A_BUTTON)
		&& (!mnPlayers1PTrainingSelectChar(cursor_gobj, player, pslot->held_player, 4))
		&& (!mnPlayers1PTrainingCheckAndHandlePuckGrab(cursor_gobj, player))
		&& (mnPlayers1PTrainingCheckBackInRange(cursor_gobj)))
	{
			mnPlayers1PTrainingGoBackTo1PMenu();
			func_800269C0_275C0(0xA4U);
	}

	if (!sMNPlayers1PTrainingDefaultCostumeOnly)
	{
		if ((gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer].button_tap & U_CBUTTONS)
			&& (!mnPlayers1PTrainingSelectChar(cursor_gobj, player, pslot->held_player, 0))
			&& (pslot->is_fighter_selected))
		{
			mnPlayers1PTrainingTryCostumeChange(player, 0);
		}
		if ((gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer].button_tap & R_CBUTTONS)
			&& (!mnPlayers1PTrainingSelectChar(cursor_gobj, player, pslot->held_player, 1))
			&& (pslot->is_fighter_selected))
		{
			mnPlayers1PTrainingTryCostumeChange(player, 1);
		}
		if ((gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer].button_tap & D_CBUTTONS)
			&& (!mnPlayers1PTrainingSelectChar(cursor_gobj, player, pslot->held_player, 2))
			&& (pslot->is_fighter_selected))
		{
			mnPlayers1PTrainingTryCostumeChange(player, 2);
		}
		if ((gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer].button_tap & L_CBUTTONS)
			&& (!mnPlayers1PTrainingSelectChar(cursor_gobj, player, pslot->held_player, 3))
			&& (pslot->is_fighter_selected))
		{
			mnPlayers1PTrainingTryCostumeChange(player, 3);
		}
	}

	if ((gSYControllerDevices[sMNPlayers1PTrainingManSlotPlayer].button_tap & B_BUTTON) && (mnPlayers1PTrainingCheckManFighterSelected(player)))
		mnPlayers1PTrainingRecallPuck(player);

	if (!pslot->is_recalling)
		mnPlayers1PTrainingDetectBack(player);

	if (!pslot->is_recalling)
		mnPlayers1PTrainingSyncCursorDisplay(cursor_gobj, player);
}

// 0x80135C18
void mnPlayers1PTrainingRedrawPuck(GObj* puck_gobj, s32 puck_index)
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

	puck_sobj = lbCommonMakeSObjForGObj(puck_gobj, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], puck_offsets[puck_index]));
	puck_sobj->pos.x = current_x;
	puck_sobj->pos.y = current_y;
	puck_sobj->sprite.attr &= ~SP_FASTCOPY;
	puck_sobj->sprite.attr |= SP_TRANSPARENT;
}

// 0x80135CCC
void mnPlayers1PTrainingCenterPuckInPortrait(GObj* puck_gobj, s32 fkind)
{
	s32 portrait = mnPlayers1PTrainingGetPortrait(fkind);

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
void mnPlayers1PTrainingMovePuck(s32 player)
{
	MNPlayersSlotTraining* pslot = &sMNPlayers1PTrainingSlots[player];

	SObjGetStruct(pslot->puck)->pos.x += pslot->puck_vel_x;
	SObjGetStruct(pslot->puck)->pos.y += pslot->puck_vel_y;
}

// 0x80135DD8
void mnPlayers1PTrainingSyncPuckAndFighter(GObj* puck_gobj)
{
	s32 fkind;
	s32 player = puck_gobj->user_data.s;

	if (sMNPlayers1PTrainingTotalTimeTics < 0x1E)
	{
		puck_gobj->flags = 1;
	}
	else
	{
		if ((sMNPlayers1PTrainingSlots[player].player_type == nFTPlayerKindCom)
			|| ((sMNPlayers1PTrainingSlots[player].player_type == nFTPlayerKindMan)
				&& ((sMNPlayers1PTrainingSlots[player].cursor_status != mnCursorStatePointer)
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

	if ((sMNPlayers1PTrainingSlots[player].player_type) != nFTPlayerKindNot)
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

		if ((sMNPlayers1PTrainingSlots[player].player_type == nFTPlayerKindCom)
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

			mnPlayers1PTrainingSyncFighterDisplay(player);
			mnPlayers1PTrainingSyncNameAndLogo(player);
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
	GObj* cursor_gobj;
	s32 unused;

	// unused
	intptr_t cursor_type_offsets[4] = {

		0x8268, 0x8368, 0x8468, 0x8568
	};
	s32 starting_display_orders[4] = {

		6, 4, 2, 0
	};

	cursor_gobj = lbCommonMakeSpriteGObj(0, NULL, 0x13, 0x80000000, lbCommonDrawSObjAttr, 0x20, starting_display_orders[player], -1, lbRelocGetFileData(void*, sMNPlayers1PTrainingFiles[0], &FILE_011_CURSOR_POINTER_IMAGE_OFFSET), 1, mnPlayers1PTrainingCursorProcUpdate, 2);

	sMNPlayers1PTrainingSlots[player].cursor = cursor_gobj;
	cursor_gobj->user_data.s = player;
	SObjGetStruct(cursor_gobj)->pos.x = 70.0F;
	SObjGetStruct(cursor_gobj)->pos.y = 170.0F;
	SObjGetStruct(cursor_gobj)->sprite.attr &= ~SP_FASTCOPY;
	SObjGetStruct(cursor_gobj)->sprite.attr |= SP_TRANSPARENT;

	mnPlayers1PTrainingUpdateCursor(cursor_gobj, player, 0);
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

	if (pslot->player_type == nFTPlayerKindCom)
		mnPlayers1PTrainingRedrawPuck(puck_gobj, 4);

	if ((pslot->player_type == nFTPlayerKindMan) && (pslot->held_player != -1))
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

	other_player = (player == sMNPlayers1PTrainingManSlotPlayer) ? sMNPlayers1PTrainingComSlotPlayer : sMNPlayers1PTrainingManSlotPlayer;

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
		mnPlayers1PTrainingHandleCursorPickup(player, player);

		sMNPlayers1PTrainingSlots[player].puck_vel_x = 0.0F;
		sMNPlayers1PTrainingSlots[player].puck_vel_y = 0.0F;
	}

	if (sMNPlayers1PTrainingSlots[player].recall_tics == 30)
		sMNPlayers1PTrainingSlots[player].is_recalling = FALSE;
}

// 0x80136CCC
void mnPlayers1PTrainingPuckActorProcUpdate(GObj *gobj)
{
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].is_recalling)
	{
		mnPlayers1PTrainingPuckActorAdjustRecall(sMNPlayers1PTrainingManSlotPlayer);
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].is_selected)
	{
		mnPlayers1PTrainingPuckActorAdjustPlaced(sMNPlayers1PTrainingManSlotPlayer);
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].is_recalling)
	{
		mnPlayers1PTrainingPuckActorAdjustRecall(sMNPlayers1PTrainingComSlotPlayer);
	}
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].is_selected)
	{
		mnPlayers1PTrainingPuckActorAdjustPlaced(sMNPlayers1PTrainingComSlotPlayer);
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
		if ((sMNPlayers1PTrainingSlots[i].fkind != nFTKindNull) && (mnPlayers1PTrainingGetAdditionalSelectedCount(sMNPlayers1PTrainingSlots[i].fkind) == 0))
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

		if (i == sMNPlayers1PTrainingManSlotPlayer)
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
	if ((sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].is_fighter_selected != 0) && (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].is_fighter_selected != 0))
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
	gSCManagerSceneData.training_man_fkind = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].fkind;
	gSCManagerSceneData.training_man_costume = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].costume;

	gSCManagerSceneData.training_com_fkind = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].fkind;
	gSCManagerSceneData.training_com_costume = sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].costume;
}

// 0x80137638
void mnPlayers1PTrainingDestroyCursorAndPuckProcesses()
{
	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].cursor != NULL)
		gcPauseGObjProcess(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].cursor->gobjproc_head);

	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].puck != NULL)
		gcPauseGObjProcess(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].puck->gobjproc_head);

	if (sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].puck != NULL)
		gcPauseGObjProcess(sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].puck->gobjproc_head);
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

	if (player == sMNPlayers1PTrainingManSlotPlayer)
	{
		pslot->player_type = nFTPlayerKindMan;
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
	pslot->player_type = nFTPlayerKindMan;
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
	pslot->player_type = nFTPlayerKindNot;
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
	sMNPlayers1PTrainingManSlotPlayer = gSCManagerSceneData.player;
	sMNPlayers1PTrainingComSlotPlayer = (sMNPlayers1PTrainingManSlotPlayer == 0) ? 1 : 0;
	sMNPlayers1PTrainingFighterMask = gSCManagerBackupData.fighter_mask;

	if (gSCManagerSceneData.training_man_fkind == nFTKindNull)
		mnPlayers1PTrainingResetPort(sMNPlayers1PTrainingManSlotPlayer);
	else
		mnPlayers1PTrainingInitPort(sMNPlayers1PTrainingManSlotPlayer);

	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingManSlotPlayer].recall_end_tic = FALSE;

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

		if (mnPlayers1PTrainingIsCostumeInUse(fkind, sMNPlayers1PTrainingComSlotPlayer, ftParamGetCostumeCommonID(fkind, 0)))
			costume = ftParamGetCostumeCommonID(fkind, 1);
		else
			costume = ftParamGetCostumeCommonID(fkind, 0);
	}
	else
		costume = gSCManagerSceneData.training_com_costume;

	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].fkind = fkind;
	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].costume = costume;
	sMNPlayers1PTrainingSlots[sMNPlayers1PTrainingComSlotPlayer].player_type = 1;
	mnPlayers1PTrainingInitPort(sMNPlayers1PTrainingComSlotPlayer);

	for (i = 0; i < 4; i++)
	{
		if ((i != sMNPlayers1PTrainingManSlotPlayer) && (i != sMNPlayers1PTrainingComSlotPlayer))
			mnPlayers1PTrainingResetPortToNA(i);
	}
}

// 0x80137BB0
void mnPlayers1PTrainingInitPanel(s32 player)
{
	s32 fkind;

	if (player == sMNPlayers1PTrainingManSlotPlayer)
		mnPlayers1PTrainingMakeCursor(player);
	else
		sMNPlayers1PTrainingSlots[player].cursor = NULL;

	mnPlayers1PTrainingMakePuck(player);
	mnPlayers1PTrainingMakeGate(player);

	if (sMNPlayers1PTrainingSlots[player].is_selected)
	{
		fkind = sMNPlayers1PTrainingSlots[player].fkind;

		if (fkind != nFTKindNull)
			mnPlayers1PTrainingSpawnFighter(sMNPlayers1PTrainingSlots[player].player, player, fkind, sMNPlayers1PTrainingSlots[player].costume);
	}
}

// 0x80137C74
void mnPlayers1PTrainingInitPanels()
{
	mnPlayers1PTrainingInitPanel(sMNPlayers1PTrainingManSlotPlayer);
	mnPlayers1PTrainingInitPanel(sMNPlayers1PTrainingComSlotPlayer);
	mnPlayers1PTrainingUpdatePanels();
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
	mnPlayers1PTrainingMakeGateViewport();
	mnPlayers1PTrainingMakeGateDoorsSYRdpViewport();
	mnPlayers1PTrainingCreateTypeButtonViewport();
	mnPlayers1PTrainingMakeFighterCamera();
	mnPlayers1PTrainingCreateTeamButtonViewPort();
	mnPlayers1PTrainingCreateHandicapCPULevelViewport();
	mnPlayers1PTrainingMakePortraitWallpaperCamera();
	mnPlayers1PTrainingMakePortraitFlashCamera();
	mnPlayers1PTrainingCreateReadyViewport();
	mnPlayers1PTrainingMakeWallpaper();
	mnPlayers1PTrainingMakePortraitAll();
	mnPlayers1PTrainingInitPanels();
	mnPlayers1PTrainingDrawTitleAndBack();
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
