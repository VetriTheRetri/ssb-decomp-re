#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/system_00.h>


// Externs
extern GObj* D_ovl2_801313E4;
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay38ArenaLo;  // 0x8018E690
extern intptr_t lOverlay38ArenaHi;  // 0x803903E0
extern intptr_t FILE_041_SAMUS_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Samus's fighter pose camera settings

extern void func_80007080(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);


// Data
// 0x8018E120
CameraDesc dMvOpeningSamusCameraSettingsStart = {

	400.0, 1100.0, 0.0,
	0.0, 200.0, 0.0,
	0.6
};

// 0x8018E13C
CameraDesc dMvOpeningSamusCameraSettingsEnd = {

	1600.0, 230.0, 200.0,
	0.0, 200.0, 0.0,
	0.6
};

// 0x8018E158
ftKeyCommand dMvOpeningSamusInputSeq[] =
{
	FTKEY_EVENT_BUTTON(Z_TRIG, 1),   // 1001, 0x2000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1), // 1001, 0x8000
	FTKEY_EVENT_END()                // 0000
};

// 0x8018E164
u32 D_ovl38_8018E164[2] = {

	0x25, 0x41
};


// BSS
// 0x8018E270
s32 D_ovl38_8018E270[2];

// 0x8018E278
s32 gMvOpeningSamusFramesElapsed;

// 0x8018E27C
GObj* gMvOpeningSamusNameGObj;

// 0x8018E280
GObj* gMvOpeningSamusStageFighterGObj;

// 0x8018E284
s32 D_ovl38_8018E284;

// 0x8018E288
GObj* gMvOpeningSamusStageCameraGObj;

// 0x8018E28C
void* gMvOpeningSamusAnimHeap;

// 0x8018E290
f32 gMvOpeningSamusPosedFighterYSpeed;

// 0x8018E294
s32 D_ovl38_8018E294;

// 0x8018E298
CameraDesc dMvOpeningSamusCameraSettingsAdjustedStart;

// 0x8018E2B8
CameraDesc dMvOpeningSamusCameraSettingsAdjustedEnd;

// 0x8018E2D8
lbFileNode D_ovl38_8018E2D8[48];

// 0x8018E458
lbFileNode D_ovl38_8018E458[7];

// 0x8018E490
uintptr_t gMvOpeningSamusFiles[2];

// 0x8018E498
scBattleState gMvOpeningSamusBattleState;


// 0x8018D0C0
void mvOpeningSamusLoadFiles()
{
	lbRelocSetup rldmSetup;

	rldmSetup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rldmSetup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buffer = (lbFileNode*) &D_ovl38_8018E2D8;
	rldmSetup.status_buffer_size = 0x30;
	rldmSetup.force_status_buffer = (lbFileNode*) &D_ovl38_8018E458;
	rldmSetup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl38_8018E164, ARRAY_COUNT(D_ovl38_8018E164), gMvOpeningSamusFiles, syTasklogMalloc(lbRelocGetAllocSize(D_ovl38_8018E164, ARRAY_COUNT(D_ovl38_8018E164)), 0x10));
}

// 0x8018D160
void mvOpeningSamusSetNameColor(SObj* name_sobj)
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
void mvOpeningSamusDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[6] = {

		0x57F0, 0x05E0, 0x3980,
		0x60D8, 0x57F0, 0x0000
	};
	f32 positions[5] = {

		0.0, 30.0, 70.0, 110.0, 140.0
	};
	s32 i;

	gMvOpeningSamusNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningSamusFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = positions[i] + 80.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningSamusSetNameColor(name_sobj);
	}
}

// 0x8018D314
void mvOpeningSamusAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningSamusFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningSamusCameraSettingsAdjustedEnd.eye.x - dMvOpeningSamusCameraSettingsAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningSamusCameraSettingsAdjustedEnd.eye.y - dMvOpeningSamusCameraSettingsAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningSamusCameraSettingsAdjustedEnd.eye.z - dMvOpeningSamusCameraSettingsAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningSamusCameraSettingsAdjustedEnd.at.x - dMvOpeningSamusCameraSettingsAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningSamusCameraSettingsAdjustedEnd.at.y - dMvOpeningSamusCameraSettingsAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningSamusCameraSettingsAdjustedEnd.at.z - dMvOpeningSamusCameraSettingsAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningSamusCameraSettingsAdjustedEnd.upx - dMvOpeningSamusCameraSettingsAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D40C
void mvOpeningSamusCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningSamusCameraSettingsAdjustedStart = dMvOpeningSamusCameraSettingsStart;
	dMvOpeningSamusCameraSettingsAdjustedEnd = dMvOpeningSamusCameraSettingsEnd;

	gMvOpeningSamusStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningSamusStageCameraGObj);
	func_80007080(&cam->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMvOpeningSamusStageCameraGObj);
	gcAddGObjProcess(gMvOpeningSamusStageCameraGObj, mvOpeningSamusAnimateStageCamera, 1, 1);

	dMvOpeningSamusCameraSettingsAdjustedStart.eye.x += arg0.x;
	dMvOpeningSamusCameraSettingsAdjustedStart.eye.y += arg0.y;
	dMvOpeningSamusCameraSettingsAdjustedStart.eye.z += arg0.z;
	dMvOpeningSamusCameraSettingsAdjustedStart.at.x += arg0.x;
	dMvOpeningSamusCameraSettingsAdjustedStart.at.y += arg0.y;
	dMvOpeningSamusCameraSettingsAdjustedStart.at.z += arg0.z;

	dMvOpeningSamusCameraSettingsAdjustedEnd.eye.x += arg0.x;
	dMvOpeningSamusCameraSettingsAdjustedEnd.eye.y += arg0.y;
	dMvOpeningSamusCameraSettingsAdjustedEnd.eye.z += arg0.z;
	dMvOpeningSamusCameraSettingsAdjustedEnd.at.x += arg0.x;
	dMvOpeningSamusCameraSettingsAdjustedEnd.at.y += arg0.y;
	dMvOpeningSamusCameraSettingsAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningSamusCameraSettingsAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningSamusCameraSettingsAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningSamusCameraSettingsAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningSamusCameraSettingsAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningSamusCameraSettingsAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningSamusCameraSettingsAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningSamusCameraSettingsAdjustedStart.upx;
}

// 0x8018D614
void mvOpeningSamusInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i, j;
	s32 foo;
	s32 bar;
	s32 pos_ids;
	Vec3f spawn_position;
	DObj* stage_dobj;
	DObj* next_dobj;
	s32 baz;
	s32 biz;

	grWallpaperMakeGroundWallpaper();
	grCommonSetupInitAll();

	next_dobj = stage_dobj = DObjGetStruct(D_ovl2_801313E4);

	// This fixes the spot light things on Zebes
	while (next_dobj != NULL)
	{
		for (j = 0; j < next_dobj->ommtx_len; j++)
		{
			if (next_dobj->ommtx[j]->kind == 0x30)
				next_dobj->ommtx[j]->kind = 0x25;
		}

		next_dobj = lbCommonGetTreeDObjNextFromRoot(next_dobj, stage_dobj);
	}

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
	mvOpeningSamusCreateStageViewport(spawn_position);
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

		gMvOpeningSamusStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningSamusInputSeq);
	}
}

// 0x8018D8B0
void mvOpeningSamusRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTasklogDLHeads[0]++);
	gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0, 0, 80, 255);
	gDPSetCombineLERP(gSYTasklogDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTasklogDLHeads[0]++, 10, 10, 110, 230);
	gDPPipeSync(gSYTasklogDLHeads[0]++);
	gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D9AC
void mvOpeningSamusCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningSamusRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9F8
void mvOpeningSamusAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningSamusFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningSamusPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningSamusPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningSamusPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningSamusFramesElapsed > 15) && (gMvOpeningSamusFramesElapsed < 45))
		gMvOpeningSamusPosedFighterYSpeed += -1.0F / 15.0F;

	if ((gMvOpeningSamusFramesElapsed > 45) && (gMvOpeningSamusFramesElapsed < 60))
		gMvOpeningSamusPosedFighterYSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningSamusPosedFighterYSpeed;
}

// 0x8018DAC8
void mvOpeningSamusCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindSamus;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindSamus, 0);
	spawn_info.figatree_heap = gMvOpeningSamusAnimHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningSamusAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DBC8
void mvOpeningSamusCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC68
void mvOpeningSamusCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningSamusFiles[1], &FILE_041_SAMUS_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DD58
void mvOpeningSamusCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cam->flags = 5;
}

// 0x8018DE08
void mvOpeningSamusMainProc(GObj* arg0)
{

	gMvOpeningSamusFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTasklogSetLoadScene();
	}

	if (gMvOpeningSamusFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningSamusNameGObj);
		mvOpeningSamusInitFighterStagePanel();
		mvOpeningSamusCreatePosedFighterBackground();
		mvOpeningSamusCreatePosedFighter();
	}

	if (gMvOpeningSamusFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x23;
		syTasklogSetLoadScene();
	}
}

// 0x8018DEC4
void mvOpeningSamusInitFramesElapsed()
{
	gMvOpeningSamusFramesElapsed = 0;
}

// 0x8018DED0
void mvOpeningSamusInit()
{
	gMvOpeningSamusBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningSamusBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindZebes;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindSamus;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningSamusLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningSamusMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningSamusInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);
	ftManagerSetupFilesAllKind(nFTKindSamus);

	gMvOpeningSamusAnimHeap = syTasklogMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningSamusCreateNameViewport();
	mvOpeningSamusCreatePosedFighterBackgroundViewport();
	mvOpeningSamusCreatePosedFighterViewport();
	mvOpeningSamusDrawName();

	while (func_8000092C() < 1785U);
}

// 0x8018E07C
void mvOpeningSamusFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E198
syDisplaySetup D_ovl38_8018E198 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 0x8018E1B4
scRuntimeInfo D_ovl38_8018E1B4 = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay38ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningSamusFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningSamusInit
};

// 0x8018E0C8
void intro_focus_samus_entry()
{
	D_ovl38_8018E198.zbuffer = syDisplayGetZBuffer(6400);
	syDisplayInit(&D_ovl38_8018E198);
	D_ovl38_8018E1B4.arena_size = (u32) ((uintptr_t)&lOverlay38ArenaHi - (uintptr_t)&lOverlay38ArenaLo);
	syTasklogInit(&D_ovl38_8018E1B4);
}
