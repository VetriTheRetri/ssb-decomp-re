#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <lb/library.h>

// Externs
extern intptr_t lOverlay36ArenaLo;  // 0x8018E620
extern intptr_t lOverlay36ArenaHi;  // 0x803903E0

extern void syRdpSetViewport(void*, f32, f32, f32, f32);


// Offsets
extern intptr_t FILE_041_MARIO_CAMERA_PARAMS_OFFSET; // 00000000 file 0x041 offset for Mario's fighter pose camera settings


// DATA
// 0x8018E090
CameraDesc dMVOpeningMarioCameraDescStart = {

	{ 300.0f, 500.0f, 1700.0f },
	{ 0.0f, 100.0f, 0.0f },
	0.15f
};

// 0x8018E0AC
CameraDesc dMVOpeningMarioCameraDescEnd = {

	{ 800.0f, 500.0f, 1300.0f },
	{ 100.0f, 100.0f, 0.0f },
	0.15f
};

// 0x8018E0C8
ftKeyCommand dMVOpeningMarioGameKey[] = {

	FTKEY_EVENT_STICK(0, 0, 0),                         // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 11),                          // 0x100B, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 20),                          // 0x1014, 0x0000
	FTKEY_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),   // 0x2000, 0x00B0
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_END()                                   // 0x0000
};

// 0x8018E0E8
u32 D_ovl36_8018E0E8[2] = {

	0x25, 0x41
};


// BSS
// 0x8018E200
s32 D_ovl36_8018E200;

// 0x8018E204
s32 D_ovl36_8018E204;

// 0x8018E208
s32 gMVOpeningMarioFramesElapsed;

// 0x8018E20C
GObj* gMVOpeningMarioNameGObj;

// 0x8018E210
GObj* gMVOpeningMarioStageFighterGObj;

// 0x8018E214
s32 D_ovl36_8018E214;

// 0x8018E218
GObj* gMVOpeningMarioStageCameraGObj;

// 0x8018E21C
void* gMVOpeningMarioFigatreeHeap;

// 0x8018E220
f32 gMVOpeningMarioPosedFighterYSpeed;

// 0x8018E224
// s32 D_ovl36_8018E224;

// 0x8018E228
CameraDesc dMVOpeningMarioCameraDescAdjustedStart;

// 0x8018E248
CameraDesc dMVOpeningMarioCameraDescAdjustedEnd;

// 0x8018E268
lbFileNode D_ovl36_8018E268[48];

// 0x8018E3E8
lbFileNode D_ovl36_8018E3E8[7];

// 0x8018E420
uintptr_t gMVOpeningMarioFiles[2];

// 0x8018E428
scBattleState gMVOpeningMarioBattleState;


// 0x8018D0C0
void mvOpeningMarioLoadFiles()
{
	lbRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = D_ovl36_8018E268;
	rl_setup.status_buffer_size = ARRAY_COUNT(D_ovl36_8018E268);
	rl_setup.force_status_buffer = D_ovl36_8018E3E8;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(D_ovl36_8018E3E8);
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8), gMVOpeningMarioFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8)), 0x10));
}

// 0x8018D160
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

// 0x8018D194
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

	gMVOpeningMarioNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMVOpeningMarioFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 80.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningMarioSetNameColor(name_sobj);
	}
}

// 0x8018D314
void mvOpeningMarioAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMVOpeningMarioFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMVOpeningMarioCameraDescAdjustedEnd.eye.x - dMVOpeningMarioCameraDescAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMVOpeningMarioCameraDescAdjustedEnd.eye.y - dMVOpeningMarioCameraDescAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMVOpeningMarioCameraDescAdjustedEnd.eye.z - dMVOpeningMarioCameraDescAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMVOpeningMarioCameraDescAdjustedEnd.at.x - dMVOpeningMarioCameraDescAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMVOpeningMarioCameraDescAdjustedEnd.at.y - dMVOpeningMarioCameraDescAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMVOpeningMarioCameraDescAdjustedEnd.at.z - dMVOpeningMarioCameraDescAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMVOpeningMarioCameraDescAdjustedEnd.upx - dMVOpeningMarioCameraDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D40C
void mvOpeningMarioCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMVOpeningMarioCameraDescAdjustedStart = dMVOpeningMarioCameraDescStart;
	dMVOpeningMarioCameraDescAdjustedEnd = dMVOpeningMarioCameraDescEnd;

	gMVOpeningMarioStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMVOpeningMarioStageCameraGObj);
	syRdpSetViewport(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMVOpeningMarioStageCameraGObj);
	gcAddGObjProcess(gMVOpeningMarioStageCameraGObj, mvOpeningMarioAnimateStageCamera, 1, 1);

	dMVOpeningMarioCameraDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningMarioCameraDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningMarioCameraDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningMarioCameraDescAdjustedStart.at.x += arg0.x;
	dMVOpeningMarioCameraDescAdjustedStart.at.y += arg0.y;
	dMVOpeningMarioCameraDescAdjustedStart.at.z += arg0.z;

	dMVOpeningMarioCameraDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningMarioCameraDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningMarioCameraDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningMarioCameraDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningMarioCameraDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningMarioCameraDescAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMVOpeningMarioCameraDescAdjustedStart.eye.x;
	cam->vec.eye.y = dMVOpeningMarioCameraDescAdjustedStart.eye.y;
	cam->vec.eye.z = dMVOpeningMarioCameraDescAdjustedStart.eye.z;
	cam->vec.at.x = dMVOpeningMarioCameraDescAdjustedStart.at.x;
	cam->vec.at.y = dMVOpeningMarioCameraDescAdjustedStart.at.y;
	cam->vec.at.z = dMVOpeningMarioCameraDescAdjustedStart.at.z;
	cam->vec.up.x = dMVOpeningMarioCameraDescAdjustedStart.upx;
}

// 0x8018D614
void mvOpeningMarioInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i;
	s32 foo;
	s32 pos_ids;
	Vec3f spawn_position;

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
		spawn_info.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[i].ft_kind);

		gMVOpeningMarioStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningMarioGameKey);
	}
}

// 0x8018D844
void mvOpeningMarioRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 160, 170, 255, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 110, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D944
void mvOpeningMarioCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningMarioRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D990
void mvOpeningMarioAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMVOpeningMarioFramesElapsed)
	{
		default:
			break;
		case 15:
			gMVOpeningMarioPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMVOpeningMarioPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMVOpeningMarioPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMVOpeningMarioFramesElapsed > 15) && (gMVOpeningMarioFramesElapsed < 45))
	{
		gMVOpeningMarioPosedFighterYSpeed += -1.0F / 15.0F;
	}
	if ((gMVOpeningMarioFramesElapsed > 45) && (gMVOpeningMarioFramesElapsed < 60))
	{
		gMVOpeningMarioPosedFighterYSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMVOpeningMarioPosedFighterYSpeed;
}

// 0x8018DA60
void mvOpeningMarioCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindMario;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindMario, 0);
	spawn_info.figatree_heap = gMVOpeningMarioFigatreeHeap;
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

// 0x8018DB5C
void mvOpeningMarioCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DBFC
void mvOpeningMarioCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningMarioFiles[1], &FILE_041_MARIO_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DCEC
void mvOpeningMarioCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->flags = 5;
}

// 0x8018DD9C
void mvOpeningMarioMainProc(GObj* arg0)
{

	gMVOpeningMarioFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTaskmanSetLoadScene();
	}

	if (gMVOpeningMarioFramesElapsed == 15)
	{
		gcEjectGObj(gMVOpeningMarioNameGObj);
		mvOpeningMarioInitFighterStagePanel();
		mvOpeningMarioCreatePosedFighterBackground();
		mvOpeningMarioCreatePosedFighter();
	}

	if (gMVOpeningMarioFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x1F;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DE58
void mvOpeningMarioInitFramesElapsed()
{
	gMVOpeningMarioFramesElapsed = 0;
}

// 0x8018DE64
void mvOpeningMarioInit()
{
	gMVOpeningMarioBattleState = gDefaultBattleState;
	gBattleState = &gMVOpeningMarioBattleState;

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

	gMVOpeningMarioFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningMarioCreateNameViewport();
	mvOpeningMarioCreatePosedFighterBackgroundViewport();
	mvOpeningMarioCreatePosedFighterViewport();
	mvOpeningMarioDrawName();

	while (func_8000092C() < 1515U);
}

// 0x8018DFE4
void mvOpeningMarioFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E11C
syVideoSetup D_ovl36_8018E11C = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x8018E138
scRuntimeInfo D_ovl36_8018E138 = {
	0x00000000, 0x8000a5e4,
	0x800a26b8, &lOverlay36ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	mvOpeningMarioFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	mvOpeningMarioInit
};

// 0x8018E030
void intro_focus_mario_entry()
{
	D_ovl36_8018E11C.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl36_8018E11C);
	D_ovl36_8018E138.arena_size = (u32) ((uintptr_t)&lOverlay36ArenaHi - (uintptr_t)&lOverlay36ArenaLo);
	syTaskmanInit(&D_ovl36_8018E138);
}
