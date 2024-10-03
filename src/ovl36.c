#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

// Externs
extern intptr_t lOverlay36ArenaLo;  // 8018E620
extern intptr_t lOverlay36ArenaHi;  // 803903E0

extern void func_80007080(void*, f32, f32, f32, f32);


// Offsets
extern intptr_t FILE_041_MARIO_CAMERA_PARAMS_OFFSET; // 00000000 file 0x041 offset for Mario's fighter pose camera settings


// DATA
// 8018E090
CameraDesc dMvOpeningMarioCameraDescStart = {

	{ 300.0f, 500.0f, 1700.0f },
	{ 0.0f, 100.0f, 0.0f },
	0.15f
};

// 8018E0AC
CameraDesc dMvOpeningMarioCameraDescEnd = {

	{ 800.0f, 500.0f, 1300.0f },
	{ 100.0f, 100.0f, 0.0f },
	0.15f
};

// 8018E0C8
ftKeyCommand dMvOpeningMarioGameKey[] = {

	FTKEY_EVENT_STICK(0, 0, 0),                         // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 11),                          // 0x100B, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 20),                          // 0x1014, 0x0000
	FTKEY_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),   // 0x2000, 0x00B0
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_END()                                   // 0x0000
};

// 8018E0E8
u32 D_ovl36_8018E0E8[2] = {

	0x25, 0x41
};


// BSS
// 8018E200
s32 D_ovl36_8018E200;

// 8018E204
s32 D_ovl36_8018E204;

// 8018E208
s32 gMvOpeningMarioFramesElapsed;

// 8018E20C
GObj* gMvOpeningMarioNameGObj;

// 8018E210
GObj* gMvOpeningMarioStageFighterGObj;

// 8018E214
s32 D_ovl36_8018E214;

// 8018E218
GObj* gMvOpeningMarioStageCameraGObj;

// 8018E21C
void* gMvOpeningMarioAnimHeap;

// 8018E220
f32 gMvOpeningMarioPosedFighterYSpeed;

// 8018E224
// s32 D_ovl36_8018E224;

// 8018E228
CameraDesc dMvOpeningMarioCameraDescAdjustedStart;

// 8018E248
CameraDesc dMvOpeningMarioCameraDescAdjustedEnd;

// 8018E268
lbFileNode D_ovl36_8018E268[48];

// 8018E3E8
lbFileNode D_ovl36_8018E3E8[7];

// 8018E420
uintptr_t gMvOpeningMarioFilesArray[2];

// 8018E428
scBattleState gMvOpeningMarioBattleState;


// 8018D0C0
void mvOpeningMarioLoadFiles()
{
	lbRelocSetup rldmSetup;

	rldmSetup.table_addr = &lLBRelocTableAddr;
	rldmSetup.table_files_num = &lLBRelocTableFilesNum;
	rldmSetup.file_heap = NULL;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buffer = D_ovl36_8018E268;
	rldmSetup.status_buffer_size = ARRAY_COUNT(D_ovl36_8018E268);
	rldmSetup.force_status_buffer = D_ovl36_8018E3E8;
	rldmSetup.force_status_buffer_size = ARRAY_COUNT(D_ovl36_8018E3E8);
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8), gMvOpeningMarioFilesArray, syTaskMalloc(lbRelocGetAllocSize(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8)), 0x10));
}

// 8018D160
void mvOpeningMarioSetNameColor(SObj* name_sobj)
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
void mvOpeningMarioDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[6] = {

		0x00003980, 0x000005e0, 0x00005418,
		0x000026b8, 0x000044b0, 0x00000000
	};
	f32 x_positions[5] = {

		0.0f, 40.0f, 80.0f, 110.0f, 125.0f
	};
	s32 i;

	gMvOpeningMarioNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningMarioFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 80.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningMarioSetNameColor(name_sobj);
	}
}

// 8018D314
void mvOpeningMarioAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningMarioFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningMarioCameraDescAdjustedEnd.eye.x - dMvOpeningMarioCameraDescAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningMarioCameraDescAdjustedEnd.eye.y - dMvOpeningMarioCameraDescAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningMarioCameraDescAdjustedEnd.eye.z - dMvOpeningMarioCameraDescAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningMarioCameraDescAdjustedEnd.at.x - dMvOpeningMarioCameraDescAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningMarioCameraDescAdjustedEnd.at.y - dMvOpeningMarioCameraDescAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningMarioCameraDescAdjustedEnd.at.z - dMvOpeningMarioCameraDescAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningMarioCameraDescAdjustedEnd.upx - dMvOpeningMarioCameraDescAdjustedStart.upx) / 45.0F));
	}
}

// 8018D40C
void mvOpeningMarioCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningMarioCameraDescAdjustedStart = dMvOpeningMarioCameraDescStart;
	dMvOpeningMarioCameraDescAdjustedEnd = dMvOpeningMarioCameraDescEnd;

	gMvOpeningMarioStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningMarioStageCameraGObj);
	func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMvOpeningMarioStageCameraGObj);
	gcAddGObjProcess(gMvOpeningMarioStageCameraGObj, mvOpeningMarioAnimateStageCamera, 1, 1);

	dMvOpeningMarioCameraDescAdjustedStart.eye.x += arg0.x;
	dMvOpeningMarioCameraDescAdjustedStart.eye.y += arg0.y;
	dMvOpeningMarioCameraDescAdjustedStart.eye.z += arg0.z;
	dMvOpeningMarioCameraDescAdjustedStart.at.x += arg0.x;
	dMvOpeningMarioCameraDescAdjustedStart.at.y += arg0.y;
	dMvOpeningMarioCameraDescAdjustedStart.at.z += arg0.z;

	dMvOpeningMarioCameraDescAdjustedEnd.eye.x += arg0.x;
	dMvOpeningMarioCameraDescAdjustedEnd.eye.y += arg0.y;
	dMvOpeningMarioCameraDescAdjustedEnd.eye.z += arg0.z;
	dMvOpeningMarioCameraDescAdjustedEnd.at.x += arg0.x;
	dMvOpeningMarioCameraDescAdjustedEnd.at.y += arg0.y;
	dMvOpeningMarioCameraDescAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningMarioCameraDescAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningMarioCameraDescAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningMarioCameraDescAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningMarioCameraDescAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningMarioCameraDescAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningMarioCameraDescAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningMarioCameraDescAdjustedStart.upx;
}

// 8018D614
void mvOpeningMarioInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i;
	s32 foo;
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
	mvOpeningMarioCreateStageViewport(spawn_position);
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

		gMvOpeningMarioStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningMarioGameKey);
	}
}

// 8018D844
void mvOpeningMarioRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskDLHeads[0]++);
	gDPSetCycleType(gSYTaskDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskDLHeads[0]++, 0, 0, 160, 170, 255, 255);
	gDPSetCombineLERP(gSYTaskDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskDLHeads[0]++, 10, 10, 110, 230);
	gDPPipeSync(gSYTaskDLHeads[0]++);
	gDPSetRenderMode(gSYTaskDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D944
void mvOpeningMarioCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningMarioRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D990
void mvOpeningMarioAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningMarioFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningMarioPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningMarioPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningMarioPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningMarioFramesElapsed > 15) && (gMvOpeningMarioFramesElapsed < 45))
	{
		gMvOpeningMarioPosedFighterYSpeed += -1.0F / 15.0F;
	}
	if ((gMvOpeningMarioFramesElapsed > 45) && (gMvOpeningMarioFramesElapsed < 60))
	{
		gMvOpeningMarioPosedFighterYSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningMarioPosedFighterYSpeed;
}

// 8018DA60
void mvOpeningMarioCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindMario;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindMario, 0);
	spawn_info.figatree_heap = gMvOpeningMarioAnimHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningMarioAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB5C
void mvOpeningMarioCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DBFC
void mvOpeningMarioCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningMarioFilesArray[1], &FILE_041_MARIO_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DCEC
void mvOpeningMarioCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->flags = 5;
}

// 8018DD9C
void mvOpeningMarioMainProc(GObj* arg0)
{

	gMvOpeningMarioFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTaskSetLoadScene();
	}

	if (gMvOpeningMarioFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningMarioNameGObj);
		mvOpeningMarioInitFighterStagePanel();
		mvOpeningMarioCreatePosedFighterBackground();
		mvOpeningMarioCreatePosedFighter();
	}

	if (gMvOpeningMarioFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x1F;
		syTaskSetLoadScene();
	}
}

// 8018DE58
void mvOpeningMarioInitFramesElapsed()
{
	gMvOpeningMarioFramesElapsed = 0;
}

// 8018DE64
void mvOpeningMarioInit()
{
	gMvOpeningMarioBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningMarioBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindCastle;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindMario;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningMarioLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningMarioMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningMarioInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindMario);

	gMvOpeningMarioAnimHeap = syTaskMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningMarioCreateNameViewport();
	mvOpeningMarioCreatePosedFighterBackgroundViewport();
	mvOpeningMarioCreatePosedFighterViewport();
	mvOpeningMarioDrawName();

	while (func_8000092C() < 1515U);
}

// 8018DFE4
void mvOpeningMarioSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E11C
syDisplaySetup D_ovl36_8018E11C = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 8018E138
scRuntimeInfo D_ovl36_8018E138 = {
	0x00000000, 0x8000a5e4,
	0x800a26b8, &lOverlay36ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	mvOpeningMarioSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	mvOpeningMarioInit
};

// 8018E030
void intro_focus_mario_entry()
{
	D_ovl36_8018E11C.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl36_8018E11C);
	D_ovl36_8018E138.arena_size = (u32) ((uintptr_t)&lOverlay36ArenaHi - (uintptr_t)&lOverlay36ArenaLo);
	gsGTLSceneInit(&D_ovl36_8018E138);
}
