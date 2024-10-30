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
CObjDesc dMVOpeningFoxCObjDescStart = {

	-400.0, 320.0, 100.0,
	0.0, 320.0, 0.0,
	0.0
};

// 0x8018E0AC
CObjDesc dMVOpeningFoxCObjDescEnd = {

	-3000.0, 300.0, 250.0,
	0.0, 300.0, -200.0,
	0.7
};

// 0x8018E0C8
FTKeyCommand dMVOpeningFoxInputSeq[] =
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
CObjDesc dMVOpeningFoxCObjDescAdjustedStart;

// 0x8018E238
CObjDesc dMVOpeningFoxCObjDescAdjustedEnd;

// 0x8018E258
LBFileNode D_ovl39_8018E258[48];

// 0x8018E3D8
LBFileNode D_ovl39_8018E3D8[7];

// 0x8018E410
uintptr_t gMVOpeningFoxFiles[2];

// 0x8018E418
SCBattleState gMVOpeningFoxBattleState;


// 0x8018D0C0
void mvOpeningFoxLoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl39_8018E258;
	rl_setup.status_buffer_size = 0x30;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl39_8018E3D8;
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
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (gMVOpeningFoxFramesElapsed >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningFoxCObjDescAdjustedEnd.eye.x - dMVOpeningFoxCObjDescAdjustedStart.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningFoxCObjDescAdjustedEnd.eye.y - dMVOpeningFoxCObjDescAdjustedStart.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningFoxCObjDescAdjustedEnd.eye.z - dMVOpeningFoxCObjDescAdjustedStart.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningFoxCObjDescAdjustedEnd.at.x - dMVOpeningFoxCObjDescAdjustedStart.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningFoxCObjDescAdjustedEnd.at.y - dMVOpeningFoxCObjDescAdjustedStart.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningFoxCObjDescAdjustedEnd.at.z - dMVOpeningFoxCObjDescAdjustedStart.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningFoxCObjDescAdjustedEnd.upx - dMVOpeningFoxCObjDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D40C
void mvOpeningFoxCreateStageViewport(Vec3f arg0)
{
	CObj *cobj;

	dMVOpeningFoxCObjDescAdjustedStart = dMVOpeningFoxCObjDescStart;
	dMVOpeningFoxCObjDescAdjustedEnd = dMVOpeningFoxCObjDescEnd;

	gMVOpeningFoxStageCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(gMVOpeningFoxStageCameraGObj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
	cobj->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMVOpeningFoxStageCameraGObj);
	gcAddGObjProcess(gMVOpeningFoxStageCameraGObj, mvOpeningFoxAnimateStageCamera, 1, 1);

	dMVOpeningFoxCObjDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningFoxCObjDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningFoxCObjDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningFoxCObjDescAdjustedStart.at.x += arg0.x;
	dMVOpeningFoxCObjDescAdjustedStart.at.y += arg0.y;
	dMVOpeningFoxCObjDescAdjustedStart.at.z += arg0.z;

	dMVOpeningFoxCObjDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningFoxCObjDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningFoxCObjDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningFoxCObjDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningFoxCObjDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningFoxCObjDescAdjustedEnd.at.z += arg0.z;

	cobj->vec.eye.x = dMVOpeningFoxCObjDescAdjustedStart.eye.x;
	cobj->vec.eye.y = dMVOpeningFoxCObjDescAdjustedStart.eye.y;
	cobj->vec.eye.z = dMVOpeningFoxCObjDescAdjustedStart.eye.z;
	cobj->vec.at.x = dMVOpeningFoxCObjDescAdjustedStart.at.x;
	cobj->vec.at.y = dMVOpeningFoxCObjDescAdjustedStart.at.y;
	cobj->vec.at.z = dMVOpeningFoxCObjDescAdjustedStart.at.z;
	cobj->vec.up.x = dMVOpeningFoxCObjDescAdjustedStart.upx;
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
		FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		if (gBattleState->players[i].pkind == nFTPlayerKindNot) continue;

		ftManagerSetupFilesAllKind(gBattleState->players[i].fkind);

		spawn_info.fkind = gBattleState->players[i].fkind;
		spawn_info.pos.x = spawn_position.x;
		spawn_info.pos.y = spawn_position.y;
		spawn_info.pos.z = spawn_position.z;
		spawn_info.lr_spawn = -1;
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
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = nFTKindFox;
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
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC08
void mvOpeningFoxCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cobj->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(gMVOpeningFoxFiles[1], &FILE_041_FOX_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DCF0
void mvOpeningFoxCreatePosedFighterBackgroundViewport()
{
	CObj *cobj;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cobj->flags = 5;
}

// 0x8018DD98
void mvOpeningFoxMainProc(GObj* arg0)
{
	gMVOpeningFoxFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_prev = gSceneData.scene_curr;
		gSceneData.scene_curr = 1U;
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
		gSceneData.scene_prev = gSceneData.scene_curr;
		gSceneData.scene_curr = 0x24;
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

	gBattleState->players[0].fkind = nFTKindFox;
	gBattleState->players[0].pkind = nFTPlayerKindKey;

	mvOpeningFoxLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningFoxMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningFoxInitFramesElapsed();
	efParticleInitAll();
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
