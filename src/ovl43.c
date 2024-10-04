#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/system_00.h>


// Externs
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay43ArenaLo;  // 8018E640
extern intptr_t lOverlay43ArenaHi;  // 803903E0
extern intptr_t FILE_041_KIRBY_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Kirby's fighter pose camera settings

extern void func_80007080(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);


// Data
// 8018E0B0
CameraDesc dMvOpeningKirbyCameraSettingsStart = {

	0.0, 400.0, 2000.0,
	0.0, 400.0, 0.0,
	0.0
};

// 8018E0CC
CameraDesc dMvOpeningKirbyCameraSettingsEnd = {

	1100.0, 400.0, 1800.0,
	1100.0, 400.0, 0.0,
	0.0
};

// 8018E0E8
ftKeyCommand dMvOpeningKirbyInputSeq[] =
{
	FTKEY_EVENT_STICK(45, I_CONTROLLER_RANGE_MAX, 1),   // 2001, 2D50
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 1001, 8000
	FTKEY_EVENT_END()                                   // 0000
};

// 8018E0F4
u32 D_ovl43_8018E0F4[2] = {

	0x25, 0x41
};


// BSS
// 8018E220
s32 D_ovl43_8018E220[2];

// 8018E228
s32 gMvOpeningKirbyFramesElapsed;

// 8018E22C
GObj* gMvOpeningKirbyNameGObj;

// 8018E230
GObj* gMvOpeningKirbyStageFighterGObj;

// 8018E234
s32 D_ovl43_8018E234;

// 8018E238
GObj* gMvOpeningKirbyStageCameraGObj;

// 8018E23C
void* gMvOpeningKirbyAnimHeap;

// 8018E240
f32 gMvOpeningKirbyPosedFighterYSpeed;

// 8018E244
s32 D_ovl43_8018E244;

// 8018E248
CameraDesc dMvOpeningKirbyCameraSettingsAdjustedStart;

// 8018E268
CameraDesc dMvOpeningKirbyCameraSettingsAdjustedEnd;

// 8018E288
lbFileNode D_ovl43_8018E288[48];

// 8018E408
lbFileNode D_ovl43_8018E408[7];

// 8018E440
uintptr_t gMvOpeningKirbyFilesArray[2];

// 8018E448
scBattleState gMvOpeningKirbyBattleState;


// 8018D0C0
void mvOpeningKirbyLoadFiles()
{
	lbRelocSetup rldmSetup;

	rldmSetup.table_addr = &lLBRelocTableAddr;
	rldmSetup.table_files_num = &lLBRelocTableFilesNum;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buffer = D_ovl43_8018E288;
	rldmSetup.status_buffer_size = ARRAY_COUNT(D_ovl43_8018E288);
	rldmSetup.force_status_buffer = D_ovl43_8018E408;
	rldmSetup.force_status_buffer_size = ARRAY_COUNT(D_ovl43_8018E408);
	lbRelocInitSetup(&rldmSetup);
	lbRelocLoadFilesExtern(D_ovl43_8018E0F4, ARRAY_COUNT(D_ovl43_8018E0F4), gMvOpeningKirbyFilesArray, syTasklogMalloc(lbRelocGetAllocSize(D_ovl43_8018E0F4, ARRAY_COUNT(D_ovl43_8018E0F4)), 0x10));
}

// 8018D160
void mvOpeningKirbySetNameColor(SObj* name_sobj)
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
void mvOpeningKirbyDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[6] = {

		0x2F98, 0x26B8, 0x5418,
		0x09A8, 0x7608, 0x0000
	};
	Vec2f positions[5] = {

		0.0, 0.0, 35.0, 0.0, 50.0,
		0.0, 80.0, 0.0, 110.0, 0.0
	};
	s32 i;

	gMvOpeningKirbyNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMvOpeningKirbyFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = positions[i].x + 90.0F;
		name_sobj->pos.y = positions[i].y + 100.0F;

		mvOpeningKirbySetNameColor(name_sobj);
	}
}

// 8018D324
void mvOpeningKirbyAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningKirbyFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.x - dMvOpeningKirbyCameraSettingsAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.y - dMvOpeningKirbyCameraSettingsAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.z - dMvOpeningKirbyCameraSettingsAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.at.x - dMvOpeningKirbyCameraSettingsAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.at.y - dMvOpeningKirbyCameraSettingsAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.at.z - dMvOpeningKirbyCameraSettingsAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningKirbyCameraSettingsAdjustedEnd.upx - dMvOpeningKirbyCameraSettingsAdjustedStart.upx) / 45.0F));
	}
}

// 8018D41C
void mvOpeningKirbyCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningKirbyCameraSettingsAdjustedStart = dMvOpeningKirbyCameraSettingsStart;
	dMvOpeningKirbyCameraSettingsAdjustedEnd = dMvOpeningKirbyCameraSettingsEnd;

	gMvOpeningKirbyStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningKirbyStageCameraGObj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
	cam->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMvOpeningKirbyStageCameraGObj);
	gcAddGObjProcess(gMvOpeningKirbyStageCameraGObj, mvOpeningKirbyAnimateStageCamera, 1, 1);

	dMvOpeningKirbyCameraSettingsAdjustedStart.eye.x += arg0.x;
	dMvOpeningKirbyCameraSettingsAdjustedStart.eye.y += arg0.y;
	dMvOpeningKirbyCameraSettingsAdjustedStart.eye.z += arg0.z;
	dMvOpeningKirbyCameraSettingsAdjustedStart.at.x += arg0.x;
	dMvOpeningKirbyCameraSettingsAdjustedStart.at.y += arg0.y;
	dMvOpeningKirbyCameraSettingsAdjustedStart.at.z += arg0.z;

	dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.x += arg0.x;
	dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.y += arg0.y;
	dMvOpeningKirbyCameraSettingsAdjustedEnd.eye.z += arg0.z;
	dMvOpeningKirbyCameraSettingsAdjustedEnd.at.x += arg0.x;
	dMvOpeningKirbyCameraSettingsAdjustedEnd.at.y += arg0.y;
	dMvOpeningKirbyCameraSettingsAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningKirbyCameraSettingsAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningKirbyCameraSettingsAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningKirbyCameraSettingsAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningKirbyCameraSettingsAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningKirbyCameraSettingsAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningKirbyCameraSettingsAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningKirbyCameraSettingsAdjustedStart.upx;
}

// 8018D62C
void mvOpeningKirbyInitFighterStagePanel()
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
	spawn_position.y += 30.0F;
	mvOpeningKirbyCreateStageViewport(spawn_position);
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
		spawn_info.figatree_heap = ftManagerAllocAnimHeapKind(gBattleState->players[i].ft_kind);

		gMvOpeningKirbyStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMvOpeningKirbyInputSeq);
	}
}

// 8018D870
void mvOpeningKirbyRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTasklogDLHeads[0]++);
	gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 80, 170, 255, 255);
	gDPSetCombineLERP(gSYTasklogDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTasklogDLHeads[0]++, 210, 10, 310, 230);
	gDPPipeSync(gSYTasklogDLHeads[0]++);
	gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D970
void mvOpeningKirbyCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningKirbyRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D9BC
void mvOpeningKirbyAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningKirbyFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningKirbyPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningKirbyPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningKirbyPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningKirbyFramesElapsed > 15) && (gMvOpeningKirbyFramesElapsed < 45))
	{
		gMvOpeningKirbyPosedFighterYSpeed += -1.0F / 15.0F;
	}
	if ((gMvOpeningKirbyFramesElapsed > 45) && (gMvOpeningKirbyFramesElapsed < 60))
	{
		gMvOpeningKirbyPosedFighterYSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMvOpeningKirbyPosedFighterYSpeed;
}

// 8018DA8C
void mvOpeningKirbyCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindKirby;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindKirby, 0);
	spawn_info.figatree_heap = gMvOpeningKirbyAnimHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningKirbyAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB8C
void mvOpeningKirbyCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DC2C
void mvOpeningKirbyCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cam, GetAddressFromOffset(gMvOpeningKirbyFilesArray[1], &FILE_041_KIRBY_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 8018DD14
void mvOpeningKirbyCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cam->flags = 5;
}

// 8018DDBC
void mvOpeningKirbyMainProc(GObj* arg0)
{
	gMvOpeningKirbyFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTasklogSetLoadScene();
	}

	if (gMvOpeningKirbyFramesElapsed == 15)
	{
		gcEjectGObj(gMvOpeningKirbyNameGObj);
		mvOpeningKirbyInitFighterStagePanel();
		mvOpeningKirbyCreatePosedFighterBackground();
		mvOpeningKirbyCreatePosedFighter();
	}

	if (gMvOpeningKirbyFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x21;
		syTasklogSetLoadScene();
	}
}

// 8018DE78
void mvOpeningKirbyInitFramesElapsed()
{
	gMvOpeningKirbyFramesElapsed = 0;
}

// 8018DE84
void mvOpeningKirbyInit()
{
	gMvOpeningKirbyBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningKirbyBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindPupupu;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindKirby;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningKirbyLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningKirbyMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningKirbyInitFramesElapsed();
	efAllocInitParticleBank();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindKirby);

	gMvOpeningKirbyAnimHeap = syTasklogMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningKirbyCreateNameViewport();
	mvOpeningKirbyCreatePosedFighterBackgroundViewport();
	mvOpeningKirbyCreatePosedFighterViewport();
	mvOpeningKirbyDrawName();

	while (func_8000092C() < 1965U);
}

// 8018E00C
void gMvOpeningKirbySetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 8018E13C
syDisplaySetup D_ovl43_8018E13C = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 8018E158
scRuntimeInfo D_ovl43_8018E158 = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay43ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	gMvOpeningKirbySetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningKirbyInit
};

// 8018E058
void intro_focus_kirby_entry()
{
	D_ovl43_8018E13C.zbuffer = syDisplayGetZBuffer(6400);
	syDisplayInit(&D_ovl43_8018E13C);
	D_ovl43_8018E158.arena_size = (u32) ((uintptr_t)&lOverlay43ArenaHi - (uintptr_t)&lOverlay43ArenaLo);
	syTasklogInit(&D_ovl43_8018E158);
}
