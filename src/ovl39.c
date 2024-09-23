#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/system_00.h>

// Externs
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay39ArenaLo;  // 8018E610
extern intptr_t lOverlay39ArenaHi;  // 803903E0
// Offsets
extern intptr_t FILE_041_FOX_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Fox's fighter pose camera settings

extern void func_80007080(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);


// Data
// 8018E090
CameraDesc dMvOpeningFoxCameraSettingsStart = {

	-400.0, 320.0, 100.0,
	0.0, 320.0, 0.0,
	0.0
};

// 8018E0AC
CameraDesc dMvOpeningFoxCameraSettingsEnd = {

	-3000.0, 300.0, 250.0,
	0.0, 300.0, -200.0,
	0.7
};

// 8018E0C8
ftKeyCommand dMvOpeningFoxInputSeq[] =
{
	FTKEY_EVENT_STICK(206, 0, 1),     // 2001, CE00
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),  // 1001, 4000
	FTKEY_EVENT_BUTTON(0, 12),        // 100C, 0000
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),  // 1001, 4000
	FTKEY_EVENT_BUTTON(0, 12),        // 100C, 0000
	FTKEY_EVENT_END()                 // 0000
};

// 8018E0E0
u32 D_ovl39_8018E0E0[2] = {

	0x25, 0x41
};


// BSS
// 8018E1F0
s32 D_ovl39_8018E1F0[2];

// 8018E1F8
s32 gMvOpeningFoxFramesElapsed;

// 8018E1FC
GObj* gMvOpeningFoxNameGObj;

// 8018E200
GObj* gMvOpeningFoxStageFighterGObj;

// 8018E204
s32 D_ovl39_8018E204;

// 8018E208
GObj* gMvOpeningFoxStageCameraGObj;

// 8018E20C
void* gMvOpeningFoxAnimHeap;

// 8018E210
f32 gMvOpeningFoxPosedFighterYSpeed;

// 8018E218
CameraDesc dMvOpeningFoxCameraSettingsAdjustedStart;

// 8018E238
CameraDesc dMvOpeningFoxCameraSettingsAdjustedEnd;

// 8018E258
lbFileNode D_ovl39_8018E258[48];

// 8018E3D8
lbFileNode D_ovl39_8018E3D8[7];

// 8018E410
uintptr_t gMvOpeningFoxFilesArray[2];

// 8018E418
scBattleState gMvOpeningFoxBattleState;


// 8018D0C0
void mvOpeningFoxLoadFiles()
{
	lbRelocSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (lbFileNode*) &D_ovl39_8018E258;
	rldmSetup.status_buf_size = 0x30;
	rldmSetup.force_buf = (lbFileNode*) &D_ovl39_8018E3D8;
	rldmSetup.force_buf_size = 7;
	lbRelocInitSetup(&rldmSetup);
	lbRelocGetLoadFilesNum(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0), gMvOpeningFoxFilesArray, gsMemoryAlloc(lbRelocGetAllocSize(D_ovl39_8018E0E0, ARRAY_COUNT(D_ovl39_8018E0E0)), 0x10));
}

// 8018D160
void mvOpeningFoxSetNameColor(SObj* name_sobj)
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

	gMvOpeningFoxNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningFoxFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = positions[i].x + 110.0F;
		name_sobj->pos.y = positions[i].y + 100.0F;

		mvOpeningFoxSetNameColor(name_sobj);
	}
}

// 8018D314
void mvOpeningFoxAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningFoxFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.x - dMvOpeningFoxCameraSettingsAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.y - dMvOpeningFoxCameraSettingsAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningFoxCameraSettingsAdjustedEnd.eye.z - dMvOpeningFoxCameraSettingsAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.x - dMvOpeningFoxCameraSettingsAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.y - dMvOpeningFoxCameraSettingsAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningFoxCameraSettingsAdjustedEnd.at.z - dMvOpeningFoxCameraSettingsAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningFoxCameraSettingsAdjustedEnd.upx - dMvOpeningFoxCameraSettingsAdjustedStart.upx) / 45.0F));
	}
}

// 8018D40C
void mvOpeningFoxCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningFoxCameraSettingsAdjustedStart = dMvOpeningFoxCameraSettingsStart;
	dMvOpeningFoxCameraSettingsAdjustedEnd = dMvOpeningFoxCameraSettingsEnd;

	gMvOpeningFoxStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningFoxStageCameraGObj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMvOpeningFoxStageCameraGObj);
	gcAddGObjProcess(gMvOpeningFoxStageCameraGObj, mvOpeningFoxAnimateStageCamera, 1, 1);

	dMvOpeningFoxCameraSettingsAdjustedStart.eye.x += arg0.x;
	dMvOpeningFoxCameraSettingsAdjustedStart.eye.y += arg0.y;
	dMvOpeningFoxCameraSettingsAdjustedStart.eye.z += arg0.z;
	dMvOpeningFoxCameraSettingsAdjustedStart.at.x += arg0.x;
	dMvOpeningFoxCameraSettingsAdjustedStart.at.y += arg0.y;
	dMvOpeningFoxCameraSettingsAdjustedStart.at.z += arg0.z;

	dMvOpeningFoxCameraSettingsAdjustedEnd.eye.x += arg0.x;
	dMvOpeningFoxCameraSettingsAdjustedEnd.eye.y += arg0.y;
	dMvOpeningFoxCameraSettingsAdjustedEnd.eye.z += arg0.z;
	dMvOpeningFoxCameraSettingsAdjustedEnd.at.x += arg0.x;
	dMvOpeningFoxCameraSettingsAdjustedEnd.at.y += arg0.y;
	dMvOpeningFoxCameraSettingsAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningFoxCameraSettingsAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningFoxCameraSettingsAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningFoxCameraSettingsAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningFoxCameraSettingsAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningFoxCameraSettingsAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningFoxCameraSettingsAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningFoxCameraSettingsAdjustedStart.upx;
}

// 8018D61C
void mvOpeningFoxInitFighterStagePanel()
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
		spawn_info.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

		gMvOpeningFoxStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningFoxInputSeq);
	}
}

// 8018D84C
void mvOpeningFoxRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 60, 40, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 210, 10, 310, 230);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D94C
void mvOpeningFoxCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), &mvOpeningFoxRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D998
void mvOpeningFoxAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningFoxFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningFoxPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningFoxPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningFoxPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningFoxFramesElapsed > 15) && (gMvOpeningFoxFramesElapsed < 45))
		gMvOpeningFoxPosedFighterYSpeed += -1.0F / 15.0F;

	if ((gMvOpeningFoxFramesElapsed > 45) && (gMvOpeningFoxFramesElapsed < 60))
		gMvOpeningFoxPosedFighterYSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningFoxPosedFighterYSpeed;
}

// 8018DA68
void mvOpeningFoxCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindFox;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindFox, 0);
	spawn_info.figatree_heap = gMvOpeningFoxAnimHeap;
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

// 8018DB68
void mvOpeningFoxCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DC08
void mvOpeningFoxCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningFoxFilesArray[1], &FILE_041_FOX_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DCF0
void mvOpeningFoxCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->flags = 5;
}

// 8018DD98
void mvOpeningFoxMainProc(GObj* arg0)
{
	gMvOpeningFoxFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		leoInitUnit_atten();
	}

	if (gMvOpeningFoxFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningFoxNameGObj);
		mvOpeningFoxInitFighterStagePanel();
		mvOpeningFoxCreatePosedFighterBackground();
		mvOpeningFoxCreatePosedFighter();
	}

	if (gMvOpeningFoxFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x24;
		leoInitUnit_atten();
	}
}

// 8018DE54
void mvOpeningFoxInitFramesElapsed()
{
	gMvOpeningFoxFramesElapsed = 0;
}

// 8018DE60
void mvOpeningFoxInit()
{
	gMvOpeningFoxBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningFoxBattleState;

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

	gMvOpeningFoxAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	mvOpeningFoxCreateNameViewport();
	mvOpeningFoxCreatePosedFighterBackgroundViewport();
	mvOpeningFoxCreatePosedFighterViewport();
	mvOpeningFoxDrawName();

	while (func_8000092C() < 2055U);
}

// 8018DFE0
void mvOpeningFoxSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E110
syDisplaySetup D_ovl39_8018E110 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 8018E12C
scRuntimeInfo D_ovl39_8018E12C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay39ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningFoxSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningFoxInit
};

// 8018E02C
void intro_focus_fox_entry()
{
	D_ovl39_8018E110.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl39_8018E110);
	D_ovl39_8018E12C.arena_size = (u32) ((uintptr_t)&lOverlay39ArenaHi - (uintptr_t)&lOverlay39ArenaLo);
	gsGTLSceneInit(&D_ovl39_8018E12C);
}
