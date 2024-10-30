#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <lb/library.h>

// Externs
extern intptr_t FILE_041_LINK_CAMERA_PARAMS_OFFSET; // 0xC0
extern intptr_t lOverlay40ArenaHi;  // 0x803903E0
extern intptr_t lOverlay40ArenaLo;  // 0x8018E5E0

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// DATA
// 0x8018E070
CObjDesc dMVOpeningLinkCObjDescStart = {

	{ -800.0, 180.0, 800.0 },
	{ 0.0, 180.0, 0.0 },
	0.0
};

// 0x8018E08C
CObjDesc dMVOpeningLinkCObjDescEnd = {

	{ 200.0, 0.0, 400.0 },
	{ 0.0, 240.0, 0.0 },
	0.4
};

// 0x8018E0A8
FTKeyCommand dMVOpeningLinkGameKey[] = {

    FTKEY_EVENT_BUTTON(L_TRIG, 1),  // 0x1001, 0x0020
    FTKEY_EVENT_END()               // 0x0000
};

u32 D_ovl40_8018E0B0[2] = {

	0x00000025, 0x00000041
};


// BSS
// 0x8018E1C0
s32 D_ovl40_8018E1C0;

// 0x8018E1C4
s32 D_ovl40_8018E1C4;

// 0x8018E1C8
s32 gMVOpeningLinkFramesElapsed;

// 0x8018E1CC
GObj* gMVOpeningLinkNameGObj;

// 0x8018E1D0
GObj* gMVOpeningLinkStageFighterGObj;

// 0x8018E1D4
s32 D_ovl40_8018E1D4;

// 0x8018E1D8
GObj* gMVOpeningLinkStageCameraGObj;

// 0x8018E1DC
void* gMVOpeningLinkFigatreeHeap;

// 0x8018E1E0
f32 gMVOpeningLinkPosedFighterXSpeed;

// 0x8018E1E4
s32 D_ovl40_8018E1E4;

// 0x8018E1E8
CObjDesc dMVOpeningLinkCObjDescAdjustedStart;

// 0x8018E208
CObjDesc dMVOpeningLinkCObjDescAdjustedEnd;

// 0x8018E228
LBFileNode D_ovl40_8018E228[48];

// 0x8018E3A8
LBFileNode D_ovl40_8018E3A8[7];

// 0x8018E3E0
uintptr_t gMVOpeningLinkFiles[2];

// 0x8018E3E8
SCBattleState gMVOpeningLinkBattleState;


// 0x8018D0C0
void mvOpeningLinkLoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = D_ovl40_8018E228;
	rl_setup.status_buffer_size = ARRAY_COUNT(D_ovl40_8018E228);
	rl_setup.force_status_buffer = D_ovl40_8018E3A8;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(D_ovl40_8018E3A8);
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl40_8018E0B0, ARRAY_COUNT(D_ovl40_8018E0B0), gMVOpeningLinkFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl40_8018E0B0, ARRAY_COUNT(D_ovl40_8018E0B0)), 0x10));
}

// 0x8018D160
void mvOpeningLinkSetNameColor(SObj* name_sobj)
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
void mvOpeningLinkDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[5] = {

		0x00003358, 0x000026b8,
		0x00003e88, 0x00002f98, 0x00000000
	};
	f32 x_positions[4] = {

		0.0, 30.0, 45.0, 80.0
	};
	s32 i;

	gMVOpeningLinkNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMVOpeningLinkFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 100.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningLinkSetNameColor(name_sobj);
	}
}

// 0x8018D2F4
void mvOpeningLinkAnimateStageCamera(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (gMVOpeningLinkFramesElapsed >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningLinkCObjDescAdjustedEnd.eye.x - dMVOpeningLinkCObjDescAdjustedStart.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningLinkCObjDescAdjustedEnd.eye.y - dMVOpeningLinkCObjDescAdjustedStart.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningLinkCObjDescAdjustedEnd.eye.z - dMVOpeningLinkCObjDescAdjustedStart.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningLinkCObjDescAdjustedEnd.at.x - dMVOpeningLinkCObjDescAdjustedStart.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningLinkCObjDescAdjustedEnd.at.y - dMVOpeningLinkCObjDescAdjustedStart.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningLinkCObjDescAdjustedEnd.at.z - dMVOpeningLinkCObjDescAdjustedStart.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningLinkCObjDescAdjustedEnd.upx - dMVOpeningLinkCObjDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D3EC
void mvOpeningLinkCreateStageViewport(Vec3f arg0)
{
	CObj *cobj;

	dMVOpeningLinkCObjDescAdjustedStart = dMVOpeningLinkCObjDescStart;
	dMVOpeningLinkCObjDescAdjustedEnd = dMVOpeningLinkCObjDescEnd;

	gMVOpeningLinkStageCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(gMVOpeningLinkStageCameraGObj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 90.0F, 310.0F, 230.0F);
	cobj->projection.persp.aspect = 15.0F / 7.0F;
	gcEndProcessAll(gMVOpeningLinkStageCameraGObj);
	gcAddGObjProcess(gMVOpeningLinkStageCameraGObj, mvOpeningLinkAnimateStageCamera, 1, 1);

	dMVOpeningLinkCObjDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningLinkCObjDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningLinkCObjDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningLinkCObjDescAdjustedStart.at.x += arg0.x;
	dMVOpeningLinkCObjDescAdjustedStart.at.y += arg0.y;
	dMVOpeningLinkCObjDescAdjustedStart.at.z += arg0.z;

	dMVOpeningLinkCObjDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningLinkCObjDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningLinkCObjDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningLinkCObjDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningLinkCObjDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningLinkCObjDescAdjustedEnd.at.z += arg0.z;

	cobj->vec.eye.x = dMVOpeningLinkCObjDescAdjustedStart.eye.x;
	cobj->vec.eye.y = dMVOpeningLinkCObjDescAdjustedStart.eye.y;
	cobj->vec.eye.z = dMVOpeningLinkCObjDescAdjustedStart.eye.z;
	cobj->vec.at.x = dMVOpeningLinkCObjDescAdjustedStart.at.x;
	cobj->vec.at.y = dMVOpeningLinkCObjDescAdjustedStart.at.y;
	cobj->vec.at.z = dMVOpeningLinkCObjDescAdjustedStart.at.z;
	cobj->vec.up.x = dMVOpeningLinkCObjDescAdjustedStart.upx;
}

// 0x8018D5F4
void mvOpeningLinkInitFighterStagePanel()
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
	mvOpeningLinkCreateStageViewport(spawn_position);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[i].pkind == nFTPlayerKindNot) continue;

		ftManagerSetupFilesAllKind(gBattleState->players[i].fkind);

		spawn_info.fkind = gBattleState->players[i].fkind;
		spawn_info.pos.x = spawn_position.x;
		spawn_info.pos.y = spawn_position.y;
		spawn_info.pos.z = spawn_position.z;
		spawn_info.lr_spawn = +1;
		spawn_info.team = gBattleState->players[i].team;
		spawn_info.player = i;
		spawn_info.detail = nFTPartsDetailHigh;
		spawn_info.costume = gBattleState->players[i].costume;
		spawn_info.handicap = gBattleState->players[i].handicap;
		spawn_info.cp_level = gBattleState->players[i].level;
		spawn_info.stock_count = gBattleState->stock_setting;
		spawn_info.damage = 0;
		spawn_info.pkind = gBattleState->players[i].pkind;
		spawn_info.controller = &gPlayerControllers[i];
		spawn_info.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[i].fkind);

		gMVOpeningLinkStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningLinkGameKey);
	}
}

// 0x8018D824
void mvOpeningLinkRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 150, 120, 180, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 310, 90);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D924
void mvOpeningLinkCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningLinkRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D970
void mvOpeningLinkAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMVOpeningLinkFramesElapsed)
	{
		default:
			break;
		case 15:
			gMVOpeningLinkPosedFighterXSpeed = 17.0F;
			break;
		case 45:
			gMVOpeningLinkPosedFighterXSpeed = 15.0F;
			break;
		case 60:
			gMVOpeningLinkPosedFighterXSpeed = 0.0F;
			break;
	}

	if ((gMVOpeningLinkFramesElapsed > 15) && (gMVOpeningLinkFramesElapsed < 45))
		gMVOpeningLinkPosedFighterXSpeed += -1.0F / 15.0F;
	if ((gMVOpeningLinkFramesElapsed > 45) && (gMVOpeningLinkFramesElapsed < 60))
		gMVOpeningLinkPosedFighterXSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.x -= gMVOpeningLinkPosedFighterXSpeed;
}

// 0x8018DA40
void mvOpeningLinkCreatePosedFighter()
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = nFTKindLink;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindLink, 0);
	spawn_info.figatree_heap = gMVOpeningLinkFigatreeHeap;
	spawn_info.pos.x = 600.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningLinkAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB40
void mvOpeningLinkCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DBE0
void mvOpeningLinkCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 90.0F);
	cobj->projection.persp.aspect = 3.75F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(gMVOpeningLinkFiles[1], &FILE_041_LINK_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DCD0
void mvOpeningLinkCreatePosedFighterBackgroundViewport()
{
	CObj *cobj;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 90.0F);
	cobj->flags = 5;
}

// 0x8018DD80
void mvOpeningLinkMainProc(GObj* arg0)
{
	gMVOpeningLinkFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_prev = gSceneData.scene_curr;
		gSceneData.scene_curr = 1U;
		syTaskmanSetLoadScene();
	}

	if (gMVOpeningLinkFramesElapsed == 15)
	{
		gcEjectGObj(gMVOpeningLinkNameGObj);
		mvOpeningLinkInitFighterStagePanel();
		mvOpeningLinkCreatePosedFighterBackground();
		mvOpeningLinkCreatePosedFighter();
	}

	if (gMVOpeningLinkFramesElapsed == 60)
	{
		gSceneData.scene_prev = gSceneData.scene_curr;
		gSceneData.scene_curr = 0x20;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DE3C
void mvOpeningLinkInitFramesElapsed()
{
	gMVOpeningLinkFramesElapsed = 0;
}

// 0x8018DE48
void mvOpeningLinkInit()
{
	gMVOpeningLinkBattleState = gDefaultBattleState;
	gBattleState = &gMVOpeningLinkBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gkind = nGRKindHyrule;
	gBattleState->pl_count = 1;

	gBattleState->players[0].fkind = nFTKindLink;
	gBattleState->players[0].pkind = nFTPlayerKindKey;

	mvOpeningLinkLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningLinkMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningLinkInitFramesElapsed();
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindLink);

	gMVOpeningLinkFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningLinkCreateNameViewport();
	mvOpeningLinkCreatePosedFighterBackgroundViewport();
	mvOpeningLinkCreatePosedFighterViewport();
	mvOpeningLinkDrawName();

	while (func_8000092C() < 1695U);
}

// 0x8018DFCC
void gMVOpeningLinkFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E0DC
syVideoSetup D_ovl40_8018E0DC = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x8018E0F8
scRuntimeInfo D_ovl40_8018E0F8 = {

	0x00000000, 0x8000a5e4,
	0x800a26b8, &lOverlay40ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	gMVOpeningLinkFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	mvOpeningLinkInit
};

// 0x8018E018
void intro_focus_link_entry()
{
	D_ovl40_8018E0DC.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl40_8018E0DC);
	D_ovl40_8018E0F8.arena_size = (u32) ((uintptr_t)&lOverlay40ArenaHi - (uintptr_t)&lOverlay40ArenaLo);
	syTaskmanInit(&D_ovl40_8018E0F8);
}