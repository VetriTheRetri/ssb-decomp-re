#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/video.h>

// Externs
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay39ArenaLo;  // 0x8018E610
extern intptr_t lOverlay39ArenaHi;  // 0x803903E0
// Offsets
extern intptr_t FILE_041_FOX_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Fox's fighter pose camera settings

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);


// Data
// 0x8018E090
CameraDesc dMVOpeningFoxCameraDescStart = {

	-400.0, 320.0, 100.0,
	0.0, 320.0, 0.0,
	0.0
};

// 0x8018E0AC
CameraDesc dMVOpeningFoxCameraDescEnd = {

	-3000.0, 300.0, 250.0,
	0.0, 300.0, -200.0,
	0.7
};

// 0x8018E0C8
ftKeyCommand dMVOpeningFoxInputSeq[] =
{
	FTKEY_EVENT_STICK(206, 0, 1),     // 2001, CE00
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),  // 1001, 4000
	FTKEY_EVENT_BUTTON(0, 12),        // 100C, 0000
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),  // 1001, 4000
	FTKEY_EVENT_BUTTON(0, 12),        // 100C, 0000
	FTKEY_EVENT_END()                 // 0000
};

// 0x8018E0E0
u32 D_ovl39_8018E0E0[2] = {

	0x25, 0x41
};


// BSS
// 0x8018E1F0
s32 D_ovl39_8018E1F0[2];

// 0x8018E1F8
s32 gMVOpeningFoxFramesElapsed;

// 0x8018E1FC
GObj* gMVOpeningFoxNameGObj;

// 0x8018E200
GObj* gMVOpeningFoxStageFighterGObj;

// 0x8018E204
s32 D_ovl39_8018E204;

// 0x8018E208
GObj* gMVOpeningFoxStageCameraGObj;

// 0x8018E20C
void* gMVOpeningFoxFigatreeHeap;

// 0x8018E210
f32 gMVOpeningFoxPosedFighterYSpeed;

// 0x8018E218
CameraDesc dMVOpeningFoxCameraDescAdjustedStart;

// 0x8018E238
CameraDesc dMVOpeningFoxCameraDescAdjustedEnd;

// 0x8018E258
lbFileNode D_ovl39_8018E258[48];

// 0x8018E3D8
lbFileNode D_ovl39_8018E3D8[7];

// 0x8018E410
uintptr_t gMVOpeningFoxFiles[2];

// 0x8018E418
scBattleState gMVOpeningFoxBattleState;


// 0x8018D0C0
void mvOpeningFoxLoadFiles()
{
	lbRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (lbFileNode*) &D_ovl39_8018E258;
	rl_setup.status_buffer_size = 0x30;
	rl_setup.force_status_buffer = (lbFileNode*) &D_ovl39_8018E3D8;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0), gMVOpeningFoxFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0)), 0x10));
}

// 0x8018D160
void mvOpeningFoxSetNameColor(SObj* name_sobj)
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
void mvOpeningFoxDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[4] = {

		0x1A00,
		0x44B0,
		0x7108,
		0x0000
	};
	Vec2f positions[3] = {

		0.0, 0.0, 30.0,
		0.0, 75.0, 0.0
	};
	s32 i;

	gMVOpeningFoxNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMVOpeningFoxFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = positions[i].x + 110.0F;
		name_sobj->pos.y = positions[i].y + 100.0F;

		mvOpeningFoxSetNameColor(name_sobj);
	}
}

// 0x8018D314
void mvOpeningFoxAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMVOpeningFoxFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMVOpeningFoxCameraDescAdjustedEnd.eye.x - dMVOpeningFoxCameraDescAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMVOpeningFoxCameraDescAdjustedEnd.eye.y - dMVOpeningFoxCameraDescAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMVOpeningFoxCameraDescAdjustedEnd.eye.z - dMVOpeningFoxCameraDescAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMVOpeningFoxCameraDescAdjustedEnd.at.x - dMVOpeningFoxCameraDescAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMVOpeningFoxCameraDescAdjustedEnd.at.y - dMVOpeningFoxCameraDescAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMVOpeningFoxCameraDescAdjustedEnd.at.z - dMVOpeningFoxCameraDescAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMVOpeningFoxCameraDescAdjustedEnd.upx - dMVOpeningFoxCameraDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D40C
void mvOpeningFoxCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMVOpeningFoxCameraDescAdjustedStart = dMVOpeningFoxCameraDescStart;
	dMVOpeningFoxCameraDescAdjustedEnd = dMVOpeningFoxCameraDescEnd;

	gMVOpeningFoxStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMVOpeningFoxStageCameraGObj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMVOpeningFoxStageCameraGObj);
	gcAddGObjProcess(gMVOpeningFoxStageCameraGObj, mvOpeningFoxAnimateStageCamera, 1, 1);

	dMVOpeningFoxCameraDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningFoxCameraDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningFoxCameraDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningFoxCameraDescAdjustedStart.at.x += arg0.x;
	dMVOpeningFoxCameraDescAdjustedStart.at.y += arg0.y;
	dMVOpeningFoxCameraDescAdjustedStart.at.z += arg0.z;

	dMVOpeningFoxCameraDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningFoxCameraDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningFoxCameraDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningFoxCameraDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningFoxCameraDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningFoxCameraDescAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMVOpeningFoxCameraDescAdjustedStart.eye.x;
	cam->vec.eye.y = dMVOpeningFoxCameraDescAdjustedStart.eye.y;
	cam->vec.eye.z = dMVOpeningFoxCameraDescAdjustedStart.eye.z;
	cam->vec.at.x = dMVOpeningFoxCameraDescAdjustedStart.at.x;
	cam->vec.at.y = dMVOpeningFoxCameraDescAdjustedStart.at.y;
	cam->vec.at.z = dMVOpeningFoxCameraDescAdjustedStart.at.z;
	cam->vec.up.x = dMVOpeningFoxCameraDescAdjustedStart.upx;
}

// 0x8018D61C
void mvOpeningFoxInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i;
	s32 foo, bar;
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
	mvOpeningFoxCreateStageViewport(spawn_position);
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
		spawn_info.lr_spawn = nGMFacingL;
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

		gMVOpeningFoxStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningFoxInputSeq);
	}
}

// 0x8018D84C
void mvOpeningFoxRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 60, 40, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 210, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D94C
void mvOpeningFoxCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), &mvOpeningFoxRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D998
void mvOpeningFoxAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMVOpeningFoxFramesElapsed)
	{
		default:
			break;
		case 15:
			gMVOpeningFoxPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMVOpeningFoxPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMVOpeningFoxPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMVOpeningFoxFramesElapsed > 15) && (gMVOpeningFoxFramesElapsed < 45))
		gMVOpeningFoxPosedFighterYSpeed += -1.0F / 15.0F;

	if ((gMVOpeningFoxFramesElapsed > 45) && (gMVOpeningFoxFramesElapsed < 60))
		gMVOpeningFoxPosedFighterYSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMVOpeningFoxPosedFighterYSpeed;
}

// 0x8018DA68
void mvOpeningFoxCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindFox;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindFox, 0);
	spawn_info.figatree_heap = gMVOpeningFoxFigatreeHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningFoxAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB68
void mvOpeningFoxCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC08
void mvOpeningFoxCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMVOpeningFoxFiles[1], &FILE_041_FOX_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DCF0
void mvOpeningFoxCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	syRdpSetViewport(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->flags = 5;
}

// 0x8018DD98
void mvOpeningFoxMainProc(GObj* arg0)
{
	gMVOpeningFoxFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTaskmanSetLoadScene();
	}

	if (gMVOpeningFoxFramesElapsed == 15)
	{
		gcEjectGObj(gMVOpeningFoxNameGObj);
		mvOpeningFoxInitFighterStagePanel();
		mvOpeningFoxCreatePosedFighterBackground();
		mvOpeningFoxCreatePosedFighter();
	}

	if (gMVOpeningFoxFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x24;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DE54
void mvOpeningFoxInitFramesElapsed()
{
	gMVOpeningFoxFramesElapsed = 0;
}

// 0x8018DE60
void mvOpeningFoxInit()
{
	gMVOpeningFoxBattleState = gDefaultBattleState;
	gBattleState = &gMVOpeningFoxBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindSector;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindFox;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningFoxLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningFoxMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningFoxInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindFox);

	gMVOpeningFoxFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningFoxCreateNameViewport();
	mvOpeningFoxCreatePosedFighterBackgroundViewport();
	mvOpeningFoxCreatePosedFighterViewport();
	mvOpeningFoxDrawName();

	while (func_8000092C() < 2055U);
}

// 0x8018DFE0
void mvOpeningFoxFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E110
syVideoSetup D_ovl39_8018E110 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 0x8018E12C
scRuntimeInfo D_ovl39_8018E12C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay39ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningFoxFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningFoxInit
};

// 0x8018E02C
void intro_focus_fox_entry()
{
	D_ovl39_8018E110.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl39_8018E110);
	D_ovl39_8018E12C.arena_size = (u32) ((uintptr_t)&lOverlay39ArenaHi - (uintptr_t)&lOverlay39ArenaLo);
	syTaskmanInit(&D_ovl39_8018E12C);
}
