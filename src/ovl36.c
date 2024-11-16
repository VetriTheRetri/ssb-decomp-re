#include <ft/fighter.h>
#include <sc/scene.h>
#include <sys/video.h>
#include <lb/library.h>

// Externs
extern intptr_t lOverlay36ArenaLo;  // 0x8018E620
extern intptr_t lOverlay36ArenaHi;  // 0x803903E0

extern void syRdpSetViewport(void*, f32, f32, f32, f32);


// Offsets
extern intptr_t FILE_041_MARIO_CAMERA_PARAMS_OFFSET; // 00000000 file 0x041 offset for Mario's fighter pose camera settings


// DATA
// 0x8018E090
CObjDesc dMVOpeningMarioCObjDescStart = {

	{ 300.0f, 500.0f, 1700.0f },
	{ 0.0f, 100.0f, 0.0f },
	0.15f
};

// 0x8018E0AC
CObjDesc dMVOpeningMarioCObjDescEnd = {

	{ 800.0f, 500.0f, 1300.0f },
	{ 100.0f, 100.0f, 0.0f },
	0.15f
};

// 0x8018E0C8
FTKeyEvent dMVOpeningMarioGameKey[] = {

	FTKEY_EVENT_STICK(0, 0, 0),                         // 0x2000, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 11),                          // 0x100B, 0x0000
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_BUTTON(0, 20),                          // 0x1014, 0x0000
	FTKEY_EVENT_STICK(0, -I_CONTROLLER_RANGE_MAX, 0),   // 0x2000, 0x00B0
	FTKEY_EVENT_BUTTON(A_BUTTON, 1),                    // 0x1001, 0x8000
	FTKEY_EVENT_END()                                   // 0x0000
};

// 0x8018E0E8
u32 D_ovl36_8018E0E8[2] = {

	0x25, 0x41
};


// BSS
// 0x8018E200
s32 D_ovl36_8018E200;

// 0x8018E204
s32 D_ovl36_8018E204;

// 0x8018E208
s32 sMVOpeningMarioTotalTimeTics;

// 0x8018E20C
GObj* sMVOpeningMarioNameGObj;

// 0x8018E210
GObj* sMVOpeningMarioFighterGObj;

// 0x8018E214
s32 D_ovl36_8018E214;

// 0x8018E218
GObj* sMVOpeningMarioStageCameraGObj;

// 0x8018E21C
void* sMVOpeningMarioFigatreeHeap;

// 0x8018E220
f32 sMVOpeningMarioPosedFighterSpeed;

// 0x8018E224
// s32 D_ovl36_8018E224;

// 0x8018E228
CObjDesc dMVOpeningMarioAdjustedStartCObjDesc;

// 0x8018E248
CObjDesc dMVOpeningMarioAdjustedEndCObjDesc;

// 0x8018E268
LBFileNode D_ovl36_8018E268[48];

// 0x8018E3E8
LBFileNode D_ovl36_8018E3E8[7];

// 0x8018E420
uintptr_t sMVOpeningMarioFiles[2];

// 0x8018E428
SCBattleState sMVOpeningMarioBattleState;


// 0x8018D0C0
void mvOpeningMarioLoadFiles()
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = D_ovl36_8018E268;
	rl_setup.status_buffer_size = ARRAY_COUNT(D_ovl36_8018E268);
	rl_setup.force_status_buffer = D_ovl36_8018E3E8;
	rl_setup.force_status_buffer_size = ARRAY_COUNT(D_ovl36_8018E3E8);
	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8), sMVOpeningMarioFiles, syTaskmanMalloc(lbRelocGetAllocSize(D_ovl36_8018E0E8, ARRAY_COUNT(D_ovl36_8018E0E8)), 0x10));
}

// 0x8018D160
void mvOpeningMarioSetNameColor(SObj* name_sobj)
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
void mvOpeningMarioMakeName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[6] = {

		0x00003980, 0x000005e0, 0x00005418,
		0x000026b8, 0x000044b0, 0x00000000
	};
	f32 x_positions[5] = {

		0.0f, 40.0f, 80.0f, 110.0f, 125.0f
	};
	s32 i;

	sMVOpeningMarioNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x11, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1B, GOBJ_PRIORITY_DEFAULT, ~0);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(sMVOpeningMarioFiles[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 80.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningMarioSetNameColor(name_sobj);
	}
}

// 0x8018D314
void mvOpeningMarioAnimateStageCamera(GObj* camera_gobj)
{
	CObj *cobj = CObjGetStruct(camera_gobj);

	if (sMVOpeningMarioTotalTimeTics >= 15)
	{
		cobj->vec.eye.x += (((dMVOpeningMarioAdjustedEndCObjDesc.eye.x - dMVOpeningMarioAdjustedStartCObjDesc.eye.x) / 45.0F));
		cobj->vec.eye.y += (((dMVOpeningMarioAdjustedEndCObjDesc.eye.y - dMVOpeningMarioAdjustedStartCObjDesc.eye.y) / 45.0F));
		cobj->vec.eye.z += (((dMVOpeningMarioAdjustedEndCObjDesc.eye.z - dMVOpeningMarioAdjustedStartCObjDesc.eye.z) / 45.0F));
		cobj->vec.at.x += (((dMVOpeningMarioAdjustedEndCObjDesc.at.x - dMVOpeningMarioAdjustedStartCObjDesc.at.x) / 45.0F));
		cobj->vec.at.y += (((dMVOpeningMarioAdjustedEndCObjDesc.at.y - dMVOpeningMarioAdjustedStartCObjDesc.at.y) / 45.0F));
		cobj->vec.at.z += (((dMVOpeningMarioAdjustedEndCObjDesc.at.z - dMVOpeningMarioAdjustedStartCObjDesc.at.z) / 45.0F));
		cobj->vec.up.x += (((dMVOpeningMarioAdjustedEndCObjDesc.upx - dMVOpeningMarioAdjustedStartCObjDesc.upx) / 45.0F));
	}
}

// 0x8018D40C
void mvOpeningMarioCreateStageViewport(Vec3f arg0)
{
	CObj *cobj;

	dMVOpeningMarioAdjustedStartCObjDesc = dMVOpeningMarioCObjDescStart;
	dMVOpeningMarioAdjustedEndCObjDesc = dMVOpeningMarioCObjDescEnd;

	sMVOpeningMarioStageCameraGObj = func_ovl2_8010DB2C(0);
	cobj = CObjGetStruct(sMVOpeningMarioStageCameraGObj);
	syRdpSetViewport(&cobj->viewport, 110.0F, 10.0F, 310.0F, 230.0F);
	cobj->projection.persp.aspect = 10.0F / 11.0F;
	gcEndProcessAll(sMVOpeningMarioStageCameraGObj);
	gcAddGObjProcess(sMVOpeningMarioStageCameraGObj, mvOpeningMarioAnimateStageCamera, 1, 1);

	dMVOpeningMarioAdjustedStartCObjDesc.eye.x += arg0.x;
	dMVOpeningMarioAdjustedStartCObjDesc.eye.y += arg0.y;
	dMVOpeningMarioAdjustedStartCObjDesc.eye.z += arg0.z;
	dMVOpeningMarioAdjustedStartCObjDesc.at.x += arg0.x;
	dMVOpeningMarioAdjustedStartCObjDesc.at.y += arg0.y;
	dMVOpeningMarioAdjustedStartCObjDesc.at.z += arg0.z;

	dMVOpeningMarioAdjustedEndCObjDesc.eye.x += arg0.x;
	dMVOpeningMarioAdjustedEndCObjDesc.eye.y += arg0.y;
	dMVOpeningMarioAdjustedEndCObjDesc.eye.z += arg0.z;
	dMVOpeningMarioAdjustedEndCObjDesc.at.x += arg0.x;
	dMVOpeningMarioAdjustedEndCObjDesc.at.y += arg0.y;
	dMVOpeningMarioAdjustedEndCObjDesc.at.z += arg0.z;

	cobj->vec.eye.x = dMVOpeningMarioAdjustedStartCObjDesc.eye.x;
	cobj->vec.eye.y = dMVOpeningMarioAdjustedStartCObjDesc.eye.y;
	cobj->vec.eye.z = dMVOpeningMarioAdjustedStartCObjDesc.eye.z;
	cobj->vec.at.x = dMVOpeningMarioAdjustedStartCObjDesc.at.x;
	cobj->vec.at.y = dMVOpeningMarioAdjustedStartCObjDesc.at.y;
	cobj->vec.at.z = dMVOpeningMarioAdjustedStartCObjDesc.at.z;
	cobj->vec.up.x = dMVOpeningMarioAdjustedStartCObjDesc.upx;
}

// 0x8018D614
void mvOpeningMarioInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i;
	s32 foo;
	s32 pos_ids;
	Vec3f spawn_position;

	grWallpaperMakeDecideKind();
	grCommonSetupInitAll();

	if (mpCollisionGetMapObjCountKind(nMPMapObjKindMovieStart1) != 1)
	{
		while (TRUE)
		{
			syErrorPrintf("wrong number of mapobject\n");
			scManagerRunPrintGObjStatus();
		}
	}

	mpCollisionGetMapObjIDsKind(nMPMapObjKindMovieStart1, &pos_ids);
	mpCollisionGetMapObjPositionID(pos_ids, &spawn_position);
	mvOpeningMarioCreateStageViewport(spawn_position);
	gmRumbleMakeActor();
	ftPublicityMakeActor();

	for (i = 0; i < ARRAY_COUNT(gSCManagerBattleState->players); i++)
	{
		FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

		if (gSCManagerBattleState->players[i].pkind == nFTPlayerKindNot) continue;

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
		spawn_info.controller = &gSYControllerDevices[i];
		spawn_info.figatree_heap = ftManagerAllocFigatreeHeapKind(gSCManagerBattleState->players[i].fkind);

		sMVOpeningMarioFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftParamInitPlayerBattleStats(i, fighter_gobj);
		ftParamSetKey(fighter_gobj, dMVOpeningMarioGameKey);
	}
}

// 0x8018D844
void mvOpeningMarioRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 160, 170, 255, 255);
	gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gSYTaskmanDLHeads[0]++, 10, 10, 110, 230);
	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x8018D944
void mvOpeningMarioCreatePosedFighterBackground()
{
	gcAddGObjDisplay(gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningMarioRenderPosedFighterBackground, 0x1C, GOBJ_PRIORITY_DEFAULT, ~0);
}

// 0x8018D990
void mvOpeningMarioAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (sMVOpeningMarioTotalTimeTics)
	{
		default:
			break;
		case 15:
			sMVOpeningMarioPosedFighterSpeed = 17.0F;
			break;
		case 45:
			sMVOpeningMarioPosedFighterSpeed = 15.0F;
			break;
		case 60:
			sMVOpeningMarioPosedFighterSpeed = 0.0F;
			break;
	}

	if ((sMVOpeningMarioTotalTimeTics > 15) && (sMVOpeningMarioTotalTimeTics < 45))
	{
		sMVOpeningMarioPosedFighterSpeed += -1.0F / 15.0F;
	}
	if ((sMVOpeningMarioTotalTimeTics > 45) && (sMVOpeningMarioTotalTimeTics < 60))
	{
		sMVOpeningMarioPosedFighterSpeed += -1.0F;
	}

	DObjGetStruct(fighter_gobj)->translate.vec.f.y -= sMVOpeningMarioPosedFighterSpeed;
}

// 0x8018DA60
void mvOpeningMarioCreatePosedFighter()
{
	GObj* fighter_gobj;
	FTCreateDesc spawn_info = dFTManagerDefaultFighterDesc;

	spawn_info.fkind = nFTKindMario;
	spawn_info.costume = ftParamGetCostumeCommonID(nFTKindMario, 0);
	spawn_info.figatree_heap = sMVOpeningMarioFigatreeHeap;
	spawn_info.pos.x = 0.0f;
	spawn_info.pos.y = 600.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	scSubsysFighterSetStatus(fighter_gobj, 0x1000C);
	gcMoveGObjDL(fighter_gobj, 0x1A, -1);
	gcAddGObjProcess(fighter_gobj, mvOpeningMarioAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 0x8018DB5C
void mvOpeningMarioCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonDrawSprite, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x8018DBFC
void mvOpeningMarioCreatePosedFighterViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cobj->projection.persp.aspect = 5.0F / 11.0F;
	gcAddCameraCamAnimJoint(cobj, GetAddressFromOffset(sMVOpeningMarioFiles[1], &FILE_041_MARIO_CAMERA_PARAMS_OFFSET), 0.0F);
	gcAddGObjProcess(camera_gobj, gcPlayCamAnim, 1, 1);
}

// 0x8018DCEC
void mvOpeningMarioCreatePosedFighterBackgroundViewport()
{
	CObj *cobj;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 110.0F, 230.0F);
	cobj->flags = 5;
}

// 0x8018DD9C
void mvOpeningMarioMainProc(GObj* arg0)
{

	sMVOpeningMarioTotalTimeTics += 1;

	if (scSubsysControllerGetPlayerTapButtons(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 1U;
		syTaskmanSetLoadScene();
	}

	if (sMVOpeningMarioTotalTimeTics == 15)
	{
		gcEjectGObj(sMVOpeningMarioNameGObj);
		mvOpeningMarioInitFighterStagePanel();
		mvOpeningMarioCreatePosedFighterBackground();
		mvOpeningMarioCreatePosedFighter();
	}

	if (sMVOpeningMarioTotalTimeTics == 60)
	{
		gSCManagerSceneData.scene_prev = gSCManagerSceneData.scene_curr;
		gSCManagerSceneData.scene_curr = 0x1F;
		syTaskmanSetLoadScene();
	}
}

// 0x8018DE58
void mvOpeningMarioInitTotalTimeTics()
{
	sMVOpeningMarioTotalTimeTics = 0;
}

// 0x8018DE64
void mvOpeningMarioInit()
{
	sMVOpeningMarioBattleState = dSCManagerDefaultBattleState;
	gSCManagerBattleState = &sMVOpeningMarioBattleState;

	gSCManagerBattleState->game_type = nSCBattleGameTypeMovie;

	gSCManagerBattleState->gkind = nGRKindCastle;
	gSCManagerBattleState->pl_count = 1;

	gSCManagerBattleState->players[0].fkind = nFTKindMario;
	gSCManagerBattleState->players[0].pkind = nFTPlayerKindKey;

	mvOpeningMarioLoadFiles();
	gcMakeGObjSPAfter(0x3F7, mvOpeningMarioMainProc, 0xD, 0x80000000);
	gcMakeDefaultCameraGObj(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningMarioInitTotalTimeTics();
	efParticleInitAll();
	ftParamInitGame();
	mpCollisionInitGroundData();
	cmManagerSetViewportDimensions(10, 10, 310, 230);
	cmManagerMakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManagerInitEffects();
	ftManagerSetupFilesAllKind(nFTKindMario);

	sMVOpeningMarioFigatreeHeap = syTaskmanMalloc(gFTManagerFigatreeHeapSize, 0x10);
	mvOpeningMarioCreateNameViewport();
	mvOpeningMarioCreatePosedFighterBackgroundViewport();
	mvOpeningMarioCreatePosedFighterViewport();
	mvOpeningMarioMakeName();

	while (func_8000092C() < 1515U);
}

// 0x8018DFE4
void mvOpeningMarioFuncLights(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftDisplayLightsDrawReflect(display_list, gMPCollisionLightAngleX, gMPCollisionLightAngleY);
}

// 0x8018E11C
SYVideoSetup D_ovl36_8018E11C = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

// 0x8018E138
scRuntimeInfo D_ovl36_8018E138 = {
	0x00000000, 0x8000a5e4,
	0x800a26b8, &lOverlay36ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00004000, 0x00002000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000c000,
	mvOpeningMarioFuncLights, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800d5cac, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006c,
	0x00000000, 0x00000090,
	mvOpeningMarioInit
};

// 0x8018E030
void intro_focus_mario_entry()
{
	D_ovl36_8018E11C.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl36_8018E11C);
	D_ovl36_8018E138.arena_size = (u32) ((uintptr_t)&lOverlay36ArenaHi - (uintptr_t)&lOverlay36ArenaLo);
	syTaskmanRun(&D_ovl36_8018E138);
}
