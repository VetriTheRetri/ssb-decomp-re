#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

// Externs
extern intptr_t FILE_041_LINK_CAMERA_PARAMS_OFFSET; // 0xC0
extern intptr_t lOverlay40ArenaHi;  // 803903E0
extern intptr_t lOverlay40ArenaLo;  // 8018E5E0

extern void func_80007080(void*, f32, f32, f32, f32);

// DATA
// 8018E070
CameraDesc dMvOpeningLinkCameraDescStart = {

	{ -800.0, 180.0, 800.0 },
	{ 0.0, 180.0, 0.0 },
	0.0
};

// 8018E08C
CameraDesc dMvOpeningLinkCameraDescEnd = {

	{ 200.0, 0.0, 400.0 },
	{ 0.0, 240.0, 0.0 },
	0.4
};

// 8018E0A8
ftKeyCommand dMvOpeningLinkGameKey[] = {

    FTKEY_EVENT_BUTTON(L_TRIG, 1),  // 0x1001, 0x0020
    FTKEY_EVENT_END()               // 0x0000
};

u32 D_ovl40_8018E0B0[2] = {

	0x00000025, 0x00000041
};


// BSS
// 8018E1C0
s32 D_ovl40_8018E1C0;

// 8018E1C4
s32 D_ovl40_8018E1C4;

// 8018E1C8
s32 gMvOpeningLinkFramesElapsed;

// 8018E1CC
GObj* gMvOpeningLinkNameGObj;

// 8018E1D0
GObj* gMvOpeningLinkStageFighterGObj;

// 8018E1D4
s32 D_ovl40_8018E1D4;

// 8018E1D8
GObj* gMvOpeningLinkStageCameraGObj;

// 8018E1DC
void* gMvOpeningLinkAnimHeap;

// 8018E1E0
f32 gMvOpeningLinkPosedFighterXSpeed;

// 8018E1E4
s32 D_ovl40_8018E1E4;

// 8018E1E8
CameraDesc dMvOpeningLinkCameraDescAdjustedStart;

// 8018E208
CameraDesc dMvOpeningLinkCameraDescAdjustedEnd;

// 8018E228
lbFileNode D_ovl40_8018E228[48];

// 8018E3A8
lbFileNode D_ovl40_8018E3A8[7];

// 8018E3E0
uintptr_t gMvOpeningLinkFilesArray[2];

// 8018E3E8
scBattleState gMvOpeningLinkBattleState;


// 8018D0C0
void mvOpeningLinkLoadFiles()
{
	lbRelocSetup rldmSetup;

	rldmSetup.table_addr = &lLBRelocTableAddr;
	rldmSetup.table_files_num = &lLBRelocTableFilesNum;
	rldmSetup.file_heap = NULL;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buffer = D_ovl40_8018E228;
	rldmSetup.status_buffer_size = ARRAY_COUNT(D_ovl40_8018E228);
	rldmSetup.force_status_buffer = D_ovl40_8018E3A8;
	rldmSetup.force_status_buffer_size = ARRAY_COUNT(D_ovl40_8018E3A8);
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl40_8018E0B0, ARRAY_COUNT(D_ovl40_8018E0B0), gMvOpeningLinkFilesArray, syTaskMalloc(lbRelocGetAllocSize(D_ovl40_8018E0B0, ARRAY_COUNT(D_ovl40_8018E0B0)), 0x10));
}

// 8018D160
void mvOpeningLinkSetNameColor(SObj* name_sobj)
{
	name_sobj->sprite.attr &= ~SP_FASTCOPY;
	name_sobj->sprite.attr |= SP_TRANSPARENT;
	name_sobj->envcolor.r = 0xFF;
	name_sobj->envcolor.g = 0xFF;
	name_sobj->envcolor.b = 0xFF;
	name_sobj->sprite.red = 0xFF;
	name_sobj->sprite.green = 0xFF;
	name_sobj->sprite.blue = 0xFF;
}

// 8018D194
void mvOpeningLinkDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[5] = {

		0x00003358, 0x000026b8,
		0x00003e88, 0x00002f98, 0x00000000
	};
	f32 x_positions[4] = {

		0.0, 30.0, 45.0, 80.0
	};
	s32 i;

	gMvOpeningLinkNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningLinkFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 100.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningLinkSetNameColor(name_sobj);
	}
}

// 8018D2F4
void mvOpeningLinkAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningLinkFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningLinkCameraDescAdjustedEnd.eye.x - dMvOpeningLinkCameraDescAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningLinkCameraDescAdjustedEnd.eye.y - dMvOpeningLinkCameraDescAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningLinkCameraDescAdjustedEnd.eye.z - dMvOpeningLinkCameraDescAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningLinkCameraDescAdjustedEnd.at.x - dMvOpeningLinkCameraDescAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningLinkCameraDescAdjustedEnd.at.y - dMvOpeningLinkCameraDescAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningLinkCameraDescAdjustedEnd.at.z - dMvOpeningLinkCameraDescAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningLinkCameraDescAdjustedEnd.upx - dMvOpeningLinkCameraDescAdjustedStart.upx) / 45.0F));
	}
}

// 8018D3EC
void mvOpeningLinkCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningLinkCameraDescAdjustedStart = dMvOpeningLinkCameraDescStart;
	dMvOpeningLinkCameraDescAdjustedEnd = dMvOpeningLinkCameraDescEnd;

	gMvOpeningLinkStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningLinkStageCameraGObj);
	func_80007080(&cam->viewport, 10.0F, 90.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 15.0F / 7.0F;
	gcEndProcessAll(gMvOpeningLinkStageCameraGObj);
	gcAddGObjProcess(gMvOpeningLinkStageCameraGObj, mvOpeningLinkAnimateStageCamera, 1, 1);

	dMvOpeningLinkCameraDescAdjustedStart.eye.x += arg0.x;
	dMvOpeningLinkCameraDescAdjustedStart.eye.y += arg0.y;
	dMvOpeningLinkCameraDescAdjustedStart.eye.z += arg0.z;
	dMvOpeningLinkCameraDescAdjustedStart.at.x += arg0.x;
	dMvOpeningLinkCameraDescAdjustedStart.at.y += arg0.y;
	dMvOpeningLinkCameraDescAdjustedStart.at.z += arg0.z;

	dMvOpeningLinkCameraDescAdjustedEnd.eye.x += arg0.x;
	dMvOpeningLinkCameraDescAdjustedEnd.eye.y += arg0.y;
	dMvOpeningLinkCameraDescAdjustedEnd.eye.z += arg0.z;
	dMvOpeningLinkCameraDescAdjustedEnd.at.x += arg0.x;
	dMvOpeningLinkCameraDescAdjustedEnd.at.y += arg0.y;
	dMvOpeningLinkCameraDescAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningLinkCameraDescAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningLinkCameraDescAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningLinkCameraDescAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningLinkCameraDescAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningLinkCameraDescAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningLinkCameraDescAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningLinkCameraDescAdjustedStart.upx;
}

// 8018D5F4
void mvOpeningLinkInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i;
	s32 foo, bar;
	s32 pos_ids;
	Vec3f spawn_position;

	grWallpaperMakeGroundWallpaper();
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
	mpCollisionGetMapObjPositionID(pos_ids, &spawn_position);
	mvOpeningLinkCreateStageViewport(spawn_position);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[i].pl_kind == nFTPlayerKindNot) continue;

		ftManagerSetupFilesAllKind(gBattleState->players[i].ft_kind);

		spawn_info.ft_kind = gBattleState->players[i].ft_kind;
		spawn_info.pos.x = spawn_position.x;
		spawn_info.pos.y = spawn_position.y;
		spawn_info.pos.z = spawn_position.z;
		spawn_info.lr_spawn = nGMFacingR;
		spawn_info.team = gBattleState->players[i].team;
		spawn_info.player = i;
		spawn_info.detail = nFTPartsDetailHigh;
		spawn_info.costume = gBattleState->players[i].costume;
		spawn_info.handicap = gBattleState->players[i].handicap;
		spawn_info.cp_level = gBattleState->players[i].level;
		spawn_info.stock_count = gBattleState->stock_setting;
		spawn_info.damage = 0;
		spawn_info.pl_kind = gBattleState->players[i].pl_kind;
		spawn_info.controller = &gPlayerControllers[i];
		spawn_info.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

		gMvOpeningLinkStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningLinkGameKey);
	}
}

// 8018D824
void mvOpeningLinkRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskDLHeads[0]++);
	gDPSetCycleType(gSYTaskDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskDLHeads[0]++, 0, 0, 150, 120, 180, 255);
	gDPSetCombineLERP(gSYTaskDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskDLHeads[0]++, 10, 10, 310, 90);
	gDPPipeSync(gSYTaskDLHeads[0]++);
	gDPSetRenderMode(gSYTaskDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D924
void mvOpeningLinkCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningLinkRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D970
void mvOpeningLinkAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningLinkFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningLinkPosedFighterXSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningLinkPosedFighterXSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningLinkPosedFighterXSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningLinkFramesElapsed > 15) && (gMvOpeningLinkFramesElapsed < 45))
		gMvOpeningLinkPosedFighterXSpeed += -1.0F / 15.0F;
	if ((gMvOpeningLinkFramesElapsed > 45) && (gMvOpeningLinkFramesElapsed < 60))
		gMvOpeningLinkPosedFighterXSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.x -= gMvOpeningLinkPosedFighterXSpeed;
}

// 8018DA40
void mvOpeningLinkCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindLink;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindLink, 0);
	spawn_info.figatree_heap = gMvOpeningLinkAnimHeap;
	spawn_info.pos.x = 600.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningLinkAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB40
void mvOpeningLinkCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DBE0
void mvOpeningLinkCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 90.0F);
	cam->projection.persp.aspect = 3.75F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningLinkFilesArray[1], &FILE_041_LINK_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DCD0
void mvOpeningLinkCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 90.0F);
	cam->flags = 5;
}

// 8018DD80
void mvOpeningLinkMainProc(GObj* arg0)
{
	gMvOpeningLinkFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTaskSetLoadScene();
	}

	if (gMvOpeningLinkFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningLinkNameGObj);
		mvOpeningLinkInitFighterStagePanel();
		mvOpeningLinkCreatePosedFighterBackground();
		mvOpeningLinkCreatePosedFighter();
	}

	if (gMvOpeningLinkFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x20;
		syTaskSetLoadScene();
	}
}

// 8018DE3C
void mvOpeningLinkInitFramesElapsed()
{
	gMvOpeningLinkFramesElapsed = 0;
}

// 8018DE48
void mvOpeningLinkInit()
{
	gMvOpeningLinkBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningLinkBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindHyrule;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindLink;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningLinkLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningLinkMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningLinkInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindLink);

	gMvOpeningLinkAnimHeap = syTaskMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningLinkCreateNameViewport();
	mvOpeningLinkCreatePosedFighterBackgroundViewport();
	mvOpeningLinkCreatePosedFighterViewport();
	mvOpeningLinkDrawName();

	while (func_8000092C() < 1695U);
}

// 8018DFCC
void gMvOpeningLinkSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E0DC
syDisplaySetup D_ovl40_8018E0DC = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 8018E0F8
scRuntimeInfo D_ovl40_8018E0F8 = {

	0x00000000, 0x8000a5e4,
	0x800a26b8, &lOverlay40ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	gMvOpeningLinkSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	mvOpeningLinkInit
};

// 8018E018
void intro_focus_link_entry()
{
	D_ovl40_8018E0DC.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl40_8018E0DC);
	D_ovl40_8018E0F8.arena_size = (u32) ((uintptr_t)&lOverlay40ArenaHi - (uintptr_t)&lOverlay40ArenaLo);
	gsGTLSceneInit(&D_ovl40_8018E0F8);
}