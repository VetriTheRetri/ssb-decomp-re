#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <lb/library.h>
#include <sys/video.h>


// Externs
extern GObj* D_ovl2_801313E4;
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay38ArenaLo;  // 0x8018E690
extern intptr_t lOverlay38ArenaHi;  // 0x803903E0
extern intptr_t FILE_041_SAMUS_CAMERA_PARAMS_OFFSET; // file 0x041 offset for Samus's fighter pose camera settings

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

extern void ftDisplayLightsDrawReflect(Gfx**, f32, f32);


// Data
// 0x8018E120
CObjDesc dMVOpeningSamusCObjDescStart = {

	400.0, 1100.0, 0.0,
	0.0, 200.0, 0.0,
	0.6
};

// 0x8018E13C
CObjDesc dMVOpeningSamusCObjDescEnd = {

	1600.0, 230.0, 200.0,
	0.0, 200.0, 0.0,
	0.6
};

// 0x8018E158
FTKeyCommand dMVOpeningSamusInputSeq[] =
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
s32 gMVOpeningSamusFramesElapsed;

// 0x8018E27C
GObj* gMVOpeningSamusNameGObj;

// 0x8018E280
GObj* gMVOpeningSamusStageFighterGObj;

// 0x8018E284
s32 D_ovl38_8018E284;

// 0x8018E288
GObj* gMVOpeningSamusStageCameraGObj;

// 0x8018E28C
void* gMVOpeningSamusFigatreeHeap;

// 0x8018E290
f32 gMVOpeningSamusPosedFighterYSpeed;

// 0x8018E294
s32 D_ovl38_8018E294;

// 0x8018E298
CObjDesc dMVOpeningSamusCObjDescAdjustedStart;

// 0x8018E2B8
CObjDesc dMVOpeningSamusCObjDescAdjustedEnd;

// 0x8018E2D8
LBFileNode D_ovl38_8018E2D8[48];

// 0x8018E458
LBFileNode D_ovl38_8018E458[7];

// 0x8018E490
uintptr_t gMVOpeningSamusFiles[2];

// 0x8018E498
SCBattleState gMVOpeningSamusBattleState;


// 0x8018D0C0
void mvOpeningSamusLoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (uintptr_t)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = (LBFileNode*) &D_ovl38_8018E2D8;
	rl_setup.status_buffer_size = 0x30;
	rl_setup.force_status_buffer = (LBFileNode*) &D_ovl38_8018E458;
	rl_setup.force_status_buffer_size = 7;
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl38_8018E164, ARRAY_COUNT(D_ovl38_8018E164), gMVOpeningSamusFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl38_8018E164, ARRAY_COUNT(D_ovl38_8018E164)), 0x10));
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

	gMVOpeningSamusNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMVOpeningSamusFiles[0], offsets[i]));
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
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (gMVOpeningSamusFramesElapsed >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningSamusCObjDescAdjustedEnd.eye.x - dMVOpeningSamusCObjDescAdjustedStart.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningSamusCObjDescAdjustedEnd.eye.y - dMVOpeningSamusCObjDescAdjustedStart.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningSamusCObjDescAdjustedEnd.eye.z - dMVOpeningSamusCObjDescAdjustedStart.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningSamusCObjDescAdjustedEnd.at.x - dMVOpeningSamusCObjDescAdjustedStart.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningSamusCObjDescAdjustedEnd.at.y - dMVOpeningSamusCObjDescAdjustedStart.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningSamusCObjDescAdjustedEnd.at.z - dMVOpeningSamusCObjDescAdjustedStart.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningSamusCObjDescAdjustedEnd.upx - dMVOpeningSamusCObjDescAdjustedStart.upx) / 45.0F));
	}
}

// 0x8018D40C
void mvOpeningSamusCreateStageViewport(Vec3f arg0)
{
	CObj *cobj;

	dMVOpeningSamusCObjDescAdjustedStart = dMVOpeningSamusCObjDescStart;
	dMVOpeningSamusCObjDescAdjustedEnd = dMVOpeningSamusCObjDescEnd;

	gMVOpeningSamusStageCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(gMVOpeningSamusStageCameraGObj);
	syRdpSetViewport(&cobj->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cobj->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(gMVOpeningSamusStageCameraGObj);
	gcAddGObjProcess(gMVOpeningSamusStageCameraGObj, mvOpeningSamusAnimateStageCamera, 1, 1);

	dMVOpeningSamusCObjDescAdjustedStart.eye.x += arg0.x;
	dMVOpeningSamusCObjDescAdjustedStart.eye.y += arg0.y;
	dMVOpeningSamusCObjDescAdjustedStart.eye.z += arg0.z;
	dMVOpeningSamusCObjDescAdjustedStart.at.x += arg0.x;
	dMVOpeningSamusCObjDescAdjustedStart.at.y += arg0.y;
	dMVOpeningSamusCObjDescAdjustedStart.at.z += arg0.z;

	dMVOpeningSamusCObjDescAdjustedEnd.eye.x += arg0.x;
	dMVOpeningSamusCObjDescAdjustedEnd.eye.y += arg0.y;
	dMVOpeningSamusCObjDescAdjustedEnd.eye.z += arg0.z;
	dMVOpeningSamusCObjDescAdjustedEnd.at.x += arg0.x;
	dMVOpeningSamusCObjDescAdjustedEnd.at.y += arg0.y;
	dMVOpeningSamusCObjDescAdjustedEnd.at.z += arg0.z;

	cobj->vec.eye.x = dMVOpeningSamusCObjDescAdjustedStart.eye.x;
	cobj->vec.eye.y = dMVOpeningSamusCObjDescAdjustedStart.eye.y;
	cobj->vec.eye.z = dMVOpeningSamusCObjDescAdjustedStart.eye.z;
	cobj->vec.at.x = dMVOpeningSamusCObjDescAdjustedStart.at.x;
	cobj->vec.at.y = dMVOpeningSamusCObjDescAdjustedStart.at.y;
	cobj->vec.at.z = dMVOpeningSamusCObjDescAdjustedStart.at.z;
	cobj->vec.up.x = dMVOpeningSamusCObjDescAdjustedStart.upx;
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

	grWallpaperMakeDecideKind();
	grCommonSetupInitAll();

	next_dobj = stage_dobj = DObjGetStruct(D_ovl2_801313E4);

	// This fixes the spot light things on Zebes
	while (next_dobj != NULL)
	{
		for (j = 0; j < next_dobj->xobjs_num; j++)
		{
			if (next_dobj->xobjs[j]->kind == 0x30)
				next_dobj->xobjs[j]->kind = 0x25;
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

		gMVOpeningSamusStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningSamusInputSeq);
	}
}

// 0x8018D8B0
void mvOpeningSamusRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0, 0, 80, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 110, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D9AC
void mvOpeningSamusCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningSamusRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 0x8018D9F8
void mvOpeningSamusAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMVOpeningSamusFramesElapsed)
	{
		default:
			break;
		case 15:
			gMVOpeningSamusPosedFighterYSpeed = 17.0F;
			break;
		case 45:
			gMVOpeningSamusPosedFighterYSpeed = 15.0F;
			break;
		case 60:
			gMVOpeningSamusPosedFighterYSpeed = 0.0F;
			break;
	}

	if ((gMVOpeningSamusFramesElapsed > 15) && (gMVOpeningSamusFramesElapsed < 45))
		gMVOpeningSamusPosedFighterYSpeed += -1.0F / 15.0F;

	if ((gMVOpeningSamusFramesElapsed > 45) && (gMVOpeningSamusFramesElapsed < 60))
		gMVOpeningSamusPosedFighterYSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= gMVOpeningSamusPosedFighterYSpeed;
}

// 0x8018DAC8
void mvOpeningSamusCreatePosedFighter()
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = nFTKindSamus;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindSamus, 0);
	spawn_info.figatree_heap = gMVOpeningSamusFigatreeHeap;
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
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DC68
void mvOpeningSamusCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cobj->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(gMVOpeningSamusFiles[1], &FILE_041_SAMUS_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DD58
void mvOpeningSamusCreatePosedFighterBackgroundViewport()
{
	CObj *cobj;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cobj->flags = 5;
}

// 0x8018DE08
void mvOpeningSamusMainProc(GObj* arg0)
{

	gMVOpeningSamusFramesElapsed += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		syTaskmanSetLoadScene();
	}

	if (gMVOpeningSamusFramesElapsed == 15)
	{
		gcEjectGObj(gMVOpeningSamusNameGObj);
		mvOpeningSamusInitFighterStagePanel();
		mvOpeningSamusCreatePosedFighterBackground();
		mvOpeningSamusCreatePosedFighter();
	}

	if (gMVOpeningSamusFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x23;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DEC4
void mvOpeningSamusInitFramesElapsed()
{
	gMVOpeningSamusFramesElapsed = 0;
}

// 0x8018DED0
void mvOpeningSamusInit()
{
	gMVOpeningSamusBattleState = gDefaultBattleState;
	gBattleState = &gMVOpeningSamusBattleState;

	gBattleState->game_type = nSCBattleGameTypeOpening;

	gBattleState->gr_kind = nGRKindZebes;
	gBattleState->pl_count = 1;

	gBattleState->players[0].fkind = nFTKindSamus;
	gBattleState->players[0].pkind = nFTPlayerKindKey;

	mvOpeningSamusLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningSamusMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningSamusInitFramesElapsed();
	efParticleInitAll();
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

	gMVOpeningSamusFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
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
syVideoSetup D_ovl38_8018E198 = {

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
	D_ovl38_8018E198.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl38_8018E198);
	D_ovl38_8018E1B4.arena_size = (u32) ((uintptr_t)&lOverlay38ArenaHi - (uintptr_t)&lOverlay38ArenaLo);
	syTaskmanInit(&D_ovl38_8018E1B4);
}
