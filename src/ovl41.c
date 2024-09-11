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
extern intptr_t lOverlay41ArenaLo;  // 8018E640
extern intptr_t lOverlay41ArenaHi;  // 803903E0
extern intptr_t FILE_041_YOSHI_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Yoshi's fighter pose camera settings

extern void lbCommonDrawSObjAttr();
extern void lbCommonScissorSpriteCamera();
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);
extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);


// Data
// 8018E0C0
CameraDesc dMvOpeningYoshiCameraSettingsStart = {

	1200.0, 150.0, 1000.0,
	100.0, 200.0, 0.0,
	0.0
};

// 8018E0DC
CameraDesc dMvOpeningYoshiCameraSettingsEnd = {

	2000.0, 100.0, 600.0,
	1300.0, 100.0, -100.0,
	0.0
};

// 8018E0F8
ftKeyCommand dMvOpeningYoshiInputSeq[] =
{
	FTKEY_EVENT_STICK(I_CONTROLLER_RANGE_MAX, 0, 20),   // 2014, 5000
	FTKEY_EVENT_BUTTON(Z_TRIG, 1),                      // 1001, 2000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 1001, 8000
	FTKEY_EVENT_END()                                   // 0000
};

// 8018E108
rdFileID D_ovl41_8018E108[2] = {

	0x25, 0x41
};


// BSS
// 8018E220
s32 D_ovl41_8018E220[2];

// 8018E228
s32 gMvOpeningYoshiFramesElapsed;

// 8018E22C
GObj* gMvOpeningYoshiNameGObj;

// 8018E230
GObj* gMvOpeningYoshiStageFighterGObj;

// 8018E234
s32 D_ovl41_8018E234;

// 8018E238
GObj* gMvOpeningYoshiStageCameraGObj;

// 8018E23C
void* gMvOpeningYoshiAnimHeap;

// 8018E240
f32 gMvOpeningYoshiPosedFighterXSpeed;

// 8018E244
s32 D_ovl41_8018E244;

// 8018E248
CameraDesc dMvOpeningYoshiCameraSettingsAdjustedStart;

// 8018E268
CameraDesc dMvOpeningYoshiCameraSettingsAdjustedEnd;

// 8018E288
rdFileNode D_ovl41_8018E288[48];

// 8018E408
rdFileNode D_ovl41_8018E408[7];

// 8018E440
uintptr_t gMvOpeningYoshiFilesArray[2];

// 8018E448
scBattleState gMvOpeningYoshiBattleState;


// 8018D0C0
void mvOpeningYoshiLoadFiles()
{
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = D_ovl41_8018E288;
	rldmSetup.status_buf_size = ARRAY_COUNT(D_ovl41_8018E288);
	rldmSetup.force_buf = D_ovl41_8018E408;
	rldmSetup.force_buf_size = ARRAY_COUNT(D_ovl41_8018E408);
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl41_8018E108, ARRAY_COUNT(D_ovl41_8018E108), gMvOpeningYoshiFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl41_8018E108, ARRAY_COUNT(D_ovl41_8018E108)), 0x10));
}

// 8018D160
void mvOpeningYoshiSetNameColor(SObj* name_sobj)
{
	name_sobj->sprite.attr &= ~SP_FASTCOPY;
	name_sobj->sprite.attr |= SP_TRANSPARENT;
	name_sobj->env_color.r = 0xFF;
	name_sobj->env_color.g = 0xFF;
	name_sobj->env_color.b = 0xFF;
	name_sobj->sprite.red = 0xFF;
	name_sobj->sprite.green = 0xFF;
	name_sobj->sprite.blue = 0xFF;
}

// 8018D194
void mvOpeningYoshiDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[6] = {

		0x7608, 0x44B0, 0x57F0,
		0x2408, 0x26B8, 0x0000
	};
	f32 x_positions[5] = {

		0.0, 30.0, 65.0, 95.0, 128.0
	};
	s32 i;

	gMvOpeningYoshiNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningYoshiFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 80.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningYoshiSetNameColor(name_sobj);
	}
}

// 8018D314
void mvOpeningYoshiAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningYoshiFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.x - dMvOpeningYoshiCameraSettingsAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.y - dMvOpeningYoshiCameraSettingsAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.z - dMvOpeningYoshiCameraSettingsAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.at.x - dMvOpeningYoshiCameraSettingsAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.at.y - dMvOpeningYoshiCameraSettingsAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.at.z - dMvOpeningYoshiCameraSettingsAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningYoshiCameraSettingsAdjustedEnd.upx - dMvOpeningYoshiCameraSettingsAdjustedStart.upx) / 45.0F));
	}
}

// 8018D40C
void mvOpeningYoshiCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningYoshiCameraSettingsAdjustedStart = dMvOpeningYoshiCameraSettingsStart;
	dMvOpeningYoshiCameraSettingsAdjustedEnd = dMvOpeningYoshiCameraSettingsEnd;

	gMvOpeningYoshiStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningYoshiStageCameraGObj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 150.0F);
	cam->projection.persp.aspect = 15.0F / 7.0F;
	gcEndAllObjectProcesses(gMvOpeningYoshiStageCameraGObj);
	gcAddGObjProcess(gMvOpeningYoshiStageCameraGObj, mvOpeningYoshiAnimateStageCamera, 1, 1);

	dMvOpeningYoshiCameraSettingsAdjustedStart.eye.x += arg0.x;
	dMvOpeningYoshiCameraSettingsAdjustedStart.eye.y += arg0.y;
	dMvOpeningYoshiCameraSettingsAdjustedStart.eye.z += arg0.z;
	dMvOpeningYoshiCameraSettingsAdjustedStart.at.x += arg0.x;
	dMvOpeningYoshiCameraSettingsAdjustedStart.at.y += arg0.y;
	dMvOpeningYoshiCameraSettingsAdjustedStart.at.z += arg0.z;

	dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.x += arg0.x;
	dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.y += arg0.y;
	dMvOpeningYoshiCameraSettingsAdjustedEnd.eye.z += arg0.z;
	dMvOpeningYoshiCameraSettingsAdjustedEnd.at.x += arg0.x;
	dMvOpeningYoshiCameraSettingsAdjustedEnd.at.y += arg0.y;
	dMvOpeningYoshiCameraSettingsAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningYoshiCameraSettingsAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningYoshiCameraSettingsAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningYoshiCameraSettingsAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningYoshiCameraSettingsAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningYoshiCameraSettingsAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningYoshiCameraSettingsAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningYoshiCameraSettingsAdjustedStart.upx;
}

// 8018D61C
void mvOpeningYoshiInitFighterStagePanel()
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
	spawn_position.x += -1000.0F;
	spawn_position.y += 70.0F;
	mvOpeningYoshiCreateStageViewport(spawn_position);
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

		gMvOpeningYoshiStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningYoshiInputSeq);
	}
}

// 8018D874
void mvOpeningYoshiRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 255, 190, 90, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 150, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D974
void mvOpeningYoshiCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningYoshiRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D9C0
void mvOpeningYoshiAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningYoshiFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningYoshiPosedFighterXSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningYoshiPosedFighterXSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningYoshiPosedFighterXSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningYoshiFramesElapsed > 15) && (gMvOpeningYoshiFramesElapsed < 45))
	{
		gMvOpeningYoshiPosedFighterXSpeed += -1.0F / 15.0F;
	}
	if ((gMvOpeningYoshiFramesElapsed > 45) && (gMvOpeningYoshiFramesElapsed < 60))
	{
		gMvOpeningYoshiPosedFighterXSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.x += gMvOpeningYoshiPosedFighterXSpeed;
}

// 8018DA90
void mvOpeningYoshiCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindYoshi;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindYoshi, 0);
	spawn_info.anim_heap = gMvOpeningYoshiAnimHeap;
	spawn_info.pos.x = -600.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningYoshiAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB90
void mvOpeningYoshiCreateNameViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DC30
void mvOpeningYoshiCreatePosedFighterViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 150.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 3.75F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningYoshiFilesArray[1], &FILE_041_YOSHI_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DD18
void mvOpeningYoshiCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 150.0F, 310.0F, 230.0F);
	cam->flags = 5;
}

// 8018DDC0
void mvOpeningYoshiMainProc(GObj* arg0)
{
	gMvOpeningYoshiFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		leoInitUnit_atten();
	}

	if (gMvOpeningYoshiFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningYoshiNameGObj);
		mvOpeningYoshiInitFighterStagePanel();
		mvOpeningYoshiCreatePosedFighterBackground();
		mvOpeningYoshiCreatePosedFighter();
	}

	if (gMvOpeningYoshiFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x25;
		leoInitUnit_atten();
	}
}

// 8018DE7C
void mvOpeningYoshiInitFramesElapsed()
{
	gMvOpeningYoshiFramesElapsed = 0;
}

// 8018DE88
void mvOpeningYoshiInit()
{
	gMvOpeningYoshiBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningYoshiBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindYoster;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindYoshi;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningYoshiLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningYoshiMainProc, 0xD, 0x80000000);
	func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningYoshiInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindYoshi);

	gMvOpeningYoshiAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	mvOpeningYoshiCreateNameViewport();
	mvOpeningYoshiCreatePosedFighterBackgroundViewport();
	mvOpeningYoshiCreatePosedFighterViewport();
	mvOpeningYoshiDrawName();

	while (func_8000092C() < 1875U);
}

// 8018E010
void gMvOpeningYoshiSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E13C
syDisplaySetup D_ovl41_8018E13C = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 8018E158
scRuntimeInfo D_ovl41_8018E158 = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay41ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	gMvOpeningYoshiSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningYoshiInit
};

// 8018E05C
void intro_focus_yoshi_entry()
{
	D_ovl41_8018E13C.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl41_8018E13C);
	D_ovl41_8018E158.arena_size = (u32) ((uintptr_t)&lOverlay41ArenaHi - (uintptr_t)&lOverlay41ArenaLo);
	gsGTLSceneInit(&D_ovl41_8018E158);
}
