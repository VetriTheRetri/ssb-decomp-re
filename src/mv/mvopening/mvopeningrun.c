#include <ft/fighter.h>
#include <gr/ground.h>
#include <mv/movie.h>
#include <sc/scene.h>
#include <sys/video.h>

extern u32 func_8000092C();
extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern uintptr_t D_NF_00000037;
extern uintptr_t D_NF_0000003C;
extern uintptr_t D_NF_0000004B;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80132710
s32 sMVOpeningRunPad0x80132710[2];

// 0x80132718
void *sMVOpeningRunFigatreeHeaps[8];

// 0x80132738
GObj *sMVOpeningRunLinkFighterGObj;

// 0x8013273C
s32 sMVOpeningRunTotalTimeTics;

// 0x80132740
s32 sMVOpeningRunUnused0x80132740;

// 0x80132744
s32 sMVOpeningRunPad0x80132744;

// 0x80132748
lbFileNode sMVOpeningRunStatusBuffer[100];

// 0x80132A68
lbFileNode sMVOpeningRunForceStatusBuffer[7];

// 0x80132AA0
void *sMVOpeningRunFiles[3];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x801325D0
u32 dMVOpeningRunFileIDs[/* */] = { &D_NF_00000037, &D_NF_0000003C, &D_NF_0000004B };

// 0x801325DC
Lights1 dMVOpeningRunLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x801325F4
Lights1 dMVOpeningRunLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void mvOpeningRunFuncLights(Gfx **dls)
{
	gSPSetGeometryMode(dls[0]++, G_LIGHTING);

	ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
void mvOpeningRunFighterProcUpdate(GObj *fighter_proxy_gobj)
{
	GObj *fighter_gobj = (GObj*) fighter_proxy_gobj->user_data.p;

	gcPlayAnimAll(fighter_proxy_gobj);

	DObjGetStruct(fighter_gobj)->translate.vec.f.x = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.x;
	DObjGetStruct(fighter_gobj)->translate.vec.f.y = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.y;
	DObjGetStruct(fighter_gobj)->translate.vec.f.z = DObjGetStruct(fighter_proxy_gobj)->translate.vec.f.z;

	DObjGetStruct(fighter_gobj)->rotate.vec.f.x = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.x;
	DObjGetStruct(fighter_gobj)->rotate.vec.f.y = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.y;
	DObjGetStruct(fighter_gobj)->rotate.vec.f.z = DObjGetStruct(fighter_proxy_gobj)->rotate.vec.f.z;
}

// 0x80131BE8
void mvOpeningRunMakeFighters(void)
{
	GObj *fighter_gobj;
	GObj *fighter_proxy_gobj;
	DObj *fighter_proxy_dobj;
	s32 i;
	
	// 0x80132610
	s32 ft_kinds[/* */] =
	{
		nFTKindMario,
		nFTKindFox,
		nFTKindDonkey,
		nFTKindSamus,
		nFTKindLink,
		nFTKindYoshi,
		nFTKindKirby,
		nFTKindPikachu
	};

	// 0x80132630
	intptr_t offsets[/* */] =
	{
		&lMVOpeningRunMarioAnimJoint,
		&lMVOpeningRunFoxAnimJoint,
		&lMVOpeningRunDonkeyAnimJoint,
		&lMVOpeningRunSamusAnimJoint,
		&lMVOpeningRunLinkAnimJoint,
		&lMVOpeningRunYoshiAnimJoint,
		&lMVOpeningRunKirbyAnimJoint,
		&lMVOpeningRunPikachuAnimJoint
	};

	for (i = 0; i < ARRAY_COUNT(ft_kinds); i++)
	{
		ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		spawn_info.ft_kind = ft_kinds[i];
		spawn_info.costume = ftParamGetCostumeCommonID(ft_kinds[i], 0);

		spawn_info.pos.x = 0.0F;
		spawn_info.pos.y = 0.0F;
		spawn_info.pos.z = 0.0F;

		spawn_info.figatree_heap = sMVOpeningRunFigatreeHeaps[i];
		fighter_gobj = fighter_proxy_gobj = ftManagerMakeFighter(&spawn_info);

		if (ft_kinds[i] == nFTKindLink)
		{
			sMVOpeningRunLinkFighterGObj = fighter_proxy_gobj;
		}
		scSubsysFighterSetStatus(fighter_proxy_gobj, 0x10006);

		fighter_proxy_gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
		fighter_proxy_gobj->user_data.p = fighter_gobj;

		fighter_proxy_dobj = gcAddDObjForGObj(fighter_proxy_gobj, NULL);

		gcAddXObjForDObjFixed(fighter_proxy_dobj, nGCTransformTraRotRpyRSca, 0);
		gcAddDObjAnimJoint(fighter_proxy_dobj, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningRunFiles[0], offsets[i]), 0.0F);

		gcAddGObjProcess(fighter_proxy_gobj, mvOpeningRunFighterProcUpdate, nGCProcessKindProc, 1);
		gcPlayAnimAll(fighter_proxy_gobj);
	}
}

// 0x80131E28
void mvOpeningRunWallpaperProcUpdate(GObj *gobj)
{
	SObj *sobj = SObjGetStruct(gobj);

	sobj->pos.x += 30.0F;

	if (sobj->pos.x > 0.0F)
	{
		sobj->pos.x += -320.0F;
	}
	sobj->next->pos.x = sobj->pos.x + 320.0F;
}

// 0x80131E88
void mvOpeningRunMakeWallpaper(void)
{
	GObj *gobj;
	SObj *left_sobj;
	SObj *right_sobj;

	gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, -1);

	left_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMVOpeningRunFiles[0], &lMVOpeningRunWallpaperSprite));

	left_sobj->sprite.attr &= ~SP_FASTCOPY;

	left_sobj->sprite.scalex = 2.0F;
	left_sobj->sprite.scaley = 2.0F;

	left_sobj->pos.x = -320.0F;
	left_sobj->pos.y = 0.0F;

	right_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetDataFromFile(Sprite*, sMVOpeningRunFiles[0], &lMVOpeningRunWallpaperSprite));

	right_sobj->sprite.attr &= ~SP_FASTCOPY;

	right_sobj->sprite.scalex = 2.0F;
	right_sobj->sprite.scaley = 2.0F;

	right_sobj->pos.x = 0.0F;
	right_sobj->pos.y = 0.0F;

	gcAddGObjProcess(gobj, mvOpeningRunWallpaperProcUpdate, nGCProcessKindProc, 1);
}

// 0x80131F80
void mvOpeningRunMakeCrash(void)
{
	GObj *gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

	gcSetupCommonDObjs(gobj, lbRelocGetDataFromFile(DObjDesc*, sMVOpeningRunFiles[2], &lMVOpeningRunCrashDObjDesc), NULL);
	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 6, GOBJ_DLLINKORDER_DEFAULT, -1);

	DObjGetStruct(gobj)->translate.vec.f.x = 960.0F;
	DObjGetStruct(gobj)->translate.vec.f.y = 360.0F;
	DObjGetStruct(gobj)->translate.vec.f.z = -13.5F;

	DObjGetStruct(gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F);

	DObjGetStruct(gobj)->scale.vec.f.x = 0.9F;
	DObjGetStruct(gobj)->scale.vec.f.y = 0.9F;
	DObjGetStruct(gobj)->scale.vec.f.z = 0.9F;

	gcAddMObjAll(gobj, lbRelocGetDataFromFile(MObjSub***, sMVOpeningRunFiles[2], &lMVOpeningRunCrashMObjSub));
	gcAddMatAnimJointAll(gobj, lbRelocGetDataFromFile(AObjEvent32***, sMVOpeningRunFiles[2], &lMVOpeningRunCrashMatAnimJoint), 0.0F);
	gcAddGObjProcess(gobj, gcPlayAnimAll, nGCProcessKindProc, 1);
	gcPlayAnimAll(gobj);
}

// 0x801320B4
void mvOpeningRunInitMainCamera(GObj *camera_gobj)
{
	Camera* cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
	gcAddCameraCamAnimJoint(cam, lbRelocGetDataFromFile(AObjEvent32*, sMVOpeningRunFiles[1], &lMVOpeningRunMainCamAnimJoint), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, nGCProcessKindProc, 1);
}

// 0x80132138
void mvOpeningRunMakeMainCamera(void)
{
	mvOpeningRunInitMainCamera
	(
		gcMakeCameraGObj
		(
        	nGCCommonKindSceneCamera,
        	NULL,
        	16,
        	GOBJ_LINKORDER_DEFAULT,
        	func_80017EC0,
        	60, 
        	CAMERA_MASK_DLLINK(18) | CAMERA_MASK_DLLINK(15) |
        	CAMERA_MASK_DLLINK(10) | CAMERA_MASK_DLLINK(9)  |
        	CAMERA_MASK_DLLINK(6),
        	-1,
        	TRUE,
        	nGCProcessKindProc,
        	NULL,
        	1,
        	FALSE
    	)
	);
}

// 0x801321BC
void mvOpeningRunMakeWallpaperCamera(void)
{
	Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            80,
            CAMERA_MASK_DLLINK(28),
            -1,
            FALSE,
            nGCProcessKindProc,
            NULL,
            1,
            FALSE
        )
    );
    syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8013225C
void mvOpeningRunInitVars(void)
{
	sMVOpeningRunTotalTimeTics = 0;
}

// 0x80132268
void mvOpeningRunFuncRun(GObj *gobj)
{
	sMVOpeningRunTotalTimeTics++;

	if (sMVOpeningRunTotalTimeTics >= 10)
	{
		if (sMVOpeningRunUnused0x80132740 != 0)
		{
			sMVOpeningRunUnused0x80132740--;
		}
		if ((scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) && (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE))
		{
			sMVOpeningRunUnused0x80132740 = 0;
		}
		if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = nSCKindTitle;

			syTaskmanSetLoadScene();
		}
		if (sMVOpeningRunTotalTimeTics == 45)
		{
			scSubsysFighterSetStatus(sMVOpeningRunLinkFighterGObj, 0x10007);
		}
		if (sMVOpeningRunTotalTimeTics == 190)
		{
			mvOpeningRunMakeCrash();
			func_800269C0_275C0(nSYAudioFGMExplodeL);
		}
		if (sMVOpeningRunTotalTimeTics == 220)
		{
			gSceneData.scene_previous = gSceneData.scene_current;
			gSceneData.scene_current = nSCKindOpeningCliff;

			syTaskmanSetLoadScene();
		}
	}
}

// 0x8013237C
void mvOpeningRunFuncStart(void)
{
	s32 i;
	lbRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sMVOpeningRunStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sMVOpeningRunStatusBuffer);
	rl_setup.force_status_buffer = sMVOpeningRunForceStatusBuffer;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(sMVOpeningRunForceStatusBuffer);

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern
	(
		dMVOpeningRunFileIDs,
		ARRAY_COUNT(dMVOpeningRunFileIDs),
		sMVOpeningRunFiles,
		syTaskmanMalloc
		(
			lbRelocGetAllocSize
			(
				dMVOpeningRunFileIDs,
				ARRAY_COUNT(dMVOpeningRunFileIDs)
			),
			0x10
		)
	);
	gcMakeGObjSPAfter(0, mvOpeningRunFuncRun, 0, GOBJ_LINKORDER_DEFAULT);
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, CAMERA_FLAG_ZBUFFER, GPACK_RGBA8888(0x00, 0x00, 0x00, 0x00));

	efAllocInitParticleBank();
	mvOpeningRunInitVars();

	efManagerInitEffects();
	ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 8);
	ftManagerSetupFilesAllKind(nFTKindMario);
	ftManagerSetupFilesAllKind(nFTKindFox);
	ftManagerSetupFilesAllKind(nFTKindDonkey);
	ftManagerSetupFilesAllKind(nFTKindSamus);
	ftManagerSetupFilesAllKind(nFTKindLink);
	ftManagerSetupFilesAllKind(nFTKindYoshi);
	ftManagerSetupFilesAllKind(nFTKindKirby);
	ftManagerSetupFilesAllKind(nFTKindPikachu);

	for (i = 0; i < ARRAY_COUNT(sMVOpeningRunFigatreeHeaps); i++)
	{
		sMVOpeningRunFigatreeHeaps[i] = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	}
	mvOpeningRunMakeMainCamera();
	mvOpeningRunMakeWallpaperCamera();
	mvOpeningRunMakeWallpaper();
	mvOpeningRunMakeFighters();

	scSubsysFighterSetLightParams(45.0F, 10.0F, 0xFF, 0xFF, 0xFF, 0xFF);

	while (func_8000092C() < 2250)
	{
		continue;
	};
}

// 0x80132650
syVideoSetup dMVOpeningRunDisplaySetup = SYVIDEO_DEFINE_DEFAULT();

// 0x8013266C
syTaskmanSetup dMVOpeningRunTaskmanSetup =
{
    // Task Logic Buffer Setup
    {
        0,                              // ???
        func_8000A5E4,                  // Update function
        func_8000A340,                  // Frame draw function
        &ovl44_BSS_END,                 // Allocatable memory pool start
        0,                              // Allocatable memory pool size
        1,                              // ???
        2,                              // Number of contexts?
        sizeof(Gfx) * 5000,             // Display List Buffer 0 Size
        sizeof(Gfx) * 512,             	// Display List Buffer 1 Size
        0,                              // Display List Buffer 2 Size
        0,                              // Display List Buffer 3 Size
        0x8000,                         // Graphics Heap Size
        2,                              // ???
        0xC000,                         // RDP Output Buffer Size
        mvOpeningRunFuncLights,      	// Pre-render function
        update_contdata,                // Controller I/O function
    },

    8,                                  // Number of GObjThreads
    sizeof(u64) * 192,                  // Thread stack size
    8,                                  // Number of thread stacks
    0,                                  // ???
    128,                                // Number of GObjProcesses
    128,                                // Number of GObjs
    sizeof(GObj),                       // GObj size
    256,                                // Number of Object Manager Matrices
    dLBCommonFuncMatrixList,            // Matrix function list
    NULL,                               // Function for ejecting DObjDynamicStore?
    800,                                // Number of AObjs
    160,                                // Number of MObjs
    256,                                // Number of DObjs
    sizeof(DObj),                       // DObj size
    128,                                // Number of SObjs
    sizeof(SObj),                       // SObj size
    16,                                 // Number of Cameras
    sizeof(Camera),                     // Camera size
    
    mvOpeningRunFuncStart            	// Task start function
};

// 0x8013256C
void mvOpeningRunStartScene(void)
{
	dMVOpeningRunDisplaySetup.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&dMVOpeningRunDisplaySetup);

	dMVOpeningRunTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl44_BSS_END);
	syTaskmanInit(&dMVOpeningRunTaskmanSetup);
}
