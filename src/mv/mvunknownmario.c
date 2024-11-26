#include <ft/fighter.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern void scManagerFuncDraw(void);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018D670
s32 sMVUnknownMarioPad0x8018D670[2];

// 0x8018D678
LBFileNode sMVUnkownMarioStatusBuffer[20];

// 0x8018D718
LBFileNode sMVUnkownMarioForceStatusBuffer[7];

// 0x8018D750
GObj *sMVUnkownMarioFighterGObj;

// 0x8018D758
SCBattleState sMVUnkownMarioBattleState;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018D580
FTKeyEvent dMVUnknownMarioKeyEvents[/* */] =
{
	FTKEY_EVENT_BUTTON(0, 180),                                       // 0x10B4, 0x0000
	FTKEY_EVENT_STICK(30, 0, 60),                                     // 0x203C, 0x1E00
	FTKEY_EVENT_STICK(0, 0, 0),                                       // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 12),                                        // 0x100C, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 12),                                        // 0x100C, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                                  // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 30),                                        // 0x101E, 0x0000
	FTKEY_EVENT_STICK(0, I_CONTROLLER_RANGE_MAX, 0),                  // 0x2000, 0x0050
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),                                  // 0x1001, 0x4000
	FTKEY_EVENT_STICK(0, 0, 0),                                       // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(0, 180),                                       // 0x10B4, 0x0000
	FTKEY_EVENT_END()                                                 // 0x0000
};

// 0x8018D5B8
SYColorRGBA dMVUnknownMarioFadeColor = { 0x00, 0x00, 0x00, 0x00 };

// 0x8018D5BC
SYVideoSetup dMVUnknownMarioVideoSetup = SYVIDEO_SETUP_DEFAULT();

// 0x8018D5D8
SYTaskmanSetup dMVUnknownMarioTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        scManagerFuncDraw,          // Frame draw function
        &ovl5_BSS_END,             	// Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2048,         // Display List Buffer 0 Size
        sizeof(Gfx) * 1024,         // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x8000,                     // Graphics Heap Size
        2,                          // ???
        0xC000,                     // RDP Output Buffer Size
        mvUnknownMarioFuncLights,   // Pre-render function
        syControllerFuncRead,       // Controller I/O function
    },

    0,                              // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
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
    
    mvUnknownMarioFuncStart         // Task start function
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void mvUnknownMarioSetupFiles(void)
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMVUnkownMarioStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMVUnkownMarioStatusBuffer);
	rl_setup.force_status_buffer = sMVUnkownMarioForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVUnkownMarioForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dGMCommonFileIDs,
		ARRAY_COUNT(dGMCommonFileIDs),
		gGMCommonFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dGMCommonFileIDs,
				ARRAY_COUNT(dGMCommonFileIDs)
			),
			0x10
		)
	);
}

// 0x8018D160
void mvUnknownMarioFuncRun(GObj *gobj)
{
	if (ftParamCheckHaveKey(sMVUnkownMarioFighterGObj) == FALSE)
	{
		func_800269C0_275C0(nSYAudioFGMTitlePressStart);
		syTaskmanSetLoadScene();
	}
}

// 0x8018D1A0
void mvUnknownMarioFuncStart(void)
{
	s32 unused[3];
	GObj *fighter_gobj;
	s32 player;
	FTDesc ft_desc;
	SYColorRGBA color;

	sMVUnkownMarioBattleState = dSCManagerDefaultBattleState;
	gSCManagerBattleState = &sMVUnkownMarioBattleState;

	gSCManagerBattleState->game_type = nSCBattleGameTypeUnk6;
	gSCManagerBattleState->gkind = nGRKindPupupu;
	gSCManagerBattleState->pl_count = 1;
	gSCManagerBattleState->players[0].fkind = nFTKindMario;
	gSCManagerBattleState->players[0].pkind = nFTPlayerKindKey;

	mvUnknownMarioSetupFiles();
	gcMakeGObjSPAfter(nGCCommonKindMovie, mvUnknownMarioFuncRun, nGCCommonLinkIDMovie, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(9, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	grWallpaperMakeDecideKind();
	func_ovl2_8010DB00();
	grCommonSetupInitAll();
	ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION | FTDATA_FLAG_SUBMOTION, 1);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (player = 0; player < ARRAY_COUNT(gSCManagerBattleState->players); player++)
	{
		ft_desc = dFTManagerDefaultFighterDesc;

		if (gSCManagerBattleState->players[player].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gSCManagerBattleState->players[player].fkind);

		ft_desc.fkind = gSCManagerBattleState->players[player].fkind;
		ft_desc.pos.x = 0.0F;
		ft_desc.pos.y = 150.0F;
		ft_desc.pos.z = 0.0F;
		ft_desc.lr = +1;
		ft_desc.team = gSCManagerBattleState->players[player].team;
		ft_desc.player = player;
		ft_desc.detail = nFTPartsDetailHigh;
		ft_desc.costume = gSCManagerBattleState->players[player].costume;
		ft_desc.handicap = gSCManagerBattleState->players[player].handicap;
		ft_desc.level = gSCManagerBattleState->players[player].level;
		ft_desc.stock_count = gSCManagerBattleState->stocks;
		ft_desc.damage = 0;
		ft_desc.pkind = gSCManagerBattleState->players[player].pkind;
		ft_desc.controller = &gSYControllerDevices[player];

		ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gSCManagerBattleState->players[player].fkind);

		fighter_gobj = ftManagerMakeFighter(&ft_desc);
		sMVUnkownMarioFighterGObj = fighter_gobj;

		ftParamInitPlayerBattleStats(player, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVUnknownMarioKeyEvents);
	}
	color = dMVUnknownMarioFadeColor;

	lbFadeMakeActor(nGCCommonKindTransition, nGCCommonLinkIDTransition, 10, &color, 12, TRUE, NULL);
}

// 0x8018D4BC
void mvUnknownMarioFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018D508
void mvUnknownMarioStartScene(void)
{
	dMVUnknownMarioVideoSetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMVUnknownMarioVideoSetup);

	dMVUnknownMarioTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl5_BSS_END);
	scManagerFuncUpdate(&dMVUnknownMarioTaskmanSetup);

	auStopBGM();

	gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
	gSCManagerSceneData.scene_curr = nSCKindTitle;
}
