#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>
#include <sys/objdraw.h>

// Externs
extern intptr_t D_NF_00000854;
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay37ArenaLo;  // 8018E5E0
extern intptr_t lOverlay37ArenaHi;  // 803903E0
extern intptr_t FILE_041_DK_CAMERA_PARAMS_OFFSET; // file 0x041 offset for DK's fighter pose camera settings
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void func_80007080(void*, f32, f32, f32, f32);
extern void func_ovl0_800CD2CC(GObj*);
extern void func_ovl0_800CCF00();


// Data
// 8018E070
CameraDesc dMvOpeningDKCameraDescStart = {

	{ -1100.0, 150.0, 400.0 },
	{ 0.0,     150.0, 0.0   }, 0.0
};

// 8018E08C
CameraDesc dMvOpeningDKCameraDescEnd = {

	{ -900.0, 500.0, 1800.0 },
	{ 0.0,    500.0, 0.0    }, 0.0
};

// 8018E0A8
ftKeyCommand dMvOpeningDKInputSeq[] =
{
	FTKEY_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0), // 0x2000, 0x00B0
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
	FTKEY_EVENT_BUTTON(0, 1),                         // 0x1001, 0x0000
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
	FTKEY_EVENT_END()                                 // 0x0000
};

// 8018E0BC
rdFileID D_ovl37_8018E0BC[2] = {

	0x25, 0x41
};


// BSS
// 8018E1C0
s32 D_ovl37_8018E1C0[2];

// 8018E1C8
s32 gMvOpeningDKFramesElapsed;

// 8018E1CC
GObj* gMvOpeningDKNameGObj;

// 8018E1D0
GObj* gMvOpeningDKStageFighterGObj;

s32 D_ovl37_8018E1D4;

// 8018E1D8
GObj* gMvOpeningDKStageCameraGObj;

// 8018E1DC
void* gMvOpeningDKAnimHeap;

// 8018E1E0
f32 gMvOpeningDKPosedFighterYSpeed;

// 8018E1E8
CameraDesc dMvOpeningDKCameraDescAdjustedStart;

// 8018E208
CameraDesc dMvOpeningDKCameraDescAdjustedEnd;

// 8018E228
rdFileNode D_ovl37_8018E228[48];

// 8018E3A8
rdFileNode D_ovl37_8018E3A8[7];

// 8018E3E0
uintptr_t gMvOpeningDKFilesArray[2];

// 8018E3E8
scBattleState gMvOpeningDKBattleState;


// 8018D0C0
void mvOpeningDKLoadFiles()
{
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = NULL;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl37_8018E228;
	rldmSetup.status_buf_size = 0x30;
	rldmSetup.force_buf = (rdFileNode*) &D_ovl37_8018E3A8;
	rldmSetup.force_buf_size = 7;
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl37_8018E0BC, ARRAY_COUNT(D_ovl37_8018E0BC), gMvOpeningDKFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl37_8018E0BC, ARRAY_COUNT(D_ovl37_8018E0BC)), 0x10));
}

// 8018D160
void mvOpeningDKSetNameColor(SObj* name_sobj)
{
	name_sobj->sprite.attr &= ~SP_FASTCOPY;
	name_sobj->sprite.attr |= SP_TRANSPARENT;
	name_sobj->shadow_color.r = 0xFF;
	name_sobj->shadow_color.g = 0xFF;
	name_sobj->shadow_color.b = 0xFF;
	name_sobj->sprite.red = 0xFF;
	name_sobj->sprite.green = 0xFF;
	name_sobj->sprite.blue = 0xFF;
}

// 8018D194
void mvOpeningDKDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[3] = {

		0x1268,
		0x2F98,
		0x0000
	};
	Vec2f positions[2] = {

		{ 0.0,  0.0 },
		{ 40.0, 0.0 }
	};
	s32 i;

	gMvOpeningDKNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningDKFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = positions[i].x + 120.0F;
		name_sobj->pos.y = positions[i].y + 100.0F;

		mvOpeningDKSetNameColor(name_sobj);
	}
}

// 8018D2FC
void mvOpeningDKAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningDKFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningDKCameraDescAdjustedEnd.eye.x - dMvOpeningDKCameraDescAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningDKCameraDescAdjustedEnd.eye.y - dMvOpeningDKCameraDescAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningDKCameraDescAdjustedEnd.eye.z - dMvOpeningDKCameraDescAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningDKCameraDescAdjustedEnd.at.x - dMvOpeningDKCameraDescAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningDKCameraDescAdjustedEnd.at.y - dMvOpeningDKCameraDescAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningDKCameraDescAdjustedEnd.at.z - dMvOpeningDKCameraDescAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningDKCameraDescAdjustedEnd.upx - dMvOpeningDKCameraDescAdjustedStart.upx) / 45.0F));
	}
}

// 8018D3F4
void mvOpeningDKCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningDKCameraDescAdjustedStart = dMvOpeningDKCameraDescStart;
	dMvOpeningDKCameraDescAdjustedEnd = dMvOpeningDKCameraDescEnd;

	gMvOpeningDKStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningDKStageCameraGObj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	func_8000B39C(gMvOpeningDKStageCameraGObj);
	gcAddGObjProcess(gMvOpeningDKStageCameraGObj, mvOpeningDKAnimateStageCamera, 1, 1);

	dMvOpeningDKCameraDescAdjustedStart.eye.x += arg0.x;
	dMvOpeningDKCameraDescAdjustedStart.eye.y += arg0.y;
	dMvOpeningDKCameraDescAdjustedStart.eye.z += arg0.z;
	dMvOpeningDKCameraDescAdjustedStart.at.x += arg0.x;
	dMvOpeningDKCameraDescAdjustedStart.at.y += arg0.y;
	dMvOpeningDKCameraDescAdjustedStart.at.z += arg0.z;

	dMvOpeningDKCameraDescAdjustedEnd.eye.x += arg0.x;
	dMvOpeningDKCameraDescAdjustedEnd.eye.y += arg0.y;
	dMvOpeningDKCameraDescAdjustedEnd.eye.z += arg0.z;
	dMvOpeningDKCameraDescAdjustedEnd.at.x += arg0.x;
	dMvOpeningDKCameraDescAdjustedEnd.at.y += arg0.y;
	dMvOpeningDKCameraDescAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningDKCameraDescAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningDKCameraDescAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningDKCameraDescAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningDKCameraDescAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningDKCameraDescAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningDKCameraDescAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningDKCameraDescAdjustedStart.upx;
}

// 8018D604
void mvOpeningDKInitFighterStagePanel()
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
	mvOpeningDKCreateStageViewport(spawn_position);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[i].pl_kind == nFTPlayerKindNot)
			continue;

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
		spawn_info.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

		gMvOpeningDKStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningDKInputSeq);
	}
}

// 8018D834
void mvOpeningDKRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 70, 90, 0, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 210, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D934
void mvOpeningDKCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningDKRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D980
void mvOpeningDKAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningDKFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningDKPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningDKPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningDKPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningDKFramesElapsed > 15) && (gMvOpeningDKFramesElapsed < 45))
		gMvOpeningDKPosedFighterYSpeed += -1.0F / 15.0F;

	if ((gMvOpeningDKFramesElapsed > 45) && (gMvOpeningDKFramesElapsed < 60))
		gMvOpeningDKPosedFighterYSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.y += gMvOpeningDKPosedFighterYSpeed;
}

// 8018DA50
void mvOpeningDKCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindDonkey;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindDonkey, 0);
	spawn_info.anim_heap = gMvOpeningDKAnimHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = -600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningDKAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB50
void mvOpeningDKCreateNameViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DBF0
void mvOpeningDKCreatePosedFighterViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningDKFilesArray[1], &FILE_041_DK_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DCD8
void mvOpeningDKCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->flags = 5;
}

// 8018DD80
void mvOpeningDKMainProc(GObj* arg0)
{
	gMvOpeningDKFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		leoInitUnit_atten();
	}

	if (gMvOpeningDKFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningDKNameGObj);
		mvOpeningDKInitFighterStagePanel();
		mvOpeningDKCreatePosedFighterBackground();
		mvOpeningDKCreatePosedFighter();
	}

	if (gMvOpeningDKFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x22;
		leoInitUnit_atten();
	}
}

// 8018DE3C
void mvOpeningDKInitFramesElapsed()
{
	gMvOpeningDKFramesElapsed = 0;
}

// 8018DE48
void mvOpeningDKInit()
{
	gMvOpeningDKBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningDKBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindJungle;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindDonkey;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningDKLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningDKMainProc, 0xD, 0x80000000);
	func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningDKInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindDonkey);

	gMvOpeningDKAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	mvOpeningDKCreateNameViewport();
	mvOpeningDKCreatePosedFighterBackgroundViewport();
	mvOpeningDKCreatePosedFighterViewport();
	mvOpeningDKDrawName();

	while (func_8000092C() < 1605U);
}

// 8018DFCC
void mvOpeningDKSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E0E0
syDisplaySetup D_ovl37_8018E0E0 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 8018E0FC
scRuntimeInfo D_ovl37_8018E0FC = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay37ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningDKSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningDKInit
};

// 8018E018
void intro_focus_dk_entry()
{
	D_ovl37_8018E0E0.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl37_8018E0E0);
	D_ovl37_8018E0FC.arena_size = (u32) ((uintptr_t)&lOverlay37ArenaHi - (uintptr_t)&lOverlay37ArenaLo);
	gsGTLSceneInit(&D_ovl37_8018E0FC);
}
