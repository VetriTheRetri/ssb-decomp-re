#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/video.h>

// Externs
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay42ArenaLo;  // 0x8018E640
extern intptr_t lOverlay42ArenaHi;  // 0x803903E0
extern intptr_t FILE_041_PIKACHU_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Pikachu's fighter pose camera settings

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);


// Data
// 0x8018E0C0
CObjDesc dMVOpeningPikachuCObjDescStart = {

	0.0, 0.0, 20000.0,
	0.0, 0.0, 0.0,
	0.0
};

// 0x8018E0DC
CObjDesc dMVOpeningPikachuCObjDescEnd = {

	50.0, -1640.0, 1000.0,
	50.0, -1640.0, 0.0,
	0.0
};

// 0x8018E0F8
FTKeyCommand dMVOpeningPikachuInputSeq[] =
{
	FTKEY_EVENT_END() // 0000
};

// 0x8018E0FC
u32 D_ovl42_8018E0FC[2] = {

	0x25, 0x41
};


// BSS
// 0x8018E220
s32 D_ovl42_8018E220[2];

// 0x8018E228
s32 gMVOpeningPikachuFramesElapsed;

// 0x8018E22C
GObj* gMVOpeningPikachuNameGObj;

// 0x8018E230
GObj* gMVOpeningPikachuStageFighterGObj;

// 0x8018E234
s32 D_ovl42_8018E234;

// 0x8018E238
GObj* gMVOpeningPikachuStageCameraGObj;

// 0x8018E23C
void* gMVOpeningPikachuFigatreeHeap;

// 0x8018E240
f32 gMVOpeningPikachuPosedFighterYSpeed;

// 0x8018E244
s32 D_ovl42_8018E244;

// 0x8018E248
CObjDesc dMVOpeningPikachuCObjDescAdjustedStart;

// 0x8018E268
CObjDesc dMVOpeningPikachuCObjDescAdjustedEnd;

// 0x8018E288
LBFileNode D_ovl42_8018E288[48];

// 0x8018E408
LBFileNode D_ovl42_8018E408[7];

// 0x8018E440
uintptr_t gMVOpeningPikachuFiles[2];

// 0x8018E448
SCBattleState gMVOpeningPikachuBattleState;


// 0x8018D0C0
void mvOpeningPikachuLoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = D_ovl42_8018E288;
	rl_setup.status_buffer_size = ARRAY_COUNT(D_ovl42_8018E288);
	rl_setup.force_status_buffer = D_ovl42_8018E408;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(D_ovl42_8018E408);
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl42_8018E0FC, ARRAY_COUNT(D_ovl42_8018E0FC), gMVOpeningPikachuFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl42_8018E0FC, ARRAY_COUNT(D_ovl42_8018E0FC)), 0x10));
}

// 0x8018D160
void mvOpeningPikachuSetNameColor(SObj* name_sobj)
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

	gMVOpeningPikachuNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMVOpeningPikachuFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 65.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningPikachuSetNameColor(name_sobj);
	}
}

// 0x8018D334
void mvOpeningPikachuAnimateStageCamera(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (gMVOpeningPikachuFramesElapsed >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningPikachuCObjDescAdjustedEnd.eye.x - dMVOpeningPikachuCObjDescAdjustedStart.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningPikachuCObjDescAdjustedEnd.eye.y - dMVOpeningPikachuCObjDescAdjustedStart.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningPikachuCObjDescAdjustedEnd.eye.z - dMVOpeningPikachuCObjDescAdjustedStart.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningPikachuCObjDescAdjustedEnd.at.x - dMVOpeningPikachuCObjDescAdjustedStart.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningPikachuCObjDescAdjustedEnd.at.y - dMVOpeningPikachuCObjDescAdjustedStart.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningPikachuCObjDescAdjustedEnd.at.z - dMVOpeningPikachuCObjDescAdjustedStart.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningPikachuCObjDescAdjustedEnd.upx - dMVOpeningPikachuCObjDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D42C
void mvOpeningPikachuCreateStageViewport(Vec3f arg0)
{
	CObj *cobj;

	dMVOpeningPikachuCObjDescAdjustedStart = dMVOpeningPikachuCObjDescStart;
	dMVOpeningPikachuCObjDescAdjustedEnd = dMVOpeningPikachuCObjDescEnd;

	gMVOpeningPikachuStageCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(gMVOpeningPikachuStageCameraGObj);
	syRdpSetViewport(&cobj->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cobj->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMVOpeningPikachuStageCameraGObj);
	gcAddGObjProcess(gMVOpeningPikachuStageCameraGObj, mvOpeningPikachuAnimateStageCamera, 1, 1);

	dMVOpeningPikachuCObjDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningPikachuCObjDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningPikachuCObjDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningPikachuCObjDescAdjustedStart.at.x += arg0.x;
	dMVOpeningPikachuCObjDescAdjustedStart.at.y += arg0.y;
	dMVOpeningPikachuCObjDescAdjustedStart.at.z += arg0.z;

	dMVOpeningPikachuCObjDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningPikachuCObjDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningPikachuCObjDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningPikachuCObjDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningPikachuCObjDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningPikachuCObjDescAdjustedEnd.at.z += arg0.z;

	cobj->vec.eye.x = dMVOpeningPikachuCObjDescAdjustedStart.eye.x;
	cobj->vec.eye.y = dMVOpeningPikachuCObjDescAdjustedStart.eye.y;
	cobj->vec.eye.z = dMVOpeningPikachuCObjDescAdjustedStart.eye.z;
	cobj->vec.at.x = dMVOpeningPikachuCObjDescAdjustedStart.at.x;
	cobj->vec.at.y = dMVOpeningPikachuCObjDescAdjustedStart.at.y;
	cobj->vec.at.z = dMVOpeningPikachuCObjDescAdjustedStart.at.z;
	cobj->vec.up.x = dMVOpeningPikachuCObjDescAdjustedStart.upx;
}

// 0x8018D634
void mvOpeningPikachuInitFighterStagePanel()
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
	mvOpeningPikachuCreateStageViewport(spawn_position);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gSCManagerBattleState->players); i++)
	{
		FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		if (gSCManagerBattleState->players[i].pkind == nFTPlayerKindNot)
			continue;

		ftManagerSetupFilesAllKind(gSCManagerBattleState->players[i].fkind);

		spawn_info.fkind = gSCManagerBattleState->players[i].fkind;
		spawn_info.pos.x = spawn_position.x;
		spawn_info.pos.y = spawn_position.y;
		spawn_info.pos.z = spawn_position.z;
		spawn_info.lr = +1;
		spawn_info.team = gSCManagerBattleState->players[i].team;
		spawn_info.player = i;
		spawn_info.detail = nFTPartsDetailHigh;
		spawn_info.costume = gSCManagerBattleState->players[i].costume;
		spawn_info.handicap = gSCManagerBattleState->players[i].handicap;
		spawn_info.level = gSCManagerBattleState->players[i].level;
		spawn_info.stock_count = gSCManagerBattleState->stocks;
		spawn_info.damage = 0;
		spawn_info.pkind = gSCManagerBattleState->players[i].pkind;
		spawn_info.controller = &gPlayerControllers[i];
		spawn_info.figatree_heap = ftManagerAllocFigatreeHeapKind(gSCManagerBattleState->players[i].fkind);

		gMVOpeningPikachuStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningPikachuInputSeq);
	}
}

// 0x8018D864
void mvOpeningPikachuRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 110, 170, 110, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 110, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D964
void mvOpeningPikachuCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningPikachuRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9B0
void mvOpeningPikachuAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMVOpeningPikachuFramesElapsed)
	{
		default:
			break;
		case 15:
			gMVOpeningPikachuPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMVOpeningPikachuPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMVOpeningPikachuPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMVOpeningPikachuFramesElapsed > 15) && (gMVOpeningPikachuFramesElapsed < 45))
	{
		gMVOpeningPikachuPosedFighterYSpeed += -1.0F / 15.0F;
	}
	if ((gMVOpeningPikachuFramesElapsed > 45) && (gMVOpeningPikachuFramesElapsed < 60))
	{
		gMVOpeningPikachuPosedFighterYSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y += gMVOpeningPikachuPosedFighterYSpeed;
}

// 0x8018DA80
void mvOpeningPikachuCreatePosedFighter()
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = nFTKindPikachu;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindPikachu, 0);
	spawn_info.figatree_heap = gMVOpeningPikachuFigatreeHeap;
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

// 0x8018DB80
void mvOpeningPikachuCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC20
void mvOpeningPikachuCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cobj->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(gMVOpeningPikachuFiles[1], &FILE_041_PIKACHU_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DD10
void mvOpeningPikachuCreatePosedFighterBackgroundViewport()
{
	CObj *cobj;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cobj->flags = 5;
}

// 0x8018DDC0
void mvOpeningPikachuMainProc(GObj* arg0)
{
	gMVOpeningPikachuFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 1U;
		syTaskmanSetLoadScene();
	}

	if (gMVOpeningPikachuFramesElapsed == 15)
	{
		gcEjectGObj(gMVOpeningPikachuNameGObj);
		mvOpeningPikachuInitFighterStagePanel();
		mvOpeningPikachuCreatePosedFighterBackground();
		mvOpeningPikachuCreatePosedFighter();
	}

	if (gMVOpeningPikachuFramesElapsed == 60)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 0x26;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DE7C
void mvOpeningPikachuInitFramesElapsed()
{
	gMVOpeningPikachuFramesElapsed = 0;
}

// 0x8018DE88
void mvOpeningPikachuInit()
{
	gMVOpeningPikachuBattleState = dSCManagerDefaultBattleState;
	gSCManagerBattleState = &gMVOpeningPikachuBattleState;

	gSCManagerBattleState->game_type = nSCBattleGameTypeOpening;

	gSCManagerBattleState->gkind = nGRKindYamabuki;
	gSCManagerBattleState->pl_count = 1;

	gSCManagerBattleState->players[0].fkind = nFTKindPikachu;
	gSCManagerBattleState->players[0].pkind = nFTPlayerKindKey;

	mvOpeningPikachuLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningPikachuMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningPikachuInitFramesElapsed();
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindPikachu);

	gMVOpeningPikachuFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningPikachuCreateNameViewport();
	mvOpeningPikachuCreatePosedFighterBackgroundViewport();
	mvOpeningPikachuCreatePosedFighterViewport();
	mvOpeningPikachuDrawName();

	while (func_8000092C() < 2145U);
}

// 0x8018E010
void gMVOpeningPikachuFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E140
SYVideoSetup D_ovl42_8018E140 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 0x8018E15C
scRuntimeInfo D_ovl42_8018E15C = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay42ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	gMVOpeningPikachuFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningPikachuInit
};

// 0x8018E05C
void intro_focus_pikachu_entry()
{
	D_ovl42_8018E140.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl42_8018E140);
	D_ovl42_8018E15C.arena_size = (u32) ((uintptr_t)&lOverlay42ArenaHi - (uintptr_t)&lOverlay42ArenaLo);
	syTaskmanRun(&D_ovl42_8018E15C);
}
