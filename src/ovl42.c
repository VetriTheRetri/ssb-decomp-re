#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>

// Externs
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay42ArenaLo;  // 8018E640
extern intptr_t lOverlay42ArenaHi;  // 803903E0
extern intptr_t FILE_041_PIKACHU_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Pikachu's fighter pose camera settings

extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);


// Data
// 8018E0C0
CameraDesc dMvOpeningPikachuCameraSettingsStart = {

	0.0, 0.0, 20000.0,
	0.0, 0.0, 0.0,
	0.0
};

// 8018E0DC
CameraDesc dMvOpeningPikachuCameraSettingsEnd = {

	50.0, -1640.0, 1000.0,
	50.0, -1640.0, 0.0,
	0.0
};

// 8018E0F8
ftKeyCommand dMvOpeningPikachuInputSeq[] =
{
	FTKEY_EVENT_END() // 0000
};

// 8018E0FC
rdFileID D_ovl42_8018E0FC[2] = {

	0x25, 0x41
};


// BSS
// 8018E220
s32 D_ovl42_8018E220[2];

// 8018E228
s32 gMvOpeningPikachuFramesElapsed;

// 8018E22C
GObj* gMvOpeningPikachuNameGObj;

// 8018E230
GObj* gMvOpeningPikachuStageFighterGObj;

// 8018E234
s32 D_ovl42_8018E234;

// 8018E238
GObj* gMvOpeningPikachuStageCameraGObj;

// 8018E23C
void* gMvOpeningPikachuAnimHeap;

// 8018E240
f32 gMvOpeningPikachuPosedFighterYSpeed;

// 8018E244
s32 D_ovl42_8018E244;

// 8018E248
CameraDesc dMvOpeningPikachuCameraSettingsAdjustedStart;

// 8018E268
CameraDesc dMvOpeningPikachuCameraSettingsAdjustedEnd;

// 8018E288
rdFileNode D_ovl42_8018E288[48];

// 8018E408
rdFileNode D_ovl42_8018E408[7];

// 8018E440
uintptr_t gMvOpeningPikachuFilesArray[2];

// 8018E448
scBattleState gMvOpeningPikachuBattleState;


// 8018D0C0
void mvOpeningPikachuLoadFiles()
{
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = D_ovl42_8018E288;
	rldmSetup.status_buf_size = ARRAY_COUNT(D_ovl42_8018E288);
	rldmSetup.force_buf = D_ovl42_8018E408;
	rldmSetup.force_buf_size = ARRAY_COUNT(D_ovl42_8018E408);
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl42_8018E0FC, ARRAY_COUNT(D_ovl42_8018E0FC), gMvOpeningPikachuFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl42_8018E0FC, ARRAY_COUNT(D_ovl42_8018E0FC)), 0x10));
}

// 8018D160
void mvOpeningPikachuSetNameColor(SObj* name_sobj)
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
void mvOpeningPikachuDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[8] = {

		0x4890, 0x26B8, 0x2F98, 0x05E0,
		0x0D80, 0x2408, 0x60D8, 0x0000
	};
	f32 x_positions[7] = {

		0.0, 30.0, 45.0, 75.0, 110.0, 140.0, 170.0
	};
	s32 i;

	gMvOpeningPikachuNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningPikachuFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 65.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningPikachuSetNameColor(name_sobj);
	}
}

// 8018D334
void mvOpeningPikachuAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningPikachuFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.x - dMvOpeningPikachuCameraSettingsAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.y - dMvOpeningPikachuCameraSettingsAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.z - dMvOpeningPikachuCameraSettingsAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.at.x - dMvOpeningPikachuCameraSettingsAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.at.y - dMvOpeningPikachuCameraSettingsAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.at.z - dMvOpeningPikachuCameraSettingsAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningPikachuCameraSettingsAdjustedEnd.upx - dMvOpeningPikachuCameraSettingsAdjustedStart.upx) / 45.0F));
	}
}

// 8018D42C
void mvOpeningPikachuCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningPikachuCameraSettingsAdjustedStart = dMvOpeningPikachuCameraSettingsStart;
	dMvOpeningPikachuCameraSettingsAdjustedEnd = dMvOpeningPikachuCameraSettingsEnd;

	gMvOpeningPikachuStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningPikachuStageCameraGObj);
	func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	func_8000B39C(gMvOpeningPikachuStageCameraGObj);
	gcAddGObjProcess(gMvOpeningPikachuStageCameraGObj, mvOpeningPikachuAnimateStageCamera, 1, 1);

	dMvOpeningPikachuCameraSettingsAdjustedStart.eye.x += arg0.x;
	dMvOpeningPikachuCameraSettingsAdjustedStart.eye.y += arg0.y;
	dMvOpeningPikachuCameraSettingsAdjustedStart.eye.z += arg0.z;
	dMvOpeningPikachuCameraSettingsAdjustedStart.at.x += arg0.x;
	dMvOpeningPikachuCameraSettingsAdjustedStart.at.y += arg0.y;
	dMvOpeningPikachuCameraSettingsAdjustedStart.at.z += arg0.z;

	dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.x += arg0.x;
	dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.y += arg0.y;
	dMvOpeningPikachuCameraSettingsAdjustedEnd.eye.z += arg0.z;
	dMvOpeningPikachuCameraSettingsAdjustedEnd.at.x += arg0.x;
	dMvOpeningPikachuCameraSettingsAdjustedEnd.at.y += arg0.y;
	dMvOpeningPikachuCameraSettingsAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningPikachuCameraSettingsAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningPikachuCameraSettingsAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningPikachuCameraSettingsAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningPikachuCameraSettingsAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningPikachuCameraSettingsAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningPikachuCameraSettingsAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningPikachuCameraSettingsAdjustedStart.upx;
}

// 8018D634
void mvOpeningPikachuInitFighterStagePanel()
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
	mvOpeningPikachuCreateStageViewport(spawn_position);
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
		spawn_info.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

		gMvOpeningPikachuStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningPikachuInputSeq);
	}
}

// 8018D864
void mvOpeningPikachuRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 110, 170, 110, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 110, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D964
void mvOpeningPikachuCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningPikachuRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D9B0
void mvOpeningPikachuAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningPikachuFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningPikachuPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningPikachuPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningPikachuPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningPikachuFramesElapsed > 15) && (gMvOpeningPikachuFramesElapsed < 45))
	{
		gMvOpeningPikachuPosedFighterYSpeed += -1.0F / 15.0F;
	}
	if ((gMvOpeningPikachuFramesElapsed > 45) && (gMvOpeningPikachuFramesElapsed < 60))
	{
		gMvOpeningPikachuPosedFighterYSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y += gMvOpeningPikachuPosedFighterYSpeed;
}

// 8018DA80
void mvOpeningPikachuCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindPikachu;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindPikachu, 0);
	spawn_info.anim_heap = gMvOpeningPikachuAnimHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = -600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningPikachuAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB80
void mvOpeningPikachuCreateNameViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DC20
void mvOpeningPikachuCreatePosedFighterViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningPikachuFilesArray[1], &FILE_041_PIKACHU_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DD10
void mvOpeningPikachuCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->flags = 5;
}

// 8018DDC0
void mvOpeningPikachuMainProc(GObj* arg0)
{
	gMvOpeningPikachuFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		leoInitUnit_atten();
	}

	if (gMvOpeningPikachuFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningPikachuNameGObj);
		mvOpeningPikachuInitFighterStagePanel();
		mvOpeningPikachuCreatePosedFighterBackground();
		mvOpeningPikachuCreatePosedFighter();
	}

	if (gMvOpeningPikachuFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x26;
		leoInitUnit_atten();
	}
}

// 8018DE7C
void mvOpeningPikachuInitFramesElapsed()
{
	gMvOpeningPikachuFramesElapsed = 0;
}

// 8018DE88
void mvOpeningPikachuInit()
{
	gMvOpeningPikachuBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningPikachuBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindYamabuki;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindPikachu;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningPikachuLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningPikachuMainProc, 0xD, 0x80000000);
	func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningPikachuInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindPikachu);

	gMvOpeningPikachuAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	mvOpeningPikachuCreateNameViewport();
	mvOpeningPikachuCreatePosedFighterBackgroundViewport();
	mvOpeningPikachuCreatePosedFighterViewport();
	mvOpeningPikachuDrawName();

	while (func_8000092C() < 2145U);
}

// 8018E010
void gMvOpeningPikachuSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E140
syDisplaySetup D_ovl42_8018E140 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 8018E15C
scRuntimeInfo D_ovl42_8018E15C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay42ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	gMvOpeningPikachuSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningPikachuInit
};

// 8018E05C
void intro_focus_pikachu_entry()
{
	D_ovl42_8018E140.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl42_8018E140);
	D_ovl42_8018E15C.arena_size = (u32) ((uintptr_t)&lOverlay42ArenaHi - (uintptr_t)&lOverlay42ArenaLo);
	gsGTLSceneInit(&D_ovl42_8018E15C);
}
