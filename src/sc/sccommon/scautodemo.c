#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <sc/scene.h>
#include <sys/system_00.h>

extern void func_800A26B8(void);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_0000000C;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018E2F0
scBattleState sSCAutoDemoBattleState;

// 0x8018E4E0
s32 sSCAutoDemoFocusChangeWait;

// 0x8018E4E4
u16 sSCAutoDemoCharacterFlag;

// 0x8018E4E8
GObj *sSCAutoDemoFighterNameGObj;

// 0x8018E4EC
scAutoDemoProc *sSCAutoDemoProc;

// 0x8018E4F0
s16 sSCAutoDemoMapObjs[8];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018E160
s32 D_ovl64_8018E160 = 0;

// 0x8018E164
s32 D_ovl64_8018E164 = 0;

// 0x8018E168
u8 dSCAutoDemoGroundOrder[/* */] = 
{
	nGRKindPupupu,
	nGRKindZebes,
	nGRKindCastle,
	nGRKindJungle,
	nGRKindSector,
	nGRKindYoster,
	nGRKindYamabuki,
	nGRKindHyrule
};

// 0x8018E170
s16 dSCAutoDemoMapObjKindList[/* */] = 
{
	nMPMapObjKindAutoDemoSpawn1,
	nMPMapObjKindAutoDemoSpawn2,
	nMPMapObjKindAutoDemoSpawn3,
	nMPMapObjKindAutoDemoSpawn4,
	nMPMapObjKindAutoDemoSpawn5,
	nMPMapObjKindAutoDemoSpawn6,
	nMPMapObjKindAutoDemoSpawn7,
	nMPMapObjKindAutoDemoSpawn8
};

// 0x8018E180
scAutoDemoProc dSCAutoDemoProcList[/* */] =
{
	// Nothing?
	{
		0,                              // Wait frames until focus changes 
		NULL,                           // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// Pre-focus
	{
		340,                            // Wait frames until focus changes 
		scAutoDemoMakeFade,            	// Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// Player 1 Focus
	{
		340,                            // Wait frames until focus changes 
		scAutoDemoSetFocusPlayer1,      // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// Player 2 focus
	{
		340,                            // Wait frames until focus changes 
		scAutoDemoSetFocusPlayer2,      // Function to run on focus change
		scAutoDemoProcFocusPlayer1      // Function to run when focusing
	},

	// End focus
	{
		400,                            // Wait frames until focus changes 
		scAutoDemoResetFocusPlayerAll,  // Function to run on focus change
		scAutoDemoProcFocusPlayer2      // Function to run when focusing
	},

	// Unknown
	{
		60,                             // Wait frames until focus changes 
		scAutoDemoSetMagnifyDisplayOn,  // Function to run on focus change
		NULL                            // Function to run when focusing
	},

	// End demo
	{
		1,                              // Wait frames until focus changes 
		scAutoDemoExit,                 // Function to run on focus change
		NULL                            // Function to run when focusing
	}
};

// 0x8018E1D4
f32 D_ovl64_8018E1D4[/* */] = { -40.0F, -28.0F, -14.0F, 14.0F, 28.0F, 40.0F };

// 0x8018E1EC
f32 D_ovl64_8018E1EC[/* */] = { 2.0F, 0.0F, -6.0F, -9.0F, -30.0F };

// 0x8018E200
intptr_t dSCAutoDemoFighterNameSpriteOffsets[/* */] =
{
	&lSCAutoDemoNameMarioSprite,      // Mario
	&lSCAutoDemoNameFoxSprite,        // Fox
	&lSCAutoDemoNameDonkeySprite,     // Donkey Kong
	&lSCAutoDemoNameSamusSprite,      // Samus
	&lSCAutoDemoNameLuigiSprite,      // Luigi
	&lSCAutoDemoNameLinkSprite,       // Link
	&lSCAutoDemoNameYoshiSprite,      // Yoshi
	&lSCAutoDemoNameCaptainSprite,    // Captain Falcon
	&lSCAutoDemoNameKirbySprite,      // Kirby
	&lSCAutoDemoNamePikachuSprite,    // Pikachu
	&lSCAutoDemoNamePurinSprite,      // Jigglypuff
	&lSCAutoDemoNameNessSprite        // Ness
};

// 0x8018E230
syColorRGBA dSCAutoDemoFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018E234
syDisplaySetup dSCAutoDemoDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x8018E250
syTasklogSetup dSCAutoDemoTasklogSetup = 
{
    // Task Logic Buffer Setup
    {
        0,                          // ???
        scAutoDemoProcScene,        // Update function
        func_800A26B8,              // Frame draw function
        &ovl64_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        0x6000,                     // ???
        0x3000,                     // ???
        0,                          // ???
        0,                          // ???
        0x8000,                     // ???
        2,                          // ???
        0xC000,                     // ???
        scAutoDemoProcLights,    	// Pre-render function
        update_contdata,            // Controller I/O function
    },

    0,                              // Number of GObjThreads
    1536,                           // Thread stack size
    0,                              // Number of thread stacks
    0,                              // ???
    0,                              // Number of GObjProcesses
    0,                              // Number of GObjs
    sizeof(GObj),                   // GObj size
    0,                              // Number of Object Manager Matrices
    dLBCommonProcMatrixList,        // Matrix function list
    NULL,                           // Function for ejecting DObjDynamicStore?
    0,                              // Number of AObjs
    0,                              // Number of MObjs
    0,                              // Number of DObjs
    sizeof(DObj),                   // DObj size
    0,                              // Number of SObjs
    sizeof(SObj),                   // SObj size
    0,                              // Number of Cameras
    sizeof(Camera),                 // Camera size
    
    scAutoDemoProcStart           	// Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void scAutoDemoProcScene(void)
{
	func_8000A5E4();
}

// 0x8018D0E0
void scAutoDemoStartBattle(void)
{
	GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

	while (fighter_gobj != NULL)
	{
		ftParamUnlockPlayerControl(fighter_gobj);

		fighter_gobj = fighter_gobj->link_next;
	}
	gBattleState->game_status = nSCBattleGameStatusGo;
}

// 0x8018D134
void scAutoDemoDetectExit(void)
{
	s32 player;

	for (player = 0; player < ARRAY_COUNT(gPlayerControllers); player++)
	{
		u16 button_tap = gPlayerControllers[player].button_tap;

		if (button_tap & (A_BUTTON | B_BUTTON | START_BUTTON))
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = nSCKindTitle;

			syTasklogSetLoadScene();
			break;
		}
	}
}

// 0x8018D19C
void scAutoDemoMakeFade(void)
{
	syColorRGBA color = dSCAutoDemoFadeColor;

	lbFadeMakeActor(nOMObjCommonKindTransition, nOMObjCommonLinkIDTransition, 10, &color, 30, TRUE, NULL);
}

// 0x8018D1EC
sb32 scAutoDemoCheckStopFocusPlayer(ftStruct *fp)
{
	switch (fp->status_info.status_id)
	{
	case nFTCommonStatusDeadDown:
	case nFTCommonStatusDeadLeftRight:
	case nFTCommonStatusDeadUpStar:
		return TRUE;

	default:
		return FALSE;
	}
}

// 0x8018D220
void func_ovl64_8018D220(GObj *fighter_gobj)
{
	func_ovl2_8010CF44
	(
		fighter_gobj,
		F_CLC_DTOR32(D_ovl64_8018E1D4[mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl64_8018E1D4))]),
		F_CLC_DTOR32(D_ovl64_8018E1EC[mtTrigGetRandomIntRange(ARRAY_COUNT(D_ovl64_8018E1EC))]),
		ftGetStruct(fighter_gobj)->attributes->closeup_camera_zoom,
		0.3F,
		28.0F
	);
}

// 0x8018D2CC
void scAutoDemoSetFocusPlayer1(void)
{
	GObj *fighter_gobj = gBattleState->players[0].fighter_gobj;
	ftStruct *fp = ftGetStruct(fighter_gobj);

	if (scAutoDemoCheckStopFocusPlayer(fp) != FALSE)
	{
		sSCAutoDemoFocusChangeWait = 0;
	}
	else
	{
		ftGetStruct(gBattleState->players[1].fighter_gobj)->cp_level =
		ftGetStruct(gBattleState->players[2].fighter_gobj)->cp_level =
		ftGetStruct(gBattleState->players[3].fighter_gobj)->cp_level = 1;

		func_ovl64_8018D220(fighter_gobj);
		ftParamSetModelPartDetailAll(fighter_gobj, nFTPartsDetailHigh);

		fp->detail_default = nFTPartsDetailHigh;

		SObjGetStruct(sSCAutoDemoFighterNameGObj)->sprite.attr &= ~SP_HIDDEN;

		gIFCommonPlayerInterface.is_ifmagnify_display = FALSE;
	}
}

// 0x8018D39C
void scAutoDemoProcFocusPlayer1(void)
{
	if (scAutoDemoCheckStopFocusPlayer(ftGetStruct(gBattleState->players[0].fighter_gobj)) != FALSE)
	{
		sSCAutoDemoFocusChangeWait = 0;
	}
}

// 0x8018D3D4
void scAutoDemoSetFocusPlayer2(void)
{
	GObj *p2_gobj = gBattleState->players[1].fighter_gobj;
	GObj *p1_gobj = gBattleState->players[0].fighter_gobj;
	ftStruct *p2_fp = ftGetStruct(p2_gobj);

	SObjGetStruct(sSCAutoDemoFighterNameGObj)->sprite.attr |= SP_HIDDEN;

	ftParamSetModelPartDetailAll(p1_gobj, nFTPartsDetailLow);
	ftGetStruct(p1_gobj)->detail_default = nFTPartsDetailLow;

	if (scAutoDemoCheckStopFocusPlayer(p2_fp) != FALSE)
	{
		sSCAutoDemoFocusChangeWait = 0;
	}
	else
	{
		ftGetStruct(gBattleState->players[1].fighter_gobj)->cp_level = 9;

		ftGetStruct(gBattleState->players[0].fighter_gobj)->cp_level =
		ftGetStruct(gBattleState->players[2].fighter_gobj)->cp_level =
		ftGetStruct(gBattleState->players[3].fighter_gobj)->cp_level = 1;

		func_ovl64_8018D220(p2_gobj);
		ftParamSetModelPartDetailAll(p2_gobj, nFTPartsDetailHigh);

		p2_fp->detail_default = nFTPartsDetailHigh;

		SObjGetStruct(sSCAutoDemoFighterNameGObj)->next->sprite.attr &= ~SP_HIDDEN;
	}
}

// 0x8018D4F0
void scAutoDemoProcFocusPlayer2(void)
{
	if (scAutoDemoCheckStopFocusPlayer(ftGetStruct(gBattleState->players[1].fighter_gobj)) != FALSE)
	{
		sSCAutoDemoFocusChangeWait = 0;
	}
}

// 0x8018D528
void scAutoDemoResetFocusPlayerAll(void)
{
	GObj *p2_gobj = gBattleState->players[1].fighter_gobj;

	cmManagerSetCameraStatusDefault();

	ftGetStruct(gBattleState->players[0].fighter_gobj)->cp_level =
	ftGetStruct(p2_gobj)->cp_level =
	ftGetStruct(gBattleState->players[2].fighter_gobj)->cp_level =
	ftGetStruct(gBattleState->players[3].fighter_gobj)->cp_level = 9;

	ftParamSetModelPartDetailAll(p2_gobj, nFTPartsDetailLow);

	ftGetStruct(p2_gobj)->detail_default = nFTPartsDetailLow;

	SObjGetStruct(sSCAutoDemoFighterNameGObj)->next->sprite.attr |= SP_HIDDEN;
}

// 0x8018D5E0
void scAutoDemoSetMagnifyDisplayOn(void)
{
	gIFCommonPlayerInterface.is_ifmagnify_display = TRUE;
}

// 0x8018D5F0
void scAutoDemoExit(void)
{
	gSceneData.scene_previous = gSceneData.scene_current;
	gSceneData.scene_current = nSCKindN64;

	syTasklogSetLoadScene();
}

// 0x8018D624
void scAutoDemoChangeFocus(void)
{
	sSCAutoDemoFocusChangeWait = sSCAutoDemoProc->focus_end_wait;

	if (sSCAutoDemoProc->proc_change != NULL)
	{
		sSCAutoDemoProc->proc_change();
	}
	sSCAutoDemoProc++;
}

// 0x8018D674
void scAutoDemoUpdateFocus(void)
{
	if (sSCAutoDemoProc->proc_focus != NULL)
	{
		sSCAutoDemoProc->proc_focus();
	}
	while (sSCAutoDemoFocusChangeWait == 0)
	{
		scAutoDemoChangeFocus();
	}
	sSCAutoDemoFocusChangeWait--;
}

// 0x8018D6DC
void scAutoDemoProcRun(GObj *gobj)
{
	scAutoDemoDetectExit();
	scAutoDemoUpdateFocus();
}

// 0x8018D704
GObj* scAutoDemoMakeFocusInterface(void)
{
	GObj *interface_gobj = gcMakeGObjSPAfter(nOMObjCommonKindInterface, scAutoDemoProcRun, nOMObjCommonLinkIDInterfaceActor, GOBJ_LINKORDER_DEFAULT);

	sSCAutoDemoProc = dSCAutoDemoProcList;
	sSCAutoDemoFocusChangeWait = 0;

	scAutoDemoUpdateFocus();

	return interface_gobj;
}

// 0x8018D758
void scAutoDemoGetPlayerSpawnPosition(s32 mapobj_kind, Vec3f *mapobj_pos)
{
	s32 i, j;
	s32 mapobj_random;
	s32 mapobj_select;
	s32 mapobj;

	mapobj_random = mtTrigGetRandomIntRange(((ARRAY_COUNT(dSCAutoDemoMapObjKindList) + ARRAY_COUNT(sSCAutoDemoMapObjs)) / 2) - mapobj_kind);

	for (i = j = 0; i < (ARRAY_COUNT(dSCAutoDemoMapObjKindList) + ARRAY_COUNT(sSCAutoDemoMapObjs)) / 2; i++)
	{
		mapobj_select = dSCAutoDemoMapObjKindList[i];

		if (sSCAutoDemoMapObjs[i] != -1)
		{
			if (mapobj_random == j)
			{
				sSCAutoDemoMapObjs[i] = -1;

				break;
			}
			else j++;
		}
	}
	if (mpCollisionGetMapObjCountKind(mapobj_select) != 0)
	{
		mpCollisionGetMapObjIDsKind(mapobj_select, &mapobj);
		mpCollisionGetMapObjPositionID(mapobj, mapobj_pos);
	}
}

// 0x8018D7FC
s32 scAutoDemoGetShuffledVariation(u16 flag)
{
	s32 i, j;

	for (i = 0, j = 0; i < (sizeof(u16) * 8); i++, flag = flag >> 1)
	{
		if (flag & 1)
		{
			j++;
		}
	}
	return j;
}

// 0x8018D874
s32 scAutoDemoGetShuffledFighterKind(u16 variation_flags, u16 ft_flags, s32 random)
{
	s32 ret = -1;

	random++;

	do
	{
		ret++;

		if ((variation_flags & (1 << ret)) && !(ft_flags & (1 << ret)))
		{
			random--;
		}
	} 
	while (random != 0);

	return ret;
}

// 0x8018D8C0
s32 scAutoDemoGetFighterKind(s32 player)
{
	u16 character_flag;
	s32 unused;
	s32 character_count2;
	s32 character_count1;
	s32 shuf;

	if (player < 2)
	{
		return gSceneData.demo_ft_kind[player];
	}
	character_flag = (gSaveData.fighter_mask | LBBACKUP_CHARACTER_MASK_STARTER);

	character_count1 = scAutoDemoGetShuffledVariation(character_flag), 
	character_count2 = scAutoDemoGetShuffledVariation(sSCAutoDemoCharacterFlag);

	shuf = scAutoDemoGetShuffledFighterKind(character_flag, sSCAutoDemoCharacterFlag, mtTrigGetRandomIntRange(character_count1 - character_count2));

	sSCAutoDemoCharacterFlag |= 1 << shuf;

	return shuf;
}

// 0x8018D954
s32 scAutoDemoGetPlayerDamage(s32 player)
{
	if (player < 2)
	{
		return mtTrigGetRandomIntRange(30);
	}
	else return mtTrigGetRandomIntRange(60) + 40;
}

// 0x8018D990
void scAutoDemoInitDemo(void)
{
	s32 i;

	sSCAutoDemoBattleState = gDefaultBattleState;
	gBattleState = &sSCAutoDemoBattleState;

	gBattleState->game_type = nSCBattleGameTypeDemo;
	gBattleState->gr_kind = dSCAutoDemoGroundOrder[gSceneData.demo_ground_order];

	gSceneData.demo_ground_order++;

	if (gSceneData.demo_ground_order >= ARRAY_COUNT(dSCAutoDemoGroundOrder))
	{
		gSceneData.demo_ground_order = 0;
	}
	sSCAutoDemoCharacterFlag = (1 << gSceneData.demo_ft_kind[0]) | (1 << gSceneData.demo_ft_kind[1]);

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		gBattleState->players[i].pl_kind = nFTPlayerKindCom;
		gBattleState->players[i].ft_kind = scAutoDemoGetFighterKind(i);
		gBattleState->players[i].level = 9;

		gBattleState->players[i].stock_damage_all = scAutoDemoGetPlayerDamage(i);
	}
	gBattleState->pl_count = 0;
	gBattleState->cp_count = 4;

	for (i = 0; i < ARRAY_COUNT(sSCAutoDemoMapObjs); i++)
	{
		sSCAutoDemoMapObjs[i] = 0;
	}
}

// 0x8018DB18
void scAutoDemoInitSObjs(void)
{
	GObj *interface_gobj;
	s32 player;
	void *file;

	file = lbRelocGetFileExternHeap
	(
		(uintptr_t)&D_NF_0000000C, 
		syTasklogMalloc
		(
			lbRelocGetFileSize((uintptr_t)&D_NF_0000000C), 
			0x10
		)
	);
	sSCAutoDemoFighterNameGObj = interface_gobj = gcMakeGObjSPAfter
	(
		nOMObjCommonKindInterface, 
		NULL, 
		nOMObjCommonLinkIDInterface, 
		GOBJ_LINKORDER_DEFAULT
	);
	gcAddGObjDisplay(interface_gobj, lbCommonDrawSObjAttr, 23, GOBJ_DLLINKORDER_DEFAULT, -1);

	for (player = 0; player < ARRAY_COUNT(gSceneData.demo_ft_kind); player++)
	{
		SObj *sobj = lbCommonMakeSObjForGObj(interface_gobj, lbGetDataFromFile(Sprite*, file, dSCAutoDemoFighterNameSpriteOffsets[gBattleState->players[player].ft_kind]));

		sobj->sprite.red   = 0xFF;
		sobj->sprite.green = 0xFF;
		sobj->sprite.blue  = 0xFF;

		sobj->sprite.attr = SP_TEXSHUF | SP_HIDDEN | SP_TRANSPARENT;

		sobj->pos.x = (s32)(160.0F - (sobj->sprite.width * 0.5F));
		sobj->pos.y = (s32)(50.0F - (sobj->sprite.height * 0.5F));
	}
}

// 0x8018DCC4
void scAutoDemoProcStart(void)
{
	GObj *fighter_gobj;
	ftCreateDesc player_spawn;
	s32 player;

	scAutoDemoInitDemo();
	scAutoDemoSetupFiles();
	gcMakeDefaultCameraGObj(9, GOBJ_LINKORDER_DEFAULT, 100, 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeGroundWallpaper();
	func_ovl2_8010DB00();
	itManagerInitItems();
	grCommonSetupInitAll();
	ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION, 4);
	wpManagerAllocWeapons();
	efManagerInitEffects();
	ifScreenFlashMakeInterface(0xFF);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gBattleState->players); player++)
	{
		player_spawn = dFTManagerDefaultFighterDesc;

		ftManagerSetupFilesAllKind(gBattleState->players[player].ft_kind);

		player_spawn.ft_kind = gBattleState->players[player].ft_kind;

		scAutoDemoGetPlayerSpawnPosition(player, &player_spawn.pos);

		player_spawn.lr_spawn = (player_spawn.pos.x >= 0.0F) ? nGMFacingL : nGMFacingR;

		player_spawn.team = gBattleState->players[player].team;

		player_spawn.player = player;

		player_spawn.detail = ((gBattleState->pl_count + gBattleState->cp_count) < 3) ? nFTPartsDetailHigh : nFTPartsDetailLow;

		player_spawn.costume = gBattleState->players[player].costume;

		player_spawn.shade = gBattleState->players[player].shade;

		player_spawn.handicap = gBattleState->players[player].handicap;

		player_spawn.cp_level = gBattleState->players[player].level;

		player_spawn.stock_count = gBattleState->stock_setting;

		player_spawn.damage = gBattleState->players[player].stock_damage_all;

		player_spawn.pl_kind = gBattleState->players[player].pl_kind;

		player_spawn.controller = &gPlayerControllers[player];

		player_spawn.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[player].ft_kind);

		player_spawn.is_skip_entry = TRUE;

		fighter_gobj = ftManagerMakeFighter(&player_spawn);

		gBattleState->players[player].player_color = player;
		gBattleState->players[player].tag_kind = player;

		ftParamInitPlayerBattleStats(player, fighter_gobj);
	}
	ftManagerSetupFilesPlayablesAll();
	scAutoDemoStartBattle();
	func_ovl2_8010E2D4();
	ifCommonPlayerArrowsInitInterface();
	func_ovl2_8010E1A4();
	ifCommonPlayerMagnifyMakeInterface();

	gIFCommonPlayerInterface.is_ifmagnify_display = TRUE;

	func_ovl2_8010DDC4();
	func_ovl2_8010E374();
	func_ovl2_8010E498();
	ifCommonPlayerTagMakeInterface();
	ifCommonPlayerDamageSetDigitPositions();
	ifCommonPlayerDamageInitInterface();
	ifCommonPlayerDamageSetShowInterface();
	ifCommonPlayerStockInitInterface();
	scAutoDemoInitSObjs();
	mpCollisionSetPlayBGM();
	func_800269C0_275C0(nSYAudioVoicePublicityExcited);
	scAutoDemoMakeFocusInterface();
}

// 0x8018DFC8
void scAutoDemoProcLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);

	ftDisplayLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E014
void scAutoDemoStartScene(void)
{
	dSCAutoDemoDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);

	syDisplayInit(&dSCAutoDemoDisplaySetup);

	dSCAutoDemoTasklogSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&gSCSubsysFramebuffer0 - (uintptr_t)&ovl64_BSS_END);
	dSCAutoDemoTasklogSetup.proc_start = scAutoDemoProcStart;

	func_800A2698(&dSCAutoDemoTasklogSetup);
	auStopBGM();

	while (auIsBGMPlaying(0) != FALSE)
	{
		continue;
	}

	auSetBGMVolume(0, 0x7800);
	func_800266A0_272A0();
	gmRumbleInitPlayers();
}
