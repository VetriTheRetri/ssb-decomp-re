#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>

#include "ovl40.h"

// 8018D0C0
void mvOpeningLinkLoadFiles()
{
	rdSetup rldmSetup;

	rldmSetup.tableRomAddr = &D_NF_001AC870;
	rldmSetup.tableFileCount = &D_NF_00000854;
	rldmSetup.fileHeap = 0;
	rldmSetup.fileHeapSize = 0;
	rldmSetup.statusBuf = D_ovl40_8018E228;
	rldmSetup.statusBufSize = ARRAY_COUNT(D_ovl40_8018E228);
	rldmSetup.forceBuf = D_ovl40_8018E3A8;
	rldmSetup.forceBufSize = ARRAY_COUNT(D_ovl40_8018E3A8);
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl40_8018E0B0, ARRAY_COUNT(D_ovl40_8018E0B0), gMvOpeningLinkFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl40_8018E0B0, ARRAY_COUNT(D_ovl40_8018E0B0)), 0x10));
}

// 8018D160
void mvOpeningLinkSetNameColor(SObj* name_sobj)
{
	name_sobj->sprite.attr &= ~SP_FASTCOPY;
	name_sobj->sprite.attr |= SP_TRANSPARENT;
	name_sobj->shadow_color.r = 0xFF;
	name_sobj->shadow_color.g = 0xFF;
	name_sobj->shadow_color.b = 0xFF;
	name_sobj->sprite.red = 0xFF;
	name_sobj->sprite.green = 0xFF;
	name_sobj->sprite.blue = 0xFF;
}

// 8018D194
void mvOpeningLinkDrawName()
{
	GObj* name_gobj;
	SObj* name_sobj;
	intptr_t offsets[5] = dMvOpeningLinkNameOffsets;
	f32 x_positions[4] = dMvOpeningLinkNameCharXPositions;
	s32 i;

	gMvOpeningLinkNameGObj = name_gobj = omMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	omAddGObjRenderProc(name_gobj, func_ovl0_800CCF00, 0x1B, 0x80000000, -1);

	for (i = 0; offsets[i] != 0; i++)
	{
		name_sobj = gcAppendSObjWithSprite(name_gobj, GetAddressFromOffset(gMvOpeningLinkFilesArray[0], offsets[i]));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = x_positions[i] + 100.0F;
		name_sobj->pos.y = 100.0F;

		mvOpeningLinkSetNameColor(name_sobj);
	}
}

// 8018D2F4
void mvOpeningLinkAnimateStageCamera(GObj* camera_gobj)
{
	Camera *cam = CameraGetStruct(camera_gobj);

	if (gMvOpeningLinkFramesElapsed >= 15)
	{
		cam->vec.eye.x += (((dMvOpeningLinkCameraSettingsAdjustedEnd.eye.x - dMvOpeningLinkCameraSettingsAdjustedStart.eye.x) / 45.0F));
		cam->vec.eye.y += (((dMvOpeningLinkCameraSettingsAdjustedEnd.eye.y - dMvOpeningLinkCameraSettingsAdjustedStart.eye.y) / 45.0F));
		cam->vec.eye.z += (((dMvOpeningLinkCameraSettingsAdjustedEnd.eye.z - dMvOpeningLinkCameraSettingsAdjustedStart.eye.z) / 45.0F));
		cam->vec.at.x += (((dMvOpeningLinkCameraSettingsAdjustedEnd.at.x - dMvOpeningLinkCameraSettingsAdjustedStart.at.x) / 45.0F));
		cam->vec.at.y += (((dMvOpeningLinkCameraSettingsAdjustedEnd.at.y - dMvOpeningLinkCameraSettingsAdjustedStart.at.y) / 45.0F));
		cam->vec.at.z += (((dMvOpeningLinkCameraSettingsAdjustedEnd.at.z - dMvOpeningLinkCameraSettingsAdjustedStart.at.z) / 45.0F));
		cam->vec.up.x += (((dMvOpeningLinkCameraSettingsAdjustedEnd.upx - dMvOpeningLinkCameraSettingsAdjustedStart.upx) / 45.0F));
	}
}

// 8018D3EC
void mvOpeningLinkCreateStageViewport(Vec3f arg0)
{
	Camera *cam;

	dMvOpeningLinkCameraSettingsAdjustedStart = dMvOpeningLinkCameraSettingsStart;
	dMvOpeningLinkCameraSettingsAdjustedEnd = dMvOpeningLinkCameraSettingsEnd;

	gMvOpeningLinkStageCameraGObj = func_ovl2_8010DB2C(0);
	cam = CameraGetStruct(gMvOpeningLinkStageCameraGObj);
	func_80007080(&cam->viewport, 10.0F, 90.0F, 310.0F, 230.0F);
	cam->projection.persp.aspect = 15.0F / 7.0F;
	func_8000B39C(gMvOpeningLinkStageCameraGObj);
	omAddGObjCommonProc(gMvOpeningLinkStageCameraGObj, mvOpeningLinkAnimateStageCamera, 1, 1);

	dMvOpeningLinkCameraSettingsAdjustedStart.eye.x += arg0.x;
	dMvOpeningLinkCameraSettingsAdjustedStart.eye.y += arg0.y;
	dMvOpeningLinkCameraSettingsAdjustedStart.eye.z += arg0.z;
	dMvOpeningLinkCameraSettingsAdjustedStart.at.x += arg0.x;
	dMvOpeningLinkCameraSettingsAdjustedStart.at.y += arg0.y;
	dMvOpeningLinkCameraSettingsAdjustedStart.at.z += arg0.z;

	dMvOpeningLinkCameraSettingsAdjustedEnd.eye.x += arg0.x;
	dMvOpeningLinkCameraSettingsAdjustedEnd.eye.y += arg0.y;
	dMvOpeningLinkCameraSettingsAdjustedEnd.eye.z += arg0.z;
	dMvOpeningLinkCameraSettingsAdjustedEnd.at.x += arg0.x;
	dMvOpeningLinkCameraSettingsAdjustedEnd.at.y += arg0.y;
	dMvOpeningLinkCameraSettingsAdjustedEnd.at.z += arg0.z;

	cam->vec.eye.x = dMvOpeningLinkCameraSettingsAdjustedStart.eye.x;
	cam->vec.eye.y = dMvOpeningLinkCameraSettingsAdjustedStart.eye.y;
	cam->vec.eye.z = dMvOpeningLinkCameraSettingsAdjustedStart.eye.z;
	cam->vec.at.x = dMvOpeningLinkCameraSettingsAdjustedStart.at.x;
	cam->vec.at.y = dMvOpeningLinkCameraSettingsAdjustedStart.at.y;
	cam->vec.at.z = dMvOpeningLinkCameraSettingsAdjustedStart.at.z;
	cam->vec.up.x = dMvOpeningLinkCameraSettingsAdjustedStart.upx;
}

// 8018D5F4
void mvOpeningLinkInitFighterStagePanel()
{
	GObj* fighter_gobj;
	s32 i;
	s32 foo, bar;
	s32 pos_ids;
	Vec3f spawn_position;

	grWallpaper_SetGroundWallpaper();
	grNodeInit_SetGroundFiles();

	if (mpCollision_GetMPointCountKind(mpMPoint_Kind_Unk0x15) != 1)
	{
		while (TRUE)
		{
			gsFatalPrintF("wrong number of mapobject\n");
			smRunPrintGObjStatus();
		}
	}

	mpCollision_GetMPointIDsKind(mpMPoint_Kind_Unk0x15, &pos_ids);
	mpCollision_GetMPointPositionID(pos_ids, &spawn_position);
	mvOpeningLinkCreateStageViewport(spawn_position);
	gmRumble_SetPlayerRumble();
	ftPublicitySetup();

	for (i = 0; i < ARRAY_COUNT(gBattleState->player_block); i++)
	{
		ftCreateDesc spawn_info = dFTDefaultFighterDesc;

		if (gBattleState->player_block[i].player_kind == Pl_Kind_Not) continue;

		ftManagerSetupDataKind(gBattleState->player_block[i].character_kind);

		spawn_info.ft_kind = gBattleState->player_block[i].character_kind;
		spawn_info.pos.x = spawn_position.x;
		spawn_info.pos.y = spawn_position.y;
		spawn_info.pos.z = spawn_position.z;
		spawn_info.lr_spawn = LR_Right;
		spawn_info.team = gBattleState->player_block[i].team_index;
		spawn_info.player = i;
		spawn_info.model_lod = ftParts_LOD_HighPoly;
		spawn_info.costume = gBattleState->player_block[i].costume_index;
		spawn_info.handicap = gBattleState->player_block[i].handicap;
		spawn_info.cp_level = gBattleState->player_block[i].level;
		spawn_info.stock_count = gBattleState->stock_setting;
		spawn_info.damage = 0;
		spawn_info.pl_kind = gBattleState->player_block[i].player_kind;
		spawn_info.controller = &gPlayerControllers[i];
		spawn_info.anim_heap = ftManagerAllocAnimHeapKind(gBattleState->player_block[i].character_kind);

		gMvOpeningLinkStageFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

		ftCommon_ClearPlayerMatchStats(i, fighter_gobj);
		ftCommon_SetHowToPlayInputSeq(fighter_gobj, dMvOpeningLinkInputSeq);
	}
}

// 8018D824
void mvOpeningLinkRenderPosedFighterBackground(GObj *gobj)
{
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
	gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 150, 120, 180, 255);
	gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE,  0, 0, 0, PRIMITIVE);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
	gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 90);
	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 8018D924
void mvOpeningLinkCreatePosedFighterBackground()
{
	omAddGObjRenderProc(omMakeGObjSPAfter(0, 0, 0x13, 0x80000000), mvOpeningLinkRenderPosedFighterBackground, 0x1C, 0x80000000, -1);
}

// 8018D970
void mvOpeningLinkAnimatePosedFighter(GObj* fighter_gobj)
{
	switch (gMvOpeningLinkFramesElapsed)
	{
		default:
			break;
		case 15:
			gMvOpeningLinkPosedFighterXSpeed = 17.0F;
			break;
		case 45:
			gMvOpeningLinkPosedFighterXSpeed = 15.0F;
			break;
		case 60:
			gMvOpeningLinkPosedFighterXSpeed = 0.0F;
			break;
	}

	if ((gMvOpeningLinkFramesElapsed > 15) && (gMvOpeningLinkFramesElapsed < 45))
		gMvOpeningLinkPosedFighterXSpeed += -1.0F / 15.0F;
	if ((gMvOpeningLinkFramesElapsed > 45) && (gMvOpeningLinkFramesElapsed < 60))
		gMvOpeningLinkPosedFighterXSpeed += -1.0F;

	DObjGetStruct(fighter_gobj)->translate.vec.f.x -= gMvOpeningLinkPosedFighterXSpeed;
}

// 8018DA40
void mvOpeningLinkCreatePosedFighter()
{
	GObj* fighter_gobj;
	ftCreateDesc spawn_info = dFTDefaultFighterDesc;

	spawn_info.ft_kind = Ft_Kind_Link;
	spawn_info.costume = ftCostume_GetIndexFFA(Ft_Kind_Link, 0);
	spawn_info.anim_heap = gMvOpeningLinkAnimHeap;
	spawn_info.pos.x = 600.0f;
	spawn_info.pos.y = 0.0f;
	spawn_info.pos.z = 0.0f;

	fighter_gobj = ftManagerMakeFighter(&spawn_info);
	func_ovl1_803905CC(fighter_gobj, 0x1000C);
	omMoveGObjDL(fighter_gobj, 0x1A, -1);
	omAddGObjCommonProc(fighter_gobj, mvOpeningLinkAnimatePosedFighter, 1, 1);

	DObjGetStruct(fighter_gobj)->scale.vec.f.x = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = 1.0f;
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = 1.0f;
}

// 8018DB40
void mvOpeningLinkCreateNameViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_ovl0_800CD2CC, 0x50, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 8018DBE0
void mvOpeningLinkCreatePosedFighterViewport()
{
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0xA, 0x04000000, -1, 1, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 90.0F);
	cam->projection.persp.aspect = 3.75F;
	func_8000FA3C(cam, GetAddressFromOffset(gMvOpeningLinkFilesArray[1], &FILE_041_LINK_CAMERA_PARAMS_OFFSET), 0.0F);
	omAddGObjCommonProc(camera_gobj, func_80010580, 1, 1);
}

// 8018DCD0
void mvOpeningLinkCreatePosedFighterBackgroundViewport()
{
	Camera *cam;
	GObj *camera_gobj = func_8000B93C(0x401, NULL, 0x10, 0x80000000U, func_80017EC0, 0x14, 0x10000000, -1, 0, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 90.0F);
	cam->flags = 5;
}

// 8018DD80
void mvOpeningLinkMainProc(GObj* arg0)
{
	gMvOpeningLinkFramesElapsed += 1;

	if (func_ovl1_8039076C(A_BUTTON | B_BUTTON | START_BUTTON) != FALSE)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 1U;
		leoInitUnit_atten();
	}

	if (gMvOpeningLinkFramesElapsed == 15)
	{
		omEjectGObj(gMvOpeningLinkNameGObj);
		mvOpeningLinkInitFighterStagePanel();
		mvOpeningLinkCreatePosedFighterBackground();
		mvOpeningLinkCreatePosedFighter();
	}

	if (gMvOpeningLinkFramesElapsed == 60)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = 0x20;
		leoInitUnit_atten();
	}
}

// 8018DE3C
void mvOpeningLinkInitFramesElapsed()
{
	gMvOpeningLinkFramesElapsed = 0;
}

// 8018DE48
void mvOpeningLinkInit()
{
	gMvOpeningLinkBattleState = gDefaultBattleState;
	gBattleState = &gMvOpeningLinkBattleState;

	gBattleState->game_type = gmMatch_GameType_Intro;

	gBattleState->gr_kind = Gr_Kind_Hyrule;
	gBattleState->pl_count = 1;

	gBattleState->player_block[0].character_kind = Ft_Kind_Link;
	gBattleState->player_block[0].player_kind = Pl_Kind_Key;

	mvOpeningLinkLoadFiles();
	omMakeGObjSPAfter(0x3F7, mvOpeningLinkMainProc, 0xD, 0x80000000);
	func_8000B9FC(9, 0x80000000, 0x64, 3, 0xFF);
	mvOpeningLinkInitFramesElapsed();
	func_ovl2_80115890();
	func_ovl2_800EC130();
	mpCollision_InitMapCollisionData();
	cmManager_SetViewportCoordinates(10, 10, 310, 230);
	cmManager_MakeWallpaperCamera();
	ftManagerAllocFighter(3, 2);
	wpManagerAllocWeapons();
	itManagerInitItems();
	efManager_AllocUserData();
	ftManagerSetupDataKind(Ft_Kind_Link);

	gMvOpeningLinkAnimHeap = gsMemoryAlloc(gFTAnimHeapSize, 0x10);
	mvOpeningLinkCreateNameViewport();
	mvOpeningLinkCreatePosedFighterBackgroundViewport();
	mvOpeningLinkCreatePosedFighterViewport();
	mvOpeningLinkDrawName();

	while (func_8000092C() < 1695U)
	{
		// sleep
	}
}

// 8018DFCC
void gMvOpeningLinkSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRender_Lights_DisplayLightReflect(display_list, gMapLightAngleX, gMapLightAngleY);
}

// 8018E018
void intro_focus_link_entry()
{
	D_ovl40_8018E0DC.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
	func_80007024(&D_ovl40_8018E0DC);
	D_ovl40_8018E0F8.arena_size = (u32) ((uintptr_t)&lOverlay40ArenaHi - (uintptr_t)&lOverlay40ArenaLo);
	gsGTLSceneInit(&D_ovl40_8018E0F8);
}