#include <ft/fighter.h>
#include <if/interface.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern uintptr_t D_NF_00000025;
extern uintptr_t D_NF_00000041;

extern void func_800A26B8(void);
extern u32 func_8000092C();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8018E220
s32 sMVOpeningKirbyPad0x8018E220[2];

// 0x8018E228
s32 sMVOpeningKirbyTotalTimeTics;

// 0x8018E22C
GObj *sMVOpeningKirbyNameGObj;

// 0x8018E230
GObj *sMVOpeningKirbyStageFighterGObj;

// 0x8018E234
s32 sMVOpeningKirbyPad0x8018E234;

// 0x8018E238
GObj *sMVOpeningKirbyMotionCameraGObj;

// 0x8018E23C
void *sMVOpeningKirbyFigatreeHeap;

// 0x8018E240
f32 sMVOpeningKirbyPosedSpeedY;

// 0x8018E244
s32 sMVOpeningKirbyPad0x8018E244;

// 0x8018E248
CObjDesc dMVOpeningKirbyStartAdjustedCObjDesc;

// 0x8018E268
CObjDesc dMVOpeningKirbyEndAdjustedCObjDesc;

// 0x8018E288
LBFileNode sMVOpeningKirbyStatusBuffer[48];

// 0x8018E408
LBFileNode sMVOpeningKirbyForceStatusBuffer[7];

// 0x8018E440
void *sMVOpeningKirbyFiles[2];

// 0x8018E448
SCBattleState sMVOpeningKirbyBattleState;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018E0B0
CObjDesc dMVOpeningKirbyStartCObjDesc = { { 0.0F, 400.0F, 2000.0F }, { 0.0F, 400.0F, 0.0F }, 0.0F };

// 0x8018E0CC
CObjDesc dMVOpeningKirbyEndCObjDesc = { { 1100.0F, 400.0F, 1800.0F }, { 1100.0F, 400.0F, 0.0F }, 0.0F };

// 0x8018E0E8
FTKeyCommand dMVOpeningKirbyInputSeq[/* */] =
{
	FTKEY_EVENT_STICK(45, I_CONTROLLER_RANGE_MAX, 1),   // 2001, 2D50
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 1001, 8000
	FTKEY_EVENT_END()                                   // 0000
};

// 0x8018E0F4
u32 dMVOpeningKirbyFileIDs[/* */] = { &D_NF_00000025, &D_NF_00000041 };

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8018D0C0
void mvOpeningKirbySetupFiles(void)
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMVOpeningKirbyStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningKirbyStatusBuffer);
	rl_setup.force_status_buffer = sMVOpeningKirbyForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningKirbyForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMVOpeningKirbyFileIDs,
		ARRAY_COUNT(dMVOpeningKirbyFileIDs),
		sMVOpeningKirbyFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMVOpeningKirbyFileIDs,
				ARRAY_COUNT(dMVOpeningKirbyFileIDs)
			),
			0x10
		)
	);
}

// 0x8018D160
void mvOpeningKirbySetNameSpriteColors(SObj *sobj)
{
	sobj->sprite.attr &= ~SP_FASTCOPY;
	sobj->sprite.attr |= SP_TRANSPARENT;
	
	sobj->envcolor.r = 0xFF;
	sobj->envcolor.g = 0xFF;
	sobj->envcolor.b = 0xFF;

	sobj->sprite.red = 0xFF;
	sobj->sprite.green = 0xFF;
	sobj->sprite.blue = 0xFF;
}

// 0x8018D194
void mvOpeningKirbyMakeName(void)
{
	GObj *name_gobj;
	SObj *name_sobj;

	// 0x8018E0FC
	intptr_t offsets[/* */] =
	{
		&lIFCommonAnnounceCommonLetterK,
		&lIFCommonAnnounceCommonLetterI,
		&lIFCommonAnnounceCommonLetterR,
		&lIFCommonAnnounceCommonLetterB,
		&lIFCommonAnnounceCommonLetterY,
		0x0
	};

	// 0x8018E114
	Vec2f pos[/* */] =
	{
		{   0.0F, 0.0F },
		{  35.0F, 0.0F },
		{  50.0F, 0.0F },
		{  80.0F, 0.0F },
		{ 110.0F, 0.0F }
	};

	s32 i;

	sMVOpeningKirbyNameGObj = name_gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 27, GOBJ_DLLINKORDER_DEFAULT, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, lbRelocGetDataFromFile(Sprite*, sMVOpeningKirbyFiles[0], offsets[i]));

		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;

		name_sobj->pos.x = pos[i].x + 90.0F;
		name_sobj->pos.y = pos[i].y + 100.0F;

		mvOpeningKirbySetNameSpriteColors(name_sobj);
	}
}

// 0x8018D324
void mvOpeningKirbyMotionCameraProcUpdate(GObj *camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (sMVOpeningKirbyTotalTimeTics >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningKirbyEndAdjustedCObjDesc.eye.x - dMVOpeningKirbyStartAdjustedCObjDesc.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningKirbyEndAdjustedCObjDesc.eye.y - dMVOpeningKirbyStartAdjustedCObjDesc.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningKirbyEndAdjustedCObjDesc.eye.z - dMVOpeningKirbyStartAdjustedCObjDesc.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningKirbyEndAdjustedCObjDesc.at.x - dMVOpeningKirbyStartAdjustedCObjDesc.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningKirbyEndAdjustedCObjDesc.at.y - dMVOpeningKirbyStartAdjustedCObjDesc.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningKirbyEndAdjustedCObjDesc.at.z - dMVOpeningKirbyStartAdjustedCObjDesc.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningKirbyEndAdjustedCObjDesc.upx - dMVOpeningKirbyStartAdjustedCObjDesc.upx) / 45.0F));
	}
}

// 0x8018D41C
void mvOpeningKirbyMakeMotionCamera(Vec3f vec)
{
	CObj *cobj;

	dMVOpeningKirbyStartAdjustedCObjDesc = dMVOpeningKirbyStartCObjDesc;
	dMVOpeningKirbyEndAdjustedCObjDesc = dMVOpeningKirbyEndCObjDesc;

	sMVOpeningKirbyMotionCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(sMVOpeningKirbyMotionCameraGObj);

	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 210.0F, 230.0F);

	cobj->projection.persp.aspect = 10.0F / 11.0F;

	gcEndProcessAll(sMVOpeningKirbyMotionCameraGObj);
	gcAddGObjProcess(sMVOpeningKirbyMotionCameraGObj, mvOpeningKirbyMotionCameraProcUpdate, nGCProcessKindProc, 1);

	dMVOpeningKirbyStartAdjustedCObjDesc.eye.x += vec.x;
	dMVOpeningKirbyStartAdjustedCObjDesc.eye.y += vec.y;
	dMVOpeningKirbyStartAdjustedCObjDesc.eye.z += vec.z;
	dMVOpeningKirbyStartAdjustedCObjDesc.at.x += vec.x;
	dMVOpeningKirbyStartAdjustedCObjDesc.at.y += vec.y;
	dMVOpeningKirbyStartAdjustedCObjDesc.at.z += vec.z;

	dMVOpeningKirbyEndAdjustedCObjDesc.eye.x += vec.x;
	dMVOpeningKirbyEndAdjustedCObjDesc.eye.y += vec.y;
	dMVOpeningKirbyEndAdjustedCObjDesc.eye.z += vec.z;
	dMVOpeningKirbyEndAdjustedCObjDesc.at.x += vec.x;
	dMVOpeningKirbyEndAdjustedCObjDesc.at.y += vec.y;
	dMVOpeningKirbyEndAdjustedCObjDesc.at.z += vec.z;

	cobj->vec.eye.x = dMVOpeningKirbyStartAdjustedCObjDesc.eye.x;
	cobj->vec.eye.y = dMVOpeningKirbyStartAdjustedCObjDesc.eye.y;
	cobj->vec.eye.z = dMVOpeningKirbyStartAdjustedCObjDesc.eye.z;
	cobj->vec.at.x = dMVOpeningKirbyStartAdjustedCObjDesc.at.x;
	cobj->vec.at.y = dMVOpeningKirbyStartAdjustedCObjDesc.at.y;
	cobj->vec.at.z = dMVOpeningKirbyStartAdjustedCObjDesc.at.z;
	cobj->vec.up.x = dMVOpeningKirbyStartAdjustedCObjDesc.upx;
}

// 0x8018D62C
void mvOpeningKirbyMakeMotionWindow(void)
{
	GObj* fighter_gobj;
	s32 i;
	s32 unused[2];
	s32 pos_ids;
	Vec3f pos;

	grWallpaperMakeDecideKind();
	grCommonSetupInitAll();

	if (mpCollisionGetMapObjCountKind(nMPMapObjKindMovieSpawn1) != 1)
	{
		while (TRUE)
		{
			syErrorPrintf("wrong number of mapobject\n");
			scManagerRunPrintGObjStatus();
		}
	}
	mpCollisionGetMapObjIDsKind(nMPMapObjKindMovieSpawn1, &pos_ids);
	mpCollisionGetMapObjPositionID(pos_ids, &pos);

	pos.y += 30.0F;
	
	mvOpeningKirbyMakeMotionCamera(pos);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		FTCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[i].pkind == nFTPlayerKindNot)
		{
			continue;
		}
		ftManagerSetupFilesAllKind(gBattleState->players[i].fkind);

		ft_desc.fkind = gBattleState->players[i].fkind;
		ft_desc.pos.x = pos.x;
		ft_desc.pos.y = pos.y;
		ft_desc.pos.z = pos.z;
		ft_desc.lr_spawn = +1;
		ft_desc.team = gBattleState->players[i].team;
		ft_desc.player = i;
		ft_desc.detail = nFTPartsDetailHigh;
		ft_desc.costume = gBattleState->players[i].costume;
		ft_desc.handicap = gBattleState->players[i].handicap;
		ft_desc.cp_level = gBattleState->players[i].level;
		ft_desc.stock_count = gBattleState->stock_setting;
		ft_desc.damage = 0;
		ft_desc.pkind = gBattleState->players[i].pkind;
		ft_desc.controller = &gPlayerControllers[i];
		ft_desc.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[i].fkind);

		sMVOpeningKirbyStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningKirbyInputSeq);
	}
}

// 0x8018D870
void mvOpeningKirbyPosedWallpaperFuncDisplay(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x50, 0xAA, 0xFF, 0xFF);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 210, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D970
void mvOpeningKirbyMakePosedWallpaper(void)
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT), mvOpeningKirbyPosedWallpaperFuncDisplay, 28, GOBJ_DLLINKORDER_DEFAULT, -1);
}

// 0x8018D9BC
void mvOpeningKirbyPosedFighterProcUpdate(GObj *fighter_gobj)
{
	switch (sMVOpeningKirbyTotalTimeTics)
	{
	case 15:
		sMVOpeningKirbyPosedSpeedY = 17.0F;
		break;
	case 45:
		sMVOpeningKirbyPosedSpeedY = 15.0F;
		break;
	case 60:
		sMVOpeningKirbyPosedSpeedY = 0.0F;
		break;

	default:
		break;	
	}
	if ((sMVOpeningKirbyTotalTimeTics > 15) && (sMVOpeningKirbyTotalTimeTics < 45))
	{
		sMVOpeningKirbyPosedSpeedY += -1.0F / 15.0F;
	}
	if ((sMVOpeningKirbyTotalTimeTics > 45) && (sMVOpeningKirbyTotalTimeTics < 60))
	{
		sMVOpeningKirbyPosedSpeedY += -1.0F;
	}
	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= sMVOpeningKirbyPosedSpeedY;
}

// 0x8018DA8C
void mvOpeningKirbyMakePosedFighter(void)
{
	GObj* fighter_gobj;
	FTCreateDesc ft_desc = dFTManagerDefaultFighterDesc;

	ft_desc.fkind = nFTKindKirby;
	ft_desc.costume = ftParamGetCostumeCommonID(nFTKindKirby, 0);
	ft_desc.figatree_heap = sMVOpeningKirbyFigatreeHeap;

	ft_desc.pos.x = 0.0F;
	ft_desc.pos.y = 600.0F;
	ft_desc.pos.z = 0.0F;

	fighter_gobj = ftManagerMakeFighter(&ft_desc);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 26, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningKirbyPosedFighterProcUpdate, nGCProcessKindProc, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0F;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0F;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0F;
}

// 0x8018DB8C
void mvOpeningKirbyMakeNameCamera(void)
{
	CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            80,
            COBJ_MASK_DLLINK(27),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC2C
void mvOpeningKirbyMakePosedFighterCamera(void)
{
	GObj *camera_gobj = gcMakeCameraGObj
    (
        nGCCommonKindSceneCamera,
        NULL,
        16,
        GOBJ_LINKORDER_DEFAULT,
        func_80017EC0,
        10,
        COBJ_MASK_DLLINK(26),
        -1,
        TRUE,
        nGCProcessKindProc,
        NULL,
        1,
        FALSE
    );
	CObj *cobj = CObjGetStruct(camera_gobj);

	syRdpSetViewport(&cobj->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	
	cobj->projection.persp.aspect = 5.0F / 11.0F;

	gcAddCameraCamAnimJoint(cobj, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningKirbyFiles[1], &lMVOpeningKirbyCamAnimJoint), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nGCProcessKindProc, 1);
}

// 0x8018DD14
void mvOpeningKirbyMakePosedWallpaperCamera(void)
{
	CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            20,
            COBJ_MASK_DLLINK(28),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cobj->viewport, 210.0F, 10.0F, 310.0F, 230.0F);

	cobj->flags = 0x4 | 0x1;
}

// 0x8018DDBC
void mvOpeningKirbyFuncRun(GObj *gobj)
{
	sMVOpeningKirbyTotalTimeTics++;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindTitle;

		syTaskmanSetLoadScene();
	}
	if (sMVOpeningKirbyTotalTimeTics == 15)
	{
		gcEjectGObj(sMVOpeningKirbyNameGObj);
		mvOpeningKirbyMakeMotionWindow();
		mvOpeningKirbyMakePosedWallpaper();
		mvOpeningKirbyMakePosedFighter();
	}
	if (sMVOpeningKirbyTotalTimeTics == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindOpeningFox;

		syTaskmanSetLoadScene();
	}
}

// 0x8018DE78
void mvOpeningKirbyInitVars(void)
{
	sMVOpeningKirbyTotalTimeTics = 0;
}

// 0x8018DE84
void mvOpeningKirbyFuncStart(void)
{
	sMVOpeningKirbyBattleState = gDefaultBattleState;
	gBattleState = &sMVOpeningKirbyBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindPupupu;
	gBattleState->pl_count = 1;

	gBattleState->players[0].fkind = nFTKindKirby;
	gBattleState->players[0].pkind = nFTPlayerKindKey;

	mvOpeningKirbySetupFiles();

	gcMakeGObjSPAfter(nGCCommonKindMovie, mvOpeningKirbyFuncRun, 13, GOBJ_LINKORDER_DEFAULT);
	gcMakeDefaultCameraGObj(9, GOBJ_LINKORDER_DEFAULT, 100, COBJ_FLAG_FILLCOLOR | COBJ_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	mvOpeningKirbyInitVars();
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(FTDATA_FLAG_MAINMOTION | FTDATA_FLAG_SUBMOTION, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindKirby);

	sMVOpeningKirbyFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	
	mvOpeningKirbyMakeNameCamera();
	mvOpeningKirbyMakePosedWallpaperCamera();
	mvOpeningKirbyMakePosedFighterCamera();
	mvOpeningKirbyMakeName();

	while (func_8000092C() < 1965)
	{
		continue;
	};
}

// 0x8018E00C
void mvOpeningKirbyFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(dls, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E13C
syVideoSetup dMVOpeningKirbyDisplaySetup = SYVIDEO_DEFINE_DEFAULT();

// 0x8018E158
syTaskmanSetup dMVOpeningKirbyTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        func_8000A5E4,                  // Update function
        func_800A26B8,                  // Frame draw function
        &ovl43_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 2048,             // Display List Buffer 0 Size
        sizeof(Gfx) * 1024,             // Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningKirbyFuncLights,      	// Pre-render function
        update_contdata,                // Controller I/O function
    },

    0,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    0,                                  // Number of thread stacks
    0,                                  // ???
    0,                                  // Number of GObjProcesses
    0,                                  // Number of GObjs
    sizeof(GObj),                       // GObj size
    0,                                  // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjVec?
    0,                                  // Number of AObjs
    0,                                  // Number of MObjs
    0,                                  // Number of DObjs
    sizeof(DObj),                       // DObj size
    0,                                  // Number of SObjs
    sizeof(SObj),                       // SObj size
    0,                                  // Number of Cameras
    sizeof(CObj),                     // Camera size
    
    mvOpeningKirbyFuncStart            	// Task start function
};

// 0x8018E058
void mvOpeningKirbyStartScene(void)
{
	dMVOpeningKirbyDisplaySetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMVOpeningKirbyDisplaySetup);

	dMVOpeningKirbyTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl43_BSS_END);
	syTaskmanInit(&dMVOpeningKirbyTaskmanSetup);
}
