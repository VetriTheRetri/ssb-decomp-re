#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>
#include <sys/objdraw.h>

// Externs
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay37ArenaLo;  // 0x8018E5E0
extern intptr_t lOverlay37ArenaHi;  // 0x803903E0
extern intptr_t FILE_041_DK_CAMERA_PARAMS_OFFSET; // file 0x041 offset for DK's fighter pose camera settings

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// Data
// 0x8018E070
CObjDesc dMVOpeningDKCObjDescStart = {

	{ -1100.0, 150.0, 400.0 },
	{ 0.0,     150.0, 0.0   }, 0.0
};

// 0x8018E08C
CObjDesc dMVOpeningDKCObjDescEnd = {

	{ -900.0, 500.0, 1800.0 },
	{ 0.0,    500.0, 0.0    }, 0.0
};

// 0x8018E0A8
FTKeyCommand dMVOpeningDKInputSeq[] =
{
	FTKEY_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0), // 0x2000, 0x00B0
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
	FTKEY_EVENT_BUTTON(0, 1),                         // 0x1001, 0x0000
	FTKEY_EVENT_BUTTON(B_BUTTON, 1),                  // 0x1001, 0x4000
	FTKEY_EVENT_END()                                 // 0x0000
};

// 0x8018E0BC
u32 D_ovl37_8018E0BC[2] = {

	0x25, 0x41
};


// BSS
// 0x8018E1C0
s32 D_ovl37_8018E1C0[2];

// 0x8018E1C8
s32 gMVOpeningDKFramesElapsed;

// 0x8018E1CC
GObj* gMVOpeningDKNameGObj;

// 0x8018E1D0
GObj* gMVOpeningDKStageFighterGObj;

s32 D_ovl37_8018E1D4;

// 0x8018E1D8
GObj* gMVOpeningDKStageCameraGObj;

// 0x8018E1DC
void* gMVOpeningDKFigatreeHeap;

// 0x8018E1E0
f32 gMVOpeningDKPosedFighterYSpeed;

// 0x8018E1E8
CObjDesc dMVOpeningDKCObjDescAdjustedStart;

// 0x8018E208
CObjDesc dMVOpeningDKCObjDescAdjustedEnd;

// 0x8018E228
LBFileNode D_ovl37_8018E228[48];

// 0x8018E3A8
LBFileNode D_ovl37_8018E3A8[7];

// 0x8018E3E0
uintptr_t gMVOpeningDKFiles[2];

// 0x8018E3E8
SCBattleState gMVOpeningDKBattleState;


// 0x8018D0C0
void mvOpeningDKLoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl37_8018E228;
	rl_setup.status_buffer_size = 0x30;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl37_8018E3A8;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl37_8018E0BC, ARRAY_COUNT(D_ovl37_8018E0BC), gMVOpeningDKFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl37_8018E0BC, ARRAY_COUNT(D_ovl37_8018E0BC)), 0x10));
}

// 0x8018D160
void mvOpeningDKSetNameColor(SObj* name_sobj)
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

	gMVOpeningDKNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMVOpeningDKFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = positions[i].x + 120.0F;
		name_sobj->pos.y = positions[i].y + 100.0F;

		mvOpeningDKSetNameColor(name_sobj);
	}
}

// 0x8018D2FC
void mvOpeningDKAnimateStageCamera(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (gMVOpeningDKFramesElapsed >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningDKCObjDescAdjustedEnd.eye.x - dMVOpeningDKCObjDescAdjustedStart.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningDKCObjDescAdjustedEnd.eye.y - dMVOpeningDKCObjDescAdjustedStart.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningDKCObjDescAdjustedEnd.eye.z - dMVOpeningDKCObjDescAdjustedStart.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningDKCObjDescAdjustedEnd.at.x - dMVOpeningDKCObjDescAdjustedStart.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningDKCObjDescAdjustedEnd.at.y - dMVOpeningDKCObjDescAdjustedStart.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningDKCObjDescAdjustedEnd.at.z - dMVOpeningDKCObjDescAdjustedStart.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningDKCObjDescAdjustedEnd.upx - dMVOpeningDKCObjDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D3F4
void mvOpeningDKCreateStageViewport(Vec3f arg0)
{
	CObj *cobj;

	dMVOpeningDKCObjDescAdjustedStart = dMVOpeningDKCObjDescStart;
	dMVOpeningDKCObjDescAdjustedEnd = dMVOpeningDKCObjDescEnd;

	gMVOpeningDKStageCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(gMVOpeningDKStageCameraGObj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 210.0F, 230.0F);
	cobj->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMVOpeningDKStageCameraGObj);
	gcAddGObjProcess(gMVOpeningDKStageCameraGObj, mvOpeningDKAnimateStageCamera, 1, 1);

	dMVOpeningDKCObjDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningDKCObjDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningDKCObjDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningDKCObjDescAdjustedStart.at.x += arg0.x;
	dMVOpeningDKCObjDescAdjustedStart.at.y += arg0.y;
	dMVOpeningDKCObjDescAdjustedStart.at.z += arg0.z;

	dMVOpeningDKCObjDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningDKCObjDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningDKCObjDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningDKCObjDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningDKCObjDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningDKCObjDescAdjustedEnd.at.z += arg0.z;

	cobj->vec.eye.x = dMVOpeningDKCObjDescAdjustedStart.eye.x;
	cobj->vec.eye.y = dMVOpeningDKCObjDescAdjustedStart.eye.y;
	cobj->vec.eye.z = dMVOpeningDKCObjDescAdjustedStart.eye.z;
	cobj->vec.at.x = dMVOpeningDKCObjDescAdjustedStart.at.x;
	cobj->vec.at.y = dMVOpeningDKCObjDescAdjustedStart.at.y;
	cobj->vec.at.z = dMVOpeningDKCObjDescAdjustedStart.at.z;
	cobj->vec.up.x = dMVOpeningDKCObjDescAdjustedStart.upx;
}

// 0x8018D604
void mvOpeningDKInitFighterStagePanel()
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
	mvOpeningDKCreateStageViewport(spawn_position);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gBattleState->players); i++)
	{
		FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

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
		spawn_info.figatree_heap = ftManagerAllocFigatreeHeapKind(gBattleState->players[i].ft_kind);

		gMVOpeningDKStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningDKInputSeq);
	}
}

// 0x8018D834
void mvOpeningDKRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 70, 90, 0, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 210, 10, 310, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D934
void mvOpeningDKCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningDKRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D980
void mvOpeningDKAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMVOpeningDKFramesElapsed)
	{
		default:
			break;
		case 15:
			gMVOpeningDKPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMVOpeningDKPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMVOpeningDKPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMVOpeningDKFramesElapsed > 15) && (gMVOpeningDKFramesElapsed < 45))
		gMVOpeningDKPosedFighterYSpeed += -1.0F / 15.0F;

	if ((gMVOpeningDKFramesElapsed > 45) && (gMVOpeningDKFramesElapsed < 60))
		gMVOpeningDKPosedFighterYSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.y += gMVOpeningDKPosedFighterYSpeed;
}

// 0x8018DA50
void mvOpeningDKCreatePosedFighter()
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.ft_kind = nFTKindDonkey;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindDonkey, 0);
	spawn_info.figatree_heap = gMVOpeningDKFigatreeHeap;
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

// 0x8018DB50
void mvOpeningDKCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DBF0
void mvOpeningDKCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cobj->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(gMVOpeningDKFiles[1], &FILE_041_DK_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DCD8
void mvOpeningDKCreatePosedFighterBackgroundViewport()
{
	CObj *cobj;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 210.0F, 10.0F, 310.0F, 230.0F);
	cobj->flags = 5;
}

// 0x8018DD80
void mvOpeningDKMainProc(GObj* arg0)
{
	gMVOpeningDKFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTaskmanSetLoadScene();
	}

	if (gMVOpeningDKFramesElapsed == 15)
	{
		gcEjectGObj(gMVOpeningDKNameGObj);
		mvOpeningDKInitFighterStagePanel();
		mvOpeningDKCreatePosedFighterBackground();
		mvOpeningDKCreatePosedFighter();
	}

	if (gMVOpeningDKFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x22;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DE3C
void mvOpeningDKInitFramesElapsed()
{
	gMVOpeningDKFramesElapsed = 0;
}

// 0x8018DE48
void mvOpeningDKInit()
{
	gMVOpeningDKBattleState = gDefaultBattleState;
	gBattleState = &gMVOpeningDKBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindJungle;
	gBattleState->pl_count = 1;

	gBattleState->players[0].ft_kind = nFTKindDonkey;
	gBattleState->players[0].pl_kind = nFTPlayerKindKey;

	mvOpeningDKLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningDKMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
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

	gMVOpeningDKFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningDKCreateNameViewport();
	mvOpeningDKCreatePosedFighterBackgroundViewport();
	mvOpeningDKCreatePosedFighterViewport();
	mvOpeningDKDrawName();

	while (func_8000092C() < 1605U);
}

// 0x8018DFCC
void mvOpeningDKFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E0E0
syVideoSetup D_ovl37_8018E0E0 = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x8018E0FC
scRuntimeInfo D_ovl37_8018E0FC = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay37ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mvOpeningDKFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mvOpeningDKInit
};

// 0x8018E018
void intro_focus_dk_entry()
{
	D_ovl37_8018E0E0.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl37_8018E0E0);
	D_ovl37_8018E0FC.arena_size = (u32) ((uintptr_t)&lOverlay37ArenaHi - (uintptr_t)&lOverlay37ArenaLo);
	syTaskmanInit(&D_ovl37_8018E0FC);
}
